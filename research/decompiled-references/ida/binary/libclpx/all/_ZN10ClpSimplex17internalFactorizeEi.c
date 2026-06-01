__int64 __fastcall ClpSimplex::internalFactorize(ClpSimplex *this, int a2, __m128i a3)
{
  int v3; // ebp
  int v5; // r12d
  bool j; // cl
  char v7; // di
  unsigned int v8; // r13d
  CoinFactorization *v9; // rdi
  int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // r10
  int v14; // r9d
  int v15; // edx
  char *v16; // rax
  char v17; // si
  char v18; // r11
  __int64 v19; // rsi
  char *v20; // r10
  char v21; // al
  char v22; // r9
  __int64 v23; // rdi
  int v24; // r9d
  char *v25; // rax
  char *v26; // r8
  char v27; // si
  __int64 v28; // rsi
  int i; // edi
  int v30; // eax
  double v31; // xmm1_8
  double *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  char *v35; // r9
  double *v36; // r13
  double v37; // xmm1_8
  char v38; // si
  char v39; // r10
  char v40; // si
  __int64 v41; // rdi
  int k; // esi
  _BYTE *v43; // rax
  __int64 v44; // rax
  int v45; // esi
  __int64 v46; // r10
  __int64 v47; // rax
  _BYTE *v48; // rdi
  __int64 v49; // rcx
  unsigned int v50; // r8d
  int v51; // edx
  __int64 v52; // rax
  bool v53; // dl
  __int64 v54; // rsi
  _BYTE *v55; // r8
  __int64 v56; // rdi
  unsigned int v57; // eax
  int v58; // r11d
  int v59; // eax
  __m128i v60; // xmm1
  int v61; // r10d
  __m128i v62; // xmm5
  __int64 v63; // rsi
  unsigned int v64; // r12d
  unsigned int v65; // edi
  __m128i v66; // xmm3
  __m128i v67; // xmm0
  __m128i v68; // xmm7
  __m128i v69; // xmm2
  __m128i v70; // xmm0
  __m128i v71; // xmm7
  __m128i v72; // xmm1
  __m128i v73; // xmm2
  __m128i v74; // xmm0
  __int64 v75; // rax
  bool v76; // si
  __int64 v77; // rax
  _BYTE *v78; // rsi
  __int64 v79; // rdx
  double *v80; // rsi
  double v81; // xmm2_8
  int v82; // edx
  _BYTE *v83; // rdx
  double v84; // xmm1_8
  double *v85; // rsi
  double v86; // xmm2_8
  double v87; // xmm2_8
  double v88; // xmm3_8
  _BYTE *v89; // rdx
  int v90; // r10d
  __int64 v91; // rax
  _BYTE *v92; // r8
  double *v93; // rdx
  double v94; // xmm2_8
  double v95; // xmm1_8
  double v96; // xmm2_8
  double v97; // xmm3_8
  __int64 v98; // rsi
  __m128i v99; // xmm1
  int v100; // r8d
  __m128i si128; // xmm5
  __int64 v102; // rax
  unsigned int v103; // r9d
  unsigned int v104; // ecx
  __m128i v105; // xmm3
  __m128i v106; // xmm0
  __m128i v107; // xmm7
  __m128i v108; // xmm2
  __m128i v109; // xmm0
  __m128i v110; // xmm7
  __m128i v111; // xmm1
  __m128i v112; // xmm2
  __m128i v113; // xmm0
  CoinMessageHandler *v114; // rax
  __int64 v115; // rax
  _BYTE *v116; // rsi
  double v117; // xmm1_8
  double v118; // xmm3_8
  int v119; // esi
  int v120; // eax
  __int64 v121; // rax
  double v122; // xmm2_8
  unsigned __int64 *v123; // rdx
  double v124; // xmm3_8
  double v125; // xmm1_8
  bool v126; // [rsp+Ch] [rbp-2Ch]
  bool v127; // [rsp+Ch] [rbp-2Ch]

  v3 = a2;
  v5 = *((_DWORD *)this + 26);
  if ( !*((_QWORD *)this + 33) )
    ClpSimplex::createStatus(this);
  if ( a2 > 9 )
  {
    v3 = a2 - 10;
    j = 1;
    v7 = 1;
    if ( a2 - 10 > 0 )
      goto LABEL_5;
LABEL_13:
    v11 = *((_DWORD *)this + 26);
    v12 = *((int *)this + 27);
    v13 = 0;
    v14 = 0;
    v15 = *((_DWORD *)this + 27);
    if ( v11 > 0 )
    {
      while ( 1 )
      {
        v16 = (char *)(*((_QWORD *)this + 33) + v14 + (int)v12);
        v17 = *v16;
        v18 = *v16 & 7;
        if ( v18 != 5 )
          break;
        a3.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)this + 127) + v13);
        if ( *(double *)a3.m128i_i64 <= *(double *)(*((_QWORD *)this + 124) + v13) )
        {
LABEL_19:
          ++v14;
          v13 += 8;
          if ( v14 >= v11 )
            goto LABEL_20;
        }
        else
        {
          ++v14;
          v13 += 8;
          *v16 = v17 & 0xF8 | 3;
          v12 = *((int *)this + 27);
          v11 = *((_DWORD *)this + 26);
          v15 = *((_DWORD *)this + 27);
          if ( v14 >= v11 )
            goto LABEL_20;
        }
      }
      if ( !v18 )
      {
        a3.m128i_i64[0] = *((_QWORD *)this + 94);
        if ( *(double *)(*((_QWORD *)this + 124) + v13) > -*(double *)a3.m128i_i64
          || *(double *)a3.m128i_i64 > *(double *)(*((_QWORD *)this + 127) + v13) )
        {
          *v16 = v17 & 0xF8 | 4;
          v12 = *((int *)this + 27);
          v11 = *((_DWORD *)this + 26);
          v15 = *((_DWORD *)this + 27);
        }
      }
      goto LABEL_19;
    }
