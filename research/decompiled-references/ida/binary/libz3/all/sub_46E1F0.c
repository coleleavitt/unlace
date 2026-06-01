__int64 __fastcall sub_46E1F0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v3; // r12
  const char *v4; // rax
  const char *v5; // r14
  size_t v6; // rax
  size_t v7; // r13
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  size_t v10; // rdx
  __int64 v11; // rax
  char **v12; // r12
  char **exception; // r12
  const char *v14; // rax
  char **v15; // r12
  char **v16; // r12
  char **v17; // r12
  char **v18; // r12
  char **v19; // r12
  char **v20; // r12
  char **v21; // r12
  char **v22; // r12
  const char *v23; // rax
  _QWORD *v24; // r12
  const char *v25; // rax
  const char *v26; // r14
  size_t v27; // rax
  size_t v28; // r13
  _QWORD *v29; // rdi
  _QWORD *v30; // rcx
  size_t v31; // rdx
  __int64 v32; // rax
  __int64 v35; // rax
  void *v36; // r14
  int v37; // eax
  void *v38; // r14
  void *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // r12
  _QWORD *v44; // r15
  unsigned __int64 v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rdi
  bool v48; // zf
  _QWORD *v49; // r15
  unsigned __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 *v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdi
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r15
  unsigned int v61; // edx
  __int64 v62; // rsi
  __int64 v63; // rdi
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // rsi
  __int64 v68; // rdi
  int v69; // edx
  unsigned int v70; // edx
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // r14
  _QWORD *v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rsi
  int v78; // eax
  __int64 *v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // r15
  _QWORD *v83; // rsi
  unsigned int v84; // eax
  __int64 v85; // rdx
  int v86; // eax
  __int64 *v87; // rdx
  __int64 v88; // rax
  int v89; // edx
  __int64 v90; // rax
  __int64 v91; // r15
  __int64 v92; // r12
  __int16 v93; // ax
  _QWORD *v94; // rax
  __int64 v95; // rdx
  unsigned int v96; // edx
  __int64 v97; // rsi
  __int64 v98; // rdi
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rbx
  __int64 v102; // rsi
  __int64 v103; // rdi
  int v104; // ecx
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rbx
  __int64 v109; // rsi
  __int64 v110; // rdi
  _QWORD *v111; // rax
  __int64 v112; // rdx
  unsigned int v113; // edx
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rax
  int v117; // ecx
  int v118; // r8d
  int v119; // r9d
  __int64 v120; // rdx
  _QWORD *v121; // rcx
  unsigned int v122; // eax
  __int64 v123; // rsi
  int v124; // eax
  __int64 *v125; // rsi
  __int64 v126; // rax
  int v127; // ecx
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r12
  __int64 v131; // r15
  __int16 v132; // ax
  _QWORD *v133; // rax
  __int64 v134; // rdx
  unsigned int v135; // edx
  __int64 v136; // rsi
  __int64 v137; // rdi
  __int64 v138; // rsi
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // rdi
  void *v142; // rbx
  __int64 v144; // rax
  __int64 v145; // rbx
  __int64 v146; // rsi
  __int64 v147; // rdi
  __int16 v148; // dx
  _QWORD *v149; // rax
  int v150; // r14d
  __int64 v151; // rcx
  int v152; // edx
  _QWORD *v153; // rcx
  _QWORD *v154; // rdi
  __int64 v155; // rax
  unsigned int *v156; // rax
  unsigned int v157; // edx
  unsigned int v158; // ecx
  size_t v159; // rsi
  unsigned int *v160; // rdx
  unsigned int v161; // ecx
  unsigned int v162; // edx
  unsigned int *v163; // rax
  unsigned int v164; // r14d
  __int64 v165; // rsi
  int v166; // edx
  unsigned int v167; // eax
  unsigned int v168; // esi
  __int64 v169; // rcx
  __int64 v170; // rsi
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // r8
  _QWORD *v174; // rax
  _QWORD *v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  int v179; // eax
  unsigned int v180; // eax
  __int64 v181; // rdx
  unsigned int v182; // r10d
  unsigned int v183; // edx
  unsigned int v184; // r14d
  unsigned int *v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rdi
  __int64 v188; // rcx
  __int64 *v189; // r8
  _QWORD *v190; // rax
  __int64 v191; // rcx
  __int64 v192; // r9
  __int64 *v193; // r8
  __int64 **v194; // rdx
  int v195; // eax
  unsigned int v196; // eax
  __int64 v197; // rdx
  unsigned int v198; // r10d
  unsigned int v199; // edx
  unsigned int v200; // r14d
  unsigned int *v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rax
  __int64 *v204; // rcx
  __int64 *v205; // r14
  char v206; // al
  __int64 *v207; // rcx
  __int64 v208; // rdx
  __int64 *v209; // rax
  __int64 **v210; // r8
  __int64 *v211; // rsi
  __int64 *v212; // rax
  __int64 *i; // rcx
  __int64 v214; // rsi
  __int64 v215; // rax
  __int64 *v216; // rcx
  __int64 *v217; // r14
  char v218; // al
  __int64 *v219; // rcx
  __int64 v220; // rdx
  _QWORD *v221; // rax
  __int64 *v222; // r8
  __int64 v223; // rsi
  unsigned __int64 v224; // rcx
  __int64 *j; // rax
  __int64 v226; // rsi
  __int64 v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rsi
  __int64 v230; // rdi
  _QWORD *v231; // rax
  unsigned int v232; // ecx
  unsigned __int64 v233; // r8
  _QWORD *v234; // rdx
  __int64 v235; // rsi
  __int64 v236; // rdi
  __int64 v237; // rdx
  __int64 *v238; // rsi
  int v239; // ecx
  __int64 v240; // rcx
  __int64 v241; // rdi
  __int64 v242; // rsi
  __int64 v243; // rdi
  __int64 v244; // rsi
  __int64 v245; // rdx
  int v246; // eax
  __int64 *v247; // r12
  unsigned __int64 v248; // r15
  __int64 v249; // rsi
  __int64 *v250; // r12
  unsigned __int64 v251; // r15
  __int64 v252; // rsi
  _QWORD *v253; // rax
  __int64 v254; // rsi
  __int64 v255; // rdi
  _QWORD *v256; // rax
  unsigned int v257; // r8d
  size_t v258; // rsi
  unsigned int *v259; // rcx
  __int64 v260; // rsi
  _QWORD *v261; // rax
  unsigned int v262; // edx
  unsigned int *v263; // rax
  unsigned int v264; // r12d
  size_t v265; // rsi
  unsigned int *v266; // rax
  __int64 v267; // rsi
  unsigned int v268; // r15d
  size_t v269; // rsi
  unsigned int *v270; // rax
  __int64 v271; // rsi
  _QWORD *v272; // rdx
  _QWORD *v273; // rcx
  _QWORD *v274; // rsi
  int v275; // [rsp+0h] [rbp-380h]
  __int64 *v276; // [rsp+8h] [rbp-378h]
  __int64 *v277; // [rsp+10h] [rbp-370h]
  __int64 v278; // [rsp+18h] [rbp-368h]
  __int64 *v279; // [rsp+20h] [rbp-360h]
  __int64 v280; // [rsp+20h] [rbp-360h]
  __int64 *v281; // [rsp+20h] [rbp-360h]
  __int64 v282; // [rsp+20h] [rbp-360h]
  __int64 v283; // [rsp+28h] [rbp-358h]
  __int64 v284; // [rsp+30h] [rbp-350h]
  __int64 v285; // [rsp+30h] [rbp-350h]
  __int64 v286; // [rsp+30h] [rbp-350h]
  __int64 v287; // [rsp+38h] [rbp-348h]
  __int64 v288; // [rsp+38h] [rbp-348h]
  __int64 v289; // [rsp+38h] [rbp-348h]
  __int64 *v290; // [rsp+40h] [rbp-340h]
  unsigned int v291; // [rsp+48h] [rbp-338h]
  _QWORD *v292; // [rsp+48h] [rbp-338h]
  unsigned int v293; // [rsp+48h] [rbp-338h]
  unsigned int v294; // [rsp+50h] [rbp-330h]
  unsigned __int64 v295; // [rsp+50h] [rbp-330h]
  __int64 v296; // [rsp+50h] [rbp-330h]
  __int64 v297; // [rsp+50h] [rbp-330h]
  __int64 v298; // [rsp+50h] [rbp-330h]
  unsigned int v299; // [rsp+58h] [rbp-328h]
  unsigned int v300; // [rsp+58h] [rbp-328h]
  __int64 v301; // [rsp+58h] [rbp-328h]
  __int64 v302; // [rsp+58h] [rbp-328h]
  __int64 **v303; // [rsp+58h] [rbp-328h]
  unsigned int v304; // [rsp+60h] [rbp-320h]
  _QWORD *v305; // [rsp+60h] [rbp-320h]
  unsigned int v306; // [rsp+60h] [rbp-320h]
  __int64 v307; // [rsp+60h] [rbp-320h]
  __int64 v308; // [rsp+60h] [rbp-320h]
  __int64 v309; // [rsp+78h] [rbp-308h]
  __int64 v310; // [rsp+80h] [rbp-300h]
  int v311; // [rsp+88h] [rbp-2F8h]
  unsigned __int8 v312; // [rsp+8Fh] [rbp-2F1h]
  __int64 v313; // [rsp+98h] [rbp-2E8h]
  _QWORD *v314; // [rsp+D0h] [rbp-2B0h] BYREF
  size_t v315; // [rsp+D8h] [rbp-2A8h]
  _QWORD dest[2]; // [rsp+E0h] [rbp-2A0h] BYREF
  __int64 v317; // [rsp+F0h] [rbp-290h] BYREF
  char v318[16]; // [rsp+F8h] [rbp-288h] BYREF
  _QWORD v319[2]; // [rsp+108h] [rbp-278h] BYREF
  _QWORD v320[3]; // [rsp+118h] [rbp-268h] BYREF
  __int64 (__fastcall **v321)(); // [rsp+130h] [rbp-250h] BYREF
  int v322[2]; // [rsp+138h] [rbp-248h]
  __int64 v323; // [rsp+140h] [rbp-240h] BYREF
  _QWORD *v324; // [rsp+148h] [rbp-238h]
  __int64 v325; // [rsp+150h] [rbp-230h]
  __int64 v326; // [rsp+158h] [rbp-228h]
  __int64 v327; // [rsp+160h] [rbp-220h]
  _QWORD *v328; // [rsp+168h] [rbp-218h]
  __int64 v329; // [rsp+178h] [rbp-208h]
  __int64 v330; // [rsp+180h] [rbp-200h]
  _QWORD *v331; // [rsp+188h] [rbp-1F8h]
  __int64 v332; // [rsp+1A8h] [rbp-1D8h]
  int v333; // [rsp+1B0h] [rbp-1D0h]
  __int64 v334; // [rsp+1B8h] [rbp-1C8h]
  __int64 *v335; // [rsp+1C0h] [rbp-1C0h]
  int v336; // [rsp+1C8h] [rbp-1B8h]
  _DWORD *v337; // [rsp+1D0h] [rbp-1B0h]
  _QWORD v338[19]; // [rsp+1D8h] [rbp-1A8h] BYREF
  int v339; // [rsp+270h] [rbp-110h]
  _QWORD v340[18]; // [rsp+278h] [rbp-108h] BYREF
  int v341; // [rsp+308h] [rbp-78h]
  __int64 v342; // [rsp+310h] [rbp-70h]
  __int64 v343; // [rsp+318h] [rbp-68h]
  __int64 v344; // [rsp+320h] [rbp-60h]
  __int64 v345; // [rsp+328h] [rbp-58h]
  __int64 v346; // [rsp+330h] [rbp-50h]
  __int64 v347; // [rsp+338h] [rbp-48h]
  _QWORD *v348; // [rsp+340h] [rbp-40h]

  v35 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
  v321 = nullptr;
  *(_QWORD *)v322 = 0;
  v309 = v35;
  v323 = 1;
  v324 = nullptr;
  v36 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v321, a3);
  else
    LODWORD(v321) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v36, &v323, a3 + 16);
  }
  else
  {
    v37 = *(_DWORD *)(a3 + 16);
    BYTE4(v323) &= ~1u;
    LODWORD(v323) = v37;
  }
  v317 = v309;
  sub_16669D0(v318, v309);
  v319[0] = 0;
  v319[1] = 0;
  v320[0] = 1;
  v38 = qword_1C7F2C0;
  v320[1] = 0;
  if ( (BYTE4(v321) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v319, &v321);
    if ( (v323 & 0x100000000LL) == 0 )
      goto LABEL_7;
  }
  else
  {
    LODWORD(v319[0]) = (_DWORD)v321;
    if ( (v323 & 0x100000000LL) == 0 )
    {
LABEL_7:
      BYTE4(v320[0]) &= ~1u;
      LODWORD(v320[0]) = v323;
      goto LABEL_8;
    }
  }
  sub_182C690(v38, v320, &v323);
