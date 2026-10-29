void __fastcall sub_12772F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char **a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 *v10; // rbx
  size_t *v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r13
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  char *v20; // r15
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // r13
  char *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r15
  __int64 v35; // rbx
  __m128 v36; // xmm0
  __int64 v37; // r13
  char *v38; // rdx
  __m128i *v39; // rbx
  __int64 v40; // rax
  __m128i *v41; // rbx
  __int64 v42; // rax
  __m128i *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 *v48; // r13
  __int64 v49; // r15
  __int64 v50; // rax
  unsigned __int8 (__fastcall *v51)(__int64, size_t *); // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  size_t v55; // rbx
  __int64 v56; // rax
  unsigned __int8 (__fastcall *v57)(__int64, size_t *); // rdx
  int v58; // eax
  void *v59; // rcx
  __int64 *v60; // rbx
  size_t v61; // r13
  __int64 *v62; // r15
  size_t v63; // rdx
  __int64 v64; // r13
  char v65; // r15
  void **v66; // rbx
  void **v67; // r13
  __int64 v68; // rsi
  __m128i *v69; // r14
  __int64 v70; // rbx
  const __m128i *v71; // r14
  __int64 v72; // r15
  __int64 v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rsi
  int v76; // eax
  __int64 v77; // rcx
  size_t v78; // rsi
  _QWORD *v79; // rbp
  void (__fastcall *v80)(_QWORD *); // rax
  __int64 v81; // r12
  __int64 v82; // rbx
  void *v83; // rdi
  _QWORD *v84; // rdi
  _QWORD *v85; // rdi
  void **v86; // r12
  void **v87; // rbx
  void *v88; // rdi
  _QWORD *v89; // rdi
  void **v90; // rbp
  void **v91; // rbx
  void **v92; // rbp
  void **v93; // rbx
  void **v94; // rbp
  void **v95; // rbx
  void **v96; // rbp
  void **v97; // rbx
  void **v98; // rbp
  void **v99; // rbx
  void **v100; // rbx
  size_t v101; // rax
  void **v102; // r13
  void **v103; // r15
  void **v104; // rdi
  void **v105; // rdi
  void **v106; // r13
  void **v107; // r15
  void **v108; // rbx
  size_t v109; // rax
  void **v110; // rdx
  void **v111; // r15
  void **v112; // r13
  void **v113; // rdi
  void **v114; // rdi
  void **v115; // r15
  void **v116; // r13
  __int64 v117; // r15
  __int64 v118; // rax
  _QWORD *v119; // r13
  __int64 v120; // rbp
  __int64 v121; // rax
  _QWORD *v122; // r15
  __int64 v123; // r13
  __m128i *v124; // rbx
  __int64 v125; // rax
  __m128i *v126; // rbx
  __int64 v127; // rax
  __int64 v128; // r14
  unsigned __int64 v129; // rbx
  __int64 v130; // rdi
  size_t v131; // rax
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rax
  __int64 v135; // r9
  size_t v136; // rax
  __int64 v137; // rax
  size_t v138; // rax
  __int64 v139; // rax
  char *v140; // rsi
  size_t v141; // rax
  __int64 v142; // rax
  __int64 v143; // rdx
  int v144; // eax
  __int64 *i; // [rsp+10h] [rbp-338h] BYREF
  __int64 v146; // [rsp+18h] [rbp-330h]
  __int64 *v147; // [rsp+20h] [rbp-328h]
  __m128i *v148; // [rsp+28h] [rbp-320h]
  __int64 v149; // [rsp+30h] [rbp-318h]
  char **v150; // [rsp+38h] [rbp-310h]
  __int64 v151; // [rsp+40h] [rbp-308h]
  __m128i *v152; // [rsp+48h] [rbp-300h]
  __int64 v153; // [rsp+50h] [rbp-2F8h]
  _BYTE *v154; // [rsp+58h] [rbp-2F0h]
  __int64 v155; // [rsp+60h] [rbp-2E8h]
  __int64 v156; // [rsp+68h] [rbp-2E0h]
  __m128i v157[2]; // [rsp+70h] [rbp-2D8h] BYREF
  __int16 v158; // [rsp+90h] [rbp-2B8h]
  void *v159; // [rsp+A0h] [rbp-2A8h] BYREF
  __int64 *v160; // [rsp+A8h] [rbp-2A0h]
  _WORD v161[16]; // [rsp+B0h] [rbp-298h] BYREF
  size_t n[2]; // [rsp+D0h] [rbp-278h] BYREF
  __int64 v163; // [rsp+E0h] [rbp-268h] BYREF
  void *v164; // [rsp+F0h] [rbp-258h]
  _BYTE v165[16]; // [rsp+100h] [rbp-248h] BYREF
  __int16 v166; // [rsp+110h] [rbp-238h]
  void *ptr; // [rsp+120h] [rbp-228h] BYREF
  __int64 v168; // [rsp+128h] [rbp-220h]
  _BYTE v169[128]; // [rsp+130h] [rbp-218h] BYREF
  _BYTE v170[64]; // [rsp+1B0h] [rbp-198h] BYREF
  void *v171; // [rsp+1F0h] [rbp-158h]
  void *v172; // [rsp+218h] [rbp-130h]
  void **v173; // [rsp+220h] [rbp-128h]
  void *v174; // [rsp+230h] [rbp-118h]
  void **v175; // [rsp+238h] [rbp-110h]
  void *v176; // [rsp+248h] [rbp-100h]
  void **v177; // [rsp+250h] [rbp-F8h]
  void *v178; // [rsp+260h] [rbp-E8h]
  void **v179; // [rsp+268h] [rbp-E0h]
  void *v180; // [rsp+278h] [rbp-D0h]
  void **v181; // [rsp+280h] [rbp-C8h]
  void *v182; // [rsp+2C0h] [rbp-88h]
  void *v183; // [rsp+2F0h] [rbp-58h]

  v8 = a6;
  v9 = *(_QWORD *)(a1 + 24);
  v155 = a1;
  v10 = *(__int64 **)(v9 + 8);
  v149 = a2;
  v153 = a3;
  v150 = a4;
  v151 = a5;
  v154 = v170;
  v147 = v10;
  sub_112C5F0((__int64)v170, v9, a6);
  ptr = v169;
  v168 = 0x1000000000LL;
  sub_21B7CF0(v8, 36);
  sub_21B7CF0(v8, 345);
  sub_21B7CF0(v8, 3480);
  if ( v10[62] )
  {
    v11 = n;
    v148 = (__m128i *)&v159;
    sub_C05100((__int64)&v159, "--sysroot=", (__int64)(v147 + 61));
    LOWORD(v164) = 260;
    n[0] = (size_t)&v159;
    v12 = sub_10DA6C0(v8, (__int64)n);
    sub_10DC5D0((__int64)&ptr, v12);
    if ( v159 != v161 )
      operator delete(v159);
  }
  else
  {
    v11 = n;
    v148 = (__m128i *)&v159;
  }
  if ( sub_10DCD30(v8, 0xCF9u) )
    sub_10DC5D0((__int64)&ptr, (__int64)"-s");
  sub_10DC5D0((__int64)&ptr, (__int64)"-m");
  switch ( *(_DWORD *)(v9 + 48) )
  {
    case 1:
    case 0x23:
      sub_10DC5D0((__int64)&ptr, (__int64)"thumb2pe");
      break;
    case 3:
      if ( sub_10DCD30(v8, 0x8D5u) )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"arm64xpe");
      }
      else if ( *(_DWORD *)(v9 + 1792) == 3 && *(_DWORD *)(v9 + 1796) == 36 )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"arm64ecpe");
      }
      else
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"arm64pe");
      }
      break;
    case 0x11:
      sub_10DC5D0((__int64)&ptr, (__int64)"mipspe");
      break;
    case 0x25:
      sub_10DC5D0((__int64)&ptr, (__int64)"i386pe");
      break;
    case 0x26:
      sub_10DC5D0((__int64)&ptr, (__int64)"i386pep");
      break;
    default:
      sub_FC70B0((__int64)n, *v147, 0, 67);
      sub_AEC220((unsigned __int8 **)n, *(_BYTE **)(v9 + 1760), *(_QWORD *)(v9 + 1768));
      if ( (_BYTE)v166 )
      {
        sub_FC7790(v163, (__int64 *)n, SHIBYTE(v166));
        v163 = 0;
        v166 = 0;
      }
      if ( v164 != v165 )
        operator delete(v164);
      v100 = (void **)n[0];
      if ( n[0] )
      {
        v101 = n[1];
        if ( n[1] )
        {
          if ( n[0] >= n[1] && n[0] <= n[1] + 14848 )
          {
            v143 = *(unsigned int *)(n[1] + 14976);
            *(_DWORD *)(n[1] + 14976) = v143 + 1;
            *(_QWORD *)(v101 + 8 * v143 + 14848) = v100;
          }
          else
          {
            v102 = *(void ***)(n[0] + 528);
            v103 = &v102[8 * (unsigned __int64)*(unsigned int *)(n[0] + 536)];
            if ( v102 != v103 )
            {
              do
              {
                while ( 1 )
                {
                  v103 -= 8;
                  v104 = (void **)v103[3];
                  if ( v104 == v103 + 5 )
                    break;
                  operator delete(v104);
                  if ( v102 == v103 )
                    goto LABEL_185;
                }
              }
              while ( v102 != v103 );
LABEL_185:
              v103 = (void **)v100[66];
            }
            if ( v103 != v100 + 68 )
              free(v103);
            v105 = (void **)v100[52];
            if ( v105 != v100 + 54 )
              free(v105);
            v106 = v100 + 48;
            v107 = v100 + 8;
            do
            {
              while ( *v106 != v106 + 2 )
              {
                operator delete(*v106);
                v106 -= 4;
                if ( v107 == v106 )
                  goto LABEL_193;
              }
              v106 -= 4;
            }
            while ( v107 != v106 );
LABEL_193:
            operator delete(v100, 0x3A0u);
          }
        }
      }
      break;
  }
  n[0] = 0x90F00000B9DLL;
  v13 = sub_21B6DA0(v8, n, 2);
  v14 = *(_QWORD *)(v8 + 8);
  v163 = 0x90F00000B9DLL;
  v15 = (_QWORD *)(v14 + 8LL * (unsigned int)v13);
  v16 = v14 + 8 * HIDWORD(v13);
  i = (__int64 *)v16;
  *(__m128 *)n = _mm_loadh_ps((const double *)&i);
  if ( v15 != (_QWORD *)v16 )
  {
    while ( 1 )
    {
      v17 = *v15;
      if ( *v15 )
      {
        if ( (unsigned __int8)sub_21B9810(*v15, 2973) || (unsigned __int8)sub_21B9810(v17, 2319) )
          break;
      }
      n[0] = (size_t)++v15;
      if ( (_QWORD *)v16 == v15 )
        goto LABEL_14;
    }
    i = (__int64 *)v16;
    v163 = 0x90F00000B9DLL;
    *(__m128 *)n = _mm_loadh_ps((const double *)&i);
    if ( (_QWORD *)v16 != v15 )
    {
      i = (__int64 *)v8;
      do
      {
        v117 = *v15;
        v118 = *(_QWORD *)(*v15 + 16LL);
        if ( !v118 )
          v118 = *v15;
        v119 = v15 + 1;
        *(_BYTE *)(v118 + 44) |= 1u;
        n[0] = (size_t)v119;
        if ( v119 == (_QWORD *)v16 )
          break;
        while ( 1 )
        {
          v120 = *v119;
          if ( *v119 )
          {
            if ( (unsigned __int8)sub_21B9810(*v119, 2973) || (unsigned __int8)sub_21B9810(v120, 2319) )
              break;
          }
          n[0] = (size_t)++v119;
          if ( (_QWORD *)v16 == v119 )
            goto LABEL_243;
        }
        v15 = (_QWORD *)n[0];
      }
      while ( v16 != n[0] );
LABEL_243:
      v8 = (__int64)i;
      if ( (unsigned __int8)sub_21B9810(v117, 2973) )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"--subsystem");
        sub_10DC5D0((__int64)&ptr, (__int64)"windows");
      }
      else if ( (unsigned __int8)sub_21B9810(v117, 2319) )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"--subsystem");
        sub_10DC5D0((__int64)&ptr, (__int64)"console");
      }
    }
  }
