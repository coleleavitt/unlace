__int64 __fastcall sub_480750(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6, double a7)
{
  char **v7; // r13
  char **v8; // r13
  char **v9; // r13
  char **exception; // rbp
  __int64 *v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 *v14; // r14
  __int64 *i; // rbp
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 result; // rax
  std::chrono::_V2::steady_clock **v23; // rbp
  std::chrono::_V2::steady_clock *v24; // r13
  __int64 v25; // rax
  _QWORD **v26; // r12
  _QWORD **v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // r14
  _DWORD *v38; // rbp
  __int64 *v39; // r13
  _QWORD *v40; // rdx
  int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rdi
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rax
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  _DWORD *v53; // rsi
  bool v54; // zf
  int v55; // r8d
  int v56; // r9d
  __int64 *v57; // rcx
  __int64 v58; // rax
  __int64 *v59; // rdx
  __int64 v60; // rsi
  _QWORD *v61; // rbp
  std::chrono::_V2::steady_clock *v62; // rdi
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r13
  __int64 v66; // rsi
  __int64 v67; // rax
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  int v72; // edi
  __int64 v73; // rsi
  int v74; // edx
  char *v75; // r13
  int v76; // eax
  __int64 *v77; // r12
  __int64 *v78; // r14
  __int64 v79; // rbx
  __int64 v80; // rdx
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  __m128i *v84; // r12
  __int64 v85; // rsi
  __int64 v86; // rdi
  unsigned __int64 v87; // r13
  void **v88; // r12
  _QWORD *v89; // rbx
  void (__fastcall ***v90)(void *); // rbp
  _QWORD *v91; // rbp
  __int64 *v92; // rbp
  __int64 *v93; // r14
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 *v96; // rbp
  __int64 *v97; // r14
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 *v100; // rbp
  __int64 *v101; // r14
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rdi
  __int64 *v106; // rbx
  unsigned __int64 v107; // rbp
  __int64 v108; // rsi
  __int64 v109; // rsi
  _DWORD *v110; // rsi
  unsigned __int64 v111; // r13
  void **v112; // r12
  _QWORD *v113; // rbx
  void (__fastcall ***v114)(void *); // rbp
  _QWORD *v115; // rbp
  __int64 *v116; // rbp
  __int64 *v117; // r14
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 *v120; // rbp
  __int64 *v121; // r14
  __int64 v122; // rsi
  __int64 v123; // rdi
  __int64 *v124; // rbp
  __int64 *v125; // r14
  __int64 v126; // rsi
  __int64 v127; // rdi
  __int64 v128; // rsi
  __int64 v129; // rdi
  __int64 v130; // rax
  void **v131; // rcx
  unsigned int v132; // eax
  __int64 v133; // rdx
  int v134; // eax
  void **v135; // rdx
  __int64 v136; // rbp
  unsigned int v137; // eax
  __int64 v138; // rdx
  int v139; // eax
  unsigned int v140; // ecx
  unsigned int v141; // edx
  unsigned int v142; // ebx
  unsigned int *v143; // rax
  __int64 v144; // rdx
  unsigned int v145; // r13d
  unsigned int v146; // edx
  unsigned int *v147; // rax
  __int64 v148; // rdx
  unsigned int v149; // r13d
  unsigned int v150; // edx
  unsigned int *v151; // rax
  __int64 v152; // rdx
  void (__fastcall ***v153)(void *); // rbx
  _QWORD *v154; // rbx
  __int64 *v155; // rbx
  __int64 *v156; // r12
  __int64 v157; // rsi
  __int64 v158; // rdi
  __int64 *v159; // rbx
  __int64 *v160; // r12
  __int64 v161; // rsi
  __int64 v162; // rdi
  __int64 *v163; // rbx
  __int64 *v164; // r12
  __int64 v165; // rsi
  __int64 v166; // rdi
  __int64 v167; // rsi
  __int64 v168; // rdi
  _QWORD *v169; // rax
  std::chrono::_V2::steady_clock **v170; // rbx
  std::chrono::_V2::steady_clock **v171; // r12
  unsigned int v172; // r13d
  std::chrono::_V2::steady_clock *v173; // rbp
  __int64 v174; // rax
  unsigned int v175; // eax
  __int64 v176; // rax
  _QWORD *v177; // rax
  __m128i *v178; // rsi
  __int64 v179; // rdi
  _QWORD *v180; // r14
  _QWORD *v181; // rax
  unsigned int v182; // edx
  __int64 v183; // rcx
  int v184; // edx
  _QWORD *v185; // rcx
  __int64 *v186; // rbx
  void **v187; // r13
  _QWORD *v188; // rbp
  void (***v189)(void); // rdi
  _QWORD *v190; // rdi
  unsigned __int64 v191; // rax
  __int64 v192; // rdx
  _QWORD *v193; // r12
  unsigned __int64 v194; // rbp
  __int64 *v195; // rbx
  __int64 v196; // rsi
  __int64 v197; // rdi
  unsigned __int64 v198; // rax
  __int64 v199; // rdx
  _QWORD *v200; // r12
  unsigned __int64 v201; // rbp
  __int64 *v202; // rbx
  __int64 v203; // rsi
  __int64 v204; // rdi
  unsigned __int64 v205; // rax
  __int64 v206; // rdx
  _QWORD *v207; // r12
  unsigned __int64 v208; // rbp
  __int64 *v209; // rbx
  __int64 v210; // rsi
  __int64 v211; // rdi
  __int64 v212; // rsi
  __int64 v213; // rdi
  __int64 v214; // rsi
  __int64 v215; // rdi
  void **v216; // rbx
  unsigned __int64 v217; // r13
  _QWORD *v218; // r12
  void (__fastcall ***v219)(void *); // rbp
  _QWORD *v220; // rbp
  __int64 *v221; // rbp
  __int64 *v222; // r14
  __int64 v223; // rsi
  __int64 v224; // rdi
  __int64 *v225; // rbp
  __int64 *v226; // r14
  __int64 v227; // rsi
  __int64 v228; // rdi
  __int64 *v229; // rbp
  __int64 *v230; // r14
  __int64 v231; // rsi
  __int64 v232; // rdi
  __int64 v233; // rsi
  __int64 v234; // rdi
  __int64 *v235; // rbx
  unsigned __int64 v236; // rbp
  __int64 v237; // rsi
  __int64 v238; // rsi
  std::chrono::_V2::steady_clock *v239; // rdi
  _DWORD *v240; // rsi
  std::chrono::_V2::steady_clock *v241; // rdi
  void **v242; // rbp
  unsigned __int64 v243; // r13
  _QWORD *v244; // r12
  void (__fastcall ***v245)(void *); // rbx
  _QWORD *v246; // rbx
  __int64 *v247; // rbx
  __int64 *v248; // r14
  __int64 v249; // rsi
  __int64 v250; // rdi
  __int64 *v251; // rbx
  __int64 *v252; // r14
  __int64 v253; // rsi
  __int64 v254; // rdi
  __int64 *v255; // rbx
  __int64 *v256; // r14
  __int64 v257; // rsi
  __int64 v258; // rdi
  __int64 v259; // rsi
  __int64 v260; // rdi
  __int64 v261; // rbp
  __int64 v262; // r13
  __int64 v263; // rdi
  unsigned int v264; // ebp
  unsigned int v265; // ecx
  unsigned int *v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // rbp
  __int64 v269; // r13
  _QWORD *v270; // rax
  std::chrono::_V2::steady_clock **v271; // [rsp+0h] [rbp-108h]
  __int64 *v272; // [rsp+0h] [rbp-108h]
  __int64 v273; // [rsp+8h] [rbp-100h]
  __int64 *v274; // [rsp+8h] [rbp-100h]
  std::chrono::_V2::steady_clock *v275; // [rsp+10h] [rbp-F8h]
  int v276[2]; // [rsp+10h] [rbp-F8h]
  char *ptr; // [rsp+20h] [rbp-E8h]
  __m128i *ptra; // [rsp+20h] [rbp-E8h]
  __m128i *ptrb; // [rsp+20h] [rbp-E8h]
  __m128i *ptrc; // [rsp+20h] [rbp-E8h]
  void **v282; // [rsp+28h] [rbp-E0h]
  int v283[2]; // [rsp+30h] [rbp-D8h]
  __int64 v284; // [rsp+38h] [rbp-D0h]
  __int64 *v285; // [rsp+38h] [rbp-D0h]
  __int64 *v286; // [rsp+38h] [rbp-D0h]
  __int64 *v287; // [rsp+38h] [rbp-D0h]
  char v288; // [rsp+4Fh] [rbp-B9h]
  __int64 *v289; // [rsp+50h] [rbp-B8h]
  __int64 v290; // [rsp+58h] [rbp-B0h]
  _DWORD *v291; // [rsp+70h] [rbp-98h] BYREF
  std::chrono::_V2::steady_clock *v292; // [rsp+78h] [rbp-90h]
  __int64 v293; // [rsp+80h] [rbp-88h] BYREF
  std::chrono::_V2::steady_clock *v294; // [rsp+88h] [rbp-80h]
  __int64 v295; // [rsp+90h] [rbp-78h] BYREF
  int v296[2]; // [rsp+98h] [rbp-70h]
  __m128i v297; // [rsp+A0h] [rbp-68h] BYREF
  int v298[2]; // [rsp+B0h] [rbp-58h] BYREF

  v11 = (__int64 *)a2;
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v130 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    LODWORD(a4) = a1;
    *(_QWORD *)(a1 + 8) = v130;
    *(_BYTE *)(a1 + 24) = 1;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 16LL) + 456LL);
  v284 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 16LL);
  if ( !v12 )
    goto LABEL_35;
  v13 = v12 + 8LL * *(unsigned int *)(v12 - 4);
  if ( v12 == v13 )
    goto LABEL_35;
  do
  {
    v14 = *(__int64 **)(*(_QWORD *)v12 + 80LL);
    if ( v14 )
    {
      a3 = *((unsigned int *)v14 - 1);
      for ( i = &v14[17 * a3]; i != v14; v14 += 17 )
      {
        v16 = sub_407E90(*(_QWORD **)a2, a2, a3, (int)a4, a5, a6);
        v17 = *v14;
        if ( v16 == sub_407E90((_QWORD *)*v14, a2, v18, v19, v20, v21) )
          goto LABEL_10;
      }
    }
    v12 += 8;
  }
  while ( v13 != v12 );
  v23 = *(std::chrono::_V2::steady_clock ***)(v284 + 456);
  if ( !v23 )
    goto LABEL_35;
  v271 = &v23[*((unsigned int *)v23 - 1)];
  if ( v271 == v23 )
    goto LABEL_35;
  v275 = nullptr;
  LODWORD(v273) = -1;
  do
  {
    while ( 1 )
    {
      v24 = *v23;
      a3 = *((_QWORD *)*v23 + 10);
      if ( !a3 )
        goto LABEL_16;
      v25 = *(unsigned int *)(a3 - 4);
      LODWORD(a4) = v273;
      if ( (unsigned int)v25 >= (unsigned int)v273 )
        goto LABEL_16;
      LODWORD(a4) = 16 * v25;
      v26 = (_QWORD **)(a3 + 136 * v25);
      if ( (_QWORD **)a3 == v26 )
        goto LABEL_16;
      v27 = *((_QWORD ***)*v23 + 10);
      while ( 1 )
      {
        v28 = sub_407E90(*(_QWORD **)a2, a2, a3, (int)a4, a5, a6);
        if ( v28 == sub_407E90(*v27, a2, v29, v30, v31, v32) )
          break;
        v27 += 17;
        if ( v26 == v27 )
          goto LABEL_16;
      }
      v33 = *((_QWORD *)v24 + 10);
      if ( v33 )
        break;
      v275 = v24;
      LODWORD(v273) = 0;
LABEL_16:
      if ( v271 == ++v23 )
        goto LABEL_25;
    }
    v275 = v24;
    ++v23;
    LODWORD(v273) = *(_DWORD *)(v33 - 4);
  }
  while ( v271 != v23 );
