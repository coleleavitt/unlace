const __m128i *__fastcall sub_4F0360(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r13
  __int64 i; // r14
  const char *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  const char *v12; // rdi
  char *v13; // rcx
  __m128i v14; // xmm0
  __int64 v15; // r14
  void *v16; // rdi
  char *v17; // rcx
  __m128i v18; // xmm0
  void *v19; // rdi
  const __m128i *v20; // rax
  __int64 v21; // rsi
  __m128i v22; // xmm4
  __m128i v23; // xmm5
  char *v24; // rsi
  __int64 v25; // r14
  __int64 v26; // r12
  __m128i v27; // xmm0
  char *v28; // rdi
  __int64 v29; // r12
  __m128i v30; // xmm0
  void *v31; // rdi
  const char *v32; // rdi
  __int64 *v33; // r13
  char *v34; // rdi
  __m128i v35; // xmm6
  void *v36; // rdi
  const __m128i *result; // rax
  __m128i v38; // xmm7
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rbp
  __int64 v42; // r13
  __m128i si128; // xmm0
  char *v44; // rdi
  __int64 v45; // r13
  __m128i v46; // xmm0
  void *v47; // rdi
  char *s2[2]; // [rsp+10h] [rbp-88h] BYREF
  __m128i v50; // [rsp+20h] [rbp-78h] BYREF
  __int64 v51; // [rsp+30h] [rbp-68h]
  const __m128i *v52; // [rsp+38h] [rbp-60h]
  __m128i v53; // [rsp+40h] [rbp-58h] BYREF
  __m128i v54[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = (a3 - 1) / 2;
  v51 = a3;
  v52 = a4;
  if ( a2 >= v4 )
  {
    v8 = a2;
    v11 = a1 + 48 * a2;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v7 = haystack;
      v8 = 2 * (i + 1);
      v9 = 96 * (i + 1);
      v10 = a1 + v9 - 48;
      v11 = a1 + v9;
      if ( *(_QWORD *)(v10 + 32) )
        v7 = *(const char **)(v10 + 24);
      v12 = haystack;
      if ( *(_QWORD *)(v11 + 32) )
        v12 = *(const char **)(v11 + 24);
      if ( strcasecmp(v12, v7) < 0 )
      {
        --v8;
        v11 = a1 + 48 * v8;
      }
      v13 = *(char **)v11;
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 8));
      *(_QWORD *)v11 = 0;
      v15 = a1 + 48 * i;
      *(_OWORD *)(v11 + 8) = 0;
      v16 = *(void **)v15;
      if ( *(_QWORD *)v15 )
      {
        *(_QWORD *)(v15 + 8) = 0;
        s2[0] = v13;
        v50 = v14;
        qfree(v16);
        v14 = _mm_load_si128(&v50);
        v13 = s2[0];
      }
      *(_QWORD *)v15 = v13;
      *(__m128i *)(v15 + 8) = v14;
      v17 = *(char **)(v11 + 24);
      v18 = _mm_loadu_si128((const __m128i *)(v11 + 32));
      *(_QWORD *)(v11 + 24) = 0;
      *(_OWORD *)(v11 + 32) = 0;
      v19 = *(void **)(v15 + 24);
      if ( v19 )
      {
        *(_QWORD *)(v15 + 32) = 0;
        s2[0] = v17;
        v50 = v18;
        qfree(v19);
        v18 = _mm_load_si128(&v50);
        v17 = s2[0];
      }
      *(_QWORD *)(v15 + 24) = v17;
      *(__m128i *)(v15 + 32) = v18;
      if ( v8 >= v4 )
        break;
    }
  }
  if ( (v51 & 1) == 0 && (v51 - 2) / 2 == v8 )
  {
    v39 = v8 + 1;
    v40 = 2 * (v8 + 1);
    v41 = a1 + 16 * (v40 + 4 * v39) - 48;
    v42 = *(_QWORD *)v41;
    si128 = _mm_loadu_si128((const __m128i *)(v41 + 8));
    *(_OWORD *)(v41 + 8) = 0;
    *(_QWORD *)v41 = 0;
    v44 = *(char **)v11;
    if ( *(_QWORD *)v11 )
    {
      *(_QWORD *)(v11 + 8) = 0;
      *(__m128i *)s2 = si128;
      qfree(v44);
      si128 = _mm_load_si128((const __m128i *)s2);
    }
    *(_QWORD *)v11 = v42;
    *(__m128i *)(v11 + 8) = si128;
    v45 = *(_QWORD *)(v41 + 24);
    v46 = _mm_loadu_si128((const __m128i *)(v41 + 32));
    *(_QWORD *)(v41 + 24) = 0;
    *(_OWORD *)(v41 + 32) = 0;
    v47 = *(void **)(v11 + 24);
    if ( v47 )
    {
      *(_QWORD *)(v11 + 32) = 0;
      *(__m128i *)s2 = v46;
      qfree(v47);
      v46 = _mm_load_si128((const __m128i *)s2);
    }
    v8 = v40 - 1;
    *(_QWORD *)(v11 + 24) = v45;
    *(__m128i *)(v11 + 32) = v46;
    v11 = a1 + 48 * v8;
  }
  v20 = v52;
  v21 = v52->m128i_i64[0];
  v22 = _mm_loadu_si128(v52 + 2);
  v52[2] = 0;
  v23 = _mm_loadu_si128((const __m128i *)&v20->m128i_u64[1]);
  v20->m128i_i64[0] = 0;
  v51 = v21;
  v24 = (char *)v20[1].m128i_i64[1];
  v20[1].m128i_i64[1] = 0;
  *(const __m128i *)((char *)v20 + 8) = 0;
  v52 = (const __m128i *)v24;
  v53 = v23;
  v54[0] = v22;
  v25 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    if ( !v22.m128i_i64[0] )
      v24 = (char *)haystack;
    s2[0] = v24;
    while ( 1 )
    {
      v32 = haystack;
      v33 = (__int64 *)(a1 + 48 * v25);
      if ( v33[4] )
        v32 = (const char *)v33[3];
      v11 = a1 + 48 * v8;
      if ( strcasecmp(v32, s2[0]) >= 0 )
        break;
      v26 = *v33;
      v27 = _mm_loadu_si128((const __m128i *)(v33 + 1));
      *v33 = 0;
      *(_OWORD *)(v33 + 1) = 0;
      v28 = *(char **)v11;
      if ( *(_QWORD *)v11 )
      {
        *(_QWORD *)(v11 + 8) = 0;
        v50 = v27;
        qfree(v28);
        v27 = _mm_load_si128(&v50);
      }
      *(_QWORD *)v11 = v26;
      *(__m128i *)(v11 + 8) = v27;
      v29 = v33[3];
      v30 = _mm_loadu_si128((const __m128i *)v33 + 2);
      v33[3] = 0;
      *((_OWORD *)v33 + 2) = 0;
      v31 = *(void **)(v11 + 24);
      if ( v31 )
      {
        *(_QWORD *)(v11 + 32) = 0;
        v50 = v30;
        qfree(v31);
        v30 = _mm_load_si128(&v50);
      }
      *(_QWORD *)(v11 + 24) = v29;
      v8 = v25;
      *(__m128i *)(v11 + 32) = v30;
      if ( a2 >= v25 )
      {
        v11 = a1 + 48 * v25;
        break;
      }
      v25 = (v25 - 1) / 2;
    }
  }
  v34 = *(char **)v11;
  if ( *(_QWORD *)v11 )
  {
    *(_QWORD *)(v11 + 8) = 0;
    qfree(v34);
  }
  v35 = _mm_load_si128(&v53);
  v36 = *(void **)(v11 + 24);
  *(_QWORD *)v11 = v51;
  *(__m128i *)(v11 + 8) = v35;
  if ( v36 )
  {
    *(_QWORD *)(v11 + 32) = 0;
    qfree(v36);
  }
  result = v52;
  v38 = _mm_load_si128(v54);
  *(_QWORD *)(v11 + 24) = v52;
  *(__m128i *)(v11 + 32) = v38;
  return result;
}
