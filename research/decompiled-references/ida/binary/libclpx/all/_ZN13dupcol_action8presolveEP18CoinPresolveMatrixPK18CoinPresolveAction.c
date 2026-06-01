CoinPresolveMatrix *__fastcall dupcol_action::presolve(
        dupcol_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  _QWORD *v4; // rdx
  const double *v5; // r14
  const int *v6; // rbp
  int *v7; // rbx
  int v8; // eax
  int v9; // edi
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rsi
  __int64 *v13; // rax
  int v14; // ecx
  __int64 *v15; // rsi
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // r13
  const double *v21; // rax
  int v22; // r14d
  const double *v23; // r12
  __int64 v24; // rsi
  char v25; // r8
  int v26; // edx
  double v27; // xmm2_8
  __int64 v28; // rax
  int v29; // esi
  const double *v30; // rdi
  const int *v31; // r11
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  double v35; // xmm0_8
  __int64 v36; // rax
  __int64 v37; // rax
  const double *v38; // rax
  int v39; // r12d
  bool v40; // zf
  const double *v41; // r14
  double *v42; // r10
  __int64 v43; // r13
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // edx
  double v49; // xmm1_8
  const int *v50; // rdi
  const double *v51; // rsi
  __int64 v52; // rax
  double v53; // xmm0_8
  unsigned __int64 v54; // rbx
  __int64 v55; // rbx
  const double *v56; // r15
  __int64 v57; // r10
  __int64 v58; // r14
  int *v59; // r8
  int *v60; // r9
  __int64 v61; // r12
  double *v62; // r10
  CoinPresolveMatrix *v63; // r15
  void *v64; // rbp
  __int64 v65; // rax
  CoinPresolveMatrix *v66; // rbx
  const CoinPresolveAction *v67; // r9
  const CoinPresolveAction *v68; // r9
  __int64 v70; // rax
  __int64 v71; // rcx
  int v72; // r11d
  __int64 v73; // rdx
  const int *v74; // rsi
  const double *v75; // r11
  double v76; // xmm0_8
  int v77; // edi
  __int64 v78; // rax
  __int64 v79; // r12
  double v80; // xmm2_8
  __int64 v81; // rdi
  double v82; // xmm1_8
  double *v83; // r11
  _QWORD *v84; // rax
  double v85; // xmm4_8
  double v86; // xmm3_8
  double v87; // xmm5_8
  double v88; // xmm7_8
  double v89; // xmm6_8
  int v90; // eax
  double v91; // xmm13_8
  int v92; // eax
  int v93; // esi
  double v94; // xmm14_8
  int *v95; // rdi
  double *v96; // r8
  int v97; // eax
  int v98; // r10d
  unsigned __int64 v99; // rbx
  __int64 v100; // rax
  double v101; // xmm0_8
  int v102; // edx
  int v103; // ecx
  int v104; // edx
  int v105; // ebp
  double v106; // xmm11_8
  double v107; // xmm7_8
  double v108; // xmm12_8
  double v109; // xmm8_8
  double v110; // xmm8_8
  double v111; // xmm7_8
  double v112; // xmm11_8
  double v113; // xmm11_8
  double v114; // xmm8_8
  double v115; // xmm8_8
  double v116; // xmm0_8
  const double *v117; // r11
  const int *v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rdx
  double v122; // xmm1_8
  double v123; // xmm0_8
  int v124; // edx
  char *v125; // rcx
  double v126; // xmm0_8
  int v127; // eax
  __int64 v128; // rax
  int *v129; // r9
  double v130; // xmm1_8
  double v131; // xmm3_8
  __int64 v132; // rax
  int v133; // eax
  int v134; // edx
  int *v135; // r8
  unsigned __int64 v136; // r13
  __int64 v137; // rax
  _DWORD *v138; // r10
  __int64 v139; // rsi
  int v140; // r9d
  _DWORD *v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // xmm0_8
  int v145; // ecx
  __int64 v146; // rdx
  __int64 v147; // rsi
  double v148; // xmm0_8
  const int *v149; // rdi
  const double *v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rsi
  double v153; // xmm8_8
  bool v154; // al
  int v155; // edx
  int v156; // ecx
  int v157; // esi
  bool v158; // al
  __int64 v159; // rcx
  __int64 v160; // rdx
  _BYTE *v161; // rsi
  char v162; // r8
  char *v163; // rdx
  char v164; // cl
  double v165; // xmm2_8
  int v166; // eax
  double v167; // xmm11_8
  double v168; // xmm11_8
  double v169; // xmm8_8
  double v170; // xmm8_8
  __int64 v171; // rdx
  _BYTE *v172; // rsi
  char v173; // r8
  char *v174; // rdx
  char v175; // cl
  double v176; // xmm1_8
  int v177; // eax
  __int64 v178; // [rsp+0h] [rbp-188h]
  int v179; // [rsp+0h] [rbp-188h]
  double *v180; // [rsp+0h] [rbp-188h]
  __int64 v181; // [rsp+8h] [rbp-180h]
  int v182; // [rsp+10h] [rbp-178h]
  double *v183; // [rsp+10h] [rbp-178h]
  int v184; // [rsp+10h] [rbp-178h]
  __int64 v185; // [rsp+18h] [rbp-170h]
  int v186; // [rsp+20h] [rbp-168h]
  __int64 v187; // [rsp+20h] [rbp-168h]
  int v188; // [rsp+28h] [rbp-160h]
  int *v189; // [rsp+28h] [rbp-160h]
  __int64 v190; // [rsp+30h] [rbp-158h]
  __int64 v191; // [rsp+38h] [rbp-150h]
  int v192; // [rsp+44h] [rbp-144h]
  int v193; // [rsp+48h] [rbp-140h]
  double v194; // [rsp+48h] [rbp-140h]
  __int64 v195; // [rsp+50h] [rbp-138h]
  __int64 v197; // [rsp+60h] [rbp-128h]
  _QWORD *v198; // [rsp+68h] [rbp-120h]
  CoinPresolveMatrix *v199; // [rsp+70h] [rbp-118h]
  int *v200; // [rsp+78h] [rbp-110h]
  int v201; // [rsp+78h] [rbp-110h]
  const int *v202; // [rsp+78h] [rbp-110h]
  __int64 v203; // [rsp+78h] [rbp-110h]
  int *v204; // [rsp+80h] [rbp-108h]
  double v205; // [rsp+80h] [rbp-108h]
  double *v206; // [rsp+80h] [rbp-108h]
  __int64 v207; // [rsp+80h] [rbp-108h]
  _QWORD *v208; // [rsp+88h] [rbp-100h]
  double v209; // [rsp+90h] [rbp-F8h]
  int v210; // [rsp+98h] [rbp-F0h]
  char *src; // [rsp+A0h] [rbp-E8h]
  CoinPresolveMatrix *v212; // [rsp+A8h] [rbp-E0h]
  CoinPresolveMatrix *v213; // [rsp+B0h] [rbp-D8h]
  char v214; // [rsp+BBh] [rbp-CDh]
  unsigned int v215; // [rsp+BCh] [rbp-CCh]
  int *v216; // [rsp+C0h] [rbp-C8h]
  __int64 v217; // [rsp+C8h] [rbp-C0h]
  int v218; // [rsp+D0h] [rbp-B8h]
  int v219; // [rsp+D0h] [rbp-B8h]
  __int64 v220; // [rsp+D0h] [rbp-B8h]
  double *v221; // [rsp+D8h] [rbp-B0h]
  __int64 v222; // [rsp+E0h] [rbp-A8h]
  __int64 v223; // [rsp+E0h] [rbp-A8h]
  double *v224; // [rsp+E0h] [rbp-A8h]
  __int64 v225; // [rsp+E0h] [rbp-A8h]
  int *v226; // [rsp+E8h] [rbp-A0h]
  int *v227; // [rsp+E8h] [rbp-A0h]
  __int64 v228; // [rsp+E8h] [rbp-A0h]
  int *v229; // [rsp+F0h] [rbp-98h]
  int v230; // [rsp+F8h] [rbp-90h]
  int v231; // [rsp+F8h] [rbp-90h]
  _QWORD *v232; // [rsp+F8h] [rbp-90h]
  __int64 v233; // [rsp+F8h] [rbp-90h]
  double v234; // [rsp+F8h] [rbp-90h]
  int v235; // [rsp+100h] [rbp-88h]
  int v236; // [rsp+100h] [rbp-88h]
  double v237; // [rsp+100h] [rbp-88h]
  double v238; // [rsp+108h] [rbp-80h]
  __int64 v239; // [rsp+110h] [rbp-78h]
  unsigned int v240; // [rsp+118h] [rbp-70h]
  bool v241; // [rsp+11Ch] [rbp-6Ch]
  int v242; // [rsp+11Ch] [rbp-6Ch]
  __int64 v243; // [rsp+120h] [rbp-68h]
  __int64 v244; // [rsp+128h] [rbp-60h]
  __int64 v245; // [rsp+130h] [rbp-58h]
  __int64 v246; // [rsp+138h] [rbp-50h]
  __int64 v247; // [rsp+140h] [rbp-48h]

  v4 = *((_QWORD **)this + 57);
  v5 = *((const double **)this + 8);
  v6 = *((const int **)this + 7);
  v195 = *((_QWORD *)this + 11);
  v209 = *((double *)this + 19);
  v191 = *((_QWORD *)this + 5);
  v197 = *((_QWORD *)this + 12);
  v7 = *((int **)this + 20);
  v181 = *((_QWORD *)this + 6);
  v8 = *((_DWORD *)this + 1);
  v9 = *(_DWORD *)this;
  v198 = v4;
  v216 = v7;
  v186 = v8;
  v217 = *((_QWORD *)this + 13);
  v10 = *((_QWORD **)this + 14);
  v208 = v10;
  if ( v8 && v10 != v4 )
  {
    v11 = v8 >> 3;
    if ( v11 <= 0 )
    {
      v19 = v4;
      v18 = *((_QWORD **)this + 14);
    }
    else
    {
      v12 = (unsigned int)(v11 - 1);
      v13 = *((__int64 **)this + 14);
      v14 = v12;
      v15 = &v10[8 * v12 + 8];
      do
      {
        v16 = *v13;
        v13 += 8;
        v4 += 8;
        *(v4 - 8) = v16;
        *(v4 - 7) = *(v13 - 7);
        *(v4 - 6) = *(v13 - 6);
        *(v4 - 5) = *(v13 - 5);
        *(v4 - 4) = *(v13 - 4);
        *(v4 - 3) = *(v13 - 3);
        *(v4 - 2) = *(v13 - 2);
        *(v4 - 1) = *(v13 - 1);
      }
      while ( v13 != v15 );
      v17 = (v14 + 1LL) << 6;
      v18 = (_QWORD *)((char *)v10 + v17);
      v19 = (_QWORD *)((char *)v198 + v17);
    }
    switch ( v186 % 8 )
    {
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_13;
      case 3:
        goto LABEL_12;
      case 4:
        goto LABEL_11;
      case 5:
        goto LABEL_10;
      case 6:
        goto LABEL_9;
      case 7:
        v19[6] = v18[6];
LABEL_9:
        v19[5] = v18[5];
LABEL_10:
        v19[4] = v18[4];
LABEL_11:
        v19[3] = v18[3];
LABEL_12:
        v19[2] = v18[2];
LABEL_13:
        v19[1] = v18[1];
LABEL_14:
        *v19 = *v18;
        break;
      default:
        break;
    }
  }
  v182 = *((_DWORD *)this + 109) & 1;
  v185 = *((_QWORD *)this + 58);
  if ( v9 <= 0 )
    return a2;
  v20 = 0;
  v214 = 1;
  v178 = (unsigned int)(v9 - 1) + 1LL;
  v21 = v5;
  v22 = 0;
  v23 = v21;
  do
  {
    while ( 1 )
    {
      v24 = *(int *)(v181 + 4 * v20);
      if ( !(_DWORD)v24 )
        goto LABEL_31;
      CoinSort_2<int,double>(
        &v6[*(int *)(v191 + 4 * v20)],
        &v6[*(int *)(v191 + 4 * v20) + v24],
        &v23[*(int *)(v191 + 4 * v20)]);
      v25 = v214;
      if ( v214 )
      {
        v26 = *(_DWORD *)(v181 + 4 * v20);
        v27 = *(double *)(v195 + 8 * v20);
        v28 = *(int *)(v191 + 4 * v20);
        v29 = v28 + v26;
        if ( *(double *)(v197 + 8 * v20) <= v27 )
        {
          if ( (int)v28 < v29 )
          {
            v117 = &v23[v28];
            v118 = &v6[v28];
            v119 = 0;
            v120 = (unsigned int)(v26 - 1) + 1LL;
            do
            {
              v121 = v118[v119];
              v122 = v117[v119++];
              *(double *)&v198[v121] = *(double *)&v198[v121] - v122 * v27;
            }
            while ( v120 != v119 );
          }
        }
        else if ( (int)v28 < v29 )
        {
          v30 = &v23[v28];
          v31 = &v6[v28];
          v32 = 0;
          v33 = (unsigned int)(v26 - 1) + 1LL;
          do
          {
            while ( 1 )
            {
              v35 = v30[v32];
              if ( v35 < 0.0 )
                break;
              v34 = v31[v32++];
              *(double *)&v198[v34] = *(double *)&v198[v34] - v35 * v27;
              if ( v33 == v32 )
                goto LABEL_25;
            }
            ++v32;
            v25 = 0;
          }
          while ( v33 != v32 );
LABEL_25:
          v214 = v25;
        }
      }
      if ( *((_BYTE *)this + 440) && (*(_BYTE *)(*((_QWORD *)this + 45) + v20) & 2) != 0 )
        goto LABEL_31;
      v36 = *((_QWORD *)this + 39);
      if ( !v36 )
        break;
      if ( *(_BYTE *)(v36 + v20) == 1 )
        goto LABEL_107;
LABEL_30:
      v37 = v22++;
      *(_DWORD *)(v185 + 4 * v37) = v20;
LABEL_31:
      if ( v178 == ++v20 )
        goto LABEL_32;
    }
    if ( !*((_BYTE *)this + 320) )
      goto LABEL_30;
LABEL_107:
    if ( v182 )
      goto LABEL_30;
    ++v20;
  }
  while ( v178 != v20 );
LABEL_32:
  v38 = v23;
  v39 = v22;
  v40 = v22 == 0;
  v41 = v38;
  if ( v40 )
    return a2;
  v42 = *((double **)this + 60);
  v43 = *((_QWORD *)this + 59);
  if ( !v42 )
  {
    if ( (unsigned __int64)v186 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v180 = (double *)operator new[](8LL * v186);
    coin_init_random_vec(v180, v186);
    v42 = v180;
  }
  v44 = (unsigned int)(v39 - 1) + 1LL;
  v45 = 0;
  do
  {
    while ( 1 )
    {
      v46 = *(int *)(v185 + 4 * v45);
      v47 = *(int *)(v191 + 4 * v46);
      v48 = *(_DWORD *)(v181 + 4 * v46);
      if ( (int)v47 < (int)v47 + v48 )
        break;
      *(_QWORD *)(v43 + 8 * v45++) = 0;
      if ( v44 == v45 )
        goto LABEL_39;
    }
    v49 = 0.0;
    v50 = &v6[v47];
    v51 = &v41[v47];
    v52 = 0;
    do
    {
      v53 = v42[v50[v52]] * v51[v52];
      ++v52;
      v49 = v49 + v53;
    }
    while ( (unsigned int)(v48 - 1) + 1LL != v52 );
    *(double *)(v43 + 8 * v45++) = v49;
  }
  while ( v44 != v45 );
LABEL_39:
  v183 = v42;
  CoinSort_2<double,int>(v43, v43 + 8LL * v39, v185);
  v243 = *((_QWORD *)this + 32);
  v244 = *((_QWORD *)this + 37);
  v245 = *((_QWORD *)this + 38);
  v246 = *((_QWORD *)this + 35);
  v247 = *((_QWORD *)this + 36);
  v239 = *((_QWORD *)this + 9);
  v54 = 4LL * v39;
  src = (char *)operator new[](56LL * v39);
  v212 = (CoinPresolveMatrix *)operator new[](v54);
  v213 = (CoinPresolveMatrix *)operator new[](v54);
  if ( v39 == 1 )
  {
    if ( v183 != *((double **)this + 60) )
      operator delete[](v183);
    operator delete[](src);
    operator delete[](v212);
    goto LABEL_55;
  }
  v199 = this;
  v179 = 0;
  v192 = -1;
  v55 = 1;
  v241 = 0;
  v240 = 0;
  v187 = (unsigned int)(v39 - 2) + 2LL;
  v215 = 0;
  v56 = v41;
  v210 = 0;
  v221 = v183;
  while ( 2 )
  {
    while ( 2 )
    {
      v184 = v55;
      if ( *(double *)(v43 + 8 * v55) != *(double *)(v43 + 8 * v55 - 8) )
      {
LABEL_45:
        ++v55;
        v179 = v184;
        if ( v187 == v55 )
        {
LABEL_46:
          v62 = v221;
          v63 = v199;
          goto LABEL_47;
        }
        continue;
      }
      break;
    }
    v57 = *(int *)(v185 + 4 * v55);
    v188 = *(_DWORD *)(v185 + 4 * v55);
    v58 = *(int *)(v185 + 4LL * v179);
    v190 = v58;
    v59 = (int *)(v181 + 4 * v57);
    v60 = (int *)(v181 + 4 * v58);
    v61 = *v59;
    if ( (_DWORD)v61 != *v60 )
    {
      v179 = v55;
      goto LABEL_43;
    }
    v200 = (int *)(v191 + 4 * v58);
    v70 = *v200;
    v71 = *(int *)(v191 + 4 * v57);
    v204 = (int *)(v191 + 4 * v57);
    v72 = v70 - v71;
    v193 = v61 + v71;
    if ( (int)v58 > v192 && (int)v61 > 1 )
    {
      v235 = v70 - v71;
      v230 = *(_DWORD *)(v191 + 4 * v57);
      v226 = (int *)(v181 + 4 * v57);
      v222 = *(int *)(v185 + 4 * v55);
      v218 = *v200;
      CoinSort_2<int,double>(&v6[(int)v70], &v6[(int)v70 + (__int64)(int)v61], &v56[(int)v70]);
      v71 = v230;
      v70 = v218;
      v72 = v235;
      v60 = (int *)(v181 + 4 * v58);
      v59 = v226;
      v57 = v222;
      v192 = v58;
    }
    if ( v188 > v192 && (int)v61 > 1 )
    {
      v236 = v72;
      v231 = v70;
      v229 = v60;
      v227 = v59;
      v223 = v57;
      v219 = v71;
      CoinSort_2<int,double>(&v6[(int)v71], &v6[(int)v71 + v61], &v56[(int)v71]);
      v71 = v219;
      v72 = v236;
      v60 = v229;
      v59 = v227;
      v57 = v223;
      v192 = v188;
      v70 = v231;
    }
    if ( (int)v71 >= v193 )
    {
      v77 = v71;
    }
    else
    {
      v73 = (int)v71;
      if ( v6[(int)v71] != v6[v70] || v56[v70] != v56[(int)v71] )
        goto LABEL_45;
      v74 = &v6[v72];
      v75 = &v56[v72];
      while ( 1 )
      {
        v77 = v73 + 1;
        if ( (int)v71 + (unsigned __int64)(unsigned int)(v193 + ~(_DWORD)v71) == v73 )
          break;
        if ( v6[v73 + 1] == v74[v73 + 1] )
        {
          v76 = v56[++v73];
          if ( v76 == v75[v73] )
            continue;
        }
        goto LABEL_45;
      }
    }
    if ( v193 != v77 )
      goto LABEL_45;
    v78 = *((_QWORD *)v199 + 39);
    if ( v78 && (*(_BYTE *)(v78 + v58) == 1) != (*(_BYTE *)(v78 + v57) == 1) )
      goto LABEL_43;
    v79 = 8 * v58;
    v80 = *(double *)(v195 + 8 * v58);
    v81 = 8 * v57;
    v220 = 2 * v57;
    v82 = *(double *)(8 * v57 + v195);
    v83 = (double *)(8 * v57 + v195);
    if ( v82 != 0.0 || v80 != 0.0 )
      goto LABEL_43;
    v84 = (_QWORD *)(v197 + v79);
    v224 = (double *)(v81 + v197);
    v85 = *(double *)(v81 + v197);
    v86 = *(double *)(v197 + 8 * v58);
    v232 = (_QWORD *)(v239 + v79);
    v87 = *(double *)(v239 + 8 * v58) * v209;
    v88 = v209 * *(double *)(8 * v57 + v239);
    v89 = v88;
    if ( v87 == v88 )
    {
      if ( v80 + v85 >= v86 + v82 )
      {
        v232 = (_QWORD *)(8 * v57 + v239);
        v84 = (_QWORD *)(v81 + v197);
        v224 = (double *)(v197 + v79);
        v79 = 8 * v57;
        v220 = 2 * v58;
        v60 = v59;
        v200 = v204;
        v85 = *(double *)(v197 + 8 * v58);
        v86 = *(double *)(v81 + v197);
        v123 = *(double *)(8 * v57 + v195);
        v83 = (double *)(v195 + 8 * v58);
        v190 = v57;
        v82 = *v83;
        v57 = v58;
        v80 = v123;
        v124 = v58;
        v184 = v179;
        LODWORD(v58) = v188;
        v188 = v124;
      }
      v228 = v57;
      v206 = v83;
      v238 = v85;
      v125 = &src[56 * v210];
      *(double *)v125 = v80;
      *((_QWORD *)v125 + 1) = *v84;
      *((double *)v125 + 2) = *v83;
      v126 = *v224;
      v127 = v188;
      *((_DWORD *)v125 + 8) = v58;
      *((double *)v125 + 3) = v126;
      v189 = v60;
      *((_DWORD *)v125 + 9) = v127;
      *((_DWORD *)v125 + 12) = *v60;
      v128 = presolve_dupmajor(v56, v6, *v60, *v200, -1);
      v129 = v189;
      v130 = v82 + v80;
      *(_QWORD *)&src[56 * v210 + 40] = v128;
      if ( v130 < -1.0e20 )
        v130 = -1.797693134862316e308;
      v131 = v86 + v238;
      *v206 = v130;
      if ( v131 > 1.0e20 )
        v131 = 1.797693134862316e308;
      *v224 = v131;
      v132 = *((_QWORD *)v199 + 24);
      if ( v216 )
      {
        *(double *)&v216[v220] = *(double *)&v216[v220] + *(double *)((char *)v216 + v79);
        if ( !v132 )
        {
          *v232 = 0;
          goto LABEL_129;
        }
LABEL_126:
        if ( (*(_BYTE *)(v132 + v228) & 7) == 1 || (*(_BYTE *)(v132 + v190) & 7) == 1 )
          *(_BYTE *)(v132 + v228) = *(_BYTE *)(v132 + v228) & 0xF8 | 1;
        *v232 = 0;
        if ( v216 )
LABEL_129:
          *(double *)((char *)v216 + v79) = v80;
      }
      else
      {
        if ( v132 )
          goto LABEL_126;
        *v232 = 0;
      }
      v133 = *v200;
      v134 = *v200 + *v189;
      if ( *v200 < v134 )
      {
        v135 = (int *)&v6[v133];
        v207 = v43;
        v136 = (unsigned __int64)&v6[v133 + 1 + (unsigned __int64)(unsigned int)(v134 - v133 - 1)];
        do
        {
          v137 = *v135;
          v138 = (_DWORD *)(v247 + 4 * v137);
          v139 = *(int *)(v246 + 4 * v137);
          v140 = v139 + *v138;
          v141 = (_DWORD *)(v245 + 4 * v139);
          if ( (int)v139 >= v140 || (_DWORD)v58 == *v141 )
          {
            v142 = *(int *)(v246 + 4 * v137);
          }
          else
          {
            v142 = v139 + 1;
            v143 = v245 + 4 * v139 + 4;
            while ( 1 )
            {
              v141 = (_DWORD *)v143;
              if ( v245 + 4 + 4 * ((unsigned int)(*v138 - 1) + v139) == v143 )
                break;
              v143 += 4;
              if ( (_DWORD)v58 == *v141 )
                break;
              ++v142;
            }
          }
          ++v135;
          v144 = *(_QWORD *)(v244 + 8LL * v140 - 8);
          *v141 = *(_DWORD *)(v245 + 4LL * v140 - 4);
          *(_QWORD *)(v244 + 8 * v142) = v144;
          --*v138;
        }
        while ( (int *)v136 != v135 );
        v129 = v189;
        v43 = v207;
      }
      *v129 = 0;
      v145 = *(_DWORD *)(v243 + v79);
      v146 = *(int *)(v243 + v79 + 4);
      if ( v145 >= 0 )
        *(_DWORD *)(v243 + 8LL * v145 + 4) = v146;
      if ( (int)v146 >= 0 )
        *(_DWORD *)(v243 + 8 * v146) = v145;
      *(_QWORD *)(v243 + v79) = 0xFC06BF56FC06BF56LL;
      v179 = v184;
      ++v210;
LABEL_43:
      if ( v187 == ++v55 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  if ( v214 )
  {
    if ( (int)v71 >= v193 )
    {
      v116 = 1.797693134862316e308;
    }
    else
    {
      v147 = (unsigned int)(~(_DWORD)v71 + v193);
      v148 = 1.797693134862316e308;
      v149 = &v6[v71];
      v150 = &v56[v71];
      v151 = 0;
      v152 = v147 + 1;
      do
      {
        v153 = *(double *)&v198[v149[v151]];
        if ( v150[v151] * v148 > v153 )
          v148 = v153 / v150[v151];
        ++v151;
      }
      while ( v152 != v151 );
      v116 = v148 - 0.000000001;
    }
    goto LABEL_151;
  }
  if ( !v241 )
  {
    v242 = v71;
    v203 = v57;
    v237 = *(double *)(v239 + 8 * v58) * v209;
    v234 = *(double *)(v81 + v197);
    CoinPresolveMatrix::recomputeSums(v199, -1);
    LODWORD(v71) = v242;
    v89 = v88;
    v87 = v237;
    v57 = v203;
    v85 = v234;
  }
  if ( v80 < -1.797693134862316e308 )
  {
    v201 = 2;
    v91 = 0.0;
    v90 = 1;
  }
  else
  {
    v201 = 1;
    v90 = 0;
    v91 = v80 + 0.0;
  }
  if ( v82 >= -1.797693134862316e308 )
  {
    v91 = v91 + v82;
    v201 = v90;
  }
  if ( v86 > 1.797693134862316e308 )
  {
    v92 = 2;
    v94 = 0.0;
    v93 = 1;
  }
  else
  {
    v92 = 1;
    v93 = 0;
    v94 = v86 + 0.0;
  }
  if ( v85 > 1.797693134862316e308 )
  {
    if ( (int)v71 < v193 )
    {
      v93 = v92;
      goto LABEL_86;
    }
    v116 = 1.797693134862316e308;
    v154 = v89 > v87;
    v155 = v89 > v87;
    v241 = v82 == 0.0 && v80 == 0.0;
    goto LABEL_152;
  }
  v94 = v94 + v85;
  if ( (int)v71 >= v193 )
  {
    v116 = 1.797693134862316e308;
    v241 = v82 == 0.0 && v80 == 0.0;
  }
  else
  {
LABEL_86:
    v95 = (int *)&v6[(int)v71];
    v96 = (double *)&v56[(int)v71];
    v205 = -1.797693134862316e308;
    v225 = v57;
    v97 = v193;
    v194 = 1.797693134862316e308;
    v98 = v201;
    v233 = v55;
    v202 = v6;
    v99 = (unsigned __int64)&v6[(int)v71 + 1 + (unsigned __int64)(unsigned int)(~(_DWORD)v71 + v97)];
    do
    {
      v100 = *v95;
      v101 = *v96;
      v102 = v98;
      v103 = v93;
      if ( *v96 > 0.0 )
        v102 = v93;
      if ( v101 > 0.0 )
        v103 = v98;
      v104 = *(_DWORD *)(*((_QWORD *)v199 + 61) + 4 * v100) - v102;
      v105 = *(_DWORD *)(*((_QWORD *)v199 + 63) + 4 * v100) - v103;
      if ( v104 <= 0 || v105 <= 0 )
      {
        v106 = v91 * v101;
        v107 = *(double *)(*((_QWORD *)v199 + 62) + 8 * v100);
        v108 = v101 * v94;
        v109 = *(double *)(*((_QWORD *)v199 + 64) + 8 * v100);
        if ( v101 <= 0.0 )
        {
          v110 = v109 - v108;
          v111 = v107 - v106;
        }
        else
        {
          v110 = v109 - v106;
          v111 = v107 - v108;
        }
        if ( v101 <= 0.00001 )
        {
          if ( v101 < -0.00001 )
          {
            if ( !v105 )
            {
              v167 = *(double *)&v208[v100];
              if ( v167 < 1.0e10 )
              {
                v168 = v167 - v110;
                if ( v205 * v101 > v168 )
                  v205 = v168 / v101;
              }
            }
            if ( !v104 )
            {
              v169 = *(double *)(v217 + 8 * v100);
              if ( v169 > -1.0e10 )
              {
                v170 = v169 - v111;
                if ( v170 > v194 * v101 )
                  v194 = v170 / v101;
              }
            }
          }
        }
        else
        {
          if ( !v105 )
          {
            v112 = *(double *)&v208[v100];
            if ( v112 < 1.0e10 )
            {
              v113 = v112 - v110;
              if ( v194 * v101 > v113 )
                v194 = v113 / v101;
            }
          }
          if ( !v104 )
          {
            v114 = *(double *)(v217 + 8 * v100);
            if ( v114 > -1.0e10 )
            {
              v115 = v114 - v111;
              if ( v115 > v205 * v101 )
                v205 = v115 / v101;
            }
          }
        }
      }
      ++v95;
      ++v96;
    }
    while ( (int *)v99 != v95 );
    v57 = v225;
    v6 = v202;
    v55 = v233;
    v116 = v194 - 0.000000001;
    v241 = v82 == 0.0 && v80 == 0.0;
  }
LABEL_151:
  v154 = v89 > v87;
  v155 = v89 > v87;
  if ( v85 >= 1.797693134862316e308 )
LABEL_152:
    v155 |= 2u;
  if ( v82 <= -1.797693134862316e308 )
    v155 |= 4u;
  if ( v86 >= 1.797693134862316e308 )
    v155 |= 8u;
  if ( v80 <= -1.797693134862316e308 )
    v155 |= 0x10u;
  if ( v154 && v86 >= v116 )
  {
    v155 |= 8u;
  }
  else if ( v87 > v89 && v85 >= v116 )
  {
    v155 |= 2u;
  }
  v156 = v155 & 0xD;
  if ( v156 == 1 )
    goto LABEL_45;
  v157 = v155 & 0x13;
  if ( (v155 & 0x13) == 0 )
    goto LABEL_45;
  if ( v156 != 13 && v157 != 18 )
  {
    v158 = v156 == 5 || v157 == 2;
    if ( v158 )
    {
      v188 = v58;
      v85 = v86;
      v155 = (4 * (_BYTE)v155) & 0x18 | (v155 >> 2) & 6 | ((v155 & 1) == 0);
      v190 = v57;
      v82 = v80;
      v157 = v155 & 0x13;
      v57 = v58;
      v159 = v220 * 4;
      v220 = 2 * v58;
      v79 = v159;
    }
    if ( v157 == 16 )
    {
      *((_DWORD *)v213 + (int)v240) = v188;
      v171 = *((_QWORD *)v199 + 24);
      if ( v171 )
      {
        v172 = (_BYTE *)(v171 + v190);
        v173 = *(_BYTE *)(v171 + v190);
        if ( (v173 & 7) == 1 || (v174 = (char *)(v57 + v171), v175 = *v174, (*v174 & 7) == 1) )
        {
          *v172 = v173 & 0xF8 | 1;
          v174 = (char *)(v57 + *((_QWORD *)v199 + 24));
          v175 = *v174;
        }
        *v174 = v175 & 0xF8 | 2;
      }
      if ( v216 )
      {
        v176 = v85 - *(double *)&v216[v220];
        *(double *)&v216[v220] = v85;
        *(double *)((char *)v216 + v79) = *(double *)((char *)v216 + v79) - v176;
      }
      v40 = !v158;
      v177 = v179;
      if ( !v40 )
        v177 = v184;
      ++v240;
      v179 = v177;
    }
    else if ( (v155 & 0xD) == 9 )
    {
      *((_DWORD *)v212 + (int)v215) = v188;
      v160 = *((_QWORD *)v199 + 24);
      if ( v160 )
      {
        v161 = (_BYTE *)(v160 + v190);
        v162 = *(_BYTE *)(v160 + v190);
        if ( (v162 & 7) == 1 || (v163 = (char *)(v57 + v160), v164 = *v163, (*v163 & 7) == 1) )
        {
          *v161 = v162 & 0xF8 | 1;
          v163 = (char *)(v57 + *((_QWORD *)v199 + 24));
          v164 = *v163;
        }
        *v163 = v164 & 0xF8 | 3;
      }
      if ( v216 )
      {
        v165 = v82 - *(double *)&v216[v220];
        *(double *)&v216[v220] = v82;
        *(double *)((char *)v216 + v79) = *(double *)((char *)v216 + v79) - v165;
      }
      v40 = !v158;
      v166 = v179;
      if ( !v40 )
        v166 = v184;
      ++v215;
      v179 = v166;
    }
    goto LABEL_43;
  }
  v63 = v199;
  v62 = v221;
  *((_DWORD *)v199 + 86) = 2;
LABEL_47:
  if ( v62 != *((double **)v63 + 60) )
    operator delete[](v62);
  if ( v210 )
  {
    v64 = (void *)operator new[](56LL * v210);
    memcpy(v64, src, 56LL * v210);
    v65 = operator new(0x20u);
    v66 = a2;
    *((_DWORD *)v63 + 109) |= 0x80000000;
    *(_DWORD *)(v65 + 16) = v210;
    *(_QWORD *)(v65 + 24) = v64;
    a2 = (CoinPresolveMatrix *)v65;
    *(_QWORD *)(v65 + 8) = v66;
    *(_QWORD *)v65 = &off_4D1C68;
  }
  operator delete[](src);
  if ( v215 )
    a2 = (CoinPresolveMatrix *)make_fixed_action::presolve(v63, v212, (int *)v215, 1, (bool)a2, v67);
  operator delete[](v212);
  if ( v240 )
    a2 = (CoinPresolveMatrix *)make_fixed_action::presolve(v63, v213, (int *)v240, 0, (bool)a2, v68);
LABEL_55:
  operator delete[](v213);
  return a2;
}

