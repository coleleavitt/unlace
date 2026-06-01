int *__fastcall ClpPdco::getBoundTypes(ClpPdco *this, int *a2, int *a3, int *a4, int **a5)
{
  __int64 v6; // rbx
  int *result; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  int *v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __m128i si128; // xmm1
  __m128i v14; // xmm0
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // edx

  *a2 = *((_DWORD *)this + 27);
  *a4 = 0;
  *a3 = 0;
  v6 = *((int *)this + 27);
  result = (int *)malloc(4 * v6);
  if ( (int)v6 <= 0 )
    goto LABEL_16;
  v8 = -(int)((unsigned __int64)result >> 2) & 3;
  if ( (unsigned int)(v6 - 1) <= 5 )
  {
    v15 = 0;
LABEL_10:
    result[v15] = v15;
    if ( (int)v6 > (int)(v15 + 1) )
    {
      result[v15 + 1] = v15 + 1;
      if ( (int)v6 > (int)(v15 + 2) )
      {
        result[v15 + 2] = v15 + 2;
        if ( (int)v6 > (int)(v15 + 3) )
        {
          result[v15 + 3] = v15 + 3;
          v16 = v15 + 4;
          if ( (int)v6 > (int)(v15 + 4) )
          {
            v17 = v15 + 5;
            result[v16] = v16;
            if ( (int)v6 > v17 )
              result[v17] = v17;
          }
        }
      }
    }
    goto LABEL_16;
  }
  v9 = 0;
  if ( (_DWORD)v8 )
  {
    *result = 0;
    v9 = 1;
    if ( (_DWORD)v8 != 1 )
    {
      result[1] = 1;
      v9 = 2;
      if ( (_DWORD)v8 != 2 )
      {
        result[2] = 2;
        v9 = 3;
      }
    }
  }
  v10 = &result[v8];
  v11 = v6 - v8;
  v12 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  v14 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v9), 0), (__m128i)xmmword_289BB0);
  do
  {
    ++v12;
    v10 += 4;
    *((__m128i *)v10 - 1) = v14;
    v14 = _mm_add_epi32(v14, si128);
  }
  while ( v12 < v11 >> 2 );
  v15 = (v11 & 0xFFFFFFFC) + v9;
  if ( v11 != (v11 & 0xFFFFFFFC) )
    goto LABEL_10;
LABEL_16:
  *a5 = result;
  return result;
}

