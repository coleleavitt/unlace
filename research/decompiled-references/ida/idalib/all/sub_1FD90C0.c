_QWORD *__fastcall sub_1FD90C0(_QWORD *a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm0

  v1 = operator new(0x30u);
  *(_OWORD *)v1 = 0;
  *(_OWORD *)(v1 + 16) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9810);
  *(_QWORD *)v1 = off_2BE4A88;
  *(_QWORD *)(v1 + 24) = 0;
  *(__m128i *)(v1 + 32) = si128;
  *(_DWORD *)(v1 + 8) = 1;
  *a1 = v1;
  return a1;
}
