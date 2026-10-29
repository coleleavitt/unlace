_QWORD *__fastcall sub_21C64E0(_QWORD *a1, unsigned int *a2)
{
  unsigned int v3; // eax
  signed __int64 v4; // r10
  _DWORD *v5; // rdi
  int v6; // r9d
  unsigned int v7; // ecx
  const __m128i *v8; // rdx
  __m128i v9; // xmm3
  __m128i v10; // xmm0
  __m128i v11; // xmm5
  __m128i v12; // xmm1
  unsigned int v13; // r8d
  __m128i v14; // xmm3
  int v15; // edx
  __int64 v16; // r11
  __int64 v17; // r11
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // r11
  __int64 v23; // r11
  __int64 v24; // r11
  __int64 v25; // r11
  __int64 v26; // r11
  __int64 v27; // r11
  __int64 v28; // r11
  __int64 v29; // r8
  _QWORD v31[2]; // [rsp+8h] [rbp-10h] BYREF

  v3 = a2[1];
  if ( v3 > 3 )
  {
    sub_21C5A30(v31, "number of value profile kinds is invalid");
    *a1 = v31[0];
    return a1;
  }
  else
  {
    v4 = *a2;
    if ( (v4 & 7) != 0 )
    {
      sub_21C5A30(v31, "total size is not multiples of quardword");
      *a1 = v31[0];
      return a1;
    }
    v5 = a2 + 2;
    if ( v3 )
    {
      if ( a2[2] > 2 )
      {
LABEL_29:
        sub_21C5A30(v31, "value kind is invalid");
        *a1 = v31[0];
        return a1;
      }
      v6 = 0;
      while ( 1 )
      {
        v7 = v5[1];
        if ( v7 )
          break;
        v5 += 2;
        if ( (char *)v5 - (char *)a2 > v4 )
        {
LABEL_32:
          sub_21C5A30(v31, "value profile address is greater than total size");
          *a1 = v31[0];
          return a1;
        }
LABEL_27:
        if ( v3 == ++v6 )
          goto LABEL_35;
        if ( *v5 > 2u )
          goto LABEL_29;
      }
      if ( v7 - 1 <= 0xE )
      {
        v15 = 0;
        v13 = 0;
      }
      else
      {
        v8 = (const __m128i *)(v5 + 2);
        v9 = 0;
        do
        {
          v10 = _mm_loadu_si128(v8++);
          v11 = _mm_unpackhi_epi8(v10, (__m128i)0LL);
          v12 = _mm_unpacklo_epi8(v10, (__m128i)0LL);
          v9 = _mm_add_epi32(
                 v9,
                 _mm_add_epi32(
                   _mm_add_epi32(_mm_unpacklo_epi16(v11, (__m128i)0LL), _mm_unpackhi_epi16(v11, (__m128i)0LL)),
                   _mm_add_epi32(_mm_unpacklo_epi16(v12, (__m128i)0LL), _mm_unpackhi_epi16(v12, (__m128i)0LL))));
        }
        while ( v8 != (const __m128i *)&v5[4 * (v7 >> 4) + 2] );
        v13 = v7 & 0xFFFFFFF0;
        v14 = _mm_add_epi32(v9, _mm_srli_si128(v9, 8));
        v15 = _mm_cvtsi128_si32(_mm_add_epi32(v14, _mm_srli_si128(v14, 4)));
        if ( v7 == (v7 & 0xFFFFFFF0) )
          goto LABEL_26;
      }
      v15 += *((unsigned __int8 *)v5 + v13 + 8);
      v16 = v13 + 1;
      if ( (unsigned int)v16 < v7 )
      {
        v15 += *((unsigned __int8 *)v5 + v16 + 8);
        v17 = v13 + 2;
        if ( (unsigned int)v17 < v7 )
        {
          v15 += *((unsigned __int8 *)v5 + v17 + 8);
          v18 = v13 + 3;
          if ( v7 > (unsigned int)v18 )
          {
            v15 += *((unsigned __int8 *)v5 + v18 + 8);
            v19 = v13 + 4;
            if ( v7 > (unsigned int)v19 )
            {
              v15 += *((unsigned __int8 *)v5 + v19 + 8);
              v20 = v13 + 5;
              if ( v7 > (unsigned int)v20 )
              {
                v15 += *((unsigned __int8 *)v5 + v20 + 8);
                v21 = v13 + 6;
                if ( v7 > (unsigned int)v21 )
                {
                  v15 += *((unsigned __int8 *)v5 + v21 + 8);
                  v22 = v13 + 7;
                  if ( v7 > (unsigned int)v22 )
                  {
                    v15 += *((unsigned __int8 *)v5 + v22 + 8);
                    v23 = v13 + 8;
                    if ( v7 > (unsigned int)v23 )
                    {
                      v15 += *((unsigned __int8 *)v5 + v23 + 8);
                      v24 = v13 + 9;
                      if ( v7 > (unsigned int)v24 )
                      {
                        v15 += *((unsigned __int8 *)v5 + v24 + 8);
                        v25 = v13 + 10;
                        if ( v7 > (unsigned int)v25 )
                        {
                          v15 += *((unsigned __int8 *)v5 + v25 + 8);
                          v26 = v13 + 11;
                          if ( v7 > (unsigned int)v26 )
                          {
                            v15 += *((unsigned __int8 *)v5 + v26 + 8);
                            v27 = v13 + 12;
                            if ( v7 > (unsigned int)v27 )
                            {
                              v15 += *((unsigned __int8 *)v5 + v27 + 8);
                              v28 = v13 + 13;
                              if ( v7 > (unsigned int)v28 )
                              {
                                v29 = v13 + 14;
                                v15 += *((unsigned __int8 *)v5 + v28 + 8);
                                if ( v7 > (unsigned int)v29 )
                                  v15 += *((unsigned __int8 *)v5 + v29 + 8);
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
LABEL_26:
      v5 = (_DWORD *)((char *)v5 + 16 * v15 + ((v7 + 15) & 0xFFFFFFF8));
      if ( (char *)v5 - (char *)a2 > v4 )
        goto LABEL_32;
      goto LABEL_27;
    }
LABEL_35:
    *a1 = 0;
    return a1;
  }
}
