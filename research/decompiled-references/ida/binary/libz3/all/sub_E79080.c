__int64 __fastcall sub_E79080(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  _BYTE *v10; // rdi
  char *v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  char *v14; // rax
  char *v15; // rdx
  unsigned int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rdi
  int v24; // ecx
  __int64 v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  unsigned int v28; // r12d
  __int64 v29; // r13
  __int64 v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // r12
  __int64 v33; // rax
  _QWORD *v34; // r13
  void *v35; // rdi
  _QWORD *v36; // r12
  __int64 v37; // rax
  _QWORD *v38; // r13
  void *v39; // rdi
  unsigned int *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // r13
  __int64 v45; // r15
  __int64 v46; // r14
  char v47; // dl
  __int16 v48; // ax
  _DWORD *v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  void *v52; // rdi
  char *v53; // rcx
  bool v54; // si
  char *v55; // rax
  __int64 v56; // rdx
  __int64 result; // rax
  __int64 v58; // r12
  __int64 v59; // r12
  __int64 v60; // r13
  __int64 v61; // r8
  __int16 v62; // ax
  _DWORD *v63; // rax
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rsi
  __int16 v67; // cx
  __int64 v68; // rax
  __int64 v69; // r12
  char v70; // bp
  char v71; // r14
  __int64 v72; // r15
  __int64 v73; // rsi
  int v74; // ecx
  _DWORD *v75; // rax
  char v76; // r14
  __int64 v77; // rax
  __int64 v78; // rcx
  char v79; // r8
  __int64 v80; // rsi
  int v81; // edi
  _QWORD *v82; // rax
  __int64 v83; // rax
  int v84; // edx
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned __int64 v87; // r8
  __int64 *v88; // r9
  __int64 v89; // rdx
  int *v90; // r12
  unsigned int v91; // eax
  __int64 v92; // rsi
  int v93; // r13d
  __int64 **v94; // rsi
  __int64 **v95; // rax
  __int64 *v96; // rdi
  __int64 **v97; // r14
  __int64 *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rsi
  __int64 *v101; // rax
  __int64 *v102; // r10
  __int64 *v103; // rcx
  __int64 v104; // rsi
  unsigned int v105; // esi
  unsigned int v106; // r10d
  int v107; // eax
  __int64 v108; // r15
  __int64 v109; // rax
  __int64 v110; // rax
  unsigned __int64 v111; // r15
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rcx
  unsigned int v115; // edx
  __int64 *v116; // rax
  __int64 *v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rcx
  _BYTE *v120; // r8
  int v121; // r9d
  __int64 *v122; // rcx
  __int64 v123; // rax
  __int64 *v124; // rax
  unsigned int v125; // r12d
  size_t v126; // rsi
  unsigned int *v127; // rax
  _DWORD *v128; // rdi
  __int64 v129; // rax
  _DWORD *v130; // rax
  unsigned int v131; // r12d
  __int64 *v132; // rdi
  unsigned int **v133; // rbp
  _DWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned int *v137; // rsi
  __int64 v138; // rax
  unsigned int *v139; // r15
  _DWORD *v140; // rax
  bool v141; // zf
  _DWORD *v142; // rax
  void **v143; // r14
  __int64 v144; // rax
  _DWORD *v145; // rax
  char v146; // al
  _DWORD *v147; // rax
  char *v148; // rdi
  char *v149; // rcx
  char v150; // r14
  bool v151; // si
  char *v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // r10
  _DWORD *v156; // rax
  _DWORD *v157; // rax
  __int64 v158; // rax
  __int64 *v159; // r12
  unsigned int v160; // esi
  unsigned int v161; // esi
  _DWORD *v162; // rax
  char v163; // al
  __int64 v164; // r10
  _DWORD *v165; // rax
  char *v166; // rdi
  char *v167; // rcx
  char v168; // r12
  bool v169; // si
  char *v170; // rax
  __int64 v171; // rdx
  char v172; // al
  char v173; // al
  int v174; // eax
  char *v175; // rdx
  __int64 v176; // rdx
  unsigned int v177; // ecx
  __int64 v178; // rax
  char v179; // al
  int v180; // eax
  char *v181; // rdx
  __int64 v182; // rdx
  unsigned int v183; // ecx
  __int64 v184; // rax
  char *v185; // rdi
  __int64 v186; // rcx
  __int64 v187; // rsi
  char *v188; // rdi
  __int64 v189; // rcx
  __int64 v190; // rsi
  _DWORD *v191; // rax
  _DWORD *v192; // rax
  _DWORD *v193; // rax
  __int64 v194; // rax
  void *v195; // rsi
  _DWORD *v196; // rax
  char v197; // al
  __int64 v198; // rax
  __int64 v199; // rsi
  _DWORD *v200; // rax
  char v201; // al
  int **v202; // r14
  __int64 v203; // rax
  int **v204; // r13
  _QWORD *v205; // rax
  __int64 *v206; // r15
  char v207; // r14
  __int64 v208; // r11
  __int64 v209; // rax
  bool v210; // si
  __int64 v211; // rdi
  __int64 *v212; // r11
  __int64 v213; // r14
  __int64 v214; // rax
  _BOOL4 v215; // esi
  __int64 v216; // r15
  __int64 v217; // rdi
  char v218; // r11
  __int64 v219; // rcx
  __int64 v220; // rsi
  __int64 v221; // rcx
  __int64 v222; // rsi
  __int64 v223; // rdx
  __int64 v224; // rcx
  _BYTE *v225; // r8
  int v226; // r9d
  __int64 *v227; // rax
  __int64 *i; // rcx
  __int64 *v229; // rax
  __int64 *j; // rcx
  __int64 v231; // rax
  __int64 v232; // r13
  __int64 v233; // r14
  int *v234; // r15
  __int64 v235; // rdx
  unsigned int v236; // ecx
  _BYTE *v237; // r8
  int v238; // r9d
  char **exception; // rbx
  __int64 v240; // [rsp+8h] [rbp-1F0h]
  __int64 *v241; // [rsp+8h] [rbp-1F0h]
  _BYTE *v242; // [rsp+8h] [rbp-1F0h]
  __int64 v243; // [rsp+8h] [rbp-1F0h]
  int v244; // [rsp+8h] [rbp-1F0h]
  __int64 v245; // [rsp+8h] [rbp-1F0h]
  __int64 *v246; // [rsp+8h] [rbp-1F0h]
  __int64 v247; // [rsp+18h] [rbp-1E0h]
  char v248; // [rsp+18h] [rbp-1E0h]
  __int64 **v249; // [rsp+18h] [rbp-1E0h]
  __int64 v250; // [rsp+18h] [rbp-1E0h]
  __int64 v251; // [rsp+18h] [rbp-1E0h]
  __int64 *v252; // [rsp+18h] [rbp-1E0h]
  int v253; // [rsp+18h] [rbp-1E0h]
  __int64 v254; // [rsp+18h] [rbp-1E0h]
  __int64 v255; // [rsp+18h] [rbp-1E0h]
  __int64 v256; // [rsp+18h] [rbp-1E0h]
  __int64 v257; // [rsp+20h] [rbp-1D8h]
  char v258; // [rsp+20h] [rbp-1D8h]
  int *v259; // [rsp+20h] [rbp-1D8h]
  __int64 v260; // [rsp+28h] [rbp-1D0h]
  __int64 v261; // [rsp+28h] [rbp-1D0h]
  unsigned int v262; // [rsp+28h] [rbp-1D0h]
  void **v263; // [rsp+28h] [rbp-1D0h]
  char v264; // [rsp+28h] [rbp-1D0h]
  __int64 *v265; // [rsp+28h] [rbp-1D0h]
  char v266; // [rsp+28h] [rbp-1D0h]
  int v267[2]; // [rsp+30h] [rbp-1C8h]
  int v268[2]; // [rsp+30h] [rbp-1C8h]
  char v269; // [rsp+30h] [rbp-1C8h]
  unsigned int v270; // [rsp+38h] [rbp-1C0h]
  __int64 v271; // [rsp+38h] [rbp-1C0h]
  __int64 v272; // [rsp+38h] [rbp-1C0h]
  unsigned int v273; // [rsp+38h] [rbp-1C0h]
  __int64 *v274; // [rsp+40h] [rbp-1B8h]
  __int64 v275; // [rsp+48h] [rbp-1B0h]
  char *v276; // [rsp+48h] [rbp-1B0h]
  char *v277; // [rsp+48h] [rbp-1B0h]
  _BYTE *v278; // [rsp+48h] [rbp-1B0h]
  __int64 v279; // [rsp+50h] [rbp-1A8h]
  __int64 **v280; // [rsp+50h] [rbp-1A8h]
  char *v281; // [rsp+58h] [rbp-1A0h]
  int v282; // [rsp+60h] [rbp-198h]
  __int64 v283; // [rsp+68h] [rbp-190h]
  unsigned int v284; // [rsp+68h] [rbp-190h]
  int v285[2]; // [rsp+88h] [rbp-170h] BYREF
  __int64 v286; // [rsp+90h] [rbp-168h] BYREF
  __int64 v287; // [rsp+98h] [rbp-160h] BYREF
  void *ptr; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v289; // [rsp+A8h] [rbp-150h]
  int v290[32]; // [rsp+B0h] [rbp-148h] BYREF
  void *v291; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v292; // [rsp+138h] [rbp-C0h]
  _BYTE v293[184]; // [rsp+140h] [rbp-B8h] BYREF

  v4 = a1[97];
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = a1[98];
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = a1[90];
  *((_DWORD *)a1 + 178) = 0;
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  sub_E6A510((unsigned __int64)a1);
  sub_2FCDE0(a1 + 70);
  v7 = a1[72];
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v291 = nullptr;
  sub_E67160((unsigned int **)a1 + 71, &v291);
  v8 = a1[72];
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 == *(_DWORD *)(v8 - 8) )
    {
      v125 = (unsigned int)(3 * v9 + 1) >> 1;
      v126 = v125 + 8;
      if ( (int)v9 + 8 >= (unsigned int)v126 || (unsigned int)v9 >= v125 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_E65BE0((__int64 *)&v291, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v291);
        sub_233E40((__int64)&v291);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v127 = (unsigned int *)sub_186B300((void *)(v8 - 8), v126);
      v128 = v127 + 2;
      *v127 = v125;
      v129 = v127[1];
      a1[72] = v128;
      v10 = (char *)v128 + v129;
    }
    else
    {
      v10 = (_BYTE *)(v9 + v8);
    }
  }
  else
  {
    v205 = (_QWORD *)sub_186B270(0xAu);
    *v205 = 2;
    v10 = v205 + 1;
    a1[72] = v205 + 1;
  }
  *v10 = 0;
  ++*(_DWORD *)(a1[72] - 4LL);
  if ( *((_DWORD *)a1 + 163) || *((_DWORD *)a1 + 164) )
  {
    v11 = (char *)a1[80];
    v12 = 0;
    v13 = *((unsigned int *)a1 + 162);
    v14 = v11;
    v15 = &v11[16 * v13];
    if ( v11 == v15 )
      goto LABEL_26;
    do
    {
      while ( *(_QWORD *)v14 )
      {
        *(_QWORD *)v14 = 0;
        v14 += 16;
        if ( v15 == v14 )
          goto LABEL_19;
      }
      v14 += 16;
      ++v12;
    }
    while ( v15 != v14 );
LABEL_19:
    if ( (unsigned int)v13 <= 0x10 || 3 * (int)v13 >= (unsigned int)(4 * v12) )
      goto LABEL_26;
    if ( v11 )
    {
      sub_186B220(v11);
      v16 = *((_DWORD *)a1 + 162);
      a1[80] = 0;
      v16 >>= 1;
      v17 = v16;
      *((_DWORD *)a1 + 162) = v16;
      v18 = sub_186B270(16LL * v16);
      if ( !v16 )
      {
LABEL_25:
        a1[80] = v18;
LABEL_26:
        *(_QWORD *)((char *)a1 + 652) = 0;
        goto LABEL_27;
      }
    }
    else
    {
      a1[80] = 0;
      v161 = (unsigned int)v13 >> 1;
      v17 = v161;
      *((_DWORD *)a1 + 162) = v161;
      v18 = sub_186B270(16LL * v161);
    }
    v19 = (_QWORD *)v18;
    do
    {
      *v19 = 0;
      v19 += 2;
      *((_DWORD *)v19 - 2) = 0;
    }
    while ( v19 != (_QWORD *)(v18 + 16 * v17) );
    goto LABEL_25;
  }
