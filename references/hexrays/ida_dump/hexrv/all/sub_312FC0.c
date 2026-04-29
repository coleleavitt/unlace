__int64 __fastcall sub_312FC0(__int64 *a1, __m128i **a2)
{
  __int64 v2; // rax
  __m128i *v3; // r12
  __m128i *v6; // rbx
  __m128i *v7; // rbp
  __m128i *v8; // rsi
  __m128i *v9; // rbx
  __m128i *v10; // r12
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // xmm1_8
  __m128i *v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int8 *v21; // r8
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r15
  void *v24; // rbx
  __m128i *v25; // rdi
  __int64 v26; // rax
  __m128i *v27; // rdi
  unsigned __int8 v28; // [rsp+8h] [rbp-40h]
  __int8 *v29; // [rsp+8h] [rbp-40h]

  v2 = a1[1];
  v28 = 0;
  if ( !v2 )
    return v28;
  v3 = a2[1];
  if ( v3 == (__m128i *)&byte_1 )
  {
    if ( !(*a2)->m128i_i64[0] && !(*a2)->m128i_i64[1] )
      return v28;
  }
  else if ( !v3 )
  {
    v27 = (__m128i *)*a1;
    if ( v27 )
    {
      a1[1] = 0;
      qfree(v27);
      *a1 = 0;
      a1[2] = 0;
    }
    return 1;
  }
  v6 = (__m128i *)*a1;
  if ( v2 == 1 )
  {
    if ( v6->m128i_i64[0] || v6->m128i_i64[1] )
    {
      v7 = *a2;
      goto LABEL_6;
    }
    v24 = (void *)qalloc_or_throw(16LL * (_QWORD)v3);
    memcpy(v24, *a2, 16LL * (_QWORD)v3);
    v25 = (__m128i *)*a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v25);
    }
    *a1 = (__int64)v24;
    *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
    return 1;
  }
  v7 = *a2;
  if ( 16 * v2 )
  {
LABEL_6:
    v28 = 0;
    v8 = v7;
    while ( 1 )
    {
      v7 = (__m128i *)sub_312C70(
                        (__int64)v7,
                        (__int64)v8[(_QWORD)v3].m128i_i64,
                        v6,
                        (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3117D0);
      if ( v7 == &(*a2)[(_QWORD)a2[1]] )
      {
        a1[1] -= (*a1 + 16 * a1[1] - (__int64)v6) >> 4;
        return 1;
      }
      v12 = _mm_loadu_si128(v6);
      v13 = v7->m128i_i64[0];
      v14 = _mm_add_epi64(_mm_srli_si128(v12, 8), v12).m128i_u64[0];
      if ( v12.m128i_i64[0] < (unsigned __int64)v7->m128i_i64[0] )
      {
        if ( v14 - 1 < v13 )
        {
          v15 = v6;
LABEL_21:
          v9 = (__m128i *)sub_312800(
                            (__int64)v6,
                            *a1 + 16 * a1[1],
                            v7,
                            (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3117D0);
          if ( v15 >= v9 )
            goto LABEL_13;
          goto LABEL_22;
        }
        v28 = 1;
        *v6 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)(v14 - v13));
        v13 = v7->m128i_i64[0];
      }
      v15 = v6 + 1;
      v16 = v7->m128i_i64[1] + v13;
      if ( !v16 || v14 - 1 < v16 )
        goto LABEL_21;
      v6->m128i_i64[1] = v16 - v6->m128i_i64[0];
      v9 = (__m128i *)sub_312800(
                        (__int64)v6,
                        *a1 + 16 * a1[1],
                        v7,
                        (unsigned __int8 (__fastcall *)(_QWORD, __int64))sub_3117D0);
      if ( v15 >= v9 )
      {
        v10 = v7 + 1;
        if ( &v7[1] == &(*a2)[(_QWORD)a2[1]] || v14 && v7[1].m128i_i64[0] >= v14 )
        {
          v28 = 1;
          ++v7;
LABEL_13:
          v11 = a1[1];
          v6 = v9 + 1;
        }
        else
        {
          v19 = _mm_loadu_si128(v7);
          v6 = v9 + 1;
          v20 = a1[1];
          v21 = &v6->m128i_i8[-*a1];
          v22 = _mm_add_epi64(v19, _mm_srli_si128(v19, 8)).m128i_u64[0];
          v23 = v14 - v22;
          if ( a1[2] < (unsigned __int64)(v20 + 1) )
          {
            v29 = &v6->m128i_i8[-*a1];
            v26 = qvector_reserve(a1, *a1, v20 + 1, 16);
            v21 = v29;
            v20 = a1[1];
            *a1 = v26;
            v6 = (__m128i *)&v29[v26];
          }
          memmove(&v6[1], v6, 16 * v20 - (_QWORD)v21);
          v6->m128i_i64[0] = v22;
          v7 = v10;
          v6->m128i_i64[1] = v23;
          v28 = 1;
          v11 = a1[1] + 1;
          a1[1] = v11;
        }
        if ( v6 == (__m128i *)(*a1 + 16 * v11) )
          return v28;
        goto LABEL_15;
      }
LABEL_22:
      memmove(v15, v9, *a1 + 16 * a1[1] - (_QWORD)v9);
      v28 = 1;
      v17 = a1[1] - (v9 - v15);
      v6 = v15;
      a1[1] = v17;
      if ( v15 == (__m128i *)(*a1 + 16 * v17) )
        return v28;
LABEL_15:
      v8 = *a2;
      v3 = a2[1];
    }
  }
  return 0;
}
