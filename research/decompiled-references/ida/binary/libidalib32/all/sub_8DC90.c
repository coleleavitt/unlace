int sub_8DC90()
{
  __m128i si128; // xmm1
  __m128i v2[2]; // [rsp+0h] [rbp-28h] BYREF

  xmmword_255418 = 0;
  v2[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&xmmword_2553D0, (__m128i)(unsigned __int64)&xmmword_2553D0);
  qword_255410 = 0;
  __cxa_atexit(sub_173D20, &qword_255410, &off_22E220);
  xmmword_2553F8 = 0;
  qword_2553F0 = 0;
  __cxa_atexit(sub_173D50, &qword_2553F0, &off_22E220);
  si128 = _mm_load_si128(v2);
  qword_2553E0 = 0;
  xmmword_2553D0 = (__int128)si128;
  return __cxa_atexit(sub_174390, &xmmword_2553D0, &off_22E220);
}