LABEL_25:
  if ( v275 )
    goto LABEL_439;
  v170 = *(std::chrono::_V2::steady_clock ***)(v284 + 456);
  if ( v170 )
  {
    v171 = &v170[*((unsigned int *)v170 - 1)];
    if ( v171 != v170 )
    {
      v172 = -1;
      do
      {
        v173 = *v170;
        LODWORD(a4) = *((_DWORD *)*v170 + 36);
        if ( (_DWORD)a4 )
        {
          v174 = *((_QWORD *)v173 + 10);
          v175 = v174 ? *(_DWORD *)(v174 - 4) : 0;
          if ( v175 < v172 )
          {
            a2 = (__int64)v11;
            if ( (unsigned __int8)sub_47B830(
                                    (unsigned int)*v170,
                                    (_DWORD)v11,
                                    a3,
                                    (_DWORD)a4,
                                    a5,
                                    a6,
                                    (_DWORD)v271,
                                    v273,
                                    (__int64)v275) )
            {
              v176 = *((_QWORD *)v173 + 10);
              v275 = v173;
              if ( v176 )
                v172 = *(_DWORD *)(v176 - 4);
              else
                v172 = 0;
            }
          }
        }
        ++v170;
      }
      while ( v171 != v170 );
      if ( v275 )
      {
LABEL_439:
        v34 = *((_QWORD *)v275 + 10);
        if ( !v34 || *(_DWORD *)(v34 - 4) <= 5u )
        {
          v17 = (__int64)v275;
          sub_47F910(v275, v11, 0);
          goto LABEL_10;
        }
        v35 = *(__int64 **)(v284 + 456);
        if ( v35 )
        {
          a3 = *((unsigned int *)v35 - 1);
          a4 = &v35[a3];
          if ( a4 != v35 )
          {
            v17 = 0;
            a2 = *((_QWORD *)v275 + 7);
            do
            {
              while ( 1 )
              {
                a3 = *v35;
                if ( a2 == *(_QWORD *)(*v35 + 56) )
                  break;
                if ( ++v35 == a4 )
                  goto LABEL_34;
              }
              ++v35;
              v17 = (unsigned int)(v17 + 1);
            }
            while ( v35 != a4 );
LABEL_34:
            if ( (unsigned int)v17 > 5 )
              goto LABEL_10;
          }
        }
      }
    }
  }
