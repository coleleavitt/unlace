__int64 __fastcall ClpPackedMatrix3::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // r12
  void *v8; // rdi
  int v9; // ecx
  unsigned __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  const void *v14; // r13
  size_t v15; // r12
  void *v16; // rax
  _DWORD *v17; // rcx
  const void *v18; // r13
  int v19; // r12d
  unsigned __int64 v20; // r12
  void *v21; // rax
  void *v22; // rax
  void *v23; // r8
  int v24; // r12d
  const void *v25; // r13
  int v26; // r12d
  unsigned __int64 v27; // r12
  void *v28; // rax
  void *v29; // rcx
  const void *v30; // r13
  unsigned __int64 v31; // rdx
  size_t v32; // r12
  void *v33; // rax
  void *v34; // rax
  void *v35; // rcx
  const void *v36; // r12
  int v37; // edx
  unsigned __int64 v38; // rbp
  void *v39; // rax
  void *v40; // rcx
  CoinArrayWithLength *v41; // rbp

  if ( a1 == a2 )
    return a1;
  v3 = *(void **)(a1 + 32);
  if ( v3 )
    operator delete[](v3);
  v4 = *(void **)(a1 + 40);
  if ( v4 )
    operator delete[](v4);
  v5 = *(void **)(a1 + 48);
  if ( v5 )
    operator delete[](v5);
  v6 = *(void **)(a1 + 56);
  if ( v6 )
    operator delete[](v6);
  v7 = *(void **)(a1 + 64);
  if ( v7 )
  {
    CoinArrayWithLength::~CoinArrayWithLength(*(CoinArrayWithLength **)(a1 + 64));
    operator delete(v7);
  }
  v8 = *(void **)(a1 + 72);
  *(_QWORD *)(a1 + 64) = 0;
  if ( v8 )
    operator delete[](v8);
  v9 = *(_DWORD *)(a2 + 20);
  v10 = *(int *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v11 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = v9;
  v12 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 8) = v10;
  *(_DWORD *)(a1 + 16) = v11;
  *(_DWORD *)(a1 + 24) = v12;
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  if ( !*(_DWORD *)(a2 + 8) )
  {
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    return a1;
  }
  v14 = *(const void **)(a2 + 72);
  if ( v14 )
  {
    if ( v10 > 0x333333333333333LL )
      goto LABEL_38;
    v15 = 40 * v10;
    v16 = (void *)operator new[](40 * v10);
    v17 = memcpy(v16, v14, v15);
    v11 = *(_DWORD *)(a1 + 16);
  }
  else
  {
    v17 = nullptr;
  }
  v18 = *(const void **)(a2 + 32);
  *(_QWORD *)(a1 + 72) = v17;
  v19 = 2 * v11;
  if ( v18 )
  {
    if ( (unsigned __int64)v19 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_38;
    v20 = 4LL * v19;
    v21 = (void *)operator new[](v20);
    v22 = memcpy(v21, v18, v20);
    v17 = *(_DWORD **)(a1 + 72);
    v23 = v22;
  }
  else
  {
    v23 = nullptr;
  }
  v24 = v17[2];
  v25 = *(const void **)(a2 + 40);
  *(_QWORD *)(a1 + 32) = v23;
  v26 = v24 + 1;
  if ( v25 )
  {
    if ( (unsigned __int64)v26 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_38;
    v27 = 4LL * v26;
    v28 = (void *)operator new[](v27);
    v29 = memcpy(v28, v25, v27);
  }
  else
  {
    v29 = nullptr;
  }
  v30 = *(const void **)(a2 + 48);
  *(_QWORD *)(a1 + 40) = v29;
  v31 = *(int *)(a1 + 20);
  if ( v30 )
  {
    if ( v31 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_38;
    v32 = 4 * v31;
    v33 = (void *)operator new[](4 * v31);
    v34 = memcpy(v33, v30, v32);
    LODWORD(v31) = *(_DWORD *)(a1 + 20);
    v35 = v34;
  }
  else
  {
    v35 = nullptr;
  }
  v36 = *(const void **)(a2 + 56);
  v37 = v31 + 8;
  *(_QWORD *)(a1 + 48) = v35;
  if ( !v36 )
  {
    v40 = nullptr;
    goto LABEL_32;
  }
  if ( (unsigned __int64)v37 > 0xFFFFFFFFFFFFFFFLL )
LABEL_38:
    __cxa_throw_bad_array_new_length();
  v38 = 8LL * v37;
  v39 = (void *)operator new[](v38);
  v40 = memcpy(v39, v36, v38);
LABEL_32:
  *(_QWORD *)(a1 + 56) = v40;
  v41 = (CoinArrayWithLength *)operator new(0x18u);
  CoinArrayWithLength::CoinArrayWithLength(v41, 2048, -6);
  *(_QWORD *)(a1 + 64) = v41;
  return a1;
}

