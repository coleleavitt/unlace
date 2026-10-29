__int64 __fastcall sub_34BB50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // r12
  __int64 i; // r14
  __int64 v11; // rax
  size_t v12; // rbx
  void *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  void *v18; // r12
  size_t v19; // rbx
  __int64 v20; // rdx
  const char *v21; // rsi
  char *v22; // rax
  void *v23; // rdi
  __int64 v24; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v2 = qword_8CF0B0;
  v27 = __readfsqword(0x28u);
  v4 = qword_8CF0B0 + 48 * xmmword_8CF0B8;
  if ( qword_8CF0B0 == v4 )
    goto LABEL_20;
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      v7 = *(const char **)v2;
      v8 = &s1;
      if ( !v5 )
        goto LABEL_4;
      goto LABEL_9;
    }
    if ( !v5 )
      break;
    v7 = &s1;
LABEL_9:
    v8 = *(const char **)a2;
LABEL_4:
    if ( !strcmp(v8, v7) )
      break;
    v2 += 48;
    if ( v4 == v2 )
      goto LABEL_20;
  }
  if ( v4 == v2 )
  {
LABEL_20:
    if ( a1 )
    {
      src = nullptr;
      *(_OWORD *)n = 0;
      src = (void *)qvector_reserve(&src, 0, 11, 1);
      v18 = nullptr;
      n[0] = 11;
      strcpy((char *)src, "Presets...");
      v19 = n[0];
      if ( n[0] )
      {
        v18 = (void *)qalloc_or_throw(n[0]);
        memcpy(v18, src, v19);
      }
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *(const char **)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v20 + 1) )
      {
        v24 = qvector_reserve(a1, v21, v20 + 1, 24);
        *(_QWORD *)a1 = v24;
        v20 = *(_QWORD *)(a1 + 8);
        v21 = (const char *)v24;
      }
      v22 = (char *)&v21[24 * v20];
      *(_QWORD *)v22 = v18;
      v23 = src;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
      ++*(_QWORD *)(a1 + 8);
      if ( v23 )
      {
        n[0] = 0;
        qfree(v23, v21);
      }
    }
    return 0;
  }
  if ( a1 )
  {
    v9 = *(_QWORD *)(v2 + 24);
    for ( i = v9 + 48LL * *(_QWORD *)(v2 + 32); i != v9; ++*(_QWORD *)(a1 + 8) )
    {
      v12 = *(_QWORD *)(v9 + 8);
      v13 = nullptr;
      if ( v12 )
      {
        v13 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
        memcpy(v13, *(const void **)v9, v12);
      }
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v14 + 1) )
      {
        v16 = qvector_reserve(a1, v15, v14 + 1, 24);
        *(_QWORD *)a1 = v16;
        v14 = *(_QWORD *)(a1 + 8);
        v15 = v16;
      }
      v9 += 48;
      v11 = v15 + 24 * v14;
      *(_QWORD *)v11 = v13;
      *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
    }
  }
  return 1;
}
