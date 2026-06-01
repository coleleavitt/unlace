__int64 __fastcall CoinBuild::addColumn(
        CoinBuild *this,
        int a2,
        const int *a3,
        const double *a4,
        double a5,
        double a6,
        double a7)
{
  int v7; // eax

  v7 = *((_DWORD *)this + 10);
  if ( v7 < 0 )
  {
    *((_DWORD *)this + 10) = 1;
  }
  else if ( !v7 )
  {
    puts("CoinBuild:: unable to add a column in row mode");
    abort();
  }
  return CoinBuild::addItem(this, a2, a3, a4, a5, a6, a7);
}

