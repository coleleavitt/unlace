__int64 __fastcall sub_5E8720(__int64 a1, __int64 *a2, const void *a3, int a4)
{
  size_t v8; // r15
  void *v9; // rax
  const void *v10; // rsi
  __int64 v11; // rax
  const char *v12; // rdx
  __int8 v13; // r8
  void *v14; // rdi
  void *v15; // r14
  bool v16; // zf
  __int8 v17; // r8
  __m128i v18; // xmm0
  void *v19; // rdi
  __m128i si128; // xmm0
  void *v21; // rax
  size_t v23; // rax
  size_t v24; // rbx
  size_t v25; // r14
  void *v26; // rax
  const void *v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rax
  void *v30; // rdi
  size_t v31; // r13
  __int64 v32; // rax
  __m128i v33; // [rsp+8h] [rbp-60h] BYREF
  void *v34; // [rsp+18h] [rbp-50h]
  __m128i v35[4]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 616);
  if ( v8 <= 1 )
    return sub_5E8630(a1, a2, a3, a4);
  if ( !strcmp(*(const char **)(a1 + 608), (const char *)a3) && a2 )
  {
    if ( a3 && (v23 = strlen((const char *)a3), (v24 = v23) != 0) )
    {
      v30 = (void *)*a2;
      v31 = v23 + 1;
      if ( a2[2] < v23 + 1 )
      {
        v32 = qvector_reserve(a2, *a2, v23 + 1, 1);
        *a2 = v32;
        v30 = (void *)v32;
      }
      a2[1] = v31;
      memmove(v30, a3, v24);
      *(_BYTE *)(*a2 + v24) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  else
  {
    v9 = (void *)qalloc_or_throw(v8);
    v10 = *(const void **)(a1 + 608);
    v33.m128i_i64[1] = (__int64)v9;
    memcpy(v9, v10, v8);
    v11 = *(_QWORD *)(a1 + 592);
    v34 = nullptr;
    v33.m128i_i64[0] = v11;
    if ( v11 )
    {
      v25 = 4 * v11;
      v26 = (void *)qalloc_or_throw(4 * v11);
      v27 = *(const void **)(a1 + 584);
      v34 = v26;
      memcpy(v26, v27, v25);
    }
    while ( *(_QWORD *)(a1 + 616) > 1u )
    {
      sub_5E8170((_QWORD *)a1, (const char *)a3);
      v12 = haystack;
      if ( *(_QWORD *)(a1 + 616) )
        v12 = *(const char **)(a1 + 608);
      v13 = sub_5E8630(a1, a2, v12, a4);
      if ( v13 )
        goto LABEL_13;
      sub_5E83D0((_QWORD *)a1);
      sub_5E83D0((_QWORD *)a1);
    }
    v13 = 0;
LABEL_13:
    v14 = *(void **)(a1 + 608);
    if ( *(_QWORD *)(a1 + 624) < v8 )
    {
      v28 = *(_QWORD *)(a1 + 608);
      v35[0].m128i_i8[0] = v13;
      v29 = qvector_reserve(a1 + 608, v28, v8, 1);
      *(_QWORD *)(a1 + 608) = v29;
      v13 = v35[0].m128i_i8[0];
      v14 = (void *)v29;
    }
    *(_QWORD *)(a1 + 616) = v8;
    v15 = nullptr;
    v35[0].m128i_i8[0] = v13;
    memmove(v14, (const void *)v33.m128i_i64[1], v8 - 1);
    v16 = v33.m128i_i64[0] == 0;
    v17 = v35[0].m128i_i8[0];
    *(_BYTE *)(*(_QWORD *)(a1 + 608) + v8 - 1) = 0;
    if ( !v16 )
    {
      v15 = (void *)qalloc_or_throw(4 * v33.m128i_i64[0]);
      memcpy(v15, v34, 4 * v33.m128i_i64[0]);
      v17 = v35[0].m128i_i8[0];
    }
    v18 = _mm_loadl_epi64(&v33);
    v19 = *(void **)(a1 + 584);
    si128 = _mm_unpacklo_epi64(v18, v18);
    if ( v19 )
    {
      *(_QWORD *)(a1 + 592) = 0;
      v33.m128i_i8[0] = v17;
      v35[0] = si128;
      qfree(v19);
      si128 = _mm_load_si128(v35);
      v17 = v33.m128i_i8[0];
    }
    *(_QWORD *)(a1 + 584) = v15;
    v21 = v34;
    *(__m128i *)(a1 + 592) = si128;
    if ( !v17 )
    {
      if ( v21 )
        qfree(v21);
      if ( v33.m128i_i64[1] )
        qfree((void *)v33.m128i_i64[1]);
      return sub_5E8630(a1, a2, a3, a4);
    }
    if ( v21 )
      qfree(v21);
    if ( v33.m128i_i64[1] )
      qfree((void *)v33.m128i_i64[1]);
  }
  return 1;
}
