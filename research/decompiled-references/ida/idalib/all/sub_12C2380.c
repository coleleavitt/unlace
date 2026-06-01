void __fastcall sub_12C2380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  _QWORD *v8; // rbx
  __int64 v9; // r12
  void **v10; // rbp
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r13
  _QWORD *v16; // r14
  size_t v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // r14
  _QWORD *v25; // r15
  __int64 v26; // r13
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  void ***v29; // r14
  void ***v30; // r15
  const char *v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  void ***v34; // r15
  void **v35; // r13
  void **v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  void **v44; // rax
  void ***v45; // r15
  void **v46; // rax
  _QWORD *v47; // rbp
  void ***v48; // rbx
  void **v49; // r13
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  __int64 (__fastcall *v54)(_QWORD *, void **, size_t); // r13
  size_t v55; // rax
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // r13
  _QWORD *v63; // r14
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  void **v66; // r14
  void **v67; // r13
  __m128 v68; // xmm0
  void *v69; // r15
  __int64 v70; // rax
  _QWORD *v71; // rsi
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // r13
  __int64 v75; // rax
  _BOOL8 v76; // rcx
  char v77; // al
  const __m128i *v78; // r14
  __int64 v79; // r15
  __int64 v80; // r12
  __int64 v81; // rdx
  __int64 v82; // rsi
  int v83; // eax
  __int64 v84; // rsi
  void **v85; // rcx
  void *v86; // rdi
  _QWORD *v87; // r14
  void (__fastcall *v88)(_QWORD *); // rdx
  __int64 v89; // r12
  __int64 v90; // r15
  void *v91; // rdi
  _QWORD *v92; // rdi
  _QWORD *v93; // rdi
  void **v94; // r15
  void **v95; // r12
  void *v96; // rdi
  _QWORD *v97; // rdi
  unsigned __int64 v98; // rax
  __int64 v99; // rdx
  _QWORD *v100; // r12
  _QWORD *v101; // r14
  void **v102; // rax
  void **v103; // rdx
  _QWORD *v104; // rbp
  void **v105; // rbx
  void **v106; // rax
  void **v107; // rdi
  char v108; // al
  void **v109; // r8
  const char **v110; // rax
  char *v111; // r14
  const char *v112; // rdi
  size_t v113; // rax
  signed __int64 v114; // r15
  __int64 *v115; // rax
  _QWORD *v116; // rax
  void ***v117; // rdx
  _DWORD *v118; // r14
  size_t v119; // r15
  const char *v120; // r14
  size_t v121; // rax
  signed __int64 v122; // rdx
  void **v123; // r14
  __int64 v124; // rax
  void **v125; // rdx
  void **v126; // r15
  _QWORD *v127; // rbp
  void **v128; // rbx
  void **v129; // rdi
  void **v130; // rdi
  void **v131; // r15
  _BYTE *v132; // rax
  void **v133; // r14
  void *v134; // r15
  __int64 v135; // r15
  __int64 v136; // rax
  char *v137; // r12
  char *v138; // r14
  __int64 v139; // rax
  __int64 v140; // r15
  void **v141; // r12
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rcx
  unsigned __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rbx
  __int64 v148; // rax
  const __m128i *v149; // rcx
  __int64 v150; // rbx
  void *v151; // r14
  __int64 v152; // rdx
  __int64 v153; // rsi
  int v154; // eax
  __int64 v155; // rcx
  void *v156; // rsi
  _QWORD *v157; // r12
  void (__fastcall *v158)(_QWORD *); // rax
  __int64 v159; // r14
  __int64 v160; // rbx
  void *v161; // rdi
  _QWORD *v162; // rdi
  _QWORD *v163; // rdi
  void **v164; // r14
  void **v165; // rbx
  void *v166; // rdi
  _QWORD *v167; // rdi
  __int64 v168; // rax
  __int64 (__fastcall *v169)(_QWORD *, char *, size_t); // r13
  size_t v170; // rax
  __int64 v171; // rax
  __int64 v172; // rcx
  unsigned __int64 v173; // rdx
  int v174; // r13d
  char *v175; // r15
  __int64 v176; // rax
  unsigned __int64 v177; // rdx
  __int64 v178; // rax
  __int64 v179; // rcx
  unsigned __int64 v180; // rdx
  __int64 v181; // rax
  unsigned __int64 v182; // rdx
  _BYTE *v183; // rdi
  unsigned __int64 v184; // rdx
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rdx
  _DWORD *v189; // rax
  __int64 v190; // rdx
  const char **v191; // rax
  void **v192; // rsi
  const char *v193; // rdi
  unsigned __int64 v194; // r12
  __int64 v195; // rdx
  unsigned __int64 v196; // rdx
  unsigned __int64 v197; // rbx
  __int64 v198; // rsi
  char *s; // [rsp+10h] [rbp-298h]
  char *sa; // [rsp+10h] [rbp-298h]
  const __m128i *v204; // [rsp+30h] [rbp-278h]
  _QWORD *v205; // [rsp+40h] [rbp-268h] BYREF
  __int64 v206; // [rsp+48h] [rbp-260h]
  __int64 v207; // [rsp+50h] [rbp-258h]
  void **v208; // [rsp+58h] [rbp-250h] BYREF
  __int64 v209; // [rsp+60h] [rbp-248h]
  char *v210; // [rsp+68h] [rbp-240h]
  void *dest; // [rsp+70h] [rbp-238h] BYREF
  __m128 v212; // [rsp+78h] [rbp-230h] BYREF
  void *v213[4]; // [rsp+90h] [rbp-218h] BYREF
  __int16 v214; // [rsp+B0h] [rbp-1F8h]
  void *v215; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v216; // [rsp+C8h] [rbp-1E0h]
  _QWORD v217[16]; // [rsp+D0h] [rbp-1D8h] BYREF
  _BYTE ptr[24]; // [rsp+150h] [rbp-158h] BYREF
  void *v219; // [rsp+170h] [rbp-138h]
  __int16 v220; // [rsp+190h] [rbp-118h]

  v8 = (_QWORD *)a6;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = (void **)ptr;
  v209 = a1;
  v207 = a3;
  sub_12BF030(ptr, a1, a6);
  s = (char *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 16LL))(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
  v217[0] = "-m";
  v216 = 0x1000000001LL;
  v215 = v217;
  v205 = (_QWORD *)(v9 + 16);
  v11 = (unsigned __int8)sub_22B7EA0(v9 + 16) == 0;
  v12 = 1;
  if ( v11 )
  {
    if ( HIDWORD(v216) < 2uLL )
    {
      sub_2237220(&v215, v217, 2, 8);
      v12 = (unsigned int)v216;
    }
    *((_QWORD *)v215 + v12) = "wasm32";
    LODWORD(v216) = v216 + 1;
  }
  else
  {
    if ( HIDWORD(v216) < 2uLL )
    {
      sub_2237220(&v215, v217, 2, 8);
      v12 = (unsigned int)v216;
    }
    *((_QWORD *)v215 + v12) = "wasm64";
    LODWORD(v216) = v216 + 1;
  }
  *(_DWORD *)ptr = 3321;
  v13 = sub_21B6DA0(v8, ptr, 1);
  v14 = v8[1];
  v15 = (_QWORD *)(v14 + 8LL * (unsigned int)v13);
  v16 = (_QWORD *)(v14 + 8 * HIDWORD(v13));
  if ( v15 != v16 )
  {
    while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 3321) )
    {
      if ( v16 == ++v15 )
        goto LABEL_11;
    }
    if ( v16 != v15 )
    {
      do
      {
        v40 = *v15;
        if ( *(_QWORD *)(*v15 + 16LL) )
          v40 = *(_QWORD *)(*v15 + 16LL);
        ++v15;
        *(_BYTE *)(v40 + 44) |= 1u;
        if ( v15 == v16 )
          break;
        while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 3321) )
        {
          if ( v16 == ++v15 )
            goto LABEL_46;
        }
      }
      while ( v16 != v15 );
