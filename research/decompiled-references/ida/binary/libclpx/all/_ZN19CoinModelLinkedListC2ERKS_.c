// Alternative name is '_ZN19CoinModelLinkedListC1ERKS_'
void __fastcall CoinModelLinkedList::CoinModelLinkedList(CoinModelLinkedList *this, const __m128i *a2)
{
  __int32 v2; // eax
  unsigned __int64 v3; // rdx
  const void *v4; // r13
  size_t v5; // rbp
  void *v6; // rax
  void *v7; // rax
  void *v8; // rcx
  const void *v9; // r13
  size_t v10; // rbp
  void *v11; // rax
  void *v12; // rcx
  const void *v13; // r13
  int v14; // eax
  int v15; // edx
  unsigned __int64 v16; // rbp
  void *v17; // rax
  void *v18; // rcx
  const void *v19; // r12
  unsigned __int64 v20; // rbp
  void *v21; // rax
  void *v22; // rcx

  v2 = a2[2].m128i_i32[1];
  v3 = a2[2].m128i_i32[3];
  *((__m128i *)this + 2) = _mm_loadu_si128(a2 + 2);
  *((_DWORD *)this + 12) = a2[3].m128i_i32[0];
  if ( !v2 )
  {
    *(_QWORD *)this = 0;
    *((_QWORD *)this + 1) = 0;
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 0;
    return;
  }
  v4 = (const void *)a2->m128i_i64[0];
  if ( a2->m128i_i64[0] )
  {
    if ( v3 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_20;
    v5 = 4 * v3;
    v6 = (void *)operator new[](4 * v3);
    v7 = memcpy(v6, v4, v5);
    v3 = *((int *)this + 11);
    v8 = v7;
  }
  else
  {
    v8 = nullptr;
  }
  v9 = (const void *)a2->m128i_i64[1];
  *(_QWORD *)this = v8;
  if ( v9 )
  {
    if ( v3 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_20;
    v10 = 4 * v3;
    v11 = (void *)operator new[](4 * v3);
    v12 = memcpy(v11, v9, v10);
  }
  else
  {
    v12 = nullptr;
  }
  v13 = (const void *)a2[1].m128i_i64[0];
  v14 = *((_DWORD *)this + 9);
  *((_QWORD *)this + 1) = v12;
  v15 = v14 + 1;
  if ( v13 )
  {
    if ( (unsigned __int64)v15 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_20;
    v16 = 4LL * v15;
    v17 = (void *)operator new[](v16);
    v18 = memcpy(v17, v13, v16);
    v15 = *((_DWORD *)this + 9) + 1;
  }
  else
  {
    v18 = nullptr;
  }
  v19 = (const void *)a2[1].m128i_i64[1];
  *((_QWORD *)this + 2) = v18;
  if ( !v19 )
  {
    v22 = nullptr;
    goto LABEL_15;
  }
  if ( (unsigned __int64)v15 > 0x1FFFFFFFFFFFFFFELL )
LABEL_20:
    __cxa_throw_bad_array_new_length();
  v20 = 4LL * v15;
  v21 = (void *)operator new[](v20);
  v22 = memcpy(v21, v19, v20);
LABEL_15:
  *((_QWORD *)this + 3) = v22;
}

