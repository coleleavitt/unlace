__int64 __fastcall CoinModelLinkedList::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rdx
  const void *v10; // r13
  size_t v11; // r12
  void *v12; // rax
  void *v13; // rax
  void *v14; // rcx
  const void *v15; // r13
  size_t v16; // r12
  void *v17; // rax
  void *v18; // rcx
  const void *v19; // r13
  int v20; // eax
  int v21; // edx
  unsigned __int64 v22; // r12
  void *v23; // rax
  void *v24; // rcx
  const void *v25; // r12
  unsigned __int64 v26; // rbp
  void *v27; // rax
  void *v28; // rcx

  if ( a1 == a2 )
    return a1;
  v3 = *(void **)a1;
  if ( v3 )
    operator delete[](v3);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    operator delete[](v4);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    operator delete[](v5);
  v6 = *(void **)(a1 + 24);
  if ( v6 )
    operator delete[](v6);
  v7 = *(_DWORD *)(a2 + 36);
  v8 = *(int *)(a2 + 44);
  *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)(a2 + 32));
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  if ( !v7 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    return a1;
  }
  v10 = *(const void **)a2;
  if ( *(_QWORD *)a2 )
  {
    if ( v8 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_30;
    v11 = 4 * v8;
    v12 = (void *)operator new[](4 * v8);
    v13 = memcpy(v12, v10, v11);
    v8 = *(int *)(a1 + 44);
    v14 = v13;
  }
  else
  {
    v14 = nullptr;
  }
  v15 = *(const void **)(a2 + 8);
  *(_QWORD *)a1 = v14;
  if ( v15 )
  {
    if ( v8 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_30;
    v16 = 4 * v8;
    v17 = (void *)operator new[](4 * v8);
    v18 = memcpy(v17, v15, v16);
  }
  else
  {
    v18 = nullptr;
  }
  v19 = *(const void **)(a2 + 16);
  v20 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(a1 + 8) = v18;
  v21 = v20 + 1;
  if ( v19 )
  {
    if ( (unsigned __int64)v21 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_30;
    v22 = 4LL * v21;
    v23 = (void *)operator new[](v22);
    v24 = memcpy(v23, v19, v22);
    v21 = *(_DWORD *)(a1 + 36) + 1;
  }
  else
  {
    v24 = nullptr;
  }
  v25 = *(const void **)(a2 + 24);
  *(_QWORD *)(a1 + 16) = v24;
  if ( !v25 )
  {
    v28 = nullptr;
    goto LABEL_25;
  }
  if ( (unsigned __int64)v21 > 0x1FFFFFFFFFFFFFFELL )
LABEL_30:
    __cxa_throw_bad_array_new_length();
  v26 = 4LL * v21;
  v27 = (void *)operator new[](v26);
  v28 = memcpy(v27, v25, v26);
LABEL_25:
  *(_QWORD *)(a1 + 24) = v28;
  return a1;
}

