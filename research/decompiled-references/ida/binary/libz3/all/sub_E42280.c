void __fastcall sub_E42280(pthread_mutex_t *a1, char *a2, __m128i a3)
{
  __int64 v3; // r15
  __int64 *v4; // r12
  __int64 *v5; // rax
  bool v6; // zf
  char **v7; // rdi
  char **v8; // rbx
  unsigned __int64 v9; // rbp
  char *v10; // rsi
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // r13
  __int64 *v14; // rbp
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rbx
  __int64 *v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // r13
  __int64 *v25; // rbp
  __int64 *v26; // rbx
  __int64 *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbx
  __int64 *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 *v35; // r13
  __int64 *v36; // rbx
  char **v37; // rbp
  char **v38; // r14
  char **v39; // rbp
  char **v40; // r14
  __int64 v41; // rdx
  int v42; // eax
  __int64 *v43; // rbp
  _QWORD *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rsi
  unsigned int v47; // r14d
  std::ios_base *v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // edx
  unsigned int v51; // edx
  __int64 v52; // rax
  unsigned int v53; // r14d
  std::ios_base *v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // edx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 *v60; // rbp
  __int64 v61; // rax
  __int64 *v62; // r14
  unsigned int v63; // ebp
  size_t v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r13
  pthread_mutex_t *v67; // rsi
  __int64 *v68; // rcx
  __int64 v69; // rdi
  int v70; // r10d
  __int64 *v71; // rax
  __int64 *v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // r13
  __int64 *v77; // r13
  __int64 *v78; // rbx
  __int64 *v79; // rbp
  __int64 *v80; // r12
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 *v83; // rbp
  __int64 *v84; // r12
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 *v87; // rsi
  __int64 *v88; // rbp
  char **v89; // r13
  __int64 v90; // rax
  __int64 *v91; // r13
  pthread_mutex_t *v92; // rbx
  int v93; // eax
  _QWORD *v94; // rdx
  unsigned int v95; // eax
  __int64 v96; // rcx
  int v97; // eax
  __int64 **v98; // rcx
  char **v99; // r14
  char **v100; // r13
  unsigned int v101; // ebp
  char *v102; // r13
  _QWORD *v103; // rdx
  unsigned int v104; // eax
  __int64 v105; // rcx
  int v106; // eax
  char **v107; // rcx
  char **v108; // r13
  unsigned __int64 v109; // r14
  __int64 *v110; // rdi
  __int64 v111; // rcx
  unsigned int v112; // r14d
  __int64 v113; // r13
  char *v114; // rdx
  unsigned int v115; // eax
  __int64 v116; // rsi
  int v117; // eax
  __int64 v118; // rdi
  __int64 *v119; // r14
  __int64 *v120; // rbx
  double v121; // xmm0_8
  int v122; // r13d
  unsigned int v123; // ebp
  int v124; // eax
  int v125; // eax
  int v126; // eax
  __int64 v127; // rdx
  int v128; // eax
  __int64 v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rdi
  __int64 v132; // rdx
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rsi
  _QWORD *v136; // rdi
  unsigned int v137; // r8d
  unsigned int *v138; // rcx
  unsigned int v139; // eax
  __int64 v140; // r9
  int v141; // eax
  unsigned int **v142; // r9
  __int64 v143; // rax
  _QWORD *v144; // rdi
  unsigned int v145; // r8d
  unsigned int *v146; // rcx
  unsigned int v147; // eax
  __int64 v148; // r9
  int v149; // eax
  unsigned int **v150; // r9
  unsigned int v151; // eax
  unsigned int v152; // r9d
  size_t v153; // rsi
  _DWORD *v154; // rax
  __int64 v155; // rsi
  int v156; // r9d
  unsigned int v157; // r9d
  size_t v158; // rsi
  _DWORD *v159; // rax
  __int64 v160; // rsi
  int v161; // r9d
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  __int64 v164; // rbp
  char **v165; // r13
  char **v166; // r14
  __int64 v167; // rdi
  char **v168; // r14
  __int64 v169; // rdi
  unsigned int v170; // r9d
  size_t v171; // rsi
  _DWORD *v172; // rdx
  unsigned int v173; // r9d
  size_t v174; // rsi
  _DWORD *v175; // rdx
  __int64 v176; // rdi
  unsigned int v177; // r14d
  unsigned int v178; // ecx
  unsigned int *v179; // rax
  __int64 v180; // rcx
  unsigned int v181; // ebp
  unsigned int v182; // ecx
  unsigned int *v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rdi
  unsigned int v186; // r14d
  unsigned int v187; // ecx
  unsigned int *v188; // rax
  pthread_mutex_t *v189; // rcx
  __int64 v190; // rax
  __int64 *v191; // rbp
  __int64 *v192; // rbx
  char **v193; // r12
  char **v194; // r14
  char **v195; // r12
  char **v196; // r14
  pthread_mutex_t *v197; // r13
  int v198; // edi
  int v199; // r13d
  pthread_mutex_t *v200; // rbp
  void *v201; // rdi
  int v202; // edx
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 *v205; // rbp
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  std::ios_base *v209; // rbp
  unsigned int v210; // eax
  int v211; // eax
  int v212; // ebp
  int v213; // eax
  __int64 v214; // rdi
  pthread_mutex_t *v215; // rdx
  int v216; // eax
  pthread_mutex_t *v217; // rcx
  unsigned int v218; // ebp
  int v219; // ecx
  pthread_mutex_t *v220; // rdx
  int v221; // eax
  __int64 *v222; // rbp
  pthread_mutex_t *v223; // rdi
  __int64 v224; // rax
  pthread_mutex_t *v225; // rbx
  char **prev; // rbp
  char **v227; // r12
  __int64 v228; // rdi
  char **v229; // rbp
  char **v230; // r12
  __int64 align; // rdi
  __int64 v232; // rdi
  char **v233; // rsi
  unsigned int v234; // ebp
  __int64 v235; // rcx
  unsigned int v236; // eax
  __int64 v237; // rdx
  int v238; // eax
  pthread_mutex_t **v239; // rdx
  __int64 v240; // rdx
  __int64 *v241; // rbp
  unsigned __int32 i; // ecx
  __int64 v243; // r8
  unsigned int v244; // eax
  __m128i v245; // xmm1
  unsigned int v246; // eax
  __int64 *v247; // rcx
  __m128 *v248; // rdx
  __int64 v249; // rax
  __m128i si128; // xmm0
  pthread_mutex_t *v251; // rdi
  int v252; // r13d
  __int64 v253; // rdi
  _QWORD *v254; // rdx
  _QWORD *v255; // rdx
  int v256; // r13d
  unsigned int v257; // edx
  size_t v258; // rsi
  __int64 v259; // rax
  _DWORD *v260; // rcx
  unsigned int v261; // edx
  size_t v262; // rsi
  _DWORD *v263; // rax
  __int64 v264; // rsi
  __int64 v265; // r8
  __int32 v266; // ecx
  __int64 *v267; // rsi
  int v268; // eax
  _QWORD *v269; // rax
  __int64 v270; // rsi
  pthread_mutex_t *v271; // r15
  int v272; // edi
  _QWORD *v273; // rdx
  _QWORD *v274; // rax
  int v275; // r13d
  pthread_mutex_t *v276; // r14
  unsigned int v277; // eax
  pthread_mutex_t *v278; // r14
  __int64 v279; // rdi
  const char *v280; // rsi
  __int64 v281; // rdi
  pthread_mutex_t *v282; // r14
  __int64 v283; // rbp
  pthread_mutex_t *v284; // r14
  __int64 v285; // rdi
  const char *v286; // rsi
  pthread_mutex_t *v287; // r14
  __int64 v288; // rbp
  char **v289; // r14
  __int64 v290; // rdx
  char **v291; // rbp
  __int64 v292; // rdx
  char **exception; // r14
  __int64 v294; // rdx
  char **v295; // r14
  __int64 v296; // rdx
  char **v297; // r14
  __int64 v298; // rdx
  char **v299; // r14
  __int64 v300; // rdx
  char **v301; // r15
  __int64 v302; // rdx
  char **v303; // r15
  __int64 v304; // rdx
  char **v305; // r14
  __int64 v306; // rdx
  char **v307; // r15
  __int64 v308; // rdx
  pthread_mutex_t **v309; // [rsp+0h] [rbp-138h]
  int v310; // [rsp+0h] [rbp-138h]
  char *ptr; // [rsp+8h] [rbp-130h]
  void *ptra; // [rsp+8h] [rbp-130h]
  int ptrb; // [rsp+8h] [rbp-130h]
  std::ios_base *v314; // [rsp+10h] [rbp-128h]
  std::ios_base *v315; // [rsp+10h] [rbp-128h]
  unsigned int *v316; // [rsp+18h] [rbp-120h]
  __int64 *v317; // [rsp+18h] [rbp-120h]
  pthread_mutex_t **v318; // [rsp+20h] [rbp-118h] BYREF
  __int64 *v319; // [rsp+28h] [rbp-110h]
  pthread_mutex_t *v320; // [rsp+30h] [rbp-108h]
  __int64 *v321; // [rsp+38h] [rbp-100h]
  pthread_mutex_t *v322; // [rsp+40h] [rbp-F8h]
  _QWORD *v323; // [rsp+48h] [rbp-F0h]
  __int64 *v324; // [rsp+50h] [rbp-E8h]
  __int64 *v325; // [rsp+58h] [rbp-E0h]
  __m128i v326; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v327; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v328; // [rsp+80h] [rbp-B8h] BYREF
  __int64 *v329; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v330; // [rsp+98h] [rbp-A0h] BYREF
  __int64 *v331; // [rsp+A0h] [rbp-98h] BYREF
  char **v332; // [rsp+A8h] [rbp-90h]
  __int64 v333; // [rsp+B0h] [rbp-88h] BYREF
  int v334[2]; // [rsp+B8h] [rbp-80h]
  __int64 *v335; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v336; // [rsp+C8h] [rbp-70h]
  __int64 v337; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v338; // [rsp+D8h] [rbp-60h]
  pthread_mutex_t *v339; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v340; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v341; // [rsp+F0h] [rbp-48h] BYREF
  int v342; // [rsp+F8h] [rbp-40h]
  int v343; // [rsp+100h] [rbp-38h]
  char v344; // [rsp+108h] [rbp-30h]

  v3 = (__int64)a2;
  v4 = nullptr;
  v320 = a1;
  v5 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 7) + 72LL))(*((_QWORD *)a2 + 7));
  v6 = a2[80] == 0;
  v332 = nullptr;
  v324 = v5;
  v331 = v5;
  v321 = nullptr;
  if ( !v6 )
  {
LABEL_4:
    v320[6].__size[20] = 1;
    goto LABEL_5;
  }
  v309 = &v339;
