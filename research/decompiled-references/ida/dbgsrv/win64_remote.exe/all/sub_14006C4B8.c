/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006C4B8
// Address: 0x000000014006C4B8

//----- (000000014006C4B8) ----------------------------------------------------
const __m128i *__fastcall sub_14006C4B8(const __m128i *a1, const __m128i *a2)
{
  int v2; // ebx
  const __m128i *v4; // r8
  __m128i v6; // xmm4
  __m128i v7; // xmm1
  __int64 v8; // rax
  const __m128i *v9; // rdx
  const __m128i *i; // r9
  __m128i v11; // xmm2
  unsigned int v12; // eax
  __int64 v13; // rcx
  __m128i inserted; // xmm0
  const __m128i *v15; // rcx
  __int64 v16; // rdx
  char v17; // r9
  const __m128i *v18; // rax
  __m128i v19; // xmm1
  unsigned __int8 v20; // cf
  const __m128i *v21; // rdx
  const __m128i *j; // r9
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  unsigned __int8 v25; // sf
  __int64 v26; // rax

  v2 = a2->m128i_u8[0];
  v4 = a1;
  if ( !(_BYTE)v2 )
    return a1;
  if ( dword_1400CA058 < 2 )
  {
    v6 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v2 | (unsigned int)(v2 << 8)), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)v4 & 0xFFFu) > 0xFF0uLL )
        goto LABEL_9;
      v7 = _mm_loadu_si128(v4);
      LODWORD(v8) = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                 (__m128)_mm_cmpeq_epi8(v7, (__m128i)0LL),
                                                 (__m128)_mm_cmpeq_epi8(v7, v6)));
      if ( (_DWORD)v8 )
      {
        _BitScanForward((unsigned int *)&v8, v8);
        v4 = (const __m128i *)((char *)v4 + v8);
LABEL_9:
        if ( !v4->m128i_i8[0] )
          return nullptr;
        if ( (_BYTE)v2 == v4->m128i_i8[0] )
        {
          v9 = v4;
          for ( i = a2; ; i = (const __m128i *)((char *)i + 1) )
          {
            while ( 2 )
            {
              if ( ((unsigned __int16)i & 0xFFFu) <= 0xFF0uLL && ((unsigned __int16)v9 & 0xFFFu) <= 0xFF0uLL )
              {
                v11 = _mm_loadu_si128(i);
                v12 = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                   (__m128)_mm_cmpeq_epi8(
                                                             _mm_cmpeq_epi8(v11, _mm_loadu_si128(v9)),
                                                             (__m128i)0LL),
                                                   (__m128)_mm_cmpeq_epi8(v11, (__m128i)0LL)));
                if ( !v12 )
                {
                  ++v9;
                  ++i;
                  continue;
                }
                _BitScanForward((unsigned int *)&v13, v12);
                v9 = (const __m128i *)((char *)v9 + v13);
                i = (const __m128i *)((char *)i + v13);
              }
              break;
            }
            if ( !i->m128i_i8[0] )
              return v4;
            if ( v9->m128i_i8[0] != i->m128i_i8[0] )
              break;
            v9 = (const __m128i *)((char *)v9 + 1);
          }
        }
        v4 = (const __m128i *)((char *)v4 + 1);
      }
      else
      {
        ++v4;
      }
    }
  }
  if ( ((unsigned __int16)a2 & 0xFFFu) > 0xFF0uLL )
  {
    inserted = 0;
    v15 = a2;
    v16 = 16;
    do
    {
      v17 = v2;
      inserted = _mm_insert_epi8(_mm_srli_si128(inserted, 1), (char)v2, 15);
      v18 = (const __m128i *)&v15->m128i_i8[1];
      if ( (_BYTE)v2 )
        LOBYTE(v2) = v18->m128i_i8[0];
      if ( !v17 )
        v18 = v15;
      v15 = v18;
      --v16;
    }
    while ( v16 );
    LOBYTE(v2) = a2->m128i_i8[0];
  }
  else
  {
    inserted = _mm_loadu_si128(a2);
  }
  while ( 1 )
  {
    while ( ((unsigned __int16)v4 & 0xFFFu) > 0xFF0uLL )
    {
      if ( !v4->m128i_i8[0] )
        return nullptr;
      if ( v4->m128i_i8[0] == (_BYTE)v2 )
        goto LABEL_38;
LABEL_48:
      v4 = (const __m128i *)((char *)v4 + 1);
    }
    v19 = _mm_loadu_si128(v4);
    v20 = _mm_cmpistrc(inserted, v19, 12);
    if ( v20 | _mm_cmpistrz(inserted, v19, 12) )
      break;
    ++v4;
  }
  if ( v20 )
  {
    v4 = (const __m128i *)((char *)v4 + _mm_cmpistri(inserted, v19, 12));
LABEL_38:
    v21 = v4;
    for ( j = a2; ; j = (const __m128i *)((char *)j + v26) )
    {
      if ( ((unsigned __int16)v21 & 0xFFFu) > 0xFF0uLL || ((unsigned __int16)j & 0xFFFu) > 0xFF0uLL )
      {
        if ( !j->m128i_i8[0] )
          return v4;
        if ( v21->m128i_i8[0] != j->m128i_i8[0] )
          goto LABEL_48;
        v26 = 1;
      }
      else
      {
        v23 = _mm_loadu_si128(v21);
        v24 = _mm_loadu_si128(j);
        v25 = _mm_cmpistrs(v24, v23, 12);
        if ( !_mm_cmpistro(v24, v23, 12) )
          goto LABEL_48;
        if ( v25 )
          return v4;
        v26 = 16;
      }
      v21 = (const __m128i *)((char *)v21 + v26);
    }
  }
  return nullptr;
}
// 14006C536: variable 'v8' is possibly undefined
// 14006C595: variable 'v13' is possibly undefined
// 1400CA058: using guessed type int dword_1400CA058;
