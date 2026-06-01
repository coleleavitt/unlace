__int64 __fastcall sub_604900(struct _Unwind_Exception *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  char **v7; // r12
  char **exception; // rbx
  char **v9; // rbx
  char **v10; // r12
  char **v11; // r12
  char **v12; // r12
  _QWORD *private_2; // rbx
  _QWORD *v14; // r12
  __int64 v16; // rsi
  _Unwind_Word private_1; // rdi
  bool v18; // zf
  __int64 v19; // r12
  unsigned int v20; // r14d
  __int64 v21; // rbx
  unsigned __int64 v22; // r13
  _QWORD *v23; // rax
  unsigned __int64 *v24; // rax
  int v25; // edx
  unsigned __int64 v26; // r14
  unsigned __int64 *v27; // rcx
  unsigned int v28; // edx
  _Unwind_Exception_Class v29; // r13
  __int64 v30; // rsi
  _DWORD *v31; // rax
  _DWORD *v32; // rdi
  _DWORD *v33; // rsi
  unsigned __int64 *v34; // r14
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r13
  _QWORD *v38; // rax
  __int64 v39; // r14
  __int64 v40; // r12
  unsigned __int64 *v41; // rcx
  int v42; // eax
  unsigned __int64 *v43; // rbx
  unsigned int v44; // eax
  unsigned __int64 *v45; // rcx
  unsigned __int64 *v46; // r14
  unsigned __int64 *v47; // r13
  void *v48; // r15
  __int64 v49; // rax
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // r14
  int v51; // r9d
  __int64 v52; // rax
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // r12
  unsigned __int64 v57; // r12
  unsigned __int64 *v58; // r14
  unsigned __int64 v59; // rsi
  _DWORD *v60; // rsi
  __int64 v61; // rdi
  unsigned __int64 *v62; // rbx
  unsigned __int64 v63; // r14
  unsigned __int64 v64; // rsi
  unsigned int v66; // r15d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rax
  int v70; // edx
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  int v74; // r9d
  _DWORD *v75; // rsi
  _DWORD *v76; // rax
  void *v77; // rdi
  __int64 v78; // rax
  _DWORD *v79; // r14
  _DWORD *v80; // r13
  unsigned __int64 *v81; // r15
  unsigned __int64 *v82; // r13
  int v83; // r13d
  __int64 v84; // rbx
  __int64 v85; // r13
  __int64 v86; // rcx
  int v87; // eax
  unsigned __int64 *v88; // rcx
  unsigned __int64 *v89; // rdx
  void *v90; // r15
  unsigned int v91; // eax
  unsigned int v92; // ecx
  size_t v93; // rsi
  unsigned int *v94; // rax
  _Unwind_Exception_Class v95; // rbx
  _DWORD *v96; // rax
  _DWORD *v97; // rsi
  _Unwind_Exception_Class v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rbx
  void *v101; // rsi
  void *v102; // rdi
  char *v103; // r13
  _BYTE *v104; // rdi
  _DWORD **v105; // r15
  _DWORD *v106; // r12
  void *v107; // rcx
  void *v108; // rdi
  _DWORD *v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rsi
  int v112; // eax
  unsigned __int64 *v113; // rsi
  unsigned int v114; // eax
  unsigned int v115; // r8d
  size_t v116; // rsi
  unsigned int *v117; // rax
  __int64 v118; // rsi
  unsigned int v119; // ecx
  size_t v120; // rsi
  unsigned int v121; // r15d
  unsigned int *v122; // rax
  __int64 v123; // rcx
  _QWORD *v124; // rax
  _Unwind_Exception_Class v125; // rsi
  char v126; // al
  __int64 v127; // r12
  int v128; // r9d
  void *v129; // r12
  void *v130; // rdi
  int v131; // ecx
  int v132; // r8d
  int v133; // r9d
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 *v136; // rbx
  unsigned __int64 v137; // r15
  __int64 v138; // rsi
  _DWORD *v139; // r15
  unsigned __int64 *v140; // r13
  unsigned __int64 v141; // rdx
  unsigned __int64 v142; // rsi
  int v143; // edx
  _BYTE *v144; // r13
  __int64 v145; // r8
  __int64 *v146; // r13
  __int16 v147; // dx
  __int64 *v148; // r15
  unsigned int v149; // r13d
  unsigned int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // rdx
  char v153; // si
  int v154; // eax
  char *v155; // rsi
  __int16 v156; // ax
  unsigned int v157; // r13d
  _DWORD *v158; // rax
  _QWORD *v159; // rax
  __int64 v160; // rcx
  _QWORD *v161; // rcx
  __int64 v162; // rax
  unsigned int v163; // edx
  _DWORD *v164; // rax
  unsigned int v165; // esi
  unsigned int v166; // edx
  unsigned int v167; // r9d
  __int64 v168; // rsi
  char v169; // di
  __int64 v170; // r10
  __int64 v171; // rcx
  __int64 *v172; // rdx
  __int64 v173; // rdx
  int v174; // r12d
  int v175; // edx
  _QWORD *v176; // r13
  __int64 v177; // rsi
  __int64 *v178; // rcx
  _QWORD *v179; // rax
  __int64 v180; // rsi
  _QWORD *v181; // rsi
  __int64 *v182; // rcx
  unsigned int v183; // eax
  __int64 v184; // rsi
  int v185; // eax
  __int64 *v186; // rsi
  __int64 v187; // r12
  char *v188; // rdi
  __int64 v189; // r10
  __int64 v190; // r11
  __int64 v191; // r12
  __int64 v192; // rax
  unsigned __int64 v193; // rdx
  __int64 *v194; // rdi
  __int64 v195; // r8
  char *v196; // rcx
  char *v197; // rdi
  char *v198; // rax
  __int64 v199; // rdx
  __int64 v200; // r12
  char *v201; // rax
  char *v202; // rdi
  unsigned __int64 v203; // rax
  __int64 v204; // r8
  __int64 v205; // r12
  __int64 v206; // rax
  unsigned __int64 v207; // rcx
  __int64 *v208; // rdi
  __int64 v209; // r8
  void *v210; // r15
  __int64 v211; // r12
  _BYTE *v212; // rax
  char *v213; // rdi
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // r10
  __int64 v217; // r11
  unsigned __int64 v218; // rax
  __int64 v219; // r9
  unsigned int v220; // esi
  __int64 *v221; // rcx
  unsigned int v222; // r12d
  size_t v223; // rsi
  unsigned int *v224; // rax
  __int64 v225; // rsi
  __int64 v226; // r12
  __int64 v227; // rax
  unsigned __int64 v228; // rcx
  __int64 *v229; // rdi
  __int64 v230; // r8
  __int64 v231; // rax
  __int64 v232; // rcx
  _QWORD *v233; // rax
  unsigned int v234; // r12d
  unsigned int v235; // eax
  unsigned int *v236; // rax
  _QWORD *v237; // rax
  void *v238; // [rsp+0h] [rbp-340h]
  void *v239; // [rsp+0h] [rbp-340h]
  _Unwind_Exception *v240; // [rsp+0h] [rbp-340h]
  int v241; // [rsp+8h] [rbp-338h]
  int v242; // [rsp+10h] [rbp-330h]
  _Unwind_Exception_Class v243; // [rsp+10h] [rbp-330h]
  __int64 v244; // [rsp+18h] [rbp-328h]
  __int64 v245; // [rsp+18h] [rbp-328h]
  __int64 v246; // [rsp+18h] [rbp-328h]
  __int64 v247; // [rsp+18h] [rbp-328h]
  __int64 v248; // [rsp+20h] [rbp-320h]
  __int64 v249; // [rsp+38h] [rbp-308h]
  void *v250; // [rsp+40h] [rbp-300h]
  __int64 v251; // [rsp+40h] [rbp-300h]
  __int64 v252; // [rsp+40h] [rbp-300h]
  __int64 v253; // [rsp+40h] [rbp-300h]
  __int64 v254; // [rsp+40h] [rbp-300h]
  __int64 v255; // [rsp+40h] [rbp-300h]
  __int64 v256; // [rsp+40h] [rbp-300h]
  __int64 v257; // [rsp+40h] [rbp-300h]
  unsigned __int8 v259; // [rsp+50h] [rbp-2F0h]
  unsigned int v260; // [rsp+50h] [rbp-2F0h]
  __int64 *v261; // [rsp+50h] [rbp-2F0h]
  unsigned __int64 v262; // [rsp+50h] [rbp-2F0h]
  unsigned __int8 v263; // [rsp+5Ch] [rbp-2E4h]
  unsigned int v264; // [rsp+5Ch] [rbp-2E4h]
  struct _Unwind_Exception *v266; // [rsp+78h] [rbp-2C8h]
  int v267; // [rsp+78h] [rbp-2C8h]
  void *v268; // [rsp+88h] [rbp-2B8h] BYREF
  int v269[4]; // [rsp+90h] [rbp-2B0h] BYREF
  _Unwind_Exception_Class exception_class; // [rsp+A0h] [rbp-2A0h] BYREF
  unsigned __int64 *v271; // [rsp+A8h] [rbp-298h]
  _DWORD *v272; // [rsp+B0h] [rbp-290h] BYREF
  __int64 v273; // [rsp+B8h] [rbp-288h]
  __int64 v274[4]; // [rsp+C0h] [rbp-280h] BYREF
  void *v275; // [rsp+E0h] [rbp-260h] BYREF
  __int64 v276; // [rsp+E8h] [rbp-258h]
  _BYTE v277[128]; // [rsp+F0h] [rbp-250h] BYREF
  void *v278; // [rsp+170h] [rbp-1D0h] BYREF
  __int64 v279; // [rsp+178h] [rbp-1C8h]
  _BYTE v280[128]; // [rsp+180h] [rbp-1C0h] BYREF
  void *ptr[2]; // [rsp+200h] [rbp-140h] BYREF
  __int64 v282; // [rsp+210h] [rbp-130h] BYREF
  int v283; // [rsp+218h] [rbp-128h]

  private_2 = (_QWORD *)a1[1].private_2;
  v266 = a1;
  if ( private_2 )
  {
    v14 = &private_2[*((unsigned int *)private_2 - 1)];
    if ( private_2 >= v14 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v16 = *private_2;
        if ( *private_2 )
        {
          private_1 = a1[1].private_1;
          v18 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++private_2 >= v14 )
          goto LABEL_8;
      }
      sub_15D7BC0(private_1, v16);
      ++private_2;
    }
    while ( private_2 < v14 );
LABEL_8:
    private_2 = (_QWORD *)a1[1].private_2;
    v266 = a1;
    if ( private_2 )
LABEL_9:
      *((_DWORD *)private_2 - 1) = 0;
  }
  ptr[0] = nullptr;
  sub_14B7810((int)v269, v266[1].exception_class, (int)ptr, a4, a5, a6, v238);
  sub_18572D0(ptr);
  v271 = nullptr;
  v19 = *(unsigned int *)(a2 + 68);
  v20 = *(_DWORD *)(a2 + 56);
  exception_class = v266[1].exception_class;
  if ( (unsigned int)v19 < v20 )
  {
    v21 = a2 + 8LL * (unsigned int)v19;
    v22 = *(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v21 + 80) > 7u )
      ++*(_DWORD *)(v22 + 8);
    v23 = (_QWORD *)sub_186B270(0x18u);
    *v23 = 2;
    v24 = v23 + 1;
    v271 = v24;
    v25 = 1;
    v26 = a2 + 8 * ((unsigned int)v19 + (unsigned __int64)(v20 - 1 - (unsigned int)v19)) + 8;
    v27 = v24;
    while ( 1 )
    {
      v21 += 8;
      *v24 = v22;
      *((_DWORD *)v27 - 1) = v25;
      if ( v26 == v21 )
        break;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v21 + 80) > 7u )
          ++*(_DWORD *)(v22 + 8);
        v28 = *((_DWORD *)v27 - 1);
        if ( v28 == *((_DWORD *)v27 - 2) )
          break;
        v21 += 8;
        v27[v28] = v22;
        *((_DWORD *)v27 - 1) = v28 + 1;
        if ( v26 == v21 )
          goto LABEL_19;
      }
      v66 = (3 * v28 + 1) >> 1;
      v67 = 8 * v66 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v67 || v28 >= v66 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)ptr, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, ptr);
        sub_233E40((__int64)ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v68 = (unsigned int *)sub_186B300(v27 - 1, v67);
      v27 = (unsigned __int64 *)(v68 + 2);
      *v68 = v66;
      v69 = v68[1];
      v271 = v27;
      v70 = v69;
      v24 = &v27[v69];
      v25 = v70 + 1;
    }
  }
