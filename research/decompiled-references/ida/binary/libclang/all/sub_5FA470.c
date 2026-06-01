__m128i *__fastcall sub_5FA470(const __m128i *a1, const __m128i *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __int64 v5; // rax
  const __m128i *v6; // rbp
  __m128i v7; // xmm1
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __m128i *result; // rax
  __int8 *v14; // rbp
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h]
  __int64 v17; // [rsp+18h] [rbp-40h]
  __m128i v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  int v20; // [rsp+38h] [rbp-20h]

  v2 = a1->m128i_i64[0];
  v3 = a1->m128i_i64[1];
  v4 = _mm_loadl_epi64(a2);
  v5 = a1[2].m128i_i64[0];
  v6 = &v15;
  v20 = 3;
  v7 = _mm_loadu_si128(a1 + 1);
  v17 = v3;
  v8 = *(unsigned int *)(v2 + 8);
  v9 = *(unsigned int *)(v2 + 12);
  v10 = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&a2->m128i_u64[1]);
  v19 = v5;
  v16 = 0;
  v11 = *(_QWORD *)v2;
  v12 = v8 + 1;
  v18 = v7;
  v15 = v10;
  if ( v9 < v8 + 1 )
  {
    if ( (unsigned __int64)&v15 < v11 || (unsigned __int64)&v15 >= v11 + (v8 << 6) )
    {
      sub_25D6060(v2, v2 + 16, v12, 64);
      v11 = *(_QWORD *)v2;
      v8 = *(unsigned int *)(v2 + 8);
    }
    else
    {
      v14 = &v15.m128i_i8[-v11];
      sub_25D6060(v2, v2 + 16, v12, 64);
      v11 = *(_QWORD *)v2;
      v8 = *(unsigned int *)(v2 + 8);
      v6 = (const __m128i *)&v14[*(_QWORD *)v2];
    }
  }
  result = (__m128i *)((v8 << 6) + v11);
  *result = _mm_loadu_si128(v6);
  result[1] = _mm_loadu_si128(v6 + 1);
  result[2] = _mm_loadu_si128(v6 + 2);
  result[3] = _mm_loadu_si128(v6 + 3);
  ++*(_DWORD *)(v2 + 8);
  return result;
}

