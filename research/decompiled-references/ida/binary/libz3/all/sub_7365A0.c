__int64 __fastcall sub_7365A0(const __m128i *a1, __int64 **a2, __int64 a3)
{
  __int64 **v4; // rbx
  __int64 *v5; // rdx
  __int64 *v6; // r14
  __m128i v7; // xmm0
  __int64 v8; // rdx
  char v9; // al
  __m128i v10; // xmm1
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // edx
  __int64 *v16; // rax
  __int64 *v17; // rbp
  unsigned int v18; // r11d
  __int64 *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r10
  int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // r8
  __int64 *i; // rax
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 *v31; // r12
  unsigned int v32; // edx
  unsigned int v33; // ebx
  __int64 v34; // rbp
  char *v35; // rdi
  char *v36; // rcx
  char *m; // rax
  __int64 v38; // rdx
  __int64 v40; // rdx
  _QWORD *v41; // rdx
  __int32 v42; // eax
  unsigned int v43; // edx
  unsigned int v44; // eax
  _QWORD *v45; // rax
  _QWORD *v46; // r13
  __int64 v47; // rdx
  char *v48; // rax
  char *v49; // r14
  __m128 *v50; // rcx
  __int64 v51; // rdx
  _QWORD *v52; // rsi
  _QWORD *v53; // rdx
  __int64 v54; // rbx
  _QWORD *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  __m128i *v58; // rbp
  __int64 v59; // rsi
  __int64 v60; // rax
  char v61; // r14
  __int64 v62; // r13
  unsigned int v63; // r12d
  char v64; // r14
  __int64 v65; // rax
  int v66; // edx
  __int64 *v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 *v70; // r10
  __int64 v71; // rax
  __int64 *v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rcx
  char v75; // al
  unsigned int v76; // eax
  int v77; // eax
  __int64 *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rdi
  bool v82; // zf
  __int64 v83; // rax
  int v84; // ecx
  __int64 *v85; // rax
  _QWORD *v86; // r13
  _QWORD *v87; // r12
  __int64 v88; // rax
  _QWORD *v89; // r13
  __int64 v90; // r14
  __int64 v91; // r12
  __m128 *v92; // rsi
  _QWORD *v93; // rsi
  int v94; // eax
  __m128 *v95; // rdx
  __int64 v96; // rdi
  __m128 v97; // xmm0
  _QWORD *v98; // rax
  __int64 v99; // r12
  unsigned int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rax
  int v103; // ecx
  int v104; // r8d
  int v105; // r9d
  __int64 *v106; // r12
  __int64 v107; // r13
  __int64 v108; // rsi
  __int64 *v109; // rax
  __int64 *v110; // r13
  __int64 v111; // rax
  __int64 v112; // r12
  void (__fastcall ***v113)(void *); // r15
  __int64 *v114; // r12
  unsigned __int64 v115; // r13
  __int64 v116; // rsi
  __int64 v117; // rsi
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rdi
  unsigned int v121; // r8d
  unsigned int v122; // edx
  __int64 v123; // rax
  _QWORD *v124; // r15
  int v125; // r8d
  __m128 *v126; // r9
  __int64 v127; // r10
  __int64 v128; // rdx
  _QWORD *v129; // rdi
  _QWORD *j; // rax
  __int64 v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 *v134; // rdx
  __int64 *v135; // rbx
  __m128 *v136; // r15
  __int64 *v137; // rbp
  __int64 v138; // rsi
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // rdi
  __int64 k; // rax
  __int64 v143; // rax
  char **exception; // r13
  __int64 v145; // rdx
  _Unwind_Exception *v146; // [rsp+0h] [rbp-188h]
  __int64 v147; // [rsp+8h] [rbp-180h] BYREF
  char *v148; // [rsp+10h] [rbp-178h]
  __int64 v149; // [rsp+18h] [rbp-170h]
  __m128i *v150; // [rsp+20h] [rbp-168h]
  char *v151; // [rsp+28h] [rbp-160h]
  char *v152; // [rsp+30h] [rbp-158h]
  __m128 *v153; // [rsp+38h] [rbp-150h]
  __m128 *v154; // [rsp+40h] [rbp-148h]
  __int64 **v155; // [rsp+48h] [rbp-140h]
  char v156[8]; // [rsp+50h] [rbp-138h] BYREF
  char v157[8]; // [rsp+58h] [rbp-130h] BYREF
  int v158[4]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v159; // [rsp+70h] [rbp-118h] BYREF
  __int64 v160; // [rsp+78h] [rbp-110h]
  __int64 v161; // [rsp+80h] [rbp-108h] BYREF
  __int64 v162; // [rsp+88h] [rbp-100h]
  __int64 v163; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD *v164; // [rsp+98h] [rbp-F0h]
  __int64 v165[4]; // [rsp+A0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v167; // [rsp+C8h] [rbp-C0h]
  _BYTE v168[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v4 = a2;
  v149 = a3;
  v5 = *a2;
  v151 = v156;
  LOBYTE(v150) = *((_BYTE *)v5 + 123);
  sub_EE4940(v156, "dt2bv", v5);
  v6 = *a2;
  v7 = _mm_loadl_epi64(a1 + 1);
  v8 = (*a2)[9];
  if ( !v8 )
  {
    v152 = v168;
    ptr = v168;
    *(__m128i *)v158 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, v7);
    v167 = 0x1000000000LL;
    goto LABEL_21;
  }
  v9 = *(_BYTE *)(v8 + 3) >> 6;
  if ( !v9 )
  {
    do
    {
      v8 = *(_QWORD *)(v8 + 16);
      v9 = *(_BYTE *)(v8 + 3) >> 6;
    }
    while ( !v9 );
    v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, v7);
    if ( v9 != 1 )
      goto LABEL_4;
LABEL_79:
    LODWORD(v147) = *(_DWORD *)(v8 + 4) + 1;
    goto LABEL_6;
  }
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, v7);
  if ( v9 == 1 )
    goto LABEL_79;
