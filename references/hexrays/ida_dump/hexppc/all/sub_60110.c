int sub_60110()
{
  qword_4DC8B0 = 0;
  qword_4DC8B8 = (__int64)&off_4D0DE0;
  qword_4DC8C0 = 112;
  dword_4DC8C8 = 256;
  xmmword_4DC8A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D31C0),
                               (__m128i)(unsigned __int64)"decompiler");
  return __cxa_atexit(nullsub_194, &xmmword_4DC8A0, &off_4C8C60);
}
