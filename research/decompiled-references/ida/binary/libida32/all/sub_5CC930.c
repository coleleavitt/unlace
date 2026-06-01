__int64 __fastcall sub_5CC930(__int64 a1, __int64 *a2, const void *a3, int a4)
{
  size_t v8; // r15
  void *v10; // rax
  const void *v11; // rsi
  __int64 v12; // rax
  const char *v13; // rdx
  __int8 v14; // r8
  void *v15; // rdi
  const char *v16; // rsi
  void *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // r8
  __m128i v22; // xmm0
  void *v23; // rdi
  __m128i si128; // xmm0
  void *v25; // rax
  size_t v27; // rax
  size_t v28; // rbx
  size_t v29; // r14
  void *v30; // rax
  const void *v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rax
  void *v34; // rdi
  size_t v35; // r13
  __int64 v36; // rax
  __m128i v37; // [rsp+8h] [rbp-60h] BYREF
  void *v38; // [rsp+18h] [rbp-50h]
  __m128i v39[4]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 608);
  if ( v8 <= 1 )
    return sub_5CC840(a1, a2, a3, a4);
  if ( !strcmp(*(const char **)(a1 + 600), (const char *)a3) && a2 )
  {
    if ( a3 && (v27 = strlen((const char *)a3), (v28 = v27) != 0) )
    {
      v34 = (void *)*a2;
      v35 = v27 + 1;
      if ( a2[2] < v27 + 1 )
      {
        v36 = qvector_reserve(a2, *a2, v27 + 1, 1);
        *a2 = v36;
        v34 = (void *)v36;
      }
      a2[1] = v35;
      memmove(v34, a3, v28);
      *(_BYTE *)(*a2 + v28) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  else
  {
    v10 = (void *)qalloc_or_throw(v8, (const char *)a3);
    v11 = *(const void **)(a1 + 600);
    v37.m128i_i64[1] = (__int64)v10;
    memcpy(v10, v11, v8);
    v12 = *(_QWORD *)(a1 + 584);
    v38 = nullptr;
    v37.m128i_i64[0] = v12;
    if ( v12 )
    {
      v29 = 4 * v12;
      v30 = (void *)qalloc_or_throw(4 * v12, (const char *)v11);
      v31 = *(const void **)(a1 + 576);
      v38 = v30;
      memcpy(v30, v31, v29);
    }
    while ( *(_QWORD *)(a1 + 608) > 1u )
    {
      sub_5CC390((_QWORD *)a1, (const char *)a3);
      v13 = haystack;
      if ( *(_QWORD *)(a1 + 608) )
        v13 = *(const char **)(a1 + 600);
      v14 = sub_5CC840(a1, a2, v13, a4);
      if ( v14 )
        goto LABEL_13;
      sub_5CC5E0((_QWORD *)a1);
      sub_5CC5E0((_QWORD *)a1);
    }
    v14 = 0;
LABEL_13:
    v15 = *(void **)(a1 + 600);
    if ( *(_QWORD *)(a1 + 616) < v8 )
    {
      v32 = *(_QWORD *)(a1 + 600);
      v39[0].m128i_i8[0] = v14;
      v33 = qvector_reserve(a1 + 600, v32, v8, 1);
      *(_QWORD *)(a1 + 600) = v33;
      v14 = v39[0].m128i_i8[0];
      v15 = (void *)v33;
    }
    *(_QWORD *)(a1 + 608) = v8;
    v16 = (const char *)v37.m128i_i64[1];
    v17 = nullptr;
    v39[0].m128i_i8[0] = v14;
    memmove(v15, (const void *)v37.m128i_i64[1], v8 - 1);
    v20 = v37.m128i_i64[0] == 0;
    v21 = v39[0].m128i_u8[0];
    *(_BYTE *)(*(_QWORD *)(a1 + 600) + v8 - 1) = 0;
    if ( !v20 )
    {
      v17 = (void *)qalloc_or_throw(4 * v37.m128i_i64[0], v16, v18, v19, v21);
      memcpy(v17, v38, 4 * v37.m128i_i64[0]);
      LOBYTE(v21) = v39[0].m128i_i8[0];
    }
    v22 = _mm_loadl_epi64(&v37);
    v23 = *(void **)(a1 + 576);
    si128 = _mm_unpacklo_epi64(v22, v22);
    if ( v23 )
    {
      *(_QWORD *)(a1 + 584) = 0;
      v37.m128i_i8[0] = v21;
      v39[0] = si128;
      qfree(v23);
      si128 = _mm_load_si128(v39);
      LOBYTE(v21) = v37.m128i_i8[0];
    }
    *(_QWORD *)(a1 + 576) = v17;
    v25 = v38;
    *(__m128i *)(a1 + 584) = si128;
    if ( !(_BYTE)v21 )
    {
      if ( v25 )
        qfree(v25);
      if ( v37.m128i_i64[1] )
        qfree((void *)v37.m128i_i64[1]);
      return sub_5CC840(a1, a2, a3, a4);
    }
    if ( v25 )
      qfree(v25);
    if ( v37.m128i_i64[1] )
      qfree((void *)v37.m128i_i64[1]);
  }
  return 1;
}

