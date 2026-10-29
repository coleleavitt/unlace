/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479958
// Address: 0x00479958

//----- (00479958) --------------------------------------------------------
int __cdecl sub_479958(__m128i *a1, unsigned int a2)
{
  __m128i *v3; // ecx
  __m128i *v4; // esi
  __m128i *v5; // edx
  int v6; // ecx
  unsigned int v7; // edx
  __m128i *v8; // edi
  int v9; // ecx
  __int16 *v10; // edi
  __int16 *v12; // ecx
  __int16 *j; // ecx
  __m128i *v16; // edx
  unsigned int v17; // edx
  __m128i *v18; // edi
  __m128i *v19; // edi
  __m128i *v20; // ecx
  __m128i *i; // ecx
  char *v22; // ecx
  __m128i *v23; // esi

  if ( dword_4B7844 < 5 )
  {
    if ( dword_4B7844 < 1 )
    {
      v22 = (char *)a1;
      v23 = (__m128i *)((char *)a1 + 2 * a2);
      if ( a1 != v23 )
      {
        do
        {
          if ( !*(_WORD *)v22 )
            break;
          v22 += 2;
        }
        while ( v22 != (char *)v23 );
      }
      v6 = v22 - (char *)a1;
      return v6 >> 1;
    }
    v3 = a1;
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      v4 = a1;
      v16 = (__m128i *)((char *)a1 + 2 * a2);
      if ( a1 != v16 )
      {
        do
        {
          if ( !v3->m128i_i16[0] )
            break;
          v3 = (__m128i *)((char *)v3 + 2);
        }
        while ( v3 != v16 );
      }
      goto LABEL_6;
    }
    v17 = ((16 - ((unsigned __int8)a1 & 0xF)) & (unsigned int)-(((unsigned __int8)a1 & 0xF) != 0)) >> 1;
    if ( a2 < v17 )
      v17 = a2;
    v4 = a1;
    v18 = (__m128i *)((char *)a1 + 2 * v17);
    if ( a1 != v18 )
    {
      do
      {
        if ( !v3->m128i_i16[0] )
          break;
        v3 = (__m128i *)((char *)v3 + 2);
      }
      while ( v3 != v18 );
    }
    v9 = ((char *)v3 - (char *)a1) >> 1;
    if ( v9 == v17 )
    {
      v19 = (__m128i *)((char *)a1 + 2 * v9);
      v20 = (__m128i *)((char *)a1 + 2 * v9 + 2 * ((a2 - v17) & 0xFFFFFFF0));
      while ( v19 != v20 && !_mm_movemask_epi8(_mm_cmpeq_epi16(*v19, (__m128i)0LL)) )
        ++v19;
      for ( i = (__m128i *)((char *)a1 + 2 * a2); v19 != i; v19 = (__m128i *)((char *)v19 + 2) )
      {
        if ( !v19->m128i_i16[0] )
          break;
      }
      v3 = v19;
      goto LABEL_6;
    }
  }
  else
  {
    v3 = a1;
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      v4 = a1;
      v5 = (__m128i *)((char *)a1 + 2 * a2);
      if ( a1 != v5 )
      {
        do
        {
          if ( !v3->m128i_i16[0] )
            break;
          v3 = (__m128i *)((char *)v3 + 2);
        }
        while ( v3 != v5 );
      }
LABEL_6:
      v6 = (char *)v3 - (char *)v4;
      return v6 >> 1;
    }
    v7 = ((32 - ((unsigned __int8)a1 & 0x1F)) & (unsigned int)-(((unsigned __int8)a1 & 0x1F) != 0)) >> 1;
    if ( a2 < v7 )
      v7 = a2;
    v8 = (__m128i *)((char *)a1 + 2 * v7);
    if ( a1 != v8 )
    {
      do
      {
        if ( !v3->m128i_i16[0] )
          break;
        v3 = (__m128i *)((char *)v3 + 2);
      }
      while ( v3 != v8 );
    }
    v9 = ((char *)v3 - (char *)a1) >> 1;
    if ( v9 == v7 )
    {
      v10 = &a1->m128i_i16[v9];
      __asm { vpxor   xmm1, xmm1, xmm1 }
      v12 = &a1->m128i_i16[v9 + ((a2 - v7) & 0xFFFFFFE0)];
      while ( v10 != v12 )
      {
        __asm
        {
          vpcmpeqw ymm0, ymm1, ymmword ptr [edi]
          vpmovmskb eax, ymm0
        }
        if ( _EAX )
          break;
        v10 += 16;
      }
      for ( j = &a1->m128i_i16[a2]; v10 != j; ++v10 )
      {
        if ( !*v10 )
          break;
      }
      v9 = ((char *)v10 - (char *)a1) >> 1;
      __asm { vzeroupper }
    }
  }
  return v9;
}
// 479958: unsupported processor register 'ymm0'
// 4B7844: using guessed type int dword_4B7844;
