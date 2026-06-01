ClpModel *__fastcall ClpSimplexOther::crunch(
        ClpSimplexOther *this,
        double *a2,
        int *a3,
        int *a4,
        int *a5,
        char a6,
        bool a7)
{
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 (*v12)(void); // rdx
  __int64 v13; // r13
  __int64 (*v14)(void); // rdx
  __int64 (*v15)(void); // rax
  int v16; // edx
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v19; // rsi
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // rdx
  double v23; // xmm3_8
  double v24; // xmm0_8
  __int64 v25; // rsi
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // r11
  __int64 v29; // rdi
  int v30; // esi
  int *v31; // rsi
  int v32; // esi
  int v33; // r15d
  int v34; // edi
  double v35; // xmm2_8
  __int64 v36; // rax
  int v37; // r8d
  int v38; // r14d
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // edx
  double v42; // xmm0_8
  double v43; // xmm1_8
  void (*v44)(void); // rax
  ClpPackedMatrix *v45; // rdi
  __int64 (__fastcall *v46)(ClpPackedMatrix *); // rax
  double v47; // xmm0_8
  CoinMessageHandler *v48; // rax
  CoinMessageHandler *v49; // rax
  CoinMessageHandler *v50; // rax
  CoinMessageHandler *v51; // rax
  CoinMessageHandler *v52; // rax
  CoinMessageHandler *v53; // rax
  __int64 v54; // rax
  ClpModel *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rax
  double v59; // xmm0_8
  __int64 v60; // rdx
  double v61; // xmm0_8
  __int64 v62; // r9
  int v63; // eax
  int v64; // r14d
  __int64 v65; // r15
  int v66; // ecx
  __int64 v67; // rdi
  __m128d v68; // xmm4
  __m128d v69; // xmm0
  __int64 v70; // r11
  int v71; // edx
  double *v72; // r10
  double *v73; // r8
  __int64 v74; // rax
  double v75; // xmm8_8
  __m128d v76; // xmm1
  double v77; // xmm8_8
  __m128d v78; // xmm4
  unsigned __int64 v79; // xmm4_8
  double v80; // xmm4_8
  __m128d v81; // xmm8
  double v82; // xmm5_8
  double v83; // xmm6_8
  double v84; // xmm1_8
  double v85; // xmm0_8
  __int64 v86; // rax
  int v87; // eax
  _QWORD *v88; // rdi
  __int64 v89; // rax
  __int64 (__fastcall *v90)(ClpPackedMatrix *); // rdx
  __int64 v91; // r11
  __int64 (__fastcall *v92)(ClpPackedMatrix *); // rdx
  __int64 v93; // rdx
  __int64 v94; // r13
  __int64 (__fastcall *v95)(ClpPackedMatrix *); // rax
  __int64 v96; // r10
  int *v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // r15
  __int64 v100; // rcx
  int v101; // eax
  double v102; // xmm9_8
  double v103; // xmm8_8
  __int64 v104; // rax
  __int64 v105; // r9
  __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // rcx
  unsigned __int64 v109; // rax
  int *v110; // rdi
  double *v111; // rax
  __int64 v112; // rcx
  double *v113; // rdx
  double v114; // xmm0_8
  double v115; // xmm1_8
  __int64 v116; // rax
  double v117; // xmm10_8
  int v119; // ecx
  __int64 v120; // rax
  __int64 v121; // r11
  __int64 v122; // rdi
  __int64 v123; // r8
  __int64 v124; // rax
  __int64 v125; // rcx
  double v126; // xmm1_8
  _BYTE *v127; // r11
  char v128; // al
  int *v129; // r11
  int v130; // r10d
  double v131; // xmm1_8
  char v132; // dl
  char v133; // al
  __m128d v134; // xmm8
  __m128d v135; // xmm8
  __int64 v136; // rax
  __int64 v137; // r9
  __int64 v138; // r8
  __int64 v139; // rdx
  __int64 v140; // rcx
  double v141; // xmm0_8
  unsigned __int64 v142; // rax
  double *v143; // rdi
  double *v144; // rax
  __int64 v145; // r9
  __int64 v146; // r8
  __int64 v147; // rax
  __int64 v148; // rcx
  double v149; // xmm0_8
  double v150; // xmm10_8
  unsigned __int64 v151; // rdx
  double *v152; // rdi
  double *v153; // rdx
  __int64 v154; // r9
  __int64 v155; // r8
  __int64 v156; // rax
  __int64 v157; // rcx
  double v158; // xmm0_8
  unsigned __int64 v159; // rdx
  double *v160; // rdi
  double *v161; // rdx
  bool v162; // cc
  double v163; // xmm0_8
  int v164; // edi
  double *v165; // rax
  __int64 v166; // rcx
  double *v167; // rsi
  double *v168; // rax
  __int64 v169; // rdx
  int *v170; // rax
  int *v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rdx
  int v176; // r8d
  __int64 v177; // rdi
  int *v178; // rax
  int v179; // esi
  int *v180; // rax
  double *v181; // rax
  double *v182; // rax
  __int64 v183; // rax
  __int64 v184; // rcx
  double v185; // xmm4_8
  double v186; // xmm5_8
  __int64 v187; // rdx
  int v188; // r8d
  __m128d v189; // xmm7
  __int64 v190; // r11
  __int64 v191; // r9
  __int64 v192; // r14
  __m128d v193; // xmm6
  __int64 v194; // rdx
  double v195; // xmm1_8
  double v196; // xmm0_8
  double v197; // xmm2_8
  __int64 v198; // r8
  double v199; // xmm0_8
  double v200; // xmm1_8
  double v201; // xmm1_8
  double v202; // xmm1_8
  __m128d v203; // xmm1
  __m128d v204; // xmm0
  __m128d v205; // xmm0
  __m128d v206; // xmm0
  __m128d v207; // xmm2
  __m128d v208; // xmm2
  double v209; // xmm1_8
  double v210; // xmm0_8
  __int64 v211; // r8
  double v212; // xmm5_8
  double v213; // xmm4_8
  unsigned __int64 v214; // rcx
  double v215; // xmm2_8
  double *v216; // r14
  double *v217; // rcx
  __int64 v218; // rax
  __int64 v220; // [rsp+0h] [rbp-B0h]
  int v221; // [rsp+8h] [rbp-A8h]
  int v224; // [rsp+10h] [rbp-A0h]
  __int64 v226; // [rsp+20h] [rbp-90h]
  double v227; // [rsp+20h] [rbp-90h]
  __int64 v228; // [rsp+20h] [rbp-90h]
  __int64 v229; // [rsp+28h] [rbp-88h]
  __int64 v230; // [rsp+28h] [rbp-88h]
  __int64 v231; // [rsp+38h] [rbp-78h]
  __int64 v232; // [rsp+40h] [rbp-70h]
  __int64 v233; // [rsp+48h] [rbp-68h]
  int v234; // [rsp+48h] [rbp-68h]
  __int64 v235; // [rsp+48h] [rbp-68h]
  double v236; // [rsp+50h] [rbp-60h]
  int *v237; // [rsp+58h] [rbp-58h]
  __int64 v238; // [rsp+58h] [rbp-58h]
  __int64 v239; // [rsp+58h] [rbp-58h]
  int v240; // [rsp+60h] [rbp-50h]
  ClpModel *v241; // [rsp+60h] [rbp-50h]
  int *v243; // [rsp+68h] [rbp-48h]
  int *v244; // [rsp+68h] [rbp-48h]
  char v245[56]; // [rsp+78h] [rbp-38h] BYREF

  v9 = *((_QWORD **)this + 24);
  v10 = (_QWORD *)*v9;
  v11 = *(__int64 (**)(void))(*v9 + 40LL);
  if ( (char *)v11 == (char *)ClpPackedMatrix::getElements )
  {
    v231 = *(_QWORD *)(v9[11] + 32LL);
  }
  else
  {
    v174 = v11();
    v9 = *((_QWORD **)this + 24);
    v231 = v174;
    v10 = (_QWORD *)*v9;
  }
  v12 = (__int64 (*)(void))v10[6];
  if ( (char *)v12 == (char *)ClpPackedMatrix::getIndices )
  {
    v13 = *(_QWORD *)(v9[11] + 40LL);
  }
  else
  {
    v173 = v12();
    v9 = *((_QWORD **)this + 24);
    v13 = v173;
    v10 = (_QWORD *)*v9;
  }
  v14 = (__int64 (*)(void))v10[7];
  if ( (char *)v14 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v233 = *(_QWORD *)(v9[11] + 48LL);
  }
  else
  {
    v172 = v14();
    v9 = *((_QWORD **)this + 24);
    v233 = v172;
    v10 = (_QWORD *)*v9;
  }
  v15 = (__int64 (*)(void))v10[8];
  if ( (char *)v15 == (char *)ClpPackedMatrix::getVectorLengths )
    v232 = *(_QWORD *)(v9[11] + 56LL);
  else
    v232 = v15();
  v16 = *((_DWORD *)this + 26);
  if ( v16 )
  {
    v164 = v16 / 8;
    if ( v16 / 8 > 0 )
    {
      v165 = a2;
      v166 = (unsigned int)(v164 - 1);
      v167 = &a2[8 * v166 + 8];
      do
      {
        *v165 = 0.0;
        v165[1] = 0.0;
        v165 += 8;
        *(v165 - 6) = 0.0;
        *(v165 - 5) = 0.0;
        *(v165 - 4) = 0.0;
        *(v165 - 3) = 0.0;
        *(v165 - 2) = 0.0;
        *(v165 - 1) = 0.0;
      }
      while ( v165 != v167 );
      v168 = &a2[8 * (int)v166 + 8];
      v169 = (unsigned int)(v16 % 8);
      switch ( (int)v169 )
      {
        case 1:
          goto LABEL_168;
        case 2:
          goto LABEL_182;
        case 3:
          goto LABEL_184;
        case 4:
          goto LABEL_192;
        case 5:
          goto LABEL_195;
        case 6:
          goto LABEL_197;
        case 7:
          goto LABEL_270;
        default:
          goto LABEL_170;
      }
    }
    v169 = (unsigned int)(v16 % 8);
    switch ( (int)v169 )
    {
      case 1:
        v168 = a2;
        goto LABEL_168;
      case 2:
        v168 = a2;
LABEL_182:
        v168[1] = 0.0;
        goto LABEL_168;
      case 3:
        v168 = a2;
LABEL_184:
        v168[2] = 0.0;
        goto LABEL_185;
      case 4:
        v168 = a2;
LABEL_192:
        v168[3] = 0.0;
        goto LABEL_193;
      case 5:
        v168 = a2;
        goto LABEL_195;
      case 6:
        v168 = a2;
        goto LABEL_197;
      case 7:
        v168 = a2;
LABEL_270:
        v168[6] = 0.0;
        v169 = 7;
LABEL_197:
        v168[5] = 0.0;
LABEL_195:
        v168[4] = 0.0;
        v168[3] = 0.0;
LABEL_193:
        v168[2] = 0.0;
LABEL_185:
        v168[1] = 0.0;
LABEL_168:
        *v168 = 0.0;
        if ( v164 <= 0 )
        {
          v171 = a3;
        }
        else
        {
          LODWORD(v166) = v164 - 1;
LABEL_170:
          v170 = a3;
          do
          {
            *(_OWORD *)v170 = 0;
            v170 += 8;
            *((_OWORD *)v170 - 1) = 0;
          }
          while ( &a3[8 * (unsigned int)v166 + 8] != v170 );
          v171 = &a3[8 * (unsigned int)v166 + 8];
        }
        switch ( v169 )
        {
          case 1LL:
            goto LABEL_180;
          case 2LL:
            goto LABEL_179;
          case 3LL:
            goto LABEL_178;
          case 4LL:
            goto LABEL_177;
          case 5LL:
            goto LABEL_176;
          case 6LL:
            goto LABEL_175;
          case 7LL:
            v171[6] = 0;
LABEL_175:
            v171[5] = 0;
LABEL_176:
            v171[4] = 0;
LABEL_177:
            v171[3] = 0;
LABEL_178:
            v171[2] = 0;
LABEL_179:
            v171[1] = 0;
LABEL_180:
            *v171 = 0;
            break;
          default:
            goto LABEL_10;
        }
        break;
      default:
        break;
    }
  }
LABEL_10:
  v226 = 0;
  v17 = *((_DWORD *)this + 27);
  v237 = &a4[v17];
  v18 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))this + 20);
  if ( v18 )
  {
    v226 = (**v18)(v18, 0, 0, v245, 0, 2);
    v17 = *((_DWORD *)this + 27);
  }
  if ( v17 > 0 )
  {
    v229 = *((_QWORD *)this + 15);
    v19 = 0;
    v20 = *((_QWORD *)this + 22);
    v21 = *((_QWORD *)this + 23);
    v22 = 0;
    v23 = 0.0;
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = *(double *)(v21 + 8 * v22);
        if ( v24 > *(double *)(v20 + 8 * v22) || (*(_BYTE *)(*((_QWORD *)this + 33) + v22) & 7) == 1 )
          break;
        v237[v22] = -1;
        *(double *)(v229 + 8 * v22) = v24;
        if ( v24 != 0.0 )
        {
          v119 = *(_DWORD *)(v232 + 4 * v22);
          v120 = *(int *)(v233 + 4 * v22);
          v23 = v23 + *(double *)(v226 + 8 * v22) * v24;
          if ( (int)v120 < (int)v120 + v119 )
          {
            v121 = v13 + 4 * v120;
            v122 = (unsigned int)(v119 - 1) + 1LL;
            v123 = v231 + 8 * v120;
            v124 = 0;
            do
            {
              v125 = *(int *)(v121 + 4 * v124);
              v126 = *(double *)(v123 + 8 * v124++);
              a2[v125] = v126 * v24 + a2[v125];
            }
            while ( v122 != v124 );
          }
        }
        if ( *((_DWORD *)this + 27) <= (int)++v22 )
        {
LABEL_27:
          v227 = v23;
          v33 = v19;
          goto LABEL_28;
        }
      }
      v237[v22] = v19;
      v240 = v19 + 1;
      a4[v19] = v22;
      v25 = *(int *)(v233 + 4 * v22);
      v26 = v25 + *(_DWORD *)(v232 + 4 * v22);
      if ( (int)v25 < v26 )
        break;
