int sub_2E8DB0()
{
  qword_2CA1678 = (__int64)&xmmword_2CA1660;
  qword_2CA1670 = 0;
  word_2CA1684 = 1;
  xmmword_2CA1660 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2AFCB20),
                                (__m128i)(unsigned __int64)&off_2AFCAD8);
  __cxa_atexit(sub_390880, &xmmword_2CA1660, &off_2AFC540);
  return __cxa_atexit(nullsub_3, &off_2C57918, &off_2AFC540);
}

