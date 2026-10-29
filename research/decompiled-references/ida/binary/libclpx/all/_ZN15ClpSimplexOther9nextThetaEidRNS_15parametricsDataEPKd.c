__int64 __fastcall ClpSimplexOther::nextTheta(__int64 a1, double a2, double a3, double a4, __int64 a5, __int64 a6)
{
  double v7; // xmm3_8
  __int64 v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // ebp
  _QWORD *v12; // rax
  __int64 (__fastcall *v13)(double, double, double, double); // rdx
  __int64 (*v14)(void); // rdx
  __int64 (*v15)(void); // rdx
  __int64 (*v16)(void); // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  int v20; // esi
  double v21; // xmm4_8
  int v22; // edx
  __int64 v23; // rdi
  _DWORD *v24; // r12
  int *v25; // r13
  __int64 v26; // rcx
  int v27; // edx
  double v28; // xmm5_8
  __int64 *v29; // r9
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // r11
  __int64 v33; // rbp
  double v34; // xmm0_8
  bool v35; // si
  int v36; // ecx
  __int64 v37; // rsi
  double *v38; // rcx
  double v39; // xmm0_8
  bool v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r8
  int v44; // eax
  __int64 *v45; // rdx
  int *v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rsi
  double v49; // xmm4_8
  double v50; // xmm5_8
  __int64 v51; // rsi
  int *v52; // r14
  _DWORD *v53; // rsi
  __int64 v54; // rdi
  int v55; // r10d
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 v59; // r11
  double v60; // xmm0_8
  bool v61; // r9
  int v62; // edi
  __int64 v63; // r9
  double *v64; // rdi
  double v65; // xmm0_8
  bool v66; // r15
  __int64 v67; // r10
  int *v68; // rdi
  int v69; // ecx
  __int64 v70; // r15
  int *v71; // rax
  unsigned __int64 v72; // rdi
  __int64 v73; // rsi
  int v74; // esi
  __int64 v75; // rcx
  double v76; // xmm1_8
  double *v77; // rcx
  double v78; // xmm0_8
  bool v79; // si
  int v80; // eax
  int *v81; // rcx
  __int64 v82; // r13
  __int64 v83; // rsi
  double v84; // xmm4_8
  double v85; // xmm5_8
  __int64 v86; // rsi
  int *v87; // r14
  _DWORD *v88; // rsi
  __int64 v89; // rdi
  int v90; // r10d
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rbp
  __int64 v94; // r11
  double v95; // xmm0_8
  bool v96; // r9
  int v97; // edi
  __int64 v98; // r9
  double *v99; // rdi
  double v100; // xmm0_8
  bool v101; // r15
  __int64 v102; // r10
  int *v103; // rdi
  int v104; // ecx
  int *v105; // rax
  unsigned __int64 v106; // rdi
  __int64 v107; // rsi
  int v108; // esi
  __int64 v109; // rcx
  double v110; // xmm1_8
  double *v111; // rcx
  double v112; // xmm0_8
  bool v113; // si
  int **v114; // rax
  int v115; // ebp
  _DWORD *v116; // r8
  __int64 v117; // r13
  __int64 v118; // r12
  double v119; // xmm5_8
  int *v120; // rdx
  __int64 v121; // rsi
  __int64 v122; // rcx
  double v123; // xmm0_8
  int v124; // edi
  double v125; // xmm4_8
  __int64 v126; // rax
  double v127; // xmm1_8
  double v128; // xmm0_8
  double v129; // xmm6_8
  double v130; // xmm1_8
  __int64 v131; // r9
  int *v132; // rax
  int v133; // edx
  __int64 v134; // rdi
  __int64 v135; // rsi
  int v136; // edx
  double v137; // xmm0_8
  double v138; // xmm1_8
  int *v139; // rax
  int v140; // edx
  __int64 v141; // rdi
  __int64 v142; // rsi
  int v143; // edx
  double v144; // xmm0_8
  double v145; // xmm1_8
  char v146; // di
  int *v147; // rax
  __int64 v148; // r10
  __int64 v149; // r8
  __int64 v150; // rcx
  double *v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rax
  double v154; // xmm1_8
  __int64 v155; // rdx
  double v156; // xmm0_8
  __int64 v157; // rdx
  double v158; // xmm3_8
  bool v160; // r9
  __int64 v161; // r9
  __int64 v162; // r11
  bool v163; // r10
  __int64 v164; // r10
  __int64 v165; // r11
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  int v169; // r15d
  int *v170; // rcx
  __int64 v171; // r12
  __int64 v172; // rsi
  double v173; // xmm4_8
  __int64 v174; // rsi
  int *v175; // r13
  _DWORD *v176; // rsi
  __int64 v177; // rdi
  int v178; // r9d
  __int64 v179; // rbp
  __int64 v180; // rax
  __int64 v181; // r11
  __int64 v182; // r10
  double v183; // xmm0_8
  bool v184; // r8
  int v185; // edi
  double v186; // xmm0_8
  __int64 v187; // r8
  double *v188; // rdi
  bool v189; // r15
  __int64 v190; // r9
  int v191; // esi
  __int64 v192; // rax
  int v193; // ecx
  double v194; // xmm5_8
  int v195; // esi
  __int64 *v196; // rdx
  __int64 v197; // r8
  int *v198; // r13
  _DWORD *v199; // r12
  __int64 v200; // rsi
  int v201; // ecx
  double v202; // xmm4_8
  __int64 v203; // r9
  __int64 v204; // rax
  __int64 v205; // rbp
  __int64 v206; // r11
  double v207; // xmm0_8
  bool v208; // di
  int v209; // esi
  __int64 v210; // rdi
  double *v211; // rsi
  double v212; // xmm0_8
  bool v213; // r10
  __int64 v214; // rcx
  __int64 v215; // r10
  int v216; // ecx
  double *v217; // rax
  double v218; // xmm0_8
  bool v219; // cl
  int **v220; // r11
  int v221; // edx
  int *v222; // r9
  int *v223; // rcx
  int *v224; // rbp
  __int64 v225; // r12
  double v226; // xmm0_8
  bool v227; // di
  __int64 v228; // rdi
  double *v229; // rsi
  double *v230; // rdx
  bool v231; // r8
  __int64 v232; // r8
  int v233; // r15d
  int *v234; // rdi
  int v235; // ecx
  __int64 v236; // r11
  int *v237; // rax
  unsigned __int64 v238; // rdi
  __int64 v239; // rsi
  int v240; // esi
  __int64 v241; // rcx
  double v242; // xmm1_8
  double *v243; // rcx
  double v244; // xmm0_8
  bool v245; // si
  int v246; // r15d
  int *v247; // rcx
  __int64 v248; // rsi
  double v249; // xmm4_8
  __int64 v250; // rsi
  int *v251; // r13
  _DWORD *v252; // rsi
  __int64 v253; // rdi
  int v254; // r9d
  __int64 v255; // rbp
  __int64 v256; // rax
  __int64 v257; // r11
  __int64 v258; // r10
  double v259; // xmm0_8
  bool v260; // r8
  int v261; // edi
  double v262; // xmm0_8
  __int64 v263; // r8
  double *v264; // rdi
  bool v265; // r14
  __int64 v266; // r9
  int *v267; // rdi
  int v268; // ecx
  int *v269; // rax
  unsigned __int64 v270; // rdi
  __int64 v271; // rsi
  int v272; // esi
  __int64 v273; // rcx
  double v274; // xmm1_8
  double *v275; // rcx
  double v276; // xmm0_8
  bool v277; // si
  bool v278; // r8
  __int64 v279; // r8
  __int64 v280; // r9
  bool v281; // r9
  __int64 v282; // r9
  __int64 v283; // r10
  __int64 *v284; // r8
  __int64 v285; // rax
  __int64 v286; // r9
  __int64 v287; // r10
  __int64 v288; // r11
  double v289; // xmm0_8
  bool v290; // si
  int v291; // ecx
  double v292; // xmm0_8
  __int64 v293; // rsi
  double *v294; // rcx
  bool v295; // di
  __int64 v296; // rdx
  __int64 v297; // rdi
  __int64 v298; // r9
  __int64 v299; // rax
  __int64 v300; // rbp
  __int64 v301; // r11
  double v302; // xmm1_8
  bool v303; // di
  int v304; // esi
  double v305; // xmm1_8
  __int64 v306; // rdi
  double *v307; // rsi
  bool v308; // r8
  __int64 v309; // rcx
  __int64 v310; // r8
  bool v311; // si
  __int64 v312; // rsi
  __int64 v313; // rdi
  __int64 v314; // [rsp+0h] [rbp-A8h]
  int *v315; // [rsp+8h] [rbp-A0h]
  int *v316; // [rsp+10h] [rbp-98h]
  __int64 v317; // [rsp+18h] [rbp-90h]
  int v318; // [rsp+18h] [rbp-90h]
  __int64 v319; // [rsp+20h] [rbp-88h]
  int v320; // [rsp+20h] [rbp-88h]
  __int64 v321; // [rsp+28h] [rbp-80h]
  int *v322; // [rsp+28h] [rbp-80h]
  __int64 v323; // [rsp+30h] [rbp-78h]
  __int64 v324; // [rsp+38h] [rbp-70h]
  __int64 v325; // [rsp+40h] [rbp-68h]
  int v326; // [rsp+40h] [rbp-68h]
  int v327; // [rsp+40h] [rbp-68h]
  int v328; // [rsp+40h] [rbp-68h]
  __int64 v330; // [rsp+50h] [rbp-58h]
  int v331; // [rsp+58h] [rbp-50h]
  int v332; // [rsp+58h] [rbp-50h]
  __int64 v333; // [rsp+58h] [rbp-50h]
  __int64 v334; // [rsp+60h] [rbp-48h]
  __int64 v335; // [rsp+60h] [rbp-48h]
  __int64 v336; // [rsp+68h] [rbp-40h]

  v7 = a2;
  v8 = *(_QWORD *)(a6 + 32);
  v316 = *(int **)(a6 + 56);
  v9 = *(_QWORD *)(a1 + 1088);
  v10 = *(_QWORD **)(a1 + 192);
  v314 = *(_QWORD *)(a6 + 48);
  v11 = *(_DWORD *)(v9 + 16);
  v315 = *(int **)(a6 + 40);
  v324 = *(_QWORD *)(v9 + 8);
  v12 = (_QWORD *)*v10;
  v13 = *(__int64 (__fastcall **)(double, double, double, double))(*v10 + 48LL);
  if ( (char *)v13 == (char *)ClpPackedMatrix::getIndices )
  {
    v321 = *(_QWORD *)(v10[11] + 40LL);
  }
  else
  {
    v168 = v13(a2, a3, a4, a2);
    v10 = *(_QWORD **)(a1 + 192);
    v321 = v168;
    v7 = a2;
    v12 = (_QWORD *)*v10;
  }
  v14 = (__int64 (*)(void))v12[8];
  if ( (char *)v14 == (char *)ClpPackedMatrix::getVectorLengths )
  {
    v317 = *(_QWORD *)(v10[11] + 56LL);
  }
  else
  {
    v167 = v14();
    v10 = *(_QWORD **)(a1 + 192);
    v317 = v167;
    v12 = (_QWORD *)*v10;
  }
  v15 = (__int64 (*)(void))v12[7];
  if ( (char *)v15 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v319 = *(_QWORD *)(v10[11] + 48LL);
  }
  else
  {
    v166 = v15();
    v10 = *(_QWORD **)(a1 + 192);
    v319 = v166;
    v12 = (_QWORD *)*v10;
  }
  v16 = (__int64 (*)(void))v12[5];
  if ( (char *)v16 == (char *)ClpPackedMatrix::getElements )
    v323 = *(_QWORD *)(v10[11] + 32LL);
  else
    v323 = v16();
  v17 = *(_QWORD *)(a1 + 1264);
  v18 = *(_QWORD *)(v17 + 8);
  if ( v18 )
    v19 = *(_DWORD *)(v18 + 68);
  else
    v19 = *(_DWORD *)(*(_QWORD *)(v17 + 16) + 52LL);
  if ( !v19 || !v11 )
  {
    CoinIndexedVector::clear(*(CoinIndexedVector **)(a1 + 1088));
    v43 = *(_QWORD *)(a1 + 224);
    if ( v43 )
    {
      v44 = *(v315 - 2);
      v45 = *(__int64 **)(a1 + 1088);
      v331 = v44;
      if ( v44 <= 0 )
      {
        v331 = 0;
        v68 = v315;
      }
      else
      {
        v46 = v315;
        v47 = (__int64)&v315[v44 - 1 + 1];
        v325 = v8;
        do
        {
          v48 = *v46;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v48) & 7) == 3 )
          {
            v49 = *(double *)(v325 + 8 * v48);
            v50 = *(double *)(*(_QWORD *)(a1 + 232) + 8 * v48);
            v51 = 4 * v48;
            v52 = (int *)(v319 + v51);
            v53 = (_DWORD *)(v317 + v51);
            v54 = *v52;
            v55 = v54 + *v53;
            if ( (int)v54 < v55 )
            {
              v56 = v45[1];
              v57 = (int)v54 + 1;
              v58 = v321 + -4 * v57 + 4 * v54;
              v59 = v323 + -8 * v57 + 8 * v54;
              do
              {
                v63 = *(int *)(v58 + 4 * v57);
                v64 = (double *)(v56 + 8 * v63);
                v65 = *(double *)(v59 + 8 * v57) * v50 * *(double *)(v43 + 8 * v63) * v49;
                if ( *v64 == 0.0 )
                {
                  if ( v65 <= 0.0 )
                    v66 = v65 <= -1.0e-50;
                  else
                    v66 = v65 >= 1.0e-50;
                  if ( v66 )
                  {
                    v67 = *((int *)v45 + 4);
                    *((_DWORD *)v45 + 4) = v67 + 1;
                    *(_DWORD *)(*v45 + 4 * v67) = v63;
                    *v64 = v65;
                    v55 = *v52 + *v53;
                  }
                }
                else
                {
                  v60 = v65 + *v64;
                  if ( v60 <= 0.0 )
                    v61 = v60 <= -1.0e-50;
                  else
                    v61 = v60 >= 1.0e-50;
                  if ( v61 )
                    *v64 = v60;
                  else
                    *v64 = 1.0e-100;
                }
                v62 = v57++;
              }
              while ( v55 > v62 );
            }
          }
          ++v46;
        }
        while ( (int *)v47 != v46 );
        v8 = v325;
        v68 = v315;
      }
      v69 = *(v68 - 1);
      v70 = 8LL * *(int *)(a1 + 108);
      v326 = *(_DWORD *)(a1 + 108);
      v334 = v70;
      if ( v331 < v69 )
      {
        v71 = &v68[v331];
        v72 = (unsigned __int64)&v68[v331 + 1 + (unsigned __int64)(unsigned int)(v69 - 1 - v331)];
        do
        {
          while ( 1 )
          {
            v73 = *v71;
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v73) & 7) == 3 )
              break;
