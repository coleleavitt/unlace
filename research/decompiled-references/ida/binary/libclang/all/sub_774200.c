unsigned __int64 __fastcall sub_774200(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // r12
  _QWORD *v10; // rbp
  int v11; // edx
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 *v14; // rax
  unsigned int v15; // r14d
  unsigned int v16; // r9d
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  __m128i *v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  _DWORD *v39; // rax
  unsigned int v40; // r12d
  __int64 *v41; // rbp
  int v42; // esi
  int v43; // edi
  __m128i *v44; // rsi
  unsigned int v45; // r14d
  unsigned __int64 v46; // rcx
  unsigned int v47; // r9d
  __m128i *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r14
  _QWORD *v51; // r12
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  unsigned int *v58; // r13
  unsigned int *v59; // r14
  unsigned int *v60; // rbp
  __int64 v61; // r13
  const __m128i *v62; // rbx
  const __m128i *v63; // r12
  __m128i v64; // xmm0
  _QWORD *v65; // rbp
  char *v66; // rdi
  _QWORD *v67; // rbx
  _QWORD *v68; // r14
  _QWORD *v69; // r12
  _QWORD *v70; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v72; // rbx
  __int64 v73; // r14
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rdx
  _QWORD *v77; // r11
  __m128i v78; // xmm0
  __int64 v79; // r15
  _QWORD *v80; // r14
  unsigned int v81; // eax
  __int64 v82; // rax
  unsigned int v83; // edx
  _QWORD *v84; // r12
  __int64 v85; // rbx
  int v86; // eax
  unsigned __int64 v87; // rsi
  int v88; // r9d
  unsigned int v89; // ebp
  __int64 *v90; // rcx
  __int64 v91; // r8
  __int64 *v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rbp
  __int64 k; // r12
  __m128i *v98; // rax
  int v99; // eax
  __m128i *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // rax
  __int64 v105; // r9
  unsigned __int64 v106; // rdx
  __int64 *v107; // rax
  char *v108; // rdx
  _DWORD *v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  unsigned __int64 v112; // rax
  _DWORD *v113; // rdx
  _QWORD *v114; // rax
  __int64 v115; // rbp
  _QWORD *v116; // rdx
  __int64 v117; // r12
  int v118; // r10d
  __int64 v119; // r8
  __m128i *v120; // rbp
  unsigned __int64 v121; // rdi
  unsigned __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rsi
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rsi
  void **v129; // r12
  void **v130; // rbp
  void **v131; // rbx
  void **v132; // rdi
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rax
  __int64 v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rdi
  int v138; // esi
  __int64 v139; // rdi
  _QWORD *v140; // rcx
  _QWORD *v141; // r11
  _QWORD *m; // rax
  __int64 v143; // rbp
  int v144; // edi
  int v145; // edi
  unsigned int v146; // ecx
  __int64 v147; // rdx
  __int64 v148; // r8
  int v149; // r8d
  unsigned int v150; // edx
  __int64 v151; // rsi
  int v152; // r11d
  __int64 *v153; // r9
  unsigned __int64 v154; // rax
  __int64 v155; // rax
  _QWORD *v156; // rax
  __int64 v157; // rdi
  int v158; // esi
  __int64 v159; // rdi
  _QWORD *v160; // rcx
  _QWORD *v161; // r11
  _QWORD *v162; // rax
  __int64 v163; // rsi
  int v164; // edi
  int v165; // edi
  unsigned int v166; // ecx
  __int64 v167; // rdx
  __int64 v168; // r9
  int v169; // r8d
  int v170; // r11d
  unsigned int v171; // edx
  __int64 v172; // rsi
  __int64 v173; // rdi
  __int8 *v174; // rbp
  _QWORD *v175; // rdx
  __int64 v176; // rax
  __m128i v177; // xmm0
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  _QWORD *v182; // rdx
  __int64 v183; // rax
  __m128i si128; // xmm0
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // r10
  _QWORD *v190; // rax
  __int64 v191; // r12
  __int64 v192; // rsi
  int v193; // r11d
  __m128i *v194; // rbp
  __int64 v195; // rdi
  int v196; // edx
  _QWORD *v197; // rdx
  __int64 v198; // rbp
  __int64 v199; // rdi
  __int64 v200; // rdx
  __int64 v201; // rax
  unsigned __int64 v202; // rax
  unsigned int v203; // eax
  __int64 v204; // rax
  __int64 v205; // rcx
  _QWORD *v206; // rdx
  int v207; // esi
  __int64 v208; // rcx
  _QWORD *v209; // rax
  _QWORD *v210; // r12
  _QWORD *i; // rsi
  __int64 v212; // rdx
  int v213; // eax
  int v214; // r14d
  int v215; // r9d
  __int64 v216; // r8
  unsigned int v217; // ecx
  __int64 v218; // rax
  __int64 v219; // r10
  int v220; // r10d
  unsigned int v221; // esi
  __int64 v222; // r9
  int v223; // r8d
  __int64 *v224; // rdi
  __int64 v225; // rdi
  int v226; // eax
  __int64 v227; // rdi
  int v228; // eax
  unsigned __int64 v229; // rax
  __int64 v230; // rax
  __int64 v231; // rcx
  _QWORD *v232; // rdx
  int v233; // esi
  __int64 v234; // rcx
  _QWORD *v235; // rax
  _QWORD *v236; // r12
  __int64 v237; // rdx
  int v238; // eax
  int v239; // r11d
  int v240; // r8d
  __int64 v241; // rdi
  unsigned int v242; // ecx
  __int64 v243; // rax
  __int64 v244; // r9
  _QWORD *v245; // rcx
  int v246; // r8d
  int v247; // esi
  __int64 *v248; // r9
  unsigned int v249; // r10d
  __int64 v250; // rdi
  unsigned int v251; // eax
  __int64 v252; // rax
  __int64 v253; // rdi
  _QWORD *v254; // rcx
  int v255; // esi
  __int64 v256; // rdi
  _QWORD *v257; // rax
  __int64 *v258; // rcx
  __int64 v259; // r11
  int v260; // eax
  int v261; // r12d
  __int64 v262; // r10
  int v263; // r8d
  _QWORD *v264; // rdi
  __int64 v265; // rdx
  _QWORD *v266; // rax
  __int64 v267; // r9
  _QWORD *v268; // rdx
  int v269; // r8d
  int v270; // esi
  __m128i *v271; // rdx
  unsigned int v272; // r10d
  __int64 v273; // rdi
  _QWORD *v274; // rcx
  unsigned __int64 v275; // rcx
  unsigned int v276; // eax
  __int64 v277; // rax
  __int64 v278; // rdi
  _QWORD *v279; // rcx
  int v280; // esi
  __int64 v281; // rdi
  _QWORD *v282; // rax
  __int64 *v283; // r14
  __int64 *j; // rcx
  __int64 v285; // r11
  int v286; // eax
  int v287; // r12d
  __int64 v288; // r10
  int v289; // r8d
  _QWORD *v290; // rdi
  __int64 v291; // rdx
  _QWORD *v292; // rax
  __int64 v293; // r9
  int v294; // esi
  unsigned int v295; // edx
  __int64 v296; // r10
  int v297; // r8d
  __m128i *v298; // rdi
  _QWORD *v299; // rdx
  __int64 v300; // [rsp+20h] [rbp-158h]
  _QWORD *v301; // [rsp+20h] [rbp-158h]
  _QWORD *v302; // [rsp+20h] [rbp-158h]
  unsigned int v303; // [rsp+2Ch] [rbp-14Ch]
  void *v304; // [rsp+30h] [rbp-148h]
  __int64 v305; // [rsp+38h] [rbp-140h]
  void *v306; // [rsp+38h] [rbp-140h]
  _QWORD *v307; // [rsp+40h] [rbp-138h]
  __int64 v308; // [rsp+40h] [rbp-138h]
  __int64 *v309; // [rsp+40h] [rbp-138h]
  __int64 *v310; // [rsp+40h] [rbp-138h]
  __int64 *v311; // [rsp+40h] [rbp-138h]
  __int64 v312; // [rsp+40h] [rbp-138h]
  unsigned int v313; // [rsp+40h] [rbp-138h]
  unsigned int v314; // [rsp+40h] [rbp-138h]
  __int64 *v315; // [rsp+40h] [rbp-138h]
  __int64 *v316; // [rsp+40h] [rbp-138h]
  int v317; // [rsp+40h] [rbp-138h]
  __int64 v318; // [rsp+40h] [rbp-138h]
  __int64 *v319; // [rsp+40h] [rbp-138h]
  __int64 v320; // [rsp+48h] [rbp-130h]
  _QWORD *v321; // [rsp+50h] [rbp-128h]
  __int64 *v322; // [rsp+58h] [rbp-120h]
  int v323; // [rsp+58h] [rbp-120h]
  unsigned __int64 v325; // [rsp+70h] [rbp-108h]
  __int64 v326; // [rsp+78h] [rbp-100h]
  void *v327; // [rsp+88h] [rbp-F0h] BYREF
  __int128 v328; // [rsp+90h] [rbp-E8h]
  __int128 v329; // [rsp+A0h] [rbp-D8h]
  __int64 v330; // [rsp+B0h] [rbp-C8h]
  char v331; // [rsp+B8h] [rbp-C0h] BYREF
  __m128i v332; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v333; // [rsp+D0h] [rbp-A8h]
  int v334; // [rsp+D8h] [rbp-A0h]
  void **v335; // [rsp+E0h] [rbp-98h]
  __int64 v336; // [rsp+E8h] [rbp-90h]
  void *v337[2]; // [rsp+F0h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+100h] [rbp-78h] BYREF
  __int64 v339; // [rsp+110h] [rbp-68h]
  _BYTE v340[96]; // [rsp+118h] [rbp-60h] BYREF

  v6 = a2;
  v304 = (void *)a4;
  if ( !a3 )
  {
    v7 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
    if ( v7 == sub_6A41B0 )
    {
      v8 = sub_777E10(a2);
      v9 = *(unsigned int *)(a1 + 16);
      v10 = *(_QWORD **)a1;
      v11 = 0;
      v12 = v8;
      if ( !(_DWORD)v9 )
        goto LABEL_269;
    }
    else
    {
      v201 = ((__int64 (__fastcall *)(__int64))v7)(a2);
      v9 = *(unsigned int *)(a1 + 16);
      v10 = *(_QWORD **)a1;
      v11 = 0;
      v12 = v201;
      if ( !(_DWORD)v9 )
        goto LABEL_269;
    }
    v13 = v9 - 1;
    a4 = 1;
    v14 = nullptr;
    v15 = ((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4);
    v16 = (v9 - 1) & v15;
    v17 = &v10[2 * v16];
    v18 = *v17;
    if ( v12 == *v17 )
    {
LABEL_5:
      v19 = (unsigned int *)(v17 + 1);
      v303 = *((_DWORD *)v17 + 2) + 1;
LABEL_6:
      a2 = v303;
      *v19 = v303;
      goto LABEL_8;
    }
    while ( v18 != -4096 )
    {
      if ( !v14 && v18 == -8192 )
        v14 = v17;
      v16 = v13 & (a4 + v16);
      v17 = &v10[2 * v16];
      v18 = *v17;
      if ( v12 == *v17 )
        goto LABEL_5;
      a4 = (unsigned int)(a4 + 1);
    }
    if ( !v14 )
      v14 = v17;
    v11 = 2 * v9;
    a4 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    if ( 4 * (int)a4 < (unsigned int)(3 * v9) )
    {
      if ( (unsigned int)v9 >> 3 < (int)v9 - *(_DWORD *)(a1 + 12) - (int)a4 )
      {
LABEL_308:
        *(_DWORD *)(a1 + 8) = a4;
        if ( *v14 != -4096 )
          --*(_DWORD *)(a1 + 12);
        *v14 = v12;
        v19 = (unsigned int *)(v14 + 1);
        *v19 = 0;
        v303 = 1;
        goto LABEL_6;
      }
      v229 = (((((((((v13 | ((unsigned __int64)v13 >> 1)) >> 2) | v13 | ((unsigned __int64)v13 >> 1)) >> 4)
                | ((v13 | ((unsigned __int64)v13 >> 1)) >> 2)
                | v13
                | ((unsigned __int64)v13 >> 1)) >> 8)
              | ((((v13 | ((unsigned __int64)v13 >> 1)) >> 2) | v13 | ((unsigned __int64)v13 >> 1)) >> 4)
              | ((v13 | ((unsigned __int64)v13 >> 1)) >> 2)
              | v13
              | ((unsigned __int64)v13 >> 1)) >> 16)
            | ((((((v13 | ((unsigned __int64)v13 >> 1)) >> 2) | v13 | ((unsigned __int64)v13 >> 1)) >> 4)
              | ((v13 | ((unsigned __int64)v13 >> 1)) >> 2)
              | v13
              | ((unsigned __int64)v13 >> 1)) >> 8)
            | ((((v13 | ((unsigned __int64)v13 >> 1)) >> 2) | v13 | ((unsigned __int64)v13 >> 1)) >> 4)
            | ((v13 | ((unsigned __int64)v13 >> 1)) >> 2)
            | v13
            | ((unsigned __int64)v13 >> 1))
           + 1;
      if ( (unsigned int)v229 < 0x40 )
        LODWORD(v229) = 64;
      *(_DWORD *)(a1 + 16) = v229;
      v230 = sub_25CC9C0(16LL * (unsigned int)v229, 8);
      v231 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)a1 = v230;
      v232 = (_QWORD *)v230;
      v233 = v231;
      v234 = 16 * v231;
      v235 = (_QWORD *)(v230 + v234);
      if ( v10 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v302 = &v10[2 * v9];
        if ( v234 )
        {
          if ( (((_BYTE)v235 - (_BYTE)v232) & 0x10) == 0 || (*v232 = -4096, v232 += 2, v232 != v235) )
          {
            do
            {
              *v232 = -4096;
              v232 += 4;
              *(v232 - 2) = -4096;
            }
            while ( v232 != v235 );
          }
        }
        v236 = v10;
        do
        {
          v237 = *v236;
          if ( *v236 != -4096 && v237 != -8192 )
          {
            v238 = *(_DWORD *)(a1 + 16);
            if ( !v238 )
            {
              *(_QWORD *)&dword_0 = *v236;
              BUG();
            }
            v239 = v238 - 1;
            v240 = 1;
            v241 = 0;
            v242 = (v238 - 1) & (((unsigned int)v237 >> 9) ^ ((unsigned int)v237 >> 4));
            v243 = *(_QWORD *)a1 + 16LL * v242;
            v244 = *(_QWORD *)v243;
            if ( v237 != *(_QWORD *)v243 )
            {
              while ( v244 != -4096 )
              {
                if ( v244 == -8192 && !v241 )
                  v241 = v243;
                v242 = v239 & (v240 + v242);
                v243 = *(_QWORD *)a1 + 16LL * v242;
                v244 = *(_QWORD *)v243;
                if ( v237 == *(_QWORD *)v243 )
                  goto LABEL_323;
                ++v240;
              }
              if ( v241 )
                v243 = v241;
            }
LABEL_323:
            *(_QWORD *)v243 = v237;
            *(_DWORD *)(v243 + 8) = *((_DWORD *)v236 + 2);
            ++*(_DWORD *)(a1 + 8);
          }
          v236 += 2;
        }
        while ( v302 != v236 );
        operator delete();
        v232 = *(_QWORD **)a1;
        v233 = *(_DWORD *)(a1 + 16);
        a4 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        if ( v232 != v235 )
        {
          v245 = v232;
          if ( (((_BYTE)v235 - (_BYTE)v232) & 0x10) == 0 || (v245 = v232 + 2, *v232 = -4096, v232 + 2 != v235) )
          {
            do
            {
              *v245 = -4096;
              v245 += 4;
              *(v245 - 2) = -4096;
            }
            while ( v245 != v235 );
          }
        }
        a4 = 1;
      }
      if ( v233 )
      {
        v246 = v233 - 1;
        v247 = 1;
        v248 = nullptr;
        v249 = v246 & v15;
        v14 = &v232[2 * (v246 & v15)];
        v250 = *v14;
        if ( v12 != *v14 )
        {
          while ( v250 != -4096 )
          {
            if ( v250 == -8192 && !v248 )
              v248 = v14;
            v249 = v246 & (v247 + v249);
            v14 = &v232[2 * v249];
            v250 = *v14;
            if ( v12 == *v14 )
              goto LABEL_308;
            ++v247;
          }
          if ( v248 )
            v14 = v248;
        }
        goto LABEL_308;
      }
LABEL_459:
      *(_DWORD *)(a1 + 8) = a4;
      BUG();
    }
LABEL_269:
    v202 = (((((((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
               | (unsigned int)(v11 - 1)
               | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
             | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
             | (unsigned int)(v11 - 1)
             | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
             | (unsigned int)(v11 - 1)
             | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
           | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
           | (unsigned int)(v11 - 1)
           | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 16)
         | (((((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
             | (unsigned int)(v11 - 1)
             | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
           | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
           | (unsigned int)(v11 - 1)
           | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
           | (unsigned int)(v11 - 1)
           | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 4)
         | (((unsigned int)(v11 - 1) | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1)) >> 2)
         | (unsigned int)(v11 - 1)
         | ((unsigned __int64)(unsigned int)(v11 - 1) >> 1);
    v203 = v202 + 1;
    if ( v203 < 0x40 )
      v203 = 64;
    *(_DWORD *)(a1 + 16) = v203;
    v204 = sub_25CC9C0(16LL * v203, 8);
    v205 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)a1 = v204;
    v206 = (_QWORD *)v204;
    v207 = v205;
    v208 = 16 * v205;
    v209 = (_QWORD *)(v204 + v208);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v210 = &v10[2 * v9];
      if ( v208 )
      {
        if ( (((_BYTE)v209 - (_BYTE)v206) & 0x10) == 0 || (*v206 = -4096, v206 += 2, v206 != v209) )
        {
          do
          {
            *v206 = -4096;
            v206 += 4;
            *(v206 - 2) = -4096;
          }
          while ( v206 != v209 );
        }
      }
      for ( i = v10; v210 != i; i += 2 )
      {
        v212 = *i;
        if ( *i != -4096 && v212 != -8192 )
        {
          v213 = *(_DWORD *)(a1 + 16);
          if ( !v213 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v214 = v213 - 1;
          v215 = 1;
          v216 = 0;
          v217 = (v213 - 1) & (((unsigned int)v212 >> 9) ^ ((unsigned int)v212 >> 4));
          v218 = *(_QWORD *)a1 + 16LL * v217;
          v219 = *(_QWORD *)v218;
          if ( v212 != *(_QWORD *)v218 )
          {
            while ( v219 != -4096 )
            {
              if ( v219 == -8192 && !v216 )
                v216 = v218;
              v217 = v214 & (v215 + v217);
              v218 = *(_QWORD *)a1 + 16LL * v217;
              v219 = *(_QWORD *)v218;
              if ( v212 == *(_QWORD *)v218 )
                goto LABEL_281;
              ++v215;
            }
            if ( v216 )
              v218 = v216;
          }
LABEL_281:
          *(_QWORD *)v218 = v212;
          *(_DWORD *)(v218 + 8) = *((_DWORD *)i + 2);
          ++*(_DWORD *)(a1 + 8);
        }
      }
      operator delete();
      v206 = *(_QWORD **)a1;
      v207 = *(_DWORD *)(a1 + 16);
      a4 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      if ( v206 != v209 )
      {
        v274 = v206;
        if ( (((_BYTE)v209 - (_BYTE)v206) & 0x10) == 0 || (v274 = v206 + 2, *v206 = -4096, v206 + 2 != v209) )
        {
          do
          {
            *v274 = -4096;
            v274 += 4;
            *(v274 - 2) = -4096;
          }
          while ( v274 != v209 );
        }
      }
      a4 = 1;
    }
    if ( v207 )
    {
      v220 = v207 - 1;
      v221 = (v207 - 1) & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
      v14 = &v206[2 * v221];
      v222 = *v14;
      if ( v12 != *v14 )
      {
        v223 = 1;
        v224 = nullptr;
        while ( v222 != -4096 )
        {
          if ( v222 == -8192 && !v224 )
            v224 = v14;
          v221 = v220 & (v223 + v221);
          v14 = &v206[2 * v221];
          v222 = *v14;
          if ( v12 == *v14 )
            goto LABEL_308;
          ++v223;
        }
        if ( v224 )
          v14 = v224;
      }
      goto LABEL_308;
    }
    goto LABEL_459;
  }
  v303 = 0;
LABEL_8:
  v20 = *(_QWORD *)(v6 + 104);
  v21 = *(_QWORD *)(v20 + 96);
  v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v21 & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_12;
  }
  else
  {
    if ( v22 <= 3 || (v21 & 2) == 0 )
      goto LABEL_12;
    v114 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
    v115 = v114[2275];
    if ( !v115 )
    {
      *(_QWORD *)(v20 + 96) = v20 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_12;
    }
    a2 = v114[274];
    v114[284] += 24LL;
    v22 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a4 = v22 + 24;
    if ( v114[275] >= v22 + 24 && a2 )
    {
      v114[274] = a4;
    }
    else
    {
      a2 = 24;
      v22 = sub_76D810((__int64)(v114 + 274), 24, 3);
    }
    *(_QWORD *)v22 = v115;
    *(_DWORD *)(v22 + 8) = 0;
    v21 = v22 | 5;
    *(_QWORD *)(v22 + 16) = v20;
    *(_QWORD *)(v20 + 96) = v22 | 5;
    LOBYTE(v22) = v22 & 0xFA | 4;
  }
  if ( (v22 & 4) != 0 )
  {
    v23 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v23 )
    {
      v199 = *(_QWORD *)v23;
      v200 = *(unsigned int *)(*(_QWORD *)v23 + 12LL);
      if ( v23[2] != (_DWORD)v200 )
      {
        v23[2] = v200;
        a2 = v20;
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v199 + 144LL))(v199, v20, v200, a4);
      }
    }
  }
LABEL_12:
  v24 = *(_QWORD *)(v6 + 128);
  if ( (*(_BYTE *)(v24 + 24) & 1) != 0 )
    v25 = sub_7A2E20(v24, a2);
  else
    v25 = *(_QWORD *)(v24 + 24);
  v26 = *(_QWORD *)(v6 + 104);
  v27 = *(_QWORD *)(v26 + 96);
  v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v27 & 1) != 0 )
  {
    if ( v28 )
      goto LABEL_87;
LABEL_219:
    v110 = *(_QWORD *)(v6 + 128);
    v305 = v25 + 24LL * *(unsigned int *)(v110 + 16);
    goto LABEL_220;
  }
  if ( v28 <= 3 )
  {
    if ( v28 )
      goto LABEL_90;
    goto LABEL_219;
  }
  if ( (v27 & 2) == 0 )
  {
    v29 = *(_QWORD *)(v6 + 128);
    v305 = v25 + 24LL * *(unsigned int *)(v29 + 16);
    goto LABEL_18;
  }
  v116 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
  v117 = v116[2275];
  if ( !v117 )
  {
    *(_QWORD *)(v26 + 96) = v26 & 0xFFFFFFFFFFFFFFFALL | 1;
    v26 = *(_QWORD *)(v6 + 104);
    goto LABEL_90;
  }
  a2 = v116[274];
  v116[284] += 24LL;
  v28 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a4 = v28 + 24;
  if ( v116[275] >= v28 + 24 && a2 )
  {
    v116[274] = a4;
  }
  else
  {
    a2 = 24;
    v28 = sub_76D810((__int64)(v116 + 274), 24, 3);
  }
  *(_QWORD *)v28 = v117;
  *(_DWORD *)(v28 + 8) = 0;
  v27 = v28 | 5;
  *(_QWORD *)(v28 + 16) = v26;
  *(_QWORD *)(v26 + 96) = v28 | 5;
  LOBYTE(v28) = v28 & 0xFA | 4;
LABEL_87:
  if ( (v28 & 4) != 0 )
  {
    v109 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v109 )
    {
      v227 = *(_QWORD *)v109;
      v228 = *(_DWORD *)(*(_QWORD *)v109 + 12LL);
      if ( v109[2] != v228 )
      {
        v109[2] = v228;
        a2 = v26;
        (*(void (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v227 + 144LL))(v227, v26, v109, a4);
      }
    }
  }
  v26 = *(_QWORD *)(v6 + 104);
LABEL_90:
  v110 = *(_QWORD *)(v6 + 128);
  v111 = *(_QWORD *)(v26 + 96);
  v29 = v110;
  v305 = v25 + 24LL * *(unsigned int *)(v110 + 16);
  v112 = v111 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v111 & 1) != 0 )
  {
    if ( v112 )
    {
LABEL_92:
      if ( (v112 & 4) != 0 )
      {
        v113 = (_DWORD *)(v111 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v113 )
        {
          v225 = *(_QWORD *)v113;
          v226 = *(_DWORD *)(*(_QWORD *)v113 + 12LL);
          if ( v113[2] != v226 )
          {
            v113[2] = v226;
            a2 = v26;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v225 + 144LL))(v225, v26);
          }
        }
        v29 = *(_QWORD *)(v6 + 128);
        if ( (*(_BYTE *)(v29 + 24) & 1) == 0 )
          goto LABEL_19;
        goto LABEL_95;
      }
      v110 = *(_QWORD *)(v6 + 128);
    }
