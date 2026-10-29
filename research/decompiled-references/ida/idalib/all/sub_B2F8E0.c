__m128i *__fastcall sub_B2F8E0(const __m128i *a1, __int64 a2)
{
  __m128i *v2; // rbp
  __int8 v3; // dl
  __int8 v4; // dl

  v2 = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 64, 3u);
  sub_B2F830(v2, a2, a1, a1[2].m128i_i64[1], a1[3].m128i_i64[1], a1[3].m128i_u32[0]);
  v3 = a1[2].m128i_i8[6] & 1 | v2[2].m128i_i8[6] & 0xFE;
  v2[2].m128i_i8[6] = v3;
  v4 = a1[2].m128i_i8[6] & 2 | v3 & 0xFD;
  v2[2].m128i_i8[6] = v4;
  v2[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v4 & 0xFB;
  return v2;
}