LABEL_26:
      ++v22;
      v19 = v240;
      if ( *((_DWORD *)this + 27) <= (int)v22 )
        goto LABEL_27;
    }
    v27 = (int)v25 + 1;
    v28 = v231 + 8 * v25 - 8 * v27;
    v29 = v13 + -4 * v27 + 4 * v25;
    while ( 1 )
    {
      v31 = &a3[*(int *)(v29 + 4 * v27)];
      if ( !*v31 )
        break;
      if ( *v31 >= 0 )
      {
LABEL_22:
        v30 = v27++;
        if ( v26 <= v30 )
          goto LABEL_26;
      }
      else
      {
        *v31 = 2;
        v32 = v27;
        v26 = *(_DWORD *)(v233 + 4 * v22) + *(_DWORD *)(v232 + 4 * v22);
        ++v27;
        if ( v26 <= v32 )
          goto LABEL_26;
      }
    }
    if ( *(double *)(v28 + 8 * v27) != 0.0 )
    {
      *v31 = ~(_DWORD)v22;
      v26 = *(_DWORD *)(v233 + 4 * v22) + *(_DWORD *)(v232 + 4 * v22);
    }
    goto LABEL_22;
  }
  v33 = 0;
  v227 = 0.0;
LABEL_28:
  v34 = *((_DWORD *)this + 26);
  v35 = *((double *)this + 4);
  v236 = v35;
  *a5 = 2 * v34;
  if ( v34 <= 0 )
  {
    v38 = 0;
    goto LABEL_39;
  }
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = (unsigned int)(v34 - 1) + 1LL;
  do
  {
    while ( 1 )
    {
      v41 = a3[v36];
      if ( v41 > 0 )
      {
        v40 = v38++;
        a3[v40] = v36;
        goto LABEL_31;
      }
      v42 = *(double *)(*((_QWORD *)this + 18) + 8 * v36);
      if ( !v41 )
        break;
      if ( v42 == *(double *)(*((_QWORD *)this + 19) + 8 * v36)
        || (*(_BYTE *)(*((_QWORD *)this + 33) + (int)v36 + *((_DWORD *)this + 27)) & 7) == 1 )
      {
        v129 = a5;
        v130 = *a5 - 1;
      }
      else
      {
        if ( !a6 )
        {
          v175 = v38++;
          a3[v175] = v36;
          goto LABEL_31;
        }
        v129 = a5;
        v130 = *a5 - 1;
      }
      *v129 = v130;
      a3[v130] = v36;
      a3[v34 + *v129] = ~v41;
LABEL_31:
      if ( v39 == ++v36 )
        goto LABEL_38;
    }
    v43 = a2[v36];
    if ( v42 - v35 > v43 )
    {
      v37 = 1;
      goto LABEL_31;
    }
    if ( v43 > *(double *)(*((_QWORD *)this + 19) + 8 * v36) + v35 )
      v37 = 1;
    ++v36;
  }
  while ( v39 != v36 );
