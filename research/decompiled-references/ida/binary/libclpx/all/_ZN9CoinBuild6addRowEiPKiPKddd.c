int __fastcall CoinBuild::addRow(CoinBuild *this, int a2, const int *a3, const double *a4, double a5, double a6)
{
  int v6; // eax

  v6 = *((_DWORD *)this + 10);
  if ( v6 < 0 )
  {
    *((_DWORD *)this + 10) = 0;
    if ( a2 >= 0 )
      return CoinBuild::addItem(this, a2, a3, a4, a5, a6, 0.0);
  }
  else
  {
    if ( v6 == 1 )
    {
      puts("CoinBuild:: unable to add a row in column mode");
      abort();
    }
    if ( a2 >= 0 )
      return CoinBuild::addItem(this, a2, a3, a4, a5, a6, 0.0);
  }
  printf("bad number %d\n", a2);
  CoinBuild::addItem(this, a2, a3, a4, a5, a6, 0.0);
  return printf("bad number %d\n", a2);
}

