_QWORD *__fastcall sub_6236A0(__int64 a1, __int64 *a2, double a3)
{
  char **v3; // r13
  char **v4; // r13
  char **v5; // r15
  char **exception; // r13
  char **v7; // r15
  char **v8; // r13
  char **v9; // r12
  __int64 v10; // rbx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int v14; // r13d
  _DWORD *v15; // rbx
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _DWORD *v21; // rdi
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  _BYTE *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 *v34; // rcx
  int v35; // eax
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  _BYTE *v40; // rdx
  __int64 v41; // r14
  __int64 v42; // r13
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // r13d
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // edx
  size_t v49; // rsi
  unsigned int *v50; // rax
  _DWORD *v51; // rcx
  unsigned int v52; // r15d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rdx
  unsigned int v56; // r8d
  size_t v57; // rsi
  unsigned int *v58; // rax
  int v59; // r14d
  __int64 v60; // r13
  __int64 v61; // rax
  bool v62; // zf
  __int64 v63; // r9
  __int64 *v64; // rcx
  __int64 v65; // rax
  int v66; // edi
  unsigned int v67; // edx
  __int64 *v68; // rsi
  __int64 v69; // rdx
  __int64 *v70; // r8
  __int64 *i; // rax
  __int64 v72; // rdx
  __int64 v73; // r13
  int v74; // r12d
  __int64 v75; // r14
  __int64 v76; // r15
  __int64 *v77; // r14
  __int64 v78; // rax
  unsigned __int64 v79; // r15
  __int64 v80; // rsi
  __int64 v81; // rax
  unsigned int v82; // r14d
  size_t v83; // rsi
  unsigned int *v84; // rax
  __int64 v85; // rdx
  _QWORD *v86; // rax
  unsigned int v87; // r13d
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rdx
  __int64 *v92; // rbx
  unsigned __int64 v93; // r13
  __int64 v94; // rsi
  __int64 v95; // r14
  _QWORD *v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  _QWORD *v100; // rcx
  __int64 v101; // rcx
  unsigned int v102; // r8d
  _QWORD *v103; // r12
  unsigned int v104; // r9d
  __int64 v105; // rcx
  _QWORD *v106; // r13
  int v107; // esi
  __int64 v108; // r9
  _QWORD *v109; // rdi
  _QWORD *v110; // rax
  _QWORD *v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r13
  __int64 v115; // r14
  __int64 v116; // rax
  __int64 v117; // r12
  unsigned int v118; // r12d
  unsigned int v119; // ecx
  unsigned int *v120; // rax
  __int64 v121; // r13
  _QWORD *v122; // rax
  int v123; // r8d
  char *v124; // r15
  char *v125; // rax
  __int64 v126; // rdx
  _QWORD *v127; // rsi
  __int64 *v128; // rdi
  _QWORD *v129; // rdx
  __int64 v130; // rsi
  _QWORD *v131; // rax
  _QWORD *v132; // rax
  int v133; // [rsp+0h] [rbp-F0h]
  __int64 v134; // [rsp+8h] [rbp-E8h]
  __int64 v136; // [rsp+18h] [rbp-D8h]
  __int64 v137; // [rsp+20h] [rbp-D0h]
  int v138; // [rsp+28h] [rbp-C8h]
  __int64 v139; // [rsp+28h] [rbp-C8h]
  int v140; // [rsp+38h] [rbp-B8h]
  unsigned int v141; // [rsp+44h] [rbp-ACh]
  _QWORD *ptr; // [rsp+48h] [rbp-A8h]
  __int64 v143; // [rsp+50h] [rbp-A0h]
  unsigned int v144; // [rsp+58h] [rbp-98h]
  __int64 v145; // [rsp+58h] [rbp-98h]
  size_t v146; // [rsp+58h] [rbp-98h]
  unsigned int v147; // [rsp+58h] [rbp-98h]
  unsigned int v149; // [rsp+68h] [rbp-88h]
  __int64 v150; // [rsp+68h] [rbp-88h]
  __int64 v151; // [rsp+70h] [rbp-80h]
  int v152[2]; // [rsp+78h] [rbp-78h]
  int v153[2]; // [rsp+90h] [rbp-60h] BYREF
  int v154[2]; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v155; // [rsp+A8h] [rbp-48h]

  if ( !(unsigned __int8)sub_64B3A0(*(_QWORD *)(a1 + 32)) )
    return nullptr;
  v10 = *a2;
  v151 = a2[1];
  ptr = (_QWORD *)sub_186B270(0xF8u);
  sub_63D370(ptr, v10);
  v11 = (__int64 *)a2[3];
  if ( v11 )
  {
    v136 = *(_QWORD *)(a1 + 24);
    v12 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v12 )
    {
      *(_QWORD *)v152 = 0;
      v13 = 0;
      v134 = 8 * v12;
      v137 = 0;
      v14 = *(_DWORD *)(*v11 + 56);
      v143 = *v11;
      v141 = *(_DWORD *)(*v11 + 68);
      v15 = nullptr;
      while ( 1 )
      {
        if ( v15 )
          *(v15 - 1) = 0;
        if ( v141 < v14 )
        {
          v16 = v143 + 8LL * v141;
          v17 = v143 + 8 * (v14 - 1 - v141 + (unsigned __int64)v141) + 8;
          v18 = *(_QWORD *)(v16 + 80) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v16 + 80) > 7u )
            ++*(_DWORD *)(v18 + 8);
          if ( !*(_QWORD *)v152 )
          {
            v19 = sub_186B270(0x18u) + 8;
            *(_QWORD *)(v19 - 8) = 2;
            v20 = (_QWORD *)v19;
            *(_QWORD *)v152 = v19;
            v21 = (_DWORD *)v19;
            v22 = 1;
            goto LABEL_12;
          }
          while ( 2 )
          {
            v29 = *(_DWORD *)(*(_QWORD *)v152 - 4LL);
            if ( v29 == *(_DWORD *)(*(_QWORD *)v152 - 8LL) )
            {
              v48 = (3 * v29 + 1) >> 1;
              v49 = 8 * v48 + 8;
              if ( 8 * v29 + 8 >= (unsigned int)v49 || v29 >= v48 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v154, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v154);
                sub_233E40((__int64)v154);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v149 = (3 * v29 + 1) >> 1;
              v50 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v152 - 8LL), v49);
              v51 = v50 + 2;
              *(_QWORD *)v152 = v50 + 2;
              v21 = v50 + 2;
              *v50 = v149;
              LODWORD(v50) = v50[1];
              v20 = &v51[2 * (unsigned int)v50];
              v22 = (_DWORD)v50 + 1;
LABEL_12:
              *v20 = v18;
              *(v21 - 1) = v22;
              if ( !v15 )
                goto LABEL_20;
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)v152 + 8LL * v29) = v18;
              *(_DWORD *)(*(_QWORD *)v152 - 4LL) = v29 + 1;
              if ( !v15 )
              {
LABEL_20:
                v30 = sub_186B270(0xAu);
                v16 += 8;
                *(_QWORD *)v30 = 2;
                v15 = (_DWORD *)(v30 + 8);
                *(_BYTE *)(v30 + 8) = 0;
                *(_DWORD *)(v30 + 4) = 1;
                if ( v17 == v16 )
                  goto LABEL_21;
LABEL_16:
                v27 = *(_QWORD *)(v16 + 80);
                v18 = 0;
                if ( v27 > 7 )
                {
                  v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
                  ++*(_DWORD *)(v28 + 8);
                  v18 = v28;
                }
                continue;
              }
            }
            break;
          }
          v23 = *(v15 - 1);
          if ( v23 == *(v15 - 2) )
          {
            v52 = (3 * v23 + 1) >> 1;
            v53 = v52 + 8;
            if ( v23 + 8 >= (unsigned int)v53 || v23 >= v52 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v154, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v154);
              sub_233E40((__int64)v154);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v54 = (unsigned int *)sub_186B300(v15 - 2, v53);
            v55 = v54[1];
            v15 = v54 + 2;
            *v54 = v52;
            LODWORD(v54) = v55;
            v26 = (char *)v15 + v55;
            v25 = (_DWORD)v54 + 1;
          }
          else
          {
            v24 = v23;
            v25 = v23 + 1;
            v26 = (char *)v15 + v24;
          }
          v16 += 8;
          *v26 = 0;
          *(v15 - 1) = v25;
          if ( v17 == v16 )
            goto LABEL_21;
          goto LABEL_16;
        }