LABEL_19:
  sub_15EE300(&exception_class);
  v272 = nullptr;
  v29 = exception_class;
  v249 = v266[1].exception_class;
  v273 = v249;
  if ( v271 )
    v30 = *((unsigned int *)v271 - 1);
  else
    v30 = 0;
  v31 = (_DWORD *)sub_15EC1C0(exception_class, v30);
  v32 = v31;
  if ( v31 )
    ++v31[2];
  v33 = v272;
  v272 = v31;
  if ( v33 )
  {
    v18 = v33[2]-- == 1;
    if ( v18 )
    {
      sub_15D7BC0(v29, v33);
      v32 = v272;
    }
  }
  v259 = sub_604120((__int64)v32, v273);
  if ( !v259 )
  {
    sub_63DAD0(a3, a2, a7);
    v109 = v272;
    if ( !v272 || (v110 = v273, v18 = v272[2] == 1, --v272[2], !v18) )
    {
      v263 = 0;
      goto LABEL_67;
    }
    v100 = 0;
    goto LABEL_161;
  }
  v34 = v271;
  if ( v271 )
  {
    v35 = (unsigned __int64)&v271[*((unsigned int *)v271 - 1)];
    if ( (unsigned __int64)v271 >= v35 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v18 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v34 >= v35 )
          goto LABEL_34;
      }
      sub_15D7BC0(exception_class, v36);
      ++v34;
    }
    while ( (unsigned __int64)v34 < v35 );
