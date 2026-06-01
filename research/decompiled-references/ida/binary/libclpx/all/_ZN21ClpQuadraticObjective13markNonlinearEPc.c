__int64 __fastcall ClpQuadraticObjective::markNonlinear(ClpQuadraticObjective *this, char *a2)
{
  int v2; // r11d
  int v3; // ebp
  _QWORD *v4; // rax
  char *v5; // r10
  __int64 v6; // rbx
  int *v7; // r9
  _DWORD *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // r9d
  int v17; // edx
  __m128i v18; // xmm1
  int v19; // r10d
  __m128i si128; // xmm6
  unsigned int v21; // r8d
  const __m128i *v22; // rcx
  unsigned int v23; // edi
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm3
  __m128i v27; // xmm2
  __m128i v28; // xmm0
  __m128i v29; // xmm3
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __int64 result; // rax

  v2 = 0;
  v3 = *((_DWORD *)this + 12);
  v4 = *((_QWORD **)this + 3);
  v5 = a2;
  v6 = v4[5];
  v7 = (int *)v4[6];
  v8 = (_DWORD *)v4[7];
  if ( v3 <= 0 )
    return 0;
  do
  {
    v9 = *v7;
    if ( (int)v9 < (int)v9 + *v8 )
    {
      v10 = (int)v9 + 1;
      v11 = v6 + 4 * (v9 - v10);
      do
      {
        v12 = *(int *)(v11 + 4 * v10);
        v13 = v10++;
        a2[v12] = 1;
        *v5 = 1;
      }
      while ( *v7 + *v8 > v13 );
      v3 = *((_DWORD *)this + 12);
    }
    ++v2;
    ++v7;
    ++v8;
    ++v5;
  }
  while ( v2 < v3 );
  if ( v3 <= 0 )
    return 0;
  v14 = -(int)a2 & 0xF;
  v15 = v14 + 15;
  if ( (unsigned int)(v14 + 15) < 0x12 )
    v15 = 18;
  if ( v3 - 1 < v15 )
  {
    result = 0;
    LODWORD(v33) = 0;
LABEL_59:
    v33 = (int)v33;
    do
    {
      if ( a2[v33] )
        result = (unsigned int)(result + 1);
      ++v33;
    }
    while ( v3 > (int)v33 );
    return result;
  }
  if ( (_DWORD)v14 )
  {
    v16 = *a2 != 0;
    if ( (_DWORD)v14 == 1 )
    {
      v17 = 1;
    }
    else
    {
      if ( a2[1] )
        ++v16;
      if ( (_DWORD)v14 == 2 )
      {
        v17 = 2;
      }
      else
      {
        if ( a2[2] )
          ++v16;
        if ( (_DWORD)v14 == 3 )
        {
          v17 = 3;
        }
        else
        {
          if ( a2[3] )
            ++v16;
          if ( (_DWORD)v14 == 4 )
          {
            v17 = 4;
          }
          else
          {
            if ( a2[4] )
              ++v16;
            if ( (_DWORD)v14 == 5 )
            {
              v17 = 5;
            }
            else
            {
              if ( a2[5] )
                ++v16;
              if ( (_DWORD)v14 == 6 )
              {
                v17 = 6;
              }
              else
              {
                if ( a2[6] )
                  ++v16;
                if ( (_DWORD)v14 == 7 )
                {
                  v17 = 7;
                }
                else
                {
                  if ( a2[7] )
                    ++v16;
                  if ( (_DWORD)v14 == 8 )
                  {
                    v17 = 8;
                  }
                  else
                  {
                    if ( a2[8] )
                      ++v16;
                    if ( (_DWORD)v14 == 9 )
                    {
                      v17 = 9;
                    }
                    else
                    {
                      if ( a2[9] )
                        ++v16;
                      if ( (_DWORD)v14 == 10 )
                      {
                        v17 = 10;
                      }
                      else
                      {
                        if ( a2[10] )
                          ++v16;
                        if ( (_DWORD)v14 == 11 )
                        {
                          v17 = 11;
                        }
                        else
                        {
                          if ( a2[11] )
                            ++v16;
                          if ( (_DWORD)v14 == 12 )
                          {
                            v17 = 12;
                          }
                          else
                          {
                            if ( a2[12] )
                              ++v16;
                            if ( (_DWORD)v14 == 13 )
                            {
                              v17 = 13;
                            }
                            else
                            {
                              if ( a2[13] )
                                ++v16;
                              if ( (_DWORD)v14 == 14 )
                              {
                                v17 = 14;
                              }
                              else
                              {
                                if ( a2[14] )
                                  ++v16;
                                v17 = 15;
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
  }
  else
  {
    v16 = 0;
    v17 = 0;
  }
  v18 = 0;
  v19 = v3 - v14;
  si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
  v21 = (unsigned int)(v3 - v14) >> 4;
  v22 = (const __m128i *)&a2[v14];
  v23 = 0;
  do
  {
    v24 = _mm_load_si128(v22);
    ++v23;
    ++v22;
    v25 = _mm_andnot_si128(_mm_cmpeq_epi8(v24, (__m128i)0LL), si128);
    v26 = _mm_cmpgt_epi8((__m128i)0LL, v25);
    v27 = _mm_unpacklo_epi8(v25, v26);
    v28 = _mm_unpackhi_epi8(v25, v26);
    v29 = _mm_cmpgt_epi16((__m128i)0LL, v27);
    v30 = _mm_add_epi32(_mm_add_epi32(v18, _mm_unpacklo_epi16(v27, v29)), _mm_unpackhi_epi16(v27, v29));
    v31 = _mm_cmpgt_epi16((__m128i)0LL, v28);
    v18 = _mm_add_epi32(_mm_add_epi32(v30, _mm_unpacklo_epi16(v28, v31)), _mm_unpackhi_epi16(v28, v31));
  }
  while ( v21 > v23 );
  v32 = _mm_add_epi32(_mm_srli_si128(v18, 8), v18);
  LODWORD(v33) = (v19 & 0xFFFFFFF0) + v17;
  result = (unsigned int)(v16 + _mm_cvtsi128_si32(_mm_add_epi32(v32, _mm_srli_si128(v32, 4))));
  if ( v19 != (v19 & 0xFFFFFFF0) )
    goto LABEL_59;
  return result;
}

