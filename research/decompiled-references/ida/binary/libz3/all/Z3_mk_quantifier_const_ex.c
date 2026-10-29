__int64 __fastcall Z3_mk_quantifier_const_ex(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7,
        unsigned int a8,
        __int64 *a9,
        unsigned int a10,
        __int64 *a11,
        int a12)
{
  char **v12; // r13
  char **v13; // r13
  char **exception; // r15
  char **v15; // r15
  char **v16; // r13
  char v17; // al
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 *v20; // r13
  __int64 *v21; // rax
  int v22; // edx
  __int64 *v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  _QWORD *v35; // rdx
  _DWORD *v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rdi
  __int64 *v39; // rax
  _QWORD *v40; // rax
  unsigned int v42; // r8d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  unsigned int v47; // edx
  size_t v48; // rsi
  unsigned int *v49; // rax
  unsigned int v50; // r8d
  size_t v51; // rsi
  unsigned int *v52; // rax
  _DWORD *v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  __int64 v56; // rdi
  unsigned __int64 v57; // r14
  _QWORD *v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rsi
  int v61; // eax
  __int64 *v62; // rcx
  __int64 v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rsi
  int v67; // eax
  __int64 *v68; // rcx
  __int64 v69; // rdi
  bool v70; // zf
  __int64 v71; // rdx
  unsigned int v72; // eax
  unsigned int v73; // ecx
  size_t v74; // rsi
  _DWORD *v75; // rax
  unsigned int v76; // ecx
  size_t v77; // rsi
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 *v81; // r13
  __int64 v82; // rdx
  int v83; // eax
  __int64 *v84; // rsi
  __int64 v85; // rdx
  unsigned int v86; // eax
  _DWORD *v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // rsi
  int v90; // eax
  _QWORD *v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // r8
  __int64 v94; // rcx
  unsigned int v95; // eax
  unsigned int v96; // edx
  size_t v97; // rsi
  _DWORD *v98; // rax
  __int64 v99; // rsi
  unsigned int v100; // ecx
  size_t v101; // rsi
  __int64 v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rax
  __int64 *v106; // r15
  unsigned __int64 v107; // rbx
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rsi
  __int64 v111; // rdi
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // [rsp+0h] [rbp-E0h]
  __int64 v117; // [rsp+8h] [rbp-D8h]
  __int64 v118; // [rsp+10h] [rbp-D0h]
  __int64 v119; // [rsp+18h] [rbp-C8h]
  __int64 *v120; // [rsp+20h] [rbp-C0h]
  char v125; // [rsp+47h] [rbp-99h]
  unsigned int v126; // [rsp+48h] [rbp-98h]
  unsigned int v127; // [rsp+48h] [rbp-98h]
  unsigned int v128; // [rsp+48h] [rbp-98h]
  __int64 v130; // [rsp+50h] [rbp-90h]
  char **v131; // [rsp+58h] [rbp-88h]
  char **v132; // [rsp+58h] [rbp-88h]
  __int64 *v133; // [rsp+58h] [rbp-88h]
  _DWORD *v134; // [rsp+58h] [rbp-88h]
  __int64 v136; // [rsp+60h] [rbp-80h]
  __int64 v137; // [rsp+68h] [rbp-78h]
  __int64 v138; // [rsp+80h] [rbp-60h] BYREF
  __int64 v139; // [rsp+88h] [rbp-58h]
  int v140[2]; // [rsp+90h] [rbp-50h] BYREF
  __int64 v141; // [rsp+98h] [rbp-48h]

  v17 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v125 = v17;
  if ( v17 )
    sub_299360(a1, a2, a3, a4, a5, a6, (int)a7);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a8 && a10 )
  {
    sub_24EA30(a1, 0xAu, nullptr);
    if ( v125 )
      goto LABEL_27;
  }
  else
  {
    if ( a6 )
    {
      v18 = *a7;
      if ( !*(_WORD *)(*a7 + 4) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
        v20 = a7;
        v137 = 0;
        v21 = (__int64 *)(sub_186B270(0x18u) + 8);
        v22 = 1;
        *(v21 - 1) = 2;
        v23 = v21;
        v24 = nullptr;
LABEL_8:
        *v21 = v19;
        *((_DWORD *)v23 - 1) = v22;
        v25 = sub_15D1F10(v18);
        v26 = v137;
        if ( v137 )
        {
LABEL_9:
          v27 = *(_DWORD *)(v26 - 4);
          if ( v27 == *(_DWORD *)(v26 - 8) )
          {
            v50 = (3 * v27 + 1) >> 1;
            v51 = 8 * v50 + 8;
            if ( 8 * v27 + 8 >= (unsigned int)v51 || v27 >= v50 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v140, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v140);
              sub_233E40((__int64)v140);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v128 = (3 * v27 + 1) >> 1;
            v52 = (unsigned int *)sub_186B300((void *)(v137 - 8), v51);
            v53 = v52 + 2;
            v137 = (__int64)(v52 + 2);
            *v52 = v128;
            v54 = v52[1];
            v55 = v54;
            v31 = (__int64 *)&v53[2 * v54];
            v30 = v55 + 1;
          }
          else
          {
            v28 = v26;
            v29 = v27;
            v30 = v27 + 1;
            v31 = (__int64 *)(v28 + 8 * v29);
          }
          *v31 = v25;
          *(_DWORD *)(v137 - 4) = v30;
          if ( !v24 )
            goto LABEL_22;
LABEL_12:
          v32 = *((_DWORD *)v24 - 1);
          if ( v32 == *((_DWORD *)v24 - 2) )
          {
            v47 = (3 * v32 + 1) >> 1;
            v48 = 8 * v47 + 8;
            if ( 8 * v32 + 8 >= (unsigned int)v48 || v32 >= v47 )
            {
              v16 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v140, "Overflow encountered when expanding vector");
              *v16 = (char *)off_1C63128;
              sub_2333C0(v16 + 1, v140);
              sub_233E40((__int64)v140);
              __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v127 = (3 * v32 + 1) >> 1;
            v49 = (unsigned int *)sub_186B300(v24 - 1, v48);
            v24 = v49 + 2;
            *v49 = v127;
            LODWORD(v49) = v49[1];
            v35 = &v24[(unsigned int)v49];
            v34 = (_DWORD)v49 + 1;
          }
          else
          {
            v33 = v32;
            v34 = v32 + 1;
            v35 = &v24[v33];
          }
          goto LABEL_14;
        }
        while ( 1 )
        {
          v39 = (__int64 *)(sub_186B270(0x18u) + 8);
          *(v39 - 1) = 2;
          v137 = (__int64)v39;
          *v39 = v25;
          *((_DWORD *)v39 - 1) = 1;
          if ( v24 )
            goto LABEL_12;
LABEL_22:
          v40 = (_QWORD *)sub_186B270(0x18u);
          *v40 = 2;
          v24 = v40 + 1;
          v34 = 1;
          v35 = v24;
LABEL_14:
          *v35 = v18;
          *((_DWORD *)v24 - 1) = v34;
          v36 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
          if ( v36 )
          {
            if ( *v36 != -1 )
              break;
          }
          if ( *(_DWORD *)(v18 + 24) )
            break;
          if ( ++v20 == &a7[a6] )
          {
            v56 = *(_QWORD *)(a1 + 232);
            v117 = v56;
            if ( a8 )
            {
              v57 = 0;
              v58 = nullptr;
              v133 = a9;
              v120 = &a9[a8];
              while ( 1 )
              {
                v139 = v56;
                v138 = 0;
                sub_1697FC0(v56, 0, a6, (int)v24, *v133, (int)&v138, v116, v117, v118, v119, v120);
                v71 = v138;
                if ( v138 )
                  ++*(_DWORD *)(v138 + 8);
                if ( v57 )
                {
                  v72 = *(_DWORD *)(v57 - 4);
                  if ( v72 == *(_DWORD *)(v57 - 8) )
                  {
                    v73 = (3 * v72 + 1) >> 1;
                    v74 = 8 * v73 + 8;
                    if ( 8 * v72 + 8 >= (unsigned int)v74 || v72 >= v73 )
                    {
                      v132 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v140, "Overflow encountered when expanding vector");
                      *v132 = (char *)off_1C63128;
                      sub_2333C0(v132 + 1, v140);
                      sub_233E40((__int64)v140);
                      __cxa_throw(
                        v132,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    LODWORD(v118) = (3 * v72 + 1) >> 1;
                    v119 = v71;
                    v75 = (_DWORD *)sub_186B300((void *)(v57 - 8), v74);
                    v57 = (unsigned __int64)(v75 + 2);
                    v60 = v138;
                    v71 = v119;
                    *v75 = v118;
                    LODWORD(v75) = v75[1];
                    v62 = (__int64 *)(v57 + 8LL * (unsigned int)v75);
                    v61 = (_DWORD)v75 + 1;
                  }
                  else
                  {
                    v59 = v72;
                    v60 = v71;
                    v61 = v72 + 1;
                    v62 = (__int64 *)(v57 + 8 * v59);
                  }
                }
                else
                {
                  v119 = v71;
                  v79 = (_QWORD *)sub_186B270(0x18u);
                  v57 = (unsigned __int64)(v79 + 1);
                  v60 = v138;
                  v71 = v119;
                  *v79 = 2;
                  v62 = v79 + 1;
                  v61 = 1;
                }
                *v62 = v71;
                *(_DWORD *)(v57 - 4) = v61;
                if ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 232), v60) )
                  break;
                v63 = v138;
                if ( v58 )
                {
                  v64 = *((_DWORD *)v58 - 1);
                  if ( v64 == *((_DWORD *)v58 - 2) )
                  {
                    v76 = (3 * v64 + 1) >> 1;
                    v77 = 8 * v76 + 8;
                    if ( 8 * v64 + 8 >= (unsigned int)v77 || v64 >= v76 )
                    {
                      v131 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v140, "Overflow encountered when expanding vector");
                      *v131 = (char *)off_1C63128;
                      sub_2333C0(v131 + 1, v140);
                      sub_233E40((__int64)v140);
                      __cxa_throw(
                        v131,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    LODWORD(v118) = (3 * v64 + 1) >> 1;
                    v119 = v138;
                    v78 = sub_186B300(v58 - 1, v77);
                    v58 = (_QWORD *)(v78 + 8);
                    v66 = v138;
                    v63 = v119;
                    *(_DWORD *)v78 = v118;
                    LODWORD(v78) = *(_DWORD *)(v78 + 4);
                    v68 = &v58[(unsigned int)v78];
                    v67 = v78 + 1;
                  }
                  else
                  {
                    v65 = v64;
                    v66 = v138;
                    v67 = v64 + 1;
                    v68 = &v58[v65];
                  }
                }
                else
                {
                  v119 = v138;
                  v80 = (_QWORD *)sub_186B270(0x18u);
                  v58 = v80 + 1;
                  v66 = v138;
                  v63 = v119;
                  *v80 = 2;
                  v68 = v80 + 1;
                  v67 = 1;
                }
                *v68 = v63;
                *((_DWORD *)v58 - 1) = v67;
                if ( v66 )
                {
                  v69 = v139;
                  v70 = (*(_DWORD *)(v66 + 8))-- == 1;
                  if ( v70 )
                    sub_15D7BC0(v69, v66);
                }
                ++v133;
                v56 = *(_QWORD *)(a1 + 232);
                if ( v133 == v120 )
                {
                  v134 = nullptr;
                  goto LABEL_114;
                }
              }
              sub_24EA30(a1, 3u, "invalid pattern");
              if ( v125 )
                sub_2BB620(0);
              v103 = v138;
              if ( v138 )
              {
                v104 = v139;
                v70 = (*(_DWORD *)(v138 + 8))-- == 1;
                if ( v70 )
                  sub_15D7BC0(v104, v103);
              }
LABEL_101:
              v130 = 0;
              goto LABEL_102;
            }
            if ( a10 )
            {
              v81 = a11;
              v57 = 0;
              v134 = nullptr;
              v120 = &v138;
              while ( 1 )
              {
                v93 = *v81;
                v138 = 0;
                v139 = v56;
                if ( *(_WORD *)(v93 + 4) )
                  break;
                sub_1697FC0(v56, 0, a6, (int)v24, v93, (int)v120, v116, v117, v118, v119, v120);
                v94 = v138;
                if ( v138 )
                  ++*(_DWORD *)(v138 + 8);
                if ( v57 )
                {
                  v95 = *(_DWORD *)(v57 - 4);
                  if ( v95 == *(_DWORD *)(v57 - 8) )
                  {
                    v96 = (3 * v95 + 1) >> 1;
                    v97 = 8 * v96 + 8;
                    if ( 8 * v95 + 8 >= (unsigned int)v97 || v95 >= v96 )
                    {
                      v12 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v140, "Overflow encountered when expanding vector");
                      *v12 = (char *)off_1C63128;
                      sub_2333C0(v12 + 1, v140);
                      sub_233E40((__int64)v140);
                      __cxa_throw(
                        v12,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    LODWORD(v118) = (3 * v95 + 1) >> 1;
                    v119 = v94;
                    v98 = (_DWORD *)sub_186B300((void *)(v57 - 8), v97);
                    v99 = (unsigned int)v98[1];
                    v57 = (unsigned __int64)(v98 + 2);
                    v94 = v119;
                    *v98 = v118;
                    LODWORD(v98) = v99;
                    v85 = v138;
                    v84 = (__int64 *)(v57 + 8 * v99);
                    v83 = (_DWORD)v98 + 1;
                  }
                  else
                  {
                    v82 = v95;
                    v83 = v95 + 1;
                    v84 = (__int64 *)(v57 + 8 * v82);
                    v85 = v94;
                  }
                }
                else
                {
                  v119 = v94;
                  v113 = (_QWORD *)sub_186B270(0x18u);
                  v57 = (unsigned __int64)(v113 + 1);
                  v85 = v138;
                  v84 = v113 + 1;
                  *v113 = 2;
                  v94 = v119;
                  v83 = 1;
                }
                *v84 = v94;
                *(_DWORD *)(v57 - 4) = v83;
                if ( v134 )
                {
                  v86 = *(v134 - 1);
                  if ( v86 == *(v134 - 2) )
                  {
                    v100 = (3 * v86 + 1) >> 1;
                    v101 = 8 * v100 + 8;
                    if ( 8 * v86 + 8 >= (unsigned int)v101 || v86 >= v100 )
                    {
                      v13 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v140, "Overflow encountered when expanding vector");
                      *v13 = (char *)off_1C63128;
                      sub_2333C0(v13 + 1, v140);
                      sub_233E40((__int64)v140);
                      __cxa_throw(
                        v13,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v118 = v85;
                    LODWORD(v119) = (3 * v86 + 1) >> 1;
                    v102 = sub_186B300(v134 - 2, v101);
                    v87 = (_DWORD *)(v102 + 8);
                    v89 = v138;
                    v134 = (_DWORD *)(v102 + 8);
                    v85 = v118;
                    *(_DWORD *)v102 = v119;
                    LODWORD(v102) = *(_DWORD *)(v102 + 4);
                    v91 = &v87[2 * (unsigned int)v102];
                    v90 = v102 + 1;
                  }
                  else
                  {
                    v87 = v134;
                    v88 = v86;
                    v89 = v85;
                    v90 = v86 + 1;
                    v91 = &v134[2 * v88];
                  }
                }
                else
                {
                  v119 = v85;
                  v112 = sub_186B270(0x18u) + 8;
                  v89 = v138;
                  v85 = v119;
                  *(_QWORD *)(v112 - 8) = 2;
                  v91 = (_QWORD *)v112;
                  v134 = (_DWORD *)v112;
                  v90 = 1;
                  v87 = v134;
                }
                *v91 = v85;
                *(v87 - 1) = v90;
                if ( v89 )
                {
                  v92 = v139;
                  v70 = (*(_DWORD *)(v89 + 8))-- == 1;
                  if ( v70 )
                    sub_15D7BC0(v92, v89);
                }
                ++v81;
                v56 = *(_QWORD *)(a1 + 232);
                if ( &a11[a10] == v81 )
                {
                  v58 = nullptr;
                  goto LABEL_114;
                }
              }
              sub_24EA30(a1, 3u, nullptr);
              if ( v125 )
                sub_2BB620(0);
              v114 = v138;
              if ( v138 )
              {
                v115 = v139;
                v70 = (*(_DWORD *)(v138 + 8))-- == 1;
                if ( v70 )
                  sub_15D7BC0(v115, v114);
              }
              if ( v134 )
                sub_186B220(v134 - 2);
              if ( v57 )
              {
                v58 = nullptr;
                goto LABEL_101;
              }
              v130 = 0;
            }
            else
            {
              v56 = *(_QWORD *)(a1 + 232);
              v58 = nullptr;
              v57 = 0;
              v134 = nullptr;
LABEL_114:
              *(_QWORD *)v140 = 0;
              v141 = v56;
              sub_1697FC0(v56, 0, a6, (int)v24, a12, (int)v140, v116, v117, v118, v119, v120);
              v109 = sub_253CA0(
                       a1,
                       a2,
                       a3,
                       a4,
                       a5,
                       a8,
                       v58,
                       a10,
                       (__int64)v134,
                       *((_DWORD *)v23 - 1),
                       v137,
                       v23,
                       *(__int64 *)v140);
              v130 = v109;
              if ( v125 )
                sub_2BB620(v109);
              v110 = *(_QWORD *)v140;
              if ( *(_QWORD *)v140 )
              {
                v111 = v141;
                v70 = (*(_DWORD *)(*(_QWORD *)v140 + 8LL))-- == 1;
                if ( v70 )
                  sub_15D7BC0(v111, v110);
              }
              if ( v134 )
                sub_186B220(v134 - 2);
              if ( v57 )
              {
LABEL_102:
                v105 = *(unsigned int *)(v57 - 4);
                v106 = (__int64 *)v57;
                if ( v57 < v57 + 8 * v105 )
                {
                  v136 = (__int64)v24;
                  v107 = v57 + 8 * v105;
                  do
                  {
                    while ( 1 )
                    {
                      v108 = *v106;
                      if ( *v106 )
                      {
                        v70 = (*(_DWORD *)(v108 + 8))-- == 1;
                        if ( v70 )
                          break;
                      }
                      if ( (unsigned __int64)++v106 >= v107 )
                        goto LABEL_108;
                    }
                    ++v106;
                    sub_15D7BC0(v117, v108);
                  }
                  while ( (unsigned __int64)v106 < v107 );
LABEL_108:
                  v24 = (_QWORD *)v136;
                }
                sub_186B220((void *)(v57 - 8));
              }
              if ( v58 )
                sub_186B220(v58 - 1);
            }
            sub_186B220(v24 - 1);
            goto LABEL_42;
          }
          v18 = *v20;
          if ( *(_WORD *)(*v20 + 4) )
            goto LABEL_69;
          v37 = *((_DWORD *)v23 - 1);
          v19 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
          if ( v37 == *((_DWORD *)v23 - 2) )
          {
            v42 = (3 * v37 + 1) >> 1;
            v43 = 8 * v42 + 8;
            if ( 8 * v37 + 8 >= (unsigned int)v43 || v37 >= v42 )
            {
              v15 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v140, "Overflow encountered when expanding vector");
              *v15 = (char *)off_1C63128;
              sub_2333C0(v15 + 1, v140);
              sub_233E40((__int64)v140);
              __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v126 = (3 * v37 + 1) >> 1;
            v44 = (unsigned int *)sub_186B300(v23 - 1, v43);
            v23 = (__int64 *)(v44 + 2);
            *v44 = v126;
            v45 = v44[1];
            v46 = v45;
            v21 = &v23[v45];
            v22 = v46 + 1;
            goto LABEL_8;
          }
          v38 = *v20;
          v23[v37] = v19;
          *((_DWORD *)v23 - 1) = v37 + 1;
          v25 = sub_15D1F10(v38);
          v26 = v137;
          if ( v137 )
            goto LABEL_9;
        }
        sub_24EA30(a1, 3u, nullptr);
        if ( v125 )
          sub_2BB620(0);
        sub_186B220(v24 - 1);
        v130 = 0;
        goto LABEL_42;
      }
      v137 = 0;
      v24 = nullptr;
      v23 = nullptr;
LABEL_69:
      sub_24EA30(a1, 3u, nullptr);
      if ( !v125 )
      {
        if ( v24 )
          goto LABEL_71;
        if ( !v137 )
        {
          if ( !v23 )
            return 0;
LABEL_140:
          v130 = 0;
LABEL_44:
          sub_186B220(v23 - 1);
LABEL_45:
          if ( !v125 )
            return v130;
          goto LABEL_29;
        }
LABEL_72:
        v130 = 0;
LABEL_42:
        sub_186B220((void *)(v137 - 8));
        goto LABEL_43;
      }
      sub_2BB620(0);
      if ( v24 )
      {
LABEL_71:
        sub_186B220(v24 - 1);
        if ( !v137 )
        {
          v130 = 0;
LABEL_43:
          if ( !v23 )
            goto LABEL_45;
          goto LABEL_44;
        }
        goto LABEL_72;
      }
      if ( v137 )
        goto LABEL_72;
      if ( v23 )
        goto LABEL_140;
LABEL_28:
      v130 = 0;
LABEL_29:
      byte_1C7EBA0 = 1;
      return v130;
    }
    sub_24EA30(a1, 0xAu, "number of bound variables is 0");
    if ( v125 )
    {
LABEL_27:
      sub_2BB620(0);
      goto LABEL_28;
    }
  }
  return 0;
}