LABEL_220:
    v29 = v110;
    goto LABEL_18;
  }
  if ( v112 <= 3 )
    goto LABEL_220;
  if ( (v111 & 2) != 0 )
  {
    v197 = (_QWORD *)(v111 & 0xFFFFFFFFFFFFFFFCLL);
    v198 = v197[2275];
    if ( v198 )
    {
      a2 = v197[274];
      v197[284] += 24LL;
      v112 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v197[275] >= v112 + 24 && a2 )
      {
        v197[274] = v112 + 24;
      }
      else
      {
        a2 = 24;
        v112 = sub_76D810((__int64)(v197 + 274), 24, 3);
      }
      *(_QWORD *)v112 = v198;
      *(_DWORD *)(v112 + 8) = 0;
      v111 = v112 | 5;
      *(_QWORD *)(v112 + 16) = v26;
      *(_QWORD *)(v26 + 96) = v112 | 5;
      LOBYTE(v112) = v112 & 0xFA | 4;
      goto LABEL_92;
    }
    *(_QWORD *)(v26 + 96) = v26 & 0xFFFFFFFFFFFFFFFALL | 1;
    v29 = *(_QWORD *)(v6 + 128);
  }
LABEL_18:
  if ( (*(_BYTE *)(v29 + 24) & 1) == 0 )
  {
LABEL_19:
    v300 = *(_QWORD *)(v29 + 24);
    goto LABEL_20;
  }