LABEL_4:
  if ( v9 == 2 )
    LODWORD(v147) = *(_DWORD *)(v8 + 4) - 1;
  else
    LODWORD(v147) = *(_DWORD *)(v8 + 4);
LABEL_6:
  *(__m128i *)v158 = v10;
  v152 = v168;
  ptr = v168;
  v167 = 0x1000000000LL;
  if ( !(_DWORD)v147 )
  {
LABEL_21:
    LODWORD(v147) = 0;
    goto LABEL_22;
  }
  v11 = 0;
  while ( 2 )
  {
    v13 = *v6;
    if ( (*((_BYTE *)v6 + 123) & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(v13 + 864);
      goto LABEL_9;
    }
    v14 = v6[9];
    v15 = 17;
    while ( 1 )
    {
      if ( *(char *)(v14 + 3) < 0 )
      {
        if ( *(_BYTE *)(v14 + 3) >> 6 != 2 )
        {
          v16 = (__int64 *)(*(_QWORD *)(v14 + 16) + 8 * v11);
          goto LABEL_16;
        }
        goto LABEL_18;
      }
      if ( *(_DWORD *)(v14 + 4) == (_DWORD)v11 )
        break;
LABEL_18:
      v14 = *(_QWORD *)(v14 + 16);
      if ( !--v15 )
      {
        sub_233F80((__int64 *)(v13 + 616), (_DWORD *)v6 + 18);
        v16 = (__int64 *)(*(_QWORD *)(v6[9] + 16) + 8 * v11);
        goto LABEL_16;
      }
    }
    v16 = (__int64 *)(v14 + 8);
LABEL_16:
    v12 = *v16;
LABEL_9:
    sub_7337A0((__int64 *)v158, (__int64 *)&ptr, v12);
    if ( ++v11 != (unsigned int)v147 )
    {
      v6 = *v4;
      continue;
    }
    break;
  }
LABEL_22:
  v17 = (__int64 *)a1[6].m128i_i64[1];
  v18 = a1[5].m128i_u32[3];
  v19 = &v17[a1[7].m128i_u32[0]];
  if ( v19 != v17 )
  {
    while ( (unsigned __int64)*v17 <= 1 )
    {
      if ( v19 == ++v17 )
        goto LABEL_40;
    }
    if ( v19 != v17 )
    {
      v20 = *v17;
      do
      {
        v21 = a1[5].m128i_u32[2];
        v22 = *(unsigned int *)(v20 + 12);
        v23 = a1[5].m128i_i64[0];
        v24 = v21 - 1;
        v21 *= 8;
        v25 = (__int64 *)(v23 + v21);
        v26 = 8LL * ((unsigned int)v22 & v24);
        v27 = (__int64 *)(v23 + v26);
        if ( v26 != v21 )
        {
          for ( i = (__int64 *)(v23 + v26); v25 != i; ++i )
          {
            v29 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v29 + 12) == (_DWORD)v22 && v29 == v20 )
              {
LABEL_59:
                v41 = i + 1;
                if ( v25 == i + 1 )
                  v41 = (_QWORD *)a1[5].m128i_i64[0];
                --v18;
                if ( *v41 )
                {
                  *i = 1;
                  v42 = a1[6].m128i_i32[0];
                  v43 = 64;
                  a1[5].m128i_i32[3] = v18;
                  v44 = v42 + 1;
                  if ( v18 >= 0x40 )
                    v43 = v18;
                  a1[6].m128i_i32[0] = v44;
                  if ( v43 < v44 )
                  {
                    if ( !(unsigned __int8)sub_186AF10(v22) )
                    {
                      LODWORD(v148) = a1[5].m128i_i32[2];
                      v45 = (_QWORD *)sub_186B270(8LL * (unsigned int)v148);
                      v46 = v45;
                      if ( (_DWORD)v148 )
                        memset(v45, 0, 8LL * (unsigned int)v148);
                      v47 = a1[5].m128i_u32[2];
                      v48 = (char *)a1[5].m128i_i64[0];
                      LODWORD(v148) = v47 - 1;
                      v49 = &v48[8 * v47];
                      v153 = (__m128 *)(8 * v47);
                      v50 = (__m128 *)&v46[v47];
                      if ( v48 != v49 )
                      {
                        do
                        {
                          if ( *(_QWORD *)v48 > 1u )
                          {
                            v51 = 8LL * (*(_DWORD *)(*(_QWORD *)v48 + 12LL) & (unsigned int)v148);
                            v52 = &v46[(unsigned __int64)v51 / 8];
                            if ( v153 == (__m128 *)v51 )
                            {
LABEL_221:
                              if ( v46 == v52 )
                              {
LABEL_233:
                                v155 = (__int64 **)v48;
                                v154 = v50;
                                sub_1872CE0("");
                                sub_1873130(114, 213);
                              }
                              v53 = v46;
                              while ( *v53 )
                              {
                                if ( v52 == ++v53 )
                                  goto LABEL_233;
                              }
                            }
                            else
                            {
                              v53 = &v46[(unsigned __int64)v51 / 8];
                              while ( *v53 )
                              {
                                if ( v50 == (__m128 *)++v53 )
                                  goto LABEL_221;
                              }
                            }
                            *v53 = *(_QWORD *)v48;
                          }
                          v48 += 8;
                        }
                        while ( v49 != v48 );
                        v49 = (char *)a1[5].m128i_i64[0];
                      }
                      if ( v49 )
                        sub_186B220(v49);
                      a1[5].m128i_i64[0] = (__int64)v46;
                      a1[6].m128i_i32[0] = 0;
                    }
                    v18 = a1[5].m128i_u32[3];
                  }
                }
                else
                {
                  *i = 0;
                  a1[5].m128i_i32[3] = v18;
                }
                goto LABEL_35;
              }
            }
            else if ( !v29 )
            {
              goto LABEL_35;
            }
          }
        }
        if ( (__int64 *)v23 != v27 )
        {
          for ( i = (__int64 *)a1[5].m128i_i64[0]; v27 != i; ++i )
          {
            v40 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v40 + 12) == (_DWORD)v22 && v40 == v20 )
                goto LABEL_59;
            }
            else if ( !v40 )
            {
              break;
            }
          }
        }