LABEL_46:
      v41 = (unsigned int)v216;
      v42 = (unsigned int)v216 + 1LL;
      if ( v42 > HIDWORD(v216) )
      {
        sub_2237220(&v215, v217, v42, 8);
        v41 = (unsigned int)v216;
      }
      *((_QWORD *)v215 + v41) = "--strip-all";
      LODWORD(v216) = v216 + 1;
    }
  }
LABEL_11:
  v17 = 0;
  if ( s )
    v17 = strlen(s);
  v18 = sub_228AAA0(s, v17, 0);
  *(_QWORD *)&ptr[8] = v19;
  *(_QWORD *)ptr = v18;
  if ( (unsigned __int8)sub_22463A0(ptr, "wasm-component-ld", 17) )
  {
    v176 = (unsigned int)v216;
    v177 = (unsigned int)v216 + 1LL;
    if ( v177 > HIDWORD(v216) )
    {
      sub_2237220(&v215, v217, v177, 8);
      v176 = (unsigned int)v216;
    }
    *((_QWORD *)v215 + v176) = "--wasm-ld-path";
    LODWORD(v216) = v216 + 1;
    sub_112D530(ptr, v9, "wasm-ld");
    v178 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 16LL))(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    v179 = (unsigned int)v216;
    v180 = (unsigned int)v216 + 1LL;
    if ( v180 > HIDWORD(v216) )
    {
      v208 = (void **)v178;
      sub_2237220(&v215, v217, v180, 8);
      v179 = (unsigned int)v216;
      v178 = (__int64)v208;
    }
    *((_QWORD *)v215 + v179) = v178;
    LODWORD(v216) = v216 + 1;
    if ( *(_BYTE **)ptr != &ptr[16] )
      operator delete(*(void **)ptr);
  }
  *(_QWORD *)ptr = 0xD250000089CLL;
  sub_21B6650(v8, &v215, ptr, 2);
  sub_112D940(v9, (__int64)v8, (__int64)&v215, v20, v21);
  *(_DWORD *)ptr = 3264;
  v22 = sub_21B6DA0(v8, ptr, 1);
  v23 = v8[1];
  v24 = (_QWORD *)(v23 + 8LL * (unsigned int)v22);
  v25 = (_QWORD *)(v23 + 8 * HIDWORD(v22));
  if ( v24 == v25 )
    goto LABEL_18;
  while ( !*v24 || !(unsigned __int8)sub_21B9810(*v24, 3264) )
  {
    if ( v25 == ++v24 )
      goto LABEL_18;
  }
  if ( v25 == v24 )
  {
LABEL_18:
    v26 = 0;
  }
  else
  {
    do
    {
      v26 = *v24;
      v43 = *(_QWORD *)(*v24 + 16LL);
      if ( !v43 )
        v43 = *v24;
      ++v24;
      *(_BYTE *)(v43 + 44) |= 1u;
      if ( v24 == v25 )
        break;
      while ( !*v24 || !(unsigned __int8)sub_21B9810(*v24, 3264) )
      {
        if ( v25 == ++v24 )
          goto LABEL_19;
      }
    }
    while ( v25 != v24 );
  }
