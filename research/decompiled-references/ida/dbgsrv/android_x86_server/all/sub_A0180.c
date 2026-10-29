/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0180
// Address: 0x000A0180

//----- (000A0180) --------------------------------------------------------
_DWORD *__userpurge sub_A0180@<eax>(int a1, const void ***a2, char *s)
{
  _DWORD *result; // eax
  const void **v4; // esi
  unsigned int v5; // edx
  const void **v6; // edi
  unsigned int v7; // esi
  const void **v8; // eax
  int v9; // ebx
  __m128i v10; // xmm0
  unsigned int *v11; // edx
  unsigned int v12; // ecx
  __m128i v13; // xmm1
  __m128i v14; // xmm6
  __m128i v15; // xmm7
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  const void *v18; // ecx
  int v19; // esi
  int v20; // ecx
  unsigned int v21; // esi
  unsigned int v22; // ecx
  void *v23; // edx
  _DWORD *v24; // edi
  char *v25; // esi
  size_t v26; // ebx
  void *v27; // edx
  int v28; // ecx
  int v29; // edi
  unsigned int v30; // esi
  void *v31; // [esp-10h] [ebp-3Ch]
  int v32; // [esp+Ch] [ebp-20h]
  size_t v33; // [esp+14h] [ebp-18h]
  const void **v34; // [esp+18h] [ebp-14h]

  result = (_DWORD *)a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a2[1];
  if ( !v4 )
    return result;
  v33 = strlen(s);
  v5 = v33 * ((_DWORD)v4 - 1);
  v6 = *a2;
  v32 = (int)&(*a2)[3 * (_DWORD)v4];
  if ( 12 * (_DWORD)v4 )
  {
    v7 = ((unsigned int)(4 * (_DWORD)v4 - 4) >> 2) + 1;
    if ( v7 <= 7 )
    {
      v8 = *a2;
      v9 = v32;
      goto LABEL_8;
    }
    v8 = &v6[3 * (v7 & 0xFFFFFFF8)];
    v10 = _mm_cvtsi32_si128(v5);
    v11 = (unsigned int *)(v6 + 22);
    v12 = v7 & 0xFFFFFFF8;
    v13 = 0;
    do
    {
      v14 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v11 - 21)), _mm_cvtsi32_si128(*(v11 - 18))),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v11 - 15)), _mm_cvtsi32_si128(*(v11 - 12))));
      v15 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v11 - 9)), _mm_cvtsi32_si128(*(v11 - 6))),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v11 - 3)), _mm_cvtsi32_si128(*v11)));
      v10 = _mm_add_epi32(v10, _mm_andnot_si128(_mm_cmpeq_epi32(v14, (__m128i)0LL), _mm_add_epi32(v14, (__m128i)-1LL)));
      v13 = _mm_add_epi32(v13, _mm_andnot_si128(_mm_cmpeq_epi32(v15, (__m128i)0LL), _mm_add_epi32(v15, (__m128i)-1LL)));
      v11 += 24;
      v12 -= 8;
    }
    while ( v12 );
    v16 = _mm_add_epi32(v13, v10);
    v17 = _mm_add_epi32(_mm_shuffle_epi32(v16, 78), v16);
    v5 = _mm_cvtsi128_si32(_mm_hadd_epi32(v17, v17));
    v9 = v32;
    if ( v7 != (v7 & 0xFFFFFFF8) )
    {
      do
      {
LABEL_8:
        v18 = v8[1];
        v19 = (int)v18 - 1;
        if ( !v18 )
          v19 = 0;
        v5 += v19;
        v8 += 3;
      }
      while ( (const void **)v9 != v8 );
    }
  }
  if ( *(_DWORD *)(a1 + 8) < v5 )
  {
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, v5, 1u);
    v6 = *a2;
    v32 = (int)&(*a2)[3 * (_DWORD)a2[1]];
  }
  v20 = v32;
  for ( result = (_DWORD *)a1; (const void **)v20 != v6; v6 += 3 )
  {
    v21 = result[1];
    v34 = v6;
    if ( v21 >= 2 )
    {
      v22 = v21 + v33;
      v23 = (void *)*result;
      if ( result[2] < v21 + v33 )
      {
        v24 = result;
        v23 = qvector_reserve((int)result, v23, v21 + v33, 1u);
        *v24 = v23;
        result = v24;
        v22 = v21 + v33;
      }
      result[1] = v22;
      *((_BYTE *)v23 + v21 + v33 - 1) = 0;
      memmove((void *)(*result + v21 - 1), s, v33);
      result = (_DWORD *)a1;
      v6 = v34;
      v20 = v32;
    }
    v25 = (char *)v6[1];
    if ( v25 )
    {
      v26 = (size_t)(v25 - 1);
      if ( v25 != (_BYTE *)&dword_0 + 1 )
      {
        v27 = (void *)*result;
        v28 = result[1];
        v29 = v28 - 1;
        if ( !v28 )
          v29 = 0;
        v30 = (unsigned int)&v25[v29];
        if ( result[2] < v30 )
        {
          v27 = qvector_reserve((int)result, v27, v30, 1u);
          result = (_DWORD *)a1;
          *(_DWORD *)a1 = v27;
        }
        result[1] = v30;
        *((_BYTE *)v27 + v29 + v26) = 0;
        v31 = (void *)(*result + v29);
        v6 = v34;
        memcpy(v31, *v34, v26);
        result = (_DWORD *)a1;
        v20 = v32;
      }
    }
  }
  return result;
}
// 0: using guessed type int dword_0;
