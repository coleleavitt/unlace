int sub_8C770()
{
  xmmword_252850 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)((unsigned __int64)&xmmword_252840 + 8),
                               (__m128i)(unsigned __int64)&off_231018);
  xmmword_252840 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)&off_231018,
                               (__m128i)((unsigned __int64)&xmmword_252840 + 8));
  xmmword_252860 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)(&xmmword_252870 - 1),
                               (__m128i)(unsigned __int64)(&xmmword_252870 - 1));
  xmmword_252880 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)((unsigned __int64)&xmmword_252870 + 8),
                               (__m128i)(unsigned __int64)&off_231018);
  xmmword_252870 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)&off_231018,
                               (__m128i)((unsigned __int64)&xmmword_252870 + 8));
  xmmword_252890 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)&xmmword_252890,
                               (__m128i)(unsigned __int64)&xmmword_252890);
  xmmword_2528A0 = -1;
  xmmword_2528B0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  __cxa_atexit(sub_F89D0, &xmmword_252890 - 5, &off_22F2A0);
  xmmword_252818 = 0;
  qword_252810 = 0;
  __cxa_atexit(sub_F3F50, &qword_252810, &off_22F2A0);
  qword_2527E0 = 0;
  qword_2527F8 = -1;
  xmmword_2527E8 = 0;
  return __cxa_atexit(sub_F3F20, &qword_2527E0, &off_22F2A0);
}