LABEL_3:
  v7 = (char **)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 56) + 72LL))(*(_QWORD *)(v3 + 56));
  if ( !(unsigned __int8)sub_18290A0(v7) )
    goto LABEL_4;
  if ( v4 )
  {
    v34 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v34 )
    {
      v35 = v4;
      v36 = &v4[4 * v34];
      do
      {
        v37 = (char **)v35[3];
        if ( v37 )
        {
          v38 = &v37[*((unsigned int *)v37 - 1)];
          if ( v37 >= v38 )
            goto LABEL_72;
          do
          {
            while ( 1 )
            {
              a2 = *v37;
              if ( *v37 )
              {
                v7 = (char **)v35[2];
                v6 = (*((_DWORD *)a2 + 2))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v37 >= v38 )
                goto LABEL_71;
            }
            sub_15D7BC0(v7, a2);
            ++v37;
          }
          while ( v37 < v38 );
LABEL_71:
          v37 = (char **)v35[3];
          if ( v37 )
          {
LABEL_72:
            v7 = v37 - 1;
            sub_186B220(v37 - 1);
          }
        }
        v39 = (char **)v35[1];
        if ( v39 )
        {
          v40 = &v39[*((unsigned int *)v39 - 1)];
          if ( v39 >= v40 )
            goto LABEL_81;
          do
          {
            while ( 1 )
            {
              a2 = *v39;
              if ( *v39 )
              {
                v7 = (char **)*v35;
                v6 = (*((_DWORD *)a2 + 2))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v39 >= v40 )
                goto LABEL_80;
            }
            sub_15D7BC0(v7, a2);
            ++v39;
          }
          while ( v39 < v40 );
LABEL_80:
          v39 = (char **)v35[1];
          if ( v39 )
          {
LABEL_81:
            v7 = v39 - 1;
            sub_186B220(v39 - 1);
          }
        }
        v35 += 4;
      }
      while ( v35 != v36 );
    }
    *((_DWORD *)v4 - 1) = 0;
  }
  v41 = *(_QWORD *)(v3 + 8);
  if ( v41 )
  {
    v42 = *(_DWORD *)(v41 - 4);
    if ( v42 )
    {
      v43 = (__int64 *)(v41 + 32LL * (unsigned int)(v42 - 1));
      ptr = (char *)sub_186B270(0x48u);
      v44 = ptr + 8;
      *(_QWORD *)ptr = 2;
      v45 = *v43;
      *((_QWORD *)ptr + 2) = 0;
      v46 = v43[1];
      *((_QWORD *)ptr + 1) = v45;
      if ( v46 )
      {
        v47 = 0;
        v318 = &v339;
        do
        {
          if ( v47 >= *(_DWORD *)(v46 - 4) )
            break;
          v48 = *(std::ios_base **)(v46 + 8LL * v47);
          if ( v48 )
            ++*((_DWORD *)v48 + 2);
          v49 = *((_QWORD *)ptr + 2);
          if ( v49 )
          {
            v50 = *(_DWORD *)(v49 - 8);
            if ( *(_DWORD *)(v49 - 4) == v50 )
            {
              v173 = (3 * v50 + 1) >> 1;
              v174 = 8 * v173 + 8;
              if ( 8 * v50 + 8 >= (unsigned int)v174 || v50 >= v173 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v294);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v339);
                sub_233E40((__int64)&v339);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v316) = (3 * v50 + 1) >> 1;
              v314 = v48;
              v175 = (_DWORD *)sub_186B300((void *)(v49 - 8), v174);
              v49 = (__int64)(v175 + 2);
              *((_QWORD *)ptr + 2) = v175 + 2;
              v48 = v314;
              *v175 = (_DWORD)v316;
              v46 = v43[1];
            }
          }
          else
          {
            v314 = v48;
            v49 = sub_186B270(0x18u) + 8;
            v48 = v314;
            *(_QWORD *)(v49 - 8) = 2;
            *((_QWORD *)ptr + 2) = v49;
            v46 = v43[1];
          }
          ++v47;
          v51 = *(_DWORD *)(v49 - 4);
          *(_QWORD *)(v49 + 8LL * v51) = v48;
          *(_DWORD *)(v49 - 4) = v51 + 1;
        }
        while ( v46 );
      }
      v52 = v43[2];
      *((_QWORD *)ptr + 4) = 0;
      a2 = (char *)v43[3];
      *((_QWORD *)ptr + 3) = v52;
      if ( a2 )
      {
        v53 = 0;
        v318 = &v339;
        do
        {
          if ( v53 >= *((_DWORD *)a2 - 1) )
            break;
          v54 = *(std::ios_base **)&a2[8 * v53];
          if ( v54 )
            ++*((_DWORD *)v54 + 2);
          v55 = *((_QWORD *)ptr + 4);
          if ( v55 )
          {
            v56 = *(_DWORD *)(v55 - 8);
            if ( *(_DWORD *)(v55 - 4) == v56 )
            {
              v170 = (3 * v56 + 1) >> 1;
              v171 = 8 * v170 + 8;
              if ( 8 * v56 + 8 >= (unsigned int)v171 || v56 >= v170 )
              {
                v301 = (char **)__cxa_allocate_exception(0x28u);
                sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v302);
                *v301 = (char *)off_1C63128;
                sub_2333C0(v301 + 1, &v339);
                sub_233E40((__int64)&v339);
                __cxa_throw(v301, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v316) = (3 * v56 + 1) >> 1;
              v314 = v54;
              v172 = (_DWORD *)sub_186B300((void *)(v55 - 8), v171);
              v55 = (__int64)(v172 + 2);
              *((_QWORD *)ptr + 4) = v172 + 2;
              v54 = v314;
              *v172 = (_DWORD)v316;
              a2 = (char *)v43[3];
            }
          }
          else
          {
            v314 = v54;
            v55 = sub_186B270(0x18u) + 8;
            v54 = v314;
            *(_QWORD *)(v55 - 8) = 2;
            *((_QWORD *)ptr + 4) = v55;
            a2 = (char *)v43[3];
          }
          ++v53;
          v57 = *(_DWORD *)(v55 - 4);
          *(_QWORD *)(v55 + 8LL * v57) = v54;
          *(_DWORD *)(v55 - 4) = v57 + 1;
        }
        while ( a2 );
      }
      v58 = 0x1FFFFFFFE0LL;
      ++*((_DWORD *)ptr + 1);
      v59 = *(_QWORD *)(v3 + 8);
      if ( v59 )
        v58 = 32LL * (unsigned int)(*(_DWORD *)(v59 - 4) - 1);
      v60 = (__int64 *)(v59 + v58);
      sub_2334C0((__int64 *)(v59 + v58 + 16));
      sub_2334C0(v60);
      --*(_DWORD *)(*(_QWORD *)(v3 + 8) - 4LL);
      if ( *((_DWORD *)ptr + 1) )
      {
        if ( v4 )
        {
          LODWORD(v314) = 0;
          v61 = *((unsigned int *)v4 - 1);
          v62 = (__int64 *)(ptr + 8);
          if ( (_DWORD)v61 != *((_DWORD *)v4 - 2) )
            goto LABEL_233;
LABEL_107:
          v63 = (unsigned int)(3 * v61 + 1) >> 1;
          v64 = 32 * v63 + 8;
          if ( 32 * (int)v61 + 8 >= (unsigned int)v64 || (unsigned int)v61 >= v63 )
          {
            v299 = (char **)__cxa_allocate_exception(0x28u);
            sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v300);
            *v299 = (char *)off_1C63128;
            sub_2333C0(v299 + 1, &v339);
            sub_233E40((__int64)&v339);
            __cxa_throw(v299, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = sub_186B270(v64);
          v66 = *((unsigned int *)v4 - 1);
          v67 = (pthread_mutex_t *)(v65 + 8);
          v68 = (__int64 *)v65;
          v69 = v65 + 8;
          *(_DWORD *)(v65 + 4) = v66;
          v70 = v66;
          v71 = v4;
          v72 = &v4[4 * v66];
          if ( v72 != v4 )
          {
            do
            {
              v73 = *v71;
              v71 += 4;
              v69 += 32;
              *(_QWORD *)(v69 - 32) = v73;
              v74 = *(v71 - 3);
              *(v71 - 3) = 0;
              *(_QWORD *)(v69 - 24) = v74;
              *(_QWORD *)(v69 - 16) = *(v71 - 2);
              v75 = *(v71 - 1);
              *(v71 - 1) = 0;
              *(_QWORD *)(v69 - 8) = v75;
            }
            while ( v72 != v71 );
          }
          v76 = 4 * v66;
          if ( v70 )
          {
            v317 = v4;
            v77 = &v4[v76];
            LODWORD(v318) = v63;
            v319 = v68;
            v322 = v67;
            v323 = v44;
            v78 = v4;
            do
            {
              v79 = (__int64 *)v78[3];
              if ( v79 )
              {
                v80 = &v79[*((unsigned int *)v79 - 1)];
                if ( v79 >= v80 )
                  goto LABEL_121;
                do
                {
                  while ( 1 )
                  {
                    v81 = *v79;
                    if ( *v79 )
                    {
                      v82 = v78[2];
                      v6 = (*(_DWORD *)(v81 + 8))-- == 1;
                      if ( v6 )
                        break;
                    }
                    if ( ++v79 >= v80 )
                      goto LABEL_120;
                  }
                  sub_15D7BC0(v82, v81);
                  ++v79;
                }
                while ( v79 < v80 );
LABEL_120:
                v79 = (__int64 *)v78[3];
                if ( v79 )
LABEL_121:
                  sub_186B220(v79 - 1);
              }
              v83 = (__int64 *)v78[1];
              if ( v83 )
              {
                v84 = &v83[*((unsigned int *)v83 - 1)];
                if ( v83 >= v84 )
                  goto LABEL_130;
                do
                {
                  while ( 1 )
                  {
                    v85 = *v83;
                    if ( *v83 )
                    {
                      v86 = *v78;
                      v6 = (*(_DWORD *)(v85 + 8))-- == 1;
                      if ( v6 )
                        break;
                    }
                    if ( ++v83 >= v84 )
                      goto LABEL_129;
                  }
                  sub_15D7BC0(v86, v85);
                  ++v83;
                }
                while ( v83 < v84 );
LABEL_129:
                v83 = (__int64 *)v78[1];
                if ( v83 )
LABEL_130:
                  sub_186B220(v83 - 1);
              }
              v78 += 4;
            }
            while ( v78 != v77 );
            v4 = v317;
            v63 = (unsigned int)v318;
            v68 = v319;
            v67 = v322;
            v44 = v323;
          }
          v318 = (pthread_mutex_t **)v67;
          v316 = (unsigned int *)v68;
          sub_186B220(v4 - 1);
          v87 = (__int64 *)v318;
          *v316 = v63;
          v4 = v87;
          v88 = &v87[4 * v316[1]];
          goto LABEL_213;
        }
        v133 = (_QWORD *)sub_186B270(0x48u);
        LODWORD(v314) = 0;
        v4 = v133 + 1;
        v62 = (__int64 *)(ptr + 8);
        v88 = v133 + 1;
        *v133 = 2;
        while ( 1 )
        {
LABEL_213:
          v134 = *v62;
          v135 = v62[1];
          v88[1] = 0;
          *v88 = v134;
          if ( v135 )
          {
            v136 = nullptr;
            v137 = 0;
            do
            {
              if ( v137 >= *(_DWORD *)(v135 - 4) )
                break;
              v138 = *(unsigned int **)(v135 + 8LL * v137);
              if ( v138 )
                ++v138[2];
              if ( v136 )
              {
                v139 = *((_DWORD *)v136 - 1);
                if ( v139 == *((_DWORD *)v136 - 2) )
                {
                  v157 = (3 * v139 + 1) >> 1;
                  v158 = 8 * v157 + 8;
                  if ( 8 * v139 + 8 >= (unsigned int)v158 || v139 >= v157 )
                  {
                    v307 = (char **)__cxa_allocate_exception(0x28u);
                    sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v308);
                    *v307 = (char *)off_1C63128;
                    sub_2333C0(v307 + 1, &v339);
                    sub_233E40((__int64)&v339);
                    __cxa_throw(
                      v307,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v319) = (3 * v139 + 1) >> 1;
                  LODWORD(v318) = v137;
                  v316 = v138;
                  v159 = (_DWORD *)sub_186B300(v136 - 1, v158);
                  v160 = (unsigned int)v159[1];
                  v161 = (int)v319;
                  v136 = v159 + 2;
                  v138 = v316;
                  v137 = (unsigned int)v318;
                  v88[1] = (__int64)(v159 + 2);
                  *v159 = v161;
                  LODWORD(v159) = v160;
                  v142 = (unsigned int **)&v136[v160];
                  v135 = v62[1];
                  v141 = (_DWORD)v159 + 1;
                }
                else
                {
                  v140 = v139;
                  v141 = v139 + 1;
                  v142 = (unsigned int **)&v136[v140];
                }
              }
              else
              {
                LODWORD(v318) = v137;
                v316 = v138;
                v163 = (_QWORD *)sub_186B270(0x18u);
                v136 = v163 + 1;
                v135 = v62[1];
                v88[1] = (__int64)(v163 + 1);
                v138 = v316;
                v142 = (unsigned int **)(v163 + 1);
                *v163 = 2;
                v137 = (unsigned int)v318;
                v141 = 1;
              }
              *v142 = v138;
              ++v137;
              *((_DWORD *)v136 - 1) = v141;
            }
            while ( v135 );
          }
          v143 = v62[2];
          a2 = (char *)v62[3];
          v88[3] = 0;
          v88[2] = v143;
          if ( a2 )
          {
            v144 = nullptr;
            v145 = 0;
            do
            {
              if ( v145 >= *((_DWORD *)a2 - 1) )
                break;
              v146 = *(unsigned int **)&a2[8 * v145];
              if ( v146 )
                ++v146[2];
              if ( v144 )
              {
                v147 = *((_DWORD *)v144 - 1);
                if ( v147 == *((_DWORD *)v144 - 2) )
                {
                  v152 = (3 * v147 + 1) >> 1;
                  v153 = 8 * v152 + 8;
                  if ( 8 * v147 + 8 >= (unsigned int)v153 || v147 >= v152 )
                  {
                    v303 = (char **)__cxa_allocate_exception(0x28u);
                    sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v304);
                    *v303 = (char *)off_1C63128;
                    sub_2333C0(v303 + 1, &v339);
                    sub_233E40((__int64)&v339);
                    __cxa_throw(
                      v303,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v319) = (3 * v147 + 1) >> 1;
                  LODWORD(v318) = v145;
                  v316 = v146;
                  v154 = (_DWORD *)sub_186B300(v144 - 1, v153);
                  v155 = (unsigned int)v154[1];
                  v156 = (int)v319;
                  v144 = v154 + 2;
                  v146 = v316;
                  v145 = (unsigned int)v318;
                  v88[3] = (__int64)(v154 + 2);
                  *v154 = v156;
                  LODWORD(v154) = v155;
                  v150 = (unsigned int **)&v144[v155];
                  a2 = (char *)v62[3];
                  v149 = (_DWORD)v154 + 1;
                }
                else
                {
                  v148 = v147;
                  v149 = v147 + 1;
                  v150 = (unsigned int **)&v144[v148];
                }
              }
              else
              {
                LODWORD(v318) = v145;
                v316 = v146;
                v162 = (_QWORD *)sub_186B270(0x18u);
                v144 = v162 + 1;
                a2 = (char *)v62[3];
                v88[3] = (__int64)(v162 + 1);
                v146 = v316;
                v150 = (unsigned int **)(v162 + 1);
                *v162 = 2;
                v145 = (unsigned int)v318;
                v149 = 1;
              }
              *v150 = v146;
              ++v145;
              *((_DWORD *)v144 - 1) = v149;
            }
            while ( a2 );
          }
          LODWORD(v314) = (_DWORD)v314 + 1;
          ++*((_DWORD *)v4 - 1);
          v151 = *((_DWORD *)ptr + 1);
          if ( (unsigned int)v314 >= v151 )
            break;
          v61 = *((unsigned int *)v4 - 1);
          v62 = &v44[4 * (unsigned int)v314];
          if ( (_DWORD)v61 == *((_DWORD *)v4 - 2) )
            goto LABEL_107;
LABEL_233:
          v88 = &v4[4 * v61];
        }
        if ( v151 )
        {
          v164 = (__int64)&ptr[32 * v151 + 8];
          do
          {
            v165 = (char **)v44[3];
            if ( v165 )
            {
              v166 = &v165[*((unsigned int *)v165 - 1)];
              if ( v165 >= v166 )
                goto LABEL_252;
              do
              {
                while ( 1 )
                {
                  a2 = *v165;
                  if ( *v165 )
                  {
                    v167 = v44[2];
                    v6 = (*((_DWORD *)a2 + 2))-- == 1;
                    if ( v6 )
                      break;
                  }
                  if ( ++v165 >= v166 )
                    goto LABEL_251;
                }
                sub_15D7BC0(v167, a2);
                ++v165;
              }
              while ( v165 < v166 );
LABEL_251:
              v165 = (char **)v44[3];
              if ( v165 )
LABEL_252:
                sub_186B220(v165 - 1);
            }
            v89 = (char **)v44[1];
            if ( v89 )
            {
              v168 = &v89[*((unsigned int *)v89 - 1)];
              if ( v89 >= v168 )
                goto LABEL_135;
              do
              {
                a2 = *v89;
                if ( *v89 )
                {
                  v169 = *v44;
                  v6 = (*((_DWORD *)a2 + 2))-- == 1;
                  if ( v6 )
                    sub_15D7BC0(v169, a2);
                }
                ++v89;
              }
              while ( v89 < v168 );
              v89 = (char **)v44[1];
              if ( v89 )
LABEL_135:
                sub_186B220(v89 - 1);
            }
            v44 += 4;
          }
          while ( v44 != (_QWORD *)v164 );
        }
      }
      v7 = (char **)ptr;
      sub_186B220(ptr);
    }
  }
  if ( (unsigned int)sub_180B130(v7) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      sub_186A4C0(*(double *)a3.m128i_i64);
      sub_180B150(v7, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = (char **)std::ostream::_M_insert<unsigned long>();
      a2 = ")\n";
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v7, ")\n");
    }
    else
    {
      sub_180B150(v7, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = (char **)std::ostream::_M_insert<unsigned long>();
      a2 = ")\n";
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v90 = *(_QWORD *)(v3 + 8);
  if ( v90 && *(_DWORD *)(v90 - 4) )
  {
    v7 = (char **)v3;
    v91 = sub_E40D40(v3);
    v92 = (pthread_mutex_t *)((char *)v320 + 88);
    if ( &_pthread_key_create )
    {
      v7 = (char **)(&v320[2].__align + 1);
      v93 = pthread_mutex_lock((pthread_mutex_t *)((char *)v320 + 88));
      if ( v93 )
        std::__throw_system_error(v93);
    }
    v94 = (_QWORD *)*(&v320[4].__align + 2);
    if ( v94 )
    {
      v95 = *((_DWORD *)v94 - 1);
      if ( v95 == *((_DWORD *)v94 - 2) )
      {
        v186 = (3 * v95 + 1) >> 1;
        v187 = 8 * v186 + 8;
        if ( 8 * v95 + 8 >= v187 || v95 >= v186 )
        {
          v305 = (char **)__cxa_allocate_exception(0x28u);
          sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v306);
          *v305 = (char *)off_1C63128;
          sub_2333C0(v305 + 1, &v339);
          sub_233E40((__int64)&v339);
          __cxa_throw(v305, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a2 = (char *)v187;
        v7 = (char **)(v94 - 1);
        v188 = (unsigned int *)sub_186B300(v94 - 1, v187);
        v189 = v320;
        v94 = v188 + 2;
        *v188 = v186;
        *(&v189[4].__align + 2) = (__int64)(v188 + 2);
        LODWORD(v188) = v188[1];
        v98 = (__int64 **)&v94[(unsigned int)v188];
        v97 = (_DWORD)v188 + 1;
      }
      else
      {
        v96 = v95;
        v97 = v95 + 1;
        v98 = (__int64 **)&v94[v96];
      }
    }
    else
    {
      v7 = (char **)&qword_18;
      v269 = (_QWORD *)sub_186B270(0x18u);
      *v269 = 2;
      v94 = v269 + 1;
      *(&v320[4].__align + 2) = (__int64)(v269 + 1);
      v98 = (__int64 **)(v269 + 1);
      v97 = 1;
    }
    *v98 = v91;
    *((_DWORD *)v94 - 1) = v97;
    if ( *((_DWORD *)&v320[4].__align + 8) )
    {
      v7 = (char **)(&v320[3].__align + 1);
      std::condition_variable::notify_one((std::condition_variable *)(&v320[3].__align + 1));
    }
    if ( &_pthread_key_create )
    {
      v7 = (char **)v92;
      pthread_mutex_unlock(v92);
    }
  }
  if ( v4 && *((_DWORD *)v4 - 1) )
  {
    if ( (unsigned int)sub_180B130(v7) > 2 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        v252 = sub_180B150(v7, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v253 = sub_160C420(
                 v252,
                 (int)v309,
                 (int)ptr,
                 (int)v314,
                 (__int64)v316,
                 (int)v318,
                 (int)v319,
                 (int)v320,
                 (int)v321,
                 (int)v322,
                 (int)v323,
                 (int)v324,
                 (int)v325,
                 v326.m128i_i32[0],
                 v326.m128i_i32[2],
                 v327.m128i_i32[0],
                 v327.m128i_i32[2],
                 v328.m128i_i32[0],
                 v328.m128i_i32[2],
                 (int)v329,
                 v330,
                 (int)v331,
                 (int)v332,
                 v333,
                 v334[0],
                 (int)v335,
                 v336,
                 v337,
                 v338,
                 (int)v339,
                 v340,
                 v341,
                 v342,
                 v343,
                 v344);
        a2 = "\n";
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v253, "\n");
      }
      else
      {
        v256 = sub_180B150(v7, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_160C420(
          v256,
          (int)v309,
          (int)ptr,
          (int)v314,
          (__int64)v316,
          (int)v318,
          (int)v319,
          (int)v320,
          (int)v321,
          (int)v322,
          (int)v323,
          (int)v324,
          (int)v325,
          v326.m128i_i32[0],
          v326.m128i_i32[2],
          v327.m128i_i32[0],
          v327.m128i_i32[2],
          v328.m128i_i32[0],
          v328.m128i_i32[2],
          (int)v329,
          v330,
          (int)v331,
          (int)v332,
          v333,
          v334[0],
          (int)v335,
          v336,
          v337,
          v338,
          (int)v339,
          v340,
          v341,
          v342,
          v343,
          v344);
        a2 = "\n";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v99 = (char **)v4[3];
    if ( v99 )
    {
      v100 = &v99[*((unsigned int *)v99 - 1)];
      if ( v99 == v100 )
        goto LABEL_158;
      ptra = *(void **)(v3 + 56);
      do
      {
        a2 = *v99;
        sub_E5EBF0(ptra, *v99++);
      }
      while ( v100 != v99 );
      v100 = (char **)v4[3];
      v99 = v100;
      if ( v100 )
      {
LABEL_158:
        v101 = 0;
        do
        {
          if ( v101 >= *((_DWORD *)v100 - 1) )
            break;
          v102 = v100[v101];
          if ( v102 )
            ++*((_DWORD *)v102 + 2);
          v103 = *(_QWORD **)(v3 + 24);
          if ( v103 )
          {
            v104 = *((_DWORD *)v103 - 1);
            if ( v104 == *((_DWORD *)v103 - 2) )
            {
              v177 = (3 * v104 + 1) >> 1;
              v178 = 8 * v177 + 8;
              if ( 8 * v104 + 8 >= v178 || v104 >= v177 )
              {
                v295 = (char **)__cxa_allocate_exception(0x28u);
                sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v296);
                *v295 = (char *)off_1C63128;
                sub_2333C0(v295 + 1, &v339);
                sub_233E40((__int64)&v339);
                __cxa_throw(v295, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              a2 = (char *)v178;
              v179 = (unsigned int *)sub_186B300(v103 - 1, v178);
              v180 = v179[1];
              v103 = v179 + 2;
              *v179 = v177;
              *(_QWORD *)(v3 + 24) = v179 + 2;
              v99 = (char **)v4[3];
              LODWORD(v179) = v180;
              v107 = (char **)&v103[v180];
              v106 = (_DWORD)v179 + 1;
            }
            else
            {
              v105 = v104;
              v106 = v104 + 1;
              v107 = (char **)&v103[v105];
            }
          }
          else
          {
            v255 = (_QWORD *)sub_186B270(0x18u);
            *v255 = 2;
            v99 = (char **)v4[3];
            v106 = 1;
            v103 = v255 + 1;
            *(_QWORD *)(v3 + 24) = v103;
            v107 = (char **)v103;
          }
          *v107 = v102;
          ++v101;
          v100 = v99;
          *((_DWORD *)v103 - 1) = v106;
        }
        while ( v99 );
      }
    }
    v108 = v332;
    if ( v332 )
    {
      v109 = (unsigned __int64)&v332[*((unsigned int *)v332 - 1)];
      if ( (unsigned __int64)v332 >= v109 )
        goto LABEL_174;
      do
      {
        while ( 1 )
        {
          a2 = *v108;
          if ( *v108 )
          {
            v110 = v331;
            v6 = (*((_DWORD *)a2 + 2))-- == 1;
            if ( v6 )
              break;
          }
          if ( (unsigned __int64)++v108 >= v109 )
            goto LABEL_173;
        }
        sub_15D7BC0(v110, a2);
        ++v108;
      }
      while ( (unsigned __int64)v108 < v109 );
LABEL_173:
      v108 = v332;
      if ( v332 )
LABEL_174:
        *((_DWORD *)v108 - 1) = 0;
    }
    v111 = v4[1];
    if ( v111 )
    {
      v112 = 0;
      do
      {
        if ( v112 >= *(_DWORD *)(v111 - 4) )
          break;
        v113 = *(_QWORD *)(v111 + 8LL * v112);
        if ( v113 )
          ++*(_DWORD *)(v113 + 8);
        v114 = (char *)v332;
        if ( v332 )
        {
          v115 = *((_DWORD *)v332 - 1);
          if ( v115 == *((_DWORD *)v332 - 2) )
          {
            v181 = (3 * v115 + 1) >> 1;
            v182 = 8 * v181 + 8;
            if ( 8 * v115 + 8 >= v182 || v115 >= v181 )
            {
              v289 = (char **)__cxa_allocate_exception(0x28u);
              sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v290);
              *v289 = (char *)off_1C63128;
              sub_2333C0(v289 + 1, &v339);
              sub_233E40((__int64)&v339);
              __cxa_throw(v289, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v183 = (unsigned int *)sub_186B300(v332 - 1, v182);
            v184 = v183[1];
            v114 = (char *)(v183 + 2);
            *v183 = v181;
            v332 = (char **)v114;
            LODWORD(v183) = v184;
            a2 = &v114[8 * v184];
            v111 = v4[1];
            v117 = (_DWORD)v183 + 1;
          }
          else
          {
            v116 = v115;
            v117 = v115 + 1;
            a2 = (char *)&v332[v116];
          }
        }
        else
        {
          v254 = (_QWORD *)sub_186B270(0x18u);
          *v254 = 2;
          v111 = v4[1];
          v117 = 1;
          v114 = (char *)(v254 + 1);
          v332 = (char **)v114;
          a2 = v114;
        }
        *(_QWORD *)a2 = v113;
        ++v112;
        *((_DWORD *)v114 - 1) = v117;
      }
      while ( v111 );
    }
  }
  ++*(_DWORD *)(v3 + 64);
  if ( *(_BYTE *)(v3 + 80) )
    goto LABEL_4;
  LODWORD(v316) = 1;
LABEL_186:
  v118 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 56) + 72LL))(*(_QWORD *)(v3 + 56));
  if ( !(unsigned __int8)sub_18290A0(v118) )
    goto LABEL_4;
  if ( (unsigned int)sub_180B130(v118) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      sub_186A4C0(*(double *)a3.m128i_i64);
      v176 = sub_180B150(v118, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v176, "(parallel.tactic simplify-1)\n");
    }
    else
    {
      sub_180B150(v118, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v119 = &v340;
  ptr = (char *)(v3 + 48);
  v120 = &v333;
  v339 = (pthread_mutex_t *)(v3 + 48);
  sub_17F9A60(&v340, "parallel");
  v333 = 0;
  sub_1863170(&v333, v3 + 48);
  v121 = sub_1859CD0(v339, "simplify.exp", &v340, 1.0);
  *(double *)a3.m128i_i64 = pow(fmax(1.0, v121), (double)(*(_DWORD *)(v3 + 64) - 1));
  v122 = (int)*(double *)a3.m128i_i64;
  v123 = sub_1859980(v339, "simplify.max_conflicts", &v340, 0xFFFFFFFFLL);
  if ( v123 <= (unsigned int)&loc_F423F )
  {
    v124 = *(_DWORD *)(v3 + 64);
    if ( !v124 )
      v124 = 1;
    v123 *= v124;
  }
  v125 = sub_1859980(v339, "simplify.inprocess.max", &v340, 2);
  sub_1862370(&v333, "inprocess.max", (unsigned int)(v122 * v125));
  v126 = sub_1859980(v339, "simplify.restart.max", &v340, 5000);
  sub_1862370(&v333, "restart.max", (unsigned int)(v122 * v126));
  sub_1862300(&v333, "lookahead_simplify", *(_DWORD *)(v3 + 64) > 2u);
  sub_1862300(&v333, "retain_blocked_clauses", 1);
  sub_1862370(&v333, "max_conflicts", v123);
  if ( *(_DWORD *)(v3 + 64) > 1u )
    sub_1862370(&v333, "bce_delay", 0);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v3 + 56) + 88LL))(*(_QWORD *)(v3 + 56), &v333);
  sub_18572D0(&v333);
  sub_18572D0(&v340);
  v127 = *(_QWORD *)(v3 + 40);
  if ( v127 )
    a2 = (char *)*(unsigned int *)(v127 - 4);
  else
    a2 = nullptr;
  v128 = sub_E60CB0(*(std::ios_base **)(v3 + 56), (int)a2, v127);
  if ( !v128 )
  {
    if ( *(_BYTE *)(v3 + 80) )
      goto LABEL_4;
    v129 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 56) + 72LL))(*(_QWORD *)(v3 + 56));
    if ( !(unsigned __int8)sub_18290A0(v129) )
      goto LABEL_199;
    if ( (unsigned int)sub_180B130(v129) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        v185 = sub_180B150(v129, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v185, "(parallel.tactic simplify-2)\n");
      }
      else
      {
        sub_180B150(v129, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    sub_E3C2A0(v3, 0);
    v132 = *(_QWORD *)(v3 + 40);
    if ( v132 )
      a2 = (char *)*(unsigned int *)(v132 - 4);
    else
      a2 = nullptr;
    v128 = sub_E60CB0(*(std::ios_base **)(v3 + 56), (int)a2, v132);
  }
  if ( v128 == -1 )
  {
    sub_E3E880(v320, v3);
    goto LABEL_5;
  }
  if ( v128 == 1 )
  {
    sub_E3CFB0(v320, v3, nullptr);
    goto LABEL_5;
  }
LABEL_199:
  if ( *(_BYTE *)(v3 + 80) )
    goto LABEL_4;
  v130 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 56) + 72LL))(*(_QWORD *)(v3 + 56));
  LOBYTE(v322) = sub_18290A0(v130);
  if ( !(_BYTE)v322 )
    goto LABEL_4;
  v131 = v3;
  if ( (unsigned __int8)sub_E3CD40(v3, *(double *)a3.m128i_i64) )
  {
    (*(void (__fastcall **)(pthread_mutex_t **))(**(_QWORD **)(v3 + 56) + 48LL))(&v339);
    sub_E3C710(v320, (double *)v3, (__int64)&v339);
    sub_233E40((__int64)&v339);
    goto LABEL_5;
  }
  if ( (unsigned __int8)sub_186AF30(v3, a2) )
    goto LABEL_203;
  if ( v321 )
  {
    v190 = *((unsigned int *)v321 - 1);
    if ( (_DWORD)v190 )
    {
      v191 = v321;
      v315 = (std::ios_base *)v4;
      v319 = &v340;
      v318 = (pthread_mutex_t **)&v333;
      v192 = &v321[4 * v190];
      do
      {
        v193 = (char **)v191[3];
        if ( v193 )
        {
          v194 = &v193[*((unsigned int *)v193 - 1)];
          if ( v193 >= v194 )
            goto LABEL_296;
          do
          {
            while ( 1 )
            {
              a2 = *v193;
              if ( *v193 )
              {
                v131 = v191[2];
                v6 = (*((_DWORD *)a2 + 2))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v193 >= v194 )
                goto LABEL_295;
            }
            sub_15D7BC0(v131, a2);
            ++v193;
          }
          while ( v193 < v194 );
LABEL_295:
          v193 = (char **)v191[3];
          if ( v193 )
          {
LABEL_296:
            v131 = (__int64)(v193 - 1);
            sub_186B220(v193 - 1);
          }
        }
        v195 = (char **)v191[1];
        if ( v195 )
        {
          v196 = &v195[*((unsigned int *)v195 - 1)];
          if ( v195 >= v196 )
            goto LABEL_305;
          do
          {
            while ( 1 )
            {
              a2 = *v195;
              if ( *v195 )
              {
                v131 = *v191;
                v6 = (*((_DWORD *)a2 + 2))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v195 >= v196 )
                goto LABEL_304;
            }
            sub_15D7BC0(v131, a2);
            ++v195;
          }
          while ( v195 < v196 );
LABEL_304:
          v195 = (char **)v191[1];
          if ( v195 )
          {
LABEL_305:
            v131 = (__int64)(v195 - 1);
            sub_186B220(v195 - 1);
          }
        }
        v191 += 4;
      }
      while ( v191 != v192 );
      v4 = (__int64 *)v315;
      v120 = (__int64 *)v318;
      v119 = v319;
    }
    *((_DWORD *)v321 - 1) = 0;
  }
  v314 = nullptr;
  LODWORD(v323) = 0;
  v328.m128i_i32[2] = 0;
  LODWORD(v318) = -1;
  v319 = (__int64 *)&v331;
  while ( 1 )
  {
    if ( *(_BYTE *)(v3 + 80)
      || (v131 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 56) + 72LL))(*(_QWORD *)(v3 + 56)),
          !(unsigned __int8)sub_18290A0(v131)) )
    {
      v320[6].__size[20] = 1;
      goto LABEL_313;
    }
    a2 = *(char **)(v3 + 56);
    v201 = v120;
    (*(void (__fastcall **)(__int64 *, char *, __int64 *, _QWORD))(*(_QWORD *)a2 + 288LL))(
      v120,
      a2,
      v319,
      (unsigned int)v318);
    v202 = v334[0];
    if ( !*(_QWORD *)v334
      || (a2 = (char *)*(unsigned int *)(*(_QWORD *)v334 - 4LL), !(_DWORD)a2)
      || (v203 = *(_QWORD *)(*(_QWORD *)v334 + 8LL * (unsigned int)((_DWORD)a2 - 1)), v4)
      && *((_DWORD *)v4 - 1) == 1
      && v324[107] == v203 )
    {
      if ( (unsigned int)v316 > 1 )
      {
        v339 = (pthread_mutex_t *)&v341;
        v249 = operator new(0x1Eu);
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B6B00);
        *(_BYTE *)(v249 + 29) = 0;
        v251 = v320;
        v339 = (pthread_mutex_t *)v249;
        *(__m128i *)v249 = si128;
        v341 = 29;
        *(__m128i *)(v249 + 13) = _mm_load_si128((const __m128i *)&xmmword_18B6B10);
        v340 = 29;
        sub_E3C710(v251, (double *)v3, (__int64)&v339);
        sub_233E40((__int64)&v339);
        sub_2334C0(v120);
        if ( v314 )
          goto LABEL_416;
        goto LABEL_5;
      }
      sub_2334C0(v120);
      if ( v314 )
      {
        ptrb = *((_DWORD *)v314 + 12);
        *((_DWORD *)v314 + 12) = ptrb - 1;
        if ( ptrb == 1 )
        {
          (**(void (__fastcall ***)(std::ios_base *))v314)(v314);
          sub_186B220(v314);
        }
      }