LABEL_38:
  if ( v37 )
    return nullptr;
LABEL_39:
  v241 = (ClpModel *)operator new(0x6F0u);
  ClpSimplex::ClpSimplex(v241, this, v38, a3, v33, a4, 1, 0, 0);
  ClpSimplex::setDualBound(v241, *((double *)this + 98));
  ClpSimplex::setInfeasibilityCost(v241, *((double *)this + 113));
  ClpModel::setSpecialOptions(v241, *((_DWORD *)this + 84));
  ClpSimplex::setPerturbation(v241, *((_DWORD *)this + 327));
  ClpSimplex::defaultFactorizationFrequency(v241);
  *((_QWORD *)v241 + 97) = *((_QWORD *)this + 97);
  if ( !v38 || !v33 )
    a7 = 0;
  v44 = *(void (**)(void))(**((_QWORD **)this + 24) + 16LL);
  if ( (char *)v44 != (char *)ClpPackedMatrix::getNumElements )
    v44();
  v45 = *((ClpPackedMatrix **)v241 + 24);
  v46 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v45 + 16LL);
  if ( v46 != ClpPackedMatrix::getNumElements )
    v46(v45);
  v47 = *((double *)this + 5) - v227;
  ClpModel::setObjectiveOffset(v241, v47);
  v48 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)this + 43),
                                86,
                                (ClpSimplexOther *)((char *)this + 416));
  v49 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v48);
  v50 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v49);
  v51 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v50);
  v52 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v51);
  v53 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v52);
  v54 = CoinMessageHandler::operator<<(v53);
  CoinMessageHandler::operator<<(v54, 0, v47);
  v55 = v241;
  v56 = *((_QWORD *)v241 + 18);
  v57 = *((_QWORD *)v241 + 19);
  *((double *)v241 + 9) = (*(double *)this * *((double *)this + 9) - *((double *)this + 5) + *((double *)v241 + 5))
                        / *(double *)v241;
  if ( v38 )
  {
    v58 = 0;
    do
    {
      v59 = *(double *)(v56 + 8 * v58);
      v60 = a3[v58];
      if ( v59 > -1.0e20 )
        *(double *)(v56 + 8 * v58) = v59 - a2[(int)v60];
      v61 = *(double *)(v57 + 8 * v58);
      if ( v61 < 1.0e20 )
        *(double *)(v57 + 8 * v58) = v61 - a2[v60];
      ++v58;
    }
    while ( (unsigned int)(v38 - 1) + 1LL != v58 );
    v55 = v241;
  }
  v228 = *((_QWORD *)v55 + 23);
  v230 = *((_QWORD *)v55 + 22);
  v62 = *a5;
  v63 = *((_DWORD *)this + 26);
  v220 = *((_QWORD *)this + 34);
  if ( (int)v62 >= 2 * v63 )
    goto LABEL_90;
  v224 = v38;
  v221 = v33;
  v64 = 0;
  v65 = *((_QWORD *)this + 34);
  while ( 2 )
  {
    v66 = a3[v62];
    v67 = a3[(int)v62 + v63];
    v68 = (__m128d)*(unsigned __int64 *)(*((_QWORD *)this + 18) + 8LL * v66);
    if ( v68.m128d_f64[0] > -1.0e20 )
      v68.m128d_f64[0] = v68.m128d_f64[0] - a2[v66];
    v69 = (__m128d)*(unsigned __int64 *)(*((_QWORD *)this + 19) + 8LL * v66);
    if ( v69.m128d_f64[0] < 1.0e20 )
      v69.m128d_f64[0] = v69.m128d_f64[0] - a2[v66];
    v70 = v237[v67];
    v71 = *(_DWORD *)(v232 + 4 * v67);
    v72 = (double *)(v230 + 8 * v70);
    v73 = (double *)(v228 + 8 * v70);
    v74 = *(int *)(v233 + 4 * v67);
    v57 = (unsigned int)(v74 + v71);
    if ( (int)v74 >= (int)v57 )
    {
LABEL_65:
      v75 = 0.0;
    }
    else
    {
      if ( v66 != *(_DWORD *)(v13 + 4 * v74) )
      {
        v57 = ++v74 + (unsigned int)(v71 - 1);
        while ( v57 != v74 )
        {
          if ( *(_DWORD *)(v13 + 4 * (v74 + 1) - 4) == v66 )
            goto LABEL_128;
          ++v74;
        }
        goto LABEL_65;
      }
LABEL_128:
      v57 = v231;
      v75 = *(double *)(v231 + 8 * v74);
      if ( v75 > 0.0 )
      {
        v76 = (__m128d)0xFFEFFFFFFFFFFFFFLL;
        if ( v68.m128d_f64[0] > -1.0e20 )
        {
          v68.m128d_f64[0] = v68.m128d_f64[0] / v75;
          v76 = v68;
        }
        if ( v69.m128d_f64[0] < 1.0e20 )
        {
          v69.m128d_f64[0] = v69.m128d_f64[0] / v75;
          goto LABEL_70;
        }
LABEL_127:
        v69 = (__m128d)0x7FEFFFFFFFFFFFFFuLL;
        goto LABEL_70;
      }
    }
    v76 = (__m128d)0xFFEFFFFFFFFFFFFFLL;
    if ( v69.m128d_f64[0] < 1.0e20 )
    {
      v76.m128d_f64[1] = 0.0;
      v76.m128d_f64[0] = v69.m128d_f64[0] / v75;
    }
    if ( v68.m128d_f64[0] <= -1.0e20 )
      goto LABEL_127;
    v68.m128d_f64[0] = v68.m128d_f64[0] / v75;
    v69 = v68;
LABEL_70:
    if ( v65 && *(_BYTE *)(v65 + v67) )
    {
      v77 = v76.m128d_f64[0];
      if ( fabs(v76.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v78 = 0;
        v78.m128d_f64[0] = (double)(int)v76.m128d_f64[0];
        *(_QWORD *)&v77 = COERCE_UNSIGNED_INT64(
                            v78.m128d_f64[0]
                          - COERCE_DOUBLE(
                              COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v78, v76).m128d_f64[0]))
                            & 0x3FF0000000000000LL))
                        | *(_QWORD *)&v76.m128d_f64[0] & 0x8000000000000000LL;
      }
      if ( 10.0 * v35 > v76.m128d_f64[0] - v77 )
      {
        v76.m128d_f64[0] = v77;
      }
      else
      {
        v79 = *(_QWORD *)&v76.m128d_f64[0];
        if ( fabs(v76.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v135.m128d_f64[0] = (double)(int)v76.m128d_f64[0];
          v79 = COERCE_UNSIGNED_INT64(
                  COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v76, v135).m128d_f64[0] & 0x3FF0000000000000LL)
                + v135.m128d_f64[0])
              | *(_QWORD *)&v76.m128d_f64[0] & 0x8000000000000000LL;
        }
        *(_QWORD *)&v76.m128d_f64[0] = v79;
      }
      v80 = v69.m128d_f64[0];
      if ( fabs(v69.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v81.m128d_f64[0] = (double)(int)v69.m128d_f64[0];
        *(_QWORD *)&v80 = COERCE_UNSIGNED_INT64(
                            COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v69, v81).m128d_f64[0] & 0x3FF0000000000000LL)
                          + v81.m128d_f64[0])
                        | *(_QWORD *)&v69.m128d_f64[0] & 0x8000000000000000LL;
      }
      if ( 10.0 * v35 <= v80 - v69.m128d_f64[0] )
      {
        v80 = v69.m128d_f64[0];
        if ( fabs(v69.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v134 = 0;
          v134.m128d_f64[0] = (double)(int)v69.m128d_f64[0];
          *(_QWORD *)&v80 = COERCE_UNSIGNED_INT64(
                              v134.m128d_f64[0]
                            - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v134, v69).m128d_f64[0] & 0x3FF0000000000000LL))
                          | *(_QWORD *)&v69.m128d_f64[0] & 0x8000000000000000LL;
        }
      }
      v69.m128d_f64[0] = v80;
    }
    v82 = fmin(*v73, v69.m128d_f64[0]);
    v83 = fmax(*v72, v76.m128d_f64[0]);
    *v72 = v83;
    v84 = fmax(v83, v82);
    *v73 = v84;
    v85 = v84;
    if ( v83 > v35 + v82 )
      v64 = 1;
    v86 = *((_QWORD *)this + 33);
    if ( (*(_BYTE *)(v86 + *((_DWORD *)this + 27) + v66) & 7) != 1 && (*(_BYTE *)(v86 + v67) & 7) == 1 )
    {
      v127 = (_BYTE *)(*((_QWORD *)v241 + 33) + v70);
      v128 = *v127 & 0xF8;
      if ( *v72 == v84 )
      {
        *v127 = v128 | 5;
      }
      else
      {
        v131 = *(double *)(*((_QWORD *)this + 15) + 8 * v67);
        v132 = v128 | 3;
        v133 = v128 | 2;
        if ( fabs(v131 - v85) > fabs(v131 - *v72) )
          v133 = v132;
        *v127 = v133;
      }
    }
    v63 = *((_DWORD *)this + 26);
    ++v62;
    v56 = (unsigned int)(2 * v63);
    if ( (int)v56 > (int)v62 )
      continue;
    break;
  }
  v87 = v64;
  v33 = v221;
  v38 = v224;
  if ( v87 )
    goto LABEL_120;
