void __fastcall sub_2053720(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r8
  _WORD *v7; // rcx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rdx
  _WORD *v12; // rax
  unsigned __int64 v13; // rdx
  _WORD *v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _WORD *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rax

  v4 = a2;
  if ( a1[2] >= a2 )
  {
    v6 = a1[1];
    v7 = (_WORD *)*a1;
    if ( v6 <= a2 )
      a2 = a1[1];
    if ( !a2 )
      goto LABEL_16;
    if ( a2 - 1 <= 6 )
    {
      v13 = a2;
      v12 = (_WORD *)*a1;
    }
    else
    {
      v8 = 0;
      v9 = _mm_cvtsi32_si128(a3);
      v10 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v9, v9), 0);
      do
      {
        v11 = v8++;
        *(__m128i *)&v7[8 * v11] = v10;
      }
      while ( a2 >> 3 != v8 );
      v12 = &v7[a2 & 0xFFFFFFFFFFFFFFF8LL];
      v13 = a2 - (a2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( a2 == (a2 & 0xFFFFFFFFFFFFFFF8LL) )
      {
LABEL_16:
        if ( v6 >= v4 )
          goto LABEL_28;
        v14 = &v7[v6];
        v15 = v4 - v6;
        if ( v4 - v6 - 1 <= 6 )
        {
          v20 = v4 - v6;
        }
        else
        {
          v16 = 0;
          v17 = _mm_cvtsi32_si128(a3);
          v18 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v17, v17), 0);
          do
          {
            v19 = v16++;
            *(__m128i *)&v14[8 * v19] = v18;
          }
          while ( v15 >> 3 != v16 );
          v20 = v15 - (v15 & 0xFFFFFFFFFFFFFFF8LL);
          v14 += v15 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v15 == (v15 & 0xFFFFFFFFFFFFFFF8LL) )
            goto LABEL_28;
        }
        *v14 = a3;
        if ( v20 != 1 )
        {
          v14[1] = a3;
          if ( v20 != 2 )
          {
            v14[2] = a3;
            if ( v20 != 3 )
            {
              v14[3] = a3;
              if ( v20 != 4 )
              {
                v14[4] = a3;
                if ( v20 != 5 )
                {
                  v14[5] = a3;
                  if ( v20 != 6 )
                    v14[6] = a3;
                }
              }
            }
          }
        }
        goto LABEL_28;
      }
    }
    *v12 = a3;
    if ( v13 != 1 )
    {
      v12[1] = a3;
      if ( v13 != 2 )
      {
        v12[2] = a3;
        if ( v13 != 3 )
        {
          v12[3] = a3;
          if ( v13 != 4 )
          {
            v12[4] = a3;
            if ( v13 != 5 )
            {
              v12[5] = a3;
              if ( v13 != 6 )
                v12[6] = a3;
            }
          }
        }
      }
    }
    goto LABEL_16;
  }
  a1[1] = 0;
  sub_2236E10(a1, a1 + 3, a2, 2);
  v21 = (_WORD *)*a1;
  if ( !a2 )
    goto LABEL_28;
  if ( a2 - 1 <= 6 )
  {
    v27 = a2;
  }
  else
  {
    v22 = 0;
    v23 = ((a2 - 8) >> 3) + 1;
    v24 = _mm_cvtsi32_si128(a3);
    v25 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v24, v24), 0);
    do
    {
      v26 = v22++;
      *(__m128i *)&v21[8 * v26] = v25;
    }
    while ( v23 > v22 );
    v27 = v4 - 8 * v23;
    v21 += 8 * v23;
    if ( v4 == 8 * v23 )
      goto LABEL_28;
  }
  *v21 = a3;
  if ( v27 != 1 )
  {
    v21[1] = a3;
    if ( v27 != 2 )
    {
      v21[2] = a3;
      if ( v27 != 3 )
      {
        v21[3] = a3;
        if ( v27 != 4 )
        {
          v21[4] = a3;
          if ( v27 != 5 )
          {
            v21[5] = a3;
            if ( v27 != 6 )
              v21[6] = a3;
          }
        }
      }
    }
  }
LABEL_28:
  a1[1] = v4;
}