LABEL_35:
  v36 = *(__int64 **)(v284 + 192);
  v272 = v36;
  if ( v36 )
  {
    LODWORD(a4) = *(_QWORD *)(v284 + 192);
    v37 = &v36[*((unsigned int *)v36 - 1)];
    if ( v36 == v37 )
    {
      v272 = nullptr;
    }
    else
    {
      v38 = (_DWORD *)*v36;
      v39 = *(__int64 **)(v284 + 192);
      if ( *v36 )
        ++*v38;
      v40 = (_QWORD *)sub_186B270(0x18u);
      *v40 = 2;
      v41 = 1;
      a3 = (__int64)(v40 + 1);
      v272 = (__int64 *)a3;
      a4 = (__int64 *)a3;
      while ( 1 )
      {
        ++v39;
        *(_QWORD *)a3 = v38;
        *((_DWORD *)a4 - 1) = v41;
        if ( v39 == v37 )
          break;
        while ( 1 )
        {
          v38 = (_DWORD *)*v39;
          if ( *v39 )
            ++*v38;
          LODWORD(a4) = (_DWORD)v272;
          v42 = *((_DWORD *)v272 - 1);
          if ( v42 == *((_DWORD *)v272 - 2) )
            break;
          ++v39;
          a3 = (__int64)&v272[v42];
          *(_QWORD *)a3 = v38;
          *((_DWORD *)v272 - 1) = v42 + 1;
          if ( v39 == v37 )
            goto LABEL_45;
        }
        v140 = (3 * v42 + 1) >> 1;
        v141 = 8 * v140 + 8;
        v142 = v140;
        if ( 8 * v42 + 8 >= v141 || v42 >= v140 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v298, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v298);
          sub_233E40((__int64)v298);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a2 = v141;
        v143 = (unsigned int *)sub_186B300(v272 - 1, v141);
        v144 = v143[1];
        a4 = (__int64 *)(v143 + 2);
        *v143 = v142;
        v272 = a4;
        LODWORD(v143) = v144;
        a3 = (__int64)&a4[v144];
        v41 = (_DWORD)v143 + 1;
      }
    }
  }
