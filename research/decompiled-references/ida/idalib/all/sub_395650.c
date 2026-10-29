void __fastcall sub_395650(__m128i *a1)
{
  *a1 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B25C60), (__m128i)(unsigned __int64)&off_2BF99C8);
  remove_event_listener();
}
