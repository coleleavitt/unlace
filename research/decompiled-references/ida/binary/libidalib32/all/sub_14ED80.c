void *__fastcall sub_14ED80(__int64 a1)
{
  __int64 v2; // rdi
  __m128i si128; // xmm0
  __m128i v4; // xmm1

  v2 = a1 + 56;
  *(_QWORD *)(v2 - 56) = &unk_2379E8;
  *(_QWORD *)(v2 - 48) = 0;
  *(_WORD *)(v2 - 24) = 0;
  *(_QWORD *)(v2 - 16) = 0;
  *(_DWORD *)(v2 - 8) = 0;
  *(_WORD *)(v2 - 4) = 1;
  *(_OWORD *)(v2 - 40) = 0;
  sub_14DFE0(v2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D28D0);
  v4 = _mm_load_si128((const __m128i *)&xmmword_1D28F0);
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)a1 = &off_233CC8;
  *(__m128i *)(a1 + 120) = si128;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 256) = -1;
  *(_QWORD *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_BYTE *)(a1 + 308) = 0;
  *(_QWORD *)(a1 + 232) = &unk_250240;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(__m128i *)(a1 + 240) = v4;
  *(_OWORD *)(a1 + 272) = 0;
  return &unk_250240;
}

