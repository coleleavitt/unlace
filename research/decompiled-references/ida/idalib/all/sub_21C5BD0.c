void __fastcall sub_21C5BD0(unsigned int *a1, int a2)
{
  unsigned int v2; // ecx
  const __m128i *v3; // rax
  __m128i v4; // xmm3
  __m128i v5; // xmm0
  __m128i v6; // xmm5
  __m128i v7; // xmm1
  unsigned int v8; // eax
  __m128i v9; // xmm3
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 *v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned int v29; // eax

  v2 = a1[1];
  if ( !v2 )
    goto LABEL_24;
  if ( v2 - 1 <= 0xE )
  {
    v10 = 0;
    v8 = 0;
    goto LABEL_6;
  }
  v3 = (const __m128i *)(a1 + 2);
  v4 = 0;
  do
  {
    v5 = _mm_loadu_si128(v3++);
    v6 = _mm_unpackhi_epi8(v5, (__m128i)0LL);
    v7 = _mm_unpacklo_epi8(v5, (__m128i)0LL);
    v4 = _mm_add_epi32(
           v4,
           _mm_add_epi32(
             _mm_add_epi32(_mm_unpacklo_epi16(v6, (__m128i)0LL), _mm_unpackhi_epi16(v6, (__m128i)0LL)),
             _mm_add_epi32(_mm_unpackhi_epi16(v7, (__m128i)0LL), _mm_unpacklo_epi16(v7, (__m128i)0LL))));
  }
  while ( &a1[4 * (v2 >> 4) + 2] != (unsigned int *)v3 );
  v8 = v2 & 0xFFFFFFF0;
  v9 = _mm_add_epi32(v4, _mm_srli_si128(v4, 8));
  v10 = _mm_cvtsi128_si32(_mm_add_epi32(v9, _mm_srli_si128(v9, 4)));
  if ( v2 != (v2 & 0xFFFFFFF0) )
  {
LABEL_6:
    v10 += *((unsigned __int8 *)a1 + v8 + 8);
    v11 = v8 + 1;
    if ( (unsigned int)v11 < v2 )
    {
      v10 += *((unsigned __int8 *)a1 + v11 + 8);
      v12 = v8 + 2;
      if ( v2 > (unsigned int)v12 )
      {
        v10 += *((unsigned __int8 *)a1 + v12 + 8);
        v13 = v8 + 3;
        if ( v2 > (unsigned int)v13 )
        {
          v10 += *((unsigned __int8 *)a1 + v13 + 8);
          v14 = v8 + 4;
          if ( v2 > (unsigned int)v14 )
          {
            v10 += *((unsigned __int8 *)a1 + v14 + 8);
            v15 = v8 + 5;
            if ( v2 > (unsigned int)v15 )
            {
              v10 += *((unsigned __int8 *)a1 + v15 + 8);
              v16 = v8 + 6;
              if ( v2 > (unsigned int)v16 )
              {
                v10 += *((unsigned __int8 *)a1 + v16 + 8);
                v17 = v8 + 7;
                if ( v2 > (unsigned int)v17 )
                {
                  v10 += *((unsigned __int8 *)a1 + v17 + 8);
                  v18 = v8 + 8;
                  if ( v2 > (unsigned int)v18 )
                  {
                    v10 += *((unsigned __int8 *)a1 + v18 + 8);
                    v19 = v8 + 9;
                    if ( v2 > (unsigned int)v19 )
                    {
                      v10 += *((unsigned __int8 *)a1 + v19 + 8);
                      v20 = v8 + 10;
                      if ( v2 > (unsigned int)v20 )
                      {
                        v10 += *((unsigned __int8 *)a1 + v20 + 8);
                        v21 = v8 + 11;
                        if ( v2 > (unsigned int)v21 )
                        {
                          v10 += *((unsigned __int8 *)a1 + v21 + 8);
                          v22 = v8 + 12;
                          if ( v2 > (unsigned int)v22 )
                          {
                            v10 += *((unsigned __int8 *)a1 + v22 + 8);
                            v23 = v8 + 13;
                            if ( v2 > (unsigned int)v23 )
                            {
                              v24 = v8 + 14;
                              v10 += *((unsigned __int8 *)a1 + v23 + 8);
                              if ( v2 > (unsigned int)v24 )
                                v10 += *((unsigned __int8 *)a1 + v24 + 8);
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
  }
  v25 = (v2 + 15) & 0xFFFFFFF8;
  if ( v10 )
  {
    v26 = (unsigned __int64 *)((char *)a1 + v25);
    v27 = (__int64)&a1[4 * (v10 - 1) + 4] + v25;
    do
    {
      v28 = *v26;
      v26 += 2;
      *(v26 - 2) = _byteswap_uint64(v28);
      *(v26 - 1) = _byteswap_uint64(*(v26 - 1));
    }
    while ( v26 != (unsigned __int64 *)v27 );
  }
LABEL_24:
  if ( a2 == 1 )
  {
    v29 = *a1;
    a1[1] = _byteswap_ulong(v2);
    *a1 = _byteswap_ulong(v29);
  }
}
