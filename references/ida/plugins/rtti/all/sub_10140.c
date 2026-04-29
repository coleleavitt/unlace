__int64 __fastcall sub_10140(__int64 a1, char *a2)
{
  __int64 v2; // rax
  const char *v3; // rdx
  __m128i v4; // xmm0
  __int64 v5; // rax

  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 408) )
      goto LABEL_8;
    *(_BYTE *)(a1 + 440) = 1;
    v2 = 92;
    v3 = "\\\"'@;:/+*";
    v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x1010101u), 0);
    *(__m128i *)(a1 + 408) = v4;
    *(__m128i *)(a1 + 424) = v4;
    do
    {
      ++v3;
      *(_BYTE *)(a1 + v2 + 408) = 1;
      v2 = *(unsigned __int8 *)v3;
    }
    while ( (_BYTE)v2 );
    v5 = *a2;
    if ( !(_BYTE)v5 )
      return 1;
    while ( 1 )
    {
      ++a2;
      if ( (v5 & 0x80u) != 0LL || *(_BYTE *)(a1 + v5 + 408) )
        break;
LABEL_8:
      v5 = *a2;
      if ( !(_BYTE)v5 )
        return 1;
    }
  }
  return 0;
}
