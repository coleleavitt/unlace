__m128 *__fastcall sub_57A780(__m128 *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int16 v3; // r14
  const void *v4; // r15
  void *v5; // rax
  __m128i v6; // xmm1
  __m128 v8; // xmm3
  __m128i v9; // xmm4
  void *v10; // [rsp+8h] [rbp-60h] BYREF
  __m128i v11; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  *(__int32 *)((char *)&v11.m128i_i32[2] + 2) = 0;
  v3 = *(_WORD *)(a2 + 24);
  v11.m128i_i16[7] = 0;
  if ( v2 )
  {
    v4 = *(const void **)(a2 + 8);
    v5 = off_8C52B8(32LL * v2);
    v10 = v5;
    if ( v4 )
      memcpy(v5, v4, 32LL * v2);
    else
      memset(v5, 0, 32LL * v2);
    v6 = _mm_cvtsi32_si128(v2);
  }
  else
  {
    v10 = nullptr;
    v6 = 0;
  }
  v11.m128i_i16[4] = v3;
  v8 = _mm_loadh_ps((const double *)&v10);
  v11.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), v6).m128i_u64[0];
  v9 = _mm_load_si128(&v11);
  *a1 = v8;
  a1[1] = (__m128)v9;
  return a1;
}
