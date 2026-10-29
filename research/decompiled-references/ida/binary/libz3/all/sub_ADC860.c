__int64 __fastcall sub_ADC860(__int64 a1, __int64 **a2)
{
  char **exception; // rbx
  char **v3; // r12
  char **v4; // r14
  char **v5; // r14
  char **v6; // r14
  char **v7; // r15
  char **v8; // r14
  char **v9; // r14
  char **v10; // r14
  __int64 v12; // rbx
  __int64 *v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rsi
  char v16; // dl
  __int64 *v17; // r12
  _DWORD *v18; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rsi
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  int v31; // eax
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 *v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // r14
  _QWORD *v39; // rax
  __int64 *v40; // r15
  __int64 *v41; // rcx
  _QWORD *v42; // rdx
  int v43; // eax
  unsigned __int64 v44; // r13
  unsigned int v45; // eax
  __int64 v46; // r15
  __int64 v47; // r15
  int v48; // r8d
  int v49; // r9d
  _DWORD *v50; // r14
  __int64 v51; // rdi
  int v52; // eax
  __int64 v53; // rdi
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  _QWORD *v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  _QWORD *v62; // rcx
  __int64 v63; // rax
  __int64 *v64; // r15
  unsigned __int64 v65; // rbx
  __int64 v66; // rsi
  bool v67; // zf
  unsigned int v68; // r15d
  __int64 v69; // r12
  __int64 v70; // rdi
  __int64 (__fastcall *v71)(); // rax
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdi
  unsigned int v78; // r8d
  size_t v79; // rsi
  unsigned int *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rax
  int v89; // ecx
  int v90; // r8d
  int v91; // r9d
  int v92; // edi
  __int64 v93; // rax
  void *v94; // r13
  __int64 v95; // r14
  _QWORD *v96; // rax
  __int64 *v97; // r15
  __int64 *v98; // rcx
  _QWORD *v99; // rdx
  int v100; // eax
  unsigned __int64 v101; // r13
  unsigned int v102; // eax
  _QWORD *v103; // r14
  __int64 *v104; // r15
  __int64 v105; // rdi
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // r14
  __int64 v111; // rax
  __int64 v112; // r14
  unsigned int v113; // eax
  __int64 v114; // r14
  __int64 v115; // rax
  __int64 v116; // r14
  unsigned int v117; // eax
  __int64 v118; // r14
  __int64 v119; // rax
  _QWORD *v120; // rdx
  unsigned int v121; // eax
  __int64 v122; // rcx
  int v123; // eax
  _QWORD *v124; // rcx
  float *v125; // rax
  __int64 *v126; // rbx
  __int64 v127; // rsi
  __int64 v128; // r13
  __int64 v129; // rax
  unsigned int v130; // r13d
  size_t v131; // rsi
  unsigned int *v132; // rax
  __int64 v133; // rcx
  unsigned int v134; // r15d
  unsigned int v135; // ecx
  unsigned int *v136; // rax
  __int64 v137; // rcx
  __int64 v138; // r14
  _QWORD *v139; // rax
  __int64 v140; // r15
  _QWORD *v141; // r13
  __int64 v142; // rax
  void *v143; // r8
  int v144; // edx
  unsigned int v145; // ecx
  __int64 v146; // rsi
  __int64 v147; // rax
  unsigned int v148; // edx
  unsigned int v149; // eax
  unsigned int *v150; // rax
  unsigned int v151; // r8d
  size_t v152; // rsi
  unsigned int *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 *v156; // r15
  unsigned __int64 v157; // rbx
  __int64 v158; // rsi
  _QWORD *v159; // rax
  unsigned int v160; // ecx
  size_t v161; // rsi
  unsigned int *v162; // rax
  unsigned int v163; // ecx
  size_t v164; // rsi
  __int64 v165; // rax
  unsigned int v166; // edx
  unsigned int v167; // ecx
  unsigned int *v168; // rax
  unsigned int v169; // edx
  unsigned int v170; // ecx
  unsigned int *v171; // rax
  _QWORD *v172; // rdx
  __int64 v173; // rdi
  __int64 v174; // rax
  _QWORD *v175; // rdi
  __int64 v176; // r14
  _QWORD *v177; // rdx
  int v178; // [rsp+0h] [rbp-150h]
  int v179; // [rsp+0h] [rbp-150h]
  int v180; // [rsp+0h] [rbp-150h]
  __int64 v181; // [rsp+8h] [rbp-148h]
  int v182; // [rsp+8h] [rbp-148h]
  int v183; // [rsp+8h] [rbp-148h]
  int v184; // [rsp+8h] [rbp-148h]
  __int64 v185; // [rsp+10h] [rbp-140h]
  __int64 v186; // [rsp+10h] [rbp-140h]
  int v187; // [rsp+10h] [rbp-140h]
  int v188; // [rsp+10h] [rbp-140h]
  int v189; // [rsp+18h] [rbp-138h]
  char v190[8]; // [rsp+18h] [rbp-138h]
  char v191[8]; // [rsp+18h] [rbp-138h]
  char v192[8]; // [rsp+18h] [rbp-138h]
  char v193[8]; // [rsp+18h] [rbp-138h]
  unsigned int v194; // [rsp+18h] [rbp-138h]
  unsigned int v195; // [rsp+18h] [rbp-138h]
  unsigned int v196; // [rsp+18h] [rbp-138h]
  int v197[2]; // [rsp+20h] [rbp-130h]
  int v198[2]; // [rsp+20h] [rbp-130h]
  int v199; // [rsp+20h] [rbp-130h]
  unsigned int v200; // [rsp+20h] [rbp-130h]
  int v201[2]; // [rsp+20h] [rbp-130h]
  void *v202; // [rsp+28h] [rbp-128h]
  __int64 v203; // [rsp+28h] [rbp-128h]
  void *v204; // [rsp+28h] [rbp-128h]
  void *v205; // [rsp+28h] [rbp-128h]
  __int64 *v206; // [rsp+30h] [rbp-120h]
  void *v207; // [rsp+38h] [rbp-118h]
  unsigned int v208; // [rsp+38h] [rbp-118h]
  int v209[2]; // [rsp+40h] [rbp-110h]
  int v210; // [rsp+48h] [rbp-108h]
  unsigned int v211; // [rsp+4Ch] [rbp-104h]
  __int64 *v212; // [rsp+50h] [rbp-100h]
  __int64 v213; // [rsp+58h] [rbp-F8h]
  char v214; // [rsp+63h] [rbp-EDh]
  unsigned int v215; // [rsp+64h] [rbp-ECh]
  float *v216; // [rsp+68h] [rbp-E8h]
  unsigned __int64 v217; // [rsp+68h] [rbp-E8h]
  __int64 v218; // [rsp+70h] [rbp-E0h]
  int v219; // [rsp+70h] [rbp-E0h]
  __int64 v220; // [rsp+78h] [rbp-D8h]
  unsigned int v221; // [rsp+78h] [rbp-D8h]
  int v222[2]; // [rsp+90h] [rbp-C0h] BYREF
  char v223[8]; // [rsp+98h] [rbp-B8h] BYREF
  __int64 v224; // [rsp+A0h] [rbp-B0h] BYREF
  __int64 v225; // [rsp+A8h] [rbp-A8h]
  __int64 v226; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v227; // [rsp+B8h] [rbp-98h]
  __int64 v228; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v229; // [rsp+C8h] [rbp-88h]
  __int64 v230; // [rsp+D0h] [rbp-80h]
  _DWORD *v231; // [rsp+E0h] [rbp-70h]
  __int64 v232; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v233; // [rsp+F8h] [rbp-58h]
  __int64 v234[2]; // [rsp+100h] [rbp-50h] BYREF
  _QWORD v235[8]; // [rsp+110h] [rbp-40h] BYREF

  v12 = a1;
  v13 = *a2;
  v216 = (float *)a2;
  v14 = *((_DWORD *)*a2 + 6);
  v15 = **a2;
  v213 = *(_QWORD *)(a1 + 8);
  v16 = *(_BYTE *)(v213 + 9448);
  v17 = (__int64 *)v13[4];
  *(_BYTE *)(v213 + 9448) = 1;
  v212 = v13;
  v214 = v16;
  v218 = v15;
  v215 = v14;
  v211 = *((_DWORD *)a2 + 3) & 0x7FFFFFFF;
  *((_BYTE *)a2 + 15) |= 0x80u;
  v18 = (_DWORD *)sub_952C10(*(__int64 **)a1, v15);
  if ( (unsigned __int8)sub_BDC020(a1 + 40, *(_QWORD *)(v15 + 24), v14, v17) )
  {
    ++v18[6];
    goto LABEL_3;
  }
  v20 = sub_15154B0(a1 + 328, v15, v14);
  v21 = 0;
  if ( v14 )
  {
    do
    {
      *(_QWORD *)(v20 + v21 * 8) = *(_QWORD *)v17[v21];
      ++v21;
    }
    while ( v21 != v14 );
  }
  sub_15155F0(&v224, a1 + 328);
  v22 = *(_QWORD *)(a1 + 16);
  v226 = 0;
  v227 = v22;
  v229 = v22;
  v23 = *(_QWORD *)(a1 + 8);
  v228 = 0;
  v24 = v23 + 7456;
  sub_14BB8A0(v23 + 7456, v224, &v226, &v228);
  v25 = *(_QWORD *)(v12 + 16);
  if ( v226 == *(_QWORD *)(v25 + 856) )
  {
    ++v18[7];
    if ( *(_QWORD *)(v25 + 912) )
    {
      sub_ADB3C0(v12);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    goto LABEL_79;
  }
  v26 = v18[5];
  ++v18[8];
  v27 = *(_QWORD *)(v12 + 24);
  v18[5] = ++v26;
  if ( !(v26 % *(_DWORD *)(v27 + 92)) )
  {
    v128 = *(_QWORD *)v12;
    v129 = sub_180B150(v24, v27);
    sub_955500(v128, v129, v218);
  }
  if ( *(_QWORD *)(v12 + 1016) )
  {
    v232 = v218;
    v234[0] = v224;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *))(v12 + 1024))(v12 + 1000, &v232, v234) )
    {
      sub_180B150(v12 + 1000, &v232);
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_79:
      v82 = v228;
      if ( v228 )
      {
        v83 = v229;
        v67 = (*(_DWORD *)(v228 + 8))-- == 1;
        if ( v67 )
          sub_15D7BC0(v83, v82);
      }
      v84 = v226;
      if ( v226 )
      {
        v85 = v227;
        v67 = (*(_DWORD *)(v226 + 8))-- == 1;
        if ( v67 )
          sub_15D7BC0(v85, v84);
      }
      v86 = v224;
      if ( v224 )
      {
        v87 = v225;
        v67 = (*(_DWORD *)(v224 + 8))-- == 1;
        if ( v67 )
          sub_15D7BC0(v87, v86);
      }
      goto LABEL_3;
    }
  }
  *(_QWORD *)v209 = *(_QWORD *)(v12 + 16);
  v220 = v226;
  if ( !*(_WORD *)(v226 + 4) )
  {
    v28 = *(_DWORD **)(*(_QWORD *)(v226 + 16) + 24LL);
    if ( v28 )
    {
      if ( !*v28 && v28[1] == 6 )
      {
        v138 = sub_15E1A70(v209[0]);
        v139 = (_QWORD *)sub_186B270(0x18u);
        v140 = v226;
        v139[1] = v138;
        v141 = v139 + 1;
        *v139 = 0x100000002LL;
        v142 = *(unsigned int *)(v140 + 24);
        if ( (_DWORD)v142 )
        {
          v143 = (void *)(v140 + 8 * v142);
          v144 = 2;
          v145 = 1;
          while ( 1 )
          {
            v146 = *(_QWORD *)(v140 + 32);
            v147 = v145;
            v140 += 8;
            ++v145;
            v141[v147] = v146;
            *((_DWORD *)v141 - 1) = v145;
            if ( (void *)v140 == v143 )
              break;
            if ( v145 == v144 )
            {
              v148 = (3 * v145 + 1) >> 1;
              v149 = 8 * v148 + 8;
              if ( 8 * v145 + 8 >= v149 || v145 >= v148 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v234, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v234);
                sub_233E40((__int64)v234);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v207 = v143;
              v221 = (3 * v145 + 1) >> 1;
              v150 = (unsigned int *)sub_186B300(v141 - 1, v149);
              v144 = v221;
              v145 = v150[1];
              v141 = v150 + 2;
              v143 = v207;
              *v150 = v221;
            }
          }
          v173 = *(_QWORD *)(v12 + 16);
        }
        else
        {
          v173 = *(_QWORD *)(v12 + 16);
        }
        v174 = sub_15E1AF0(v173);
        v175 = v141 - 1;
        v220 = v174;
        v176 = v174;
        if ( v174 )
        {
          ++*(_DWORD *)(v174 + 8);
          sub_186B220(v175);
          v31 = *(_DWORD *)(v176 + 8);
          v30 = v220;
          goto LABEL_19;
        }
        sub_186B220(v175);
LABEL_129:
        v220 = 0;
        goto LABEL_20;
      }
    }
  }
  if ( v226 == *(_QWORD *)(*(_QWORD *)v209 + 864LL) )
  {
    v29 = sub_15E1A70(v209[0]);
  }
  else
  {
    if ( v226 == *(_QWORD *)(*(_QWORD *)v209 + 856LL) )
    {
      v30 = v226;
      v31 = *(_DWORD *)(v226 + 8) + 1;
      *(_DWORD *)(v226 + 8) = v31;
      goto LABEL_19;
    }
    sub_15E1A70(v209[0]);
    v29 = sub_15E1B70(v209[0]);
  }
  v220 = v29;
  if ( !v29 )
    goto LABEL_129;
  v30 = v29;
  v31 = *(_DWORD *)(v29 + 8) + 1;
  *(_DWORD *)(v30 + 8) = v31;