LABEL_34:
    v34 = v271;
    if ( v271 )
LABEL_35:
      *((_DWORD *)v34 - 1) = 0;
  }
  sub_64B480(v266->private_2);
  sub_D03850(&v272);
  sub_14B9B80(v269, &v272);
  v263 = sub_604120((__int64)v272, v273);
  if ( v263 )
  {
    sub_603D00((__int64)ptr, v266, (int)v272);
    v75 = v272;
    v76 = ptr[0];
    ptr[0] = v272;
    v272 = v76;
    if ( ptr[0] )
    {
      v77 = ptr[1];
      v18 = v75[2]-- == 1;
      if ( v18 )
        sub_15D7BC0(v77, v75);
    }
    ptr[0] = nullptr;
    v78 = sub_D47320(v266[1].exception_class, (int)ptr, v71, v72, v73, v74, v239);
    v79 = (_DWORD *)v78;
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    sub_18572D0(ptr);
    v80 = (_DWORD *)sub_186B270(0x80u);
    sub_ED29A0(v80, v266[1].exception_class, 1, 0);
    ++v80[8];
    v275 = v277;
    v268 = v80;
    v276 = 0x1000000000LL;
    sub_15EEF60(v272);
    v81 = v271;
    if ( v271 )
    {
      v82 = &v271[*((unsigned int *)v271 - 1)];
      if ( v82 != v271 )
      {
        do
          sub_EDBA20((int)v268, *v81++, 0, v240, v241, v242, v244, v248);
        while ( v82 != v81 );
      }
    }
    v83 = sub_ED6430(v268);
    (*(void (__fastcall **)(_DWORD *, void **, void **))(*(_QWORD *)v79 + 128LL))(v79, &v268, &v275);
    if ( (_DWORD)v276 == 1 )
    {
      v139 = *(_DWORD **)v275;
      if ( *(_QWORD *)v275 )
        ++v139[8];
      if ( v83 != (unsigned int)sub_ED6430(v139) )
      {
        v140 = v271;
        if ( v271 )
        {
          v141 = (unsigned __int64)&v271[*((unsigned int *)v271 - 1)];
          if ( (unsigned __int64)v271 >= v141 )
            goto LABEL_177;
          do
          {
            v142 = *v140;
            if ( *v140 )
            {
              v18 = (*(_DWORD *)(v142 + 8))-- == 1;
              if ( v18 )
              {
                v262 = v141;
                sub_15D7BC0(exception_class, v142);
                v141 = v262;
              }
            }
            ++v140;
          }
          while ( (unsigned __int64)v140 < v141 );
          v140 = v271;
          if ( v271 )
LABEL_177:
            *((_DWORD *)v140 - 1) = 0;
        }
        sub_ED6190(v139, &exception_class);
        sub_15EE300(&exception_class);
      }
      v18 = v139[8]-- == 1;
      if ( v18 )
      {
        sub_ED44E0(v139);
        sub_186B220(v139);
      }
    }
    if ( (_DWORD)v19 )
    {
      v84 = a2 + 8 * v19;
      v85 = a2;
      while ( 1 )
      {
        sub_603D00((__int64)&v278, v266, *(_DWORD *)(v85 + 80) & 0xFFFFFFF8);
        v89 = v271;
        v90 = v278;
        if ( !v271 )
          break;
        v91 = *((_DWORD *)v271 - 1);
        if ( v91 == *((_DWORD *)v271 - 2) )
        {
          v92 = (3 * v91 + 1) >> 1;
          v93 = 8 * v92 + 8;
          if ( 8 * v91 + 8 >= (unsigned int)v93 || v91 >= v92 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)ptr, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, ptr);
            sub_233E40((__int64)ptr);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v260 = (3 * v91 + 1) >> 1;
          v94 = (unsigned int *)sub_186B300(v271 - 1, v93);
          v89 = (unsigned __int64 *)(v94 + 2);
          v85 += 8;
          v271 = (unsigned __int64 *)(v94 + 2);
          *v94 = v260;
          LODWORD(v94) = v94[1];
          v89[(unsigned int)v94] = (unsigned __int64)v90;
          *((_DWORD *)v89 - 1) = (_DWORD)v94 + 1;
          if ( v84 == v85 )
          {
LABEL_98:
            v95 = exception_class;
            goto LABEL_99;
          }
        }
        else
        {
          v86 = v91;
          v87 = v91 + 1;
          v88 = &v271[v86];
LABEL_92:
          v85 += 8;
          *v88 = (unsigned __int64)v90;
          *((_DWORD *)v89 - 1) = v87;
          if ( v84 == v85 )
            goto LABEL_98;
        }
      }
      v124 = (_QWORD *)sub_186B270(0x18u);
      v89 = v124 + 1;
      *v124 = 2;
      v87 = 1;
      v271 = v89;
      v88 = v89;
      goto LABEL_92;
    }
    v89 = v271;
    v95 = exception_class;
    if ( v271 )
