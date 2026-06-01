__int64 __fastcall sub_126420(__int64 *a1, __int64 a2)
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
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // r12
  char *src; // [rsp+0h] [rbp-58h]

  v2 = qword_252E60;
  v4 = qword_252E60 + 48 * xmmword_252E68;
  if ( qword_252E60 == v4 )
    goto LABEL_20;
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      v7 = *(const char **)v2;
      v8 = s1;
      if ( !v5 )
        goto LABEL_4;
      goto LABEL_9;
    }
    if ( !v5 )
      break;
    v7 = s1;
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
      src = (char *)qvector_reserve();
      strcpy(src, "Presets...");
      v22 = (void *)qalloc_or_throw();
      memcpy(v22, src, 0xBu);
      v18 = a1[1];
      v19 = *a1;
      if ( a1[2] < (unsigned __int64)(v18 + 1) )
      {
        v21 = qvector_reserve();
        *a1 = v21;
        v18 = a1[1];
        v19 = v21;
      }
      v20 = v19 + 24 * v18;
      *(_QWORD *)v20 = v22;
      *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)0xBuLL, (__m128i)0xBuLL);
      ++a1[1];
      if ( src )
        qfree();
    }
    return 0;
  }
  if ( a1 )
  {
    v9 = *(_QWORD *)(v2 + 24);
    for ( i = v9 + 48LL * *(_QWORD *)(v2 + 32); i != v9; ++a1[1] )
    {
      v12 = *(_QWORD *)(v9 + 8);
      v13 = nullptr;
      if ( v12 )
      {
        v13 = (void *)qalloc_or_throw();
        memcpy(v13, *(const void **)v9, v12);
      }
      v14 = a1[1];
      v15 = *a1;
      if ( a1[2] < (unsigned __int64)(v14 + 1) )
      {
        v16 = qvector_reserve();
        *a1 = v16;
        v14 = a1[1];
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

