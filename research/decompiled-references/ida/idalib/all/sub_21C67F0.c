void __fastcall sub_21C67F0(unsigned int *a1, int a2)
{
  unsigned int *v2; // rbx
  unsigned __int32 v3; // eax
  int v4; // r11d
  int v5; // ebp
  __int64 v6; // r10
  unsigned int v7; // edx
  const __m128i *v8; // rax
  __m128i v9; // xmm3
  __m128i v10; // xmm0
  __m128i v11; // xmm5
  __m128i v12; // xmm1
  __m128i v13; // xmm5
  unsigned int v14; // ecx
  __m128i v15; // xmm3
  int v16; // eax
  __int64 v17; // rsi
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
  __int64 v30; // rcx
  __int64 v31; // rax

  if ( a2 != 1 )
  {
    v2 = a1 + 2;
    *a1 = _byteswap_ulong(*a1);
    v3 = _byteswap_ulong(a1[1]);
    a1[1] = v3;
    if ( v3 )
    {
      v4 = a2;
      v5 = 0;
      while ( 1 )
      {
        v2[1] = _byteswap_ulong(v2[1]);
        *v2 = _byteswap_ulong(*v2);
        sub_21C5BD0(v2, v4);
        v7 = v2[1];
        if ( !v7 )
        {
          v31 = 8;
          goto LABEL_25;
        }
        if ( v7 - 1 <= 0xE )
          break;
        v8 = (const __m128i *)(v2 + 2);
        v9 = 0;
        do
        {
          v10 = _mm_loadu_si128(v8++);
          v11 = _mm_unpacklo_epi8(v10, (__m128i)0LL);
          v12 = _mm_add_epi32(_mm_unpacklo_epi16(v11, (__m128i)0LL), _mm_unpackhi_epi16(v11, (__m128i)0LL));
          v13 = _mm_unpackhi_epi8(v10, (__m128i)0LL);
          v9 = _mm_add_epi32(
                 v9,
                 _mm_add_epi32(
                   _mm_add_epi32(_mm_unpackhi_epi16(v13, (__m128i)0LL), _mm_unpacklo_epi16(v13, (__m128i)0LL)),
                   v12));
        }
        while ( v8 != (const __m128i *)&v2[4 * (v7 >> 4) + 2] );
        v14 = v7 & 0xFFFFFFF0;
        v15 = _mm_add_epi32(v9, _mm_srli_si128(v9, 8));
        v16 = _mm_cvtsi128_si32(_mm_add_epi32(v15, _mm_srli_si128(v15, 4)));
        if ( (v7 & 0xFFFFFFF0) != v7 )
          goto LABEL_9;
LABEL_24:
        v31 = ((v7 + 15) & 0xFFFFFFF8) + 16 * v16;
LABEL_25:
        v2 = (unsigned int *)((char *)v2 + v31);
        if ( *(_DWORD *)(v6 + 4) <= (unsigned int)++v5 )
          return;
      }
      v16 = 0;
      v14 = 0;
LABEL_9:
      v16 += *((unsigned __int8 *)v2 + v14 + 8);
      v17 = v14 + 1;
      if ( (unsigned int)v17 < v7 )
      {
        v16 += *((unsigned __int8 *)v2 + v17 + 8);
        v18 = v14 + 2;
        if ( v7 > (unsigned int)v18 )
        {
          v16 += *((unsigned __int8 *)v2 + v18 + 8);
          v19 = v14 + 3;
          if ( v7 > (unsigned int)v19 )
          {
            v16 += *((unsigned __int8 *)v2 + v19 + 8);
            v20 = v14 + 4;
            if ( v7 > (unsigned int)v20 )
            {
              v16 += *((unsigned __int8 *)v2 + v20 + 8);
              v21 = v14 + 5;
              if ( v7 > (unsigned int)v21 )
              {
                v16 += *((unsigned __int8 *)v2 + v21 + 8);
                v22 = v14 + 6;
                if ( v7 > (unsigned int)v22 )
                {
                  v16 += *((unsigned __int8 *)v2 + v22 + 8);
                  v23 = v14 + 7;
                  if ( v7 > (unsigned int)v23 )
                  {
                    v16 += *((unsigned __int8 *)v2 + v23 + 8);
                    v24 = v14 + 8;
                    if ( v7 > (unsigned int)v24 )
                    {
                      v16 += *((unsigned __int8 *)v2 + v24 + 8);
                      v25 = v14 + 9;
                      if ( v7 > (unsigned int)v25 )
                      {
                        v16 += *((unsigned __int8 *)v2 + v25 + 8);
                        v26 = v14 + 10;
                        if ( (unsigned int)v26 < v7 )
                        {
                          v16 += *((unsigned __int8 *)v2 + v26 + 8);
                          v27 = v14 + 11;
                          if ( v7 > (unsigned int)v27 )
                          {
                            v16 += *((unsigned __int8 *)v2 + v27 + 8);
                            v28 = v14 + 12;
                            if ( (unsigned int)v28 < v7 )
                            {
                              v16 += *((unsigned __int8 *)v2 + v28 + 8);
                              v29 = v14 + 13;
                              if ( (unsigned int)v29 < v7 )
                              {
                                v30 = v14 + 14;
                                v16 += *((unsigned __int8 *)v2 + v29 + 8);
                                if ( v7 > (unsigned int)v30 )
                                  v16 += *((unsigned __int8 *)v2 + v30 + 8);
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
      goto LABEL_24;
    }
  }
}
