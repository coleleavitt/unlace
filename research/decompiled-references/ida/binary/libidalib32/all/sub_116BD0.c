__m128 *sub_116BD0()
{
  unk_255EB0 = sub_116A70;
  xmmword_255E80[0] = _mm_loadh_ps((const double *)&off_243EA8);
  xmmword_255E80[1] = (__m128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_230D20),
                                (__m128i)(unsigned __int64)sub_116B60);
  xmmword_255E80[2] = (__m128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_230D28),
                                (__m128i)(unsigned __int64)sub_116AF0);
  return xmmword_255E80;
}

