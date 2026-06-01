__int64 __fastcall sub_4560A0(__int64 a1, __int64 *a2)
{
  char **v2; // r14
  char **v3; // r13
  char **v4; // rbx
  char **exception; // rbp
  __int64 v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  unsigned int v15; // ebp
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rsi
  _DWORD *v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // ebx
  _DWORD *v25; // r13
  void **v26; // r14
  _QWORD *v27; // rbx
  __int16 v28; // ax
  _QWORD *v29; // r12
  unsigned int v30; // ebx
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned int *v33; // r14
  unsigned int v34; // r15d
  int v35; // edx
  int *v36; // rsi
  int v37; // edi
  __int16 v38; // ax
  __int64 v39; // rsi
  __int64 v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r15
  __int64 v45; // rax
  int v46; // r9d
  _QWORD *v47; // r13
  size_t v48; // rbx
  __int64 v49; // r12
  int v50; // edi
  __int64 v51; // rax
  _QWORD *v52; // r8
  _QWORD *v53; // rax
  _QWORD *v54; // rsi
  __int64 v55; // rdx
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // edi
  _DWORD *v59; // r8
  unsigned int v60; // edx
  bool v61; // cc
  unsigned int v62; // r15d
  __int64 v63; // rdx
  unsigned int **v64; // rdx
  __int64 v65; // rax
  int v66; // r14d
  __int64 v67; // rsi
  __int64 result; // rax
  __int64 *v69; // rbx
  unsigned __int64 v70; // rbp
  _DWORD *v71; // rax
  _DWORD *v72; // rax
  __int64 v73; // r15
  void **v74; // r9
  __int64 v75; // r8
  __int64 v76; // rax
  int v77; // r10d
  unsigned int v78; // r11d
  _QWORD *v79; // r14
  __int64 v80; // r15
  int v81; // ecx
  __int64 v82; // rax
  _QWORD *v83; // rdi
  _QWORD *v84; // rax
  _QWORD *v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // r12
  char *v88; // rdi
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r9
  unsigned int v92; // r13d
  size_t v93; // rsi
  unsigned int *v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rsi
  bool v99; // zf
  char *v100; // rax
  char *v101; // rbx
  char *v102; // r13
  __int64 v103; // r15
  _QWORD *v104; // rax
  int v105; // r8d
  int v106; // r9d
  _QWORD *v107; // rsi
  int v108; // edx
  _QWORD *v109; // rax
  char *i; // rax
  unsigned int v111; // eax
  __int64 *v112; // rbx
  _QWORD *v113; // r15
  int v114; // eax
  _QWORD *v115; // rbp
  __int64 v116; // rcx
  int v117; // eax
  __int64 *v118; // rcx
  int v119; // eax
  int v120; // r8d
  int v121; // r9d
  __int64 v122; // rax
  _QWORD *v123; // rdx
  unsigned int v124; // eax
  unsigned int v125; // ecx
  size_t v126; // rsi
  unsigned int *v127; // rax
  unsigned int v128; // r8d
  size_t v129; // rsi
  _DWORD *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rax
  _DWORD *v133; // rbp
  _QWORD *v134; // r12
  __int64 v135; // rcx
  int v136; // eax
  _QWORD *v137; // rcx
  __int64 v138; // rax
  __int64 v139; // r15
  unsigned int v140; // eax
  unsigned int v141; // ecx
  size_t v142; // rsi
  unsigned int *v143; // rax
  _QWORD *v144; // rax
  unsigned __int64 v145; // r14
  __int64 v146; // rax
  _QWORD *v147; // rdx
  __int64 *v148; // r15
  __int64 *v149; // r12
  __int64 v150; // r13
  __int64 v151; // rax
  __int64 v152; // rdi
  __int64 v153; // r12
  __int64 *v154; // r13
  __int64 v155; // rsi
  __int64 v156; // rax
  __int64 *v157; // r12
  unsigned __int64 v158; // r13
  __int64 v159; // rsi
  __int64 v160; // rdi
  __int64 *v161; // rbp
  unsigned __int64 v162; // r12
  __int64 v163; // rsi
  __int64 *v164; // rbx
  unsigned __int64 v165; // rbp
  __int64 v166; // rsi
  _QWORD *v167; // rax
  __int64 v168; // rax
  _QWORD *v169; // rax
  char *v170; // rax
  char *v171; // r10
  __int64 v172; // rdx
  _QWORD *v173; // rcx
  _QWORD *v174; // rdx
  __int64 *v175; // rbp
  unsigned __int64 v176; // r12
  __int64 v177; // rsi
  _QWORD *v178; // r13
  __int64 v179; // rsi
  __int64 v180; // rdi
  _QWORD *v181; // r12
  unsigned int v182; // edx
  unsigned int **v183; // rax
  __int64 v184; // rax
  __int64 v185; // r12
  char *v186; // rdi
  unsigned __int64 v187; // rax
  __int64 v188; // rcx
  _QWORD *v189; // rax
  char *v190; // rax
  char *v191; // r8
  __int64 v192; // rdx
  _QWORD *v193; // rsi
  _QWORD *v194; // rdx
  __int64 v195; // [rsp+0h] [rbp-238h]
  int v196; // [rsp+0h] [rbp-238h]
  int v197; // [rsp+8h] [rbp-230h]
  int v198; // [rsp+8h] [rbp-230h]
  int v199; // [rsp+10h] [rbp-228h]
  int v200; // [rsp+10h] [rbp-228h]
  _QWORD *v201; // [rsp+18h] [rbp-220h]
  int v202; // [rsp+18h] [rbp-220h]
  unsigned int v203; // [rsp+18h] [rbp-220h]
  int v204; // [rsp+18h] [rbp-220h]
  unsigned int v205; // [rsp+20h] [rbp-218h]
  size_t v206; // [rsp+20h] [rbp-218h]
  _QWORD *v207; // [rsp+20h] [rbp-218h]
  int v208; // [rsp+20h] [rbp-218h]
  __int64 v209; // [rsp+20h] [rbp-218h]
  _QWORD *v210; // [rsp+28h] [rbp-210h]
  char v211; // [rsp+28h] [rbp-210h]
  _QWORD *v212; // [rsp+30h] [rbp-208h]
  int v213; // [rsp+30h] [rbp-208h]
  void **v214; // [rsp+30h] [rbp-208h]
  void **v215; // [rsp+30h] [rbp-208h]
  int v216; // [rsp+38h] [rbp-200h]
  int v217; // [rsp+38h] [rbp-200h]
  __int64 v218; // [rsp+38h] [rbp-200h]
  __int64 v219; // [rsp+38h] [rbp-200h]
  int v220; // [rsp+40h] [rbp-1F8h]
  int v221; // [rsp+40h] [rbp-1F8h]
  _DWORD *v222; // [rsp+48h] [rbp-1F0h]
  void *v223; // [rsp+48h] [rbp-1F0h]
  int v224; // [rsp+50h] [rbp-1E8h]
  unsigned int v227; // [rsp+68h] [rbp-1D0h]
  unsigned int v228; // [rsp+68h] [rbp-1D0h]
  unsigned int v229; // [rsp+68h] [rbp-1D0h]
  char v230; // [rsp+68h] [rbp-1D0h]
  unsigned int v231; // [rsp+7Ch] [rbp-1BCh] BYREF
  __int64 v232; // [rsp+80h] [rbp-1B8h]
  void *v233; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v234; // [rsp+98h] [rbp-1A0h]
  int v235; // [rsp+A0h] [rbp-198h]
  __int64 v236; // [rsp+B0h] [rbp-188h] BYREF
  _QWORD *v237; // [rsp+B8h] [rbp-180h] BYREF
  void *v238; // [rsp+C0h] [rbp-178h]
  int v239[4]; // [rsp+D0h] [rbp-168h] BYREF
  void **v240; // [rsp+E0h] [rbp-158h]
  __int64 v241; // [rsp+E8h] [rbp-150h]
  void *v242; // [rsp+F0h] [rbp-148h] BYREF
  __int64 v243; // [rsp+F8h] [rbp-140h]
  _DWORD *v244; // [rsp+100h] [rbp-138h] BYREF
  int v245; // [rsp+108h] [rbp-130h]

  v6 = *(_QWORD *)(*a2 + 8);
  v195 = v6;
  v7 = (_OWORD *)sub_186B270(0x40u);
  v233 = v7;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v234 = 8;
  v235 = 0;
  sub_1684300(v239, v6);
  v241 = 0;
  v240 = &v233;
  v12 = sub_4095A0(*a2, v6, v8, v9, v10, v11);
  v13 = *(_QWORD *)(v12 + 8);
  v14 = v12;
  if ( v13 )
  {
    v210 = nullptr;
    v15 = 0;
    while ( v15 < *(_DWORD *)(v13 - 4) )
    {
      v16 = *(_QWORD *)(v13 + 8LL * v15);
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      if ( v210 )
      {
        v17 = *((_DWORD *)v210 - 1);
        if ( v17 == *((_DWORD *)v210 - 2) )
        {
          v92 = (3 * v17 + 1) >> 1;
          v93 = 8 * v92 + 8;
          if ( 8 * v17 + 8 >= (unsigned int)v93 || v17 >= v92 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v242, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v242);
            sub_233E40((__int64)&v242);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (unsigned int *)sub_186B300(v210 - 1, v93);
          v95 = v94[1];
          *v94 = v92;
          v210 = v94 + 2;
          LODWORD(v94) = v95;
          v20 = &v210[v95];
          v13 = *(_QWORD *)(v14 + 8);
          v19 = (_DWORD)v94 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = &v210[v18];
        }
      }
      else
      {
        v167 = (_QWORD *)sub_186B270(0x18u);
        *v167 = 2;
        v13 = *(_QWORD *)(v14 + 8);
        v210 = v167 + 1;
        v20 = v167 + 1;
        v19 = 1;
      }
      *v20 = v16;
      ++v15;
      *((_DWORD *)v210 - 1) = v19;
      if ( !v13 )
        goto LABEL_10;
    }
    if ( v210 )
    {
LABEL_10:
      v21 = *((unsigned int *)v210 - 1);
      goto LABEL_11;
    }
  }
  v210 = nullptr;
  v21 = 0;
LABEL_11:
  v22 = (_DWORD *)sub_15EC1C0(v195, v21);
  v222 = v22;
  v23 = v22[2] + 1;
  v22[2] = v23;
  v237 = nullptr;
  v238 = nullptr;
  if ( v23 > 1 )
  {
    v24 = *v22;
    sub_186B510(&v237, v24 + 1, 0);
    *((_DWORD *)v238 + (v24 >> 5)) |= 1 << v24;
  }
  v25 = v222;
  LODWORD(v26) = 0;
  v27 = &v244;
  v201 = &v244;
  v242 = &v244;
  v244 = v222;
  v245 = 0;
  v243 = 0x1000000001LL;
  while ( 1 )
  {
LABEL_14:
    v28 = *((_WORD *)v25 + 2);
    v29 = &v27[2 * (unsigned int)v26];
    if ( v28 == 1 )
      goto LABEL_51;
    if ( v28 != 2 )
      break;
    v56 = v25[18];
    v57 = *((_DWORD *)v29 + 2);
    v58 = (unsigned int)v237;
    v59 = v238;
    v60 = v56 + v25[19] + 1;
    if ( v57 >= v60 )
    {
LABEL_50:
      LODWORD(v26) = v243 - 1;
LABEL_51:
      LODWORD(v243) = (_DWORD)v26;
      goto LABEL_52;
    }
    if ( !v57 )
    {
      v33 = *((unsigned int **)v25 + 3);
      goto LABEL_57;
    }
    while ( 1 )
    {
      v91 = v57 - 1;
      if ( v56 < v57 )
        v91 = (unsigned int)v91 - v56;
      v33 = *(unsigned int **)&v25[4 * (unsigned int)v25[5] + 20 + 2 * v91];
LABEL_57:
      ++v57;
      v61 = v33[2] <= 1;
      *((_DWORD *)v29 + 2) = v57;
      if ( v61 )
        break;
      v62 = *v33;
      if ( *v33 >= v58 )
      {
        sub_186B510(&v237, v62 + 1, 0);
LABEL_60:
        *((_DWORD *)v238 + (v62 >> 5)) |= 1 << v62;
        break;
      }
      if ( (v59[v62 >> 5] & (1 << v62)) == 0 )
        goto LABEL_60;
      if ( v57 >= v60 )
        goto LABEL_50;
      v56 = v25[18];
    }
    v63 = (unsigned int)v243;
    if ( (unsigned int)v243 >= HIDWORD(v243) )
    {
      v87 = (unsigned int)(2 * HIDWORD(v243));
      v27 = (_QWORD *)sub_186B270(16 * v87);
      v88 = (char *)v242;
      v96 = 0;
      v63 = (unsigned int)v243;
      v97 = 16LL * (unsigned int)v243;
      if ( (_DWORD)v243 )
      {
        do
        {
          *(__m128i *)&v27[v96 / 8] = _mm_loadu_si128((const __m128i *)&v88[v96]);
          v96 += 16LL;
        }
        while ( v96 != v97 );
      }
      goto LABEL_105;
    }
LABEL_62:
    v27 = v242;
LABEL_63:
    v64 = (unsigned int **)&v27[2 * v63];
    *((_DWORD *)v64 + 2) = 0;
    v65 = (unsigned int)v243;
    *v64 = v33;
    v66 = v65 + 1;
LABEL_64:
    LODWORD(v243) = v66;
    LODWORD(v26) = v66 - 1;
    v25 = (_DWORD *)v27[2 * v65];
  }
  if ( v28 )
  {
    v67 = 100;
    sub_1872CE0("");
    goto LABEL_66;
  }
  v30 = v25[6];
  v31 = *((_DWORD *)v29 + 2);
  if ( v31 < v30 )
  {
    while ( 1 )
    {
      v32 = v31++;
      v33 = *(unsigned int **)&v25[2 * v32 + 8];
      *((_DWORD *)v29 + 2) = v31;
      if ( v33[2] > 1 )
      {
        v34 = *v33;
        if ( *v33 < (unsigned int)v237 )
        {
          v36 = (int *)((char *)v238 + 4 * (v34 >> 5));
          v37 = *v36;
          v35 = 1 << v34;
          if ( ((1 << v34) & *v36) != 0 )
            goto LABEL_28;
        }
        else
        {
          sub_186B510(&v237, v34 + 1, 0);
          v35 = 1 << v34;
          v36 = (int *)((char *)v238 + 4 * (v34 >> 5));
          v37 = *v36;
        }
        *v36 = v37 | v35;
      }
      v38 = *((_WORD *)v33 + 2);
      if ( v38 == 1 )
      {
LABEL_27:
        v31 = *((_DWORD *)v29 + 2);
        goto LABEL_28;
      }
      if ( v38 == 2 )
      {
        v63 = (unsigned int)v243;
        if ( (unsigned int)v243 < HIDWORD(v243) )
          goto LABEL_62;
        v87 = (unsigned int)(2 * HIDWORD(v243));
        v27 = (_QWORD *)sub_186B270(16 * v87);
        v88 = (char *)v242;
        v89 = 0;
        v63 = (unsigned int)v243;
        v90 = 16LL * (unsigned int)v243;
        if ( (_DWORD)v243 )
        {
          do
          {
            *(__m128i *)&v27[v89 / 8] = _mm_loadu_si128((const __m128i *)&v88[v89]);
            v89 += 16LL;
          }
          while ( v89 != v90 );
        }
LABEL_105:
        if ( v88 != (char *)&v244 && v88 )
        {
          sub_186B220(v88);
          v63 = (unsigned int)v243;
        }
        v242 = v27;
        HIDWORD(v243) = v87;
        goto LABEL_63;
      }
      if ( v38 )
      {
        v39 = 73;
        sub_1872CE0("");
        goto LABEL_26;
      }
      if ( v33[6] )
      {
        v182 = v243;
        if ( (unsigned int)v243 >= HIDWORD(v243) )
        {
          v185 = (unsigned int)(2 * HIDWORD(v243));
          v27 = (_QWORD *)sub_186B270(16 * v185);
          v186 = (char *)v242;
          v187 = 0;
          v182 = v243;
          v188 = 16LL * (unsigned int)v243;
          if ( (_DWORD)v243 )
          {
            do
            {
              *(__m128i *)&v27[v187 / 8] = _mm_loadu_si128((const __m128i *)&v186[v187]);
              v187 += 16LL;
            }
            while ( v188 != v187 );
          }
          if ( v186 != (char *)&v244 && v186 )
          {
            sub_186B220(v186);
            v182 = v243;
          }
          v242 = v27;
          HIDWORD(v243) = v185;
        }
        else
        {
          v27 = v242;
        }
        v183 = (unsigned int **)&v27[2 * v182];
        *v183 = v33;
        *((_DWORD *)v183 + 2) = 0;
        v65 = (unsigned int)v243;
        v66 = v243 + 1;
        goto LABEL_64;
      }
      v71 = *(_DWORD **)(*((_QWORD *)v33 + 2) + 24LL);
      if ( v71 && *v71 != -1 )
        goto LABEL_27;
      v72 = *(_DWORD **)(sub_15D1F10(v33) + 24);
      if ( !v72 || v239[0] != *v72 || v72[1] )
        goto LABEL_27;
      v73 = v241;
      if ( !v241 )
        goto LABEL_246;
      if ( v73 != sub_15D1F10(v33) )
        goto LABEL_27;
      if ( !v241 )
LABEL_246:
        v241 = sub_15D1F10(v33);
      v74 = v240;
      v75 = *((_QWORD *)v33 + 2);
      v76 = *((unsigned int *)v240 + 2);
      v77 = *((_DWORD *)v240 + 4);
      v228 = 2 * v76;
      if ( 3 * (int)v76 < (unsigned int)(4 * (v77 + *((_DWORD *)v240 + 3))) )
      {
        v218 = *((_QWORD *)v33 + 2);
        v214 = v240;
        v206 = 8LL * v228;
        v169 = (_QWORD *)sub_186B270(v206);
        v74 = v214;
        v79 = v169;
        v75 = v218;
        if ( v228 )
        {
          memset(v169, 0, 8LL * v228);
          v74 = v214;
          v75 = v218;
        }
        v170 = (char *)*v74;
        v171 = (char *)*v74 + 8 * *((unsigned int *)v74 + 2);
        v78 = v228 - 1;
        v80 = (__int64)&v79[v206 / 8];
        if ( *v74 != v171 )
        {
          do
          {
            if ( *(_QWORD *)v170 > 1u )
            {
              v172 = 8LL * (*(_DWORD *)(*(_QWORD *)v170 + 12LL) & v78);
              v173 = &v79[(unsigned __int64)v172 / 8];
              if ( v206 == v172 )
              {
LABEL_273:
                if ( v79 == v173 )
                {
LABEL_289:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v174 = v79;
                while ( *v174 )
                {
                  if ( v173 == ++v174 )
                    goto LABEL_289;
                }
              }
              else
              {
                v174 = &v79[(unsigned __int64)v172 / 8];
                while ( *v174 )
                {
                  if ( (_QWORD *)v80 == ++v174 )
                    goto LABEL_273;
                }
              }
              *v174 = *(_QWORD *)v170;
            }
            v170 += 8;
          }
          while ( v171 != v170 );
          v171 = (char *)*v74;
        }
        if ( v171 )
        {
          v219 = v75;
          v215 = v74;
          sub_186B220(v171);
          v78 = v228 - 1;
          v75 = v219;
          v74 = v215;
        }
        *v74 = v79;
        v77 = 0;
        *((_DWORD *)v74 + 4) = 0;
        *((_DWORD *)v74 + 2) = v228;
      }
      else
      {
        v78 = v76 - 1;
        v79 = *v240;
        v206 = 8 * v76;
        v80 = (__int64)*v240 + 8 * v76;
      }
      v81 = *(_DWORD *)(v75 + 12);
      v82 = 8LL * (v81 & v78);
      v83 = &v79[(unsigned __int64)v82 / 8];
      if ( v82 == v206 )
      {
        v85 = nullptr;
LABEL_229:
        while ( v83 != v79 )
        {
          v168 = *v79;
          if ( *v79 > 1u )
          {
            if ( *(_DWORD *)(v168 + 12) == v81 && v75 == v168 )
            {
              *v79 = v75;
              v31 = *((_DWORD *)v29 + 2);
              goto LABEL_28;
            }
          }
          else
          {
            if ( !v168 )
            {
              if ( v85 )
                *((_DWORD *)v74 + 4) = v77 - 1;
              else
                v85 = v79;
              goto LABEL_288;
            }
            v85 = v79;
          }
          ++v79;
        }
        v39 = 405;
        sub_1872CE0("");
LABEL_26:
        sub_1873130(114, v39);
      }
      v84 = &v79[(unsigned __int64)v82 / 8];
      v85 = nullptr;
      while ( 1 )
      {
        v86 = *v84;
        if ( *v84 <= 1u )
          break;
        if ( *(_DWORD *)(v86 + 12) == v81 && v75 == v86 )
        {
          *v84 = v75;
          v31 = *((_DWORD *)v29 + 2);
          goto LABEL_28;
        }
LABEL_98:
        if ( ++v84 == (_QWORD *)v80 )
          goto LABEL_229;
      }
      if ( v86 )
        break;
      if ( v85 )
        *((_DWORD *)v74 + 4) = v77 - 1;
      else
        v85 = v84;
LABEL_288:
      *v85 = v75;
      v31 = *((_DWORD *)v29 + 2);
      ++*((_DWORD *)v74 + 3);
LABEL_28:
      if ( v31 >= v30 )
      {
        LODWORD(v26) = v243 - 1;
        goto LABEL_30;
      }
    }
    v85 = v84;
    goto LABEL_98;
  }
LABEL_30:
  v40 = *((_QWORD *)v25 + 2);
  LODWORD(v243) = (_DWORD)v26;
  v41 = *(_DWORD **)(v40 + 24);
  if ( v41 && *v41 != -1 )
  {
LABEL_68:
    v27 = v242;
    if ( (_DWORD)v26 )
      goto LABEL_53;
    goto LABEL_69;
  }
  v42 = *(_DWORD **)(sub_15D1F10(v25) + 24);
  if ( !v42 || v239[0] != *v42 || v42[1] )
  {
LABEL_67:
    LODWORD(v26) = v243;
    goto LABEL_68;
  }
  v43 = v241;
  if ( v241 )
  {
    if ( v43 == sub_15D1F10(v25) )
    {
      if ( v241 )
        goto LABEL_38;
      goto LABEL_299;
    }
    goto LABEL_67;
  }
LABEL_299:
  v241 = sub_15D1F10(v25);
LABEL_38:
  v26 = v240;
  v44 = *((_QWORD *)v25 + 2);
  v45 = *((unsigned int *)v240 + 2);
  v46 = *((_DWORD *)v240 + 4);
  v205 = 2 * v45;
  if ( 3 * (int)v45 < (unsigned int)(4 * (v46 + *((_DWORD *)v240 + 3))) )
  {
    v48 = 8LL * v205;
    v189 = (_QWORD *)sub_186B270(v48);
    v47 = v189;
    if ( v205 )
      memset(v189, 0, 8LL * v205);
    v190 = (char *)*v26;
    v49 = (__int64)&v47[v48 / 8];
    v191 = (char *)*v26 + 8 * *((unsigned int *)v26 + 2);
    v227 = v205 - 1;
    if ( *v26 != v191 )
    {
      do
      {
        if ( *(_QWORD *)v190 > 1u )
        {
          v192 = 8LL * (*(_DWORD *)(*(_QWORD *)v190 + 12LL) & v227);
          v193 = &v47[(unsigned __int64)v192 / 8];
          if ( v48 == v192 )
          {
LABEL_322:
            if ( v47 == v193 )
            {
LABEL_334:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v194 = v47;
            while ( *v194 )
            {
              if ( v193 == ++v194 )
                goto LABEL_334;
            }
          }
          else
          {
            v194 = &v47[(unsigned __int64)v192 / 8];
            while ( *v194 )
            {
              if ( (_QWORD *)v49 == ++v194 )
                goto LABEL_322;
            }
          }
          *v194 = *(_QWORD *)v190;
        }
        v190 += 8;
      }
      while ( v191 != v190 );
      v191 = (char *)*v26;
    }
    if ( v191 )
      sub_186B220(v191);
    *v26 = v47;
    v46 = 0;
    *((_DWORD *)v26 + 4) = 0;
    *((_DWORD *)v26 + 2) = v205;
  }
  else
  {
    v47 = *v240;
    v227 = v45 - 1;
    v48 = 8 * v45;
    v49 = (__int64)*v240 + 8 * v45;
  }
  v50 = *(_DWORD *)(v44 + 12);
  v51 = 8LL * (v50 & v227);
  v52 = &v47[(unsigned __int64)v51 / 8];
  if ( v51 == v48 )
  {
    v54 = nullptr;
LABEL_295:
    while ( v52 != v47 )
    {
      v184 = *v47;
      if ( *v47 > 1u )
      {
        if ( *(_DWORD *)(v184 + 12) == v50 && v44 == v184 )
        {
          *v47 = v44;
          LODWORD(v26) = v243;
          v27 = v242;
          goto LABEL_52;
        }
      }
      else
      {
        if ( !v184 )
        {
          if ( v54 )
            *((_DWORD *)v26 + 4) = v46 - 1;
          else
            v54 = v47;
          goto LABEL_333;
        }
        v54 = v47;
      }
      ++v47;
    }
    v67 = 405;
    sub_1872CE0("");
LABEL_66:
    sub_1873130(114, v67);
  }
  v53 = &v47[(unsigned __int64)v51 / 8];
  v54 = nullptr;
  while ( 1 )
  {
    v55 = *v53;
    if ( *v53 <= 1u )
      break;
    if ( *(_DWORD *)(v55 + 12) == v50 && v44 == v55 )
    {
      *v53 = v44;
      LODWORD(v26) = v243;
      v27 = v242;
      goto LABEL_52;
    }
LABEL_44:
    if ( ++v53 == (_QWORD *)v49 )
      goto LABEL_295;
  }
  if ( v55 )
  {
    v54 = v53;
    goto LABEL_44;
  }
  if ( v54 )
    *((_DWORD *)v26 + 4) = v46 - 1;
  else
    v54 = v53;
LABEL_333:
  *v54 = v44;
  v27 = v242;
  ++*((_DWORD *)v26 + 3);
  LODWORD(v26) = v243;
LABEL_52:
  if ( (_DWORD)v26 )
  {
LABEL_53:
    v26 = (void **)(unsigned int)((_DWORD)v26 - 1);
    v25 = (_DWORD *)v27[2 * (_QWORD)v26];
    goto LABEL_14;
  }
LABEL_69:
  if ( v27 != &v244 && v27 )
    sub_186B220(v27);
  if ( v238 )
    sub_186B220(v238);
  if ( (unsigned int)(HIDWORD(v234) - 2) > 6 )
  {
LABEL_75:
    if ( v233 )
      sub_186B220(v233);
    v202 = v222[2];
    result = (unsigned int)(v202 - 1);
    v222[2] = result;
    if ( v202 == 1 )
      result = sub_15D7BC0(v195, v222);
    v69 = v210;
    if ( v210 )
    {
      v70 = (unsigned __int64)&v210[*((unsigned int *)v210 - 1)];
      if ( (unsigned __int64)v210 < v70 )
      {
        do
        {
          v98 = *v69;
          if ( *v69 )
          {
            v99 = (*(_DWORD *)(v98 + 8))-- == 1;
            if ( v99 )
              sub_15D7BC0(v195, v98);
          }
          ++v69;
        }
        while ( (unsigned __int64)v69 < v70 );
      }
      return sub_186B220(v210 - 1);
    }
    return result;
  }
  v100 = (char *)v233;
  v101 = (char *)v233 + 8 * (unsigned int)v234;
  if ( v101 == v233 )
    goto LABEL_272;
  while ( 1 )
  {
    v102 = v100;
    if ( *(_QWORD *)v100 > 1u )
      break;
    v100 += 8;
    if ( v101 == v100 )
      goto LABEL_272;
  }
  if ( v101 == v100 )
  {
LABEL_272:
    v212 = nullptr;
    v112 = nullptr;
    v232 = v195;
  }
  else
  {
    v103 = *(_QWORD *)v100;
    v104 = (_QWORD *)sub_186B270(0x18u);
    v107 = v104 + 1;
    v108 = 1;
    v212 = v104 + 1;
    *v104 = 2;
    v109 = v104 + 1;
LABEL_131:
    *v107 = v103;
    *((_DWORD *)v109 - 1) = v108;
    for ( i = v102 + 8; v102 + 8 != v101; i = v102 + 8 )
    {
      while ( 1 )
      {
        v103 = *(_QWORD *)i;
        v102 = i;
        if ( *(_QWORD *)i > 1u )
          break;
        i += 8;
        if ( v101 == i )
          goto LABEL_138;
      }
      if ( v101 == i )
        break;
      v111 = *((_DWORD *)v212 - 1);
      if ( v111 == *((_DWORD *)v212 - 2) )
      {
        v128 = (3 * v111 + 1) >> 1;
        v129 = 8 * v128 + 8;
        if ( 8 * v111 + 8 >= (unsigned int)v129 || v111 >= v128 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v242, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, &v242);
          sub_233E40((__int64)&v242);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v201) = (3 * v111 + 1) >> 1;
        v130 = (_DWORD *)sub_186B300(v212 - 1, v129);
        v131 = (unsigned int)v130[1];
        v105 = (int)v201;
        v212 = v130 + 2;
        *v130 = (_DWORD)v201;
        v107 = &v130[2 * v131 + 2];
        v109 = v130 + 2;
        v108 = v131 + 1;
        goto LABEL_131;
      }
      v108 = v111 + 1;
      v212[v111] = v103;
      *((_DWORD *)v212 - 1) = v111 + 1;
    }
LABEL_138:
    v232 = v195;
    if ( v108 )
    {
      v220 = 0;
      v216 = v108 - 2;
      v112 = nullptr;
      v113 = v212 + 1;
      v224 = (_DWORD)v212 + 16;
      v114 = v108 - 2;
      if ( v108 != 1 )
      {
        do
        {
          v115 = v113;
          LODWORD(v207) = v224 + 8 * (v220 + v114);
          do
          {
            v119 = sub_15DC610(
                     v195,
                     *v115,
                     0,
                     0,
                     v105,
                     v106,
                     v195,
                     v197,
                     v199,
                     (int)v201,
                     (int)v207,
                     (char)v210,
                     (int)v212,
                     v216,
                     v220,
                     v222);
            sub_15DC610(v196, *(v113 - 1), 0, 0, v120, v121, v196, v198, v200, v119, v208, v211, v213, v217, v221, v223);
            v122 = sub_15E1B70(v195);
            v123 = (_QWORD *)v122;
            if ( v122 )
              ++*(_DWORD *)(v122 + 8);
            if ( v112 )
            {
              v124 = *((_DWORD *)v112 - 1);
              if ( v124 == *((_DWORD *)v112 - 2) )
              {
                v125 = (3 * v124 + 1) >> 1;
                v126 = 8 * v125 + 8;
                if ( 8 * v124 + 8 >= (unsigned int)v126 || v124 >= v125 )
                {
                  v3 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v242, "Overflow encountered when expanding vector");
                  *v3 = (char *)off_1C63128;
                  sub_2333C0(v3 + 1, &v242);
                  sub_233E40((__int64)&v242);
                  __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v229 = (3 * v124 + 1) >> 1;
                v201 = v123;
                v127 = (unsigned int *)sub_186B300(v112 - 1, v126);
                v112 = (__int64 *)(v127 + 2);
                v123 = v201;
                *v127 = v229;
                LODWORD(v127) = v127[1];
                v118 = &v112[(unsigned int)v127];
                v117 = (_DWORD)v127 + 1;
              }
              else
              {
                v116 = v124;
                v117 = v124 + 1;
                v118 = &v112[v116];
              }
            }
            else
            {
              v201 = (_QWORD *)v122;
              v144 = (_QWORD *)sub_186B270(0x18u);
              v123 = v201;
              *v144 = 2;
              v112 = v144 + 1;
              v117 = 1;
              v118 = v112;
            }
            *v118 = (__int64)v123;
            ++v115;
            *((_DWORD *)v112 - 1) = v117;
          }
          while ( v115 != v207 );
          v114 = --v216;
          ++v113;
          ++v220;
        }
        while ( v216 != -1 );
      }
    }
    else
    {
      v112 = nullptr;
    }
  }
  v132 = sub_B00C00(v195, &qword_1C7F4C8, &qword_18D6CD0);
  v133 = (_DWORD *)v132;
  if ( !v132 )
  {
    v236 = v195;
    if ( v210 )
      goto LABEL_156;
LABEL_248:
    if ( v112 )
    {
      v175 = v112;
      v176 = (unsigned __int64)&v112[*((unsigned int *)v112 - 1)];
      if ( (unsigned __int64)v112 < v176 )
      {
        do
        {
          while ( 1 )
          {
            v177 = *v175;
            if ( *v175 )
            {
              v99 = (*(_DWORD *)(v177 + 8))-- == 1;
              if ( v99 )
                break;
            }
            if ( (unsigned __int64)++v175 >= v176 )
              goto LABEL_255;
          }
          ++v175;
          sub_15D7BC0(v195, v177);
        }
        while ( (unsigned __int64)v175 < v176 );
      }
LABEL_255:
      sub_186B220(v112 - 1);
    }
    if ( v212 )
      sub_186B220(v212 - 1);
    goto LABEL_75;
  }
  ++*(_DWORD *)(v132 + 48);
  v236 = v195;
  if ( !v210 )
  {
LABEL_269:
    v99 = v133[12]-- == 1;
    if ( v99 )
    {
      (**(void (__fastcall ***)(_DWORD *))v133)(v133);
      sub_186B220(v133);
    }
    goto LABEL_248;
  }
LABEL_156:
  v134 = nullptr;
  v237 = nullptr;
  while ( 1 )
  {
    v138 = *((unsigned int *)v210 - 1);
    if ( (unsigned int)v26 >= (unsigned int)v138 )
      break;
    v139 = v210[(unsigned int)v26];
    if ( v139 )
      ++*(_DWORD *)(v139 + 8);
    if ( v134 )
    {
      v140 = *((_DWORD *)v134 - 1);
      if ( v140 == *((_DWORD *)v134 - 2) )
      {
        v141 = (3 * v140 + 1) >> 1;
        v142 = 8 * v141 + 8;
        if ( 8 * v140 + 8 >= (unsigned int)v142 || v140 >= v141 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v242, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v242);
          sub_233E40((__int64)&v242);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v203 = (3 * v140 + 1) >> 1;
        v143 = (unsigned int *)sub_186B300(v134 - 1, v142);
        v134 = v143 + 2;
        v237 = v143 + 2;
        *v143 = v203;
        LODWORD(v143) = v143[1];
        v137 = &v134[(unsigned int)v143];
        v136 = (_DWORD)v143 + 1;
      }
      else
      {
        v135 = v140;
        v136 = v140 + 1;
        v137 = &v134[v135];
      }
    }
    else
    {
      v181 = (_QWORD *)sub_186B270(0x18u);
      *v181 = 2;
      v136 = 1;
      v134 = v181 + 1;
      v237 = v134;
      v137 = v134;
    }
    *v137 = v139;
    LODWORD(v26) = (_DWORD)v26 + 1;
    *((_DWORD *)v134 - 1) = v136;
  }
  if ( !(_DWORD)v138 )
  {
LABEL_259:
    if ( v134 )
    {
      v178 = &v134[*((unsigned int *)v134 - 1)];
      if ( v134 >= v178 )
        goto LABEL_267;
      do
      {
        while ( 1 )
        {
          v179 = *v134;
          if ( *v134 )
          {
            v180 = v236;
            v99 = (*(_DWORD *)(v179 + 8))-- == 1;
            if ( v99 )
              break;
          }
          if ( ++v134 >= v178 )
            goto LABEL_266;
        }
        sub_15D7BC0(v180, v179);
        ++v134;
      }
      while ( v134 < v178 );
LABEL_266:
      v134 = v237;
      if ( v237 )
LABEL_267:
        sub_186B220(v134 - 1);
    }
    if ( !v133 )
      goto LABEL_248;
    goto LABEL_269;
  }
  v230 = 0;
  v145 = 0;
  v209 = 8 * v138;
  while ( 2 )
  {
    v146 = v134[v145 / 8];
    if ( !*(_WORD *)(v146 + 4) )
    {
      v147 = *(_QWORD **)(*(_QWORD *)(v146 + 16) + 24LL);
      if ( v147 )
      {
        if ( *v147 == 0x800000000LL && *(_DWORD *)(v146 + 24) == 1 && sub_455A50(a1, v195, *(_QWORD *)(v146 + 32)) )
        {
          v145 += 8LL;
          if ( v145 == v209 )
            break;
          goto LABEL_185;
        }
      }
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v133 + 192LL))(v133);
    sub_E5EBF0(v133, v237[v145 / 8]);
    if ( v112 )
    {
      v148 = &v112[*((unsigned int *)v112 - 1)];
      if ( v148 != v112 )
      {
        v149 = v112;
        while ( 1 )
        {
          v150 = *v149;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v133 + 192LL))(v133);
          sub_E5EBF0(v133, v150);
          if ( (unsigned int)sub_E60CB0((std::ios_base *)v133, 0, 0) == -1 )
            break;
          ++v149;
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v133 + 200LL))(v133, 1);
          if ( v148 == v149 )
            goto LABEL_184;
        }
        v151 = sub_15EC2C0(v195, v150);
        v152 = v236;
        v153 = v151;
        v154 = &v237[v145 / 8];
        if ( v151 )
          ++*(_DWORD *)(v151 + 8);
        v155 = *v154;
        if ( *v154 )
        {
          v99 = (*(_DWORD *)(v155 + 8))-- == 1;
          if ( v99 )
            sub_15D7BC0(v152, v155);
        }
        v156 = *(_QWORD *)v133;
        *v154 = v153;
        (*(void (__fastcall **)(_DWORD *, __int64))(v156 + 200))(v133, 1);
        v230 = 1;
      }
    }