LABEL_20:
    if ( (int)v12 > 0 )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = (char *)(v19 + *((_QWORD *)this + 33));
        v21 = *v20;
        v22 = *v20 & 7;
        if ( v22 != 5 )
          break;
        a3.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)this + 128) + 8 * v19);
        if ( *(double *)a3.m128i_i64 <= *(double *)(*((_QWORD *)this + 125) + 8 * v19) )
        {
LABEL_27:
          if ( (int)v12 <= (int)++v19 )
            goto LABEL_28;
        }
        else
        {
          *v20 = v21 & 0xF8 | 3;
          v12 = *((int *)this + 27);
          ++v19;
          v15 = *((_DWORD *)this + 27);
          if ( (int)v12 <= (int)v19 )
            goto LABEL_28;
        }
      }
      if ( !v22 )
      {
        a3.m128i_i64[0] = *((_QWORD *)this + 94);
        if ( *(double *)(*((_QWORD *)this + 125) + 8 * v19) > -*(double *)a3.m128i_i64
          || *(double *)a3.m128i_i64 > *(double *)(*((_QWORD *)this + 128) + 8 * v19) )
        {
          *v20 = v21 & 0xF8 | 4;
          v12 = *((int *)this + 27);
          v15 = *((_DWORD *)this + 27);
        }
      }
      goto LABEL_27;
    }
LABEL_28:
    if ( !v7 )
    {
      v23 = *((_QWORD *)this + 33);
      if ( !v23 )
      {
        v126 = j;
        ClpSimplex::createStatus(this);
        v24 = *((_DWORD *)this + 26);
        j = v126;
        if ( v24 <= 0 )
        {
LABEL_50:
          LODWORD(v12) = *((_DWORD *)this + 27);
LABEL_51:
          v15 = v12;
          if ( (int)v12 > 0 )
          {
            v33 = 0;
            while ( 1 )
            {
              while ( 1 )
              {
                v34 = 8 * v33;
                a3.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)this + 125) + 8 * v33);
                v35 = (char *)(v33 + *((_QWORD *)this + 33));
                v36 = (double *)(8 * v33 + *((_QWORD *)this + 152));
                v37 = *(double *)(*((_QWORD *)this + 128) + 8 * v33);
                v38 = *v35;
                if ( *(double *)a3.m128i_i64 > -*((double *)this + 94) || *((double *)this + 94) > v37 )
                  break;
                *v35 = v38 & 0xF8;
                *(_QWORD *)(*((_QWORD *)this + 152) + 8 * v33) = 0;
                v15 = *((_DWORD *)this + 27);
LABEL_55:
                if ( v15 <= (int)++v33 )
                  goto LABEL_65;
              }
              v39 = v38 & 7;
              if ( *(double *)a3.m128i_i64 == *v36 && v39 == 3 || v37 == *v36 && v39 == 2 )
                goto LABEL_55;
              if ( v39 == 2 )
              {
                if ( v37 < 1.0e20 )
                {
                  *v36 = v37;
                  v15 = *((_DWORD *)this + 27);
                  goto LABEL_55;
                }
              }
              else if ( v39 == 3 && *(double *)a3.m128i_i64 > -1.0e20 )
              {
                *v36 = *(double *)a3.m128i_i64;
                v15 = *((_DWORD *)this + 27);
                goto LABEL_55;
              }
              v40 = v38 & 0xF8;
              if ( fabs(v37) < fabs(*(double *)a3.m128i_i64) )
              {
                *v35 = v40 | 2;
                *(double *)(*((_QWORD *)this + 152) + 8 * v33) = v37;
                v15 = *((_DWORD *)this + 27);
                goto LABEL_55;
              }
              *v35 = v40 | 3;
              ++v33;
              *(_QWORD *)(*((_QWORD *)this + 152) + v34) = a3.m128i_i64[0];
              v15 = *((_DWORD *)this + 27);
              if ( v15 <= (int)v33 )
                goto LABEL_65;
            }
          }
