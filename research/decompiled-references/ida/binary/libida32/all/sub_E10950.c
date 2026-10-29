__int64 *__fastcall sub_E10950(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i si128; // xmm0
  __m128i v6; // xmm0

  v2 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 2320LL) + 96LL) & 0x30) != 0 )
  {
    v3 = operator new(0x98u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
    *(_DWORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 16) = v2;
    *(_QWORD *)(v3 + 24) = 0;
    *(__m128i *)(v3 + 32) = si128;
    *(_DWORD *)(v3 + 48) = 0;
    *(_QWORD *)(v3 + 56) = 0;
    *(_QWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 72) = 0;
    *(_QWORD *)(v3 + 80) = 0;
    *(_QWORD *)(v3 + 88) = 0;
    *(_DWORD *)(v3 + 96) = 0;
    *(_QWORD *)(v3 + 104) = 0;
    *(_QWORD *)(v3 + 112) = 0;
    *(_DWORD *)(v3 + 120) = 0;
    *(_QWORD *)v3 = &off_2B21930;
    *(_QWORD *)(v3 + 128) = 0;
    *(_QWORD *)(v3 + 136) = 0;
    *(_DWORD *)(v3 + 144) = 0;
  }
  else
  {
    v3 = operator new(0x80u);
    v6 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
    *(_DWORD *)(v3 + 8) = 0;
    *(_QWORD *)v3 = &off_2B218E0;
    *(_QWORD *)(v3 + 16) = v2;
    *(_QWORD *)(v3 + 24) = 0;
    *(__m128i *)(v3 + 32) = v6;
    *(_DWORD *)(v3 + 48) = 0;
    *(_QWORD *)(v3 + 56) = 0;
    *(_QWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 72) = 0;
    *(_QWORD *)(v3 + 80) = 0;
    *(_QWORD *)(v3 + 88) = 0;
    *(_DWORD *)(v3 + 96) = 0;
    *(_QWORD *)(v3 + 104) = 0;
    *(_QWORD *)(v3 + 112) = 0;
    *(_DWORD *)(v3 + 120) = 0;
  }
  *a1 = v3;
  return a1;
}