LABEL_95:
  v300 = sub_7A2E20(v29, a2);
LABEL_20:
  v30 = v305;
  while ( v300 != v305 )
  {
    v31 = *(_QWORD *)(**(_QWORD **)(v300 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v32 = *(_QWORD *)(v31 + 8);
    if ( (v32 & 7) != 0 || (v32 & 8) != 0 )
      v31 = sub_B0CF30(**(_QWORD **)(v300 + 16), v30);
    v33 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v33 + 16LL) != 47 )
      goto LABEL_59;
    v34 = sub_B14A40(*v33);
    v35 = *(_QWORD *)(v34 + 104);
    v36 = (__m128i *)v34;
    v37 = *(_QWORD *)(v35 + 96);
    v38 = v37 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v37 & 1) != 0 )
    {
      if ( !v38 )
        goto LABEL_29;
    }
    else
    {
      if ( v38 <= 3 || (v37 & 2) == 0 )
        goto LABEL_29;
      v190 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
      v191 = v190[2275];
      if ( !v191 )
      {
        *(_QWORD *)(v35 + 96) = v35 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_29;
      }
      v192 = v190[274];
      v190[284] += 24LL;
      v38 = (v192 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v190[275] >= v38 + 24 && v192 )
        v190[274] = v38 + 24;
      else
        v38 = sub_76D810((__int64)(v190 + 274), 24, 3);
      *(_QWORD *)v38 = v191;
      *(_DWORD *)(v38 + 8) = 0;
      v37 = v38 | 5;
      *(_QWORD *)(v38 + 16) = v35;
      *(_QWORD *)(v35 + 96) = v38 | 5;
      LOBYTE(v38) = v38 & 0xFA | 4;
    }
    if ( (v38 & 4) != 0 )
    {
      v39 = (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v39 )
      {
        v195 = *(_QWORD *)v39;
        v196 = *(_DWORD *)(*(_QWORD *)v39 + 12LL);
        if ( v39[2] != v196 )
        {
          v39[2] = v196;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v195 + 144LL))(v195, v35);
        }
      }
    }