LABEL_35:
        v30 = v17 + 1;
        if ( v17 + 1 == v19 )
          break;
        while ( 1 )
        {
          v20 = *v30;
          v17 = v30;
          if ( (unsigned __int64)*v30 > 1 )
            break;
          if ( v19 == ++v30 )
            goto LABEL_40;
        }
      }
      while ( v19 != v30 );
    }
  }
LABEL_40:
  if ( v18 )
  {
    v58 = (__m128i *)sub_186B270(0x50u);
    v58[1].m128i_i8[8] = 1;
    v59 = a1[1].m128i_i64[0];
    v58[1].m128i_i64[0] = 0;
    v58[3].m128i_i32[2] = 1647473764;
    v58[3].m128i_i8[12] = 118;
    v58->m128i_i64[0] = (__int64)&off_1C60CE8;
    v58[3].m128i_i64[0] = 5;
    v58[3].m128i_i8[13] = 0;
    v58[4].m128i_i64[1] = 0;
    v58->m128i_i32[2] = 1;
    v58[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v59, (__m128i)(unsigned __int64)&v58[3].m128i_u64[1]);
    v148 = v157;
    sub_14CDB80(v157, v59, &a1[1].m128i_u64[1]);
    sub_14CD500(v157, &a1[8]);
    v60 = a1[1].m128i_i64[0];
    v159 = 0;
    v161 = 0;
    v160 = v60;
    v162 = v60;
    if ( !(_DWORD)v147 )
    {
LABEL_139:
      v163 = v60;
      v164 = nullptr;
      sub_14CDEA0(v148, &v163);
      v86 = v164;
      if ( v164 )
      {
        v87 = &v164[*((unsigned int *)v164 - 1)];
        if ( v87 != v164 )
        {
          do
            sub_EDBA20((int)*v4, *v86++, 0, v146, v147, (int)v148, v149, (__int64)v150);
          while ( v87 != v86 );
        }
      }
      v88 = sub_14CD4C0(v148);
      v89 = *(_QWORD **)v88;
      v90 = *(_QWORD *)v88 + 16LL * *(unsigned int *)(v88 + 8);
      if ( *(_QWORD *)v88 != v90 )
      {
        while ( *v89 <= 1u )
        {
          v89 += 2;
          if ( (_QWORD *)v90 == v89 )
            goto LABEL_160;
        }
        if ( (_QWORD *)v90 != v89 )
        {
          v91 = v89[1];
          v92 = (__m128 *)v58[4].m128i_i64[1];
          v147 = v58[2].m128i_i64[0];
          if ( v91 )
            ++*(_DWORD *)(v91 + 8);
          if ( v92 )
            goto LABEL_158;
          v93 = (_QWORD *)sub_186B270(0x58u);
          *v93 = 2;
          v94 = 1;
          v92 = (__m128 *)(v93 + 1);
          v58[4].m128i_i64[1] = (__int64)v92;
          v95 = v92;
          while ( 1 )
          {
            v96 = v147;
            v95[1].m128_u64[0] = 0;
            v97 = _mm_loadh_ps((const double *)&v147);
            v95[2].m128_i32[0] = 0;
            v95[1].m128_u64[1] = v96;
            *v95 = v97;
            v92[-1].m128_i32[3] = v94;
            v98 = v89 + 2;
            if ( (_QWORD *)v90 == v89 + 2 )
              break;
            while ( 1 )
            {
              v89 = v98;
              if ( *v98 > 1u )
                break;
              v98 += 2;
              if ( (_QWORD *)v90 == v98 )
                goto LABEL_160;
            }
            if ( (_QWORD *)v90 == v98 )
              break;
            v99 = v98[1];
            v147 = v58[2].m128i_i64[0];
            if ( v99 )
              ++*(_DWORD *)(v99 + 8);
LABEL_158:
            v100 = v92[-1].m128_u32[3];
            if ( v100 == v92[-1].m128_i32[2] )
            {
              v121 = (3 * v100 + 1) >> 1;
              v122 = 40 * v121 + 8;
              if ( 40 * v100 + 8 >= v122 || v100 >= v121 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_10B670(v165, "Overflow encountered when expanding vector", v145);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v165);
                sub_233E40((__int64)v165);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v150) = (3 * v100 + 1) >> 1;
              v123 = sub_186B270(v122);
              v124 = (_QWORD *)v58[4].m128i_i64[1];
              v125 = (int)v150;
              v126 = (__m128 *)v123;
              v92 = (__m128 *)(v123 + 8);
              if ( v124 )
              {
                v127 = *((unsigned int *)v124 - 1);
                v128 = v123 + 8;
                *(_DWORD *)(v123 + 4) = v127;
                v129 = &v124[5 * v127];
                for ( j = v124; v129 != j; *(_DWORD *)(v128 - 8) = *((_DWORD *)j - 2) )
                {
                  v131 = j[1];
                  j += 5;
                  v128 += 40;
                  *(_QWORD *)(v128 - 32) = v131;
                  v132 = *(j - 5);
                  *(j - 5) = 0;
                  *(_QWORD *)(v128 - 40) = v132;
                  *(_QWORD *)(v128 - 16) = *(j - 2);
                  v133 = *(j - 3);
                  *(j - 3) = 0;
                  *(_QWORD *)(v128 - 24) = v133;
                }
                if ( (_DWORD)v127 )
                {
                  v150 = v58;
                  v134 = &v124[5 * v127];
                  v155 = v4;
                  v135 = v124;
                  v136 = v92;
                  LODWORD(v153) = v125;
                  v137 = v134;
                  v154 = v126;
                  do
                  {
                    while ( 1 )
                    {
                      v140 = v135[2];
                      if ( v140 )
                      {
                        v141 = v135[3];
                        v82 = (*(_DWORD *)(v140 + 8))-- == 1;
                        if ( v82 )
                          sub_15D7BC0(v141, v140);
                      }
                      v138 = *v135;
                      if ( *v135 )
                      {
                        v139 = v135[1];
                        v82 = (*(_DWORD *)(v138 + 8))-- == 1;
                        if ( v82 )
                          break;
                      }
                      v135 += 5;
                      if ( v135 == v137 )
                        goto LABEL_207;
                    }
                    sub_15D7BC0(v139, v138);
                    v135 += 5;
                  }
                  while ( v135 != v137 );
LABEL_207:
                  v58 = v150;
                  v92 = v136;
                  v125 = (int)v153;
                  v126 = v154;
                  v4 = v155;
                  v124 = (_QWORD *)v150[4].m128i_i64[1];
                }
                v154 = v92;
                v153 = v126;
                LODWORD(v150) = v125;
                sub_186B220(v124 - 1);
                v126 = v153;
                v92 = v154;
                v125 = (int)v150;
                v95 = (__m128 *)((char *)v154 + 40 * v153->m128_u32[1]);
                v94 = v153->m128_i32[1] + 1;
              }
              else
              {
                *(_DWORD *)(v123 + 4) = 0;
                v95 = (__m128 *)(v123 + 8);
                v94 = 1;
              }
              v58[4].m128i_i64[1] = (__int64)v92;
              v126->m128_i32[0] = v125;
            }
            else
            {
              v101 = v100;
              v94 = v100 + 1;
              v95 = (__m128 *)((char *)v92 + 40 * v101);
            }
          }
        }
      }
LABEL_160:
      v102 = sub_14CD4E0(v148);
      v106 = *(__int64 **)v102;
      v107 = *(_QWORD *)v102 + 16LL * *(unsigned int *)(v102 + 8);
      if ( *(_QWORD *)v102 != v107 )
      {
        while ( (unsigned __int64)*v106 <= 1 )
        {
          v106 += 2;
          if ( (__int64 *)v107 == v106 )
            goto LABEL_171;
        }
        if ( (__int64 *)v107 != v106 )
        {
          v108 = *v106;
          do
          {
            sub_13333D0((_DWORD)v58, v108, v106[1], v103, v104, v105, (__int64)v146);
            v109 = v106 + 2;
            if ( (__int64 *)v107 == v106 + 2 )
              break;
            while ( 1 )
            {
              v108 = *v109;
              v106 = v109;
              if ( (unsigned __int64)*v109 > 1 )
                break;
              v109 += 2;
              if ( (__int64 *)v107 == v109 )
                goto LABEL_171;
            }
          }
          while ( (__int64 *)v107 != v109 );
        }
      }
LABEL_171:
      v110 = *v4;
      v111 = sub_1336AB0((*v4)[1], v58);
      v112 = v111;
      if ( v111 )
        ++*(_DWORD *)(v111 + 8);
      v113 = (void (__fastcall ***)(void *))v110[1];
      if ( v113 )
      {
        v82 = (*((_DWORD *)v113 + 2))-- == 1;
        if ( v82 )
        {
          (**v113)(v113);
          sub_186B220(v113);
        }
      }
      v110[1] = v112;
      sub_14CD4F0(v148);
      sub_EE4A20(":fd-num-translated");
      v114 = v164;
      if ( v164 )
      {
        v115 = (unsigned __int64)&v164[*((unsigned int *)v164 - 1)];
        if ( (unsigned __int64)v164 >= v115 )
          goto LABEL_184;
        do
        {
          while ( 1 )
          {
            v116 = *v114;
            if ( *v114 )
            {
              v82 = (*(_DWORD *)(v116 + 8))-- == 1;
              if ( v82 )
                break;
            }
            if ( (unsigned __int64)++v114 >= v115 )
              goto LABEL_183;
          }
          sub_15D7BC0(v163, v116);
          ++v114;
        }
        while ( (unsigned __int64)v114 < v115 );
LABEL_183:
        v114 = v164;
        if ( v164 )
LABEL_184:
          sub_186B220(v114 - 1);
      }
      v117 = v161;
      if ( v161 )
      {
        v118 = v162;
        v82 = (*(_DWORD *)(v161 + 8))-- == 1;
        if ( v82 )
          sub_15D7BC0(v118, v117);
      }
      v119 = v159;
      if ( v159 && (v120 = v160, v82 = *(_DWORD *)(v159 + 8) == 1, --*(_DWORD *)(v159 + 8), v82) )
      {
        sub_15D7BC0(v120, v119);
        sub_14CD160(v148);
      }
      else
      {
        sub_14CD160(v148);
      }
      v82 = v58->m128i_i32[2]-- == 1;
      if ( v82 )
      {
        (*(void (__fastcall **)(__m128i *))v58->m128i_i64[0])(v58);
        sub_186B220(v58);
      }
      goto LABEL_41;
    }
    v61 = (char)v150;
    v62 = 0;
    v63 = 0;
    v150 = (__m128i *)&v161;
    v64 = v61 & 8;
