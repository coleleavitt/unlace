int sub_8C670()
{
  xmmword_2516B0 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)((unsigned __int64)&xmmword_2516A0 + 8),
                               (__m128i)(unsigned __int64)&off_22FF58);
  xmmword_2516D0 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)&off_22FF58,
                               (__m128i)((unsigned __int64)&xmmword_2516D0 + 8));
  qword_251700 = -1;
  xmmword_2516A0 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)&off_22FF58,
                               (__m128i)((unsigned __int64)&xmmword_2516A0 + 8));
  xmmword_2516C0 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)(&xmmword_2516D0 - 1),
                               (__m128i)(unsigned __int64)(&xmmword_2516D0 - 1));
  xmmword_2516E0 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)((unsigned __int64)&xmmword_2516D0 + 8),
                               (__m128i)(unsigned __int64)&off_22FFD8);
  xmmword_2516F0 = (__int128)_mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)&xmmword_2516F0,
                               (__m128i)(unsigned __int64)&xmmword_2516F0);
  qword_251708 = 0xFFFFFFFFLL;
  qword_251710 = 0;
  __cxa_atexit(sub_F8290, &xmmword_2516A0, &off_22E220);
  xmmword_251678 = 0;
  qword_251670 = 0;
  __cxa_atexit(sub_F3070, &qword_251670, &off_22E220);
  qword_251658 = -1;
  xmmword_251648 = 0;
  qword_251640 = 0;
  return __cxa_atexit(sub_F3040, &qword_251640, &off_22E220);
}

