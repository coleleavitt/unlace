__int64 __fastcall CoinPackedMatrix::times(CoinPackedMatrix *this, const double *a2, double *a3)
{
  if ( *((_BYTE *)this + 8) )
    return CoinPackedMatrix::timesMajor(this, a2, a3);
  else
    return CoinPackedMatrix::timesMinor(this, a2, a3);
}

