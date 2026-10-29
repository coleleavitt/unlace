void __fastcall sub_390880(__m128i *a1)
{
  *a1 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFCB20), (__m128i)(unsigned __int64)&off_2BCFA28);
  remove_event_listener();
}

