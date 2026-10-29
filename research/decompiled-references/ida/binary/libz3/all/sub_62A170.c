__m128i *__fastcall sub_62A170(__m128i *a1, const __m128i *a2, unsigned __int64 a3)
{
  __m128i v3; // xmm0
  __int64 v5; // rax
  __m128i v6; // [rsp+8h] [rbp-10h] BYREF

  v3 = _mm_loadl_epi64(a2);
  if ( !*(_WORD *)(a3 + 4) )
  {
    ++*(_DWORD *)(a3 + 8);
    *a1 = _mm_unpacklo_epi64((__m128i)a3, v3);
    return a1;
  }
  v6.m128i_i64[0] = v3.m128i_i64[0];
  v5 = sub_15E1B70(v3.m128i_i32[0]);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, _mm_loadl_epi64(&v6));
  if ( !v5 )
    return a1;
  ++*(_DWORD *)(v5 + 8);
  return a1;
}

