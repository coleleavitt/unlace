__m128i *__fastcall sub_FC6250(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  __int64 v9; // rax
  __m128i si128; // xmm0
  __m128i *result; // rax

  v9 = a9[1];
  if ( (unsigned __int64)(v9 + 23) > a9[2] )
  {
    sub_2236E10(a9, a9 + 3, v9 + 23, 1);
    v9 = a9[1];
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9190);
  result = (__m128i *)(*a9 + v9);
  result[1].m128i_i32[0] = 1701672295;
  *result = si128;
  result[1].m128i_i16[2] = 29806;
  result[1].m128i_i8[6] = 62;
  a9[1] += 23LL;
  return result;
}