LABEL_90:
  if ( !v220 || !a7 )
    return v241;
  v243 = *((int **)v241 + 16);
  v88 = *((_QWORD **)v241 + 24);
  v89 = *v88;
  v90 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v88 + 40LL);
  if ( v90 == ClpPackedMatrix::getElements )
  {
    v91 = *(_QWORD *)(v88[11] + 32LL);
  }
  else
  {
    v91 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(ClpPackedMatrix *), __int64))v90)(
            v88,
            v57,
            v90,
            v56);
    v88 = *((_QWORD **)v241 + 24);
    v89 = *v88;
  }
  v92 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v89 + 48);
  if ( v92 == ClpPackedMatrix::getIndices )
  {
    v93 = v88[11];
    v94 = *(_QWORD *)(v93 + 40);
  }
  else
  {
    v239 = v91;
    v94 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(ClpPackedMatrix *), __int64))v92)(
            v88,
            v57,
            v92,
            v56);
    v91 = v239;
    v88 = *((_QWORD **)v241 + 24);
    v89 = *v88;
  }
  v95 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v89 + 56);
  if ( v95 == ClpPackedMatrix::getVectorStarts )
  {
    v96 = *(_QWORD *)(v88[11] + 48LL);
  }
  else
  {
    v238 = v91;
    v218 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64))v95)(v88, v57, v93, v56);
    v91 = v238;
    v96 = v218;
  }
  if ( v38 )
  {
    v176 = v38 >> 3;
    if ( v38 >> 3 )
    {
      v177 = (unsigned int)(v176 - 1);
      v178 = v243;
      do
      {
        *(_QWORD *)v178 = 0;
        *((_QWORD *)v178 + 1) = 0;
        v178 += 16;
        *((_QWORD *)v178 - 6) = 0;
        *((_QWORD *)v178 - 5) = 0;
        *((_QWORD *)v178 - 4) = 0;
        *((_QWORD *)v178 - 3) = 0;
        *((_QWORD *)v178 - 2) = 0;
        *((_QWORD *)v178 - 1) = 0;
      }
      while ( v178 != &v243[16 * v177 + 16] );
      v179 = v38 & 7;
      v180 = &v243[16 * (int)v177 + 16];
      switch ( v38 & 7 )
      {
        case 0:
          v179 = 0;
          goto LABEL_207;
        case 1:
          goto LABEL_205;
        case 2:
          goto LABEL_219;
        case 3:
          goto LABEL_221;
        case 4:
          goto LABEL_223;
        case 5:
          goto LABEL_272;
        case 6:
          goto LABEL_274;
        case 7:
          goto LABEL_276;
      }
    }
    switch ( v38 )
    {
      case 1:
        v180 = v243;
        v179 = v38;
        goto LABEL_205;
      case 2:
        v180 = v243;
        v179 = v38;
        goto LABEL_219;
      case 3:
        v180 = v243;
        v179 = v38;
        goto LABEL_221;
      case 4:
        v180 = v243;
        v179 = v38;
        goto LABEL_223;
      case 5:
        v180 = v243;
        v179 = v38;
        goto LABEL_272;
      case 6:
        v180 = v243;
        v179 = v38;
        goto LABEL_274;
      case 7:
        v180 = v243;
LABEL_276:
        *((_QWORD *)v180 + 6) = 0;
        v179 = 7;
LABEL_274:
        *((_QWORD *)v180 + 5) = 0;
LABEL_272:
        *((_QWORD *)v180 + 4) = 0;
LABEL_223:
        *((_QWORD *)v180 + 3) = 0;
LABEL_221:
        *((_QWORD *)v180 + 2) = 0;
LABEL_219:
        *((_QWORD *)v180 + 1) = 0;
LABEL_205:
        *(_QWORD *)v180 = 0;
        if ( v176 )
        {
          LODWORD(v177) = v176 - 1;
LABEL_207:
          v181 = a2;
          do
          {
            *v181 = 0.0;
            v181[1] = 0.0;
            v181 += 8;
            *(v181 - 6) = 0.0;
            *(v181 - 5) = 0.0;
            *(v181 - 4) = 0.0;
            *(v181 - 3) = 0.0;
            *(v181 - 2) = 0.0;
            *(v181 - 1) = 0.0;
          }
          while ( v181 != &a2[8 * (unsigned int)v177 + 8] );
          v182 = &a2[8 * (unsigned int)v177 + 8];
        }
        else
        {
          v182 = a2;
        }
        switch ( v179 )
        {
          case 1:
            goto LABEL_217;
          case 2:
            goto LABEL_216;
          case 3:
            goto LABEL_215;
          case 4:
            goto LABEL_214;
          case 5:
            goto LABEL_213;
          case 6:
            goto LABEL_212;
          case 7:
            v182[6] = 0.0;
LABEL_212:
            v182[5] = 0.0;
LABEL_213:
            v182[4] = 0.0;
LABEL_214:
            v182[3] = 0.0;
LABEL_215:
            v182[2] = 0.0;
LABEL_216:
            v182[1] = 0.0;
LABEL_217:
            *v182 = 0.0;
            break;
          default:
            goto LABEL_99;
        }
        break;
      default:
        break;
    }
  }