LABEL_19:
  *(_DWORD *)ptr = 2355;
  v27 = sub_21B6DA0(v8, ptr, 1);
  v28 = v8[1];
  v29 = (void ***)(v28 + 8LL * (unsigned int)v27);
  v30 = (void ***)(v28 + 8 * HIDWORD(v27));
  if ( v29 == v30 )
    goto LABEL_23;
  while ( !*v29 || !(unsigned __int8)sub_21B9810(*v29, 2355) )
  {
    if ( v30 == ++v29 )
      goto LABEL_23;
  }
  if ( v30 == v29 )
  {
LABEL_23:
    if ( !v26 )
    {
LABEL_260:
      sub_112D4E0(v10, v9, "crt1-command.o");
      v174 = sub_9B4AA0((__int64)v10, "crt1-command.o");
      if ( *(void ***)ptr != v10 + 2 )
        operator delete(*(void **)ptr);
      v31 = nullptr;
      v175 = "crt1-command.o";
      if ( !v174 )
        v175 = "crt1.o";
      v210 = v175;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v103 = (void **)ptr;
  v104 = v8;
  do
  {
    v105 = *v29;
    v106 = (void **)(*v29)[2];
    if ( !v106 )
      v106 = *v29;
    ++v29;
    *((_BYTE *)v106 + 44) |= 1u;
    if ( v29 == v30 )
      break;
    while ( 1 )
    {
      v107 = *v29;
      if ( *v29 )
      {
        v208 = v103;
        v108 = sub_21B9810(v107, 2355);
        v103 = v208;
        if ( v108 )
          break;
      }
      if ( v30 == ++v29 )
        goto LABEL_152;
    }
  }
  while ( v30 != v29 );
LABEL_152:
  v109 = v105;
  v8 = v104;
  v10 = v103;
  v110 = (const char **)v109[6];
  v111 = (char *)*v110;
  if ( !*v110 )
  {
    v114 = 0;
    goto LABEL_156;
  }
  v112 = *v110;
  v208 = v109;
  v113 = strlen(v112);
  v109 = v208;
  v114 = v113;
  if ( v113 != 7 )
    goto LABEL_156;
  if ( *(_DWORD *)v111 == 1835888483 && *((_WORD *)v111 + 2) == 28257 && v111[6] == 100 )
    goto LABEL_260;
  if ( *(_DWORD *)v111 != 1667327346 || *((_WORD *)v111 + 2) != 28532 || v111[6] != 114 )
  {
LABEL_156:
    v115 = *(__int64 **)(v9 + 8);
    v208 = v109;
    sub_FC70B0((__int64)v10, *v115, 0, 372);
    sub_AEC220((unsigned __int8 **)v10, v111, v114);
    v116 = v208[1];
    v117 = (void ***)v116[1];
    v118 = (_DWORD *)(v116[4] + 80LL * (unsigned int)(*((_DWORD *)*v208 + 10) - 1));
    if ( *v118 )
    {
      v192 = *v117;
      v119 = 0;
      v193 = (char *)*v117 + *(unsigned int *)(v116[2] + 4LL * (unsigned int)(*v118 + 1));
      if ( v193 )
      {
        v208 = *v117;
        v119 = (unsigned int)strlen(v193);
      }
      v121 = 0;
      v120 = (char *)v192 + (unsigned int)v118[1];
      if ( !v120 )
      {
LABEL_159:
        v122 = 0;
        if ( v119 > v121 )
          goto LABEL_161;
        goto LABEL_160;
      }
    }
    else
    {
      v119 = 0;
      v120 = (char *)*v117 + (unsigned int)v118[1];
      if ( !v120 )
      {
        v121 = 0;
        v119 = 0;
LABEL_160:
        v122 = v121 - v119;
        v121 = v119;
LABEL_161:
        sub_AEC220((unsigned __int8 **)v10, &v120[v121], v122);
        if ( (_BYTE)v220 )
        {
          sub_FC7790(*(__int64 *)&ptr[16], (__int64 *)v10, SHIBYTE(v220));
          *(_QWORD *)&ptr[16] = 0;
          v220 = 0;
        }
        if ( v219 != v10 + 6 )
          operator delete(v219);
        v123 = *(void ***)ptr;
        if ( *(_QWORD *)ptr )
        {
          v124 = *(_QWORD *)&ptr[8];
          if ( *(_QWORD *)&ptr[8] )
          {
            if ( *(_QWORD *)ptr < *(_QWORD *)&ptr[8]
              || *(_QWORD *)ptr > (unsigned __int64)(*(_QWORD *)&ptr[8] + 14848LL) )
            {
              v125 = *(void ***)(*(_QWORD *)ptr + 528LL);
              v126 = &v125[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)ptr + 536LL)];
              if ( v125 != v126 )
              {
                v208 = v10;
                v127 = v8;
                v128 = v125;
                do
                {
                  while ( 1 )
                  {
                    v126 -= 8;
                    v129 = (void **)v126[3];
                    if ( v129 == v126 + 5 )
                      break;
                    operator delete(v129);
                    if ( v128 == v126 )
                      goto LABEL_172;
                  }
                }
                while ( v128 != v126 );
LABEL_172:
                v8 = v127;
                v126 = (void **)v123[66];
                v10 = v208;
              }
              if ( v126 != v123 + 68 )
                free(v126);
              v130 = (void **)v123[52];
              if ( v130 != v123 + 54 )
                free(v130);
              v131 = v123 + 48;
              v208 = v123 + 8;
              do
              {
                while ( *v131 != v131 + 2 )
                {
                  operator delete(*v131);
                  v131 -= 4;
                  if ( v208 == v131 )
                    goto LABEL_180;
                }
                v131 -= 4;
              }
              while ( v208 != v131 );
LABEL_180:
              operator delete(v123, 0x3A0u);
            }
            else
            {
              v195 = *(unsigned int *)(*(_QWORD *)&ptr[8] + 14976LL);
              *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v195 + 1;
              *(_QWORD *)(v124 + 8 * v195 + 14848) = v123;
            }
          }
        }
        goto LABEL_23;
      }
    }
    v121 = strlen(v120);
    goto LABEL_159;
  }
