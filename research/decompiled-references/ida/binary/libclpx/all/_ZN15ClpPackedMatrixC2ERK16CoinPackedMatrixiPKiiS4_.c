// Alternative name is '_ZN15ClpPackedMatrixC1ERK16CoinPackedMatrixiPKiiS4_'
void __fastcall ClpPackedMatrix::ClpPackedMatrix(
        ClpPackedMatrix *this,
        const CoinPackedMatrix *a2,
        int a3,
        const int *a4,
        int a5,
        const int *a6)
{
  __int64 v10; // rbp
  bool v11; // zf
  int v12; // eax

  ClpMatrixBase::ClpMatrixBase(this);
  *(_QWORD *)this = off_4D0C20;
  v10 = operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v10, a2, a3, a4, a5, a6);
  v11 = *(_BYTE *)(v10 + 8) == 0;
  *((_QWORD *)this + 11) = v10;
  v12 = *(_DWORD *)(v10 + 64);
  if ( v11 )
    v12 = *(_DWORD *)(v10 + 68);
  *((_DWORD *)this + 24) = v12;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 1;
}