LABEL_14:
  if ( sub_10DCD30(v8, 0x921u) )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"--dll");
  }
  else if ( sub_10DCD30(v8, 0xCC0u) )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"--shared");
  }
  if ( sub_10DCD30(v8, 0xCE3u) )
    sub_10DC5D0((__int64)&ptr, (__int64)"-Bstatic");
  else
    sub_10DC5D0((__int64)&ptr, (__int64)"-Bdynamic");
  if ( sub_10DCD30(v8, 0x921u) || sub_10DCD30(v8, 0xCC0u) )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"-e");
    if ( *(_DWORD *)(v9 + 48) == 37 )
      sub_10DC5D0((__int64)&ptr, (__int64)"_DllMainCRTStartup@12");
    else
      sub_10DC5D0((__int64)&ptr, (__int64)"DllMainCRTStartup");
    sub_10DC5D0((__int64)&ptr, (__int64)"--enable-auto-image-base");
  }
  if ( sub_10DCD30(v8, 0xDBFu) )
    sub_10DC5D0((__int64)&ptr, (__int64)"--no-demangle");
  if ( !(unsigned __int8)sub_21B7850(v8, 449, 1033, 1) )
    sub_10DC5D0((__int64)&ptr, (__int64)"--disable-auto-import");
  v18 = sub_10DCD30(v8, 0x95Fu);
  v19 = v18;
  if ( v18 )
  {
    v20 = **(char ***)(v18 + 48);
    v21 = j__strlen("none");
    if ( v20 )
    {
      i = (__int64 *)v21;
      v22 = j__strlen(v20);
      v23 = v22;
      if ( i != (__int64 *)v22 )
      {
        if ( v22 != j__strlen("cf") )
        {
          if ( v23 != j__strlen("cf-nochecks") )
            goto LABEL_198;
          if ( !v23 )
            goto LABEL_34;
LABEL_33:
          if ( !memcmp(v20, "cf-nochecks", v23) )
          {
LABEL_34:
            sub_10DC5D0((__int64)&ptr, (__int64)"--guard-cf");
            goto LABEL_35;
          }
          goto LABEL_198;
        }
        if ( !v23 )
          goto LABEL_34;
LABEL_282:
        if ( !memcmp(v20, "cf", v23) )
          goto LABEL_34;
        if ( v23 != j__strlen("cf-nochecks") )
          goto LABEL_198;
        goto LABEL_33;
      }
      if ( v22 && memcmp(v20, "none", v22) )
      {
        if ( v23 != j__strlen("cf") )
        {
          if ( v23 == j__strlen("cf-nochecks") )
            goto LABEL_33;
LABEL_198:
          sub_FC70B0((__int64)n, *v147, 0, 497);
          sub_AEC220((unsigned __int8 **)n, *(_BYTE **)(v19 + 24), *(_QWORD *)(v19 + 32));
          sub_AEC220((unsigned __int8 **)n, v20, v23);
          if ( (_BYTE)v166 )
          {
            sub_FC7790(v163, (__int64 *)n, SHIBYTE(v166));
            v163 = 0;
            v166 = 0;
          }
          if ( v164 != v165 )
            operator delete(v164);
          v108 = (void **)n[0];
          if ( n[0] )
          {
            v109 = n[1];
            if ( n[1] )
            {
              if ( n[0] < n[1] || n[0] > n[1] + 14848 )
              {
                v110 = *(void ***)(n[0] + 528);
                v111 = &v110[8 * (unsigned __int64)*(unsigned int *)(n[0] + 536)];
                if ( v110 != v111 )
                {
                  v112 = *(void ***)(n[0] + 528);
                  do
                  {
                    while ( 1 )
                    {
                      v111 -= 8;
                      v113 = (void **)v111[3];
                      if ( v113 == v111 + 5 )
                        break;
                      operator delete(v113);
                      if ( v112 == v111 )
                        goto LABEL_209;
                    }
                  }
                  while ( v112 != v111 );
LABEL_209:
                  v111 = (void **)v108[66];
                }
                if ( v111 != v108 + 68 )
                  free(v111);
                v114 = (void **)v108[52];
                v115 = v108 + 52;
                if ( v114 != v108 + 54 )
                  free(v114);
                v116 = v108 + 12;
                do
                {
                  while ( 1 )
                  {
                    v115 -= 4;
                    if ( *v115 == v115 + 2 )
                      break;
                    operator delete(*v115);
                    if ( v115 == v116 )
                      goto LABEL_217;
                  }
                }
                while ( v115 != v116 );
LABEL_217:
                operator delete(v108, 0x3A0u);
              }
              else
              {
                v133 = *(unsigned int *)(n[1] + 14976);
                *(_DWORD *)(n[1] + 14976) = v133 + 1;
                *(_QWORD *)(v109 + 8 * v133 + 14848) = v108;
              }
            }
          }
          goto LABEL_35;
        }
        goto LABEL_282;
      }
    }
    else if ( v21 )
    {
      if ( !j__strlen("cf") || !j__strlen("cf-nochecks") )
        goto LABEL_34;
      v23 = 0;
      goto LABEL_198;
    }
    sub_10DC5D0((__int64)&ptr, (__int64)"--no-guard-cf");
  }
