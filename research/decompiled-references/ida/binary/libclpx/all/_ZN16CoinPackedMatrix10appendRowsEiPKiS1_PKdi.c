__int64 __fastcall CoinPackedMatrix::appendRows(
        CoinPackedMatrix *this,
        int a2,
        const int *a3,
        const int *a4,
        const double *a5,
        int a6)
{
  if ( *((_BYTE *)this + 8) )
    return CoinPackedMatrix::appendMinor(this, a2, a3, a4, a5, a6);
  else
    return CoinPackedMatrix::appendMajor(this, a2, a3, a4, a5, a6);
}

