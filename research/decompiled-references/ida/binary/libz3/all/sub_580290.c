__int64 __fastcall sub_580290(
        _QWORD *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  void *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  void *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // r8d
  __int64 i; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 (__fastcall *v23)(__int64, const void **); // rax
  unsigned int v24; // r15d
  int v25; // eax
  __int64 v26; // r10
  unsigned int v27; // r8d
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // r11
  unsigned int v31; // edx
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // r14
  int v36; // ebx
  int v37; // eax
  _DWORD *v38; // rdi
  int v39; // edx
  __int64 v40; // rax
  unsigned int v41; // r8d
  unsigned int v42; // r8d
  __int64 v43; // rax
  int v44; // r13d
  __int64 v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // r14
  unsigned int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 *v51; // rcx
  _QWORD *v52; // rdx
  __int64 v53; // rax
  _DWORD *v54; // rax
  _DWORD *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  _DWORD *v59; // rcx
  _QWORD *v60; // rdx
  __int64 v61; // rax
  _DWORD *v62; // rax
  _DWORD *v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  _DWORD *v67; // rcx
  __int64 v68; // r12
  __int64 v69; // rsi
  __int64 v70; // r13
  int v71; // eax
  __int64 (__fastcall *v72)(__int64, const void **); // rax
  unsigned int v73; // r15d
  int v74; // eax
  __int64 v75; // r10
  int v76; // ecx
  __int64 v77; // rax
  __int64 v78; // r10
  unsigned int v79; // edx
  __int64 v80; // r15
  __int64 v81; // rdx
  __int64 v82; // r9
  __int64 v83; // r14
  int v84; // ebx
  int v85; // eax
  _DWORD *v86; // rdi
  int v87; // edx
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // eax
  int v91; // r8d
  int v92; // r9d
  __int64 v93; // r13
  __int64 v94; // rax
  _QWORD *v95; // rdx
  __int64 v96; // rax
  int *v97; // rax
  _DWORD *v98; // rdx
  unsigned int v99; // eax
  __int64 v100; // rcx
  int v101; // eax
  _DWORD *v102; // rcx
  _QWORD *v103; // rdx
  __int64 v104; // rax
  _DWORD *v105; // rax
  _DWORD *v106; // rdx
  unsigned int v107; // eax
  __int64 v108; // rcx
  int v109; // eax
  _DWORD *v110; // rcx
  _QWORD *v111; // rdx
  unsigned int v112; // eax
  __int64 v113; // rcx
  int v114; // eax
  __int64 *v115; // rcx
  __int64 v116; // rax
  _QWORD *v117; // rdx
  __int64 v118; // r13
  unsigned int v119; // eax
  __int64 v120; // rcx
  int v121; // eax
  __int64 *v122; // rcx
  int v123; // eax
  int v124; // eax
  unsigned int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rax
  unsigned int v128; // eax
  __int64 *v129; // r13
  __int64 v130; // rax
  __int64 v131; // r12
  __int64 result; // rax
  unsigned int v133; // r13d
  size_t v134; // rsi
  unsigned int *v135; // rax
  __int64 v136; // rcx
  unsigned int v137; // r14d
  size_t v138; // rsi
  unsigned int *v139; // rax
  _DWORD *v140; // rdx
  __int64 v141; // rax
  _QWORD *v142; // rax
  unsigned int v143; // r14d
  size_t v144; // rsi
  unsigned int *v145; // rax
  __int64 v146; // rcx
  unsigned int v147; // r14d
  size_t v148; // rsi
  unsigned int *v149; // rax
  __int64 v150; // rax
  unsigned int v151; // r15d
  size_t v152; // rsi
  unsigned int *v153; // rax
  __int64 v154; // rcx
  _QWORD *v155; // rax
  __int64 v156; // r14
  __int64 v157; // r15
  int v158; // ebx
  int v159; // eax
  _DWORD *v160; // rdi
  int v161; // edx
  __int64 v162; // rax
  __int64 v163; // r15
  __int64 v164; // r14
  int v165; // eax
  _DWORD *v166; // rdi
  int v167; // edx
  __int64 v168; // rax
  unsigned int v169; // r14d
  size_t v170; // rsi
  unsigned int *v171; // rax
  __int64 v172; // rcx
  unsigned int v173; // r14d
  size_t v174; // rsi
  unsigned int *v175; // rax
  __int64 v176; // rcx
  unsigned int v177; // r14d
  size_t v178; // rsi
  unsigned int *v179; // rax
  __int64 v180; // rcx
  unsigned int v181; // r14d
  size_t v182; // rsi
  unsigned int *v183; // rax
  __int64 v184; // rax
  unsigned int v185; // r14d
  size_t v186; // rsi
  unsigned int *v187; // rax
  __int64 v188; // rcx
  unsigned int v189; // r14d
  size_t v190; // rsi
  unsigned int *v191; // rax
  __int64 v192; // rax
  int v193; // eax
  int v194; // r8d
  int v195; // r9d
  __int64 v196; // r13
  _DWORD *v197; // rdx
  unsigned int v198; // eax
  __int64 v199; // rcx
  int v200; // eax
  _DWORD *v201; // rcx
  __int64 v202; // rax
  _QWORD *v203; // rdx
  int v204; // r14d
  __int64 v205; // rax
  _DWORD *v206; // rax
  _DWORD *v207; // rdx
  unsigned int v208; // eax
  __int64 v209; // rcx
  int v210; // eax
  _DWORD *v211; // rcx
  _QWORD *v212; // rdx
  unsigned int v213; // eax
  __int64 v214; // rcx
  int v215; // eax
  __int64 *v216; // rcx
  __int64 v217; // r13
  _QWORD *v218; // rdx
  unsigned int v219; // eax
  __int64 v220; // rcx
  int v221; // eax
  __int64 *v222; // rcx
  int v223; // eax
  unsigned int v224; // r14d
  size_t v225; // rsi
  unsigned int *v226; // rax
  __int64 v227; // rcx
  unsigned int v228; // r14d
  size_t v229; // rsi
  unsigned int *v230; // rax
  __int64 v231; // rcx
  unsigned int v232; // r14d
  size_t v233; // rsi
  unsigned int *v234; // rax
  __int64 v235; // rcx
  unsigned int v236; // r15d
  size_t v237; // rsi
  unsigned int *v238; // rax
  _DWORD *v239; // rdx
  __int64 v240; // rax
  _QWORD *v241; // rax
  unsigned int v242; // r14d
  size_t v243; // rsi
  unsigned int *v244; // rax
  __int64 v245; // rcx
  _QWORD *v246; // rax
  _QWORD *v247; // rax
  _QWORD *v248; // rax
  char v249; // al
  _QWORD *v250; // rax
  unsigned int v251; // eax
  __int64 v252; // rdx
  __int64 v253; // rax
  unsigned int v254; // eax
  __int64 *v255; // r12
  __int64 v256; // rax
  __int64 v257; // r15
  __int64 v258; // rdi
  _QWORD *v259; // rax
  _QWORD *v260; // rax
  _QWORD *v261; // rax
  _QWORD *v262; // rax
  _QWORD *v263; // rax
  _QWORD *v264; // rax
  _QWORD *v265; // rax
  _QWORD *v266; // rax
  _QWORD *v267; // rax
  unsigned int v268; // eax
  __int64 v269; // rdx
  int v270; // eax
  int v271; // ecx
  __int64 *v272; // r13
  __int64 v273; // rax
  _QWORD *v274; // rdx
  __int64 v275; // r14
  unsigned int v276; // eax
  __int64 v277; // rsi
  int v278; // eax
  __int64 *v279; // rsi
  int v280; // edx
  int v281; // eax
  __int64 v282; // rdx
  int v283; // eax
  __int64 v284; // rax
  unsigned int v285; // r8d
  size_t v286; // rsi
  unsigned int *v287; // rax
  __int64 v288; // rsi
  _QWORD *v289; // rdx
  char **v290; // r15
  char **v291; // r15
  char **exception; // r15
  char **v293; // r15
  char **v294; // r15
  char **v295; // r15
  char **v296; // r15
  char **v297; // r15
  char **v298; // r15
  char **v299; // r15
  char **v300; // r15
  char **v301; // r15
  char **v302; // r15
  char **v303; // r15
  char **v304; // r15
  char **v305; // r15
  char **v306; // r15
  int v307; // [rsp+0h] [rbp-110h]
  __int64 v308; // [rsp+8h] [rbp-108h]
  __int64 v309; // [rsp+10h] [rbp-100h]
  __int64 v310; // [rsp+10h] [rbp-100h]
  __int64 v311; // [rsp+18h] [rbp-F8h]
  __int64 v312; // [rsp+18h] [rbp-F8h]
  unsigned int v313; // [rsp+20h] [rbp-F0h]
  void *v314; // [rsp+20h] [rbp-F0h]
  unsigned int v315; // [rsp+20h] [rbp-F0h]
  unsigned int v316; // [rsp+28h] [rbp-E8h]
  int v317; // [rsp+28h] [rbp-E8h]
  void *v318; // [rsp+28h] [rbp-E8h]
  unsigned int v319; // [rsp+28h] [rbp-E8h]
  __int64 v321; // [rsp+38h] [rbp-D8h]
  unsigned int v323; // [rsp+48h] [rbp-C8h]
  unsigned int v324; // [rsp+48h] [rbp-C8h]
  unsigned int *v325; // [rsp+48h] [rbp-C8h]
  int v326; // [rsp+48h] [rbp-C8h]
  unsigned int v327; // [rsp+48h] [rbp-C8h]
  unsigned int s2b; // [rsp+58h] [rbp-B8h]
  unsigned int *s2; // [rsp+58h] [rbp-B8h]
  int s2a; // [rsp+58h] [rbp-B8h]
  unsigned int s2c; // [rsp+58h] [rbp-B8h]
  void *v333; // [rsp+60h] [rbp-B0h]
  int v334; // [rsp+60h] [rbp-B0h]
  void *v335; // [rsp+60h] [rbp-B0h]
  unsigned int v337; // [rsp+6Ch] [rbp-A4h]
  __int64 v338; // [rsp+70h] [rbp-A0h]
  int v339; // [rsp+78h] [rbp-98h]
  int v340; // [rsp+78h] [rbp-98h]
  unsigned int v341; // [rsp+80h] [rbp-90h] BYREF
  unsigned int v342; // [rsp+84h] [rbp-8Ch] BYREF
  __int64 v343; // [rsp+88h] [rbp-88h] BYREF
  __int64 v344; // [rsp+90h] [rbp-80h] BYREF
  __int64 v345; // [rsp+98h] [rbp-78h] BYREF
  __int64 v346; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v347; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v348; // [rsp+B0h] [rbp-60h] BYREF
  void *ptr; // [rsp+B8h] [rbp-58h]
  unsigned int *v350; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v351; // [rsp+C8h] [rbp-48h]

  v11 = a1;
  v348 = 0;
  ptr = nullptr;
  sub_186B510(&v348, a6, 0);
  v12 = a1[4];
  LODWORD(v347) = 0;
  v338 = *(_QWORD *)(v12 + 24);
  if ( a3 )
  {
    v321 = 0;
    v13 = a3;
    v14 = nullptr;
    v333 = (void *)v13;
LABEL_3:
    v339 = (int)v14;
    v15 = *(_QWORD *)(a4 + 8LL * (_QWORD)v14);
    v16 = *(_QWORD *)(v15 + 8);
    v17 = v15;
    v18 = *(_DWORD *)(v16 + 32);
    if ( v18 == 4 )
    {
      v17 = *(_QWORD *)(v15 + 64);
      v16 = *(_QWORD *)(v17 + 8);
      v18 = *(_DWORD *)(v16 + 32);
    }
    if ( v18 == 1 )
    {
      v343 = v321;
      sub_57FA00(&v343, (unsigned int *)&v347);
      v321 = v343;
      goto LABEL_48;
    }
    v19 = *(_DWORD *)(v17 + 24);
    for ( i = 0; i != a6; ++i )
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(a7 + 8 * i);
        if ( *(_DWORD *)(*(_QWORD *)(v21 + 8) + 32LL) != 4 )
          break;
        v22 = i + 1;
        if ( v19 == *(_DWORD *)(*(_QWORD *)(v21 + 64) + 24LL) )
          goto LABEL_32;
        ++i;
        if ( v22 == a6 )
          goto LABEL_11;
      }
      if ( *(_DWORD *)(v21 + 24) == v19 )
      {
LABEL_32:
        v44 = i;
        *((_DWORD *)ptr + ((unsigned int)i >> 5)) |= 1 << i;
        v45 = sub_4C4750(v338, v15, v21, a8, a9, a10, 0);
        v46 = *((_QWORD **)v11 + 5);
        v47 = v45;
        if ( v46 )
        {
          v48 = *((_DWORD *)v46 - 1);
          if ( v48 != *((_DWORD *)v46 - 2) )
          {
            v49 = v48;
            v50 = v48 + 1;
            v51 = &v46[v49];
            goto LABEL_35;
          }
          v151 = (3 * v48 + 1) >> 1;
          v152 = 8 * v151 + 8;
          if ( 8 * v48 + 8 >= (unsigned int)v152 || v48 >= v151 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v350);
            sub_233E40((__int64)&v350);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v153 = (unsigned int *)sub_186B300(v46 - 1, v152);
          v154 = v153[1];
          *v153 = v151;
          *((_QWORD *)v11 + 5) = v153 + 2;
          *(_QWORD *)&v153[2 * v154 + 2] = v47;
          v153[1] = v154 + 1;
          v52 = *((_QWORD **)v11 + 7);
          if ( !v52 )
          {
LABEL_129:
            v155 = (_QWORD *)sub_186B270(0x10u);
            v52 = v155 + 1;
            *v155 = 2;
            *((_QWORD *)v11 + 7) = v155 + 1;
            v54 = v155 + 1;
            goto LABEL_38;
          }
        }
        else
        {
          v246 = (_QWORD *)sub_186B270(0x18u);
          v46 = v246 + 1;
          *v246 = 2;
          v50 = 1;
          *((_QWORD *)v11 + 5) = v46;
          v51 = v46;
LABEL_35:
          *v51 = v47;
          *((_DWORD *)v46 - 1) = v50;
          v52 = *((_QWORD **)v11 + 7);
          if ( !v52 )
            goto LABEL_129;
        }
        v53 = *((unsigned int *)v52 - 1);
        if ( (_DWORD)v53 == *((_DWORD *)v52 - 2) )
        {
          v147 = (unsigned int)(3 * v53 + 1) >> 1;
          v148 = 4 * v147 + 8;
          if ( 4 * (int)v53 + 8 >= (unsigned int)v148 || (unsigned int)v53 >= v147 )
          {
            v297 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
            *v297 = (char *)off_1C63128;
            sub_2333C0(v297 + 1, &v350);
            sub_233E40((__int64)&v350);
            __cxa_throw(v297, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v149 = (unsigned int *)sub_186B300(v52 - 1, v148);
          v52 = v149 + 2;
          *v149 = v147;
          v150 = v149[1];
          *((_QWORD *)v11 + 7) = v52;
          v54 = (_DWORD *)v52 + v150;
        }
        else
        {
          v54 = (_DWORD *)v52 + v53;
        }
LABEL_38:
        *v54 = (_DWORD)v14;
        ++*((_DWORD *)v52 - 1);
        v55 = *((_DWORD **)v11 + 8);
        if ( v55 )
        {
          v56 = *(v55 - 1);
          if ( v56 == *(v55 - 2) )
          {
            v143 = (3 * v56 + 1) >> 1;
            v144 = 4 * v143 + 8;
            if ( 4 * v56 + 8 >= (unsigned int)v144 || v56 >= v143 )
            {
              v294 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
              *v294 = (char *)off_1C63128;
              sub_2333C0(v294 + 1, &v350);
              sub_233E40((__int64)&v350);
              __cxa_throw(v294, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v145 = (unsigned int *)sub_186B300(v55 - 2, v144);
            v146 = v145[1];
            v55 = v145 + 2;
            *v145 = v143;
            *((_QWORD *)v11 + 8) = v145 + 2;
            LODWORD(v145) = v146;
            v59 = &v55[v146];
            v58 = (_DWORD)v145 + 1;
          }
          else
          {
            v57 = v56;
            v58 = v56 + 1;
            v59 = &v55[v57];
          }
        }
        else
        {
          v248 = (_QWORD *)sub_186B270(0x10u);
          v55 = v248 + 1;
          *v248 = 2;
          v58 = 1;
          *((_QWORD *)v11 + 8) = v55;
          v59 = v55;
        }
        *v59 = 0;
        *(v55 - 1) = v58;
        v60 = *((_QWORD **)v11 + 9);
        if ( v60 )
        {
          v61 = *((unsigned int *)v60 - 1);
          if ( (_DWORD)v61 != *((_DWORD *)v60 - 2) )
          {
            v62 = (_DWORD *)v60 + v61;
            goto LABEL_44;
          }
          v137 = (unsigned int)(3 * v61 + 1) >> 1;
          v138 = 4 * v137 + 8;
          if ( 4 * (int)v61 + 8 >= (unsigned int)v138 || (unsigned int)v61 >= v137 )
          {
            v293 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
            *v293 = (char *)off_1C63128;
            sub_2333C0(v293 + 1, &v350);
            sub_233E40((__int64)&v350);
            __cxa_throw(v293, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v139 = (unsigned int *)sub_186B300(v60 - 1, v138);
          v140 = v139 + 2;
          *v139 = v137;
          v141 = v139[1];
          *((_QWORD *)v11 + 9) = v140;
          v140[v141] = v44;
          ++*(v140 - 1);
          v63 = *((_DWORD **)v11 + 10);
          if ( !v63 )
          {
LABEL_119:
            v142 = (_QWORD *)sub_186B270(0x10u);
            v63 = v142 + 1;
            *v142 = 2;
            v66 = 1;
            *((_QWORD *)v11 + 10) = v63;
            v67 = v63;
LABEL_47:
            *v67 = 0;
            *(v63 - 1) = v66;
            goto LABEL_48;
          }
        }
        else
        {
          v247 = (_QWORD *)sub_186B270(0x10u);
          v60 = v247 + 1;
          *v247 = 2;
          *((_QWORD *)v11 + 9) = v247 + 1;
          v62 = v247 + 1;
LABEL_44:
          *v62 = v44;
          ++*((_DWORD *)v60 - 1);
          v63 = *((_DWORD **)v11 + 10);
          if ( !v63 )
            goto LABEL_119;
        }
        v64 = *(v63 - 1);
        if ( v64 == *(v63 - 2) )
        {
          v133 = (3 * v64 + 1) >> 1;
          v134 = 4 * v133 + 8;
          if ( 4 * v64 + 8 >= (unsigned int)v134 || v64 >= v133 )
          {
            v296 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
            *v296 = (char *)off_1C63128;
            sub_2333C0(v296 + 1, &v350);
            sub_233E40((__int64)&v350);
            __cxa_throw(v296, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v135 = (unsigned int *)sub_186B300(v63 - 2, v134);
          v136 = v135[1];
          v63 = v135 + 2;
          *v135 = v133;
          *((_QWORD *)v11 + 10) = v135 + 2;
          LODWORD(v135) = v136;
          v67 = &v63[v136];
          v66 = (_DWORD)v135 + 1;
        }
        else
        {
          v65 = v64;
          v66 = v64 + 1;
          v67 = &v63[v65];
        }
        goto LABEL_47;
      }
    }
LABEL_11:
    v23 = *(__int64 (__fastcall **)(__int64, const void **))(*(_QWORD *)v16 + 24LL);
    if ( v23 != sub_578C00 )
    {
      s2c = v19;
      v249 = v23(v16, (const void **)a5);
      v42 = s2c;
      if ( v249 )
        goto LABEL_29;
      goto LABEL_178;
    }
    v351 = 0;
    if ( *a5 && (s2b = v19, v350 = nullptr, sub_52CD90(&v350, a5), v19 = s2b, (s2 = v350) != nullptr) )
    {
      v24 = *(v350 - 1);
      v316 = v19;
      v346 = 0;
      sub_52CD90(&v346, &v350);
      v25 = sub_5783B0((__int64)&v346, v24);
      v27 = v316;
      v28 = v25;
      if ( v26 )
      {
        v323 = v316;
        v317 = v25;
        sub_186B220((void *)(v26 - 8));
        v28 = v317;
        v27 = v323;
      }
    }
    else
    {
      v327 = v19;
      v346 = 0;
      v223 = sub_5783B0((__int64)&v346, 0);
      v27 = v327;
      s2 = nullptr;
      v28 = v223;
    }
    v29 = *(unsigned int *)(v16 + 64);
    v30 = *(_QWORD *)(v16 + 56);
    v31 = v29 - 1;
    v29 *= 24;
    v32 = v30 + v29;
    v33 = 24LL * (v28 & v31);
    v34 = v30 + v33;
    if ( v33 != v29 )
    {
      v318 = v11;
      v35 = v30 + v33;
      v36 = v28;
      v313 = v27;
      v311 = v30 + v33;
      v309 = *(_QWORD *)(v16 + 56);
      while ( 1 )
      {
        v37 = *(_DWORD *)(v35 + 4);
        if ( v37 == 2 )
        {
          if ( *(_DWORD *)v35 == v36 )
          {
            v38 = *(_DWORD **)(v35 + 8);
            if ( v38 )
            {
              v39 = *(v38 - 1);
              if ( s2 )
                goto LABEL_24;
              v40 = 0;
            }
            else
            {
              if ( !s2 )
              {
                v42 = v313;
                v11 = v318;
                goto LABEL_29;
              }
              v39 = 0;
LABEL_24:
              v40 = *(s2 - 1);
            }
            if ( (_DWORD)v40 == v39 && !memcmp(v38, s2, 8 * v40) )
            {
              v41 = v313;
LABEL_28:
              v324 = v41;
              v11 = v318;
              sub_186B220(s2 - 2);
              v42 = v324;
LABEL_29:
              v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v16 + 72LL))(
                      v16,
                      0,
                      a5,
                      v42);
LABEL_179:
              v196 = v43;
              sub_57FA00((_QWORD *)v11 + 7, (unsigned int *)&v347);
              v197 = *((_DWORD **)v11 + 8);
              if ( v197 )
              {
                v198 = *(v197 - 1);
                if ( v198 == *(v197 - 2) )
                {
                  v242 = (3 * v198 + 1) >> 1;
                  v243 = 4 * v242 + 8;
                  if ( 4 * v198 + 8 >= (unsigned int)v243 || v198 >= v242 )
                  {
                    v300 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
                    *v300 = (char *)off_1C63128;
                    sub_2333C0(v300 + 1, &v350);
                    sub_233E40((__int64)&v350);
                    __cxa_throw(
                      v300,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v244 = (unsigned int *)sub_186B300(v197 - 2, v243);
                  v245 = v244[1];
                  v197 = v244 + 2;
                  *v244 = v242;
                  *((_QWORD *)v11 + 8) = v244 + 2;
                  LODWORD(v244) = v245;
                  v201 = &v197[v245];
                  v200 = (_DWORD)v244 + 1;
                }
                else
                {
                  v199 = v198;
                  v200 = v198 + 1;
                  v201 = &v197[v199];
                }
              }
              else
              {
                v265 = (_QWORD *)sub_186B270(0x10u);
                v197 = v265 + 1;
                *v265 = 2;
                v200 = 1;
                *((_QWORD *)v11 + 8) = v197;
                v201 = v197;
              }
              *v201 = 0;
              *(v197 - 1) = v200;
              v202 = *((_QWORD *)v11 + 6);
              if ( v202 )
              {
                v203 = *((_QWORD **)v11 + 9);
                v204 = *(_DWORD *)(v202 - 4);
                if ( v203 )
                  goto LABEL_184;
LABEL_230:
                v250 = (_QWORD *)sub_186B270(0x10u);
                v203 = v250 + 1;
                *v250 = 2;
                *((_QWORD *)v11 + 9) = v250 + 1;
                v206 = v250 + 1;
LABEL_186:
                *v206 = v204;
                ++*((_DWORD *)v203 - 1);
                v207 = *((_DWORD **)v11 + 10);
                if ( v207 )
                  goto LABEL_187;
LABEL_209:
                v241 = (_QWORD *)sub_186B270(0x10u);
                v207 = v241 + 1;
                *v241 = 2;
                v210 = 1;
                *((_QWORD *)v11 + 10) = v207;
                v211 = v207;
              }
              else
              {
                v203 = *((_QWORD **)v11 + 9);
                v204 = 0;
                if ( !v203 )
                  goto LABEL_230;
LABEL_184:
                v205 = *((unsigned int *)v203 - 1);
                if ( (_DWORD)v205 != *((_DWORD *)v203 - 2) )
                {
                  v206 = (_DWORD *)v203 + v205;
                  goto LABEL_186;
                }
                v236 = (unsigned int)(3 * v205 + 1) >> 1;
                v237 = 4 * v236 + 8;
                if ( 4 * (int)v205 + 8 >= (unsigned int)v237 || (unsigned int)v205 >= v236 )
                {
                  v301 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
                  *v301 = (char *)off_1C63128;
                  sub_2333C0(v301 + 1, &v350);
                  sub_233E40((__int64)&v350);
                  __cxa_throw(v301, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v238 = (unsigned int *)sub_186B300(v203 - 1, v237);
                v239 = v238 + 2;
                *v238 = v236;
                v240 = v238[1];
                *((_QWORD *)v11 + 9) = v239;
                v239[v240] = v204;
                ++*(v239 - 1);
                v207 = *((_DWORD **)v11 + 10);
                if ( !v207 )
                  goto LABEL_209;
LABEL_187:
                v208 = *(v207 - 1);
                if ( v208 == *(v207 - 2) )
                {
                  v232 = (3 * v208 + 1) >> 1;
                  v233 = 4 * v232 + 8;
                  if ( 4 * v208 + 8 >= (unsigned int)v233 || v208 >= v232 )
                  {
                    v302 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
                    *v302 = (char *)off_1C63128;
                    sub_2333C0(v302 + 1, &v350);
                    sub_233E40((__int64)&v350);
                    __cxa_throw(
                      v302,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v234 = (unsigned int *)sub_186B300(v207 - 2, v233);
                  v235 = v234[1];
                  v207 = v234 + 2;
                  *v234 = v232;
                  *((_QWORD *)v11 + 10) = v234 + 2;
                  LODWORD(v234) = v235;
                  v211 = &v207[v235];
                  v210 = (_DWORD)v234 + 1;
                }
                else
                {
                  v209 = v208;
                  v210 = v208 + 1;
                  v211 = &v207[v209];
                }
              }
              *v211 = 1;
              *(v207 - 1) = v210;
              v212 = *((_QWORD **)v11 + 6);
              if ( v212 )
              {
                v213 = *((_DWORD *)v212 - 1);
                if ( v213 == *((_DWORD *)v212 - 2) )
                {
                  v228 = (3 * v213 + 1) >> 1;
                  v229 = 8 * v228 + 8;
                  if ( 8 * v213 + 8 >= (unsigned int)v229 || v213 >= v228 )
                  {
                    v306 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
                    *v306 = (char *)off_1C63128;
                    sub_2333C0(v306 + 1, &v350);
                    sub_233E40((__int64)&v350);
                    __cxa_throw(
                      v306,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v230 = (unsigned int *)sub_186B300(v212 - 1, v229);
                  v231 = v230[1];
                  v212 = v230 + 2;
                  *v230 = v228;
                  *((_QWORD *)v11 + 6) = v230 + 2;
                  LODWORD(v230) = v231;
                  v216 = &v212[v231];
                  v215 = (_DWORD)v230 + 1;
                }
                else
                {
                  v214 = v213;
                  v215 = v213 + 1;
                  v216 = &v212[v214];
                }
              }
              else
              {
                v267 = (_QWORD *)sub_186B270(0x18u);
                v212 = v267 + 1;
                *v267 = 2;
                v215 = 1;
                *((_QWORD *)v11 + 6) = v212;
                v216 = v212;
              }
              *v216 = v196;
              *((_DWORD *)v212 - 1) = v215;
              v217 = sub_4C4750(v338, *(_QWORD *)(a4 + 8LL * (_QWORD)v14), v196, a8, a9, a10, 0);
              v218 = *((_QWORD **)v11 + 5);
              if ( v218 )
              {
                v219 = *((_DWORD *)v218 - 1);
                if ( v219 == *((_DWORD *)v218 - 2) )
                {
                  v224 = (3 * v219 + 1) >> 1;
                  v225 = 8 * v224 + 8;
                  if ( 8 * v219 + 8 >= (unsigned int)v225 || v219 >= v224 )
                  {
                    v299 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
                    *v299 = (char *)off_1C63128;
                    sub_2333C0(v299 + 1, &v350);
                    sub_233E40((__int64)&v350);
                    __cxa_throw(
                      v299,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v226 = (unsigned int *)sub_186B300(v218 - 1, v225);
                  v227 = v226[1];
                  v218 = v226 + 2;
                  *v226 = v224;
                  *((_QWORD *)v11 + 5) = v226 + 2;
                  LODWORD(v226) = v227;
                  v222 = &v218[v227];
                  v221 = (_DWORD)v226 + 1;
                }
                else
                {
                  v220 = v219;
                  v221 = v219 + 1;
                  v222 = &v218[v220];
                }
              }
              else
              {
                v266 = (_QWORD *)sub_186B270(0x18u);
                v218 = v266 + 1;
                *v266 = 2;
                v221 = 1;
                *((_QWORD *)v11 + 5) = v218;
                v222 = v218;
              }
              *v222 = v217;
              *((_DWORD *)v218 - 1) = v221;
LABEL_48:
              v14 = (char *)v14 + 1;
              LODWORD(v347) = v339 + 1;
              if ( v14 == v333 )
              {
                LODWORD(v345) = 0;
                if ( a6 )
                  goto LABEL_50;
                result = v321;
                if ( !v321 )
                  goto LABEL_110;
                v123 = *(_DWORD *)(v321 - 4);
                if ( !v123 )
                  goto LABEL_109;
                v312 = 0;
                do
                {
LABEL_235:
                  v251 = v123 - 1;
                  v252 = *(unsigned int *)(v321 + 4LL * v251);
                  *(_DWORD *)(v321 - 4) = v251;
                  v253 = *((_QWORD *)v11 + 6);
                  v341 = v252;
                  if ( v253 )
                    v254 = *(_DWORD *)(v253 - 4);
                  else
                    v254 = 0;
                  v342 = v254;
                  v255 = (__int64 *)(a4 + 8 * v252);
                  v256 = *v255;
                  if ( *(_DWORD *)(*(_QWORD *)(*v255 + 8) + 32LL) == 4 )
                    v256 = *(_QWORD *)(v256 + 64);
                  v345 = sub_57E220(*((_QWORD *)v11 + 4), a5, 0, *(_DWORD *)(v256 + 24));
                  v257 = v345;
                  sub_57F8E0((_QWORD *)v11 + 6, &v345);
                  sub_57FA00((_QWORD *)v11 + 7, &v341);
                  LODWORD(v350) = 0;
                  sub_57E570((unsigned int **)v11 + 8, (unsigned int *)&v350);
                  sub_57FA00((_QWORD *)v11 + 9, &v342);
                  LODWORD(v350) = 1;
                  sub_57E570((unsigned int **)v11 + 10, (unsigned int *)&v350);
                  v350 = (unsigned int *)sub_4C4750(v338, *v255, v257, a8, a9, a10, 0);
                  sub_57E690((_QWORD *)v11 + 5, &v350);
                  v123 = *(_DWORD *)(v321 - 4);
                }
                while ( v123 );
                if ( v312 )
                  goto LABEL_241;
                goto LABEL_109;
              }
              goto LABEL_3;
            }
          }
        }
        else if ( !v37 )
        {
          v11 = v318;
LABEL_176:
          if ( s2 )
LABEL_177:
            sub_186B220(s2 - 2);
LABEL_178:
          v193 = sub_596CF0(v338);
          v43 = sub_59AAB0(v193, 0, (_DWORD)a5, v16, v194, v195, v307);
          goto LABEL_179;
        }
        v35 += 24;
        if ( v32 == v35 )
        {
          v28 = v36;
          v27 = v313;
          v34 = v311;
          v30 = v309;
          v11 = v318;
          break;
        }
      }
    }
    if ( v30 == v34 )
    {
      if ( s2 )
        goto LABEL_177;
      goto LABEL_178;
    }
    v318 = v11;
    v163 = v34;
    v164 = v30;
    v315 = v27;
    v326 = v28;
    while ( 1 )
    {
      v165 = *(_DWORD *)(v164 + 4);
      if ( v165 != 2 )
      {
        if ( !v165 )
          goto LABEL_176;
        goto LABEL_149;
      }
      if ( *(_DWORD *)v164 == v326 )
        break;
LABEL_149:
      v164 += 24;
      if ( v163 == v164 )
        goto LABEL_176;
    }
    v166 = *(_DWORD **)(v164 + 8);
    if ( v166 )
    {
      v167 = *(v166 - 1);
      if ( !s2 )
      {
        v168 = 0;
        goto LABEL_155;
      }
    }
    else
    {
      if ( !s2 )
      {
        v42 = v315;
        goto LABEL_29;
      }
      v167 = 0;
    }
    v168 = *(s2 - 1);
LABEL_155:
    if ( (_DWORD)v168 == v167 && !memcmp(v166, s2, 8 * v168) )
    {
      v41 = v315;
      goto LABEL_28;
    }
    goto LABEL_149;
  }
  result = a6;
  LODWORD(v345) = 0;
  v321 = 0;
  if ( !a6 )
    goto LABEL_110;
LABEL_50:
  v312 = 0;
  v68 = 0;
  do
  {
    v340 = v68;
    v69 = *(_QWORD *)(a7 + 8 * v68);
    v70 = *(_QWORD *)(v69 + 8);
    v71 = *(_DWORD *)(v70 + 32);
    if ( v71 == 4 )
    {
      v69 = *(_QWORD *)(v69 + 64);
      v70 = *(_QWORD *)(v69 + 8);
      v71 = *(_DWORD *)(v70 + 32);
    }
    if ( v71 == 1 )
    {
      v344 = v312;
      sub_57FA00(&v344, (unsigned int *)&v345);
      v312 = v344;
      goto LABEL_98;
    }
    s2a = *((_DWORD *)ptr + ((unsigned int)v68 >> 5)) & (1 << v68);
    if ( s2a )
      goto LABEL_98;
    v319 = *(_DWORD *)(v69 + 24);
    v72 = *(__int64 (__fastcall **)(__int64, const void **))(*(_QWORD *)v70 + 24LL);
    if ( v72 != sub_578C00 )
    {
      if ( (unsigned __int8)v72(v70, (const void **)a2) )
        goto LABEL_72;
      goto LABEL_76;
    }
    v351 = 0;
    if ( *a2 && (v350 = nullptr, sub_52CD90(&v350, a2), (v325 = v350) != nullptr) )
    {
      v347 = 0;
      v73 = *(v350 - 1);
      sub_52CD90(&v347, &v350);
      v74 = sub_5783B0((__int64)&v347, v73);
      v76 = v74;
      if ( v75 )
      {
        v334 = v74;
        sub_186B220((void *)(v75 - 8));
        v76 = v334;
      }
    }
    else
    {
      v347 = 0;
      v325 = nullptr;
      v76 = sub_5783B0((__int64)&v347, 0);
    }
    v77 = *(unsigned int *)(v70 + 64);
    v78 = *(_QWORD *)(v70 + 56);
    v79 = v77 - 1;
    v77 *= 24;
    v80 = v78 + v77;
    v81 = 24LL * (v76 & v79);
    v82 = v78 + v81;
    if ( v81 == v77 )
      goto LABEL_132;
    v314 = v11;
    v83 = v78 + v81;
    v84 = v76;
    v310 = *(_QWORD *)(v70 + 56);
    v308 = v78 + v81;
    while ( 1 )
    {
      v85 = *(_DWORD *)(v83 + 4);
      if ( v85 == 2 )
        break;
      if ( !v85 )
      {
        v11 = v314;
LABEL_74:
        if ( !v325 )
          goto LABEL_76;
        goto LABEL_75;
      }
LABEL_63:
      v83 += 24;
      if ( v80 == v83 )
      {
        v76 = v84;
        v78 = v310;
        v82 = v308;
        v11 = v314;
LABEL_132:
        if ( v78 != v82 )
        {
          v335 = v11;
          v156 = v78;
          v157 = v82;
          v158 = v76;
          while ( 1 )
          {
            v159 = *(_DWORD *)(v156 + 4);
            if ( v159 != 2 )
            {
              if ( !v159 )
                goto LABEL_73;
              goto LABEL_135;
            }
            if ( *(_DWORD *)v156 == v158 )
              break;
LABEL_135:
            v156 += 24;
            if ( v157 == v156 )
            {
LABEL_73:
              v11 = v335;
              goto LABEL_74;
            }
          }
          v160 = *(_DWORD **)(v156 + 8);
          if ( v160 )
          {
            v161 = *(v160 - 1);
            if ( !v325 )
            {
              v162 = 0;
              goto LABEL_141;
            }
          }
          else
          {
            if ( !v325 )
            {
              v11 = v335;
              goto LABEL_72;
            }
            v161 = 0;
          }
          v162 = *(v325 - 1);
LABEL_141:
          if ( (_DWORD)v162 == v161 && !memcmp(v160, v325, 8 * v162) )
          {
            v11 = v335;
            sub_186B220(v325 - 2);
            goto LABEL_72;
          }
          goto LABEL_135;
        }
        if ( !v325 )
        {
LABEL_76:
          v90 = sub_596CF0(v338);
          v89 = sub_59AAB0(v90, 0, (_DWORD)a2, v70, v91, v92, v307);
          goto LABEL_77;
        }
LABEL_75:
        sub_186B220(v325 - 2);
        goto LABEL_76;
      }
    }
    if ( *(_DWORD *)v83 != v84 )
      goto LABEL_63;
    v86 = *(_DWORD **)(v83 + 8);
    if ( v86 )
    {
      v87 = *(v86 - 1);
      if ( v325 )
        goto LABEL_68;
      v88 = 0;
      goto LABEL_69;
    }
    if ( v325 )
    {
      v87 = 0;
LABEL_68:
      v88 = *(v325 - 1);
LABEL_69:
      if ( (_DWORD)v88 == v87 && !memcmp(v86, v325, 8 * v88) )
      {
        v11 = v314;
        sub_186B220(v325 - 2);
        goto LABEL_72;
      }
      goto LABEL_63;
    }
    v11 = v314;
LABEL_72:
    v89 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v70 + 72LL))(v70, 0, a2, v319);
LABEL_77:
    v93 = v89;
    v94 = *((_QWORD *)v11 + 6);
    if ( v94 )
      s2a = *(_DWORD *)(v94 - 4);
    v95 = *((_QWORD **)v11 + 7);
    if ( v95 )
    {
      v96 = *((unsigned int *)v95 - 1);
      if ( (_DWORD)v96 == *((_DWORD *)v95 - 2) )
      {
        v189 = (unsigned int)(3 * v96 + 1) >> 1;
        v190 = 4 * v189 + 8;
        if ( 4 * (int)v96 + 8 >= (unsigned int)v190 || (unsigned int)v96 >= v189 )
        {
          v303 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
          *v303 = (char *)off_1C63128;
          sub_2333C0(v303 + 1, &v350);
          sub_233E40((__int64)&v350);
          __cxa_throw(v303, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v191 = (unsigned int *)sub_186B300(v95 - 1, v190);
        v95 = v191 + 2;
        *v191 = v189;
        v192 = v191[1];
        *((_QWORD *)v11 + 7) = v95;
        v97 = (int *)v95 + v192;
      }
      else
      {
        v97 = (int *)v95 + v96;
      }
    }
    else
    {
      v259 = (_QWORD *)sub_186B270(0x10u);
      v95 = v259 + 1;
      *v259 = 2;
      *((_QWORD *)v11 + 7) = v259 + 1;
      v97 = (int *)(v259 + 1);
    }
    *v97 = s2a;
    ++*((_DWORD *)v95 - 1);
    v98 = *((_DWORD **)v11 + 8);
    if ( v98 )
    {
      v99 = *(v98 - 1);
      if ( v99 == *(v98 - 2) )
      {
        v185 = (3 * v99 + 1) >> 1;
        v186 = 4 * v185 + 8;
        if ( 4 * v99 + 8 >= (unsigned int)v186 || v99 >= v185 )
        {
          v304 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
          *v304 = (char *)off_1C63128;
          sub_2333C0(v304 + 1, &v350);
          sub_233E40((__int64)&v350);
          __cxa_throw(v304, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v187 = (unsigned int *)sub_186B300(v98 - 2, v186);
        v188 = v187[1];
        v98 = v187 + 2;
        *v187 = v185;
        *((_QWORD *)v11 + 8) = v187 + 2;
        LODWORD(v187) = v188;
        v102 = &v98[v188];
        v101 = (_DWORD)v187 + 1;
      }
      else
      {
        v100 = v99;
        v101 = v99 + 1;
        v102 = &v98[v100];
      }
    }
    else
    {
      v263 = (_QWORD *)sub_186B270(0x10u);
      v98 = v263 + 1;
      *v263 = 2;
      v101 = 1;
      *((_QWORD *)v11 + 8) = v98;
      v102 = v98;
    }
    *v102 = 1;
    *(v98 - 1) = v101;
    v103 = *((_QWORD **)v11 + 9);
    if ( v103 )
    {
      v104 = *((unsigned int *)v103 - 1);
      if ( (_DWORD)v104 == *((_DWORD *)v103 - 2) )
      {
        v181 = (unsigned int)(3 * v104 + 1) >> 1;
        v182 = 4 * v181 + 8;
        if ( 4 * (int)v104 + 8 >= (unsigned int)v182 || (unsigned int)v104 >= v181 )
        {
          v305 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
          *v305 = (char *)off_1C63128;
          sub_2333C0(v305 + 1, &v350);
          sub_233E40((__int64)&v350);
          __cxa_throw(v305, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v183 = (unsigned int *)sub_186B300(v103 - 1, v182);
        v103 = v183 + 2;
        *v183 = v181;
        v184 = v183[1];
        *((_QWORD *)v11 + 9) = v103;
        v105 = (_DWORD *)v103 + v184;
      }
      else
      {
        v105 = (_DWORD *)v103 + v104;
      }
    }
    else
    {
      v262 = (_QWORD *)sub_186B270(0x10u);
      v103 = v262 + 1;
      *v262 = 2;
      *((_QWORD *)v11 + 9) = v262 + 1;
      v105 = v262 + 1;
    }
    *v105 = v68;
    ++*((_DWORD *)v103 - 1);
    v106 = *((_DWORD **)v11 + 10);
    if ( v106 )
    {
      v107 = *(v106 - 1);
      if ( v107 == *(v106 - 2) )
      {
        v177 = (3 * v107 + 1) >> 1;
        v178 = 4 * v177 + 8;
        if ( 4 * v107 + 8 >= (unsigned int)v178 || v107 >= v177 )
        {
          v291 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
          *v291 = (char *)off_1C63128;
          sub_2333C0(v291 + 1, &v350);
          sub_233E40((__int64)&v350);
          __cxa_throw(v291, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v179 = (unsigned int *)sub_186B300(v106 - 2, v178);
        v180 = v179[1];
        v106 = v179 + 2;
        *v179 = v177;
        *((_QWORD *)v11 + 10) = v179 + 2;
        LODWORD(v179) = v180;
        v110 = &v106[v180];
        v109 = (_DWORD)v179 + 1;
      }
      else
      {
        v108 = v107;
        v109 = v107 + 1;
        v110 = &v106[v108];
      }
    }
    else
    {
      v261 = (_QWORD *)sub_186B270(0x10u);
      v106 = v261 + 1;
      *v261 = 2;
      v109 = 1;
      *((_QWORD *)v11 + 10) = v106;
      v110 = v106;
    }
    *v110 = 0;
    *(v106 - 1) = v109;
    v111 = *((_QWORD **)v11 + 6);
    if ( v111 )
    {
      v112 = *((_DWORD *)v111 - 1);
      if ( v112 == *((_DWORD *)v111 - 2) )
      {
        v173 = (3 * v112 + 1) >> 1;
        v174 = 8 * v173 + 8;
        if ( 8 * v112 + 8 >= (unsigned int)v174 || v112 >= v173 )
        {
          v298 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
          *v298 = (char *)off_1C63128;
          sub_2333C0(v298 + 1, &v350);
          sub_233E40((__int64)&v350);
          __cxa_throw(v298, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v175 = (unsigned int *)sub_186B300(v111 - 1, v174);
        v176 = v175[1];
        v111 = v175 + 2;
        *v175 = v173;
        *((_QWORD *)v11 + 6) = v175 + 2;
        LODWORD(v175) = v176;
        v115 = &v111[v176];
        v114 = (_DWORD)v175 + 1;
      }
      else
      {
        v113 = v112;
        v114 = v112 + 1;
        v115 = &v111[v113];
      }
    }
    else
    {
      v260 = (_QWORD *)sub_186B270(0x18u);
      v111 = v260 + 1;
      *v260 = 2;
      v114 = 1;
      *((_QWORD *)v11 + 6) = v111;
      v115 = v111;
    }
    *v115 = v93;
    *((_DWORD *)v111 - 1) = v114;
    v116 = sub_4C4750(v338, v93, *(_QWORD *)(a7 + 8 * v68), a8, a9, a10, 0);
    v117 = *((_QWORD **)v11 + 5);
    v118 = v116;
    if ( v117 )
    {
      v119 = *((_DWORD *)v117 - 1);
      if ( v119 == *((_DWORD *)v117 - 2) )
      {
        v169 = (3 * v119 + 1) >> 1;
        v170 = 8 * v169 + 8;
        if ( 8 * v119 + 8 >= (unsigned int)v170 || v119 >= v169 )
        {
          v295 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
          *v295 = (char *)off_1C63128;
          sub_2333C0(v295 + 1, &v350);
          sub_233E40((__int64)&v350);
          __cxa_throw(v295, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v171 = (unsigned int *)sub_186B300(v117 - 1, v170);
        v172 = v171[1];
        v117 = v171 + 2;
        *v171 = v169;
        *((_QWORD *)v11 + 5) = v171 + 2;
        LODWORD(v171) = v172;
        v122 = &v117[v172];
        v121 = (_DWORD)v171 + 1;
      }
      else
      {
        v120 = v119;
        v121 = v119 + 1;
        v122 = &v117[v120];
      }
    }
    else
    {
      v264 = (_QWORD *)sub_186B270(0x18u);
      v117 = v264 + 1;
      *v264 = 2;
      v121 = 1;
      *((_QWORD *)v11 + 5) = v117;
      v122 = v117;
    }
    *v122 = v118;
    *((_DWORD *)v117 - 1) = v121;
LABEL_98:
    ++v68;
    LODWORD(v345) = v340 + 1;
  }
  while ( (unsigned int)v68 < a6 );
  if ( !v321 )
  {
    result = v312;
    if ( v312 )
    {
      v124 = *(_DWORD *)(v312 - 4);
      if ( v124 )
      {
        do
        {
LABEL_103:
          v125 = v124 - 1;
          v126 = *(unsigned int *)(v312 + 4LL * v125);
          *(_DWORD *)(v312 - 4) = v125;
          v127 = *((_QWORD *)v11 + 6);
          v341 = v126;
          if ( v127 )
            v128 = *(_DWORD *)(v127 - 4);
          else
            v128 = 0;
          v342 = v128;
          v129 = (__int64 *)(a7 + 8 * v126);
          v130 = *v129;
          if ( *(_DWORD *)(*(_QWORD *)(*v129 + 8) + 32LL) == 4 )
            v130 = *(_QWORD *)(v130 + 64);
          v345 = sub_57E220(*((_QWORD *)v11 + 4), a2, 0, *(_DWORD *)(v130 + 24));
          v131 = v345;
          sub_57F8E0((_QWORD *)v11 + 6, &v345);
          sub_57FA00((_QWORD *)v11 + 7, &v342);
          LODWORD(v350) = 1;
          sub_57E570((unsigned int **)v11 + 8, (unsigned int *)&v350);
          sub_57FA00((_QWORD *)v11 + 9, &v341);
          LODWORD(v350) = 0;
          sub_57E570((unsigned int **)v11 + 10, (unsigned int *)&v350);
          v350 = (unsigned int *)sub_4C4750(v338, v131, *v129, a8, a9, a10, 0);
          sub_57E690((_QWORD *)v11 + 5, &v350);
          v124 = *(_DWORD *)(v312 - 4);
        }
        while ( v124 );
        result = sub_186B220((void *)(v312 - 8));
        if ( v321 )
          goto LABEL_109;
      }
      else
      {
        result = sub_186B220((void *)(v312 - 8));
      }
    }
    goto LABEL_110;
  }
  v123 = *(_DWORD *)(v321 - 4);
  if ( v123 )
  {
    if ( !v312 || !*(_DWORD *)(v312 - 4) )
      goto LABEL_235;
    v268 = v123 - 1;
    v269 = *(unsigned int *)(v321 + 4LL * v268);
    *(_DWORD *)(v321 - 4) = v268;
    v270 = *(_DWORD *)(v312 - 4);
    v342 = v269;
    v271 = *(_DWORD *)(v312 + 4LL * (unsigned int)--v270);
    *(_DWORD *)(v312 - 4) = v270;
    LODWORD(v345) = v271;
LABEL_260:
    v272 = (__int64 *)(a4 + 8 * v269);
    while ( 1 )
    {
      sub_57FA00((_QWORD *)v11 + 7, &v342);
      LODWORD(v350) = 0;
      sub_57E570((unsigned int **)v11 + 8, (unsigned int *)&v350);
      sub_57FA00((_QWORD *)v11 + 9, (unsigned int *)&v345);
      LODWORD(v350) = 0;
      sub_57E570((unsigned int **)v11 + 10, (unsigned int *)&v350);
      v273 = sub_4C4750(v338, *v272, *(_QWORD *)(a7 + 8LL * (unsigned int)v345), a8, a9, a10, 0);
      v274 = *((_QWORD **)v11 + 5);
      v275 = v273;
      if ( v274 )
      {
        v276 = *((_DWORD *)v274 - 1);
        if ( v276 == *((_DWORD *)v274 - 2) )
        {
          v285 = (3 * v276 + 1) >> 1;
          v286 = 8 * v285 + 8;
          if ( 8 * v276 + 8 >= (unsigned int)v286 || v276 >= v285 )
          {
            v290 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v350, "Overflow encountered when expanding vector");
            *v290 = (char *)off_1C63128;
            sub_2333C0(v290 + 1, &v350);
            sub_233E40((__int64)&v350);
            __cxa_throw(v290, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v337 = (3 * v276 + 1) >> 1;
          v287 = (unsigned int *)sub_186B300(v274 - 1, v286);
          v288 = v287[1];
          v274 = v287 + 2;
          *((_QWORD *)v11 + 5) = v287 + 2;
          *v287 = v337;
          LODWORD(v287) = v288;
          v279 = &v274[v288];
          v278 = (_DWORD)v287 + 1;
        }
        else
        {
          v277 = v276;
          v278 = v276 + 1;
          v279 = &v274[v277];
        }
      }
      else
      {
        v289 = (_QWORD *)sub_186B270(0x18u);
        *v289 = 2;
        v278 = 1;
        v274 = v289 + 1;
        *((_QWORD *)v11 + 5) = v274;
        v279 = v274;
      }
      *v279 = v275;
      v258 = v312;
      *((_DWORD *)v274 - 1) = v278;
      v280 = *(_DWORD *)(v312 - 4);
      v281 = *(_DWORD *)(v321 - 4);
      if ( v281 )
      {
        if ( !v280 )
        {
LABEL_270:
          v284 = (unsigned int)(v281 - 1);
          v269 = *(unsigned int *)(v321 + 4 * v284);
          *(_DWORD *)(v321 - 4) = v284;
          v342 = v269;
          goto LABEL_260;
        }
      }
      else if ( !v280 )
      {
        goto LABEL_242;
      }
      v282 = (unsigned int)(v280 - 1);
      v283 = *(_DWORD *)(v312 + 4 * v282);
      *(_DWORD *)(v312 - 4) = v282;
      LODWORD(v345) = v283;
      v281 = *(_DWORD *)(v321 - 4);
      if ( v281 )
        goto LABEL_270;
    }
  }
  if ( v312 )
  {
    v124 = *(_DWORD *)(v312 - 4);
    if ( v124 )
      goto LABEL_103;
LABEL_241:
    v258 = v312;
LABEL_242:
    sub_186B220((void *)(v258 - 8));
  }
LABEL_109:
  result = sub_186B220((void *)(v321 - 8));
LABEL_110:
  if ( ptr )
    return sub_186B220(ptr);
  return result;
}