LABEL_35:
  if ( sub_10DCD30(v8, 0x3D2u) )
    sub_10DC5D0((__int64)&ptr, (__int64)"--functionpadmin");
  sub_10DC5D0((__int64)&ptr, (__int64)"-o");
  v24 = *v150;
  LOWORD(v164) = 257;
  if ( *v24 )
  {
    n[0] = (size_t)v24;
    LOBYTE(v164) = 3;
  }
  if ( (unsigned __int8)sub_228AF30(n, 0) )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)v24);
    v152 = v157;
  }
  else
  {
    v159 = ".exe";
    v161[8] = 259;
    v158 = 257;
    if ( *v24 )
    {
      v157[0].m128i_i64[0] = (__int64)v24;
      LOBYTE(v158) = 3;
    }
    v152 = v157;
    sub_A41580((__m128i *)n, v157, v148, v25, v26, v27);
    v28 = sub_10DA6C0(v8, (__int64)n);
    sub_10DC5D0((__int64)&ptr, v28);
  }
  v29 = sub_10DCD30(v8, 0xCA4u);
  if ( v29 )
    sub_21B5A40(v29, v8, &ptr);
  v30 = sub_10DCD30(v8, 0xCF9u);
  if ( v30 )
    sub_21B5A40(v30, v8, &ptr);
  v31 = sub_10DCD30(v8, 0xD17u);
  if ( v31 )
    sub_21B5A40(v31, v8, &ptr);
  sub_21B7F70(v8, &ptr, 69);
  if ( (v170[0] & 1) != 0 && !sub_10DCD30(v8, 0xBF0u) && !sub_10DCD30(v8, 0xBDDu) )
  {
    v131 = j__strlen("asan_dynamic");
    v132 = sub_112D2D0(v9, v8, (__int64)"asan_dynamic", v131, 2u, 0);
    sub_10DC5D0((__int64)&ptr, v132);
  }
  n[0] = 0xBEB00000BF0LL;
  v32 = sub_21B6DA0(v8, n, 2);
  v33 = *(_QWORD *)(v8 + 8);
  v163 = 0xBEB00000BF0LL;
  v34 = (_QWORD *)(v33 + 8LL * (unsigned int)v32);
  v35 = v33 + 8 * HIDWORD(v32);
  i = (__int64 *)v35;
  v36 = _mm_loadh_ps((const double *)&i);
  *(__m128 *)n = v36;
  if ( v34 == (_QWORD *)v35 )
    goto LABEL_56;
  while ( 1 )
  {
    v37 = *v34;
    if ( *v34 )
    {
      if ( (unsigned __int8)sub_21B9810(*v34, 3056) || (unsigned __int8)sub_21B9810(v37, 3051) )
        break;
    }
    n[0] = (size_t)++v34;
    if ( (_QWORD *)v35 == v34 )
      goto LABEL_56;
  }
  i = (__int64 *)v35;
  v163 = 0xBEB00000BF0LL;
  v36 = _mm_loadh_ps((const double *)&i);
  *(__m128 *)n = v36;
  if ( v34 == (_QWORD *)v35 )
  {
LABEL_56:
    if ( sub_10DCD30(v8, 0xCC0u) || sub_10DCD30(v8, 0x921u) )
    {
      v38 = "dllcrt2.o";
    }
    else
    {
      v134 = sub_10DCD30(v8, 0xB71u);
      v38 = "crt2u.o";
      if ( !v134 )
        v38 = "crt2.o";
    }
    v39 = v148;
    sub_112D4E0(v148, v9, v38);
    LOWORD(v164) = 260;
    n[0] = (size_t)v39;
    v40 = sub_10DA6C0(v8, (__int64)n);
    sub_10DC5D0((__int64)&ptr, v40);
    if ( v159 != &v39[1] )
      operator delete(v159);
    if ( sub_10DCD30(v8, 0xC39u) )
    {
      v41 = v148;
      sub_112D4E0(v148, v9, "gcrt2.o");
      LOWORD(v164) = 260;
      n[0] = (size_t)v41;
      v42 = sub_10DA6C0(v8, (__int64)n);
      sub_10DC5D0((__int64)&ptr, v42);
      if ( v159 != &v41[1] )
        operator delete(v159);
    }
    v43 = v148;
    sub_112D4E0(v148, v9, (char *)"crtbegin.o");
    LOWORD(v164) = 260;
    n[0] = (size_t)v43;
    v44 = sub_10DA6C0(v8, (__int64)n);
    sub_10DC5D0((__int64)&ptr, v44);
    if ( v159 != &v43[1] )
      operator delete(v159);
  }
  else
  {
    do
    {
      v121 = *(_QWORD *)(*v34 + 16LL);
      if ( !v121 )
        v121 = *v34;
      v122 = v34 + 1;
      *(_BYTE *)(v121 + 44) |= 1u;
      n[0] = (size_t)v122;
      if ( v122 == (_QWORD *)v35 )
        break;
      while ( 1 )
      {
        v123 = *v122;
        if ( *v122 )
        {
          if ( (unsigned __int8)sub_21B9810(*v122, 3056) || (unsigned __int8)sub_21B9810(v123, 3051) )
            break;
        }
        n[0] = (size_t)++v122;
        if ( (_QWORD *)v35 == v122 )
          goto LABEL_65;
      }
      v34 = (_QWORD *)n[0];
    }
    while ( v35 != n[0] );
  }
