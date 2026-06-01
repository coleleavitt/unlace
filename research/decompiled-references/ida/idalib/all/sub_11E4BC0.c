__int64 __fastcall sub_11E4BC0(__int64 a1, __int64 a2, char a3)
{
  int v3; // ecx
  __int64 result; // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __m128i v8; // xmm3

  v3 = *(_DWORD *)(a2 + 3932);
  result = a1;
  if ( v3 == 3 )
  {
    v7 = _mm_loadu_si128((const __m128i *)(a2 + 3940));
    *(_DWORD *)a1 = 3;
    *(__m128i *)(a1 + 4) = v7;
    return result;
  }
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 3936) <= 1u )
    {
      v6 = _mm_loadu_si128((const __m128i *)(a2 + 3940));
      *(_DWORD *)a1 = 2;
      *(__m128i *)(a1 + 4) = v6;
      return result;
    }
  }
  else if ( v3 == 5 )
  {
    sub_11E4A50(a1, a2);
    return a1;
  }
  if ( a3 )
  {
    v5 = _mm_loadu_si128((const __m128i *)(a2 + 3940));
    *(_DWORD *)a1 = 0;
    *(__m128i *)(a1 + 4) = v5;
  }
  else
  {
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 3940));
    *(_DWORD *)a1 = 1;
    *(__m128i *)(a1 + 4) = v8;
  }
  return result;
}
