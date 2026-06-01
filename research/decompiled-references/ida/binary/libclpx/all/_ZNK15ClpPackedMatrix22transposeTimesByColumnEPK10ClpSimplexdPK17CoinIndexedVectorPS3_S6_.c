CoinIndexedVector *__fastcall ClpPackedMatrix::transposeTimesByColumn(
        ClpPackedMatrix *this,
        const ClpSimplex *a2,
        double a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        double **a6)
{
  CoinIndexedVector *v8; // rbx
  double v9; // xmm2_8
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // r14d
  __int64 v13; // r13
  int *v14; // rbp
  __int64 v15; // rax
  double v16; // xmm0_8
  __int64 v17; // r8
  ClpPackedMatrix3 *v18; // rax
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rdx
  CoinIndexedVector *result; // rax
  _QWORD *v24; // rax
  int *v25; // r11
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rax
  double *v29; // r13
  double v30; // xmm4_8
  __int64 v31; // r12
  double v32; // xmm3_8
  int *v33; // r10
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  double v37; // xmm0_8
  int v38; // r14d
  __int64 v39; // r12
  int v40; // r10d
  double *v41; // r15
  double v42; // xmm3_8
  int v43; // r13d
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // r8
  int *v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  double v50; // xmm1_8
  int v51; // edx
  double v52; // xmm3_8
  int v53; // eax
  __int64 v54; // rax
  double v55; // xmm1_8
  __int64 v56; // r8
  double v57; // xmm3_8
  __int64 v58; // r12
  double v59; // xmm4_8
  int *v60; // r10
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  double v64; // xmm1_8
  int v65; // r14d
  __int64 v66; // r12
  double *v67; // r15
  double v68; // xmm4_8
  int v69; // r13d
  __int64 v70; // rdx
  __int64 v71; // rbx
  __int64 v72; // r8
  int *v73; // r9
  __int64 v74; // rax
  __int64 v75; // rdx
  double v76; // xmm1_8
  int v77; // edx
  double v78; // xmm4_8
  __int64 v79; // rax
  double v80; // xmm0_8
  __int64 v81; // rsi
  const unsigned __int8 *v82; // r8
  __int64 v83; // r15
  double v84; // xmm1_8
  int *v85; // rax
  double *v86; // r11
  double v87; // xmm7_8
  __int64 v88; // rax
  double v89; // xmm0_8
  const unsigned __int8 *v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  int v93; // esi
  unsigned __int8 v94; // al
  double v95; // xmm4_8
  double v96; // xmm3_8
  double v97; // xmm5_8
  __int64 v98; // r8
  int v99; // eax
  int v100; // edx
  __int64 v101; // r10
  double v102; // xmm1_8
  int *v103; // r9
  __int64 v104; // r8
  __int64 v105; // rdx
  double v106; // xmm0_8
  double v107; // xmm0_8
  int v108; // r13d
  __int64 v109; // r9
  int v110; // r14d
  __int64 v111; // rdx
  __int64 v112; // r12
  int *v113; // r8
  __int64 v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rsi
  double v117; // xmm0_8
  double v118; // xmm0_8
  int v119; // edx
  double v120; // xmm3_8
  int v121; // edx
  __int64 v122; // r9
  double v123; // xmm3_8
  _QWORD *v124; // rdx
  __int64 v125; // rax
  double v126; // xmm1_8
  __int64 v127; // rsi
  __int64 v128; // r10
  int *v129; // r9
  __int64 v130; // r8
  __int64 v131; // rdx
  double v132; // xmm1_8
  int v133; // r13d
  double v134; // xmm3_8
  int v135; // r14d
  __int64 v136; // rdx
  __int64 v137; // r12
  int *v138; // r8
  __int64 v139; // rsi
  __int64 v140; // rax
  __int64 v141; // rsi
  double v142; // xmm1_8
  double *v143; // [rsp+0h] [rbp-88h]
  int *v144; // [rsp+8h] [rbp-80h]
  int *v145; // [rsp+10h] [rbp-78h]
  int *v146; // [rsp+10h] [rbp-78h]
  CoinIndexedVector *v148; // [rsp+20h] [rbp-68h]
  CoinIndexedVector *v149; // [rsp+20h] [rbp-68h]
  __int64 v150; // [rsp+20h] [rbp-68h]
  char v151; // [rsp+2Bh] [rbp-5Dh]
  int v152; // [rsp+2Ch] [rbp-5Ch]
  int v153; // [rsp+34h] [rbp-54h] BYREF
  double v154; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v155[4]; // [rsp+40h] [rbp-48h]

  v8 = (CoinIndexedVector *)a6;
  v9 = *((double *)a2 + 88);
  v10 = *((_QWORD *)a4 + 1);
  v11 = *((_QWORD *)a2 + 28);
  v144 = (int *)*a6;
  v143 = a6[1];
  v151 = *((_BYTE *)a4 + 28);
  if ( !v151 )
  {
    v24 = *((_QWORD **)this + 11);
    v25 = (int *)v24[6];
    v26 = v24[5];
    v27 = *v25;
    v145 = (int *)v24[4];
    v28 = v25[1];
    if ( v11 )
    {
      v29 = *((double **)a2 + 29);
      v30 = *v29;
      if ( a3 == -1.0 )
      {
        if ( (int)v28 <= (int)v27 )
        {
          v32 = 0.0;
        }
        else
        {
          v31 = v26 + 4 * v27;
          v32 = 0.0;
          v33 = &v145[2 * v27];
          v34 = (unsigned int)(v28 - 1 - v27) + 1LL;
          v35 = 0;
          do
          {
            v36 = *(int *)(v31 + 4 * v35);
            v37 = *(double *)(v10 + 8 * v36) * *(double *)&v33[2 * v35++];
            v32 = v32 + v37 * *(double *)(v11 + 8 * v36);
          }
          while ( v34 != v35 );
        }
        v38 = *((_DWORD *)this + 24);
        if ( v38 <= 1 )
        {
          v51 = 0;
          v40 = 0;
        }
        else
        {
          v39 = 0;
          v40 = 0;
          v41 = v29;
          v148 = v8;
          do
          {
            v42 = v32 * v30;
            v43 = v25[v39 + 2];
            v30 = v41[v39 + 1];
            if ( fabs(v42) > v9 )
            {
              v44 = v40++;
              v143[v39] = -v42;
              v144[v44] = v39;
              v38 = *((_DWORD *)this + 24);
            }
            if ( v43 <= (int)v28 )
            {
              v32 = 0.0;
            }
            else
            {
              v32 = 0.0;
              v45 = v26 + 4 * v28;
              v46 = (unsigned int)(v43 - v28 - 1) + 1LL;
              v47 = &v145[2 * v28];
              v48 = 0;
              do
              {
                v49 = *(int *)(v45 + 4 * v48);
                v50 = *(double *)(v10 + 8 * v49) * *(double *)&v47[2 * v48++];
                v32 = v32 + v50 * *(double *)(v11 + 8 * v49);
              }
              while ( v46 != v48 );
            }
            v51 = ++v39;
            v28 = v43;
          }
          while ( v38 - 1 > (int)v39 );
          v8 = v148;
        }
        v52 = v32 * v30;
        if ( fabs(v52) > v9 )
        {
          v143[v51] = -v52;
          v53 = v40 + 1;
          v144[v40] = v51;
LABEL_54:
          *((_DWORD *)v8 + 4) = v53;
          *((_DWORD *)a5 + 4) = 0;
          *((_BYTE *)a5 + 28) = 0;
          return a5;
        }
      }
      else
      {
        v57 = v30 * a3;
        if ( (int)v28 <= (int)v27 )
        {
          v59 = 0.0;
        }
        else
        {
          v58 = v26 + 4 * v27;
          v59 = 0.0;
          v60 = &v145[2 * v27];
          v61 = (unsigned int)(v28 - 1 - v27) + 1LL;
          v62 = 0;
          do
          {
            v63 = *(int *)(v58 + 4 * v62);
            v64 = *(double *)(v10 + 8 * v63) * *(double *)&v60[2 * v62++];
            v59 = v59 + v64 * *(double *)(v11 + 8 * v63);
          }
          while ( v61 != v62 );
        }
        v65 = *((_DWORD *)this + 24);
        if ( v65 <= 1 )
        {
          v77 = 0;
          v40 = 0;
        }
        else
        {
          v66 = 0;
          v40 = 0;
          v67 = v29;
          v149 = v8;
          do
          {
            v68 = v59 * v57;
            v69 = v25[v66 + 2];
            v57 = v67[v66 + 1] * a3;
            if ( fabs(v68) > v9 )
            {
              v70 = v40++;
              v143[v66] = v68;
              v144[v70] = v66;
              v65 = *((_DWORD *)this + 24);
            }
            if ( v69 <= (int)v28 )
            {
              v59 = 0.0;
            }
            else
            {
              v59 = 0.0;
              v71 = v26 + 4 * v28;
              v72 = (unsigned int)(v69 - v28 - 1) + 1LL;
              v73 = &v145[2 * v28];
              v74 = 0;
              do
              {
                v75 = *(int *)(v71 + 4 * v74);
                v76 = *(double *)(v10 + 8 * v75) * *(double *)&v73[2 * v74++];
                v59 = v59 + v76 * *(double *)(v11 + 8 * v75);
              }
              while ( v72 != v74 );
            }
            v77 = ++v66;
            v28 = v69;
          }
          while ( v65 - 1 > (int)v66 );
          v8 = v149;
        }
        v78 = v59 * v57;
        if ( fabs(v78) > v9 )
        {
          v143[v77] = v78;
          v53 = v40 + 1;
          v144[v40] = v77;
          goto LABEL_54;
        }
      }
LABEL_95:
      *((_DWORD *)v8 + 4) = v40;
      if ( v40 )
      {
        *((_DWORD *)a5 + 4) = 0;
        *((_BYTE *)a5 + 28) = 0;
        return a5;
      }
LABEL_17:
      result = a5;
      *((_BYTE *)v8 + 28) = 0;
      *((_DWORD *)a5 + 4) = 0;
      *((_BYTE *)a5 + 28) = 0;
      if ( !v151 )
        return result;
      goto LABEL_18;
    }
    if ( a3 == -1.0 )
    {
      if ( (int)v28 <= (int)v27 )
      {
        v107 = 0.0;
        v102 = 0.0;
      }
      else
      {
        v101 = v26 + 4 * v27;
        v102 = 0.0;
        v103 = &v145[2 * v27];
        v104 = (unsigned int)(v28 - 1 - v27) + 1LL;
        v105 = 0;
        do
        {
          v106 = *(double *)(v10 + 8LL * *(int *)(v101 + 4 * v105)) * *(double *)&v103[2 * v105];
          ++v105;
          v102 = v102 + v106;
        }
        while ( v104 != v105 );
        v107 = fabs(v102);
      }
      v108 = *((_DWORD *)this + 24);
      if ( v108 > 1 )
      {
        v109 = 0;
        v40 = 0;
        do
        {
          v110 = v25[v109 + 2];
          if ( fabs(v102) > v9 )
          {
            v111 = v40++;
            v143[v109] = -v102;
            v144[v111] = v109;
            v108 = *((_DWORD *)this + 24);
          }
          if ( v110 <= (int)v28 )
          {
            v118 = 0.0;
            v102 = 0.0;
          }
          else
          {
            v102 = 0.0;
            v112 = v26 + 4 * v28;
            v113 = &v145[2 * v28];
            v114 = (unsigned int)(v110 - v28 - 1);
            v115 = 0;
            v116 = v114 + 1;
            do
            {
              v117 = *(double *)(v10 + 8LL * *(int *)(v112 + 4 * v115)) * *(double *)&v113[2 * v115];
              ++v115;
              v102 = v102 + v117;
            }
            while ( v116 != v115 );
            v118 = fabs(v102);
          }
          v119 = ++v109;
          v28 = v110;
        }
        while ( v108 - 1 > (int)v109 );
        if ( v118 <= v9 )
          goto LABEL_95;
        v143 += (int)v109;
        v144 += v40;
        v53 = v40 + 1;
LABEL_91:
        *v143 = -v102;
        *v144 = v119;
        goto LABEL_54;
      }
      if ( v107 > v9 )
      {
        v53 = 1;
        v119 = 0;
        goto LABEL_91;
      }
LABEL_141:
      *((_DWORD *)v8 + 4) = 0;
      goto LABEL_17;
    }
    if ( (int)v28 <= (int)v27 )
    {
      v120 = 0.0;
    }
    else
    {
      v128 = v26 + 4 * v27;
      v120 = 0.0;
      v129 = &v145[2 * v27];
      v130 = (unsigned int)(v28 - 1 - v27) + 1LL;
      v131 = 0;
      do
      {
        v132 = *(double *)(v10 + 8LL * *(int *)(v128 + 4 * v131)) * *(double *)&v129[2 * v131];
        ++v131;
        v120 = v120 + v132;
      }
      while ( v130 != v131 );
    }
    v133 = *((_DWORD *)this + 24);
    if ( v133 <= 1 )
    {
      v123 = v120 * a3;
      if ( fabs(v123) <= v9 )
        goto LABEL_141;
      v53 = 1;
      v121 = 0;
    }
    else
    {
      v122 = 0;
      v40 = 0;
      do
      {
        v134 = v120 * a3;
        v135 = v25[v122 + 2];
        if ( fabs(v134) > v9 )
        {
          v136 = v40++;
          v143[v122] = v134;
          v144[v136] = v122;
          v133 = *((_DWORD *)this + 24);
        }
        if ( v135 <= (int)v28 )
        {
          v120 = 0.0;
        }
        else
        {
          v120 = 0.0;
          v137 = v26 + 4 * v28;
          v138 = &v145[2 * v28];
          v139 = (unsigned int)(v135 - v28 - 1);
          v140 = 0;
          v141 = v139 + 1;
          do
          {
            v142 = *(double *)(v10 + 8LL * *(int *)(v137 + 4 * v140)) * *(double *)&v138[2 * v140];
            ++v140;
            v120 = v120 + v142;
          }
          while ( v141 != v140 );
        }
        v121 = ++v122;
        v28 = v135;
      }
      while ( v133 - 1 > (int)v122 );
      v123 = v120 * a3;
      if ( fabs(v123) <= v9 )
        goto LABEL_95;
      v143 += (int)v122;
      v144 += v40;
      v53 = v40 + 1;
    }
    *v143 = v123;
    *v144 = v121;
    goto LABEL_54;
  }
  v12 = *((_DWORD *)a4 + 4);
  v13 = *((_QWORD *)a5 + 1);
  v14 = *(int **)a4;
  if ( v11 )
  {
    if ( a3 == -1.0 )
    {
      if ( v12 > 0 )
      {
        v15 = 0;
        do
        {
          v16 = *(double *)(v10 + 8 * v15);
          v17 = v14[v15++];
          *(double *)(v13 + 8 * v17) = -v16 * *(double *)(v11 + 8 * v17);
        }
        while ( (unsigned int)(v12 - 1) + 1LL != v15 );
      }
    }
    else if ( v12 > 0 )
    {
      v54 = 0;
      do
      {
        v55 = *(double *)(v10 + 8 * v54);
        v56 = v14[v54++];
        *(double *)(v13 + 8 * v56) = v55 * a3 * *(double *)(v11 + 8 * v56);
      }
      while ( (unsigned int)(v12 - 1) + 1LL != v54 );
    }
    v18 = *((ClpPackedMatrix3 **)this + 14);
    if ( v18 )
    {
LABEL_8:
      if ( (*((_BYTE *)a2 + 728) & 8) != 0 && *((int *)a2 + 325) < 0 )
      {
        ClpPackedMatrix3::transposeTimes(v18, a2, (const double *)v13, v8, *((CoinIndexedVector **)a2 + 135), a4);
        *((_DWORD *)a2 + 431) = -2;
      }
      else
      {
        ClpPackedMatrix3::transposeTimes(v18, a2, (const double *)v13, v8);
      }
      v19 = *((_DWORD *)v8 + 4);
      goto LABEL_12;
    }
    v19 = ClpPackedMatrix::gutsOfTransposeTimesScaled(
            this,
            (const double *)v13,
            *((const double **)a2 + 29),
            v144,
            v143,
            *((const unsigned __int8 **)a2 + 33),
            v9);
  }
  else
  {
    if ( a3 == -1.0 )
    {
      if ( v12 > 0 )
      {
        v79 = 0;
        do
        {
          v80 = *(double *)(v10 + 8 * v79);
          v81 = v14[v79++];
          *(double *)(v13 + 8 * v81) = -v80;
        }
        while ( (unsigned int)(v12 - 1) + 1LL != v79 );
      }
    }
    else if ( v12 > 0 )
    {
      v125 = 0;
      do
      {
        v126 = *(double *)(v10 + 8 * v125);
        v127 = v14[v125++];
        *(double *)(v13 + 8 * v127) = v126 * a3;
      }
      while ( (unsigned int)(v12 - 1) + 1LL != v125 );
    }
    v18 = *((ClpPackedMatrix3 **)this + 14);
    if ( v18 )
      goto LABEL_8;
    v82 = *((const unsigned __int8 **)a2 + 33);
    if ( *((int *)a2 + 431) <= 0 )
    {
      v19 = ClpPackedMatrix::gutsOfTransposeTimesUnscaled(this, (const double *)v13, v144, v143, v82, v9);
    }
    else
    {
      v83 = *((_QWORD *)a2 + 135);
      v84 = *((double *)a2 + 109);
      v85 = *(int **)v83;
      v86 = *(double **)(v83 + 8);
      v155[0] = xmmword_28D780;
      v87 = -v84;
      v146 = v85;
      v88 = *((_QWORD *)a2 + 148);
      v89 = *((double *)a2 + 218);
      v153 = 0;
      v150 = v88;
      v154 = 1.0e31;
      v152 = *((_DWORD *)a2 + 27);
      if ( v12 > 0 )
      {
        v90 = &v82[*((int *)a2 + 27)];
        v91 = 0;
        do
        {
          v92 = v14[v91];
          v93 = v14[v91];
          v94 = v90[v92] & 3;
          if ( v94 != 1 )
          {
            v95 = *((double *)&v155[-1] + v94);
            v96 = *(double *)(v10 + 8 * v91) * v95;
            if ( v96 > 0.0 )
            {
              v97 = *(double *)(v150 + 8 * v92) * v95;
              if ( v87 > v97 - v96 * 1.0e15 )
              {
                if ( v87 > v97 - v154 * v96 && v96 >= v89 )
                  v154 = (v97 + v84) / v96;
                v98 = v153;
                v99 = v153;
                v86[v153] = v96 * v95;
                v153 = v99 + 1;
                v146[v98] = v152 + v93;
              }
            }
          }
          ++v91;
        }
        while ( (unsigned int)(v12 - 1) + 1LL != v91 );
        v82 = *((const unsigned __int8 **)a2 + 33);
        v84 = *((double *)a2 + 109);
      }
      v19 = ClpPackedMatrix::gutsOfTransposeTimesUnscaled(
              this,
              (const double *)v13,
              v144,
              v143,
              v82,
              v146,
              v89,
              v84,
              v9,
              v86,
              *((const double **)a2 + 149),
              &v154,
              &v153);
      v100 = v153;
      *((double *)a2 + 218) = v154;
      *(_DWORD *)(v83 + 16) = v100;
      if ( !v100 )
        *(_BYTE *)(v83 + 28) = 0;
      *((_DWORD *)a2 + 431) = -2;
    }
  }
  *((_DWORD *)v8 + 4) = v19;
  if ( !v19 )
    *((_BYTE *)v8 + 28) = 0;
LABEL_12:
  v20 = *((_DWORD *)a2 + 26);
  if ( 4 * v12 >= v20 )
  {
    if ( v20 )
    {
      if ( v20 / 8 > 0 )
      {
        v124 = (_QWORD *)v13;
        do
        {
          *v124 = 0;
          v124[1] = 0;
          v124 += 8;
          *(v124 - 6) = 0;
          *(v124 - 5) = 0;
          *(v124 - 4) = 0;
          *(v124 - 3) = 0;
          *(v124 - 2) = 0;
          *(v124 - 1) = 0;
        }
        while ( v124 != (_QWORD *)(v13 + (((unsigned int)(v20 / 8 - 1) + 1LL) << 6)) );
        v13 += (v20 / 8 - 1 + 1LL) << 6;
      }
      switch ( v20 % 8 )
      {
        case 1:
          goto LABEL_109;
        case 2:
          goto LABEL_108;
        case 3:
          goto LABEL_107;
        case 4:
          goto LABEL_106;
        case 5:
          goto LABEL_105;
        case 6:
          goto LABEL_104;
        case 7:
          *(_QWORD *)(v13 + 48) = 0;
LABEL_104:
          *(_QWORD *)(v13 + 40) = 0;
LABEL_105:
          *(_QWORD *)(v13 + 32) = 0;
LABEL_106:
          *(_QWORD *)(v13 + 24) = 0;
LABEL_107:
          *(_QWORD *)(v13 + 16) = 0;
LABEL_108:
          *(_QWORD *)(v13 + 8) = 0;
LABEL_109:
          *(_QWORD *)v13 = 0;
          break;
        default:
          break;
      }
    }
  }
  else if ( v12 > 0 )
  {
    v21 = (__int64)&v14[v12 - 1 + 1];
    do
    {
      v22 = *v14++;
      *(_QWORD *)(v13 + 8 * v22) = 0;
    }
    while ( v14 != (int *)v21 );
  }
  *((_DWORD *)v8 + 4) = v19;
  if ( !v19 )
    goto LABEL_17;
  result = a5;
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
LABEL_18:
  *((_BYTE *)v8 + 28) = 1;
  return result;
}