LABEL_65:
  sub_21B7F70(v8, &ptr, 2204);
  sub_112D940(v9, v8, (__int64)&ptr, v45, v46);
  v47 = *(_QWORD *)(v9 + 96);
  v48 = (__int64 *)v148;
  v49 = v47 + 32LL * *(unsigned int *)(v9 + 104);
  for ( i = v148[1].m128i_i64; v49 != v47; v47 += 32 )
  {
    while ( 1 )
    {
      v50 = sub_112C5D0(v9);
      v51 = *(unsigned __int8 (__fastcall **)(__int64, size_t *))(*(_QWORD *)v50 + 96LL);
      LOWORD(v164) = 260;
      n[0] = v47;
      if ( v51(v50, n) )
      {
        sub_C05100((__int64)v48, "-L", v47);
        n[0] = (size_t)v48;
        LOWORD(v164) = 260;
        v52 = sub_10DA6C0(v8, (__int64)n);
        v53 = (unsigned int)v168;
        v54 = (unsigned int)v168 + 1LL;
        if ( v54 > HIDWORD(v168) )
        {
          v156 = v52;
          sub_2237220(&ptr, v169, v54, 8);
          v53 = (unsigned int)v168;
          v52 = v156;
        }
        *((_QWORD *)ptr + v53) = v52;
        LODWORD(v168) = v168 + 1;
        if ( v159 != i )
          break;
      }
      v47 += 32;
      if ( v49 == v47 )
        goto LABEL_73;
    }
    operator delete(v159);
  }
