void __fastcall sub_976D40(_QWORD *a1, unsigned int **a2, unsigned int *a3)
{
  unsigned int *v3; // r12
  unsigned int v4; // r15d
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  unsigned int v19; // r13d
  unsigned int v20; // r14d
  size_t v21; // rsi
  unsigned int *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r15
  int v27; // r12d
  int *v28; // r13
  int v29; // eax
  __int64 v30; // rax
  int *v31; // r8
  int *v32; // r15
  int *v33; // r12
  int v34; // ecx
  unsigned int v35; // ebx
  int v36; // r13d
  __int64 v37; // rax
  unsigned int v38; // ebx
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // r14d
  unsigned int *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int *v46; // rdx
  unsigned int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // r13
  size_t v50; // rdx
  __int64 v51; // rdx
  unsigned int v52; // edi
  __int64 v53; // r14
  __int64 v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rbx
  __int64 v58; // rbp
  int v59; // eax
  __int64 v60; // rax
  unsigned int *v61; // rax
  __int64 v62; // rax
  int v63; // edi
  __int64 v64; // rbx
  unsigned int v65; // ebp
  int v66; // eax
  __int64 v67; // rbp
  int v68; // r14d
  int *v69; // r12
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r14
  unsigned int **v73; // r12
  unsigned int *v74; // rdx
  __int64 v75; // rax
  unsigned int *v76; // rax
  __int64 v77; // rbx
  _QWORD *v78; // rdi
  unsigned int v79; // r13d
  unsigned int v80; // r14d
  unsigned int v81; // ebp
  unsigned int v82; // edx
  size_t v83; // rsi
  unsigned int v84; // r12d
  unsigned int *v85; // rax
  unsigned int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rdx
  unsigned int *v90; // rcx
  unsigned int *v91; // rbx
  unsigned int v92; // ebp
  __int64 *v93; // r15
  __int64 j; // rsi
  unsigned int *v95; // rdx
  unsigned int *v96; // r14
  __int64 v97; // rax
  unsigned int *v98; // rdi
  unsigned int v99; // r13d
  size_t v100; // rsi
  unsigned int *v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rbx
  __int64 v105; // rax
  unsigned int v106; // r12d
  unsigned int v107; // edx
  unsigned int v108; // ecx
  unsigned int v109; // r14d
  unsigned int *v110; // rax
  unsigned int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rax
  unsigned int **v114; // r12
  unsigned int *v115; // rbp
  unsigned int *v116; // rcx
  _QWORD *v117; // rax
  unsigned int i; // ebx
  unsigned int *v119; // rax
  __int64 v120; // rax
  unsigned int v121; // r13d
  unsigned int v122; // ecx
  unsigned int *v123; // rax
  __int64 v124; // rax
  int v125; // eax
  __int64 v126; // rdx
  unsigned int v127; // ebx
  unsigned int v128; // ecx
  unsigned int *v129; // rax
  char **v130; // rbp
  __int64 v131; // rax
  size_t v132; // r15
  __int64 v133; // rax
  _QWORD *v134; // rdx
  __int64 v135; // rdx
  _QWORD *v136; // rbx
  char *v137; // rbp
  _QWORD *v138; // rdx
  int v139; // edi
  __int64 v140; // rdx
  __int64 v141; // rsi
  __int64 v142; // rdx
  int v143; // esi
  __int64 v144; // rsi
  char *v145; // rbx
  char *v146; // r15
  __int64 v147; // rax
  __int64 v148; // rax
  int v149; // esi
  _QWORD *v150; // rax
  char **v151; // r12
  char **v152; // rbp
  char **v153; // rbp
  char **exception; // rbp
  char **v155; // rbp
  char **v156; // rbp
  char **v157; // r12
  char **v158; // rbp
  unsigned int v160; // [rsp+8h] [rbp-B0h]
  unsigned int v161; // [rsp+8h] [rbp-B0h]
  unsigned int v162; // [rsp+8h] [rbp-B0h]
  unsigned int v163; // [rsp+8h] [rbp-B0h]
  unsigned int *v164; // [rsp+8h] [rbp-B0h]
  unsigned int *v165; // [rsp+10h] [rbp-A8h]
  __int64 v166; // [rsp+10h] [rbp-A8h]
  __int64 v167; // [rsp+10h] [rbp-A8h]
  __int64 v168; // [rsp+10h] [rbp-A8h]
  unsigned int v169; // [rsp+10h] [rbp-A8h]
  _DWORD *v170; // [rsp+18h] [rbp-A0h]
  _DWORD *src; // [rsp+20h] [rbp-98h]
  unsigned int *v172; // [rsp+28h] [rbp-90h]
  unsigned int v174; // [rsp+38h] [rbp-80h]
  unsigned int v175; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v176; // [rsp+3Ch] [rbp-7Ch]
  unsigned int *v177; // [rsp+40h] [rbp-78h]
  __int64 v178; // [rsp+48h] [rbp-70h]
  __int64 v179[11]; // [rsp+60h] [rbp-58h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v165 = &v3[*(v3 - 1)];
    if ( v165 != v3 )
    {
      v4 = *v3;
      v160 = 0;
      v5 = sub_186B270(0x10u) + 8;
      v6 = v4 >> 5;
      *(_QWORD *)(v5 - 8) = 2;
      v7 = (v4 >> 5) + 1;
      v170 = (_DWORD *)v5;
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = *(_DWORD *)(v5 - 8);
          if ( v12 >= v7 )
            break;
          v8 = (3 * v12 + 1) >> 1;
          v9 = 4 * v8 + 8;
          v10 = v8;
          if ( 4 * v12 + 8 >= v9 || v12 >= v8 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v179, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v179);
            sub_233E40((__int64)v179);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v11 = (unsigned int *)sub_186B300(v170 - 2, v9);
          *v11 = v10;
          v170 = v11 + 2;
          v5 = (__int64)(v11 + 2);
        }
        v13 = 4LL * v160;
        *(v170 - 1) = v7;
        v14 = 4LL * v7;
        if ( v13 != v14 )
          memset(&v170[(unsigned __int64)v13 / 4], 0, v14 - v13);
        LOBYTE(v15) = v4;
        do
        {
          ++v3;
          v170[v6] |= 1 << v15;
          if ( v165 == v3 )
          {
            v61 = *a2;
            if ( !*a2 )
              goto LABEL_61;
            v177 = &v61[*(v61 - 1)];
            if ( v61 == v177 )
              goto LABEL_61;
            v172 = *a2;
            while ( 1 )
            {
              v174 = *v172;
              v62 = a1[4];
              if ( v62 )
                *(_DWORD *)(v62 - 4) = 0;
              v46 = (unsigned int *)a1[6];
              if ( v46 )
              {
                v63 = *(v46 - 2);
                *(v46 - 1) = 0;
                if ( !v63 )
                {
                  v130 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v179, "Overflow encountered when expanding vector");
                  *v130 = (char *)off_1C63128;
                  sub_2333C0(v130 + 1, v179);
                  sub_233E40((__int64)v179);
                  __cxa_throw(v130, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                *(v46 - 1) = 1;
                *v46 = v174;
              }
              else
              {
                v148 = sub_186B270(0x10u);
                v46 = (unsigned int *)(v148 + 8);
                *(_QWORD *)v148 = 2;
                a1[6] = v148 + 8;
                *(_DWORD *)(v148 + 8) = v174;
                *(_DWORD *)(v148 + 4) = 1;
              }
              src = nullptr;
              v163 = 0;
              do
              {
                v64 = v46[v163];
                v18 = (_QWORD *)a1[4];
                v65 = v46[v163] >> 5;
                if ( !v18 )
                {
                  v16 = v65 + 1;
                  v17 = (_QWORD *)sub_186B270(0x10u);
                  v18 = v17 + 1;
                  v19 = 0;
                  *v17 = 2;
                  a1[4] = v17 + 1;
LABEL_18:
                  while ( 1 )
                  {
                    v23 = *((_DWORD *)v18 - 2);
                    if ( v23 >= v16 )
                      break;
                    v20 = (3 * v23 + 1) >> 1;
                    v21 = 4 * v20 + 8;
                    if ( 4 * v23 + 8 >= (unsigned int)v21 || v23 >= v20 )
                    {
                      v155 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v179, "Overflow encountered when expanding vector");
                      *v155 = (char *)off_1C63128;
                      sub_2333C0(v155 + 1, v179);
                      sub_233E40((__int64)v179);
                      __cxa_throw(
                        v155,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v22 = (unsigned int *)sub_186B300(v18 - 1, v21);
                    v18 = v22 + 2;
                    *v22 = v20;
                    a1[4] = v22 + 2;
                  }
                  *((_DWORD *)v18 - 1) = v16;
                  v24 = 4LL * v19;
                  v25 = 4LL * v16;
                  v26 = 4LL * v65;
                  v27 = 1 << v64;
                  v28 = (int *)((char *)v18 + v26);
                  if ( v24 != v25 )
                    memset((char *)v18 + v24, 0, v25 - v24);
                  v29 = *v28;
                  goto LABEL_22;
                }
                v19 = *((_DWORD *)v18 - 1);
                if ( v65 >= v19 )
                {
                  v16 = v65 + 1;
                  goto LABEL_18;
                }
                v26 = 4LL * v65;
                v27 = 1 << v64;
                v28 = (int *)((char *)v18 + v26);
                v29 = *(_DWORD *)((char *)v18 + v26);
                if ( ((1 << v64) & v29) != 0 )
                  goto LABEL_75;
LABEL_22:
                *v28 = v27 | v29;
                v30 = a1[5];
                if ( v30 && v65 < *(_DWORD *)(v30 - 4) && (*(_DWORD *)(v30 + v26) & v27) != 0 )
                {
                  v31 = *(int **)(a1[1] + 8 * v64);
                  if ( v31 )
                  {
                    v32 = *(int **)(a1[1] + 8 * v64);
                    v33 = &v31[*(v31 - 1)];
                    if ( v31 != v33 )
                    {
                      while ( 1 )
                      {
                        v34 = *v32;
                        v35 = (unsigned int)*v32 >> 5;
                        if ( v35 >= *(v170 - 1) )
                          goto LABEL_39;
                        v36 = 1 << v34;
                        v166 = v35;
                        if ( (v170[v166] & (1 << v34)) == 0 )
                          goto LABEL_39;
                        if ( !src )
                          break;
                        v175 = *(src - 1);
                        if ( v35 >= v175 )
                        {
                          v37 = (__int64)src;
                          v38 = v35 + 1;
LABEL_35:
                          while ( 1 )
                          {
                            v43 = *(_DWORD *)(v37 - 8);
                            if ( v43 >= v38 )
                              break;
                            v39 = (3 * v43 + 1) >> 1;
                            v40 = 4 * v39 + 8;
                            v41 = v39;
                            if ( 4 * v43 + 8 >= v40 || v43 >= v39 )
                            {
                              v151 = (char **)__cxa_allocate_exception(0x28u);
                              sub_24ABB0(v179, "Overflow encountered when expanding vector");
                              *v151 = (char *)off_1C63128;
                              sub_2333C0(v151 + 1, v179);
                              sub_233E40((__int64)v179);
                              __cxa_throw(
                                v151,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            v42 = (unsigned int *)sub_186B300(src - 2, v40);
                            *v42 = v41;
                            src = v42 + 2;
                            v37 = (__int64)(v42 + 2);
                          }
                          v44 = 4LL * v175;
                          *(src - 1) = v38;
                          v45 = 4LL * v38;
                          if ( v44 != v45 )
                            memset(&src[(unsigned __int64)v44 / 4], 0, v45 - v44);
                        }
                        src[v166] |= v36;
LABEL_39:
                        if ( v33 == ++v32 )
                          goto LABEL_40;
                      }
                      v38 = v35 + 1;
                      v37 = sub_186B270(0x10u) + 8;
                      v175 = 0;
                      *(_QWORD *)(v37 - 8) = 2;
                      src = (_DWORD *)v37;
                      goto LABEL_35;
                    }
                  }
LABEL_40:
                  v46 = (unsigned int *)a1[6];
                  goto LABEL_41;
                }
                v104 = (unsigned int)v64 ^ 1;
                if ( v65 < *(v170 - 1) && (v170[(unsigned __int64)v26 / 4] & (1 << v104)) != 0 )
                {
                  if ( src )
                  {
                    v169 = *(src - 1);
                    if ( v65 >= v169 )
                    {
                      v105 = (__int64)src;
                      v106 = v65 + 1;
                      goto LABEL_120;
                    }
                  }
                  else
                  {
                    v106 = v65 + 1;
                    v105 = sub_186B270(0x10u) + 8;
                    v169 = 0;
                    *(_QWORD *)(v105 - 8) = 2;
                    src = (_DWORD *)v105;
LABEL_120:
                    while ( 1 )
                    {
                      v111 = *(_DWORD *)(v105 - 8);
                      if ( v111 >= v106 )
                        break;
                      v107 = (3 * v111 + 1) >> 1;
                      v108 = 4 * v107 + 8;
                      v109 = v107;
                      if ( 4 * v111 + 8 >= v108 || v111 >= v107 )
                      {
                        v157 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v179, "Overflow encountered when expanding vector");
                        *v157 = (char *)off_1C63128;
                        sub_2333C0(v157 + 1, v179);
                        sub_233E40((__int64)v179);
                        __cxa_throw(
                          v157,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v110 = (unsigned int *)sub_186B300(src - 2, v108);
                      *v110 = v109;
                      src = v110 + 2;
                      v105 = (__int64)(v110 + 2);
                    }
                    v112 = 4LL * v169;
                    *(src - 1) = v106;
                    v113 = 4LL * v106;
                    if ( v112 != v113 )
                      memset(&src[(unsigned __int64)v112 / 4], 0, v113 - v112);
                  }
                  src[(unsigned __int64)v26 / 4] |= 1 << v104;
                }
                v46 = (unsigned int *)a1[6];
                v114 = (unsigned int **)(*a1 + 8 * v104);
                v115 = *v114;
                v116 = *v114;
                if ( *v114 && *(v115 - 1) )
                {
                  if ( !v46 )
                  {
                    v117 = (_QWORD *)sub_186B270(0x10u);
                    i = 0;
                    v46 = (unsigned int *)(v117 + 1);
                    *v117 = 2;
                    a1[6] = v117 + 1;
                    v116 = *v114;
                    v119 = (unsigned int *)(v117 + 1);
                    goto LABEL_128;
                  }
                  for ( i = 0; ; v115 = &v116[i] )
                  {
                    v120 = *(v46 - 1);
                    if ( (_DWORD)v120 == *(v46 - 2) )
                    {
                      v121 = (unsigned int)(3 * v120 + 1) >> 1;
                      v122 = 4 * v121 + 8;
                      if ( 4 * (int)v120 + 8 >= v122 || (unsigned int)v120 >= v121 )
                      {
                        v156 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v179, "Overflow encountered when expanding vector");
                        *v156 = (char *)off_1C63128;
                        sub_2333C0(v156 + 1, v179);
                        sub_233E40((__int64)v179);
                        __cxa_throw(
                          v156,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v123 = (unsigned int *)sub_186B300(v46 - 2, v122);
                      v46 = v123 + 2;
                      *v123 = v121;
                      v124 = v123[1];
                      a1[6] = v46;
                      v116 = *v114;
                      v119 = &v46[v124];
                    }
                    else
                    {
                      v119 = &v46[v120];
                    }
LABEL_128:
                    ++i;
                    *v119 = *v115;
                    ++*(v46 - 1);
                    if ( !v116 || i >= *(v116 - 1) )
                      break;
                  }
                  goto LABEL_75;
                }
LABEL_41:
                if ( !v46 )
                  goto LABEL_42;
LABEL_75:
                ++v163;
              }
              while ( v163 < *(v46 - 1) );
              v66 = *(v46 - 1);
              v168 = (unsigned int)(v66 - 1);
              if ( v66 )
              {
                while ( 1 )
                {
                  v77 = v46[v168];
                  v78 = (_QWORD *)a1[5];
                  v79 = v46[v168] >> 5;
                  if ( v78 )
                  {
                    v80 = *((_DWORD *)v78 - 1);
                    if ( v79 < v80 )
                    {
                      v67 = 4LL * v79;
                      v68 = 1 << v77;
                      v69 = (int *)((char *)v78 + v67);
                      v70 = *(_DWORD *)((char *)v78 + v67);
                      if ( ((1 << v77) & v70) != 0 )
                        goto LABEL_85;
                      goto LABEL_79;
                    }
                    v81 = v79 + 1;
                  }
                  else
                  {
                    v81 = v79 + 1;
                    v103 = (_QWORD *)sub_186B270(0x10u);
                    v78 = v103 + 1;
                    v80 = 0;
                    *v103 = 2;
                    a1[5] = v103 + 1;
                  }
                  while ( 1 )
                  {
                    v86 = *((_DWORD *)v78 - 2);
                    if ( v86 >= v81 )
                      break;
                    v82 = (3 * v86 + 1) >> 1;
                    v83 = 4 * v82 + 8;
                    v84 = v82;
                    if ( 4 * v86 + 8 >= (unsigned int)v83 || v86 >= v82 )
                    {
                      v153 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v179, "Overflow encountered when expanding vector");
                      *v153 = (char *)off_1C63128;
                      sub_2333C0(v153 + 1, v179);
                      sub_233E40((__int64)v179);
                      __cxa_throw(
                        v153,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v85 = (unsigned int *)sub_186B300(v78 - 1, v83);
                    v78 = v85 + 2;
                    *v85 = v84;
                    a1[5] = v85 + 2;
                  }
                  v87 = v81;
                  *((_DWORD *)v78 - 1) = v81;
                  v88 = 4LL * v80;
                  v67 = 4LL * v79;
                  v89 = 4 * v87;
                  v68 = 1 << v77;
                  v69 = (int *)((char *)v78 + v67);
                  if ( v88 != v89 )
                    memset((char *)v78 + v88, 0, v89 - v88);
                  v70 = *v69;
LABEL_79:
                  *v69 = v70 | v68;
                  v71 = a1[1];
                  v72 = (unsigned int)v77 ^ 1;
                  v73 = (unsigned int **)(v71 + 8 * v77);
                  if ( v79 < *(v170 - 1) && (v170[(unsigned __int64)v67 / 4] & (1 << (v77 ^ 1))) != 0 )
                  {
                    v74 = *v73;
                    if ( *v73 )
                    {
                      v75 = *(v74 - 1);
                      if ( (_DWORD)v75 == *(v74 - 2) )
                      {
                        v127 = (unsigned int)(3 * v75 + 1) >> 1;
                        v128 = 4 * v127 + 8;
                        if ( 4 * (int)v75 + 8 >= v128 || (unsigned int)v75 >= v127 )
                        {
                          v158 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(v179, "Overflow encountered when expanding vector");
                          *v158 = (char *)off_1C63128;
                          sub_2333C0(v158 + 1, v179);
                          sub_233E40((__int64)v179);
                          __cxa_throw(
                            v158,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v129 = (unsigned int *)sub_186B300(v74 - 2, v128);
                        v74 = v129 + 2;
                        *v73 = v129 + 2;
                        *v129 = v127;
                        v76 = &v129[v129[1] + 2];
                      }
                      else
                      {
                        v76 = &v74[v75];
                      }
                    }
                    else
                    {
                      v150 = (_QWORD *)sub_186B270(0x10u);
                      v74 = (unsigned int *)(v150 + 1);
                      *v150 = 2;
                      v76 = v74;
                      *v73 = v74;
                    }
                    *v76 = v72;
                    ++*(v74 - 1);
                  }
                  else
                  {
                    v90 = *(unsigned int **)(*a1 + 8 * v72);
                    if ( v90 )
                    {
                      v164 = &v90[*(v90 - 1)];
                      if ( v90 != v164 )
                      {
                        v91 = *(unsigned int **)(*a1 + 8 * v72);
                        while ( 1 )
                        {
                          v92 = 0;
                          v93 = (__int64 *)(v71 + 8LL * *v91);
                          for ( j = *v93; j; ++*(v95 - 1) )
                          {
                            if ( v92 >= *(_DWORD *)(j - 4) )
                              break;
                            v95 = *v73;
                            v96 = (unsigned int *)(j + 4LL * v92);
                            if ( *v73 )
                            {
                              v97 = *(v95 - 1);
                              v98 = &v95[v97];
                              if ( (_DWORD)v97 == *(v95 - 2) )
                              {
                                v99 = (unsigned int)(3 * v97 + 1) >> 1;
                                v100 = 4 * v99 + 8;
                                if ( 4 * (int)v97 + 8 >= (unsigned int)v100 || (unsigned int)v97 >= v99 )
                                {
                                  v152 = (char **)__cxa_allocate_exception(0x28u);
                                  sub_24ABB0(v179, "Overflow encountered when expanding vector");
                                  *v152 = (char *)off_1C63128;
                                  sub_2333C0(v152 + 1, v179);
                                  sub_233E40((__int64)v179);
                                  __cxa_throw(
                                    v152,
                                    (struct type_info *)&`typeinfo for'default_exception,
                                    (void (*)(void *))sub_230E50);
                                }
                                v101 = (unsigned int *)sub_186B300(v95 - 2, v100);
                                v95 = v101 + 2;
                                *v73 = v101 + 2;
                                j = *v93;
                                *v101 = v99;
                                v98 = &v101[v101[1] + 2];
                              }
                            }
                            else
                            {
                              v102 = (_QWORD *)sub_186B270(0x10u);
                              v95 = (unsigned int *)(v102 + 1);
                              v98 = (unsigned int *)(v102 + 1);
                              *v102 = 2;
                              *v73 = (unsigned int *)(v102 + 1);
                              j = *v93;
                            }
                            ++v92;
                            *v98 = *v96;
                          }
                          if ( v164 == ++v91 )
                            break;
                          v71 = a1[1];
                        }
                      }
                    }
                  }
LABEL_85:
                  if ( --v168 == -1 )
                    break;
                  v46 = (unsigned int *)a1[6];
                }
              }
LABEL_42:
              if ( src )
              {
                v47 = *(src - 1);
                v161 = *(src - 2);
                v48 = sub_186B270(4LL * v161 + 8);
                v49 = v48 + 8;
                v50 = 4LL * (unsigned int)*(src - 1);
                *(_QWORD *)v48 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v161), _mm_cvtsi32_si128(v47)).m128i_u64[0];
                if ( v50 <= 4 )
                {
                  if ( v50 == 4 )
                    *(_DWORD *)(v48 + 8) = *src;
                }
                else
                {
                  memcpy((void *)(v48 + 8), src, v50);
                }
              }
              else
              {
                v49 = 0;
              }
              v51 = a3[2];
              v52 = a3[4];
              v176 = 2 * v51;
              if ( 3 * (int)v51 < 4 * (v52 + a3[3]) )
              {
                v132 = 24LL * v176;
                v167 = v132;
                v133 = sub_186B270(v132);
                v53 = v133;
                if ( v176 )
                {
                  v134 = (_QWORD *)v133;
                  do
                  {
                    *v134 = 0;
                    v134 += 3;
                    *(v134 - 1) = 0;
                  }
                  while ( v134 != (_QWORD *)(v133 + 24LL * v176) );
                }
                v54 = v133 + v132;
                v135 = a3[2];
                v136 = (_QWORD *)(*(_QWORD *)a3 + 16LL);
                v137 = (char *)(*(_QWORD *)a3 + 24 * v135);
                v162 = v176 - 1;
                if ( *(char **)a3 == v137 )
                {
LABEL_177:
                  if ( v137 )
                  {
                    if ( (_DWORD)v135 )
                    {
                      v145 = v137;
                      v146 = &v137[24 * v135];
                      do
                      {
                        while ( 1 )
                        {
                          v147 = *((_QWORD *)v145 + 2);
                          if ( !v147 )
                            break;
                          v145 += 24;
                          sub_186B220((void *)(v147 - 8));
                          if ( v146 == v145 )
                            goto LABEL_182;
                        }
                        v145 += 24;
                      }
                      while ( v145 != v146 );
                    }
LABEL_182:
                    sub_186B220(v137);
                  }
                  v52 = 0;
                  *(_QWORD *)a3 = v53;
                  a3[2] = v176;
                  a3[4] = 0;
                  goto LABEL_47;
                }
                while ( 1 )
                {
                  if ( *((_DWORD *)v136 - 3) != 2 )
                  {
LABEL_165:
                    v138 = v136 + 3;
                    if ( v137 == (char *)(v136 + 1) )
                      goto LABEL_176;
                    goto LABEL_166;
                  }
                  v139 = *((_DWORD *)v136 - 4);
                  v140 = 24LL * (v139 & v162);
                  v141 = v53 + v140;
                  if ( v132 == v140 )
                  {
LABEL_190:
                    if ( v53 == v141 )
                    {
LABEL_201:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v142 = v53;
                    while ( *(_DWORD *)(v142 + 4) )
                    {
                      v142 += 24;
                      if ( v141 == v142 )
                        goto LABEL_201;
                    }
                    *(_DWORD *)v142 = v139;
                    v149 = *((_DWORD *)v136 - 2);
                    *(_DWORD *)(v142 + 4) = 2;
                    *(_DWORD *)(v142 + 8) = v149;
                    if ( v136 == (_QWORD *)(v142 + 16) )
                      goto LABEL_165;
                    v144 = *(_QWORD *)(v142 + 16);
                    if ( v144 )
                      goto LABEL_174;
                  }
                  else
                  {
                    v142 = v53 + v140;
                    while ( *(_DWORD *)(v142 + 4) )
                    {
                      v142 += 24;
                      if ( v54 == v142 )
                        goto LABEL_190;
                    }
                    *(_DWORD *)v142 = v139;
                    v143 = *((_DWORD *)v136 - 2);
                    *(_DWORD *)(v142 + 4) = 2;
                    *(_DWORD *)(v142 + 8) = v143;
                    if ( v136 == (_QWORD *)(v142 + 16) )
                      goto LABEL_165;
                    v144 = *(_QWORD *)(v142 + 16);
                    if ( v144 )
                    {
LABEL_174:
                      v178 = v142;
                      sub_186B220((void *)(v144 - 8));
                      v142 = v178;
                    }
                  }
                  *(_QWORD *)(v142 + 16) = 0;
                  *(_QWORD *)(v142 + 16) = *v136;
                  v138 = v136 + 3;
                  *v136 = 0;
                  if ( v137 == (char *)(v136 + 1) )
                  {
LABEL_176:
                    v135 = a3[2];
                    v137 = *(char **)a3;
                    goto LABEL_177;
                  }
LABEL_166:
                  v136 = v138;
                }
              }
              v53 = *(_QWORD *)a3;
              v162 = v51 - 1;
              v167 = 24 * v51;
              v54 = *(_QWORD *)a3 + 24 * v51;
LABEL_47:
              v55 = 24LL * (v174 & v162);
              v56 = v53 + v55;
              if ( v55 == v167 )
              {
                v58 = 0;
              }
              else
              {
                v57 = v53 + v55;
                v58 = 0;
                do
                {
                  v59 = *(_DWORD *)(v57 + 4);
                  if ( v59 == 2 )
                  {
                    if ( v174 == *(_DWORD *)v57 && v174 == *(_DWORD *)(v57 + 8) )
                    {
                      *(_DWORD *)(v57 + 8) = v174;
                      v60 = *(_QWORD *)(v57 + 16);
                      if ( v60 )
                        sub_186B220((void *)(v60 - 8));
                      *(_QWORD *)(v57 + 16) = v49;
                      *(_DWORD *)(v57 + 4) = 2;
                      goto LABEL_58;
                    }
                  }
                  else
                  {
                    if ( !v59 )
                    {
                      if ( v58 )
                        a3[4] = v52 - 1;
                      else
                        v58 = v57;
                      *(_DWORD *)(v58 + 8) = v174;
                      v131 = *(_QWORD *)(v58 + 16);
                      if ( v131 )
                        goto LABEL_158;
                      goto LABEL_159;
                    }
                    v58 = v57;
                  }
                  v57 += 24;
                }
                while ( v57 != v54 );
              }
              if ( v56 == v53 )
              {
LABEL_186:
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              while ( 1 )
              {
                v125 = *(_DWORD *)(v53 + 4);
                if ( v125 != 2 )
                  break;
                if ( v174 == *(_DWORD *)v53 && v174 == *(_DWORD *)(v53 + 8) )
                {
                  v126 = *(_QWORD *)(v53 + 16);
                  *(_DWORD *)(v53 + 8) = v174;
                  if ( v126 )
                    sub_186B220((void *)(v126 - 8));
                  *(_QWORD *)(v53 + 16) = v49;
                  *(_DWORD *)(v53 + 4) = 2;
                  goto LABEL_58;
                }
LABEL_142:
                v53 += 24;
                if ( v56 == v53 )
                  goto LABEL_186;
              }
              if ( v125 )
              {
                v58 = v53;
                goto LABEL_142;
              }
              if ( v58 )
                a3[4] = v52 - 1;
              else
                v58 = v53;
              *(_DWORD *)(v58 + 8) = v174;
              v131 = *(_QWORD *)(v58 + 16);
              if ( !v131 )
                goto LABEL_159;
LABEL_158:
              sub_186B220((void *)(v131 - 8));
LABEL_159:
              *(_QWORD *)(v58 + 16) = v49;
              *(_DWORD *)(v58 + 4) = 2;
              *(_DWORD *)v58 = v174;
              ++a3[3];
LABEL_58:
              if ( src )
                sub_186B220(src - 2);
              if ( v177 == ++v172 )
              {
LABEL_61:
                sub_186B220(v170 - 2);
                return;
              }
            }
          }
          v15 = *v3;
          v6 = *v3 >> 5;
        }
        while ( v6 < *(v170 - 1) );
        v160 = *(v170 - 1);
        LOBYTE(v4) = *v3;
        v5 = (__int64)v170;
        v7 = v6 + 1;
      }
    }
  }
}

