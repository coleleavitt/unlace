__int64 __fastcall CoinLpIO::setLpDataWithoutRowAndColNames(
        CoinLpIO *this,
        const CoinPackedMatrix *a2,
        const double *a3,
        const double *a4,
        double *a5,
        const char *a6,
        double *a7,
        double *a8)
{
  double *v9; // [rsp+10h] [rbp-10h] BYREF

  v9 = a5;
  return CoinLpIO::setLpDataWithoutRowAndColNames(this, a2, a3, a4, (const double **)&v9, 1, a6, a7, a8);
}

