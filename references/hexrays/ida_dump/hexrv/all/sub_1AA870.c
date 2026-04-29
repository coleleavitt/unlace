const char *__fastcall sub_1AA870(__int64 a1)
{
  __m128i v1; // xmm0
  __m128i v3; // xmm0

  v1 = _mm_loadl_epi64((const __m128i *)&off_4B1238);
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 552) = "GLBLOW";
  *(_QWORD *)(a1 + 720) = 0;
  *(__m128i *)(a1 + 584) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)"sp");
  v3 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4B1240), (__m128i)(unsigned __int64)"retaddr");
  *(_QWORD *)(a1 + 712) = "GLBHIGH";
  *(__m128i *)(a1 + 616) = v3;
  *(__m128i *)(a1 + 648) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4B1248),
                             (__m128i)(unsigned __int64)"shadow");
  *(__m128i *)(a1 + 680) = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4B1250), (__m128i)(unsigned __int64)"arg");
  return "GLBHIGH";
}
