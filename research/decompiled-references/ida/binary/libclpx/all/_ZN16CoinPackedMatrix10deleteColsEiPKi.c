__int64 __fastcall CoinPackedMatrix::deleteCols(CoinPackedMatrix *this, int a2, const int *a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( *((_BYTE *)this + 8) )
      return CoinPackedMatrix::deleteMajorVectors(this, a2, a3);
    else
      return CoinPackedMatrix::deleteMinorVectors(this, a2, a3);
  }
  return result;
}