LABEL_184:
    v145 += 8LL;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v133 + 200LL))(v133, 1);
    if ( v145 != v209 )
    {
LABEL_185:
      v134 = v237;
      continue;
    }
    break;
  }
  if ( !v230 )
  {
    v134 = v237;
    goto LABEL_259;
  }
  if ( (unsigned __int8)sub_40A830(
                          *(_QWORD **)(*(_QWORD *)(*a2 + 80) + 16LL),
                          *(_DWORD *)(*a2 + 96),
                          (__int64)&v236,
                          &v231,
                          *(unsigned __int16 *)(*a2 + 106)) )
  {
    sub_40ABA0(*a2, *a2 + 80, (__int64)&v236);
    sub_3FE9B0(*a2, v231);
  }
  v157 = v237;
  if ( v237 )
  {
    v158 = (unsigned __int64)&v237[*((unsigned int *)v237 - 1)];
    if ( (unsigned __int64)v237 >= v158 )
      goto LABEL_200;
    do
    {
      while ( 1 )
      {
        v159 = *v157;
        if ( *v157 )
        {
          v160 = v236;
          v99 = (*(_DWORD *)(v159 + 8))-- == 1;
          if ( v99 )
            break;
        }
        if ( (unsigned __int64)++v157 >= v158 )
          goto LABEL_199;
      }
      sub_15D7BC0(v160, v159);
      ++v157;
    }
    while ( (unsigned __int64)v157 < v158 );
LABEL_199:
    v157 = v237;
    if ( v237 )
LABEL_200:
      sub_186B220(v157 - 1);
  }
  if ( v133 )
  {
    v99 = v133[12]-- == 1;
    if ( v99 )
    {
      (**(void (__fastcall ***)(_DWORD *))v133)(v133);
      sub_186B220(v133);
    }
  }
  if ( v112 )
  {
    v161 = v112;
    v162 = (unsigned __int64)&v112[*((unsigned int *)v112 - 1)];
    if ( (unsigned __int64)v112 < v162 )
    {
      do
      {
        while ( 1 )
        {
          v163 = *v161;
          if ( *v161 )
          {
            v99 = (*(_DWORD *)(v163 + 8))-- == 1;
            if ( v99 )
              break;
          }
          if ( (unsigned __int64)++v161 >= v162 )
            goto LABEL_211;
        }
        ++v161;
        sub_15D7BC0(v195, v163);
      }
      while ( (unsigned __int64)v161 < v162 );
    }
LABEL_211:
    sub_186B220(v112 - 1);
  }
  if ( v212 )
    sub_186B220(v212 - 1);
  if ( v233 )
    sub_186B220(v233);
  v204 = v222[2];
  v222[2] = v204 - 1;
  if ( v204 == 1 )
    sub_15D7BC0(v195, v222);
  v164 = v210;
  v165 = (unsigned __int64)&v210[*((unsigned int *)v210 - 1)];
  if ( (unsigned __int64)v210 < v165 )
  {
    do
    {
      while ( 1 )
      {
        v166 = *v164;
        if ( *v164 )
        {
          v99 = (*(_DWORD *)(v166 + 8))-- == 1;
          if ( v99 )
            break;
        }
        if ( (unsigned __int64)++v164 >= v165 )
          return sub_186B220(v210 - 1);
      }
      ++v164;
      sub_15D7BC0(v195, v166);
    }
    while ( (unsigned __int64)v164 < v165 );
  }
  return sub_186B220(v210 - 1);
}

