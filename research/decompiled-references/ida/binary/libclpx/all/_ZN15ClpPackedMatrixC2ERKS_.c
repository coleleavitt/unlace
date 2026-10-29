// Alternative name is '_ZN15ClpPackedMatrixC1ERKS_'
void __fastcall ClpPackedMatrix::ClpPackedMatrix(ClpPackedMatrix *this, const CoinPackedMatrix **a2)
{
  __int64 v2; // r12
  int v3; // eax
  unsigned __int64 v4; // rdx
  bool v5; // zf
  const CoinPackedMatrix *v6; // r13
  ClpPackedMatrix2 *v7; // r12
  ClpPackedMatrix3 *v8; // r12
  size_t v9; // r12
  void *v10; // rax
  void *v11; // rax

  ClpMatrixBase::ClpMatrixBase(this, (const ClpMatrixBase *)a2);
  *(_QWORD *)this = off_4D0C20;
  v2 = operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v2, a2[11], -1, 0, 0);
  v3 = *((_DWORD *)a2 + 25);
  *((_QWORD *)this + 11) = v2;
  v4 = *(int *)(v2 + 64);
  v5 = *(_BYTE *)(v2 + 8) == 0;
  *((_DWORD *)this + 25) = v3 & 0xFFFFFFFD;
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  if ( !v5 )
    v4 = *(int *)(v2 + 68);
  v6 = a2[1];
  if ( !(_DWORD)v4 || !v6 )
  {
    v5 = a2[13] == nullptr;
    *((_QWORD *)this + 1) = 0;
    if ( !v5 )
      goto LABEL_6;
LABEL_10:
    v5 = a2[14] == nullptr;
    *((_QWORD *)this + 13) = 0;
    if ( !v5 )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v9 = 8 * v4;
  v10 = (void *)operator new[](8 * v4);
  v11 = memcpy(v10, v6, v9);
  v5 = a2[13] == nullptr;
  *((_QWORD *)this + 1) = v11;
  if ( v5 )
    goto LABEL_10;
LABEL_6:
  v7 = (ClpPackedMatrix2 *)operator new(0x38u);
  ClpPackedMatrix2::ClpPackedMatrix2(v7, a2[13]);
  v5 = a2[14] == nullptr;
  *((_QWORD *)this + 13) = v7;
  if ( !v5 )
  {
LABEL_7:
    v8 = (ClpPackedMatrix3 *)operator new(0x58u);
    ClpPackedMatrix3::ClpPackedMatrix3(v8, a2[14]);
    *((_QWORD *)this + 14) = v8;
    return;
  }
LABEL_11:
  *((_QWORD *)this + 14) = 0;
}