LABEL_21:
        sub_622ED0((int)v153, a1, *(_QWORD *)(v143 + 40));
        v31 = *(_QWORD *)v153;
        if ( !*(_QWORD *)v152 )
          break;
        v32 = *(_DWORD *)(*(_QWORD *)v152 - 4LL);
        if ( v32 != *(_DWORD *)(*(_QWORD *)v152 - 8LL) )
        {
          v33 = v32;
          v34 = *(__int64 **)v152;
          v35 = v32 + 1;
          v36 = (_QWORD *)(*(_QWORD *)v152 + 8 * v33);
          goto LABEL_24;
        }
        v82 = (3 * v32 + 1) >> 1;
        v83 = 8 * v82 + 8;
        if ( 8 * v32 + 8 >= (unsigned int)v83 || v32 >= v82 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v154, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v154);
          sub_233E40((__int64)v154);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v84 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v152 - 8LL), v83);
        v85 = v84[1];
        *v84 = v82;
        *(_QWORD *)v152 = v84 + 2;
        *(_QWORD *)&v84[2 * v85 + 2] = v31;
        v84[1] = v85 + 1;
        if ( !v15 )
        {
LABEL_89:
          v86 = (_QWORD *)sub_186B270(0xAu);
          v15 = v86 + 1;
          *v86 = 2;
          v39 = 1;
          v40 = v15;
          goto LABEL_27;
        }
