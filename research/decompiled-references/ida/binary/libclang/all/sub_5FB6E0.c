__m128i *__fastcall sub_5FB6E0(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int64 v3; // rbp
  __m128i v4; // xmm0
  __m128i v5; // xmm2
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i v8; // xmm1
  unsigned __int64 v9; // rcx
  __m128i *v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int8 *v14; // rbx
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h]
  __int64 v17; // [rsp+18h] [rbp-40h]
  __m128i v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  int v20; // [rsp+38h] [rbp-20h]

  sub_5F9AA0(a1, a2);
  result = *(__m128i **)(a2 + 24);
  if ( result )
  {
    v3 = a1->m128i_i64[0];
    v4 = _mm_loadl_epi64(result);
    v20 = 3;
    v5 = (__m128i)(unsigned __int64)&result->m128i_u64[1];
    v6 = a1->m128i_i64[1];
    v7 = a1[2].m128i_i64[0];
    v16 = 0;
    v8 = _mm_loadu_si128(a1 + 1);
    v9 = *(unsigned int *)(v3 + 12);
    v10 = &v15;
    v17 = v6;
    v11 = *(unsigned int *)(v3 + 8);
    v19 = v7;
    v12 = *(_QWORD *)v3;
    v13 = v11 + 1;
    v18 = v8;
    v15 = _mm_unpacklo_epi64(v4, v5);
    if ( v9 < v11 + 1 )
    {
      if ( (unsigned __int64)&v15 < v12 || (unsigned __int64)&v15 >= v12 + (v11 << 6) )
      {
        sub_25D6060(v3, v3 + 16, v13, 64);
        v12 = *(_QWORD *)v3;
        v11 = *(unsigned int *)(v3 + 8);
      }
      else
      {
        v14 = &v15.m128i_i8[-v12];
        sub_25D6060(v3, v3 + 16, v13, 64);
        v12 = *(_QWORD *)v3;
        v11 = *(unsigned int *)(v3 + 8);
        v10 = (__m128i *)&v14[*(_QWORD *)v3];
      }
    }
    result = (__m128i *)((v11 << 6) + v12);
    *result = _mm_loadu_si128(v10);
    result[1] = _mm_loadu_si128(v10 + 1);
    result[2] = _mm_loadu_si128(v10 + 2);
    result[3] = _mm_loadu_si128(v10 + 3);
    ++*(_DWORD *)(v3 + 8);
  }
  return result;
}