LABEL_99:
      LODWORD(v19) = *((_DWORD *)v89 - 1);
    v96 = (_DWORD *)sub_15EC1C0(v95, (unsigned int)v19);
    if ( v96 )
      ++v96[2];
    v97 = v272;
    v272 = v96;
    if ( v97 )
    {
      v18 = v97[2]-- == 1;
      if ( v18 )
        sub_15D7BC0(v95, v97);
    }
    sub_14B9B80(v269, &v272);
    v98 = v266[1].exception_class;
    sub_603D00((__int64)ptr, v266, *(_QWORD *)(a2 + 40));
    v99 = sub_15E1B70(v98);
    v100 = v99;
    if ( v99 )
      ++*(_DWORD *)(v99 + 8);
    v101 = ptr[0];
    if ( ptr[0] )
    {
      v102 = ptr[1];
      v18 = (*((_DWORD *)ptr[0] + 2))-- == 1;
      if ( v18 )
        sub_15D7BC0(v102, v101);
    }
    if ( (unsigned __int8)sub_604120(v100, v249) )
    {
      v263 = 0;
LABEL_112:
      v103 = (char *)v275 + 8 * (unsigned int)v276;
      v104 = v275;
      if ( v275 < v103 )
      {
        v105 = (_DWORD **)v275;
        do
        {
          while ( 1 )
          {
            v106 = *v105;
            if ( *v105 )
            {
              v18 = v106[8]-- == 1;
              if ( v18 )
                break;
            }
            if ( ++v105 >= (_DWORD **)v103 )
              goto LABEL_118;
          }
          sub_ED44E0(v106);
          sub_186B220(v106);
          ++v105;
        }
        while ( v105 < (_DWORD **)v103 );
LABEL_118:
        v104 = v275;
      }
      if ( v104 != v277 && v104 )
        sub_186B220(v104);
      v107 = v268;
      v108 = v268;
      if ( v268 )
      {
        v267 = *((_DWORD *)v268 + 8);
        *((_DWORD *)v268 + 8) = v267 - 1;
        if ( v267 == 1 )
        {
          v210 = v107;
          sub_ED44E0(v108);
          sub_186B220(v210);
        }
      }
      v18 = v79[2]-- == 1;
      if ( v18 )
      {
        (**(void (__fastcall ***)(_DWORD *))v79)(v79);
        sub_186B220(v79);
      }
      v109 = v272;
      if ( !v272 )
        goto LABEL_162;
      v110 = v273;
      v18 = v272[2]-- == 1;
      if ( !v18 )
        goto LABEL_162;
      v259 = v263;
LABEL_161:
      sub_15D7BC0(v110, v109);
      v263 = v259;
LABEL_162:
      if ( v100 )
      {
        v18 = (*(_DWORD *)(v100 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v249, v100);
      }
      goto LABEL_67;
    }
    v243 = v266[1].exception_class;
    v125 = v243;
    v278 = v280;
    v279 = 0x1000000000LL;
    if ( *(_DWORD *)(v100 + 8) > 1u )
    {
      v126 = *(_BYTE *)(v100 + 6);
      if ( (v126 & 1) != 0 )
      {
        v261 = nullptr;
        LODWORD(v127) = 0;
LABEL_147:
        sub_16983B0(ptr, v125, (unsigned int)v127, v261, v100);
        v129 = ptr[0];
        v130 = ptr[1];
        ptr[0] = (void *)v100;
        v18 = (*(_DWORD *)(v100 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v130, v100);
        sub_631ED0(v266[1].exception_cleanup, (_DWORD)v129, 0, a3, a2 + 72, v128);
        v134 = *(_QWORD *)(a3 + 24);
        v135 = 0x7FFFFFFF8LL;
        if ( v134 )
          v135 = 8LL * (unsigned int)(*(_DWORD *)(v134 - 4) - 1);
        sub_62F7F0(v266[1].exception_cleanup, a2, *(_QWORD *)(v134 + v135), v131, v132, v133);
        if ( v261 )
        {
          v136 = v261;
          if ( v261 < &v261[*((unsigned int *)v261 - 1)] )
          {
            v137 = (unsigned __int64)&v261[*((unsigned int *)v261 - 1)];
            do
            {
              while ( 1 )
              {
                v138 = *v136;
                if ( *v136 )
                {
                  v18 = (*(_DWORD *)(v138 + 8))-- == 1;
                  if ( v18 )
                    break;
                }
                if ( (unsigned __int64)++v136 >= v137 )
                  goto LABEL_158;
              }
              ++v136;
              sub_15D7BC0(v243, v138);
            }
            while ( (unsigned __int64)v136 < v137 );
          }
LABEL_158:
          sub_186B220(v261 - 1);
        }
        v100 = (__int64)v129;
        goto LABEL_112;
      }
      *(_BYTE *)(v100 + 6) = v126 | 1;
      v143 = v279;
      v144 = v280;
      if ( (unsigned int)v279 >= HIDWORD(v279) )
      {
        v211 = (unsigned int)(2 * HIDWORD(v279));
        v212 = (_BYTE *)sub_186B270(8 * v211);
        v143 = v279;
        v213 = (char *)v278;
        v144 = v212;
        if ( (_DWORD)v279 )
        {
          if ( (unsigned int)(v279 - 1) <= 2 || v212 == (char *)v278 + 8 )
          {
            v231 = 0;
            v232 = 8LL * (unsigned int)v279;
            do
            {
              *(_QWORD *)&v144[v231] = *(_QWORD *)&v213[v231];
              v231 += 8;
            }
            while ( v232 != v231 );
          }
          else
          {
            v214 = 0;
            v215 = 16LL * ((unsigned int)v279 >> 1);
            do
            {
              *(__m128i *)&v144[v214] = _mm_loadu_si128((const __m128i *)&v213[v214]);
              v214 += 16;
            }
            while ( v215 != v214 );
            if ( (v143 & 1) != 0 )
              *(_QWORD *)&v144[8 * (v143 & 0xFFFFFFFE)] = *(_QWORD *)&v213[8 * (v143 & 0xFFFFFFFE)];
          }
        }
        if ( v213 != v280 && v213 )
        {
          sub_186B220(v213);
          v143 = v279;
        }
        v278 = v144;
        HIDWORD(v279) = v211;
      }
      *(_QWORD *)&v144[8 * v143] = v100;
      LODWORD(v279) = v143 + 1;
    }
    v145 = v100;
    LODWORD(v127) = 0;
    v146 = &v282;
    ptr[0] = &v282;
    v282 = v100;
    v283 = 0;
    ptr[1] = (void *)0x1000000001LL;
    v261 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v147 = *(_WORD *)(v145 + 4);
        v148 = &v146[2 * (unsigned int)v127];
        if ( v147 == 1 )
          goto LABEL_216;
        if ( v147 == 2 )
          break;
        if ( v147 )
        {
          sub_1872CE0("");
          sub_1873130(114, 100);
        }
        v149 = *(_DWORD *)(v145 + 24);
        v150 = *((_DWORD *)v148 + 2);
        if ( v150 < v149 )
        {
          while ( 1 )
          {
            v151 = v150++;
            v152 = *(_QWORD *)(v145 + 8 * v151 + 32);
            *((_DWORD *)v148 + 2) = v150;
            if ( *(_DWORD *)(v152 + 8) > 1u )
            {
              v153 = *(_BYTE *)(v152 + 6);
              if ( (v153 & 1) != 0 )
                goto LABEL_197;
              *(_BYTE *)(v152 + 6) = v153 | 1;
              v154 = v279;
              if ( (unsigned int)v279 >= HIDWORD(v279) )
              {
                v245 = v145;
                v187 = (unsigned int)(2 * HIDWORD(v279));
                v251 = v152;
                v155 = (char *)sub_186B270(8 * v187);
                v154 = v279;
                v188 = (char *)v278;
                v152 = v251;
                v145 = v245;
                if ( (_DWORD)v279 )
                {
                  if ( (unsigned int)(v279 - 1) <= 2 || v155 == (char *)v278 + 8 )
                  {
                    v216 = 0;
                    v217 = 8LL * (unsigned int)v279;
                    do
                    {
                      *(_QWORD *)&v155[v216] = *(_QWORD *)&v188[v216];
                      v216 += 8;
                    }
                    while ( v217 != v216 );
                  }
                  else
                  {
                    v189 = 0;
                    v190 = 16LL * ((unsigned int)v279 >> 1);
                    do
                    {
                      *(__m128i *)&v155[v189] = _mm_loadu_si128((const __m128i *)&v188[v189]);
                      v189 += 16;
                    }
                    while ( v190 != v189 );
                    if ( (v154 & 1) != 0 )
                      *(_QWORD *)&v155[8 * (v154 & 0xFFFFFFFE)] = *(_QWORD *)&v188[8 * (v154 & 0xFFFFFFFE)];
                  }
                }
                if ( v188 != v280 && v188 )
                {
                  sub_186B220(v188);
                  v154 = v279;
                  v145 = v245;
                  v152 = v251;
                }
                v278 = v155;
                HIDWORD(v279) = v187;
              }
              else
              {
                v155 = (char *)v278;
              }
              *(_QWORD *)&v155[8 * v154] = v152;
              LODWORD(v279) = v154 + 1;
            }
            v156 = *(_WORD *)(v152 + 4);
            if ( v156 != 1 )
            {
              if ( v156 == 2 )
              {
                v177 = LODWORD(ptr[1]);
                if ( LODWORD(ptr[1]) >= HIDWORD(ptr[1]) )
                {
                  v252 = v152;
                  v205 = (unsigned int)(2 * HIDWORD(ptr[1]));
                  v206 = sub_186B270(16 * v205);
                  v207 = 0;
                  v146 = (__int64 *)v206;
                  v208 = (__int64 *)ptr[0];
                  v152 = v252;
                  v177 = LODWORD(ptr[1]);
                  v209 = 16LL * LODWORD(ptr[1]);
                  if ( LODWORD(ptr[1]) )
                  {
                    do
                    {
                      *(__m128i *)(v206 + v207) = _mm_loadu_si128((const __m128i *)&v208[v207 / 8]);
                      v207 += 16LL;
                    }
                    while ( v209 != v207 );
                  }
                  if ( v208 != &v282 && v208 )
                  {
                    sub_186B220(v208);
                    v177 = LODWORD(ptr[1]);
                    v152 = v252;
                  }
                  ptr[0] = v146;
                  HIDWORD(ptr[1]) = v205;
                }
                else
                {
                  v146 = (__int64 *)ptr[0];
                }
                v178 = &v146[2 * v177];
                *v178 = v152;
                *((_DWORD *)v178 + 2) = 0;
                v173 = LODWORD(ptr[1]);
                v174 = LODWORD(ptr[1]) + 1;
                goto LABEL_233;
              }
              if ( v156 )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( *(_DWORD *)(v152 + 24) )
              {
                v220 = (unsigned int)ptr[1];
                if ( LODWORD(ptr[1]) >= HIDWORD(ptr[1]) )
                {
                  v254 = v152;
                  v226 = (unsigned int)(2 * HIDWORD(ptr[1]));
                  v227 = sub_186B270(16 * v226);
                  v228 = 0;
                  v146 = (__int64 *)v227;
                  v229 = (__int64 *)ptr[0];
                  v152 = v254;
                  v220 = (unsigned int)ptr[1];
                  v230 = 16LL * LODWORD(ptr[1]);
                  if ( LODWORD(ptr[1]) )
                  {
                    do
                    {
                      *(__m128i *)(v227 + v228) = _mm_loadu_si128((const __m128i *)&v229[v228 / 8]);
                      v228 += 16LL;
                    }
                    while ( v230 != v228 );
                  }
                  if ( v229 && v229 != &v282 )
                  {
                    sub_186B220(v229);
                    v220 = (unsigned int)ptr[1];
                    v152 = v254;
                  }
                  ptr[0] = v146;
                  HIDWORD(ptr[1]) = v226;
                }
                else
                {
                  v146 = (__int64 *)ptr[0];
                }
                v221 = &v146[2 * v220];
                *v221 = v152;
                *((_DWORD *)v221 + 2) = 0;
                v173 = LODWORD(ptr[1]);
                v174 = LODWORD(ptr[1]) + 1;
                goto LABEL_233;
              }
              v164 = *(_DWORD **)(*(_QWORD *)(v152 + 16) + 24LL);
              if ( !v164 || *v164 == -1 )
              {
                v179 = (_QWORD *)v266[1].private_2;
                if ( v179 )
                {
                  v180 = *((unsigned int *)v179 - 1);
                  if ( (_DWORD)v180 )
                  {
                    v181 = &v179[v180];
                    while ( v152 != *v179 )
                    {
                      if ( ++v179 == v181 )
                        goto LABEL_214;
                    }
                    ++*(_DWORD *)(v152 + 8);
                    if ( v261 )
                    {
                      v182 = v261;
                      v183 = *((_DWORD *)v261 - 1);
                      if ( v183 == *((_DWORD *)v261 - 2) )
                      {
                        v222 = (3 * v183 + 1) >> 1;
                        v223 = 8 * v222 + 8;
                        if ( 8 * v183 + 8 >= (unsigned int)v223 || v183 >= v222 )
                        {
                          v12 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(v274, "Overflow encountered when expanding vector");
                          *v12 = (char *)off_1C63128;
                          sub_2333C0(v12 + 1, v274);
                          sub_233E40((__int64)v274);
                          __cxa_throw(
                            v12,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v246 = v145;
                        v253 = v152;
                        v224 = (unsigned int *)sub_186B300(v261 - 1, v223);
                        v225 = v224[1];
                        v182 = (__int64 *)(v224 + 2);
                        *v224 = v222;
                        v261 = v182;
                        v152 = v253;
                        LODWORD(v224) = v225;
                        v145 = v246;
                        v186 = &v182[v225];
                        v185 = (_DWORD)v224 + 1;
                      }
                      else
                      {
                        v184 = v183;
                        v185 = v183 + 1;
                        v186 = &v261[v184];
                      }
                    }
                    else
                    {
                      v247 = v145;
                      v255 = v152;
                      v233 = (_QWORD *)sub_186B270(0x18u);
                      *v233 = 2;
                      v152 = v255;
                      v261 = v233 + 1;
                      v186 = v233 + 1;
                      v145 = v247;
                      v185 = 1;
                      v182 = v261;
                    }
                    *v186 = v152;
                    *((_DWORD *)v182 - 1) = v185;
                  }
                }
              }
            }
LABEL_214:
            v150 = *((_DWORD *)v148 + 2);
LABEL_197:
            if ( v150 >= v149 )
            {
              LODWORD(v127) = LODWORD(ptr[1]) - 1;
              break;
            }
          }
        }
        LODWORD(ptr[1]) = v127;
        if ( *(_WORD *)(v145 + 4)
          || (v157 = *(_DWORD *)(v145 + 24)) != 0
          || (v158 = *(_DWORD **)(*(_QWORD *)(v145 + 16) + 24LL)) != nullptr && *v158 != -1
          || (v159 = (_QWORD *)v266[1].private_2) == nullptr
          || (v160 = *((unsigned int *)v159 - 1), !(_DWORD)v160) )
        {
          v146 = (__int64 *)ptr[0];
        }
        else
        {
          v161 = &v159[v160];
          while ( *v159 != v145 )
          {
            if ( ++v159 == v161 )
            {
              v146 = (__int64 *)ptr[0];
              goto LABEL_217;
            }
          }
          ++*(_DWORD *)(v145 + 8);
          if ( v261 )
          {
            v157 = *((_DWORD *)v261 - 1);
            if ( v157 == *((_DWORD *)v261 - 2) )
            {
              v234 = (3 * v157 + 1) >> 1;
              v235 = 8 * v234 + 8;
              if ( 8 * v157 + 8 >= v235 || v157 >= v234 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v274, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, v274);
                sub_233E40((__int64)v274);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v256 = v145;
              v236 = (unsigned int *)sub_186B300(v261 - 1, v235);
              *v236 = v234;
              v157 = v236[1];
              v261 = (__int64 *)(v236 + 2);
              v145 = v256;
            }
          }
          else
          {
            v257 = v145;
            v237 = (_QWORD *)sub_186B270(0x18u);
            *v237 = 2;
            v145 = v257;
            v261 = v237 + 1;
          }
          v162 = v157;
          v163 = v157 + 1;
          LODWORD(v127) = ptr[1];
          v146 = (__int64 *)ptr[0];
          v261[v162] = v145;
          *((_DWORD *)v261 - 1) = v163;
        }
LABEL_217:
        if ( !(_DWORD)v127 )
        {
          if ( v146 != &v282 && v146 )
            sub_186B220(v146);
          v196 = (char *)v278;
          v197 = (char *)v278 + 8 * (unsigned int)v279;
          if ( v278 != v197 )
          {
            v198 = (char *)v278;
            do
            {
              v199 = *(_QWORD *)v198;
              v198 += 8;
              *(_BYTE *)(v199 + 6) &= ~1u;
            }
            while ( v197 != v198 );
            v197 = v196;
          }
          LODWORD(v279) = 0;
          if ( v196 && v196 != v280 )
            sub_186B220(v197);
          if ( v261 )
            LODWORD(v127) = *((_DWORD *)v261 - 1);
          v125 = v266[1].exception_class;
          goto LABEL_147;
        }
        v127 = (unsigned int)(v127 - 1);
        v145 = v146[2 * v127];
      }
      v165 = *(_DWORD *)(v145 + 72);
      v166 = *((_DWORD *)v148 + 2);
      v167 = v165 + *(_DWORD *)(v145 + 76) + 1;
      if ( v166 >= v167 )
      {
LABEL_215:
        LODWORD(v127) = LODWORD(ptr[1]) - 1;
LABEL_216:
        LODWORD(ptr[1]) = v127;
        goto LABEL_217;
      }
      if ( v166 )
        goto LABEL_227;
      v168 = *(_QWORD *)(v145 + 24);
      v166 = 1;
      *((_DWORD *)v148 + 2) = 1;
      if ( *(_DWORD *)(v168 + 8) > 1u )
        break;
LABEL_230:
      v171 = LODWORD(ptr[1]);
      if ( LODWORD(ptr[1]) >= HIDWORD(ptr[1]) )
      {
        v191 = (unsigned int)(2 * HIDWORD(ptr[1]));
        v192 = sub_186B270(16 * v191);
        v193 = 0;
        v146 = (__int64 *)v192;
        v194 = (__int64 *)ptr[0];
        v171 = LODWORD(ptr[1]);
        v195 = 16LL * LODWORD(ptr[1]);
        if ( LODWORD(ptr[1]) )
        {
          do
          {
            *(__m128i *)(v192 + v193) = _mm_loadu_si128((const __m128i *)&v194[v193 / 8]);
            v193 += 16LL;
          }
          while ( v195 != v193 );
        }
        if ( v194 != &v282 && v194 )
        {
          sub_186B220(v194);
          v171 = LODWORD(ptr[1]);
        }
        ptr[0] = v146;
        HIDWORD(ptr[1]) = v191;
      }
      else
      {
        v146 = (__int64 *)ptr[0];
      }
      v172 = &v146[2 * v171];
      *v172 = v168;
      *((_DWORD *)v172 + 2) = 0;
      v173 = LODWORD(ptr[1]);
      v174 = LODWORD(ptr[1]) + 1;
LABEL_233:
      LODWORD(ptr[1]) = v174;
      LODWORD(v127) = v174 - 1;
      v145 = v146[2 * v173];
    }
    while ( 1 )
    {
      v169 = *(_BYTE *)(v168 + 6);
      if ( (v169 & 1) == 0 )
      {
        *(_BYTE *)(v168 + 6) = v169 | 1;
        v175 = v279;
        if ( (unsigned int)v279 >= HIDWORD(v279) )
        {
          v200 = (unsigned int)(2 * HIDWORD(v279));
          v201 = (char *)sub_186B270(8 * v200);
          v175 = v279;
          v202 = (char *)v278;
          v176 = v201;
          if ( (_DWORD)v279 )
          {
            if ( (unsigned int)(v279 - 1) <= 2 || v201 == (char *)v278 + 8 )
            {
              v218 = 0;
              v219 = 8LL * (unsigned int)v279;
              do
              {
                v176[v218 / 8] = *(_QWORD *)&v202[v218];
                v218 += 8LL;
              }
              while ( v219 != v218 );
            }
            else
            {
              v203 = 0;
              v204 = 16LL * ((unsigned int)v279 >> 1);
              do
              {
                *(__m128i *)&v176[v203 / 8] = _mm_loadu_si128((const __m128i *)&v202[v203]);
                v203 += 16LL;
              }
              while ( v203 != v204 );
              if ( (v175 & 1) != 0 )
                v176[v175 & 0xFFFFFFFE] = *(_QWORD *)&v202[8 * (v175 & 0xFFFFFFFE)];
            }
          }
          if ( v202 != v280 && v202 )
          {
            sub_186B220(v202);
            v175 = v279;
          }
          v278 = v176;
          HIDWORD(v279) = v200;
        }
        else
        {
          v176 = v278;
        }
        v176[v175] = v168;
        LODWORD(v279) = v175 + 1;
        goto LABEL_230;
      }
      if ( v166 >= v167 )
        goto LABEL_215;
      v165 = *(_DWORD *)(v145 + 72);
LABEL_227:
      v170 = v166 - 1;
      if ( v165 < v166 )
        v170 = (unsigned int)v170 - v165;
      ++v166;
      v168 = *(_QWORD *)(16LL * *(unsigned int *)(v145 + 20) + v145 + 8 * v170 + 80);
      *((_DWORD *)v148 + 2) = v166;
      if ( *(_DWORD *)(v168 + 8) <= 1u )
        goto LABEL_230;
    }
  }
  v250 = (void *)v266[1].exception_class;
  v275 = v250;
  sub_15EEF60(v272);
  if ( (_DWORD)v19 )
  {
    v37 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a2 + 80) > 7u )
      ++*(_DWORD *)(v37 + 8);
    v38 = (_QWORD *)sub_186B270(0x18u);
    *v38 = 2;
    v39 = a2;
    v40 = a2 + 8 * v19;
    v41 = v38 + 1;
    v42 = 1;
    v43 = v41;
    while ( 1 )
    {
      v39 += 8;
      *v41 = v37;
      *((_DWORD *)v43 - 1) = v42;
      if ( v40 == v39 )
        break;
      while ( 1 )
      {
        v37 = *(_QWORD *)(v39 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v39 + 80) > 7u )
          ++*(_DWORD *)(v37 + 8);
        v44 = *((_DWORD *)v43 - 1);
        if ( v44 == *((_DWORD *)v43 - 2) )
          break;
        v39 += 8;
        v43[v44] = v37;
        *((_DWORD *)v43 - 1) = v44 + 1;
        if ( v40 == v39 )
          goto LABEL_46;
      }
      v119 = (3 * v44 + 1) >> 1;
      v120 = 8 * v119 + 8;
      v121 = v119;
      if ( 8 * v44 + 8 >= (unsigned int)v120 || v44 >= v119 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)ptr, "Overflow encountered when expanding vector");
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, ptr);
        sub_233E40((__int64)ptr);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v122 = (unsigned int *)sub_186B300(v43 - 1, v120);
      v123 = v122[1];
      v43 = (unsigned __int64 *)(v122 + 2);
      *v122 = v121;
      LODWORD(v122) = v123;
      v41 = &v43[v123];
      v42 = (_DWORD)v122 + 1;
    }
