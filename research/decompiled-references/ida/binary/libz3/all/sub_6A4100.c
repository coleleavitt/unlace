__m128i *__fastcall sub_6A4100(__m128i *a1, __int64 a2, __int64 *a3, unsigned int a4, double a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdi
  char *v17; // rax
  char *v18; // rbp
  __int64 *v19; // r13
  __int32 v20; // r9d
  unsigned __int32 v21; // ecx
  unsigned int v22; // r10d
  __int64 v23; // r15
  __int32 v24; // r8d
  size_t v25; // r12
  char *v26; // r14
  unsigned int v27; // esi
  __int64 v28; // rax
  char *v29; // r10
  char *v30; // rax
  char *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rbp
  __int64 v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rax
  _DWORD *v41; // r14
  _DWORD *v42; // r15
  __int64 v43; // rdi
  unsigned int v44; // ecx
  __int64 v45; // rax
  char *v46; // rsi
  char *i; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // r12d
  _QWORD *v52; // rax
  _DWORD *v53; // rdi
  unsigned int v54; // r13d
  size_t v55; // rsi
  unsigned int *v56; // rax
  unsigned int v57; // eax
  unsigned int *v58; // r12
  unsigned int *v59; // r15
  __int64 v60; // r14
  _QWORD *v61; // rax
  unsigned int *v62; // rsi
  int v63; // eax
  unsigned int *v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rsi
  _QWORD *v67; // rdx
  __int64 v68; // rax
  unsigned int *v69; // rax
  unsigned int v70; // ecx
  char *v71; // rax
  __int64 v72; // rdx
  unsigned int v73; // r9d
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rsi
  __int64 v77; // r14
  char *v78; // rax
  __int32 v79; // r10d
  __int32 v80; // ecx
  __int64 v81; // r9
  char *v82; // rax
  char *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  _QWORD *v86; // rsi
  _QWORD *v87; // rdx
  __int64 v88; // rsi
  unsigned int v89; // ecx
  size_t v90; // rsi
  unsigned int *v91; // rax
  _QWORD *v92; // r14
  _QWORD *v93; // r15
  __int64 v94; // rsi
  __int64 v95; // rdi
  bool v96; // zf
  _DWORD *v97; // r14
  _DWORD *v98; // r15
  __int64 v99; // rsi
  int v100; // eax
  _QWORD *v101; // rsi
  __int64 v102; // r8
  _QWORD *v103; // rcx
  unsigned int v104; // eax
  unsigned int v105; // r10d
  size_t v106; // rsi
  unsigned int *v107; // rax
  __int64 v108; // rsi
  void (__fastcall *v109)(__int64, const char *); // rax
  size_t v110; // rax
  char *v111; // r10
  size_t v112; // r15
  size_t v113; // rcx
  __m128i v114; // xmm1
  __int64 *v115; // rbx
  void (__fastcall ***v116)(void *); // r14
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rbx
  _QWORD *v121; // rax
  __int64 *v122; // r13
  __int64 v123; // rsi
  __int64 v124; // rdi
  __int64 v125; // r14
  unsigned int *v126; // rbx
  unsigned __int64 v127; // r13
  __int64 v128; // rsi
  __int64 v129; // rax
  const char *v130; // rsi
  __int64 v131; // rcx
  char *v132; // rax
  void *v133; // rdi
  __int64 v134; // rcx
  unsigned __int64 v135; // rdi
  char *v136; // rax
  char **v137; // r15
  char **v138; // r15
  char **exception; // r12
  char **v140; // r12
  const char *srca; // [rsp+0h] [rbp-E8h]
  __int64 srcb; // [rsp+0h] [rbp-E8h]
  __int64 srcc; // [rsp+0h] [rbp-E8h]
  int v145; // [rsp+18h] [rbp-D0h]
  unsigned int v146; // [rsp+18h] [rbp-D0h]
  __int64 v147; // [rsp+18h] [rbp-D0h]
  __int64 v148; // [rsp+18h] [rbp-D0h]
  char *v149; // [rsp+18h] [rbp-D0h]
  __int64 v150; // [rsp+18h] [rbp-D0h]
  __int64 *v152; // [rsp+28h] [rbp-C0h]
  unsigned int *v153; // [rsp+28h] [rbp-C0h]
  unsigned int v154; // [rsp+28h] [rbp-C0h]
  unsigned int v155; // [rsp+28h] [rbp-C0h]
  __int32 v156; // [rsp+28h] [rbp-C0h]
  __m128i v158; // [rsp+38h] [rbp-B0h] BYREF
  __int64 *v159; // [rsp+48h] [rbp-A0h]
  char *v160; // [rsp+50h] [rbp-98h]
  __int32 v161; // [rsp+5Ch] [rbp-8Ch]
  _DWORD *v162; // [rsp+70h] [rbp-78h] BYREF
  unsigned int *v163; // [rsp+78h] [rbp-70h] BYREF
  __int64 v164; // [rsp+80h] [rbp-68h] BYREF
  __int64 *j; // [rsp+88h] [rbp-60h]
  __int64 v166[11]; // [rsp+90h] [rbp-58h] BYREF

  v5 = a2;
  v6 = *(_QWORD *)(a2 + 4624);
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  if ( *(_DWORD *)(a2 + 4560) != v7 || (v8 = a3[1]) != 0 && *(_DWORD *)(v8 - 4) )
  {
    *(_BYTE *)(a2 + 4744) = 0;
    sub_11C7890(a2 + 96);
    sub_786C50(a2 + 4544, *(_QWORD *)(a2 + 8), a2 + 4360, a2 + 96, a2 + 4648, a2 + 4504, 1);
    v11 = *(_QWORD *)(a2 + 4624);
    if ( v11 )
      v12 = *(_DWORD *)(v11 - 4);
    else
      v12 = 0;
    sub_787B60(
      v5 + 4544,
      v12 - *(_DWORD *)(v5 + 4560),
      v11 + 8 * *(_DWORD *)(v5 + 4560),
      v11 + 8 * *(_DWORD *)(v5 + 4560),
      v9,
      v10);
    v13 = *(_QWORD *)(v5 + 4704);
    if ( !v13 )
    {
      v13 = sub_186B270(0x68u);
      sub_781140(v13, *(_QWORD *)(v5 + 8));
      v116 = *(void (__fastcall ****)(void *))(v5 + 4704);
      ++*(_DWORD *)(v13 + 8);
      if ( v116 )
      {
        v96 = (*((_DWORD *)v116 + 2))-- == 1;
        if ( v96 )
        {
          (**v116)(v116);
          sub_186B220(v116);
        }
      }
      *(_QWORD *)(v5 + 4704) = v13;
    }
    a2 = v5 + 96;
    sub_7826B0(v13, v5 + 96, v5 + 4648);
    v14 = *(_QWORD *)(v5 + 4624);
    v15 = v14 ? *(_DWORD *)(v14 - 4) : 0;
    *(_DWORD *)(v5 + 4560) = v15;
    v16 = *(_QWORD *)(v5 + 8);
    if ( !(unsigned __int8)sub_18290A0(v16) )
    {
      sub_180B130(v16);
      if ( (unsigned __int8)sub_186A530(a5) )
      {
        sub_186A4C0(a5);
        v36 = sub_180B150(v16, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v37 = sub_17F35B0(v36, 0);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v37, "\n");
      }
      else
      {
        v34 = sub_180B150(v16, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17F35B0(v34, 0);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      a1->m128i_i64[0] = *(_QWORD *)(v5 + 8);
      a1->m128i_i64[1] = 0;
      return a1;
    }
  }
  sub_69B960(v5, a2);
  if ( !*(_BYTE *)(v5 + 3280) )
  {
    v17 = (char *)sub_186B270(0x40u);
    *(_OWORD *)v17 = 0;
    v18 = v17;
    *((_OWORD *)v17 + 1) = 0;
    *((_OWORD *)v17 + 2) = 0;
    *((_OWORD *)v17 + 3) = 0;
    v19 = (__int64 *)a3[1];
    if ( !v19 || (v152 = &v19[*((unsigned int *)v19 - 1)], v152 == v19) )
    {
      v145 = 0;
      v25 = 64;
      v24 = 7;
LABEL_47:
      v162 = nullptr;
      v41 = *(_DWORD **)(v5 + 4664);
      if ( !v41 )
        goto LABEL_58;
      v42 = &v41[4 * *(v41 - 1)];
      if ( v42 == v41 )
        goto LABEL_58;
      while ( !v145 )
      {
LABEL_76:
        v67 = v162;
        if ( v162 )
        {
          v68 = (unsigned int)*(v162 - 1);
          if ( (_DWORD)v68 == *(v162 - 2) )
          {
            v89 = (unsigned int)(3 * v68 + 1) >> 1;
            v90 = 4 * v89 + 8;
            if ( 4 * (int)v68 + 8 >= (unsigned int)v90 || (unsigned int)v68 >= v89 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v166, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v166);
              sub_233E40((__int64)v166);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v158.m128i_i32[0] = v24;
            v154 = (unsigned int)(3 * v68 + 1) >> 1;
            v91 = (unsigned int *)sub_186B300(v162 - 2, v90);
            v67 = v91 + 2;
            v24 = v158.m128i_i32[0];
            v162 = v91 + 2;
            *v91 = v154;
            v69 = &v91[v91[1] + 2];
          }
          else
          {
            v69 = &v162[v68];
          }
        }
        else
        {
          v156 = v24;
          v117 = (_QWORD *)sub_186B270(0x10u);
          v67 = v117 + 1;
          *v117 = 2;
          v24 = v156;
          v162 = v117 + 1;
          v69 = (unsigned int *)(v117 + 1);
        }
        v70 = v41[2];
        v41 += 4;
        *v69 = v70;
        ++*((_DWORD *)v67 - 1);
        if ( v42 == v41 )
          goto LABEL_58;
      }
      while ( 1 )
      {
LABEL_50:
        v43 = *(_QWORD *)v41;
        v44 = *(_DWORD *)(*(_QWORD *)v41 + 12LL);
        v45 = 8LL * (v24 & v44);
        v46 = &v18[v45];
        if ( v45 != v25 )
        {
          for ( i = &v18[v45]; &v18[v25] != i; i += 8 )
          {
            v48 = *(_QWORD *)i;
            if ( *(_QWORD *)i > 1u )
            {
              if ( *(_DWORD *)(v48 + 12) == v44 && v43 == v48 )
                goto LABEL_76;
            }
            else if ( !v48 )
            {
              goto LABEL_57;
            }
          }
        }
        v71 = v18;
        if ( v46 != v18 )
          break;
LABEL_57:
        v41 += 4;
        if ( v42 == v41 )
          goto LABEL_58;
      }
      while ( 1 )
      {
        v72 = *(_QWORD *)v71;
        if ( *(_QWORD *)v71 > 1u )
        {
          if ( *(_DWORD *)(v72 + 12) == v44 && v43 == v72 )
            goto LABEL_76;
        }
        else if ( !v72 )
        {
          v41 += 4;
          if ( v42 == v41 )
          {
LABEL_58:
            v163 = nullptr;
            v158.m128i_i32[2] = sub_11C7A80(v5 + 96, &v162, &v163, a4);
            v49 = *(_QWORD *)(v5 + 8);
            j = nullptr;
            v158.m128i_i64[0] = v49;
            v164 = v49;
            v50 = *(_QWORD *)(v5 + 3392);
            if ( v50 )
            {
              v51 = 2 * *(_DWORD *)(v50 - 4);
              if ( v51 )
              {
                v52 = (_QWORD *)sub_186B270(0x18u);
                v53 = v52 + 1;
                *v52 = 2;
                for ( j = v52 + 1; ; j = (__int64 *)(v56 + 2) )
                {
                  v57 = *(v53 - 2);
                  if ( v57 >= v51 )
                    break;
                  v54 = (3 * v57 + 1) >> 1;
                  v55 = 8 * v54 + 8;
                  if ( 8 * v57 + 8 >= (unsigned int)v55 || v57 >= v54 )
                  {
                    v140 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v166, "Overflow encountered when expanding vector");
                    *v140 = (char *)off_1C63128;
                    sub_2333C0(v140 + 1, v166);
                    sub_233E40((__int64)v166);
                    __cxa_throw(
                      v140,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v56 = (unsigned int *)sub_186B300(v53 - 2, v55);
                  v53 = v56 + 2;
                  *v56 = v54;
                }
                *(v53 - 1) = v51;
                memset(v53, 0, 8LL * v51);
              }
            }
            v159 = &v164;
            sub_7E6B80(v5 + 4648, &v164);
            v58 = v163;
            if ( v163 )
            {
              v59 = &v163[*(v163 - 1)];
              if ( v59 == v163 )
              {
                v58 = nullptr;
              }
              else
              {
                v60 = j[*v163];
                if ( v60 )
                  ++*(_DWORD *)(v60 + 8);
                v61 = (_QWORD *)sub_186B270(0x18u);
                v62 = (unsigned int *)(v61 + 1);
                *v61 = 2;
                v63 = 1;
                v64 = v58;
                v58 = v62;
                while ( 1 )
                {
                  ++v64;
                  *(_QWORD *)v62 = v60;
                  *(v58 - 1) = v63;
                  if ( v59 == v64 )
                    break;
                  v60 = j[*v64];
                  if ( v60 )
                    ++*(_DWORD *)(v60 + 8);
                  v65 = *(v58 - 1);
                  if ( v65 == *(v58 - 2) )
                  {
                    v73 = (3 * v65 + 1) >> 1;
                    v74 = 8 * v73 + 8;
                    if ( 8 * v65 + 8 >= (unsigned int)v74 || v65 >= v73 )
                    {
                      v138 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v166, "Overflow encountered when expanding vector");
                      *v138 = (char *)off_1C63128;
                      sub_2333C0(v138 + 1, v166);
                      sub_233E40((__int64)v166);
                      __cxa_throw(
                        v138,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v153 = v64;
                    v146 = (3 * v65 + 1) >> 1;
                    v75 = (unsigned int *)sub_186B300(v58 - 2, v74);
                    v76 = v75[1];
                    v58 = v75 + 2;
                    v64 = v153;
                    *v75 = v146;
                    LODWORD(v75) = v76;
                    v62 = &v58[2 * v76];
                    v63 = (_DWORD)v75 + 1;
                  }
                  else
                  {
                    v66 = v65;
                    v63 = v65 + 1;
                    v62 = &v58[2 * v66];
                  }
                }
              }
            }
            v92 = (_QWORD *)a3[1];
            if ( v92 )
            {
              v93 = &v92[*((unsigned int *)v92 - 1)];
              if ( v92 >= v93 )
                goto LABEL_127;
              do
              {
                while ( 1 )
                {
                  v94 = *v92;
                  if ( *v92 )
                  {
                    v95 = *a3;
                    v96 = (*(_DWORD *)(v94 + 8))-- == 1;
                    if ( v96 )
                      break;
                  }
                  if ( ++v92 >= v93 )
                    goto LABEL_126;
                }
                sub_15D7BC0(v95, v94);
                ++v92;
              }
              while ( v92 < v93 );
LABEL_126:
              v92 = (_QWORD *)a3[1];
              if ( v92 )
LABEL_127:
                *((_DWORD *)v92 - 1) = 0;
            }
            if ( v162 )
            {
              v97 = &v162[*(v162 - 1)];
              if ( v97 != v162 )
              {
                v98 = v162;
                do
                {
                  v102 = j[2 * *v98];
                  if ( v102 )
                  {
                    ++*(_DWORD *)(v102 + 8);
                    v103 = (_QWORD *)a3[1];
                    if ( v103 )
                    {
                      v104 = *((_DWORD *)v103 - 1);
                      if ( v104 == *((_DWORD *)v103 - 2) )
                      {
                        v105 = (3 * v104 + 1) >> 1;
                        v106 = 8 * v105 + 8;
                        if ( 8 * v104 + 8 >= (unsigned int)v106 || v104 >= v105 )
                        {
                          v137 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(v166, "Overflow encountered when expanding vector");
                          *v137 = (char *)off_1C63128;
                          sub_2333C0(v137 + 1, v166);
                          sub_233E40((__int64)v166);
                          __cxa_throw(
                            v137,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v155 = (3 * v104 + 1) >> 1;
                        v147 = v102;
                        v107 = (unsigned int *)sub_186B300(v103 - 1, v106);
                        v108 = v107[1];
                        v103 = v107 + 2;
                        v102 = v147;
                        *v107 = v155;
                        LODWORD(v107) = v108;
                        v101 = &v103[v108];
                        a3[1] = (__int64)v103;
                        v100 = (_DWORD)v107 + 1;
                      }
                      else
                      {
                        v99 = v104;
                        v100 = v104 + 1;
                        v101 = &v103[v99];
                      }
                    }
                    else
                    {
                      v148 = v102;
                      v118 = (_QWORD *)sub_186B270(0x18u);
                      *v118 = 2;
                      v103 = v118 + 1;
                      v102 = v148;
                      a3[1] = (__int64)(v118 + 1);
                      v101 = v118 + 1;
                      v100 = 1;
                    }
                    *v101 = v102;
                    *((_DWORD *)v103 - 1) = v100;
                  }
                  ++v98;
                }
                while ( v97 != v98 );
              }
            }
            if ( v158.m128i_i32[2] == -1 )
            {
              v129 = *(_QWORD *)(v5 + 8);
              a1->m128i_i64[0] = v129;
              a1->m128i_i64[1] = 0;
              v120 = *(_QWORD *)(v129 + 864);
              if ( v120 )
                ++*(_DWORD *)(v120 + 8);
            }
            else
            {
              if ( v158.m128i_i32[2] != 1 )
              {
                if ( v163 && *(v163 - 1) )
                  goto LABEL_153;
                v109 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v5 + 56LL);
                if ( v109 != sub_69B6E0 )
                {
                  v109(v5, *(const char **)(v5 + 3896));
                  goto LABEL_153;
                }
                srca = *(const char **)(v5 + 3896);
                v110 = strlen(srca);
                v111 = *(char **)(v5 + 4712);
                v112 = v110;
                if ( v111 == (char *)(v5 + 4728) )
                {
                  if ( v110 <= 0xF )
                    goto LABEL_147;
                  v130 = srca;
                  if ( v110 > 0x1D )
                  {
                    v111 = (char *)operator new(v110 + 1);
                    v131 = v112;
                  }
                  else
                  {
                    v111 = (char *)operator new(0x1Fu);
                    v131 = 30;
                  }
                }
                else
                {
                  v113 = *(_QWORD *)(v5 + 4728);
                  if ( v113 >= v110 )
                  {
LABEL_147:
                    if ( srca >= v111 && &v111[*(_QWORD *)(v5 + 4720)] >= srca )
                    {
                      std::string::_M_replace_cold();
                    }
                    else
                    {
                      if ( !v110 )
                        goto LABEL_152;
                      if ( v110 != 1 )
                      {
                        memcpy(*(void **)(v5 + 4712), srca, v110);
                        v111 = *(char **)(v5 + 4712);
                        goto LABEL_152;
                      }
                      *v111 = *srca;
                    }
                    v111 = *(char **)(v5 + 4712);
LABEL_152:
                    *(_QWORD *)(v5 + 4720) = v112;
                    v111[v112] = 0;
LABEL_153:
                    v114 = (__m128i)(unsigned __int64)v58;
                    v58 = nullptr;
                    v115 = j;
                    *a1 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v158), v114);
                    if ( !v115 )
                    {
LABEL_154:
                      if ( v163 )
                        sub_186B220(v163 - 2);
                      if ( v162 )
                        sub_186B220(v162 - 2);
                      if ( v18 )
                        sub_186B220(v18);
                      return a1;
                    }
LABEL_171:
                    v122 = &v115[*((unsigned int *)v115 - 1)];
                    if ( v115 >= v122 )
                      goto LABEL_178;
                    do
                    {
                      while ( 1 )
                      {
                        v123 = *v115;
                        if ( *v115 )
                        {
                          v124 = v164;
                          v96 = (*(_DWORD *)(v123 + 8))-- == 1;
                          if ( v96 )
                            break;
                        }
                        if ( ++v115 >= v122 )
                          goto LABEL_177;
                      }
                      sub_15D7BC0(v124, v123);
                      ++v115;
                    }
                    while ( v115 < v122 );
LABEL_177:
                    v115 = j;
                    if ( j )
LABEL_178:
                      sub_186B220(v115 - 1);
LABEL_179:
                    if ( v58 )
                    {
                      v125 = v158.m128i_i64[0];
                      v126 = v58;
                      v127 = (unsigned __int64)&v58[2 * *(v58 - 1)];
                      if ( (unsigned __int64)v58 < v127 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v128 = *(_QWORD *)v126;
                            if ( *(_QWORD *)v126 )
                            {
                              v96 = (*(_DWORD *)(v128 + 8))-- == 1;
                              if ( v96 )
                                break;
                            }
                            v126 += 2;
                            if ( (unsigned __int64)v126 >= v127 )
                              goto LABEL_186;
                          }
                          v126 += 2;
                          sub_15D7BC0(v125, v128);
                        }
                        while ( (unsigned __int64)v126 < v127 );
                      }
LABEL_186:
                      sub_186B220(v58 - 2);
                    }
                    goto LABEL_154;
                  }
                  v134 = 2 * v113;
                  if ( v110 < v134 )
                  {
                    v135 = v134 + 1;
                    if ( v134 < 0 )
                      std::__throw_bad_alloc();
                  }
                  else
                  {
                    v135 = v110 + 1;
                    v134 = v110;
                  }
                  v150 = v134;
                  v136 = (char *)operator new(v135);
                  v130 = srca;
                  v131 = v150;
                  v111 = v136;
                  if ( v112 == 1 )
                  {
                    *v136 = *srca;
                    goto LABEL_199;
                  }
                }
                srcb = v131;
                v132 = (char *)memcpy(v111, v130, v112);
                v131 = srcb;
                v111 = v132;
LABEL_199:
                v133 = *(void **)(v5 + 4712);
                if ( (void *)(v5 + 4728) != v133 )
                {
                  v149 = v111;
                  srcc = v131;
                  operator delete(v133, *(_QWORD *)(v5 + 4728) + 1LL);
                  v111 = v149;
                  v131 = srcc;
                }
                *(_QWORD *)(v5 + 4712) = v111;
                *(_QWORD *)(v5 + 4728) = v131;
                goto LABEL_152;
              }
              v119 = *(_QWORD *)(v5 + 8);
              a1->m128i_i64[0] = v119;
              a1->m128i_i64[1] = 0;
              v120 = *(_QWORD *)(v119 + 856);
              if ( v120 )
                ++*(_DWORD *)(v120 + 8);
            }
            v121 = (_QWORD *)sub_186B270(0x18u);
            a1->m128i_i64[1] = (__int64)(v121 + 1);
            v121[1] = v120;
            v115 = j;
            *v121 = 0x100000002LL;
            if ( v115 )
              goto LABEL_171;
            goto LABEL_179;
          }
          goto LABEL_50;
        }
        v71 += 8;
        if ( v46 == v71 )
          goto LABEL_57;
      }
    }
    v145 = 0;
    v20 = 0;
    v21 = 8;
    while ( 1 )
    {
      v22 = 2 * v21;
      v23 = *v19;
      if ( 3 * v21 >= 4 * (v20 + v145) )
      {
        v24 = v21 - 1;
        v25 = 8LL * v21;
        v26 = &v18[v25];
        goto LABEL_18;
      }
      v77 = v22;
      v158.m128i_i32[2] = v21;
      v25 = 8LL * v22;
      v158.m128i_i32[0] = 2 * v21;
      v78 = (char *)sub_186B270(v25);
      v79 = v158.m128i_i32[0];
      v80 = v158.m128i_i32[2];
      v81 = (__int64)v78;
      if ( v158.m128i_i32[0] )
        break;
      v83 = &v18[8 * v158.m128i_u32[2]];
      v26 = v78;
      v24 = -1;
      if ( v83 != v18 )
        goto LABEL_95;
LABEL_103:
      if ( v18 )
      {
        LODWORD(v159) = v79;
        v158.m128i_i32[2] = v24;
        v158.m128i_i64[0] = v81;
        sub_186B220(v18);
        v79 = (int)v159;
        v24 = v158.m128i_i32[2];
        v81 = v158.m128i_i64[0];
      }
      v18 = (char *)v81;
      v21 = v79;
      v20 = 0;
LABEL_18:
      v27 = *(_DWORD *)(v23 + 12);
      v28 = 8LL * (v24 & v27);
      v29 = &v18[v28];
      if ( v28 == v25 )
      {
        v31 = nullptr;
LABEL_26:
        if ( v29 != v18 )
        {
          v30 = v18;
          do
          {
            while ( 1 )
            {
              v33 = *(_QWORD *)v30;
              if ( *(_QWORD *)v30 <= 1u )
                break;
              if ( *(_DWORD *)(v33 + 12) == v27 && v23 == v33 )
                goto LABEL_115;
              v30 += 8;
              if ( v29 == v30 )
                goto LABEL_34;
            }
            if ( !v33 )
              goto LABEL_43;
            v31 = v30;
            v30 += 8;
          }
          while ( v29 != v30 );
        }
LABEL_34:
        LODWORD(v159) = v24;
        v158.m128i_i32[2] = v21;
        v158.m128i_i32[0] = v20;
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v30 = &v18[v28];
      v31 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v32 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 <= 1u )
            break;
          if ( *(_DWORD *)(v32 + 12) == v27 && v23 == v32 )
          {
LABEL_115:
            *(_QWORD *)v30 = v23;
            goto LABEL_46;
          }
          v30 += 8;
          if ( v30 == v26 )
            goto LABEL_26;
        }
        if ( !v32 )
          break;
        v31 = v30;
        v30 += 8;
        if ( v30 == v26 )
          goto LABEL_26;
      }
LABEL_43:
      if ( v31 )
        --v20;
      else
        v31 = v30;
      *(_QWORD *)v31 = v23;
      ++v145;
LABEL_46:
      if ( v152 == ++v19 )
        goto LABEL_47;
    }
    v158.m128i_i32[2] = v158.m128i_i32[0];
    v158.m128i_i32[0] = v80;
    v82 = (char *)memset(v78, 0, 8 * v77);
    v79 = v158.m128i_i32[2];
    v81 = (__int64)v82;
    v26 = &v82[v25];
    v24 = v158.m128i_i32[2] - 1;
    v83 = &v18[8 * v158.m128i_u32[0]];
LABEL_95:
    v84 = (__int64)v18;
    do
    {
      while ( *(_QWORD *)v84 <= 1u )
      {
        v84 += 8;
        if ( (char *)v84 == v83 )
          goto LABEL_103;
      }
      v85 = 8LL * (*(_DWORD *)(*(_QWORD *)v84 + 12LL) & (unsigned int)v24);
      v86 = (_QWORD *)(v81 + v85);
      if ( v25 == v85 )
      {
LABEL_106:
        if ( (_QWORD *)v81 == v86 )
        {
LABEL_114:
          v161 = v79;
          v160 = v83;
          LODWORD(v159) = v24;
          v158.m128i_i64[1] = v84;
          v158.m128i_i64[0] = v81;
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v87 = (_QWORD *)v81;
        while ( *v87 )
        {
          if ( v86 == ++v87 )
            goto LABEL_114;
        }
      }
      else
      {
        v87 = (_QWORD *)(v81 + v85);
        while ( *v87 )
        {
          if ( ++v87 == (_QWORD *)v26 )
            goto LABEL_106;
        }
      }
      v88 = *(_QWORD *)v84;
      v84 += 8;
      *v87 = v88;
    }
    while ( (char *)v84 != v83 );
    goto LABEL_103;
  }
  v38 = *(_QWORD *)(v5 + 8);
  a1->m128i_i64[0] = v38;
  a1->m128i_i64[1] = 0;
  v39 = *(_QWORD *)(v38 + 864);
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v40 = (_QWORD *)sub_186B270(0x18u);
  v40[1] = v39;
  a1->m128i_i64[1] = (__int64)(v40 + 1);
  *v40 = 0x100000002LL;
  return a1;
}

