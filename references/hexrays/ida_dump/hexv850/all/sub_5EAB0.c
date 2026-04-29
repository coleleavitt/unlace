int sub_5EAB0()
{
  qword_4C2A90 = 0;
  qword_4C2A98 = (__int64)&off_4B7660;
  qword_4C2AA0 = 112;
  dword_4C2AA8 = 256;
  xmmword_4C2A80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B9A40),
                               (__m128i)(unsigned __int64)"decompiler");
  return __cxa_atexit(nullsub_194, &xmmword_4C2A80, &off_4AF4E0);
}