LABEL_29:
    if ( (*(_BYTE *)(v36[8].m128i_i64[0] + 1) & 4) != 0 )
    {
      if ( *(_DWORD *)(a5 + 32) || (*(_BYTE *)(v300 + 12) & 1) != 0 )
      {
        LODWORD(ptr[0]) = 0;
        ptr[1] = v340;
        v337[0] = nullptr;
        v337[1] = nullptr;
        v339 = 0;
        if ( (*(_BYTE *)(v300 + 12) & 1) == 0 )
        {
          v50 = (__int64)v337;
          v44 = v36;
          sub_774200(a1, v36, 0, v304, v337);
          goto LABEL_36;
        }
        v40 = *(_DWORD *)(a1 + 40);
        v41 = *(__int64 **)(a1 + 24);
        v42 = 0;
        if ( !v40 )
          goto LABEL_403;
        v43 = 1;
        v44 = nullptr;
        v45 = ((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4);
        v46 = v40 - 1;
        v47 = v46 & v45;
        v48 = (__m128i *)&v41[2 * ((unsigned int)v46 & v45)];
        v49 = v48->m128i_i64[0];
        if ( v36 == (__m128i *)v48->m128i_i64[0] )
        {
LABEL_35:
          v50 = v48->m128i_i64[1];
          if ( v50 )
          {
LABEL_36:
            v51 = *(_QWORD **)(v50 + 24);
            v321 = &v51[6 * *(unsigned int *)(v50 + 32)];
            if ( v321 != v51 )
            {
              v326 = v6;
              do
              {
                v52 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)*v51 + 32LL))(*v51, v44);
                v44 = &v332;
                v332.m128i_i64[0] = v52;
                v53 = sub_772B40(a5, v332.m128i_i64);
                v57 = *((unsigned int *)v51 + 10);
                v58 = (unsigned int *)v51[4];
                v59 = &v58[30 * v57];
                if ( v58 != v59 )
                {
                  v307 = v51;
                  v60 = (unsigned int *)v51[4];
                  v61 = v53;
                  do
                  {
                    v62 = *((const __m128i **)v60 + 1);
                    v63 = (const __m128i *)((char *)v62 + 24 * v60[4]);
                    while ( v63 != v62 )
                    {
                      v64 = _mm_loadu_si128(v62);
                      v44 = (__m128i *)*v60;
                      v62 = (const __m128i *)((char *)v62 + 24);
                      sub_7723F0(
                        v61,
                        (int)v44,
                        v54,
                        v57,
                        v55,
                        v56,
                        v64.m128i_i64[0],
                        v64.m128i_i32[2],
                        v62[-1].m128i_i64[1]);
                    }
                    v60 += 30;
                  }
                  while ( v59 != v60 );
                  v51 = v307;
                }
                v51 += 6;
              }
              while ( v51 != v321 );
              v6 = v326;
            }
            v65 = ptr[1];
            v66 = (char *)ptr[1] + 48 * (unsigned int)v339;
            v67 = v66;
            if ( ptr[1] != v66 )
            {
              do
              {
                v68 = (_QWORD *)*(v67 - 2);
                v69 = &v68[15 * *((unsigned int *)v67 - 2)];
                if ( v68 != v69 )
                {
                  do
                  {
                    v69 -= 15;
                    v70 = (_QWORD *)v69[1];
                    if ( v70 != v69 + 3 )
                      free(v70);
                  }
                  while ( v68 != v69 );
                  v69 = (_QWORD *)*(v67 - 2);
                }
                if ( v67 != v69 )
                  free(v69);
                v67 -= 6;
                operator delete();
              }
              while ( v65 != v67 );
              v66 = (char *)ptr[1];
            }
            if ( v66 != v340 )
              free(v66);
            operator delete();
            goto LABEL_59;
          }
LABEL_237:
          v194 = v48;
          v44 = v36;
          v50 = operator new(0x28u);
          *(_DWORD *)(v50 + 16) = 0;
          *(_QWORD *)v50 = 0;
          *(_QWORD *)(v50 + 8) = 0;
          *(_QWORD *)(v50 + 24) = v50 + 40;
          *(_QWORD *)(v50 + 32) = 0;
          v194->m128i_i64[1] = v50;
          sub_774200(a1, v36, 1, v36, v50);
          goto LABEL_36;
        }
        while ( v49 != -4096 )
        {
          if ( v49 == -8192 && !v44 )
            v44 = v48;
          v47 = v46 & (v43 + v47);
          v48 = (__m128i *)&v41[2 * v47];
          v49 = v48->m128i_i64[0];
          if ( v36 == (__m128i *)v48->m128i_i64[0] )
            goto LABEL_35;
          ++v43;
        }
        if ( v44 )
          v48 = v44;
        v193 = *(_DWORD *)(a1 + 32) + 1;
        v42 = 2 * v40;
        if ( 4 * v193 < 3 * v40 )
        {
          if ( v40 >> 3 >= v40 - *(_DWORD *)(a1 + 36) - v193 )
          {
            v251 = (((((((((v46 | (v46 >> 1)) >> 2) | v46 | (v46 >> 1)) >> 4)
                      | ((v46 | (v46 >> 1)) >> 2)
                      | v46
                      | (v46 >> 1)) >> 8)
                    | ((((v46 | (v46 >> 1)) >> 2) | v46 | (v46 >> 1)) >> 4)
                    | ((v46 | (v46 >> 1)) >> 2)
                    | v46
                    | (v46 >> 1)) >> 16)
                  | ((((((v46 | (v46 >> 1)) >> 2) | v46 | (v46 >> 1)) >> 4)
                    | ((v46 | (v46 >> 1)) >> 2)
                    | v46
                    | (v46 >> 1)) >> 8)
                  | ((((v46 | (v46 >> 1)) >> 2) | v46 | (v46 >> 1)) >> 4)
                  | ((v46 | (v46 >> 1)) >> 2)
                  | v46
                  | (v46 >> 1))
                 + 1;
            if ( v251 < 0x40 )
              v251 = 64;
            *(_DWORD *)(a1 + 40) = v251;
            v252 = sub_25CC9C0(16LL * v251, 8);
            v253 = *(unsigned int *)(a1 + 40);
            *(_QWORD *)(a1 + 24) = v252;
            v254 = (_QWORD *)v252;
            v255 = v253;
            v256 = 16 * v253;
            v257 = (_QWORD *)(v252 + v256);
            if ( v41 )
            {
              *(_QWORD *)(a1 + 32) = 0;
              v319 = &v41[2 * v40];
              if ( v256 )
              {
                if ( (((_BYTE)v257 - (_BYTE)v254) & 0x10) == 0 || (*v254 = -4096, v254 += 2, v254 != v257) )
                {
                  do
                  {
                    *v254 = -4096;
                    v254 += 4;
                    *(v254 - 2) = -4096;
                  }
                  while ( v254 != v257 );
                }
              }
              v258 = v41;
              do
              {
                v259 = *v258;
                if ( *v258 != -4096 && v259 != -8192 )
                {
                  v260 = *(_DWORD *)(a1 + 40);
                  if ( !v260 )
                  {
                    *(_QWORD *)&dword_0 = *v258;
                    BUG();
                  }
                  v261 = v260 - 1;
                  v262 = *(_QWORD *)(a1 + 24);
                  v263 = 1;
                  v264 = nullptr;
                  LODWORD(v265) = (v260 - 1) & (((unsigned int)v259 >> 9) ^ ((unsigned int)v259 >> 4));
                  v266 = (_QWORD *)(v262 + 16LL * (unsigned int)v265);
                  v267 = *v266;
                  if ( *v266 != v259 )
                  {
                    while ( v267 != -4096 )
                    {
                      if ( v267 == -8192 && !v264 )
                        v264 = v266;
                      v265 = v261 & (unsigned int)(v265 + v263);
                      v266 = (_QWORD *)(v262 + 16 * v265);
                      v267 = *v266;
                      if ( v259 == *v266 )
                        goto LABEL_354;
                      ++v263;
                    }
                    if ( v264 )
                      v266 = v264;
                  }
LABEL_354:
                  *v266 = v259;
                  v266[1] = v258[1];
                  ++*(_DWORD *)(a1 + 32);
                }
                v258 += 2;
              }
              while ( v319 != v258 );
              operator delete();
              v254 = *(_QWORD **)(a1 + 24);
              v255 = *(_DWORD *)(a1 + 40);
              v193 = *(_DWORD *)(a1 + 32) + 1;
            }
            else
            {
              *(_QWORD *)(a1 + 32) = 0;
              if ( v254 != v257 )
              {
                v268 = v254;
                if ( (((_BYTE)v257 - (_BYTE)v254) & 0x10) == 0 || (v268 = v254 + 2, *v254 = -4096, v254 + 2 != v257) )
                {
                  do
                  {
                    *v268 = -4096;
                    v268 += 4;
                    *(v268 - 2) = -4096;
                  }
                  while ( v268 != v257 );
                }
              }
              v193 = 1;
            }
            if ( !v255 )
              goto LABEL_461;
            v269 = v255 - 1;
            v270 = 1;
            v271 = nullptr;
            v272 = v269 & v45;
            v48 = (__m128i *)&v254[2 * (v269 & v45)];
            v273 = v48->m128i_i64[0];
            if ( v36 != (__m128i *)v48->m128i_i64[0] )
            {
              while ( v273 != -4096 )
              {
                if ( v273 == -8192 && !v271 )
                  v271 = v48;
                v272 = v269 & (v270 + v272);
                v48 = (__m128i *)&v254[2 * v272];
                v273 = v48->m128i_i64[0];
                if ( v36 == (__m128i *)v48->m128i_i64[0] )
                  goto LABEL_234;
                ++v270;
              }
              if ( v271 )
                v48 = v271;
            }
          }
        }
        else
        {
LABEL_403:
          v275 = (unsigned int)(v42 - 1);
          v276 = (((((((((v275 | (v275 >> 1)) >> 2) | v275 | (v275 >> 1)) >> 4)
                    | ((v275 | (v275 >> 1)) >> 2)
                    | v275
                    | (v275 >> 1)) >> 8)
                  | ((((v275 | (v275 >> 1)) >> 2) | v275 | (v275 >> 1)) >> 4)
                  | ((v275 | (v275 >> 1)) >> 2)
                  | v275
                  | (v275 >> 1)) >> 16)
                | ((((((v275 | (v275 >> 1)) >> 2) | v275 | (v275 >> 1)) >> 4)
                  | ((v275 | (v275 >> 1)) >> 2)
                  | v275
                  | (v275 >> 1)) >> 8)
                | ((((v275 | (v275 >> 1)) >> 2) | v275 | (v275 >> 1)) >> 4)
                | ((v275 | (v275 >> 1)) >> 2)
                | v275
                | (v275 >> 1))
               + 1;
          if ( v276 < 0x40 )
            v276 = 64;
          *(_DWORD *)(a1 + 40) = v276;
          v277 = sub_25CC9C0(16LL * v276, 8);
          v278 = *(unsigned int *)(a1 + 40);
          *(_QWORD *)(a1 + 24) = v277;
          v279 = (_QWORD *)v277;
          v280 = v278;
          v281 = 16 * v278;
          v282 = (_QWORD *)(v277 + v281);
          if ( v41 )
          {
            *(_QWORD *)(a1 + 32) = 0;
            v283 = &v41[2 * v40];
            if ( v281 )
            {
              if ( (((_BYTE)v282 - (_BYTE)v279) & 0x10) == 0 || (*v279 = -4096, v279 += 2, v279 != v282) )
              {
                do
                {
                  *v279 = -4096;
                  v279 += 4;
                  *(v279 - 2) = -4096;
                }
                while ( v279 != v282 );
              }
            }
            for ( j = v41; v283 != j; j += 2 )
            {
              v285 = *j;
              if ( *j != -4096 && v285 != -8192 )
              {
                v286 = *(_DWORD *)(a1 + 40);
                if ( !v286 )
                {
                  *(_QWORD *)&dword_0 = *j;
                  BUG();
                }
                v287 = v286 - 1;
                v288 = *(_QWORD *)(a1 + 24);
                v289 = 1;
                v290 = nullptr;
                LODWORD(v291) = (v286 - 1) & (((unsigned int)v285 >> 9) ^ ((unsigned int)v285 >> 4));
                v292 = (_QWORD *)(v288 + 16LL * (unsigned int)v291);
                v293 = *v292;
                if ( v285 != *v292 )
                {
                  while ( v293 != -4096 )
                  {
                    if ( v293 == -8192 && !v290 )
                      v290 = v292;
                    v291 = v287 & (unsigned int)(v291 + v289);
                    v292 = (_QWORD *)(v288 + 16 * v291);
                    v293 = *v292;
                    if ( v285 == *v292 )
                      goto LABEL_415;
                    ++v289;
                  }
                  if ( v290 )
                    v292 = v290;
                }
LABEL_415:
                *v292 = v285;
                v292[1] = j[1];
                ++*(_DWORD *)(a1 + 32);
              }
            }
            operator delete();
            v279 = *(_QWORD **)(a1 + 24);
            v280 = *(_DWORD *)(a1 + 40);
            v193 = *(_DWORD *)(a1 + 32) + 1;
          }
          else
          {
            *(_QWORD *)(a1 + 32) = 0;
            if ( v279 != v282 )
            {
              v299 = v279;
              if ( (((_BYTE)v282 - (_BYTE)v279) & 0x10) == 0 || (v299 = v279 + 2, *v279 = -4096, v279 + 2 != v282) )
              {
                do
                {
                  *v299 = -4096;
                  v299 += 4;
                  *(v299 - 2) = -4096;
                }
                while ( v299 != v282 );
              }
            }
            v193 = 1;
          }
          if ( !v280 )
          {
LABEL_461:
            *(_DWORD *)(a1 + 32) = v193;
            BUG();
          }
          v294 = v280 - 1;
          v295 = v294 & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
          v48 = (__m128i *)&v279[2 * v295];
          v296 = v48->m128i_i64[0];
          if ( v36 != (__m128i *)v48->m128i_i64[0] )
          {
            v297 = 1;
            v298 = nullptr;
            while ( v296 != -4096 )
            {
              if ( v296 == -8192 && !v298 )
                v298 = v48;
              v295 = v294 & (v297 + v295);
              v48 = (__m128i *)&v279[2 * v295];
              v296 = v48->m128i_i64[0];
              if ( v36 == (__m128i *)v48->m128i_i64[0] )
                goto LABEL_234;
              ++v297;
            }
            if ( v298 )
              v48 = v298;
          }
        }
