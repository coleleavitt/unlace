__m128i *__fastcall sub_7E4F90(__m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  const __m128i *v4; // rsi
  __int64 v5; // rcx
  __m128i v6; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm1
  __m128i v10; // [rsp+8h] [rbp-10h] BYREF

  v3 = a3 >> 1;
  v4 = *(const __m128i **)(a2 + 80);
  v5 = v4[145].m128i_i64[1];
  if ( v5 && (unsigned int)v3 < *(_DWORD *)(v5 - 4) )
  {
    v6 = _mm_loadl_epi64(v4 + 9);
    v7 = *(_QWORD *)(v5 + 8 * v3);
    v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, v6);
    if ( v7 )
    {
      if ( (a3 & 1) != 0 )
      {
        v10.m128i_i64[0] = v6.m128i_i64[0];
        v7 = sub_15EC2C0(v6.m128i_i64[0], v7);
        *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, _mm_loadl_epi64(&v10));
        if ( !v7 )
          return a1;
      }
      else
      {
        *a1 = v8;
      }
      ++*(_DWORD *)(v7 + 8);
      return a1;
    }
  }
  else
  {
    v6.m128i_i64[0] = v4[9].m128i_i64[0];
  }
  a1->m128i_i64[0] = 0;
  a1->m128i_i64[1] = v6.m128i_i64[0];
  return a1;
}

