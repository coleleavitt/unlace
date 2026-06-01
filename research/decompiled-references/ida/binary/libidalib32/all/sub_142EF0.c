__m128 *__fastcall sub_142EF0(__m128i *a1)
{
  __m128i v1; // xmm0

  TProgInit::TProgInit(&a1[22].m128i_u64[1], sub_13F0F0, sub_13F0A0, sub_1440B0);
  sub_141840((__int64)a1, (__int64 *)&off_231A88);
  v1 = _mm_loadl_epi64((const __m128i *)&off_233600);
  a1[8].m128i_i64[1] = (__int64)off_238900;
  a1[17].m128i_i64[1] = (__int64)off_238A18;
  a1[19].m128i_i64[0] = (__int64)off_238AA8;
  *a1 = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)off_238838);
  return sub_116BD0();
}

