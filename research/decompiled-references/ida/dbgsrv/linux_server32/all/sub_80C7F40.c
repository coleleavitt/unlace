/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7F40
// Address: 0x080C7F40

//----- (080C7F40) --------------------------------------------------------
int __usercall sub_80C7F40@<eax>(int a1@<eax>)
{
  unsigned __int16 v2; // ax
  __int16 epi16; // ax
  int v4; // edi
  __m128i v6; // xmm0
  unsigned __int16 *v7; // edx
  __int16 v8; // cx
  unsigned __int16 v9; // ax
  __int16 v10; // bx
  unsigned __int16 *v11; // edx
  __int16 v12; // cx
  unsigned __int16 v13; // ax
  __int16 v14; // di

  v2 = *(_WORD *)(a1 + 4);
  if ( !v2 )
  {
    epi16 = *(_WORD *)(a1 + 6);
    v4 = 0;
    if ( epi16 >= 0 )
    {
      while ( !epi16 )
      {
        v6 = _mm_loadu_si128((const __m128i *)(a1 + 6));
        v4 += 16;
        *(_WORD *)(a1 + 20) = 0;
        *(__m128i *)(a1 + 4) = v6;
        if ( v4 == 128 )
          return 128;
        epi16 = _mm_extract_epi16(v6, 1);
      }
      for ( ; (unsigned __int16)epi16 <= 0xFFu; v4 += 8 )
      {
        v7 = (unsigned __int16 *)(a1 + 20);
        v8 = 0;
        do
        {
          v9 = *v7;
          v10 = v8;
          --v7;
          v8 = HIBYTE(v9);
          v7[1] = v10 | (v9 << 8);
        }
        while ( (unsigned __int16 *)(a1 + 2) != v7 );
        epi16 = *(_WORD *)(a1 + 6);
      }
      if ( epi16 >= 0 )
      {
        do
        {
          ++v4;
          sub_80C7EC0(a1);
        }
        while ( *(__int16 *)(a1 + 6) >= 0 );
        return v4;
      }
    }
    return v4;
  }
  v4 = 0;
  if ( v2 > 0xFFu )
  {
    v11 = (unsigned __int16 *)(a1 + 4);
    v12 = 0;
    do
    {
      v13 = *v11;
      v14 = v12;
      ++v11;
      v12 = v13 << 8;
      *(v11 - 1) = v14 | HIBYTE(v13);
    }
    while ( v11 != (unsigned __int16 *)(a1 + 22) );
    v4 = -8;
    if ( !*(_WORD *)(a1 + 4) )
      return v4;
  }
  do
  {
    --v4;
    sub_80C7E40(a1);
  }
  while ( *(_WORD *)(a1 + 4) );
  return v4;
}