LABEL_98:
    v67 = *v4;
    v68 = **v4;
    if ( (*((_BYTE *)*v4 + 123) & 0x20) != 0 )
    {
      v69 = *(_QWORD *)(v68 + 864);
      goto LABEL_100;
    }
    v83 = v67[9];
    v84 = 18;
    while ( 1 )
    {
      if ( !--v84 )
      {
        v153 = (__m128 *)*v4;
        sub_233F80((__int64 *)(v68 + 616), (_DWORD *)v67 + 18);
        v85 = (__int64 *)(v62 + *(_QWORD *)(v153[4].m128_u64[1] + 16));
        goto LABEL_133;
      }
      if ( *(char *)(v83 + 3) >= 0 )
      {
        if ( v63 == *(_DWORD *)(v83 + 4) )
        {
          v85 = (__int64 *)(v83 + 8);
LABEL_133:
          v69 = *v85;
LABEL_100:
          sub_14CE740(v148, v69, &v159, v150);
          if ( v64 )
          {
            v72 = *v4;
            v73 = (*v4)[11];
            if ( v73 )
            {
              v74 = (*v4)[11];
              v75 = *(_BYTE *)(v73 + 3) >> 6;
              if ( v75 )
              {
                if ( v75 != 1 )
                  goto LABEL_109;
LABEL_126:
                if ( v63 >= *(_DWORD *)(v74 + 4) + 1 )
                  goto LABEL_127;
LABEL_112:
                v77 = 18;
                while ( --v77 )
                {
                  if ( *(char *)(v73 + 3) >= 0 )
                  {
                    if ( v63 == *(_DWORD *)(v73 + 4) )
                    {
                      v78 = (__int64 *)(v73 + 8);
                      goto LABEL_117;
                    }
                  }
                  else if ( *(_BYTE *)(v73 + 3) >> 6 != 2 )
                  {
                    v78 = (__int64 *)(v62 + *(_QWORD *)(v73 + 16));
                    goto LABEL_117;
                  }
                  v73 = *(_QWORD *)(v73 + 16);
                }
                v143 = *v72;
                v153 = (__m128 *)*v4;
                sub_233F80((__int64 *)(v143 + 616), (_DWORD *)v72 + 22);
                v78 = (__int64 *)(v62 + *(_QWORD *)(v153[5].m128_u64[1] + 16));
LABEL_117:
                v73 = *v78;
              }
              else
              {
                do
                {
                  v74 = *(_QWORD *)(v74 + 16);
                  v75 = *(_BYTE *)(v74 + 3) >> 6;
                }
                while ( !v75 );
                if ( v75 == 1 )
                  goto LABEL_126;
LABEL_109:
                if ( v75 == 2 )
                  v76 = *(_DWORD *)(v74 + 4) - 1;
                else
                  v76 = *(_DWORD *)(v74 + 4);
                if ( v63 < v76 )
                  goto LABEL_112;
LABEL_127:
                v73 = 0;
              }
            }
            v79 = sub_15DE0E0(a1[1].m128i_i64[0], v73, v161);
            if ( v79 )
              ++*(_DWORD *)(v79 + 8);
            v80 = v161;
            if ( v161 )
            {
              v81 = v162;
              v82 = (*(_DWORD *)(v161 + 8))-- == 1;
              if ( v82 )
              {
                v153 = (__m128 *)v79;
                sub_15D7BC0(v81, v80);
                v79 = (__int64)v153;
              }
            }
            v161 = v79;
          }
          v70 = *v4;
          if ( (*((_BYTE *)*v4 + 123) & 0x10) != 0 )
          {
            v65 = v70[13];
            v66 = 17;
            do
            {
              if ( *(char *)(v65 + 3) >= 0 )
              {
                if ( v63 == *(_DWORD *)(v65 + 4) )
                  goto LABEL_97;
              }
              else if ( *(_BYTE *)(v65 + 3) >> 6 != 2 )
              {
                goto LABEL_97;
              }
              v65 = *(_QWORD *)(v65 + 16);
              --v66;
            }
            while ( v66 );
            v71 = *v70;
            v153 = (__m128 *)*v4;
            sub_236900((_QWORD *)(v71 + 672), v70 + 13);
            LODWORD(v70) = (_DWORD)v153;
          }
LABEL_97:
          sub_EDBFA0((int)v70);
          ++v63;
          v62 += 8;
          if ( (_DWORD)v147 == v63 )
          {
            v60 = a1[1].m128i_i64[0];
            goto LABEL_139;
          }
          goto LABEL_98;
        }
      }
      else if ( *(_BYTE *)(v83 + 3) >> 6 != 2 )
      {
        v85 = (__int64 *)(v62 + *(_QWORD *)(v83 + 16));
        goto LABEL_133;
      }
      v83 = *(_QWORD *)(v83 + 16);
    }
  }