LABEL_27:
  v20 = a1[76];
  if ( v20 )
    *(_DWORD *)(v20 - 4) = 0;
  v21 = a1[83];
  if ( v21 )
    *(_DWORD *)(v21 - 4) = 0;
  v22 = a1[77];
  if ( v22 )
    *(_DWORD *)(v22 - 4) = 0;
  sub_2FCDE0(a1 + 78);
  if ( !*((_DWORD *)a1 + 163) && !*((_DWORD *)a1 + 164) )
    goto LABEL_48;
  v23 = (_QWORD *)a1[80];
  v24 = 0;
  v25 = *((unsigned int *)a1 + 162);
  v26 = v23;
  v27 = &v23[2 * v25];
  if ( v23 != v27 )
  {
    do
    {
      while ( *v26 )
      {
        *v26 = 0;
        v26 += 2;
        if ( v27 == v26 )
          goto LABEL_40;
      }
      v26 += 2;
      ++v24;
    }
    while ( v27 != v26 );
LABEL_40:
    if ( (unsigned int)v25 > 0x10 && 3 * (int)v25 < (unsigned int)(4 * v24) )
    {
      if ( v23 )
      {
        sub_186B220(v23);
        v28 = *((_DWORD *)a1 + 162);
        a1[80] = 0;
        v28 >>= 1;
        v29 = v28;
        *((_DWORD *)a1 + 162) = v28;
        v30 = sub_186B270(16LL * v28);
        if ( !v28 )
        {
LABEL_46:
          a1[80] = v30;
          goto LABEL_47;
        }
      }
      else
      {
        a1[80] = 0;
        v160 = (unsigned int)v25 >> 1;
        v29 = v160;
        *((_DWORD *)a1 + 162) = v160;
        v30 = sub_186B270(16LL * v160);
      }
      v31 = (_QWORD *)v30;
      do
      {
        *v31 = 0;
        v31 += 2;
        *((_DWORD *)v31 - 2) = 0;
      }
      while ( v31 != (_QWORD *)(v30 + 16 * v29) );
      goto LABEL_46;
    }
  }