LABEL_46:
    v45 = v271;
    if ( !v271 )
      goto LABEL_50;
    v46 = &v271[*((unsigned int *)v271 - 1)];
    if ( v271 == v46 )
      goto LABEL_50;
  }
  else
  {
    v45 = v271;
    if ( !v271 )
    {
      v43 = nullptr;
      exception_cleanup = v266[1].exception_cleanup;
      v51 = a2 + 72;
      goto LABEL_51;
    }
    v43 = nullptr;
    v46 = &v271[*((unsigned int *)v271 - 1)];
    if ( v46 == v271 )
    {
      exception_cleanup = v266[1].exception_cleanup;
      v51 = a2 + 72;
      goto LABEL_51;
    }
  }
  v47 = v45;
  sub_62A170(&v278, v266[1].exception_cleanup, *v45);
  v48 = v278;
  if ( v43 )
    goto LABEL_133;
  v49 = sub_186B270(0x18u);
  v43 = (unsigned __int64 *)(v49 + 8);
  *(_QWORD *)v49 = 2;
  ++v47;
  *(_QWORD *)(v49 + 8) = v48;
  for ( *(_DWORD *)(v49 + 4) = 1; v46 != v47; *((_DWORD *)v43 - 1) = v112 )
  {
    sub_62A170(&v278, v266[1].exception_cleanup, *v47);
    v48 = v278;
LABEL_133:
    v114 = *((_DWORD *)v43 - 1);
    if ( v114 == *((_DWORD *)v43 - 2) )
    {
      v115 = (3 * v114 + 1) >> 1;
      v116 = 8 * v115 + 8;
      if ( 8 * v114 + 8 >= (unsigned int)v116 || v114 >= v115 )
      {
        v11 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)ptr, "Overflow encountered when expanding vector");
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, ptr);
        sub_233E40((__int64)ptr);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v264 = (3 * v114 + 1) >> 1;
      v117 = (unsigned int *)sub_186B300(v43 - 1, v116);
      v118 = v117[1];
      v43 = (unsigned __int64 *)(v117 + 2);
      *v117 = v264;
      LODWORD(v117) = v118;
      v113 = &v43[v118];
      v112 = (_DWORD)v117 + 1;
    }
    else
    {
      v111 = v114;
      v112 = v114 + 1;
      v113 = &v43[v111];
    }
    ++v47;
    *v113 = (unsigned __int64)v48;
  }
