__int64 __fastcall sub_187C80(const __m128i **a1, __int64 a2)
{
  const __m128i *v2; // rbp
  __int64 result; // rax
  __m128i *v6; // rax
  __m128i *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm1
  __int64 v13; // rbx
  __int32 v14; // r14d
  __int64 v15; // rax
  const __m128i *v16; // rdx
  const __m128i *v17; // rsi
  const __m128i *v18; // rdi
  __m128i v19; // xmm1
  __int64 v20; // rcx
  __int64 v21; // rdx
  __m128i v22; // xmm0
  const __m128i *v24; // rcx
  const __m128i *v25; // rsi
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  const __m128i *v28; // [rsp+10h] [rbp-48h]
  const __m128i *v29; // [rsp+18h] [rbp-40h]

  v2 = *(const __m128i **)a2;
  result = 32LL * *(_QWORD *)(a2 + 8);
  if ( result )
  {
    do
    {
      v6 = (__m128i *)*a1;
      v7 = (__m128i *)&(*a1)[2 * (_QWORD)a1[1]];
      if ( *a1 == v7 )
        goto LABEL_15;
      while ( v2[1].m128i_i32[1] != v6[1].m128i_i32[1]
           || v2[1].m128i_i32[2] != v6[1].m128i_i32[2]
           || v2[1].m128i_i32[0] != v6[1].m128i_i32[0] )
      {
        v6 += 2;
        if ( v7 == v6 )
          goto LABEL_15;
      }
      v8 = v2->m128i_i64[0];
      if ( v7 == v6 )
      {
LABEL_15:
        v10 = (unsigned __int64)a1[2];
        v11 = (unsigned __int64)a1[1]->m128i_u64 + 1;
        v12 = _mm_loadu_si128(v2);
        v13 = v2[1].m128i_i64[0];
        v14 = v2[1].m128i_i32[2];
        if ( v10 < v11 )
        {
          v27 = v12;
          v15 = qvector_reserve(a1, 0, v11, 32);
          v16 = a1[1];
          v17 = a1[2];
          a1[2] = (const __m128i *)v10;
          v18 = *a1;
          v19 = _mm_load_si128(&v27);
          v20 = v15;
          v21 = (__int64)&v16[-1].m128i_i64[1] + 7;
          if ( v21 >= 0 )
          {
            do
            {
              v22 = _mm_loadu_si128(v18);
              v15 += 32;
              v18 += 2;
              *(__m128i *)(v15 - 32) = v22;
              *(__m128i *)(v15 - 16) = _mm_loadu_si128(v18 - 1);
            }
            while ( v21-- != 0 );
            v18 = *a1;
          }
          v29 = v17;
          v28 = (const __m128i *)v20;
          v27 = v19;
          qfree(v18);
          v24 = v28;
          v25 = v29;
          v12 = _mm_load_si128(&v27);
          v26 = 2LL * (_QWORD)a1[1];
          *a1 = v28;
          a1[2] = v25;
          v7 = (__m128i *)&v24[v26];
        }
        v7[1].m128i_i64[0] = v13;
        v7[1].m128i_i32[2] = v14;
        *v7 = v12;
        a1[1] = (const __m128i *)((char *)a1[1] + 1);
      }
      else
      {
        if ( v6->m128i_i64[0] > v8 )
          v6->m128i_i64[0] = v8;
        v9 = v2->m128i_i64[1];
        if ( v9 > v6->m128i_i64[1] )
          v6->m128i_i64[1] = v9;
      }
      v2 += 2;
      result = *(_QWORD *)a2 + 32LL * *(_QWORD *)(a2 + 8);
    }
    while ( v2 != (const __m128i *)result );
  }
  return result;
}