LABEL_47:
  *(_QWORD *)((char *)a1 + 652) = 0;
LABEL_48:
  v32 = (_QWORD *)a1[84];
  if ( v32 )
  {
    v33 = *((unsigned int *)v32 - 1);
    if ( (_DWORD)v33 )
    {
      v34 = &v32[v33];
      do
      {
        while ( *v32 )
        {
          v35 = (void *)(*v32++ - 8LL);
          sub_186B220(v35);
          if ( v32 == v34 )
          {
            v32 = (_QWORD *)a1[84];
            goto LABEL_54;
          }
        }
        ++v32;
      }
      while ( v32 != v34 );
      v32 = (_QWORD *)a1[84];
    }
LABEL_54:
    *((_DWORD *)v32 - 1) = 0;
  }
  v36 = (_QWORD *)a1[85];
  if ( v36 )
  {
    v37 = *((unsigned int *)v36 - 1);
    if ( (_DWORD)v37 )
    {
      v38 = &v36[v37];
      do
      {
        while ( *v36 )
        {
          v39 = (void *)(*v36++ - 8LL);
          sub_186B220(v39);
          if ( v38 == v36 )
          {
            v36 = (_QWORD *)a1[85];
            goto LABEL_61;
          }
        }
        ++v36;
      }
      while ( v36 != v38 );
      v36 = (_QWORD *)a1[85];
    }
LABEL_61:
    *((_DWORD *)v36 - 1) = 0;
  }
  v274 = a1 + 87;
  sub_2FCDE0(a1 + 87);
  v40 = (unsigned int *)a1[95];
  *((_DWORD *)a1 + 188) = 0;
  *((_BYTE *)a1 + 756) = 0;
  if ( v40 )
    sub_234C20((__int64 *)(a1[96] + 648LL), v40);
  v41 = a1[86];
  a1[95] = 0;
  if ( v41 )
    *(_DWORD *)(v41 - 4) = 0;
  v42 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)v285 = a1;
  ptr = v290;
  v289 = 0x1000000000LL;
  if ( v42 )
  {
    v43 = *(unsigned int *)(v42 - 4);
    if ( (_DWORD)v43 )
    {
      v44 = 8 * v43;
      v45 = 0;
      while ( 1 )
      {
        v46 = *(_QWORD *)(v42 + v45);
        v47 = *((_BYTE *)a1 + 748);
        v48 = *(_WORD *)(v46 + 4);
        if ( !v47 )
        {
          if ( v48 )
            goto LABEL_78;
          v49 = *(_DWORD **)(*(_QWORD *)(v46 + 16) + 24LL);
          if ( !v49 )
            goto LABEL_78;
          if ( *v49 )
          {
LABEL_73:
            v50 = v46;
          }
          else
          {
LABEL_84:
            if ( v49[1] != 8
              || *(_DWORD *)(v46 + 24) != 1
              || (v50 = *(_QWORD *)(v46 + 32), *(_WORD *)(v50 + 4))
              || (v49 = *(_DWORD **)(*(_QWORD *)(v50 + 16) + 24LL)) == nullptr )
            {
LABEL_78:
              sub_E70E40((__int64 *)v285, (__int64)&ptr, v46);
              goto LABEL_79;
            }
          }
          if ( *v49 == 5 )
          {
            v51 = v49[1];
            if ( (v51 == 2 || v51 == 3) && *(_DWORD *)(v50 + 24) == 2 )
            {
              v154 = *(_QWORD *)(v50 + 40);
              v155 = *(_QWORD *)(v50 + 32);
              if ( !*(_WORD *)(v154 + 4) )
              {
                v156 = *(_DWORD **)(*(_QWORD *)(v154 + 16) + 24LL);
                if ( v156 )
                {
                  if ( *v156 == 5 && !v156[1] )
                  {
                    v141 = *(_WORD *)(v155 + 4) == 0;
                    v286 = *(_QWORD *)(v50 + 32);
                    if ( v141
                      && (v157 = *(_DWORD **)(*(_QWORD *)(v155 + 16) + 24LL)) != nullptr
                      && *v157 == 5
                      && v157[1] == 6 )
                    {
                      v158 = *(unsigned int *)(v155 + 24);
                      v291 = v293;
                      v292 = 0x1000000000LL;
                      if ( !(_DWORD)v158 )
                        goto LABEL_78;
                      v159 = (__int64 *)(v155 + 32);
                      v155 = *(_QWORD *)(v155 + 32);
                    }
                    else
                    {
                      v159 = &v286;
                      v291 = v293;
                      v292 = 0x1000000000LL;
                      v158 = 1;
                    }
                    v264 = 1;
                    v252 = &v159[v158];
                    while ( 1 )
                    {
                      if ( !*(_WORD *)(v155 + 4)
                        && (v162 = *(_DWORD **)(*(_QWORD *)(v155 + 16) + 24LL)) != nullptr
                        && *v162 == 5
                        && v162[1] == 9
                        && *(_DWORD *)(v155 + 24) == 2
                        && (v198 = *(_QWORD *)(v155 + 32),
                            v199 = *(_QWORD *)(v155 + 40),
                            v141 = *(_WORD *)(v198 + 4) == 0,
                            v287 = v199,
                            v141)
                        && (v200 = *(_DWORD **)(*(_QWORD *)(v198 + 16) + 24LL)) != nullptr
                        && *v200 == 5
                        && !v200[1]
                        && (v245 = v155, v201 = sub_E68690((__int64)a1, v199, &v287), v155 = v245, v201) )
                      {
                        v164 = v287;
                      }
                      else
                      {
                        v243 = v155;
                        v163 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 16LL))(a1[1], v155);
                        v164 = v243;
                        if ( !v163 )
                        {
                          if ( *(_WORD *)(v243 + 4)
                            || (v165 = *(_DWORD **)(*(_QWORD *)(v243 + 16) + 24LL)) == nullptr
                            || *v165 != 5
                            || v165[1] != 18
                            || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[1] + 16LL))(
                                  a1[1],
                                  *(_QWORD *)(v243 + 32)) )
                          {
LABEL_291:
                            v166 = (char *)v291;
                            v167 = (char *)v291 + 8 * (unsigned int)v292;
                            v168 = 0;
                            v169 = v291 == nullptr || v291 == v293;
                            if ( v291 == v167 )
                            {
                              LODWORD(v292) = 0;
                              if ( v291 != nullptr && v291 != v293 )
                                sub_186B220(v291);
                              goto LABEL_78;
                            }
                            goto LABEL_292;
                          }
                          v164 = *(_QWORD *)(v243 + 32);
                        }
                        v287 = v164;
                      }
                      v179 = *(_BYTE *)(v164 + 6);
                      if ( (v179 & 2) != 0 )
                        goto LABEL_291;
                      *(_BYTE *)(v164 + 6) = v179 | 2;
                      v180 = v292;
                      if ( (unsigned int)v292 >= HIDWORD(v292) )
                      {
                        v272 = v164;
                        v244 = 2 * HIDWORD(v292);
                        v181 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v292)));
                        v180 = v292;
                        v188 = (char *)v291;
                        v164 = v272;
                        if ( (_DWORD)v292 )
                        {
                          if ( (unsigned int)(v292 - 1) <= 2 || v181 == (char *)v291 + 8 )
                          {
                            v221 = 0;
                            v222 = 8LL * (unsigned int)v292;
                            do
                            {
                              *(_QWORD *)&v181[v221] = *(_QWORD *)&v188[v221];
                              v221 += 8;
                            }
                            while ( v222 != v221 );
                          }
                          else
                          {
                            v189 = 0;
                            v190 = 16LL * ((unsigned int)v292 >> 1);
                            do
                            {
                              *(__m128i *)&v181[v189] = _mm_loadu_si128((const __m128i *)&v188[v189]);
                              v189 += 16;
                            }
                            while ( v190 != v189 );
                            if ( (v180 & 1) != 0 )
                              *(_QWORD *)&v181[8 * (v180 & 0xFFFFFFFE)] = *(_QWORD *)&v188[8 * (v180 & 0xFFFFFFFE)];
                          }
                        }
                        if ( v188 != v293 && v188 )
                        {
                          v277 = v181;
                          sub_186B220(v188);
                          v180 = v292;
                          v181 = v277;
                          v164 = v272;
                        }
                        v291 = v181;
                        HIDWORD(v292) = v244;
                      }
                      else
                      {
                        v181 = (char *)v291;
                      }
                      *(_QWORD *)&v181[8 * v180] = v164;
                      v182 = a1[86];
                      LODWORD(v292) = v180 + 1;
                      v183 = *(_DWORD *)(v164 + 16);
                      v184 = v183 >> 5;
                      if ( !v182
                        || (unsigned int)v184 >= *(_DWORD *)(v182 - 4)
                        || (*(_DWORD *)(v182 + 4 * v184) & (1 << v183)) == 0 )
                      {
                        if ( *((_BYTE *)a1 + 728)
                          && (v192 = *(_DWORD **)(sub_15D1F10(v164) + 24)) != nullptr
                          && *v192 == 5 )
                        {
                          v264 &= v192[1] == 1;
                        }
                        else
                        {
                          v264 = 0;
                        }
                      }
                      if ( v252 == ++v159 )
                        break;
                      v155 = *v159;
                    }
                    v166 = (char *)v291;
                    v168 = v264 ^ 1;
                    v167 = (char *)v291 + 8 * (unsigned int)v292;
                    v169 = v291 == v293 || v291 == nullptr;
                    if ( v291 == v167 )
                      goto LABEL_294;
LABEL_292:
                    v170 = v166;
                    do
                    {
                      v171 = *(_QWORD *)v170;
                      v170 += 8;
                      *(_BYTE *)(v171 + 6) &= ~2u;
                    }
                    while ( v167 != v170 );
LABEL_294:
                    LODWORD(v292) = 0;
                    if ( !v169 )
                      sub_186B220(v166);
                    if ( v168 )
                      goto LABEL_79;
                  }
                }
              }
            }
          }
          goto LABEL_78;
        }
        if ( v48 )
          goto LABEL_78;
        v49 = *(_DWORD **)(*(_QWORD *)(v46 + 16) + 24LL);
        if ( !v49 )
          goto LABEL_78;
        if ( *v49 )
          goto LABEL_73;
        if ( v49[1] != 6 )
          goto LABEL_84;
        v77 = *(unsigned int *)(v46 + 24);
        if ( !(_DWORD)v77 )
          goto LABEL_78;
        v78 = v46;
        v79 = 0;
        v240 = v46 + 8 * v77;
        do
        {
          while ( 1 )
          {
            v80 = *(_QWORD *)(v78 + 32);
            if ( *(_WORD *)(v80 + 4) )
            {
LABEL_145:
              v261 = v78;
              v248 = v79;
              v258 = v47;
              if ( (unsigned __int8)sub_E69D60((__int64)a1, v80) != 1 || v248 )
                goto LABEL_78;
              v47 = v258;
              v78 = v261;
              v79 = v258;
              goto LABEL_148;
            }
            v81 = *(_DWORD *)(v80 + 24);
            v82 = *(_QWORD **)(*(_QWORD *)(v80 + 16) + 24LL);
            if ( v81 )
            {
              if ( !v82 )
                goto LABEL_145;
              if ( *v82 != 0x800000000LL )
                goto LABEL_145;
              if ( v81 != 1 )
                goto LABEL_145;
              v136 = *(_QWORD *)(v80 + 32);
              if ( *(_WORD *)(v136 + 4) || *(_DWORD *)(v136 + 24) )
                goto LABEL_145;
              v82 = *(_QWORD **)(*(_QWORD *)(v136 + 16) + 24LL);
            }
            if ( v82 )
              break;
LABEL_148:
            v78 += 8;
            if ( v240 == v78 )
              goto LABEL_154;
          }
          if ( *(_DWORD *)v82 != -1 )
            goto LABEL_145;
          v78 += 8;
        }
        while ( v240 != v78 );