LABEL_24:
  v31 = "_initialize";
  v210 = "crt1-reactor.o";
LABEL_25:
  *(_QWORD *)ptr = 0xBEB00000BF0LL;
  v32 = sub_21B6DA0(v8, v10, 2);
  v33 = v8[1];
  *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
  v34 = (void ***)(v33 + 8LL * (unsigned int)v32);
  v35 = (void **)(v33 + 8 * HIDWORD(v32));
  v208 = v35;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v208);
  if ( v34 == (void ***)v35 )
    goto LABEL_32;
  v208 = (void **)v8;
  while ( 1 )
  {
    v36 = *v34;
    if ( *v34 )
    {
      if ( (unsigned __int8)sub_21B9810(*v34, 3056) || (unsigned __int8)sub_21B9810(v36, 3051) )
        break;
    }
    *(_QWORD *)ptr = ++v34;
    if ( v35 == (void **)v34 )
    {
      v8 = v208;
      goto LABEL_32;
    }
  }
  v8 = v208;
  v208 = v35;
  *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v208);
  if ( v34 == (void ***)v35 )
  {
LABEL_32:
    sub_112D4E0(v10, v9, v210);
    v37 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 16LL))(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    v38 = (unsigned int)v216;
    v39 = (unsigned int)v216 + 1LL;
    if ( v39 > HIDWORD(v216) )
    {
      v208 = (void **)v37;
      sub_2237220(&v215, v217, v39, 8);
      v38 = (unsigned int)v216;
      v37 = (__int64)v208;
    }
    *((_QWORD *)v215 + v38) = v37;
    LODWORD(v216) = v216 + 1;
    if ( *(void ***)ptr != v10 + 2 )
      operator delete(*(void **)ptr);
  }
  else
  {
    do
    {
      v44 = *v34;
      if ( (*v34)[2] )
        v44 = (void **)(*v34)[2];
      v45 = v34 + 1;
      *((_BYTE *)v44 + 44) |= 1u;
      *(_QWORD *)ptr = v45;
      if ( v45 == (void ***)v35 )
        break;
      v46 = v10;
      v47 = v8;
      v48 = (void ***)v35;
      v49 = v46;
      while ( 1 )
      {
        if ( *v45 )
        {
          v208 = *v45;
          if ( (unsigned __int8)sub_21B9810(v208, 3056) || (unsigned __int8)sub_21B9810(v208, 3051) )
            break;
        }
        *(_QWORD *)ptr = ++v45;
        if ( v48 == v45 )
        {
          v8 = v47;
          v10 = v49;
          goto LABEL_71;
        }
      }
      v34 = *(void ****)ptr;
      v102 = v49;
      v35 = (void **)v48;
      v8 = v47;
      v10 = v102;
    }
    while ( *(void ***)ptr != v35 );
  }
