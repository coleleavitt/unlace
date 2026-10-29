__int64 __fastcall sub_FDE050(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0

  sub_2244B40(a1, 0x2000, 16);
  *(_QWORD *)(a1 + 120) = a2;
  *(_OWORD *)(a1 + 24) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_QWORD *)(a1 + 48) = 0x400000000LL;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  *(_QWORD *)(a1 + 96) = 0;
  *(__m128i *)(a1 + 104) = si128;
  return a1 + 104;
}
