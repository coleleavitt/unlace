__int64 __fastcall ClpSimplex::fastCrunch(double **this, ClpNodeStuff *a2, int a3)
{
  int v5; // ebx
  double *v6; // r14
  unsigned __int64 v7; // rdi
  int *v8; // r13
  unsigned __int64 v9; // rdi
  int *v10; // r15
  __int64 result; // rax
  __int64 v12; // r13
  int v13; // edx
  int v14; // edx
  __int64 v15; // r14
  int v16; // edi
  __int64 v17; // rsi
  __m128i si128; // xmm6
  __int64 v19; // r15
  int v20; // r12d
  int v21; // r9d
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r10d
  int v26; // r10d
  unsigned int v27; // ecx
  __m128i v28; // xmm2
  __int64 v29; // r8
  unsigned int v30; // eax
  const __m128i *v31; // r8
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i v34; // xmm3
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __m128i v37; // xmm7
  __m128i v38; // xmm2
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  _BYTE *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  void *v46; // rdi
  void *v47; // rdi
  __int64 v48; // rbx
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rax
  double *v52; // rcx
  __m128d v53; // xmm0
  __m128d v54; // xmm1
  _BYTE *v55; // [rsp+10h] [rbp-68h]
  int *v56; // [rsp+18h] [rbp-60h]
  ClpSimplex *v57; // [rsp+20h] [rbp-58h]
  __int64 v58; // [rsp+28h] [rbp-50h]
  int v59[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v5 = a3;
  if ( a3 )
  {
    v46 = *((void **)a2 + 14);
    if ( a3 == 1 )
    {
      v48 = *((_QWORD *)a2 + 13);
      ClpSimplexOther::afterCrunch(
        (ClpSimplexOther *)v48,
        (const ClpSimplex *)this,
        *((const int **)a2 + 14),
        *((const int **)a2 + 15),
        *((_DWORD *)a2 + 34));
      v49 = *(_DWORD *)(v48 + 108);
      if ( v49 > 0 )
      {
        v50 = *(_QWORD *)(v48 + 272);
        v51 = 0;
        while ( !*(_BYTE *)(v50 + v51) )
        {
LABEL_80:
          if ( v49 <= (int)++v51 )
            goto LABEL_81;
        }
        while ( 1 )
        {
          v52 = (double *)(8 * v51 + *(_QWORD *)(v48 + 120));
          v53.m128d_f64[0] = *v52 + 0.5;
          if ( fabs(v53.m128d_f64[0]) < 4.503599627370496e15 )
          {
            v54 = 0;
            v54.m128d_f64[0] = (double)(int)v53.m128d_f64[0];
            *(_QWORD *)&v53.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                             v54.m128d_f64[0]
                                           - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v54, v53).m128d_f64[0] & 0x3FF0000000000000LL))
                                         | *(_QWORD *)&v53.m128d_f64[0] & 0x8000000000000000LL;
          }
          *v52 = v53.m128d_f64[0];
          *(double *)(*(_QWORD *)(v48 + 176) + 8 * v51) = v53.m128d_f64[0];
          *(double *)(*(_QWORD *)(v48 + 184) + 8 * v51) = v53.m128d_f64[0];
          v49 = *(_DWORD *)(v48 + 108);
          if ( (int)++v51 >= v49 )
            break;
          v50 = *(_QWORD *)(v48 + 272);
          if ( !*(_BYTE *)(v50 + v51) )
            goto LABEL_80;
        }
      }
LABEL_81:
      v46 = *((void **)a2 + 14);
      if ( !v46 )
        goto LABEL_71;
    }
    else if ( !v46 )
    {
      goto LABEL_71;
    }
    operator delete[](v46);
