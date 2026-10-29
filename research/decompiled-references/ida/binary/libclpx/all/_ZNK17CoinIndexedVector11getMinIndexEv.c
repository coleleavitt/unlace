__int64 __fastcall CoinIndexedVector::getMinIndex(CoinIndexedVector *this)
{
  int v1; // r8d
  int *v2; // rsi
  __int64 v3; // rdx
  int v4; // eax
  int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // edi
  const __m128i *v8; // rdx
  __m128i v9; // xmm2
  __m128i si128; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  unsigned int v13; // edx
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm1
  __int64 result; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // edx
  int v26; // edx
  unsigned int v27; // [rsp+0h] [rbp-Ch]

  v1 = *((_DWORD *)this + 4);
  if ( v1 <= 0 )
    return 0x7FFFFFFF;
  v2 = *(int **)this;
  v3 = -(int)(*(_QWORD *)this >> 2) & 3;
  if ( (unsigned int)(v1 - 1) <= 6 )
  {
    v13 = 0;
    result = 0x7FFFFFFF;
LABEL_13:
    v19 = v2[v13];
    if ( (int)result > v19 )
      result = (unsigned int)v19;
    if ( (int)(v13 + 1) < v1 )
    {
      v20 = v2[v13 + 1];
      if ( (int)result > v20 )
        result = (unsigned int)v20;
      if ( v1 > (int)(v13 + 2) )
      {
        v21 = v2[v13 + 2];
        if ( (int)result > v21 )
          result = (unsigned int)v21;
        if ( v1 > (int)(v13 + 3) )
        {
          v22 = v2[v13 + 3];
          if ( (int)result > v22 )
            result = (unsigned int)v22;
          if ( v1 > (int)(v13 + 4) )
          {
            v23 = v2[v13 + 4];
            if ( (int)result > v23 )
              result = (unsigned int)v23;
            if ( v1 > (int)(v13 + 5) )
            {
              v24 = v2[v13 + 5];
              if ( (int)result > v24 )
                result = (unsigned int)v24;
              v25 = v13 + 6;
              if ( v1 > v25 )
              {
                v26 = v2[v25];
                if ( (int)result > v26 )
                  return (unsigned int)v26;
              }
            }
          }
        }
      }
    }
    return result;
  }
  if ( (_DWORD)v3 )
  {
    v4 = *v2;
    v5 = 1;
    if ( (_DWORD)v3 != 1 )
    {
      v5 = 2;
      if ( v4 > v2[1] )
        v4 = v2[1];
      if ( (_DWORD)v3 != 2 )
      {
        v5 = 3;
        if ( v4 > v2[2] )
          v4 = v2[2];
      }
    }
  }
  else
  {
    v5 = 0;
    v4 = 0x7FFFFFFF;
  }
  v27 = v4;
  v6 = 0;
  v7 = v1 - v3;
  v8 = (const __m128i *)&v2[v3];
  v9 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v27), 0);
  do
  {
    si128 = _mm_load_si128(v8);
    ++v6;
    ++v8;
    v11 = _mm_cmpgt_epi32(v9, si128);
    v9 = _mm_or_si128(_mm_andnot_si128(v11, v9), _mm_and_si128(si128, v11));
  }
  while ( v6 < v7 >> 2 );
  v12 = _mm_srli_si128(v9, 8);
  v13 = (v7 & 0xFFFFFFFC) + v5;
  v14 = _mm_cmpgt_epi32(v9, v12);
  v15 = _mm_or_si128(_mm_and_si128(v12, v14), _mm_andnot_si128(v14, v9));
  v16 = _mm_srli_si128(v15, 4);
  v17 = _mm_cmpgt_epi32(v15, v16);
  result = (unsigned int)_mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v17, v15), _mm_and_si128(v16, v17)));
  if ( v7 != (v7 & 0xFFFFFFFC) )
    goto LABEL_13;
  return result;
}

