__int64 __fastcall CoinBuild::column(
        CoinBuild *this,
        int a2,
        double *a3,
        double *a4,
        double *a5,
        const int **a6,
        double **a7)
{
  CoinBuild::setMutableCurrent(this, a2);
  return CoinBuild::currentItem(this, a3, a4, a5, a6, (const double **)a7);
}

