/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479836
// Address: 0x00479836

//----- (00479836) --------------------------------------------------------
char *__cdecl sub_479836(__m128i *a1, unsigned int a2)
{
  unsigned int v3; // edx
  __m128i *k; // eax
  _BYTE *v5; // ecx
  __int8 *v6; // ecx
  __m128i *v7; // edi
  unsigned int v11; // edx
  __m128i *j; // eax
  __m128i *v13; // ecx
  __m128i *v14; // edi
  __m128i *i; // ecx

  if ( dword_4B7844 < 5 )
  {
    if ( dword_4B7844 < 1 )
    {
      for ( i = a1; i != (__m128i *)&a1->m128i_i8[a2]; i = (__m128i *)((char *)i + 1) )
      {
        if ( !i->m128i_i8[0] )
          break;
      }
      return (char *)((char *)i - (char *)a1);
    }
    else
    {
      v11 = ((unsigned __int8)a1 & 0xF) != 0 ? 16 - ((unsigned __int8)a1 & 0xF) : 0;
      if ( a2 < v11 )
        v11 = a2;
      for ( j = a1; j != (__m128i *)&a1->m128i_i8[v11]; j = (__m128i *)((char *)j + 1) )
      {
        if ( !j->m128i_i8[0] )
          break;
      }
      v5 = (_BYTE *)((char *)j - (char *)a1);
      if ( (char *)j - (char *)a1 == v11 )
      {
        v13 = j;
        v14 = (__m128i *)((char *)j + ((a2 - v11) & 0xFFFFFFF0));
        if ( j != v14 )
        {
          do
          {
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(*v13, (__m128i)0LL)) )
              break;
            ++v13;
          }
          while ( v13 != v14 );
        }
        while ( v13 != (__m128i *)&a1->m128i_i8[a2] && v13->m128i_i8[0] )
          v13 = (__m128i *)((char *)v13 + 1);
        return (char *)((char *)v13 - (char *)a1);
      }
    }
  }
  else
  {
    v3 = ((unsigned __int8)a1 & 0x1F) != 0 ? 32 - ((unsigned __int8)a1 & 0x1F) : 0;
    if ( a2 < v3 )
      v3 = a2;
    for ( k = a1; k != (__m128i *)&a1->m128i_i8[v3]; k = (__m128i *)((char *)k + 1) )
    {
      if ( !k->m128i_i8[0] )
        break;
    }
    v5 = (_BYTE *)((char *)k - (char *)a1);
    if ( (char *)k - (char *)a1 == v3 )
    {
      v6 = (__int8 *)k;
      v7 = (__m128i *)((char *)k + ((a2 - v3) & 0xFFFFFFE0));
      __asm { vpxor   xmm1, xmm1, xmm1 }
      if ( k != v7 )
      {
        do
        {
          __asm
          {
            vpcmpeqb ymm0, ymm1, ymmword ptr [ecx]
            vpmovmskb eax, ymm0
          }
          if ( _EAX )
            break;
          v6 += 32;
        }
        while ( v6 != (__int8 *)v7 );
      }
      while ( v6 != &a1->m128i_i8[a2] && *v6 )
        ++v6;
      v5 = (_BYTE *)(v6 - (__int8 *)a1);
      __asm { vzeroupper }
    }
  }
  return v5;
}
// 479836: unsupported processor register 'ymm0'
// 4B7844: using guessed type int dword_4B7844;