LABEL_73:
  v55 = (size_t)v152;
  (*(void (__fastcall **)(__m128i *, __int64))(*(_QWORD *)v9 + 296LL))(v152, v9);
  v56 = sub_112C5D0(v9);
  v57 = *(unsigned __int8 (__fastcall **)(__int64, size_t *))(*(_QWORD *)v56 + 96LL);
  n[0] = v55;
  LOWORD(v164) = 260;
  if ( v57(v56, n) )
  {
    v124 = v148;
    sub_C05100((__int64)v148, "-L", (__int64)v152);
    LOWORD(v164) = 260;
    n[0] = (size_t)v124;
    v125 = sub_10DA6C0(v8, (__int64)n);
    sub_10DC5D0((__int64)&ptr, v125);
    if ( v159 != &v124[1] )
      operator delete(v159);
  }
  sub_11C3660(v9, v151, v8, (__int64)&ptr, v153);
  v58 = *((_DWORD *)v147 + 10);
  if ( v58 )
  {
    sub_11C8A90((_DWORD *)v9, v8, (__int64)&ptr, v150, v151, v58 == 2, (__m128i)v36);
    if ( *(_DWORD *)(*(_QWORD *)v149 + 16LL) != 4 )
      goto LABEL_76;
  }
  else if ( *(_DWORD *)(*(_QWORD *)v149 + 16LL) != 4 )
  {
    goto LABEL_76;
  }
  if ( !sub_10DE660(v8, 0xBF0u, 0xBDDu) )
  {
    (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 320LL))(v9, v8, &ptr);
    (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 312LL))(v9, v8, &ptr);
  }
