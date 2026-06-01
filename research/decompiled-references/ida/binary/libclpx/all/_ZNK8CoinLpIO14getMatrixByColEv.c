__int64 __fastcall CoinLpIO::getMatrixByCol(CoinLpIO *this)
{
  __int64 result; // rax
  CoinPackedMatrix *v2; // rbp

  result = *((_QWORD *)this + 9);
  if ( !result )
  {
    result = *((_QWORD *)this + 10);
    if ( result )
    {
      v2 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v2, *((const CoinPackedMatrix **)this + 10));
      *((_QWORD *)this + 9) = v2;
      CoinPackedMatrix::reverseOrdering(v2);
      return *((_QWORD *)this + 9);
    }
  }
  return result;
}

