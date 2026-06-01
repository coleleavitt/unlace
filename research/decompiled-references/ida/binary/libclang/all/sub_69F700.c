__int64 __fastcall sub_69F700(__int64 a1, int *a2)
{
  int v2; // eax
  __m128i v3; // xmm0
  char v4; // dl
  int v5; // eax
  __m128i v6; // xmm0
  __int64 result; // rax

  v2 = *a2;
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 2));
  *a2 = 0;
  v4 = *((_BYTE *)a2 + 4);
  *(_DWORD *)a1 = v2;
  v5 = *(unsigned __int8 *)(a1 + 4);
  *(__m128i *)(a1 + 8) = v3;
  *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 6));
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 10));
  result = v4 & 1 | v5 & 0xFFFFFFFE;
  *(_BYTE *)(a1 + 4) = result;
  *(__m128i *)(a1 + 40) = v6;
  return result;
}

