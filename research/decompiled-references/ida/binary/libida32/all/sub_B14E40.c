__m128i *__fastcall sub_B14E40(const __m128i *a1, __int64 *a2)
{
  __m128i *v2; // rbx
  __int8 v3; // dl
  __int8 v4; // dl

  v2 = (__m128i *)sub_99FDF0(a2 + 294, 56, 3u);
  sub_B14D00(v2, a2, a1, a1[3].m128i_i64[0], a1[2].m128i_u32[2]);
  v3 = a1[2].m128i_i8[6] & 1 | v2[2].m128i_i8[6] & 0xFE;
  v2[2].m128i_i8[6] = v3;
  v4 = a1[2].m128i_i8[6] & 2 | v3 & 0xFD;
  v2[2].m128i_i8[6] = v4;
  v2[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v4 & 0xFB;
  return v2;
}

