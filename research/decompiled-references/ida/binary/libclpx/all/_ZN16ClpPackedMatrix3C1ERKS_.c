// Alternative name is '_ZN16ClpPackedMatrix3C2ERKS_'
void __fastcall ClpPackedMatrix3::ClpPackedMatrix3(ClpPackedMatrix3 *this, const ClpPackedMatrix3 *a2)
{
  int v2; // edx
  int v3; // ecx
  unsigned __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  const void *v8; // r13
  size_t v9; // r12
  void *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rcx
  const void *v13; // r13
  int v14; // r12d
  unsigned __int64 v15; // r12
  void *v16; // rax
  void *v17; // rax
  void *v18; // r8
  int v19; // r12d
  const void *v20; // r13
  int v21; // r12d
  unsigned __int64 v22; // r12
  void *v23; // rax
  void *v24; // rcx
  const void *v25; // r13
  unsigned __int64 v26; // rdx
  size_t v27; // r12
  void *v28; // rax
  void *v29; // rax
  void *v30; // rcx
  const void *v31; // r12
  int v32; // edx
  unsigned __int64 v33; // rbp
  void *v34; // rax
  void *v35; // rcx
  CoinArrayWithLength *v36; // rbp

  v2 = *((_DWORD *)a2 + 3);
  v3 = *((_DWORD *)a2 + 5);
  *(_QWORD *)this = off_4D0E50;
  v4 = *((int *)a2 + 2);
  *((_DWORD *)this + 3) = v2;
  v5 = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = v3;
  v6 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = v4;
  *((_DWORD *)this + 4) = v5;
  *((_DWORD *)this + 6) = v6;
  v7 = *((_DWORD *)a2 + 20);
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = v7;
  if ( *((_DWORD *)a2 + 2) )
  {
    v8 = *((const void **)a2 + 9);
    if ( v8 )
    {
      if ( v4 > 0x333333333333333LL )
        goto LABEL_23;
      v9 = 40 * v4;
      v10 = (void *)operator new[](40 * v4);
      v11 = memcpy(v10, v8, v9);
      v5 = *((_DWORD *)this + 4);
      v12 = v11;
    }
    else
    {
      v12 = nullptr;
    }
    v13 = *((const void **)a2 + 4);
    *((_QWORD *)this + 9) = v12;
    v14 = 2 * v5;
    if ( v13 )
    {
      if ( (unsigned __int64)v14 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_23;
      v15 = 4LL * v14;
      v16 = (void *)operator new[](v15);
      v17 = memcpy(v16, v13, v15);
      v12 = *((_DWORD **)this + 9);
      v18 = v17;
    }
    else
    {
      v18 = nullptr;
    }
    v19 = v12[2];
    v20 = *((const void **)a2 + 5);
    *((_QWORD *)this + 4) = v18;
    v21 = v19 + 1;
    if ( v20 )
    {
      if ( (unsigned __int64)v21 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_23;
      v22 = 4LL * v21;
      v23 = (void *)operator new[](v22);
      v24 = memcpy(v23, v20, v22);
    }
    else
    {
      v24 = nullptr;
    }
    v25 = *((const void **)a2 + 6);
    *((_QWORD *)this + 5) = v24;
    v26 = *((int *)this + 5);
    if ( v25 )
    {
      if ( v26 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_23;
      v27 = 4 * v26;
      v28 = (void *)operator new[](4 * v26);
      v29 = memcpy(v28, v25, v27);
      LODWORD(v26) = *((_DWORD *)this + 5);
      v30 = v29;
    }
    else
    {
      v30 = nullptr;
    }
    v31 = *((const void **)a2 + 7);
    v32 = v26 + 8;
    *((_QWORD *)this + 6) = v30;
    if ( !v31 )
    {
      v35 = nullptr;
      goto LABEL_17;
    }
    if ( (unsigned __int64)v32 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v33 = 8LL * v32;
      v34 = (void *)operator new[](v33);
      v35 = memcpy(v34, v31, v33);
LABEL_17:
      *((_QWORD *)this + 7) = v35;
      v36 = (CoinArrayWithLength *)operator new(0x18u);
      CoinArrayWithLength::CoinArrayWithLength(v36, 2048, -6);
      *((_QWORD *)this + 8) = v36;
      return;
    }
LABEL_23:
    __cxa_throw_bad_array_new_length();
  }
}

