void __fastcall sub_698F60(__int64 a1, __int64 a2)
{
  char v3; // al
  void *v4; // r13
  unsigned __int64 v5; // rdx
  __m128i v6; // xmm0
  void *v7; // rdi
  char v8; // al
  size_t v9; // r12
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  size_t v19; // rdx
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // r12
  char *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 i; // r12
  void *v27; // rdi
  void *v28; // rax
  void *v29; // rax
  void *v30; // rdi
  void *v31; // rdi
  __m128i v32; // [rsp+0h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]

  if ( a1 == a2 )
    return;
  v3 = *(_BYTE *)(a1 + 97);
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      v23 = *(char **)(a1 + 24);
      if ( v23 )
      {
        v24 = *(_QWORD *)(a1 + 32);
        if ( v24 )
        {
          v25 = 0;
          for ( i = 0; i != v24; ++i )
          {
            v27 = *(void **)&v23[v25];
            if ( v27 )
            {
              *(_QWORD *)&v23[v25 + 8] = 0;
              qfree(v27);
              v23 = *(char **)(a1 + 24);
            }
            v25 += 56;
          }
        }
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v23);
      }
    }
    else if ( v3 == 1 )
    {
      v30 = *(void **)(a1 + 64);
      if ( v30 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        qfree(v30);
      }
      v31 = *(void **)(a1 + 24);
      if ( v31 )
      {
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v31);
      }
    }
    *(_BYTE *)(a1 + 97) = 0;
  }
  v4 = nullptr;
  *(_BYTE *)(a1 + 97) = *(_BYTE *)(a2 + 97);
  *(_BYTE *)(a1 + 98) = *(_BYTE *)(a2 + 98);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( !v5 )
  {
    v7 = *(void **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v32 = v6;
  v9 = 16 * v5;
  v4 = (void *)qalloc_or_throw(16 * v5);
  memcpy(v4, *(const void **)a2, v9);
  v7 = *(void **)a1;
  v6 = _mm_load_si128(&v32);
  if ( *(_QWORD *)a1 )
  {
LABEL_5:
    *(_QWORD *)(a1 + 8) = 0;
    v32 = v6;
    qfree(v7);
    v6 = _mm_load_si128(&v32);
  }
LABEL_6:
  v8 = *(_BYTE *)(a1 + 97);
  *(_QWORD *)a1 = v4;
  *(__m128i *)(a1 + 8) = v6;
  if ( v8 == 1 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 32) = 0;
    v20 = *(_QWORD *)(a2 + 32);
    if ( v20 )
    {
      v29 = (void *)qalloc_or_throw(16 * v20);
      *(_QWORD *)(a1 + 40) = v20;
      *(_QWORD *)(a1 + 24) = v29;
      memcpy(v29, *(const void **)(a2 + 24), 16 * v20);
      *(_QWORD *)(a1 + 32) = v20;
    }
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    v21 = *(_DWORD *)(a2 + 56);
    *(_QWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 56) = v21;
    *(_OWORD *)(a1 + 72) = 0;
    v22 = *(_QWORD *)(a2 + 72);
    if ( v22 )
    {
      v28 = (void *)qalloc_or_throw(16 * v22);
      *(_QWORD *)(a1 + 64) = v28;
      *(_QWORD *)(a1 + 80) = v22;
      memcpy(v28, *(const void **)(a2 + 64), 16 * v22);
      *(_QWORD *)(a1 + 72) = v22;
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  }
  else if ( v8 == 2 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 32) = 0;
    v10 = *(_QWORD *)(a2 + 32);
    if ( v10 )
    {
      v11 = 0;
      v12 = qalloc_or_throw(56 * v10);
      *(_QWORD *)(a1 + 40) = v10;
      v13 = 0;
      for ( *(_QWORD *)(a1 + 24) = v12; ; v12 = *(_QWORD *)(a1 + 24) )
      {
        v14 = v12 + 56 * v11;
        v15 = *(_QWORD *)(a2 + 24) + 56 * v11;
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = v13;
        v16 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          v32.m128i_i64[0] = *(_QWORD *)(v15 + 8);
          n = 16 * v16;
          v17 = (void *)qalloc_or_throw(16 * v16);
          v18 = v32.m128i_i64[0];
          v19 = n;
          *(_QWORD *)v14 = v17;
          *(_QWORD *)(v14 + 16) = v18;
          memcpy(v17, *(const void **)v15, v19);
          v13 = 0;
          *(_QWORD *)(v14 + 8) = v32.m128i_i64[0];
        }
        ++v11;
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v15 + 24);
        *(_DWORD *)(v14 + 32) = *(_DWORD *)(v15 + 32);
        *(__m128i *)(v14 + 40) = _mm_loadu_si128((const __m128i *)(v15 + 40));
        if ( v10 == v11 )
          break;
      }
      *(_QWORD *)(a1 + 32) = v10;
    }
  }
}