LABEL_25:
        v37 = *(v15 - 1);
        if ( v37 == *(v15 - 2) )
        {
          v87 = (3 * v37 + 1) >> 1;
          v88 = v87 + 8;
          if ( v37 + 8 >= (unsigned int)v88 || v37 >= v87 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v154, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v154);
            sub_233E40((__int64)v154);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v89 = (unsigned int *)sub_186B300(v15 - 2, v88);
          v90 = v89[1];
          v15 = v89 + 2;
          *v89 = v87;
          LODWORD(v89) = v90;
          v40 = (char *)v15 + v90;
          v39 = (_DWORD)v89 + 1;
        }
        else
        {
          v38 = v37;
          v39 = v37 + 1;
          v40 = (char *)v15 + v38;
        }
LABEL_27:
        *v40 = 0;
        *(v15 - 1) = v39;
        if ( v141 )
        {
          v41 = v143;
          do
          {
            sub_6226D0((int)v153, a1, *(_QWORD *)(v41 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            v42 = *(_QWORD *)v153;
            v43 = *(_DWORD *)(*(_QWORD *)v152 - 4LL);
            if ( v43 == *(_DWORD *)(*(_QWORD *)v152 - 8LL) )
            {
              v56 = (3 * v43 + 1) >> 1;
              v57 = 8 * v56 + 8;
              if ( 8 * v43 + 8 >= (unsigned int)v57 || v43 >= v56 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v154, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, v154);
                sub_233E40((__int64)v154);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v144 = (3 * v43 + 1) >> 1;
              v58 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v152 - 8LL), v57);
              *(_QWORD *)v152 = v58 + 2;
              *v58 = v144;
              v43 = v58[1];
            }
            *(_QWORD *)(*(_QWORD *)v152 + 8LL * v43) = v42;
            *(_DWORD *)(*(_QWORD *)v152 - 4LL) = v43 + 1;
            v44 = *(v15 - 1);
            if ( v44 == *(v15 - 2) )
            {
              v45 = (3 * v44 + 1) >> 1;
              v46 = v45 + 8;
              if ( v44 + 8 >= (unsigned int)v46 || v44 >= v45 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v154, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v154);
                sub_233E40((__int64)v154);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v47 = (unsigned int *)sub_186B300(v15 - 2, v46);
              *v47 = v45;
              v15 = v47 + 2;
              v44 = v47[1];
            }
            v41 += 8;
            *((_BYTE *)v15 + v44) = 0;
            *(v15 - 1) = v44 + 1;
          }
          while ( v143 + 8LL * v141 != v41 );
        }
        v140 = v143 + 72;
        v59 = *(_DWORD *)(*(_QWORD *)v152 - 4LL);
        sub_6226D0((int)v154, a1, *(_QWORD *)(v143 + 40));
        v60 = *(_QWORD *)v154;
        v145 = v155;
        v61 = sub_62C680(v151, v154[0], v59, v152[0], (_DWORD)v15, (int)v143 + 72, 1);
        v150 = v61;
        if ( v61 )
          sub_62A000(v151, v61);
        if ( v13 )
          sub_62A410(v151, v13);
        if ( v60 )
        {
          v62 = (*(_DWORD *)(v60 + 8))-- == 1;
          if ( v62 )
            sub_15D7BC0(v145, v60);
        }
        sub_63DAD0(ptr, v150, a3);
        v63 = *(_QWORD *)(*(_QWORD *)(v143 + 40) + 16LL);
        v64 = (__int64 *)a2[19];
        v65 = *((unsigned int *)a2 + 40);
        v66 = *(_DWORD *)(v63 + 12);
        v67 = v65 - 1;
        v65 *= 8;
        v68 = (__int64 *)((char *)v64 + v65);
        v69 = 8LL * (v66 & v67);
        v70 = &v64[(unsigned __int64)v69 / 8];
        if ( v69 != v65 )
        {
          for ( i = &v64[(unsigned __int64)v69 / 8]; v68 != i; ++i )
          {
            v72 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v72 + 12) == v66 && v63 == v72 )
              {
LABEL_102:
                v95 = *(_QWORD *)(*(_QWORD *)(v150 + 40) + 16LL);
                if ( v95 )
                  ++*(_DWORD *)(v95 + 8);
                v96 = (_QWORD *)ptr[29];
                if ( v96 )
                {
                  v97 = *((_DWORD *)v96 - 1);
                  if ( v97 == *((_DWORD *)v96 - 2) )
                  {
                    v118 = (3 * v97 + 1) >> 1;
                    v119 = 8 * v118 + 8;
                    if ( 8 * v97 + 8 >= v119 || v97 >= v118 )
                    {
                      v9 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v154, "Overflow encountered when expanding vector");
                      *v9 = (char *)off_1C63128;
                      sub_2333C0(v9 + 1, v154);
                      sub_233E40((__int64)v154);
                      __cxa_throw(
                        v9,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v120 = (unsigned int *)sub_186B300(v96 - 1, v119);
                    v96 = v120 + 2;
                    *v120 = v118;
                    ptr[29] = v120 + 2;
                    LODWORD(v120) = v120[1];
                    v100 = &v96[(unsigned int)v120];
                    v99 = (_DWORD)v120 + 1;
                  }
                  else
                  {
                    v98 = v97;
                    v99 = v97 + 1;
                    v100 = &v96[v98];
                  }
                }
                else
                {
                  v132 = (_QWORD *)sub_186B270(0x18u);
                  *v132 = 2;
                  v96 = v132 + 1;
                  ptr[29] = v132 + 1;
                  v100 = v132 + 1;
                  v99 = 1;
                }
                *v100 = v95;
                *((_DWORD *)v96 - 1) = v99;
                v101 = *((unsigned int *)ptr + 40);
                v102 = 2 * v101;
                if ( 3 * (int)v101 < (unsigned int)(4 * (*((_DWORD *)ptr + 41) + *((_DWORD *)ptr + 42))) )
                {
                  v121 = v102;
                  v138 = 2 * v101;
                  v146 = 8LL * v102;
                  v122 = (_QWORD *)sub_186B270(v146);
                  v123 = v138;
                  v105 = v146;
                  v103 = v122;
                  if ( v138 )
                  {
                    memset(v122, 0, 8 * v121);
                    v105 = v146;
                    v123 = v138;
                  }
                  v104 = v123 - 1;
                  v106 = (_QWORD *)((char *)v103 + v105);
                  v124 = (char *)ptr[19];
                  v125 = &v124[8 * *((unsigned int *)ptr + 40)];
                  if ( v124 != v125 )
                  {
                    do
                    {
                      while ( *(_QWORD *)v124 <= 1u )
                      {
                        v124 += 8;
                        if ( v125 == v124 )
                          goto LABEL_146;
                      }
                      v126 = 8LL * (*(_DWORD *)(*(_QWORD *)v124 + 12LL) & v104);
                      v127 = &v103[(unsigned __int64)v126 / 8];
                      if ( v105 == v126 )
                      {
LABEL_150:
                        if ( v103 == v127 )
                        {
LABEL_158:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v128 = *(__int64 **)v152;
                        v129 = v103;
                        while ( *v129 )
                        {
                          if ( v127 == ++v129 )
                            goto LABEL_158;
                        }
                      }
                      else
                      {
                        v128 = *(__int64 **)v152;
                        v129 = &v103[(unsigned __int64)v126 / 8];
                        while ( *v129 )
                        {
                          if ( v106 == ++v129 )
                            goto LABEL_150;
                        }
                      }
                      v130 = *(_QWORD *)v124;
                      v124 += 8;
                      *(_QWORD *)v152 = v128;
                      *v129 = v130;
                    }
                    while ( v125 != v124 );
LABEL_146:
                    v125 = (char *)ptr[19];
                  }
                  if ( v125 )
                  {
                    v133 = v123;
                    v139 = v105;
                    v147 = v123 - 1;
                    sub_186B220(v125);
                    v123 = v133;
                    v105 = v139;
                    v104 = v147;
                  }
                  ptr[19] = v103;
                  *((_DWORD *)ptr + 40) = v123;
                  *((_DWORD *)ptr + 42) = 0;
                }
                else
                {
                  v103 = (_QWORD *)ptr[19];
                  v104 = v101 - 1;
                  v105 = 8 * v101;
                  v106 = (_QWORD *)((char *)v103 + v105);
                }
                v107 = *(_DWORD *)(v95 + 12);
                v108 = 8LL * (v107 & v104);
                v109 = &v103[(unsigned __int64)v108 / 8];
                if ( v108 == v105 )
                {
                  v111 = nullptr;
LABEL_117:
                  if ( v109 == v103 )
                  {
LABEL_125:
                    sub_1872CE0("");
                    sub_1873130(114, 405);
                  }
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v113 = *v103;
                      if ( *v103 <= 1u )
                        break;
                      if ( *(_DWORD *)(v113 + 12) == v107 && v95 == v113 )
                      {
                        *v103 = v95;
                        goto LABEL_126;
                      }
                      if ( v109 == ++v103 )
                        goto LABEL_125;
                    }
                    if ( !v113 )
                      break;
                    v111 = v103++;
                    if ( v109 == v103 )
                      goto LABEL_125;
                  }
                  if ( v111 )
                    goto LABEL_156;
                  v111 = v103;
                }
                else
                {
                  v110 = &v103[(unsigned __int64)v108 / 8];
                  v111 = nullptr;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v112 = *v110;
                      if ( *v110 <= 1u )
                        break;
                      if ( *(_DWORD *)(v112 + 12) == v107 && v95 == v112 )
                      {
                        *v110 = v95;
                        goto LABEL_126;
                      }
                      if ( ++v110 == v106 )
                        goto LABEL_117;
                    }
                    if ( !v112 )
                      break;
                    v111 = v110++;
                    if ( v110 == v106 )
                      goto LABEL_117;
                  }
                  if ( v111 )
