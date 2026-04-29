__m128i *__fastcall sub_FC00(const __m128i **a1, const __m128i *a2)
{
  const __m128i *v3; // rax
  __int64 v4; // r12
  const __m128i *v5; // r13
  unsigned __int64 v6; // rdx
  __m128i *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rax
  const __m128i *v12; // rdx
  const __m128i *v13; // r14
  const __m128i *v14; // rdi
  __int64 v15; // rdx
  __m128i v16; // xmm0
  bool v17; // cf
  __int64 v18; // rax
  const __m128i *v19; // rdx
  const __m128i *v20; // rbp
  const __m128i *v21; // rdi
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i v24; // [rsp+0h] [rbp-58h] BYREF
  __m128i v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+20h] [rbp-38h]

  v3 = a1[1];
  v4 = (__int64)*a1;
  v5 = a1[2];
  v6 = (unsigned __int64)v3->m128i_u64 + 1;
  if ( a2 >= *a1 && (unsigned __int64)a2 < v4 + 40 * (__int64)v5 )
  {
    v8 = a2[2].m128i_i64[0];
    v24 = _mm_loadu_si128(a2);
    v26 = v8;
    v25 = _mm_loadu_si128(a2 + 1);
    if ( (unsigned __int64)v5 < v6 )
    {
      v18 = qvector_reserve(a1, 0, v6, 40);
      v19 = a1[1];
      v20 = a1[2];
      a1[2] = v5;
      v21 = *a1;
      v4 = v18;
      v22 = (__int64)&v19[-1].m128i_i64[1] + 7;
      if ( v22 >= 0 )
      {
        do
        {
          v23 = _mm_loadu_si128(v21);
          v18 += 40;
          v21 = (const __m128i *)((char *)v21 + 40);
          *(__m128i *)(v18 - 40) = v23;
          *(__m128i *)(v18 - 24) = _mm_loadu_si128((const __m128i *)((char *)v21 - 24));
          *(_QWORD *)(v18 - 8) = v21[-1].m128i_i64[1];
          v17 = v22-- == 0;
        }
        while ( !v17 );
        v21 = *a1;
      }
      qfree(v21);
      *a1 = (const __m128i *)v4;
      v3 = a1[1];
      a1[2] = v20;
    }
    v9 = v26;
    result = (__m128i *)(v4 + 40LL * (_QWORD)v3);
    *result = _mm_load_si128(&v24);
    v10 = _mm_load_si128(&v25);
    result[2].m128i_i64[0] = v9;
    result[1] = v10;
  }
  else
  {
    if ( (unsigned __int64)v5 < v6 )
    {
      v11 = qvector_reserve(a1, 0, v6, 40);
      v12 = a1[1];
      v13 = a1[2];
      a1[2] = v5;
      v14 = *a1;
      v4 = v11;
      v15 = (__int64)&v12[-1].m128i_i64[1] + 7;
      if ( v15 >= 0 )
      {
        do
        {
          v16 = _mm_loadu_si128(v14);
          v11 += 40;
          v14 = (const __m128i *)((char *)v14 + 40);
          *(__m128i *)(v11 - 40) = v16;
          *(__m128i *)(v11 - 24) = _mm_loadu_si128((const __m128i *)((char *)v14 - 24));
          *(_QWORD *)(v11 - 8) = v14[-1].m128i_i64[1];
          v17 = v15-- == 0;
        }
        while ( !v17 );
        v14 = *a1;
      }
      qfree(v14);
      *a1 = (const __m128i *)v4;
      v3 = a1[1];
      a1[2] = v13;
    }
    result = (__m128i *)(v4 + 40LL * (_QWORD)v3);
    *result = _mm_loadu_si128(a2);
    result[1] = _mm_loadu_si128(a2 + 1);
    result[2].m128i_i64[0] = a2[2].m128i_i64[0];
  }
  a1[1] = (const __m128i *)((char *)a1[1] + 1);
  return result;
}
