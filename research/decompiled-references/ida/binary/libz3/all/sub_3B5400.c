__int64 __fastcall sub_3B5400(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, double a5)
{
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  unsigned int v10; // ebp
  __int64 v11; // r13
  __int64 v12; // r15
  char v13; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  _QWORD *v24; // rdx
  int v25; // eax
  unsigned int i; // r13d
  _QWORD *v27; // r12
  __int64 *v28; // r14
  __int64 v29; // rbx
  int v30; // ecx
  __int64 *v31; // rdi
  __int64 *v32; // rax
  __int64 v33; // rbp
  bool v34; // zf
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  _QWORD *v39; // rcx
  __int64 v40; // rdi
  size_t v41; // rsi
  __int64 v42; // rdi
  unsigned int v43; // ebp
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // r13
  __int64 v49; // rdi
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  _QWORD *v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rbp
  void *v56; // rdi
  unsigned __int64 v57; // rbx
  _QWORD *v58; // r15
  void *v59; // rdi
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // r13
  _QWORD *v62; // r12
  void *v63; // rdi
  unsigned int v64; // edx
  unsigned int v65; // ecx
  unsigned int *v66; // rax
  __int64 v67; // r13
  __int64 v68; // r14
  __int64 v69; // r13
  unsigned int v70; // ebx
  unsigned int v71; // edx
  unsigned int *v72; // rax
  _QWORD *v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  __int64 *v77; // rcx
  __int64 v78; // r14
  __int64 v79; // r13
  __int64 v80; // rdi
  __int64 v81; // r13
  __int64 v82; // rdi
  void *v83; // rdi
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // r12
  unsigned __int64 v86; // rdx
  __int64 *v87; // r15
  _QWORD *v88; // rbx
  void *v89; // rdi
  unsigned __int64 v90; // r13
  unsigned __int64 v91; // r14
  unsigned __int64 v92; // rdx
  _QWORD *v93; // rbp
  void *v94; // rdi
  unsigned __int64 v95; // r12
  unsigned __int64 v96; // r13
  unsigned __int64 v97; // rbx
  unsigned __int64 v98; // r12
  _QWORD *v99; // rbp
  void *v100; // rdi
  __int64 v101; // r13
  _QWORD *v102; // rax
  unsigned int v103; // ecx
  unsigned int *v104; // rax
  __int64 v105; // r13
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  _QWORD *v108; // rax
  char **v109; // rbp
  __int64 v110; // rdx
  char **v111; // rbp
  __int64 v112; // rdx
  char **exception; // rbp
  __int64 v114; // rdx
  char **v115; // rbp
  __int64 v116; // rdx
  unsigned __int64 v118; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v120; // [rsp+10h] [rbp-A8h]
  char v121; // [rsp+18h] [rbp-A0h]
  __int64 v122; // [rsp+18h] [rbp-A0h]
  int v123; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v124; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v125; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v126; // [rsp+18h] [rbp-A0h]
  _QWORD *v127; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v128; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v129; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v130; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v131; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v133; // [rsp+20h] [rbp-98h]
  unsigned __int64 v134; // [rsp+20h] [rbp-98h]
  __int64 v135; // [rsp+28h] [rbp-90h]
  __int64 v136; // [rsp+28h] [rbp-90h]
  unsigned int v137; // [rsp+28h] [rbp-90h]
  __int64 v138; // [rsp+28h] [rbp-90h]
  _QWORD *v139; // [rsp+28h] [rbp-90h]
  __int64 v140; // [rsp+28h] [rbp-90h]
  unsigned int v141; // [rsp+28h] [rbp-90h]
  __int64 v142; // [rsp+28h] [rbp-90h]
  __int64 v143; // [rsp+30h] [rbp-88h]
  __int64 v144; // [rsp+30h] [rbp-88h]
  unsigned __int64 v145; // [rsp+30h] [rbp-88h]
  unsigned int v146; // [rsp+3Ch] [rbp-7Ch]
  __int64 v147; // [rsp+40h] [rbp-78h]
  unsigned __int64 v148; // [rsp+48h] [rbp-70h]
  __int64 v149[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a3 + 8);
  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v46 = *(_QWORD *)(a2 + 8);
      v47 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_182A9A0(a1 + 32, v47, v46);
      v48 = sub_180B150(a1 + 32, v47);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_182A9A0(a1 + 32, v48, v6);
      v49 = sub_180B150(a1 + 32, v48);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v49, "\n");
    }
    else
    {
      v67 = *(_QWORD *)(a2 + 8);
      v68 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_182A9A0(a1 + 32, v68, v67);
      v69 = sub_180B150(a1 + 32, v68);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_182A9A0(a1 + 32, v69, v6);
      sub_180B150(a1 + 32, v69);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v7 = *(_QWORD *)(a1 + 592);
  v8 = *(_QWORD *)(a2 + 8);
  result = sub_182A660(v7, v8, *(_QWORD *)(a3 + 8));
  v121 = result;
  if ( !(_BYTE)result )
  {
    result = *(_QWORD *)(a2 + 24);
    ++*(_DWORD *)(a1 + 648);
    v10 = 0;
    if ( !result )
      goto LABEL_9;
    while ( v10 < *(_DWORD *)(result - 4) )
    {
      v11 = a1 + 32;
      v12 = *(_QWORD *)(result + 8LL * v10);
      ++*(_DWORD *)(a1 + 652);
      if ( (unsigned int)sub_180B130(v7) > 9 )
      {
        if ( (unsigned __int8)sub_186A530() )
        {
          sub_186A4C0();
          v11 = a1 + 32;
          v135 = *(_QWORD *)(v12 + 8);
          v143 = sub_180B150(v7, v8);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_182A9A0(a1 + 32, v143, v135);
          sub_180B150(a1 + 32, v143);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_182A680(a1 + 32, *(_QWORD *)(v12 + 8), v6, a5);
          v40 = std::ostream::_M_insert<bool>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v40, "\n");
        }
        else
        {
          v11 = a1 + 32;
          v136 = *(_QWORD *)(v12 + 8);
          v144 = sub_180B150(v7, v8);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_182A9A0(a1 + 32, v144, v136);
          sub_180B150(a1 + 32, v144);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_182A680(a1 + 32, *(_QWORD *)(v12 + 8), v6, a5);
          std::ostream::_M_insert<bool>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      v8 = *(_QWORD *)(v12 + 8);
      v7 = v11;
      v13 = sub_182A680(v11, v8, v6, a5);
      if ( v13 )
      {
        v8 = v12;
        v7 = a1;
        ++v10;
        sub_3B5400(a1, v12, a3, a4);
        result = *(_QWORD *)(a2 + 24);
        if ( !result )
          return result;
        v121 = v13;
      }
      else
      {
        ++v10;
        result = *(_QWORD *)(a2 + 24);
        if ( !result )
          break;
      }
    }
    if ( !v121 )
    {
LABEL_9:
      v122 = a1 + 32;
      v14 = sub_1829A10(a1 + 32);
      v15 = 0;
      v16 = 0;
      v17 = *(_QWORD *)(a2 + 24);
      if ( v17 )
      {
        do
        {
          if ( v16 >= *(_DWORD *)(v17 - 4) )
            break;
          v18 = a1 + 32;
          v19 = v6;
          v20 = *(_QWORD *)(v17 + 8LL * v16);
          if ( (unsigned __int8)sub_182A680(v122, v6, *(_QWORD *)(v20 + 8), a5) )
          {
            ++*(_DWORD *)(v20 + 32);
            if ( v15 )
            {
              v21 = *(_DWORD *)(v15 - 4);
              if ( v21 == *(_DWORD *)(v15 - 8) )
              {
                v64 = (3 * v21 + 1) >> 1;
                v65 = 8 * v64 + 8;
                if ( 8 * v21 + 8 >= v65 || v21 >= v64 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_C7E7E(v149, "Overflow encountered when expanding vector", v114);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v149);
                  sub_233E40((__int64)v149);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v19 = v65;
                v18 = v15 - 8;
                v137 = (3 * v21 + 1) >> 1;
                v66 = (unsigned int *)sub_186B300((void *)(v15 - 8), v65);
                v15 = (unsigned __int64)(v66 + 2);
                *v66 = v137;
                LODWORD(v66) = v66[1];
                v24 = (_QWORD *)(v15 + 8LL * (unsigned int)v66);
                v23 = (_DWORD)v66 + 1;
              }
              else
              {
                v22 = v21;
                v23 = v21 + 1;
                v24 = (_QWORD *)(v15 + 8 * v22);
              }
            }
            else
            {
              v18 = 24;
              v106 = (_QWORD *)sub_186B270(0x18u);
              v15 = (unsigned __int64)(v106 + 1);
              *v106 = 2;
              v23 = 1;
              v24 = (_QWORD *)v15;
            }
            *v24 = v20;
            *(_DWORD *)(v15 - 4) = v23;
            if ( (unsigned int)sub_180B130(v18) > 9 )
            {
              if ( (unsigned __int8)sub_186A530() )
              {
                sub_186A4C0();
                v138 = *(_QWORD *)(v20 + 8);
                v81 = sub_180B150(v18, v19);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_182A9A0(v122, v81, v138);
                v82 = sub_180B150(v122, v81);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_186A500(v82, "\n");
              }
              else
              {
                v140 = *(_QWORD *)(v20 + 8);
                v101 = sub_180B150(v18, v19);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_182A9A0(v122, v101, v140);
                sub_180B150(v122, v101);
                std::__ostream_insert<char,std::char_traits<char>>();
              }
            }
            v25 = *(_DWORD *)(a1 + 652) + 1;
          }
          else
          {
            v41 = *(_QWORD *)(v20 + 8);
            v42 = a1 + 32;
            if ( (unsigned __int8)sub_182A790(v122, v41, v6, v14) )
            {
              v73 = (_QWORD *)*a4;
              if ( *a4 )
              {
                v74 = *((_DWORD *)v73 - 1);
                if ( v74 == *((_DWORD *)v73 - 2) )
                {
                  v103 = (3 * v74 + 1) >> 1;
                  v41 = 8 * v103 + 8;
                  if ( 8 * v74 + 8 >= (unsigned int)v41 || v74 >= v103 )
                  {
                    v111 = (char **)__cxa_allocate_exception(0x28u);
                    sub_C7E7E(v149, "Overflow encountered when expanding vector", v112);
                    *v111 = (char *)off_1C63128;
                    sub_2333C0(v111 + 1, v149);
                    sub_233E40((__int64)v149);
                    __cxa_throw(
                      v111,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v42 = (__int64)(v73 - 1);
                  v141 = (3 * v74 + 1) >> 1;
                  v104 = (unsigned int *)sub_186B300(v73 - 1, v41);
                  v73 = v104 + 2;
                  *a4 = v104 + 2;
                  *v104 = v141;
                  LODWORD(v104) = v104[1];
                  v77 = &v73[(unsigned int)v104];
                  v76 = (_DWORD)v104 + 1;
                }
                else
                {
                  v75 = v74;
                  v76 = v74 + 1;
                  v77 = &v73[v75];
                }
              }
              else
              {
                v42 = 24;
                v108 = (_QWORD *)sub_186B270(0x18u);
                *v108 = 2;
                v73 = v108 + 1;
                *a4 = v108 + 1;
                v77 = v108 + 1;
                v76 = 1;
              }
              *v77 = v14;
              *((_DWORD *)v73 - 1) = v76;
              if ( (unsigned int)sub_180B130(v42) > 9 )
              {
                if ( (unsigned __int8)sub_186A530() )
                {
                  sub_186A4C0();
                  v78 = *(_QWORD *)(v20 + 8);
                  v79 = sub_180B150(v42, v41);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_182A9A0(v122, v79, v78);
                  v80 = sub_180B150(v122, v79);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_186A500(v80, "\n");
                }
                else
                {
                  v105 = *(_QWORD *)(v20 + 8);
                  v142 = sub_180B150(v42, v41);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_182A9A0(v122, v142, v105);
                  sub_180B150(v122, v142);
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
              }
              v14 = sub_1829A10(v122);
              v25 = *(_DWORD *)(a1 + 652) + 2;
            }
            else
            {
              v25 = *(_DWORD *)(a1 + 652) + 2;
            }
          }
          *(_DWORD *)(a1 + 652) = v25;
          ++v16;
          v17 = *(_QWORD *)(a2 + 24);
        }
        while ( v17 );
        sub_182A4B0(v122, v14);
        if ( v15 )
        {
          for ( i = 0; ; ++i )
          {
            v27 = *(_QWORD **)(a2 + 24);
            if ( i >= *(_DWORD *)(v15 - 4) )
              break;
            v28 = (__int64 *)(v15 + 8LL * i);
            v29 = *v28;
            if ( v27 )
            {
              v30 = *((_DWORD *)v27 - 1);
              if ( v30 )
              {
                v31 = *(__int64 **)(a2 + 24);
                v32 = &v27[v30];
                while ( 1 )
                {
                  v33 = *v31;
                  if ( v29 == *v31 )
                    break;
                  if ( v32 == ++v31 )
                    goto LABEL_30;
                }
                if ( v31 + 1 != v32 )
                {
                  v123 = *((_DWORD *)v27 - 1);
                  memmove(v31, v31 + 1, (char *)(v32 - 1) - (char *)v31);
                  v30 = v123;
                }
                *((_DWORD *)v27 - 1) = v30 - 1;
                v34 = (*(_DWORD *)(v33 + 32))-- == 1;
                if ( v34 )
                {
                  v83 = *(void **)(v33 + 72);
                  if ( v83 )
                    sub_186B220(v83);
                  v84 = *(_QWORD *)(v33 + 24);
                  if ( v84 )
                  {
                    if ( v84 >= v84 + 8LL * *(unsigned int *)(v84 - 4) )
                      goto LABEL_129;
                    v148 = v15;
                    v85 = v84 + 8LL * *(unsigned int *)(v84 - 4);
                    v86 = *(_QWORD *)(v33 + 24);
                    v87 = (__int64 *)(v15 + 8LL * i);
                    v146 = i;
                    v147 = v33;
                    do
                    {
                      while ( 1 )
                      {
                        v88 = *(_QWORD **)v86;
                        v34 = (*(_DWORD *)(*(_QWORD *)v86 + 32LL))-- == 1;
                        if ( v34 )
                          break;
                        v86 += 8LL;
                        if ( v86 >= v85 )
                          goto LABEL_128;
                      }
                      v89 = (void *)v88[9];
                      if ( v89 )
                      {
                        v125 = v86;
                        sub_186B220(v89);
                        v86 = v125;
                      }
                      v90 = v88[3];
                      if ( v90 )
                      {
                        v91 = v90 + 8LL * *(unsigned int *)(v90 - 4);
                        if ( v90 >= v91 )
                          goto LABEL_126;
                        v145 = v86;
                        v92 = v88[3];
                        v134 = v85;
                        v139 = v88;
                        do
                        {
                          while ( 1 )
                          {
                            v93 = *(_QWORD **)v92;
                            v34 = (*(_DWORD *)(*(_QWORD *)v92 + 32LL))-- == 1;
                            if ( v34 )
                              break;
                            v92 += 8LL;
                            if ( v92 >= v91 )
                              goto LABEL_125;
                          }
                          v94 = (void *)v93[9];
                          if ( v94 )
                          {
                            v126 = v92;
                            sub_186B220(v94);
                            v92 = v126;
                          }
                          v95 = v93[3];
                          if ( v95 )
                          {
                            v96 = v95 + 8LL * *(unsigned int *)(v95 - 4);
                            if ( v95 >= v96 )
                              goto LABEL_123;
                            v97 = v93[3];
                            v127 = v93;
                            v98 = v92;
                            do
                            {
                              while ( 1 )
                              {
                                v99 = *(_QWORD **)v97;
                                v34 = (*(_DWORD *)(*(_QWORD *)v97 + 32LL))-- == 1;
                                if ( v34 )
                                  break;
                                v97 += 8LL;
                                if ( v97 >= v96 )
                                  goto LABEL_122;
                              }
                              v100 = (void *)v99[9];
                              if ( v100 )
                                sub_186B220(v100);
                              v97 += 8LL;
                              sub_3B2C00((__int64)(v99 + 2));
                              sub_186B220(v99);
                            }
                            while ( v97 < v96 );
LABEL_122:
                            v93 = v127;
                            v92 = v98;
                            v95 = v127[3];
                            if ( v95 )
                            {
LABEL_123:
                              v128 = v92;
                              sub_186B220((void *)(v95 - 8));
                              v92 = v128;
                            }
                          }
                          v129 = v92;
                          sub_186B220(v93);
                          v92 = v129 + 8;
                        }
                        while ( v129 + 8 < v91 );
LABEL_125:
                        v88 = v139;
                        v85 = v134;
                        v86 = v145;
                        v90 = v139[3];
                        if ( v90 )
                        {
LABEL_126:
                          v130 = v86;
                          sub_186B220((void *)(v90 - 8));
                          v86 = v130;
                        }
                      }
                      v131 = v86;
                      sub_186B220(v88);
                      v86 = v131 + 8;
                    }
                    while ( v131 + 8 < v85 );
LABEL_128:
                    v33 = v147;
                    v28 = v87;
                    i = v146;
                    v15 = v148;
                    v84 = *(_QWORD *)(v147 + 24);
                    if ( v84 )
LABEL_129:
                      sub_186B220((void *)(v84 - 8));
                  }
                  sub_186B220((void *)v33);
                }
                v29 = *v28;
              }
            }
LABEL_30:
            ++*(_DWORD *)(v29 + 32);
            v35 = *(_QWORD **)(a3 + 24);
            if ( v35 )
            {
              v36 = *((_DWORD *)v35 - 1);
              if ( v36 == *((_DWORD *)v35 - 2) )
              {
                v43 = (3 * v36 + 1) >> 1;
                v44 = 8 * v43 + 8;
                if ( 8 * v36 + 8 >= (unsigned int)v44 || v36 >= v43 )
                {
                  v115 = (char **)__cxa_allocate_exception(0x28u);
                  sub_C7E7E(v149, "Overflow encountered when expanding vector", v116);
                  *v115 = (char *)off_1C63128;
                  sub_2333C0(v115 + 1, v149);
                  sub_233E40((__int64)v149);
                  __cxa_throw(v115, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v45 = (unsigned int *)sub_186B300(v35 - 1, v44);
                v35 = v45 + 2;
                *v45 = v43;
                *(_QWORD *)(a3 + 24) = v45 + 2;
                LODWORD(v45) = v45[1];
                v39 = &v35[(unsigned int)v45];
                v38 = (_DWORD)v45 + 1;
              }
              else
              {
                v37 = v36;
                v38 = v36 + 1;
                v39 = &v35[v37];
              }
            }
            else
            {
              v102 = (_QWORD *)sub_186B270(0x18u);
              v35 = v102 + 1;
              *v102 = 2;
              v39 = v102 + 1;
              *(_QWORD *)(a3 + 24) = v102 + 1;
              v38 = 1;
            }
            *v39 = v29;
            *((_DWORD *)v35 - 1) = v38;
          }
LABEL_51:
          v50 = v27;
          ++*(_DWORD *)(a3 + 32);
          if ( v27 )
          {
            v51 = *((_DWORD *)v27 - 1);
            if ( v51 == *((_DWORD *)v27 - 2) )
            {
              v70 = (3 * v51 + 1) >> 1;
              v71 = 8 * v70 + 8;
              if ( 8 * v51 + 8 >= v71 || v51 >= v70 )
              {
                v109 = (char **)__cxa_allocate_exception(0x28u);
                sub_C7E7E(v149, "Overflow encountered when expanding vector", v110);
                *v109 = (char *)off_1C63128;
                sub_2333C0(v109 + 1, v149);
                sub_233E40((__int64)v149);
                __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v72 = (unsigned int *)sub_186B300(v27 - 1, v71);
              v50 = v72 + 2;
              *v72 = v70;
              *(_QWORD *)(a2 + 24) = v72 + 2;
              LODWORD(v72) = v72[1];
              v53 = &v50[(unsigned int)v72];
              result = (unsigned int)((_DWORD)v72 + 1);
            }
            else
            {
              v52 = v51;
              result = v51 + 1;
              v53 = &v27[v52];
            }
          }
          else
          {
            v107 = (_QWORD *)sub_186B270(0x18u);
            *v107 = 2;
            v50 = v107 + 1;
            *(_QWORD *)(a2 + 24) = v107 + 1;
            v53 = v107 + 1;
            result = 1;
          }
          *v53 = a3;
          *((_DWORD *)v50 - 1) = result;
          if ( v15 )
          {
            v54 = *(unsigned int *)(v15 - 4);
            if ( v15 < v15 + 8 * v54 )
            {
              v133 = v15;
              v118 = v15;
              v124 = v15 + 8 * v54;
              do
              {
                v55 = *(_QWORD **)v118;
                v34 = (*(_DWORD *)(*(_QWORD *)v118 + 32LL))-- == 1;
                if ( v34 )
                {
                  v56 = (void *)v55[9];
                  if ( v56 )
                    sub_186B220(v56);
                  v57 = v55[3];
                  if ( v57 )
                  {
                    v120 = v57 + 8LL * *(unsigned int *)(v57 - 4);
                    if ( v57 >= v120 )
                      goto LABEL_80;
                    do
                    {
                      while ( 1 )
                      {
                        v58 = *(_QWORD **)v57;
                        v34 = (*(_DWORD *)(*(_QWORD *)v57 + 32LL))-- == 1;
                        if ( v34 )
                          break;
                        v57 += 8LL;
                        if ( v57 >= v120 )
                          goto LABEL_79;
                      }
                      v59 = (void *)v58[9];
                      if ( v59 )
                        sub_186B220(v59);
                      v60 = v58[3];
                      if ( v60 )
                      {
                        v61 = v60 + 8LL * *(unsigned int *)(v60 - 4);
                        if ( v60 >= v61 )
                          goto LABEL_77;
                        do
                        {
                          while ( 1 )
                          {
                            v62 = *(_QWORD **)v60;
                            v34 = (*(_DWORD *)(*(_QWORD *)v60 + 32LL))-- == 1;
                            if ( v34 )
                              break;
                            v60 += 8LL;
                            if ( v60 >= v61 )
                              goto LABEL_76;
                          }
                          v63 = (void *)v62[9];
                          if ( v63 )
                            sub_186B220(v63);
                          v60 += 8LL;
                          sub_3B2C00((__int64)(v62 + 2));
                          sub_186B220(v62);
                        }
                        while ( v60 < v61 );
LABEL_76:
                        v60 = v58[3];
                        if ( v60 )
LABEL_77:
                          sub_186B220((void *)(v60 - 8));
                      }
                      v57 += 8LL;
                      sub_186B220(v58);
                    }
                    while ( v57 < v120 );
LABEL_79:
                    v57 = v55[3];
                    if ( v57 )
LABEL_80:
                      sub_186B220((void *)(v57 - 8));
                  }
                  sub_186B220(v55);
                }
                v118 += 8LL;
              }
              while ( v118 < v124 );
              v15 = v133;
            }
            return sub_186B220((void *)(v15 - 8));
          }
          return result;
        }
      }
      else
      {
        sub_182A4B0(v122, v14);
      }
      v15 = 0;
      v27 = *(_QWORD **)(a2 + 24);
      goto LABEL_51;
    }
  }
  return result;
}