LABEL_71:
  if ( v31 )
  {
    v50 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*v8 + 16LL))(v8, "--entry", 7);
    v51 = (unsigned int)v216;
    v52 = (unsigned int)v216 + 1LL;
    if ( v52 > HIDWORD(v216) )
    {
      v208 = (void **)v50;
      sub_2237220(&v215, v217, v52, 8);
      v51 = (unsigned int)v216;
      v50 = (__int64)v208;
    }
    *((_QWORD *)v215 + v51) = v50;
    LODWORD(v216) = v216 + 1;
    v11 = *v31 == 0;
    v214 = 257;
    *(_QWORD *)ptr = v10 + 3;
    v53 = *v8;
    if ( v11 )
    {
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v56 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v53 + 16))(v8, 0, 0);
    }
    else
    {
      v213[0] = (void *)v31;
      LOBYTE(v214) = 3;
      v54 = *(__int64 (__fastcall **)(_QWORD *, void **, size_t))(v53 + 16);
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v208 = (void **)v31;
      v55 = j__strlen(v31);
      v56 = v54(v8, v208, v55);
    }
    v57 = v56;
    if ( *(void ***)ptr != v10 + 3 )
      free(*(void **)ptr);
    v58 = (unsigned int)v216;
    v59 = (unsigned int)v216 + 1LL;
    if ( v59 > HIDWORD(v216) )
    {
      sub_2237220(&v215, v217, v59, 8);
      v58 = (unsigned int)v216;
    }
    *((_QWORD *)v215 + v58) = v57;
    LODWORD(v216) = v216 + 1;
  }
  *(_DWORD *)ptr = 3264;
  v60 = sub_21B6DA0(v8, v10, 1);
  v61 = v8[1];
  v62 = (_QWORD *)(v61 + 8LL * (unsigned int)v60);
  v63 = (_QWORD *)(v61 + 8 * HIDWORD(v60));
  if ( v62 != v63 )
  {
    while ( !*v62 || !(unsigned __int8)sub_21B9810(*v62, 3264) )
    {
      if ( v63 == ++v62 )
        goto LABEL_85;
    }
    if ( v63 != v62 )
    {
      do
      {
        v168 = *v62;
        if ( *(_QWORD *)(*v62 + 16LL) )
          v168 = *(_QWORD *)(*v62 + 16LL);
        ++v62;
        *(_BYTE *)(v168 + 44) |= 1u;
        if ( v62 == v63 )
          break;
        while ( !*v62 || !(unsigned __int8)sub_21B9810(*v62, 3264) )
        {
          if ( v63 == ++v62 )
            goto LABEL_253;
        }
      }
      while ( v63 != v62 );
LABEL_253:
      v169 = *(__int64 (__fastcall **)(_QWORD *, char *, size_t))(*v8 + 16LL);
      v170 = j__strlen("-shared");
      v171 = v169(v8, "-shared", v170);
      v172 = (unsigned int)v216;
      v173 = (unsigned int)v216 + 1LL;
      if ( v173 > HIDWORD(v216) )
      {
        v208 = (void **)v171;
        sub_2237220(&v215, v217, v173, 8);
        v172 = (unsigned int)v216;
        v171 = (__int64)v208;
      }
      *((_QWORD *)v215 + v172) = v171;
      LODWORD(v216) = v216 + 1;
    }
  }
LABEL_85:
  sub_11C3660(v9, a5, (__int64)v8, (__int64)&v215, v207);
  if ( (unsigned __int8)sub_12B9120((__int64)v205, (__int64)v8) )
  {
    v181 = (unsigned int)v216;
    v182 = (unsigned int)v216 + 1LL;
    if ( v182 > HIDWORD(v216) )
    {
      sub_2237220(&v215, v217, v182, 8);
      v181 = (unsigned int)v216;
    }
    *((_QWORD *)v215 + v181) = "--shared-memory";
    LODWORD(v216) = v216 + 1;
  }
  *(_QWORD *)ptr = 0xBDD00000BF0LL;
  v64 = sub_21B6DA0(v8, v10, 2);
  v65 = v8[1];
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v66 = (void **)(v65 + 8LL * (unsigned int)v64);
  v67 = (void **)(v65 + 8 * HIDWORD(v64));
  v208 = v67;
  v68 = _mm_loadh_ps((const double *)&v208);
  *(__m128 *)ptr = v68;
  if ( v66 == v67 )
    goto LABEL_91;
  while ( 1 )
  {
    v69 = *v66;
    if ( *v66 )
    {
      if ( (unsigned __int8)sub_21B9810(*v66, 3056) || (unsigned __int8)sub_21B9810(v69, 3037) )
        break;
    }
    *(_QWORD *)ptr = ++v66;
    if ( v67 == v66 )
      goto LABEL_91;
  }
  v208 = v67;
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v68 = _mm_loadh_ps((const double *)&v208);
  *(__m128 *)ptr = v68;
  if ( v66 == v67 )
  {
LABEL_91:
    if ( sub_112D7B0(v9, (__int64)v8) )
      (*(void (__fastcall **)(__int64, _QWORD *, void **))(*(_QWORD *)v9 + 640LL))(v9, v8, &v215);
    v11 = (unsigned __int8)sub_12B9120((__int64)v205, (__int64)v8) == 0;
    v70 = (unsigned int)v216;
    if ( !v11 )
    {
      if ( (unsigned __int64)(unsigned int)v216 + 1 > HIDWORD(v216) )
      {
        sub_2237220(&v215, v217, (unsigned int)v216 + 1LL, 8);
        v70 = (unsigned int)v216;
      }
      *((_QWORD *)v215 + v70) = "-lpthread";
      v70 = (unsigned int)(v216 + 1);
      LODWORD(v216) = v216 + 1;
    }
    if ( v70 + 1 > (unsigned __int64)HIDWORD(v216) )
    {
      sub_2237220(&v215, v217, v70 + 1, 8);
      v70 = (unsigned int)v216;
    }
    *((_QWORD *)v215 + v70) = "-lc";
    LODWORD(v216) = v216 + 1;
    sub_11BEF20(v9, *(_QWORD *)(v9 + 8), (__int64)&v215, (__int64)v8);
  }
  else
  {
    do
    {
      v132 = *v66;
      if ( *((_QWORD *)*v66 + 2) )
        v132 = *((_BYTE **)*v66 + 2);
      v133 = v66 + 1;
      v132[44] |= 1u;
      *(_QWORD *)ptr = v133;
      if ( v133 == v67 )
        break;
      while ( 1 )
      {
        v134 = *v133;
        if ( *v133 )
        {
          if ( (unsigned __int8)sub_21B9810(*v133, 3056) || (unsigned __int8)sub_21B9810(v134, 3037) )
            break;
        }
        *(_QWORD *)ptr = ++v133;
        if ( v67 == v133 )
          goto LABEL_97;
      }
      v66 = *(void ***)ptr;
    }
    while ( v67 != *(void ***)ptr );
  }
