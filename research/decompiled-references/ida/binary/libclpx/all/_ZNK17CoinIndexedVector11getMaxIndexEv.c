__int64 __fastcall CoinIndexedVector::getMaxIndex(CoinIndexedVector *this)
{
  int v1; // r8d
  __int64 result; // rax
  _DWORD *v3; // rsi
  __int64 v4; // rdx
  int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // edi
  const __m128i *v8; // rdx
  __m128i v9; // xmm0
  __m128i si128; // xmm2
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  unsigned int v13; // edx
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm1
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // edx
  int v25; // edx
  unsigned int v26; // [rsp+0h] [rbp-Ch]

  v1 = *((_DWORD *)this + 4);
  result = 2147483649LL;
  if ( v1 <= 0 )
    return result;
  v3 = *(_DWORD **)this;
  v4 = -(int)(*(_QWORD *)this >> 2) & 3;
  if ( (unsigned int)(v1 - 1) <= 6 )
  {
    v13 = 0;
LABEL_15:
    v18 = v3[v13];
    if ( (int)result < v18 )
      result = (unsigned int)v18;
    if ( (int)(v13 + 1) < v1 )
    {
      v19 = v3[v13 + 1];
      if ( (int)result < v19 )
        result = (unsigned int)v19;
      if ( v1 > (int)(v13 + 2) )
      {
        v20 = v3[v13 + 2];
        if ( (int)result < v20 )
          result = (unsigned int)v20;
        if ( v1 > (int)(v13 + 3) )
        {
          v21 = v3[v13 + 3];
          if ( (int)result < v21 )
            result = (unsigned int)v21;
          if ( v1 > (int)(v13 + 4) )
          {
            v22 = v3[v13 + 4];
            if ( (int)result < v22 )
              result = (unsigned int)v22;
            if ( v1 > (int)(v13 + 5) )
            {
              v23 = v3[v13 + 5];
              if ( (int)result < v23 )
                result = (unsigned int)v23;
              v24 = v13 + 6;
              if ( v1 > v24 )
              {
                v25 = v3[v24];
                if ( (int)result < v25 )
                  return (unsigned int)v25;
              }
            }
          }
        }
      }
    }
    return result;
  }
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    v5 = 1;
    if ( *v3 != 0x80000000 )
      LODWORD(result) = *v3;
    if ( (_DWORD)v4 != 1 )
    {
      v5 = 2;
      if ( (int)result < v3[1] )
        LODWORD(result) = v3[1];
      if ( (_DWORD)v4 != 2 )
      {
        v5 = 3;
        if ( (int)result < v3[2] )
          LODWORD(result) = v3[2];
      }
    }
  }
  v26 = result;
  v6 = 0;
  v7 = v1 - v4;
  v8 = (const __m128i *)&v3[v4];
  v9 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v26), 0);
  do
  {
    si128 = _mm_load_si128(v8);
    ++v6;
    ++v8;
    v11 = _mm_cmpgt_epi32(v9, si128);
    v9 = _mm_or_si128(_mm_and_si128(v9, v11), _mm_andnot_si128(v11, si128));
  }
  while ( v6 < v7 >> 2 );
  v12 = _mm_srli_si128(v9, 8);
  v13 = (v7 & 0xFFFFFFFC) + v5;
  v14 = _mm_cmpgt_epi32(v9, v12);
  v15 = _mm_or_si128(_mm_and_si128(v9, v14), _mm_andnot_si128(v14, v12));
  v16 = _mm_srli_si128(v15, 4);
  v17 = _mm_cmpgt_epi32(v15, v16);
  result = (unsigned int)_mm_cvtsi128_si32(_mm_or_si128(_mm_and_si128(v15, v17), _mm_andnot_si128(v17, v16)));
  if ( v7 != (v7 & 0xFFFFFFFC) )
    goto LABEL_15;
  return result;
}

