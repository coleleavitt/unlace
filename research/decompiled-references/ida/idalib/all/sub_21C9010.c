__int64 __fastcall sub_21C9010(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // r14d
  unsigned int *v5; // r13
  unsigned int v8; // edx
  const __m128i *v9; // rax
  __m128i v10; // xmm3
  __m128i v11; // xmm0
  __m128i v12; // xmm5
  __m128i v13; // xmm1
  __m128i v14; // xmm5
  unsigned int v15; // ecx
  __m128i v16; // xmm3
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rcx

  result = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)result )
  {
    v4 = 0;
    v5 = (unsigned int *)(a1 + 8);
    while ( 1 )
    {
      sub_21C8880(v5, a2, a3);
      v8 = v5[1];
      if ( !v8 )
      {
        result = 8;
        goto LABEL_24;
      }
      if ( v8 - 1 <= 0xE )
        break;
      v9 = (const __m128i *)(v5 + 2);
      v10 = 0;
      do
      {
        v11 = _mm_loadu_si128(v9++);
        v12 = _mm_unpacklo_epi8(v11, (__m128i)0LL);
        v13 = _mm_add_epi32(_mm_unpacklo_epi16(v12, (__m128i)0LL), _mm_unpackhi_epi16(v12, (__m128i)0LL));
        v14 = _mm_unpackhi_epi8(v11, (__m128i)0LL);
        v10 = _mm_add_epi32(
                v10,
                _mm_add_epi32(
                  _mm_add_epi32(_mm_unpacklo_epi16(v14, (__m128i)0LL), _mm_unpackhi_epi16(v14, (__m128i)0LL)),
                  v13));
      }
      while ( v9 != (const __m128i *)&v5[4 * (v8 >> 4) + 2] );
      v15 = v8 & 0xFFFFFFF0;
      v16 = _mm_add_epi32(v10, _mm_srli_si128(v10, 8));
      v17 = _mm_cvtsi128_si32(_mm_add_epi32(v16, _mm_srli_si128(v16, 4)));
      if ( (v8 & 0xFFFFFFF0) != v8 )
        goto LABEL_8;
LABEL_23:
      result = ((v8 + 15) & 0xFFFFFFF8) + 16 * v17;
LABEL_24:
      v5 = (unsigned int *)((char *)v5 + result);
      if ( *(_DWORD *)(a1 + 4) <= (unsigned int)++v4 )
        return result;
    }
    v17 = 0;
    v15 = 0;
LABEL_8:
    v17 += *((unsigned __int8 *)v5 + v15 + 8);
    v18 = v15 + 1;
    if ( (unsigned int)v18 < v8 )
    {
      v17 += *((unsigned __int8 *)v5 + v18 + 8);
      v19 = v15 + 2;
      if ( v8 > (unsigned int)v19 )
      {
        v17 += *((unsigned __int8 *)v5 + v19 + 8);
        v20 = v15 + 3;
        if ( v8 > (unsigned int)v20 )
        {
          v17 += *((unsigned __int8 *)v5 + v20 + 8);
          v21 = v15 + 4;
          if ( v8 > (unsigned int)v21 )
          {
            v17 += *((unsigned __int8 *)v5 + v21 + 8);
            v22 = v15 + 5;
            if ( v8 > (unsigned int)v22 )
            {
              v17 += *((unsigned __int8 *)v5 + v22 + 8);
              v23 = v15 + 6;
              if ( v8 > (unsigned int)v23 )
              {
                v17 += *((unsigned __int8 *)v5 + v23 + 8);
                v24 = v15 + 7;
                if ( v8 > (unsigned int)v24 )
                {
                  v17 += *((unsigned __int8 *)v5 + v24 + 8);
                  v25 = v15 + 8;
                  if ( v8 > (unsigned int)v25 )
                  {
                    v17 += *((unsigned __int8 *)v5 + v25 + 8);
                    v26 = v15 + 9;
                    if ( v8 > (unsigned int)v26 )
                    {
                      v17 += *((unsigned __int8 *)v5 + v26 + 8);
                      v27 = v15 + 10;
                      if ( v8 > (unsigned int)v27 )
                      {
                        v17 += *((unsigned __int8 *)v5 + v27 + 8);
                        v28 = v15 + 11;
                        if ( v8 > (unsigned int)v28 )
                        {
                          v17 += *((unsigned __int8 *)v5 + v28 + 8);
                          v29 = v15 + 12;
                          if ( v8 > (unsigned int)v29 )
                          {
                            v17 += *((unsigned __int8 *)v5 + v29 + 8);
                            v30 = v15 + 13;
                            if ( v8 > (unsigned int)v30 )
                            {
                              v31 = v15 + 14;
                              v17 += *((unsigned __int8 *)v5 + v30 + 8);
                              if ( v8 > (unsigned int)v31 )
                                v17 += *((unsigned __int8 *)v5 + v31 + 8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  return result;
}