LABEL_187:
          *((_DWORD *)this + 309) = 1;
          if ( v24 <= 0 )
            goto LABEL_77;
          goto LABEL_66;
        }
LABEL_35:
        v28 = 0;
        for ( i = 0; i < v24; ++i )
        {
          a3.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)this + 124) + v28);
          v31 = *(double *)(*((_QWORD *)this + 127) + v28);
          v32 = (double *)(v28 + *((_QWORD *)this + 151));
          if ( *(double *)a3.m128i_i64 > -*((double *)this + 94) || *((double *)this + 94) > v31 )
          {
            if ( fabs(v31) < fabs(*(double *)a3.m128i_i64) )
              *v32 = v31;
            else
              *v32 = *(double *)a3.m128i_i64;
          }
          else
          {
            *v32 = 0.0;
          }
          v28 += 8;
          v30 = i + *((_DWORD *)this + 27);
          *(_BYTE *)(*((_QWORD *)this + 33) + v30) = *(_BYTE *)(*((_QWORD *)this + 33) + v30) & 0xF8 | 1;
          v24 = *((_DWORD *)this + 26);
        }
        goto LABEL_50;
      }
      v24 = *((_DWORD *)this + 26);
      if ( v24 <= 0 )
        goto LABEL_51;
      if ( (*(_BYTE *)(v23 + v12) & 7) == 1 )
      {
        v25 = (char *)(v23 + v12 + 1);
        v26 = (char *)(v23 + (unsigned int)(v24 - 1) + 1 + v12);
        while ( v25 != v26 )
        {
          v27 = *v25++;
          if ( (v27 & 7) != 1 )
            goto LABEL_138;
        }
        goto LABEL_35;
      }
