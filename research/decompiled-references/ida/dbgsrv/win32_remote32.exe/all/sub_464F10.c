/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464F10
// Address: 0x00464F10

//----- (00464F10) --------------------------------------------------------
__int8 *__cdecl sub_464F10(char *a1, unsigned __int8 a2)
{
  __m128 v2; // xmm3
  __m128i v3; // xmm3
  int v4; // eax
  const __m128i *i; // edx
  __m128i v6; // xmm1
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int8 *result; // eax
  char *v10; // edx
  char v11; // cl
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax

  if ( dword_4B7844 )
  {
    v2 = (__m128)_mm_shufflelo_epi16(_mm_cvtsi32_si128((a2 << 8) | (unsigned int)a2), 0);
    v3 = (__m128i)_mm_movelh_ps(v2, v2);
    v4 = -1 << ((unsigned __int8)a1 & 0xF);
    for ( i = (const __m128i *)&a1[-((unsigned __int8)a1 & 0xF)]; ; ++i )
    {
      v6 = _mm_loadu_si128(i);
      v7 = v4 & _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8((__m128i)0LL, v6), _mm_cmpeq_epi8(v6, v3)));
      if ( v7 )
        break;
      v4 = -1;
    }
    _BitScanForward(&v8, v7);
    result = &i->m128i_i8[v8];
    if ( (unsigned __int8)_mm_cvtsi128_si32(v3) != *result )
      return nullptr;
  }
  else
  {
    v10 = a1;
    if ( ((unsigned __int8)a1 & 3) == 0 )
      goto LABEL_12;
    do
    {
      v11 = *v10++;
      if ( v11 == a2 )
        return v10 - 1;
      if ( !v11 )
        return nullptr;
    }
    while ( ((unsigned __int8)v10 & 3) != 0 );
    while ( 1 )
    {
LABEL_12:
      while ( 1 )
      {
        v12 = ((a2 << 8) | a2 | (((a2 << 8) | a2) << 16)) ^ *(_DWORD *)v10;
        v13 = *(_DWORD *)v10 + 2130640639;
        v14 = v13 ^ ~*(_DWORD *)v10;
        v10 += 4;
        if ( (((v12 + 2130640639) ^ ~v12) & 0x81010100) != 0 )
          break;
        v15 = v14 & 0x81010100;
        if ( v15 && ((v15 & 0x1010100) != 0 || (v13 & 0x80000000) == 0) )
          return nullptr;
      }
      v16 = *((_DWORD *)v10 - 1);
      if ( (_BYTE)v16 == a2 )
        break;
      if ( !(_BYTE)v16 )
        return nullptr;
      if ( BYTE1(v16) == a2 )
        return v10 - 3;
      if ( !BYTE1(v16) )
        return nullptr;
      v17 = HIWORD(v16);
      if ( (_BYTE)v17 == a2 )
        return v10 - 2;
      if ( !(_BYTE)v17 )
        return nullptr;
      if ( BYTE1(v17) == a2 )
        return v10 - 1;
      if ( !BYTE1(v17) )
        return nullptr;
    }
    return v10 - 4;
  }
  return result;
}
// 4B7844: using guessed type int dword_4B7844;