LABEL_203:
      LODWORD(v316) = (_DWORD)v316 + 1;
      ++*(_DWORD *)(v3 + 64);
      if ( *(_BYTE *)(v3 + 80) )
        goto LABEL_4;
      goto LABEL_186;
    }
    if ( v324[108] == v203 )
    {
      v131 = (__int64)v120;
      sub_2334C0(v120);
LABEL_313:
      if ( v314 )
      {
        v197 = v320 + 5;
        if ( &_pthread_key_create )
        {
          v198 = pthread_mutex_lock(v320 + 5);
          if ( v198 )
            std::__throw_system_error(v198);
        }
        v131 = (__int64)v314;
        a2 = &v320[1].__size[32];
        (*(void (__fastcall **)(std::ios_base *, struct __pthread_internal_list **))(*(_QWORD *)v314 + 16LL))(
          v314,
          &v320[1].__list.__next);
        if ( &_pthread_key_create )
        {
          v131 = (__int64)v197;
          pthread_mutex_unlock(v197);
        }
      }
      if ( !v321 )
      {
        if ( (_BYTE)v322 )
        {
LABEL_453:
          sub_E3E880(v320, v3);
LABEL_323:
          sub_E3B320((void (***)(void))v314);
          sub_2334C0((__int64 *)&v331);
          v329 = v321;
          sub_E3FC60(&v329);
          v331 = v4;
          sub_E3FC60(&v331);
          return;
        }
LABEL_321:
        v200 = v320 + 5;
        sub_2B2DC0(v320 + 5);
        --v320[6].__owner;
        if ( &_pthread_key_create )
          pthread_mutex_unlock(v200);
        goto LABEL_323;
      }
      v199 = *((_DWORD *)v321 - 1);
      if ( !v199 )
      {
        if ( (_BYTE)v322 )
          goto LABEL_453;
        goto LABEL_321;
      }
      *(double *)a3.m128i_i64 = (double)(int)v323 * *(double *)(v3 + 72);
      *(_QWORD *)(v3 + 72) = a3.m128i_i64[0];
      v275 = v199 - 1;
      if ( v275 )
      {
        v276 = v320 + 5;
        if ( &_pthread_key_create )
        {
          v277 = pthread_mutex_lock(v320 + 5);
          v131 = v277;
          if ( v277 )
            std::__throw_system_error(v277);
        }
        v320[6].__owner += v275;
        if ( &_pthread_key_create )
        {
          v131 = (__int64)v276;
          pthread_mutex_unlock(v276);
        }
        if ( (unsigned int)sub_180B130(v131) )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
          {
            sub_186A4C0(*(double *)a3.m128i_i64);
            sub_180B150(v131, a2);
            std::__ostream_insert<char,std::char_traits<char>>();
            v278 = v320;
            a3.m128i_i64[0] = v320[6].__align;
            v279 = std::ostream::_M_insert<double>();
            v280 = "%";
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( *((_DWORD *)&v278[6].__align + 6) )
            {
              sub_180B150(v279, "%");
              std::__ostream_insert<char,std::char_traits<char>>();
              v282 = v320;
              v283 = std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v280 = (const char *)*((unsigned int *)&v282[6].__align + 7);
              v279 = v283;
              std::ostream::_M_insert<unsigned long>();
            }
            sub_180B150(v279, v280);
            std::__ostream_insert<char,std::char_traits<char>>();
            v281 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v281, ")\n");
          }
          else
          {
            sub_180B150(v131, a2);
            std::__ostream_insert<char,std::char_traits<char>>();
            v284 = v320;
            a3.m128i_i64[0] = v320[6].__align;
            v285 = std::ostream::_M_insert<double>();
            v286 = "%";
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( *((_DWORD *)&v284[6].__align + 6) )
            {
              sub_180B150(v285, "%");
              std::__ostream_insert<char,std::char_traits<char>>();
              v287 = v320;
              v288 = std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v286 = (const char *)*((unsigned int *)&v287[6].__align + 7);
              v285 = v288;
              std::ostream::_M_insert<unsigned long>();
            }
            sub_180B150(v285, v286);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
      }
      a2 = (char *)&v329;
      v329 = v321;
      sub_E3E140(v3, &v329);
      sub_E3B320((void (***)(void))v314);
      if ( *(_BYTE *)(v3 + 80) )
        goto LABEL_4;
      goto LABEL_3;
    }
    if ( (v204 = *(_QWORD *)(v3 + 40)) != 0 && (v201 = (void *)*(unsigned int *)(v204 - 4), (_DWORD)v201)
      || (unsigned int)v323 < v320[6].__kind )
    {
      if ( !v314 )
        goto LABEL_390;
    }
    else if ( !v314 )
    {
      v205 = *(__int64 **)(v3 + 56);
      v206 = *v205;
      v325 = *(__int64 **)(*v205 + 80);
      v207 = (*(__int64 (__fastcall **)(__int64 *))(v206 + 72))(v205);
      v208 = ((__int64 (__fastcall *)(__int64 *, __int64, char *))v325)(v205, v207, ptr);
      v209 = (std::ios_base *)v208;
      if ( v208 )
        ++*(_DWORD *)(v208 + 48);
      sub_E3B320(nullptr);
      v339 = (pthread_mutex_t *)(v3 + 48);
      sub_17F9A60(v119, "parallel");
      v330 = 0;
      sub_1863170(&v330, ptr);
      sub_1862300(&v330, "gc.burst", 1);
      sub_1862370(&v330, "simplify.delay", 1000);
      sub_1862300(&v330, "lookahead_simplify", 0);
      v210 = sub_1859980(v339, "conquer.restart.max", v119, 5);
      sub_1862370(&v330, "restart.max", v210);
      sub_1862370(&v330, "inprocess.max", 0xFFFFFFFFLL);
      (*(void (__fastcall **)(std::ios_base *, __int64 *))(*(_QWORD *)v209 + 88LL))(v209, &v330);
      sub_18572D0(&v330);
      sub_18572D0(v119);
      v202 = v334[0];
      v314 = v209;
      if ( *(_QWORD *)v334 )
        a2 = (char *)*(unsigned int *)(*(_QWORD *)v334 - 4LL);
      else
        a2 = nullptr;
    }
    v201 = v314;
    v211 = sub_E60CB0(v314, (int)a2, v202);
    if ( v211 )
      break;
