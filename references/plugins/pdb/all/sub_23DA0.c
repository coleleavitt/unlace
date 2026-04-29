int sub_23DA0()
{
  qword_B3760 = 1;
  dword_B3768 = 256;
  xmmword_B3740 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_B2BE0),
                              (__m128i)(unsigned __int64)"pdb");
  xmmword_B3750 = (__int128)_mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)&off_B2BE8),
                              (__m128i)(unsigned __int64)&off_B2BA0);
  return __cxa_atexit(func, &xmmword_B3740, &off_A9B60);
}
