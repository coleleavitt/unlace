__int64 __fastcall CoinPackedMatrix::appendCol(CoinPackedMatrix *this, int a2, const int *a3, const double *a4)
{
  if ( *((_BYTE *)this + 8) )
    return CoinPackedMatrix::appendMajorVector(this, a2, a3, a4);
  else
    return CoinPackedMatrix::appendMinorVector(this, a2, a3, a4);
}