LABEL_138:
      a3.m128i_i64[0] = 0x8000000000000000LL;
      v77 = 0;
      v5 = 0;
      while ( 1 )
      {
        v78 = (_BYTE *)(v23 + v15 + (int)v77);
        switch ( *v78 & 7 )
        {
          case 1:
            ++v5;
            break;
          case 2:
            v79 = 8 * v77;
            *(_QWORD *)(*((_QWORD *)this + 151) + 8 * v77) = *(_QWORD *)(*((_QWORD *)this + 127) + 8 * v77);
            v84 = *((double *)this + 94);
            v85 = (double *)(8 * v77 + *((_QWORD *)this + 151));
            if ( *v85 <= v84 )
              goto LABEL_144;
            v86 = *(double *)(*((_QWORD *)this + 124) + 8 * v77);
            if ( v86 <= -v84 )
              goto LABEL_185;
            *v85 = v86;
            goto LABEL_154;
          case 3:
          case 5:
            v79 = 8 * v77;
            *(_QWORD *)(*((_QWORD *)this + 151) + 8 * v77) = *(_QWORD *)(*((_QWORD *)this + 124) + 8 * v77);
            v80 = (double *)(8 * v77 + *((_QWORD *)this + 151));
            if ( -*((double *)this + 94) <= *v80 )
              goto LABEL_144;
            v81 = *(double *)(*((_QWORD *)this + 127) + 8 * v77);
            if ( *((double *)this + 94) > v81 )
            {
              *v80 = v81;
              v82 = v77;
              goto LABEL_143;
            }
LABEL_185:
            v116 = (_BYTE *)(*((_QWORD *)this + 33) + (int)v77 + *((_DWORD *)this + 27));
            *v116 &= 0xF8u;
            *(_QWORD *)(*((_QWORD *)this + 151) + v79) = 0;
            v24 = *((_DWORD *)this + 26);
            v15 = *((_DWORD *)this + 27);
            break;
          case 4:
            v87 = *(double *)(*((_QWORD *)this + 127) + 8 * v77);
            v88 = *(double *)(*((_QWORD *)this + 124) + 8 * v77);
            if ( v87 <= *((double *)this + 94) )
            {
              *(double *)(*((_QWORD *)this + 151) + 8 * v77) = v87;
              v82 = v77;
LABEL_143:
              v83 = (_BYTE *)(*((_QWORD *)this + 33) + *((_DWORD *)this + 27) + v82);
              *v83 = *v83 & 0xF8 | 2;
LABEL_144:
              v24 = *((_DWORD *)this + 26);
              v15 = *((_DWORD *)this + 27);
            }
            else if ( v88 <= -*((double *)this + 94) )
            {
              *v78 &= 0xF8u;
              *(_QWORD *)(*((_QWORD *)this + 151) + 8 * v77) = 0;
              v24 = *((_DWORD *)this + 26);
              v15 = *((_DWORD *)this + 27);
            }
            else
            {
              *(double *)(*((_QWORD *)this + 151) + 8 * v77) = v88;
LABEL_154:
              v89 = (_BYTE *)(*((_QWORD *)this + 33) + (int)v77 + *((_DWORD *)this + 27));
              *v89 = *v89 & 0xF8 | 3;
              v24 = *((_DWORD *)this + 26);
              v15 = *((_DWORD *)this + 27);
            }
            break;
          default:
            break;
        }
        if ( v24 <= (int)++v77 )
          break;
        v23 = *((_QWORD *)this + 33);
      }
      if ( v15 <= 0 )
        goto LABEL_187;
      a3.m128i_i64[0] = 0x8000000000000000LL;
      v90 = v5;
      v91 = 0;
      do
      {
        v92 = (_BYTE *)(v91 + *((_QWORD *)this + 33));
        switch ( *v92 & 7 )
        {
          case 1:
            if ( *((_DWORD *)this + 339) == v90 )
            {
              v117 = *(double *)(*((_QWORD *)this + 125) + 8 * v91);
              v118 = *(double *)(*((_QWORD *)this + 128) + 8 * v91);
              v93 = (double *)(*((_QWORD *)this + 152) + 8 * v91);
              if ( v117 <= -*((double *)this + 94) )
              {
                if ( *((double *)this + 94) <= v118 )
                  goto LABEL_160;
              }
              else if ( v118 - *v93 > *v93 - v117 )
              {
                *v93 = v117;
                goto LABEL_171;
              }
              *v93 = v118;
              v98 = v91;
              goto LABEL_174;
            }
            ++v90;
            break;
          case 2:
            *(_QWORD *)(*((_QWORD *)this + 152) + 8 * v91) = *(_QWORD *)(*((_QWORD *)this + 128) + 8 * v91);
            v95 = *((double *)this + 94);
            v93 = (double *)(*((_QWORD *)this + 152) + 8 * v91);
            if ( *v93 <= v95 )
              goto LABEL_175;
            v96 = *(double *)(*((_QWORD *)this + 125) + 8 * v91);
            if ( -v95 > v96 )
              goto LABEL_160;
            *v93 = v96;
            goto LABEL_171;
          case 3:
          case 5:
            *(_QWORD *)(*((_QWORD *)this + 152) + 8 * v91) = *(_QWORD *)(*((_QWORD *)this + 125) + 8 * v91);
            v93 = (double *)(*((_QWORD *)this + 152) + 8 * v91);
            if ( -*((double *)this + 94) <= *v93 )
              goto LABEL_175;
            v94 = *(double *)(*((_QWORD *)this + 128) + 8 * v91);
            if ( v94 <= *((double *)this + 94) )
              goto LABEL_173;
LABEL_160:
            *v93 = 0.0;
            *(_BYTE *)(v91 + *((_QWORD *)this + 33)) &= 0xF8u;
            v15 = *((_DWORD *)this + 27);
            break;
          case 4:
            v94 = *(double *)(*((_QWORD *)this + 128) + 8 * v91);
            v97 = *(double *)(*((_QWORD *)this + 125) + 8 * v91);
            if ( v94 <= *((double *)this + 94) )
            {
              v93 = (double *)(*((_QWORD *)this + 152) + 8 * v91);
LABEL_173:
              *v93 = v94;
              v98 = v91;
LABEL_174:
              *(_BYTE *)(*((_QWORD *)this + 33) + v98) = *(_BYTE *)(*((_QWORD *)this + 33) + v98) & 0xF8 | 2;
LABEL_175:
              v15 = *((_DWORD *)this + 27);
            }
            else if ( v97 <= -*((double *)this + 94) )
            {
              *v92 &= 0xF8u;
              *(_QWORD *)(*((_QWORD *)this + 152) + 8 * v91) = 0;
              v15 = *((_DWORD *)this + 27);
            }
            else
            {
              *(double *)(*((_QWORD *)this + 152) + 8 * v91) = v97;
LABEL_171:
              *(_BYTE *)(v91 + *((_QWORD *)this + 33)) = *(_BYTE *)(v91 + *((_QWORD *)this + 33)) & 0xF8 | 3;
              v15 = *((_DWORD *)this + 27);
            }
            break;
          default:
            break;
        }
        ++v91;
      }
      while ( v15 > (int)v91 );
