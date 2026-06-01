const void **__fastcall sub_21AE0(_WORD *a1, size_t a2, _QWORD *a3)
{
  const void **v3; // rbp
  unsigned __int64 v5; // rax
  size_t v6; // r12
  void *v7; // rdi
  size_t v8; // rax
  char *i; // rdx
  char v10; // cl
  unsigned __int64 v11; // rax
  char *v12; // rdx
  _QWORD *v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  size_t v16; // rax
  char *v17; // rdx
  unsigned __int64 v18; // r12
  size_t v19; // rax
  _WORD *v20; // rdx
  char v21; // si
  char *v22; // rdi
  unsigned int v23; // ecx
  size_t v24; // rax
  size_t v25; // rax
  char *v26; // rdi
  unsigned __int64 v27; // rax
  _QWORD *v28; // rdi
  __int16 v29; // si
  char *v30; // rdx
  _QWORD *v31; // r12
  size_t v32; // rax
  char *v33; // rcx
  unsigned __int64 v34; // rax
  char v35; // dl
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r15
  int v39; // edx
  int v40; // ecx
  __int64 v41; // r8
  unsigned __int64 v42; // r12
  int v43; // edx
  int v44; // ecx
  __int64 v45; // r8
  unsigned __int64 v46; // r13
  __int64 v47; // r14
  size_t v48; // rax
  char *v49; // rcx
  unsigned __int64 v50; // rax
  char v51; // dl
  unsigned __int64 v52; // rax
  size_t v53; // rcx
  char v54; // si
  char v55; // al
  size_t v56; // rax
  char *v57; // rdx
  int v58; // eax
  unsigned __int64 v59; // rbx
  _QWORD *v60; // r13
  unsigned __int64 v61; // rax
  _QWORD *v62; // r13
  unsigned __int64 v63; // rax
  _QWORD *v64; // r13
  unsigned __int64 v65; // rax
  char v66; // bl
  size_t v67; // rax
  char *v68; // rdx
  char v69; // bl
  __int64 v70; // r13
  _QWORD *v71; // rax
  volatile signed __int32 *v72; // rax
  char *v73; // rdi
  int v74; // edx
  int v75; // eax
  unsigned __int64 v76; // rbx
  _QWORD *v77; // r13
  unsigned __int64 v78; // rax
  size_t v79; // r14
  _QWORD *v80; // r13
  void *v81; // r8
  unsigned __int64 v82; // rax
  int v83; // eax
  _QWORD *v84; // r13
  unsigned __int64 v85; // rax
  size_t v86; // r14
  _QWORD *v87; // r13
  void *v88; // r8
  unsigned __int64 v89; // rax
  char *v90; // rdx
  int v91; // ecx
  __int64 v92; // r8
  unsigned __int64 v93; // rbp
  size_t v94; // rax
  char *v95; // r13
  int v96; // eax
  size_t v97; // rax
  char *v98; // rdx
  char v99; // bl
  __int64 v100; // r13
  _QWORD *v101; // rax
  _QWORD *v102; // r13
  unsigned __int64 v103; // rax
  void *v104; // rbp
  _QWORD *v105; // r13
  void *v106; // r8
  size_t v107; // r14
  unsigned __int64 v108; // rax
  char *v109; // r8
  const void *v110; // rbp
  char *v111; // rax
  unsigned __int64 v112; // rbx
  size_t v113; // rbx
  _QWORD *v114; // rax
  char *v115; // r8
  const void *v116; // rbp
  char *v117; // rax
  unsigned __int64 v118; // rbx
  size_t v119; // rbx
  _QWORD *v120; // rax
  void *v121; // r13
  _QWORD *v122; // rbp
  char *v123; // r8
  char *v124; // rax
  void *v125; // rax
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rbx
  size_t v128; // rbx
  _QWORD *v129; // rax
  char *v130; // r8
  char *v131; // rax
  unsigned __int64 v132; // rbx
  size_t v133; // rbx
  _QWORD *v134; // rax
  _QWORD *v135; // r13
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rbx
  size_t v138; // rbx
  _QWORD *v139; // rax
  std::string *v140; // [rsp+0h] [rbp-B8h]
  std::string *v141; // [rsp+8h] [rbp-B0h]
  char v142[4]; // [rsp+20h] [rbp-98h]
  int v143; // [rsp+24h] [rbp-94h]
  int v144; // [rsp+28h] [rbp-90h]
  int v145; // [rsp+2Ch] [rbp-8Ch]
  char v146; // [rsp+37h] [rbp-81h] BYREF
  void *v147; // [rsp+38h] [rbp-80h] BYREF
  void *v148; // [rsp+40h] [rbp-78h] BYREF
  void *v149; // [rsp+48h] [rbp-70h]
  __int64 v150; // [rsp+50h] [rbp-68h]
  void *src; // [rsp+58h] [rbp-60h]
  size_t n; // [rsp+60h] [rbp-58h]
  _QWORD *v153; // [rsp+68h] [rbp-50h]
  unsigned __int64 v154; // [rsp+78h] [rbp-40h]

  v154 = __readfsqword(0x28u);
  src = a1;
  v148 = nullptr;
  v149 = nullptr;
  v150 = 0;
  n = a2;
  v153 = a3;
  if ( a2 <= 1 || *a1 != 21599 )
    return nullptr;
  n = a2 - 2;
  src = a1 + 1;
  v141 = (std::string *)sub_C400(a3, 96);
  if ( a2 - 2 <= 1 )
    goto LABEL_6;
  if ( *(_WORD *)src != 21332 )
  {
    switch ( *(_WORD *)src )
    {
      case 0x6F54:
        src = (char *)src + 2;
        n -= 2LL;
        v52 = sub_C400(v153, 154);
        break;
      case 0x4F54:
        src = (char *)src + 2;
        n -= 2LL;
        v52 = sub_C400(v153, 150);
        break;
      case 0x4454:
        src = (char *)src + 2;
        n -= 2LL;
        v52 = sub_C400(v153, 52);
        break;
      case 0x6454:
        src = (char *)src + 2;
        n -= 2LL;
        v52 = sub_C400(v153, 53);
        break;
      case 0x5654:
        src = (char *)src + 2;
        n -= 2LL;
        v52 = sub_C400(v153, 245);
        break;
      default:
LABEL_6:
        v5 = sub_21170(&v148, 0);
        v3 = (const void **)v5;
        if ( v5 && (v3 = (const void **)v141, sub_C080((__int64)v141, v5, v153), (v6 = n) != 0) )
        {
          v121 = src;
          v122 = v153;
          n = 0;
          src = (char *)src + v6;
          v123 = (char *)v153[1];
          if ( !v123 || (v124 = &v123[v6], (unsigned __int64)&v123[v6] > v153[2]) )
          {
            v127 = 2LL * v153[4];
            if ( v127 < v6 + 1 )
              v127 = v6 + 1;
            v153[4] = v127;
            v128 = v127 + 8;
            v129 = malloc(v128);
            v123 = (char *)(v129 + 1);
            *v129 = v122[3];
            v122[3] = v129;
            v122[2] = (char *)v129 + v128;
            v124 = (char *)v129 + v6 + 8;
          }
          v122[1] = v124;
          v125 = memmove(v123, v121, v6);
          v126 = sub_C510(v122, 210, (__int64)v125, v6);
          sub_C080((__int64)v141, v126, v153);
          v7 = v148;
          v3 = (const void **)v141;
        }
        else
        {
LABEL_8:
          v7 = v148;
        }
        goto LABEL_9;
    }
    sub_C080((__int64)v141, v52, v153);
    goto LABEL_6;
  }
  v8 = n - 2;
  for ( i = (char *)src + 2; ; i = (char *)src + 4 )
  {
    src = i;
    n = v8;
    if ( !v8 )
      goto LABEL_41;
    v10 = *i;
    if ( *i == 103 )
    {
      v28 = v153;
      v29 = 88;
      src = i + 1;
      n = v8 - 1;
    }
    else
    {
      if ( v10 != 114 )
      {
        if ( v10 != 102 )
        {
LABEL_41:
          v7 = v148;
          goto LABEL_42;
        }
        src = i + 1;
        n = v8 - 1;
        v11 = sub_C400(v153, 74);
        v12 = (char *)src;
        v13 = v153;
        v140 = (std::string *)v11;
        if ( !n )
          goto LABEL_18;
        v48 = n - 1;
        v49 = (char *)src + 1;
        if ( *(_BYTE *)src == 113 )
        {
          src = (char *)src + 1;
          --n;
          v50 = sub_C400(v153, 206);
          sub_C080((__int64)v140, v50, v13);
          v13 = v153;
          if ( !n )
          {
LABEL_18:
            v14 = 4294967294LL;
LABEL_19:
            v15 = sub_C480(v13, 205, v14);
            sub_C080((__int64)v140, v15, v13);
            while ( 1 )
            {
              v16 = n;
              if ( n )
              {
                v17 = (char *)src;
                if ( *(_BYTE *)src == 95 )
                  goto LABEL_52;
              }
              v18 = sub_C400(v153, 75);
              v19 = n;
              v20 = src;
              if ( n <= 1 )
              {
                if ( !n )
                  goto LABEL_41;
                v21 = *(_BYTE *)src;
                if ( *(_BYTE *)src == 100 || v21 == 103 )
                {
                  n = 0;
                  src = (char *)src + 1;
                  goto LABEL_41;
                }
                v23 = 0;
                goto LABEL_96;
              }
              if ( *(_WORD *)src == 24430 )
              {
                src = (char *)src + 2;
                n -= 2LL;
                goto LABEL_88;
              }
              if ( *(_WORD *)src != 28771 )
              {
                switch ( *(_WORD *)src )
                {
                  case 0x6C63:
                    n -= 2LL;
                    v83 = *(_DWORD *)v142;
                    src = (char *)src + 2;
                    LOBYTE(v83) = 0;
                    *(_DWORD *)v142 = v83;
                    v3 = (const void **)sub_1B300(&v148, v83, 0);
                    if ( !v3 )
                      goto LABEL_8;
                    v84 = v153;
                    v85 = sub_C480(v153, 77, 5);
                    sub_C080(v18, v85, v84);
                    v86 = (size_t)v3[1];
                    v87 = v153;
                    v88 = nullptr;
                    if ( v86 )
                    {
                      v109 = (char *)v153[1];
                      v110 = *v3;
                      if ( !v109 || (v111 = &v109[v86], (unsigned __int64)&v109[v86] > v153[2]) )
                      {
                        v112 = 2LL * v153[4];
                        if ( v112 < v86 + 1 )
                          v112 = v86 + 1;
                        v153[4] = v112;
                        v113 = v112 + 8;
                        v114 = malloc(v113);
                        v109 = (char *)(v114 + 1);
                        *v114 = v87[3];
                        v87[3] = v114;
                        v87[2] = (char *)v114 + v113;
                        v111 = (char *)v114 + v86 + 8;
                      }
                      v87[1] = v111;
                      v88 = memmove(v109, v110, v86);
                    }
                    v89 = sub_C510(v87, 78, (__int64)v88, v86);
                    sub_C080(v18, v89, v87);
                    while ( 1 )
                    {
                      v94 = n;
                      if ( n )
                      {
                        v90 = (char *)src;
                        if ( *(_BYTE *)src == 95 )
                          goto LABEL_151;
                      }
                      v95 = sub_1C940(&v148, 3u, (_DWORD)v90, v91, v92);
                      if ( !v95 )
                        break;
                      v93 = sub_C400(v153, 221);
                      sub_C080(v93, (__int64)v95, v153);
                      if ( !v93 )
                        break;
                      sub_C080(v18, v93, v153);
                    }
                    v94 = n;
                    if ( n )
                    {
                      v90 = (char *)src;
                      if ( *(_BYTE *)src == 95 )
                      {
LABEL_151:
                        src = v90 + 1;
                        n = v94 - 1;
                        goto LABEL_88;
                      }
                    }
                    goto LABEL_41;
                  case 0x5F69:
                    src = (char *)src + 2;
                    n -= 2LL;
                    v27 = sub_C480(v153, 77, 6);
                    goto LABEL_86;
                  case 0x5F6B:
                    src = (char *)src + 2;
                    n -= 2LL;
                    v27 = sub_C480(v153, 77, 7);
                    goto LABEL_86;
                  case 0x5F72:
                    src = (char *)src + 2;
                    n -= 2LL;
                    v27 = sub_C480(v153, 77, 8);
                    goto LABEL_86;
                }
                v21 = *(_BYTE *)src;
                if ( *(_BYTE *)src == 100 )
                {
                  v19 = n - 1;
                  v22 = (char *)src + 1;
                  v23 = 64;
                  src = (char *)src + 1;
                  --n;
                  v21 = *((_BYTE *)v20 + 1);
                }
                else
                {
                  v22 = (char *)src;
                  v23 = 0;
                }
                if ( v21 == 103 )
                {
                  v24 = v19 - 1;
                  v20 = v22 + 1;
                  LOBYTE(v23) = v23 | 0x80;
                  src = v22 + 1;
                  n = v24;
                  if ( !v24 )
                    goto LABEL_41;
                  v21 = v22[1];
LABEL_34:
                  if ( v21 == 111 )
                  {
                    v25 = v24 - 1;
                    v26 = (char *)v20 + 1;
                    BYTE1(v23) |= 2u;
                    src = (char *)v20 + 1;
                    n = v25;
                    if ( !v25 )
                      goto LABEL_41;
                    v21 = *((_BYTE *)v20 + 1);
                  }
                  else
                  {
                    v25 = n;
                    v26 = (char *)v20;
                  }
                  if ( v21 == 115 )
                  {
                    BYTE1(v23) |= 1u;
                    src = v26 + 1;
                    n = v25 - 1;
                    if ( v25 == 1 || v26[1] != 95 )
                      goto LABEL_41;
                    src = v26 + 2;
                    n = v25 - 2;
                  }
                  else
                  {
                    if ( v21 != 95 )
                      goto LABEL_41;
                    src = v26 + 1;
                    --n;
                    if ( !v23 )
                      goto LABEL_41;
                  }
                  v27 = sub_C480(v153, 77, v23);
LABEL_86:
                  v3 = (const void **)v27;
                  if ( !v27 )
                    goto LABEL_8;
                  sub_C080(v18, v27, v153);
                  goto LABEL_88;
                }
                v20 = v22;
LABEL_96:
                v24 = n;
                goto LABEL_34;
              }
              v53 = n - 2;
              src = (char *)src + 2;
              n -= 2LL;
              if ( v19 - 2 <= 1 )
              {
                if ( v19 == 2 )
                  goto LABEL_41;
              }
              else if ( v20[1] == 29286 )
              {
                n = v19 - 4;
                v75 = v143;
                src = v20 + 2;
                LOBYTE(v75) = 0;
                v143 = v75;
                v76 = sub_1B300(&v148, v75, 0);
                if ( !v76 || !n || *(_BYTE *)src != 95 )
                  goto LABEL_41;
                v77 = v153;
                src = (char *)src + 1;
                --n;
                v78 = sub_C480(v153, 77, 0);
                goto LABEL_139;
              }
              v54 = *((_BYTE *)v20 + 2);
              if ( v54 == 103 )
              {
                n = v19 - 3;
                v96 = v144;
                src = (char *)v20 + 3;
                LOBYTE(v96) = 0;
                v144 = v96;
                v76 = sub_1B300(&v148, v96, 0);
                if ( !v76 || !n || *(_BYTE *)src != 95 )
                  goto LABEL_41;
                v77 = v153;
                src = (char *)src + 1;
                --n;
                v78 = sub_C480(v153, 77, 1);
LABEL_139:
                sub_C080(v18, v78, v77);
                v79 = *(_QWORD *)(v76 + 8);
                v80 = v153;
                v81 = nullptr;
                if ( v79 )
                {
                  v115 = (char *)v153[1];
                  v116 = *(const void **)v76;
                  if ( !v115 || (v117 = &v115[v79], (unsigned __int64)&v115[v79] > v153[2]) )
                  {
                    v118 = 2LL * v153[4];
                    if ( v118 < v79 + 1 )
                      v118 = v79 + 1;
                    v153[4] = v118;
                    v119 = v118 + 8;
                    v120 = malloc(v119);
                    v115 = (char *)(v120 + 1);
                    *v120 = v80[3];
                    v80[3] = v120;
                    v80[2] = (char *)v120 + v119;
                    v117 = (char *)v120 + v79 + 8;
                  }
                  v80[1] = v117;
                  v81 = memmove(v115, v116, v79);
                }
                v82 = sub_C510(v80, 78, (__int64)v81, v79);
                sub_C080(v18, v82, v80);
                goto LABEL_88;
              }
              if ( v54 != 105 )
                break;
              v97 = v19 - 3;
              v98 = (char *)v20 + 3;
              src = v98;
              n = v97;
              v147 = &std::string::_Rep::_S_empty_rep_storage + 3;
              if ( !v97 )
                goto LABEL_41;
              v99 = *v98;
              if ( *v98 == 95 )
              {
LABEL_168:
                v102 = v153;
                src = v98 + 1;
                n = v97 - 1;
                v103 = sub_C480(v153, 77, 2);
                sub_C080(v18, v103, v102);
                v104 = v147;
                v105 = v153;
                v106 = nullptr;
                v107 = *((_QWORD *)v147 - 3);
                if ( !v107 )
                {
LABEL_169:
                  v108 = sub_C510(v105, 78, (__int64)v106, v107);
                  sub_C080(v18, v108, v105);
                  v72 = (volatile signed __int32 *)v147;
                  v73 = (char *)v147 - 24;
                  if ( (char *)v147 - 24 == (char *)&std::string::_Rep::_S_empty_rep_storage )
                    goto LABEL_88;
                  v66 = 1;
                  goto LABEL_131;
                }
                v130 = (char *)v153[1];
                if ( !v130 || (v131 = &v130[v107], (unsigned __int64)&v130[v107] > v153[2]) )
                {
                  v132 = 2LL * v153[4];
                  if ( v132 < v107 + 1 )
                    v132 = v107 + 1;
                  v153[4] = v132;
                  v133 = v132 + 8;
                  v134 = malloc(v133);
                  v130 = (char *)(v134 + 1);
                  *v134 = v105[3];
                  v105[3] = v134;
                  v105[2] = (char *)v134 + v133;
                  v131 = (char *)v134 + v107 + 8;
                }
LABEL_198:
                v105[1] = v131;
                v106 = memmove(v130, v104, v107);
                goto LABEL_169;
              }
              while ( 1 )
              {
                v100 = *((_QWORD *)v147 - 3);
                if ( (unsigned __int64)(v100 + 1) > *((_QWORD *)v147 - 2) || *((int *)v147 - 2) > 0 )
                  std::string::reserve((std::string *)&v147, v100 + 1);
                *((_BYTE *)v147 + *((_QWORD *)v147 - 3)) = v99;
                v101 = v147;
                if ( (char *)v147 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
                {
                  *((_DWORD *)v147 - 2) = 0;
                  *(v101 - 3) = v100 + 1;
                  *((_BYTE *)v101 + v100 + 1) = 0;
                }
                if ( !n )
                  break;
                v97 = n - 1;
                n = v97;
                v98 = (char *)src + 1;
                src = (char *)src + 1;
                if ( !v97 )
                  break;
                v99 = *v98;
                if ( *v98 == 95 )
                  goto LABEL_168;
              }
LABEL_129:
              v72 = (volatile signed __int32 *)v147;
              v73 = (char *)v147 - 24;
              if ( (char *)v147 - 24 == (char *)&std::string::_Rep::_S_empty_rep_storage )
                goto LABEL_41;
              v66 = 0;
LABEL_131:
              if ( &_pthread_key_create )
              {
                v74 = _InterlockedExchangeAdd(v72 - 2, 0xFFFFFFFF);
              }
              else
              {
                v74 = *((_DWORD *)v72 - 2);
                *((_DWORD *)v72 - 2) = v74 - 1;
              }
              if ( v74 <= 0 )
                std::string::_Rep::_M_destroy(v73, &v146);
LABEL_118:
              if ( !v66 )
                goto LABEL_41;
LABEL_88:
              sub_C080((__int64)v140, v18, v153);
            }
            if ( v53 <= 1 )
            {
              if ( *((_BYTE *)v20 + 2) == 115 )
              {
                n = 0;
                src = (char *)v20 + 3;
              }
              goto LABEL_41;
            }
            if ( v20[1] != 27750 )
            {
              if ( v54 != 115 )
                goto LABEL_41;
              src = (char *)v20 + 3;
              n = v19 - 3;
              if ( *((_BYTE *)v20 + 3) != 101 )
                goto LABEL_41;
              src = v20 + 2;
              n = v19 - 4;
              if ( v19 == 4 )
                goto LABEL_41;
              v55 = *((_BYTE *)v20 + 4);
              if ( (unsigned __int8)(v55 - 48) > 1u )
                goto LABEL_41;
              v147 = &std::string::_Rep::_S_empty_rep_storage + 3;
              if ( v55 == 48 )
                std::string::append((std::string *)&v147, "u8", 2u);
              else
                std::string::append((std::string *)&v147, "u16", 3u);
              v56 = n;
              if ( n
                && (v57 = (char *)src, --n, src = (char *)src + 1, v56 != 1)
                && v57[1] == 118
                && (n = v56 - 2,
                    v58 = v145,
                    src = v57 + 2,
                    LOBYTE(v58) = 0,
                    v145 = v58,
                    (v59 = sub_1B300(&v148, v58, 0)) != 0)
                && n
                && *(_BYTE *)src == 95 )
              {
                v60 = v153;
                src = (char *)src + 1;
                --n;
                v61 = sub_C480(v153, 77, 4);
                sub_C080(v18, v61, v60);
                v62 = v153;
                v63 = sub_BAC0(v153, 78, v147, *((_QWORD *)v147 - 3));
                sub_C080(v18, v63, v62);
                v64 = v153;
                v65 = sub_BAC0(v153, 78, *(const void **)v59, *(_QWORD *)(v59 + 8));
                sub_C080(v18, v65, v64);
                v66 = 1;
              }
              else
              {
                v66 = 0;
              }
              if ( (char *)v147 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
                sub_1AA80((__int64)v147 - 24, (__int64)&v146);
              goto LABEL_118;
            }
            v67 = v19 - 4;
            v68 = (char *)(v20 + 2);
            src = v68;
            n = v67;
            v147 = &std::string::_Rep::_S_empty_rep_storage + 3;
            if ( !v67 )
              goto LABEL_41;
            while ( 1 )
            {
              v69 = *v68;
              if ( *v68 == 95 )
                break;
              v70 = *((_QWORD *)v147 - 3);
              if ( (unsigned __int64)(v70 + 1) > *((_QWORD *)v147 - 2) || *((int *)v147 - 2) > 0 )
                std::string::reserve((std::string *)&v147, v70 + 1);
              *((_BYTE *)v147 + *((_QWORD *)v147 - 3)) = v69;
              v71 = v147;
              if ( (char *)v147 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
              {
                *((_DWORD *)v147 - 2) = 0;
                *(v71 - 3) = v70 + 1;
                *((_BYTE *)v71 + v70 + 1) = 0;
              }
              if ( n )
              {
                v67 = n - 1;
                n = v67;
                v68 = (char *)src + 1;
                src = (char *)src + 1;
                if ( v67 )
                  continue;
              }
              goto LABEL_129;
            }
            v135 = v153;
            src = v68 + 1;
            n = v67 - 1;
            v136 = sub_C480(v153, 77, 3);
            sub_C080(v18, v136, v135);
            v104 = v147;
            v105 = v153;
            v106 = nullptr;
            v107 = *((_QWORD *)v147 - 3);
            if ( !v107 )
              goto LABEL_169;
            v130 = (char *)v153[1];
            if ( !v130 || (v131 = &v130[v107], (unsigned __int64)&v130[v107] > v153[2]) )
            {
              v137 = 2LL * v153[4];
              if ( v137 < v107 + 1 )
                v137 = v107 + 1;
              v153[4] = v137;
              v138 = v137 + 8;
              v139 = malloc(v138);
              v130 = (char *)(v139 + 1);
              *v139 = v105[3];
              v105[3] = v139;
              v105[2] = (char *)v139 + v138;
              v131 = (char *)v139 + v107 + 8;
            }
            goto LABEL_198;
          }
          v12 = (char *)src;
          v48 = n - 1;
          v49 = (char *)src + 1;
        }
        v51 = *v12;
        n = v48;
        src = v49;
        v14 = (unsigned int)(v51 - 48);
        goto LABEL_19;
      }
      v28 = v153;
      v29 = 89;
      src = i + 1;
      n = v8 - 1;
    }
    v140 = (std::string *)sub_C400(v28, v29);
    v30 = (char *)src;
    v31 = v153;
    if ( !n )
    {
LABEL_73:
      v36 = 4294967294LL;
      goto LABEL_49;
    }
    v32 = n - 1;
    v33 = (char *)src + 1;
    if ( *(_BYTE *)src == 113 )
    {
      src = (char *)src + 1;
      --n;
      v34 = sub_C400(v153, 206);
      sub_C080((__int64)v140, v34, v31);
      v31 = v153;
      if ( !n )
        goto LABEL_73;
      v30 = (char *)src;
      v32 = n - 1;
      v33 = (char *)src + 1;
    }
    v35 = *v30;
    src = v33;
    n = v32;
    v36 = (unsigned int)(v35 - 48);
LABEL_49:
    v37 = sub_C480(v31, 205, v36);
    sub_C080((__int64)v140, v37, v31);
    while ( 1 )
    {
      v16 = n;
      if ( n )
      {
        v17 = (char *)src;
        if ( *(_BYTE *)src == 95 )
          break;
      }
      v38 = sub_C400(v153, 91);
      v3 = (const void **)sub_1C940(&v148, 2u, v39, v40, v41);
      if ( !v3 )
        goto LABEL_8;
      v42 = sub_C400(v153, 221);
      sub_C080(v42, (__int64)v3, v153);
      while ( 1 )
      {
        if ( !v42 )
          goto LABEL_41;
        sub_C080(v38, v42, v153);
        if ( n )
        {
          v43 = (int)src;
          if ( *(_BYTE *)src == 95 )
            break;
        }
        v3 = (const void **)sub_1C940(&v148, 3u, v43, v44, v45);
        if ( !v3 )
          goto LABEL_8;
        v46 = sub_C400(v153, 221);
        sub_C080(v46, (__int64)v3, v153);
        if ( !v46 )
          goto LABEL_41;
        v3 = (const void **)sub_1F6A0((__int64)&v148, 3u);
        if ( !v3 )
          goto LABEL_8;
        v47 = sub_1F0C0((__int64)&v148, 3);
        if ( !v47 )
          goto LABEL_41;
        v42 = sub_C400(v153, 171);
        sub_C080(v42, v46, v153);
        sub_C080(v42, (__int64)v3, v153);
        sub_C080(v42, v47, v153);
      }
      src = (char *)src + 1;
      --n;
      sub_C080((__int64)v140, v38, v153);
    }
LABEL_52:
    src = v17 + 1;
    n = v16 - 1;
    if ( !v140 )
      goto LABEL_41;
    sub_C080((__int64)v141, (__int64)v140, v153);
    v7 = v148;
    if ( v148 != v149 )
      v149 = v148;
    if ( n <= 3 )
      break;
    if ( *(_DWORD *)src != 1398035551 )
      goto LABEL_57;
    v8 = n - 4;
  }
  if ( n <= 1 )
  {
    v3 = nullptr;
    goto LABEL_9;
  }
LABEL_57:
  if ( *(_WORD *)src == 21599 )
  {
    src = (char *)src + 2;
    n -= 2LL;
    goto LABEL_6;
  }
LABEL_42:
  v3 = nullptr;
LABEL_9:
  if ( v7 )
    operator delete(v7, v150 - (_QWORD)v7);
  return v3;
}