LABEL_54:
            if ( (int *)v72 == ++v71 )
              goto LABEL_61;
          }
          v74 = v73 - v326;
          v75 = 8LL * v74;
          v76 = *(double *)(v8 + v70 + v75);
          v77 = (double *)(v45[1] + v75);
          if ( *v77 == 0.0 )
          {
            if ( v76 >= 0.0 )
              v163 = v76 >= 1.0e-50;
            else
              v163 = v76 <= -1.0e-50;
            if ( v163 )
            {
              v164 = *((int *)v45 + 4);
              v165 = *v45;
              *((_DWORD *)v45 + 4) = v164 + 1;
              *(_DWORD *)(v165 + 4 * v164) = v74;
              *v77 = -v76;
            }
            goto LABEL_54;
          }
          v78 = *v77 - v76;
          if ( v78 <= 0.0 )
            v79 = v78 <= -1.0e-50;
          else
            v79 = v78 >= 1.0e-50;
          if ( !v79 )
          {
            *v77 = 1.0e-100;
            goto LABEL_54;
          }
          ++v71;
          *v77 = v78;
        }
        while ( (int *)v72 != v71 );
      }
LABEL_61:
      v80 = *(v316 - 2);
      v332 = v80;
      if ( v80 <= 0 )
      {
        v332 = 0;
        v103 = v316;
      }
      else
      {
        v81 = v316;
        v82 = (__int64)&v316[v80 - 1 + 1];
        v336 = v8;
        do
        {
          v83 = *v81;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v83) & 7) == 2 )
          {
            v84 = *(double *)(v314 + 8 * v83);
            v85 = *(double *)(*(_QWORD *)(a1 + 232) + 8 * v83);
            v86 = 4 * v83;
            v87 = (int *)(v319 + v86);
            v88 = (_DWORD *)(v317 + v86);
            v89 = *v87;
            v90 = v89 + *v88;
            if ( v90 > (int)v89 )
            {
              v91 = v45[1];
              v92 = (int)v89 + 1;
              v93 = v321 + -4 * v92 + 4 * v89;
              v94 = v323 + -8 * v92 + 8 * v89;
              do
              {
                v98 = *(int *)(v93 + 4 * v92);
                v99 = (double *)(v91 + 8 * v98);
                v100 = *(double *)(v94 + 8 * v92) * v85 * *(double *)(v43 + 8 * v98) * v84;
                if ( *v99 == 0.0 )
                {
                  if ( v100 <= 0.0 )
                    v101 = v100 <= -1.0e-50;
                  else
                    v101 = v100 >= 1.0e-50;
                  if ( v101 )
                  {
                    v102 = *((int *)v45 + 4);
                    *((_DWORD *)v45 + 4) = v102 + 1;
                    *(_DWORD *)(*v45 + 4 * v102) = v98;
                    *v99 = v100;
                    v90 = *v87 + *v88;
                  }
                }
                else
                {
                  v95 = v100 + *v99;
                  if ( v95 <= 0.0 )
                    v96 = v95 <= -1.0e-50;
                  else
                    v96 = v95 >= 1.0e-50;
                  if ( v96 )
                    *v99 = v95;
                  else
                    *v99 = 1.0e-100;
                }
                v97 = v92++;
              }
              while ( v90 > v97 );
            }
          }
          ++v81;
        }
        while ( (int *)v82 != v81 );
        v8 = v336;
        v103 = v316;
      }
      v104 = *(v103 - 1);
      if ( v332 < v104 )
      {
        v105 = &v103[v332];
        v106 = (unsigned __int64)&v103[v332 + 1 + (unsigned __int64)(unsigned int)(v104 - 1 - v332)];
        do
        {
          while ( 1 )
          {
            v107 = *v105;
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v107) & 7) == 2 )
              break;
