__int64 __fastcall sub_2D8940(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  _QWORD *v7; // r12
  int v8; // edx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 result; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // r14
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r12
  int v28; // r15d
  int *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r12d
  _QWORD *v32; // rdx
  __int64 v33; // rax
  unsigned int *v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  _QWORD *v38; // rdx
  __int64 v39; // rax
  int v40; // esi
  _QWORD *v41; // r12
  __int64 v42; // rax
  _QWORD *v43; // r14
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  _QWORD *v46; // rdx
  unsigned int i; // r15d
  __int64 v48; // r12
  unsigned int v49; // eax
  _BYTE *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  _BYTE *v54; // rcx
  __int64 *v55; // r14
  __int64 v56; // rax
  __int64 v57; // r12
  int v58; // r15d
  _DWORD *v59; // rax
  __int64 v60; // rax
  unsigned int v61; // r12d
  _QWORD *v62; // rdx
  __int64 v63; // rax
  unsigned int *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  _QWORD *v67; // r13
  __int64 v68; // rdx
  _QWORD *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rcx
  unsigned int v73; // r14d
  __int64 v74; // r13
  unsigned int v75; // edx
  __int64 v76; // rsi
  int v77; // edx
  _QWORD *v78; // rsi
  __int64 v79; // rcx
  _QWORD *v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  _QWORD *v84; // rcx
  _BYTE *v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  _BYTE *v89; // rcx
  __int64 *v90; // rbx
  unsigned __int64 v91; // r12
  __int64 v92; // rsi
  __int64 v93; // rdi
  _QWORD *v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // r15
  __int64 v97; // r14
  __int64 v98; // r13
  __int64 v99; // r12
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // r14
  _QWORD *v105; // rdx
  unsigned int v106; // eax
  __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // r15
  unsigned int v110; // r15d
  unsigned int v111; // ecx
  unsigned int *v112; // rax
  __int64 v113; // rcx
  unsigned int v114; // r15d
  size_t v115; // rsi
  unsigned int *v116; // rax
  unsigned int v117; // ecx
  size_t v118; // rsi
  unsigned int *v119; // rax
  __int64 v120; // rsi
  _QWORD *v121; // rsi
  int v122; // eax
  int v123; // ecx
  int v124; // r8d
  int v125; // r9d
  _QWORD *v126; // r14
  void *v127; // rdi
  void *v128; // rdi
  __int64 v129; // rax
  __int64 v130; // rax
  void (__fastcall ***v131)(_QWORD); // rbx
  void *v132; // rdi
  void (__fastcall ****v133)(_QWORD); // rbx
  void (__fastcall ****v134)(_QWORD); // rax
  void (__fastcall ***v135)(_QWORD); // r12
  _QWORD *v136; // rax
  _QWORD *v137; // rax
  _QWORD *v138; // r12
  __int64 v139; // rax
  _QWORD *v140; // rdi
  __int64 v141; // rax
  __int64 v142; // r12
  __int64 v143; // r14
  __int64 v144; // r12
  __int64 v145; // r13
  __int64 v146; // rax
  _QWORD *v147; // r15
  unsigned int v148; // eax
  __int64 *v149; // r12
  __int64 *v150; // r14
  __int64 v151; // rsi
  __int64 v152; // rdi
  void *v153; // rdi
  _QWORD *v154; // r12
  _QWORD *v155; // r15
  void (__fastcall ***v156)(_QWORD); // r14
  __int64 v157; // rax
  __int64 v158; // rax
  char *v159; // r15
  int v160; // eax
  __int64 v161; // r12
  char *v162; // r14
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // r12
  unsigned int v166; // eax
  __int64 v167; // r14
  __int64 v168; // rax
  __int64 v169; // r12
  unsigned int v170; // eax
  __int64 v171; // r14
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 *v180; // r14
  __int64 v181; // r12
  int v182; // r15d
  _DWORD *v183; // rax
  __int64 v184; // rax
  unsigned int v185; // r12d
  _QWORD *v186; // rdx
  __int64 v187; // rax
  unsigned int *v188; // rax
  __int64 v189; // rax
  int v190; // esi
  _QWORD *v191; // r14
  __int64 v192; // rax
  _QWORD *v193; // r12
  __int64 v194; // rdx
  __int64 v195; // rsi
  _QWORD *v196; // rdx
  unsigned int k; // r14d
  __int64 v198; // r13
  unsigned int v199; // eax
  _QWORD *v200; // r12
  _QWORD *v201; // rdx
  unsigned int v202; // eax
  __int64 v203; // rcx
  int v204; // eax
  _QWORD *v205; // rcx
  _BYTE *v206; // rdx
  unsigned int v207; // eax
  __int64 v208; // rcx
  int v209; // eax
  _BYTE *v210; // rcx
  __int64 v211; // rax
  unsigned int v212; // r15d
  size_t v213; // rsi
  unsigned int *v214; // rax
  unsigned int v215; // r15d
  size_t v216; // rsi
  unsigned int *v217; // rax
  unsigned int v218; // r15d
  unsigned int v219; // ecx
  unsigned int *v220; // rax
  __int64 v221; // rcx
  _QWORD *v222; // rcx
  int v223; // eax
  unsigned int v224; // r15d
  unsigned int v225; // eax
  unsigned int *v226; // rax
  __int64 v227; // rax
  int v228; // edx
  _QWORD *v229; // rax
  unsigned int v230; // r12d
  unsigned int *v231; // rax
  __int64 v232; // rcx
  unsigned int v233; // r14d
  unsigned int v234; // edx
  __int64 v235; // rax
  __int64 *v236; // r13
  __int64 v237; // r12
  __int64 v238; // rsi
  __int64 *v239; // rax
  __int64 *v240; // r8
  __int64 v241; // rdi
  __int64 v242; // rdi
  __int64 *v243; // r15
  __int64 *v244; // r12
  __int64 v245; // rsi
  __int64 v246; // rdi
  _QWORD *v247; // rax
  unsigned int v248; // edx
  __int64 *v249; // r15
  __int64 v250; // r8
  __int64 v251; // rdx
  __int64 *v252; // rax
  __int64 *v253; // rdi
  __int64 v254; // rsi
  __int64 v255; // rsi
  __int64 *v256; // r14
  __int64 *v257; // r8
  __int64 v258; // rsi
  __int64 v259; // rdi
  unsigned int v260; // r12d
  unsigned int v261; // edx
  unsigned int *v262; // rax
  __int64 v263; // rdx
  unsigned int v264; // r12d
  unsigned int *v265; // rax
  __int64 v266; // rcx
  _QWORD *v267; // r12
  __int64 v268; // rsi
  __int64 v269; // rdi
  __int64 v270; // rax
  _QWORD *v271; // rdx
  unsigned int v272; // r13d
  unsigned int v273; // ecx
  unsigned int *v274; // rax
  __int64 v275; // rcx
  __int64 v276; // rax
  _QWORD *v277; // rdx
  __int64 v278; // rax
  _QWORD *v279; // r14
  _QWORD *v280; // rdx
  unsigned int v281; // eax
  unsigned int *v282; // rax
  __int64 *v283; // r15
  __int64 v284; // r12
  _DWORD *v285; // rdx
  __int64 *v286; // rax
  __int64 *v287; // rdi
  __int64 v288; // rsi
  __int64 v289; // rsi
  __int64 *v290; // r14
  __int64 *v291; // r12
  __int64 v292; // rsi
  __int64 v293; // rdi
  unsigned int v294; // r12d
  unsigned int *v295; // rax
  __int64 v296; // rcx
  unsigned int v297; // r13d
  unsigned int v298; // ecx
  unsigned int *v299; // rax
  __int64 v300; // rcx
  _QWORD *v301; // rax
  __int64 v302; // rsi
  _QWORD *v303; // rdx
  _QWORD *v304; // rax
  _QWORD *v305; // rdx
  _QWORD *v306; // r12
  _QWORD *v307; // rdx
  _QWORD *v308; // rdx
  __int64 v309; // rax
  _QWORD *v310; // rax
  _QWORD *v311; // rdx
  char **v312; // rbp
  char **v313; // rbx
  char **v314; // rbp
  char **exception; // r14
  char **v316; // rbp
  char **v317; // rbp
  char **v318; // rbp
  char **v319; // rbp
  char **v320; // rbp
  char **v321; // rbp
  char **v322; // rbp
  char **v323; // rbp
  char **v324; // rbp
  struct _Unwind_Exception *v325; // [rsp+0h] [rbp-B8h]
  __int64 v326; // [rsp+0h] [rbp-B8h]
  __int64 v327; // [rsp+0h] [rbp-B8h]
  void (__fastcall ****v328)(_QWORD); // [rsp+0h] [rbp-B8h]
  _QWORD *v329; // [rsp+0h] [rbp-B8h]
  _QWORD *v330; // [rsp+8h] [rbp-B0h]
  __int64 *j; // [rsp+8h] [rbp-B0h]
  unsigned int v332; // [rsp+8h] [rbp-B0h]
  __int64 *v333; // [rsp+8h] [rbp-B0h]
  __int64 *v334; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v335; // [rsp+8h] [rbp-B0h]
  __int64 *v336; // [rsp+8h] [rbp-B0h]
  _DWORD *v337; // [rsp+10h] [rbp-A8h]
  __int64 *v338; // [rsp+10h] [rbp-A8h]
  unsigned int *v339; // [rsp+10h] [rbp-A8h]
  unsigned int v340; // [rsp+18h] [rbp-A0h]
  _DWORD *v341; // [rsp+20h] [rbp-98h]
  unsigned int v342; // [rsp+20h] [rbp-98h]
  unsigned int v343; // [rsp+2Ch] [rbp-8Ch]
  int v344; // [rsp+38h] [rbp-80h] BYREF
  int v345; // [rsp+3Ch] [rbp-7Ch] BYREF
  __int64 v346; // [rsp+40h] [rbp-78h] BYREF
  __int64 v347; // [rsp+48h] [rbp-70h] BYREF
  __int64 v348; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v349; // [rsp+58h] [rbp-60h]
  int v350[2]; // [rsp+60h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 80) )
  {
    v109 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)v350 = 0;
    if ( !v109 )
    {
      v109 = sub_186B270(0x13D8u);
      sub_7FA590(v109, *(_QWORD *)(a1 + 16), (int)v350, v123, v124, v125, v325);
      v126 = *(_QWORD **)(a1 + 88);
      if ( (_QWORD *)v109 != v126 )
      {
        if ( v126 )
        {
          v127 = (void *)v126[631];
          if ( v127 )
            sub_186B220(v127);
          v128 = (void *)v126[628];
          if ( v128 )
            sub_186B220(v128);
          v129 = v126[626];
          if ( v129 )
            sub_186B220((void *)(v129 - 8));
          v130 = v126[625];
          if ( v130 )
            sub_186B220((void *)(v130 - 8));
          sub_11ECBE0(v126 + 542);
          sub_11C05E0(v126 + 9);
          v131 = (void (__fastcall ***)(_QWORD))v126[7];
          if ( v131 )
          {
            (**v131)(v126[7]);
            sub_186B220(v131);
          }
          v132 = (void *)v126[4];
          if ( v132 )
            sub_186B220(v132);
          v133 = (void (__fastcall ****)(_QWORD))v126[3];
          if ( v133 )
          {
            v134 = &v133[*((unsigned int *)v133 - 1)];
            if ( v133 == v134 )
              goto LABEL_155;
            do
            {
              v135 = *v133;
              if ( *v133 )
              {
                v328 = v134;
                (**v135)(v135);
                sub_186B220(v135);
                v134 = v328;
              }
              ++v133;
            }
            while ( v134 != v133 );
            v134 = (void (__fastcall ****)(_QWORD))v126[3];
            if ( v134 )
            {
LABEL_155:
              *((_DWORD *)v134 - 1) = 0;
              sub_186B220(v134 - 1);
            }
          }
          sub_18572D0(v126 + 1);
          sub_186B220(v126);
        }
        *(_QWORD *)(a1 + 88) = v109;
      }
    }
    sub_18572D0(v350);
    sub_7F7540(v109, a1 + 40, *(_QWORD *)(a1 + 56));
  }
  if ( !*(_BYTE *)(a1 + 81) )
    goto LABEL_3;
  v94 = *(_QWORD **)(a1 + 96);
  if ( !v94 )
  {
    v137 = (_QWORD *)sub_186B270(0x10u);
    v138 = *(_QWORD **)(a1 + 8);
    v94 = v137;
    *v137 = v138;
    sub_DFBCB0(v138);
    v94[1] = v138[37];
    v139 = v138[108];
    if ( v139 )
    {
      if ( v138[109] )
        goto LABEL_167;
    }
    else
    {
      v211 = sub_3743C0(&qword_18D6CD0);
      sub_DFF0A0(v138, v211);
      if ( v138[109] )
        goto LABEL_167;
      v139 = v138[108];
      if ( !v139 )
      {
LABEL_285:
        v138[109] = v139;
LABEL_167:
        v140 = *(_QWORD **)(a1 + 96);
        if ( v94 != v140 )
        {
          if ( v140 )
            sub_186B220(v140);
          *(_QWORD *)(a1 + 96) = v94;
        }
        goto LABEL_108;
      }
    }
    ++*(_DWORD *)(v139 + 48);
    goto LABEL_285;
  }
