__int64 __fastcall CoinPresolveMatrix::update_model(CoinPresolveMatrix *this, ClpSimplex *a2)
{
  int v4; // esi
  double *v5; // rdi
  int v6; // r8d
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // r10d
  int v11; // edx
  __m128i v12; // xmm1
  int v13; // r11d
  __m128i si128; // xmm6
  unsigned int v15; // r9d
  const __m128i *v16; // rcx
  unsigned int v17; // edi
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm3
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm3
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm0
  __int64 v27; // rdx
  int v28; // eax
  __int64 result; // rax
  int v30; // r9d
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  int v33; // esi
  int v34; // r10d
  double *v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // edi
  __int64 v38; // rax
  unsigned int v39; // edi
  __int128 v40; // xmm1
  signed int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  double v44; // xmm0_8
  __int64 v45; // rax
  int v46; // r8d
  int v47; // r10d
  double *v48; // rcx
  unsigned int v49; // edx
  unsigned int v50; // r9d
  __int64 v51; // rax
  unsigned int v52; // r9d
  __int128 v53; // xmm1
  signed int v54; // eax
  __int64 v55; // rdx
  int v56; // eax

  v4 = *(_DWORD *)this;
  v5 = *((double **)this + 9);
  if ( *(double *)a2 < 0.0 )
  {
    if ( v4 > 0 )
    {
      v45 = ((unsigned __int64)v5 >> 3) & 1;
      if ( v4 - 1 < 2 - (unsigned int)((_DWORD)v45 == 0) )
      {
        v54 = 0;
        goto LABEL_78;
      }
      if ( (_DWORD)v45 )
      {
        v46 = 1;
        *v5 = -*v5;
      }
      else
      {
        v46 = 0;
      }
      v47 = v4 - v45;
      v48 = &v5[v45];
      v49 = 0;
      v50 = v4 - v45;
      v51 = 0;
      v52 = v50 >> 1;
      do
      {
        ++v49;
        *(double *)&v53 = -v48[v51];
        *((double *)&v53 + 1) = -v48[v51 + 1];
        *(_OWORD *)&v48[v51] = v53;
        v51 += 2;
      }
      while ( v52 > v49 );
      v54 = (v47 & 0xFFFFFFFE) + v46;
      if ( v47 != (v47 & 0xFFFFFFFE) )
      {
LABEL_78:
        v55 = v54;
        v56 = v54 + 1;
        v5[v55] = -v5[v55];
        if ( v4 > v56 )
          v5[v56] = -v5[v56];
      }
    }
    *((double *)this + 34) = -*((double *)this + 34);
  }
  ClpSimplex::loadProblem(
    a2,
    v4,
    *((_DWORD *)this + 1),
    *((const int **)this + 5),
    *((const int **)this + 7),
    *((const double **)this + 8),
    *((const int **)this + 6),
    *((const double **)this + 11),
    *((const double **)this + 12),
    v5,
    *((const double **)this + 13),
    *((const double **)this + 14),
    nullptr);
  v6 = *(_DWORD *)this;
  if ( *(int *)this > 0 )
  {
    v7 = *((_QWORD *)this + 39);
    v8 = -*((_DWORD *)this + 78) & 0xF;
    v9 = v8 + 15;
    if ( (unsigned int)(v8 + 15) < 0x12 )
      v9 = 18;
    if ( v6 - 1 < v9 )
    {
      LODWORD(v27) = 0;
      v28 = 0;
    }
    else
    {
      if ( (_DWORD)v8 )
      {
        v10 = *(_BYTE *)v7 != 0;
        if ( (_DWORD)v8 == 1 )
        {
          v11 = 1;
        }
        else
        {
          if ( *(_BYTE *)(v7 + 1) )
            ++v10;
          if ( (_DWORD)v8 == 2 )
          {
            v11 = 2;
          }
          else
          {
            if ( *(_BYTE *)(v7 + 2) )
              ++v10;
            if ( (_DWORD)v8 == 3 )
            {
              v11 = 3;
            }
            else
            {
              if ( *(_BYTE *)(v7 + 3) )
                ++v10;
              if ( (_DWORD)v8 == 4 )
              {
                v11 = 4;
              }
              else
              {
                if ( *(_BYTE *)(v7 + 4) )
                  ++v10;
                if ( (_DWORD)v8 == 5 )
                {
                  v11 = 5;
                }
                else
                {
                  if ( *(_BYTE *)(v7 + 5) )
                    ++v10;
                  if ( (_DWORD)v8 == 6 )
                  {
                    v11 = 6;
                  }
                  else
                  {
                    if ( *(_BYTE *)(v7 + 6) )
                      ++v10;
                    if ( (_DWORD)v8 == 7 )
                    {
                      v11 = 7;
                    }
                    else
                    {
                      if ( *(_BYTE *)(v7 + 7) )
                        ++v10;
                      if ( (_DWORD)v8 == 8 )
                      {
                        v11 = 8;
                      }
                      else
                      {
                        if ( *(_BYTE *)(v7 + 8) )
                          ++v10;
                        if ( (_DWORD)v8 == 9 )
                        {
                          v11 = 9;
                        }
                        else
                        {
                          if ( *(_BYTE *)(v7 + 9) )
                            ++v10;
                          if ( (_DWORD)v8 == 10 )
                          {
                            v11 = 10;
                          }
                          else
                          {
                            if ( *(_BYTE *)(v7 + 10) )
                              ++v10;
                            if ( (_DWORD)v8 == 11 )
                            {
                              v11 = 11;
                            }
                            else
                            {
                              if ( *(_BYTE *)(v7 + 11) )
                                ++v10;
                              if ( (_DWORD)v8 == 12 )
                              {
                                v11 = 12;
                              }
                              else
                              {
                                if ( *(_BYTE *)(v7 + 12) )
                                  ++v10;
                                if ( (_DWORD)v8 == 13 )
                                {
                                  v11 = 13;
                                }
                                else
                                {
                                  if ( *(_BYTE *)(v7 + 13) )
                                    ++v10;
                                  if ( (_DWORD)v8 == 14 )
                                  {
                                    v11 = 14;
                                  }
                                  else
                                  {
                                    if ( *(_BYTE *)(v7 + 14) )
                                      ++v10;
                                    v11 = 15;
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
        v11 = 0;
        v10 = 0;
      }
      v12 = 0;
      v13 = v6 - v8;
      si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
      v15 = (unsigned int)(v6 - v8) >> 4;
      v16 = (const __m128i *)(v7 + v8);
      v17 = 0;
      do
      {
        v18 = _mm_load_si128(v16);
        ++v17;
        ++v16;
        v19 = _mm_andnot_si128(_mm_cmpeq_epi8(v18, (__m128i)0LL), si128);
        v20 = _mm_cmpgt_epi8((__m128i)0LL, v19);
        v21 = _mm_unpacklo_epi8(v19, v20);
        v22 = _mm_unpackhi_epi8(v19, v20);
        v23 = _mm_cmpgt_epi16((__m128i)0LL, v21);
        v24 = _mm_add_epi32(_mm_add_epi32(v12, _mm_unpacklo_epi16(v21, v23)), _mm_unpackhi_epi16(v21, v23));
        v25 = _mm_cmpgt_epi16((__m128i)0LL, v22);
        v12 = _mm_add_epi32(_mm_add_epi32(v24, _mm_unpacklo_epi16(v22, v25)), _mm_unpackhi_epi16(v22, v25));
      }
      while ( v15 > v17 );
      v26 = _mm_add_epi32(_mm_srli_si128(v12, 8), v12);
      LODWORD(v27) = (v13 & 0xFFFFFFF0) + v11;
      v28 = v10 + _mm_cvtsi128_si32(_mm_add_epi32(v26, _mm_srli_si128(v26, 4)));
      if ( v13 == (v13 & 0xFFFFFFF0) )
      {
LABEL_58:
        if ( v28 )
          goto LABEL_60;
        goto LABEL_59;
      }
    }
    v27 = (int)v27;
    do
    {
      if ( *(_BYTE *)(v7 + v27) )
        ++v28;
      ++v27;
    }
    while ( v6 > (int)v27 );
    goto LABEL_58;
  }
LABEL_59:
  v7 = 0;
LABEL_60:
  ClpModel::copyInIntegerInformation(a2, (const char *)v7);
  result = ClpModel::setDblParam(a2, 4);
  if ( *(double *)a2 >= 0.0 )
    return result;
  v30 = *(_DWORD *)this;
  if ( *(int *)this > 0 )
  {
    v31 = *((_QWORD *)this + 9);
    v32 = (v31 >> 3) & 1;
    if ( 2 - (unsigned int)((_DWORD)v32 == 0) > v30 - 1 )
    {
      v41 = 0;
    }
    else
    {
      if ( (_DWORD)v32 )
      {
        v33 = 1;
        *(double *)v31 = -*(double *)v31;
      }
      else
      {
        v33 = 0;
      }
      v34 = v30 - v32;
      v35 = (double *)(v31 + 8 * v32);
      v36 = 0;
      v37 = v30 - v32;
      v38 = 0;
      v39 = v37 >> 1;
      do
      {
        ++v36;
        *(double *)&v40 = -v35[v38];
        *((double *)&v40 + 1) = -v35[v38 + 1];
        *(_OWORD *)&v35[v38] = v40;
        v38 += 2;
      }
      while ( v36 < v39 );
      v41 = (v34 & 0xFFFFFFFE) + v33;
      if ( v34 == (v34 & 0xFFFFFFFE) )
        goto LABEL_70;
    }
    v42 = v41;
    v43 = v41 + 1;
    *(double *)(v31 + 8 * v42) = -*(double *)(v31 + 8 * v42);
    if ( v30 > v43 )
      *(double *)(v31 + 8LL * v43) = -*(double *)(v31 + 8LL * v43);
  }
LABEL_70:
  v44 = *((double *)this + 34);
  *((_QWORD *)this + 19) = 0xBFF0000000000000LL;
  *((double *)this + 34) = -v44;
  return 0xBFF0000000000000LL;
}