LABEL_83:
            if ( (int *)v106 == ++v105 )
              goto LABEL_90;
          }
          v108 = v107 - v326;
          v109 = 8LL * v108;
          v110 = *(double *)(v314 + v334 + v109);
          v111 = (double *)(v45[1] + v109);
          if ( *v111 == 0.0 )
          {
            if ( v110 >= 0.0 )
              v160 = v110 >= 1.0e-50;
            else
              v160 = v110 <= -1.0e-50;
            if ( v160 )
            {
              v161 = *((int *)v45 + 4);
              v162 = *v45;
              *((_DWORD *)v45 + 4) = v161 + 1;
              *(_DWORD *)(v162 + 4 * v161) = v108;
              *v111 = -v110;
            }
            goto LABEL_83;
          }
          v112 = *v111 - v110;
          if ( v112 <= 0.0 )
            v113 = v112 <= -1.0e-50;
          else
            v113 = v112 >= 1.0e-50;
          if ( !v113 )
          {
            *v111 = 1.0e-100;
            goto LABEL_83;
          }
          ++v105;
          *v111 = v112;
        }
        while ( (int *)v106 != v105 );
      }
    }
    else
    {
      v169 = *(v315 - 2);
      v45 = *(__int64 **)(a1 + 1088);
      if ( v169 <= 0 )
      {
        v233 = 0;
        v234 = v315;
      }
      else
      {
        v170 = v315;
        v171 = (__int64)&v315[v169 - 1 + 1];
        v327 = *(v315 - 2);
        do
        {
          v172 = *v170;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v172) & 7) == 3 )
          {
            v173 = *(double *)(v8 + 8 * v172);
            v174 = 4 * v172;
            v175 = (int *)(v319 + v174);
            v176 = (_DWORD *)(v317 + v174);
            v177 = *v175;
            v178 = v177 + *v176;
            if ( v178 > (int)v177 )
            {
              v179 = v45[1];
              v180 = (int)v177 + 1;
              v181 = v323 + -8 * v180 + 8 * v177;
              v182 = v321 + -4 * v180 + 4 * v177;
              do
              {
                v186 = *(double *)(v181 + 8 * v180) * v173;
                v187 = *(int *)(v182 + 4 * v180);
                v188 = (double *)(v179 + 8 * v187);
                if ( *v188 == 0.0 )
                {
                  if ( v186 <= 0.0 )
                    v189 = v186 <= -1.0e-50;
                  else
                    v189 = v186 >= 1.0e-50;
                  if ( v189 )
                  {
                    v190 = *((int *)v45 + 4);
                    *((_DWORD *)v45 + 4) = v190 + 1;
                    *(_DWORD *)(*v45 + 4 * v190) = v187;
                    *v188 = v186;
                    v178 = *v175 + *v176;
                  }
                }
                else
                {
                  v183 = v186 + *v188;
                  if ( v183 <= 0.0 )
                    v184 = v183 <= -1.0e-50;
                  else
                    v184 = v183 >= 1.0e-50;
                  if ( v184 )
                    *v188 = v183;
                  else
                    *v188 = 1.0e-100;
                }
                v185 = v180++;
              }
              while ( v178 > v185 );
            }
          }
          ++v170;
        }
        while ( (int *)v171 != v170 );
        v233 = v327;
        v234 = v315;
      }
      v235 = *(v234 - 1);
      v236 = 8LL * *(int *)(a1 + 108);
      v328 = *(_DWORD *)(a1 + 108);
      v333 = v236;
      if ( v235 > v233 )
      {
        v237 = &v234[v233];
        v238 = (unsigned __int64)&v234[v233 + 1 + (unsigned __int64)(unsigned int)(v235 - 1 - v233)];
        do
        {
          v239 = *v237;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v239) & 7) == 3 )
          {
            v240 = v239 - v328;
            v241 = 8LL * v240;
            v242 = *(double *)(v8 + v236 + v241);
            v243 = (double *)(v45[1] + v241);
            if ( *v243 == 0.0 )
            {
              if ( v242 >= 0.0 )
                v278 = v242 >= 1.0e-50;
              else
                v278 = v242 <= -1.0e-50;
              if ( v278 )
              {
                v279 = *((int *)v45 + 4);
                v280 = *v45;
                *((_DWORD *)v45 + 4) = v279 + 1;
                *(_DWORD *)(v280 + 4 * v279) = v240;
                *v243 = -v242;
              }
            }
            else
            {
              v244 = *v243 - v242;
              if ( v244 <= 0.0 )
                v245 = v244 <= -1.0e-50;
              else
                v245 = v244 >= 1.0e-50;
              if ( v245 )
                *v243 = v244;
              else
                *v243 = 1.0e-100;
            }
          }
          ++v237;
        }
        while ( (int *)v238 != v237 );
      }
      v246 = *(v316 - 2);
      if ( v246 <= 0 )
      {
        v246 = 0;
        v267 = v316;
      }
      else
      {
        v247 = v316;
        v335 = v8;
        do
        {
          v248 = *v247;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v248) & 7) == 2 )
          {
            v249 = *(double *)(v314 + 8 * v248);
            v250 = 4 * v248;
            v251 = (int *)(v319 + v250);
            v252 = (_DWORD *)(v317 + v250);
            v253 = *v251;
            v254 = v253 + *v252;
            if ( v254 > (int)v253 )
            {
              v255 = v45[1];
              v256 = (int)v253 + 1;
              v257 = v323 + -8 * v256 + 8 * v253;
              v258 = v321 + -4 * v256 + 4 * v253;
              do
              {
                v262 = *(double *)(v257 + 8 * v256) * v249;
                v263 = *(int *)(v258 + 4 * v256);
                v264 = (double *)(v255 + 8 * v263);
                if ( *v264 == 0.0 )
                {
                  if ( v262 <= 0.0 )
                    v265 = v262 <= -1.0e-50;
                  else
                    v265 = v262 >= 1.0e-50;
                  if ( v265 )
                  {
                    v266 = *((int *)v45 + 4);
                    *((_DWORD *)v45 + 4) = v266 + 1;
                    *(_DWORD *)(*v45 + 4 * v266) = v263;
                    *v264 = v262;
                    v254 = *v251 + *v252;
                  }
                }
                else
                {
                  v259 = v262 + *v264;
                  if ( v259 <= 0.0 )
                    v260 = v259 <= -1.0e-50;
                  else
                    v260 = v259 >= 1.0e-50;
                  if ( v260 )
                    *v264 = v259;
                  else
                    *v264 = 1.0e-100;
                }
                v261 = v256++;
              }
              while ( v254 > v261 );
            }
          }
          ++v247;
        }
        while ( &v316[v246 - 1 + 1] != v247 );
        v8 = v335;
        v267 = v316;
      }
      v268 = *(v267 - 1);
      if ( v268 > v246 )
      {
        v269 = &v267[v246];
        v270 = (unsigned __int64)&v267[v246 + 1 + (unsigned __int64)(unsigned int)(v268 - 1 - v246)];
        do
        {
          v271 = *v269;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v271) & 7) == 2 )
          {
            v272 = v271 - v328;
            v273 = 8LL * v272;
            v274 = *(double *)(v314 + v333 + v273);
            v275 = (double *)(v45[1] + v273);
            if ( *v275 == 0.0 )
            {
              if ( v274 >= 0.0 )
                v281 = v274 >= 1.0e-50;
              else
                v281 = v274 <= -1.0e-50;
              if ( v281 )
              {
                v282 = *((int *)v45 + 4);
                v283 = *v45;
                *((_DWORD *)v45 + 4) = v282 + 1;
                *(_DWORD *)(v283 + 4 * v282) = v272;
                *v275 = -v274;
              }
            }
            else
            {
              v276 = *v275 - v274;
              if ( v276 <= 0.0 )
                v277 = v276 <= -1.0e-50;
              else
                v277 = v276 >= 1.0e-50;
              if ( v277 )
                *v275 = v276;
              else
                *v275 = 1.0e-100;
            }
          }
          ++v269;
        }
        while ( (int *)v270 != v269 );
      }
    }