LABEL_19:
  *(_DWORD *)(v30 + 8) = v31 + 1;
LABEL_20:
  v32 = *(_QWORD **)(v12 + 1056);
  if ( v32 )
  {
    v33 = *((_DWORD *)v32 - 1);
    if ( v33 == *((_DWORD *)v32 - 2) )
    {
      v130 = (3 * v33 + 1) >> 1;
      v131 = 8 * v130 + 8;
      if ( 8 * v33 + 8 >= (unsigned int)v131 || v33 >= v130 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v234, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v234);
        sub_233E40((__int64)v234);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v132 = (unsigned int *)sub_186B300(v32 - 1, v131);
      v133 = v132[1];
      v32 = v132 + 2;
      *v132 = v130;
      *(_QWORD *)(v12 + 1056) = v132 + 2;
      LODWORD(v132) = v133;
      v36 = &v32[v133];
      v35 = (_DWORD)v132 + 1;
    }
    else
    {
      v34 = v33;
      v35 = v33 + 1;
      v36 = &v32[v34];
    }
  }
  else
  {
    v159 = (_QWORD *)sub_186B270(0x18u);
    v32 = v159 + 1;
    *v159 = 2;
    v35 = 1;
    *(_QWORD *)(v12 + 1056) = v32;
    v36 = v32;
  }
  *v36 = v220;
  *((_DWORD *)v32 - 1) = v35;
  v37 = *(_DWORD **)(v12 + 16);
  v202 = v37;
  LODWORD(v207) = v37[178];
  if ( (_DWORD)v207 )
  {
    v232 = *(_QWORD *)(v12 + 16);
    if ( v215 )
    {
      v38 = *(_QWORD *)*v17;
      if ( v38 )
        ++*(_DWORD *)(v38 + 8);
      v39 = (_QWORD *)sub_186B270(0x18u);
      *v39 = 2;
      v40 = v17;
      v41 = &v17[v215];
      v42 = v39 + 1;
      v43 = 1;
      v44 = (unsigned __int64)v42;
      while ( 1 )
      {
        ++v40;
        *v42 = v38;
        *(_DWORD *)(v44 - 4) = v43;
        if ( v41 == v40 )
          break;
        while ( 1 )
        {
          v38 = *(_QWORD *)*v40;
          if ( v38 )
            ++*(_DWORD *)(v38 + 8);
          v45 = *(_DWORD *)(v44 - 4);
          if ( v45 == *(_DWORD *)(v44 - 8) )
            break;
          ++v40;
          *(_QWORD *)(v44 + 8LL * v45) = v38;
          *(_DWORD *)(v44 - 4) = v45 + 1;
          if ( v41 == v40 )
            goto LABEL_33;
        }
        v78 = (3 * v45 + 1) >> 1;
        v79 = 8 * v78 + 8;
        if ( 8 * v45 + 8 >= (unsigned int)v79 || v45 >= v78 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v234, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v234);
          sub_233E40((__int64)v234);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v206 = v41;
        v208 = (3 * v45 + 1) >> 1;
        v80 = (unsigned int *)sub_186B300((void *)(v44 - 8), v79);
        v81 = v80[1];
        v44 = (unsigned __int64)(v80 + 2);
        v41 = v206;
        *v80 = v208;
        LODWORD(v80) = v81;
        v42 = (_QWORD *)(v44 + 8 * v81);
        v43 = (_DWORD)v80 + 1;
      }
LABEL_33:
      v46 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      LODWORD(v46) = (_DWORD)v37;
      v44 = 0;
    }
    sub_15E1A70(v46);
    v47 = sub_15E1B70(v46);
    v50 = (_DWORD *)sub_15DEDA0(*(_QWORD *)(v12 + 16), v47, v215, v44, v48, v49);
    LODWORD(v207) = *v50;
    if ( v47 == v220
      || ((v51 = *(_QWORD *)(v12 + 16), v224 == v226)
        ? (v56 = sub_15DE370(v51))
        : (v197[0] = v226,
           sub_15E1A70(v51),
           v52 = sub_15E1B70(v51),
           v53 = *(_QWORD *)(v12 + 16),
           LODWORD(v206) = v52,
           v234[0] = v228,
           v54 = sub_15E2980(v53),
           v55 = sub_15DE370(*(_QWORD *)(v12 + 16)),
           v56 = sub_15E2470(*(_QWORD *)(v12 + 16), v54, v55)),
          (v50 = (_DWORD *)sub_15DE0E0(*(_QWORD *)(v12 + 16), v50, v56)) != nullptr) )
    {
      v57 = v50[2] + 1;
      v50[2] = v57;
      v50[2] = v57 + 1;
    }
    else
    {
      v50 = nullptr;
    }
    v58 = *(_QWORD **)(v12 + 1056);
    if ( v58 )
    {
      v59 = *((_DWORD *)v58 - 1);
      if ( v59 == *((_DWORD *)v58 - 2) )
      {
        v134 = (3 * v59 + 1) >> 1;
        v135 = 8 * v134 + 8;
        if ( 8 * v59 + 8 >= v135 || v59 >= v134 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v234, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v234);
          sub_233E40((__int64)v234);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v136 = (unsigned int *)sub_186B300(v58 - 1, v135);
        v137 = v136[1];
        v58 = v136 + 2;
        *v136 = v134;
        *(_QWORD *)(v12 + 1056) = v136 + 2;
        LODWORD(v136) = v137;
        v62 = &v58[v137];
        v61 = (_DWORD)v136 + 1;
      }
      else
      {
        v60 = v59;
        v61 = v59 + 1;
        v62 = &v58[v60];
      }
    }
    else
    {
      v172 = (_QWORD *)sub_186B270(0x18u);
      *v172 = 2;
      v61 = 1;
      v58 = v172 + 1;
      *(_QWORD *)(v12 + 1056) = v58;
      v62 = v58;
    }
    *v62 = v50;
    *((_DWORD *)v58 - 1) = v61;
    if ( v44 )
    {
      v63 = *(unsigned int *)(v44 - 4);
      v64 = (__int64 *)v44;
      if ( v44 < v44 + 8 * v63 )
      {
        v206 = (__int64 *)v12;
        v65 = v44 + 8 * v63;
        do
        {
          while ( 1 )
          {
            v66 = *v64;
            if ( *v64 )
            {
              v67 = (*(_DWORD *)(v66 + 8))-- == 1;
              if ( v67 )
                break;
            }
            if ( (unsigned __int64)++v64 >= v65 )
              goto LABEL_49;
          }
          ++v64;
          sub_15D7BC0(v202, v66);
        }
        while ( (unsigned __int64)v64 < v65 );
LABEL_49:
        v12 = (__int64)v206;
      }
      sub_186B220((void *)(v44 - 8));
    }
  }
  else
  {
    v50 = nullptr;
    if ( *(_BYTE *)(*(_QWORD *)(v12 + 8) + 7576LL) )
    {
      v230 = *(_QWORD *)(v12 + 16);
      v231 = v37;
      sub_16669D0(&v232, v37);
      v88 = *(_QWORD *)(v12 + 16);
      v234[1] = 0;
      v182 = v88;
      v235[0] = 1;
      v235[1] = 0;
      v234[0] = v211;
      sub_182CBA0(qword_1C7F2C0, v235);
      v92 = v233;
      BYTE4(v235[0]) &= ~1u;
      LODWORD(v235[0]) = 1;
      if ( !v233 )
      {
        sub_16669E0(&v232);
        v92 = v233;
      }
      v206 = v234;
      v93 = sub_166A700(v92, (unsigned int)v234, 1, v89, v90, v91);
      v94 = qword_1C7F2C0;
      v186 = v93;
      sub_182CBA0(qword_1C7F2C0, v234);
      sub_182CBA0(v94, v235);
      if ( v186 )
        ++*(_DWORD *)(v186 + 8);
      *(_QWORD *)v222 = v186;
      if ( v215 )
      {
        v95 = *(_QWORD *)*v17;
        if ( v95 )
          ++*(_DWORD *)(v95 + 8);
        v96 = (_QWORD *)sub_186B270(0x18u);
        *v96 = 2;
        v97 = v17;
        v98 = &v17[v215];
        v99 = v96 + 1;
        v100 = 1;
        v101 = (unsigned __int64)v99;
        while ( 1 )
        {
          ++v97;
          *v99 = v95;
          *(_DWORD *)(v101 - 4) = v100;
          if ( v97 == v98 )
            break;
          while ( 1 )
          {
            v95 = *(_QWORD *)*v97;
            if ( v95 )
              ++*(_DWORD *)(v95 + 8);
            v102 = *(_DWORD *)(v101 - 4);
            if ( v102 == *(_DWORD *)(v101 - 8) )
              break;
            ++v97;
            *(_QWORD *)(v101 + 8LL * v102) = v95;
            *(_DWORD *)(v101 - 4) = v102 + 1;
            if ( v97 == v98 )
              goto LABEL_102;
          }
          v151 = (3 * v102 + 1) >> 1;
          v152 = 8 * v151 + 8;
          if ( 8 * v102 + 8 >= (unsigned int)v152 || v102 >= v151 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v234, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v234);
            sub_233E40((__int64)v234);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          *(_QWORD *)v193 = v98;
          v200 = (3 * v102 + 1) >> 1;
          v153 = (unsigned int *)sub_186B300((void *)(v101 - 8), v152);
          v154 = v153[1];
          v101 = (unsigned __int64)(v153 + 2);
          v98 = *(__int64 **)v193;
          *v153 = v200;
          LODWORD(v153) = v154;
          v99 = (_QWORD *)(v101 + 8 * v154);
          v100 = (_DWORD)v153 + 1;
        }
      }
      else
      {
        v101 = 0;
      }
LABEL_102:
      ++*(_DWORD *)(v218 + 8);
      v103 = (_QWORD *)sub_186B270(0x18u);
      v104 = v103 + 1;
      v105 = *(_QWORD *)(v12 + 16);
      v106 = v224;
      v103[1] = v218;
      *v103 = 0x100000002LL;
      v107 = sub_15EC2C0(v105, v106);
      v108 = v107;
      if ( v107 )
        ++*(_DWORD *)(v107 + 8);
      v109 = *((_DWORD *)v103 + 1);
      if ( v109 == *(_DWORD *)v103 )
      {
        v160 = (3 * v109 + 1) >> 1;
        v161 = 8 * v160 + 8;
        if ( 8 * v109 + 8 >= (unsigned int)v161 || v109 >= v160 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v234, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v234);
          sub_233E40((__int64)v234);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v194 = (3 * v109 + 1) >> 1;
        *(_QWORD *)v201 = v108;
        v162 = (unsigned int *)sub_186B300(v103, v161);
        v104 = (__int64 *)(v162 + 2);
        v108 = *(_QWORD *)v201;
        *v162 = v194;
        v109 = v162[1];
      }
      v110 = *(_QWORD *)(v12 + 16);
      v104[v109] = v108;
      *((_DWORD *)v104 - 1) = v109 + 1;
      *(_QWORD *)v190 = *(_QWORD *)(v110 + 848);
      sub_180C5A0(v223, "bind");
      v111 = sub_15E3760(v110, (int)v223, v215, v101, v190[0], v178, v182, v186, *(int *)v190, (int)v223, v202);
      v112 = v111;
      if ( v111 )
        ++*(_DWORD *)(v111 + 8);
      v113 = *((_DWORD *)v104 - 1);
      if ( v113 == *((_DWORD *)v104 - 2) )
      {
        v169 = (3 * v113 + 1) >> 1;
        v170 = 8 * v169 + 8;
        if ( 8 * v113 + 8 >= v170 || v113 >= v169 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v234, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v234);
          sub_233E40((__int64)v234);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v196 = (3 * v113 + 1) >> 1;
        v171 = (unsigned int *)sub_186B300(v104 - 1, v170);
        v104 = (__int64 *)(v171 + 2);
        *v171 = v196;
        v113 = v171[1];
      }
      v104[v113] = v112;
      v114 = *(_QWORD *)(v12 + 16);
      *((_DWORD *)v104 - 1) = v113 + 1;
      *(_QWORD *)v191 = *(_QWORD *)(v114 + 848);
      sub_180C5A0(*(_QWORD *)v198, "gen");
      v115 = sub_15E3760(v114, v198[0], 1, (int)v222, v191[0], v179, v183, v187, *(int *)v191, v198[0], v204);
      v116 = v115;
      if ( v115 )
        ++*(_DWORD *)(v115 + 8);
      v117 = *((_DWORD *)v104 - 1);
      if ( v117 == *((_DWORD *)v104 - 2) )
      {
        v166 = (3 * v117 + 1) >> 1;
        v167 = 8 * v166 + 8;
        if ( 8 * v117 + 8 >= v167 || v117 >= v166 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v234, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v234);
          sub_233E40((__int64)v234);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v195 = (3 * v117 + 1) >> 1;
        v168 = (unsigned int *)sub_186B300(v104 - 1, v167);
        v104 = (__int64 *)(v168 + 2);
        *v168 = v195;
        v117 = v168[1];
      }
      v104[v117] = v116;
      v118 = *(_QWORD *)(v12 + 16);
      *((_DWORD *)v104 - 1) = v117 + 1;
      v210 = v117 + 1;
      *(_QWORD *)v192 = *(_QWORD *)(v118 + 848);
      sub_180C5A0(v234, "inst");
      v119 = sub_15E3760(v118, (int)v234, v210, (int)v104, v192[0], v180, v184, v188, *(int *)v192, v199, v205);
      v50 = (_DWORD *)v119;
      if ( v119 )
        *(_DWORD *)(v119 + 8) += 2;
      v120 = *(_QWORD **)(v12 + 1056);
      if ( v120 )
      {
        v121 = *((_DWORD *)v120 - 1);
        if ( v121 == *((_DWORD *)v120 - 2) )
        {
          v163 = (3 * v121 + 1) >> 1;
          v164 = 8 * v163 + 8;
          if ( 8 * v121 + 8 >= (unsigned int)v164 || v121 >= v163 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v234, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v234);
            sub_233E40((__int64)v234);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v206) = (3 * v121 + 1) >> 1;
          v165 = sub_186B300(v120 - 1, v164);
          v120 = (_QWORD *)(v165 + 8);
          *(_QWORD *)(v12 + 1056) = v165 + 8;
          *(_DWORD *)v165 = (_DWORD)v206;
          LODWORD(v165) = *(_DWORD *)(v165 + 4);
          v124 = &v120[(unsigned int)v165];
          v123 = v165 + 1;
        }
        else
        {
          v122 = v121;
          v123 = v121 + 1;
          v124 = &v120[v122];
        }
      }
      else
      {
        v177 = (_QWORD *)sub_186B270(0x18u);
        *v177 = 2;
        v123 = 1;
        v120 = v177 + 1;
        *(_QWORD *)(v12 + 1056) = v120;
        v124 = v120;
      }
      *v124 = v50;
      *((_DWORD *)v120 - 1) = v123;
      if ( v185 )
      {
        LODWORD(v206) = *(_DWORD *)(v185 + 8);
        *(_DWORD *)(v185 + 8) = (_DWORD)v206 - 1;
        if ( (_DWORD)v206 == 1 )
          sub_15D7BC0(v181, v185);
      }
      if ( v104 < &v104[*((unsigned int *)v104 - 1)] )
      {
        v125 = v216;
        v206 = (__int64 *)v12;
        v126 = v104;
        v217 = (unsigned __int64)&v104[*((unsigned int *)v104 - 1)];
        *(_QWORD *)v197 = v125;
        do
        {
          v127 = *v126;
          if ( *v126 )
          {
            v67 = (*(_DWORD *)(v127 + 8))-- == 1;
            if ( v67 )
              sub_15D7BC0(v202, v127);
          }
          ++v126;
        }
        while ( (unsigned __int64)v126 < v217 );
        v12 = (__int64)v206;
        v216 = *(float **)v197;
      }
      sub_186B220(v104 - 1);
      if ( v101 )
      {
        v155 = *(unsigned int *)(v101 - 4);
        v156 = (__int64 *)v101;
        if ( v101 < v101 + 8 * v155 )
        {
          v206 = (__int64 *)v12;
          v157 = v101 + 8 * v155;
          do
          {
            v158 = *v156;
            if ( *v156 )
            {
              v67 = (*(_DWORD *)(v158 + 8))-- == 1;
              if ( v67 )
                sub_15D7BC0(v202, v158);
            }
            ++v156;
          }
          while ( (unsigned __int64)v156 < v157 );
          v12 = (__int64)v206;
        }
        sub_186B220((void *)(v101 - 8));
      }
    }
  }
  ++*(_DWORD *)(v12 + 32);
  v68 = sub_ADB260(v12, v218, v211, v216[2]);
  sub_ADB3C0(v12);
  v69 = *(_QWORD *)(v12 + 8);
  sub_B6F170(v69, v178, v181, v185, v189, v197[0], (int)v202, (int)v206, v207);
  if ( (unsigned int)sub_8E7030(v69) )
  {
    v70 = *(_QWORD *)(v69 + 8952);
    v71 = *(__int64 (__fastcall **)())(*(_QWORD *)v70 + 72LL);
    if ( v71 != nullsub_643 )
      ((void (__fastcall *)(__int64, __int64, _QWORD))v71)(v70, v220, v68);
  }
  if ( v212[2] )
    sub_B6F780(*(_QWORD *)(v12 + 8));
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 912LL) )
    std::__ostream_insert<char,std::char_traits<char>>();
  if ( v50 )
  {
    v67 = v50[2]-- == 1;
    if ( v67 )
      sub_15D7BC0(v203, v50);
  }
  if ( v220 )
  {
    v219 = *(_DWORD *)(v220 + 8);
    *(_DWORD *)(v220 + 8) = v219 - 1;
    if ( v219 == 1 )
      sub_15D7BC0(*(_QWORD *)v209, v220);
  }
  v72 = v228;
  if ( v228 )
  {
    v73 = v229;
    v67 = (*(_DWORD *)(v228 + 8))-- == 1;
    if ( v67 )
      sub_15D7BC0(v73, v72);
  }
  v74 = v226;
  if ( v226 )
  {
    v75 = v227;
    v67 = (*(_DWORD *)(v226 + 8))-- == 1;
    if ( v67 )
      sub_15D7BC0(v75, v74);
  }
  v76 = v224;
  if ( v224 )
  {
    v77 = v225;
    v67 = (*(_DWORD *)(v224 + 8))-- == 1;
    if ( v67 )
      sub_15D7BC0(v77, v76);
  }
LABEL_3:
  *(_BYTE *)(v213 + 9448) = v214;
  return v213;
}

