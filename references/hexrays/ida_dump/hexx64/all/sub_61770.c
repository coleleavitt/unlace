int sub_61770()
{
  qword_4EF970 = 0;
  qword_4EF978 = (__int64)&off_4E3CE0;
  qword_4EF980 = 112;
  dword_4EF988 = 256;
  xmmword_4EF960 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E60C0),
                               (__m128i)(unsigned __int64)"decompiler");
  return __cxa_atexit(nullsub_194, &xmmword_4EF960, &off_4DBB00);
}
