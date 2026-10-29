__int64 __fastcall ClpPackedMatrix::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  CoinPackedMatrix *v4; // r12
  int v5; // eax
  ClpPackedMatrix2 *v6; // r12
  void (__fastcall *v7)(ClpPackedMatrix2 *); // rax
  void *v8; // r12
  ClpPackedMatrix3 *v9; // rdi
  void (__fastcall *v10)(ClpPackedMatrix3 *); // rax
  ClpPackedMatrix2 *v11; // r12
  bool v12; // zf
  ClpPackedMatrix3 *v13; // r12

  if ( a1 == a2 )
    return a1;
  ClpMatrixBase::operator=();
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v4, *(const CoinPackedMatrix **)(a2 + 88), -1, 0, 0);
  v5 = *(_DWORD *)(a2 + 100);
  *(_QWORD *)(a1 + 88) = v4;
  v6 = *(ClpPackedMatrix2 **)(a1 + 104);
  *(_DWORD *)(a1 + 100) = v5 & 0xFFFFFFFD;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(ClpPackedMatrix2 *))(*(_QWORD *)v6 + 8LL);
    if ( v7 == ClpPackedMatrix2::~ClpPackedMatrix2 )
    {
      ClpPackedMatrix2::~ClpPackedMatrix2(v6);
      operator delete(v6);
    }
    else
    {
      v7(v6);
    }
  }
  v8 = *(void **)(a1 + 112);
  if ( v8 )
  {
    v9 = *(ClpPackedMatrix3 **)(a1 + 112);
    v10 = *(void (__fastcall **)(ClpPackedMatrix3 *))(*(_QWORD *)v8 + 8LL);
    if ( v10 == ClpPackedMatrix3::~ClpPackedMatrix3 )
    {
      ClpPackedMatrix3::~ClpPackedMatrix3(v9);
      operator delete(v8);
    }
    else
    {
      v10(v9);
    }
  }
  if ( *(_QWORD *)(a2 + 104) )
  {
    v11 = (ClpPackedMatrix2 *)operator new(0x38u);
    ClpPackedMatrix2::ClpPackedMatrix2(v11, *(const ClpPackedMatrix2 **)(a2 + 104));
    v12 = *(_QWORD *)(a2 + 112) == 0;
    *(_QWORD *)(a1 + 104) = v11;
    if ( !v12 )
    {
LABEL_12:
      v13 = (ClpPackedMatrix3 *)operator new(0x58u);
      ClpPackedMatrix3::ClpPackedMatrix3(v13, *(const ClpPackedMatrix3 **)(a2 + 112));
      *(_QWORD *)(a1 + 112) = v13;
      return a1;
    }
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 112) == 0;
    *(_QWORD *)(a1 + 104) = 0;
    if ( !v12 )
      goto LABEL_12;
  }
  *(_QWORD *)(a1 + 112) = 0;
  return a1;
}