LABEL_234:
        *(_DWORD *)(a1 + 32) = v193;
        if ( v48->m128i_i64[0] != -4096 )
          --*(_DWORD *)(a1 + 36);
        v48->m128i_i64[0] = (__int64)v36;
        v48->m128i_i64[1] = 0;
        goto LABEL_237;
      }
      sub_774200(a1, v36, 0, v304, a5);
    }
LABEL_59:
    v300 += 24;
    v30 = v305;
  }
  result = sub_79C190(v6 + 64);
  v72 = result;
  if ( result )
  {
    while ( (*(_BYTE *)(v72 + 28) & 0x7Fu) - 33 > 3 )
    {
      result = *(_QWORD *)(v72 + 8);
      v72 = result & 0xFFFFFFFFFFFFFFF8LL;
      if ( result <= 7 )
        return result;
    }
    v73 = a5;
LABEL_65:
    v74 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v72 + 32LL))(v72);
    if ( (*(_BYTE *)(v74 + 82) & 0xC) == 0 && !(unsigned int)sub_7A5910(v74) )
    {
LABEL_190:
      while ( 1 )
      {
        result = *(_QWORD *)(v72 + 8);
        v72 = result & 0xFFFFFFFFFFFFFFF8LL;
        if ( result <= 7 )
          return result;
        if ( (*(_BYTE *)(v72 + 28) & 0x7Fu) - 33 <= 3 )
          goto LABEL_65;
      }
    }
    v306 = (void *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v72 + 32LL))(v72);
    v327 = v306;
    v75 = sub_7A5940(v306);
    v77 = v76;
    v78 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v75, (__m128i)(unsigned __int64)v76);
    if ( v76 == (_QWORD *)v75 )
    {
      v183 = sub_772B40(v73, (__int64 *)&v327);
      LODWORD(v337[1]) = v303;
      v337[0] = v306;
      ptr[0] = v304;
      si128 = _mm_load_si128((const __m128i *)v337);
      sub_7723F0(v183, v303, v185, v186, v187, v188, si128.m128i_i64[0], si128.m128i_i32[2], (__int64)v304);
      goto LABEL_190;
    }
    v325 = v72;
    v79 = v73;
    v80 = (_QWORD *)v75;
    HIDWORD(v337[1]) = 4;
    v337[0] = ptr;
    v81 = 1;
    *(__m128i *)ptr = v78;