LABEL_90:
    ClpFactorization::updateColumn(
      *(ClpFactorization **)(a1 + 1264),
      *(CoinIndexedVector **)(a1 + 1056),
      (CoinIndexedVector *)v45,
      0);
    v114 = *(int ***)(a1 + 1088);
    v322 = *v114;
    goto LABEL_91;
  }
  v20 = *(_DWORD *)(a1 + 1152);
  if ( v20 < 0 )
  {
    v114 = *(int ***)(a1 + 1088);
    v322 = *v114;
    goto LABEL_91;
  }
  if ( *(int *)(a1 + 1156) <= 0 )
    v21 = -*(double *)(v314 + 8LL * v20);
  else
    v21 = -*(double *)(v8 + 8LL * v20);
  if ( v21 == 0.0 )
  {
    v191 = 0;
  }
  else
  {
    v22 = *(_DWORD *)(a1 + 108);
    if ( v20 >= v22 )
    {
      CoinIndexedVector::insert(*(CoinIndexedVector **)(a1 + 1096), v20 - v22, -v21);
      v191 = 1;
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 224);
      v24 = (_DWORD *)(v317 + 4LL * v20);
      v25 = (int *)(v319 + 4LL * v20);
      v26 = *v25;
      v27 = v26 + *v24;
      if ( v23 )
      {
        v28 = *(double *)(*(_QWORD *)(a1 + 232) + 8LL * v20);
        if ( (int)v26 < v27 )
        {
          v29 = *(__int64 **)(a1 + 1096);
          v30 = (int)v26 + 1;
          v31 = v29[1];
          v32 = -4 * v30 + 4 * v26 + v321;
          v33 = v323 + -8 * v30 + 8 * v26;
          do
          {
            v37 = *(int *)(v32 + 4 * v30);
            v38 = (double *)(v31 + 8 * v37);
            v39 = *(double *)(v33 + 8 * v30) * v28 * *(double *)(v23 + 8 * v37) * v21;
            if ( *v38 == 0.0 )
            {
              if ( v39 <= 0.0 )
                v40 = v39 <= -1.0e-50;
              else
                v40 = v39 >= 1.0e-50;
              if ( v40 )
              {
                v41 = *((int *)v29 + 4);
                v42 = *v29;
                *((_DWORD *)v29 + 4) = v41 + 1;
                *(_DWORD *)(v42 + 4 * v41) = v37;
                *v38 = v39;
                v27 = *v25 + *v24;
              }
            }
            else
            {
              v34 = v39 + *v38;
              if ( v34 <= 0.0 )
                v35 = v34 <= -1.0e-50;
              else
                v35 = v34 >= 1.0e-50;
              if ( v35 )
                *v38 = v34;
              else
                *v38 = 1.0e-100;
            }
            v36 = v30++;
          }
          while ( v27 > v36 );
        }
      }
      else if ( (int)v26 < v27 )
      {
        v284 = *(__int64 **)(a1 + 1096);
        v285 = (int)v26 + 1;
        v286 = v284[1];
        v287 = v323 + -8 * v285 + 8 * v26;
        v288 = v321 + -4 * v285 + 4 * v26;
        do
        {
          v292 = *(double *)(v287 + 8 * v285) * v21;
          v293 = *(int *)(v288 + 4 * v285);
          v294 = (double *)(v286 + 8 * v293);
          if ( *v294 == 0.0 )
          {
            if ( v292 <= 0.0 )
              v295 = v292 <= -1.0e-50;
            else
              v295 = v292 >= 1.0e-50;
            if ( v295 )
            {
              v296 = *((int *)v284 + 4);
              v297 = *v284;
              *((_DWORD *)v284 + 4) = v296 + 1;
              *(_DWORD *)(v297 + 4 * v296) = v293;
              *v294 = v292;
              v27 = *v25 + *v24;
            }
          }
          else
          {
            v289 = v292 + *v294;
            if ( v289 <= 0.0 )
              v290 = v289 <= -1.0e-50;
            else
              v290 = v289 >= 1.0e-50;
            if ( v290 )
              *v294 = v289;
            else
              *v294 = 1.0e-100;
          }
          v291 = v285++;
        }
        while ( v27 > v291 );
      }
      v191 = 1;
    }
  }
  v192 = *(int *)(a1 + 1160);
  v193 = *(_DWORD *)(a1 + 1160);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v192) & 7) == 3 )
    v194 = *(double *)(v8 + 8 * v192);
  else
    v194 = *(double *)(v314 + 8 * v192);
  if ( v194 != 0.0 )
  {
    v195 = *(_DWORD *)(a1 + 108);
    v196 = *(__int64 **)(a1 + 1096);
    if ( v193 < v195 )
    {
      v197 = *(_QWORD *)(a1 + 224);
      v198 = (int *)(4 * v192 + v319);
      v199 = (_DWORD *)(4 * v192 + v317);
      v200 = *v198;
      v201 = v200 + *v199;
      if ( v197 )
      {
        v202 = *(double *)(*(_QWORD *)(a1 + 232) + 8 * v192);
        if ( (int)v200 < v201 )
        {
          v203 = v196[1];
          v204 = (int)v200 + 1;
          v205 = v323 + -8 * v204 + 8 * v200;
          v206 = v321 + -4 * v204 + 4 * v200;
          do
          {
            v210 = *(int *)(v206 + 4 * v204);
            v211 = (double *)(v203 + 8 * v210);
            v212 = *(double *)(v205 + 8 * v204) * v202 * *(double *)(v197 + 8 * v210) * v194;
            if ( *v211 == 0.0 )
            {
              if ( v212 <= 0.0 )
                v213 = v212 <= -1.0e-50;
              else
                v213 = v212 >= 1.0e-50;
              if ( v213 )
              {
                v214 = *((int *)v196 + 4);
                v215 = *v196;
                *((_DWORD *)v196 + 4) = v214 + 1;
                *(_DWORD *)(v215 + 4 * v214) = v210;
                *v211 = v212;
                v201 = *v198 + *v199;
              }
            }
            else
            {
              v207 = v212 + *v211;
              if ( v207 <= 0.0 )
                v208 = v207 <= -1.0e-50;
              else
                v208 = v207 >= 1.0e-50;
              if ( v208 )
                *v211 = v207;
              else
                *v211 = 1.0e-100;
            }
            v209 = v204++;
          }
          while ( v201 > v209 );
        }
      }
      else if ( (int)v200 < v201 )
      {
        v298 = v196[1];
        v299 = (int)v200 + 1;
        v300 = -8 * v299 + 8 * v200 + v323;
        v301 = -4 * v299 + 4 * v200 + v321;
        do
        {
          v305 = *(double *)(v300 + 8 * v299) * v194;
          v306 = *(int *)(v301 + 4 * v299);
          v307 = (double *)(v298 + 8 * v306);
          if ( *v307 == 0.0 )
          {
            if ( v305 <= 0.0 )
              v308 = v305 <= -1.0e-50;
            else
              v308 = v305 >= 1.0e-50;
            if ( v308 )
            {
              v309 = *((int *)v196 + 4);
              v310 = *v196;
              *((_DWORD *)v196 + 4) = v309 + 1;
              *(_DWORD *)(v310 + 4 * v309) = v306;
              *v307 = v305;
              v201 = *v198 + *v199;
            }
          }
          else
          {
            v302 = v305 + *v307;
            if ( v302 <= 0.0 )
              v303 = v302 <= -1.0e-50;
            else
              v303 = v302 >= 1.0e-50;
            if ( v303 )
              *v307 = v302;
            else
              *v307 = 1.0e-100;
          }
          v304 = v299++;
        }
        while ( v201 > v304 );
      }
      goto LABEL_187;
    }
    v216 = v193 - v195;
    v217 = (double *)(v196[1] + 8LL * v216);
    if ( *v217 == 0.0 )
    {
      if ( v194 >= 0.0 )
        v311 = v194 >= 1.0e-50;
      else
        v311 = v194 <= -1.0e-50;
      if ( !v311 )
        goto LABEL_187;
      v312 = *((int *)v196 + 4);
      v313 = *v196;
      v218 = -v194;
      *((_DWORD *)v196 + 4) = v312 + 1;
      *(_DWORD *)(v313 + 4 * v312) = v216;
    }
    else
    {
      v218 = *v217 - v194;
      if ( v218 <= 0.0 )
        v219 = v218 <= -1.0e-50;
      else
        v219 = v218 >= 1.0e-50;
      if ( !v219 )
      {
        *v217 = 1.0e-100;
        goto LABEL_187;
      }
    }
    *v217 = v218;
    goto LABEL_187;
  }
  if ( !v191 )
  {
    v114 = *(int ***)(a1 + 1088);
    v322 = *v114;
    goto LABEL_91;
  }
  v196 = *(__int64 **)(a1 + 1096);
