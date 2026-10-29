__int64 sub_2210020()
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0xA0u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  memset((void *)result, 0, 0xA0u);
  *(__m128i *)(result + 136) = si128;
  *(_QWORD *)(result + 32) = result + 48;
  *(_QWORD *)(result + 40) = 0x400000000LL;
  *(_QWORD *)(result + 88) = 0x400000000LL;
  *(_QWORD *)(result + 80) = result + 96;
  return result;
}