LABEL_99:
  if ( !v33 )
  {
    v112 = *((_QWORD *)v241 + 18);
    v113 = *((double **)v241 + 19);
    if ( !v38 )
      return v241;
    goto LABEL_111;
  }
  v97 = v243;
  v98 = 0;
  v234 = v33;
  v99 = 4LL * (unsigned int)(v33 - 1) + 4;
  do
  {
    v100 = *(int *)(v96 + v98);
    v101 = *(_DWORD *)(v96 + v98 + 4);
    v102 = *(double *)(v228 + 2 * v98);
    v103 = *(double *)(v230 + 2 * v98);
    if ( (int)v100 < v101 )
    {
      if ( v103 > -1.0e20 )
      {
        v136 = (unsigned int)(v101 - 1 - v100);
        if ( v102 < 1.0e20 )
        {
          v145 = v94 + 4 * v100;
          v146 = v91 + 8 * v100;
          v147 = v136 + 1;
          v148 = 0;
          v244 = v97;
          do
          {
            v149 = *(double *)(v146 + 8 * v148);
            v150 = v102 * v149;
            v151 = 8LL * *(int *)(v145 + 4 * v148);
            v152 = (double *)&v244[v151 / 4];
            v153 = &a2[v151 / 8];
            if ( v149 > 0.0 )
            {
              *v153 = v150 + *v153;
              *v152 = v149 * v103 + *v152;
            }
            else
            {
              *v152 = v150 + *v152;
              *v153 = v149 * v103 + *v153;
            }
            ++v148;
          }
          while ( v147 != v148 );
        }
        else
        {
          v137 = v94 + 4 * v100;
          v138 = v91 + 8 * v100;
          v139 = v136 + 1;
          v140 = 0;
          v244 = v97;
          do
          {
            v141 = *(double *)(v138 + 8 * v140);
            v142 = 8LL * *(int *)(v137 + 4 * v140);
            v143 = (double *)&v244[v142 / 4];
            v144 = &a2[v142 / 8];
            if ( v141 > 0.0 )
            {
              *v144 = 1.797693134862316e308;
              *v143 = v141 * v103 + *v143;
            }
            else
            {
              *v143 = -1.797693134862316e308;
              *v144 = v141 * v103 + *v144;
            }
            ++v140;
          }
          while ( v139 != v140 );
        }
      }
      else
      {
        v104 = (unsigned int)(v101 - 1 - v100);
        if ( v102 < 1.0e20 )
        {
          v154 = v94 + 4 * v100;
          v155 = v91 + 8 * v100;
          v156 = v104 + 1;
          v157 = 0;
          v244 = v97;
          do
          {
            v158 = *(double *)(v155 + 8 * v157);
            v159 = 8LL * *(int *)(v154 + 4 * v157);
            v160 = (double *)&v244[v159 / 4];
            v161 = &a2[v159 / 8];
            v162 = v158 <= 0.0;
            v163 = v158 * v102;
            if ( v162 )
            {
              *v160 = v163 + *v160;
              *v161 = 1.797693134862316e308;
            }
            else
            {
              *v161 = v163 + *v161;
              *v160 = -1.797693134862316e308;
            }
            ++v157;
          }
          while ( v156 != v157 );
        }
        else
        {
          v105 = v94 + 4 * v100;
          v106 = v91 + 8 * v100;
          v107 = v104 + 1;
          v108 = 0;
          v244 = v97;
          do
          {
            while ( 1 )
            {
              v109 = 8LL * *(int *)(v105 + 4 * v108);
              v110 = &v244[v109 / 4];
              v111 = &a2[v109 / 8];
              if ( *(double *)(v106 + 8 * v108) <= 0.0 )
                break;
              ++v108;
              *v111 = 1.797693134862316e308;
              *(_QWORD *)v110 = 0xFFEFFFFFFFFFFFFFLL;
              if ( v108 == v107 )
                goto LABEL_108;
            }
            ++v108;
            *(_QWORD *)v110 = 0xFFEFFFFFFFFFFFFFLL;
            *v111 = 1.797693134862316e308;
          }
          while ( v108 != v107 );
        }
      }
LABEL_108:
      v97 = v244;
    }
    v98 += 4;
  }
  while ( v99 != v98 );
  v33 = v234;
  v243 = v97;
  v112 = *((_QWORD *)v241 + 18);
  v113 = *((double **)v241 + 19);
  if ( v38 )
  {
LABEL_111:
    v114 = *v113;
    v115 = *(double *)v243;
    if ( *(double *)v243 > v35 + *v113 )
      goto LABEL_120;
    v116 = 0;
    while ( 1 )
    {
      *(double *)&v243[2 * v116] = fmin(v115 - v114, 0.0) - v35;
      v117 = a2[v116];
      if ( *(double *)(v112 + 8 * v116) - v35 > v117 )
        goto LABEL_120;
      a2[v116] = fmax(v117 - *(double *)(v112 + 8 * v116), 0.0) + v35;
      if ( v115 > -1.0e10 )
        *(double *)(v112 + 8 * v116) = fmax(
                                         *(double *)(v112 + 8 * v116),
                                         v115
                                       - (COERCE_DOUBLE(*(_QWORD *)&v115 & 0x7FFFFFFFFFFFFFFFLL) + 1.0) * 0.000001);
      if ( v117 < 1.0e10 )
        v113[v116] = fmin(v113[v116], v117 + (COERCE_DOUBLE(*(_QWORD *)&v117 & 0x7FFFFFFFFFFFFFFFLL) + 1.0) * 0.000001);
      if ( v38 <= (int)v116 + 1 )
        break;
      v114 = v113[v116 + 1];
      v115 = *(double *)&v243[2 * v116++ + 2];
      if ( v115 > v114 + v35 )
        goto LABEL_120;
    }
    if ( !v33 )
      return v241;
  }
  v183 = 0;
  v235 = v91;
  while ( 2 )
  {
    v184 = a4[v183];
    if ( !*(_BYTE *)(v220 + v184) )
      goto LABEL_226;
    v185 = *(double *)(v230 + 8 * v183);
    if ( v185 <= -1000.0 )
      goto LABEL_226;
    v186 = *(double *)(v228 + 8 * v183);
    if ( v186 >= 1000.0 )
      goto LABEL_226;
    v187 = *(int *)(v96 + 4 * v183);
    v188 = *(_DWORD *)(v96 + 4 * v183 + 4);
    if ( (int)v187 >= v188 )
      goto LABEL_226;
    v189 = (__m128d)*(unsigned __int64 *)(v230 + 8 * v183);
    v190 = v94 + 4 * v187;
    v191 = v235 + 8 * v187;
    v192 = (unsigned int)(v188 - 1 - v187) + 1LL;
    v193.m128d_f64[0] = *(double *)(v228 + 8 * v183);
    v194 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        v197 = *(double *)(v191 + 8 * v194);
        v198 = *(int *)(v190 + 4 * v194);
        v199 = (v186 - v185) * v197;
        v200 = a2[v198];
        if ( v197 > 0.0 )
        {
          v195 = v200 - v199;
          if ( v195 < 0.0 )
            v189.m128d_f64[0] = fmax(v189.m128d_f64[0], v185 - (v195 + v236) / v197);
          v196 = v199 + *(double *)&v243[2 * v198];
          if ( v196 > 0.0 )
            v193.m128d_f64[0] = fmin(v193.m128d_f64[0], v186 - (v196 - v236) / v197);
LABEL_236:
          if ( v192 == ++v194 )
            goto LABEL_242;
          continue;
        }
        break;
      }
      v201 = v200 + v199;
      if ( v201 < 0.0 )
        v193.m128d_f64[0] = fmin(v193.m128d_f64[0], v186 - (v201 + v236) / v197);
      v202 = *(double *)&v243[2 * v198] - v199;
      if ( v202 <= 0.0 )
        goto LABEL_236;
      ++v194;
      v189.m128d_f64[0] = fmax(v189.m128d_f64[0], v185 - (v202 - v236) / v197);
      if ( v192 != v194 )
        continue;
      break;
    }
