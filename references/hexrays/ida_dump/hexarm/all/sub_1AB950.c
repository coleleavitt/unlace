__m128i *__fastcall sub_1AB950(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *result; // rax
  __int64 v7; // r14
  __m128i *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rsi
  const __m128i *v11; // rbx
  __m128i *v12; // rax
  __int64 v13; // rcx
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __m128i *v17; // rcx
  __m128i *v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // xmm1
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __int64 v30; // rax
  char v31; // dl
  __m128i v32; // xmm2
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  __int64 v35; // rax
  __m128i v36; // [rsp+30h] [rbp-58h]
  __m128i v37; // [rsp+40h] [rbp-48h]
  __int64 v38; // [rsp+50h] [rbp-38h]

  result = (__m128i *)((char *)a2 - a1);
  if ( (__int64)a2->m128i_i64 - a1 <= 640 )
    return result;
  v7 = a3;
  v8 = a2;
  if ( !a3 )
  {
LABEL_18:
    sub_1AB810((const __m128i *)a1, v8, (unsigned __int64)v8, a4, a5, a6);
    for ( result = (__m128i *)((char *)v8 - a1);
          (__int64)v8->m128i_i64 - a1 > 40;
          result = sub_194F20(
                     a1,
                     0,
                     0xCCCCCCCCCCCCCCCDLL * (((__int64)v8->m128i_i64 - a1) >> 3),
                     v23,
                     v24,
                     v25,
                     v26,
                     v27,
                     v27.m128i_i64[0]) )
    {
      v26 = (__int128)_mm_loadu_si128((__m128i *)((char *)v8 - 40));
      v8 = (__m128i *)((char *)v8 - 40);
      v27 = _mm_loadu_si128(v8 + 1);
      *v8 = _mm_loadu_si128((const __m128i *)a1);
      v8[1] = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v8[2].m128i_i8[0] = *(_BYTE *)(a1 + 32);
    }
    return result;
  }
  while ( 2 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = v8[-1].m128i_i64[0];
    --v7;
    v11 = (const __m128i *)(a1 + 40);
    v12 = (__m128i *)(a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * ((__int64)result >> 3)) >> 1));
    v13 = v12[1].m128i_i64[1];
    if ( v9 < v13 )
    {
      if ( v10 > v13 )
        goto LABEL_6;
      if ( v10 > v9 )
      {
LABEL_24:
        v33 = _mm_loadu_si128((const __m128i *)a1);
        v34 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v35 = *(_QWORD *)(a1 + 32);
        *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v8 - 40));
        v38 = v35;
        *(__m128i *)(a1 + 16) = _mm_loadu_si128((__m128i *)((char *)v8 - 24));
        v36 = v33;
        *(_BYTE *)(a1 + 32) = v8[-1].m128i_i8[8];
        v37 = v34;
        v8[-1].m128i_i8[8] = v35;
        *(__m128i *)((char *)v8 - 40) = v33;
        *(__m128i *)((char *)v8 - 24) = v34;
        goto LABEL_7;
      }
LABEL_23:
      v28 = _mm_loadu_si128((const __m128i *)a1);
      v29 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v30 = *(_QWORD *)(a1 + 32);
      v31 = *(_BYTE *)(a1 + 72);
      *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      v32 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      v38 = v30;
      *(_BYTE *)(a1 + 32) = v31;
      *(_BYTE *)(a1 + 72) = v30;
      v36 = v28;
      v37 = v29;
      *(__m128i *)(a1 + 16) = v32;
      *(__m128i *)(a1 + 40) = v28;
      *(__m128i *)(a1 + 56) = v29;
      goto LABEL_7;
    }
    if ( v10 > v9 )
      goto LABEL_23;
    if ( v10 > v13 )
      goto LABEL_24;
LABEL_6:
    v14 = _mm_loadu_si128((const __m128i *)a1);
    v15 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v16 = *(_QWORD *)(a1 + 32);
    *(__m128i *)a1 = _mm_loadu_si128(v12);
    v38 = v16;
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(v12 + 1);
    v36 = v14;
    *(_BYTE *)(a1 + 32) = v12[2].m128i_i8[0];
    v12[2].m128i_i8[0] = v16;
    v37 = v15;
    *v12 = v14;
    v12[1] = v15;
LABEL_7:
    v17 = v8;
    while ( 1 )
    {
      v22 = *(_QWORD *)(a1 + 24);
      if ( v11[1].m128i_i64[1] < v22 )
        break;
      v18 = (__m128i *)((char *)v17 - 40);
      if ( v17[-1].m128i_i64[0] > v22 )
        goto LABEL_14;
LABEL_9:
      if ( v11 >= v18 )
        goto LABEL_16;
LABEL_10:
      v19 = _mm_loadu_si128(v11);
      v11 = (const __m128i *)((char *)v11 + 40);
      v20 = _mm_loadu_si128((const __m128i *)((char *)v11 - 24));
      v21 = v11[-1].m128i_i64[1];
      *(const __m128i *)((char *)&v11[-3] + 8) = _mm_loadu_si128(v18);
      v38 = v21;
      *(const __m128i *)((char *)&v11[-2] + 8) = _mm_loadu_si128(v18 + 1);
      v36 = v19;
      v11[-1].m128i_i8[8] = v18[2].m128i_i8[0];
      v17 = v18;
      v18[2].m128i_i8[0] = v21;
      v37 = v20;
      *v18 = v19;
      v18[1] = v20;
    }
    do
      v11 = (const __m128i *)((char *)v11 + 40);
    while ( v11[1].m128i_i64[1] < v22 );
    v18 = (__m128i *)((char *)v17 - 40);
    if ( v17[-1].m128i_i64[0] <= v22 )
      goto LABEL_9;
    do
LABEL_14:
      v18 = (__m128i *)((char *)v18 - 40);
    while ( v18[1].m128i_i64[1] > v22 );
    if ( v11 < v18 )
      goto LABEL_10;
LABEL_16:
    sub_1AB950(v11, v8, v7, v17, a5, a6, v36.m128i_i64[0], v36.m128i_i64[1], v37.m128i_i64[0], v37.m128i_i64[1], v38);
    result = (__m128i *)((char *)v11 - a1);
    if ( (__int64)v11->m128i_i64 - a1 > 640 )
    {
      v8 = (__m128i *)v11;
      if ( !v7 )
        goto LABEL_18;
      continue;
    }
    return result;
  }
}