LABEL_71:
    v47 = *((void **)a2 + 15);
    result = 0;
    if ( v47 )
    {
      operator delete[](v47);
      return 0;
    }
    return result;
  }
  v6 = *(this + 16);
  v7 = 3 * *((_DWORD *)this + 26);
  if ( v7 > 0x1FFFFFFFFFFFFFFELL
    || (v8 = (int *)operator new[](4 * v7), v9 = 2 * *((_DWORD *)this + 27), v9 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v10 = (int *)operator new[](4 * v9);
  result = ClpSimplexOther::crunch((ClpSimplexOther *)this, v6, v8, v10, v59, 0, (*(_DWORD *)(this + 42) & 0x40) != 0);
  if ( !result )
  {
    operator delete[](v8);
    operator delete[](v10);
    return 0;
  }
  *((_QWORD *)a2 + 14) = v8;
  v12 = *((_QWORD *)a2 + 5);
  v13 = v59[0];
  *((_QWORD *)a2 + 13) = this;
  *((_QWORD *)a2 + 15) = v10;
  *((_DWORD *)a2 + 34) = v13;
  if ( v12 )
  {
    v14 = *(_DWORD *)(result + 108);
    v15 = *(_QWORD *)(result + 272);
    if ( v14 > 0 )
    {
      v56 = v10;
      v57 = (ClpSimplex *)this;
      v16 = 0;
      v17 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
      v19 = (unsigned int)(v14 - 1) + 1LL;
      v58 = result;
      v20 = 0;
      while ( 1 )
      {
        while ( !*(_BYTE *)(v15 + v17) )
        {
          if ( v19 == ++v17 )
            return v58;
        }
        v21 = v56[v17];
        if ( v21 == v16 )
          goto LABEL_65;
        v22 = v16;
        v23 = *((_QWORD *)v57 + 34);
        v55 = (_BYTE *)(v23 + v16);
        v24 = -(int)v55 & 0xF;
        v25 = v24 + 15;
        if ( (unsigned int)(v24 + 15) < 0x12 )
          v25 = 18;
        if ( v21 - v16 - 1 >= v25 )
        {
          if ( (_DWORD)v24 )
          {
            v26 = v16 + 1;
            v5 -= (*v55 == 0) - 1;
            if ( (_DWORD)v24 != 1 )
            {
              if ( *(_BYTE *)(v23 + v26) )
                ++v5;
              v26 = v16 + 2;
              if ( (_DWORD)v24 != 2 )
              {
                if ( *(_BYTE *)(v23 + v26) )
                  ++v5;
                v26 = v16 + 3;
                if ( (_DWORD)v24 != 3 )
                {
                  if ( *(_BYTE *)(v23 + v26) )
                    ++v5;
                  v26 = v16 + 4;
                  if ( (_DWORD)v24 != 4 )
                  {
                    if ( *(_BYTE *)(v23 + v26) )
                      ++v5;
                    v26 = v16 + 5;
                    if ( (_DWORD)v24 != 5 )
                    {
                      if ( *(_BYTE *)(v23 + v26) )
                        ++v5;
                      v26 = v16 + 6;
                      if ( (_DWORD)v24 != 6 )
                      {
                        if ( *(_BYTE *)(v23 + v26) )
                          ++v5;
                        v26 = v16 + 7;
                        if ( (_DWORD)v24 != 7 )
                        {
                          if ( *(_BYTE *)(v23 + v26) )
                            ++v5;
                          v26 = v16 + 8;
                          if ( (_DWORD)v24 != 8 )
                          {
                            if ( *(_BYTE *)(v23 + v26) )
                              ++v5;
                            v26 = v16 + 9;
                            if ( (_DWORD)v24 != 9 )
                            {
                              if ( *(_BYTE *)(v23 + v26) )
                                ++v5;
                              v26 = v16 + 10;
                              if ( (_DWORD)v24 != 10 )
                              {
                                if ( *(_BYTE *)(v23 + v26) )
                                  ++v5;
                                v26 = v16 + 11;
                                if ( (_DWORD)v24 != 11 )
                                {
                                  if ( *(_BYTE *)(v23 + v26) )
                                    ++v5;
                                  v26 = v16 + 12;
                                  if ( (_DWORD)v24 != 12 )
                                  {
                                    if ( *(_BYTE *)(v23 + v26) )
                                      ++v5;
                                    v26 = v16 + 13;
                                    if ( (_DWORD)v24 != 13 )
                                    {
                                      if ( *(_BYTE *)(v23 + v26) )
                                        ++v5;
                                      v26 = v16 + 14;
                                      if ( (_DWORD)v24 != 14 )
                                      {
                                        if ( *(_BYTE *)(v23 + v26) )
                                          ++v5;
                                        v26 = v16 + 15;
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
            v26 = v16;
          }
          v27 = v21 - v16 - v24;
          v28 = 0;
          v29 = v24 + v16;
          v30 = 0;
          v31 = (const __m128i *)(v23 + v29);
          do
          {
            ++v30;
            v32 = _mm_cmpeq_epi8(_mm_load_si128(v31++), (__m128i)0LL);
            v33 = _mm_andnot_si128(v32, si128);
            v34 = _mm_cmpgt_epi8((__m128i)0LL, v33);
            v35 = _mm_unpacklo_epi8(v33, v34);
            v36 = _mm_unpackhi_epi8(v33, v34);
            v37 = _mm_cmpgt_epi16((__m128i)0LL, v35);
            v38 = _mm_add_epi32(_mm_add_epi32(v28, _mm_unpacklo_epi16(v35, v37)), _mm_unpackhi_epi16(v35, v37));
            v39 = _mm_cmpgt_epi16((__m128i)0LL, v36);
            v28 = _mm_add_epi32(_mm_add_epi32(v38, _mm_unpacklo_epi16(v36, v39)), _mm_unpackhi_epi16(v36, v39));
          }
          while ( v27 >> 4 > v30 );
          v40 = _mm_add_epi32(v28, _mm_srli_si128(v28, 8));
          v5 += _mm_cvtsi128_si32(_mm_add_epi32(v40, _mm_srli_si128(v40, 4)));
          v16 = (v27 & 0xFFFFFFF0) + v26;
          if ( v27 == (v27 & 0xFFFFFFF0) )
            goto LABEL_64;
          v22 = v16;
        }
        v41 = (_BYTE *)(v23 + v22);
        v42 = v23 + v22 + 1 + (unsigned int)(v21 - 1 - v16);
        do
          v5 -= (*v41++ == 0) - 1;
        while ( v41 != (_BYTE *)v42 );
LABEL_64:
        v16 = v56[v17];
LABEL_65:
        v43 = *((_QWORD *)a2 + 8);
        v44 = v20;
        ++v17;
        ++v20;
        v45 = *(_DWORD *)(v43 + 4LL * v5);
        *(_QWORD *)(v12 + 8 * v44) = *(_QWORD *)(v12 + 8LL * v5);
        *(_DWORD *)(v43 + 4 * v44) = v45;
        *(_DWORD *)(*((_QWORD *)a2 + 10) + 4 * v44) = *(_DWORD *)(*((_QWORD *)a2 + 10) + 4LL * v5);
        *(_QWORD *)(*((_QWORD *)a2 + 4) + 8 * v44) = *(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL * v5);
        *(_DWORD *)(*((_QWORD *)a2 + 7) + 4 * v44) = *(_DWORD *)(*((_QWORD *)a2 + 7) + 4LL * v5);
        *(_DWORD *)(*((_QWORD *)a2 + 9) + 4 * v44) = *(_DWORD *)(*((_QWORD *)a2 + 9) + 4LL * v5);
        if ( v19 == v17 )
          return v58;
      }
    }
  }
  return result;
}