LABEL_108:
  v95 = *(_QWORD *)(a1 + 48);
  v96 = *(_QWORD *)(a1 + 56);
  v97 = v94[1];
  v98 = *(_QWORD *)(*v94 + 864LL);
  v99 = *(_QWORD *)(a1 + 40);
  if ( v95 )
    v100 = *(unsigned int *)(v95 - 4);
  else
    v100 = 0;
  v101 = sub_15EC240(*(_QWORD *)(a1 + 40), v100);
  v102 = v101;
  if ( v101 )
    ++*(_DWORD *)(v101 + 8);
  v103 = sub_15E0880(v97, v96, v101);
  v104 = v103;
  if ( v103 )
    ++*(_DWORD *)(v103 + 8);
  v105 = *(_QWORD **)(v98 + 24);
  if ( v105 )
  {
    v106 = *((_DWORD *)v105 - 1);
    if ( v106 == *((_DWORD *)v105 - 2) )
    {
      v110 = (3 * v106 + 1) >> 1;
      v111 = 8 * v110 + 8;
      if ( 8 * v106 + 8 >= v111 || v106 >= v110 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v350);
        sub_233E40((__int64)v350);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v112 = (unsigned int *)sub_186B300(v105 - 1, v111);
      v113 = v112[1];
      v105 = v112 + 2;
      *(_QWORD *)(v98 + 24) = v112 + 2;
      *v112 = v110;
      LODWORD(v112) = v113;
      a4 = &v105[v113];
      v108 = (_DWORD)v112 + 1;
    }
    else
    {
      v107 = v106;
      v108 = v106 + 1;
      a4 = &v105[v107];
    }
  }
  else
  {
    v280 = (_QWORD *)sub_186B270(0x18u);
    *v280 = 2;
    v108 = 1;
    v105 = v280 + 1;
    *(_QWORD *)(v98 + 24) = v105;
    a4 = v105;
  }
  *a4 = v104;
  *((_DWORD *)v105 - 1) = v108;
  if ( v102 )
  {
    v16 = (*(_DWORD *)(v102 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v99, v102);
  }
LABEL_3:
  if ( !*(_BYTE *)(a1 + 82) )
    goto LABEL_4;
  v20 = *(_QWORD *)(a1 + 104);
  if ( !v20 )
  {
    v141 = sub_186B270(0x1168u);
    v142 = *(_QWORD *)(a1 + 8);
    v20 = v141;
    v143 = v141 + 8;
    sub_DFBCB0(v142);
    v144 = *(_QWORD *)(v142 + 296);
    *(_QWORD *)v20 = v144;
    sub_17F9A60(v350, "sat");
    sub_118B450(v143, v350, v144);
    sub_18572D0(v350);
    sub_7F80F0(v20 + 4384, *(_QWORD *)v20);
    *(_BYTE *)(v20 + 4448) = 0;
    *(_QWORD *)(v20 + 4440) = 0;
    *(_OWORD *)(v20 + 4424) = 0;
    sub_180C5A0(v350, "rup");
    v145 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(v20 + 4440) = *(_QWORD *)v350;
    if ( v20 != v145 )
    {
      if ( v145 )
      {
        v146 = *(_QWORD *)(v145 + 4432);
        if ( v146 )
          sub_186B220((void *)(v146 - 8));
        v147 = *(_QWORD **)(v145 + 4424);
        if ( v147 )
        {
          v148 = *((_DWORD *)v147 - 1);
          if ( v148 )
          {
            v329 = &v147[2 * v148];
            do
            {
              v149 = (__int64 *)v147[1];
              if ( v149 )
              {
                v150 = &v149[*((unsigned int *)v149 - 1)];
                if ( v149 >= v150 )
                  goto LABEL_186;
                do
                {
                  while ( 1 )
                  {
                    v151 = *v149;
                    if ( *v149 )
                    {
                      v152 = *v147;
                      v16 = (*(_DWORD *)(v151 + 8))-- == 1;
                      if ( v16 )
                        break;
                    }
                    if ( ++v149 >= v150 )
                      goto LABEL_185;
                  }
                  sub_15D7BC0(v152, v151);
                  ++v149;
                }
                while ( v149 < v150 );
LABEL_185:
                v149 = (__int64 *)v147[1];
                if ( v149 )
LABEL_186:
                  sub_186B220(v149 - 1);
              }
              v147 += 2;
            }
            while ( v147 != v329 );
            v147 = *(_QWORD **)(v145 + 4424);
          }
          sub_186B220(v147 - 1);
        }
        v153 = *(void **)(v145 + 4400);
        if ( v153 )
          sub_186B220(v153);
        v154 = *(_QWORD **)(v145 + 4392);
        if ( v154 )
        {
          v155 = &v154[*((unsigned int *)v154 - 1)];
          if ( v154 == v155 )
            goto LABEL_198;
          do
          {
            v156 = (void (__fastcall ***)(_QWORD))*v154;
            if ( *v154 )
            {
              (**v156)(*v154);
              sub_186B220(v156);
            }
            ++v154;
          }
          while ( v155 != v154 );
          v155 = *(_QWORD **)(v145 + 4392);
          if ( v155 )
          {
LABEL_198:
            *((_DWORD *)v155 - 1) = 0;
            sub_186B220(v155 - 1);
          }
        }
        v157 = *(_QWORD *)(v145 + 4376);
        if ( v157 )
          sub_186B220((void *)(v157 - 8));
        v158 = *(_QWORD *)(v145 + 4368);
        if ( v158 )
          sub_186B220((void *)(v158 - 8));
        v159 = *(char **)(v145 + 4344);
        if ( v159 )
        {
          v160 = *(_DWORD *)(v145 + 4352);
          if ( v160 )
          {
            v161 = *(_QWORD *)(v145 + 4344);
            v162 = &v159[32 * v160];
            do
            {
              while ( 1 )
              {
                v163 = *(_QWORD *)(v161 + 16);
                if ( v163 )
                  sub_186B220((void *)(v163 - 8));
                v164 = *(_QWORD *)(v161 + 8);
                if ( !v164 )
                  break;
                v161 += 32;
                sub_186B220((void *)(v164 - 8));
                if ( v162 == (char *)v161 )
                  goto LABEL_210;
              }
              v161 += 32;
            }
            while ( (char *)v161 != v162 );
          }
LABEL_210:
          sub_186B220(v159);
        }
        v165 = *(_QWORD *)(v145 + 4336);
        if ( v165 )
        {
          v166 = *(_DWORD *)(v165 - 4);
          if ( v166 )
          {
            v167 = v165 + 16LL * v166;
            do
            {
              while ( 1 )
              {
                v168 = *(_QWORD *)(v165 + 8);
                if ( !v168 )
                  break;
                v165 += 16;
                sub_186B220((void *)(v168 - 8));
                if ( v165 == v167 )
                  goto LABEL_216;
              }
              v165 += 16;
            }
            while ( v165 != v167 );
LABEL_216:
            v165 = *(_QWORD *)(v145 + 4336);
          }
          sub_186B220((void *)(v165 - 8));
        }
        v169 = *(_QWORD *)(v145 + 4328);
        if ( v169 )
        {
          v170 = *(_DWORD *)(v169 - 4);
          if ( v170 )
          {
            v171 = v169 + 32LL * v170;
            do
            {
              while ( 1 )
              {
                v172 = *(_QWORD *)(v169 + 16);
                if ( !v172 )
                  break;
                v169 += 32;
                sub_186B220((void *)(v172 - 8));
                if ( v169 == v171 )
                  goto LABEL_223;
              }
              v169 += 32;
            }
            while ( v169 != v171 );
LABEL_223:
            v169 = *(_QWORD *)(v145 + 4328);
          }
          sub_186B220((void *)(v169 - 8));
        }
        v173 = *(_QWORD *)(v145 + 4312);
        if ( v173 )
          sub_186B220((void *)(v173 - 8));
        v174 = *(_QWORD *)(v145 + 4304);
        if ( v174 )
          sub_186B220((void *)(v174 - 8));
        v175 = *(_QWORD *)(v145 + 4296);
        if ( v175 )
          sub_186B220((void *)(v175 - 8));
        v176 = *(_QWORD *)(v145 + 4288);
        if ( v176 )
          sub_186B220((void *)(v176 - 8));
        v177 = *(_QWORD *)(v145 + 4280);
        if ( v177 )
          sub_186B220((void *)(v177 - 8));
        v178 = *(_QWORD *)(v145 + 4272);
        if ( v178 )
          sub_186B220((void *)(v178 - 8));
        sub_11C05E0(v145 + 8);
        sub_186B220((void *)v145);
      }
      *(_QWORD *)(a1 + 104) = v20;
    }
  }
  if ( *(_BYTE *)(v20 + 4448) )
    goto LABEL_4;
  v21 = *(_QWORD *)(a1 + 56);
  v326 = v21;
  if ( !v21 )
  {
    v179 = *(_QWORD *)(v20 + 4272);
    v180 = *(__int64 **)(a1 + 48);
    if ( v179 )
    {
      *(_DWORD *)(v179 - 4) = 0;
      if ( v180 )
        goto LABEL_241;
    }
    else if ( v180 )
    {
      v333 = &v180[*((unsigned int *)v180 - 1)];
      if ( v333 != v180 )
      {
        while ( 1 )
        {
LABEL_242:
          v181 = *v180;
          v182 = 0;
          if ( !*(_WORD *)(*v180 + 4) )
          {
            v183 = *(_DWORD **)(*(_QWORD *)(v181 + 16) + 24LL);
            if ( v183 )
            {
              LODWORD(a4) = *v183;
              if ( !*v183 && v183[1] == 8 )
              {
                v182 = *(_DWORD *)(v181 + 24);
                if ( v182 == 1 )
                  v181 = *(_QWORD *)(v181 + 32);
                else
                  v182 = 0;
              }
            }
          }
          while ( 1 )
          {
            v184 = *(_QWORD *)(v20 + 3304);
            if ( v184 )
            {
              if ( *(_DWORD *)v181 < *(_DWORD *)(v184 - 4) )
                break;
            }
            sub_11CA540(v20 + 8, 1, 1);
          }
          v185 = v182 + 2 * *(_DWORD *)v181;
          v186 = *(_QWORD **)(v20 + 4272);
          if ( v186 )
          {
            v187 = *((unsigned int *)v186 - 1);
            if ( (_DWORD)v187 == *((_DWORD *)v186 - 2) )
            {
              v212 = (unsigned int)(3 * v187 + 1) >> 1;
              v213 = 4 * v212 + 8;
              if ( 4 * (int)v187 + 8 >= (unsigned int)v213 || (unsigned int)v187 >= v212 )
                goto LABEL_455;
              v214 = (unsigned int *)sub_186B300(v186 - 1, v213);
              v186 = v214 + 2;
              *(_QWORD *)(v20 + 4272) = v214 + 2;
              *v214 = v212;
              v188 = &v214[v214[1] + 2];
            }
            else
            {
              v188 = (unsigned int *)v186 + v187;
            }
          }
          else
          {
            v229 = (_QWORD *)sub_186B270(0x10u);
            v186 = v229 + 1;
            *v229 = 2;
            *(_QWORD *)(v20 + 4272) = v229 + 1;
            v188 = (unsigned int *)(v229 + 1);
          }
          *v188 = v185;
          ++v180;
          ++*((_DWORD *)v186 - 1);
          if ( v333 == v180 )
            goto LABEL_253;
        }
      }
    }
    v189 = *(_QWORD *)(v20 + 4424);
    goto LABEL_257;
  }
  if ( *(_WORD *)(v21 + 4) || (v22 = *(_QWORD *)(v21 + 16), *(_QWORD *)(v22 + 16) != *(_QWORD *)(v20 + 4440)) )
  {
    sub_7F5440(&v348, v20 + 4384, v21);
    v23 = v349;
    v24 = *(__int64 **)(a1 + 48);
    if ( v349 )
    {
      v25 = *((unsigned int *)v349 - 1);
      if ( !v24 )
      {
        if ( (_DWORD)v25 )
        {
LABEL_33:
          v26 = *(_QWORD *)(v20 + 4272);
          if ( v26 )
          {
            *(_DWORD *)(v26 - 4) = 0;
            v330 = &v23[*((unsigned int *)v23 - 1)];
            if ( v23 != v330 )
            {
              do
              {
LABEL_35:
                v27 = *v23;
                v28 = 0;
                if ( !*(_WORD *)(*v23 + 4LL) )
                {
                  v29 = *(int **)(*(_QWORD *)(v27 + 16) + 24LL);
                  if ( v29 )
                  {
                    a5 = *v29;
                    if ( !*v29 && v29[1] == 8 )
                    {
                      v28 = *(_DWORD *)(v27 + 24);
                      if ( v28 == 1 )
                        v27 = *(_QWORD *)(v27 + 32);
                      else
                        v28 = 0;
                    }
                  }
                }
                while ( 1 )
                {
                  v30 = *(_QWORD *)(v20 + 3304);
                  if ( v30 )
                  {
                    if ( *(_DWORD *)v27 < *(_DWORD *)(v30 - 4) )
                      break;
                  }
                  sub_11CA540(v20 + 8, 1, 1);
                }
                v31 = v28 + 2 * *(_DWORD *)v27;
                v32 = *(_QWORD **)(v20 + 4272);
                if ( v32 )
                {
                  v33 = *((unsigned int *)v32 - 1);
                  if ( (_DWORD)v33 == *((_DWORD *)v32 - 2) )
                  {
                    v114 = (unsigned int)(3 * v33 + 1) >> 1;
                    v115 = 4 * v114 + 8;
                    if ( 4 * (int)v33 + 8 >= (unsigned int)v115 || (unsigned int)v33 >= v114 )
                    {
                      v324 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                      *v324 = (char *)off_1C63128;
                      sub_2333C0(v324 + 1, v350);
                      sub_233E40((__int64)v350);
                      __cxa_throw(
                        v324,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v116 = (unsigned int *)sub_186B300(v32 - 1, v115);
                    v32 = v116 + 2;
                    *(_QWORD *)(v20 + 4272) = v116 + 2;
                    *v116 = v114;
                    v34 = &v116[v116[1] + 2];
                  }
                  else
                  {
                    v34 = (unsigned int *)v32 + v33;
                  }
                }
                else
                {
                  v136 = (_QWORD *)sub_186B270(0x10u);
                  v32 = v136 + 1;
                  *v136 = 2;
                  *(_QWORD *)(v20 + 4272) = v136 + 1;
                  v34 = (unsigned int *)(v136 + 1);
                }
                *v34 = v31;
                ++v23;
                ++*((_DWORD *)v32 - 1);
              }
              while ( v330 != v23 );
              v23 = v349;
              ++*(_DWORD *)(v326 + 8);
              if ( v23 )
                goto LABEL_47;
LABEL_385:
              v279 = (_QWORD *)sub_186B270(0x18u);
              *v279 = 2;
              v37 = 1;
              v23 = v279 + 1;
              v349 = v23;
              v38 = v23;
              goto LABEL_49;
            }
          }
          else
          {
            v330 = &v349[v25];
            if ( v349 != v330 )
              goto LABEL_35;
          }
          ++*(_DWORD *)(v326 + 8);
LABEL_47:
          v35 = *((_DWORD *)v23 - 1);
          if ( v35 == *((_DWORD *)v23 - 2) )
          {
            v260 = (3 * v35 + 1) >> 1;
            v261 = 8 * v260 + 8;
            if ( 8 * v35 + 8 >= v261 || v35 >= v260 )
            {
              v312 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
              *v312 = (char *)off_1C63128;
              sub_2333C0(v312 + 1, v350);
              sub_233E40((__int64)v350);
              __cxa_throw(v312, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v262 = (unsigned int *)sub_186B300(v23 - 1, v261);
            v263 = v262[1];
            v23 = v262 + 2;
            *v262 = v260;
            v349 = v23;
            LODWORD(v262) = v263;
            v38 = &v23[v263];
            v37 = (_DWORD)v262 + 1;
          }
          else
          {
            v36 = v35;
            v37 = v35 + 1;
            v38 = &v23[v36];
          }
LABEL_49:
          *v38 = v326;
          *((_DWORD *)v23 - 1) = v37;
          v39 = *(_QWORD *)(v20 + 4424);
          if ( v39 )
            v40 = *(_DWORD *)(v39 - 4);
          else
            v40 = 0;
          sub_1189DB0(v20 + 8, v40, 1, v326, a5, a6, v326);
          v41 = *(_QWORD **)(v20 + 4424);
          if ( v41 )
          {
            LODWORD(v42) = *((_DWORD *)v41 - 1);
            v43 = &v41[2 * (unsigned int)v42];
            if ( (_DWORD)v42 == *((_DWORD *)v41 - 2) )
            {
              v343 = (unsigned int)(3 * v42 + 1) >> 1;
              v248 = 16 * v343 + 8;
              if ( 16 * (int)v42 + 8 >= v248 || (unsigned int)v42 >= (unsigned int)(3 * v42 + 1) >> 1 )
              {
                v316 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                *v316 = (char *)off_1C63128;
                sub_2333C0(v316 + 1, v350);
                sub_233E40((__int64)v350);
                __cxa_throw(v316, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v42 = sub_186B270(v248);
              v249 = *(__int64 **)(v20 + 4424);
              v341 = (_DWORD *)v42;
              v41 = (_QWORD *)(v42 + 8);
              if ( v249 )
              {
                v250 = *((unsigned int *)v249 - 1);
                v251 = v42 + 8;
                *(_DWORD *)(v42 + 4) = v250;
                v252 = v249;
                v253 = &v249[2 * v250];
                if ( v253 != v249 )
                {
                  do
                  {
                    v254 = *v252;
                    v252 += 2;
                    v251 += 16;
                    *(_QWORD *)(v251 - 16) = v254;
                    v255 = *(v252 - 1);
                    *(v252 - 1) = 0;
                    *(_QWORD *)(v251 - 8) = v255;
                  }
                  while ( v252 != v253 );
                }
                v338 = &v249[2 * v250];
                if ( (_DWORD)v250 )
                {
                  do
                  {
                    v256 = (__int64 *)v249[1];
                    if ( v256 )
                    {
                      v257 = &v256[*((unsigned int *)v256 - 1)];
                      if ( v256 >= v257 )
                        goto LABEL_351;
                      do
                      {
                        while ( 1 )
                        {
                          v258 = *v256;
                          if ( *v256 )
                          {
                            v259 = *v249;
                            v16 = (*(_DWORD *)(v258 + 8))-- == 1;
                            if ( v16 )
                              break;
                          }
                          if ( ++v256 >= v257 )
                            goto LABEL_350;
                        }
                        v335 = (unsigned __int64)v257;
                        ++v256;
                        sub_15D7BC0(v259, v258);
                        v257 = (__int64 *)v335;
                      }
                      while ( (unsigned __int64)v256 < v335 );
LABEL_350:
                      v256 = (__int64 *)v249[1];
                      if ( v256 )
LABEL_351:
                        sub_186B220(v256 - 1);
                    }
                    v249 += 2;
                  }
                  while ( v249 != v338 );
                  v249 = *(__int64 **)(v20 + 4424);
                }
                sub_186B220(v249 - 1);
                v42 = (unsigned int)v341[1];
                v43 = &v41[2 * v42];
              }
              else
              {
                *(_DWORD *)(v42 + 4) = 0;
                v43 = (_QWORD *)(v42 + 8);
                LODWORD(v42) = 0;
              }
              *(_QWORD *)(v20 + 4424) = v41;
              *v341 = v343;
            }
          }
          else
          {
            v306 = (_QWORD *)sub_186B270(0x28u);
            *v306 = 2;
            LODWORD(v42) = 0;
            v41 = v306 + 1;
            *(_QWORD *)(v20 + 4424) = v41;
            v43 = v41;
          }
          v44 = v348;
          v43[1] = 0;
          v45 = v349;
          *v43 = v44;
          if ( v45 )
          {
            v46 = nullptr;
            for ( i = 0; i < *((_DWORD *)v45 - 1); ++i )
            {
              while ( 1 )
              {
                v48 = v45[i];
                if ( v48 )
                  ++*(_DWORD *)(v48 + 8);
                if ( !v46 )
                {
                  v277 = (_QWORD *)sub_186B270(0x18u);
                  *v277 = 2;
                  v122 = 1;
                  v46 = v277 + 1;
                  v43[1] = v46;
                  v121 = v46;
                  v45 = v349;
                  goto LABEL_131;
                }
                v49 = *((_DWORD *)v46 - 1);
                if ( v49 == *((_DWORD *)v46 - 2) )
                  break;
                ++i;
                v46[v49] = v48;
                *((_DWORD *)v46 - 1) = v49 + 1;
                if ( i >= *((_DWORD *)v45 - 1) )
                  goto LABEL_61;
              }
              v117 = (3 * v49 + 1) >> 1;
              v118 = 8 * v117 + 8;
              if ( 8 * v49 + 8 >= (unsigned int)v118 || v49 >= v117 )
              {
                v323 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                *v323 = (char *)off_1C63128;
                sub_2333C0(v323 + 1, v350);
                sub_233E40((__int64)v350);
                __cxa_throw(v323, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v332 = (3 * v49 + 1) >> 1;
              v119 = (unsigned int *)sub_186B300(v46 - 1, v118);
              v120 = v119[1];
              v46 = v119 + 2;
              v43[1] = v119 + 2;
              *v119 = v332;
              LODWORD(v119) = v120;
              v45 = v349;
              v121 = &v46[v120];
              v122 = (_DWORD)v119 + 1;
LABEL_131:
              *v121 = v48;
              *((_DWORD *)v46 - 1) = v122;
              if ( !v45 )
                break;
            }
LABEL_61:
            v41 = *(_QWORD **)(v20 + 4424);
            LODWORD(v42) = *((_DWORD *)v41 - 1);
          }
          v50 = *(_BYTE **)(v20 + 4432);
          *((_DWORD *)v41 - 1) = v42 + 1;
          if ( v50 )
          {
            v51 = *((_DWORD *)v50 - 1);
            if ( v51 == *((_DWORD *)v50 - 2) )
            {
              v264 = (3 * v51 + 1) >> 1;
              if ( v51 + 8 >= v264 + 8 || v51 >= v264 )
              {
                v318 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                *v318 = (char *)off_1C63128;
                sub_2333C0(v318 + 1, v350);
                sub_233E40((__int64)v350);
                __cxa_throw(v318, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v265 = (unsigned int *)sub_186B300(v50 - 8, v264 + 8);
              v266 = v265[1];
              v50 = v265 + 2;
              *(_QWORD *)(v20 + 4432) = v265 + 2;
              *v265 = v264;
              LODWORD(v265) = v266;
              v54 = &v50[v266];
              v53 = (_DWORD)v265 + 1;
            }
            else
            {
              v52 = v51;
              v53 = v51 + 1;
              v54 = &v50[v52];
            }
          }
          else
          {
            v307 = (_QWORD *)sub_186B270(0xAu);
            *v307 = 2;
            v53 = 1;
            v50 = v307 + 1;
            *(_QWORD *)(v20 + 4432) = v50;
            v54 = v50;
          }
          v55 = *(__int64 **)(a1 + 48);
          *v54 = 1;
          *((_DWORD *)v50 - 1) = v53;
          if ( v55 )
          {
            if ( *((_DWORD *)v55 - 1) )
            {
LABEL_100:
              v90 = v349;
              if ( v349 )
              {
                v91 = (unsigned __int64)&v349[*((unsigned int *)v349 - 1)];
                if ( (unsigned __int64)v349 >= v91 )
                  goto LABEL_162;
                do
                {
                  v92 = *v90;
                  if ( *v90 )
                  {
                    v93 = v348;
                    v16 = (*(_DWORD *)(v92 + 8))-- == 1;
                    if ( v16 )
                      sub_15D7BC0(v93, v92);
                  }
                  ++v90;
                }
                while ( (unsigned __int64)v90 < v91 );
                v90 = v349;
                if ( v349 )
LABEL_162:
                  sub_186B220(v90 - 1);
              }
              goto LABEL_4;
            }
            v56 = *(_QWORD *)(v20 + 4272);
            if ( v56 )
            {
              *(_DWORD *)(v56 - 4) = 0;
              for ( j = &v55[*((unsigned int *)v55 - 1)]; j != v55; ++*((_DWORD *)v62 - 1) )
              {
                v57 = *v55;
                v58 = 0;
                if ( !*(_WORD *)(*v55 + 4) )
                {
                  v59 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL);
                  if ( v59 )
                  {
                    if ( !*v59 && v59[1] == 8 )
                    {
                      v58 = *(_DWORD *)(v57 + 24);
                      if ( v58 == 1 )
                        v57 = *(_QWORD *)(v57 + 32);
                      else
                        v58 = 0;
                    }
                  }
                }
                while ( 1 )
                {
                  v60 = *(_QWORD *)(v20 + 3304);
                  if ( v60 )
                  {
                    if ( *(_DWORD *)v57 < *(_DWORD *)(v60 - 4) )
                      break;
                  }
                  sub_11CA540(v20 + 8, 1, 1);
                }
                v61 = v58 + 2 * *(_DWORD *)v57;
                v62 = *(_QWORD **)(v20 + 4272);
                if ( v62 )
                {
                  v63 = *((unsigned int *)v62 - 1);
                  if ( (_DWORD)v63 == *((_DWORD *)v62 - 2) )
                  {
                    v215 = (unsigned int)(3 * v63 + 1) >> 1;
                    v216 = 4 * v215 + 8;
                    if ( 4 * (int)v63 + 8 >= (unsigned int)v216 || (unsigned int)v63 >= v215 )
                    {
                      v321 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                      *v321 = (char *)off_1C63128;
                      sub_2333C0(v321 + 1, v350);
                      sub_233E40((__int64)v350);
                      __cxa_throw(
                        v321,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v217 = (unsigned int *)sub_186B300(v62 - 1, v216);
                    v62 = v217 + 2;
                    *(_QWORD *)(v20 + 4272) = v217 + 2;
                    *v217 = v215;
                    v64 = &v217[v217[1] + 2];
                  }
                  else
                  {
                    v64 = (unsigned int *)v62 + v63;
                  }
                }
                else
                {
                  v247 = (_QWORD *)sub_186B270(0x10u);
                  v62 = v247 + 1;
                  *v247 = 2;
                  *(_QWORD *)(v20 + 4272) = v247 + 1;
                  v64 = (unsigned int *)(v247 + 1);
                }
                *v64 = v61;
                ++v55;
              }
            }
          }
          else
          {
            v276 = *(_QWORD *)(v20 + 4272);
            if ( v276 )
              *(_DWORD *)(v276 - 4) = 0;
          }
          v65 = *(_QWORD *)(v20 + 4424);
          if ( v65 )
            v66 = *(unsigned int *)(v65 - 4);
          else
            v66 = 0;
          sub_118B440(v20 + 8, v66);
          v67 = *(_QWORD **)(v20 + 4424);
          if ( v67 )
          {
            LODWORD(v68) = *((_DWORD *)v67 - 1);
            v69 = &v67[2 * (unsigned int)v68];
            if ( (_DWORD)v68 == *((_DWORD *)v67 - 2) )
            {
              v342 = (unsigned int)(3 * v68 + 1) >> 1;
              v281 = 16 * v342 + 8;
              if ( 16 * (int)v68 + 8 >= v281 || (unsigned int)v68 >= (unsigned int)(3 * v68 + 1) >> 1 )
              {
                v320 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                *v320 = (char *)off_1C63128;
                sub_2333C0(v320 + 1, v350);
                sub_233E40((__int64)v350);
                __cxa_throw(v320, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v282 = (unsigned int *)sub_186B270(v281);
              v283 = *(__int64 **)(v20 + 4424);
              v339 = v282;
              v67 = v282 + 2;
              if ( v283 )
              {
                v284 = *((unsigned int *)v283 - 1);
                v285 = v282 + 2;
                v282[1] = v284;
                v286 = v283;
                v287 = &v283[2 * v284];
                if ( v283 != v287 )
                {
                  do
                  {
                    v288 = *v286;
                    v286 += 2;
                    v285 += 4;
                    *((_QWORD *)v285 - 2) = v288;
                    v289 = *(v286 - 1);
                    *(v286 - 1) = 0;
                    *((_QWORD *)v285 - 1) = v289;
                  }
                  while ( v286 != v287 );
                }
                v336 = &v283[2 * v284];
                if ( (_DWORD)v284 )
                {
                  do
                  {
                    v290 = (__int64 *)v283[1];
                    if ( v290 )
                    {
                      v291 = &v290[*((unsigned int *)v290 - 1)];
                      if ( v290 >= v291 )
                        goto LABEL_407;
                      do
                      {
                        v292 = *v290;
                        if ( *v290 )
                        {
                          v293 = *v283;
                          v16 = (*(_DWORD *)(v292 + 8))-- == 1;
                          if ( v16 )
                            sub_15D7BC0(v293, v292);
                        }
                        ++v290;
                      }
                      while ( v290 < v291 );
                      v290 = (__int64 *)v283[1];
                      if ( v290 )
LABEL_407:
                        sub_186B220(v290 - 1);
                    }
                    v283 += 2;
                  }
                  while ( v283 != v336 );
                  v283 = *(__int64 **)(v20 + 4424);
                }
                sub_186B220(v283 - 1);
                v282 = v339;
                v68 = v339[1];
                v69 = &v67[2 * v68];
              }
              else
              {
                v282[1] = 0;
                v69 = v282 + 2;
                LODWORD(v68) = 0;
              }
              *(_QWORD *)(v20 + 4424) = v67;
              *v282 = v342;
            }
          }
          else
          {
            v310 = (_QWORD *)sub_186B270(0x28u);
            *v310 = 2;
            LODWORD(v68) = 0;
            v67 = v310 + 1;
            *(_QWORD *)(v20 + 4424) = v310 + 1;
            v69 = v310 + 1;
          }
          v70 = *(_QWORD *)(a1 + 40);
          v69[1] = 0;
          *v69 = v70;
          v71 = *(_QWORD *)(a1 + 48);
          if ( v71 )
          {
            v72 = nullptr;
            v73 = 0;
            do
            {
              if ( v73 >= *(_DWORD *)(v71 - 4) )
                break;
              v74 = *(_QWORD *)(v71 + 8LL * v73);
              if ( v74 )
                ++*(_DWORD *)(v74 + 8);
              if ( v72 )
              {
                v75 = *((_DWORD *)v72 - 1);
                if ( v75 == *((_DWORD *)v72 - 2) )
                {
                  v224 = (3 * v75 + 1) >> 1;
                  v225 = 8 * v224 + 8;
                  if ( 8 * v75 + 8 >= v225 || v75 >= v224 )
                  {
                    v317 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                    *v317 = (char *)off_1C63128;
                    sub_2333C0(v317 + 1, v350);
                    sub_233E40((__int64)v350);
                    __cxa_throw(
                      v317,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v226 = (unsigned int *)sub_186B300(v72 - 1, v225);
                  v72 = v226 + 2;
                  v69[1] = v226 + 2;
                  *v226 = v224;
                  v227 = v226[1];
                  v228 = v227;
                  v78 = &v72[v227];
                  v71 = *(_QWORD *)(a1 + 48);
                  v77 = v228 + 1;
                }
                else
                {
                  v76 = v75;
                  v77 = v75 + 1;
                  v78 = &v72[v76];
                }
              }
              else
              {
                v301 = (_QWORD *)sub_186B270(0x18u);
                *v301 = 2;
                v77 = 1;
                v72 = v301 + 1;
                v69[1] = v301 + 1;
                v78 = v301 + 1;
                v71 = *(_QWORD *)(a1 + 48);
              }
              *v78 = v74;
              ++v73;
              *((_DWORD *)v72 - 1) = v77;
            }
            while ( v71 );
            v79 = *(_QWORD *)(v20 + 4424);
            v69 = (_QWORD *)(v79 + 16LL * *(unsigned int *)(v79 - 4));
            v80 = (_QWORD *)v69[1];
            ++*(_DWORD *)(v79 - 4);
            ++*(_DWORD *)(v327 + 8);
            if ( v80 )
            {
              v81 = *((_DWORD *)v80 - 1);
              if ( v81 == *((_DWORD *)v80 - 2) )
              {
                v297 = (3 * v81 + 1) >> 1;
                v298 = 8 * v297 + 8;
                if ( 8 * v81 + 8 >= v298 || v81 >= v297 )
                {
                  v319 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                  *v319 = (char *)off_1C63128;
                  sub_2333C0(v319 + 1, v350);
                  sub_233E40((__int64)v350);
                  __cxa_throw(v319, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v299 = (unsigned int *)sub_186B300(v80 - 1, v298);
                v300 = v299[1];
                v80 = v299 + 2;
                v69[1] = v299 + 2;
                *v299 = v297;
                LODWORD(v299) = v300;
                v84 = &v80[v300];
                v83 = (_DWORD)v299 + 1;
              }
              else
              {
                v82 = v81;
                v83 = v81 + 1;
                v84 = &v80[v82];
              }
              goto LABEL_96;
            }
          }
          else
          {
            *((_DWORD *)v67 - 1) = v68 + 1;
            ++*(_DWORD *)(v327 + 8);
          }
          v303 = (_QWORD *)sub_186B270(0x18u);
          *v303 = 2;
          v83 = 1;
          v80 = v303 + 1;
          v69[1] = v80;
          v84 = v80;
LABEL_96:
          *v84 = v327;
          *((_DWORD *)v80 - 1) = v83;
          v85 = *(_BYTE **)(v20 + 4432);
          if ( v85 )
          {
            v86 = *((_DWORD *)v85 - 1);
            if ( v86 == *((_DWORD *)v85 - 2) )
            {
              v294 = (3 * v86 + 1) >> 1;
              if ( v86 + 8 >= v294 + 8 || v86 >= v294 )
              {
                v322 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
                *v322 = (char *)off_1C63128;
                sub_2333C0(v322 + 1, v350);
                sub_233E40((__int64)v350);
                __cxa_throw(v322, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v295 = (unsigned int *)sub_186B300(v85 - 8, v294 + 8);
              v296 = v295[1];
              v85 = v295 + 2;
              *(_QWORD *)(v20 + 4432) = v295 + 2;
              *v295 = v294;
              LODWORD(v295) = v296;
              v89 = &v85[v296];
              v88 = (_DWORD)v295 + 1;
            }
            else
            {
              v87 = v86;
              v88 = v86 + 1;
              v89 = &v85[v87];
            }
          }
          else
          {
            v311 = (_QWORD *)sub_186B270(0xAu);
            *v311 = 2;
            v88 = 1;
            v85 = v311 + 1;
            *(_QWORD *)(v20 + 4432) = v85;
            v89 = v85;
          }
          *v89 = 1;
          *((_DWORD *)v85 - 1) = v88;
          *(_BYTE *)(v20 + 4448) = 1;
          sub_2D0EA0((_QWORD *)v20, (int)&std::cout);
          goto LABEL_100;
        }
        goto LABEL_369;
      }
      if ( (_DWORD)v25 != *((_DWORD *)v24 - 1) )
        goto LABEL_33;
      v267 = &v349[v25];
      if ( v349 >= v267 )
        goto LABEL_369;
      do
      {
        v268 = *v23;
        if ( *v23 )
        {
          v269 = v348;
          v16 = (*(_DWORD *)(v268 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(v269, v268);
        }
        ++v23;
      }
      while ( v23 < v267 );
      v23 = v349;
      if ( v349 )
      {
LABEL_369:
        sub_186B220(v23 - 1);
        v180 = *(__int64 **)(a1 + 48);
LABEL_370:
        v270 = *(_QWORD *)(v20 + 4272);
        if ( v270 )
          goto LABEL_371;
        if ( !v180 )
          goto LABEL_372;
LABEL_388:
        v333 = &v180[*((unsigned int *)v180 - 1)];
        if ( v333 != v180 )
          goto LABEL_242;
        goto LABEL_372;
      }
      v24 = *(__int64 **)(a1 + 48);
    }
    else
    {
      if ( !v24 )
      {
        v309 = *(_QWORD *)(v20 + 4272);
        if ( v309 )
          *(_DWORD *)(v309 - 4) = 0;
        goto LABEL_372;
      }
      a6 = *((_DWORD *)v24 - 1);
      if ( a6 )
      {
        v278 = *(_QWORD *)(v20 + 4272);
        if ( v278 )
          *(_DWORD *)(v278 - 4) = 0;
        ++*(_DWORD *)(v326 + 8);
        goto LABEL_385;
      }
    }
    v180 = v24;
    goto LABEL_370;
  }
  v270 = *(_QWORD *)(v20 + 4272);
  v180 = *(__int64 **)(a1 + 48);
  if ( !v270 )
  {
    if ( !v180 )
    {
      v189 = *(_QWORD *)(v20 + 4424);
      goto LABEL_256;
    }
    goto LABEL_388;
  }
LABEL_371:
  *(_DWORD *)(v270 - 4) = 0;
  if ( v180 )
  {
LABEL_241:
    v333 = &v180[*((unsigned int *)v180 - 1)];
    if ( v180 != v333 )
      goto LABEL_242;
LABEL_253:
    v189 = *(_QWORD *)(v20 + 4424);
    if ( !v326 )
      goto LABEL_257;
    goto LABEL_254;
  }
LABEL_372:
  v189 = *(_QWORD *)(v20 + 4424);
LABEL_254:
  LODWORD(a4) = v326;
  if ( *(_WORD *)(v326 + 4) )
  {
LABEL_257:
    if ( v189 )
      v190 = *(_DWORD *)(v189 - 4);
    else
      v190 = 0;
    sub_1189DB0(v20 + 8, v190, 1, (_DWORD)a4, a5, a6, v326);
    goto LABEL_260;
  }
  v22 = *(_QWORD *)(v326 + 16);
LABEL_256:
  a4 = *(__int64 **)(v20 + 4440);
  if ( *(__int64 **)(v22 + 16) != a4 )
    goto LABEL_257;
  if ( v189 )
    v302 = *(unsigned int *)(v189 - 4);
  else
    v302 = 0;
  sub_118B440(v20 + 8, v302);
LABEL_260:
  v191 = *(_QWORD **)(v20 + 4424);
  if ( v191 )
  {
    v192 = *((unsigned int *)v191 - 1);
    v193 = &v191[2 * v192];
    if ( (_DWORD)v192 == *((_DWORD *)v191 - 2) )
    {
      v233 = (unsigned int)(3 * v192 + 1) >> 1;
      v340 = v233;
      v234 = 16 * v233 + 8;
      if ( 16 * (int)v192 + 8 >= v234 || (unsigned int)v192 >= v233 )
        goto LABEL_455;
      v235 = sub_186B270(v234);
      v236 = *(__int64 **)(v20 + 4424);
      v337 = (_DWORD *)v235;
      v191 = (_QWORD *)(v235 + 8);
      if ( v236 )
      {
        v237 = *((unsigned int *)v236 - 1);
        v238 = v235 + 8;
        *(_DWORD *)(v235 + 4) = v237;
        v239 = v236;
        v240 = &v236[2 * v237];
        if ( v236 != v240 )
        {
          do
          {
            v241 = *v239;
            v239 += 2;
            v238 += 16;
            *(_QWORD *)(v238 - 16) = v241;
            v242 = *(v239 - 1);
            *(v239 - 1) = 0;
            *(_QWORD *)(v238 - 8) = v242;
          }
          while ( v239 != v240 );
        }
        v334 = &v236[2 * v237];
        if ( (_DWORD)v237 )
        {
          do
          {
            v243 = (__int64 *)v236[1];
            if ( v243 )
            {
              v244 = &v243[*((unsigned int *)v243 - 1)];
              if ( v243 >= v244 )
                goto LABEL_331;
              do
              {
                while ( 1 )
                {
                  v245 = *v243;
                  if ( *v243 )
                  {
                    v246 = *v236;
                    v16 = (*(_DWORD *)(v245 + 8))-- == 1;
                    if ( v16 )
                      break;
                  }
                  if ( ++v243 >= v244 )
                    goto LABEL_330;
                }
                sub_15D7BC0(v246, v245);
                ++v243;
              }
              while ( v243 < v244 );
LABEL_330:
              v243 = (__int64 *)v236[1];
              if ( v243 )
LABEL_331:
                sub_186B220(v243 - 1);
            }
            v236 += 2;
          }
          while ( v236 != v334 );
          v236 = *(__int64 **)(v20 + 4424);
        }
        sub_186B220(v236 - 1);
        v192 = (unsigned int)v337[1];
        v193 = &v191[2 * v192];
      }
      else
      {
        *(_DWORD *)(v235 + 4) = 0;
        v193 = (_QWORD *)(v235 + 8);
        v192 = 0;
      }
      *(_QWORD *)(v20 + 4424) = v191;
      *v337 = v340;
    }
  }
  else
  {
    v304 = (_QWORD *)sub_186B270(0x28u);
    v191 = v304 + 1;
    *v304 = 2;
    v192 = 0;
    *(_QWORD *)(v20 + 4424) = v191;
    v193 = v191;
  }
  v194 = *(_QWORD *)(a1 + 40);
  v193[1] = 0;
  v195 = *(_QWORD *)(a1 + 48);
  *v193 = v194;
  if ( v195 )
  {
    v196 = nullptr;
    for ( k = 0; k < *(_DWORD *)(v195 - 4); ++k )
    {
      while ( 1 )
      {
        v198 = *(_QWORD *)(v195 + 8LL * k);
        if ( v198 )
          ++*(_DWORD *)(v198 + 8);
        if ( !v196 )
        {
          v271 = (_QWORD *)sub_186B270(0x18u);
          *v271 = 2;
          v223 = 1;
          v196 = v271 + 1;
          v193[1] = v196;
          v222 = v196;
          v195 = *(_QWORD *)(a1 + 48);
          goto LABEL_295;
        }
        v199 = *((_DWORD *)v196 - 1);
        if ( v199 == *((_DWORD *)v196 - 2) )
          break;
        ++k;
        v196[v199] = v198;
        *((_DWORD *)v196 - 1) = v199 + 1;
        if ( k >= *(_DWORD *)(v195 - 4) )
          goto LABEL_270;
      }
      v218 = (3 * v199 + 1) >> 1;
      v219 = 8 * v218 + 8;
      if ( 8 * v199 + 8 >= v219 || v199 >= v218 )
      {
        v314 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
        *v314 = (char *)off_1C63128;
        sub_2333C0(v314 + 1, v350);
        sub_233E40((__int64)v350);
        __cxa_throw(v314, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v220 = (unsigned int *)sub_186B300(v196 - 1, v219);
      v221 = v220[1];
      v196 = v220 + 2;
      v193[1] = v220 + 2;
      v195 = *(_QWORD *)(a1 + 48);
      *v220 = v218;
      LODWORD(v220) = v221;
      v222 = &v196[v221];
      v223 = (_DWORD)v220 + 1;
LABEL_295:
      *v222 = v198;
      *((_DWORD *)v196 - 1) = v223;
      if ( !v195 )
        break;
    }
LABEL_270:
    v191 = *(_QWORD **)(v20 + 4424);
    v192 = *((unsigned int *)v191 - 1);
  }
  *((_DWORD *)v191 - 1) = v192 + 1;
  if ( v326 )
  {
    ++*(_DWORD *)(v326 + 8);
    v200 = &v191[2 * v192];
    v201 = (_QWORD *)v200[1];
    if ( v201 )
    {
      v202 = *((_DWORD *)v201 - 1);
      if ( v202 == *((_DWORD *)v201 - 2) )
      {
        v272 = (3 * v202 + 1) >> 1;
        v273 = 8 * v272 + 8;
        if ( 8 * v202 + 8 >= v273 || v202 >= v272 )
          goto LABEL_455;
        v274 = (unsigned int *)sub_186B300(v201 - 1, v273);
        v275 = v274[1];
        v201 = v274 + 2;
        v200[1] = v274 + 2;
        *v274 = v272;
        LODWORD(v274) = v275;
        v205 = &v201[v275];
        v204 = (_DWORD)v274 + 1;
      }
      else
      {
        v203 = v202;
        v204 = v202 + 1;
        v205 = &v201[v203];
      }
    }
    else
    {
      v308 = (_QWORD *)sub_186B270(0x18u);
      *v308 = 2;
      v204 = 1;
      v201 = v308 + 1;
      v200[1] = v201;
      v205 = v201;
    }
    *v205 = v326;
    *((_DWORD *)v201 - 1) = v204;
  }
  v206 = *(_BYTE **)(v20 + 4432);
  if ( !v206 )
  {
    v305 = (_QWORD *)sub_186B270(0xAu);
    *v305 = 2;
    v209 = 1;
    v206 = v305 + 1;
    *(_QWORD *)(v20 + 4432) = v206;
    v210 = v206;
    goto LABEL_279;
  }
  v207 = *((_DWORD *)v206 - 1);
  if ( v207 == *((_DWORD *)v206 - 2) )
  {
    v230 = (3 * v207 + 1) >> 1;
    if ( v207 + 8 < v230 + 8 && v207 < v230 )
    {
      v231 = (unsigned int *)sub_186B300(v206 - 8, v230 + 8);
      v232 = v231[1];
      v206 = v231 + 2;
      *(_QWORD *)(v20 + 4432) = v231 + 2;
      *v231 = v230;
      LODWORD(v231) = v232;
      v210 = &v206[v232];
      v209 = (_DWORD)v231 + 1;
      goto LABEL_279;
    }
LABEL_455:
    v313 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)v350, "Overflow encountered when expanding vector");
    *v313 = (char *)off_1C63128;
    sub_2333C0(v313 + 1, v350);
    sub_233E40((__int64)v350);
    __cxa_throw(v313, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v208 = v207;
  v209 = v207 + 1;
  v210 = &v206[v208];
LABEL_279:
  v7 = *(_QWORD **)(a1 + 48);
  *v210 = 1;
  *((_DWORD *)v206 - 1) = v209;
  if ( !v7 || (v8 = *((_DWORD *)v7 - 1)) == 0 )
  {
    *(_BYTE *)(v20 + 4448) = 1;
    sub_2D0EA0((_QWORD *)v20, (int)&std::cout);
LABEL_4:
    v7 = *(_QWORD **)(a1 + 48);
    if ( !*(_QWORD *)(a1 + 128) )
      goto LABEL_10;
    if ( !v7 )
    {
      v9 = *(_QWORD *)(a1 + 72);
      v8 = 0;
      if ( v9 )
        goto LABEL_8;
      goto LABEL_134;
    }
    v8 = *((_DWORD *)v7 - 1);
LABEL_7:
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
    {
LABEL_8:
      v10 = *(_DWORD *)(v9 - 4);
LABEL_9:
      v11 = *(_QWORD *)(a1 + 56);
      v12 = *(_QWORD *)(a1 + 144);
      v344 = v10;
      v345 = v8;
      v346 = v12;
      v347 = v11;
      *(_QWORD *)v350 = v7;
      v348 = v9;
      (*(void (__fastcall **)(__int64, __int64 *, __int64 *, int *, __int64 *, int *, int *))(a1 + 136))(
        a1 + 112,
        &v346,
        &v347,
        &v344,
        &v348,
        &v345,
        v350);
      v7 = *(_QWORD **)(a1 + 48);
LABEL_10:
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_11;
    }
LABEL_134:
    v10 = 0;
    goto LABEL_9;
  }
  if ( *(_QWORD *)(a1 + 128) )
    goto LABEL_7;
LABEL_11:
  v13 = &v7[*((unsigned int *)v7 - 1)];
  if ( v7 >= v13 )
    goto LABEL_18;
  do
  {
    while ( 1 )
    {
      v14 = *v7;
      if ( *v7 )
      {
        v15 = *(_QWORD *)(a1 + 40);
        v16 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v16 )
          break;
      }
      if ( ++v7 >= v13 )
        goto LABEL_17;
    }
    sub_15D7BC0(v15, v14);
    ++v7;
  }
  while ( v7 < v13 );
LABEL_17:
  v7 = *(_QWORD **)(a1 + 48);
  if ( v7 )
LABEL_18:
    *((_DWORD *)v7 - 1) = 0;
LABEL_19:
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    v16 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v18, v17);
  }
  result = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = 0;
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

