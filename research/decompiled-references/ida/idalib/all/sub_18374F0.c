_QWORD *__fastcall sub_18374F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __m128i v5; // xmm1

  v2 = operator new(0x38u);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)v2 = &off_2BC6AF0;
  *(_QWORD *)(v2 + 8) = v3;
  LOWORD(v3) = *(_WORD *)(a2 + 32);
  *(__m128i *)(v2 + 16) = v4;
  *(_WORD *)(v2 + 32) = v3;
  *(__m128i *)(v2 + 40) = v5;
  *a1 = v2;
  return a1;
}