LABEL_45:
  v43 = *v11;
  v291 = nullptr;
  v293 = 0;
  v292 = *(std::chrono::_V2::steady_clock **)(a1 + 32);
  v294 = v292;
  v44 = (_QWORD *)sub_4095A0(v43, a2, a3, (int)a4, a5, a6);
  v45 = v44[1];
  v46 = *v44;
  if ( v45 )
    v47 = *(unsigned int *)(v45 - 4);
  else
    v47 = 0;
  v48 = sub_15EC1C0(*v44, v47);
  v17 = v48;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v53 = v291;
  v291 = (_DWORD *)v48;
  if ( v53 )
  {
    v54 = v53[2]-- == 1;
    if ( v54 )
    {
      sub_15D7BC0(v46, v53);
      v17 = (__int64)v291;
    }
  }
  sub_491EC0(v17, (unsigned int)&v291, v49, v50, v51, v52);
  LODWORD(v57) = (_DWORD)v272;
  v290 = *(_QWORD *)(a1 + 32);
  v295 = v290;
  if ( !v272 )
  {
    v109 = v293;
    if ( v293 )
      goto LABEL_134;
    v110 = v291;
    if ( !v291 )
      goto LABEL_10;
    goto LABEL_137;
  }
  v58 = *((unsigned int *)v272 - 1);
  v59 = &v272[v58];
  v289 = v59;
  if ( v59 == v272 )
  {
    v109 = v293;
    if ( v293 )
      goto LABEL_134;
    v110 = v291;
    if ( !v291 )
      goto LABEL_141;
LABEL_137:
    v17 = (__int64)v292;
    v54 = v110[2]-- == 1;
    if ( v54 )
      sub_15D7BC0(v17, v110);
    goto LABEL_139;
  }
  v274 = v272;
  v282 = nullptr;
  *(_QWORD *)v283 = 0;
  while ( 2 )
  {
    v60 = v293;
    v61 = (_QWORD *)*v274;
    if ( v293 )
    {
      v62 = v294;
      v54 = (*(_DWORD *)(v293 + 8))-- == 1;
      if ( v54 )
        sub_15D7BC0(v62, v60);
    }
    v293 = 0;
    v63 = (_QWORD *)sub_4095A0((__int64)v61, v60, (__int64)v59, (int)v57, v55, v56);
    v64 = v63[1];
    v65 = *v63;
    if ( v64 )
      v66 = *(unsigned int *)(v64 - 4);
    else
      v66 = 0;
    v67 = sub_15EC1C0(*v63, v66);
    v72 = v67;
    if ( v67 )
      ++*(_DWORD *)(v67 + 8);
    v73 = v293;
    v293 = v67;
    if ( v73 )
    {
      v54 = (*(_DWORD *)(v73 + 8))-- == 1;
      if ( v54 )
      {
        sub_15D7BC0(v65, v73);
        v72 = v293;
      }
    }
    sub_491EC0(v72, (unsigned int)&v293, v68, v69, v70, v71);
    v288 = sub_47B040(a1, &v291, &v293);
    if ( v288 && (_DWORD *)v293 != v291 )
    {
      v74 = *(_DWORD *)v61;
      v75 = *(char **)(v284 + 456);
      v76 = *(_DWORD *)v61 + 1;
      *(_DWORD *)v61 = v76;
      if ( !v75 || (ptr = &v75[8 * *((unsigned int *)v75 - 1)], v75 == ptr) )
      {
LABEL_188:
        *(_DWORD *)v61 = v74;
        if ( !v74 )
          goto LABEL_209;
        v131 = v282;
        *(_DWORD *)v61 = v76;
        if ( v282 )
          goto LABEL_190;
LABEL_247:
        v169 = (_QWORD *)sub_186B270(0x18u);
        *v169 = 2;
        v282 = (void **)(v169 + 1);
        v135 = (void **)(v169 + 1);
        v131 = (void **)(v169 + 1);
        v134 = 1;
      }
      else
      {
        while ( 1 )
        {
          v59 = *(__int64 **)(*(_QWORD *)v75 + 80LL);
          if ( v59 )
          {
            LODWORD(v57) = *((_DWORD *)v59 - 1);
            v77 = &v59[17 * (unsigned int)v57];
            if ( v59 != v77 )
              break;
          }
LABEL_186:
          v75 += 8;
          if ( ptr == v75 )
          {
            v76 = *(_DWORD *)v61;
            v74 = *(_DWORD *)v61 - 1;
            goto LABEL_188;
          }
        }
        v78 = *(__int64 **)(*(_QWORD *)v75 + 80LL);
        while ( 1 )
        {
          v79 = sub_407E90(v61, (__int64)&v291, (__int64)v59, (int)v57, v55, v56);
          if ( v79 == sub_407E90((_QWORD *)*v78, (__int64)&v291, v80, v81, v82, v83) )
            break;
          v78 += 17;
          if ( v77 == v78 )
            goto LABEL_186;
        }
        v54 = (*(_DWORD *)v61)-- == 1;
        if ( !v54 )
          goto LABEL_75;
        v288 = 0;
LABEL_209:
        v153 = (void (__fastcall ***)(void *))v61[11];
        if ( v153 )
        {
          v54 = (*((_DWORD *)v153 + 4))-- == 1;
          if ( v54 )
          {
            (**v153)(v153);
            sub_186B220(v153);
          }
        }
        v154 = (_QWORD *)v61[10];
        if ( v154 )
        {
          v54 = (*(_DWORD *)v154)-- == 1;
          if ( v54 )
          {
            sub_41CB00(v154);
            sub_186B220(v154);
          }
        }
        v155 = (__int64 *)v61[9];
        if ( v155 )
        {
          v156 = &v155[*((unsigned int *)v155 - 1)];
          if ( v155 >= v156 )
            goto LABEL_223;
          do
          {
            while ( 1 )
            {
              v157 = *v155;
              if ( *v155 )
              {
                v158 = v61[8];
                v54 = (*(_DWORD *)(v157 + 8))-- == 1;
                if ( v54 )
                  break;
              }
              if ( ++v155 >= v156 )
                goto LABEL_222;
            }
            sub_15D7BC0(v158, v157);
            ++v155;
          }
          while ( v155 < v156 );
LABEL_222:
          v155 = (__int64 *)v61[9];
          if ( v155 )
LABEL_223:
            sub_186B220(v155 - 1);
        }
        v159 = (__int64 *)v61[7];
        if ( v159 )
        {
          v160 = &v159[*((unsigned int *)v159 - 1)];
          if ( v159 >= v160 )
            goto LABEL_232;
          do
          {
            while ( 1 )
            {
              v161 = *v159;
              if ( *v159 )
              {
                v162 = v61[6];
                v54 = (*(_DWORD *)(v161 + 8))-- == 1;
                if ( v54 )
                  break;
              }
              if ( ++v159 >= v160 )
                goto LABEL_231;
            }
            sub_15D7BC0(v162, v161);
            ++v159;
          }
          while ( v159 < v160 );
LABEL_231:
          v159 = (__int64 *)v61[7];
          if ( v159 )
LABEL_232:
            sub_186B220(v159 - 1);
        }
        v163 = (__int64 *)v61[5];
        if ( v163 )
        {
          v164 = &v163[*((unsigned int *)v163 - 1)];
          if ( v163 >= v164 )
            goto LABEL_241;
          do
          {
            while ( 1 )
            {
              v165 = *v163;
              if ( *v163 )
              {
                v166 = v61[4];
                v54 = (*(_DWORD *)(v165 + 8))-- == 1;
                if ( v54 )
                  break;
              }
              if ( ++v163 >= v164 )
                goto LABEL_240;
            }
            sub_15D7BC0(v166, v165);
            ++v163;
          }
          while ( v163 < v164 );
LABEL_240:
          v163 = (__int64 *)v61[5];
          if ( v163 )
LABEL_241:
            sub_186B220(v163 - 1);
        }
        v167 = v61[2];
        if ( v167 )
        {
          v168 = v61[3];
          v54 = (*(_DWORD *)(v167 + 8))-- == 1;
          if ( v54 )
            sub_15D7BC0(v168, v167);
        }
        sub_186B220(v61);
        if ( !v288 )
          goto LABEL_75;
        v131 = v282;
        ++*(_DWORD *)v61;
        if ( !v282 )
          goto LABEL_247;
LABEL_190:
        v132 = *((_DWORD *)v131 - 1);
        if ( v132 == *((_DWORD *)v131 - 2) )
        {
          v145 = (3 * v132 + 1) >> 1;
          v146 = 8 * v145 + 8;
          if ( 8 * v132 + 8 >= v146 || v132 >= v145 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v298, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v298);
            sub_233E40((__int64)v298);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v147 = (unsigned int *)sub_186B300(v282 - 1, v146);
          v148 = v147[1];
          v131 = (void **)(v147 + 2);
          *v147 = v145;
          v282 = v131;
          LODWORD(v147) = v148;
          v135 = &v131[v148];
          v134 = (_DWORD)v147 + 1;
        }
        else
        {
          v133 = v132;
          v134 = v132 + 1;
          v135 = &v131[v133];
        }
      }
      *v135 = v61;
      v136 = v293;
      *((_DWORD *)v131 - 1) = v134;
      if ( v136 )
        ++*(_DWORD *)(v136 + 8);
      v57 = *(__int64 **)v283;
      if ( *(_QWORD *)v283 )
      {
        v137 = *(_DWORD *)(*(_QWORD *)v283 - 4LL);
        if ( v137 == *(_DWORD *)(*(_QWORD *)v283 - 8LL) )
        {
          v149 = (3 * v137 + 1) >> 1;
          v150 = 8 * v149 + 8;
          if ( 8 * v137 + 8 >= v150 || v137 >= v149 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v298, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v298);
            sub_233E40((__int64)v298);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v151 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v283 - 8LL), v150);
          v152 = v151[1];
          v57 = (__int64 *)(v151 + 2);
          *v151 = v149;
          *(_QWORD *)v283 = v57;
          LODWORD(v151) = v152;
          v59 = &v57[v152];
          v139 = (_DWORD)v151 + 1;
        }
        else
        {
          v138 = v137;
          v139 = v137 + 1;
          v59 = (__int64 *)(*(_QWORD *)v283 + 8 * v138);
        }
      }
      else
      {
        v177 = (_QWORD *)sub_186B270(0x18u);
        *v177 = 2;
        *(_QWORD *)v283 = v177 + 1;
        v59 = v177 + 1;
        v57 = v177 + 1;
        v139 = 1;
      }
      *v59 = v136;
      *((_DWORD *)v57 - 1) = v139;
    }
