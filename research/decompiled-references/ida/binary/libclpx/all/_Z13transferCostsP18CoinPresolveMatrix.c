CoinPresolveMatrix *__fastcall transferCosts(CoinPresolveMatrix *a1)
{
  int v1; // r13d
  __int64 v2; // r15
  __int64 v3; // r14
  double *v4; // rsi
  _BYTE *v5; // r10
  double v6; // xmm7_8
  unsigned int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // r8d
  int v11; // r11d
  __m128i v13; // xmm2
  int v14; // ecx
  __m128i si128; // xmm6
  unsigned int v16; // edi
  const __m128i *v17; // rax
  unsigned int v18; // edx
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm3
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm8
  __m128i v25; // xmm2
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  double v32; // xmm1_8
  __int64 v33; // r9
  __int64 v34; // rdi
  double v35; // xmm2_8
  double v36; // xmm1_8
  __int64 v37; // r9
  int v38; // edi
  __int64 v39; // r11
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // r9
  double v44; // xmm3_8
  int v45; // r8d
  __int64 v46; // r11
  __int64 v47; // rax
  double *v48; // r12
  int v49; // eax
  int v50; // edx
  int *v51; // rcx
  unsigned __int64 v52; // rbp
  __int64 v53; // rax
  double v54; // xmm1_8
  __int64 v55; // rdi
  int v56; // edx
  int v57; // ebx
  int *v58; // rax
  __int64 v59; // r8
  int v60; // r9d
  __int64 v61; // rdx
  double v62; // xmm2_8
  __int64 v63; // rax
  double v64; // xmm3_8
  __int64 v65; // [rsp+0h] [rbp-B8h]
  __int64 v66; // [rsp+8h] [rbp-B0h]
  __int64 v67; // [rsp+10h] [rbp-A8h]
  __int64 v68; // [rsp+18h] [rbp-A0h]
  __int64 v69; // [rsp+20h] [rbp-98h]
  int v70; // [rsp+30h] [rbp-88h]
  int v71; // [rsp+34h] [rbp-84h]
  __int64 v72; // [rsp+38h] [rbp-80h]
  __int64 v73; // [rsp+40h] [rbp-78h]
  __int64 v74; // [rsp+48h] [rbp-70h]
  __int64 v75; // [rsp+50h] [rbp-68h]
  __int64 v77; // [rsp+70h] [rbp-48h]
  __int64 v78; // [rsp+78h] [rbp-40h]

  v1 = *(_DWORD *)a1;
  v2 = *((_QWORD *)a1 + 13);
  v3 = *((_QWORD *)a1 + 14);
  v77 = *((_QWORD *)a1 + 8);
  v73 = *((_QWORD *)a1 + 7);
  v74 = *((_QWORD *)a1 + 5);
  v72 = *((_QWORD *)a1 + 6);
  v78 = *((_QWORD *)a1 + 37);
  v69 = *((_QWORD *)a1 + 38);
  v67 = *((_QWORD *)a1 + 35);
  v68 = *((_QWORD *)a1 + 36);
  v65 = *((_QWORD *)a1 + 11);
  v66 = *((_QWORD *)a1 + 12);
  v4 = *((double **)a1 + 9);
  v5 = *((_BYTE **)a1 + 39);
  v6 = *((double *)a1 + 34);
  if ( *(int *)a1 <= 0 )
    goto LABEL_49;
  v7 = v1 - 1;
  v8 = -(int)v5 & 0xF;
  v9 = v8 + 15;
  if ( (unsigned int)(v8 + 15) < 0x12 )
    v9 = 18;
  if ( v9 > v7 )
  {
    LODWORD(v28) = 0;
    v29 = 0;
LABEL_54:
    v28 = (int)v28;
    do
    {
      if ( v5[v28] )
        ++v29;
      ++v28;
    }
    while ( v1 > (int)v28 );
    goto LABEL_58;
  }
  if ( (_DWORD)v8 )
  {
    v10 = *v5 != 0;
    if ( (_DWORD)v8 == 1 )
    {
      v11 = 1;
    }
    else
    {
      if ( v5[1] )
        ++v10;
      if ( (_DWORD)v8 == 2 )
      {
        v11 = 2;
      }
      else
      {
        if ( v5[2] )
          ++v10;
        if ( (_DWORD)v8 == 3 )
        {
          v11 = 3;
        }
        else
        {
          if ( v5[3] )
            ++v10;
          if ( (_DWORD)v8 == 4 )
          {
            v11 = 4;
          }
          else
          {
            if ( v5[4] )
              ++v10;
            if ( (_DWORD)v8 == 5 )
            {
              v11 = 5;
            }
            else
            {
              if ( v5[5] )
                ++v10;
              if ( (_DWORD)v8 == 6 )
              {
                v11 = 6;
              }
              else
              {
                if ( v5[6] )
                  ++v10;
                if ( (_DWORD)v8 == 7 )
                {
                  v11 = 7;
                }
                else
                {
                  if ( v5[7] )
                    ++v10;
                  if ( (_DWORD)v8 == 8 )
                  {
                    v11 = 8;
                  }
                  else
                  {
                    if ( v5[8] )
                      ++v10;
                    if ( (_DWORD)v8 == 9 )
                    {
                      v11 = 9;
                    }
                    else
                    {
                      if ( v5[9] )
                        ++v10;
                      if ( (_DWORD)v8 == 10 )
                      {
                        v11 = 10;
                      }
                      else
                      {
                        if ( v5[10] )
                          ++v10;
                        if ( (_DWORD)v8 == 11 )
                        {
                          v11 = 11;
                        }
                        else
                        {
                          if ( v5[11] )
                            ++v10;
                          if ( (_DWORD)v8 == 12 )
                          {
                            v11 = 12;
                          }
                          else
                          {
                            if ( v5[12] )
                              ++v10;
                            if ( (_DWORD)v8 == 13 )
                            {
                              v11 = 13;
                            }
                            else
                            {
                              if ( v5[13] )
                                ++v10;
                              if ( (_DWORD)v8 == 14 )
                              {
                                v11 = 14;
                              }
                              else
                              {
                                if ( v5[14] )
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
  v13 = 0;
  v14 = v1 - v8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
  v16 = (unsigned int)(v1 - v8) >> 4;
  v17 = (const __m128i *)&v5[v8];
  v18 = 0;
  do
  {
    ++v18;
    v19 = _mm_cmpeq_epi8(_mm_load_si128(v17++), (__m128i)0LL);
    v20 = _mm_andnot_si128(v19, si128);
    v21 = _mm_cmpgt_epi8((__m128i)0LL, v20);
    v22 = _mm_unpacklo_epi8(v20, v21);
    v23 = _mm_unpackhi_epi8(v20, v21);
    v24 = _mm_cmpgt_epi16((__m128i)0LL, v22);
    v25 = _mm_add_epi32(_mm_add_epi32(v13, _mm_unpacklo_epi16(v22, v24)), _mm_unpackhi_epi16(v22, v24));
    v26 = _mm_cmpgt_epi16((__m128i)0LL, v23);
    v13 = _mm_add_epi32(_mm_add_epi32(v25, _mm_unpacklo_epi16(v23, v26)), _mm_unpackhi_epi16(v23, v26));
  }
  while ( v16 > v18 );
  v27 = _mm_add_epi32(v13, _mm_srli_si128(v13, 8));
  LODWORD(v28) = (v14 & 0xFFFFFFF0) + v11;
  v29 = v10 + _mm_cvtsi128_si32(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
  if ( (v14 & 0xFFFFFFF0) != v14 )
    goto LABEL_54;
LABEL_58:
  v30 = 4LL * v7 + 4;
  v31 = 0;
  do
  {
    while ( 1 )
    {
      v32 = v4[v31 / 4];
      if ( v32 != 0.0 && *(_DWORD *)(v72 + v31) == 1 && *(double *)(v66 + 2 * v31) > *(double *)(v65 + 2 * v31) )
      {
        v33 = *(int *)(v74 + v31);
        v34 = *(int *)(v73 + 4 * v33);
        v35 = *(double *)(v2 + 8 * v34);
        if ( v35 == *(double *)(v3 + 8 * v34) )
          break;
      }
      v31 += 4LL;
      if ( v31 == v30 )
        goto LABEL_68;
    }
    v36 = v32 / *(double *)(v77 + 8 * v33);
    v37 = *(int *)(v67 + 4 * v34);
    v38 = *(_DWORD *)(v68 + 4 * v34);
    v6 = v6 + v35 * v36;
    if ( (int)v37 < (int)v37 + v38 )
    {
      v39 = (unsigned int)(v38 - 1) + 1LL;
      v40 = v69 + 4 * v37;
      v41 = v78 + 8 * v37;
      v42 = 0;
      do
      {
        v43 = *(int *)(v40 + 4 * v42);
        v44 = *(double *)(v41 + 8 * v42++);
        v4[v43] = v4[v43] - v44 * v36;
      }
      while ( v42 != v39 );
    }
    v4[v31 / 4] = 0.0;
    v31 += 4LL;
  }
  while ( v31 != v30 );
LABEL_68:
  if ( v29 )
  {
    v45 = 0;
    v70 = 0;
LABEL_70:
    if ( v45 < v1 )
    {
LABEL_71:
      v46 = v45++;
      v47 = 8 * v46;
      v48 = &v4[v46];
      goto LABEL_72;
    }
    while ( v70 )
    {
      v48 = v4;
      v45 = 1;
      v47 = 0;
      v46 = 0;
      v70 = 0;
LABEL_72:
      if ( *v48 == 0.0 )
        goto LABEL_70;
      if ( *(double *)(v66 + v47) <= *(double *)(v65 + v47) )
        goto LABEL_70;
      v49 = *(_DWORD *)(v74 + 4 * v46);
      v50 = *(_DWORD *)(v72 + 4 * v46);
      if ( v49 >= v49 + v50 )
        goto LABEL_70;
      v75 = v49;
      v71 = v45;
      v51 = (int *)(v73 + 4LL * v49);
      v52 = v73 + 4 + 4 * (v49 + (unsigned __int64)(unsigned int)(v50 - 1));
      while ( 1 )
      {
        v53 = *v51;
        v54 = *(double *)(v2 + 8 * v53);
        if ( v54 == *(double *)(v3 + 8 * v53) )
        {
          v55 = *(int *)(v67 + 4 * v53);
          v56 = *(_DWORD *)(v68 + 4 * v53);
          v57 = v55 + v56;
          if ( (int)v55 < (int)v55 + v56 )
          {
            v58 = (int *)(v69 + 4 * v55);
            v59 = v69 + 4 + 4 * (v55 + (unsigned int)(v56 - 1));
            v60 = 0;
            do
            {
              v61 = *v58;
              if ( v4[v61] == 0.0 && v5[v61] )
                ++v60;
              ++v58;
            }
            while ( v58 != (int *)v59 );
            if ( v60 > (v5[v46] != 0) )
              break;
          }
        }
        if ( ++v51 == (int *)v52 )
        {
          v45 = v71;
          goto LABEL_70;
        }
      }
      v45 = v71;
      v62 = *v48 / *(double *)(v77 + 8 * v75);
      v6 = v6 + v54 * v62;
      do
      {
        v63 = *(int *)(v69 + 4 * v55);
        v64 = *(double *)(v78 + 8 * v55++);
        v4[v63] = v4[v63] - v64 * v62;
      }
      while ( v57 > (int)v55 );
      ++v70;
      *v48 = 0.0;
      if ( v71 < v1 )
        goto LABEL_71;
    }
  }
LABEL_49:
  *((double *)a1 + 34) = v6;
  return a1;
}