LABEL_156:
                    --*((_DWORD *)ptr + 42);
                  else
                    v111 = v110;
                }
                *v111 = v95;
                ++*((_DWORD *)ptr + 41);
LABEL_126:
                sub_622ED0((int)v154, a1, *(_QWORD *)(v143 + 40));
                v114 = *(_QWORD *)v154;
                v115 = v155;
                v116 = sub_62C680(v151, v154[0], 0, 0, 0, v140, 1);
                v117 = v116;
                if ( v116 )
                  sub_62A000(v151, v116);
                sub_62A410(v151, v150);
                if ( v114 )
                {
                  v62 = (*(_DWORD *)(v114 + 8))-- == 1;
                  if ( v62 )
                    sub_15D7BC0(v115, v114);
                }
                sub_63DAD0(ptr, v117, a3);
                v150 = v117;
                goto LABEL_58;
              }
            }
            else if ( !v72 )
            {
              goto LABEL_58;
            }
          }
        }
        for ( ; v70 != v64; ++v64 )
        {
          v81 = *v64;
          if ( (unsigned __int64)*v64 > 1 )
          {
            if ( *(_DWORD *)(v81 + 12) == v66 && v63 == v81 )
              goto LABEL_102;
          }
          else if ( !v81 )
          {
            break;
          }
        }