LABEL_390:
    LODWORD(v323) = (_DWORD)v323 + 1;
    if ( (unsigned int)sub_180B130(v201) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        sub_180B150(v201, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v232 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v232, ")\n");
      }
      else
      {
        sub_180B150(v201, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
      }
    }
    v233 = v332;
    v318 = nullptr;
    v325 = v331;
    if ( v332 )
    {
      v234 = 0;
      do
      {
        if ( v234 >= *((_DWORD *)v233 - 1) )
          break;
        v235 = (__int64)v233[v234];
        if ( v235 )
          ++*(_DWORD *)(v235 + 8);
        if ( v318 )
        {
          v236 = *((_DWORD *)v318 - 1);
          if ( v236 == *((_DWORD *)v318 - 2) )
          {
            v257 = (3 * v236 + 1) >> 1;
            v258 = 8 * v257 + 8;
            if ( 8 * v236 + 8 >= (unsigned int)v258 || v236 >= v257 )
            {
              v291 = (char **)__cxa_allocate_exception(0x28u);
              sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v292);
              *v291 = (char *)off_1C63128;
              sub_2333C0(v291 + 1, &v339);
              sub_233E40((__int64)&v339);
              __cxa_throw(v291, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v326.m128i_i32[0] = (3 * v236 + 1) >> 1;
            v328.m128i_i64[0] = v235;
            v259 = sub_186B300(v318 - 1, v258);
            v260 = (_DWORD *)(v259 + 8);
            v233 = v332;
            v318 = (pthread_mutex_t **)(v259 + 8);
            *(_DWORD *)v259 = v326.m128i_i32[0];
            LODWORD(v259) = *(_DWORD *)(v259 + 4);
            v239 = (pthread_mutex_t **)&v260[2 * (unsigned int)v259];
            v235 = v328.m128i_i64[0];
            v238 = v259 + 1;
          }
          else
          {
            v237 = v236;
            v238 = v236 + 1;
            v239 = &v318[v237];
          }
        }
        else
        {
          v328.m128i_i64[0] = v235;
          v273 = (_QWORD *)sub_186B270(0x18u);
          *v273 = 2;
          v233 = v332;
          v238 = 1;
          v239 = (pthread_mutex_t **)(v273 + 1);
          v235 = v328.m128i_i64[0];
          v318 = v239;
        }
        *v239 = (pthread_mutex_t *)v235;
        ++v234;
        *((_DWORD *)v318 - 1) = v238;
      }
      while ( v233 );
    }
    v240 = *(_QWORD *)v334;
    v241 = nullptr;
    v328.m128i_i64[0] = v333;
    if ( *(_QWORD *)v334 )
    {
      for ( i = 0; i < *(_DWORD *)(v240 - 4); i = v266 + 1 )
      {
        while ( 1 )
        {
          v243 = *(_QWORD *)(v240 + 8LL * i);
          if ( v243 )
            ++*(_DWORD *)(v243 + 8);
          if ( !v241 )
          {
            v327.m128i_i32[0] = i;
            v326.m128i_i64[0] = v243;
            v274 = (_QWORD *)sub_186B270(0x18u);
            v241 = v274 + 1;
            *v274 = 2;
            v265 = v326.m128i_i64[0];
            v268 = 1;
            v240 = *(_QWORD *)v334;
            v266 = v327.m128i_i32[0];
            v267 = v241;
            goto LABEL_436;
          }
          v244 = *((_DWORD *)v241 - 1);
          if ( v244 == *((_DWORD *)v241 - 2) )
            break;
          ++i;
          v241[v244] = v243;
          *((_DWORD *)v241 - 1) = v244 + 1;
          if ( i >= *(_DWORD *)(v240 - 4) )
            goto LABEL_410;
        }
        v261 = (3 * v244 + 1) >> 1;
        v262 = 8 * v261 + 8;
        if ( 8 * v244 + 8 >= (unsigned int)v262 || v244 >= v261 )
        {
          v297 = (char **)__cxa_allocate_exception(0x28u);
          sub_181416((__int64 *)&v339, "Overflow encountered when expanding vector", v298);
          *v297 = (char *)off_1C63128;
          sub_2333C0(v297 + 1, &v339);
          sub_233E40((__int64)&v339);
          __cxa_throw(v297, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v328.m128i_i32[3] = i;
        v327.m128i_i32[0] = (3 * v244 + 1) >> 1;
        v326.m128i_i64[0] = v243;
        v263 = (_DWORD *)sub_186B300(v241 - 1, v262);
        v264 = (unsigned int)v263[1];
        v241 = (__int64 *)(v263 + 2);
        v265 = v326.m128i_i64[0];
        v266 = v328.m128i_i32[3];
        *v263 = v327.m128i_i32[0];
        LODWORD(v263) = v264;
        v240 = *(_QWORD *)v334;
        v267 = &v241[v264];
        v268 = (_DWORD)v263 + 1;
LABEL_436:
        *v267 = v265;
        *((_DWORD *)v241 - 1) = v268;
        if ( !v240 )
          break;
      }
    }
LABEL_410:
    v245 = (__m128i)_mm_loadh_ps((const double *)&v318);
    a3 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v328), (__m128i)(unsigned __int64)v241);
    if ( !v321 || (v246 = *((_DWORD *)v321 - 1), v246 == *((_DWORD *)v321 - 2)) )
    {
      v327 = v245;
      v326 = a3;
      v329 = v321;
      sub_E41FC0((__int64 *)&v329);
      v245 = _mm_load_si128(&v327);
      a3 = _mm_load_si128(&v326);
      v321 = v329;
      v246 = *((_DWORD *)v329 - 1);
    }
    v247 = v321;
    v336 = 0;
    v338 = 0;
    v248 = (__m128 *)&v321[4 * v246];
    *v248 = (__m128)v245;
    v248[1] = (__m128)a3;
    *((_DWORD *)v247 - 1) = v246 + 1;
    v335 = v325;
    v337 = v328.m128i_i64[0];
    sub_2334C0(&v337);
    v338 = 0;
    v337 = v328.m128i_i64[0];
    sub_2334C0((__int64 *)&v335);
    LODWORD(v318) = -1;
LABEL_355:
    v218 = *((_DWORD *)v321 - 1);
LABEL_356:
    v339 = v320 + 1;
    sub_17F9A60(v119, "parallel");
    a2 = "conquer.batch_size";
    LODWORD(v325) = sub_1859980(v339, "conquer.batch_size", v119, 100);
    sub_18572D0(v119);
    if ( v218 >= (unsigned int)v325 )
    {
      if ( v321 )
      {
        v219 = *((_DWORD *)v321 - 1);
        if ( v219 )
        {
          v220 = v320 + 5;
          if ( &_pthread_key_create )
          {
            LODWORD(v325) = *((_DWORD *)v321 - 1);
            v322 = v320 + 5;
            v221 = pthread_mutex_lock(v320 + 5);
            v220 = v322;
            v219 = (int)v325;
            if ( v221 )
              std::__throw_system_error(v221);
          }
          v320[6].__owner += v219;
          if ( &_pthread_key_create )
            pthread_mutex_unlock(v220);
          sub_E3C470((__int64)v320, 0xFFFFFFFFLL, *(double *)a3.m128i_i64);
          v222 = v321;
          v329 = v321;
          sub_E3E140(v3, &v329);
          a2 = (char *)sub_E40D40(v3);
          *(double *)a3.m128i_i64 = (double)(10 * (int)v323) * *((double *)a2 + 9);
          v223 = (pthread_mutex_t *)((char *)v320 + 88);
          *((_QWORD *)a2 + 9) = a3.m128i_i64[0];
          sub_E3CBB0(v223, (__int64)a2);
          v224 = *((unsigned int *)v222 - 1);
          if ( (_DWORD)v224 )
          {
            v325 = v4;
            v328.m128i_i64[0] = (__int64)v120;
            v225 = (pthread_mutex_t *)v222;
            v322 = (pthread_mutex_t *)&v222[4 * v224];
            do
            {
              prev = (char **)v225->__list.__prev;
              if ( prev )
              {
                v227 = &prev[*((unsigned int *)prev - 1)];
                if ( prev >= v227 )
                  goto LABEL_373;
                do
                {
                  while ( 1 )
                  {
                    a2 = *prev;
                    if ( *prev )
                    {
                      v228 = *(&v225->__align + 2);
                      v6 = (*((_DWORD *)a2 + 2))-- == 1;
                      if ( v6 )
                        break;
                    }
                    if ( ++prev >= v227 )
                      goto LABEL_372;
                  }
                  sub_15D7BC0(v228, a2);
                  ++prev;
                }
                while ( prev < v227 );
LABEL_372:
                prev = (char **)v225->__list.__prev;
                if ( prev )
LABEL_373:
                  sub_186B220(prev - 1);
              }
              v229 = (char **)*(&v225->__align + 1);
              if ( v229 )
              {
                v230 = &v229[*((unsigned int *)v229 - 1)];
                if ( v229 >= v230 )
                  goto LABEL_382;
                do
                {
                  while ( 1 )
                  {
                    a2 = *v229;
                    if ( *v229 )
                    {
                      align = v225->__align;
                      v6 = (*((_DWORD *)a2 + 2))-- == 1;
                      if ( v6 )
                        break;
                    }
                    if ( ++v229 >= v230 )
                      goto LABEL_381;
                  }
                  sub_15D7BC0(align, a2);
                  ++v229;
                }
                while ( v229 < v230 );
LABEL_381:
                v229 = (char **)*(&v225->__align + 1);
                if ( v229 )
LABEL_382:
                  sub_186B220(v229 - 1);
              }
              v225 = (pthread_mutex_t *)((char *)v225 + 32);
            }
            while ( v225 != v322 );
            v4 = v325;
            v120 = (__int64 *)v328.m128i_i64[0];
          }
        }
        *((_DWORD *)v321 - 1) = 0;
      }
      LOBYTE(v322) = 0;
    }
    v131 = (__int64)v120;
    sub_2334C0(v120);
    if ( !(_DWORD)v318 )
      goto LABEL_313;
  }
  if ( v211 != 1 )
  {
    if ( v211 == -1 )
    {
      if ( *(_QWORD *)v334 )
        v212 = *(_DWORD *)(*(_QWORD *)v334 - 4LL);
      else
        v212 = 0;
      LODWORD(v325) = v328.m128i_i32[2] + 1;
      sub_E3F300(v314, v120, v328.m128i_i32[2] % v320[6].__nusers == 0);
      if ( *(_QWORD *)v334 )
      {
        v213 = *(_DWORD *)(*(_QWORD *)v334 - 4LL);
        LODWORD(v318) = v213;
      }
      else
      {
        LODWORD(v318) = 0;
        v213 = 0;
      }
      if ( v212 != v213 )
      {
        sub_180B130(v314);
        if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
        {
          sub_186A4C0(*(double *)a3.m128i_i64);
          v318 = (pthread_mutex_t **)sub_180B150(v314, v120);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v214 = std::ostream::_M_insert<unsigned long>();
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v214, ")\n");
        }
        else
        {
          v318 = (pthread_mutex_t **)sub_180B150(v314, v120);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::operator<<<std::char_traits<char>>();
        }
        if ( *(_QWORD *)v334 )
          LODWORD(v318) = *(_DWORD *)(*(_QWORD *)v334 - 4LL);
        else
          LODWORD(v318) = 0;
      }
      v215 = v320 + 5;
      if ( &_pthread_key_create )
      {
        v328.m128i_i64[0] = (__int64)&v320[5];
        v216 = pthread_mutex_lock(v320 + 5);
        v215 = (pthread_mutex_t *)v328.m128i_i64[0];
        if ( v216 )
          std::__throw_system_error(v216);
      }
      v217 = v320;
      ++*((_DWORD *)&v320[6].__align + 6);
      *((_DWORD *)&v217[6].__align + 7) = *(_DWORD *)(v3 + 64);
      if ( &_pthread_key_create )
        pthread_mutex_unlock(v215);
      sub_E3C470((__int64)v320, 0xFFFFFFFFLL, *(double *)a3.m128i_i64);
      v328.m128i_i32[2] = (int)v325;
    }
    v218 = 0;
    if ( !v321 )
      goto LABEL_356;
    goto LABEL_355;
  }
  v270 = v3;
  v271 = v320;
  sub_E3CFB0(v320, v270, v314);
  if ( &_pthread_key_create )
  {
    v272 = pthread_mutex_lock(v271 + 5);
    if ( v272 )
      std::__throw_system_error(v272);
  }
  (*(void (__fastcall **)(std::ios_base *, struct __pthread_internal_list **))(*(_QWORD *)v314 + 16LL))(
    v314,
    &v320[1].__list.__next);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v271 + 5);
  sub_2334C0(v120);
