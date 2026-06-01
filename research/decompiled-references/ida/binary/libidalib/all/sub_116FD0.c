__m128 *sub_116FD0()
{
  unk_257070 = sub_116E70;
  xmmword_257040[0] = _mm_loadh_ps((const double *)&off_244EB0);
  xmmword_257040[1] = (__m128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_231D20),
                                (__m128i)(unsigned __int64)sub_116F60);
  xmmword_257040[2] = (__m128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_231D28),
                                (__m128i)(unsigned __int64)sub_116EF0);
  return xmmword_257040;
}

