int sub_2EC180()
{
  qword_2CCB578 = (__int64)&xmmword_2CCB560;
  qword_2CCB570 = 0;
  word_2CCB584 = 1;
  xmmword_2CCB560 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B25C60),
                                (__m128i)(unsigned __int64)&off_2B25C18);
  __cxa_atexit(sub_395650, &xmmword_2CCB560, &off_2B25620);
  return __cxa_atexit(nullsub_3, &off_2C81938, &off_2B25620);
}