LABEL_154:
        if ( !v79 )
          goto LABEL_78;
LABEL_79:
        v45 += 8;
        if ( v44 == v45 )
        {
          v52 = ptr;
          v53 = (char *)ptr + 8 * (unsigned int)v289;
          v54 = ptr == v290 || ptr == nullptr;
          if ( ptr != v53 )
          {
            v55 = (char *)ptr;
            do
            {
              v56 = *(_QWORD *)v55;
              v55 += 8;
              *(_BYTE *)(v56 + 6) &= ~1u;
            }
            while ( v53 != v55 );
          }
          LODWORD(v289) = 0;
          if ( !v54 )
            sub_186B220(v52);
          v42 = *(_QWORD *)(a2 + 8);
          break;
        }
        v42 = *(_QWORD *)(a2 + 8);
      }
    }
  }
  result = *((unsigned __int8 *)a1 + 756);
  if ( v42 )
  {
    v58 = *(unsigned int *)(v42 - 4);
    if ( (_BYTE)result )
    {
      v66 = v42 + 8 * v58;
      if ( v42 != v66 )
        goto LABEL_115;
LABEL_222:
      sub_2FCDE0(v274);
      v130 = *(_DWORD **)(*a1 + 864LL);
      v291 = v130;
      if ( v130 )
        ++v130[2];
      sub_E67160((unsigned int **)a1 + 88, &v291);
      goto LABEL_225;
    }
  }
  else
  {
    if ( (_BYTE)result )
      goto LABEL_222;
    v58 = 0;
  }
  v59 = 8 * v58;
  v60 = 0;
  do
  {
    if ( v59 == v60 )
    {
      if ( v42 )
      {
        v66 = v42 + 8LL * *(unsigned int *)(v42 - 4);
        if ( v66 != v42 )
        {
          result = 0;
          goto LABEL_115;
        }
      }
      goto LABEL_164;
    }
    v61 = *(_QWORD *)(v42 + v60);
    v62 = *(_WORD *)(v61 + 4);
    if ( !*((_BYTE *)a1 + 748) )
    {
      if ( v62 )
        goto LABEL_108;
      v63 = *(_DWORD **)(*(_QWORD *)(v61 + 16) + 24LL);
      if ( !v63 )
        goto LABEL_108;
      if ( *v63 )
      {
LABEL_103:
        v64 = *(_QWORD *)(v42 + v60);
      }
      else
      {
LABEL_121:
        if ( v63[1] != 8 )
          goto LABEL_108;
        if ( *(_DWORD *)(v61 + 24) != 1 )
          goto LABEL_108;
        v64 = *(_QWORD *)(v61 + 32);
        if ( *(_WORD *)(v64 + 4) )
          goto LABEL_108;
        v63 = *(_DWORD **)(*(_QWORD *)(v64 + 16) + 24LL);
        if ( !v63 )
          goto LABEL_108;
      }
      if ( *v63 != 5 )
        goto LABEL_108;
      v65 = v63[1];
      if ( v65 != 2 && v65 != 3 )
        goto LABEL_108;
      if ( *(_DWORD *)(v64 + 24) != 2 )
        goto LABEL_108;
      v138 = *(_QWORD *)(v64 + 40);
      v139 = *(unsigned int **)(v64 + 32);
      if ( *(_WORD *)(v138 + 4) )
        goto LABEL_108;
      v140 = *(_DWORD **)(*(_QWORD *)(v138 + 16) + 24LL);
      if ( !v140 || *v140 != 5 || v140[1] )
        goto LABEL_108;
      v141 = *((_WORD *)v139 + 2) == 0;
      v287 = *(_QWORD *)(v64 + 32);
      if ( v141 && (v142 = *(_DWORD **)(*((_QWORD *)v139 + 2) + 24LL)) != nullptr && *v142 == 5 && v142[1] == 6 )
      {
        v144 = v139[6];
        v291 = v293;
        v292 = 0x1000000000LL;
        if ( !(_DWORD)v144 )
          goto LABEL_108;
        v143 = (void **)(v139 + 8);
        v139 = *((unsigned int **)v139 + 4);
      }
      else
      {
        v143 = (void **)&v287;
        v291 = v293;
        v292 = 0x1000000000LL;
        v144 = 1;
      }
      v269 = 1;
      v263 = &v143[v144];
      while ( 1 )
      {
        if ( !*((_WORD *)v139 + 2)
          && (v145 = *(_DWORD **)(*((_QWORD *)v139 + 2) + 24LL)) != nullptr
          && *v145 == 5
          && v145[1] == 9
          && v139[6] == 2
          && (v194 = *((_QWORD *)v139 + 4),
              v195 = *((void **)v139 + 5),
              v141 = *(_WORD *)(v194 + 4) == 0,
              ptr = v195,
              v141)
          && (v196 = *(_DWORD **)(*(_QWORD *)(v194 + 16) + 24LL)) != nullptr
          && *v196 == 5
          && !v196[1]
          && (v255 = v61, v197 = sub_E68690((__int64)a1, (__int64)v195, &ptr), v61 = v255, v197) )
        {
          v139 = (unsigned int *)ptr;
        }
        else
        {
          v250 = v61;
          v146 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[1] + 16LL))(a1[1], v139);
          v61 = v250;
          if ( !v146 )
          {
            if ( *((_WORD *)v139 + 2)
              || (v147 = *(_DWORD **)(*((_QWORD *)v139 + 2) + 24LL)) == nullptr
              || *v147 != 5
              || v147[1] != 18
              || (v172 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[1] + 16LL))(
                           a1[1],
                           *((_QWORD *)v139 + 4)),
                  v61 = v250,
                  !v172) )
            {
LABEL_263:
              v148 = (char *)v291;
              v149 = (char *)v291 + 8 * (unsigned int)v292;
              v150 = 0;
              v151 = v291 == v293 || v291 == nullptr;
              if ( v291 == v149 )
              {
                LODWORD(v292) = 0;
                if ( v291 != v293 && v291 != nullptr )
                {
                  v256 = v61;
                  sub_186B220(v291);
                  v61 = v256;
                }
                goto LABEL_108;
              }
              goto LABEL_264;
            }
            v139 = *((unsigned int **)v139 + 4);
          }
          ptr = v139;
        }
        v173 = *((_BYTE *)v139 + 6);
        if ( (v173 & 2) != 0 )
          goto LABEL_263;
        *((_BYTE *)v139 + 6) = v173 | 2;
        v174 = v292;
        if ( (unsigned int)v292 >= HIDWORD(v292) )
        {
          v271 = v61;
          v253 = 2 * HIDWORD(v292);
          v175 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v292)));
          v174 = v292;
          v185 = (char *)v291;
          v61 = v271;
          if ( (_DWORD)v292 )
          {
            if ( (unsigned int)(v292 - 1) <= 2 || v175 == (char *)v291 + 8 )
            {
              v219 = 0;
              v220 = 8LL * (unsigned int)v292;
              do
              {
                *(_QWORD *)&v175[v219] = *(_QWORD *)&v185[v219];
                v219 += 8;
              }
              while ( v219 != v220 );
            }
            else
            {
              v186 = 0;
              v187 = 16LL * ((unsigned int)v292 >> 1);
              do
              {
                *(__m128i *)&v175[v186] = _mm_loadu_si128((const __m128i *)&v185[v186]);
                v186 += 16;
              }
              while ( v187 != v186 );
              if ( (v174 & 1) != 0 )
                *(_QWORD *)&v175[8 * (v174 & 0xFFFFFFFE)] = *(_QWORD *)&v185[8 * (v174 & 0xFFFFFFFE)];
            }
          }
          if ( v185 && v185 != v293 )
          {
            v276 = v175;
            sub_186B220(v185);
            v174 = v292;
            v175 = v276;
            v61 = v271;
          }
          v291 = v175;
          HIDWORD(v292) = v253;
        }
        else
        {
          v175 = (char *)v291;
        }
        *(_QWORD *)&v175[8 * v174] = v139;
        v176 = a1[86];
        LODWORD(v292) = v174 + 1;
        v177 = v139[4];
        v178 = v177 >> 5;
        if ( !v176 || (unsigned int)v178 >= *(_DWORD *)(v176 - 4) || (*(_DWORD *)(v176 + 4 * v178) & (1 << v177)) == 0 )
        {
          if ( *((_BYTE *)a1 + 728)
            && (v254 = v61, v191 = *(_DWORD **)(sub_15D1F10(v139) + 24), v61 = v254, v191)
            && *v191 == 5 )
          {
            v269 &= v191[1] == 1;
          }
          else
          {
            v269 = 0;
          }
        }
        if ( v263 == ++v143 )
          break;
        v139 = (unsigned int *)*v143;
      }
      v148 = (char *)v291;
      v150 = v269 ^ 1;
      v149 = (char *)v291 + 8 * (unsigned int)v292;
      v151 = v291 == v293 || v291 == nullptr;
      if ( v291 == v149 )
        goto LABEL_266;