LABEL_76:
  if ( sub_112D7B0(v9, v8) )
  {
    if ( sub_10DCD30(v8, 0xCE0u) && !sub_10DCD30(v8, 0xCE3u) )
    {
      sub_10DC5D0((__int64)&ptr, (__int64)"-Bstatic");
      (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 640LL))(v9, v8, &ptr);
      sub_10DC5D0((__int64)&ptr, (__int64)"-Bdynamic");
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 640LL))(v9, v8, &ptr);
    }
  }
  sub_21B7150(v148, v8, 2205);
  v59 = v159;
  v147 = v160;
  if ( v160 == v159 )
  {
    v65 = 0;
  }
  else
  {
    v60 = (__int64 *)v159;
    i = &v163;
    while ( 1 )
    {
      n[0] = (size_t)i;
      sub_1270B70(n, (_BYTE *)*v60, *v60 + v60[1]);
      v61 = n[1];
      v62 = (__int64 *)n[0];
      if ( n[1] )
      {
        v63 = 10;
        if ( n[1] <= 0xA )
          v63 = n[1];
        if ( !memcmp((const void *)n[0], "windowsapp", v63) )
        {
          v64 = v61 - 10;
          if ( v64 <= 0x7FFFFFFF && v64 >= (__int64)0xFFFFFFFF80000000LL && !(_DWORD)v64 )
            break;
        }
      }
      if ( v62 == i )
      {
        v60 += 4;
        if ( v147 == v60 )
        {
LABEL_88:
          v65 = 0;
          goto LABEL_89;
        }
      }
      else
      {
        v60 += 4;
        operator delete(v62);
        if ( v147 == v60 )
          goto LABEL_88;
      }
    }
    if ( v62 != i )
      operator delete(v62);
    v65 = 1;
LABEL_89:
    v66 = (void **)v160;
    v59 = v159;
    if ( v160 != v159 )
    {
      v67 = (void **)v159;
      do
      {
        while ( *v67 != v67 + 2 )
        {
          operator delete(*v67);
          v67 += 4;
          if ( v67 == v66 )
            goto LABEL_93;
        }
        v67 += 4;
      }
      while ( v66 != v67 );
LABEL_93:
      v59 = v159;
    }
  }
  if ( v59 )
    operator delete(v59);
  if ( !sub_10DCD30(v8, 0xBF0u) )
  {
    if ( !sub_10DCD30(v8, 0xBDDu) )
    {
      if ( sub_10DCD30(v8, 0xCE3u) )
        sub_10DC5D0((__int64)&ptr, (__int64)"--start-group");
      if ( sub_10DCD30(v8, 0x722u) || sub_10DCD30(v8, 0x721u) || sub_10DCD30(v8, 0x720u) )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-lssp_nonshared");
        sub_10DC5D0((__int64)&ptr, (__int64)"-lssp");
      }
      if ( (unsigned __int8)sub_21B79D0(v8, 1563, 1562, 1265, 0, v135) )
      {
        v144 = sub_10DD170(*(__int64 **)(v9 + 8), v8);
        switch ( v144 )
        {
          case 2:
            sub_10DC5D0((__int64)&ptr, (__int64)"-lgomp");
            break;
          case 3:
            sub_10DC5D0((__int64)&ptr, (__int64)"-liomp5md");
            break;
          case 1:
            sub_10DC5D0((__int64)&ptr, (__int64)"-lomp");
            break;
        }
      }
      sub_1270E70(v155, v8, (__int64)&ptr);
      if ( sub_10DCD30(v8, 0xC39u) )
        sub_10DC5D0((__int64)&ptr, (__int64)"-lgmon");
      if ( sub_10DCD30(v8, 0xC6Au) )
        sub_10DC5D0((__int64)&ptr, (__int64)"-lpthread");
      if ( (v170[0] & 1) != 0 )
      {
        v136 = j__strlen("asan_dynamic");
        v137 = sub_112D2D0(v9, v8, (__int64)"asan_dynamic", v136, 2u, 0);
        sub_10DC5D0((__int64)&ptr, v137);
        v138 = j__strlen("asan_dynamic_runtime_thunk");
        v139 = sub_112D2D0(v9, v8, (__int64)"asan_dynamic_runtime_thunk", v138, 1u, 0);
        sub_10DC5D0((__int64)&ptr, v139);
        sub_10DC5D0((__int64)&ptr, (__int64)"--require-defined");
        v140 = "___asan_seh_interceptor";
        if ( *(_DWORD *)(v9 + 48) != 37 )
          v140 = "__asan_seh_interceptor";
        sub_10DC5D0((__int64)&ptr, (__int64)v140);
        sub_10DC5D0((__int64)&ptr, (__int64)"--whole-archive");
        v141 = j__strlen("asan_dynamic_runtime_thunk");
        v142 = sub_112D2D0(v9, v8, (__int64)"asan_dynamic_runtime_thunk", v141, 1u, 0);
        sub_10DC5D0((__int64)&ptr, v142);
        sub_10DC5D0((__int64)&ptr, (__int64)"--no-whole-archive");
      }
      (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 672LL))(v9, v8, &ptr);
      if ( v65 )
      {
        if ( !sub_10DCD30(v8, 0xCE3u) )
        {
          sub_1270E70(v155, v8, (__int64)&ptr);
          goto LABEL_287;
        }
      }
      else
      {
        if ( sub_10DCD30(v8, 0xB9Du) )
        {
          sub_10DC5D0((__int64)&ptr, (__int64)"-lgdi32");
          sub_10DC5D0((__int64)&ptr, (__int64)"-lcomdlg32");
        }
        sub_10DC5D0((__int64)&ptr, (__int64)"-ladvapi32");
        sub_10DC5D0((__int64)&ptr, (__int64)"-lshell32");
        sub_10DC5D0((__int64)&ptr, (__int64)"-luser32");
        sub_10DC5D0((__int64)&ptr, (__int64)"-lkernel32");
        if ( !sub_10DCD30(v8, 0xCE3u) )
        {
          sub_1270E70(v155, v8, (__int64)&ptr);
          sub_10DC5D0((__int64)&ptr, (__int64)"-lkernel32");
          goto LABEL_287;
        }
      }
      sub_10DC5D0((__int64)&ptr, (__int64)"--end-group");
    }
