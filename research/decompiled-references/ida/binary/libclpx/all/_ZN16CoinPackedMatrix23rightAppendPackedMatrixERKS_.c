__int64 __fastcall CoinPackedMatrix::rightAppendPackedMatrix(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  char v2; // al

  v2 = *((_BYTE *)a2 + 8);
  if ( *((_BYTE *)this + 8) )
  {
    if ( v2 )
      return CoinPackedMatrix::majorAppendSameOrdered(this, a2);
    else
      return CoinPackedMatrix::majorAppendOrthoOrdered(this, a2);
  }
  else if ( v2 )
  {
    return CoinPackedMatrix::minorAppendOrthoOrdered(this, a2);
  }
  else
  {
    return CoinPackedMatrix::minorAppendSameOrdered(this, a2);
  }
}

