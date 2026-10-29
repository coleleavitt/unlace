__int64 __fastcall sub_142E860(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __m128i a6, double a7)
{
  __int64 v7; // r15
  const __m128i *v9; // rbx
  char v10; // al
  bool v11; // r13
  __int16 v12; // dx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r13d
  __int16 v16; // ax
  __int64 v17; // r12
  _BOOL8 v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // rdx
  unsigned int *v27; // rsi
  bool v28; // cl
  __int16 v29; // ax
  __int64 v30; // r14
  __int64 v31; // rdx
  unsigned int v32; // r9d
  __int64 v33; // rdx
  char v34; // cl
  __int64 v35; // rsi
  unsigned int v36; // r8d
  char v37; // cl
  int v38; // r14d
  __int64 v39; // rdi
  __m128i v40; // xmm1
  __int32 v41; // eax
  char v42; // al
  char v43; // r14
  __int16 v44; // dx
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v48; // rdi
  void (*v49)(); // rax
  __int64 v50; // rax
  char v51; // al
  char v52; // r12
  char v53; // r13
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 *v57; // r11
  unsigned __int64 v58; // rax
  unsigned int v59; // esi
  __int64 *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int64 *v63; // r9
  unsigned __int64 *v64; // rdx
  unsigned __int64 v65; // r14
  unsigned int *v66; // rax
  __int64 v67; // rdx
  unsigned int *v68; // rcx
  bool v69; // al
  __int64 v70; // rdx
  char v71; // al
  int v72; // ecx
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rax
  __int64 v75; // r8
  int v76; // edx
  unsigned __int64 v77; // r10
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  unsigned int *v81; // rcx
  unsigned __int8 *v82; // rbx
  _QWORD *v83; // rdx
  __int64 v84; // rax
  unsigned __int8 *v85; // rbx
  _QWORD *v86; // rdx
  __int64 v87; // rax
  void **v88; // rbp
  unsigned __int64 v89; // rax
  void **v90; // r12
  void **v91; // rbx
  void **v92; // rdi
  void **v93; // rdi
  void **v94; // rbx
  void **v95; // r12
  unsigned __int8 *v96; // rbx
  _QWORD *v97; // rdx
  __int64 v98; // rax
  void **v99; // rbp
  unsigned __int64 v100; // rax
  void **v101; // r12
  void **v102; // rbx
  void **v103; // rdi
  void **v104; // rdi
  void **v105; // rbx
  void **v106; // r12
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  unsigned __int64 v110; // rdx
  __int64 v111; // rsi
  char v112; // al
  unsigned int v113; // r8d
  unsigned int v114; // r8d
  char v115; // al
  __int64 v116; // rbp
  unsigned int v117; // esi
  int v118; // eax
  __int64 v119; // rax
  int v120; // edx
  __int64 v121; // rsi
  int v122; // eax
  void **v123; // rbp
  unsigned __int64 v124; // rax
  void **v125; // rdx
  void **v126; // r14
  const __m128i *v127; // r15
  void **v128; // rbx
  void **v129; // rdi
  void **v130; // rdi
  void **v131; // r14
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  _QWORD *v134; // rax
  __int64 *v135; // r11
  __int64 v136; // rdx
  _QWORD *j; // rdx
  __int64 *v138; // r12
  __int64 v139; // rax
  int v140; // edx
  int v141; // r8d
  __int64 v142; // rcx
  _QWORD *v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // rax
  unsigned __int64 v146; // rax
  unsigned __int64 v147; // r13
  __int64 v148; // rax
  void **v149; // rax
  __int64 v150; // rax
  void **v151; // rax
  int v152; // ecx
  int v153; // r14d
  __int64 v154; // r11
  __int64 v155; // rsi
  unsigned int v156; // edx
  __int64 v157; // rsi
  unsigned int v158; // edx
  unsigned int v159; // eax
  char v160; // cl
  __int64 v161; // rsi
  __int64 v162; // rax
  int v163; // eax
  int v164; // eax
  __int64 v165; // rsi
  int v166; // eax
  __int64 v167; // rdx
  unsigned __int64 v168; // r14
  __int64 v169; // rax
  _QWORD *v170; // r8
  __int64 v171; // rax
  unsigned __int64 v172; // rdx
  int v173; // eax
  unsigned __int64 v174; // rdx
  int v175; // eax
  unsigned __int64 v176; // rdx
  int v177; // eax
  int v178; // edi
  __int64 *v179; // r10
  __int64 v180; // rdx
  int v181; // eax
  __int64 v182; // rdi
  int v183; // eax
  unsigned __int64 v184; // rax
  unsigned __int64 v185; // rax
  __int64 v186; // rax
  _QWORD *v187; // rax
  unsigned int v188; // r8d
  __int64 v189; // rdx
  _QWORD *i; // rdx
  __int64 *v191; // r12
  __int64 v192; // rax
  int v193; // edx
  int v194; // r10d
  __int64 v195; // rcx
  _QWORD *v196; // rdx
  __int64 v197; // rsi
  __int64 v198; // rax
  unsigned __int64 v199; // rax
  unsigned __int64 v200; // r13
  __int64 v201; // rax
  void **v202; // rax
  __int64 v203; // rax
  void **v204; // rax
  int v205; // r14d
  __int64 v206; // r11
  int v207; // r9d
  __int64 *v208; // rdi
  int v209; // eax
  __int64 v210; // rdx
  __int64 v211; // rsi
  int v212; // eax
  __int64 v213; // rdx
  __int64 v214; // rax
  __int64 v215; // rbp
  __int64 v216; // r12
  __int64 v217; // rbp
  void *v218; // rdi
  __int64 v219; // rax
  __int64 v220; // rbp
  __int64 v221; // r12
  __int64 v222; // rbp
  void *v223; // rdi
  __int64 v224; // rax
  __int64 v225; // rbp
  __int64 v226; // r12
  __int64 v227; // rbp
  void *v228; // rdi
  int v229; // eax
  int v230; // eax
  __int64 v231; // rsi
  int v232; // eax
  unsigned __int64 v233; // rsi
  __int64 v234; // rsi
  unsigned __int64 v235; // rdx
  _QWORD *v236; // rcx
  _QWORD *v237; // rdx
  _QWORD *v238; // rcx
  _QWORD *v239; // rdx
  int v240; // eax
  int v241; // r9d
  _QWORD *v242; // rdi
  int v243; // eax
  __int64 *v244; // rdi
  __int64 v245; // rcx
  _DWORD *v246; // rax
  _DWORD *v247; // rdx
  int v248; // r8d
  _QWORD *v249; // rdi
  int v250; // r9d
  int v252; // [rsp+14h] [rbp-144h]
  int v253; // [rsp+18h] [rbp-140h]
  __int64 v254; // [rsp+18h] [rbp-140h]
  void **v255; // [rsp+18h] [rbp-140h]
  _QWORD *v256; // [rsp+18h] [rbp-140h]
  char v257; // [rsp+20h] [rbp-138h]
  __int64 v258; // [rsp+20h] [rbp-138h]
  bool v259; // [rsp+20h] [rbp-138h]
  unsigned __int64 v260; // [rsp+20h] [rbp-138h]
  unsigned __int64 v261; // [rsp+20h] [rbp-138h]
  bool v262; // [rsp+20h] [rbp-138h]
  char v263; // [rsp+20h] [rbp-138h]
  char v264; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v265; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v266; // [rsp+20h] [rbp-138h]
  unsigned int v267; // [rsp+20h] [rbp-138h]
  unsigned int v268; // [rsp+20h] [rbp-138h]
  unsigned int v269; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v270; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v271; // [rsp+20h] [rbp-138h]
  unsigned int v272; // [rsp+20h] [rbp-138h]
  unsigned int v273; // [rsp+20h] [rbp-138h]
  unsigned int v274; // [rsp+20h] [rbp-138h]
  unsigned int v275; // [rsp+20h] [rbp-138h]
  unsigned int v276; // [rsp+20h] [rbp-138h]
  unsigned int v277; // [rsp+20h] [rbp-138h]
  unsigned int v278; // [rsp+20h] [rbp-138h]
  unsigned int v279; // [rsp+20h] [rbp-138h]
  unsigned int v280; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v281; // [rsp+28h] [rbp-130h]
  __int64 v282; // [rsp+28h] [rbp-130h]
  __int64 v283; // [rsp+28h] [rbp-130h]
  __int64 *v284; // [rsp+28h] [rbp-130h]
  unsigned __int64 v285; // [rsp+28h] [rbp-130h]
  __int64 v286; // [rsp+28h] [rbp-130h]
  __int64 *v287; // [rsp+28h] [rbp-130h]
  __int64 v288; // [rsp+30h] [rbp-128h]
  unsigned __int64 v289; // [rsp+30h] [rbp-128h]
  __int64 v290; // [rsp+30h] [rbp-128h]
  unsigned __int8 v292; // [rsp+44h] [rbp-114h]
  unsigned int v293; // [rsp+44h] [rbp-114h]
  unsigned __int8 v294; // [rsp+48h] [rbp-110h]
  void **v295; // [rsp+50h] [rbp-108h]
  void **v296; // [rsp+50h] [rbp-108h]
  void **v297; // [rsp+58h] [rbp-100h]
  void **v298; // [rsp+58h] [rbp-100h]
  void *v299; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v300; // [rsp+68h] [rbp-F0h]
  char v301; // [rsp+6Ch] [rbp-ECh]
  void *v302; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v303; // [rsp+78h] [rbp-E0h]
  char v304; // [rsp+7Ch] [rbp-DCh]
  void *v305; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v306; // [rsp+88h] [rbp-D0h]
  char v307; // [rsp+8Ch] [rbp-CCh]
  unsigned __int64 v308; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v309; // [rsp+98h] [rbp-C0h]
  void *v310[2]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v311; // [rsp+C0h] [rbp-98h]
  void *v312; // [rsp+D0h] [rbp-88h] BYREF
  unsigned __int64 v313; // [rsp+D8h] [rbp-80h]
  __int64 v314; // [rsp+E0h] [rbp-78h]
  void *v315; // [rsp+F0h] [rbp-68h]
  _BYTE v316[16]; // [rsp+100h] [rbp-58h] BYREF
  __int16 v317; // [rsp+110h] [rbp-48h]

  v7 = a5;
  v9 = (const __m128i *)a2;
  v252 = *(_DWORD *)a2;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v10 = *(_BYTE *)(a5 + 544);
  v11 = (v10 & 0x20) != 0;
  do
  {
    *(_BYTE *)(v7 + 544) = v10 | 0x20;
    sub_14634E0(v7, a2);
    v10 = (32 * v11) | *(_BYTE *)(v7 + 544) & 0xDF;
    *(_BYTE *)(v7 + 544) = v10;
    v12 = *(_WORD *)(a2 + 16);
  }
  while ( v12 == 4 );
  v253 = 0;
  if ( v12 == 22 )
  {
    v53 = 32 * v11;
    v253 = *(_DWORD *)a2;
    do
    {
      *(_BYTE *)(v7 + 544) = v10 | 0x20;
      sub_14634E0(v7, a2);
      v10 = v53 | *(_BYTE *)(v7 + 544) & 0xDF;
      *(_BYTE *)(v7 + 544) = v10;
      v12 = *(_WORD *)(a2 + 16);
    }
    while ( v12 == 4 );
  }
  if ( v12 == 3 )
  {
    v48 = *(_QWORD *)(v7 + 752);
    if ( v48 )
    {
      v49 = *(void (**)())(*(_QWORD *)v48 + 32LL);
      if ( v49 != nullsub_674 )
        ((void (__fastcall *)(__int64, _QWORD))v49)(v48, 0);
    }
    v50 = *(_QWORD *)(v7 + 48);
    *(_BYTE *)(v7 + 968) = 1;
    *(_BYTE *)(v50 + 6) = 1;
    v51 = *(_BYTE *)(v7 + 544);
    v52 = v51 & 0x20;
    do
    {
      *(_BYTE *)(v7 + 544) = v51 | 0x20;
      sub_14634E0(v7, a2);
      v51 = v52 | *(_BYTE *)(v7 + 544) & 0xDF;
      *(_BYTE *)(v7 + 544) = v51;
    }
    while ( *(_WORD *)(a2 + 16) == 4 );
  }
  v15 = sub_141B320((_QWORD *)v7, a2, 0, nullptr, a6, a7);
  if ( (_BYTE)v15 )
    return v15;
  v16 = *(_WORD *)(a2 + 16);
  if ( (unsigned __int16)(v16 - 7) <= 0xCu || v16 == 1 )
    BUG();
  v17 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v17 + 3) & 2) == 0 )
  {
    v308 = 0;
    v18 = 0;
    v19 = 0;
    v309 = 0;
    goto LABEL_10;
  }
  v55 = *(_QWORD *)(v7 + 1704);
  v56 = *(unsigned int *)(v55 + 16);
  v57 = *(__int64 **)v55;
  v258 = v55;
  if ( !(_DWORD)v56 )
    goto LABEL_245;
  v58 = (unsigned int)(v56 - 1);
  v13 = ((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4);
  v59 = v58 & v13;
  v60 = &v57[2 * ((unsigned int)v58 & (unsigned int)v13)];
  v61 = *v60;
  if ( v17 != *v60 )
  {
    v178 = 1;
    v179 = nullptr;
    if ( v61 != -4096 )
    {
      while ( 1 )
      {
        if ( !v179 && v61 == -8192 )
          v179 = v60;
        v14 = (unsigned int)(v178 + 1);
        v59 = v58 & (v178 + v59);
        v60 = &v57[2 * v59];
        v61 = *v60;
        if ( v17 == *v60 )
          goto LABEL_84;
        if ( v61 == -4096 )
          break;
        ++v178;
      }
      if ( v179 )
        v60 = v179;
    }
    v152 = *(_DWORD *)(v258 + 8) + 1;
    if ( 4 * v152 < (unsigned int)(3 * v56) )
    {
      if ( (int)v56 - *(_DWORD *)(v258 + 12) - v152 > (unsigned int)v56 >> 3 )
      {
        v155 = *v60;
        goto LABEL_276;
      }
      v287 = v57;
      v184 = (((v58 >> 1) | v58) >> 2) | (v58 >> 1) | v58;
      v185 = (((v184 >> 4) | v184) >> 8) | (v184 >> 4) | v184;
      v186 = ((v185 >> 16) | v185) + 1;
      if ( (unsigned int)v186 < 0x40 )
        LODWORD(v186) = 64;
      *(_DWORD *)(v258 + 16) = v186;
      v187 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v186, 8, 64, v258, v13, v14);
      v188 = ((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4);
      *(_QWORD *)v258 = v187;
      if ( v287 )
      {
        v189 = *(unsigned int *)(v258 + 16);
        *(_QWORD *)(v258 + 8) = 0;
        for ( i = &v187[2 * v189]; i != v187; v187 += 2 )
          *v187 = -4096;
        v293 = ((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4);
        v294 = v15;
        v290 = v17;
        v191 = v287;
        do
        {
          v192 = *v191;
          if ( *v191 != -4096 && v192 != -8192 )
          {
            v193 = *(_DWORD *)(v258 + 16);
            if ( !v193 )
            {
              *(_QWORD *)&dword_0 = *v191;
              BUG();
            }
            v194 = v193 - 1;
            LODWORD(v195) = (v193 - 1) & (((unsigned int)v192 >> 9) ^ ((unsigned int)v192 >> 4));
            v196 = (_QWORD *)(*(_QWORD *)v258 + 16LL * (unsigned int)v195);
            v197 = *v196;
            if ( v192 != *v196 )
            {
              v248 = 1;
              v249 = nullptr;
              if ( v197 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v249 && v197 == -8192 )
                    v249 = v196;
                  v195 = v194 & (unsigned int)(v195 + v248);
                  v196 = (_QWORD *)(*(_QWORD *)v258 + 16 * v195);
                  v197 = *v196;
                  if ( v192 == *v196 )
                    break;
                  if ( v197 == -4096 )
                  {
                    if ( v249 )
                      v196 = v249;
                    break;
                  }
                  ++v248;
                }
              }
            }
            *v196 = v192;
            v196[1] = v191[1];
            v191[1] = 0;
            ++*(_DWORD *)(v258 + 8);
            v198 = v191[1];
            if ( v198 )
            {
              if ( (v198 & 4) != 0 )
              {
                v199 = v198 & 0xFFFFFFFFFFFFFFF8LL;
                v200 = v199;
                if ( v199 )
                {
                  v201 = *(_QWORD *)(v199 + 24);
                  if ( v201 )
                  {
                    if ( (v201 & 4) != 0 )
                    {
                      v202 = (void **)(v201 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v202 )
                      {
                        if ( *v202 != v202 + 2 )
                        {
                          v297 = v202;
                          free(*v202);
                          v202 = v297;
                        }
                        operator delete(v202, 0x30u);
                      }
                    }
                  }
                  v203 = *(_QWORD *)(v200 + 8);
                  if ( v203 )
                  {
                    if ( (v203 & 4) != 0 )
                    {
                      v204 = (void **)(v203 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v204 )
                      {
                        if ( *v204 != v204 + 2 )
                        {
                          v298 = v204;
                          free(*v204);
                          v204 = v298;
                        }
                        operator delete(v204, 0x30u);
                      }
                    }
                  }
                }
              }
            }
          }
          v191 += 2;
        }
        while ( &v287[2 * v56] != v191 );
        v17 = v290;
        v15 = v294;
        operator delete(v287, 16 * v56, 8);
        v188 = v293;
        v187 = *(_QWORD **)v258;
        LODWORD(v56) = *(_DWORD *)(v258 + 16);
        v152 = *(_DWORD *)(v258 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(v258 + 8) = 0;
        v56 = *(unsigned int *)(v258 + 16);
        v238 = &v187[2 * v56];
        if ( v187 != v238 )
        {
          v239 = v187;
          do
          {
            *v239 = -4096;
            v239 += 2;
          }
          while ( v238 != v239 );
        }
        v152 = 1;
      }
      if ( (_DWORD)v56 )
      {
        v205 = v56 - 1;
        LODWORD(v206) = v205 & v188;
        v60 = &v187[2 * (v205 & v188)];
        v155 = *v60;
        if ( v17 == *v60 )
        {
LABEL_276:
          *(_DWORD *)(v258 + 8) = v152;
          if ( v155 != -4096 )
            --*(_DWORD *)(v258 + 12);
          goto LABEL_278;
        }
        v207 = 1;
        v208 = nullptr;
        if ( v155 != -4096 )
        {
          while ( 1 )
          {
            if ( v155 == -8192 && !v208 )
              v208 = v60;
            v206 = v205 & (unsigned int)(v206 + v207);
            v60 = &v187[2 * v206];
            v155 = *v60;
            if ( v17 == *v60 )
              goto LABEL_276;
            if ( v155 == -4096 )
              goto LABEL_528;
            ++v207;
          }
        }
LABEL_405:
        *(_DWORD *)(v258 + 8) = v152;
LABEL_278:
        *v60 = v17;
        v63 = (unsigned __int64 *)(v60 + 1);
        v65 = 0;
        v60[1] = 0;
        goto LABEL_99;
      }
      goto LABEL_544;
    }
LABEL_245:
    v284 = v57;
    v132 = (((((((unsigned int)(2 * v56 - 1) | ((unsigned __int64)(unsigned int)(2 * v56 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v56 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v56 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v56 - 1) | ((unsigned __int64)(unsigned int)(2 * v56 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v56 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v56 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v56 - 1) | ((unsigned __int64)(unsigned int)(2 * v56 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v56 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v56 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v56 - 1) | ((unsigned __int64)(unsigned int)(2 * v56 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v56 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v56 - 1) >> 1);
    v133 = ((v132 >> 16) | v132) + 1;
    if ( (unsigned int)v133 < 0x40 )
      LODWORD(v133) = 64;
    *(_DWORD *)(v258 + 16) = v133;
    v134 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v133, 8, 64, v258, v13, v14);
    v135 = v284;
    *(_QWORD *)v258 = v134;
    if ( v284 )
    {
      v136 = *(unsigned int *)(v258 + 16);
      *(_QWORD *)(v258 + 8) = 0;
      for ( j = &v134[2 * v136]; j != v134; v134 += 2 )
        *v134 = -4096;
      if ( v284 != &v284[2 * v56] )
      {
        v292 = v15;
        v288 = v17;
        v138 = v284;
        do
        {
          v139 = *v138;
          if ( *v138 != -4096 && v139 != -8192 )
          {
            v140 = *(_DWORD *)(v258 + 16);
            if ( !v140 )
            {
              *(_QWORD *)&dword_0 = *v138;
              BUG();
            }
            v141 = v140 - 1;
            LODWORD(v142) = (v140 - 1) & (((unsigned int)v139 >> 9) ^ ((unsigned int)v139 >> 4));
            v143 = (_QWORD *)(*(_QWORD *)v258 + 16LL * (unsigned int)v142);
            v144 = *v143;
            if ( v139 != *v143 )
            {
              v241 = 1;
              v242 = nullptr;
              if ( v144 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v242 && v144 == -8192 )
                    v242 = v143;
                  v142 = v141 & (unsigned int)(v142 + v241);
                  v143 = (_QWORD *)(*(_QWORD *)v258 + 16 * v142);
                  v144 = *v143;
                  if ( v139 == *v143 )
                    break;
                  if ( v144 == -4096 )
                  {
                    if ( v242 )
                      v143 = v242;
                    break;
                  }
                  ++v241;
                }
              }
            }
            *v143 = v139;
            v143[1] = v138[1];
            v138[1] = 0;
            ++*(_DWORD *)(v258 + 8);
            v145 = v138[1];
            if ( v145 )
            {
              if ( (v145 & 4) != 0 )
              {
                v146 = v145 & 0xFFFFFFFFFFFFFFF8LL;
                v147 = v146;
                if ( v146 )
                {
                  v148 = *(_QWORD *)(v146 + 24);
                  if ( v148 )
                  {
                    if ( (v148 & 4) != 0 )
                    {
                      v149 = (void **)(v148 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v149 )
                      {
                        if ( *v149 != v149 + 2 )
                        {
                          v295 = v149;
                          free(*v149);
                          v149 = v295;
                        }
                        operator delete(v149, 0x30u);
                      }
                    }
                  }
                  v150 = *(_QWORD *)(v147 + 8);
                  if ( v150 )
                  {
                    if ( (v150 & 4) != 0 )
                    {
                      v151 = (void **)(v150 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v151 )
                      {
                        if ( *v151 != v151 + 2 )
                        {
                          v296 = v151;
                          free(*v151);
                          v151 = v296;
                        }
                        operator delete(v151, 0x30u);
                      }
                    }
                  }
                }
              }
            }
          }
          v138 += 2;
        }
        while ( &v284[2 * v56] != v138 );
        v17 = v288;
        v135 = v284;
        v15 = v292;
      }
      operator delete(v135, 16 * v56, 8);
      v134 = *(_QWORD **)v258;
      LODWORD(v56) = *(_DWORD *)(v258 + 16);
      v152 = *(_DWORD *)(v258 + 8) + 1;
    }
    else
    {
      *(_QWORD *)(v258 + 8) = 0;
      v56 = *(unsigned int *)(v258 + 16);
      v236 = &v134[2 * v56];
      if ( v134 != v236 )
      {
        v237 = v134;
        do
        {
          *v237 = -4096;
          v237 += 2;
        }
        while ( v236 != v237 );
      }
      v152 = 1;
    }
    if ( (_DWORD)v56 )
    {
      v153 = v56 - 1;
      LODWORD(v154) = v153 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v60 = &v134[2 * (unsigned int)v154];
      v155 = *v60;
      if ( v17 == *v60 )
        goto LABEL_276;
      v250 = 1;
      v208 = nullptr;
      if ( v155 != -4096 )
      {
        while ( 1 )
        {
          if ( !v208 && v155 == -8192 )
            v208 = v60;
          v154 = v153 & (unsigned int)(v154 + v250);
          v60 = &v134[2 * v154];
          v155 = *v60;
          if ( v17 == *v60 )
            goto LABEL_276;
          if ( v155 == -4096 )
          {
LABEL_528:
            if ( !v208 )
              goto LABEL_405;
            v155 = *v208;
            v60 = v208;
            goto LABEL_276;
          }
          ++v250;
        }
      }
      goto LABEL_405;
    }
LABEL_544:
    ++*(_DWORD *)(v258 + 8);
    BUG();
  }
LABEL_84:
  v62 = v60[1];
  v63 = (unsigned __int64 *)(v60 + 1);
  v64 = (unsigned __int64 *)(v62 & 0xFFFFFFFFFFFFFFF8LL);
  v65 = v62 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v62 && (v62 & 4) != 0 )
  {
    v65 = 0;
    if ( !v64 )
      goto LABEL_99;
    v65 = *v64;
  }
  while ( v65 && (*(_BYTE *)(v65 + 12) & 3) == 2 )
    v65 = *(_QWORD *)v65;
LABEL_99:
  if ( (*(_BYTE *)(v17 + 4) & 0x10) != 0 )
  {
    v265 = v63;
    sub_145CD30(v7, v17);
    v63 = v265;
    if ( (*(_BYTE *)(v17 + 3) & 2) != 0 )
      goto LABEL_101;
    if ( (*(_BYTE *)(v17 + 4) & 0x10) != 0 )
      goto LABEL_242;
LABEL_338:
    v75 = 0;
    goto LABEL_238;
  }
  if ( (*(_BYTE *)(v17 + 3) & 2) == 0 )
    goto LABEL_338;
LABEL_101:
  v70 = *(_QWORD *)(v7 + 56);
  v71 = *(_BYTE *)(v70 + 21) & 2;
  if ( v71 || *(char *)(v70 + 22) < 0 )
  {
    v72 = *(_DWORD *)(*(_QWORD *)(v7 + 1704) + 48LL);
    if ( v72 )
    {
      v73 = *v63 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*v63 || (*v63 & 4) == 0 || (v74 = *v63 & 0xFFFFFFFFFFFFFFF8LL, !v73) )
      {
        v109 = *(_QWORD *)(v7 + 128);
        *(_QWORD *)(v7 + 208) += 32LL;
        v110 = (v109 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *(_QWORD *)(v7 + 136) >= v110 + 32 && v109 )
        {
          *(_QWORD *)(v7 + 128) = v110 + 32;
          v74 = (v109 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v285 = v73;
          v270 = v63;
          v74 = sub_986170(v7 + 128, 32, 32, 4, v73, (__int64)v63);
          v73 = v285;
          v63 = v270;
          v110 = v74 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)(v74 + 8) = 0;
        *(_DWORD *)(v74 + 16) = 0;
        *(_QWORD *)(v74 + 24) = 0;
        *(_QWORD *)v74 = v73;
        *(_BYTE *)(v74 + 20) = 0;
        *v63 = v110 | 4;
        v72 = *(_DWORD *)(*(_QWORD *)(v7 + 1704) + 48LL);
      }
      if ( *(_DWORD *)(v74 + 16) != v72 )
      {
        v281 = v63;
        v260 = v74;
        sub_14476F0(v7, v17, v74);
        v74 = v260;
        v63 = v281;
      }
      v75 = 4LL * *(unsigned __int8 *)(v74 + 20);
      if ( (*(_BYTE *)(v17 + 4) & 0x10) == 0 )
        goto LABEL_110;
      goto LABEL_243;
    }
    v75 = 0;
    if ( (*(_BYTE *)(v17 + 4) & 0x10) == 0 )
      goto LABEL_112;
LABEL_242:
    v75 = 0;
LABEL_243:
    v283 = v75;
    v266 = v63;
    sub_145CD30(v7, v17);
    v75 = v283;
    v63 = v266;
LABEL_110:
    if ( (*(_BYTE *)(v17 + 3) & 2) == 0 )
    {
LABEL_238:
      v19 = 0;
      v80 = 0;
      goto LABEL_121;
    }
    v70 = *(_QWORD *)(v7 + 56);
    v71 = *(_BYTE *)(v70 + 21) & 2;
LABEL_112:
    if ( v71 )
      goto LABEL_113;
    goto LABEL_237;
  }
  v75 = 0;
  if ( (*(_BYTE *)(v17 + 4) & 0x10) != 0 )
    goto LABEL_242;
LABEL_237:
  if ( *(char *)(v70 + 22) >= 0 )
    goto LABEL_238;
LABEL_113:
  v76 = *(_DWORD *)(*(_QWORD *)(v7 + 1704) + 48LL);
  if ( !v76 )
    goto LABEL_238;
  v77 = *v63 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !*v63 || (*v63 & 4) == 0 || (v78 = *v63 & 0xFFFFFFFFFFFFFFF8LL, !v77) )
  {
    v107 = *(_QWORD *)(v7 + 128);
    *(_QWORD *)(v7 + 208) += 32LL;
    v108 = (v107 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(v7 + 136) >= v108 + 32 && v107 )
    {
      *(_QWORD *)(v7 + 128) = v108 + 32;
      v78 = (v107 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v289 = v77;
      v286 = v75;
      v271 = v63;
      v78 = sub_986170(v7 + 128, 32, 32, 4, v75, (__int64)v63);
      v77 = v289;
      v75 = v286;
      v63 = v271;
      v108 = v78 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)(v78 + 8) = 0;
    *(_DWORD *)(v78 + 16) = 0;
    *(_QWORD *)(v78 + 24) = 0;
    *(_QWORD *)v78 = v77;
    *(_BYTE *)(v78 + 20) = 0;
    *v63 = v108 | 4;
    v76 = *(_DWORD *)(*(_QWORD *)(v7 + 1704) + 48LL);
  }
  if ( *(_DWORD *)(v78 + 16) != v76 )
  {
    v282 = v75;
    v261 = v78;
    sub_14476F0(v7, v17, v78);
    v78 = v261;
    v75 = v282;
  }
  v79 = *(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v78 + 8) & 4) != 0 )
  {
    v80 = *(_QWORD *)v79;
    v19 = *(unsigned int *)(v79 + 8);
  }
  else
  {
    v80 = v78 + 8;
    v19 = v79 != 0;
  }
LABEL_121:
  if ( !v65 || (*(_BYTE *)(v65 + 12) & 3) != 0 )
  {
    v308 = v75;
    *(_QWORD *)&v309 = v80;
    *((_QWORD *)&v309 + 1) = v19;
  }
  else
  {
    *(_QWORD *)&v309 = v80;
    *((_QWORD *)&v309 + 1) = v19;
    v308 = v75 | v65 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v75 & 0xFFFFFFFFFFFFFFF8LL | v65 & 0xFFFFFFFFFFFFFFF8LL )
    {
      v18 = 1;
      goto LABEL_10;
    }
  }
  v18 = v19 != 0;
LABEL_10:
  v20 = *(_DWORD *)(a1 + 24);
  if ( v20 > 0x40 )
  {
    **(_QWORD **)(a1 + 16) = v18;
    memset(
      (void *)(*(_QWORD *)(a1 + 16) + 8LL),
      0,
      8 * ((unsigned int)(((unsigned __int64)v20 + 63) >> 6) + 0x1FFFFFFF));
    v19 = *((_QWORD *)&v309 + 1);
  }
  else
  {
    v21 = v18 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v20);
    v22 = v20 == 0;
    v23 = 0;
    if ( !v22 )
      v23 = v21;
    *(_QWORD *)(a1 + 16) = v23;
  }
  v24 = v308;
  *(_BYTE *)(a1 + 28) = 0;
  *(_BYTE *)(a3 + 16) = (v19 | v24 & 0xFFFFFFFFFFFFFFF8LL) == 0;
  v25 = *(unsigned int **)(v17 + 16);
  v26 = *v25;
  v27 = v25 + 4;
  if ( v26 == 8 )
  {
    v28 = *((_QWORD *)v25 + 2) == 0x5954494E49464E49LL;
  }
  else
  {
    v28 = 0;
    if ( v26 == 3 )
    {
      if ( *((_WORD *)v25 + 8) != 16718 || (v54 = 0, *((_BYTE *)v27 + 2) != 78) )
        v54 = 1;
      v28 = v54 == 0;
    }
  }
  v29 = v9[1].m128i_i16[0];
  if ( (unsigned __int16)(v29 - 7) <= 0xCu || v29 == 1 )
    BUG();
  v30 = v9->m128i_i64[1];
  if ( *(char *)(v30 + 4) < 0 )
  {
    v262 = v28;
    sub_145FA90(v7, v9);
    v28 = v262;
  }
  if ( (*(_BYTE *)(v30 + 5) & 1) != 0 )
  {
    v259 = v28;
    v69 = sub_1021600(*(_QWORD *)(v7 + 88), v9->m128i_i32[0]);
    v28 = v259;
    if ( !v69 )
    {
      sub_145FEC0(v7, v9);
      v28 = v259;
    }
  }
  if ( !v28 )
  {
    v66 = *(unsigned int **)(v30 + 16);
    v67 = *v66;
    v68 = v66 + 4;
    if ( v67 == 8 )
    {
      if ( *((_QWORD *)v66 + 2) != 0x5954494E49464E49LL || (*(_BYTE *)(*(_QWORD *)(v7 + 56) + 46LL) & 1) == 0 )
        goto LABEL_22;
      sub_145CEF0(v7, v9, 0, v68);
      v81 = *(unsigned int **)(v30 + 16);
      v67 = *v81;
      v68 = v81 + 4;
    }
    if ( v67 == 3 && *(_WORD *)v68 == 16718 && *((_BYTE *)v68 + 2) == 78 && *(char *)(*(_QWORD *)(v7 + 56) + 45LL) < 0 )
      sub_145CEF0(v7, v9, 1, v68);
  }
LABEL_22:
  v31 = *(unsigned int *)(a1 + 24);
  v300 = 64;
  v299 = nullptr;
  v301 = 0;
  if ( (_DWORD)v31 == 64 )
  {
    v39 = a1 + 16;
    if ( *(_BYTE *)(a1 + 28) )
      v38 = sub_2205DB0(v39, &v299);
    else
      v38 = sub_2205E20(v39, &v299);
    goto LABEL_46;
  }
  if ( (unsigned int)v31 <= 0x40 )
  {
    v111 = a1 + 16;
    v263 = *(_BYTE *)(a1 + 28);
    if ( v263 )
    {
      sub_2206CD0(&v312, v111, 64);
      v304 = 1;
      v112 = v263;
    }
    else
    {
      sub_2206B70(&v312, v111, 64);
      v304 = 0;
      v112 = 0;
    }
    v113 = v313;
    v303 = v313;
    v302 = v312;
    if ( v300 == (_DWORD)v313 )
    {
      if ( v301 != v112 )
        goto LABEL_321;
      if ( v112 )
      {
LABEL_326:
        v267 = v313;
        v163 = sub_2205DB0(&v302, &v299);
        v113 = v267;
        v38 = v163;
        goto LABEL_200;
      }
      v268 = v313;
      v164 = sub_2205E20(&v302, &v299);
      v113 = v268;
      v38 = v164;
      goto LABEL_200;
    }
    if ( v300 >= (unsigned int)v313 )
    {
      if ( v300 > (unsigned int)v313 )
      {
        v264 = v112;
        if ( v112 )
        {
          sub_2206CD0(&v312, &v302, v300);
          v114 = v313;
          v115 = v264;
          v307 = 1;
        }
        else
        {
          sub_2206B70(&v312, &v302, v300);
          v114 = v313;
          v115 = 0;
          v307 = 0;
        }
        v306 = v313;
        v305 = v312;
        if ( v300 == v114 )
        {
          if ( v301 == v115 )
          {
            if ( !v115 )
            {
              v274 = v114;
              v209 = sub_2205E20(&v305, &v299);
              v114 = v274;
              v38 = v209;
LABEL_196:
              if ( v114 > 0x40 )
                goto LABEL_197;
LABEL_199:
              v113 = v303;
              goto LABEL_200;
            }
LABEL_369:
            v272 = v114;
            v181 = sub_2205DB0(&v305, &v299);
            v114 = v272;
            v38 = v181;
            goto LABEL_196;
          }
        }
        else
        {
          if ( v300 < v114 )
          {
            sub_2206B70(&v312, &v299, v114);
            BYTE4(v310[1]) = 0;
            LODWORD(v310[1]) = v313;
            v310[0] = v312;
            v38 = sub_98E2D0((__int64 *)&v305, (__int64 *)v310);
            if ( LODWORD(v310[1]) > 0x40 )
              goto LABEL_193;
            goto LABEL_195;
          }
          if ( v300 > v114 )
          {
            if ( v115 )
            {
              sub_2206CD0(&v312, &v305, v300);
              BYTE4(v310[1]) = 1;
            }
            else
            {
              sub_2206B70(&v312, &v305, v300);
              BYTE4(v310[1]) = 0;
            }
            LODWORD(v310[1]) = v313;
            v310[0] = v312;
            v38 = sub_98E2D0((__int64 *)v310, (__int64 *)&v299);
            if ( LODWORD(v310[1]) > 0x40 )
            {
LABEL_193:
              if ( v310[0] )
                operator delete[](v310[0]);
            }
LABEL_195:
            v114 = v306;
            goto LABEL_196;
          }
        }
        if ( v115 )
        {
          v38 = 1;
          if ( ((unsigned __int64)v299 & (1LL << ((unsigned __int8)v300 - 1))) != 0 )
            goto LABEL_196;
        }
        else
        {
          v180 = 1LL << ((unsigned __int8)v114 - 1);
          if ( v114 <= 0x40 )
          {
            v38 = -1;
            if ( ((unsigned __int64)v312 & v180) != 0 )
              goto LABEL_199;
          }
          else if ( (v180 & *((_QWORD *)v312 + ((v114 - 1) >> 6))) != 0 )
          {
            v38 = -1;
            goto LABEL_197;
          }
        }
        goto LABEL_369;
      }
LABEL_321:
      if ( v112 )
      {
        v38 = 1;
        if ( ((unsigned __int64)v299 & (1LL << ((unsigned __int8)v300 - 1))) != 0 )
          goto LABEL_200;
      }
      else
      {
        v162 = 1LL << ((unsigned __int8)v313 - 1);
        if ( (unsigned int)v313 <= 0x40 )
        {
          if ( ((unsigned __int64)v312 & v162) != 0 )
            goto LABEL_78;
        }
        else if ( (v162 & *((_QWORD *)v312 + ((unsigned int)(v313 - 1) >> 6))) != 0 )
        {
          v38 = -1;
          goto LABEL_201;
        }
      }
      goto LABEL_326;
    }
    sub_2206B70(&v312, &v299, (unsigned int)v313);
    v156 = v313;
    v307 = 0;
    v113 = v303;
    v306 = v313;
    v305 = v312;
    if ( (_DWORD)v313 == v303 )
    {
      v156 = v303;
      if ( v304 )
        goto LABEL_440;
      v279 = v303;
      v240 = sub_2205E20(&v302, &v305);
      v156 = v279;
      v38 = v240;
    }
    else
    {
      if ( (unsigned int)v313 < v303 )
      {
        sub_2206B70(&v312, &v305, v303);
        BYTE4(v310[1]) = 0;
        LODWORD(v310[1]) = v313;
        v310[0] = v312;
        v38 = sub_98E2D0((__int64 *)&v302, (__int64 *)v310);
        if ( LODWORD(v310[1]) > 0x40 )
          goto LABEL_288;
        goto LABEL_290;
      }
      if ( v303 < (unsigned int)v313 )
      {
        if ( v304 )
        {
          sub_2206CD0(&v312, &v302, (unsigned int)v313);
          BYTE4(v310[1]) = 1;
        }
        else
        {
          sub_2206B70(&v312, &v302, (unsigned int)v313);
          BYTE4(v310[1]) = 0;
        }
        LODWORD(v310[1]) = v313;
        v310[0] = v312;
        v38 = sub_98E2D0((__int64 *)v310, (__int64 *)&v305);
        if ( LODWORD(v310[1]) > 0x40 )
        {
LABEL_288:
          if ( v310[0] )
            operator delete[](v310[0]);
        }
LABEL_290:
        v156 = v306;
        goto LABEL_291;
      }
      if ( v304 )
      {
LABEL_440:
        v231 = 1LL << ((unsigned __int8)v156 - 1);
        if ( v156 > 0x40 )
        {
          v38 = 1;
          if ( (v231 & *((_QWORD *)v312 + ((v156 - 1) >> 6))) != 0 )
            goto LABEL_197;
          goto LABEL_442;
        }
        v38 = 1;
        if ( ((unsigned __int64)v312 & v231) == 0 )
        {
LABEL_442:
          v278 = v156;
          v232 = sub_2205DB0(&v302, &v305);
          v156 = v278;
          v38 = v232;
          goto LABEL_291;
        }
LABEL_200:
        if ( v113 > 0x40 )
          goto LABEL_201;
        goto LABEL_203;
      }
      v233 = (unsigned __int64)v302;
      if ( v303 > 0x40 )
        v233 = *((_QWORD *)v302 + ((v303 - 1) >> 6));
      v38 = -1;
      if ( (v233 & (1LL << ((unsigned __int8)v303 - 1))) == 0 )
        goto LABEL_442;
    }
LABEL_291:
    if ( v156 <= 0x40 )
      goto LABEL_199;
LABEL_197:
    if ( v305 )
      operator delete[](v305);
    goto LABEL_199;
  }
  sub_2206B70(&v312, &v299, v31);
  v32 = v313;
  v33 = *(unsigned int *)(a1 + 24);
  v304 = 0;
  v303 = v313;
  v302 = v312;
  if ( (_DWORD)v33 != (_DWORD)v313 )
  {
    if ( (unsigned int)v33 <= (unsigned int)v313 )
    {
      v34 = *(_BYTE *)(a1 + 28);
      if ( (unsigned int)v33 < (unsigned int)v313 )
      {
        v257 = *(_BYTE *)(a1 + 28);
        v35 = a1 + 16;
        if ( v34 )
        {
          sub_2206CD0(&v312, v35, (unsigned int)v313);
          v36 = v313;
          v37 = v257;
          v307 = 1;
        }
        else
        {
          sub_2206B70(&v312, v35, (unsigned int)v313);
          v36 = v313;
          v37 = 0;
          v307 = 0;
        }
        v306 = v313;
        v305 = v312;
        v32 = v303;
        if ( v303 == v36 )
        {
          if ( v304 == v37 )
          {
            if ( v37 )
              goto LABEL_414;
            v277 = v36;
            v230 = sub_2205E20(&v305, &v302);
            v36 = v277;
            v38 = v230;
            goto LABEL_38;
          }
        }
        else
        {
          if ( v303 < v36 )
          {
            if ( v304 )
            {
              sub_2206CD0(&v312, &v302, v36);
              BYTE4(v310[1]) = 1;
            }
            else
            {
              sub_2206B70(&v312, &v302, v36);
              BYTE4(v310[1]) = 0;
            }
            LODWORD(v310[1]) = v313;
            v310[0] = v312;
            v38 = sub_98E2D0((__int64 *)&v305, (__int64 *)v310);
            if ( LODWORD(v310[1]) > 0x40 )
            {
LABEL_35:
              if ( v310[0] )
                operator delete[](v310[0]);
            }
LABEL_37:
            v36 = v306;
            goto LABEL_38;
          }
          if ( v303 > v36 )
          {
            if ( v37 )
            {
              sub_2206CD0(&v312, &v305, v303);
              BYTE4(v310[1]) = 1;
            }
            else
            {
              sub_2206B70(&v312, &v305, v303);
              BYTE4(v310[1]) = 0;
            }
            LODWORD(v310[1]) = v313;
            v310[0] = v312;
            v38 = sub_98E2D0((__int64 *)v310, (__int64 *)&v302);
            if ( LODWORD(v310[1]) > 0x40 )
              goto LABEL_35;
            goto LABEL_37;
          }
        }
        if ( !v37 )
        {
          v211 = 1LL << ((unsigned __int8)v36 - 1);
          if ( v36 > 0x40 )
          {
            v38 = -1;
            if ( (v211 & *((_QWORD *)v312 + ((v36 - 1) >> 6))) == 0 )
            {
LABEL_414:
              v275 = v36;
              v212 = sub_2205DB0(&v305, &v302);
              v36 = v275;
              v38 = v212;
              goto LABEL_38;
            }
LABEL_39:
            if ( v305 )
              operator delete[](v305);
            goto LABEL_41;
          }
          v38 = -1;
          if ( ((unsigned __int64)v312 & v211) == 0 )
            goto LABEL_414;
LABEL_42:
          if ( v32 > 0x40 )
          {
LABEL_201:
            if ( v302 )
              operator delete[](v302);
          }
LABEL_203:
          if ( v300 > 0x40 && v299 )
            operator delete[](v299);
LABEL_46:
          if ( !v38 )
            goto LABEL_47;
          goto LABEL_78;
        }
        if ( v304 )
          goto LABEL_414;
        v235 = (unsigned __int64)v302;
        if ( v303 > 0x40 )
          v235 = *((_QWORD *)v302 + ((v303 - 1) >> 6));
        v38 = 1;
        if ( (v235 & (1LL << ((unsigned __int8)v303 - 1))) == 0 )
          goto LABEL_414;
LABEL_38:
        if ( v36 > 0x40 )
          goto LABEL_39;
LABEL_41:
        v32 = v303;
        goto LABEL_42;
      }
      if ( !v34 )
      {
        v165 = *(_QWORD *)(a1 + 16);
        if ( (unsigned int)v33 > 0x40 )
          v165 = *(_QWORD *)(v165 + 8LL * ((unsigned int)(v33 - 1) >> 6));
        v38 = -1;
        if ( (v165 & (1LL << ((unsigned __int8)v33 - 1))) != 0 )
          goto LABEL_42;
        goto LABEL_335;
      }
      goto LABEL_295;
    }
    sub_2206B70(&v312, &v302, v33);
    v158 = v313;
    v159 = *(_DWORD *)(a1 + 24);
    v307 = 0;
    v306 = v313;
    v305 = v312;
    if ( v159 == (_DWORD)v313 )
    {
      if ( !*(_BYTE *)(a1 + 28) )
      {
        v280 = v313;
        v243 = sub_2205E20(a1 + 16, &v305);
        v158 = v280;
        v38 = v243;
        goto LABEL_307;
      }
    }
    else
    {
      if ( v159 > (unsigned int)v313 )
      {
        sub_2206B70(&v312, &v305, v159);
        BYTE4(v310[1]) = 0;
        LODWORD(v310[1]) = v313;
        v310[0] = v312;
        v38 = sub_98E2D0((__int64 *)(a1 + 16), (__int64 *)v310);
        if ( LODWORD(v310[1]) > 0x40 )
          goto LABEL_304;
        goto LABEL_306;
      }
      v160 = *(_BYTE *)(a1 + 28);
      if ( v159 < (unsigned int)v313 )
      {
        v161 = a1 + 16;
        if ( v160 )
        {
          sub_2206CD0(&v312, v161, (unsigned int)v313);
          BYTE4(v310[1]) = 1;
        }
        else
        {
          sub_2206B70(&v312, v161, (unsigned int)v313);
          BYTE4(v310[1]) = 0;
        }
        LODWORD(v310[1]) = v313;
        v310[0] = v312;
        v38 = sub_98E2D0((__int64 *)v310, (__int64 *)&v305);
        if ( LODWORD(v310[1]) > 0x40 )
        {
LABEL_304:
          if ( v310[0] )
            operator delete[](v310[0]);
        }
LABEL_306:
        v158 = v306;
        goto LABEL_307;
      }
      if ( !v160 )
      {
        v234 = *(_QWORD *)(a1 + 16);
        if ( v159 > 0x40 )
          v234 = *(_QWORD *)(v234 + 8LL * ((v159 - 1) >> 6));
        v38 = -1;
        if ( (v234 & (1LL << ((unsigned __int8)v159 - 1))) == 0 )
        {
LABEL_373:
          v273 = v313;
          v183 = sub_2205DB0(a1 + 16, &v305);
          v158 = v273;
          v38 = v183;
        }
LABEL_307:
        if ( v158 <= 0x40 )
          goto LABEL_41;
        goto LABEL_39;
      }
    }
    v182 = 1LL << ((unsigned __int8)v313 - 1);
    if ( (unsigned int)v313 <= 0x40 )
    {
      v38 = 1;
      if ( (v182 & (unsigned __int64)v312) != 0 )
        goto LABEL_41;
    }
    else
    {
      v38 = 1;
      if ( (v182 & *((_QWORD *)v312 + ((unsigned int)(v313 - 1) >> 6))) != 0 )
        goto LABEL_39;
    }
    goto LABEL_373;
  }
  if ( !*(_BYTE *)(a1 + 28) )
  {
    v276 = v313;
    v229 = sub_2205E20(a1 + 16, &v302);
    v32 = v276;
    v38 = v229;
    goto LABEL_42;
  }
LABEL_295:
  v157 = 1LL << ((unsigned __int8)v313 - 1);
  if ( (unsigned int)v313 > 0x40 )
  {
    if ( (v157 & *((_QWORD *)v312 + ((unsigned int)(v313 - 1) >> 6))) != 0 )
    {
      v38 = 1;
      goto LABEL_201;
    }
    goto LABEL_335;
  }
  if ( (v157 & (unsigned __int64)v312) == 0 )
  {
LABEL_335:
    v269 = v313;
    v166 = sub_2205DB0(a1 + 16, &v302);
    v32 = v269;
    v38 = v166;
    goto LABEL_42;
  }
  if ( v300 > 0x40 && v299 )
    operator delete[](v299);
LABEL_78:
  if ( a4 )
  {
    if ( !*((_QWORD *)&v309 + 1) && (v308 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      sub_13F1C60((__int64 *)(v308 & 0xFFFFFFFFFFFFFFF8LL));
    sub_14420E0(v7);
  }
LABEL_47:
  v40 = _mm_loadu_si128(v9);
  v311 = v9[1].m128i_i64[0];
  v41 = v9->m128i_i32[0];
  *(__m128i *)v310 = v40;
  *(_DWORD *)(a1 + 4) = v41;
  if ( !v253 )
  {
    do
      sub_14634E0(v7, v9);
    while ( v9[1].m128i_i16[0] == 4 );
LABEL_53:
    if ( v252 < 0 )
    {
      v116 = *(_QWORD *)(v7 + 88);
      v117 = v252 & 0x7FFFFFFF;
      if ( (v252 & 0x7FFFFFFFu) >= *(_DWORD *)(v116 + 476) && v117 < *(_DWORD *)(v116 + 480) )
        v118 = *(_DWORD *)(v116 + 472);
      else
        v118 = sub_101D590(*(_QWORD *)(v7 + 88), v117);
      if ( (unsigned int)(v118 + 1) <= 1 )
      {
        v119 = *(_QWORD *)(v116 + 184);
      }
      else if ( v118 < 0 )
      {
        v168 = (unsigned int)(-2 - v118);
        v169 = *(_QWORD *)(*(_QWORD *)(v116 + 320) + 8LL * ((unsigned int)(-2 - v118) >> 6));
        if ( _bittest64(&v169, v168) )
        {
          v170 = (_QWORD *)(*(_QWORD *)(v116 + 272) + 8 * ((unsigned __int64)(int)v168 >> 5));
          v171 = *v170;
          if ( !*v170 )
          {
            v244 = (__int64 *)(*(_QWORD *)(v116 + 288) & 0xFFFFFFFFFFFFFFF8LL);
            v245 = *v244;
            v244[10] += 768;
            v246 = (_DWORD *)((v245 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v244[1] >= (unsigned __int64)(v246 + 192) && v245 )
            {
              *v244 = (__int64)(v246 + 192);
            }
            else
            {
              v256 = v170;
              v246 = (_DWORD *)sub_986170((__int64)v244, 768, 768, 3, (__int64)v170, v45);
              v170 = v256;
            }
            *v170 = v246;
            v247 = v246 + 192;
            do
            {
              *v246 = 0;
              v246 += 6;
              *((_OWORD *)v246 - 1) = 0;
              *((_QWORD *)v246 - 1) = 0;
            }
            while ( v246 != v247 );
            v171 = *v170;
          }
          v119 = v171 + 24 * (v168 & 0x1F);
        }
        else
        {
          v119 = sub_101F930(v116, v168, nullptr);
        }
      }
      else
      {
        v119 = *(_QWORD *)(v116 + 184) + 24LL * (unsigned int)v118;
      }
      v120 = *(_DWORD *)(v119 + 12);
      v121 = *(_QWORD *)(v7 + 48);
      if ( v120 && (v122 = *(_DWORD *)(v119 + 16)) != 0 && v120 != v122 )
      {
        sub_FC70B0((__int64)&v312, v121, v252, 1349);
        sub_AEA040((__int64)&v312);
      }
      else
      {
        sub_FC70B0((__int64)&v312, v121, v252, 1350);
        if ( (_BYTE)v317 )
        {
          sub_FC7790(v314, (__int64 *)&v312, SHIBYTE(v317));
          v314 = 0;
          v317 = 0;
        }
        if ( v315 != v316 )
          operator delete(v315);
        v123 = (void **)v312;
        if ( v312 )
        {
          v124 = v313;
          if ( v313 )
          {
            if ( (unsigned __int64)v312 < v313 || (unsigned __int64)v312 > v313 + 14848 )
            {
              v125 = *((void ***)v312 + 66);
              v126 = &v125[8 * (unsigned __int64)*((unsigned int *)v312 + 134)];
              if ( v125 != v126 )
              {
                v254 = v7;
                v127 = v9;
                v128 = *((void ***)v312 + 66);
                do
                {
                  while ( 1 )
                  {
                    v126 -= 8;
                    v129 = (void **)v126[3];
                    if ( v129 == v126 + 5 )
                      break;
                    operator delete(v129);
                    if ( v128 == v126 )
                      goto LABEL_227;
                  }
                }
                while ( v128 != v126 );
LABEL_227:
                v9 = v127;
                v126 = (void **)v123[66];
                v7 = v254;
              }
              if ( v126 != v123 + 68 )
                free(v126);
              v130 = (void **)v123[52];
              v131 = v123 + 52;
              if ( v130 != v123 + 54 )
                free(v130);
              v255 = v123 + 12;
              do
              {
                while ( 1 )
                {
                  v131 -= 4;
                  if ( *v131 == v131 + 2 )
                    break;
                  operator delete(*v131);
                  if ( v131 == v255 )
                    goto LABEL_235;
                }
              }
              while ( v131 != v255 );
LABEL_235:
              operator delete(v123, 0x3A0u);
            }
            else
            {
              v167 = *(unsigned int *)(v313 + 14976);
              *(_DWORD *)(v313 + 14976) = v167 + 1;
              *(_QWORD *)(v124 + 8 * v167 + 14848) = v123;
            }
          }
        }
      }
    }
    v46 = *(_QWORD *)(v7 + 1192);
    if ( v46 )
      (*(void (__fastcall **)(__int64, void **, unsigned __int64 *, unsigned __int64))(*(_QWORD *)v46 + 272LL))(
        v46,
        v310,
        &v308,
        ((unsigned __int64)v9->m128i_u32[0] << 32) | (unsigned int)v252);
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = v17;
    return v15;
  }
  v42 = *(_BYTE *)(v7 + 544);
  v43 = v42 & 0x20;
  do
  {
    *(_BYTE *)(v7 + 544) = v42 | 0x20;
    sub_14634E0(v7, v9);
    v42 = v43 | *(_BYTE *)(v7 + 544) & 0xDF;
    *(_BYTE *)(v7 + 544) = v42;
    v44 = v9[1].m128i_i16[0];
  }
  while ( v44 == 4 );
  if ( v44 == 23 )
  {
    do
      sub_14634E0(v7, v9);
    while ( v9[1].m128i_i16[0] == 4 );
    *(_DWORD *)(a1 + 4) = v9->m128i_i32[0];
    goto LABEL_53;
  }
  sub_FC70B0((__int64)&v312, *(_QWORD *)(v7 + 48), v9->m128i_i32[0], 1120);
  v82 = (unsigned __int8 *)v312;
  if ( !v312 )
  {
    v174 = v313;
    v175 = *(_DWORD *)(v313 + 14976);
    if ( v175 )
    {
      v224 = (unsigned int)(v175 - 1);
      *(_DWORD *)(v313 + 14976) = v224;
      v82 = *(unsigned __int8 **)(v174 + 8 * v224 + 14848);
      v225 = *((unsigned int *)v82 + 134);
      *v82 = 0;
      v226 = *((_QWORD *)v82 + 66);
      *((_DWORD *)v82 + 106) = 0;
      v227 = v226 + (v225 << 6);
      while ( v226 != v227 )
      {
        while ( 1 )
        {
          v227 -= 64;
          v228 = *(void **)(v227 + 24);
          if ( v228 == (void *)(v227 + 40) )
            break;
          operator delete(v228);
          if ( v226 == v227 )
            goto LABEL_432;
        }
      }
LABEL_432:
      *((_DWORD *)v82 + 134) = 0;
    }
    else
    {
      v82 = (unsigned __int8 *)operator new(0x3A0u);
      *v82 = 0;
      *((_QWORD *)v82 + 12) = v82 + 112;
      *((_QWORD *)v82 + 16) = v82 + 144;
      *((_QWORD *)v82 + 20) = v82 + 176;
      *((_QWORD *)v82 + 24) = v82 + 208;
      *((_QWORD *)v82 + 28) = v82 + 240;
      *((_QWORD *)v82 + 32) = v82 + 272;
      *((_QWORD *)v82 + 36) = v82 + 304;
      *((_QWORD *)v82 + 40) = v82 + 336;
      *((_QWORD *)v82 + 44) = v82 + 368;
      *((_QWORD *)v82 + 48) = v82 + 400;
      *((_QWORD *)v82 + 52) = v82 + 432;
      *((_QWORD *)v82 + 13) = 0;
      v82[112] = 0;
      *((_QWORD *)v82 + 17) = 0;
      v82[144] = 0;
      *((_QWORD *)v82 + 21) = 0;
      v82[176] = 0;
      *((_QWORD *)v82 + 25) = 0;
      v82[208] = 0;
      *((_QWORD *)v82 + 29) = 0;
      v82[240] = 0;
      *((_QWORD *)v82 + 33) = 0;
      v82[272] = 0;
      *((_QWORD *)v82 + 37) = 0;
      v82[304] = 0;
      *((_QWORD *)v82 + 41) = 0;
      v82[336] = 0;
      *((_QWORD *)v82 + 45) = 0;
      v82[368] = 0;
      *((_QWORD *)v82 + 49) = 0;
      v82[400] = 0;
      *((_QWORD *)v82 + 53) = 0x800000000LL;
      *((_QWORD *)v82 + 66) = v82 + 544;
      *((_QWORD *)v82 + 67) = 0x600000000LL;
    }
    v312 = v82;
  }
  v82[*v82 + 1] = 1;
  v83 = v312;
  v84 = *(unsigned __int8 *)v312;
  *(_BYTE *)v312 = v84 + 1;
  v83[v84 + 2] = "'defined'";
  v85 = (unsigned __int8 *)v312;
  if ( !v312 )
  {
    v172 = v313;
    v173 = *(_DWORD *)(v313 + 14976);
    if ( v173 )
    {
      v214 = (unsigned int)(v173 - 1);
      *(_DWORD *)(v313 + 14976) = v214;
      v85 = *(unsigned __int8 **)(v172 + 8 * v214 + 14848);
      v215 = *((unsigned int *)v85 + 134);
      *v85 = 0;
      v216 = *((_QWORD *)v85 + 66);
      *((_DWORD *)v85 + 106) = 0;
      v217 = v216 + (v215 << 6);
      while ( v216 != v217 )
      {
        while ( 1 )
        {
          v217 -= 64;
          v218 = *(void **)(v217 + 24);
          if ( v218 == (void *)(v217 + 40) )
            break;
          operator delete(v218);
          if ( v216 == v217 )
            goto LABEL_422;
        }
      }
LABEL_422:
      *((_DWORD *)v85 + 134) = 0;
    }
    else
    {
      v85 = (unsigned __int8 *)operator new(0x3A0u);
      *v85 = 0;
      *((_QWORD *)v85 + 12) = v85 + 112;
      *((_QWORD *)v85 + 16) = v85 + 144;
      *((_QWORD *)v85 + 20) = v85 + 176;
      *((_QWORD *)v85 + 24) = v85 + 208;
      *((_QWORD *)v85 + 28) = v85 + 240;
      *((_QWORD *)v85 + 32) = v85 + 272;
      *((_QWORD *)v85 + 36) = v85 + 304;
      *((_QWORD *)v85 + 40) = v85 + 336;
      *((_QWORD *)v85 + 44) = v85 + 368;
      *((_QWORD *)v85 + 48) = v85 + 400;
      *((_QWORD *)v85 + 52) = v85 + 432;
      *((_QWORD *)v85 + 13) = 0;
      v85[112] = 0;
      *((_QWORD *)v85 + 17) = 0;
      v85[144] = 0;
      *((_QWORD *)v85 + 21) = 0;
      v85[176] = 0;
      *((_QWORD *)v85 + 25) = 0;
      v85[208] = 0;
      *((_QWORD *)v85 + 29) = 0;
      v85[240] = 0;
      *((_QWORD *)v85 + 33) = 0;
      v85[272] = 0;
      *((_QWORD *)v85 + 37) = 0;
      v85[304] = 0;
      *((_QWORD *)v85 + 41) = 0;
      v85[336] = 0;
      *((_QWORD *)v85 + 45) = 0;
      v85[368] = 0;
      *((_QWORD *)v85 + 49) = 0;
      v85[400] = 0;
      *((_QWORD *)v85 + 53) = 0x800000000LL;
      *((_QWORD *)v85 + 66) = v85 + 544;
      *((_QWORD *)v85 + 67) = 0x600000000LL;
    }
    v312 = v85;
  }
  v85[*v85 + 1] = 4;
  v86 = v312;
  v87 = *(unsigned __int8 *)v312;
  *(_BYTE *)v312 = v87 + 1;
  v86[v87 + 2] = 23;
  if ( (_BYTE)v317 )
  {
    sub_FC7790(v314, (__int64 *)&v312, SHIBYTE(v317));
    v314 = 0;
    v317 = 0;
  }
  if ( v315 != v316 )
    operator delete(v315);
  v88 = (void **)v312;
  if ( v312 )
  {
    v89 = v313;
    if ( v313 )
    {
      if ( (unsigned __int64)v312 >= v313 && (unsigned __int64)v312 <= v313 + 14848 )
      {
        v210 = *(unsigned int *)(v313 + 14976);
        *(_DWORD *)(v313 + 14976) = v210 + 1;
        *(_QWORD *)(v89 + 8 * v210 + 14848) = v88;
      }
      else
      {
        v90 = *((void ***)v312 + 66);
        v91 = &v90[8 * (unsigned __int64)*((unsigned int *)v312 + 134)];
        if ( v90 != v91 )
        {
          do
          {
            while ( 1 )
            {
              v91 -= 8;
              v92 = (void **)v91[3];
              if ( v92 == v91 + 5 )
                break;
              operator delete(v92);
              if ( v90 == v91 )
                goto LABEL_141;
            }
          }
          while ( v90 != v91 );
LABEL_141:
          v91 = (void **)v88[66];
        }
        if ( v91 != v88 + 68 )
          free(v91);
        v93 = (void **)v88[52];
        v94 = v88 + 52;
        if ( v93 != v88 + 54 )
          free(v93);
        v95 = v88 + 12;
        do
        {
          while ( 1 )
          {
            v94 -= 4;
            if ( *v94 == v94 + 2 )
              break;
            operator delete(*v94);
            if ( v94 == v95 )
              goto LABEL_149;
          }
        }
        while ( v94 != v95 );
LABEL_149:
        operator delete(v88, 0x3A0u);
      }
    }
  }
  sub_FC70B0((__int64)&v312, *(_QWORD *)(v7 + 48), v253, 109);
  v96 = (unsigned __int8 *)v312;
  if ( !v312 )
  {
    v176 = v313;
    v177 = *(_DWORD *)(v313 + 14976);
    if ( v177 )
    {
      v219 = (unsigned int)(v177 - 1);
      *(_DWORD *)(v313 + 14976) = v219;
      v96 = *(unsigned __int8 **)(v176 + 8 * v219 + 14848);
      v220 = *((unsigned int *)v96 + 134);
      *v96 = 0;
      v221 = *((_QWORD *)v96 + 66);
      *((_DWORD *)v96 + 106) = 0;
      v222 = v221 + (v220 << 6);
      while ( v221 != v222 )
      {
        while ( 1 )
        {
          v222 -= 64;
          v223 = *(void **)(v222 + 24);
          if ( v223 == (void *)(v222 + 40) )
            break;
          operator delete(v223);
          if ( v221 == v222 )
            goto LABEL_427;
        }
      }
LABEL_427:
      *((_DWORD *)v96 + 134) = 0;
    }
    else
    {
      v96 = (unsigned __int8 *)operator new(0x3A0u);
      *v96 = 0;
      *((_QWORD *)v96 + 12) = v96 + 112;
      *((_QWORD *)v96 + 16) = v96 + 144;
      *((_QWORD *)v96 + 20) = v96 + 176;
      *((_QWORD *)v96 + 24) = v96 + 208;
      *((_QWORD *)v96 + 28) = v96 + 240;
      *((_QWORD *)v96 + 32) = v96 + 272;
      *((_QWORD *)v96 + 36) = v96 + 304;
      *((_QWORD *)v96 + 40) = v96 + 336;
      *((_QWORD *)v96 + 44) = v96 + 368;
      *((_QWORD *)v96 + 48) = v96 + 400;
      *((_QWORD *)v96 + 52) = v96 + 432;
      *((_QWORD *)v96 + 13) = 0;
      v96[112] = 0;
      *((_QWORD *)v96 + 17) = 0;
      v96[144] = 0;
      *((_QWORD *)v96 + 21) = 0;
      v96[176] = 0;
      *((_QWORD *)v96 + 25) = 0;
      v96[208] = 0;
      *((_QWORD *)v96 + 29) = 0;
      v96[240] = 0;
      *((_QWORD *)v96 + 33) = 0;
      v96[272] = 0;
      *((_QWORD *)v96 + 37) = 0;
      v96[304] = 0;
      *((_QWORD *)v96 + 41) = 0;
      v96[336] = 0;
      *((_QWORD *)v96 + 45) = 0;
      v96[368] = 0;
      *((_QWORD *)v96 + 49) = 0;
      v96[400] = 0;
      *((_QWORD *)v96 + 53) = 0x800000000LL;
      *((_QWORD *)v96 + 66) = v96 + 544;
      *((_QWORD *)v96 + 67) = 0x600000000LL;
    }
    v312 = v96;
  }
  v96[*v96 + 1] = 4;
  v97 = v312;
  v98 = *(unsigned __int8 *)v312;
  *(_BYTE *)v312 = v98 + 1;
  v97[v98 + 2] = 22;
  if ( (_BYTE)v317 )
  {
    sub_FC7790(v314, (__int64 *)&v312, SHIBYTE(v317));
    v314 = 0;
    v317 = 0;
  }
  if ( v315 != v316 )
    operator delete(v315);
  v99 = (void **)v312;
  if ( v312 )
  {
    v100 = v313;
    if ( v313 )
    {
      if ( (unsigned __int64)v312 >= v313 && (unsigned __int64)v312 <= v313 + 14848 )
      {
        v213 = *(unsigned int *)(v313 + 14976);
        *(_DWORD *)(v313 + 14976) = v213 + 1;
        *(_QWORD *)(v100 + 8 * v213 + 14848) = v99;
      }
      else
      {
        v101 = *((void ***)v312 + 66);
        v102 = &v101[8 * (unsigned __int64)*((unsigned int *)v312 + 134)];
        if ( v101 != v102 )
        {
          do
          {
            while ( 1 )
            {
              v102 -= 8;
              v103 = (void **)v102[3];
              if ( v103 == v102 + 5 )
                break;
              operator delete(v103);
              if ( v101 == v102 )
                goto LABEL_162;
            }
          }
          while ( v101 != v102 );
LABEL_162:
          v102 = (void **)v99[66];
        }
        if ( v102 != v99 + 68 )
          free(v102);
        v104 = (void **)v99[52];
        v105 = v99 + 52;
        if ( v104 != v99 + 54 )
          free(v104);
        v106 = v99 + 12;
        do
        {
          while ( 1 )
          {
            v105 -= 4;
            if ( *v105 == v105 + 2 )
              break;
            operator delete(*v105);
            if ( v106 == v105 )
              goto LABEL_170;
          }
        }
        while ( v106 != v105 );
LABEL_170:
        operator delete(v99, 0x3A0u);
      }
    }
  }
  return 1;
}