LABEL_242:
    if ( v189.m128d_f64[0] <= v185 && v186 <= v193.m128d_f64[0] )
      goto LABEL_226;
    v203.m128d_f64[0] = v193.m128d_f64[0] + 0.5;
    if ( fabs(v193.m128d_f64[0] + 0.5) < 4.503599627370496e15 )
    {
      v204 = 0;
      v204.m128d_f64[0] = (double)(int)v203.m128d_f64[0];
      *(_QWORD *)&v203.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                        v204.m128d_f64[0]
                                      - COERCE_DOUBLE(
                                          COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v204, v203).m128d_f64[0]))
                                        & 0x3FF0000000000000LL))
                                    | *(_QWORD *)&v203.m128d_f64[0] & 0x8000000000000000LL;
    }
    if ( fabs(v193.m128d_f64[0] - v203.m128d_f64[0]) > 0.000001 )
    {
      v203.m128d_f64[0] = v193.m128d_f64[0];
      if ( fabs(v193.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v205 = 0;
        v205.m128d_f64[0] = (double)(int)v193.m128d_f64[0];
        *(_QWORD *)&v203.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                          v205.m128d_f64[0]
                                        - COERCE_DOUBLE(
                                            COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v205, v193).m128d_f64[0]))
                                          & 0x3FF0000000000000LL))
                                      | *(_QWORD *)&v193.m128d_f64[0] & 0x8000000000000000LL;
      }
    }
    v206.m128d_f64[1] = 0.0;
    v206.m128d_f64[0] = v189.m128d_f64[0] - 0.5;
    if ( fabs(v189.m128d_f64[0] - 0.5) < 4.503599627370496e15 )
    {
      v207.m128d_f64[0] = (double)(int)v206.m128d_f64[0];
      *(_QWORD *)&v206.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                        COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v206, v207).m128d_f64[0] & 0x3FF0000000000000LL)
                                      + v207.m128d_f64[0])
                                    | *(_QWORD *)&v206.m128d_f64[0] & 0x8000000000000000LL;
    }
    if ( fabs(v189.m128d_f64[0] - v206.m128d_f64[0]) > 0.000001 )
    {
      v206.m128d_f64[0] = v189.m128d_f64[0];
      if ( fabs(v189.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v208.m128d_f64[0] = (double)(int)v189.m128d_f64[0];
        *(_QWORD *)&v206.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                          COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v189, v208).m128d_f64[0] & 0x3FF0000000000000LL)
                                        + v208.m128d_f64[0])
                                      | *(_QWORD *)&v189.m128d_f64[0] & 0x8000000000000000LL;
      }
    }
    if ( v206.m128d_f64[0] <= v185 && v186 <= v203.m128d_f64[0] )
    {
LABEL_226:
      if ( v33 <= (int)++v183 )
        return v241;
      continue;
    }
    break;
  }
  if ( v203.m128d_f64[0] >= v206.m128d_f64[0] )
  {
    *(double *)(v228 + 8 * v183) = v203.m128d_f64[0];
    *(double *)(v230 + 8 * v183) = v206.m128d_f64[0];
    *(double *)(*((_QWORD *)this + 23) + 8 * v184) = v203.m128d_f64[0];
    v209 = v203.m128d_f64[0] - v186;
    *(double *)(*((_QWORD *)this + 22) + 8 * v184) = v206.m128d_f64[0];
    v210 = v206.m128d_f64[0] - v185;
    v211 = 0;
    do
    {
      v212 = *(double *)(v191 + 8 * v211);
      v213 = v209 * v212;
      v214 = 8LL * *(int *)(v190 + 4 * v211);
      v215 = v210 * v212;
      v216 = (double *)&v243[v214 / 4];
      v217 = &a2[v214 / 8];
      if ( v212 > 0.0 )
      {
        *v217 = v213 + *v217;
        *v216 = v215 + *v216;
      }
      else
      {
        *v216 = v213 + *v216;
        *v217 = v215 + *v217;
      }
      ++v211;
    }
    while ( v211 != v194 );
    goto LABEL_226;
  }
LABEL_120:
  ClpSimplex::~ClpSimplex(v241);
  operator delete(v241);
  return nullptr;
}

