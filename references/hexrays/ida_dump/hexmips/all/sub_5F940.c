int sub_5F940()
{
  qword_4CF8D0 = 0;
  qword_4CF8D8 = (__int64)&off_4C4400;
  qword_4CF8E0 = 112;
  dword_4CF8E8 = 256;
  xmmword_4CF8C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C67E0),
                               (__m128i)(unsigned __int64)"decompiler");
  return __cxa_atexit(nullsub_194, &xmmword_4CF8C0, &off_4BC280);
}