LABEL_68:
    LODWORD(v337[1]) = --v81;
    if ( v80 == v77 )
      goto LABEL_84;
    v301 = v77;
    while ( 1 )
    {
      v82 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v80 + 32LL))(*v80);
      v83 = *(_DWORD *)(v79 + 16);
      v84 = *(_QWORD **)v79;
      v85 = v82;
      v86 = 0;
      if ( !v83 )
        goto LABEL_132;
      v87 = v83 - 1;
      v88 = 1;
      v89 = ((unsigned int)v85 >> 9) ^ ((unsigned int)v85 >> 4);
      v90 = nullptr;
      LODWORD(v91) = v87 & v89;
      v92 = &v84[2 * ((unsigned int)v87 & v89)];
      v93 = *v92;
      if ( v85 != *v92 )
        break;
LABEL_72:
      v94 = *((unsigned int *)v92 + 2);
LABEL_73:
      v95 = *(_QWORD *)(v79 + 24) + 48 * v94;
      v332.m128i_i64[0] = (__int64)v306;
      v332.m128i_i32[2] = v303;
      v333 = (__int64)v304;
      v96 = *(_QWORD *)(v95 + 32);
      for ( k = v96 + 120LL * *(unsigned int *)(v95 + 40); v96 != k; v96 += 120 )
      {
        while ( 1 )
        {
          v99 = *(_DWORD *)(v96 + 20);
          *(_DWORD *)(v96 + 16) = 0;
          if ( !v99 )
            break;
          v98 = *(__m128i **)(v96 + 8);
          *v98 = _mm_load_si128(&v332);
          v98[1].m128i_i64[0] = v333;
          ++*(_DWORD *)(v96 + 16);
          v96 += 120;
          if ( k == v96 )
            goto LABEL_78;
        }
        sub_25D6060(v96 + 8, v96 + 24, 1, 24);
        v100 = (__m128i *)(*(_QWORD *)(v96 + 8) + 24LL * *(unsigned int *)(v96 + 16));
        *v100 = _mm_load_si128(&v332);
        v100[1].m128i_i64[0] = v333;
        ++*(_DWORD *)(v96 + 16);
      }
