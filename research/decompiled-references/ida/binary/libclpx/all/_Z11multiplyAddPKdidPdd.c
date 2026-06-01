unsigned __int64 __fastcall multiplyAdd(double *a1, int a2, __m128d a3, unsigned __int64 a4, __m128d a5)
{
  unsigned __int64 result; // rax
  int v6; // r9d
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rcx
  const double *v12; // r10
  double *v13; // rcx
  signed int v14; // r9d
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // r10d
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // ebx
  __int64 v21; // r8
  unsigned int v22; // r11d
  __int64 v23; // rdx
  unsigned int v24; // r11d
  double *v25; // r9
  const double *v26; // r8
  signed int v27; // r10d
  __int64 v28; // rcx
  int v29; // r10d
  int v30; // r9d
  unsigned __int64 v31; // rdx
  unsigned int v32; // r8d
  int v33; // ebx
  __int64 v34; // rcx
  unsigned int v35; // r11d
  __int64 v36; // rdx
  unsigned int v37; // r11d
  const double *v38; // r10
  double *v39; // rcx
  signed int v40; // r9d
  __int64 v41; // rcx
  int v42; // r9d
  unsigned __int64 v43; // rdx
  int v44; // r8d
  int v45; // r10d
  double *v46; // rdi
  unsigned int v47; // ecx
  unsigned int v48; // r9d
  __int64 v49; // rdx
  unsigned int v50; // r9d
  __int128 v51; // xmm0
  unsigned int v52; // edx
  double *v53; // rcx
  int v54; // edx
  int v55; // r9d
  unsigned __int64 v56; // rdx
  int v57; // ebx
  unsigned int v58; // r8d
  __int64 v59; // rcx
  __m128d v60; // xmm2
  unsigned int v61; // r11d
  __int64 v62; // rdx
  const double *v63; // r10
  unsigned int v64; // r11d
  double *v65; // rcx
  signed int v66; // r9d
  __int64 v67; // rcx
  int v68; // r9d
  int v69; // r9d
  unsigned __int64 v70; // rdx
  unsigned int v71; // ecx
  int v72; // ebx
  unsigned __int64 v73; // r8
  unsigned int v74; // r11d
  __int64 v75; // rdx
  unsigned int v76; // r11d
  const double *v77; // r10
  double *v78; // r8
  signed int v79; // r9d
  __int64 v80; // rdx
  int v81; // r9d
  int v82; // r9d
  unsigned __int64 v83; // rdx
  int v84; // ebx
  unsigned int v85; // r8d
  __int64 v86; // rcx
  unsigned int v87; // r11d
  __int64 v88; // rdx
  unsigned int v89; // r11d
  const double *v90; // r10
  double *v91; // rcx
  __m128d v92; // xmm0
  unsigned int v93; // r9d
  double v94; // xmm0_8
  double *v95; // rdx
  int v96; // r9d
  int v97; // r9d
  unsigned __int64 v98; // rdx
  int v99; // ebx
  unsigned int v100; // r8d
  __int64 v101; // rcx
  __m128d v102; // xmm2
  unsigned int v103; // r11d
  __int64 v104; // rdx
  const double *v105; // r10
  unsigned int v106; // r11d
  double *v107; // rcx
  signed int v108; // r9d
  __int64 v109; // rcx
  int v110; // r9d
  int v111; // r9d
  unsigned __int64 v112; // rdx
  int v113; // ebx
  unsigned int v114; // ecx
  unsigned __int64 v115; // r8
  __m128d v116; // xmm2
  unsigned int v117; // r11d
  __int64 v118; // rdx
  const double *v119; // r10
  unsigned int v120; // r11d
  double *v121; // r8
  signed int v122; // r9d
  __int64 v123; // rdx
  int v124; // r9d
  int v125; // r9d
  unsigned __int64 v126; // rdx
  int v127; // ebx
  unsigned int v128; // ecx
  unsigned __int64 v129; // r8
  unsigned int v130; // r11d
  __int64 v131; // rdx
  unsigned int v132; // r11d
  const double *v133; // r10
  double *v134; // r8
  __int128 v135; // xmm0
  signed int v136; // r9d
  __int64 v137; // rdx
  double v138; // xmm0_8
  int v139; // r9d
  int v140; // r9d
  unsigned __int64 v141; // rdx
  int v142; // ebx
  unsigned int v143; // r8d
  __int64 v144; // rcx
  __m128d v145; // xmm2
  unsigned int v146; // r11d
  __int64 v147; // rdx
  const double *v148; // r10
  unsigned int v149; // r11d
  double *v150; // rcx
  signed int v151; // r9d
  __int64 v152; // rcx
  int v153; // r9d
  int v154; // r10d
  unsigned __int64 v155; // rdx
  int v156; // ebx
  unsigned int v157; // ecx
  __int64 v158; // r8
  __m128d v159; // xmm2
  unsigned int v160; // r11d
  __int64 v161; // rdx
  double *v162; // r9
  unsigned int v163; // r11d
  const double *v164; // r8
  signed int v165; // r10d
  __int64 v166; // rcx
  int v167; // r10d
  unsigned __int64 v168; // rdx
  unsigned __int64 v169; // rdx
  unsigned __int64 v170; // rdx
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rdx
  unsigned __int64 v173; // rdx
  unsigned __int64 v174; // rdx
  unsigned __int64 v175; // rdx
  int v176; // r8d
  double *v177; // rdi
  unsigned int v178; // r10d
  unsigned int v179; // ecx
  __int64 v180; // rdx
  __m128d v181; // xmm2
  signed int v182; // edx
  __int64 v183; // rcx
  int v184; // edx
  int v185; // r9d
  unsigned __int64 v186; // rdx
  int v187; // ebx
  __m128d v188; // xmm5
  __int64 v189; // rcx
  __m128d v190; // xmm4
  unsigned int v191; // r11d
  __int64 v192; // rdx
  unsigned int v193; // r8d
  const double *v194; // r10
  unsigned int v195; // r11d
  double *v196; // rcx
  signed int v197; // r9d
  __int64 v198; // rcx
  int v199; // r9d
  unsigned __int64 v200; // rdx
  unsigned __int64 v201; // rdx
  unsigned __int64 v202; // rdx
  unsigned __int64 v203; // rdx
  unsigned __int64 v204; // rdx

  result = a4;
  if ( a3.m128d_f64[0] == 1.0 )
  {
    if ( a5.m128d_f64[0] == 1.0 )
    {
      if ( a2 > 0 )
      {
        if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 9 )
        {
          v6 = 0;
          v7 = (a4 >> 3) & 1;
          if ( ((a4 >> 3) & 1) != 0 )
          {
            v6 = 1;
            *(double *)a4 = *(double *)a4 + *a1;
          }
          v8 = 0;
          v9 = 0;
          v10 = a2 - v7;
          v11 = (unsigned int)v7;
          v12 = &a1[v11];
          v13 = (double *)(result + v11 * 8);
          do
          {
            ++v9;
            *(__m128d *)&v13[v8] = _mm_add_pd(*(__m128d *)&v12[v8], *(__m128d *)&v13[v8]);
            v8 += 2;
          }
          while ( v10 >> 1 > v9 );
          v14 = (v10 & 0xFFFFFFFE) + v6;
          if ( (v10 & 0xFFFFFFFE) != v10 )
          {
            v15 = v14;
            v16 = v14 + 1;
            *(double *)(result + 8 * v15) = *(double *)(result + 8 * v15) + a1[v15];
            if ( a2 > v16 )
            {
              result += 8LL * v16;
              *(double *)result = *(double *)result + a1[v16];
            }
          }
        }
        else
        {
          v168 = 0;
          do
          {
            *(double *)(result + v168) = *(double *)(result + v168) + a1[v168 / 8];
            v168 += 8LL;
          }
          while ( v168 != 8LL * (unsigned int)(a2 - 1) + 8 );
        }
      }
    }
    else if ( a5.m128d_f64[0] == -1.0 )
    {
      if ( a2 > 0 )
      {
        if ( (a4 >= (unsigned __int64)(a1 + 2) || (unsigned __int64)a1 >= a4 + 16) && (unsigned int)a2 > 9 )
        {
          v30 = 0;
          v31 = (a4 >> 3) & 1;
          if ( ((result >> 3) & 1) != 0 )
          {
            v30 = 1;
            *(double *)result = *a1 - *(double *)result;
          }
          v32 = 0;
          v33 = a2 - v31;
          v34 = (unsigned int)v31;
          v35 = a2 - v31;
          v36 = 0;
          v37 = v35 >> 1;
          v38 = &a1[v34];
          v39 = (double *)(result + v34 * 8);
          do
          {
            ++v32;
            *(__m128d *)&v39[v36] = _mm_sub_pd(*(__m128d *)&v38[v36], *(__m128d *)&v39[v36]);
            v36 += 2;
          }
          while ( v32 < v37 );
          v40 = (v33 & 0xFFFFFFFE) + v30;
          if ( (v33 & 0xFFFFFFFE) != v33 )
          {
            v41 = v40;
            v42 = v40 + 1;
            *(double *)(result + 8 * v41) = a1[v41] - *(double *)(result + 8 * v41);
            if ( a2 > v42 )
            {
              result += 8LL * v42;
              *(double *)result = a1[v42] - *(double *)result;
            }
          }
        }
        else
        {
          v174 = 0;
          do
          {
            *(double *)(result + v174) = a1[v174 / 8] - *(double *)(result + v174);
            v174 += 8LL;
          }
          while ( v174 != 8LL * (unsigned int)(a2 - 1) + 8 );
        }
      }
    }
    else if ( a5.m128d_f64[0] == 0.0 )
    {
      if ( a2 > 0 )
      {
        if ( (a4 >= (unsigned __int64)(a1 + 2) || (unsigned __int64)a1 >= a4 + 16) && (unsigned int)a2 > 0x18 )
        {
          v69 = 0;
          v70 = ((unsigned __int64)a1 >> 3) & 1;
          if ( (((unsigned __int64)a1 >> 3) & 1) != 0 )
          {
            v69 = 1;
            *(double *)result = *a1;
          }
          v71 = 0;
          v72 = a2 - v70;
          v73 = ((unsigned __int64)a1 >> 3) & 1;
          v74 = a2 - v70;
          v75 = 0;
          v76 = v74 >> 1;
          v77 = &a1[v73];
          v78 = (double *)(result + v73 * 8);
          do
          {
            ++v71;
            *(_OWORD *)&v78[v75] = *(_OWORD *)&v77[v75];
            v75 += 2;
          }
          while ( v76 > v71 );
          v79 = (v72 & 0xFFFFFFFE) + v69;
          if ( v72 != (v72 & 0xFFFFFFFE) )
          {
            v80 = v79;
            v81 = v79 + 1;
            *(double *)(result + 8 * v80) = a1[v80];
            if ( a2 > v81 )
              *(double *)(result + 8LL * v81) = a1[v81];
          }
        }
        else
        {
          v169 = 0;
          do
          {
            *(double *)(result + v169) = a1[v169 / 8];
            v169 += 8LL;
          }
          while ( 8LL * (unsigned int)(a2 - 1) + 8 != v169 );
        }
      }
    }
    else if ( a2 > 0 )
    {
      if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 8 )
      {
        v97 = 0;
        v98 = (a4 >> 3) & 1;
        if ( ((result >> 3) & 1) != 0 )
        {
          v97 = 1;
          *(double *)result = *(double *)result * a5.m128d_f64[0] + *a1;
        }
        v99 = a2 - v98;
        v100 = 0;
        v101 = (unsigned int)v98;
        v102 = _mm_unpacklo_pd(a5, a5);
        v103 = a2 - v98;
        v104 = 0;
        v105 = &a1[v101];
        v106 = v103 >> 1;
        v107 = (double *)(result + v101 * 8);
        do
        {
          ++v100;
          *(__m128d *)&v107[v104] = _mm_add_pd(_mm_mul_pd(*(__m128d *)&v107[v104], v102), *(__m128d *)&v105[v104]);
          v104 += 2;
        }
        while ( v100 < v106 );
        v108 = (v99 & 0xFFFFFFFE) + v97;
        if ( v99 != (v99 & 0xFFFFFFFE) )
        {
          v109 = v108;
          v110 = v108 + 1;
          *(double *)(result + 8 * v109) = *(double *)(result + 8 * v109) * a5.m128d_f64[0] + a1[v109];
          if ( v110 < a2 )
          {
            result += 8LL * v110;
            *(double *)result = a5.m128d_f64[0] * *(double *)result + a1[v110];
          }
        }
      }
      else
      {
        v170 = 0;
        do
        {
          *(double *)(result + v170) = *(double *)(result + v170) * a5.m128d_f64[0] + a1[v170 / 8];
          v170 += 8LL;
        }
        while ( v170 != 8LL * (unsigned int)(a2 - 1) + 8 );
      }
    }
    return result;
  }
  if ( a3.m128d_f64[0] == -1.0 )
  {
    if ( a5.m128d_f64[0] == 1.0 )
    {
      if ( a2 > 0 )
      {
        if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 9 )
        {
          v17 = 0;
          v18 = (a4 >> 3) & 1;
          if ( ((result >> 3) & 1) != 0 )
          {
            v17 = 1;
            *(double *)result = *(double *)result - *a1;
          }
          v19 = 0;
          v20 = a2 - v18;
          v21 = (unsigned int)v18;
          v22 = a2 - v18;
          v23 = 0;
          v24 = v22 >> 1;
          v25 = (double *)(result + v21 * 8);
          v26 = &a1[v21];
          do
          {
            ++v19;
            *(__m128d *)&v25[v23] = _mm_sub_pd(*(__m128d *)&v25[v23], *(__m128d *)&v26[v23]);
            v23 += 2;
          }
          while ( v19 < v24 );
          v27 = (v20 & 0xFFFFFFFE) + v17;
          if ( v20 != (v20 & 0xFFFFFFFE) )
          {
            v28 = v27;
            v29 = v27 + 1;
            *(double *)(result + 8 * v28) = *(double *)(result + 8 * v28) - a1[v28];
            if ( v29 < a2 )
            {
              result += 8LL * v29;
              *(double *)result = *(double *)result - a1[v29];
            }
          }
        }
        else
        {
          v173 = 0;
          do
          {
            *(double *)(result + v173) = *(double *)(result + v173) - a1[v173 / 8];
            v173 += 8LL;
          }
          while ( 8LL * (unsigned int)(a2 - 1) + 8 != v173 );
        }
      }
    }
    else if ( a5.m128d_f64[0] == -1.0 )
    {
      if ( a2 > 0 )
      {
        if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 7 )
        {
          v82 = 0;
          v83 = (a4 >> 3) & 1;
          if ( ((result >> 3) & 1) != 0 )
          {
            v82 = 1;
            *(double *)result = -*a1 - *(double *)result;
          }
          v84 = a2 - v83;
          v85 = 0;
          v86 = (unsigned int)v83;
          v87 = a2 - v83;
          v88 = 0;
          v89 = v87 >> 1;
          v90 = &a1[v86];
          v91 = (double *)(result + v86 * 8);
          do
          {
            ++v85;
            v92.m128d_f64[0] = -v90[v88];
            v92.m128d_f64[1] = -v90[v88 + 1];
            *(__m128d *)&v91[v88] = _mm_sub_pd(v92, *(__m128d *)&v91[v88]);
            v88 += 2;
          }
          while ( v85 < v89 );
          v93 = (v84 & 0xFFFFFFFE) + v82;
          if ( v84 != (v84 & 0xFFFFFFFE) )
          {
            v94 = a1[v93];
            v95 = (double *)(result + 8LL * (int)v93);
            v96 = v93 + 1;
            *v95 = -v94 - *v95;
            if ( a2 > v96 )
            {
              result += 8LL * v96;
              *(double *)result = -a1[v96] - *(double *)result;
            }
          }
        }
        else
        {
          v172 = 0;
          do
          {
            *(double *)(result + v172) = -a1[v172 / 8] - *(double *)(result + v172);
            v172 += 8LL;
          }
          while ( v172 != 8LL * (unsigned int)(a2 - 1) + 8 );
        }
      }
    }
    else if ( a5.m128d_f64[0] == 0.0 )
    {
      if ( a2 > 0 )
      {
        if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 0xD )
        {
          v125 = 0;
          v126 = ((unsigned __int64)a1 >> 3) & 1;
          if ( (((unsigned __int64)a1 >> 3) & 1) != 0 )
          {
            v125 = 1;
            *(double *)result = -*a1;
          }
          v127 = a2 - v126;
          v128 = 0;
          v129 = ((unsigned __int64)a1 >> 3) & 1;
          v130 = a2 - v126;
          v131 = 0;
          v132 = v130 >> 1;
          v133 = &a1[v129];
          v134 = (double *)(result + v129 * 8);
          do
          {
            ++v128;
            *(double *)&v135 = -v133[v131];
            *((double *)&v135 + 1) = -v133[v131 + 1];
            *(_OWORD *)&v134[v131] = v135;
            v131 += 2;
          }
          while ( v132 > v128 );
          v136 = (v127 & 0xFFFFFFFE) + v125;
          if ( v127 != (v127 & 0xFFFFFFFE) )
          {
            v137 = v136;
            v138 = a1[v136];
            v139 = v136 + 1;
            *(double *)(result + 8 * v137) = -v138;
            if ( v139 < a2 )
              *(double *)(result + 8LL * v139) = -a1[v139];
          }
        }
        else
        {
          v202 = 0;
          do
          {
            *(double *)(result + v202) = -a1[v202 / 8];
            v202 += 8LL;
          }
          while ( v202 != 8LL * (unsigned int)(a2 - 1) + 8 );
        }
      }
    }
    else if ( a2 > 0 )
    {
      if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 8 )
      {
        v154 = 0;
        v155 = (a4 >> 3) & 1;
        if ( ((result >> 3) & 1) != 0 )
        {
          v154 = 1;
          *(double *)result = *(double *)result * a5.m128d_f64[0] - *a1;
        }
        v156 = a2 - v155;
        v157 = 0;
        v158 = (unsigned int)v155;
        v159 = _mm_unpacklo_pd(a5, a5);
        v160 = a2 - v155;
        v161 = 0;
        v162 = (double *)(result + v158 * 8);
        v163 = v160 >> 1;
        v164 = &a1[v158];
        do
        {
          ++v157;
          *(__m128d *)&v162[v161] = _mm_sub_pd(_mm_mul_pd(*(__m128d *)&v162[v161], v159), *(__m128d *)&v164[v161]);
          v161 += 2;
        }
        while ( v163 > v157 );
        v165 = (v156 & 0xFFFFFFFE) + v154;
        if ( v156 != (v156 & 0xFFFFFFFE) )
        {
          v166 = v165;
          v167 = v165 + 1;
          *(double *)(result + 8 * v166) = *(double *)(result + 8 * v166) * a5.m128d_f64[0] - a1[v166];
          if ( v167 < a2 )
          {
            result += 8LL * v167;
            *(double *)result = a5.m128d_f64[0] * *(double *)result - a1[v167];
          }
        }
      }
      else
      {
        v200 = 0;
        do
        {
          *(double *)(result + v200) = *(double *)(result + v200) * a5.m128d_f64[0] - a1[v200 / 8];
          v200 += 8LL;
        }
        while ( v200 != 8LL * (unsigned int)(a2 - 1) + 8 );
      }
    }
    return result;
  }
  if ( a3.m128d_f64[0] == 0.0 )
  {
    if ( a5.m128d_f64[0] == 1.0 )
      return result;
    if ( a5.m128d_f64[0] != -1.0 )
    {
      if ( a5.m128d_f64[0] == 0.0 )
      {
        if ( a2 > 0 )
          return (unsigned __int64)memset((void *)a4, 0, 8LL * (unsigned int)(a2 - 1) + 8);
        return result;
      }
      if ( a2 <= 0 )
        return result;
      v175 = (a4 >> 3) & 1;
      if ( (unsigned int)(a2 - 1) <= 1 )
      {
        v182 = 0;
      }
      else
      {
        v176 = 0;
        if ( (_DWORD)v175 )
        {
          v176 = 1;
          *(double *)result = *(double *)result * a5.m128d_f64[0];
        }
        v177 = (double *)(result + 8 * v175);
        v178 = a2 - v175;
        v179 = 0;
        v180 = 0;
        v181 = _mm_unpacklo_pd(a5, a5);
        do
        {
          ++v179;
          *(__m128d *)&v177[v180] = _mm_mul_pd(*(__m128d *)&v177[v180], v181);
          v180 += 2;
        }
        while ( v178 >> 1 > v179 );
        v182 = (v178 & 0xFFFFFFFE) + v176;
        if ( v178 == (v178 & 0xFFFFFFFE) )
          return result;
      }
      v183 = v182;
      v184 = v182 + 1;
      *(double *)(result + 8 * v183) = *(double *)(result + 8 * v183) * a5.m128d_f64[0];
      if ( v184 < a2 )
      {
        result += 8LL * v184;
        *(double *)result = a5.m128d_f64[0] * *(double *)result;
      }
      return result;
    }
    if ( a2 <= 0 )
      return result;
    v43 = (a4 >> 3) & 1;
    if ( a2 - 1 < 2 - (unsigned int)((_DWORD)v43 == 0) )
    {
      v52 = 0;
LABEL_47:
      v53 = (double *)(result + 8LL * (int)v52);
      v54 = v52 + 1;
      *v53 = -*v53;
      if ( v54 < a2 )
      {
        result += 8LL * v54;
        *(double *)result = -*(double *)result;
      }
      return result;
    }
    v44 = 0;
    if ( (_DWORD)v43 )
    {
      v44 = 1;
      *(double *)result = -*(double *)result;
    }
    v45 = a2 - v43;
    v46 = (double *)(result + 8 * v43);
    v47 = 0;
    v48 = a2 - v43;
    v49 = 0;
    v50 = v48 >> 1;
    do
    {
      ++v47;
      *(double *)&v51 = -v46[v49];
      *((double *)&v51 + 1) = -v46[v49 + 1];
      *(_OWORD *)&v46[v49] = v51;
      v49 += 2;
    }
    while ( v50 > v47 );
    v52 = (v45 & 0xFFFFFFFE) + v44;
    if ( v45 != (v45 & 0xFFFFFFFE) )
      goto LABEL_47;
  }
  else if ( a5.m128d_f64[0] == 1.0 )
  {
    if ( a2 > 0 )
    {
      if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 8 )
      {
        v55 = 0;
        v56 = (a4 >> 3) & 1;
        if ( ((result >> 3) & 1) != 0 )
        {
          v55 = 1;
          *(double *)result = *a1 * a3.m128d_f64[0] + *(double *)result;
        }
        v57 = a2 - v56;
        v58 = 0;
        v59 = (unsigned int)v56;
        v60 = _mm_unpacklo_pd(a3, a3);
        v61 = a2 - v56;
        v62 = 0;
        v63 = &a1[v59];
        v64 = v61 >> 1;
        v65 = (double *)(result + v59 * 8);
        do
        {
          ++v58;
          *(__m128d *)&v65[v62] = _mm_add_pd(_mm_mul_pd(*(__m128d *)&v63[v62], v60), *(__m128d *)&v65[v62]);
          v62 += 2;
        }
        while ( v64 > v58 );
        v66 = (v57 & 0xFFFFFFFE) + v55;
        if ( v57 != (v57 & 0xFFFFFFFE) )
        {
          v67 = v66;
          v68 = v66 + 1;
          *(double *)(result + 8 * v67) = a1[v67] * a3.m128d_f64[0] + *(double *)(result + 8 * v67);
          if ( v68 < a2 )
          {
            result += 8LL * v68;
            *(double *)result = a3.m128d_f64[0] * a1[v68] + *(double *)result;
          }
        }
      }
      else
      {
        v171 = 0;
        do
        {
          *(double *)(result + v171) = a1[v171 / 8] * a3.m128d_f64[0] + *(double *)(result + v171);
          v171 += 8LL;
        }
        while ( v171 != 8LL * (unsigned int)(a2 - 1) + 8 );
      }
    }
  }
  else if ( a5.m128d_f64[0] == -1.0 )
  {
    if ( a2 > 0 )
    {
      if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 8 )
      {
        v140 = 0;
        v141 = (a4 >> 3) & 1;
        if ( ((result >> 3) & 1) != 0 )
        {
          v140 = 1;
          *(double *)result = *a1 * a3.m128d_f64[0] - *(double *)result;
        }
        v142 = a2 - v141;
        v143 = 0;
        v144 = (unsigned int)v141;
        v145 = _mm_unpacklo_pd(a3, a3);
        v146 = a2 - v141;
        v147 = 0;
        v148 = &a1[v144];
        v149 = v146 >> 1;
        v150 = (double *)(result + v144 * 8);
        do
        {
          ++v143;
          *(__m128d *)&v150[v147] = _mm_sub_pd(_mm_mul_pd(*(__m128d *)&v148[v147], v145), *(__m128d *)&v150[v147]);
          v147 += 2;
        }
        while ( v149 > v143 );
        v151 = (v142 & 0xFFFFFFFE) + v140;
        if ( v142 != (v142 & 0xFFFFFFFE) )
        {
          v152 = v151;
          v153 = v151 + 1;
          *(double *)(result + 8 * v152) = a1[v152] * a3.m128d_f64[0] - *(double *)(result + 8 * v152);
          if ( v153 < a2 )
          {
            result += 8LL * v153;
            *(double *)result = a3.m128d_f64[0] * a1[v153] - *(double *)result;
          }
        }
      }
      else
      {
        v201 = 0;
        do
        {
          *(double *)(result + v201) = a1[v201 / 8] * a3.m128d_f64[0] - *(double *)(result + v201);
          v201 += 8LL;
        }
        while ( v201 != 8LL * (unsigned int)(a2 - 1) + 8 );
      }
    }
  }
  else if ( a5.m128d_f64[0] == 0.0 )
  {
    if ( a2 > 0 )
    {
      if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 0xE )
      {
        v111 = 0;
        v112 = ((unsigned __int64)a1 >> 3) & 1;
        if ( (((unsigned __int64)a1 >> 3) & 1) != 0 )
        {
          v111 = 1;
          *(double *)result = *a1 * a3.m128d_f64[0];
        }
        v113 = a2 - v112;
        v114 = 0;
        v115 = ((unsigned __int64)a1 >> 3) & 1;
        v116 = _mm_unpacklo_pd(a3, a3);
        v117 = a2 - v112;
        v118 = 0;
        v119 = &a1[v115];
        v120 = v117 >> 1;
        v121 = (double *)(result + v115 * 8);
        do
        {
          ++v114;
          *(__m128d *)&v121[v118] = _mm_mul_pd(*(__m128d *)&v119[v118], v116);
          v118 += 2;
        }
        while ( v120 > v114 );
        v122 = (v113 & 0xFFFFFFFE) + v111;
        if ( v113 != (v113 & 0xFFFFFFFE) )
        {
          v123 = v122;
          v124 = v122 + 1;
          *(double *)(result + 8 * v123) = a1[v123] * a3.m128d_f64[0];
          if ( v124 < a2 )
            *(double *)(result + 8LL * v124) = a3.m128d_f64[0] * a1[v124];
        }
      }
      else
      {
        v204 = 0;
        do
        {
          *(double *)(result + v204) = a1[v204 / 8] * a3.m128d_f64[0];
          v204 += 8LL;
        }
        while ( v204 != 8LL * (unsigned int)(a2 - 1) + 8 );
      }
    }
  }
  else if ( a2 > 0 )
  {
    if ( ((unsigned __int64)a1 >= a4 + 16 || a4 >= (unsigned __int64)(a1 + 2)) && (unsigned int)a2 > 7 )
    {
      v185 = 0;
      v186 = (a4 >> 3) & 1;
      if ( ((result >> 3) & 1) != 0 )
      {
        v185 = 1;
        *(double *)result = *a1 * a3.m128d_f64[0] + *(double *)result * a5.m128d_f64[0];
      }
      v187 = a2 - v186;
      v188 = _mm_unpacklo_pd(a3, a3);
      v189 = (unsigned int)v186;
      v190 = _mm_unpacklo_pd(a5, a5);
      v191 = a2 - v186;
      v192 = 0;
      v193 = 0;
      v194 = &a1[v189];
      v195 = v191 >> 1;
      v196 = (double *)(result + v189 * 8);
      do
      {
        ++v193;
        *(__m128d *)&v196[v192] = _mm_add_pd(
                                    _mm_mul_pd(*(__m128d *)&v194[v192], v188),
                                    _mm_mul_pd(*(__m128d *)&v196[v192], v190));
        v192 += 2;
      }
      while ( v195 > v193 );
      v197 = (v187 & 0xFFFFFFFE) + v185;
      if ( v187 != (v187 & 0xFFFFFFFE) )
      {
        v198 = v197;
        v199 = v197 + 1;
        *(double *)(result + 8 * v198) = a1[v198] * a3.m128d_f64[0] + *(double *)(result + 8 * v198) * a5.m128d_f64[0];
        if ( a2 > v199 )
        {
          result += 8LL * v199;
          *(double *)result = a3.m128d_f64[0] * a1[v199] + a5.m128d_f64[0] * *(double *)result;
        }
      }
    }
    else
    {
      v203 = 0;
      do
      {
        *(double *)(result + v203) = a1[v203 / 8] * a3.m128d_f64[0] + *(double *)(result + v203) * a5.m128d_f64[0];
        v203 += 8LL;
      }
      while ( v203 != 8LL * (unsigned int)(a2 - 1) + 8 );
    }
  }
  return result;
}

