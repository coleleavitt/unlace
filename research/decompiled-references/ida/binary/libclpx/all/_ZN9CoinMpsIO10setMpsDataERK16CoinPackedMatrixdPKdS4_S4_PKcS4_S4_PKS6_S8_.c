__int64 __fastcall CoinMpsIO::setMpsData(
        CoinMpsIO *this,
        const CoinPackedMatrix *a2,
        double a3,
        const double *a4,
        const double *a5,
        const double *a6,
        const char *a7,
        double *a8,
        double *a9,
        char **a10,
        char **a11)
{
  CoinMpsIO::setMpsDataWithoutRowAndColNames(this, a2, a3, a4, a5, a6, a7, a8, a9);
  return CoinMpsIO::setMpsDataColAndRowNames(this, (const char *const *)a10, (const char *const *)a11);
}