LABEL_187:
  ClpFactorization::updateColumn(
    *(ClpFactorization **)(a1 + 1264),
    *(CoinIndexedVector **)(a1 + 1056),
    (CoinIndexedVector *)v196,
    0);
  v220 = *(int ***)(a1 + 1096);
  v114 = *(int ***)(a1 + 1088);
  v221 = *((_DWORD *)v220 + 4);
  v222 = v220[1];
  v223 = *v220;
  if ( v221 > 0 )
  {
    v224 = v114[1];
    v225 = (__int64)&v223[v221 - 1 + 1];
    v322 = *v114;
    while ( 1 )
    {
      v228 = *v223;
      v229 = (double *)&v222[2 * v228];
      v230 = (double *)&v224[2 * v228];
      v226 = *v229;
      if ( *v230 == 0.0 )
        break;
      v226 = v226 + *v230;
      if ( v226 <= 0.0 )
        v227 = v226 <= -1.0e-50;
      else
        v227 = v226 >= 1.0e-50;
      if ( v227 )
        goto LABEL_199;
      *v230 = 1.0e-100;
LABEL_193:
      ++v223;
      *v229 = 0.0;
      if ( (int *)v225 == v223 )
        goto LABEL_261;
    }
    if ( v226 <= 0.0 )
      v231 = v226 <= -1.0e-50;
    else
      v231 = v226 >= 1.0e-50;
    if ( !v231 )
      goto LABEL_193;
    v232 = *((int *)v114 + 4);
    *((_DWORD *)v114 + 4) = v232 + 1;
    v322[v232] = v228;
LABEL_199:
    *v230 = v226;
    goto LABEL_193;
  }
  v322 = *v114;
