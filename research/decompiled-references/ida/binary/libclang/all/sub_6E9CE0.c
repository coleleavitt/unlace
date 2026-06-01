_QWORD *__fastcall sub_6E9CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rbp
  unsigned int v14; // edx
  __int64 *v15; // r15
  unsigned __int64 v16; // rsi
  int v17; // r10d
  __int64 *v18; // rcx
  unsigned int v19; // r13d
  unsigned int v20; // r8d
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // r15
  int v25; // edi
  __int64 v26; // rbp
  unsigned int v27; // edx
  __int64 *v28; // r14
  unsigned __int64 v29; // rsi
  int v30; // r10d
  __int64 *v31; // rcx
  unsigned int v32; // r13d
  unsigned int v33; // r8d
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // r11
  unsigned __int64 v39; // rsi
  int v40; // r9d
  __int64 *v41; // rcx
  unsigned int v42; // r8d
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // r14
  int v47; // edi
  __int64 v48; // rbp
  unsigned int v49; // edx
  __int64 *v50; // r13
  unsigned __int64 v51; // rsi
  int v52; // r9d
  __int64 *v53; // rcx
  unsigned int v54; // r8d
  __int64 *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdx
  _QWORD *result; // rax
  _QWORD *v59; // r15
  __int64 v60; // r13
  __int64 v61; // rbx
  int v62; // edi
  __int64 v63; // rbp
  unsigned int v64; // edx
  __int64 *v65; // r14
  unsigned __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdi
  int v69; // ecx
  __int64 v70; // rdi
  _QWORD *v71; // rsi
  __int64 *v72; // r12
  __int64 *v73; // rax
  __int64 v74; // rdx
  int v75; // r8d
  int v76; // r8d
  __int64 v77; // r10
  unsigned int v78; // edi
  _QWORD *v79; // rsi
  __int64 v80; // r9
  int v81; // eax
  int v82; // edx
  __int64 v83; // r9
  __int64 v84; // rdi
  int v85; // r14d
  __int64 *v86; // r12
  int v87; // eax
  int v88; // eax
  int v89; // eax
  unsigned __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdi
  int v93; // ecx
  __int64 v94; // rdi
  _QWORD *v95; // rsi
  __int64 *v96; // r12
  __int64 *v97; // rax
  __int64 v98; // rdx
  int v99; // edi
  int v100; // edi
  __int64 v101; // r10
  unsigned int v102; // esi
  _QWORD *v103; // rcx
  __int64 v104; // r9
  int v105; // edx
  __int64 v106; // r9
  __int64 v107; // rdi
  int v108; // r13d
  __int64 *v109; // r12
  unsigned __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rdi
  int v113; // ecx
  __int64 v114; // rdi
  _QWORD *v115; // rsi
  __int64 *v116; // r13
  __int64 *v117; // rax
  __int64 v118; // rdx
  int v119; // r8d
  int v120; // r8d
  __int64 v121; // rbx
  unsigned int v122; // edi
  _QWORD *v123; // rsi
  __int64 v124; // r10
  int v125; // edx
  __int64 v126; // rdi
  __int64 v127; // r8
  int v128; // r14d
  __int64 *v129; // r13
  unsigned __int64 v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rdi
  int v133; // ecx
  __int64 v134; // rdi
  _QWORD *v135; // rsi
  __int64 *v136; // r13
  __int64 *v137; // rax
  __int64 v138; // r14
  __int64 v139; // rdx
  int v140; // r8d
  int v141; // r8d
  __int64 v142; // rbx
  unsigned int v143; // edi
  _QWORD *v144; // rsi
  __int64 v145; // r10
  int v146; // edx
  __int64 v147; // rdi
  __int64 v148; // r8
  int v149; // r15d
  __int64 *v150; // r13
  unsigned __int64 v151; // rax
  __int64 v152; // rax
  _QWORD *v153; // rax
  __int64 v154; // rdi
  int v155; // ecx
  __int64 v156; // rdi
  _QWORD *v157; // rsi
  __int64 *v158; // r9
  __int64 *v159; // rax
  __int64 v160; // rdx
  int v161; // r8d
  int v162; // r8d
  __int64 v163; // r11
  unsigned int v164; // edi
  _QWORD *v165; // rsi
  __int64 v166; // r10
  int v167; // edi
  int v168; // r14d
  __int64 v169; // r9
  __int64 v170; // rdx
  unsigned __int64 v171; // rax
  __int64 v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // rdi
  int v175; // ecx
  __int64 v176; // rdi
  _QWORD *v177; // rsi
  __int64 *v178; // r9
  __int64 *v179; // rax
  __int64 v180; // rdx
  int v181; // edi
  int v182; // edi
  __int64 v183; // r11
  unsigned int v184; // esi
  _QWORD *v185; // rcx
  __int64 v186; // r10
  int v187; // edi
  int v188; // r13d
  __int64 v189; // r9
  __int64 v190; // rdx
  unsigned __int64 v191; // rax
  __int64 v192; // rax
  _QWORD *v193; // rax
  __int64 v194; // rdi
  int v195; // ecx
  __int64 v196; // rdi
  _QWORD *v197; // rsi
  __int64 *v198; // r8
  __int64 *v199; // rax
  __int64 v200; // rsi
  int v201; // r10d
  int v202; // r10d
  __int64 v203; // r14
  unsigned int v204; // edi
  _QWORD *v205; // rdx
  __int64 v206; // rbx
  int v207; // edi
  int v208; // r15d
  __int64 *v209; // r8
  __int64 v210; // r13
  __int64 v211; // rdx
  unsigned __int64 v212; // rax
  __int64 v213; // rax
  _QWORD *v214; // rax
  __int64 v215; // rdi
  int v216; // ecx
  __int64 v217; // rdi
  _QWORD *v218; // rsi
  __int64 *v219; // r8
  __int64 *v220; // rax
  __int64 v221; // r12
  __int64 v222; // rsi
  int v223; // r10d
  int v224; // r10d
  __int64 v225; // rbx
  unsigned int v226; // edi
  _QWORD *v227; // rdx
  __int64 v228; // r11
  int v229; // edi
  int v230; // r14d
  __int64 *v231; // r8
  __int64 v232; // r13
  __int64 v233; // rdx
  _QWORD *v237; // [rsp+20h] [rbp-78h]
  unsigned int v238; // [rsp+20h] [rbp-78h]
  __int64 v239; // [rsp+20h] [rbp-78h]
  __int64 v240; // [rsp+20h] [rbp-78h]
  __int64 v241; // [rsp+20h] [rbp-78h]
  __int64 v242; // [rsp+20h] [rbp-78h]
  unsigned int v243; // [rsp+20h] [rbp-78h]
  __int64 v244; // [rsp+20h] [rbp-78h]
  __int64 v245; // [rsp+20h] [rbp-78h]
  unsigned int v246; // [rsp+20h] [rbp-78h]
  __int64 v247; // [rsp+20h] [rbp-78h]
  unsigned int v248; // [rsp+20h] [rbp-78h]
  __int64 v249; // [rsp+20h] [rbp-78h]
  __int64 v250; // [rsp+28h] [rbp-70h]
  __int64 v251; // [rsp+30h] [rbp-68h]
  __int64 v252; // [rsp+30h] [rbp-68h]
  __int64 v253; // [rsp+30h] [rbp-68h]
  __int64 v254; // [rsp+30h] [rbp-68h]
  __int64 v255; // [rsp+30h] [rbp-68h]
  __int64 v256; // [rsp+30h] [rbp-68h]
  __int64 v257; // [rsp+30h] [rbp-68h]
  __int64 v258; // [rsp+30h] [rbp-68h]
  __int64 v259; // [rsp+30h] [rbp-68h]
  __int64 v260; // [rsp+30h] [rbp-68h]
  __int64 v261; // [rsp+30h] [rbp-68h]
  _QWORD *v262; // [rsp+30h] [rbp-68h]
  _QWORD *v263; // [rsp+30h] [rbp-68h]
  __int64 v264; // [rsp+38h] [rbp-60h]
  __int64 v265; // [rsp+38h] [rbp-60h]
  __int64 v266; // [rsp+38h] [rbp-60h]
  __int64 v267; // [rsp+38h] [rbp-60h]
  unsigned int v268; // [rsp+38h] [rbp-60h]
  __int64 v269; // [rsp+38h] [rbp-60h]
  __int64 v270; // [rsp+38h] [rbp-60h]
  unsigned int v271; // [rsp+38h] [rbp-60h]
  __int64 v272; // [rsp+38h] [rbp-60h]
  __int64 v273; // [rsp+38h] [rbp-60h]
  __int64 v274; // [rsp+38h] [rbp-60h]
  __int64 v275; // [rsp+38h] [rbp-60h]
  unsigned int v276; // [rsp+38h] [rbp-60h]
  __int64 v277; // [rsp+38h] [rbp-60h]
  __int64 v278; // [rsp+38h] [rbp-60h]
  unsigned int v279; // [rsp+38h] [rbp-60h]
  __int64 v280; // [rsp+38h] [rbp-60h]
  __int64 v281; // [rsp+38h] [rbp-60h]
  int v282; // [rsp+38h] [rbp-60h]
  int v283; // [rsp+38h] [rbp-60h]
  _QWORD *v284; // [rsp+38h] [rbp-60h]
  _QWORD *v285; // [rsp+38h] [rbp-60h]
  __int64 v286; // [rsp+40h] [rbp-58h]
  __int64 v287; // [rsp+40h] [rbp-58h]
  __int64 v288; // [rsp+40h] [rbp-58h]
  __int64 v289; // [rsp+40h] [rbp-58h]
  __int64 v290; // [rsp+40h] [rbp-58h]
  __int64 v291; // [rsp+40h] [rbp-58h]
  __int64 v292; // [rsp+40h] [rbp-58h]
  __int64 v293; // [rsp+40h] [rbp-58h]
  __int64 v294; // [rsp+40h] [rbp-58h]
  __int64 v295; // [rsp+40h] [rbp-58h]
  __int64 v296; // [rsp+40h] [rbp-58h]
  _QWORD *v297; // [rsp+40h] [rbp-58h]
  _QWORD *v298; // [rsp+40h] [rbp-58h]
  int v299; // [rsp+40h] [rbp-58h]
  int v300; // [rsp+40h] [rbp-58h]
  __int64 v302; // [rsp+50h] [rbp-48h]
  __int64 v303; // [rsp+50h] [rbp-48h]
  __int64 v304; // [rsp+50h] [rbp-48h]
  __int64 v305; // [rsp+50h] [rbp-48h]
  __int64 v306; // [rsp+50h] [rbp-48h]
  int v307; // [rsp+50h] [rbp-48h]
  int v308; // [rsp+50h] [rbp-48h]
  _QWORD *v309; // [rsp+50h] [rbp-48h]
  _QWORD *v310; // [rsp+50h] [rbp-48h]
  int v311; // [rsp+58h] [rbp-40h]
  int v312; // [rsp+58h] [rbp-40h]

  v250 = a2;
  v251 = (a3 - 1) / 2;
  if ( a2 >= v251 )
  {
    if ( (a3 & 1) != 0 )
    {
      result = (_QWORD *)(a1 + 8 * a2);
      goto LABEL_82;
    }
    v37 = a2;
    if ( a2 == (a3 - 2) / 2 )
    {
LABEL_116:
      *(_QWORD *)(a1 + 8 * v37) = *(_QWORD *)(a1 + 8 * (2 * v37 + 2) - 8);
      v37 = 2 * v37 + 1;
      goto LABEL_17;
    }
LABEL_331:
    result = (_QWORD *)(a1 + 8 * v250);
    goto LABEL_82;
  }
  v5 = a2;
  v6 = a1;
  while ( 1 )
  {
    v7 = 2 * (v5 + 1);
    v8 = 16 * (v5 + 1);
    v9 = *(_QWORD *)(v6 + v8 - 8);
    v237 = (_QWORD *)(v6 + v8);
    v10 = *(_QWORD *)(v6 + v8);
    v11 = *(_QWORD *)(v9 + 128);
    if ( v11
      || (v287 = v6,
          v266 = v5,
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104)),
          v5 = v266,
          v6 = v287,
          (v11 = *(_QWORD *)(v9 + 128)) != 0) )
    {
      v11 = *(_QWORD *)(v11 + 88);
    }
    v12 = 0;
    v13 = *(_QWORD *)(a5 + 72);
    v14 = *(_DWORD *)(v13 + 80);
    v15 = *(__int64 **)(v13 + 64);
    if ( !v14 )
      goto LABEL_166;
    v16 = v14 - 1;
    v17 = 1;
    v18 = nullptr;
    v19 = ((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4);
    v20 = v16 & v19;
    v21 = &v15[2 * ((unsigned int)v16 & v19)];
    v22 = *v21;
    if ( v11 == *v21 )
    {
LABEL_9:
      v23 = *(_QWORD *)(v10 + 128);
      v24 = v21[1];
      if ( !v23 )
        goto LABEL_109;
      goto LABEL_10;
    }
    while ( v22 != -4096 )
    {
      if ( v22 == -8192 && !v18 )
        v18 = v21;
      v20 = v16 & (v17 + v20);
      v21 = &v15[2 * v20];
      v22 = *v21;
      if ( v11 == *v21 )
        goto LABEL_9;
      ++v17;
    }
    v12 = 2 * v14;
    if ( !v18 )
      v18 = v21;
    v89 = *(_DWORD *)(v13 + 72) + 1;
    if ( 4 * v89 < 3 * v14 )
    {
      if ( v14 >> 3 >= v14 - *(_DWORD *)(v13 + 76) - v89 )
      {
        v304 = v6;
        v292 = v5;
        v276 = *(_DWORD *)(v13 + 80);
        v191 = ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4) | ((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1);
        v192 = ((((v191 >> 8) | v191) >> 16) | (v191 >> 8) | v191) + 1;
        if ( (unsigned int)v192 < 0x40 )
          LODWORD(v192) = 64;
        *(_DWORD *)(v13 + 80) = v192;
        v193 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v192, 8);
        v194 = *(unsigned int *)(v13 + 80);
        v5 = v292;
        v6 = v304;
        *(_QWORD *)(v13 + 64) = v193;
        v195 = v194;
        v196 = 16 * v194;
        v197 = &v193[(unsigned __int64)v196 / 8];
        if ( v15 )
        {
          *(_QWORD *)(v13 + 72) = 0;
          v198 = &v15[2 * v276];
          if ( v196 )
          {
            if ( (v196 & 0x10) == 0 || (*v193 = -4096, v193 += 2, v193 != v197) )
            {
              do
              {
                *v193 = -4096;
                v193 += 4;
                *(v193 - 2) = -4096;
              }
              while ( v193 != v197 );
            }
          }
          v277 = v10;
          v199 = v15;
          v293 = v11;
          do
          {
            v200 = *v199;
            if ( *v199 != -4096 && v200 != -8192 )
            {
              v201 = *(_DWORD *)(v13 + 80);
              if ( !v201 )
              {
                *(_QWORD *)&dword_0 = *v199;
                BUG();
              }
              v202 = v201 - 1;
              v203 = *(_QWORD *)(v13 + 64);
              v204 = v202 & (((unsigned int)v200 >> 9) ^ ((unsigned int)v200 >> 4));
              v205 = (_QWORD *)(v203 + 16LL * v204);
              v206 = *v205;
              if ( v200 != *v205 )
              {
                v312 = 1;
                v310 = nullptr;
                while ( v206 != -4096 )
                {
                  if ( v206 == -8192 )
                  {
                    if ( v310 )
                      v205 = v310;
                    v310 = v205;
                  }
                  v204 = v202 & (v312 + v204);
                  v205 = (_QWORD *)(v203 + 16LL * v204);
                  v206 = *v205;
                  if ( v200 == *v205 )
                    goto LABEL_248;
                  ++v312;
                }
                if ( v310 )
                  v205 = v310;
              }
LABEL_248:
              *v205 = v200;
              v205[1] = v199[1];
              ++*(_DWORD *)(v13 + 72);
            }
            v199 += 2;
          }
          while ( v198 != v199 );
          v10 = v277;
          v11 = v293;
          v278 = v6;
          v294 = v5;
          operator delete();
          v197 = *(_QWORD **)(v13 + 64);
          v195 = *(_DWORD *)(v13 + 80);
          v6 = v278;
          v5 = v294;
          v89 = *(_DWORD *)(v13 + 72) + 1;
        }
        else
        {
          *(_QWORD *)(v13 + 72) = 0;
          if ( v193 == v197 )
          {
            v89 = 1;
          }
          else
          {
            if ( (v196 & 0x10) == 0 || (*v193 = -4096, v193 += 2, v193 != v197) )
            {
              do
              {
                *v193 = -4096;
                v193 += 4;
                *(v193 - 2) = -4096;
              }
              while ( v193 != v197 );
            }
            v197 = *(_QWORD **)(v13 + 64);
            v195 = *(_DWORD *)(v13 + 80);
            v89 = *(_DWORD *)(v13 + 72) + 1;
          }
        }
        if ( !v195 )
          goto LABEL_448;
        v207 = v195 - 1;
        v208 = 1;
        v209 = nullptr;
        LODWORD(v210) = (v195 - 1) & v19;
        v18 = &v197[2 * (unsigned int)v210];
        v211 = *v18;
        if ( v11 != *v18 )
        {
          while ( v211 != -4096 )
          {
            if ( !v209 && v211 == -8192 )
              v209 = v18;
            v210 = v207 & (unsigned int)(v210 + v208);
            v18 = &v197[2 * v210];
            v211 = *v18;
            if ( v11 == *v18 )
              goto LABEL_106;
            ++v208;
          }
          if ( v209 )
            v18 = v209;
        }
      }
    }
    else
    {
LABEL_166:
      v303 = v6;
      v290 = v5;
      v271 = *(_DWORD *)(v13 + 80);
      v130 = ((((((((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                  | (unsigned int)(v12 - 1)
                  | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
                | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                | (unsigned int)(v12 - 1)
                | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 8)
              | (((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                | (unsigned int)(v12 - 1)
                | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
              | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
              | (unsigned int)(v12 - 1)
              | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 16)
            | (((((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                | (unsigned int)(v12 - 1)
                | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
              | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
              | (unsigned int)(v12 - 1)
              | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 8)
            | (((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
              | (unsigned int)(v12 - 1)
              | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
            | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
            | (unsigned int)(v12 - 1)
            | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1))
           + 1;
      if ( (unsigned int)v130 < 0x40 )
        LODWORD(v130) = 64;
      *(_DWORD *)(v13 + 80) = v130;
      v131 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v130, 8);
      v132 = *(unsigned int *)(v13 + 80);
      v5 = v290;
      v6 = v303;
      *(_QWORD *)(v13 + 64) = v131;
      v133 = v132;
      v134 = 16 * v132;
      v135 = &v131[(unsigned __int64)v134 / 8];
      if ( v15 )
      {
        *(_QWORD *)(v13 + 72) = 0;
        v136 = &v15[2 * v271];
        if ( v134 )
        {
          if ( (v134 & 0x10) == 0 || (*v131 = -4096, v131 += 2, v131 != v135) )
          {
            do
            {
              *v131 = -4096;
              v131 += 4;
              *(v131 - 2) = -4096;
            }
            while ( v131 != v135 );
          }
        }
        v137 = v15;
        if ( v15 != v136 )
        {
          v272 = v10;
          v138 = v11;
          do
          {
            v139 = *v137;
            if ( *v137 != -4096 && v139 != -8192 )
            {
              v140 = *(_DWORD *)(v13 + 80);
              if ( !v140 )
              {
                *(_QWORD *)&dword_0 = *v137;
                BUG();
              }
              v141 = v140 - 1;
              v142 = *(_QWORD *)(v13 + 64);
              v143 = v141 & (((unsigned int)v139 >> 9) ^ ((unsigned int)v139 >> 4));
              v144 = (_QWORD *)(v142 + 16LL * v143);
              v145 = *v144;
              if ( v139 != *v144 )
              {
                v307 = 1;
                v297 = nullptr;
                while ( v145 != -4096 )
                {
                  if ( v145 == -8192 )
                  {
                    if ( v297 )
                      v144 = v297;
                    v297 = v144;
                  }
                  v143 = v141 & (v307 + v143);
                  v144 = (_QWORD *)(v142 + 16LL * v143);
                  v145 = *v144;
                  if ( v139 == *v144 )
                    goto LABEL_179;
                  ++v307;
                }
                if ( v297 )
                  v144 = v297;
              }
LABEL_179:
              *v144 = v139;
              v144[1] = v137[1];
              ++*(_DWORD *)(v13 + 72);
            }
            v137 += 2;
          }
          while ( v136 != v137 );
          v11 = v138;
          v10 = v272;
        }
        v291 = v6;
        v273 = v5;
        operator delete();
        v135 = *(_QWORD **)(v13 + 64);
        v133 = *(_DWORD *)(v13 + 80);
        v5 = v273;
        v6 = v291;
        v89 = *(_DWORD *)(v13 + 72) + 1;
      }
      else
      {
        *(_QWORD *)(v13 + 72) = 0;
        if ( v131 == v135 )
        {
          v89 = 1;
        }
        else
        {
          if ( (v134 & 0x10) == 0 || (*v131 = -4096, v131 += 2, v131 != v135) )
          {
            do
            {
              *v131 = -4096;
              v131 += 4;
              *(v131 - 2) = -4096;
            }
            while ( v131 != v135 );
          }
          v135 = *(_QWORD **)(v13 + 64);
          v133 = *(_DWORD *)(v13 + 80);
          v89 = *(_DWORD *)(v13 + 72) + 1;
        }
      }
      if ( !v133 )
      {
LABEL_448:
        *(_DWORD *)(v13 + 72) = v89;
        BUG();
      }
      v146 = v133 - 1;
      LODWORD(v147) = (v133 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v18 = &v135[2 * (unsigned int)v147];
      v148 = *v18;
      if ( v11 != *v18 )
      {
        v149 = 1;
        v150 = nullptr;
        while ( v148 != -4096 )
        {
          if ( !v150 && v148 == -8192 )
            v150 = v18;
          v147 = v146 & (unsigned int)(v147 + v149);
          v18 = &v135[2 * v147];
          v148 = *v18;
          if ( v11 == *v18 )
            goto LABEL_106;
          ++v149;
        }
        if ( v150 )
          v18 = v150;
      }
    }
LABEL_106:
    *(_DWORD *)(v13 + 72) = v89;
    if ( *v18 != -4096 )
      --*(_DWORD *)(v13 + 76);
    *v18 = v11;
    v24 = 0;
    v18[1] = 0;
    v23 = *(_QWORD *)(v10 + 128);
    if ( !v23 )
    {
LABEL_109:
      v286 = v6;
      v265 = v5;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104));
      v5 = v265;
      v6 = v286;
      v23 = *(_QWORD *)(v10 + 128);
      if ( !v23 )
        goto LABEL_11;
    }
LABEL_10:
    v23 = *(_QWORD *)(v23 + 88);
LABEL_11:
    v25 = 0;
    v26 = *(_QWORD *)(a5 + 72);
    v27 = *(_DWORD *)(v26 + 80);
    v28 = *(__int64 **)(v26 + 64);
    if ( !v27 )
      goto LABEL_142;
    v29 = v27 - 1;
    v30 = 1;
    v31 = nullptr;
    v32 = ((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4);
    v33 = v29 & v32;
    v34 = &v28[2 * ((unsigned int)v29 & v32)];
    v35 = *v34;
    if ( v23 == *v34 )
    {
LABEL_13:
      v36 = v34[1];
      goto LABEL_14;
    }
    while ( v35 != -4096 )
    {
      if ( v35 == -8192 && !v31 )
        v31 = v34;
      v33 = v29 & (v30 + v33);
      v34 = &v28[2 * v33];
      v35 = *v34;
      if ( v23 == *v34 )
        goto LABEL_13;
      ++v30;
    }
    v25 = 2 * v27;
    if ( !v31 )
      v31 = v34;
    v88 = *(_DWORD *)(v26 + 72) + 1;
    if ( 4 * v88 < 3 * v27 )
    {
      if ( v27 >> 3 >= v27 - *(_DWORD *)(v26 + 76) - v88 )
      {
        v305 = v6;
        v295 = v5;
        v279 = *(_DWORD *)(v26 + 80);
        v212 = ((((v29 | (v29 >> 1)) >> 2) | v29 | (v29 >> 1)) >> 4) | ((v29 | (v29 >> 1)) >> 2) | v29 | (v29 >> 1);
        v213 = ((((v212 >> 8) | v212) >> 16) | (v212 >> 8) | v212) + 1;
        if ( (unsigned int)v213 < 0x40 )
          LODWORD(v213) = 64;
        *(_DWORD *)(v26 + 80) = v213;
        v214 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v213, 8);
        v215 = *(unsigned int *)(v26 + 80);
        v5 = v295;
        v6 = v305;
        *(_QWORD *)(v26 + 64) = v214;
        v216 = v215;
        v217 = 16 * v215;
        v218 = &v214[(unsigned __int64)v217 / 8];
        if ( v28 )
        {
          *(_QWORD *)(v26 + 72) = 0;
          v219 = &v28[2 * v279];
          if ( v217 )
          {
            if ( (v217 & 0x10) == 0 || (*v214 = -4096, v214 += 2, v214 != v218) )
            {
              do
              {
                *v214 = -4096;
                v214 += 4;
                *(v214 - 2) = -4096;
              }
              while ( v214 != v218 );
            }
          }
          v280 = v23;
          v220 = v28;
          v296 = v7;
          v221 = v5;
          do
          {
            v222 = *v220;
            if ( *v220 != -4096 && v222 != -8192 )
            {
              v223 = *(_DWORD *)(v26 + 80);
              if ( !v223 )
              {
                *(_QWORD *)&dword_0 = *v220;
                BUG();
              }
              v224 = v223 - 1;
              v225 = *(_QWORD *)(v26 + 64);
              v226 = v224 & (((unsigned int)v222 >> 9) ^ ((unsigned int)v222 >> 4));
              v227 = (_QWORD *)(v225 + 16LL * v226);
              v228 = *v227;
              if ( v222 != *v227 )
              {
                v311 = 1;
                v309 = nullptr;
                while ( v228 != -4096 )
                {
                  if ( v228 == -8192 )
                  {
                    if ( v309 )
                      v227 = v309;
                    v309 = v227;
                  }
                  v226 = v224 & (v311 + v226);
                  v227 = (_QWORD *)(v225 + 16LL * v226);
                  v228 = *v227;
                  if ( v222 == *v227 )
                    goto LABEL_269;
                  ++v311;
                }
                if ( v309 )
                  v227 = v309;
              }
LABEL_269:
              *v227 = v222;
              v227[1] = v220[1];
              ++*(_DWORD *)(v26 + 72);
            }
            v220 += 2;
          }
          while ( v219 != v220 );
          v306 = v221;
          v23 = v280;
          v7 = v296;
          v281 = v6;
          operator delete();
          v218 = *(_QWORD **)(v26 + 64);
          v216 = *(_DWORD *)(v26 + 80);
          v6 = v281;
          v5 = v306;
          v88 = *(_DWORD *)(v26 + 72) + 1;
        }
        else
        {
          *(_QWORD *)(v26 + 72) = 0;
          if ( v214 == v218 )
          {
            v88 = 1;
          }
          else
          {
            if ( (v217 & 0x10) == 0 || (*v214 = -4096, v214 += 2, v214 != v218) )
            {
              do
              {
                *v214 = -4096;
                v214 += 4;
                *(v214 - 2) = -4096;
              }
              while ( v214 != v218 );
            }
            v218 = *(_QWORD **)(v26 + 64);
            v216 = *(_DWORD *)(v26 + 80);
            v88 = *(_DWORD *)(v26 + 72) + 1;
          }
        }
        if ( !v216 )
          goto LABEL_449;
        v229 = v216 - 1;
        v230 = 1;
        v231 = nullptr;
        LODWORD(v232) = (v216 - 1) & v32;
        v31 = &v218[2 * (unsigned int)v232];
        v233 = *v31;
        if ( v23 != *v31 )
        {
          while ( v233 != -4096 )
          {
            if ( v233 == -8192 && !v231 )
              v231 = v31;
            v232 = v229 & (unsigned int)(v232 + v230);
            v31 = &v218[2 * v232];
            v233 = *v31;
            if ( v23 == *v31 )
              goto LABEL_93;
            ++v230;
          }
          if ( v231 )
            v31 = v231;
        }
      }
    }
    else
    {
LABEL_142:
      v302 = v6;
      v288 = v5;
      v268 = *(_DWORD *)(v26 + 80);
      v110 = ((((((((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                  | (unsigned int)(v25 - 1)
                  | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
                | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                | (unsigned int)(v25 - 1)
                | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 8)
              | (((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                | (unsigned int)(v25 - 1)
                | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
              | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
              | (unsigned int)(v25 - 1)
              | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 16)
            | (((((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                | (unsigned int)(v25 - 1)
                | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
              | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
              | (unsigned int)(v25 - 1)
              | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 8)
            | (((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
              | (unsigned int)(v25 - 1)
              | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
            | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
            | (unsigned int)(v25 - 1)
            | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1))
           + 1;
      if ( (unsigned int)v110 < 0x40 )
        LODWORD(v110) = 64;
      *(_DWORD *)(v26 + 80) = v110;
      v111 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v110, 8);
      v112 = *(unsigned int *)(v26 + 80);
      v5 = v288;
      v6 = v302;
      *(_QWORD *)(v26 + 64) = v111;
      v113 = v112;
      v114 = 16 * v112;
      v115 = &v111[(unsigned __int64)v114 / 8];
      if ( v28 )
      {
        *(_QWORD *)(v26 + 72) = 0;
        v116 = &v28[2 * v268];
        if ( v114 )
        {
          if ( (v114 & 0x10) == 0 || (*v111 = -4096, v111 += 2, v111 != v115) )
          {
            do
            {
              *v111 = -4096;
              v111 += 4;
              *(v111 - 2) = -4096;
            }
            while ( v111 != v115 );
          }
        }
        v117 = v28;
        if ( v28 != v116 )
        {
          v269 = v23;
          do
          {
            v118 = *v117;
            if ( *v117 != -4096 && v118 != -8192 )
            {
              v119 = *(_DWORD *)(v26 + 80);
              if ( !v119 )
              {
                *(_QWORD *)&dword_0 = *v117;
                BUG();
              }
              v120 = v119 - 1;
              v121 = *(_QWORD *)(v26 + 64);
              v122 = v120 & (((unsigned int)v118 >> 9) ^ ((unsigned int)v118 >> 4));
              v123 = (_QWORD *)(v121 + 16LL * v122);
              v124 = *v123;
              if ( v118 != *v123 )
              {
                v308 = 1;
                v298 = nullptr;
                while ( v124 != -4096 )
                {
                  if ( v124 == -8192 )
                  {
                    if ( v298 )
                      v123 = v298;
                    v298 = v123;
                  }
                  v122 = v120 & (v308 + v122);
                  v123 = (_QWORD *)(v121 + 16LL * v122);
                  v124 = *v123;
                  if ( v118 == *v123 )
                    goto LABEL_155;
                  ++v308;
                }
                if ( v298 )
                  v123 = v298;
              }
LABEL_155:
              *v123 = v118;
              v123[1] = v117[1];
              ++*(_DWORD *)(v26 + 72);
            }
            v117 += 2;
          }
          while ( v116 != v117 );
          v23 = v269;
        }
        v289 = v6;
        v270 = v5;
        operator delete();
        v115 = *(_QWORD **)(v26 + 64);
        v113 = *(_DWORD *)(v26 + 80);
        v5 = v270;
        v6 = v289;
        v88 = *(_DWORD *)(v26 + 72) + 1;
      }
      else
      {
        *(_QWORD *)(v26 + 72) = 0;
        if ( v111 == v115 )
        {
          v88 = 1;
        }
        else
        {
          if ( (v114 & 0x10) == 0 || (*v111 = -4096, v111 += 2, v111 != v115) )
          {
            do
            {
              *v111 = -4096;
              v111 += 4;
              *(v111 - 2) = -4096;
            }
            while ( v111 != v115 );
          }
          v115 = *(_QWORD **)(v26 + 64);
          v113 = *(_DWORD *)(v26 + 80);
          v88 = *(_DWORD *)(v26 + 72) + 1;
        }
      }
      if ( !v113 )
      {
LABEL_449:
        *(_DWORD *)(v26 + 72) = v88;
        BUG();
      }
      v125 = v113 - 1;
      LODWORD(v126) = (v113 - 1) & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
      v31 = &v115[2 * (unsigned int)v126];
      v127 = *v31;
      if ( v23 != *v31 )
      {
        v128 = 1;
        v129 = nullptr;
        while ( v127 != -4096 )
        {
          if ( v127 == -8192 && !v129 )
            v129 = v31;
          v126 = v125 & (unsigned int)(v126 + v128);
          v31 = &v115[2 * v126];
          v127 = *v31;
          if ( v23 == *v31 )
            goto LABEL_93;
          ++v128;
        }
        if ( v129 )
          v31 = v129;
      }
    }
LABEL_93:
    *(_DWORD *)(v26 + 72) = v88;
    if ( *v31 != -4096 )
      --*(_DWORD *)(v26 + 76);
    *v31 = v23;
    v36 = 0;
    v31[1] = 0;
LABEL_14:
    if ( v24 <= v36 )
      break;
    --v7;
    *(_QWORD *)(v6 + 8 * v5) = *(_QWORD *)(v6 + 8 * v7);
    if ( v7 >= v251 )
      goto LABEL_16;
LABEL_4:
    v5 = v7;
  }
  *(_QWORD *)(v6 + 8 * v5) = *v237;
  if ( v7 < v251 )
    goto LABEL_4;
LABEL_16:
  v37 = v7;
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v7 )
    goto LABEL_116;
LABEL_17:
  v38 = (v37 - 1) / 2;
  if ( v37 <= v250 )
  {
    v250 = v37;
    goto LABEL_331;
  }
  while ( 2 )
  {
    v59 = (_QWORD *)(a1 + 8 * v38);
    v60 = *v59;
    v61 = *(_QWORD *)(a4 + 128);
    if ( v61
      || (v255 = v38,
          v242 = v37,
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a4 + 104) + 96LL), *(_QWORD *)(a4 + 104)),
          v37 = v242,
          v38 = v255,
          (v61 = *(_QWORD *)(a4 + 128)) != 0) )
    {
      v61 = *(_QWORD *)(v61 + 88);
    }
    v62 = 0;
    v63 = *(_QWORD *)(a5 + 72);
    v64 = *(_DWORD *)(v63 + 80);
    v65 = *(__int64 **)(v63 + 64);
    if ( !v64 )
    {
LABEL_30:
      v264 = v38;
      v252 = v37;
      v238 = *(_DWORD *)(v63 + 80);
      v66 = ((((((((((unsigned int)(v62 - 1) | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 2)
                 | (unsigned int)(v62 - 1)
                 | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 4)
               | (((unsigned int)(v62 - 1) | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 2)
               | (unsigned int)(v62 - 1)
               | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v62 - 1) | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 2)
               | (unsigned int)(v62 - 1)
               | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 4)
             | (((unsigned int)(v62 - 1) | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 2)
             | (unsigned int)(v62 - 1)
             | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v62 - 1) | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 2)
               | (unsigned int)(v62 - 1)
               | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 4)
             | (((unsigned int)(v62 - 1) | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 2)
             | (unsigned int)(v62 - 1)
             | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v62 - 1) | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 2)
             | (unsigned int)(v62 - 1)
             | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 4)
           | (((unsigned int)(v62 - 1) | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1)) >> 2)
           | (unsigned int)(v62 - 1)
           | ((unsigned __int64)(unsigned int)(v62 - 1) >> 1))
          + 1;
      if ( (unsigned int)v66 < 0x40 )
        LODWORD(v66) = 64;
      *(_DWORD *)(v63 + 80) = v66;
      v67 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v66, 8);
      v68 = *(unsigned int *)(v63 + 80);
      v37 = v252;
      v38 = v264;
      *(_QWORD *)(v63 + 64) = v67;
      v69 = v68;
      v70 = 16 * v68;
      v71 = &v67[(unsigned __int64)v70 / 8];
      if ( v65 )
      {
        *(_QWORD *)(v63 + 72) = 0;
        v72 = &v65[2 * v238];
        if ( v70 )
        {
          if ( (v70 & 0x10) == 0 || (*v67 = -4096, v67 += 2, v67 != v71) )
          {
            do
            {
              *v67 = -4096;
              v67 += 4;
              *(v67 - 2) = -4096;
            }
            while ( v67 != v71 );
          }
        }
        v73 = v65;
        if ( v65 != v72 )
        {
          v239 = v252;
          do
          {
            v74 = *v73;
            if ( *v73 != -4096 && v74 != -8192 )
            {
              v75 = *(_DWORD *)(v63 + 80);
              if ( !v75 )
              {
                *(_QWORD *)&dword_0 = *v73;
                BUG();
              }
              v76 = v75 - 1;
              v77 = *(_QWORD *)(v63 + 64);
              v78 = v76 & (((unsigned int)v74 >> 9) ^ ((unsigned int)v74 >> 4));
              v79 = (_QWORD *)(v77 + 16LL * v78);
              v80 = *v79;
              if ( v74 != *v79 )
              {
                v282 = 1;
                v262 = nullptr;
                while ( v80 != -4096 )
                {
                  if ( v80 == -8192 )
                  {
                    if ( v262 )
                      v79 = v262;
                    v262 = v79;
                  }
                  v78 = v76 & (v282 + v78);
                  v79 = (_QWORD *)(v77 + 16LL * v78);
                  v80 = *v79;
                  if ( v74 == *v79 )
                    goto LABEL_43;
                  ++v282;
                }
                if ( v262 )
                  v79 = v262;
              }
LABEL_43:
              *v79 = v74;
              v79[1] = v73[1];
              ++*(_DWORD *)(v63 + 72);
            }
            v73 += 2;
          }
          while ( v72 != v73 );
          v37 = v239;
        }
        v253 = v38;
        v240 = v37;
        operator delete();
        v71 = *(_QWORD **)(v63 + 64);
        v69 = *(_DWORD *)(v63 + 80);
        v37 = v240;
        v38 = v253;
        v81 = *(_DWORD *)(v63 + 72) + 1;
      }
      else
      {
        *(_QWORD *)(v63 + 72) = 0;
        if ( v67 == v71 )
        {
          v81 = 1;
        }
        else
        {
          if ( (v70 & 0x10) == 0 || (*v67 = -4096, v67 += 2, v67 != v71) )
          {
            do
            {
              *v67 = -4096;
              v67 += 4;
              *(v67 - 2) = -4096;
            }
            while ( v67 != v71 );
          }
          v71 = *(_QWORD **)(v63 + 64);
          v69 = *(_DWORD *)(v63 + 80);
          v81 = *(_DWORD *)(v63 + 72) + 1;
        }
      }
      if ( !v69 )
        goto LABEL_452;
      v82 = v69 - 1;
      LODWORD(v83) = (v69 - 1) & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
      v41 = &v71[2 * (unsigned int)v83];
      v84 = *v41;
      if ( v61 != *v41 )
      {
        v85 = 1;
        v86 = nullptr;
        while ( v84 != -4096 )
        {
          if ( v84 == -8192 && !v86 )
            v86 = v41;
          v83 = v82 & (unsigned int)(v83 + v85);
          v41 = &v71[2 * v83];
          v84 = *v41;
          if ( v61 == *v41 )
            goto LABEL_64;
          ++v85;
        }
        goto LABEL_51;
      }
      goto LABEL_64;
    }
    v39 = v64 - 1;
    v40 = 1;
    v41 = nullptr;
    v42 = v39 & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
    v43 = &v65[2 * v42];
    v44 = *v43;
    if ( v61 != *v43 )
    {
      while ( v44 != -4096 )
      {
        if ( v44 == -8192 && !v41 )
          v41 = v43;
        v42 = v39 & (v40 + v42);
        v43 = &v65[2 * v42];
        v44 = *v43;
        if ( v61 == *v43 )
          goto LABEL_20;
        ++v40;
      }
      v62 = 2 * v64;
      if ( !v41 )
        v41 = v43;
      v81 = *(_DWORD *)(v63 + 72) + 1;
      if ( 4 * v81 >= 3 * v64 )
        goto LABEL_30;
      if ( v64 >> 3 >= v64 - *(_DWORD *)(v63 + 76) - v81 )
      {
        v274 = v38;
        v258 = v37;
        v246 = *(_DWORD *)(v63 + 80);
        v151 = ((((v39 | (v39 >> 1)) >> 2) | v39 | (v39 >> 1)) >> 4) | ((v39 | (v39 >> 1)) >> 2) | v39 | (v39 >> 1);
        v152 = ((((v151 >> 8) | v151) >> 16) | (v151 >> 8) | v151) + 1;
        if ( (unsigned int)v152 < 0x40 )
          LODWORD(v152) = 64;
        *(_DWORD *)(v63 + 80) = v152;
        v153 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v152, 8);
        v154 = *(unsigned int *)(v63 + 80);
        v37 = v258;
        v38 = v274;
        *(_QWORD *)(v63 + 64) = v153;
        v155 = v154;
        v156 = 16 * v154;
        v157 = &v153[(unsigned __int64)v156 / 8];
        if ( v65 )
        {
          *(_QWORD *)(v63 + 72) = 0;
          v158 = &v65[2 * v246];
          if ( v156 )
          {
            if ( (v156 & 0x10) == 0 || (*v153 = -4096, v153 += 2, v153 != v157) )
            {
              do
              {
                *v153 = -4096;
                v153 += 4;
                *(v153 - 2) = -4096;
              }
              while ( v153 != v157 );
            }
          }
          v247 = v258;
          v159 = v65;
          v259 = v274;
          do
          {
            v160 = *v159;
            if ( *v159 != -8192 && v160 != -4096 )
            {
              v161 = *(_DWORD *)(v63 + 80);
              if ( !v161 )
              {
                *(_QWORD *)&dword_0 = *v159;
                BUG();
              }
              v162 = v161 - 1;
              v163 = *(_QWORD *)(v63 + 64);
              v164 = v162 & (((unsigned int)v160 >> 9) ^ ((unsigned int)v160 >> 4));
              v165 = (_QWORD *)(v163 + 16LL * v164);
              v166 = *v165;
              if ( v160 != *v165 )
              {
                v299 = 1;
                v284 = nullptr;
                while ( v166 != -4096 )
                {
                  if ( v166 == -8192 )
                  {
                    if ( v284 )
                      v165 = v284;
                    v284 = v165;
                  }
                  v164 = v162 & (v299 + v164);
                  v165 = (_QWORD *)(v163 + 16LL * v164);
                  v166 = *v165;
                  if ( v160 == *v165 )
                    goto LABEL_202;
                  ++v299;
                }
                if ( v284 )
                  v165 = v284;
              }
LABEL_202:
              *v165 = v160;
              v165[1] = v159[1];
              ++*(_DWORD *)(v63 + 72);
            }
            v159 += 2;
          }
          while ( v158 != v159 );
          operator delete();
          v157 = *(_QWORD **)(v63 + 64);
          v155 = *(_DWORD *)(v63 + 80);
          v38 = v259;
          v37 = v247;
          v81 = *(_DWORD *)(v63 + 72) + 1;
        }
        else
        {
          *(_QWORD *)(v63 + 72) = 0;
          if ( v153 == v157 )
          {
            v81 = 1;
          }
          else
          {
            if ( (v156 & 0x10) == 0 || (*v153 = -4096, v153 += 2, v153 != v157) )
            {
              do
              {
                *v153 = -4096;
                v153 += 4;
                *(v153 - 2) = -4096;
              }
              while ( v153 != v157 );
            }
            v157 = *(_QWORD **)(v63 + 64);
            v155 = *(_DWORD *)(v63 + 80);
            v81 = *(_DWORD *)(v63 + 72) + 1;
          }
        }
        if ( !v155 )
        {
LABEL_452:
          *(_DWORD *)(v63 + 72) = v81;
          BUG();
        }
        v167 = v155 - 1;
        v168 = 1;
        v86 = nullptr;
        LODWORD(v169) = (v155 - 1) & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
        v41 = &v157[2 * (unsigned int)v169];
        v170 = *v41;
        if ( *v41 != v61 )
        {
          while ( v170 != -4096 )
          {
            if ( v170 == -8192 && !v86 )
              v86 = v41;
            v169 = v167 & (unsigned int)(v169 + v168);
            v41 = &v157[2 * v169];
            v170 = *v41;
            if ( v61 == *v41 )
              goto LABEL_64;
            ++v168;
          }
LABEL_51:
          if ( v86 )
            v41 = v86;
        }
      }
LABEL_64:
      *(_DWORD *)(v63 + 72) = v81;
      if ( *v41 != -4096 )
        --*(_DWORD *)(v63 + 76);
      *v41 = v61;
      v46 = 0;
      v41[1] = 0;
      v45 = *(_QWORD *)(v60 + 128);
      if ( !v45 )
        goto LABEL_67;
LABEL_21:
      v45 = *(_QWORD *)(v45 + 88);
      goto LABEL_22;
    }
LABEL_20:
    v45 = *(_QWORD *)(v60 + 128);
    v46 = v43[1];
    if ( v45 )
      goto LABEL_21;
LABEL_67:
    v254 = v38;
    v241 = v37;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v60 + 104) + 96LL), *(_QWORD *)(v60 + 104));
    v37 = v241;
    v38 = v254;
    v45 = *(_QWORD *)(v60 + 128);
    if ( v45 )
      goto LABEL_21;
LABEL_22:
    v47 = 0;
    v48 = *(_QWORD *)(a5 + 72);
    v49 = *(_DWORD *)(v48 + 80);
    v50 = *(__int64 **)(v48 + 64);
    if ( !v49 )
      goto LABEL_118;
    v51 = v49 - 1;
    v52 = 1;
    v53 = nullptr;
    v54 = v51 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
    v55 = &v50[2 * v54];
    v56 = *v55;
    if ( v45 == *v55 )
    {
LABEL_24:
      v57 = v55[1];
      result = (_QWORD *)(a1 + 8 * v37);
      if ( v46 <= v57 )
        goto LABEL_82;
      goto LABEL_25;
    }
    while ( v56 != -4096 )
    {
      if ( !v53 && v56 == -8192 )
        v53 = v55;
      v54 = v51 & (v52 + v54);
      v55 = &v50[2 * v54];
      v56 = *v55;
      if ( v45 == *v55 )
        goto LABEL_24;
      ++v52;
    }
    v47 = 2 * v49;
    if ( !v53 )
      v53 = v55;
    v87 = *(_DWORD *)(v48 + 72) + 1;
    if ( 4 * v87 < 3 * v49 )
    {
      if ( v49 >> 3 >= v49 - *(_DWORD *)(v48 + 76) - v87 )
      {
        v275 = v38;
        v260 = v37;
        v248 = *(_DWORD *)(v48 + 80);
        v171 = ((((v51 | (v51 >> 1)) >> 2) | v51 | (v51 >> 1)) >> 4) | ((v51 | (v51 >> 1)) >> 2) | v51 | (v51 >> 1);
        v172 = ((((v171 >> 8) | v171) >> 16) | (v171 >> 8) | v171) + 1;
        if ( (unsigned int)v172 < 0x40 )
          LODWORD(v172) = 64;
        *(_DWORD *)(v48 + 80) = v172;
        v173 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v172, 8);
        v174 = *(unsigned int *)(v48 + 80);
        v37 = v260;
        v38 = v275;
        *(_QWORD *)(v48 + 64) = v173;
        v175 = v174;
        v176 = 16 * v174;
        v177 = &v173[(unsigned __int64)v176 / 8];
        if ( v50 )
        {
          *(_QWORD *)(v48 + 72) = 0;
          v178 = &v50[2 * v248];
          if ( v176 )
          {
            if ( (v176 & 0x10) == 0 || (*v173 = -4096, v173 += 2, v173 != v177) )
            {
              do
              {
                *v173 = -4096;
                v173 += 4;
                *(v173 - 2) = -4096;
              }
              while ( v173 != v177 );
            }
          }
          v249 = v260;
          v179 = v50;
          v261 = v275;
          do
          {
            v180 = *v179;
            if ( *v179 != -4096 && v180 != -8192 )
            {
              v181 = *(_DWORD *)(v48 + 80);
              if ( !v181 )
              {
                *(_QWORD *)&dword_0 = *v179;
                BUG();
              }
              v182 = v181 - 1;
              v183 = *(_QWORD *)(v48 + 64);
              v184 = v182 & (((unsigned int)v180 >> 9) ^ ((unsigned int)v180 >> 4));
              v185 = (_QWORD *)(v183 + 16LL * v184);
              v186 = *v185;
              if ( *v185 != v180 )
              {
                v300 = 1;
                v285 = nullptr;
                while ( v186 != -4096 )
                {
                  if ( !v285 )
                  {
                    if ( v186 != -8192 )
                      v185 = nullptr;
                    v285 = v185;
                  }
                  v184 = v182 & (v300 + v184);
                  v185 = (_QWORD *)(v183 + 16LL * v184);
                  v186 = *v185;
                  if ( v180 == *v185 )
                    goto LABEL_225;
                  ++v300;
                }
                if ( v285 )
                  v185 = v285;
              }
LABEL_225:
              *v185 = v180;
              v185[1] = v179[1];
              ++*(_DWORD *)(v48 + 72);
            }
            v179 += 2;
          }
          while ( v178 != v179 );
          operator delete();
          v177 = *(_QWORD **)(v48 + 64);
          v175 = *(_DWORD *)(v48 + 80);
          v38 = v261;
          v37 = v249;
          v87 = *(_DWORD *)(v48 + 72) + 1;
        }
        else
        {
          *(_QWORD *)(v48 + 72) = 0;
          if ( v173 == v177 )
          {
            v87 = 1;
          }
          else
          {
            if ( (v176 & 0x10) == 0 || (*v173 = -4096, v173 += 2, v173 != v177) )
            {
              do
              {
                *v173 = -4096;
                v173 += 4;
                *(v173 - 2) = -4096;
              }
              while ( v173 != v177 );
            }
            v177 = *(_QWORD **)(v48 + 64);
            v175 = *(_DWORD *)(v48 + 80);
            v87 = *(_DWORD *)(v48 + 72) + 1;
          }
        }
        if ( !v175 )
          goto LABEL_453;
        v187 = v175 - 1;
        v188 = 1;
        v109 = nullptr;
        LODWORD(v189) = (v175 - 1) & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
        v53 = &v177[2 * (unsigned int)v189];
        v190 = *v53;
        if ( v45 != *v53 )
        {
          while ( v190 != -4096 )
          {
            if ( v190 == -8192 && !v109 )
              v109 = v53;
            v189 = v187 & (unsigned int)(v189 + v188);
            v53 = &v177[2 * v189];
            v190 = *v53;
            if ( v45 == *v53 )
              goto LABEL_79;
            ++v188;
          }
          goto LABEL_139;
        }
      }
    }
    else
    {
LABEL_118:
      v267 = v38;
      v256 = v37;
      v243 = *(_DWORD *)(v48 + 80);
      v90 = ((((((((((unsigned int)(v47 - 1) | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 2)
                 | (unsigned int)(v47 - 1)
                 | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 4)
               | (((unsigned int)(v47 - 1) | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 2)
               | (unsigned int)(v47 - 1)
               | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v47 - 1) | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 2)
               | (unsigned int)(v47 - 1)
               | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 4)
             | (((unsigned int)(v47 - 1) | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 2)
             | (unsigned int)(v47 - 1)
             | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v47 - 1) | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 2)
               | (unsigned int)(v47 - 1)
               | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 4)
             | (((unsigned int)(v47 - 1) | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 2)
             | (unsigned int)(v47 - 1)
             | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v47 - 1) | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 2)
             | (unsigned int)(v47 - 1)
             | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 4)
           | (((unsigned int)(v47 - 1) | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1)) >> 2)
           | (unsigned int)(v47 - 1)
           | ((unsigned __int64)(unsigned int)(v47 - 1) >> 1))
          + 1;
      if ( (unsigned int)v90 < 0x40 )
        LODWORD(v90) = 64;
      *(_DWORD *)(v48 + 80) = v90;
      v91 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v90, 8);
      v92 = *(unsigned int *)(v48 + 80);
      v37 = v256;
      v38 = v267;
      *(_QWORD *)(v48 + 64) = v91;
      v93 = v92;
      v94 = 16 * v92;
      v95 = &v91[(unsigned __int64)v94 / 8];
      if ( v50 )
      {
        *(_QWORD *)(v48 + 72) = 0;
        v96 = &v50[2 * v243];
        if ( v94 )
        {
          if ( (v94 & 0x10) == 0 || (*v91 = -4096, v91 += 2, v91 != v95) )
          {
            do
            {
              *v91 = -4096;
              v91 += 4;
              *(v91 - 2) = -4096;
            }
            while ( v91 != v95 );
          }
        }
        v97 = v50;
        if ( v50 != v96 )
        {
          v244 = v256;
          do
          {
            v98 = *v97;
            if ( *v97 != -4096 && v98 != -8192 )
            {
              v99 = *(_DWORD *)(v48 + 80);
              if ( !v99 )
              {
                *(_QWORD *)&dword_0 = *v97;
                BUG();
              }
              v100 = v99 - 1;
              v101 = *(_QWORD *)(v48 + 64);
              v102 = v100 & (((unsigned int)v98 >> 9) ^ ((unsigned int)v98 >> 4));
              v103 = (_QWORD *)(v101 + 16LL * v102);
              v104 = *v103;
              if ( v98 != *v103 )
              {
                v283 = 1;
                v263 = nullptr;
                while ( v104 != -4096 )
                {
                  if ( !v263 )
                  {
                    if ( v104 != -8192 )
                      v103 = nullptr;
                    v263 = v103;
                  }
                  v102 = v100 & (v283 + v102);
                  v103 = (_QWORD *)(v101 + 16LL * v102);
                  v104 = *v103;
                  if ( v98 == *v103 )
                    goto LABEL_131;
                  ++v283;
                }
                if ( v263 )
                  v103 = v263;
              }
LABEL_131:
              *v103 = v98;
              v103[1] = v97[1];
              ++*(_DWORD *)(v48 + 72);
            }
            v97 += 2;
          }
          while ( v96 != v97 );
          v37 = v244;
        }
        v257 = v38;
        v245 = v37;
        operator delete();
        v95 = *(_QWORD **)(v48 + 64);
        v93 = *(_DWORD *)(v48 + 80);
        v37 = v245;
        v38 = v257;
        v87 = *(_DWORD *)(v48 + 72) + 1;
      }
      else
      {
        *(_QWORD *)(v48 + 72) = 0;
        if ( v91 == v95 )
        {
          v87 = 1;
        }
        else
        {
          if ( (v94 & 0x10) == 0 || (*v91 = -4096, v91 += 2, v91 != v95) )
          {
            do
            {
              *v91 = -4096;
              v91 += 4;
              *(v91 - 2) = -4096;
            }
            while ( v91 != v95 );
          }
          v95 = *(_QWORD **)(v48 + 64);
          v93 = *(_DWORD *)(v48 + 80);
          v87 = *(_DWORD *)(v48 + 72) + 1;
        }
      }
      if ( !v93 )
      {
LABEL_453:
        *(_DWORD *)(v48 + 72) = v87;
        BUG();
      }
      v105 = v93 - 1;
      LODWORD(v106) = (v93 - 1) & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
      v53 = &v95[2 * (unsigned int)v106];
      v107 = *v53;
      if ( v45 != *v53 )
      {
        v108 = 1;
        v109 = nullptr;
        while ( v107 != -4096 )
        {
          if ( v107 == -8192 && !v109 )
            v109 = v53;
          v106 = v105 & (unsigned int)(v106 + v108);
          v53 = &v95[2 * v106];
          v107 = *v53;
          if ( v45 == *v53 )
            goto LABEL_79;
          ++v108;
        }
LABEL_139:
        if ( v109 )
          v53 = v109;
      }
    }
LABEL_79:
    *(_DWORD *)(v48 + 72) = v87;
    if ( *v53 != -4096 )
      --*(_DWORD *)(v48 + 76);
    *v53 = v45;
    v53[1] = 0;
    result = (_QWORD *)(a1 + 8 * v37);
    if ( v46 <= 0 )
      goto LABEL_82;
LABEL_25:
    v37 = v38;
    *result = *v59;
    if ( v250 < v38 )
    {
      v38 = (v38 - 1) / 2;
      continue;
    }
    break;
  }
  result = v59;
LABEL_82:
  *result = a4;
  return result;
}

