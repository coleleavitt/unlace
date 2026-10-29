// Alternative name is '_ZN13ClpMatrixBaseC1ERKS_'
void __fastcall ClpMatrixBase::ClpMatrixBase(ClpMatrixBase *this, const ClpMatrixBase *a2)
{
  __int128 v2; // xmm0
  char v3; // al
  int v4; // eax
  __int64 (__fastcall *v5)(ClpPackedMatrix *); // rax
  __int64 v6; // rax
  int v7; // eax
  const void *v8; // r12
  unsigned __int64 v9; // rbp
  void *v10; // rax

  v2 = *((_OWORD *)a2 + 1);
  *(_QWORD *)this = &off_4D05A8;
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  v3 = *((_BYTE *)a2 + 80);
  *((_OWORD *)this + 1) = v2;
  *((_BYTE *)this + 80) = v3;
  *(_QWORD *)&v2 = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  v4 = *((_DWORD *)a2 + 11);
  *((_QWORD *)this + 4) = v2;
  *((_DWORD *)this + 11) = v4;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_BYTE *)this + 80) = *((_BYTE *)a2 + 80);
  v5 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)a2 + 32LL);
  if ( v5 == ClpPackedMatrix::getNumRows )
  {
    v6 = *((_QWORD *)a2 + 11);
    if ( *(_BYTE *)(v6 + 8) )
      v7 = *(_DWORD *)(v6 + 68);
    else
      v7 = *(_DWORD *)(v6 + 64);
  }
  else
  {
    v7 = v5(a2);
  }
  v8 = *((const void **)a2 + 1);
  if ( v8 && v7 )
  {
    if ( (unsigned __int64)v7 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v9 = 8LL * v7;
    v10 = (void *)operator new[](v9);
    *((_QWORD *)this + 1) = memcpy(v10, v8, v9);
  }
  else
  {
    *((_QWORD *)this + 1) = 0;
  }
}