LABEL_75:
    if ( v289 != ++v274 )
      continue;
    break;
  }
  if ( !v282 )
    goto LABEL_126;
  if ( !*((_DWORD *)v282 - 1) )
    goto LABEL_125;
  v84 = &v297;
  v297.m128i_i64[0] = 0;
  v297.m128i_i64[1] = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v296 = *(_QWORD *)v283;
  if ( (unsigned __int8)sub_47BD40(a1, &v291, (__int64)&v295, v297.m128i_i64)
    && (unsigned int)sub_3D4AD0(v297.m128i_i32[0]) )
  {
    v178 = &v297;
    v179 = sub_186B270(0x98u);
    v180 = (_QWORD *)v179;
    sub_47D7F0((_QWORD *)v179, &v297);
    ++*(_DWORD *)(v179 + 48);
    v181 = *(_QWORD **)(v284 + 456);
    if ( v181 )
    {
      v182 = *((_DWORD *)v181 - 1);
      if ( v182 == *((_DWORD *)v181 - 2) )
      {
        v264 = (3 * v182 + 1) >> 1;
        v265 = 8 * v264 + 8;
        if ( 8 * v182 + 8 >= v265 || v182 >= v264 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v298, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v298);
          sub_233E40((__int64)v298);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v178 = (__m128i *)v265;
        v179 = (__int64)(v181 - 1);
        v266 = (unsigned int *)sub_186B300(v181 - 1, v265);
        v181 = v266 + 2;
        *(_QWORD *)(v284 + 456) = v266 + 2;
        v267 = v266[1];
        *v266 = v264;
        LODWORD(v266) = v267;
        v185 = &v181[v267];
        v184 = (_DWORD)v266 + 1;
      }
      else
      {
        v183 = v182;
        v184 = v182 + 1;
        v185 = &v181[v183];
      }
    }
    else
    {
      v179 = 24;
      v270 = (_QWORD *)sub_186B270(0x18u);
      *v270 = 2;
      v181 = v270 + 1;
      v185 = v181;
      *(_QWORD *)(v284 + 456) = v181;
      v184 = 1;
    }
    *v185 = v180;
    *((_DWORD *)v181 - 1) = v184;
    if ( (unsigned int)sub_180B130(v179) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(a7) )
      {
        sub_186A4C0(a7);
        v261 = sub_180B150(v179, v178);
        std::__ostream_insert<char,std::char_traits<char>>();
        v262 = sub_160EBE0(v261, &v297);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v263 = sub_160EBE0(v262, &v291);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v263, "\n");
      }
      else
      {
        v268 = sub_180B150(v179, v178);
        std::__ostream_insert<char,std::char_traits<char>>();
        v269 = sub_160EBE0(v268, &v297);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_160EBE0(v269, &v291);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v186 = (__int64 *)v298;
    v187 = v282;
    for ( *(_QWORD *)v276 = &v282[*((unsigned int *)v282 - 1)]; *(void ***)v276 != v187; ++v187 )
    {
      v188 = *v187;
      *(_QWORD *)v298 = v188;
      if ( v188 )
      {
        ++*(_DWORD *)v188;
        sub_47F910(v180, v186, 0);
        v54 = (*(_DWORD *)v188)-- == 1;
        if ( v54 )
        {
          v189 = (void (***)(void))v188[11];
          if ( v189 )
          {
            v54 = (*((_DWORD *)v189 + 4))-- == 1;
            if ( v54 )
            {
              (**v189)();
              sub_186B220(v189);
            }
          }
          v190 = (_QWORD *)v188[10];
          if ( v190 )
          {
            v54 = (*(_DWORD *)v190)-- == 1;
            if ( v54 )
            {
              sub_41CB00(v190);
              sub_186B220(v190);
            }
          }
          v191 = v188[9];
          if ( v191 )
          {
            v192 = *(unsigned int *)(v191 - 4);
            if ( v191 >= v191 + 8 * v192 )
              goto LABEL_297;
            ptra = v84;
            v193 = v188;
            v194 = v191 + 8 * v192;
            v285 = v186;
            v195 = (__int64 *)v191;
            do
            {
              v196 = *v195;
              if ( *v195 )
              {
                v197 = v193[8];
                v54 = (*(_DWORD *)(v196 + 8))-- == 1;
                if ( v54 )
                  sub_15D7BC0(v197, v196);
              }
              ++v195;
            }
            while ( (unsigned __int64)v195 < v194 );
            v188 = v193;
            v186 = v285;
            v84 = ptra;
            v191 = v188[9];
            if ( v191 )
LABEL_297:
              sub_186B220((void *)(v191 - 8));
          }
          v198 = v188[7];
          if ( v198 )
          {
            v199 = *(unsigned int *)(v198 - 4);
            if ( v198 >= v198 + 8 * v199 )
              goto LABEL_306;
            ptrb = v84;
            v200 = v188;
            v201 = v198 + 8 * v199;
            v286 = v186;
            v202 = (__int64 *)v198;
            do
            {
              v203 = *v202;
              if ( *v202 )
              {
                v204 = v200[6];
                v54 = (*(_DWORD *)(v203 + 8))-- == 1;
                if ( v54 )
                  sub_15D7BC0(v204, v203);
              }
              ++v202;
            }
            while ( (unsigned __int64)v202 < v201 );
            v188 = v200;
            v186 = v286;
            v84 = ptrb;
            v198 = v188[7];
            if ( v198 )
LABEL_306:
              sub_186B220((void *)(v198 - 8));
          }
          v205 = v188[5];
          if ( v205 )
          {
            v206 = *(unsigned int *)(v205 - 4);
            if ( v205 >= v205 + 8 * v206 )
              goto LABEL_315;
            ptrc = v84;
            v207 = v188;
            v208 = v205 + 8 * v206;
            v287 = v186;
            v209 = (__int64 *)v205;
            do
            {
              v210 = *v209;
              if ( *v209 )
              {
                v211 = v207[4];
                v54 = (*(_DWORD *)(v210 + 8))-- == 1;
                if ( v54 )
                  sub_15D7BC0(v211, v210);
              }
              ++v209;
            }
            while ( (unsigned __int64)v209 < v208 );
            v188 = v207;
            v186 = v287;
            v84 = ptrc;
            v205 = v188[5];
            if ( v205 )
LABEL_315:
              sub_186B220((void *)(v205 - 8));
          }
          v212 = v188[2];
          if ( v212 )
          {
            v213 = v188[3];
            v54 = (*(_DWORD *)(v212 + 8))-- == 1;
            if ( v54 )
              sub_15D7BC0(v213, v212);
          }
          sub_186B220(v188);
        }
      }
      else
      {
        sub_47F910(v180, v186, 0);
      }
    }
    sub_47F910(v180, v11, 1);
    v214 = v297.m128i_i64[0];
    if ( v297.m128i_i64[0] )
    {
      v215 = v297.m128i_i64[1];
      v54 = (*(_DWORD *)(v297.m128i_i64[0] + 8))-- == 1;
      if ( v54 )
        sub_15D7BC0(v215, v214);
    }
    v216 = v282;
    v217 = (unsigned __int64)&v282[*((unsigned int *)v282 - 1)];
    if ( (unsigned __int64)v282 < v217 )
    {
      do
      {
        v218 = *v216;
        if ( *v216 )
        {
          v54 = (*(_DWORD *)v218)-- == 1;
          if ( v54 )
          {
            v219 = (void (__fastcall ***)(void *))v218[11];
            if ( v219 )
            {
              v54 = (*((_DWORD *)v219 + 4))-- == 1;
              if ( v54 )
              {
                (**v219)(v219);
                sub_186B220(v219);
              }
            }
            v220 = (_QWORD *)v218[10];
            if ( v220 )
            {
              v54 = (*(_DWORD *)v220)-- == 1;
              if ( v54 )
              {
                sub_41CB00(v220);
                sub_186B220(v220);
              }
            }
            v221 = (__int64 *)v218[9];
            if ( v221 )
            {
              v222 = &v221[*((unsigned int *)v221 - 1)];
              if ( v221 >= v222 )
                goto LABEL_342;
              do
              {
                v223 = *v221;
                if ( *v221 )
                {
                  v224 = v218[8];
                  v54 = (*(_DWORD *)(v223 + 8))-- == 1;
                  if ( v54 )
                    sub_15D7BC0(v224, v223);
                }
                ++v221;
              }
              while ( v221 < v222 );
              v221 = (__int64 *)v218[9];
              if ( v221 )
LABEL_342:
                sub_186B220(v221 - 1);
            }
            v225 = (__int64 *)v218[7];
            if ( v225 )
            {
              v226 = &v225[*((unsigned int *)v225 - 1)];
              if ( v225 >= v226 )
                goto LABEL_351;
              do
              {
                v227 = *v225;
                if ( *v225 )
                {
                  v228 = v218[6];
                  v54 = (*(_DWORD *)(v227 + 8))-- == 1;
                  if ( v54 )
                    sub_15D7BC0(v228, v227);
                }
                ++v225;
              }
              while ( v225 < v226 );
              v225 = (__int64 *)v218[7];
              if ( v225 )
LABEL_351:
                sub_186B220(v225 - 1);
            }
            v229 = (__int64 *)v218[5];
            if ( v229 )
            {
              v230 = &v229[*((unsigned int *)v229 - 1)];
              if ( v229 >= v230 )
                goto LABEL_360;
              do
              {
                v231 = *v229;
                if ( *v229 )
                {
                  v232 = v218[4];
                  v54 = (*(_DWORD *)(v231 + 8))-- == 1;
                  if ( v54 )
                    sub_15D7BC0(v232, v231);
                }
                ++v229;
              }
              while ( v229 < v230 );
              v229 = (__int64 *)v218[5];
              if ( v229 )
LABEL_360:
                sub_186B220(v229 - 1);
            }
            v233 = v218[2];
            if ( v233 )
            {
              v234 = v218[3];
              v54 = (*(_DWORD *)(v233 + 8))-- == 1;
              if ( v54 )
                sub_15D7BC0(v234, v233);
            }
            sub_186B220(v218);
          }
        }
        ++v216;
      }
      while ( (unsigned __int64)v216 < v217 );
    }
    sub_186B220(v282 - 1);
    if ( *(_QWORD *)v283 )
    {
      v235 = *(__int64 **)v283;
      v236 = *(_QWORD *)v283 + 8LL * *(unsigned int *)(*(_QWORD *)v283 - 4LL);
      if ( *(_QWORD *)v283 < v236 )
      {
        do
        {
          v237 = *v235;
          if ( *v235 )
          {
            v54 = (*(_DWORD *)(v237 + 8))-- == 1;
            if ( v54 )
              sub_15D7BC0(v290, v237);
          }
          ++v235;
        }
        while ( (unsigned __int64)v235 < v236 );
      }
      sub_186B220((void *)(*(_QWORD *)v283 - 8LL));
    }
    v238 = v293;
    if ( v293 )
    {
      v239 = v294;
      v54 = (*(_DWORD *)(v293 + 8))-- == 1;
      if ( v54 )
        sub_15D7BC0(v239, v238);
    }
    v240 = v291;
    if ( v291 )
    {
      v241 = v292;
      v54 = v291[2]-- == 1;
      if ( v54 )
        sub_15D7BC0(v241, v240);
    }
    v242 = (void **)v272;
    v243 = (unsigned __int64)&v272[*((unsigned int *)v272 - 1)];
    if ( (unsigned __int64)v272 < v243 )
    {
      do
      {
        v244 = *v242;
        if ( *v242 )
        {
          v54 = (*(_DWORD *)v244)-- == 1;
          if ( v54 )
          {
            v245 = (void (__fastcall ***)(void *))v244[11];
            if ( v245 )
            {
              v54 = (*((_DWORD *)v245 + 4))-- == 1;
              if ( v54 )
              {
                (**v245)(v245);
                sub_186B220(v245);
              }
            }
            v246 = (_QWORD *)v244[10];
            if ( v246 )
            {
              v54 = (*(_DWORD *)v246)-- == 1;
              if ( v54 )
              {
                sub_41CB00(v246);
                sub_186B220(v246);
              }
            }
            v247 = (__int64 *)v244[9];
            if ( v247 )
            {
              v248 = &v247[*((unsigned int *)v247 - 1)];
              if ( v247 >= v248 )
                goto LABEL_398;
              do
              {
                v249 = *v247;
                if ( *v247 )
                {
                  v250 = v244[8];
                  v54 = (*(_DWORD *)(v249 + 8))-- == 1;
                  if ( v54 )
                    sub_15D7BC0(v250, v249);
                }
                ++v247;
              }
              while ( v247 < v248 );
              v247 = (__int64 *)v244[9];
              if ( v247 )
LABEL_398:
                sub_186B220(v247 - 1);
            }
            v251 = (__int64 *)v244[7];
            if ( v251 )
            {
              v252 = &v251[*((unsigned int *)v251 - 1)];
              if ( v251 >= v252 )
                goto LABEL_407;
              do
              {
                v253 = *v251;
                if ( *v251 )
                {
                  v254 = v244[6];
                  v54 = (*(_DWORD *)(v253 + 8))-- == 1;
                  if ( v54 )
                    sub_15D7BC0(v254, v253);
                }
                ++v251;
              }
              while ( v251 < v252 );
              v251 = (__int64 *)v244[7];
              if ( v251 )
LABEL_407:
                sub_186B220(v251 - 1);
            }
            v255 = (__int64 *)v244[5];
            if ( v255 )
            {
              v256 = &v255[*((unsigned int *)v255 - 1)];
              if ( v255 >= v256 )
                goto LABEL_416;
              do
              {
                v257 = *v255;
                if ( *v255 )
                {
                  v258 = v244[4];
                  v54 = (*(_DWORD *)(v257 + 8))-- == 1;
                  if ( v54 )
                    sub_15D7BC0(v258, v257);
                }
                ++v255;
              }
              while ( v255 < v256 );
              v255 = (__int64 *)v244[5];
              if ( v255 )
LABEL_416:
                sub_186B220(v255 - 1);
            }
            v259 = v244[2];
            if ( v259 )
            {
              v260 = v244[3];
              v54 = (*(_DWORD *)(v259 + 8))-- == 1;
              if ( v54 )
                sub_15D7BC0(v260, v259);
            }
            sub_186B220(v244);
          }
        }
        ++v242;
      }
      while ( (unsigned __int64)v242 < v243 );
    }
    v17 = (__int64)(v272 - 1);
    sub_186B220(v272 - 1);
    result = a1;
    if ( !*(_BYTE *)(a1 + 24) )
      return result;
    goto LABEL_422;
  }
  v85 = v297.m128i_i64[0];
  if ( v297.m128i_i64[0] )
  {
    v86 = v297.m128i_i64[1];
    v54 = (*(_DWORD *)(v297.m128i_i64[0] + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v86, v85);
  }
  v87 = (unsigned __int64)&v282[*((unsigned int *)v282 - 1)];
  if ( (unsigned __int64)v282 < v87 )
  {
    v88 = v282;
    do
    {
      while ( 1 )
      {
        v89 = *v88;
        if ( *v88 )
        {
          v54 = (*(_DWORD *)v89)-- == 1;
          if ( v54 )
            break;
        }
        if ( (unsigned __int64)++v88 >= v87 )
          goto LABEL_125;
      }
      v90 = (void (__fastcall ***)(void *))v89[11];
      if ( v90 )
      {
        v54 = (*((_DWORD *)v90 + 4))-- == 1;
        if ( v54 )
        {
          (**v90)(v90);
          sub_186B220(v90);
        }
      }
      v91 = (_QWORD *)v89[10];
      if ( v91 )
      {
        v54 = (*(_DWORD *)v91)-- == 1;
        if ( v54 )
        {
          sub_41CB00(v91);
          sub_186B220(v91);
        }
      }
      v92 = (__int64 *)v89[9];
      if ( v92 )
      {
        v93 = &v92[*((unsigned int *)v92 - 1)];
        if ( v92 >= v93 )
          goto LABEL_102;
        do
        {
          while ( 1 )
          {
            v94 = *v92;
            if ( *v92 )
            {
              v95 = v89[8];
              v54 = (*(_DWORD *)(v94 + 8))-- == 1;
              if ( v54 )
                break;
            }
            if ( ++v92 >= v93 )
              goto LABEL_101;
          }
          sub_15D7BC0(v95, v94);
          ++v92;
        }
        while ( v92 < v93 );
LABEL_101:
        v92 = (__int64 *)v89[9];
        if ( v92 )
LABEL_102:
          sub_186B220(v92 - 1);
      }
      v96 = (__int64 *)v89[7];
      if ( v96 )
      {
        v97 = &v96[*((unsigned int *)v96 - 1)];
        if ( v96 >= v97 )
          goto LABEL_111;
        do
        {
          while ( 1 )
          {
            v98 = *v96;
            if ( *v96 )
            {
              v99 = v89[6];
              v54 = (*(_DWORD *)(v98 + 8))-- == 1;
              if ( v54 )
                break;
            }
            if ( ++v96 >= v97 )
              goto LABEL_110;
          }
          sub_15D7BC0(v99, v98);
          ++v96;
        }
        while ( v96 < v97 );
LABEL_110:
        v96 = (__int64 *)v89[7];
        if ( v96 )
LABEL_111:
          sub_186B220(v96 - 1);
      }
      v100 = (__int64 *)v89[5];
      if ( v100 )
      {
        v101 = &v100[*((unsigned int *)v100 - 1)];
        if ( v100 >= v101 )
          goto LABEL_120;
        do
        {
          while ( 1 )
          {
            v102 = *v100;
            if ( *v100 )
            {
              v103 = v89[4];
              v54 = (*(_DWORD *)(v102 + 8))-- == 1;
              if ( v54 )
                break;
            }
            if ( ++v100 >= v101 )
              goto LABEL_119;
          }
          sub_15D7BC0(v103, v102);
          ++v100;
        }
        while ( v100 < v101 );
LABEL_119:
        v100 = (__int64 *)v89[5];
        if ( v100 )
LABEL_120:
          sub_186B220(v100 - 1);
      }
      v104 = v89[2];
      if ( v104 )
      {
        v105 = v89[3];
        v54 = (*(_DWORD *)(v104 + 8))-- == 1;
        if ( v54 )
          sub_15D7BC0(v105, v104);
      }
      ++v88;
      sub_186B220(v89);
    }
    while ( (unsigned __int64)v88 < v87 );
  }
LABEL_125:
  sub_186B220(v282 - 1);
LABEL_126:
  if ( !*(_QWORD *)v283 )
  {
    v109 = v293;
    if ( v293 )
      goto LABEL_134;
    goto LABEL_281;
  }
  v106 = *(__int64 **)v283;
  v107 = *(_QWORD *)v283 + 8LL * *(unsigned int *)(*(_QWORD *)v283 - 4LL);
  if ( *(_QWORD *)v283 < v107 )
  {
    do
    {
      while ( 1 )
      {
        v108 = *v106;
        if ( *v106 )
        {
          v54 = (*(_DWORD *)(v108 + 8))-- == 1;
          if ( v54 )
            break;
        }
        if ( (unsigned __int64)++v106 >= v107 )
          goto LABEL_133;
      }
      ++v106;
      sub_15D7BC0(v290, v108);
    }
    while ( (unsigned __int64)v106 < v107 );
  }
LABEL_133:
  sub_186B220((void *)(*(_QWORD *)v283 - 8LL));
  v109 = v293;
  if ( !v293 )
  {
LABEL_281:
    v110 = v291;
    if ( v291 )
      goto LABEL_137;
    v58 = *((unsigned int *)v272 - 1);
LABEL_141:
    v111 = (unsigned __int64)&v272[v58];
    v112 = (void **)v272;
    if ( (unsigned __int64)v272 < v111 )
    {
      do
      {
        while ( 1 )
        {
          v113 = *v112;
          if ( *v112 )
          {
            v54 = (*(_DWORD *)v113)-- == 1;
            if ( v54 )
              break;
          }
          if ( (unsigned __int64)++v112 >= v111 )
            goto LABEL_183;
        }
        v114 = (void (__fastcall ***)(void *))v113[11];
        if ( v114 )
        {
          v54 = (*((_DWORD *)v114 + 4))-- == 1;
          if ( v54 )
          {
            (**v114)(v114);
            sub_186B220(v114);
          }
        }
        v115 = (_QWORD *)v113[10];
        if ( v115 )
        {
          v54 = (*(_DWORD *)v115)-- == 1;
          if ( v54 )
          {
            sub_41CB00(v115);
            sub_186B220(v115);
          }
        }
        v116 = (__int64 *)v113[9];
        if ( v116 )
        {
          v117 = &v116[*((unsigned int *)v116 - 1)];
          if ( v116 >= v117 )
            goto LABEL_160;
          do
          {
            while ( 1 )
            {
              v118 = *v116;
              if ( *v116 )
              {
                v119 = v113[8];
                v54 = (*(_DWORD *)(v118 + 8))-- == 1;
                if ( v54 )
                  break;
              }
              if ( ++v116 >= v117 )
                goto LABEL_159;
            }
            sub_15D7BC0(v119, v118);
            ++v116;
          }
          while ( v116 < v117 );
LABEL_159:
          v116 = (__int64 *)v113[9];
          if ( v116 )
LABEL_160:
            sub_186B220(v116 - 1);
        }
        v120 = (__int64 *)v113[7];
        if ( v120 )
        {
          v121 = &v120[*((unsigned int *)v120 - 1)];
          if ( v120 >= v121 )
            goto LABEL_169;
          do
          {
            while ( 1 )
            {
              v122 = *v120;
              if ( *v120 )
              {
                v123 = v113[6];
                v54 = (*(_DWORD *)(v122 + 8))-- == 1;
                if ( v54 )
                  break;
              }
              if ( ++v120 >= v121 )
                goto LABEL_168;
            }
            sub_15D7BC0(v123, v122);
            ++v120;
          }
          while ( v120 < v121 );
LABEL_168:
          v120 = (__int64 *)v113[7];
          if ( v120 )
LABEL_169:
            sub_186B220(v120 - 1);
        }
        v124 = (__int64 *)v113[5];
        if ( v124 )
        {
          v125 = &v124[*((unsigned int *)v124 - 1)];
          if ( v124 >= v125 )
            goto LABEL_178;
          do
          {
            while ( 1 )
            {
              v126 = *v124;
              if ( *v124 )
              {
                v127 = v113[4];
                v54 = (*(_DWORD *)(v126 + 8))-- == 1;
                if ( v54 )
                  break;
              }
              if ( ++v124 >= v125 )
                goto LABEL_177;
            }
            sub_15D7BC0(v127, v126);
            ++v124;
          }
          while ( v124 < v125 );
LABEL_177:
          v124 = (__int64 *)v113[5];
          if ( v124 )
LABEL_178:
            sub_186B220(v124 - 1);
        }
        v128 = v113[2];
        if ( v128 )
        {
          v129 = v113[3];
          v54 = (*(_DWORD *)(v128 + 8))-- == 1;
          if ( v54 )
            sub_15D7BC0(v129, v128);
        }
        ++v112;
        sub_186B220(v113);
      }
      while ( (unsigned __int64)v112 < v111 );
    }
LABEL_183:
    v17 = (__int64)(v272 - 1);
    sub_186B220(v272 - 1);
    result = a1;
    if ( !*(_BYTE *)(a1 + 24) )
      return result;
LABEL_422:
    result = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v17) - *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) += result;
    return result;
  }
LABEL_134:
  v17 = (__int64)v294;
  v54 = (*(_DWORD *)(v109 + 8))-- == 1;
  if ( v54 )
    sub_15D7BC0(v17, v109);
  v110 = v291;
  if ( v291 )
    goto LABEL_137;
LABEL_139:
  if ( v272 )
  {
    v58 = *((unsigned int *)v272 - 1);
    goto LABEL_141;
  }
LABEL_10:
  result = a1;
  if ( *(_BYTE *)(a1 + 24) )
    goto LABEL_422;
  return result;
}

