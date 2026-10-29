__int64 __fastcall ClpPackedMatrix::reverseOrderedCopy(const CoinPackedMatrix **this)
{
  __int64 v1; // rbx
  CoinPackedMatrix *v2; // rbp
  __int64 v3; // rax
  int v4; // edx
  int v5; // eax

  v1 = operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix((ClpPackedMatrix *)v1);
  v2 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v2);
  *(_QWORD *)(v1 + 88) = v2;
  CoinPackedMatrix::setExtraGap(v2, 0.0);
  CoinPackedMatrix::setExtraMajor(*(CoinPackedMatrix **)(v1 + 88), 0.0);
  CoinPackedMatrix::reverseOrderedCopyOf(*(CoinPackedMatrix **)(v1 + 88), *(this + 11));
  v3 = *(_QWORD *)(v1 + 88);
  v4 = *(_DWORD *)(v3 + 64);
  if ( !*(_BYTE *)(v3 + 8) )
    v4 = *(_DWORD *)(v3 + 68);
  v5 = *((_DWORD *)this + 25);
  *(_DWORD *)(v1 + 96) = v4;
  *(_DWORD *)(v1 + 100) = v5 & 0xFFFFFFFD;
  return v1;
}