LABEL_50:
  LODWORD(v19) = *((_DWORD *)v43 - 1);
  exception_cleanup = v266[1].exception_cleanup;
  v51 = a2 + 72;
LABEL_51:
  v52 = sub_62C680((_DWORD)exception_cleanup, *(_QWORD *)(a2 + 40), v19, (_DWORD)v43, 0, v51, 0);
  v56 = v52;
  if ( v52 )
    sub_62A000(exception_cleanup, v52);
  sub_62F7F0(v266[1].exception_cleanup, a2, v56, v53, v54, v55);
  sub_63DAD0(a3, v56, a7);
  if ( v56 )
    sub_62A410(exception_cleanup, v56);
  if ( v43 )
  {
    v57 = (unsigned __int64)&v43[*((unsigned int *)v43 - 1)];
    if ( (unsigned __int64)v43 < v57 )
    {
      v58 = v43;
      do
      {
        while ( 1 )
        {
          v59 = *v58;
          if ( *v58 )
          {
            v18 = (*(_DWORD *)(v59 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v58 >= v57 )
            goto LABEL_62;
        }
        sub_15D7BC0(v250, v59);
        ++v58;
      }
      while ( (unsigned __int64)v58 < v57 );
    }
LABEL_62:
    sub_186B220(v43 - 1);
  }
  v60 = v272;
  v263 = v259;
  if ( v272 )
  {
    v61 = v273;
    v18 = v272[2]-- == 1;
    if ( v18 )
      sub_15D7BC0(v61, v60);
    v263 = v259;
  }
LABEL_67:
  v62 = v271;
  if ( v271 )
  {
    if ( v271 >= &v271[*((unsigned int *)v271 - 1)] )
      goto LABEL_75;
    v63 = (unsigned __int64)&v271[*((unsigned int *)v271 - 1)];
    do
    {
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          v18 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v62 >= v63 )
          goto LABEL_74;
      }
      sub_15D7BC0(exception_class, v64);
      ++v62;
    }
    while ( (unsigned __int64)v62 < v63 );
LABEL_74:
    v62 = v271;
    if ( v271 )
LABEL_75:
      sub_186B220(v62 - 1);
  }
  sub_14B63F0(v269);
  return v263;
}

