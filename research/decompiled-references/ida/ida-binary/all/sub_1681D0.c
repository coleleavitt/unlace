int sub_1681D0()
{
  __m128i si128; // xmm1
  __m128i v2[2]; // [rsp+0h] [rbp-28h] BYREF

  xmmword_8D17B8 = 0;
  v2[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&xmmword_8D1740, (__m128i)(unsigned __int64)&xmmword_8D1740);
  qword_8D17B0 = 0;
  __cxa_atexit(sub_478200, &qword_8D17B0, &off_85BC80);
  qword_8D1760 = nullptr;
  qword_8D1778 = nullptr;
  qword_8D1790 = nullptr;
  xmmword_8D1768 = 0;
  xmmword_8D1780 = 0;
  xmmword_8D1798 = 0;
  __cxa_atexit(sub_4781B0, &qword_8D1760, &off_85BC80);
  si128 = _mm_load_si128(v2);
  qword_8D1750 = 0;
  xmmword_8D1740 = (__int128)si128;
  return __cxa_atexit(sub_4785A0, &xmmword_8D1740, &off_85BC80);
}