LABEL_264:
      v152 = v148;
      do
      {
        v153 = *(_QWORD *)v152;
        v152 += 8;
        *(_BYTE *)(v153 + 6) &= ~2u;
      }
      while ( v152 != v149 );
LABEL_266:
      LODWORD(v292) = 0;
      if ( !v151 )
      {
        v251 = v61;
        sub_186B220(v148);
        v61 = v251;
      }
      if ( !v150 )
        goto LABEL_108;
LABEL_269:
      sub_E6F3C0((__int64)a1, v61, nullptr);
      goto LABEL_109;
    }
    if ( v62 )
      goto LABEL_108;
    v63 = *(_DWORD **)(*(_QWORD *)(v61 + 16) + 24LL);
    if ( !v63 )
      goto LABEL_108;
    if ( *v63 )
      goto LABEL_103;
    if ( v63[1] != 6 )
      goto LABEL_121;
    v68 = *(unsigned int *)(v61 + 24);
    if ( !(_DWORD)v68 )
      goto LABEL_108;
    v257 = v59;
    v69 = *(_QWORD *)(v42 + v60);
    v260 = a2;
    v70 = 0;
    v71 = *((_BYTE *)a1 + 748);
    v72 = v61 + 8 * v68;
    v247 = v69;
    do
    {
      while ( 1 )
      {
        v73 = *(_QWORD *)(v69 + 32);
        if ( *(_WORD *)(v73 + 4) )
        {
LABEL_130:
          if ( (unsigned __int8)sub_E69D60((__int64)a1, v73) != 1 || v70 )
          {
            v61 = v247;
            v59 = v257;
            a2 = v260;
            goto LABEL_108;
          }
          v70 = v71;
          goto LABEL_133;
        }
        v74 = *(_DWORD *)(v73 + 24);
        v75 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
        if ( v74 )
        {
          if ( !v75 )
            goto LABEL_130;
          if ( *v75 )
            goto LABEL_130;
          if ( v75[1] != 8 )
            goto LABEL_130;
          if ( v74 != 1 )
            goto LABEL_130;
          v135 = *(_QWORD *)(v73 + 32);
          if ( *(_WORD *)(v135 + 4) || *(_DWORD *)(v135 + 24) )
            goto LABEL_130;
          v75 = *(_DWORD **)(*(_QWORD *)(v135 + 16) + 24LL);
        }
        if ( v75 )
          break;
LABEL_133:
        v69 += 8;
        if ( v72 == v69 )
          goto LABEL_139;
      }
      if ( *v75 != -1 )
        goto LABEL_130;
      v69 += 8;
    }
    while ( v72 != v69 );
