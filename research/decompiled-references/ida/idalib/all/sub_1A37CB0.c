_QWORD *__fastcall sub_1A37CB0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rsi
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  char v8; // dl

  v3 = operator new(0x38u);
  v4 = *(_DWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_DWORD *)(v3 + 32) = v4;
  *(_QWORD *)v3 = off_2BC7280;
  v8 = *(_BYTE *)(a2 + 36);
  *(_QWORD *)(v3 + 8) = v5;
  *(__m128i *)(v3 + 16) = v6;
  *(_BYTE *)(v3 + 36) = v8;
  *(__m128i *)(v3 + 40) = v7;
  *a1 = v3;
  return a1;
}
