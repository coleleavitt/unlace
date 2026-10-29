__int64 __fastcall sub_8B3BC0(_QWORD *a1, __int64 a2, const __m128i *a3, int a4, __int64 a5)
{
  const __m128i *v5; // rbx
  _QWORD *v6; // r13
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r9
  _QWORD *v10; // rbp
  __int64 (*v11)(); // rax
  unsigned int v12; // r15d
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // r13
  _QWORD *v18; // rbx
  void *v19; // rdi
  char *v20; // rsi
  __int64 v21; // r15
  __int64 i; // r14
  char *v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  __int64 (__fastcall **v33)(_QWORD, __int64, char *); // rax
  int v34; // r9d
  const char *v35; // rsi
  const char *v36; // rdi
  size_t v37; // r8
  const char *v38; // r9
  void *v39; // rax
  size_t v40; // r11
  const void *v41; // r14
  void *v42; // rdi
  size_t v43; // r9
  const void *v44; // r11
  void *v45; // rdi
  __m128i v46; // xmm0
  __int64 v47; // rcx
  const char *v48; // rsi
  const char *v49; // rdi
  __int64 v50; // rax
  char v51; // al
  __int64 v52; // r8
  __int64 v53; // r9
  const char *v54; // r8
  __int64 v55; // rdi
  const char *v56; // rcx
  const char *v57; // rdx
  size_t v58; // rbx
  void *v59; // rbp
  void *v60; // rdi
  __int64 v61; // r8
  size_t v62; // r9
  const char *v63; // rcx
  __int64 v64; // rax
  char *v65; // rdi
  __int64 v66; // r14
  __int64 v67; // r13
  __int64 v68; // r15
  char *v69; // r12
  void *v70; // rdi
  char *v71; // rcx
  __int64 v72; // rbp
  __int64 k; // rbx
  char *v74; // rdx
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  time_t v78; // rax
  time_t v79; // rcx
  char *v80; // rdi
  __int64 v81; // rbp
  __int64 v82; // r13
  __int64 v83; // r14
  char *v84; // r12
  void *v85; // rdi
  char *v86; // rsi
  __int64 v87; // rbx
  __int64 m; // r15
  char *v89; // rcx
  void *v90; // rdi
  void *v91; // rdi
  void *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  void *v96; // rax
  __m128i v97; // xmm0
  __m128i v98; // xmm1
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __m128i v102; // xmm1
  __m128i v103; // xmm0
  __int64 v104; // rax
  __m128i v105; // xmm1
  __int64 v106; // rcx
  __int64 v107; // r15
  __m128i v108; // xmm0
  __int32 v109; // eax
  __int32 v110; // edx
  __int32 v111; // edx
  __int32 v112; // edx
  void *v113; // rbp
  void *v114; // rdi
  const void *v115; // r13
  __int64 v116; // rax
  void *v117; // rax
  time_t v118; // rax
  __int64 v120; // [rsp+0h] [rbp-5B8h]
  __int64 v121; // [rsp+8h] [rbp-5B0h]
  int v122; // [rsp+8h] [rbp-5B0h]
  __int64 v123; // [rsp+8h] [rbp-5B0h]
  __int64 v125; // [rsp+18h] [rbp-5A0h]
  unsigned __int64 v127; // [rsp+20h] [rbp-598h]
  unsigned __int64 v128; // [rsp+20h] [rbp-598h]
  int v129; // [rsp+20h] [rbp-598h]
  __int64 v130; // [rsp+20h] [rbp-598h]
  __int64 v131; // [rsp+20h] [rbp-598h]
  unsigned __int64 v132; // [rsp+20h] [rbp-598h]
  __int64 v133; // [rsp+20h] [rbp-598h]
  __int64 v134; // [rsp+20h] [rbp-598h]
  __int64 v135; // [rsp+20h] [rbp-598h]
  __int64 v136; // [rsp+20h] [rbp-598h]
  const __m128i *v137; // [rsp+28h] [rbp-590h]
  __int64 v138; // [rsp+28h] [rbp-590h]
  const char *v139; // [rsp+28h] [rbp-590h]
  size_t v140; // [rsp+28h] [rbp-590h]
  unsigned __int64 v141; // [rsp+28h] [rbp-590h]
  __int64 v142; // [rsp+28h] [rbp-590h]
  size_t v143; // [rsp+28h] [rbp-590h]
  __int64 *v144; // [rsp+30h] [rbp-588h]
  size_t na; // [rsp+38h] [rbp-580h]
  size_t n; // [rsp+38h] [rbp-580h]
  size_t nb; // [rsp+38h] [rbp-580h]
  void *src; // [rsp+40h] [rbp-578h] BYREF
  __int128 v149; // [rsp+48h] [rbp-570h]
  void *ptr; // [rsp+60h] [rbp-558h] BYREF
  __int128 v151; // [rsp+68h] [rbp-550h]
  void *v152; // [rsp+80h] [rbp-538h] BYREF
  __int128 v153; // [rsp+88h] [rbp-530h]
  void *v154; // [rsp+98h] [rbp-520h]
  __int128 v155; // [rsp+A0h] [rbp-518h]
  void *v156; // [rsp+B0h] [rbp-508h] BYREF
  __m128i v157; // [rsp+B8h] [rbp-500h] BYREF
  __int64 v158; // [rsp+C8h] [rbp-4F0h]
  __m128i v159; // [rsp+D0h] [rbp-4E8h] BYREF
  __int64 v160; // [rsp+E0h] [rbp-4D8h]
  __int64 v161; // [rsp+E8h] [rbp-4D0h]
  __int64 v162; // [rsp+F8h] [rbp-4C0h]
  __m128i j; // [rsp+100h] [rbp-4B8h] BYREF
  int v164; // [rsp+118h] [rbp-4A0h]
  __int16 v165; // [rsp+11Ch] [rbp-49Ch]
  int v166; // [rsp+11Eh] [rbp-49Ah]
  __int16 v167; // [rsp+122h] [rbp-496h]
  int v168; // [rsp+124h] [rbp-494h]
  __int16 v169; // [rsp+128h] [rbp-490h]
  int v170; // [rsp+12Ah] [rbp-48Eh]
  __int16 v171; // [rsp+12Eh] [rbp-48Ah]
  int v172[4]; // [rsp+130h] [rbp-488h] BYREF
  __int64 v173; // [rsp+140h] [rbp-478h]
  int v174[4]; // [rsp+150h] [rbp-468h] BYREF
  __int64 v175; // [rsp+160h] [rbp-458h]
  char s[1032]; // [rsp+170h] [rbp-448h] BYREF
  unsigned __int64 v177; // [rsp+578h] [rbp-40h]

  v177 = __readfsqword(0x28u);
  if ( !a1[4] )
  {
    if ( !under_debugger )
      interr(3150);
    goto LABEL_223;
  }
  if ( !a5 )
  {
    if ( !under_debugger )
      interr(3191);
    goto LABEL_223;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !under_debugger )
      interr(3151);
    goto LABEL_223;
  }
  v5 = a3;
  if ( !a3->m128i_i32[2] )
  {
    if ( !under_debugger )
      interr(3152);
    goto LABEL_223;
  }
  v6 = (_QWORD *)a1[48];
  v7 = (__int64)a1;
  v8 = a2;
  v9 = 2LL * a1[49];
  v10 = &v6[v9];
  if ( v6 == &v6[v9] )
  {
LABEL_11:
    sub_8ACD30((__int64)a1);
    v14 = a1[53];
    qmutex_lock(v14);
    sub_8AE0D0((__int64)a1, 1);
    v15 = v14;
    v16 = 0;
    v17 = 0;
    qmutex_unlock(v15);
    v125 = *(_QWORD *)(v7 + 424);
    qmutex_lock(v125);
    v144 = (__int64 *)(v7 + 128);
    if ( *(_QWORD *)(v7 + 136) )
    {
      v121 = *(_QWORD *)(v7 + 136);
      v137 = v5;
      do
      {
        v18 = (_QWORD *)(v17 + *(_QWORD *)(v7 + 128));
        v19 = (void *)v18[16];
        if ( v19 )
        {
          v18[17] = 0;
          qfree(v19);
        }
        v20 = (char *)v18[10];
        if ( v20 )
        {
          v21 = v18[11];
          if ( v21 )
          {
            for ( i = 0; i != v21; ++i )
            {
              v23 = &v20[24 * i];
              v24 = *(void **)v23;
              if ( *(_QWORD *)v23 )
              {
                *((_QWORD *)v23 + 1) = 0;
                qfree(v24);
                v20 = (char *)v18[10];
              }
            }
          }
          v18[11] = 0;
          qfree(v20);
        }
        v25 = (void *)v18[7];
        if ( v25 )
        {
          v18[8] = 0;
          qfree(v25);
        }
        v26 = (void *)v18[4];
        if ( v26 )
        {
          v18[5] = 0;
          qfree(v26);
        }
        ++v16;
        v17 += 152;
      }
      while ( v121 != v16 );
      v8 = a2;
      v5 = v137;
    }
    *(_QWORD *)(v7 + 136) = 0;
    v27 = *(_QWORD *)(v7 + 48);
    *(_QWORD *)(v7 + 368) = 0;
    v28 = *(_QWORD *)(v8 + 8);
    if ( v28 )
    {
      v35 = *(const char **)v8;
      v36 = haystack;
      if ( !v27 )
      {
LABEL_51:
        v122 = 2;
        if ( strcmp(v36, v35) || *(_WORD *)(v7 + 64) != *(_WORD *)(v8 + 24) )
        {
LABEL_52:
          if ( v8 == v7 + 40 )
            goto LABEL_33;
          if ( v28 )
          {
            v37 = v28 - 1;
            if ( v28 != 1 )
            {
              v38 = *(const char **)v8;
              v39 = *(void **)(v7 + 40);
              if ( *(_QWORD *)(v7 + 56) < v28 )
              {
                v139 = *(const char **)v8;
                v39 = (void *)qvector_reserve(v7 + 40, *(_QWORD *)(v7 + 40), v28, 1);
                v38 = v139;
                v37 = v28 - 1;
                *(_QWORD *)(v7 + 40) = v39;
              }
              *(_QWORD *)(v7 + 48) = v28;
              memmove(v39, v38, v37);
              *(_BYTE *)(*(_QWORD *)(v7 + 40) + v28 - 1) = 0;
              LOWORD(v29) = *(_WORD *)(v8 + 24);
LABEL_34:
              *(_WORD *)(v7 + 64) = v29;
              *(_BYTE *)(v7 + 66) = *(_BYTE *)(v8 + 26);
              *(_BYTE *)(v7 + 72) = *(_BYTE *)(v8 + 32);
              if ( v7 + 80 != v8 + 40 )
              {
                v30 = *(_QWORD *)(v8 + 48);
                if ( !v30 || (v43 = v30 - 1, v30 == 1) )
                {
                  *(_QWORD *)(v7 + 88) = 0;
                }
                else
                {
                  v44 = *(const void **)(v8 + 40);
                  v45 = *(void **)(v7 + 80);
                  if ( *(_QWORD *)(v7 + 96) < v30 )
                  {
                    na = *(_QWORD *)(v8 + 40);
                    v140 = v30 - 1;
                    v132 = *(_QWORD *)(v8 + 48);
                    v94 = qvector_reserve(v7 + 80, *(_QWORD *)(v7 + 80), v132, 1);
                    *(_QWORD *)(v7 + 80) = v94;
                    v44 = (const void *)na;
                    v45 = (void *)v94;
                    v43 = v140;
                    v30 = v132;
                  }
                  *(_QWORD *)(v7 + 88) = v30;
                  v128 = v30;
                  memmove(v45, v44, v43);
                  *(_BYTE *)(*(_QWORD *)(v7 + 80) + v128 - 1) = 0;
                }
              }
              v31 = v7 + 104;
              if ( v7 + 104 != v8 + 64 )
              {
                v32 = *(_QWORD *)(v8 + 72);
                if ( !v32 || (v40 = v32 - 1, v32 == 1) )
                {
                  *(_QWORD *)(v7 + 112) = 0;
                }
                else
                {
                  v41 = *(const void **)(v8 + 64);
                  v42 = *(void **)(v7 + 104);
                  if ( *(_QWORD *)(v7 + 120) < v32 )
                  {
                    n = v32 - 1;
                    v141 = v32;
                    v95 = qvector_reserve(v7 + 104, *(_QWORD *)(v7 + 104), v32, 1);
                    *(_QWORD *)(v7 + 104) = v95;
                    v40 = n;
                    v42 = (void *)v95;
                    v32 = v141;
                    v31 = v7 + 104;
                  }
                  *(_QWORD *)(v7 + 112) = v32;
                  v138 = v31;
                  v127 = v32;
                  memmove(v42, v41, v40);
                  v31 = v138;
                  *(_BYTE *)(*(_QWORD *)(v7 + 104) + v127 - 1) = 0;
                }
              }
              if ( *(_BYTE *)(v7 + 72) )
              {
                if ( !*(_QWORD *)(v7 + 432) )
                {
                  v173 = v5[1].m128i_i64[0];
                  *(__m128i *)v172 = _mm_loadu_si128(v5);
                  v33 = (__int64 (__fastcall **)(_QWORD, __int64, char *))time(nullptr);
                  v34 = sub_8B0100(v7, (__int64)v172, v33);
                  if ( v34 && v172[0] == v5->m128i_i32[0] && LOWORD(v172[1]) == v5->m128i_i16[2] )
                  {
                    v129 = v34;
                    if ( !(unsigned int)sub_8B2430(v7, (__int64)v172, (a4 >> 6) & 1, v122, (char **)a5) )
                    {
                      sub_8B0600(v7, *(_QWORD *)(v7 + 128), 1, v122, (__int64)v172);
                      if ( v129 == 2 )
                      {
                        v118 = time(nullptr);
                        *(_BYTE *)(v7 + 504) = 1;
                        *(_QWORD *)(v7 + 488) = v118;
                        if ( (debug & 0x200) != 0 )
                          sub_3879F0();
                      }
                    }
                    if ( !*(_QWORD *)(v7 + 368) && *(_QWORD *)(v7 + 472) )
                      sub_8AE910(v7, v7 + 360);
                    if ( (a4 & 0x10) == 0 )
                    {
LABEL_47:
                      if ( *(_QWORD *)(v7 + 136) )
                      {
                        v170 = 0;
                        v171 = 0;
                        v174[0] = 0;
                        LOWORD(v174[1]) = 0;
                        v168 = 0;
                        v169 = 0;
                      }
                    }
                  }
                  else
                  {
                    if ( (unsigned __int8)sub_8AE7E0(v7, (char **)a5, 0) )
                    {
                      ptr = nullptr;
                      src = nullptr;
                      v152 = nullptr;
                      v154 = nullptr;
                      v151 = 0;
                      v149 = 0;
                      v153 = 0;
                      v155 = 0;
                      sub_8AD260((__int64)&v156, (__int64)&v152, &src, (size_t *)&ptr);
                      if ( v154 )
                      {
                        *(_QWORD *)&v155 = 0;
                        qfree(v154);
                      }
                      if ( v152 )
                      {
                        *(_QWORD *)&v153 = 0;
                        qfree(v152);
                      }
                      if ( (unsigned int)sub_8124F0(*(_QWORD *)(v7 + 432), (__int64 *)&v156, a5, 0) )
                      {
                        if ( (debug & 0x200) != 0 )
                          sub_3879F0();
                        sub_80E310((__int64)&v156);
                        goto LABEL_49;
                      }
                      v96 = *(void **)(v7 + 152);
                      v97 = _mm_loadu_si128((const __m128i *)(v7 + 160));
                      v98 = _mm_loadu_si128(&v157);
                      *(_QWORD *)(v7 + 152) = v156;
                      v156 = v96;
                      v99 = *(_QWORD *)(v7 + 176);
                      *(_QWORD *)(v7 + 176) = v158;
                      v158 = v99;
                      v100 = *(_QWORD *)(v7 + 360);
                      *(_QWORD *)(v7 + 360) = v162;
                      v101 = v161;
                      *(__m128i *)(v7 + 160) = v98;
                      v102 = _mm_load_si128(&v159);
                      v157 = v97;
                      v103 = _mm_loadu_si128((const __m128i *)(v7 + 184));
                      v162 = v100;
                      v104 = v160;
                      *(__m128i *)(v7 + 184) = v102;
                      v105 = _mm_load_si128(&j);
                      v159 = v103;
                      v106 = v104 + 176 * v101;
                      v107 = v104;
                      v108 = _mm_loadu_si128((const __m128i *)(v7 + 368));
                      *(__m128i *)(v7 + 368) = v105;
                      for ( j = v108; v106 != v107; v107 += 176 )
                      {
                        v165 = 0;
                        LOWORD(v174[1]) = 0;
                        v174[0] = 0;
                        v170 = 0;
                        v171 = 0;
                        v109 = v5->m128i_i32[0];
                        v164 = 0;
                        if ( !v109 && v5->m128i_i16[2] == v171
                          || *(_DWORD *)v107 == v5->m128i_i32[0] && *(_WORD *)(v107 + 4) == v5->m128i_i16[2] )
                        {
                          v110 = v5->m128i_i32[2];
                          if ( !v110 || v110 == *(_DWORD *)(v107 + 12) )
                          {
                            v111 = v5->m128i_i32[3];
                            if ( !v111 || v111 == *(_DWORD *)(v107 + 16) )
                            {
                              v112 = v5[1].m128i_i32[0];
                              if ( *(_DWORD *)(v107 + 20) == v112 || !v112 )
                              {
                                v133 = v106;
                                sub_8AD900(v144, (int *)v107);
                                v106 = v133;
                              }
                            }
                          }
                        }
                      }
                      sub_80E310((__int64)&v156);
                    }
                    if ( (a4 & 0x10) == 0 )
                    {
                      if ( !*(_QWORD *)(v7 + 368) && *(_QWORD *)(v7 + 472) )
                        sub_8AE910(v7, v7 + 360);
                      goto LABEL_47;
                    }
                    v46 = _mm_loadu_si128(v5);
                    v47 = v5[1].m128i_i64[0];
                    v168 = 0;
                    v169 = 0;
                    v175 = v47;
                    v170 = 0;
                    v171 = 0;
                    v166 = 0;
                    v167 = 0;
                    *(__m128i *)v174 = v46;
                    if ( !_mm_cvtsi128_si32(v46) && !LOWORD(v174[1]) && *(_QWORD *)(v7 + 136) )
                    {
                      v93 = *(_QWORD *)(v7 + 128);
                      v174[0] = *(_DWORD *)v93;
                      LOWORD(v174[1]) = *(_WORD *)(v93 + 4);
                    }
                    if ( !(unsigned int)sub_8B2430(v7, (__int64)v174, (a4 >> 6) & 1, v122, (char **)a5)
                      && !*(_QWORD *)(v7 + 368)
                      && *(_QWORD *)(v7 + 472) )
                    {
                      sub_8AE910(v7, v7 + 360);
                    }
                  }
LABEL_49:
                  qmutex_unlock(v125);
                  sub_8ACCA0((_QWORD *)v7);
                }
                if ( !under_debugger )
                  interr(3153);
LABEL_223:
                BUG();
              }
              v50 = v5[1].m128i_i64[0];
              v130 = v31;
              *(__m128i *)v174 = _mm_loadu_si128(v5);
              v175 = v50;
              src = nullptr;
              v149 = 0;
              v51 = sub_8B2BC0((_QWORD *)v7, (__int64 *)&src, v7 + 80, (__int64)v174, a5);
              ptr = nullptr;
              v152 = nullptr;
              v151 = 0;
              v153 = 0;
              if ( v51 )
                goto LABEL_113;
              v52 = *(_QWORD *)(v7 + 88);
              v53 = v130;
              if ( !v52 )
              {
                v54 = haystack;
                v55 = *(_QWORD *)(v7 + 32);
                v56 = haystack;
                if ( *(_QWORD *)(v7 + 112) )
                  v54 = *(const char **)(v7 + 104);
LABEL_100:
                v57 = haystack;
                if ( *(_QWORD *)(a5 + 8) )
                  v57 = *(const char **)a5;
                v131 = v53;
                sub_8AC5D0(
                  v55,
                  (__int64)"No valid license file found at \"%s\": %s\nTrying default search path \"%s\"\n",
                  v57,
                  v56,
                  v54);
                v171 = 0;
                LOWORD(v172[1]) = 0;
                LOWORD(v174[1]) = 0;
                v170 = 0;
                v172[0] = 0;
                v174[0] = 0;
                if ( !(unsigned __int8)sub_8B2BC0((_QWORD *)v7, (__int64 *)&src, v131, (__int64)v174, (__int64)&v152) )
                {
                  v58 = *(_QWORD *)(a5 + 8);
                  if ( v58 )
                  {
                    v117 = (void *)qalloc_or_throw(*(_QWORD *)(a5 + 8));
                    v59 = memcpy(v117, *(const void **)a5, v58);
                  }
                  else
                  {
                    v59 = nullptr;
                  }
                  sub_35A790((char **)a5);
                  if ( v59 )
                    qfree(v59);
                  goto LABEL_107;
                }
LABEL_113:
                v61 = v149;
                if ( (_QWORD)v149 )
                {
                  v62 = v149 - 1;
                  if ( (_QWORD)v149 == 1 )
                  {
                    *(_QWORD *)(v7 + 88) = 0;
LABEL_116:
                    v63 = (const char *)src;
LABEL_117:
                    if ( !(unsigned int)sub_8ABC60(
                                          (char **)v144,
                                          (__int64 *)(v7 + 152),
                                          v7 + 360,
                                          (__int64)v63,
                                          a4,
                                          (__int64 *)a5)
                      && (a4 & 0x10) != 0 )
                    {
                      v64 = *(_QWORD *)v7;
                      v157 = 0;
                      v156 = nullptr;
                      if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, int *, _QWORD, _QWORD))(v64 + 56))(
                              v7,
                              &v156,
                              v174,
                              0,
                              0) )
                      {
                        sub_35A790((char **)a5);
                        goto LABEL_121;
                      }
                      v78 = time(nullptr);
                      v79 = *((_QWORD *)v156 + 13);
                      if ( v79 > v78 && v79 != -1 )
                      {
                        qstrftime(s, 0x400u, "%F");
                        sub_35A790((char **)a5);
LABEL_121:
                        v65 = (char *)v156;
                        if ( v156 )
                        {
                          if ( v157.m128i_i64[0] )
                          {
                            v120 = v7;
                            v66 = 0;
                            v67 = 0;
                            v68 = v157.m128i_i64[0];
                            do
                            {
                              v69 = &v65[v66];
                              v70 = *(void **)&v65[v66 + 128];
                              if ( v70 )
                              {
                                *((_QWORD *)v69 + 17) = 0;
                                qfree(v70);
                              }
                              v71 = *((char **)v69 + 10);
                              if ( v71 )
                              {
                                v72 = *((_QWORD *)v69 + 11);
                                if ( v72 )
                                {
                                  for ( k = 0; k != v72; ++k )
                                  {
                                    v74 = &v71[24 * k];
                                    v75 = *(void **)v74;
                                    if ( *(_QWORD *)v74 )
                                    {
                                      *((_QWORD *)v74 + 1) = 0;
                                      qfree(v75);
                                      v71 = *((char **)v69 + 10);
                                    }
                                  }
                                }
                                *((_QWORD *)v69 + 11) = 0;
                                qfree(v71);
                              }
                              v76 = *((void **)v69 + 7);
                              if ( v76 )
                              {
                                *((_QWORD *)v69 + 8) = 0;
                                qfree(v76);
                              }
                              v77 = *((void **)v69 + 4);
                              if ( v77 )
                              {
                                *((_QWORD *)v69 + 5) = 0;
                                qfree(v77);
                              }
                              ++v67;
                              v65 = (char *)v156;
                              v66 += 152;
                            }
                            while ( v68 != v67 );
                            v7 = v120;
                          }
                          v157.m128i_i64[0] = 0;
                          qfree(v65);
                        }
LABEL_107:
                        if ( v152 )
                          qfree(v152);
                        if ( ptr )
                        {
                          *(_QWORD *)&v151 = 0;
                          qfree(ptr);
                        }
                        v60 = src;
                        if ( !src )
                          goto LABEL_49;
                        goto LABEL_169;
                      }
                      sub_8B0600(v7, (__int64)v156, 0, v122, (__int64)v5);
                      if ( (unsigned __int64)v151 > 1 )
                        sub_378D50();
                      v80 = (char *)v156;
                      if ( v156 )
                      {
                        v81 = 0;
                        if ( v157.m128i_i64[0] )
                        {
                          v82 = 0;
                          v83 = v157.m128i_i64[0];
                          v123 = v7;
                          do
                          {
                            v84 = &v80[v82];
                            v85 = *(void **)&v80[v82 + 128];
                            if ( v85 )
                            {
                              *((_QWORD *)v84 + 17) = 0;
                              qfree(v85);
                            }
                            v86 = *((char **)v84 + 10);
                            if ( v86 )
                            {
                              v87 = *((_QWORD *)v84 + 11);
                              if ( v87 )
                              {
                                for ( m = 0; m != v87; ++m )
                                {
                                  v89 = &v86[24 * m];
                                  v90 = *(void **)v89;
                                  if ( *(_QWORD *)v89 )
                                  {
                                    *((_QWORD *)v89 + 1) = 0;
                                    qfree(v90);
                                    v86 = *((char **)v84 + 10);
                                  }
                                }
                              }
                              *((_QWORD *)v84 + 11) = 0;
                              qfree(v86);
                            }
                            v91 = *((void **)v84 + 7);
                            if ( v91 )
                            {
                              *((_QWORD *)v84 + 8) = 0;
                              qfree(v91);
                            }
                            v92 = *((void **)v84 + 4);
                            if ( v92 )
                            {
                              *((_QWORD *)v84 + 5) = 0;
                              qfree(v92);
                            }
                            ++v81;
                            v80 = (char *)v156;
                            v82 += 152;
                          }
                          while ( v83 != v81 );
                          v7 = v123;
                        }
                        v157.m128i_i64[0] = 0;
                        qfree(v80);
                      }
                    }
                    if ( v152 )
                      qfree(v152);
                    if ( ptr )
                    {
                      *(_QWORD *)&v151 = 0;
                      qfree(ptr);
                    }
                    v60 = src;
                    if ( !src )
                      goto LABEL_49;
LABEL_169:
                    *(_QWORD *)&v149 = 0;
                    qfree(v60);
                    goto LABEL_49;
                  }
                  v113 = src;
                  v114 = *(void **)(v7 + 80);
                  if ( *(_QWORD *)(v7 + 96) < (unsigned __int64)v149 )
                  {
                    v143 = v149 - 1;
                    v136 = v149;
                    v116 = qvector_reserve(v7 + 80, *(_QWORD *)(v7 + 80), v149, 1);
                    *(_QWORD *)(v7 + 80) = v116;
                    v62 = v143;
                    v114 = (void *)v116;
                    v61 = v136;
                  }
                  *(_QWORD *)(v7 + 88) = v61;
                  v134 = v61;
                  memmove(v114, v113, v62);
                  *(_BYTE *)(*(_QWORD *)(v7 + 80) + v134 - 1) = 0;
                  if ( (_QWORD)v149 )
                    goto LABEL_116;
                }
                else
                {
                  *(_QWORD *)(v7 + 88) = 0;
                }
                v63 = haystack;
                goto LABEL_117;
              }
              if ( v52 == 1 )
              {
                v55 = *(_QWORD *)(v7 + 32);
                v54 = haystack;
                if ( *(_QWORD *)(v7 + 112) )
                  v54 = *(const char **)(v7 + 104);
              }
              else
              {
                nb = v52 - 1;
                v115 = *(const void **)(v7 + 80);
                v142 = v130;
                v135 = *(_QWORD *)(v7 + 88);
                ptr = (void *)qvector_reserve(&ptr, 0, v135, 1);
                *(_QWORD *)&v151 = v135;
                memmove(ptr, v115, nb);
                v53 = v142;
                *((char *)ptr + v135 - 1) = 0;
                v54 = haystack;
                v55 = *(_QWORD *)(v7 + 32);
                if ( *(_QWORD *)(v7 + 112) )
                  v54 = *(const char **)(v7 + 104);
                if ( !*(_QWORD *)(v7 + 88) )
                {
                  v56 = haystack;
                  goto LABEL_100;
                }
              }
              v56 = *(const char **)(v7 + 80);
              goto LABEL_100;
            }
          }