LABEL_139:
    v76 = v70;
    v61 = v247;
    v59 = v257;
    a2 = v260;
    if ( v76 )
      goto LABEL_269;
LABEL_108:
    v291 = (void *)v61;
    ++*(_DWORD *)(v61 + 8);
    sub_E67160((unsigned int **)a1 + 88, &v291);
LABEL_109:
    result = *((unsigned __int8 *)a1 + 756);
    v42 = *(_QWORD *)(a2 + 8);
    v60 += 8;
  }
  while ( !(_BYTE)result );
  if ( !v42 )
    goto LABEL_222;
  v66 = v42 + 8LL * *(unsigned int *)(v42 - 4);
  if ( v66 == v42 )
    goto LABEL_222;
  do
  {
LABEL_115:
    v67 = *(_WORD *)(*(_QWORD *)v42 + 4LL);
    if ( v67 )
    {
      if ( v67 == 2 )
        return result;
    }
    else if ( (*(_BYTE *)(*(_QWORD *)v42 + 30LL) & 2) != 0 )
    {
      return result;
    }
    v42 += 8;
  }
  while ( v66 != v42 );
  if ( (_BYTE)result )
    goto LABEL_222;
LABEL_164:
  v83 = a1[98];
  if ( v83 )
  {
    while ( 1 )
    {
      v84 = *(_DWORD *)(v83 - 4);
      if ( !v84 )
        break;
      v137 = *(unsigned int **)(v83 + 8LL * (unsigned int)(v84 - 1));
      *(_DWORD *)(a1[97] + 4LL * *v137) = -1;
      --*(_DWORD *)(v83 - 4);
      if ( (*((_BYTE *)v137 + 7) & 0x40) == 0 )
      {
        sub_E68AC0((__int64)a1, (__int64)v137);
        goto LABEL_164;
      }
    }
  }
  ptr = nullptr;
  sub_E78800((__int64)a1, (unsigned int **)&ptr);
  v281 = (char *)ptr;
  if ( ptr )
  {
    v89 = *((unsigned int *)ptr - 1);
    v90 = (int *)ptr;
    v259 = (int *)((char *)ptr + 4 * v89);
    if ( (_DWORD)v89 )
    {
      while ( 1 )
      {
        sub_EE4F40(*a1);
        v91 = *((_DWORD *)a1 + 188);
        if ( *((_DWORD *)a1 + 183) < v91 )
        {
LABEL_359:
          if ( !*((_BYTE *)a1 + 756) )
            goto LABEL_209;
          goto LABEL_210;
        }
        v92 = a1[84];
        *((_DWORD *)a1 + 188) = v91 + 1;
        v87 = (unsigned int)*v90;
        v93 = *v90;
        v94 = (__int64 **)(8 * v87 + v92);
        v95 = (__int64 **)(a1[85] + 8 * v87);
        v96 = *v94;
        v249 = v94;
        v97 = v95;
        if ( *v94 )
        {
          v89 = *((unsigned int *)v96 - 1);
          if ( (_DWORD)v89 )
          {
            v98 = *v94;
            v88 = &v96[v89];
            v99 = 0;
            do
            {
              v89 = *v98;
              if ( (*(_BYTE *)(*v98 + 7) & 0x40) == 0 )
              {
                v100 = (unsigned int)v99;
                v99 = (unsigned int)(v99 + 1);
                v96[v100] = v89;
              }
              ++v98;
            }
            while ( v98 != v88 );
            v101 = *v97;
            *((_DWORD *)v96 - 1) = v99;
            v241 = v101;
            if ( !v101 )
            {
              v122 = &v96[v99];
              if ( v122 == v96 )
                goto LABEL_214;
              goto LABEL_212;
            }
          }
          else
          {
            v241 = *v95;
            if ( !*v95 )
              goto LABEL_214;
          }
          v89 = *((unsigned int *)v241 - 1);
          if ( !(_DWORD)v89 )
          {
            v105 = *((_DWORD *)v96 - 1);
            if ( v105 )
            {
LABEL_242:
              v89 = v105;
              v122 = &v96[v105];
              do
              {
LABEL_212:
                v123 = *v96++;
                *(_BYTE *)(v123 + 7) |= 0x40u;
              }
              while ( v96 != v122 );
              if ( !v241 )
              {
LABEL_214:
                v86 = *((unsigned __int8 *)a1 + 756);
                goto LABEL_207;
              }
            }
LABEL_204:
            v89 = *((unsigned int *)v241 - 1);
LABEL_205:
            v116 = v241;
            v86 = *((unsigned __int8 *)a1 + 756);
            v117 = &v241[v89];
            if ( v241 != v117 )
            {
              do
              {
                v89 = *v116++;
                *(_BYTE *)(v89 + 7) |= 0x40u;
              }
              while ( v117 != v116 );
            }
            goto LABEL_207;
          }
        }
        else
        {
          v124 = *v95;
          v241 = v124;
          if ( !v124 )
            goto LABEL_214;
          v89 = *((unsigned int *)v124 - 1);
          if ( !(_DWORD)v89 )
            goto LABEL_214;
        }
        LODWORD(v88) = (_DWORD)v241;
        v102 = &v241[v89];
        v103 = v241;
        v89 = 0;
        do
        {
          if ( (*(_BYTE *)(*v103 + 7) & 0x40) == 0 )
          {
            v104 = (unsigned int)v89;
            v89 = (unsigned int)(v89 + 1);
            v241[v104] = *v103;
          }
          ++v103;
        }
        while ( v102 != v103 );
        *((_DWORD *)v241 - 1) = v89;
        if ( !v96 )
          goto LABEL_205;
        v105 = *((_DWORD *)v96 - 1);
        if ( !v105 )
          goto LABEL_204;
        if ( !(_DWORD)v89 )
          goto LABEL_242;
        v106 = *((unsigned __int8 *)a1 + 756);
        LODWORD(v88) = *((_DWORD *)v96 - 1);
        if ( (unsigned int)v89 <= v105 )
          LODWORD(v88) = v89;
        v86 = *((unsigned __int8 *)a1 + 756);
        if ( *((_DWORD *)a1 + 184) >= (unsigned int)v88 )
        {
          v107 = v105 * v89;
          if ( *((_DWORD *)a1 + 185) >= v105 * (unsigned int)v89 )
          {
            v88 = (__int64 *)a1[76];
            if ( *((_BYTE *)v88 + v87) )
            {
              v273 = *((_DWORD *)v96 - 1);
              *(_QWORD *)v267 = v105;
              v278 = (_BYTE *)v87;
              v282 = v105 * v89;
              v284 = v89;
              v265 = &v96[v105];
              v206 = v96;
              v280 = v97;
              v207 = 1;
              while ( 1 )
              {
                v208 = *v206;
                v87 = *(unsigned int *)(*v206 + 8);
                if ( (_DWORD)v87 )
                  break;
LABEL_396:
                if ( v265 == ++v206 )
                {
                  v266 = v207;
                  v89 = 1;
                  v212 = v241;
                  v246 = &v241[v284];
                  do
                  {
                    v213 = *v212;
                    v87 = *(unsigned int *)(*v212 + 8);
                    if ( (_DWORD)v87 )
                    {
                      v214 = 0;
                      v215 = 1;
                      while ( 1 )
                      {
                        v216 = *(unsigned int *)(*(_QWORD *)(v213 + 24) + 4 * v214);
                        if ( !*((_BYTE *)v88 + v216) )
                          goto LABEL_207;
                        if ( v93 == (_DWORD)v216
                          && (v217 = *(_QWORD *)(v213 + 32) + 32 * v214,
                              v215 = (*(_BYTE *)(v217 + 4) & 1) == 0,
                              (*(_BYTE *)(v217 + 4) & 1) == 0)
                          && (*(_DWORD *)v217 == 1 || (v215 = 0, *(_DWORD *)v217 == -1))
                          && (v215 = (*(_BYTE *)(v217 + 20) & 1) == 0, (*(_BYTE *)(v217 + 20) & 1) == 0) )
                        {
                          LOBYTE(v215) = *(_DWORD *)(v217 + 16) == 1;
                          if ( ++v214 == v87 )
                          {
LABEL_408:
                            v89 = v215 & (unsigned int)v89;
                            break;
                          }
                        }
                        else if ( ++v214 == v87 )
                        {
                          goto LABEL_408;
                        }
                      }
                    }
                    ++v212;
                  }
                  while ( v246 != v212 );
                  v218 = v89;
                  v105 = v273;
                  v87 = (unsigned __int64)v278;
                  v97 = v280;
                  v107 = v282;
                  v89 = v284;
                  v106 = (unsigned __int8)v106;
                  v108 = v284;
                  if ( v266 || v218 )
                    goto LABEL_190;
                  goto LABEL_207;
                }
              }
              v209 = 0;
              v210 = 1;
              while ( 1 )
              {
                v211 = *(unsigned int *)(*(_QWORD *)(v208 + 24) + 4 * v209);
                if ( !*((_BYTE *)v88 + v211) )
                  break;
                if ( v93 == (_DWORD)v211
                  && (v89 = *(_QWORD *)(v208 + 32) + 32 * v209,
                      v210 = (*(_BYTE *)(v89 + 4) & 1) == 0,
                      (*(_BYTE *)(v89 + 4) & 1) == 0)
                  && (*(_DWORD *)v89 == 1 || (v210 = 0, *(_DWORD *)v89 == -1))
                  && (v210 = (*(_BYTE *)(v89 + 20) & 1) == 0, (*(_BYTE *)(v89 + 20) & 1) == 0) )
                {
                  v210 = *(_DWORD *)(v89 + 16) == 1;
                  if ( v87 == ++v209 )
                  {
LABEL_395:
                    v207 &= v210;
                    goto LABEL_396;
                  }
                }
                else if ( v87 == ++v209 )
                {
                  goto LABEL_395;
                }
              }
            }
            else
            {
              v108 = (unsigned int)v89;
              *(_QWORD *)v267 = v105;
LABEL_190:
              *((_DWORD *)a1 + 188) += v107;
              v270 = v89 + v105 + *((_DWORD *)a1 + 186);
              v109 = a1[103];
              if ( v109 )
                *(_DWORD *)(v109 - 4) = 0;
              v110 = *(_QWORD *)v267;
              v262 = 0;
              *(_QWORD *)v268 = 0;
              v283 = 8 * v110;
              v275 = 8 * v108;
LABEL_193:
              v111 = 0;
              while ( 1 )
              {
                v86 = v106;
                if ( v270 < v262 || (_BYTE)v106 )
                  break;
                v242 = (_BYTE *)v87;
                v113 = sub_E71800(
                         (__int64)a1,
                         *(unsigned int **)((char *)*v249 + *(_QWORD *)v268),
                         (*v97)[v111 / 8],
                         v93);
                v87 = (unsigned __int64)v242;
                if ( v113 )
                {
                  v114 = a1[103];
                  ++v262;
                  if ( !v114 || (v115 = *(_DWORD *)(v114 - 4), v115 == *(_DWORD *)(v114 - 8)) )
                  {
                    v279 = v113;
                    sub_E6E990((unsigned int **)a1 + 103);
                    v114 = a1[103];
                    v113 = v279;
                    v87 = (unsigned __int64)v242;
                    v115 = *(_DWORD *)(v114 - 4);
                  }
                  v112 = v115;
                  v89 = v115 + 1;
                  *(_QWORD *)(v114 + 8 * v112) = v113;
                  *(_DWORD *)(v114 - 4) = v89;
                }
                v111 += 8LL;
                if ( v275 == v111 )
                {
                  *(_QWORD *)v268 += 8LL;
                  if ( v283 != *(_QWORD *)v268 )
                  {
                    v106 = *((unsigned __int8 *)a1 + 756);
                    goto LABEL_193;
                  }
                  v227 = *(__int64 **)(a1[84] + 8 * v87);
                  if ( v227 )
                  {
                    v89 = *((unsigned int *)v227 - 1);
                    for ( i = &v227[v89]; i != v227; *(_BYTE *)(v89 + 7) |= 0x40u )
                      v89 = *v227++;
                  }
                  v229 = *(__int64 **)(a1[85] + 8 * v87);
                  if ( v229 )
                  {
                    v89 = *((unsigned int *)v229 - 1);
                    for ( j = &v229[v89]; j != v229; *(_BYTE *)(v89 + 7) |= 0x40u )
                      v89 = *v229++;
                  }
                  v231 = a1[103];
                  if ( v231 )
                  {
                    v89 = *(unsigned int *)(v231 - 4);
                    *((_DWORD *)a1 + 188) += v89;
                    if ( (_DWORD)v89 )
                    {
                      v232 = 8 * v89;
                      v233 = 0;
                      while ( 1 )
                      {
                        v234 = *(int **)(v231 + v233);
                        sub_E68AC0((__int64)a1, (__int64)v234);
                        sub_E6EA70((__int64)a1, v234, v235, v236, v237, v238);
                        v233 += 8;
                        if ( v232 == v233 )
                          break;
                        v231 = a1[103];
                      }
                    }
                  }
                  goto LABEL_214;
                }
                v106 = *((unsigned __int8 *)a1 + 756);
              }
              v202 = (int **)a1[103];
              if ( v202 )
              {
                v203 = *((unsigned int *)v202 - 1);
                if ( (_DWORD)v203 )
                {
                  v204 = &v202[v203];
                  do
                    sub_E6B480(a1, *v202++);
                  while ( v202 != v204 );
                  goto LABEL_214;
                }
              }
            }
          }
        }
LABEL_207:
        if ( (_BYTE)v86 )
        {
          sub_2FCDE0(v274);
          v193 = *(_DWORD **)(*a1 + 864LL);
          v291 = v193;
          if ( v193 )
            ++v193[2];
          sub_E67160((unsigned int **)a1 + 88, &v291);
          goto LABEL_359;
        }
        if ( v259 == ++v90 )
          goto LABEL_209;
      }
    }
    if ( !*((_BYTE *)a1 + 756) )
    {
LABEL_209:
      sub_E6A2C0(a1, (__int64 ***)a1 + 85, v89, v86, (_BYTE *)v87, (int)v88);
      sub_E6A2C0(a1, (__int64 ***)a1 + 84, v118, v119, v120, v121);
    }
LABEL_210:
    sub_186B220(v281 - 8);
  }
  else if ( !*((_BYTE *)a1 + 756) )
  {
    sub_E6A2C0(a1, (__int64 ***)a1 + 85, v85, v86, (_BYTE *)v87, (int)v88);
    sub_E6A2C0(a1, (__int64 ***)a1 + 84, v223, v224, v225, v226);
  }
LABEL_225:
  v131 = 0;
  sub_E6A510((unsigned __int64)a1);
  v132 = (__int64 *)a2;
  v133 = (unsigned int **)(a2 + 8);
  sub_2FCDE0(v132);
  for ( result = a1[88]; result; result = a1[88] )
  {
    if ( v131 >= *(_DWORD *)(result - 4) )
      break;
    v134 = *(_DWORD **)(result + 8LL * v131);
    v291 = v134;
    if ( v134 )
      ++v134[2];
    ++v131;
    sub_E67160(v133, &v291);
  }
  return result;
}