LABEL_41:
  *((_DWORD *)*v4 + 30) = (*((_DWORD *)*v4 + 30) + 1) & 0x3FFFFFF | (*v4)[15] & 0xFC000000;
  v31 = *v4;
  if ( *v4 )
    ++*((_DWORD *)v31 + 8);
  v32 = *(_DWORD *)(v149 + 8);
  v33 = *(_DWORD *)(v149 + 12);
  if ( v32 >= v33 )
  {
    v54 = 2 * v33;
    v34 = sub_186B270(8 * v54);
    v32 = *(_DWORD *)(v149 + 8);
    v55 = *(_QWORD **)v149;
    if ( v32 )
    {
      if ( v32 - 1 <= 2 || (_QWORD *)v34 == v55 + 1 )
      {
        for ( k = 0; k != v32; ++k )
          *(_QWORD *)(v34 + k * 8) = v55[k];
      }
      else
      {
        v56 = 0;
        do
        {
          *(__m128i *)(v34 + v56 * 8) = _mm_loadu_si128((const __m128i *)&v55[v56]);
          v56 += 2;
        }
        while ( v56 != 2LL * (v32 >> 1) );
        if ( (v32 & 1) != 0 )
          *(_QWORD *)(v34 + 8LL * (v32 & 0xFFFFFFFE)) = v55[v32 & 0xFFFFFFFE];
      }
    }
    if ( v55 != (_QWORD *)(v149 + 16) && v55 )
    {
      sub_186B220(v55);
      v32 = *(_DWORD *)(v149 + 8);
    }
    v57 = v149;
    *(_QWORD *)v149 = v34;
    *(_DWORD *)(v57 + 12) = v54;
  }
  else
  {
    v34 = *(_QWORD *)v149;
  }
  v35 = (char *)ptr;
  *(_QWORD *)(v34 + 8LL * v32) = v31;
  *(_DWORD *)(v149 + 8) = v32 + 1;
  v36 = &v35[8 * (unsigned int)v167];
  for ( m = v35; m != v36; *(_BYTE *)(v38 + 6) &= ~1u )
  {
    v38 = *(_QWORD *)m;
    m += 8;
  }
  LODWORD(v167) = 0;
  if ( v35 != v152 && v35 )
    sub_186B220(v35);
  return sub_EE4A00(v151);
}

