__int64 __fastcall sub_A2BB60(__int64 a1, __int64 a2)
{
  char v2; // dl
  int v3; // edx
  __int64 result; // rax

  v2 = *(_BYTE *)(a2 + 4);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v3 = v2 & 1;
  result = v3 | *(_BYTE *)(a1 + 4) & 0xFEu;
  *(_BYTE *)(a1 + 4) = v3 | *(_BYTE *)(a1 + 4) & 0xFE;
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_DWORD *)a2 = 0;
  return result;
}

