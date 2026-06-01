__int64 __fastcall sub_3180C0(__int64 *a1, __int64 a2, __m128i *a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __m128i *v8; // rbx
  __m128i *v9; // rbp
  __m128i *v10; // rsi
  __m128i *v11; // rbx
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // xmm1_8
  __m128i *v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int8 *v22; // r8
  unsigned __int64 v23; // xmm0_8
  void *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int8 v28; // [rsp+8h] [rbp-40h]
  __int8 *v29; // [rsp+8h] [rbp-40h]

  v4 = a1[1];
  v28 = 0;
  if ( !v4 )
    return v28;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 == 1 )
  {
    a3 = *(__m128i **)a2;
    if ( !**(_QWORD **)a2 && !a3->m128i_i64[1] )
      return v28;
  }
  else if ( !v5 )
  {
    v27 = *a1;
    if ( v27 )
    {
      a1[1] = 0;
      qfree(v27);
      *a1 = 0;
      a1[2] = 0;
    }
    return 1;
  }
  v8 = (__m128i *)*a1;
  if ( v4 == 1 )
  {
    if ( v8->m128i_i64[0] || v8->m128i_i64[1] )
    {
      v9 = *(__m128i **)a2;
      goto LABEL_6;
    }
    v24 = (void *)qalloc_or_throw(16 * v5, a2, (__int64)a3, a4);
    memcpy(v24, *(const void **)a2, 16 * v5);
    v25 = *a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v25);
    }
    *a1 = (__int64)v24;
    *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    return 1;
  }
  v9 = *(__m128i **)a2;
  if ( 16 * v4 )
  {
LABEL_6:
    v28 = 0;
    v10 = v9;
    while ( 1 )
    {
      v9 = (__m128i *)sub_317D70(
                        (__int64)v9,
                        (__int64)v10[v5].m128i_i64,
                        v8,
                        (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3168D0);
      if ( v9 == (__m128i *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) )
      {
        a1[1] -= (*a1 + 16 * a1[1] - (__int64)v8) >> 4;
        return 1;
      }
      v13 = _mm_loadu_si128(v8);
      v14 = v9->m128i_i64[0];
      v15 = _mm_add_epi64(_mm_srli_si128(v13, 8), v13).m128i_u64[0];
      if ( v13.m128i_i64[0] < (unsigned __int64)v9->m128i_i64[0] )
      {
        if ( v15 - 1 < v14 )
        {
          v16 = v8;
LABEL_21:
          v11 = (__m128i *)sub_317900(
                             (__int64)v8,
                             *a1 + 16 * a1[1],
                             v9,
                             (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3168D0);
          if ( v16 >= v11 )
            goto LABEL_13;
          goto LABEL_22;
        }
        v28 = 1;
        *v8 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)(v15 - v14));
        v14 = v9->m128i_i64[0];
      }
      v16 = v8 + 1;
      v17 = v9->m128i_i64[1] + v14;
      if ( !v17 || v15 - 1 < v17 )
        goto LABEL_21;
      v8->m128i_i64[1] = v17 - v8->m128i_i64[0];
      v11 = (__m128i *)sub_317900(
                         (__int64)v8,
                         *a1 + 16 * a1[1],
                         v9,
                         (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3168D0);
      if ( v16 >= v11 )
      {
        if ( &v9[1] == (__m128i *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) || v15 && v9[1].m128i_i64[0] >= v15 )
        {
          v28 = 1;
          ++v9;
LABEL_13:
          v12 = a1[1];
          v8 = v11 + 1;
        }
        else
        {
          v20 = _mm_loadu_si128(v9);
          v8 = v11 + 1;
          v21 = a1[1];
          v22 = &v8->m128i_i8[-*a1];
          v23 = _mm_add_epi64(v20, _mm_srli_si128(v20, 8)).m128i_u64[0];
          if ( a1[2] < (unsigned __int64)(v21 + 1) )
          {
            v29 = &v8->m128i_i8[-*a1];
            v26 = qvector_reserve((__int64)a1, *a1, v21 + 1, 16);
            v22 = v29;
            v21 = a1[1];
            *a1 = v26;
            v8 = (__m128i *)&v29[v26];
          }
          memmove(&v8[1], v8, 16 * v21 - (_QWORD)v22);
          v8->m128i_i64[0] = v23;
          ++v9;
          v8->m128i_i64[1] = v15 - v23;
          v28 = 1;
          v12 = a1[1] + 1;
          a1[1] = v12;
        }
        if ( v8 == (__m128i *)(*a1 + 16 * v12) )
          return v28;
        goto LABEL_15;
      }
LABEL_22:
      memmove(v16, v11, *a1 + 16 * a1[1] - (_QWORD)v11);
      v28 = 1;
      v18 = a1[1] - (v11 - v16);
      v8 = v16;
      a1[1] = v18;
      if ( v16 == (__m128i *)(*a1 + 16 * v18) )
        return v28;
LABEL_15:
      v10 = *(__m128i **)a2;
      v5 = *(_QWORD *)(a2 + 8);
    }
  }
  return 0;
}