LABEL_8:
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v321);
  sub_182CBA0(v39, &v323);
  sub_1584DD0(&v321, v309, 0);
  v321 = &off_1C4EAD0;
  v335 = &v317;
  v336 = 0;
  v337 = nullptr;
  sub_1584DD0(v338, v309, 0);
  v338[18] = 0;
  v338[0] = &off_1C61DB8;
  v339 = 0;
  sub_1584DD0(v340, v309, 0);
  v341 = 0;
  v342 = 0;
  v343 = v309;
  v340[0] = &off_1C61DE0;
  v40 = a2[1];
  v344 = 0;
  v345 = v309;
  v346 = 0;
  v347 = v309;
  v348 = nullptr;
  if ( !v40 || (v41 = *(unsigned int *)(v40 - 4), !(_DWORD)v41) )
  {
    v312 = 0;
    v321 = &off_1C4EAD0;
    goto LABEL_182;
  }
  v312 = 0;
  v42 = 0;
  v310 = 8 * v41;
  v313 = 0;
  while ( 1 )
  {
    v43 = *(_QWORD *)(v40 + v313);
    if ( v326 )
    {
      if ( !*(_DWORD *)(v326 - 4) && *v324 == v325 )
        goto LABEL_36;
      *(_DWORD *)(v326 - 4) = 0;
    }
    else if ( v325 == *v324 )
    {
      goto LABEL_36;
    }
    v44 = v328;
    if ( v328 )
    {
      v45 = (unsigned __int64)&v328[*((unsigned int *)v328 - 1)];
      if ( (unsigned __int64)v328 >= v45 )
        goto LABEL_23;
      do
      {
        while ( 1 )
        {
          v46 = *v44;
          if ( *v44 )
          {
            v47 = v327;
            v48 = (*(_DWORD *)(v46 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v44 >= v45 )
            goto LABEL_22;
        }
        sub_15D7BC0(v47, v46);
        ++v44;
      }
      while ( (unsigned __int64)v44 < v45 );
LABEL_22:
      v44 = v328;
      if ( v328 )
LABEL_23:
        *((_DWORD *)v44 - 1) = 0;
    }
    v49 = v331;
    if ( v331 )
    {
      v50 = (unsigned __int64)&v331[*((unsigned int *)v331 - 1)];
      if ( (unsigned __int64)v331 >= v50 )
        goto LABEL_32;
      do
      {
        while ( 1 )
        {
          v51 = *v49;
          if ( *v49 )
          {
            v52 = v330;
            v48 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v49 >= v50 )
            goto LABEL_31;
        }
        sub_15D7BC0(v52, v51);
        ++v49;
      }
      while ( (unsigned __int64)v49 < v50 );
LABEL_31:
      v49 = v331;
      if ( v331 )
LABEL_32:
        *((_DWORD *)v49 - 1) = 0;
    }
    if ( v334 )
      *(_DWORD *)(v334 - 4) = 0;
    sub_15843E0(&v321);
LABEL_36:
    v53 = v344;
    v54 = v345;
    if ( !(_BYTE)v323 )
    {
      if ( v344 )
      {
        v48 = (*(_DWORD *)(v344 + 8))-- == 1;
        if ( v48 )
          sub_15D7BC0(v54, v53);
      }
      v344 = 0;
      if ( (unsigned __int8)sub_18290A0(*(_QWORD *)v322) )
      {
        v332 = v43;
        v333 = 0;
        v336 = 0;
        if ( (unsigned __int8)sub_469ED0(&v321, v43, 3) )
        {
          v111 = v328;
          v112 = 0xFFFFFFFFLL;
          if ( v328 )
            v112 = (unsigned int)(*((_DWORD *)v328 - 1) - 1);
          v43 = v328[v112];
          if ( v43 )
            ++*(_DWORD *)(v43 + 8);
          if ( v42 )
          {
            v48 = (*(_DWORD *)(v42 + 8))-- == 1;
            if ( v48 )
            {
              sub_15D7BC0(v309, v42);
              v111 = v328;
            }
          }
          v113 = *((_DWORD *)v111 - 1) - 1;
          v114 = v111[v113];
          *((_DWORD *)v111 - 1) = v113;
          if ( !v114 )
            goto LABEL_47;
          v115 = v327;
          v48 = (*(_DWORD *)(v114 + 8))-- == 1;
          if ( !v48 )
            goto LABEL_47;
        }
        else
        {
LABEL_166:
          while ( 1 )
          {
            v126 = v326;
            if ( !v326 )
              break;
            while ( 1 )
            {
              if ( !*(_DWORD *)(v126 - 4) )
                goto LABEL_167;
              if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v322) && BYTE1(v323) )
              {
                sub_4692C0((__int64)&v321);
                exception = (char **)__cxa_allocate_exception(0x28u);
                v14 = (const char *)sub_1829130(*(_QWORD *)v322);
                sub_24ABB0((__int64 *)&v314, v14);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v314);
                *exception = (char *)off_1C650D8;
                sub_233E40((__int64)&v314);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'rewriter_exception,
                  (void (*)(void *))sub_39A5B0);
              }
              v128 = v326;
              v129 = 0xFFFFFFFF0LL;
              if ( v326 )
                v129 = 16LL * (unsigned int)(*(_DWORD *)(v326 - 4) - 1);
              v130 = v326 + v129;
              v131 = *(_QWORD *)(v326 + v129);
              ++v336;
              if ( (*(_DWORD *)(v326 + v129 + 8) & 0xFFFFFFCC) != 0 )
              {
LABEL_162:
                v132 = *(_WORD *)(v131 + 4);
                if ( v132 == 1 )
                {
                  v128 = v326;
LABEL_218:
                  --*(_DWORD *)(v128 - 4);
                  sub_469640(&v321, v131);
                  goto LABEL_166;
                }
                if ( v132 != 2 )
                {
                  if ( !v132 )
                    goto LABEL_214;
LABEL_165:
                  sub_1872CE0("");
                  sub_1873130(114, 793);
                }
                v311 = *(_DWORD *)(v131 + 20);
                if ( *(_DWORD *)(v130 + 8) <= 0x3Fu )
                {
LABEL_222:
                  sub_15856A0(&v321);
                  v332 = *(_QWORD *)(v131 + 24);
                  v149 = v337;
                  if ( v337 )
                    v304 = *(v337 - 1);
                  else
                    v304 = 0;
                  if ( v311 )
                  {
                    v150 = 0;
                    while ( 1 )
                    {
                      if ( v149 )
                      {
                        v157 = *((_DWORD *)v149 - 1);
                        if ( v157 == *((_DWORD *)v149 - 2) )
                        {
                          v158 = (3 * v157 + 1) >> 1;
                          v159 = 8 * v158 + 8;
                          if ( 8 * v157 + 8 >= (unsigned int)v159 || v157 >= v158 )
                          {
                            v17 = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0((__int64 *)&v314, "Overflow encountered when expanding vector");
                            *v17 = (char *)off_1C63128;
                            sub_2333C0(v17 + 1, &v314);
                            sub_233E40((__int64)&v314);
                            __cxa_throw(
                              v17,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v299 = (3 * v157 + 1) >> 1;
                          v160 = (unsigned int *)sub_186B300(v149 - 1, v159);
                          v149 = v160 + 2;
                          v337 = v160 + 2;
                          *v160 = v299;
                          LODWORD(v160) = v160[1];
                          v153 = &v149[(unsigned int)v160];
                          v152 = (_DWORD)v160 + 1;
                        }
                        else
                        {
                          v151 = v157;
                          v152 = v157 + 1;
                          v153 = &v149[v151];
                        }
                      }
                      else
                      {
                        v256 = (_QWORD *)sub_186B270(0x18u);
                        *v256 = 2;
                        v149 = v256 + 1;
                        v152 = 1;
                        v337 = v149;
                        v153 = v149;
                      }
                      v154 = v348;
                      *v153 = 0;
                      *((_DWORD *)v149 - 1) = v152;
                      if ( v154 )
                      {
                        v155 = *((unsigned int *)v154 - 1);
                        if ( (_DWORD)v155 == *((_DWORD *)v154 - 2) )
                        {
                          v161 = (unsigned int)(3 * v155 + 1) >> 1;
                          v162 = 4 * v161 + 8;
                          if ( 4 * (int)v155 + 8 >= v162 || (unsigned int)v155 >= v161 )
                          {
                            v20 = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0((__int64 *)&v314, "Overflow encountered when expanding vector");
                            *v20 = (char *)off_1C63128;
                            sub_2333C0(v20 + 1, &v314);
                            sub_233E40((__int64)&v314);
                            __cxa_throw(
                              v20,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v300 = (unsigned int)(3 * v155 + 1) >> 1;
                          v163 = (unsigned int *)sub_186B300(v154 - 1, v162);
                          v154 = v163 + 2;
                          v348 = v163 + 2;
                          *v163 = v300;
                          v156 = &v163[v163[1] + 2];
                        }
                        else
                        {
                          v156 = (unsigned int *)v154 + v155;
                        }
                      }
                      else
                      {
                        v261 = (_QWORD *)sub_186B270(0x10u);
                        v154 = v261 + 1;
                        *v261 = 2;
                        v348 = v261 + 1;
                        v156 = (unsigned int *)(v261 + 1);
                      }
                      *v156 = v304;
                      ++*((_DWORD *)v154 - 1);
                      if ( ++v150 == v311 )
                        break;
                      v149 = v337;
                    }
                  }
                  v333 += v311;
                }
                v164 = *(_DWORD *)(v131 + 72) + *(_DWORD *)(v131 + 76) + 1;
                while ( 1 )
                {
                  v167 = *(_DWORD *)(v130 + 8) >> 6;
                  if ( v167 >= v164 )
                    break;
                  if ( v167 )
                  {
                    v168 = *(_DWORD *)(v131 + 72);
                    v169 = v167 - 1;
                    if ( v168 < v167 )
                      v169 = (unsigned int)v169 - v168;
                    v165 = *(_QWORD *)(16LL * *(unsigned int *)(v131 + 20) + v131 + 8 * v169 + 80);
                  }
                  else
                  {
                    v165 = *(_QWORD *)(v131 + 24);
                  }
                  v166 = ((v167 + 1) << 6) | *(_DWORD *)(v130 + 8) & 0x3F;
                  *(_DWORD *)(v130 + 8) = v166;
                  if ( !(unsigned __int8)sub_469ED0(&v321, v165, ((unsigned __int8)v166 >> 4) & 3) )
                    goto LABEL_166;
                }
                v170 = *(unsigned int *)(v131 + 20);
                v290 = &v328[*(unsigned int *)(v130 + 12)];
                v294 = *(_DWORD *)(v131 + 76);
                v278 = *v290;
                v171 = 16 * v170;
                v283 = *(_QWORD *)v322;
                v291 = *(_DWORD *)(v131 + 72);
                if ( v291 )
                {
                  v172 = v131 + v171;
                  v173 = *(_QWORD *)(v172 + 80);
                  if ( v173 )
                    ++*(_DWORD *)(v173 + 8);
                  v285 = v173;
                  v301 = v172;
                  v174 = (_QWORD *)sub_186B270(0x18u);
                  *v174 = 2;
                  v175 = v174 + 1;
                  v176 = v301;
                  v305 = v174 + 1;
                  v177 = v285;
                  v287 = v291;
                  v178 = v131 + 8 * (v291 + 2 * v170);
                  v179 = 1;
                  while ( 1 )
                  {
                    *v175 = v177;
                    v176 += 8;
                    *((_DWORD *)v305 - 1) = v179;
                    if ( v176 == v178 )
                      break;
                    v177 = *(_QWORD *)(v176 + 80);
                    if ( v177 )
                      ++*(_DWORD *)(v177 + 8);
                    v180 = *((_DWORD *)v305 - 1);
                    if ( v180 == *((_DWORD *)v305 - 2) )
                    {
                      v182 = (3 * v180 + 1) >> 1;
                      v183 = 8 * v182 + 8;
                      v184 = v182;
                      if ( 8 * v180 + 8 >= v183 || v180 >= v182 )
                      {
                        v16 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0((__int64 *)&v314, "Overflow encountered when expanding vector");
                        *v16 = (char *)off_1C63128;
                        sub_2333C0(v16 + 1, &v314);
                        sub_233E40((__int64)&v314);
                        __cxa_throw(
                          v16,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v280 = v177;
                      v286 = v178;
                      v302 = v176;
                      v185 = (unsigned int *)sub_186B300(v305 - 1, v183);
                      v186 = v185[1];
                      *v185 = v184;
                      v305 = v185 + 2;
                      v178 = v286;
                      LODWORD(v185) = v186;
                      v177 = v280;
                      v175 = &v305[v186];
                      v176 = v302;
                      v179 = (_DWORD)v185 + 1;
                    }
                    else
                    {
                      v181 = v180;
                      v179 = v180 + 1;
                      v175 = &v305[v181];
                    }
                  }
                  v187 = *(_QWORD *)v322;
                  v284 = *(_QWORD *)v322;
                  v171 = 16LL * *(unsigned int *)(v131 + 20);
                  if ( !v294 )
                  {
                    v303 = nullptr;
                    v279 = v290 + 1;
                    v203 = v291;
                    goto LABEL_275;
                  }
LABEL_262:
                  v188 = v131 + v171;
                  v189 = *(__int64 **)(v188 + 80);
                  if ( v189 )
                    ++*((_DWORD *)v189 + 2);
                  v281 = v189;
                  v288 = v188;
                  v190 = (_QWORD *)sub_186B270(0x18u);
                  v191 = v288;
                  v192 = 0;
                  v193 = v281;
                  v194 = (__int64 **)(v190 + 1);
                  *v190 = 2;
                  v195 = 1;
                  v303 = v194;
                  while ( 1 )
                  {
                    *v194 = v193;
                    ++v192;
                    *((_DWORD *)v303 - 1) = v195;
                    if ( (unsigned int)v192 >= v294 )
                      break;
                    v193 = *(__int64 **)(v191 + 8 * v192 + 80);
                    if ( v193 )
                      ++*((_DWORD *)v193 + 2);
                    v196 = *((_DWORD *)v303 - 1);
                    if ( v196 == *((_DWORD *)v303 - 2) )
                    {
                      v198 = (3 * v196 + 1) >> 1;
                      v199 = 8 * v198 + 8;
                      v200 = v198;
                      if ( 8 * v196 + 8 >= v199 || v196 >= v198 )
                      {
                        v19 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0((__int64 *)&v314, "Overflow encountered when expanding vector");
                        *v19 = (char *)off_1C63128;
                        sub_2333C0(v19 + 1, &v314);
                        sub_233E40((__int64)&v314);
                        __cxa_throw(
                          v19,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v277 = v193;
                      v282 = v191;
                      v289 = v192;
                      v201 = (unsigned int *)sub_186B300(v303 - 1, v199);
                      v202 = v201[1];
                      *v201 = v200;
                      v303 = (__int64 **)(v201 + 2);
                      v192 = v289;
                      LODWORD(v201) = v202;
                      v193 = v277;
                      v194 = &v303[v202];
                      v191 = v282;
                      v195 = (_DWORD)v201 + 1;
                    }
                    else
                    {
                      v197 = v196;
                      v195 = v196 + 1;
                      v194 = &v303[v197];
                    }
                  }
                  v279 = v290 + 1;
                  v203 = v291;
                  v287 = v291;
                  if ( v291 )
                  {
                    v187 = *(_QWORD *)v322;
LABEL_275:
                    v204 = v290;
                    v291 = 0;
                    v205 = &v290[v203];
                    while ( 1 )
                    {
                      v290 = v204;
                      v206 = sub_15D3190(v187, v204[1]);
                      v207 = v290;
                      if ( v206 )
                      {
                        v208 = v291;
                        v209 = (__int64 *)v290[1];
                        ++v291;
                        v210 = (__int64 **)&v305[v208];
                        if ( v209 )
                          ++*((_DWORD *)v209 + 2);
                        v211 = *v210;
                        if ( *v210 )
                        {
                          v48 = (*((_DWORD *)v211 + 2))-- == 1;
                          if ( v48 )
                          {
                            v276 = v290;
                            v277 = &v305[v208];
                            v290 = v209;
                            sub_15D7BC0(v283, v211);
                            v207 = v276;
                            v210 = (__int64 **)v277;
                            v209 = v290;
                          }
                        }
                        *v210 = v209;
                      }
                      v204 = v207 + 1;
                      if ( v205 == v204 )
                        break;
                      v187 = *(_QWORD *)v322;
                    }
                    if ( v305 )
                    {
                      v203 = v291;
                      goto LABEL_287;
                    }
LABEL_294:
                    if ( v294 )
                      goto LABEL_295;
                  }
                  else
                  {
                    v287 = 0;
                    if ( v305 )
                    {
LABEL_287:
                      v212 = &v305[v203];
                      for ( i = &v305[*((unsigned int *)v305 - 1)]; v212 < i; ++v212 )
                      {
                        v214 = *v212;
                        if ( *v212 )
                        {
                          v48 = (*(_DWORD *)(v214 + 8))-- == 1;
                          if ( v48 )
                          {
                            v277 = v212;
                            v290 = i;
                            sub_15D7BC0(v283, v214);
                            v212 = v277;
                            i = v290;
                          }
                        }
                      }
                      *((_DWORD *)v305 - 1) = v291;
                      goto LABEL_294;
                    }
LABEL_295:
                    v215 = v294;
                    v294 = 0;
                    v216 = &v279[v287];
                    v217 = &v279[v287 + v215];
                    do
                    {
                      v290 = v216;
                      v218 = sub_15D3190(*(_QWORD *)v322, *v216);
                      v219 = v290;
                      if ( v218 )
                      {
                        v220 = v294;
                        v221 = (_QWORD *)*v290;
                        ++v294;
                        v222 = (__int64 *)&v303[v220];
                        if ( *v290 )
                          ++*((_DWORD *)v221 + 2);
                        v223 = *v222;
                        if ( *v222 )
                        {
                          v48 = (*(_DWORD *)(v223 + 8))-- == 1;
                          if ( v48 )
                          {
                            v279 = v290;
                            v287 = (__int64)&v303[v220];
                            v290 = v221;
                            sub_15D7BC0(v284, v223);
                            v219 = v279;
                            v222 = (__int64 *)v287;
                            v221 = v290;
                          }
                        }
                        *v222 = (__int64)v221;
                      }
                      v216 = v219 + 1;
                    }
                    while ( v217 != v216 );
                  }
                  if ( v303 )
                  {
                    v224 = (unsigned __int64)&v303[*((unsigned int *)v303 - 1)];
                    for ( j = (__int64 *)&v303[v294]; (unsigned __int64)j < v224; ++j )
                    {
                      v226 = *j;
                      if ( *j )
                      {
                        v48 = (*(_DWORD *)(v226 + 8))-- == 1;
                        if ( v48 )
                        {
                          v287 = v224;
                          v290 = j;
                          sub_15D7BC0(v284, v226);
                          v224 = v287;
                          j = v290;
                        }
                      }
                    }
                    *((_DWORD *)v303 - 1) = v294;
                  }
                }
                else
                {
                  v284 = *(_QWORD *)v322;
                  v305 = nullptr;
                  if ( v294 )
                    goto LABEL_262;
                  v303 = nullptr;
                }
                if ( (*(_BYTE *)(v130 + 8) & 2) == 0 )
                {
                  v254 = v342;
                  ++*(_DWORD *)(v131 + 8);
                  if ( v254 )
                  {
                    v255 = v343;
                    v48 = (*(_DWORD *)(v254 + 8))-- == 1;
                    if ( v48 )
                      sub_15D7BC0(v255, v254);
                  }
                  v231 = v328;
                  v342 = v131;
                  v228 = v131;
                  if ( !v328 )
                    goto LABEL_362;
                  goto LABEL_318;
                }
                v227 = sub_15DBA30(v322[0], v131, v291, (_DWORD)v305, v294, (_DWORD)v303, v278);
                v228 = v227;
                if ( v227 )
                {
                  v229 = v342;
                  ++*(_DWORD *)(v227 + 8);
                  if ( v229 )
                    goto LABEL_315;
                  v342 = v227;
                  v231 = v328;
                  if ( !v328 )
                  {
LABEL_362:
                    ++*(_DWORD *)(v228 + 8);
                    goto LABEL_363;
                  }
LABEL_318:
                  v232 = *(_DWORD *)(v130 + 12);
                  v233 = (unsigned __int64)&v231[*((unsigned int *)v231 - 1)];
                  v234 = &v231[v232];
                  if ( (unsigned __int64)v234 < v233 )
                  {
                    do
                    {
                      v235 = *v234;
                      if ( *v234 )
                      {
                        v236 = v327;
                        v48 = (*(_DWORD *)(v235 + 8))-- == 1;
                        if ( v48 )
                        {
                          LODWORD(v290) = v232;
                          v292 = v234;
                          v295 = v233;
                          sub_15D7BC0(v236, v235);
                          v232 = (unsigned int)v290;
                          v234 = v292;
                          v233 = v295;
                        }
                      }
                      ++v234;
                    }
                    while ( (unsigned __int64)v234 < v233 );
                    v231 = v328;
                    v228 = v342;
                    if ( !v328 )
                    {
LABEL_361:
                      if ( v228 )
                        goto LABEL_362;
                      goto LABEL_381;
                    }
                  }
                  v237 = v342;
                  *((_DWORD *)v231 - 1) = v232;
                  if ( v237 )
                  {
                    ++*(_DWORD *)(v237 + 8);
                    v232 = *((_DWORD *)v231 - 1);
                  }
                  if ( *((_DWORD *)v231 - 2) == v232 )
                  {
                    v257 = (3 * v232 + 1) >> 1;
                    v258 = 8 * v257 + 8;
                    if ( 8 * v232 + 8 >= (unsigned int)v258 || v232 >= v257 )
                    {
                      v18 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)&v314, "Overflow encountered when expanding vector");
                      *v18 = (char *)off_1C63128;
                      sub_2333C0(v18 + 1, &v314);
                      sub_233E40((__int64)&v314);
                      __cxa_throw(
                        v18,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v293 = (3 * v232 + 1) >> 1;
                    v297 = v237;
                    v259 = (unsigned int *)sub_186B300(v231 - 1, v258);
                    v231 = v259 + 2;
                    v237 = v297;
                    v260 = v259[1];
                    v328 = v259 + 2;
                    *v259 = v293;
                    LODWORD(v259) = v260;
                    v238 = &v231[v260];
                    v239 = (_DWORD)v259 + 1;
                  }
                  else
                  {
                    v238 = &v231[*((unsigned int *)v231 - 1)];
                    v239 = *((_DWORD *)v231 - 1) + 1;
                  }
                }
                else
                {
                  v229 = v342;
                  if ( v342 )
                  {
LABEL_315:
                    v230 = v343;
                    v48 = (*(_DWORD *)(v229 + 8))-- == 1;
                    if ( v48 )
                    {
                      v298 = v227;
                      sub_15D7BC0(v230, v229);
                      v228 = v298;
                    }
                    v231 = v328;
                    v342 = v228;
                    if ( v328 )
                      goto LABEL_318;
                    goto LABEL_361;
                  }
                  v231 = v328;
                  v342 = 0;
                  if ( v328 )
                    goto LABEL_318;
LABEL_381:
                  v228 = 0;
LABEL_363:
                  v296 = v228;
                  v253 = (_QWORD *)sub_186B270(0x18u);
                  *v253 = 2;
                  v231 = v253 + 1;
                  v239 = 1;
                  v237 = v296;
                  v328 = v231;
                  v238 = v231;
                }
                *v238 = v237;
                *((_DWORD *)v231 - 1) = v239;
                if ( v337 )
                  *(v337 - 1) -= v311;
                if ( v348 )
                  *((_DWORD *)v348 - 1) -= v311;
                sub_15844D0(&v321);
                v240 = v342;
                if ( (*(_BYTE *)(v130 + 8) & 1) != 0 )
                {
                  sub_1584390(&v321, v131, 0, v342);
                  v240 = v342;
                }
                if ( v240 )
                {
                  v241 = v343;
                  v48 = (*(_DWORD *)(v240 + 8))-- == 1;
                  if ( v48 )
                    sub_15D7BC0(v241, v240);
                }
                v242 = v344;
                v342 = 0;
                if ( v344 && (v243 = v345, v48 = *(_DWORD *)(v344 + 8) == 1, --*(_DWORD *)(v344 + 8), v48) )
                {
                  sub_15D7BC0(v243, v242);
                  v244 = v342;
                }
                else
                {
                  v244 = 0;
                }
                v245 = v326;
                v344 = 0;
                v246 = *(_DWORD *)(v326 - 4);
                *(_DWORD *)(v326 - 4) = v246 - 1;
                if ( v131 != v244 && v246 != 1 )
                  *(_BYTE *)(v245 + 16LL * (unsigned int)(v246 - 2) + 8) |= 2u;
                if ( v303 )
                {
                  v247 = (__int64 *)v303;
                  v248 = (unsigned __int64)&v303[*((unsigned int *)v303 - 1)];
                  if ( (unsigned __int64)v303 < v248 )
                  {
                    do
                    {
                      v249 = *v247;
                      if ( *v247 )
                      {
                        v48 = (*(_DWORD *)(v249 + 8))-- == 1;
                        if ( v48 )
                          sub_15D7BC0(v284, v249);
                      }
                      ++v247;
                    }
                    while ( (unsigned __int64)v247 < v248 );
                  }
                  sub_186B220(v303 - 1);
                }
                if ( v305 )
                {
                  v250 = v305;
                  v251 = (unsigned __int64)&v305[*((unsigned int *)v305 - 1)];
                  if ( (unsigned __int64)v305 < v251 )
                  {
                    do
                    {
                      v252 = *v250;
                      if ( *v250 )
                      {
                        v48 = (*(_DWORD *)(v252 + 8))-- == 1;
                        if ( v48 )
                          sub_15D7BC0(v283, v252);
                      }
                      ++v250;
                    }
                    while ( (unsigned __int64)v250 < v251 );
                  }
                  sub_186B220(v305 - 1);
                }
                goto LABEL_166;
              }
              if ( (*(_BYTE *)(v130 + 8) & 1) == 0 )
                break;
              v116 = sub_1680FB0(v325, v131, 0);
              v120 = v116;
              if ( !v116 )
                goto LABEL_162;
              v121 = v328;
              ++*(_DWORD *)(v116 + 8);
              if ( v121 )
              {
                v122 = *((_DWORD *)v121 - 1);
                if ( v122 == *((_DWORD *)v121 - 2) )
                {
                  v264 = (3 * v122 + 1) >> 1;
                  v265 = 8 * v264 + 8;
                  if ( 8 * v122 + 8 >= (unsigned int)v265 || v122 >= v264 )
                  {
                    v15 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v314, "Overflow encountered when expanding vector");
                    *v15 = (char *)off_1C63128;
                    sub_2333C0(v15 + 1, &v314);
                    sub_233E40((__int64)&v314);
                    __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v307 = v120;
                  v266 = (unsigned int *)sub_186B300(v121 - 1, v265);
                  v267 = v266[1];
                  v121 = v266 + 2;
                  *v266 = v264;
                  v328 = v121;
                  v120 = v307;
                  LODWORD(v266) = v267;
                  v125 = &v121[v267];
                  v124 = (_DWORD)v266 + 1;
                }
                else
                {
                  v123 = v122;
                  v124 = v122 + 1;
                  v125 = &v121[v123];
                }
              }
              else
              {
                v308 = v116;
                v273 = (_QWORD *)sub_186B270(0x18u);
                *v273 = 2;
                v120 = v308;
                v124 = 1;
                v121 = v273 + 1;
                v328 = v121;
                v125 = v121;
              }
              *v125 = v120;
              *((_DWORD *)v121 - 1) = v124;
              v126 = v326;
              v127 = *(_DWORD *)(v326 - 4);
              *(_DWORD *)(v326 - 4) = v127 - 1;
              if ( v131 != v120 && v127 != 1 )
                *(_BYTE *)(v126 + 16LL * (unsigned int)(v127 - 2) + 8) |= 2u;
            }
            v148 = *(_WORD *)(v131 + 4);
            if ( v148 == 1 )
              goto LABEL_218;
            if ( v148 == 2 )
            {
              v311 = *(_DWORD *)(v131 + 20);
              goto LABEL_222;
            }
            if ( v148 )
              goto LABEL_165;
LABEL_214:
            sub_46A690(
              (unsigned int)&v321,
              v131,
              v130,
              v117,
              v118,
              v119,
              v275,
              (_DWORD)v276,
              (_DWORD)v277,
              v278,
              (_DWORD)v279,
              v283,
              v284,
              v287,
              (__int64)v290);
          }
LABEL_167:
          v133 = v328;
          v134 = 0xFFFFFFFFLL;
          if ( v328 )
            v134 = (unsigned int)(*((_DWORD *)v328 - 1) - 1);
          v43 = v328[v134];
          if ( v43 )
            ++*(_DWORD *)(v43 + 8);
          if ( v42 )
          {
            v48 = (*(_DWORD *)(v42 + 8))-- == 1;
            if ( v48 )
            {
              sub_15D7BC0(v309, v42);
              v133 = v328;
            }
          }
          v135 = *((_DWORD *)v133 - 1) - 1;
          v114 = v133[v135];
          *((_DWORD *)v133 - 1) = v135;
          if ( !v114 )
            goto LABEL_47;
          v115 = v327;
          v48 = (*(_DWORD *)(v114 + 8))-- == 1;
          if ( !v48 )
            goto LABEL_47;
        }
        sub_15D7BC0(v115, v114);
LABEL_47:
        v42 = v43;
        goto LABEL_48;
      }
      if ( !BYTE1(v323) )
      {
LABEL_42:
        if ( v43 )
          ++*(_DWORD *)(v43 + 8);
        if ( v42 )
        {
          v48 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v48 )
            sub_15D7BC0(v309, v42);
        }
        goto LABEL_47;
      }
      sub_1584740(&v321);
      if ( v337 )
        *(v337 - 1) = 0;
      if ( v348 )
        *((_DWORD *)v348 - 1) = 0;
      sub_1584740(v338);
      sub_1584740(v340);
      v3 = __cxa_allocate_exception(0x28u);
      v4 = (const char *)sub_1829130(*(_QWORD *)v322);
      v5 = v4;
      v314 = dest;
      if ( !v4 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v6 = strlen(v4);
      v7 = v6;
      if ( v6 > 0xF )
      {
        v314 = (_QWORD *)operator new(v6 + 1);
        v8 = v314;
        dest[0] = v7;
      }
      else
      {
        if ( v6 == 1 )
        {
          LOBYTE(dest[0]) = *v5;
LABEL_409:
          v315 = v7;
          *((_BYTE *)v314 + v7) = 0;
          v9 = v314;
          v10 = v315;
          *v3 = off_1C63128;
          v3[1] = v3 + 3;
          if ( v9 == dest )
          {
            qmemcpy(v3 + 3, dest, (unsigned int)(v10 + 1));
          }
          else
          {
            v11 = dest[0];
            v3[1] = v9;
            v3[3] = v11;
          }
          v3[2] = v10;
          *v3 = off_1C650D8;
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
        }
        if ( !v6 )
          goto LABEL_409;
        v8 = dest;
      }
      memcpy(v8, v5, v7);
      goto LABEL_409;
    }
    if ( v344 )
    {
      v48 = (*(_DWORD *)(v344 + 8))-- == 1;
      if ( v48 )
        sub_15D7BC0(v54, v53);
    }
    v344 = 0;
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v322) )
    {
      if ( !BYTE1(v323) )
        goto LABEL_42;
      sub_1584740(&v321);
      if ( v337 )
        *(v337 - 1) = 0;
      if ( v348 )
        *((_DWORD *)v348 - 1) = 0;
      sub_1584740(v338);
      sub_1584740(v340);
      v24 = __cxa_allocate_exception(0x28u);
      v25 = (const char *)sub_1829130(*(_QWORD *)v322);
      v26 = v25;
      v314 = dest;
      if ( !v25 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v27 = strlen(v25);
      v28 = v27;
      if ( v27 > 0xF )
      {
        v314 = (_QWORD *)operator new(v27 + 1);
        v29 = v314;
        dest[0] = v28;
      }
      else
      {
        if ( v27 == 1 )
        {
          LOBYTE(dest[0]) = *v26;
LABEL_430:
          v315 = v28;
          *((_BYTE *)v314 + v28) = 0;
          v30 = v314;
          v31 = v315;
          *v24 = off_1C63128;
          v24[1] = v24 + 3;
          if ( v30 == dest )
          {
            qmemcpy(v24 + 3, dest, (unsigned int)(v31 + 1));
          }
          else
          {
            v32 = dest[0];
            v24[1] = v30;
            v24[3] = v32;
          }
          v24[2] = v31;
          *v24 = off_1C650D8;
          __cxa_throw(v24, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
        }
        if ( !v27 )
          goto LABEL_430;
        v29 = dest;
      }
      memcpy(v29, v26, v28);
      goto LABEL_430;
    }
    v332 = v43;
    v333 = 0;
    v336 = 0;
    if ( !(unsigned __int8)sub_46B680(&v321, v43, 3) )
    {
LABEL_111:
      v88 = v326;
      if ( v326 )
      {
        while ( *(_DWORD *)(v88 - 4) )
        {
          if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v322) && BYTE1(v323) )
          {
            sub_4692C0((__int64)&v321);
            v22 = (char **)__cxa_allocate_exception(0x28u);
            v23 = (const char *)sub_1829130(*(_QWORD *)v322);
            sub_24ABB0((__int64 *)&v314, v23);
            *v22 = (char *)off_1C63128;
            sub_2333C0(v22 + 1, &v314);
            *v22 = (char *)off_1C650D8;
            sub_233E40((__int64)&v314);
            __cxa_throw(v22, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
          }
          v90 = 0xFFFFFFFF0LL;
          if ( v326 )
            v90 = 16LL * (unsigned int)(*(_DWORD *)(v326 - 4) - 1);
          v91 = v90 + v326;
          v92 = *(_QWORD *)(v90 + v326);
          ++v336;
          if ( (*(_DWORD *)(v90 + v326 + 8) & 0xFFFFFFCC) != 0
            || (*(_BYTE *)(v91 + 8) & 1) == 0
            || (v73 = sub_1680FB0(v325, v92, 0), (v74 = v73) == 0) )
          {
            v93 = *(_WORD *)(v92 + 4);
            if ( v93 == 1 )
            {
              --*(_DWORD *)(v326 - 4);
              sub_469A30(&v321, v92);
            }
            else if ( v93 == 2 )
            {
              sub_46D320((__int64)&v321, v92, v91);
            }
            else
            {
              if ( v93 )
              {
                sub_1872CE0("");
                sub_1873130(114, 793);
              }
              sub_46C1B0(&v321, v92, v91);
            }
            goto LABEL_111;
          }
          v75 = v328;
          ++*(_DWORD *)(v73 + 8);
          if ( v75 )
          {
            v76 = *((_DWORD *)v75 - 1);
            if ( v76 == *((_DWORD *)v75 - 2) )
            {
              v268 = (3 * v76 + 1) >> 1;
              v269 = 8 * v268 + 8;
              if ( 8 * v76 + 8 >= (unsigned int)v269 || v76 >= v268 )
              {
                v12 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v314, "Overflow encountered when expanding vector");
                *v12 = (char *)off_1C63128;
                sub_2333C0(v12 + 1, &v314);
                sub_233E40((__int64)&v314);
                __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v270 = (unsigned int *)sub_186B300(v75 - 1, v269);
              v271 = v270[1];
              v75 = v270 + 2;
              *v270 = v268;
              v328 = v75;
              LODWORD(v270) = v271;
              v79 = &v75[v271];
              v78 = (_DWORD)v270 + 1;
            }
            else
            {
              v77 = v76;
              v78 = v76 + 1;
              v79 = &v75[v77];
            }
          }
          else
          {
            v272 = (_QWORD *)sub_186B270(0x18u);
            *v272 = 2;
            v78 = 1;
            v75 = v272 + 1;
            v328 = v75;
            v79 = v75;
          }
          *v79 = v74;
          v80 = v329;
          *((_DWORD *)v75 - 1) = v78;
          v81 = sub_1680FB0(v80, v92, 0);
          v82 = v81;
          if ( v81 )
            ++*(_DWORD *)(v81 + 8);
          v83 = v331;
          if ( v331 )
          {
            v84 = *((_DWORD *)v331 - 1);
            if ( v84 == *((_DWORD *)v331 - 2) )
            {
              v262 = (3 * v84 + 1) >> 1;
              if ( 8 * v84 + 8 >= 8 * v262 + 8 || v84 >= v262 )
              {
                v21 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v314, "Overflow encountered when expanding vector");
                *v21 = (char *)off_1C63128;
                sub_2333C0(v21 + 1, &v314);
                sub_233E40((__int64)&v314);
                __cxa_throw(v21, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v306 = (3 * v84 + 1) >> 1;
              v263 = (unsigned int *)sub_186B300(v331 - 1, 8 * v262 + 8);
              v83 = v263 + 2;
              v331 = v263 + 2;
              *v263 = v306;
              LODWORD(v263) = v263[1];
              v87 = &v83[(unsigned int)v263];
              v86 = (_DWORD)v263 + 1;
            }
            else
            {
              v85 = v84;
              v86 = v84 + 1;
              v87 = &v331[v85];
            }
          }
          else
          {
            v274 = (_QWORD *)sub_186B270(0x18u);
            *v274 = 2;
            v86 = 1;
            v83 = v274 + 1;
            v331 = v83;
            v87 = v83;
          }
          *v87 = v82;
          *((_DWORD *)v83 - 1) = v86;
          v88 = v326;
          v89 = *(_DWORD *)(v326 - 4);
          *(_DWORD *)(v326 - 4) = v89 - 1;
          if ( v92 != v74 && v89 != 1 )
            *(_BYTE *)(v88 + 16LL * (unsigned int)(v89 - 2) + 8) |= 2u;
        }
      }
      v94 = v328;
      v95 = 0xFFFFFFFFLL;
      if ( v328 )
        v95 = (unsigned int)(*((_DWORD *)v328 - 1) - 1);
      v43 = v328[v95];
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      if ( v42 )
      {
        v48 = (*(_DWORD *)(v42 + 8))-- == 1;
        if ( v48 )
        {
          sub_15D7BC0(v309, v42);
          v94 = v328;
        }
      }
      v96 = *((_DWORD *)v94 - 1) - 1;
      v97 = v94[v96];
      *((_DWORD *)v94 - 1) = v96;
      if ( v97 )
      {
        v98 = v327;
        v48 = (*(_DWORD *)(v97 + 8))-- == 1;
        if ( v48 )
          sub_15D7BC0(v98, v97);
      }
      v99 = v331;
      v100 = 0xFFFFFFFFLL;
      if ( v331 )
        v100 = (unsigned int)(*((_DWORD *)v331 - 1) - 1);
      v101 = v331[v100];
      if ( v101 )
        ++*(_DWORD *)(v101 + 8);
      v102 = v344;
      if ( v344 )
      {
        v103 = v345;
        v48 = (*(_DWORD *)(v344 + 8))-- == 1;
        if ( v48 )
        {
          sub_15D7BC0(v103, v102);
          v99 = v331;
        }
      }
      v104 = *((_DWORD *)v99 - 1);
      v344 = v101;
      v105 = v99[v104 - 1];
      *((_DWORD *)v99 - 1) = v104 - 1;
      if ( v105 )
      {
        v106 = v330;
        v48 = (*(_DWORD *)(v105 + 8))-- == 1;
        if ( v48 )
        {
          sub_15D7BC0(v106, v105);
          v101 = v344;
        }
      }
      if ( !v101 )
      {
        v107 = sub_15DE1B0(v322[0]);
        v108 = v107;
        if ( v107 )
          ++*(_DWORD *)(v107 + 8);
        v109 = v344;
        if ( v344 )
        {
          v110 = v345;
          v48 = (*(_DWORD *)(v344 + 8))-- == 1;
          if ( v48 )
            sub_15D7BC0(v110, v109);
        }
        v344 = v108;
      }
      goto LABEL_47;
    }
    v58 = v328;
    v59 = 0xFFFFFFFFLL;
    if ( v328 )
      v59 = (unsigned int)(*((_DWORD *)v328 - 1) - 1);
    v60 = v328[v59];
    if ( v60 )
      ++*(_DWORD *)(v60 + 8);
    if ( v42 )
    {
      v48 = (*(_DWORD *)(v42 + 8))-- == 1;
      if ( v48 )
      {
        sub_15D7BC0(v309, v42);
        v58 = v328;
      }
    }
    v61 = *((_DWORD *)v58 - 1) - 1;
    v62 = v58[v61];
    *((_DWORD *)v58 - 1) = v61;
    if ( v62 )
    {
      v63 = v327;
      v48 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v48 )
        sub_15D7BC0(v63, v62);
    }
    v64 = v331;
    v65 = 0xFFFFFFFFLL;
    if ( v331 )
      v65 = (unsigned int)(*((_DWORD *)v331 - 1) - 1);
    v66 = v331[v65];
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    v67 = v344;
    if ( v344 && (v68 = v345, v48 = *(_DWORD *)(v344 + 8) == 1, --*(_DWORD *)(v344 + 8), v48) )
    {
      sub_15D7BC0(v68, v67);
      v64 = v331;
      v344 = v66;
      v70 = *((_DWORD *)v331 - 1) - 1;
    }
    else
    {
      v69 = *((_DWORD *)v64 - 1);
      v344 = v66;
      v70 = v69 - 1;
    }
    v71 = v64[v70];
    *((_DWORD *)v64 - 1) = v70;
    if ( v71 && (v72 = v330, v48 = *(_DWORD *)(v71 + 8) == 1, --*(_DWORD *)(v71 + 8), v48) )
    {
      sub_15D7BC0(v72, v71);
      if ( !v344 )
      {
LABEL_200:
        v144 = sub_15DE1B0(v322[0]);
        v145 = v144;
        if ( v144 )
          ++*(_DWORD *)(v144 + 8);
        v146 = v344;
        if ( v344 )
        {
          v147 = v345;
          v48 = (*(_DWORD *)(v344 + 8))-- == 1;
          if ( v48 )
            sub_15D7BC0(v147, v146);
        }
        v344 = v145;
      }
    }
    else if ( !v66 )
    {
      goto LABEL_200;
    }
    v42 = v60;
LABEL_48:
    v55 = (__int64 *)(a2[1] + v313);
    v56 = *v55;
    v57 = *a2;
    v312 |= v42 != *v55;
    if ( v42 )
      ++*(_DWORD *)(v42 + 8);
    if ( v56 )
    {
      v48 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v48 )
        sub_15D7BC0(v57, v56);
    }
    v313 += 8;
    *v55 = v42;
    if ( v310 == v313 )
      break;
    v40 = a2[1];
  }
  if ( v42 )
  {
    v48 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v309, v42);
  }
  v321 = &off_1C4EAD0;
  if ( v348 )
    sub_186B220(v348 - 1);
LABEL_182:
  v136 = v346;
  if ( v346 )
  {
    v137 = v347;
    v48 = (*(_DWORD *)(v346 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v137, v136);
  }
  v138 = v344;
  if ( v344 )
  {
    v139 = v345;
    v48 = (*(_DWORD *)(v344 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v139, v138);
  }
  v140 = v342;
  if ( v342 )
  {
    v141 = v343;
    v48 = (*(_DWORD *)(v342 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v141, v140);
  }
  v340[0] = &qword_1C637E8;
  sub_15841B0(v340);
  v338[0] = &qword_1C637E8;
  sub_15841B0(v338);
  if ( v337 )
    sub_186B220(v337 - 2);
  sub_15841B0(&v321);
  v142 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v319);
  sub_182CBA0(v142, v320);
  return v312;
}