LABEL_65:
      v24 = *((_DWORD *)this + 26);
      *((_DWORD *)this + 309) = 1;
      if ( v24 > 0 )
        goto LABEL_66;
LABEL_71:
      if ( v15 > 0 )
      {
        v44 = 0;
        do
        {
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v44) & 7) != 1 )
          {
            a3.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)this + 125) + 8 * v44);
            if ( *(double *)a3.m128i_i64 == *(double *)(*((_QWORD *)this + 128) + 8 * v44) )
            {
              *(_QWORD *)(*((_QWORD *)this + 152) + 8 * v44) = a3.m128i_i64[0];
              *(_BYTE *)(v44 + *((_QWORD *)this + 33)) = *(_BYTE *)(v44 + *((_QWORD *)this + 33)) & 0xF8 | 5;
              v15 = *((_DWORD *)this + 27);
            }
          }
          ++v44;
        }
        while ( v15 > (int)v44 );
      }
LABEL_77:
      if ( (unsigned int)ClpFactorization::factorize(*((ClpFactorization **)this + 158), this, v3, j) )
        goto LABEL_181;
      if ( v3 )
        goto LABEL_6;
      v45 = *((_DWORD *)this + 26);
      if ( v45 > 0 )
      {
        v46 = *((int *)this + 27);
        v47 = *((_QWORD *)this + 33);
        v48 = (_BYTE *)(v47 + v46);
        v49 = -((_DWORD)v47 + (_DWORD)v46) & 0xF;
        v50 = v49 + 15;
        if ( (unsigned int)(v49 + 15) < 0x11 )
          v50 = 17;
        if ( v50 > v45 - 1 )
        {
          LODWORD(v52) = 0;
        }
        else
        {
          if ( (_DWORD)v49 )
          {
            v3 = (*v48 & 7) == 1;
            if ( (_DWORD)v49 == 1 )
            {
              v51 = 1;
            }
            else
            {
              v3 += (*(_BYTE *)(v47 + (int)v46 + 1) & 7) == 1;
              if ( (_DWORD)v49 == 2 )
              {
                v51 = 2;
              }
              else
              {
                v3 += (*(_BYTE *)(v47 + (int)v46 + 2) & 7) == 1;
                if ( (_DWORD)v49 == 3 )
                {
                  v51 = 3;
                }
                else
                {
                  v3 += (*(_BYTE *)(v47 + (int)v46 + 3) & 7) == 1;
                  if ( (_DWORD)v49 == 4 )
                  {
                    v51 = 4;
                  }
                  else
                  {
                    v3 += (*(_BYTE *)(v47 + (int)v46 + 4) & 7) == 1;
                    if ( (_DWORD)v49 == 5 )
                    {
                      v51 = 5;
                    }
                    else
                    {
                      v3 += (*(_BYTE *)(v47 + (int)v46 + 5) & 7) == 1;
                      if ( (_DWORD)v49 == 6 )
                      {
                        v51 = 6;
                      }
                      else
                      {
                        v3 += (*(_BYTE *)(v47 + (int)v46 + 6) & 7) == 1;
                        if ( (_DWORD)v49 == 7 )
                        {
                          v51 = 7;
                        }
                        else
                        {
                          v3 += (*(_BYTE *)(v47 + (int)v46 + 7) & 7) == 1;
                          if ( (_DWORD)v49 == 8 )
                          {
                            v51 = 8;
                          }
                          else
                          {
                            v3 += (*(_BYTE *)(v47 + (int)v46 + 8) & 7) == 1;
                            if ( (_DWORD)v49 == 9 )
                            {
                              v51 = 9;
                            }
                            else
                            {
                              v3 += (*(_BYTE *)(v47 + (int)v46 + 9) & 7) == 1;
                              if ( (_DWORD)v49 == 10 )
                              {
                                v51 = 10;
                              }
                              else
                              {
                                v3 += (*(_BYTE *)(v47 + (int)v46 + 10) & 7) == 1;
                                if ( (_DWORD)v49 == 11 )
                                {
                                  v51 = 11;
                                }
                                else
                                {
                                  v3 += (*(_BYTE *)(v47 + (int)v46 + 11) & 7) == 1;
                                  if ( (_DWORD)v49 == 12 )
                                  {
                                    v51 = 12;
                                  }
                                  else
                                  {
                                    v3 += (*(_BYTE *)(v47 + (int)v46 + 12) & 7) == 1;
                                    if ( (_DWORD)v49 == 13 )
                                    {
                                      v51 = 13;
                                    }
                                    else
                                    {
                                      v3 += (*(_BYTE *)(v47 + (int)v46 + 13) & 7) == 1;
                                      if ( (_DWORD)v49 == 14 )
                                      {
                                        v51 = 14;
                                      }
                                      else
                                      {
                                        v3 += (*(_BYTE *)(v47 + *((_DWORD *)this + 27) + 14) & 7) == 1;
                                        v51 = 15;
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
            v51 = 0;
          }
          v99 = 0;
          v100 = v45 - v49;
          si128 = _mm_load_si128((const __m128i *)&xmmword_290800);
          v102 = v46 + v49 + v47;
          v103 = (unsigned int)(v45 - v49) >> 4;
          v104 = 0;
          v105 = _mm_load_si128((const __m128i *)&xmmword_28D010);
          do
          {
            ++v104;
            v102 += 16;
            v106 = _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_and_si128(_mm_load_si128((const __m128i *)(v102 - 16)), si128), v105),
                     v105);
            v107 = _mm_cmpgt_epi8((__m128i)0LL, v106);
            v108 = _mm_unpacklo_epi8(v106, v107);
            v109 = _mm_unpackhi_epi8(v106, v107);
            v110 = _mm_cmpgt_epi16((__m128i)0LL, v108);
            v111 = _mm_add_epi32(_mm_add_epi32(v99, _mm_unpacklo_epi16(v108, v110)), _mm_unpackhi_epi16(v108, v110));
            v112 = _mm_cmpgt_epi16((__m128i)0LL, v109);
            v99 = _mm_add_epi32(_mm_add_epi32(v111, _mm_unpacklo_epi16(v109, v112)), _mm_unpackhi_epi16(v109, v112));
          }
          while ( v103 > v104 );
          v113 = _mm_add_epi32(_mm_srli_si128(v99, 8), v99);
          v3 += _mm_cvtsi128_si32(_mm_add_epi32(v113, _mm_srli_si128(v113, 4)));
          LODWORD(v52) = (v100 & 0xFFFFFFF0) + v51;
          if ( (v100 & 0xFFFFFFF0) == v100 )
            goto LABEL_102;
        }
        v52 = (int)v52;
        do
        {
          v53 = (v48[v52++] & 7) == 1;
          v3 += v53;
        }
        while ( v45 > (int)v52 );
      }
LABEL_102:
      v8 = v45 + 1;
      if ( v45 != v3 )
      {
        v8 = v3 - v5;
        if ( v3 - v5 < 0 )
          v8 = 0;
      }
      goto LABEL_7;
    }
    v127 = j;
    ClpSimplex::cleanStatus(this);
    v54 = *((_QWORD *)this + 33);
    j = v127;
    if ( !v54 )
    {
      ClpSimplex::createStatus(this);
      v24 = *((_DWORD *)this + 26);
      v119 = 0;
      for ( j = v127; v24 > v119; v24 = *((_DWORD *)this + 26) )
      {
        v120 = v119 + *((_DWORD *)this + 27);
        ++v119;
        *(_BYTE *)(*((_QWORD *)this + 33) + v120) = *(_BYTE *)(*((_QWORD *)this + 33) + v120) & 0xF8 | 1;
      }
      v15 = *((_DWORD *)this + 27);
      if ( v15 <= 0 )
        goto LABEL_187;
      v121 = 0;
      do
      {
        *(_BYTE *)(v121 + *((_QWORD *)this + 33)) = *(_BYTE *)(v121 + *((_QWORD *)this + 33)) & 0xF8 | 4;
        v122 = *((double *)this + 110);
        v123 = (unsigned __int64 *)(*((_QWORD *)this + 152) + 8 * v121);
        v124 = *(double *)(*((_QWORD *)this + 125) + 8 * v121);
        a3.m128i_i64[0] = *v123;
        if ( v122 >= fabs(*(double *)v123 - v124) )
        {
          *(double *)v123 = v124;
          *(_BYTE *)(v121 + *((_QWORD *)this + 33)) = *(_BYTE *)(v121 + *((_QWORD *)this + 33)) & 0xF8 | 3;
        }
        else
        {
          v125 = *(double *)(*((_QWORD *)this + 128) + 8 * v121);
          a3.m128i_i64[0] = fabs(*(double *)a3.m128i_i64 - v125);
          if ( v122 >= *(double *)a3.m128i_i64 )
          {
            *(double *)v123 = v125;
            *(_BYTE *)(v121 + *((_QWORD *)this + 33)) = *(_BYTE *)(v121 + *((_QWORD *)this + 33)) & 0xF8 | 2;
          }
        }
        v15 = *((_DWORD *)this + 27);
        ++v121;
      }
      while ( v15 > (int)v121 );
      goto LABEL_65;
    }
    v24 = *((_DWORD *)this + 26);
    v15 = *((_DWORD *)this + 27);
    if ( v24 <= 0 )
    {
      *((_DWORD *)this + 309) = 1;
      v5 = 0;
      goto LABEL_71;
    }
    v55 = (_BYTE *)(v54 + v15);
    v56 = -((_DWORD)v54 + v15) & 0xF;
    v57 = v56 + 15;
    if ( (unsigned int)(v56 + 15) < 0x11 )
      v57 = 17;
    if ( v57 > v24 - 1 )
    {
      v5 = 0;
      LODWORD(v75) = 0;
    }
    else
    {
      if ( (_DWORD)v56 )
      {
        v58 = (*v55 & 7) == 1;
        if ( (_DWORD)v56 == 1 )
        {
          v59 = 1;
        }
        else
        {
          v58 += (*(_BYTE *)(v54 + v15 + 1) & 7) == 1;
          if ( (_DWORD)v56 == 2 )
          {
            v59 = 2;
          }
          else
          {
            v58 += (*(_BYTE *)(v54 + v15 + 2) & 7) == 1;
            if ( (_DWORD)v56 == 3 )
            {
              v59 = 3;
            }
            else
            {
              v58 += (*(_BYTE *)(v54 + v15 + 3) & 7) == 1;
              if ( (_DWORD)v56 == 4 )
              {
                v59 = 4;
              }
              else
              {
                v58 += (*(_BYTE *)(v54 + v15 + 4) & 7) == 1;
                if ( (_DWORD)v56 == 5 )
                {
                  v59 = 5;
                }
                else
                {
                  v58 += (*(_BYTE *)(v54 + v15 + 5) & 7) == 1;
                  if ( (_DWORD)v56 == 6 )
                  {
                    v59 = 6;
                  }
                  else
                  {
                    v58 += (*(_BYTE *)(v54 + v15 + 6) & 7) == 1;
                    if ( (_DWORD)v56 == 7 )
                    {
                      v59 = 7;
                    }
                    else
                    {
                      v58 += (*(_BYTE *)(v54 + v15 + 7) & 7) == 1;
                      if ( (_DWORD)v56 == 8 )
                      {
                        v59 = 8;
                      }
                      else
                      {
                        v58 += (*(_BYTE *)(v54 + v15 + 8) & 7) == 1;
                        if ( (_DWORD)v56 == 9 )
                        {
                          v59 = 9;
                        }
                        else
                        {
                          v58 += (*(_BYTE *)(v54 + v15 + 9) & 7) == 1;
                          if ( (_DWORD)v56 == 10 )
                          {
                            v59 = 10;
                          }
                          else
                          {
                            v58 += (*(_BYTE *)(v54 + v15 + 10) & 7) == 1;
                            if ( (_DWORD)v56 == 11 )
                            {
                              v59 = 11;
                            }
                            else
                            {
                              v58 += (*(_BYTE *)(v54 + v15 + 11) & 7) == 1;
                              if ( (_DWORD)v56 == 12 )
                              {
                                v59 = 12;
                              }
                              else
                              {
                                v58 += (*(_BYTE *)(v54 + v15 + 12) & 7) == 1;
                                if ( (_DWORD)v56 == 13 )
                                {
                                  v59 = 13;
                                }
                                else
                                {
                                  v58 += (*(_BYTE *)(v54 + v15 + 13) & 7) == 1;
                                  if ( (_DWORD)v56 == 14 )
                                  {
                                    v59 = 14;
                                  }
                                  else
                                  {
                                    v58 += (*(_BYTE *)(v54 + v15 + 14) & 7) == 1;
                                    v59 = 15;
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
        v58 = 0;
        v59 = 0;
      }
      v60 = 0;
      v61 = v24 - v56;
      v62 = _mm_load_si128((const __m128i *)&xmmword_290800);
      v63 = v15 + v56 + v54;
      v64 = (unsigned int)(v24 - v56) >> 4;
      v65 = 0;
      v66 = _mm_load_si128((const __m128i *)&xmmword_28D010);
      do
      {
        ++v65;
        v63 += 16;
        v67 = _mm_and_si128(_mm_cmpeq_epi8(_mm_and_si128(_mm_load_si128((const __m128i *)(v63 - 16)), v62), v66), v66);
        v68 = _mm_cmpgt_epi8((__m128i)0LL, v67);
        v69 = _mm_unpacklo_epi8(v67, v68);
        v70 = _mm_unpackhi_epi8(v67, v68);
        v71 = _mm_cmpgt_epi16((__m128i)0LL, v69);
        v72 = _mm_add_epi32(_mm_add_epi32(v60, _mm_unpacklo_epi16(v69, v71)), _mm_unpackhi_epi16(v69, v71));
        v73 = _mm_cmpgt_epi16((__m128i)0LL, v70);
        v60 = _mm_add_epi32(_mm_add_epi32(v72, _mm_unpacklo_epi16(v70, v73)), _mm_unpackhi_epi16(v70, v73));
      }
      while ( v64 > v65 );
      v74 = _mm_add_epi32(_mm_srli_si128(v60, 8), v60);
      LODWORD(v75) = (v61 & 0xFFFFFFF0) + v59;
      a3 = _mm_add_epi32(v74, _mm_srli_si128(v74, 4));
      v5 = v58 + _mm_cvtsi128_si32(a3);
      if ( (v61 & 0xFFFFFFF0) == v61 )
        goto LABEL_137;
    }
    v75 = (int)v75;
    do
    {
      v76 = (v55[v75++] & 7) == 1;
      v5 += v76;
    }
    while ( v24 > (int)v75 );
LABEL_137:
    *((_DWORD *)this + 309) = 1;
LABEL_66:
    v41 = 0;
    for ( k = 0; k < v24; ++k )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 33) + k + v15) & 7) != 1 )
      {
        a3.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)this + 124) + v41);
        if ( *(double *)a3.m128i_i64 == *(double *)(*((_QWORD *)this + 127) + v41) )
        {
          *(_QWORD *)(*((_QWORD *)this + 151) + v41) = a3.m128i_i64[0];
          v43 = (_BYTE *)(*((_QWORD *)this + 33) + k + *((_DWORD *)this + 27));
          *v43 = *v43 & 0xF8 | 5;
          v24 = *((_DWORD *)this + 26);
          v15 = *((_DWORD *)this + 27);
        }
      }
      v41 += 8;
    }
    goto LABEL_71;
  }
  j = 0;
  v7 = 0;
  if ( a2 <= 0 )
    goto LABEL_13;
LABEL_5:
  if ( (unsigned int)ClpFactorization::factorize(*((ClpFactorization **)this + 158), this, v3, j) )
  {
LABEL_181:
    v114 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   9,
                                   (ClpSimplex *)((char *)this + 416));
    v8 = -1;
    v115 = CoinMessageHandler::operator<<(v114);
    CoinMessageHandler::operator<<(v115, 0, *(double *)a3.m128i_i64);
    return v8;
  }
LABEL_6:
  v8 = 0;
LABEL_7:
  v9 = *(CoinFactorization **)(*((_QWORD *)this + 158) + 8LL);
  if ( v9 )
    CoinFactorization::sparseThreshold(v9, 0);
  if ( (*((_BYTE *)this + 729) & 4) == 0 )
    ClpFactorization::goSparse(*((ClpFactorization **)this + 158));
  return v8;
}

