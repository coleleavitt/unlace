__int64 __fastcall CoinMpsIO::getMatrixByRow(CoinMpsIO *this)
{
  __int64 result; // rax
  CoinPackedMatrix *v2; // rbp

  result = *((_QWORD *)this + 10);
  if ( !result )
  {
    result = *((_QWORD *)this + 11);
    if ( result )
    {
      v2 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v2, *((const CoinPackedMatrix **)this + 11));
      *((_QWORD *)this + 10) = v2;
      CoinPackedMatrix::reverseOrdering(v2);
      return *((_QWORD *)this + 10);
    }
  }
  return result;
}