LABEL_261:
  *((_DWORD *)v220 + 4) = 0;
  *((_BYTE *)v220 + 28) = 0;
LABEL_91:
  v115 = *((_DWORD *)v114 + 4);
  v116 = memset(*(void **)(a6 + 64), 0, 4LL * ((*(_DWORD *)(a1 + 104) + *(_DWORD *)(a1 + 108) + 31) >> 5));
  v330 = *(_QWORD *)(a6 + 72);
  if ( v115 <= 0 )
  {
    v131 = -1;
    v119 = v7;
    v320 = -1;
  }
  else
  {
    v320 = -1;
    v318 = -1;
    v117 = *(_QWORD *)(a1 + 1256);
    v118 = *(_QWORD *)(a1 + 1200);
    v119 = v7;
    v120 = v322;
    do
    {
      v121 = *v120;
      v122 = *(int *)(v117 + 4 * v121);
      v123 = *(double *)(v324 + 8 * v121);
      v124 = *v120;
      v125 = *(double *)(v8 + 8 * v122) + v123;
      v126 = *(int *)(v117 + 4 * v121) >> 5;
      v116[v126] |= 1 << v122;
      v127 = *(double *)(v118 + 8 * v122);
      v128 = v123 + *(double *)(v314 + 8 * v122);
      if ( v125 > 0.00000001 )
      {
        v129 = v127 - *(double *)(*(_QWORD *)(a1 + 984) + 8 * v122);
        if ( v7 * v125 > v129 )
        {
          v318 = v121;
          v7 = v129 / v125;
        }
      }
      if ( v128 < -0.00000001 )
      {
        v130 = v127 - *(double *)(*(_QWORD *)(a1 + 1008) + 8 * v122);
        if ( v130 > v128 * v119 )
        {
          v320 = v124;
          v119 = v130 / v128;
        }
      }
      ++v120;
    }
    while ( &v322[v115 - 1 + 1] != v120 );
    v131 = v318;
  }
  v132 = v315;
  v133 = *(v315 - 1);
  if ( v133 > 0 )
  {
    v134 = (__int64)&v315[v133 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v135 = *v132;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v135) & 7) == 1 )
        {
          v136 = v116[(int)v135 >> 5];
          if ( !_bittest(&v136, v135) )
          {
            v137 = *(double *)(v8 + 8 * v135);
            if ( v137 > 0.0 )
            {
              v138 = *(double *)(*(_QWORD *)(a1 + 1200) + 8 * v135) - *(double *)(*(_QWORD *)(a1 + 984) + 8 * v135);
              if ( v137 * v7 > v138 )
                break;
            }
          }
        }
        if ( (int *)v134 == ++v132 )
          goto LABEL_109;
      }
      ++v132;
      v7 = v138 / v137;
      v131 = *(int *)(v330 + 4 * v135);
    }
    while ( (int *)v134 != v132 );
  }
