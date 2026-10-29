__int64 __fastcall sub_A4FE90(int *a1, int *a2)
{
  int v2; // eax
  __m128i v3; // xmm3
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  char v7; // dl
  int v8; // ecx
  __int64 result; // rax

  v2 = *a1;
  *a1 = *a2;
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 2));
  *a2 = v2;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 2));
  *(__m128i *)(a1 + 2) = v3;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 6));
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 10));
  *(__m128i *)(a1 + 6) = _mm_loadu_si128((const __m128i *)(a2 + 6));
  *(__m128i *)(a1 + 10) = _mm_loadu_si128((const __m128i *)(a2 + 10));
  v7 = *((_BYTE *)a2 + 4);
  *(__m128i *)(a2 + 2) = v4;
  *(__m128i *)(a2 + 6) = v5;
  *(__m128i *)(a2 + 10) = v6;
  v8 = a1[1] & 1;
  *((_BYTE *)a1 + 4) = v7 & 1 | a1[1] & 0xFE;
  result = v8 | (_BYTE)a2[1] & 0xFEu;
  *((_BYTE *)a2 + 4) = v8 | a2[1] & 0xFE;
  return result;
}
