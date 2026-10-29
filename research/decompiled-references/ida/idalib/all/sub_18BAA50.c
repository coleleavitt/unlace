_QWORD *__fastcall sub_18BAA50(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rsi
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rdx

  v3 = operator new(0x40u);
  v4 = *(_DWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  *(_BYTE *)(v3 + 36) = *(_BYTE *)(a2 + 36);
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  v8 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v3 + 32) = v4;
  *(_QWORD *)(v3 + 8) = v5;
  *(__m128i *)(v3 + 16) = v6;
  *(__m128i *)(v3 + 40) = v7;
  *(_QWORD *)v3 = off_2BC6E48;
  *(_QWORD *)(v3 + 56) = v8;
  *a1 = v3;
  return a1;
}
