#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
	cout<<"Printing of a single Triangle   "<< endl;
	cout << "Enter number of rows: ";
	cin >> n;
	for (i = 0; i <= n; i++)
	{
		for (j = 1; j <= n - i; ++j)
		{
			cout << " ";
		}
			for (int k = 1; k <=i; k++)
			{
				cout << "* ";
			}
		
		cout << endl;
	}
	system("pause");
	return 0;
}
