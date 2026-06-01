__int64 *__fastcall sub_E134B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i si128; // xmm0

  v2 = operator new(0x80u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_2B218E0;
  *(_QWORD *)(v2 + 16) = a2;
  *(_QWORD *)(v2 + 24) = 0;
  *(__m128i *)(v2 + 32) = si128;
  *(_DWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 120) = 0;
  *a1 = v2;
  return a1;
}

