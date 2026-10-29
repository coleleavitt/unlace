__int64 __fastcall ClpPackedMatrix2::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  int v8; // edx
  const void *v10; // r13
  int v11; // r12d
  unsigned __int64 v12; // r12
  void *v13; // rax
  void *v14; // rax
  void *v15; // rcx
  int v16; // eax
  const void *v17; // r14
  int v18; // edx
  int v19; // r12d
  unsigned __int64 v20; // r13
  void *v21; // rax
  void *v22; // rcx
  const void *v23; // r14
  int v24; // eax
  int v25; // r13d
  unsigned __int64 v26; // r13
  void *v27; // rax
  int *v28; // rcx
  const void *v29; // r13
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r12
  void *v32; // rax
  void *v33; // rcx
  int v34; // eax
  const void *v35; // r12
  int v36; // eax
  unsigned __int64 v37; // rbp
  void *v38; // rax
  void *v39; // rcx

  if ( a1 == a2 )
    return a1;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    operator delete[](v3);
  v4 = *(void **)(a1 + 24);
  if ( v4 )
    operator delete[](v4);
  v5 = *(void **)(a1 + 32);
  if ( v5 )
    operator delete[](v5);
  v6 = *(void **)(a1 + 40);
  if ( v6 )
    operator delete[](v6);
  v7 = *(void **)(a1 + 48);
  if ( v7 )
    operator delete[](v7);
  v8 = *(_DWORD *)(a1 + 8);
  if ( !v8 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    return a1;
  }
  v10 = *(const void **)(a2 + 16);
  v11 = v8 + 1;
  if ( v10 )
  {
    if ( (unsigned __int64)v11 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_36;
    v12 = 4LL * v11;
    v13 = (void *)operator new[](v12);
    v14 = memcpy(v13, v10, v12);
    v8 = *(_DWORD *)(a1 + 8);
    v15 = v14;
  }
  else
  {
    v15 = nullptr;
  }
  v16 = *(_DWORD *)(a1 + 12);
  v17 = *(const void **)(a2 + 24);
  *(_QWORD *)(a1 + 16) = v15;
  v18 = v16 * v8;
  v19 = v18;
  if ( v17 )
  {
    if ( (unsigned __int64)v18 > 0x3FFFFFFFFFFFFFFCLL )
      goto LABEL_36;
    v20 = 2LL * v18;
    v21 = (void *)operator new[](v20);
    v22 = memcpy(v21, v17, v20);
    v16 = *(_DWORD *)(a1 + 12);
  }
  else
  {
    v22 = nullptr;
  }
  v23 = *(const void **)(a2 + 32);
  v24 = v19 + v16;
  *(_QWORD *)(a1 + 24) = v22;
  v25 = v24 + 1;
  if ( v23 )
  {
    if ( (unsigned __int64)v25 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_36;
    v26 = 4LL * v25;
    v27 = (void *)operator new[](v26);
    v28 = (int *)memcpy(v27, v23, v26);
    v24 = v19 + *(_DWORD *)(a1 + 12);
  }
  else
  {
    v28 = nullptr;
  }
  v29 = *(const void **)(a2 + 40);
  *(_QWORD *)(a1 + 32) = v28;
  v30 = v28[v24];
  if ( v29 )
  {
    if ( v30 > 0x3FFFFFFFFFFFFFFCLL )
      goto LABEL_36;
    v31 = 2 * v30;
    v32 = (void *)operator new[](v31);
    v33 = memcpy(v32, v29, v31);
  }
  else
  {
    v33 = nullptr;
  }
  v34 = *(_DWORD *)(a1 + 8);
  v35 = *(const void **)(a2 + 48);
  *(_QWORD *)(a1 + 40) = v33;
  v36 = 6 * v34;
  if ( !v35 )
  {
    v39 = nullptr;
    goto LABEL_30;
  }
  if ( (unsigned __int64)v36 > 0xFFFFFFFFFFFFFFFLL )
LABEL_36:
    __cxa_throw_bad_array_new_length();
  v37 = 8LL * v36;
  v38 = (void *)operator new[](v37);
  v39 = memcpy(v38, v35, v37);
LABEL_30:
  *(_QWORD *)(a1 + 48) = v39;
  return a1;
}

