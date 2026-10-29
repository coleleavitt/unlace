__int64 *__fastcall sub_E40D40(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  _OWORD *v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _DWORD *v8; // rbp
  __int64 *v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r13
  __int64 *v14; // rbp
  __int64 v15; // r12
  __int64 *v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  __int64 *v19; // rdx
  __int64 v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // r14d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 *v27; // r14
  __int64 *v28; // r12
  __int64 v29; // r13
  unsigned __int64 v30; // rbp
  __int64 v31; // rdx
  int v32; // eax
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int *v37; // rax
  _QWORD *v38; // r12
  unsigned int i; // edx
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // r13
  unsigned int v44; // eax
  unsigned int v45; // ecx
  size_t v46; // rsi
  unsigned int *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // r13
  unsigned int j; // ecx
  __int64 v52; // rsi
  int v53; // eax
  _QWORD *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // eax
  unsigned int v58; // r8d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rsi
  __int64 *v62; // r14
  unsigned __int64 v63; // rbx
  __int64 v64; // rsi
  bool v65; // zf
  __int64 *v66; // rbp
  unsigned __int64 v67; // r14
  __int64 v68; // rsi
  _QWORD *v69; // rdx
  unsigned int v70; // ecx
  int v71; // esi
  char *v72; // rax
  __int64 *v73; // r12
  __int64 *v74; // rbx
  __int64 v75; // rcx
  int v76; // eax
  __int64 *v77; // rcx
  __int64 v78; // rbp
  _QWORD *v79; // rdx
  unsigned int v80; // eax
  unsigned int v81; // r13d
  size_t v82; // rsi
  unsigned int *v83; // rax
  _DWORD *v84; // rdx
  __int64 *v85; // r12
  __int64 *v86; // rbx
  __int64 v87; // rcx
  int v88; // eax
  __int64 *v89; // rcx
  __int64 v90; // rbp
  _QWORD *v91; // rdx
  unsigned int v92; // eax
  unsigned int v93; // r13d
  size_t v94; // rsi
  unsigned int *v95; // rax
  _DWORD *v96; // rdx
  __int64 v97; // xmm0_8
  unsigned int v99; // ebp
  size_t v100; // rdi
  unsigned int *v101; // rcx
  __int64 *v102; // rbx
  __int64 v103; // rax
  __int64 *v104; // rsi
  _DWORD *v105; // rdi
  int v106; // r10d
  __int64 *v107; // r9
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 *v111; // rax
  __int64 *v112; // r14
  __int64 *v113; // rbp
  __int64 *v114; // r12
  __int64 v115; // rsi
  __int64 v116; // rdi
  __int64 *v117; // rbp
  __int64 *v118; // r12
  __int64 v119; // rsi
  __int64 v120; // rdi
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  char **v125; // rbp
  __int64 v126; // rdx
  char **v127; // rbp
  __int64 v128; // rdx
  __int64 v129; // rdx
  char **v130; // r15
  __int64 v131; // rdx
  char **v132; // rbp
  __int64 v133; // rdx
  char **v134; // r13
  __int64 v135; // rdx
  char **exception; // r12
  __int64 v137; // rdx
  int v138; // [rsp+0h] [rbp-138h]
  unsigned int v139; // [rsp+10h] [rbp-128h]
  unsigned int v140; // [rsp+10h] [rbp-128h]
  unsigned int v141; // [rsp+10h] [rbp-128h]
  unsigned int v142; // [rsp+10h] [rbp-128h]
  __int64 *v143; // [rsp+10h] [rbp-128h]
  _QWORD *v144; // [rsp+10h] [rbp-128h]
  char *v145; // [rsp+10h] [rbp-128h]
  unsigned int v146; // [rsp+10h] [rbp-128h]
  char **v147; // [rsp+10h] [rbp-128h]
  __int64 *v148; // [rsp+18h] [rbp-120h]
  __int64 v149; // [rsp+20h] [rbp-118h]
  __int64 v150; // [rsp+28h] [rbp-110h]
  unsigned int v151; // [rsp+38h] [rbp-100h]
  __int64 v152; // [rsp+38h] [rbp-100h]
  _DWORD *v153; // [rsp+38h] [rbp-100h]
  unsigned int *v154; // [rsp+38h] [rbp-100h]
  __int64 v155; // [rsp+38h] [rbp-100h]
  unsigned int v156; // [rsp+44h] [rbp-F4h]
  unsigned int v157; // [rsp+44h] [rbp-F4h]
  __int64 v158; // [rsp+48h] [rbp-F0h]
  unsigned int *v160; // [rsp+58h] [rbp-E0h]
  __int64 v161; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v162; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v163; // [rsp+A8h] [rbp-90h]
  __int128 v164; // [rsp+B0h] [rbp-88h]
  __int64 v165; // [rsp+C0h] [rbp-78h]
  void *ptr; // [rsp+C8h] [rbp-70h]
  __int64 v167; // [rsp+D0h] [rbp-68h]
  int v168; // [rsp+D8h] [rbp-60h]
  __int128 v169; // [rsp+E0h] [rbp-58h]
  int v170; // [rsp+F0h] [rbp-48h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 72LL))(*(_QWORD *)(a1 + 56));
  v2 = sub_186B270(0x3D0u);
  sub_15DD980(v2);
  v162 = v1;
  v163 = v2;
  v165 = 0;
  v164 = 0;
  v3 = (_OWORD *)sub_186B270(0x80u);
  ptr = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v167 = 8;
  v168 = 0;
  v170 = 0;
  v169 = 0;
  if ( v1 != v2 )
  {
    sub_15DA640(v163, v162, v4, v5, v6, v7, v138);
    sub_15D2280(v163, v162);
  }
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(
                   *(_QWORD *)(a1 + 56),
                   v2,
                   a1 + 48);
  v9 = (__int64 *)sub_186B270(0x58u);
  *v9 = v2;
  v10 = v9;
  v148 = v9;
  v9[1] = 0;
  v9[2] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 72LL))(v8);
  v11 = *(_QWORD *)v8;
  v10[3] = 0;
  v10[4] = (*(__int64 (__fastcall **)(_DWORD *))(v11 + 72))(v8);
  v10[5] = 0;
  sub_1858590(v10 + 6, a1 + 48);
  ++v8[12];
  v10[7] = (__int64)v8;
  v10[9] = 0x3FF0000000000000LL;
  *((_DWORD *)v10 + 16) = 0;
  v12 = *(_QWORD *)(a1 + 8);
  *((_BYTE *)v10 + 80) = 0;
  v149 = v12;
  if ( v12 )
  {
    v158 = v12 + 32LL * *(unsigned int *)(v12 - 4);
    if ( v12 != v158 )
    {
      do
      {
        v150 = v163;
        v13 = *(__int64 **)(v149 + 8);
        if ( !v13 || (v14 = &v13[*((unsigned int *)v13 - 1)], v13 == v14) )
        {
          v27 = *(__int64 **)(v149 + 24);
          if ( !v27 || (v20 = v163, v16 = nullptr, v28 = &v27[*((unsigned int *)v27 - 1)], v28 == v27) )
          {
            v20 = v163;
            v38 = nullptr;
            v50 = nullptr;
            v69 = (_QWORD *)v148[1];
            if ( v69 )
              goto LABEL_85;
            goto LABEL_150;
          }
        }
        else
        {
          v15 = *v13;
          if ( v163 == v162 )
          {
            if ( v15 )
              ++*(_DWORD *)(v15 + 8);
LABEL_21:
            v26 = (_QWORD *)sub_186B270(0x18u);
            v16 = v26 + 1;
            *v26 = 2;
            v18 = 1;
            v19 = v16;
            goto LABEL_11;
          }
          v15 = sub_15CFF50(&v162, *v13);
          v16 = nullptr;
          if ( !v15 )
            goto LABEL_21;
LABEL_14:
          ++*(_DWORD *)(v15 + 8);
          if ( !v16 )
            goto LABEL_21;
          while ( 1 )
          {
            v21 = *((_DWORD *)v16 - 1);
            if ( v21 == *((_DWORD *)v16 - 2) )
            {
              v22 = (3 * v21 + 1) >> 1;
              v23 = 8 * v22 + 8;
              if ( 8 * v21 + 8 >= (unsigned int)v23 || v21 >= v22 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_181416(&v161, "Overflow encountered when expanding vector", v137);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v161);
                sub_233E40((__int64)&v161);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v24 = (unsigned int *)sub_186B300(v16 - 1, v23);
              v25 = v24[1];
              v16 = (__int64 *)(v24 + 2);
              *v24 = v22;
              LODWORD(v24) = v25;
              v19 = &v16[v25];
              v18 = (_DWORD)v24 + 1;
            }
            else
            {
              v17 = v21;
              v18 = v21 + 1;
              v19 = &v16[v17];
            }
LABEL_11:
            ++v13;
            *v19 = v15;
            v20 = v163;
            *((_DWORD *)v16 - 1) = v18;
            if ( v14 == v13 )
              break;
            v15 = *v13;
            if ( v162 == v20 )
            {
              if ( v15 )
                ++*(_DWORD *)(v15 + 8);
            }
            else
            {
              v15 = sub_15CFF50(&v162, *v13);
              if ( v15 )
                goto LABEL_14;
            }
          }
          v27 = *(__int64 **)(v149 + 24);
          if ( !v27 || (v28 = &v27[*((unsigned int *)v27 - 1)], v27 == v28) )
          {
            v30 = 0;
            goto LABEL_39;
          }
        }
        v29 = *v27;
        if ( v162 == v20 )
        {
          if ( v29 )
            ++*(_DWORD *)(v29 + 8);
LABEL_52:
          v48 = (_QWORD *)sub_186B270(0x18u);
          v30 = (unsigned __int64)(v48 + 1);
          *v48 = 2;
          v32 = 1;
          v33 = (_QWORD *)v30;
          goto LABEL_30;
        }
        v29 = sub_15CFF50(&v162, *v27);
        v30 = 0;
        if ( !v29 )
          goto LABEL_52;
LABEL_33:
        ++*(_DWORD *)(v29 + 8);
        if ( !v30 )
          goto LABEL_52;
        while ( 1 )
        {
          v34 = *(_DWORD *)(v30 - 4);
          if ( v34 != *(_DWORD *)(v30 - 8) )
            break;
          v35 = (3 * v34 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v34 + 8 >= (unsigned int)v36 || v34 >= v35 )
          {
            v134 = (char **)__cxa_allocate_exception(0x28u);
            sub_181416(&v161, "Overflow encountered when expanding vector", v135);
            *v134 = (char *)off_1C63128;
            sub_2333C0(v134 + 1, &v161);
            sub_233E40((__int64)&v161);
            __cxa_throw(v134, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v139 = (3 * v34 + 1) >> 1;
          v37 = (unsigned int *)sub_186B300((void *)(v30 - 8), v36);
          v30 = (unsigned __int64)(v37 + 2);
          ++v27;
          *v37 = v139;
          LODWORD(v37) = v37[1];
          *(_QWORD *)(v30 + 8LL * (unsigned int)v37) = v29;
          *(_DWORD *)(v30 - 4) = (_DWORD)v37 + 1;
          if ( v27 == v28 )
            goto LABEL_38;
LABEL_31:
          v29 = *v27;
          if ( v163 == v162 )
          {
            if ( v29 )
              ++*(_DWORD *)(v29 + 8);
          }
          else
          {
            v29 = sub_15CFF50(&v162, *v27);
            if ( v29 )
              goto LABEL_33;
          }
        }
        v31 = v34;
        v32 = v34 + 1;
        v33 = (_QWORD *)(v30 + 8 * v31);
LABEL_30:
        ++v27;
        *v33 = v29;
        *(_DWORD *)(v30 - 4) = v32;
        if ( v27 != v28 )
          goto LABEL_31;
LABEL_38:
        if ( v16 )
        {
LABEL_39:
          v38 = nullptr;
          for ( i = 0; i < *((_DWORD *)v16 - 1); ++i )
          {
            v43 = v16[i];
            if ( v43 )
              ++*(_DWORD *)(v43 + 8);
            if ( v38 )
            {
              v44 = *((_DWORD *)v38 - 1);
              if ( v44 == *((_DWORD *)v38 - 2) )
              {
                v45 = (3 * v44 + 1) >> 1;
                v46 = 8 * v45 + 8;
                if ( 8 * v44 + 8 >= (unsigned int)v46 || v44 >= v45 )
                {
                  v130 = (char **)__cxa_allocate_exception(0x28u);
                  sub_181416(&v161, "Overflow encountered when expanding vector", v131);
                  *v130 = (char *)off_1C63128;
                  sub_2333C0(v130 + 1, &v161);
                  sub_233E40((__int64)&v161);
                  __cxa_throw(v130, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v151 = (3 * v44 + 1) >> 1;
                v140 = i;
                v47 = (unsigned int *)sub_186B300(v38 - 1, v46);
                v38 = v47 + 2;
                i = v140;
                *v47 = v151;
                LODWORD(v47) = v47[1];
                v42 = &v38[(unsigned int)v47];
                v41 = (_DWORD)v47 + 1;
              }
              else
              {
                v40 = v44;
                v41 = v44 + 1;
                v42 = &v38[v40];
              }
            }
            else
            {
              v141 = i;
              v49 = (_QWORD *)sub_186B270(0x18u);
              v38 = v49 + 1;
              i = v141;
              *v49 = 2;
              v42 = v49 + 1;
              v41 = 1;
            }
            *v42 = v43;
            *((_DWORD *)v38 - 1) = v41;
          }
          v50 = nullptr;
          if ( v30 )
            goto LABEL_58;
          goto LABEL_77;
        }
        v38 = nullptr;
LABEL_58:
        v50 = nullptr;
        for ( j = 0; ; ++j )
        {
          v55 = *(unsigned int *)(v30 - 4);
          if ( j >= (unsigned int)v55 )
            break;
          v56 = *(_QWORD *)(v30 + 8LL * j);
          if ( v56 )
            ++*(_DWORD *)(v56 + 8);
          if ( v50 )
          {
            v57 = *((_DWORD *)v50 - 1);
            if ( v57 == *((_DWORD *)v50 - 2) )
            {
              v58 = (3 * v57 + 1) >> 1;
              v59 = 8 * v58 + 8;
              if ( 8 * v57 + 8 >= (unsigned int)v59 || v57 >= v58 )
              {
                v147 = (char **)__cxa_allocate_exception(0x28u);
                sub_181416(&v161, "Overflow encountered when expanding vector", v129);
                *v147 = (char *)off_1C63128;
                sub_2333C0(v147 + 1, &v161);
                sub_233E40((__int64)&v161);
                __cxa_throw(v147, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v156 = (3 * v57 + 1) >> 1;
              v152 = v56;
              v142 = j;
              v60 = (unsigned int *)sub_186B300(v50 - 1, v59);
              v61 = v60[1];
              v50 = v60 + 2;
              j = v142;
              v56 = v152;
              *v60 = v156;
              LODWORD(v60) = v61;
              v54 = &v50[v61];
              v53 = (_DWORD)v60 + 1;
            }
            else
            {
              v52 = v57;
              v53 = v57 + 1;
              v54 = &v50[v52];
            }
          }
          else
          {
            v155 = v56;
            v146 = j;
            v121 = (_QWORD *)sub_186B270(0x18u);
            v50 = v121 + 1;
            v56 = v155;
            v54 = v121 + 1;
            *v121 = 2;
            j = v146;
            v53 = 1;
          }
          *v54 = v56;
          *((_DWORD *)v50 - 1) = v53;
        }
        v62 = (__int64 *)v30;
        if ( v30 < v30 + 8 * v55 )
        {
          v143 = v16;
          v63 = v30 + 8 * v55;
          do
          {
            while ( 1 )
            {
              v64 = *v62;
              if ( *v62 )
              {
                v65 = (*(_DWORD *)(v64 + 8))-- == 1;
                if ( v65 )
                  break;
              }
              if ( (unsigned __int64)++v62 >= v63 )
                goto LABEL_75;
            }
            ++v62;
            sub_15D7BC0(v20, v64);
          }
          while ( (unsigned __int64)v62 < v63 );
LABEL_75:
          v16 = v143;
        }
        sub_186B220((void *)(v30 - 8));
        if ( v16 )
        {
LABEL_77:
          v66 = v16;
          v67 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
          if ( (unsigned __int64)v16 < v67 )
          {
            do
            {
              while ( 1 )
              {
                v68 = *v66;
                if ( *v66 )
                {
                  v65 = (*(_DWORD *)(v68 + 8))-- == 1;
                  if ( v65 )
                    break;
                }
                if ( (unsigned __int64)++v66 >= v67 )
                  goto LABEL_83;
              }
              ++v66;
              sub_15D7BC0(v150, v68);
            }
            while ( (unsigned __int64)v66 < v67 );
          }
LABEL_83:
          sub_186B220(v16 - 1);
        }
        v69 = (_QWORD *)v148[1];
        if ( v69 )
        {
LABEL_85:
          v70 = *((_DWORD *)v69 - 1);
          if ( v70 == *((_DWORD *)v69 - 2) )
          {
            v99 = (3 * v70 + 1) >> 1;
            v100 = 32 * v99 + 8;
            if ( 32 * v70 + 8 >= (unsigned int)v100 || v70 >= v99 )
            {
              v125 = (char **)__cxa_allocate_exception(0x28u);
              sub_181416(&v161, "Overflow encountered when expanding vector", v126);
              *v125 = (char *)off_1C63128;
              sub_2333C0(v125 + 1, &v161);
              sub_233E40((__int64)&v161);
              __cxa_throw(v125, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v101 = (unsigned int *)sub_186B270(v100);
            v69 = v101 + 2;
            v102 = (__int64 *)v148[1];
            if ( v102 )
            {
              v103 = *((unsigned int *)v102 - 1);
              v104 = (__int64 *)v148[1];
              v105 = v101 + 2;
              v101[1] = v103;
              v106 = v103;
              v107 = &v102[4 * v103];
              if ( v102 != v107 )
              {
                do
                {
                  v108 = *v104;
                  v104 += 4;
                  v105 += 8;
                  *((_QWORD *)v105 - 4) = v108;
                  v109 = *(v104 - 3);
                  *(v104 - 3) = 0;
                  *((_QWORD *)v105 - 3) = v109;
                  *((_QWORD *)v105 - 2) = *(v104 - 2);
                  v110 = *(v104 - 1);
                  *(v104 - 1) = 0;
                  *((_QWORD *)v105 - 1) = v110;
                }
                while ( v104 != v107 );
              }
              v111 = &v102[4 * v103];
              if ( v106 )
              {
                v144 = v38;
                v112 = v111;
                v153 = v101 + 2;
                v157 = v99;
                v160 = v101;
                do
                {
                  v113 = (__int64 *)v102[3];
                  if ( v113 )
                  {
                    v114 = &v113[*((unsigned int *)v113 - 1)];
                    if ( v113 >= v114 )
                      goto LABEL_132;
                    do
                    {
                      while ( 1 )
                      {
                        v115 = *v113;
                        if ( *v113 )
                        {
                          v116 = v102[2];
                          v65 = (*(_DWORD *)(v115 + 8))-- == 1;
                          if ( v65 )
                            break;
                        }
                        if ( ++v113 >= v114 )
                          goto LABEL_131;
                      }
                      sub_15D7BC0(v116, v115);
                      ++v113;
                    }
                    while ( v113 < v114 );
LABEL_131:
                    v113 = (__int64 *)v102[3];
                    if ( v113 )
LABEL_132:
                      sub_186B220(v113 - 1);
                  }
                  v117 = (__int64 *)v102[1];
                  if ( v117 )
                  {
                    v118 = &v117[*((unsigned int *)v117 - 1)];
                    if ( v117 >= v118 )
                      goto LABEL_141;
                    do
                    {
                      while ( 1 )
                      {
                        v119 = *v117;
                        if ( *v117 )
                        {
                          v120 = *v102;
                          v65 = (*(_DWORD *)(v119 + 8))-- == 1;
                          if ( v65 )
                            break;
                        }
                        if ( ++v117 >= v118 )
                          goto LABEL_140;
                      }
                      sub_15D7BC0(v120, v119);
                      ++v117;
                    }
                    while ( v117 < v118 );
LABEL_140:
                    v117 = (__int64 *)v102[1];
                    if ( v117 )
LABEL_141:
                      sub_186B220(v117 - 1);
                  }
                  v102 += 4;
                }
                while ( v102 != v112 );
                v38 = v144;
                v69 = v153;
                v99 = v157;
                v101 = v160;
                v102 = (__int64 *)v148[1];
              }
              v154 = v101;
              v145 = (char *)v69;
              sub_186B220(v102 - 1);
              v101 = v154;
              v69 = v145;
              v72 = &v145[32 * v154[1]];
              v71 = v154[1] + 1;
            }
            else
            {
              v101[1] = 0;
              v72 = (char *)(v101 + 2);
              v71 = 1;
            }
            *v101 = v99;
            v148[1] = (__int64)v69;
          }
          else
          {
            v71 = v70 + 1;
            v72 = (char *)&v69[4 * v70];
          }
          goto LABEL_87;
        }
LABEL_150:
        v122 = (_QWORD *)sub_186B270(0x48u);
        v69 = v122 + 1;
        *v122 = 2;
        v71 = 1;
        v148[1] = (__int64)(v122 + 1);
        v72 = (char *)(v122 + 1);
LABEL_87:
        *((_QWORD *)v72 + 1) = v38;
        *((_QWORD *)v72 + 2) = v20;
        *(_QWORD *)v72 = v150;
        *((_QWORD *)v72 + 3) = v50;
        v149 += 32;
        *((_DWORD *)v69 - 1) = v71;
      }
      while ( v158 != v149 );
    }
  }
  v73 = *(__int64 **)(a1 + 24);
  if ( v73 )
  {
    v74 = &v73[*((unsigned int *)v73 - 1)];
    if ( v74 != v73 )
    {
      while ( 1 )
      {
        v78 = *v73;
        if ( v162 != v163 )
          v78 = sub_15CFF50(&v162, *v73);
        if ( v78 )
          ++*(_DWORD *)(v78 + 8);
        v79 = (_QWORD *)v148[3];
        if ( !v79 )
          break;
        v80 = *((_DWORD *)v79 - 1);
        if ( v80 == *((_DWORD *)v79 - 2) )
        {
          v81 = (3 * v80 + 1) >> 1;
          v82 = 8 * v81 + 8;
          if ( 8 * v80 + 8 >= (unsigned int)v82 || v80 >= v81 )
          {
            v127 = (char **)__cxa_allocate_exception(0x28u);
            sub_181416(&v161, "Overflow encountered when expanding vector", v128);
            *v127 = (char *)off_1C63128;
            sub_2333C0(v127 + 1, &v161);
            sub_233E40((__int64)&v161);
            __cxa_throw(v127, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v83 = (unsigned int *)sub_186B300(v79 - 1, v82);
          v84 = v83 + 2;
          *v83 = v81;
          ++v73;
          v148[3] = (__int64)(v83 + 2);
          LODWORD(v83) = v83[1];
          *(_QWORD *)&v84[2 * (unsigned int)v83] = v78;
          *(v84 - 1) = (_DWORD)v83 + 1;
          if ( v74 == v73 )
            goto LABEL_102;
        }
        else
        {
          v75 = v80;
          v76 = v80 + 1;
          v77 = &v79[v75];
LABEL_92:
          ++v73;
          *v77 = v78;
          *((_DWORD *)v79 - 1) = v76;
          if ( v74 == v73 )
            goto LABEL_102;
        }
      }
      v124 = (_QWORD *)sub_186B270(0x18u);
      v79 = v124 + 1;
      *v124 = 2;
      v77 = v124 + 1;
      v148[3] = (__int64)(v124 + 1);
      v76 = 1;
      goto LABEL_92;
    }
  }
LABEL_102:
  v85 = *(__int64 **)(a1 + 40);
  if ( v85 )
  {
    v86 = &v85[*((unsigned int *)v85 - 1)];
    if ( v86 != v85 )
    {
      while ( 1 )
      {
        v90 = *v85;
        if ( v162 != v163 )
          v90 = sub_15CFF50(&v162, *v85);
        if ( v90 )
          ++*(_DWORD *)(v90 + 8);
        v91 = (_QWORD *)v148[5];
        if ( !v91 )
          break;
        v92 = *((_DWORD *)v91 - 1);
        if ( v92 == *((_DWORD *)v91 - 2) )
        {
          v93 = (3 * v92 + 1) >> 1;
          v94 = 8 * v93 + 8;
          if ( 8 * v92 + 8 >= (unsigned int)v94 || v92 >= v93 )
          {
            v132 = (char **)__cxa_allocate_exception(0x28u);
            sub_181416(&v161, "Overflow encountered when expanding vector", v133);
            *v132 = (char *)off_1C63128;
            sub_2333C0(v132 + 1, &v161);
            sub_233E40((__int64)&v161);
            __cxa_throw(v132, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v95 = (unsigned int *)sub_186B300(v91 - 1, v94);
          v96 = v95 + 2;
          *v95 = v93;
          ++v85;
          v148[5] = (__int64)(v95 + 2);
          LODWORD(v95) = v95[1];
          *(_QWORD *)&v96[2 * (unsigned int)v95] = v90;
          *(v96 - 1) = (_DWORD)v95 + 1;
          if ( v86 == v85 )
            goto LABEL_116;
        }
        else
        {
          v87 = v92;
          v88 = v92 + 1;
          v89 = &v91[v87];
LABEL_106:
          ++v85;
          *v89 = v90;
          *((_DWORD *)v91 - 1) = v88;
          if ( v86 == v85 )
            goto LABEL_116;
        }
      }
      v123 = (_QWORD *)sub_186B270(0x18u);
      v91 = v123 + 1;
      *v123 = 2;
      v89 = v123 + 1;
      v148[5] = (__int64)(v123 + 1);
      v88 = 1;
      goto LABEL_106;
    }
  }
LABEL_116:
  v97 = *(_QWORD *)(a1 + 72);
  *((_DWORD *)v148 + 16) = *(_DWORD *)(a1 + 64);
  v148[9] = v97;
  sub_15CE760(&v162);
  return v148;
}

