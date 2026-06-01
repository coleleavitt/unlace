__int64 __fastcall sub_A2BFE0(__int64 a1, __int64 a2)
{
  char v2; // al

  if ( a1 != a2 )
  {
    if ( *(_DWORD *)a1 > 1u )
      sub_A2BBA0((int *)a1);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    v2 = *(_BYTE *)(a1 + 4);
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
    *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 40));
    *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4) & 1 | v2 & 0xFE;
    *(_DWORD *)a2 = 0;
  }
  return a1;
}

