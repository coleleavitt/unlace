void *__fastcall sub_14F550(__int64 a1)
{
  __int64 v2; // rdi
  __m128i si128; // xmm0
  __m128i v4; // xmm1

  v2 = a1 + 64;
  *(_QWORD *)(v2 - 64) = &unk_2389E8;
  *(_QWORD *)(v2 - 56) = 0;
  *(_WORD *)(v2 - 32) = 0;
  *(_QWORD *)(v2 - 24) = 0;
  *(_QWORD *)(v2 - 16) = 0;
  *(_WORD *)(v2 - 8) = 1;
  *(_OWORD *)(v2 - 48) = 0;
  sub_14E7A0(v2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3000);
  v4 = _mm_load_si128((const __m128i *)&xmmword_1D3900);
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)a1 = &off_234CC8;
  *(__m128i *)(a1 + 128) = si128;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 264) = -1;
  *(_QWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_BYTE *)(a1 + 316) = 0;
  *(_QWORD *)(a1 + 240) = &unk_2512A0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(__m128i *)(a1 + 248) = v4;
  *(_OWORD *)(a1 + 280) = 0;
  return &unk_2512A0;
}

