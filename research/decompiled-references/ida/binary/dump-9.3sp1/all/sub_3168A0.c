__int64 __fastcall sub_3168A0(const __m128i *a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  __m128i v3; // xmm0
  __int32 v4; // edx

  v3 = _mm_loadu_si128(a1);
  v3.m128i_i64[0] = _mm_add_epi64(v3, _mm_srli_si128(v3, 8)).m128i_u64[0];
  v4 = v3.m128i_i32[0];
  LOBYTE(v2) = v3.m128i_i64[0] < a2;
  LOBYTE(v4) = v3.m128i_i64[0] != 0;
  return v4 & v2;
}
