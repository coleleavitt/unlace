_QWORD *__fastcall sub_1C251F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  __m128i v4; // xmm0

  v2 = operator new(0xC8u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)v2 = &off_2BC7A88;
  *(_QWORD *)(v2 + 16) = v2 + 64;
  *(__m128i *)(v2 + 160) = si128;
  v4 = _mm_load_si128((const __m128i *)&xmmword_23AA470);
  *(_QWORD *)(v2 + 96) = v2 + 80;
  *(_QWORD *)(v2 + 104) = v2 + 80;
  *(_QWORD *)(v2 + 8) = a2;
  *(_QWORD *)(v2 + 24) = 1;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 48) = 1065353216;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 176) = 0;
  *(__m128i *)(v2 + 184) = v4;
  *(_QWORD *)(v2 + 112) = 0;
  *(_WORD *)(v2 + 120) = 0;
  *(_BYTE *)(v2 + 122) = 0;
  *a1 = v2;
  return a1;
}