LABEL_78:
      v101 = sub_7A5940(v85);
      if ( v102 != v101 )
      {
        v103 = v101;
        v104 = LODWORD(v337[1]);
        v105 = v102;
        v106 = LODWORD(v337[1]) + 1LL;
        if ( HIDWORD(v337[1]) < v106 )
        {
          v312 = v103;
          v320 = v105;
          sub_25D6060(v337, ptr, v106, 16);
          v103 = v312;
          v105 = v320;
          v104 = LODWORD(v337[1]);
        }
        v107 = (__int64 *)((char *)v337[0] + 16 * v104);
        *v107 = v103;
        v107[1] = v105;
        ++LODWORD(v337[1]);
      }
      if ( v301 == ++v80 )
      {
        v81 = (unsigned int)v337[1];
LABEL_84:
        if ( !v81 )
        {
          v72 = v325;
          v73 = v79;
          v176 = sub_772B40(v79, (__int64 *)&v327);
          v332.m128i_i32[2] = v303;
          v332.m128i_i64[0] = (__int64)v306;
          v333 = (__int64)v304;
          v177 = _mm_load_si128(&v332);
          sub_7723F0(v176, v303, v178, v179, v180, v181, v177.m128i_i64[0], v177.m128i_i32[2], (__int64)v304);
          if ( v337[0] != ptr )
            free(v337[0]);
          goto LABEL_190;
        }
        v108 = (char *)v337[0] + 16 * v81 - 16;
        v80 = *(_QWORD **)v108;
        v77 = *((_QWORD **)v108 + 1);
        goto LABEL_68;
      }
    }
    while ( v93 != -4096 )
    {
      if ( !v90 && v93 == -8192 )
        v90 = v92;
      v91 = (unsigned int)v87 & ((_DWORD)v91 + v88);
      v92 = &v84[2 * v91];
      v93 = *v92;
      if ( v85 == *v92 )
        goto LABEL_72;
      ++v88;
    }
    if ( !v90 )
      v90 = v92;
    v118 = *(_DWORD *)(v79 + 8) + 1;
    v86 = 2 * v83;
    if ( 4 * v118 >= 3 * v83 )
    {
LABEL_132:
      v313 = *(_DWORD *)(v79 + 16);
      v133 = (unsigned int)(v86 - 1) | ((unsigned __int64)(unsigned int)(v86 - 1) >> 1);
      v134 = (((v133 >> 2) | v133) >> 4) | (v133 >> 2) | v133;
      v135 = ((((v134 >> 8) | v134) >> 16) | (v134 >> 8) | v134) + 1;
      if ( (unsigned int)v135 < 0x40 )
        LODWORD(v135) = 64;
      *(_DWORD *)(v79 + 16) = v135;
      v136 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v135, 8);
      v137 = *(unsigned int *)(v79 + 16);
      *(_QWORD *)v79 = v136;
      v138 = v137;
      v139 = 16 * v137;
      v140 = &v136[(unsigned __int64)v139 / 8];
      if ( v84 )
      {
        *(_QWORD *)(v79 + 8) = 0;
        v141 = &v84[2 * v313];
        if ( v139 )
        {
          if ( (v139 & 0x10) == 0 || (*v136 = -4096, v136 += 2, v136 != v140) )
          {
            do
            {
              *v136 = -4096;
              v136 += 4;
              *(v136 - 2) = -4096;
            }
            while ( v136 != v140 );
          }
        }
        for ( m = v84; v141 != m; m += 2 )
        {
          v143 = *m;
          if ( *m != -8192 && v143 != -4096 )
          {
            v144 = *(_DWORD *)(v79 + 16);
            if ( !v144 )
            {
              *(_QWORD *)&dword_0 = *m;
              BUG();
            }
            v145 = v144 - 1;
            v146 = v145 & (((unsigned int)v143 >> 9) ^ ((unsigned int)v143 >> 4));
            v147 = *(_QWORD *)v79 + 16LL * v146;
            v148 = *(_QWORD *)v147;
            if ( *(_QWORD *)v147 != v143 )
            {
              v317 = 1;
              v189 = 0;
              while ( v148 != -4096 )
              {
                if ( !v189 && v148 == -8192 )
                  v189 = v147;
                v146 = v145 & (v317 + v146);
                v147 = *(_QWORD *)v79 + 16LL * v146;
                v148 = *(_QWORD *)v147;
                if ( v143 == *(_QWORD *)v147 )
                  goto LABEL_144;
                ++v317;
              }
              if ( v189 )
                v147 = v189;
            }
LABEL_144:
            *(_QWORD *)v147 = v143;
            *(_DWORD *)(v147 + 8) = *((_DWORD *)m + 2);
            ++*(_DWORD *)(v79 + 8);
          }
        }
        operator delete();
        v136 = *(_QWORD **)v79;
        v138 = *(_DWORD *)(v79 + 16);
        v118 = *(_DWORD *)(v79 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(v79 + 8) = 0;
        if ( v136 != v140 )
        {
          v175 = v136;
          if ( (v139 & 0x10) == 0 || (v175 = v136 + 2, *v136 = -4096, v136 + 2 != v140) )
          {
            do
            {
              *v175 = -4096;
              v175 += 4;
              *(v175 - 2) = -4096;
            }
            while ( v175 != v140 );
          }
        }
        v118 = 1;
      }
      if ( !v138 )
      {
LABEL_454:
        *(_DWORD *)(a5 + 8) = v118;
        BUG();
      }
      v149 = v138 - 1;
      v150 = (v138 - 1) & (((unsigned int)v85 >> 9) ^ ((unsigned int)v85 >> 4));
      v90 = &v136[2 * v150];
      v151 = *v90;
      if ( v85 == *v90 )
        goto LABEL_118;
      v152 = 1;
      v153 = nullptr;
      while ( v151 != -4096 )
      {
        if ( v151 == -8192 && !v153 )
          v153 = v90;
        v150 = v149 & (v152 + v150);
        v90 = &v136[2 * v150];
        v151 = *v90;
        if ( v85 == *v90 )
          goto LABEL_118;
        ++v152;
      }
    }
    else
    {
      if ( v83 >> 3 < v83 - *(_DWORD *)(v79 + 12) - v118 )
        goto LABEL_118;
      v314 = *(_DWORD *)(v79 + 16);
      v154 = ((((v87 | (v87 >> 1)) >> 2) | v87 | (v87 >> 1)) >> 4) | ((v87 | (v87 >> 1)) >> 2) | v87 | (v87 >> 1);
      v155 = ((((v154 >> 8) | v154) >> 16) | (v154 >> 8) | v154) + 1;
      if ( (unsigned int)v155 < 0x40 )
        LODWORD(v155) = 64;
      *(_DWORD *)(v79 + 16) = v155;
      v156 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v155, 8);
      v157 = *(unsigned int *)(v79 + 16);
      *(_QWORD *)v79 = v156;
      v158 = v157;
      v159 = 16 * v157;
      v160 = &v156[(unsigned __int64)v159 / 8];
      if ( v84 )
      {
        *(_QWORD *)(v79 + 8) = 0;
        v161 = &v84[2 * v314];
        if ( v159 )
        {
          if ( (v159 & 0x10) == 0 || (*v156 = -4096, v156 += 2, v156 != v160) )
          {
            do
            {
              *v156 = -4096;
              v156 += 4;
              *(v156 - 2) = -4096;
            }
            while ( v156 != v160 );
          }
        }
        v162 = v84;
        do
        {
          v163 = *v162;
          if ( *v162 != -8192 && v163 != -4096 )
          {
            v164 = *(_DWORD *)(v79 + 16);
            if ( !v164 )
            {
              *(_QWORD *)&dword_0 = *v162;
              BUG();
            }
            v165 = v164 - 1;
            v166 = v165 & (((unsigned int)v163 >> 9) ^ ((unsigned int)v163 >> 4));
            v167 = *(_QWORD *)v79 + 16LL * v166;
            v168 = *(_QWORD *)v167;
            if ( v163 != *(_QWORD *)v167 )
            {
              v323 = 1;
              v318 = 0;
              while ( v168 != -4096 )
              {
                if ( !v318 )
                {
                  if ( v168 != -8192 )
                    v167 = 0;
                  v318 = v167;
                }
                v166 = v165 & (v323 + v166);
                v167 = *(_QWORD *)v79 + 16LL * v166;
                v168 = *(_QWORD *)v167;
                if ( v163 == *(_QWORD *)v167 )
                  goto LABEL_166;
                ++v323;
              }
              if ( v318 )
                v167 = v318;
            }
LABEL_166:
            *(_QWORD *)v167 = v163;
            *(_DWORD *)(v167 + 8) = *((_DWORD *)v162 + 2);
            ++*(_DWORD *)(v79 + 8);
          }
          v162 += 2;
        }
        while ( v161 != v162 );
        operator delete();
        v156 = *(_QWORD **)v79;
        v158 = *(_DWORD *)(v79 + 16);
        v118 = *(_DWORD *)(v79 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(v79 + 8) = 0;
        if ( v156 != v160 )
        {
          v182 = v156;
          if ( (v159 & 0x10) == 0 || (v182 = v156 + 2, *v156 = -4096, v156 + 2 != v160) )
          {
            do
            {
              *v182 = -4096;
              v182 += 4;
              *(v182 - 2) = -4096;
            }
            while ( v182 != v160 );
          }
        }
        v118 = 1;
      }
      if ( !v158 )
        goto LABEL_454;
      v169 = v158 - 1;
      v170 = 1;
      v153 = nullptr;
      v171 = (v158 - 1) & v89;
      v90 = &v156[2 * v171];
      v172 = *v90;
      if ( v85 == *v90 )
        goto LABEL_118;
      while ( v172 != -4096 )
      {
        if ( v172 == -8192 && !v153 )
          v153 = v90;
        v171 = v169 & (v170 + v171);
        v90 = &v156[2 * v171];
        v172 = *v90;
        if ( v85 == *v90 )
          goto LABEL_118;
        ++v170;
      }
    }
    if ( v153 )
      v90 = v153;
