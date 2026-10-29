__int64 __fastcall CoinPackedMatrix::copyOf(
        CoinPackedMatrix *this,
        bool a2,
        int a3,
        int a4,
        int a5,
        const double *a6,
        double a7,
        double a8,
        int *a9,
        int *a10,
        int *a11)
{
  CoinPackedMatrix::gutsOfDestructor(this);
  return CoinPackedMatrix::gutsOfCopyOf(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

