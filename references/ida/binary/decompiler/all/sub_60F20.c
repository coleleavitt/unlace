int sub_60F20()
{
  qword_4EE670 = 0;
  qword_4EE678 = (__int64)&off_4E33E0;
  qword_4EE680 = 110;
  dword_4EE688 = 256;
  xmmword_4EE660 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E5740),
                               (__m128i)(unsigned __int64)"decompiler");
  return __cxa_atexit(nullsub_196, &xmmword_4EE660, &off_4DB300);
}
