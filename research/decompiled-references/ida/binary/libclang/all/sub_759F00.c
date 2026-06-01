__int64 __fastcall sub_759F00(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int a7)
{
  __m128i v7; // xmm0
  __m128i v9; // xmm0

  v7 = _mm_loadu_si128(a3);
  *(_BYTE *)(a1 + 34) &= 0xE0u;
  *(_WORD *)(a1 + 32) = 428;
  *(__m128i *)a1 = v7;
  v9 = _mm_loadu_si128(a3 + 1);
  *(_QWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 44) = a5;
  *(_DWORD *)(a1 + 52) = a6;
  *(_BYTE *)(a1 + 56) = a7;
  *(__m128i *)(a1 + 16) = v9;
  return a7;
}