LABEL_416:
  v310 = *((_DWORD *)v314 + 12);
  *((_DWORD *)v314 + 12) = v310 - 1;
  if ( v310 == 1 )
  {
    (**(void (__fastcall ***)(std::ios_base *))v314)(v314);
    sub_186B220(v314);
  }
LABEL_5:
  v8 = v332;
  if ( v332 )
  {
    v9 = (unsigned __int64)&v332[*((unsigned int *)v332 - 1)];
    if ( (unsigned __int64)v332 >= v9 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = v331;
          v6 = (*((_DWORD *)v10 + 2))-- == 1;
          if ( v6 )
            break;
        }
        if ( (unsigned __int64)++v8 >= v9 )
          goto LABEL_12;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( (unsigned __int64)v8 < v9 );
LABEL_12:
    v8 = v332;
    if ( v332 )
LABEL_13:
      sub_186B220(v8 - 1);
  }
  if ( v321 )
  {
    v12 = *((unsigned int *)v321 - 1);
    if ( (_DWORD)v12 )
    {
      v13 = v321;
      v14 = &v321[4 * v12];
      do
      {
        v15 = (__int64 *)v13[3];
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_25;
          do
          {
            while ( 1 )
            {
              v17 = *v15;
              if ( *v15 )
              {
                v18 = v13[2];
                v6 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_24;
            }
            sub_15D7BC0(v18, v17);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_24:
          v15 = (__int64 *)v13[3];
          if ( v15 )
LABEL_25:
            sub_186B220(v15 - 1);
        }
        v19 = (__int64 *)v13[1];
        if ( v19 )
        {
          v20 = &v19[*((unsigned int *)v19 - 1)];
          if ( v19 >= v20 )
            goto LABEL_34;
          do
          {
            while ( 1 )
            {
              v21 = *v19;
              if ( *v19 )
              {
                v22 = *v13;
                v6 = (*(_DWORD *)(v21 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v19 >= v20 )
                goto LABEL_33;
            }
            sub_15D7BC0(v22, v21);
            ++v19;
          }
          while ( v19 < v20 );
LABEL_33:
          v19 = (__int64 *)v13[1];
          if ( v19 )
LABEL_34:
            sub_186B220(v19 - 1);
        }
        v13 += 4;
      }
      while ( v13 != v14 );
    }
    sub_186B220(v321 - 1);
  }
  if ( v4 )
  {
    v23 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v23 )
    {
      v24 = v4;
      v25 = &v4[4 * v23];
      do
      {
        v26 = (__int64 *)v24[3];
        if ( v26 )
        {
          v27 = &v26[*((unsigned int *)v26 - 1)];
          if ( v26 >= v27 )
            goto LABEL_48;
          do
          {
            while ( 1 )
            {
              v28 = *v26;
              if ( *v26 )
              {
                v29 = v24[2];
                v6 = (*(_DWORD *)(v28 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v26 >= v27 )
                goto LABEL_47;
            }
            sub_15D7BC0(v29, v28);
            ++v26;
          }
          while ( v26 < v27 );
LABEL_47:
          v26 = (__int64 *)v24[3];
          if ( v26 )
LABEL_48:
            sub_186B220(v26 - 1);
        }
        v30 = (__int64 *)v24[1];
        if ( v30 )
        {
          v31 = &v30[*((unsigned int *)v30 - 1)];
          if ( v30 >= v31 )
            goto LABEL_57;
          do
          {
            while ( 1 )
            {
              v32 = *v30;
              if ( *v30 )
              {
                v33 = *v24;
                v6 = (*(_DWORD *)(v32 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v30 >= v31 )
                goto LABEL_56;
            }
            sub_15D7BC0(v33, v32);
            ++v30;
          }
          while ( v30 < v31 );
LABEL_56:
          v30 = (__int64 *)v24[1];
          if ( v30 )
LABEL_57:
            sub_186B220(v30 - 1);
        }
        v24 += 4;
      }
      while ( v24 != v25 );
    }
    sub_186B220(v4 - 1);
  }
}

