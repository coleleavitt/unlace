const ClpSimplex *__fastcall ClpPackedMatrix3::transposeTimes2(
        ClpPackedMatrix3 *this,
        const ClpSimplex *a2,
        const double *a3,
        CoinIndexedVector *a4,
        double *a5,
        double *a6,
        double a7,
        double a8,
        double a9,
        double *a10,
        unsigned int *a11,
        double *a12)
{
  int *v15; // r15
  double v16; // xmm7_8
  double v17; // xmm4_8
  __m128 v18; // xmm0
  __m128 v19; // xmm3
  double v20; // xmm4_8
  int *v21; // rsi
  __int64 v22; // rax
  double *v23; // rdi
  __int64 v24; // rbx
  int v25; // edx
  double v26; // xmm14_8
  __m128 v27; // xmm4
  const double **v28; // rax
  bool v29; // cc
  const double *v30; // rbx
  double v31; // xmm9_8
  __int64 v32; // rbp
  double v33; // xmm8_8
  signed int *v34; // r13
  __int64 v35; // r14
  __int64 v36; // rax
  int *v37; // r15
  __int64 v38; // rdx
  int v39; // r8d
  _BYTE *v40; // rbx
  signed int v41; // ecx
  char v42; // r11
  int v43; // r12d
  double v44; // xmm4_8
  __int64 v45; // r10
  __int64 v46; // rsi
  __int64 v47; // r9
  __int64 v48; // rax
  double v49; // xmm3_8
  double v50; // xmm3_8
  double v51; // xmm3_8
  double v52; // xmm4_8
  double v53; // xmm3_8
  double v54; // xmm10_8
  __int64 v55; // r12
  double *v56; // rbp
  __int64 v57; // rax
  int v58; // r13d
  __int64 v59; // rax
  int v60; // eax
  int v61; // eax
  __int64 v62; // r10
  double *v63; // r11
  const double *v64; // r9
  int *v65; // rbx
  __int64 v66; // r14
  int *v67; // r8
  __int64 i; // rdi
  double v69; // xmm5_8
  double *v70; // rdx
  double v71; // xmm4_8
  int *v72; // rax
  __int64 v73; // rcx
  double v74; // xmm3_8
  __int64 v75; // r11
  __int64 v76; // rbx
  int v77; // eax
  __int64 v78; // rdx
  int v79; // r10d
  __int64 v80; // r9
  unsigned __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // r10
  double *v84; // rcx
  double v85; // xmm5_8
  double v86; // xmm3_8
  double v87; // xmm5_8
  unsigned int v88; // edx
  double v89; // xmm3_8
  double v90; // xmm3_8
  double v91; // xmm4_8
  double v92; // xmm3_8
  double v93; // xmm4_8
  __int64 v94; // rdx
  signed int v95; // esi
  _BYTE *v96; // r8
  double *v97; // rdi
  double v98; // xmm3_8
  __int64 v99; // rdx
  __int64 v100; // r14
  __int64 v101; // r15
  double *v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // r11
  __int64 v107; // r10
  __int64 v108; // r9
  double v109; // xmm5_8
  int *v110; // rdx
  double *v111; // rcx
  double v112; // xmm4_8
  __int64 v113; // rdi
  double v114; // xmm3_8
  double v115; // xmm3_8
  __int64 v116; // rdx
  __int64 v117; // rcx
  signed int v118; // edi
  _BYTE *v119; // rbx
  double *v120; // r8
  double *v121; // rdx
  double v122; // xmm6_8
  double v123; // xmm3_8
  double v124; // xmm6_8
  unsigned int v125; // edx
  double v126; // xmm3_8
  double v127; // xmm3_8
  double v128; // xmm3_8
  double v129; // xmm4_8
  double v130; // xmm1_8
  int *v131; // rcx
  int v132; // r9d
  int *v133; // rax
  int v134; // edx
  __int64 v135; // r11
  __int64 v136; // r10
  double v137; // xmm2_8
  int v138; // r8d
  __int64 v139; // r11
  __int64 v140; // r10
  double v141; // xmm2_8
  double v142; // xmm3_8
  double v143; // xmm2_8
  int v144; // ecx
  __int64 v145; // r9
  __int64 v146; // r8
  double v147; // xmm2_8
  double v148; // xmm2_8
  int v149; // eax
  double v150; // xmm2_8
  int v151; // ecx
  __int64 v152; // rax
  double *v153; // rsi
  double v154; // xmm2_8
  __int64 v155; // r8
  int v156; // eax
  __int64 v157; // rsi
  double v158; // xmm3_8
  __int64 v159; // rax
  __int64 v160; // rsi
  double v161; // xmm1_8
  char v162; // r9
  double v163; // xmm1_8
  double v164; // xmm1_8
  const ClpSimplex *result; // rax
  double v166; // xmm3_8
  double v167; // xmm11_8
  __int64 v168; // rax
  double v169; // xmm3_8
  __int64 v170; // rax
  double *v171; // rdx
  double v172; // xmm5_8
  double v173; // xmm3_8
  double v174; // xmm5_8
  unsigned int v175; // esi
  double v176; // xmm3_8
  double *v177; // rax
  double v178; // xmm3_8
  char v179; // al
  double v180; // xmm3_8
  double *v181; // [rsp+0h] [rbp-380h] BYREF
  const double *v182; // [rsp+8h] [rbp-378h]
  __int64 v183; // [rsp+10h] [rbp-370h]
  const double *v184; // [rsp+18h] [rbp-368h]
  __int64 v185; // [rsp+20h] [rbp-360h]
  int v186; // [rsp+28h] [rbp-358h]
  int v187; // [rsp+2Ch] [rbp-354h]
  int *v188; // [rsp+30h] [rbp-350h]
  double *v189; // [rsp+38h] [rbp-348h]
  __int64 v190; // [rsp+40h] [rbp-340h]
  __int64 v191; // [rsp+48h] [rbp-338h]
  __int64 v192; // [rsp+50h] [rbp-330h]
  __int64 v193; // [rsp+58h] [rbp-328h]
  int v194; // [rsp+60h] [rbp-320h]
  unsigned int v195; // [rsp+64h] [rbp-31Ch]
  __int64 v196; // [rsp+68h] [rbp-318h]
  __int64 v197; // [rsp+70h] [rbp-310h]
  int *v198; // [rsp+78h] [rbp-308h]
  const ClpSimplex *v199; // [rsp+80h] [rbp-300h]
  int v200; // [rsp+88h] [rbp-2F8h]
  int v201; // [rsp+8Ch] [rbp-2F4h]
  int *v202; // [rsp+90h] [rbp-2F0h]
  __int64 v203; // [rsp+98h] [rbp-2E8h]
  __int64 v204; // [rsp+A0h] [rbp-2E0h]
  signed int v205; // [rsp+A8h] [rbp-2D8h]
  int v206; // [rsp+ACh] [rbp-2D4h]
  double *v207; // [rsp+B0h] [rbp-2D0h]
  __int64 v208; // [rsp+B8h] [rbp-2C8h]
  double v209; // [rsp+C0h] [rbp-2C0h]
  __int64 v210; // [rsp+C8h] [rbp-2B8h]
  double v211; // [rsp+D0h] [rbp-2B0h]
  _OWORD v212[39]; // [rsp+D8h] [rbp-2A8h] BYREF

  v15 = *((int **)this + 5);
  v199 = a2;
  v16 = *((double *)a2 + 88);
  v182 = a3;
  v17 = fmin(0.01, *((double *)a2 + 96));
  v181 = a5;
  v18 = _mm_loadh_ps((const double *)&a12);
  v19 = _mm_loadh_ps((const double *)&v181);
  v20 = v17 + *((double *)a2 + 109);
  v21 = *((int **)this + 9);
  memset(v212, 0, sizeof(v212));
  v22 = *((_QWORD *)this + 6);
  v23 = *((double **)a2 + 33);
  *((double *)&v212[1] + 1) = v16;
  v24 = *((_QWORD *)this + 7);
  v202 = v21;
  v25 = v21[2];
  v203 = v22;
  *(double *)&v212[2] = v20;
  v207 = v23;
  v204 = v24;
  *(_QWORD *)&v212[9] = a6;
  v26 = v20;
  v181 = v23;
  *(_QWORD *)&v212[11] = v22;
  *((double *)&v212[2] + 1) = a9;
  *(_QWORD *)&v212[10] = v24;
  v27 = _mm_loadh_ps((const double *)this + 4);
  *(_QWORD *)&v212[24] = v22;
  *(double *)v212 = a7;
  *(_QWORD *)&v212[23] = v24;
  *(_QWORD *)&v212[6] = a11;
  *((double *)&v212[3] + 1) = a8;
  *((_QWORD *)&v212[9] + 1) = v21;
  *((double *)&v212[14] + 1) = v16;
  *((_QWORD *)&v212[10] + 1) = v15;
  *(double *)&v212[15] = v26;
  v212[8] = v27;
  DWORD2(v212[11]) = -1;
  v212[4] = v18;
  v212[5] = v19;
  v212[21] = v27;
  *((double *)&v212[15] + 1) = a9;
  v212[17] = v18;
  *(_QWORD *)&v212[22] = a6;
  v212[18] = v19;
  *(double *)&v212[13] = a7;
  *((double *)&v212[16] + 1) = a8;
  *(_QWORD *)&v212[19] = a11;
  *((double *)&v212[27] + 1) = v16;
  *((_QWORD *)&v212[22] + 1) = v21;
  *((_QWORD *)&v212[23] + 1) = v15;
  DWORD2(v212[24]) = -1;
  *(double *)&v212[28] = v26;
  *(_QWORD *)&v212[37] = v22;
  v28 = *((const double ***)this + 8);
  *(_QWORD *)&v212[36] = v24;
  *((double *)&v212[28] + 1) = a9;
  *(_QWORD *)&v212[35] = a6;
  *(double *)&v212[26] = a7;
  *(_QWORD *)&v212[32] = a11;
  *((double *)&v212[29] + 1) = a8;
  v29 = *((_DWORD *)v28 + 2) < -1;
  v30 = *v28;
  *((_QWORD *)&v212[35] + 1) = v21;
  *((_QWORD *)&v212[36] + 1) = v15;
  v212[34] = v27;
  DWORD2(v212[37]) = -1;
  v184 = v30;
  v212[30] = v18;
  v212[31] = v19;
  if ( v29 )
  {
    v190 = 1024;
    v184 = nullptr;
  }
  else
  {
    v190 = (__int64)(v30 + 128);
  }
  v31 = *((double *)&v212[13] + 1);
  v32 = *((_QWORD *)&v212[17] + 1);
  v206 = *((_DWORD *)this + 2);
  v33 = -v26;
  v34 = *((signed int **)&v212[21] + 1);
  v35 = *(_QWORD *)&v212[17];
  v209 = *((double *)&v212[13] + 1);
  v181 = *(double **)&v212[18];
  v182 = *(const double **)&v212[21];
  v183 = *((_QWORD *)&v212[18] + 1);
  v36 = *v15;
  if ( v25 > 0 )
  {
    v37 = v15 + 1;
    v185 = *((_QWORD *)&v212[21] + 1) + 4LL * (unsigned int)(v25 - 1) + 4;
    v200 = -1;
    while ( 1 )
    {
      v38 = *v34;
      v39 = *v37;
      v40 = (char *)v182 + v38;
      v41 = *v34;
      LOBYTE(v186) = *((_BYTE *)v182 + v38);
      v42 = v186 & 7;
      if ( (v186 & 7) != 1 )
        break;
LABEL_18:
      ++v34;
      ++v37;
      v36 = v39;
      if ( (signed int *)v185 == v34 )
        goto LABEL_19;
    }
    if ( v39 <= (int)v36 )
    {
      if ( v16 >= 0.0 )
        goto LABEL_10;
      v44 = 0.0;
      v167 = 0.0;
    }
    else
    {
      v43 = ~(_DWORD)v36;
      v44 = 0.0;
      v45 = v203 + 4 * v36;
      v46 = (unsigned int)(~(_DWORD)v36 + v39) + 1LL;
      v47 = v204 + 8 * v36;
      v48 = 0;
      do
      {
        v49 = *(double *)(v35 + 8LL * *(int *)(v45 + 4 * v48)) * *(double *)(v47 + 8 * v48);
        ++v48;
        v44 = v44 - v49;
      }
      while ( v46 != v48 );
      if ( fabs(v44) <= v16 )
      {
LABEL_10:
        v50 = v181[v38];
        if ( v42 != 3 )
        {
          if ( (v186 & 1) != 0 )
            goto LABEL_132;
          if ( v42 == 2 )
          {
            v50 = -v50;
            goto LABEL_15;
          }
          v51 = fabs(v50);
          if ( v51 <= 100.0 * v26 )
LABEL_132:
            v50 = 0.0;
          else
            v50 = -v51 * 10.0;
        }
LABEL_15:
        if ( v33 <= v50 )
          goto LABEL_18;
        v52 = *(double *)(v32 + 8 * v38);
        v53 = v50 * v50;
        if ( v53 <= v52 * v31 )
          goto LABEL_18;
        goto LABEL_17;
      }
      v167 = 0.0;
      v168 = 0;
      do
      {
        v169 = *(double *)(v183 + 8LL * *(int *)(v45 + 4 * v168)) * *(double *)(v47 + 8 * v168);
        ++v168;
        v167 = v167 + v169;
      }
      while ( (unsigned int)(v43 + v39) + 1LL != v168 );
    }
    v170 = v38;
    v171 = (double *)(v32 + 8 * v38);
    v172 = a9 * v44 * (a9 * v44);
    v173 = a8 * v172 + a9 * v44 * v167 + *v171;
    if ( v173 < 0.0001 )
    {
      if ( a7 < 0.0 )
      {
        v173 = fmax(0.0001, v172 + 1.0);
      }
      else
      {
        v174 = v172 * a7;
        v175 = a11[v41 >> 5];
        v176 = v174;
        if ( _bittest((const int *)&v175, v41) )
          v176 = v174 + 1.0;
        v173 = fmax(v176, 0.0001);
      }
    }
    v177 = &v181[v170];
    *v171 = v173;
    v178 = *v177 - v44;
    *v177 = v178;
    v179 = *v40 & 7;
    if ( v179 != 3 )
    {
      if ( (*v40 & 1) != 0 )
        goto LABEL_149;
      if ( v179 == 2 )
      {
        v178 = -v178;
        goto LABEL_146;
      }
      v180 = fabs(v178);
      if ( v180 <= 100.0 * v26 )
LABEL_149:
        v178 = 0.0;
      else
        v178 = -v180 * 10.0;
    }
LABEL_146:
    if ( v33 <= v178 )
      goto LABEL_18;
    v52 = *v171;
    v53 = v178 * v178;
    if ( v53 <= *v171 * v31 )
      goto LABEL_18;
LABEL_17:
    v200 = v41;
    v31 = v53 / v52;
    goto LABEL_18;
  }
  v200 = -1;
LABEL_19:
  DWORD2(v212[24]) = v200;
  v192 = *(_QWORD *)&v212[5];
  v183 = *((_QWORD *)&v212[4] + 1);
  v208 = *((_QWORD *)&v212[8] + 1);
  v193 = *(_QWORD *)&v212[8];
  if ( v206 > 0 )
  {
    v211 = v26;
    v54 = 0.0;
    v55 = *(_QWORD *)&v212[4];
    v198 = v202;
    v194 = -1;
    v56 = *((double **)&v212[5] + 1);
    v210 = (__int64)&v202[10 * (v206 - 1) + 10];
    while ( 1 )
    {
      v57 = *v198;
      v58 = v198[8];
      v201 = v198[7];
      v205 = v201 & 0xFFFFFFFC;
      v188 = (int *)(v203 + 4 * v57);
      v189 = (double *)(v204 + 8 * v57);
      v185 = v208 + 4LL * v198[2];
      if ( v201 >= 0 && (v201 & 0xFFFFFFFC) != 0 )
      {
        v59 = 4 * (v58 - 1);
        v197 = 8 * v59;
        v196 = 4 * v59;
        v186 = v201;
        v195 = v201 - 128 - ((v205 - 1) & 0xFFFFFF80);
        while ( 1 )
        {
          v60 = 128;
          if ( v186 <= 128 )
            v60 = v186;
          v61 = v60 >> 2;
          v187 = v61;
          if ( v61 > 0 )
            break;
LABEL_53:
          v186 -= 128;
          if ( v195 == v186 )
            goto LABEL_54;
        }
        v62 = v190;
        v191 = (unsigned int)(v61 - 1);
        v63 = v189;
        v64 = v184;
        v65 = v188;
        v182 = &v184[4 * v191 + 4];
        v66 = v196 + 16;
        v181 = (double *)(v197 + 32);
        do
        {
          v67 = v65;
          for ( i = 0; i != 4; ++i )
          {
            if ( v58 <= 0 )
            {
              v69 = 0.0;
              v71 = 0.0;
            }
            else
            {
              v69 = 0.0;
              v70 = &v63[i];
              v71 = 0.0;
              v72 = v67;
              do
              {
                v73 = *v72;
                v74 = *v70;
                v72 += 4;
                v70 += 4;
                v71 = v71 - *(double *)(v55 + 8 * v73) * v74;
                v69 = v69 + v74 * v56[v73];
              }
              while ( &v67[4 * (v58 - 1) + 4] != v72 );
            }
            v64[i] = v69;
            ++v67;
            *(double *)(v62 + i * 8) = v71;
          }
          v65 = (int *)((char *)v65 + v66);
          v63 = (double *)((char *)v63 + (_QWORD)v181);
          v64 += 4;
          v62 += 32;
        }
        while ( v182 != v64 );
        v75 = v193;
        v76 = v185;
        v77 = 4 * (v187 + 0x3FFFFFFF);
        v78 = (_QWORD)v181 * (v191 + 1);
        v79 = v77 + 4;
        v188 = (int *)((char *)v188 + (v191 + 1) * v66);
        v80 = 4LL * (unsigned int)(v77 + 3) + 4;
        v181 = v56;
        v81 = 0;
        LODWORD(v182) = v79;
        v82 = v190;
        v189 = (double *)((char *)v189 + v78);
        v83 = v192;
        while ( 1 )
        {
          v93 = *(double *)(v82 + 2 * v81);
          v94 = *(int *)(v76 + v81);
          v95 = *(_DWORD *)(v76 + v81);
          v96 = (_BYTE *)(v75 + v94);
          v97 = (double *)(v83 + 8 * v94);
          if ( fabs(v93) > v16 )
            break;
          v98 = *v97;
          if ( (*v96 & 7) != 3 )
          {
            if ( (*v96 & 1) != 0 )
              v98 = 0.0;
            else
              v98 = -v98;
          }
          if ( v33 <= v98 )
            goto LABEL_44;
          v92 = v98 * v98;
          v91 = *(double *)(v183 + 8 * v94);
          if ( v92 > v91 * v54 )
          {
LABEL_43:
            v194 = v95;
            v54 = v92 / v91;
LABEL_44:
            v81 += 4LL;
            if ( v80 == v81 )
              goto LABEL_52;
          }
          else
          {
            v81 += 4LL;
            if ( v80 == v81 )
            {
LABEL_52:
              v56 = v181;
              v185 += 4LL * (unsigned int)((_DWORD)v182 - 1) + 4;
              goto LABEL_53;
            }
          }
        }
        v84 = (double *)(v183 + 8 * v94);
        v85 = a9 * v93 * (a9 * v93);
        v86 = a9 * v93 * v184[v81 / 4] + a8 * v85 + *v84;
        if ( v86 < 0.0001 )
        {
          if ( a7 < 0.0 )
          {
            v86 = fmax(0.0001, v85 + 1.0);
          }
          else
          {
            v87 = v85 * a7;
            v88 = a11[v95 >> 5];
            v89 = v87;
            if ( _bittest((const int *)&v88, v95) )
              v89 = v87 + 1.0;
            v86 = fmax(v89, 0.0001);
          }
        }
        *v84 = v86;
        v90 = *v97 - v93;
        *v97 = v90;
        if ( (*v96 & 7) != 3 )
          v90 = -v90;
        if ( v33 <= v90 )
          goto LABEL_44;
        v91 = *v84;
        v92 = v90 * v90;
        if ( v92 <= *v84 * v54 )
          goto LABEL_44;
        goto LABEL_43;
      }
LABEL_54:
      if ( v201 > v205 )
        break;
LABEL_72:
      v198 += 10;
      if ( (int *)v210 == v198 )
      {
        v26 = v211;
        goto LABEL_74;
      }
    }
    v99 = (unsigned int)(v58 - 1);
    v100 = v192;
    v101 = v193;
    v102 = v189;
    v103 = (__int64)&v188[4 * v99 + 4];
    v104 = (unsigned int)(v201 - 1 - v205) + 4 * v99;
    v105 = -v99;
    v106 = (__int64)&v188[v104 + 5];
    v107 = 16 * v105 - 16;
    v108 = v185 + 16 * v105 - (_QWORD)v188;
    while ( 1 )
    {
      if ( v58 <= 0 )
      {
        v115 = 0.0;
        v109 = 0.0;
        v112 = 0.0;
      }
      else
      {
        v109 = 0.0;
        v110 = (int *)(v107 + v103);
        v111 = v102;
        v112 = 0.0;
        do
        {
          v113 = *v110;
          v114 = *v111;
          v110 += 4;
          v111 += 4;
          v112 = v112 - *(double *)(v55 + 8 * v113) * v114;
          v109 = v109 + v114 * v56[v113];
        }
        while ( (int *)v103 != v110 );
        v115 = fabs(v112);
      }
      v116 = *(int *)(v108 + v103 - 16);
      v117 = 8 * v116;
      v118 = *(_DWORD *)(v108 + v103 - 16);
      v119 = (_BYTE *)(v101 + v116);
      v120 = (double *)(v100 + 8 * v116);
      if ( v115 <= v16 )
      {
        v166 = *v120;
        if ( (*v119 & 7) != 3 )
        {
          if ( (*v119 & 1) != 0 )
            v166 = 0.0;
          else
            v166 = -v166;
        }
        if ( v33 <= v166 )
          goto LABEL_71;
        v128 = v166 * v166;
        v129 = *(double *)(v183 + 8 * v116);
        if ( v128 <= v129 * v54 )
          goto LABEL_71;
      }
      else
      {
        v121 = (double *)(v117 + v183);
        v181 = (double *)(v117 + v183);
        v122 = a9 * v112 * (a9 * v112);
        v123 = a8 * v122 + v109 * (a9 * v112) + *(double *)(v117 + v183);
        if ( v123 < 0.0001 )
        {
          if ( a7 < 0.0 )
          {
            v123 = fmax(0.0001, v122 + 1.0);
          }
          else
          {
            v124 = v122 * a7;
            v125 = a11[v118 >> 5];
            v126 = v124;
            if ( _bittest((const int *)&v125, v118) )
              v126 = v124 + 1.0;
            v123 = fmax(v126, 0.0001);
            v121 = v181;
          }
        }
        *v121 = v123;
        v127 = *v120 - v112;
        *v120 = v127;
        if ( (*v119 & 7) != 3 )
          v127 = -v127;
        if ( v33 <= v127 )
          goto LABEL_71;
        v128 = v127 * v127;
        v129 = *v181;
        if ( v128 <= *v181 * v54 )
          goto LABEL_71;
      }
      v194 = v118;
      v54 = v128 / v129;
LABEL_71:
      v103 += 4;
      ++v102;
      if ( v106 == v103 )
        goto LABEL_72;
    }
  }
  v54 = 0.0;
  v194 = -1;
LABEL_74:
  *((double *)v212 + 1) = v54;
  v130 = *((double *)&v212[26] + 1);
  DWORD2(v212[11]) = v194;
  v131 = &v202[10 * v206];
  v132 = v131[5];
  v133 = (int *)(*((_QWORD *)&v212[34] + 1) + 4LL * v131[2]);
  v134 = -1;
  if ( v132 > 0 )
  {
    v135 = (__int64)&v133[v132 - 1 + 1];
    do
    {
      v136 = *v133++;
      if ( fabs(*(double *)(*(_QWORD *)&v212[31] + 8 * v136)) > 100.0 * v26 )
      {
        v137 = *(double *)(*(_QWORD *)&v212[31] + 8 * v136)
             * 10.0
             * (*(double *)(*(_QWORD *)&v212[31] + 8 * v136)
              * 10.0);
        if ( v137 > *(double *)(*((_QWORD *)&v212[30] + 1) + 8 * v136) * v130 )
        {
          v134 = v136;
          v130 = v137 / *(double *)(*((_QWORD *)&v212[30] + 1) + 8 * v136);
        }
      }
    }
    while ( v133 != (int *)v135 );
  }
  v138 = v131[6];
  if ( v132 < v138 )
  {
    v139 = (__int64)&v133[v138 - 1 - v132 + 1];
    do
    {
      v140 = *v133++;
      v141 = *(double *)(*(_QWORD *)&v212[31] + 8 * v140);
      if ( v33 > v141 )
      {
        v142 = *(double *)(*((_QWORD *)&v212[30] + 1) + 8 * v140);
        v143 = v141 * v141;
        if ( v143 > v130 * v142 )
        {
          v134 = v140;
          v130 = v143 / v142;
        }
      }
    }
    while ( v133 != (int *)v139 );
  }
  v144 = v131[7];
  if ( v138 < v144 )
  {
    v145 = (__int64)&v133[v144 - 1 - v138 + 1];
    do
    {
      v146 = *v133++;
      v147 = *(double *)(*(_QWORD *)&v212[31] + 8 * v146);
      if ( v147 > v26 )
      {
        v148 = v147 * v147;
        if ( v148 > *(double *)(*((_QWORD *)&v212[30] + 1) + 8 * v146) * v130 )
        {
          v134 = v146;
          v130 = v148 / *(double *)(*((_QWORD *)&v212[30] + 1) + 8 * v146);
        }
      }
    }
    while ( v133 != (int *)v145 );
  }
  DWORD2(v212[37]) = v134;
  *((double *)&v212[26] + 1) = v130;
  if ( v54 <= 0.0 )
  {
    v194 = -1;
    v54 = 0.0;
  }
  v149 = v194;
  v150 = fmax(v209, v54);
  if ( v209 > v54 )
    v149 = v200;
  if ( v130 <= v150 )
    v134 = v149;
  v151 = *((_DWORD *)v199 + 290);
  if ( v151 < 0 )
  {
    if ( v134 < 0 )
      goto LABEL_119;
    v154 = 0.0;
  }
  else
  {
    v152 = v151;
    v153 = &a10[v151];
    v154 = *v153;
    if ( (*((_BYTE *)v207 + v151) & 7) == 2 )
      *v153 = -1.797693134862316e308;
    else
      *v153 = 1.797693134862316e308;
    if ( v134 < 0 )
      goto LABEL_118;
  }
  v155 = *((_QWORD *)v199 + 33);
  if ( (*(_BYTE *)(v155 + v134) & 0x40) != 0 || v151 == v134 )
  {
    v134 = -2;
    v156 = *((_DWORD *)v199 + 26) + *((_DWORD *)v199 + 27);
    if ( v156 > 0 )
    {
      v157 = (unsigned int)(v156 - 1);
      v158 = 0.0;
      v159 = 0;
      v160 = v157 + 1;
      while ( 1 )
      {
        v161 = a10[v159];
        v162 = *(_BYTE *)(v155 + v159) & 7;
        if ( v162 == 3 )
          goto LABEL_111;
        if ( (*(_BYTE *)(v155 + v159) & 1) != 0 )
          goto LABEL_133;
        if ( v162 != 2 )
          break;
        v161 = -v161;
LABEL_111:
        if ( v26 > v161 )
        {
          v164 = v161 * v161;
          if ( v164 > a12[v159] * v158 && (*(_BYTE *)(v155 + v159) & 0x40) == 0 )
          {
            v134 = v159;
            v158 = v164 / a12[v159];
          }
        }
        if ( ++v159 == v160 )
          goto LABEL_116;
      }
      v163 = fabs(v161);
      if ( v163 > v33 * 100.0 )
      {
        v161 = -v163 * 10.0;
        goto LABEL_111;
      }
LABEL_133:
      v161 = 0.0;
      goto LABEL_111;
    }
  }
LABEL_116:
  if ( v151 >= 0 )
  {
    v152 = v151;
LABEL_118:
    a10[v152] = v154;
  }
LABEL_119:
  result = v199;
  *((_DWORD *)v199 + 434) = v134;
  return result;
}