LABEL_287:
    if ( !sub_10DCD30(v8, 0xBEBu) )
    {
      sub_112FB00(v9, v8, (__int64)&ptr);
      v126 = v148;
      sub_112D4E0(v148, v9, "crtend.o");
      LOWORD(v164) = 260;
      n[0] = (size_t)v126;
      v127 = sub_10DA6C0(v8, (__int64)n);
      sub_10DC5D0((__int64)&ptr, v127);
      if ( v159 != &v126[1] )
        operator delete(v159);
    }
  }
  v68 = v9;
  v69 = v148;
  sub_1132E50(v148, v68, nullptr);
  LOWORD(v164) = 260;
  n[0] = (size_t)v69;
  v70 = sub_10DA6C0(v8, (__int64)n);
  if ( v159 != &v69[1] )
    operator delete(v159);
  v146 = 1;
  v71 = *(const __m128i **)v151;
  v72 = *(unsigned int *)(v151 + 8);
  i = (__int64 *)v150;
  v73 = operator new(0x208u);
  sub_1106AE0(v73, v153, v155, 0, (__int64)"@", v70, (__int64)&ptr, v71, v72, (__int64)i, v146, 0);
  n[0] = v73;
  v74 = *(unsigned int *)(v149 + 160);
  v75 = v74 + 1;
  v76 = *(_DWORD *)(v149 + 160);
  if ( v74 + 1 > (unsigned __int64)*(unsigned int *)(v149 + 164) )
  {
    v128 = v149;
    v129 = *(_QWORD *)(v149 + 152);
    v130 = v149 + 152;
    if ( v129 > (unsigned __int64)n || (unsigned __int64)n >= v129 + 8 * v74 )
    {
      sub_11673D0(v130, v75, v36, a8);
      v74 = *(unsigned int *)(v149 + 160);
      v77 = *(_QWORD *)(v149 + 152);
      v76 = *(_DWORD *)(v149 + 160);
    }
    else
    {
      sub_11673D0(v130, v75, v36, a8);
      v77 = *(_QWORD *)(v128 + 152);
      v74 = *(unsigned int *)(v128 + 160);
      v11 = (size_t *)((char *)n + v77 - v129);
      v76 = *(_DWORD *)(v128 + 160);
    }
  }
  else
  {
    v77 = *(_QWORD *)(v149 + 152);
  }
  v78 = *v11;
  *v11 = 0;
  *(_QWORD *)(v77 + 8 * v74) = v78;
  v79 = (_QWORD *)n[0];
  *(_DWORD *)(v149 + 160) = v76 + 1;
  if ( v79 )
  {
    v80 = *(void (__fastcall **)(_QWORD *))(*v79 + 8LL);
    if ( v80 == sub_10D4290 )
    {
      v81 = v79[58];
      v82 = v79[57];
      *v79 = &off_2BA8F30;
      if ( v81 != v82 )
      {
        do
        {
          if ( *(_BYTE *)(v82 + 32) && *(_QWORD *)v82 != v82 + 16 )
            operator delete(*(void **)v82);
          v82 += 40;
        }
        while ( v81 != v82 );
        v82 = v79[57];
      }
      if ( v82 )
        operator delete((void *)v82);
      v83 = (void *)v79[54];
      if ( v83 )
        operator delete(v83);
      v84 = (_QWORD *)v79[50];
      if ( v84 != v79 + 52 )
        operator delete(v84);
      v85 = (_QWORD *)v79[32];
      if ( v85 != v79 + 34 )
        free(v85);
      v86 = (void **)v79[29];
      v87 = (void **)v79[28];
      if ( v86 != v87 )
      {
        do
        {
          while ( *v87 != v87 + 2 )
          {
            operator delete(*v87);
            v87 += 4;
            if ( v86 == v87 )
              goto LABEL_120;
          }
          v87 += 4;
        }
        while ( v86 != v87 );
LABEL_120:
        v87 = (void **)v79[28];
      }
      if ( v87 )
        operator delete(v87);
      v88 = (void *)v79[25];
      if ( v88 )
        operator delete(v88);
      v89 = (_QWORD *)v79[7];
      if ( v89 != v79 + 9 )
        free(v89);
      operator delete(v79, 0x208u);
    }
    else
    {
      v80(v79);
    }
  }
  if ( (__m128i *)v157[0].m128i_i64[0] != &v152[1] )
    operator delete((void *)v157[0].m128i_i64[0]);
  if ( ptr != v169 )
    free(ptr);
  if ( v183 != v154 + 336 )
    operator delete(v183);
  if ( v182 != v154 + 288 )
    operator delete(v182);
  v90 = v181;
  v91 = (void **)v180;
  if ( v181 != v180 )
  {
    do
    {
      while ( *v91 != v91 + 2 )
      {
        operator delete(*v91);
        v91 += 4;
        if ( v91 == v90 )
          goto LABEL_139;
      }
      v91 += 4;
    }
    while ( v90 != v91 );
LABEL_139:
    v91 = (void **)v180;
  }
  if ( v91 )
    operator delete(v91);
  v92 = v179;
  v93 = (void **)v178;
  if ( v179 != v178 )
  {
    do
    {
      while ( *v93 != v93 + 2 )
      {
        operator delete(*v93);
        v93 += 4;
        if ( v93 == v92 )
          goto LABEL_145;
      }
      v93 += 4;
    }
    while ( v92 != v93 );
LABEL_145:
    v93 = (void **)v178;
  }
  if ( v93 )
    operator delete(v93);
  v94 = v177;
  v95 = (void **)v176;
  if ( v177 != v176 )
  {
    do
    {
      while ( *v95 != v95 + 2 )
      {
        operator delete(*v95);
        v95 += 4;
        if ( v95 == v94 )
          goto LABEL_151;
      }
      v95 += 4;
    }
    while ( v94 != v95 );
LABEL_151:
    v95 = (void **)v176;
  }
  if ( v95 )
    operator delete(v95);
  v96 = v175;
  v97 = (void **)v174;
  if ( v175 != v174 )
  {
    do
    {
      while ( *v97 != v97 + 2 )
      {
        operator delete(*v97);
        v97 += 4;
        if ( v97 == v96 )
          goto LABEL_157;
      }
      v97 += 4;
    }
    while ( v96 != v97 );
LABEL_157:
    v97 = (void **)v174;
  }
  if ( v97 )
    operator delete(v97);
  v98 = v173;
  v99 = (void **)v172;
  if ( v173 != v172 )
  {
    do
    {
      while ( *v99 != v99 + 2 )
      {
        operator delete(*v99);
        v99 += 4;
        if ( v98 == v99 )
          goto LABEL_163;
      }
      v99 += 4;
    }
    while ( v98 != v99 );
LABEL_163:
    v99 = (void **)v172;
  }
  if ( v99 )
    operator delete(v99);
  if ( v171 )
    operator delete(v171);
}