LABEL_97:
  v71 = v8;
  (*(void (__fastcall **)(__int64, _QWORD *, void **))(*(_QWORD *)v9 + 672LL))(v9, v8, &v215);
  v72 = (unsigned int)v216;
  v73 = (unsigned int)v216 + 1LL;
  if ( v73 > HIDWORD(v216) )
  {
    v71 = v217;
    sub_2237220(&v215, v217, v73, 8);
    v72 = (unsigned int)v216;
  }
  *((_QWORD *)v215 + v72) = "-o";
  v74 = *a4;
  LODWORD(v216) = v216 + 1;
  v75 = (unsigned int)v216;
  if ( (unsigned __int64)(unsigned int)v216 + 1 > HIDWORD(v216) )
  {
    v71 = v217;
    sub_2237220(&v215, v217, (unsigned int)v216 + 1LL, 8);
    v75 = (unsigned int)v216;
  }
  *((_QWORD *)v215 + v75) = v74;
  LODWORD(v216) = v216 + 1;
  if ( *(_DWORD *)(v9 + 60) != 36
    || (v187 = sub_22B75A0(v205, v71), v188 == 6) && *(_DWORD *)v187 == 1769169271 && *(_WORD *)(v187 + 4) == 12656 )
  {
    v76 = 1;
  }
  else
  {
    v189 = (_DWORD *)sub_22B75A0(v205, v71);
    v76 = 0;
    if ( v190 == 4 )
      v76 = *v189 == 1769169271;
  }
  v77 = sub_21B7850(v8, 3412, 3031, v76);
  v212.m128_u64[0] = 0;
  v212.m128_i8[8] = 0;
  dest = &v212.m128_u16[4];
  if ( v77 )
  {
    if ( !sub_10DCD30((__int64)v8, 0xAu) )
    {
LABEL_284:
      if ( v212.m128_u64[0] )
      {
        v185 = (unsigned int)v216;
        v186 = (unsigned int)v216 + 1LL;
        if ( v186 > HIDWORD(v216) )
        {
          sub_2237220(&v215, v217, v186, 8);
          v185 = (unsigned int)v216;
        }
        *((_QWORD *)v215 + v185) = "--keep-section=target_features";
        LODWORD(v216) = v216 + 1;
      }
      goto LABEL_104;
    }
    sub_112D530(v10, v9, "wasm-opt");
    v183 = dest;
    if ( *(void ***)ptr == v10 + 2 )
    {
      v196 = *(_QWORD *)&ptr[8];
      if ( *(_QWORD *)&ptr[8] )
      {
        if ( *(_QWORD *)&ptr[8] == 1 )
          *(_BYTE *)dest = ptr[16];
        else
          memcpy(dest, *(const void **)ptr, *(size_t *)&ptr[8]);
        v196 = *(_QWORD *)&ptr[8];
        v183 = dest;
      }
      v212.m128_u64[0] = v196;
      v183[v196] = 0;
      v183 = *(_BYTE **)ptr;
      goto LABEL_280;
    }
    if ( dest == &v212.m128_u16[4] )
    {
      v205 = *(_QWORD **)&ptr[16];
      dest = *(void **)ptr;
      v68 = _mm_loadh_ps((const double *)&v205);
      v212 = v68;
    }
    else
    {
      v205 = *(_QWORD **)&ptr[16];
      v184 = v212.m128_u64[1];
      dest = *(void **)ptr;
      v68 = _mm_loadh_ps((const double *)&v205);
      v212 = v68;
      if ( v183 )
      {
        *(_QWORD *)ptr = v183;
        *(_QWORD *)&ptr[16] = v184;
LABEL_280:
        *(_QWORD *)&ptr[8] = 0;
        *v183 = 0;
        if ( *(void ***)ptr != v10 + 2 )
          operator delete(*(void **)ptr);
        if ( !sub_9B4AA0((__int64)&dest, "wasm-opt") )
        {
          v212.m128_u64[0] = 0;
          *(_BYTE *)dest = 0;
        }
        goto LABEL_284;
      }
    }
    v183 = v10 + 2;
    *(_QWORD *)ptr = v10 + 2;
    goto LABEL_280;
  }