LABEL_109:
  v139 = v316;
  v140 = *(v316 - 1);
  if ( v140 > 0 )
  {
    v141 = (__int64)&v316[v140 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v142 = *v139;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 264) + v142) & 7) == 1 )
        {
          v143 = v116[(int)v142 >> 5];
          if ( !_bittest(&v143, v142) )
          {
            v144 = *(double *)(v314 + 8 * v142);
            if ( v144 < 0.0 )
            {
              v145 = *(double *)(*(_QWORD *)(a1 + 1200) + 8 * v142) - *(double *)(*(_QWORD *)(a1 + 1008) + 8 * v142);
              if ( v145 > v119 * v144 )
                break;
            }
          }
        }
        if ( (int *)v141 == ++v139 )
          goto LABEL_117;
      }
      ++v139;
      v119 = v145 / v144;
      v320 = *(_DWORD *)(v330 + 4 * v142);
    }
    while ( (int *)v141 != v139 );
  }
LABEL_117:
  v146 = 1;
  if ( v7 > v119 )
  {
    v131 = v320;
    v7 = v119;
    v146 = 0;
  }
  *(_DWORD *)(a1 + 1168) = v131;
  *(double *)(a1 + 800) = v7;
  if ( v7 <= 0.0 )
  {
    *(_QWORD *)(a1 + 800) = 0;
    v7 = 0.0;
  }
  else if ( v7 > 1.0e-15 && v115 > 0 )
  {
    v147 = v322;
    v148 = *(_QWORD *)(a1 + 1256);
    v149 = *(_QWORD *)(a1 + 1200);
    do
    {
      v150 = *v147++;
      v151 = (double *)(v149 + 8LL * *(int *)(v148 + 4 * v150));
      *v151 = *v151 - *(double *)(v324 + 8 * v150) * v7;
    }
    while ( &v322[v115 - 1 + 1] != v147 );
  }
  if ( (int)v131 < 0 )
    return 0xFFFFFFFFLL;
  v152 = *(_QWORD *)(a1 + 1200);
  v153 = *(int *)(*(_QWORD *)(a1 + 1256) + 4 * v131);
  *(_DWORD *)(a1 + 1160) = v153;
  v154 = *(double *)(v152 + 8 * v153);
  v155 = *(_QWORD *)(a1 + 984);
  *(double *)(a1 + 848) = v154;
  v156 = *(double *)(v8 + 8 * v153) * v7 + *(double *)(v155 + 8 * v153);
  v157 = *(_QWORD *)(a1 + 1008);
  *(double *)(a1 + 840) = v156;
  v158 = v7 * *(double *)(v314 + 8 * v153) + *(double *)(v157 + 8 * v153);
  *(double *)(a1 + 856) = v158;
  if ( v146 )
  {
    *(_DWORD *)(a1 + 1164) = 1;
    *(double *)(a1 + 864) = v156 - v154;
  }
  else
  {
    *(_DWORD *)(a1 + 1164) = -1;
    *(double *)(a1 + 864) = v154 - v158;
  }
  return 0;
}