LABEL_58:
        if ( v141 )
        {
          v73 = 0;
          while ( 1 )
          {
            v74 = v73 + *(_DWORD *)(*(_QWORD *)v152 - 4LL) - v141;
            sub_622ED0((int)v154, a1, *(_QWORD *)(v143 + 8 * v73 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            v75 = *(_QWORD *)v154;
            v76 = v155;
            v13 = sub_62C680(v151, v154[0], v74, v152[0], (_DWORD)v15, v140, 1);
            if ( v13 )
              sub_62A000(v151, v13);
            if ( v150 )
              sub_62A410(v151, v150);
            if ( v75 )
            {
              v62 = (*(_DWORD *)(v75 + 8))-- == 1;
              if ( v62 )
                sub_15D7BC0(v76, v75);
            }
            sub_63DAD0(ptr, v13, a3);
            if ( v141 == ++v73 )
              break;
            v150 = v13;
          }
        }
        else
        {
          v13 = v150;
        }
        v137 += 8;
        if ( v137 == v134 )
        {
          sub_186B220(v15 - 2);
          v92 = *(__int64 **)v152;
          v93 = *(_QWORD *)v152 + 8LL * *(unsigned int *)(*(_QWORD *)v152 - 4LL);
          if ( *(_QWORD *)v152 < v93 )
          {
            do
            {
              v94 = *v92;
              if ( *v92 )
              {
                v62 = (*(_DWORD *)(v94 + 8))-- == 1;
                if ( v62 )
                  sub_15D7BC0(v136, v94);
              }
              ++v92;
            }
            while ( (unsigned __int64)v92 < v93 );
          }
          sub_186B220((void *)(*(_QWORD *)v152 - 8LL));
          if ( v13 )
            sub_62A410(v151, v13);
          return ptr;
        }
        v77 = *(__int64 **)v152;
        v78 = *(_QWORD *)(a2[3] + v137);
        v14 = *(_DWORD *)(v78 + 56);
        v143 = v78;
        v141 = *(_DWORD *)(v78 + 68);
        v79 = *(_QWORD *)v152 + 8LL * *(unsigned int *)(*(_QWORD *)v152 - 4LL);
        if ( *(_QWORD *)v152 < v79 )
        {
          do
          {
            while ( 1 )
            {
              v80 = *v77;
              if ( *v77 )
              {
                v62 = (*(_DWORD *)(v80 + 8))-- == 1;
                if ( v62 )
                  break;
              }
              if ( (unsigned __int64)++v77 >= v79 )
                goto LABEL_77;
            }
            sub_15D7BC0(v136, v80);
            ++v77;
          }
          while ( (unsigned __int64)v77 < v79 );
        }
LABEL_77:
        *(_DWORD *)(*(_QWORD *)v152 - 4LL) = 0;
      }
      v131 = (_QWORD *)sub_186B270(0x18u);
      *v131 = 2;
      *(_QWORD *)v152 = v131 + 1;
      v36 = v131 + 1;
      v34 = v131 + 1;
      v35 = 1;
LABEL_24:
      *v36 = v31;
      *((_DWORD *)v34 - 1) = v35;
      if ( !v15 )
        goto LABEL_89;
      goto LABEL_25;
    }
  }
  return ptr;
}