LABEL_32:
          *(_QWORD *)(v7 + 48) = 0;
LABEL_33:
          LOWORD(v29) = *(_WORD *)(v8 + 24);
          goto LABEL_34;
        }
LABEL_89:
        v122 = 2;
        if ( *(_BYTE *)(v7 + 66) == *(_BYTE *)(v8 + 26) && *(_BYTE *)(v7 + 72) == *(_BYTE *)(v8 + 32) )
        {
          v48 = haystack;
          if ( *(_QWORD *)(v8 + 48) )
            v48 = *(const char **)(v8 + 40);
          v49 = haystack;
          if ( *(_QWORD *)(v7 + 88) )
            v49 = *(const char **)(v7 + 80);
          v122 = 2 * (strcmp(v49, v48) != 0);
        }
        goto LABEL_52;
      }
    }
    else
    {
      if ( !v27 )
      {
        v29 = *(unsigned __int16 *)(v8 + 24);
        if ( (_WORD)v29 != *(_WORD *)(v7 + 64) )
        {
          v122 = 2;
          if ( v8 == v7 + 40 )
            goto LABEL_34;
          goto LABEL_32;
        }
        goto LABEL_89;
      }
      v35 = haystack;
    }
    v36 = *(const char **)(v7 + 40);
    goto LABEL_51;
  }
  while ( 1 )
  {
    v11 = *(__int64 (**)())(*(_QWORD *)*v6 + 16LL);
    if ( v11 != sub_395590 )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64, const __m128i *, _QWORD, __int64))v11)(
              *v6,
              a2,
              v5,
              (unsigned int)a4,
              a5);
      if ( v12 )
        return v12;
    }
    v6 += 2;
    if ( v10 == v6 )
      goto LABEL_11;
  }
}
