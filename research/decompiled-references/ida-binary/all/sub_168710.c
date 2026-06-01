int sub_168710()
{
  __int64 v0; // rax
  __m128i si128; // xmm0

  qword_8D22F0 = 0;
  xmmword_8D22F8 = 0;
  v0 = qvector_reserve(&qword_8D22F0, 0, 18, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDDA0);
  *(_BYTE *)(v0 + 16) = 103;
  qword_8D22F0 = v0;
  *(_QWORD *)&xmmword_8D22F8 = 18;
  *(__m128i *)v0 = si128;
  *(_BYTE *)(qword_8D22F0 + 17) = 0;
  return __cxa_atexit(sub_16B530, &qword_8D22F0, &off_85BC80);
}
