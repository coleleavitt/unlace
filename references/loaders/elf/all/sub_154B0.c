__int64 __fastcall sub_154B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __m128i si128; // xmm0

  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = off_88058;
  v4 = a1 + 32;
  *(_WORD *)(v4 + 356) = 0;
  *(_OWORD *)(v4 + 376) = -1;
  *(_QWORD *)(v4 - 24) = a2;
  *(_QWORD *)(v4 + 348) = -1;
  *(_BYTE *)(v4 + 358) = 1;
  *(_QWORD *)(v4 + 360) = 0;
  *(_QWORD *)(v4 + 368) = 32752;
  *(_QWORD *)(v4 + 392) = -1;
  *(_QWORD *)(v4 + 400) = 0;
  *(_WORD *)(v4 + 408) = 0;
  *(_BYTE *)(v4 + 410) = 0;
  *(_QWORD *)(v4 - 8) = 0;
  *(_QWORD *)(v4 + 240) = 0;
  memset(
    (void *)(v4 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v4 & 0xFFFFFFF8) + 280) >> 3));
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BE80);
  *(_QWORD *)(a1 + 328) = 4278451972LL;
  *(__m128i *)(a1 + 344) = si128;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_WORD *)(a1 + 376) = 0x8000;
  *(__m128i *)(a1 + 360) = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80008000), 0);
  return 2147516416LL;
}
