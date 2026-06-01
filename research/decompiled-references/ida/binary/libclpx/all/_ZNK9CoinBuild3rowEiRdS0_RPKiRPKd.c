__int64 __fastcall CoinBuild::row(CoinBuild *this, int a2, double *a3, double *a4, const int **a5, const double **a6)
{
  double v11[4]; // [rsp+18h] [rbp-20h] BYREF

  CoinBuild::setMutableCurrent(this, a2);
  return CoinBuild::currentItem(this, a3, a4, v11, a5, a6);
}

