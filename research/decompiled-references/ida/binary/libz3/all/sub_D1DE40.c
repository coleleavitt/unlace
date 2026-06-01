__int64 __fastcall sub_D1DE40(__int64 a1, __int64 a2, char a3, char a4)
{
  _DWORD *v5; // rsi
  __int64 result; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // r12
  char v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // r14
  int v16; // eax
  __int64 v17; // r12
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  bool v23; // zf
  unsigned int *v24; // r12
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  unsigned int **v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // r8d
  int v34; // r9d
  __m128i v35; // xmm1
  __int64 v36; // rax
  __int64 v37; // rbp
  void *v38; // r13
  unsigned int v39; // ecx
  size_t v40; // rsi
  __int32 *v41; // rax
  __int32 v42; // ecx
  unsigned int v43; // ecx
  size_t v44; // rsi
  __int32 *v45; // rax
  __int32 v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbx
  int v51; // edx
  _QWORD *v52; // r12
  __int64 v53; // rdi
  __int64 v54; // rdi
  int *v55; // rbx
  int *v56; // rbp
  __int64 v57; // rsi
  void *v58; // rdi
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62; // edx
  __m128i *v63; // rbx
  __int32 v64; // r14d
  struct _Unwind_Exception *v65; // rcx
  __m128i *v66; // r12
  int v67; // esi
  __int64 v68; // rax
  __m128i *v69; // rdi
  __m128i *v70; // rax
  __int64 *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rdx
  unsigned int v76; // eax
  __int64 *v77; // r12
  __int64 v78; // rax
  _QWORD *v79; // rcx
  __int64 v80; // rsi
  __m128i si128; // xmm3
  __m128i v82; // xmm0
  int *v83; // rcx
  __int64 v84; // rax
  _DWORD *v85; // rax
  int v86; // edx
  int v87; // edx
  int v88; // r14d
  char *v89; // rax
  int *v90; // rdi
  unsigned __int64 v91; // rax
  __int64 v92; // rsi
  unsigned __int64 v93; // rax
  __int64 v94; // r8
  unsigned int v95; // ebx
  unsigned int v96; // ecx
  unsigned int *v97; // rax
  char *v98; // rax
  int *v99; // rdi
  int v100; // ecx
  unsigned __int64 v101; // rax
  __int64 v102; // rsi
  __m128i *v103; // rax
  __int32 v104; // r10d
  __m128i *v105; // r8
  __m128i *v106; // rdi
  __int64 v107; // rax
  const __m128i *v108; // r13
  struct _Unwind_Exception *v109; // r11
  __int64 v110; // rax
  __m128i *v111; // rdx
  __m128i *v112; // rax
  __int64 v113; // rax
  __int64 v114; // rbx
  _QWORD *v115; // rdx
  unsigned __int64 v116; // rax
  __int64 v117; // r8
  __int64 v118; // rax
  char **v119; // r14
  __int64 v120; // rdx
  char **exception; // rbp
  __int64 v122; // rdx
  char **v123; // r14
  __int64 v124; // rdx
  struct _Unwind_Exception *v125[2]; // [rsp+0h] [rbp-178h] BYREF
  __int64 *v126; // [rsp+10h] [rbp-168h]
  __m128i v127; // [rsp+18h] [rbp-160h] BYREF
  void *v128; // [rsp+28h] [rbp-150h] BYREF
  int *v129; // [rsp+30h] [rbp-148h]
  __m128i *v130; // [rsp+38h] [rbp-140h]
  __int64 v131; // [rsp+40h] [rbp-138h]
  _QWORD *v132; // [rsp+48h] [rbp-130h]
  int v133; // [rsp+50h] [rbp-128h]
  int v134[2]; // [rsp+58h] [rbp-120h] BYREF
  int v135[4]; // [rsp+60h] [rbp-118h] BYREF
  int v136[2]; // [rsp+70h] [rbp-108h] BYREF
  int v137[2]; // [rsp+78h] [rbp-100h]
  __m128i v138; // [rsp+80h] [rbp-F8h] BYREF
  int v139; // [rsp+90h] [rbp-E8h]
  int v140; // [rsp+98h] [rbp-E0h]
  void *v141; // [rsp+A0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+A8h] [rbp-D0h]
  __int64 v143; // [rsp+B0h] [rbp-C8h]
  int v144[4]; // [rsp+B8h] [rbp-C0h] BYREF
  char v145; // [rsp+C8h] [rbp-B0h]
  int v146; // [rsp+D0h] [rbp-A8h]
  int v147; // [rsp+D8h] [rbp-A0h]
  int v148; // [rsp+E0h] [rbp-98h]
  int v149; // [rsp+E8h] [rbp-90h]
  int v150; // [rsp+F0h] [rbp-88h]
  int v151; // [rsp+F8h] [rbp-80h]
  int v152; // [rsp+100h] [rbp-78h]
  int v153; // [rsp+108h] [rbp-70h]
  int v154; // [rsp+110h] [rbp-68h]
  int v155; // [rsp+118h] [rbp-60h]
  int v156; // [rsp+120h] [rbp-58h]
  int v157; // [rsp+128h] [rbp-50h]
  int v158; // [rsp+130h] [rbp-48h]
  int v159; // [rsp+138h] [rbp-40h]
  int v160; // [rsp+140h] [rbp-38h]
  int v161; // [rsp+148h] [rbp-30h]
  int v162; // [rsp+150h] [rbp-28h]
  char v163; // [rsp+158h] [rbp-20h]

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  result = 0;
  if ( v5 )
  {
    if ( !*v5 && v5[1] == 5 )
    {
      if ( !a3 )
        goto LABEL_12;
      v8 = *(unsigned int *)(a2 + 24);
      v9 = (__int64 *)(a2 + 32);
      LOBYTE(v141) = 1;
      v8 *= 8;
      v10 = (__int64 *)(a2 + 32 + v8);
      if ( !v8 )
        goto LABEL_12;
      v11 = a4;
      do
      {
        v12 = *v9++;
        sub_D18670(a1, v12, &v141, 0);
      }
      while ( v10 != v9 );
      a4 = v11;
      result = 1;
      if ( (_BYTE)v141 )
      {
LABEL_12:
        v128 = *(void **)a1;
        v141 = v128;
        v129 = v144;
        ptr = v144;
        v143 = 0x1000000000LL;
        if ( !a4 )
        {
          v60 = sub_D17130(a1);
          v131 = v60;
          if ( v60 )
            ++*(_DWORD *)(v60 + 8);
          v61 = sub_15E1A70(*(_QWORD *)a1);
          v127.m128i_i64[0] = v61;
          if ( v61 )
            ++*(_DWORD *)(v61 + 8);
          v62 = *(_DWORD *)(a1 + 24);
          if ( 3 * v62 < 4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32)) )
          {
            LODWORD(v126) = 2 * v62;
            v125[0] = (struct _Unwind_Exception *)(32LL * v62);
            v103 = (__m128i *)sub_186B270((size_t)v125[0]);
            v65 = v125[0];
            v104 = (int)v126;
            v63 = v103;
            v105 = (__m128i *)((char *)v125[0] + (unsigned __int64)v103);
            if ( (_DWORD)v126 )
            {
              if ( ((__int64)v125[0] & 0x10) == 0 || (*v103 = 0, ++v103, v103 != v105) )
              {
                do
                {
                  *v103 = 0;
                  v103 += 2;
                  v103[-1] = 0;
                }
                while ( v103 != v105 );
              }
            }
            v106 = *(__m128i **)(a1 + 16);
            v64 = v104 - 1;
            v66 = v105;
            v107 = *(unsigned int *)(a1 + 24);
            v108 = v106;
            v109 = (struct _Unwind_Exception *)&v106[v107];
            if ( v106 != &v106[v107] )
            {
              do
              {
                if ( v108->m128i_i64[0] > 1uLL )
                {
                  v110 = 16LL * (*(_DWORD *)(v108->m128i_i64[0] + 12) & (unsigned int)v64);
                  v111 = &v63[(unsigned __int64)v110 / 0x10];
                  if ( v65 == (struct _Unwind_Exception *)v110 )
                  {
LABEL_174:
                    if ( v63 == v111 )
                    {
LABEL_187:
                      v130 = v105;
                      v127.m128i_i32[2] = v104;
                      v126 = (__int64 *)v65;
                      v125[0] = v109;
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v112 = v63;
                    while ( v112->m128i_i64[0] )
                    {
                      if ( v111 == ++v112 )
                        goto LABEL_187;
                    }
                  }
                  else
                  {
                    v112 = &v63[(unsigned __int64)v110 / 0x10];
                    while ( v112->m128i_i64[0] )
                    {
                      if ( v105 == ++v112 )
                        goto LABEL_174;
                    }
                  }
                  *v112 = _mm_loadu_si128(v108);
                }
                ++v108;
              }
              while ( v109 != (struct _Unwind_Exception *)v108 );
              v106 = *(__m128i **)(a1 + 16);
            }
            if ( v106 )
            {
              LODWORD(v126) = v104;
              v125[0] = v65;
              sub_186B220(v106);
              v65 = v125[0];
              v104 = (int)v126;
            }
            *(_QWORD *)(a1 + 16) = v63;
            *(_DWORD *)(a1 + 24) = v104;
            *(_DWORD *)(a1 + 32) = 0;
          }
          else
          {
            v63 = *(__m128i **)(a1 + 16);
            v64 = v62 - 1;
            v65 = (struct _Unwind_Exception *)(16LL * v62);
            v66 = (__m128i *)((char *)v65 + (_QWORD)v63);
          }
          v67 = *(_DWORD *)(a2 + 12);
          v68 = 16LL * (v67 & (unsigned int)v64);
          v69 = &v63[(unsigned __int64)v68 / 0x10];
          if ( (struct _Unwind_Exception *)v68 != v65 )
          {
            v70 = &v63[(unsigned __int64)v68 / 0x10];
            v71 = nullptr;
            while ( 1 )
            {
              v72 = v70->m128i_i64[0];
              if ( v70->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v72 + 12) == v67 && a2 == v72 )
                {
                  v114 = v131;
                  v70->m128i_i64[0] = a2;
                  v70->m128i_i64[1] = v114;
                  goto LABEL_103;
                }
              }
              else
              {
                if ( !v72 )
                {
                  if ( v71 )
                    goto LABEL_184;
                  v71 = (__int64 *)v70;
                  goto LABEL_185;
                }
                v71 = (__int64 *)v70;
              }
              if ( ++v70 == v66 )
                goto LABEL_92;
            }
          }
          v71 = nullptr;
          while ( 1 )
          {
LABEL_92:
            if ( v69 == v63 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v73 = v63->m128i_i64[0];
            if ( v63->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v73 + 12) == v67 && a2 == v73 )
              {
                v118 = v131;
                v63->m128i_i64[0] = a2;
                v63->m128i_i64[1] = v118;
                goto LABEL_103;
              }
            }
            else
            {
              if ( !v73 )
              {
                if ( v71 )
LABEL_184:
                  --*(_DWORD *)(a1 + 32);
                else
                  v71 = (__int64 *)v63;
LABEL_185:
                v113 = v131;
                *v71 = a2;
                v71[1] = v113;
                ++*(_DWORD *)(a1 + 28);
LABEL_103:
                v75 = *(_QWORD **)(a1 + 48);
                ++*(_DWORD *)(a2 + 8);
                if ( v75 )
                {
                  v76 = *((_DWORD *)v75 - 1);
                  if ( v76 == *((_DWORD *)v75 - 2) )
                  {
                    v95 = (3 * v76 + 1) >> 1;
                    v96 = 8 * v95 + 8;
                    if ( 8 * v76 + 8 >= v96 || v76 >= v95 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_166874(v138.m128i_i64, "Overflow encountered when expanding vector", v122);
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, &v138);
                      sub_233E40((__int64)&v138);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v97 = (unsigned int *)sub_186B300(v75 - 1, v96);
                    v75 = v97 + 2;
                    *v97 = v95;
                    v76 = v97[1];
                    *(_QWORD *)(a1 + 48) = v75;
                  }
                }
                else
                {
                  v115 = (_QWORD *)sub_186B270(0x18u);
                  *v115 = 2;
                  v76 = 0;
                  v75 = v115 + 1;
                  *(_QWORD *)(a1 + 48) = v75;
                }
                v77 = (__int64 *)(a2 + 32);
                v75[v76] = a2;
                *((_DWORD *)v75 - 1) = v76 + 1;
                v78 = *(unsigned int *)(a2 + 24);
                *(__m128 *)v125 = _mm_loadh_ps((const double *)&v128);
                v78 *= 8;
                v127.m128i_i64[1] = a2 + 32 + v78;
                if ( !v78 )
                {
                  v38 = v128;
                  v50 = 0;
                  v37 = 0;
LABEL_47:
                  if ( v131 )
                    ++*(_DWORD *)(v131 + 8);
                  v51 = v143;
                  if ( (unsigned int)v143 >= HIDWORD(v143) )
                  {
                    LODWORD(v125[0]) = 2 * HIDWORD(v143);
                    v98 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v143)));
                    v51 = v143;
                    v99 = (int *)ptr;
                    v52 = v98;
                    v100 = (int)v125[0];
                    if ( (_DWORD)v143 )
                    {
                      if ( (unsigned int)(v143 - 1) <= 2 || v98 == (char *)ptr + 8 )
                      {
                        v116 = 0;
                        v117 = 8LL * (unsigned int)v143;
                        do
                        {
                          v52[v116 / 8] = *(_QWORD *)&v99[v116 / 4];
                          v116 += 8LL;
                        }
                        while ( v117 != v116 );
                      }
                      else
                      {
                        v101 = 0;
                        v102 = 16LL * ((unsigned int)v143 >> 1);
                        do
                        {
                          *(__m128i *)&v52[v101 / 8] = _mm_loadu_si128((const __m128i *)&v99[v101 / 4]);
                          v101 += 16LL;
                        }
                        while ( v101 != v102 );
                        if ( (v51 & 1) != 0 )
                          v52[v51 & 0xFFFFFFFE] = *(_QWORD *)&v99[2 * (v51 & 0xFFFFFFFE)];
                      }
                    }
                    if ( v99 != v129 && v99 )
                    {
                      LODWORD(v125[0]) = v100;
                      sub_186B220(v99);
                      v51 = v143;
                      v100 = (int)v125[0];
                    }
                    ptr = v52;
                    HIDWORD(v143) = v100;
                  }
                  else
                  {
                    v52 = ptr;
                  }
                  v52[v51] = v131;
                  LODWORD(v143) = v51 + 1;
                  sub_D175A0(a1, (unsigned int)(v51 + 1), v52);
                  v53 = v127.m128i_i64[0];
                  if ( v127.m128i_i64[0] )
                  {
                    LODWORD(v125[0]) = *(_DWORD *)(v127.m128i_i64[0] + 8);
                    v23 = LODWORD(v125[0]) == 1;
                    *(_DWORD *)(v127.m128i_i64[0] + 8) = LODWORD(v125[0]) - 1;
                    if ( v23 )
                      sub_15D7BC0(v128, v53);
                  }
                  v54 = v131;
                  if ( v131 )
                  {
                    LODWORD(v125[0]) = *(_DWORD *)(v131 + 8);
                    v23 = LODWORD(v125[0]) == 1;
                    *(_DWORD *)(v131 + 8) = LODWORD(v125[0]) - 1;
                    if ( v23 )
                      sub_15D7BC0(v128, v54);
                  }
                  if ( v50 )
                  {
                    v23 = (*(_DWORD *)(v50 + 8))-- == 1;
                    if ( v23 )
                      sub_15D7BC0(v128, v50);
                  }
LABEL_60:
                  if ( v37 )
                  {
                    v23 = (*(_DWORD *)(v37 + 8))-- == 1;
                    if ( v23 )
                      sub_15D7BC0(v38, v37);
                  }
                  goto LABEL_63;
                }
                v50 = 0;
                v126 = (__int64 *)v135;
                v130 = &v138;
                while ( 2 )
                {
                  v80 = *v77;
                  *(__m128i *)v135 = _mm_load_si128((const __m128i *)v125);
                  sub_D16A30(a1, v80, 0, v126);
                  v37 = *(_QWORD *)v135;
                  si128 = _mm_load_si128((const __m128i *)v135);
                  v38 = *(void **)&v135[2];
                  v82 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v127), (__m128i)*(unsigned __int64 *)v135);
                  *(__m128i *)v125 = si128;
                  v138 = v82;
                  sub_D175A0(a1, 2, v130);
                  v83 = *(int **)(*(_QWORD *)a1 + 856LL);
                  v84 = *(_QWORD *)(*(_QWORD *)a1 + 864LL);
                  if ( v83 == (int *)si128.m128i_i64[0] )
                  {
LABEL_115:
                    if ( v84 )
                    {
                      v86 = *(_DWORD *)(v84 + 8) + 1;
                      *(_DWORD *)(v84 + 8) = v86;
                      if ( !v50 )
                      {
                        v50 = v84;
                        goto LABEL_120;
                      }
                      v23 = (*(_DWORD *)(v50 + 8))-- == 1;
                      if ( v23 )
                      {
                        v132 = (_QWORD *)v84;
                        sub_15D7BC0(v128, v50);
                        v84 = (__int64)v132;
                      }
                      goto LABEL_119;
                    }
                  }
                  else
                  {
                    if ( si128.m128i_i64[0] != v84 )
                    {
                      if ( *(_WORD *)(si128.m128i_i64[0] + 4)
                        || (v85 = *(_DWORD **)(*(_QWORD *)(si128.m128i_i64[0] + 16) + 24LL)) == nullptr
                        || *v85
                        || v85[1] != 8 )
                      {
                        v84 = sub_15E1A70(*(_QWORD *)a1);
                      }
                      else
                      {
                        v84 = *(_QWORD *)(si128.m128i_i64[0] + 32);
                      }
                      goto LABEL_115;
                    }
                    if ( v83 )
                    {
                      v86 = v83[2] + 1;
                      v83[2] = v86;
                      if ( v50 )
                      {
                        v23 = (*(_DWORD *)(v50 + 8))-- == 1;
                        if ( !v23 )
                        {
                          v86 = v83[2];
                          v50 = (__int64)v83;
                          goto LABEL_120;
                        }
                        v132 = v83;
                        sub_15D7BC0(v128, v50);
                        v84 = (__int64)v132;
LABEL_119:
                        v86 = *(_DWORD *)(v84 + 8);
                        v50 = v84;
                        goto LABEL_120;
                      }
                      v50 = (__int64)v83;
LABEL_120:
                      *(_DWORD *)(v50 + 8) = v86 + 1;
LABEL_121:
                      v87 = v143;
                      if ( (unsigned int)v143 < HIDWORD(v143) )
                      {
                        v79 = ptr;
                      }
                      else
                      {
                        v88 = 2 * HIDWORD(v143);
                        v89 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v143)));
                        v87 = v143;
                        v90 = (int *)ptr;
                        v79 = v89;
                        if ( (_DWORD)v143 )
                        {
                          if ( (unsigned int)(v143 - 1) <= 2 || v89 == (char *)ptr + 8 )
                          {
                            v93 = 0;
                            v94 = 8LL * (unsigned int)v143;
                            do
                            {
                              v79[v93 / 8] = *(_QWORD *)&v90[v93 / 4];
                              v93 += 8LL;
                            }
                            while ( v94 != v93 );
                          }
                          else
                          {
                            v91 = 0;
                            v92 = 16LL * ((unsigned int)v143 >> 1);
                            do
                            {
                              *(__m128i *)&v79[v91 / 8] = _mm_loadu_si128((const __m128i *)&v90[v91 / 4]);
                              v91 += 16LL;
                            }
                            while ( v92 != v91 );
                            if ( (v87 & 1) != 0 )
                              v79[v87 & 0xFFFFFFFE] = *(_QWORD *)&v90[2 * (v87 & 0xFFFFFFFE)];
                          }
                        }
                        if ( v90 != v129 && v90 )
                        {
                          v132 = v79;
                          sub_186B220(v90);
                          v87 = v143;
                          v79 = v132;
                        }
                        ptr = v79;
                        HIDWORD(v143) = v88;
                      }
                      ++v77;
                      v79[v87] = v50;
                      LODWORD(v143) = v87 + 1;
                      if ( (__int64 *)v127.m128i_i64[1] == v77 )
                        goto LABEL_47;
                      continue;
                    }
                  }
                  break;
                }
                if ( v50 && (v23 = *(_DWORD *)(v50 + 8) == 1, --*(_DWORD *)(v50 + 8), v23) )
                {
                  sub_15D7BC0(v128, v50);
                  v50 = 0;
                }
                else
                {
                  v50 = 0;
                }
                goto LABEL_121;
              }
              v71 = (__int64 *)v63;
            }
            ++v63;
          }
        }
        v13 = *(unsigned int *)(a2 + 24);
        v14 = (__int64 *)(a2 + 32);
        v126 = (__int64 *)v135;
        v13 *= 8;
        v127.m128i_i64[0] = a1 + 152;
        *(__m128 *)v125 = _mm_loadh_ps((const double *)&v128);
        v15 = (__int64 *)(a2 + 32 + v13);
        if ( !v13 )
        {
LABEL_63:
          v55 = (int *)ptr;
          v56 = (int *)((char *)ptr + 8 * (unsigned int)v143);
          if ( ptr < v56 )
          {
            do
            {
              v57 = *(_QWORD *)v55;
              if ( *(_QWORD *)v55 )
              {
                v58 = v141;
                v23 = (*(_DWORD *)(v57 + 8))-- == 1;
                if ( v23 )
                  sub_15D7BC0(v58, v57);
              }
              v55 += 2;
            }
            while ( v55 < v56 );
            v55 = (int *)ptr;
          }
          if ( v55 != v129 )
          {
            if ( v55 )
              sub_186B220(v55);
          }
          return 2;
        }
        while ( 1 )
        {
          v32 = *v14;
          *(__m128i *)v135 = _mm_load_si128((const __m128i *)v125);
          sub_D16A30(a1, v32, 0, v126);
          v35 = _mm_load_si128((const __m128i *)v135);
          v36 = *(_QWORD *)a1;
          *(_QWORD *)v136 = 0;
          v23 = *(_BYTE *)(a1 + 160) == 0;
          v37 = *(_QWORD *)v135;
          *(_QWORD *)v137 = v36;
          v38 = *(void **)&v135[2];
          *(__m128i *)v125 = v35;
          *(_QWORD *)v134 = v35.m128i_i64[0];
          if ( v23 )
            v16 = sub_14E03D0(
                    v127.m128i_i32[0],
                    (int)v125[0],
                    (__int64)v125[1],
                    (int)v126,
                    v127.m128i_i32[0],
                    v127.m128i_i32[2],
                    (int)v128,
                    (int)v129,
                    v130,
                    v131,
                    (int)v132,
                    v133,
                    v134[0],
                    v135[0],
                    v135[2],
                    v136[0],
                    v137[0],
                    v138.m128i_i32[0],
                    v138.m128i_i32[2],
                    v139,
                    v140,
                    (int)v141,
                    (int)ptr,
                    v143,
                    v144[0],
                    v144[2],
                    v145,
                    v146,
                    v147,
                    v148,
                    v149,
                    v150,
                    v151,
                    v152,
                    v153,
                    v154,
                    v155,
                    v156,
                    v157,
                    v158,
                    v159,
                    v160,
                    v161,
                    v162,
                    v163);
          else
            v16 = sub_14E0E20(
                    v127.m128i_i32[0],
                    1,
                    (int)v134,
                    (int)v136,
                    v33,
                    v34,
                    (int)v125[0],
                    (int)v125[1],
                    (int)v126,
                    v127.m128i_i32[0],
                    v127.m128i_i32[2],
                    v128);
          if ( v16 == 5 )
          {
            v47 = sub_15E1AF0(*(_QWORD *)(a1 + 152));
            v17 = v47;
            if ( v47 )
            {
              v48 = *(_QWORD *)v136;
              ++*(_DWORD *)(v47 + 8);
              if ( !v48 || (v49 = *(_QWORD *)v137, v23 = *(_DWORD *)(v48 + 8) == 1, --*(_DWORD *)(v48 + 8), !v23) )
              {
                *(_QWORD *)v136 = v47;
                goto LABEL_19;
              }
            }
            else
            {
              v48 = *(_QWORD *)v136;
              if ( !*(_QWORD *)v136
                || (v49 = *(_QWORD *)v137,
                    v23 = *(_DWORD *)(*(_QWORD *)v136 + 8LL) == 1,
                    --*(_DWORD *)(*(_QWORD *)v136 + 8LL),
                    !v23) )
              {
                *(_QWORD *)v136 = 0;
LABEL_99:
                v17 = 0;
                goto LABEL_20;
              }
            }
            sub_15D7BC0(v49, v48);
            *(_QWORD *)v136 = v17;
          }
          else
          {
            v17 = *(_QWORD *)v136;
          }
          if ( !v17 )
            goto LABEL_99;
LABEL_19:
          ++*(_DWORD *)(v17 + 8);
LABEL_20:
          v18 = *(_QWORD **)(a1 + 128);
          if ( v18 )
          {
            v19 = *((_DWORD *)v18 - 1);
            if ( v19 == *((_DWORD *)v18 - 2) )
            {
              v39 = (3 * v19 + 1) >> 1;
              v40 = 8 * v39 + 8;
              if ( 8 * v19 + 8 >= (unsigned int)v40 || v19 >= v39 )
              {
                v123 = (char **)__cxa_allocate_exception(0x28u);
                sub_166874(v138.m128i_i64, "Overflow encountered when expanding vector", v124);
                *v123 = (char *)off_1C63128;
                sub_2333C0(v123 + 1, &v138);
                sub_233E40((__int64)&v138);
                __cxa_throw(v123, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v127.m128i_i32[2] = (3 * v19 + 1) >> 1;
              v41 = (__int32 *)sub_186B300(v18 - 1, v40);
              v42 = v127.m128i_i32[2];
              v18 = v41 + 2;
              *(_QWORD *)(a1 + 128) = v41 + 2;
              *v41 = v42;
              LODWORD(v41) = v41[1];
              v22 = &v18[(unsigned int)v41];
              v21 = (_DWORD)v41 + 1;
            }
            else
            {
              v20 = v19;
              v21 = v19 + 1;
              v22 = &v18[v20];
            }
          }
          else
          {
            v59 = (_QWORD *)sub_186B270(0x18u);
            v18 = v59 + 1;
            *v59 = 2;
            v21 = 1;
            *(_QWORD *)(a1 + 128) = v18;
            v22 = v18;
          }
          v23 = *(_BYTE *)(a1 + 377) == 0;
          *v22 = v17;
          *((_DWORD *)v18 - 1) = v21;
          if ( !v23 )
          {
            v24 = *(unsigned int **)(a1 + 368);
            if ( v24 )
              *v24 = (*v24 + 1) & 0x3FFFFFFF | *v24 & 0xC0000000;
            v25 = *(_QWORD **)(a1 + 144);
            if ( v25 )
            {
              v26 = *((_DWORD *)v25 - 1);
              if ( v26 == *((_DWORD *)v25 - 2) )
              {
                v43 = (3 * v26 + 1) >> 1;
                v44 = 8 * v43 + 8;
                if ( 8 * v26 + 8 >= (unsigned int)v44 || v26 >= v43 )
                {
                  v119 = (char **)__cxa_allocate_exception(0x28u);
                  sub_166874(v138.m128i_i64, "Overflow encountered when expanding vector", v120);
                  *v119 = (char *)off_1C63128;
                  sub_2333C0(v119 + 1, &v138);
                  sub_233E40((__int64)&v138);
                  __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v127.m128i_i32[2] = (3 * v26 + 1) >> 1;
                v45 = (__int32 *)sub_186B300(v25 - 1, v44);
                v46 = v127.m128i_i32[2];
                v25 = v45 + 2;
                *(_QWORD *)(a1 + 144) = v45 + 2;
                *v45 = v46;
                LODWORD(v45) = v45[1];
                v29 = (unsigned int **)&v25[(unsigned int)v45];
                v28 = (_DWORD)v45 + 1;
              }
              else
              {
                v27 = v26;
                v28 = v26 + 1;
                v29 = (unsigned int **)&v25[v27];
              }
            }
            else
            {
              v74 = (_QWORD *)sub_186B270(0x18u);
              v25 = v74 + 1;
              *v74 = 2;
              v28 = 1;
              *(_QWORD *)(a1 + 144) = v25;
              v29 = (unsigned int **)v25;
            }
            *v29 = v24;
            *((_DWORD *)v25 - 1) = v28;
          }
          v30 = *(_QWORD *)v136;
          if ( *(_QWORD *)v136 )
          {
            v31 = *(_QWORD *)v137;
            v23 = (*(_DWORD *)(*(_QWORD *)v136 + 8LL))-- == 1;
            if ( v23 )
              sub_15D7BC0(v31, v30);
          }
          if ( v15 == ++v14 )
            goto LABEL_60;
        }
      }
    }
  }
  return result;
}

