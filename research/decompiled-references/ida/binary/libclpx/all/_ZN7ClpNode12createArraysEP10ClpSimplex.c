void __fastcall ClpNode::createArrays(ClpNode *this, ClpSimplex *a2)
{
  int v3; // edi
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // eax
  int v7; // r9d
  int v8; // eax
  __m128i v9; // xmm1
  int v10; // r10d
  __m128i si128; // xmm6
  unsigned int v12; // r8d
  const __m128i *v13; // rdx
  unsigned int v14; // ecx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm3
  __m128i v18; // xmm2
  __m128i v19; // xmm0
  __m128i v20; // xmm3
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm0
  __int64 v24; // rax
  int v25; // ebx
  void *v26; // rdi
  void *v27; // rdi
  unsigned __int64 v28; // rbx

  v3 = *((_DWORD *)a2 + 27);
  v4 = *((_BYTE **)a2 + 34);
  if ( v3 <= 0 )
  {
    v25 = 0;
    goto LABEL_57;
  }
  v5 = -(int)v4 & 0xF;
  v6 = v5 + 15;
  if ( (unsigned int)(v5 + 15) < 0x12 )
    v6 = 18;
  if ( v3 - 1 < v6 )
  {
    v25 = 0;
    LODWORD(v24) = 0;
LABEL_53:
    v24 = (int)v24;
    do
    {
      if ( v4[v24] )
        ++v25;
      ++v24;
    }
    while ( v3 > (int)v24 );
    goto LABEL_57;
  }
  if ( (_DWORD)v5 )
  {
    v7 = *v4 != 0;
    if ( (_DWORD)v5 == 1 )
    {
      v8 = 1;
    }
    else
    {
      if ( v4[1] )
        ++v7;
      if ( (_DWORD)v5 == 2 )
      {
        v8 = 2;
      }
      else
      {
        if ( v4[2] )
          ++v7;
        if ( (_DWORD)v5 == 3 )
        {
          v8 = 3;
        }
        else
        {
          if ( v4[3] )
            ++v7;
          if ( (_DWORD)v5 == 4 )
          {
            v8 = 4;
          }
          else
          {
            if ( v4[4] )
              ++v7;
            if ( (_DWORD)v5 == 5 )
            {
              v8 = 5;
            }
            else
            {
              if ( v4[5] )
                ++v7;
              if ( (_DWORD)v5 == 6 )
              {
                v8 = 6;
              }
              else
              {
                if ( v4[6] )
                  ++v7;
                if ( (_DWORD)v5 == 7 )
                {
                  v8 = 7;
                }
                else
                {
                  if ( v4[7] )
                    ++v7;
                  if ( (_DWORD)v5 == 8 )
                  {
                    v8 = 8;
                  }
                  else
                  {
                    if ( v4[8] )
                      ++v7;
                    if ( (_DWORD)v5 == 9 )
                    {
                      v8 = 9;
                    }
                    else
                    {
                      if ( v4[9] )
                        ++v7;
                      if ( (_DWORD)v5 == 10 )
                      {
                        v8 = 10;
                      }
                      else
                      {
                        if ( v4[10] )
                          ++v7;
                        if ( (_DWORD)v5 == 11 )
                        {
                          v8 = 11;
                        }
                        else
                        {
                          if ( v4[11] )
                            ++v7;
                          if ( (_DWORD)v5 == 12 )
                          {
                            v8 = 12;
                          }
                          else
                          {
                            if ( v4[12] )
                              ++v7;
                            if ( (_DWORD)v5 == 13 )
                            {
                              v8 = 13;
                            }
                            else
                            {
                              if ( v4[13] )
                                ++v7;
                              if ( (_DWORD)v5 == 14 )
                              {
                                v8 = 14;
                              }
                              else
                              {
                                if ( v4[14] )
                                  ++v7;
                                v8 = 15;
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
    v7 = 0;
    v8 = 0;
  }
  v9 = 0;
  v10 = v3 - v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
  v12 = (unsigned int)(v3 - v5) >> 4;
  v13 = (const __m128i *)&v4[v5];
  v14 = 0;
  do
  {
    v15 = _mm_load_si128(v13);
    ++v14;
    ++v13;
    v16 = _mm_andnot_si128(_mm_cmpeq_epi8(v15, (__m128i)0LL), si128);
    v17 = _mm_cmpgt_epi8((__m128i)0LL, v16);
    v18 = _mm_unpacklo_epi8(v16, v17);
    v19 = _mm_unpackhi_epi8(v16, v17);
    v20 = _mm_cmpgt_epi16((__m128i)0LL, v18);
    v21 = _mm_add_epi32(_mm_add_epi32(v9, _mm_unpacklo_epi16(v18, v20)), _mm_unpackhi_epi16(v18, v20));
    v22 = _mm_cmpgt_epi16((__m128i)0LL, v19);
    v9 = _mm_add_epi32(_mm_add_epi32(v21, _mm_unpacklo_epi16(v19, v22)), _mm_unpackhi_epi16(v19, v22));
  }
  while ( v12 > v14 );
  v23 = _mm_add_epi32(_mm_srli_si128(v9, 8), v9);
  LODWORD(v24) = (v10 & 0xFFFFFFF0) + v8;
  v25 = v7 + _mm_cvtsi128_si32(_mm_add_epi32(v23, _mm_srli_si128(v23, 4)));
  if ( v10 != (v10 & 0xFFFFFFF0) )
    goto LABEL_53;
LABEL_57:
  v26 = *((void **)this + 10);
  if ( *((_DWORD *)this + 37) < v25 )
  {
    if ( v26 )
      operator delete[](v26);
  }
  else if ( v26 )
  {
    return;
  }
  v27 = *((void **)this + 11);
  if ( v27 )
    operator delete[](v27);
  *((_DWORD *)this + 37) = v25;
  v28 = 4LL * v25;
  *((_QWORD *)this + 10) = operator new[](v28);
  *((_QWORD *)this + 11) = operator new[](v28);
}

