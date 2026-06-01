__int64 __fastcall CoinSnapshot::createMatrixByRow(CoinSnapshot *this)
{
  CoinPackedMatrix *v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdi

  if ( *((char *)this + 224) < 0 )
  {
    v4 = *((_QWORD *)this + 17);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *((_BYTE *)this + 224) |= 0x80u;
  v2 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v2, *((const CoinPackedMatrix **)this + 18));
  result = CoinPackedMatrix::reverseOrdering(v2);
  *((_QWORD *)this + 17) = v2;
  return result;
}

