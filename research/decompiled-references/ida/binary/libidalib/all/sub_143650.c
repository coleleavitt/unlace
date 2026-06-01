__m128 *__fastcall sub_143650(__m128i *a1)
{
  __m128i v1; // xmm0

  TProgInit::TProgInit(&a1[22].m128i_u64[1], sub_13F840, sub_13F7F0, sub_144810);
  sub_141FA0((__int64)a1, (__int64 *)&off_232A88);
  v1 = _mm_loadl_epi64((const __m128i *)&off_234600);
  a1[8].m128i_i64[1] = (__int64)off_239900;
  a1[17].m128i_i64[1] = (__int64)off_239A18;
  a1[19].m128i_i64[0] = (__int64)off_239AA8;
  *a1 = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)off_239838);
  return sub_116FD0();
}