LABEL_118:
    *(_DWORD *)(v79 + 8) = v118;
    if ( *v90 != -4096 )
      --*(_DWORD *)(v79 + 12);
    *v90 = v85;
    v119 = v85;
    v120 = &v332;
    *((_DWORD *)v90 + 2) = 0;
    v121 = *(unsigned int *)(v79 + 36);
    v329 = 0;
    v122 = *(_QWORD *)(v79 + 24);
    *((_QWORD *)&v329 + 1) = &v331;
    v123 = *(unsigned int *)(v79 + 32);
    v330 = 0;
    v124 = v123 + 1;
    v332 = (__m128i)(unsigned __int64)v85;
    v333 = 0;
    v334 = 0;
    v335 = v337;
    v336 = 0;
    v328 = 0;
    if ( v121 < v123 + 1 )
    {
      v173 = v79 + 24;
      if ( (unsigned __int64)&v332 < v122 )
      {
        v316 = v90;
        sub_7729C0(v173, v124);
        v122 = *(_QWORD *)(v79 + 24);
        v123 = *(unsigned int *)(v79 + 32);
        v119 = v332.m128i_i64[0];
        v90 = v316;
      }
      else
      {
        v315 = v90;
        if ( (unsigned __int64)&v332 < v122 + 48 * v123 )
        {
          v174 = &v332.m128i_i8[-v122];
          sub_7729C0(v173, v124);
          v122 = *(_QWORD *)(v79 + 24);
          v123 = *(unsigned int *)(v79 + 32);
          v90 = v315;
          v120 = (__m128i *)&v174[v122];
          v119 = v120->m128i_i64[0];
        }
        else
        {
          sub_7729C0(v173, v124);
          v122 = *(_QWORD *)(v79 + 24);
          v123 = *(unsigned int *)(v79 + 32);
          v119 = v332.m128i_i64[0];
          v90 = v315;
        }
      }
    }
    v125 = v122 + 48 * v123;
    *(_QWORD *)v125 = v119;
    v126 = v120->m128i_i64[1];
    v120->m128i_i64[1] = 0;
    *(_QWORD *)(v125 + 8) = v126;
    v127 = v120[1].m128i_i64[0];
    v120[1].m128i_i64[0] = 0;
    *(_QWORD *)(v125 + 16) = v127;
    LODWORD(v127) = v120[1].m128i_i32[2];
    v120[1].m128i_i32[2] = 0;
    *(_DWORD *)(v125 + 24) = v127;
    *(_QWORD *)(v125 + 32) = v125 + 48;
    *(_QWORD *)(v125 + 40) = 0;
    if ( v120[2].m128i_i32[2] )
    {
      v311 = v90;
      sub_772640(v125 + 32, (__int64)v120[2].m128i_i64);
      v90 = v311;
    }
    v128 = (unsigned int)v336;
    v129 = v335;
    ++*(_DWORD *)(v79 + 32);
    v130 = &v129[15 * v128];
    if ( v129 != v130 )
    {
      v322 = v90;
      v308 = v85;
      v131 = &v129[15 * v128];
      do
      {
        v131 -= 15;
        v132 = (void **)v131[1];
        if ( v132 != v131 + 3 )
          free(v132);
      }
      while ( v129 != v131 );
      v85 = v308;
      v90 = v322;
      v130 = v335;
    }
    if ( v130 != v337 )
    {
      v309 = v90;
      free(v130);
      v90 = v309;
    }
    v310 = v90;
    operator delete();
    operator delete();
    v94 = (unsigned int)(*(_DWORD *)(v79 + 32) - 1);
    *((_DWORD *)v310 + 2) = v94;
    goto LABEL_73;
  }
  return result;
}

