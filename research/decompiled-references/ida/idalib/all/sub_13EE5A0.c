void __fastcall sub_13EE5A0(__int64 a1, int *a2, __int64 a3, _QWORD *a4, int a5)
{
  __m128i si128; // xmm0
  __int64 v6; // rax
  __m128i v7; // xmm0

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
  *(_QWORD *)a1 = a4[11];
  *(_QWORD *)(a1 + 8) = a4[7];
  *(_QWORD *)(a1 + 16) = a4[8];
  v6 = a4[6];
  *(__m128i *)(a1 + 56) = si128;
  v7 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)(a1 + 24) = v6;
  *(_WORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 72;
  *(_QWORD *)(a1 + 584) = a1 + 72;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 592) = a1 + 616;
  *(_DWORD *)(a1 + 656) = a5;
  *(_WORD *)(a1 + 660) = 0;
  *(__m128i *)(a1 + 600) = v7;
  sub_13EAF80(a1, a2, a3);
}
