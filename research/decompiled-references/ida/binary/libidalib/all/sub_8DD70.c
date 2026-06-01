int sub_8DD70()
{
  __m128i si128; // xmm1
  __m128i v2[2]; // [rsp+0h] [rbp-28h] BYREF

  xmmword_2565D8 = 0;
  v2[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&xmmword_256590, (__m128i)(unsigned __int64)&xmmword_256590);
  qword_2565D0 = 0;
  __cxa_atexit(sub_174820, &qword_2565D0, &off_22F2A0);
  xmmword_2565B8 = 0;
  qword_2565B0 = 0;
  __cxa_atexit(sub_174850, &qword_2565B0, &off_22F2A0);
  si128 = _mm_load_si128(v2);
  qword_2565A0 = 0;
  xmmword_256590 = (__int128)si128;
  return __cxa_atexit(sub_174E90, &xmmword_256590, &off_22F2A0);
}

