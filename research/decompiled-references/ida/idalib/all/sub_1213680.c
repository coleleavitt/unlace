unsigned __int64 __fastcall sub_1213680(__int64 a1)
{
  __m128i v1; // rax
  __m128i v3; // [rsp+0h] [rbp-18h] BYREF

  v1.m128i_i64[0] = sub_112B370(a1);
  v3 = v1;
  return _mm_or_si128(_mm_load_si128((const __m128i *)&xmmword_23A9C10), _mm_load_si128(&v3)).m128i_u64[0];
}