LABEL_104:
  v206 = 1;
  v78 = *(const __m128i **)a5;
  v79 = *(unsigned int *)(a5 + 8);
  v205 = a4;
  v80 = operator new(0x208u);
  sub_1106AE0(
    v80,
    v207,
    v209,
    0x100000000LL,
    (__int64)"@",
    (__int64)s,
    (__int64)&v215,
    v78,
    v79,
    (__int64)v205,
    v206,
    0);
  *(_QWORD *)ptr = v80;
  v81 = *(unsigned int *)(a2 + 160);
  sa = (char *)(a2 + 152);
  v82 = v81 + 1;
  v83 = *(_DWORD *)(a2 + 160);
  if ( v81 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v194 = *(_QWORD *)(a2 + 152);
    if ( v194 > (unsigned __int64)v10 || (unsigned __int64)v10 >= v194 + 8 * v81 )
    {
      sub_11673D0((__int64)sa, v82, v68, a8);
      v85 = v10;
      v81 = *(unsigned int *)(a2 + 160);
      v84 = *(_QWORD *)(a2 + 152);
      v83 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0((__int64)sa, v82, v68, a8);
      v84 = *(_QWORD *)(a2 + 152);
      v81 = *(unsigned int *)(a2 + 160);
      v85 = (void **)((char *)v10 + v84 - v194);
      v83 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v84 = *(_QWORD *)(a2 + 152);
    v85 = v10;
  }
  v86 = *v85;
  *v85 = nullptr;
  *(_QWORD *)(v84 + 8 * v81) = v86;
  v87 = *(_QWORD **)ptr;
  *(_DWORD *)(a2 + 160) = v83 + 1;
  if ( v87 )
  {
    v88 = *(void (__fastcall **)(_QWORD *))(*v87 + 8LL);
    if ( v88 == sub_10D4290 )
    {
      v89 = v87[58];
      v90 = v87[57];
      *v87 = &off_2BA8F30;
      if ( v89 != v90 )
      {
        do
        {
          if ( *(_BYTE *)(v90 + 32) && *(_QWORD *)v90 != v90 + 16 )
            operator delete(*(void **)v90);
          v90 += 40;
        }
        while ( v89 != v90 );
        v90 = v87[57];
      }
      if ( v90 )
        operator delete((void *)v90);
      v91 = (void *)v87[54];
      if ( v91 )
        operator delete(v91);
      v92 = (_QWORD *)v87[50];
      if ( v92 != v87 + 52 )
        operator delete(v92);
      v93 = (_QWORD *)v87[32];
      if ( v93 != v87 + 34 )
        free(v93);
      v94 = (void **)v87[29];
      v95 = (void **)v87[28];
      if ( v94 != v95 )
      {
        do
        {
          while ( *v95 != v95 + 2 )
          {
            operator delete(*v95);
            v95 += 4;
            if ( v95 == v94 )
              goto LABEL_125;
          }
          v95 += 4;
        }
        while ( v94 != v95 );
LABEL_125:
        v95 = (void **)v87[28];
      }
      if ( v95 )
        operator delete(v95);
      v96 = (void *)v87[25];
      if ( v96 )
        operator delete(v96);
      v97 = (_QWORD *)v87[7];
      if ( v97 != v87 + 9 )
        free(v97);
      operator delete(v87, 0x208u);
    }
    else
    {
      v88(v87);
    }
  }
  *(_DWORD *)ptr = 10;
  v98 = sub_21B6DA0(v8, v10, 1);
  v99 = v8[1];
  v100 = (_QWORD *)(v99 + 8LL * (unsigned int)v98);
  v101 = (_QWORD *)(v99 + 8 * HIDWORD(v98));
  if ( v100 != v101 )
  {
    while ( !*v100 || !(unsigned __int8)sub_21B9810(*v100, 10) )
    {
      if ( v101 == ++v100 )
        goto LABEL_137;
    }
    if ( v100 != v101 )
    {
      do
      {
        v135 = *v100;
        v136 = *(_QWORD *)(*v100 + 16LL);
        if ( !v136 )
          v136 = *v100;
        ++v100;
        *(_BYTE *)(v136 + 44) |= 1u;
        if ( v100 == v101 )
          break;
        while ( !*v100 || !(unsigned __int8)sub_21B9810(*v100, 10) )
        {
          if ( v101 == ++v100 )
            goto LABEL_203;
        }
      }
      while ( v100 != v101 );
LABEL_203:
      if ( v212.m128_u64[0] )
      {
        if ( (unsigned __int8)sub_21B9810(v135, 3063) || (unsigned __int8)sub_21B9810(v135, 3076) )
        {
          v137 = "4";
        }
        else
        {
          if ( (unsigned __int8)sub_21B9810(v135, 3060) )
            goto LABEL_137;
          if ( (unsigned __int8)sub_21B9810(v135, 3114) )
          {
            v191 = *(const char ***)(v135 + 48);
            v137 = (char *)*v191;
            if ( *v191 )
            {
              v138 = (char *)j__strlen(*v191);
              if ( v138 == (_BYTE *)&dword_0 + 1 && *v137 == 48 )
                goto LABEL_137;
            }
            else
            {
              v138 = nullptr;
            }
            goto LABEL_207;
          }
          v137 = (char *)"s";
        }
        v138 = (_BYTE *)(&dword_0 + 1);
LABEL_207:
        *(_QWORD *)ptr = &dest;
        LOWORD(v219) = 260;
        v139 = sub_10DA6C0((__int64)v8, (__int64)v10);
        v213[2] = v137;
        v140 = v139;
        v141 = v213;
        *(_QWORD *)ptr = v10 + 2;
        v142 = *a4;
        v205 = v10 + 2;
        v214 = 1283;
        *(_QWORD *)&ptr[16] = v142;
        *(_QWORD *)&ptr[8] = 0x1000000001LL;
        v213[0] = "-O";
        v213[3] = v138;
        v143 = sub_10DA6C0((__int64)v8, (__int64)v213);
        v144 = *(unsigned int *)&ptr[8];
        v145 = *(unsigned int *)&ptr[8] + 1LL;
        if ( v145 > *(unsigned int *)&ptr[12] )
        {
          v198 = (__int64)v205;
          v205 = (_QWORD *)v143;
          sub_2237220(v10, v198, v145, 8);
          v144 = *(unsigned int *)&ptr[8];
          v143 = (__int64)v205;
        }
        *(_QWORD *)(*(_QWORD *)ptr + 8 * v144) = v143;
        ++*(_DWORD *)&ptr[8];
        v146 = *(unsigned int *)&ptr[8];
        if ( (unsigned __int64)*(unsigned int *)&ptr[8] + 1 > *(unsigned int *)&ptr[12] )
        {
          sub_2237220(v10, v10 + 2, *(unsigned int *)&ptr[8] + 1LL, 8);
          v146 = *(unsigned int *)&ptr[8];
        }
        *(_QWORD *)(*(_QWORD *)ptr + 8 * v146) = "-o";
        v147 = *a4;
        ++*(_DWORD *)&ptr[8];
        v148 = *(unsigned int *)&ptr[8];
        if ( (unsigned __int64)*(unsigned int *)&ptr[8] + 1 > *(unsigned int *)&ptr[12] )
        {
          sub_2237220(v10, v10 + 2, *(unsigned int *)&ptr[8] + 1LL, 8);
          v148 = *(unsigned int *)&ptr[8];
        }
        *(_QWORD *)(*(_QWORD *)ptr + 8 * v148) = v147;
        v149 = *(const __m128i **)a5;
        v150 = *(unsigned int *)(a5 + 8);
        ++*(_DWORD *)&ptr[8];
        v204 = v149;
        v151 = (void *)operator new(0x208u);
        sub_1106AE0(
          (__int64)v151,
          v207,
          v209,
          0x100000000LL,
          (__int64)"@",
          v140,
          (__int64)v10,
          v204,
          v150,
          (__int64)a4,
          1,
          0);
        v213[0] = v151;
        v152 = *(unsigned int *)(a2 + 160);
        v153 = v152 + 1;
        v154 = *(_DWORD *)(a2 + 160);
        if ( v152 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
        {
          v197 = *(_QWORD *)(a2 + 152);
          if ( v197 > (unsigned __int64)v213 || (unsigned __int64)v213 >= v197 + 8 * v152 )
          {
            sub_11673D0((__int64)sa, v153, v68, a8);
            v152 = *(unsigned int *)(a2 + 160);
            v155 = *(_QWORD *)(a2 + 152);
            v154 = *(_DWORD *)(a2 + 160);
          }
          else
          {
            sub_11673D0((__int64)sa, v153, v68, a8);
            v155 = *(_QWORD *)(a2 + 152);
            v152 = *(unsigned int *)(a2 + 160);
            v141 = (void **)((char *)v213 + v155 - v197);
            v154 = *(_DWORD *)(a2 + 160);
          }
        }
        else
        {
          v155 = *(_QWORD *)(a2 + 152);
        }
        v156 = *v141;
        *v141 = nullptr;
        *(_QWORD *)(v155 + 8 * v152) = v156;
        v157 = v213[0];
        *(_DWORD *)(a2 + 160) = v154 + 1;
        if ( v157 )
        {
          v158 = *(void (__fastcall **)(_QWORD *))(*v157 + 8LL);
          if ( v158 == sub_10D4290 )
          {
            v159 = v157[58];
            v160 = v157[57];
            *v157 = &off_2BA8F30;
            if ( v159 != v160 )
            {
              do
              {
                if ( *(_BYTE *)(v160 + 32) && *(_QWORD *)v160 != v160 + 16 )
                  operator delete(*(void **)v160);
                v160 += 40;
              }
              while ( v159 != v160 );
              v160 = v157[57];
            }
            if ( v160 )
              operator delete((void *)v160);
            v161 = (void *)v157[54];
            if ( v161 )
              operator delete(v161);
            v162 = (_QWORD *)v157[50];
            if ( v162 != v157 + 52 )
              operator delete(v162);
            v163 = (_QWORD *)v157[32];
            if ( v163 != v157 + 34 )
              free(v163);
            v164 = (void **)v157[29];
            v165 = (void **)v157[28];
            if ( v164 != v165 )
            {
              do
              {
                while ( *v165 != v165 + 2 )
                {
                  operator delete(*v165);
                  v165 += 4;
                  if ( v165 == v164 )
                    goto LABEL_234;
                }
                v165 += 4;
              }
              while ( v164 != v165 );
LABEL_234:
              v165 = (void **)v157[28];
            }
            if ( v165 )
              operator delete(v165);
            v166 = (void *)v157[25];
            if ( v166 )
              operator delete(v166);
            v167 = (_QWORD *)v157[7];
            if ( v167 != v157 + 9 )
              free(v167);
            operator delete(v157, 0x208u);
          }
          else
          {
            v158(v157);
          }
        }
        if ( *(void ***)ptr != v10 + 2 )
          free(*(void **)ptr);
      }
    }
  }
LABEL_137:
  if ( dest != &v212.m128_u16[4] )
    operator delete(dest);
  if ( v215 != v217 )
    free(v215);
}
