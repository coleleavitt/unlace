// Alternative name is '_ZN15ClpPackedMatrixC1ERK16CoinPackedMatrix'
void __fastcall ClpPackedMatrix::ClpPackedMatrix(ClpPackedMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 v2; // rbp
  bool v3; // zf
  int v4; // eax

  ClpMatrixBase::ClpMatrixBase(this);
  *(_QWORD *)this = off_4D0C20;
  v2 = operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v2, a2, -1, 0, 0);
  v3 = *(_BYTE *)(v2 + 8) == 0;
  *((_QWORD *)this + 11) = v2;
  *((_DWORD *)this + 25) = 0;
  v4 = *(_DWORD *)(v2 + 64);
  if ( v3 )
    v4 = *(_DWORD *)(v2 + 68);
  *((_DWORD *)this + 24) = v4;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 1;
}

