__int64 __fastcall CoinMpsIO::setMpsData(
        CoinMpsIO *a1,
        const CoinPackedMatrix *a2,
        const double *a3,
        const double *a4,
        const double *a5,
        const char *a6,
        double a7,
        double *a8,
        double *a9,
        __int64 a10,
        __int64 a11)
{
  CoinMpsIO::setMpsDataWithoutRowAndColNames(a1, a2, a7, a3, a4, a5, a6, a8, a9);
  return CoinMpsIO::setMpsDataColAndRowNames(a1, a10, a11);
}

