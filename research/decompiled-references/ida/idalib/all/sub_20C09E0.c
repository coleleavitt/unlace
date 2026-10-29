__int64 sub_20C09E0()
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0x38u);
  *(_OWORD *)(result + 32) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)result = 0;
  *(__m128i *)(result + 8) = si128;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 40) = 0;
  return result;
}
