__int64 __fastcall sub_FD1140(__int64 a1, const char *a2, const void *a3, size_t a4)
{
  const char *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  _WORD *v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 result; // rax
  const char *v16; // rax
  size_t v17; // r13
  const char *v18; // r15
  int v19; // eax
  __m128 *v20; // rsi
  size_t v21; // r14
  __int64 v22; // rbp
  int *v23; // rsi
  unsigned __int64 v24; // rbx
  unsigned int *v25; // r12
  char v26; // r13
  __m128 *v27; // rax
  size_t v28; // rdx
  size_t v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r13
  const char *v38; // r10
  __int64 v39; // rax
  __int64 v40; // rax
  const char *v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r9
  _WORD *v49; // rcx
  __int64 v50; // rsi
  const char *v51; // rdi
  __int64 v52; // rax
  int v53; // edx
  __int64 v54; // rax
  _BYTE *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r9
  _WORD *v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rsi
  __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rax
  _WORD *v65; // rcx
  __int64 v66; // rax
  _DWORD *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  _BYTE *v71; // rdx
  __int64 v72; // rax
  _WORD *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // eax
  __int64 v77; // rax
  _BYTE *v78; // rdx
  unsigned int *v79; // rax
  unsigned int *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  _QWORD *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  void *v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // r13
  __int8 v101; // dl
  __int8 v102; // dl
  __int8 v103; // dl
  __int64 v104; // rax
  __m128i *v105; // rcx
  unsigned __int64 v106; // r13
  __int64 v107; // rax
  _QWORD *v108; // r8
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rbp
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  const char *v117; // r12
  __int64 v118; // rax
  __int64 v119; // rax
  size_t v120; // rbx
  const char *v121; // rdi
  __int64 v122; // rsi
  __int64 v123; // rbx
  __int64 v124; // rax
  _QWORD *v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 *v128; // rdi
  unsigned __int64 v129; // rsi
  __int64 v130; // rax
  __int64 v131; // r8
  __int64 v132; // r9
  _WORD *v133; // rcx
  const char *v134; // r13
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // rax
  __int64 v138; // rax
  _BYTE *v139; // rdx
  __int64 v140; // rax
  __int64 v141; // r8
  __int64 v142; // r9
  _WORD *v143; // rcx
  __int64 v144; // rax
  int v145; // eax
  __int64 v146; // rsi
  __int64 v147; // rax
  _QWORD *v148; // rcx
  __int64 v149; // rax
  _WORD *v150; // rcx
  unsigned __int64 v151; // r8
  __int64 v152; // rax
  _QWORD *v153; // r11
  __int8 v154; // dl
  unsigned __int64 v155; // r13
  __int64 v156; // rax
  _QWORD *v157; // r8
  __m128i v158; // xmm0
  unsigned __int64 v159; // rbx
  __int64 v160; // rax
  _QWORD *v161; // rbp
  __int8 v162; // dl
  __int64 v163; // rax
  __m128i *v164; // rdx
  unsigned __int64 v165; // rbx
  __int64 v166; // rax
  __int8 v167; // dl
  __int64 v168; // rcx
  _DWORD *v169; // rax
  _DWORD *v170; // rdx
  __int64 *v171; // rdi
  __int64 v172; // rcx
  _DWORD *v173; // rax
  _DWORD *v174; // rdx
  _QWORD *v175; // r13
  unsigned __int64 v176; // rbp
  __int64 v177; // rax
  _QWORD *v178; // r12
  __m128i v179; // xmm0
  __int64 *v180; // rdi
  __int64 v181; // rcx
  _DWORD *v182; // rax
  _DWORD *v183; // rdx
  __m128i si128; // xmm0
  __int64 v185; // rcx
  _DWORD *v186; // rax
  _DWORD *v187; // rdx
  __int64 *v188; // rdi
  __int64 v189; // rcx
  _DWORD *v190; // rax
  _DWORD *v191; // rdx
  __int64 v192; // rcx
  _DWORD *v193; // rax
  _DWORD *v194; // rdx
  __m128 *src; // [rsp+0h] [rbp-118h]
  unsigned __int64 v196; // [rsp+8h] [rbp-110h]
  int ***v197; // [rsp+10h] [rbp-108h]
  const char *v199; // [rsp+28h] [rbp-F0h]
  __int64 v200; // [rsp+28h] [rbp-F0h]
  const char *v201; // [rsp+28h] [rbp-F0h]
  size_t v202; // [rsp+28h] [rbp-F0h]
  _QWORD *v203; // [rsp+28h] [rbp-F0h]
  const char *v204; // [rsp+28h] [rbp-F0h]
  int ***v205; // [rsp+30h] [rbp-E8h]
  bool v206; // [rsp+3Fh] [rbp-D9h]
  const char *v207; // [rsp+40h] [rbp-D8h]
  _QWORD *v208; // [rsp+40h] [rbp-D8h]
  char v209; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v210; // [rsp+48h] [rbp-D0h]
  __int64 v211; // [rsp+50h] [rbp-C8h]
  _QWORD *v212; // [rsp+68h] [rbp-B0h]
  char v213; // [rsp+7Bh] [rbp-9Dh] BYREF
  int v214; // [rsp+7Ch] [rbp-9Ch] BYREF
  char *v215; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v216; // [rsp+88h] [rbp-90h]
  int *v217; // [rsp+90h] [rbp-88h]
  const char *v218; // [rsp+98h] [rbp-80h]
  unsigned __int64 v219; // [rsp+A0h] [rbp-78h]
  __m128 v220; // [rsp+B0h] [rbp-68h] BYREF
  void *v221; // [rsp+C0h] [rbp-58h]
  size_t n; // [rsp+C8h] [rbp-50h]
  char v223; // [rsp+D0h] [rbp-48h]

  v5 = a2;
  v6 = a1;
  v7 = sub_227D6D0(a1, a2);
  v8 = *(__m128i **)(v7 + 32);
  if ( *(_QWORD *)(v7 + 24) - (_QWORD)v8 > 0x13u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9230);
    v8[1].m128i_i32[0] = 544497952;
    *v8 = si128;
    *(_QWORD *)(v7 + 32) += 20LL;
  }
  else
  {
    a2 = "diagnostic state at ";
    a1 = v7;
    sub_227BF10(v7, "diagnostic state at ", 20);
  }
  v9 = sub_227D6D0(a1, a2);
  sub_101AC40(v6 + 64, v9, v5);
  v10 = sub_227D6D0(v6 + 64, v9);
  v11 = *(_WORD **)(v10 + 32);
  if ( *(_QWORD *)(v10 + 24) - (_QWORD)v11 > 1u )
  {
    *v11 = 8250;
    *(_QWORD *)(v10 + 32) += 2LL;
  }
  else
  {
    v10 = sub_227BF10(v10, ": ", 2);
  }
  v12 = v10;
  v13 = sub_227B9B0(v10, *(_QWORD *)(v6 + 56));
  v14 = *(_BYTE **)(v13 + 32);
  if ( *(_BYTE **)(v13 + 24) == v14 )
  {
    v12 = v13;
    sub_227BF10(v13, "\n", 1);
  }
  else
  {
    *v14 = 10;
    ++*(_QWORD *)(v13 + 32);
  }
  result = *(_QWORD *)(v6 + 24);
  v211 = v6 + 8;
  v210 = result;
  if ( result != v6 + 8 )
  {
    v16 = v5;
    v17 = a4;
    v206 = a4 == 0;
    v18 = v16;
    do
    {
      v213 = 0;
      v218 = v18;
      v19 = *(_DWORD *)(v210 + 32);
      v216 = v210 + 40;
      v214 = v19;
      v215 = &v213;
      v219 = v210 + 32;
      v217 = &v214;
      if ( !v17 )
      {
        v12 = (unsigned __int64)&v215;
        sub_FD0BB0((__int64)&v215, (__int64)&v214);
      }
      v20 = &v220;
      v21 = v17;
      v197 = *(int ****)(v210 + 56);
      v205 = &v197[2 * *(unsigned int *)(v210 + 64)];
      if ( v205 == v197 )
        goto LABEL_93;
      do
      {
        if ( v21 )
          goto LABEL_13;
        if ( !*v215 )
        {
          *v215 = 1;
          v109 = sub_227D6D0(v12, v20);
          v110 = *(_QWORD *)(v109 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v109 + 24) - v110) > 4 )
          {
            *(_DWORD *)v110 = 1701603654;
            *(_BYTE *)(v110 + 4) = 32;
            *(_QWORD *)(v109 + 32) += 5LL;
          }
          else
          {
            v109 = sub_227BF10(v109, "File ", 5);
          }
          v111 = sub_227B9B0(v109, v216);
          v112 = *(_QWORD *)(v111 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v111 + 24) - v112) > 8 )
          {
            *(_BYTE *)(v112 + 8) = 32;
            *(_QWORD *)v112 = 0x4449656C69463C20LL;
            *(_QWORD *)(v111 + 32) += 9LL;
          }
          else
          {
            v111 = sub_227BF10(v111, " <FileID ", 9);
          }
          v113 = sub_227B910(v111, (unsigned int)*v217);
          v116 = *(_QWORD *)(v113 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v113 + 24) - v116) > 2 )
          {
            *(_BYTE *)(v116 + 2) = 32;
            *(_WORD *)v116 = 14910;
            *(_QWORD *)(v113 + 32) += 3LL;
          }
          else
          {
            v113 = sub_227BF10(v113, ">: ", 3);
          }
          v117 = v218;
          v118 = (unsigned int)*v217;
          v220.m128_i8[0] = 0;
          if ( (unsigned int)(v118 + 1) <= 1 )
            goto LABEL_232;
          if ( (int)v118 >= 0 )
          {
            v119 = *((_QWORD *)v218 + 23) + 24 * v118;
            goto LABEL_163;
          }
          v165 = (unsigned int)(-2 - v118);
          v166 = *(_QWORD *)(*((_QWORD *)v218 + 40) + 8LL * ((unsigned int)(-2 - v118) >> 6));
          if ( _bittest64(&v166, v165) )
          {
            v175 = (_QWORD *)(*((_QWORD *)v218 + 34) + 8 * ((unsigned __int64)(int)v165 >> 5));
            if ( *v175 )
            {
              v119 = *v175 + 24 * (v165 & 0x1F);
              goto LABEL_163;
            }
            v188 = (__int64 *)(*((_QWORD *)v218 + 36) & 0xFFFFFFFFFFFFFFF8LL);
            v189 = *v188;
            v188[10] += 768;
            v190 = (_DWORD *)((v189 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v188[1] >= (unsigned __int64)(v190 + 192) && v189 )
              *v188 = (__int64)(v190 + 192);
            else
              v190 = (_DWORD *)sub_986170((__int64)v188, 768, 768, 3, v114, v115);
            *v175 = v190;
            v191 = v190 + 192;
            do
            {
              *v190 = 0;
              v190 += 6;
              *((_OWORD *)v190 - 1) = 0;
              *((_QWORD *)v190 - 1) = 0;
            }
            while ( v190 != v191 );
            v167 = v220.m128_i8[0];
            v119 = *v175 + 24 * (v165 & 0x1F);
          }
          else
          {
            v119 = sub_101F930(v218, (unsigned int)v165, &v220);
            v167 = v220.m128_i8[0];
          }
          if ( v167 )
          {
LABEL_232:
            sub_101D1C0(&v220, v117);
          }
          else
          {
LABEL_163:
            if ( !v119 )
              goto LABEL_232;
            if ( *(char *)(v119 + 3) < 0 )
              goto LABEL_232;
            sub_101D9A0(
              &v220,
              *(_QWORD *)(v119 + 16) & 0xFFFFFFFFFFFFFFF8LL,
              *((_QWORD *)v117 + 1),
              *((_QWORD *)v117 + 2),
              0);
            if ( !v223 )
              goto LABEL_232;
          }
          v12 = *(_QWORD *)(v113 + 32);
          v120 = n;
          v20 = (__m128 *)v221;
          if ( n > *(_QWORD *)(v113 + 24) - v12 )
          {
            v12 = v113;
            sub_227BF10(v113, v221, n);
          }
          else if ( n )
          {
            memcpy((void *)v12, v221, n);
            *(_QWORD *)(v113 + 32) += v120;
          }
          if ( *(_QWORD *)(v219 + 8) )
          {
            v121 = v218;
            v122 = (unsigned int)*v217;
            v123 = sub_10239D0(v218, v122);
            v124 = sub_227D6D0(v121, v122);
            v125 = *(_QWORD **)(v124 + 32);
            if ( *(_QWORD *)(v124 + 24) - (_QWORD)v125 > 7u )
            {
              *v125 = 0x20746E6572617020LL;
              *(_QWORD *)(v124 + 32) += 8LL;
            }
            else
            {
              v124 = sub_227BF10(v124, " parent ", 8);
            }
            v126 = sub_227B9B0(v124, *(_QWORD *)v216);
            v127 = *(_QWORD *)(v126 + 32);
            if ( (unsigned __int64)(*(_QWORD *)(v126 + 24) - v127) > 8 )
            {
              *(_BYTE *)(v127 + 8) = 32;
              *(_QWORD *)v127 = 0x4449656C69463C20LL;
              *(_QWORD *)(v126 + 32) += 9LL;
            }
            else
            {
              v126 = sub_227BF10(v126, " <FileID ", 9);
            }
            v128 = (__int64 *)v126;
            v129 = (unsigned int)v123;
            v130 = sub_227B910(v126, (unsigned int)v123);
            v133 = *(_WORD **)(v130 + 32);
            if ( *(_QWORD *)(v130 + 24) - (_QWORD)v133 > 1u )
            {
              *v133 = 8254;
              *(_QWORD *)(v130 + 32) += 2LL;
            }
            else
            {
              v129 = (unsigned __int64)"> ";
              v128 = (__int64 *)v130;
              sub_227BF10(v130, "> ", 2);
            }
            v134 = v218;
            v220.m128_i8[0] = 0;
            if ( (unsigned int)(v123 + 1) <= 1 )
              goto LABEL_225;
            if ( (int)v123 >= 0 )
            {
              v135 = *((_QWORD *)v218 + 23) + 24LL * (unsigned int)v123;
              goto LABEL_179;
            }
            v176 = (unsigned int)(-2 - v123);
            v177 = *(_QWORD *)(*((_QWORD *)v218 + 40) + 8LL * ((unsigned int)(-2 - v123) >> 6));
            if ( _bittest64(&v177, v176) )
            {
              v178 = (_QWORD *)(*((_QWORD *)v218 + 34) + 8 * ((unsigned __int64)(int)v176 >> 5));
              if ( *v178 )
              {
                v135 = *v178 + 24LL * ((-2 - (_BYTE)v123) & 0x1F);
                goto LABEL_179;
              }
              v128 = (__int64 *)(*((_QWORD *)v218 + 36) & 0xFFFFFFFFFFFFFFF8LL);
              v192 = *v128;
              v128[10] += 768;
              v193 = (_DWORD *)((v192 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v128[1] >= (unsigned __int64)(v193 + 192) && v192 )
              {
                *v128 = (__int64)(v193 + 192);
              }
              else
              {
                v129 = 768;
                v193 = (_DWORD *)sub_986170((__int64)v128, 768, 768, 3, v131, v132);
              }
              *v178 = v193;
              v194 = v193 + 192;
              do
              {
                *v193 = 0;
                v193 += 6;
                *((_OWORD *)v193 - 1) = 0;
                *((_QWORD *)v193 - 1) = 0;
              }
              while ( v194 != v193 );
              v134 = v218;
              v162 = v220.m128_i8[0];
              v135 = *v178 + 24LL * ((-2 - (_BYTE)v123) & 0x1F);
            }
            else
            {
              v128 = (__int64 *)v218;
              v129 = (unsigned int)v176;
              v135 = sub_101F930(v218, (unsigned int)v176, &v220);
              v134 = v218;
              v162 = v220.m128_i8[0];
            }
            if ( v162 )
            {
LABEL_225:
              v136 = 0;
            }
            else
            {
LABEL_179:
              if ( !v135 || *(char *)(v135 + 3) < 0 )
                goto LABEL_225;
              v136 = *(_DWORD *)v135 & 0x7FFFFFFF;
            }
            v220.m128_i32[0] = HIDWORD(v123) + v136;
            v137 = sub_227D6D0(v128, v129);
            v12 = (unsigned __int64)&v220;
            v20 = (__m128 *)v137;
            sub_101AC40(&v220, v137, v134);
          }
          if ( *(_BYTE *)(v216 + 12) )
          {
            v163 = sub_227D6D0(v12, v20);
            v164 = *(__m128i **)(v163 + 32);
            if ( *(_QWORD *)(v163 + 24) - (_QWORD)v164 > 0x15u )
            {
              v179 = _mm_load_si128((const __m128i *)&xmmword_23A9240);
              v164[1].m128i_i32[0] = 1869182057;
              v164[1].m128i_i16[2] = 29550;
              *v164 = v179;
              *(_QWORD *)(v163 + 32) += 22LL;
              goto LABEL_184;
            }
            v20 = (__m128 *)" has_local_transitions";
            v12 = v163;
            sub_227BF10(v163, " has_local_transitions", 22);
            v138 = sub_227D6D0(v12, " has_local_transitions");
            v139 = *(_BYTE **)(v138 + 32);
            if ( *(_BYTE **)(v138 + 24) == v139 )
            {
LABEL_185:
              v20 = (__m128 *)"\n";
              v12 = v138;
              sub_227BF10(v138, "\n", 1);
              goto LABEL_186;
            }
          }
          else
          {
LABEL_184:
            v138 = sub_227D6D0(v12, v20);
            v139 = *(_BYTE **)(v138 + 32);
            if ( *(_BYTE **)(v138 + 24) == v139 )
              goto LABEL_185;
          }
          *v139 = 10;
          ++*(_QWORD *)(v138 + 32);
        }
LABEL_186:
        v140 = sub_227D6D0(v12, v20);
        v143 = *(_WORD **)(v140 + 32);
        if ( *(_QWORD *)(v140 + 24) - (_QWORD)v143 > 1u )
        {
          *v143 = 8224;
          *(_QWORD *)(v140 + 32) += 2LL;
        }
        else
        {
          v12 = v140;
          sub_227BF10(v140, "  ", 2);
        }
        v220.m128_i8[0] = 0;
        if ( (unsigned int)(v214 + 1) <= 1 )
        {
LABEL_211:
          v145 = 0;
          goto LABEL_194;
        }
        if ( v214 < 0 )
        {
          v159 = (unsigned int)(-2 - v214);
          v160 = *(_QWORD *)(*((_QWORD *)v18 + 40) + 8LL * ((unsigned int)(-2 - v214) >> 6));
          if ( _bittest64(&v160, v159) )
          {
            v161 = (_QWORD *)(*((_QWORD *)v18 + 34) + 8 * ((unsigned __int64)(int)v159 >> 5));
            if ( *v161 )
            {
              v144 = *v161 + 24LL * ((-2 - (_BYTE)v214) & 0x1F);
              goto LABEL_191;
            }
            v12 = *((_QWORD *)v18 + 36) & 0xFFFFFFFFFFFFFFF8LL;
            v185 = *(_QWORD *)v12;
            *(_QWORD *)(v12 + 80) += 768LL;
            v186 = (_DWORD *)((v185 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( *(_QWORD *)(v12 + 8) >= (unsigned __int64)(v186 + 192) && v185 )
              *(_QWORD *)v12 = v186 + 192;
            else
              v186 = (_DWORD *)sub_986170(v12, 768, 768, 3, v141, v142);
            *v161 = v186;
            v187 = v186 + 192;
            do
            {
              *v186 = 0;
              v186 += 6;
              *((_OWORD *)v186 - 1) = 0;
              *((_QWORD *)v186 - 1) = 0;
            }
            while ( v186 != v187 );
            v154 = v220.m128_i8[0];
            v144 = *v161 + 24 * (v159 & 0x1F);
          }
          else
          {
            v12 = (unsigned __int64)v18;
            v144 = sub_101F930(v18, (unsigned int)v159, &v220);
            v154 = v220.m128_i8[0];
          }
          if ( v154 )
            goto LABEL_211;
        }
        else
        {
          v144 = *((_QWORD *)v18 + 23) + 24LL * (unsigned int)v214;
        }
LABEL_191:
        if ( !v144 || *(char *)(v144 + 3) < 0 )
          goto LABEL_211;
        v145 = *(_DWORD *)v144 & 0x7FFFFFFF;
LABEL_194:
        v220.m128_i32[0] = *((_DWORD *)v197 + 2) + v145;
        v146 = sub_227D6D0(v12, v197);
        sub_101AC40(&v220, v146, v18);
        v147 = sub_227D6D0(&v220, v146);
        v148 = *(_QWORD **)(v147 + 32);
        if ( *(_QWORD *)(v147 + 24) - (_QWORD)v148 > 7u )
        {
          *v148 = 0x206574617473203ALL;
          *(_QWORD *)(v147 + 32) += 8LL;
        }
        else
        {
          v147 = sub_227BF10(v147, ": state ", 8);
        }
        v149 = sub_227B9B0(v147, *v197);
        v150 = *(_WORD **)(v149 + 32);
        if ( *(_QWORD *)(v149 + 24) - (_QWORD)v150 > 1u )
        {
          *v150 = 2618;
          *(_QWORD *)(v149 + 32) += 2LL;
        }
        else
        {
          sub_227BF10(v149, ":\n", 2);
        }
LABEL_13:
        v22 = (__int64)*v197;
        v23 = **v197;
        if ( *((_DWORD *)*v197 + 2) )
          sub_FCE200(&v220, v23, &v23[2 * *((unsigned int *)*v197 + 4)], (__int64)*v197, 0);
        else
          sub_FCE200(
            &v220,
            &v23[2 * *((unsigned int *)*v197 + 4)],
            &v23[2 * *((unsigned int *)*v197 + 4)],
            (__int64)*v197,
            1);
        v24 = v220.m128_u64[1];
        v25 = (unsigned int *)v220.m128_u64[0];
        v12 = (unsigned __int64)&v220;
        v20 = (__m128 *)(*(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 16));
        sub_FCE200(&v220, (int *)v20, (int *)v20, v22, 1);
        v26 = v206;
        v196 = v220.m128_u64[0];
        if ( v25 != (unsigned int *)v220.m128_u64[0] )
        {
          while ( 1 )
          {
            v20 = (__m128 *)*v25;
            v12 = *(_QWORD *)(*((_QWORD *)v18 + 1) + 32LL);
            v27 = (__m128 *)sub_FD4050(v12, v20);
            src = v27;
            v29 = v28;
            if ( v21 )
            {
              if ( v21 != v28 )
                goto LABEL_85;
              v12 = (unsigned __int64)a3;
              v20 = v27;
              if ( memcmp(a3, v27, v21) )
                goto LABEL_85;
            }
            if ( !v26 )
              break;
LABEL_65:
            v66 = sub_227D6D0(v12, v20);
            v67 = *(_DWORD **)(v66 + 32);
            if ( *(_QWORD *)(v66 + 24) - (_QWORD)v67 > 3u )
            {
              *v67 = 538976288;
              *(_QWORD *)(v66 + 32) += 4LL;
            }
            else
            {
              v20 = (__m128 *)"    ";
              v12 = v66;
              sub_227BF10(v66, "    ", 4);
            }
            if ( v29 )
            {
              v99 = sub_227D6D0(v12, v20);
              v20 = src;
              v12 = *(_QWORD *)(v99 + 32);
              v100 = v99;
              if ( *(_QWORD *)(v99 + 24) - v12 < v29 )
              {
                v12 = v99;
                sub_227BF10(v99, src, v29);
              }
              else
              {
                memcpy((void *)v12, src, v29);
                *(_QWORD *)(v100 + 32) += v29;
              }
            }
            else
            {
              v68 = sub_227D6D0(v12, v20);
              v69 = *(_QWORD *)(v68 + 32);
              if ( (unsigned __int64)(*(_QWORD *)(v68 + 24) - v69) > 8 )
              {
                *(_BYTE *)(v69 + 8) = 32;
                *(_QWORD *)v69 = 0x6E776F6E6B6E753CLL;
                *(_QWORD *)(v68 + 32) += 9LL;
              }
              else
              {
                v68 = sub_227BF10(v68, "<unknown ", 9);
              }
              v20 = (__m128 *)*v25;
              v12 = v68;
              v70 = sub_227B910(v68, v20);
              v71 = *(_BYTE **)(v70 + 32);
              if ( *(_BYTE **)(v70 + 24) == v71 )
              {
                v20 = (__m128 *)">";
                v12 = v70;
                sub_227BF10(v70, ">", 1);
              }
              else
              {
                *v71 = 62;
                ++*(_QWORD *)(v70 + 32);
              }
            }
            v72 = sub_227D6D0(v12, v20);
            v73 = *(_WORD **)(v72 + 32);
            if ( *(_QWORD *)(v72 + 24) - (_QWORD)v73 > 1u )
            {
              *v73 = 8250;
              *(_QWORD *)(v72 + 32) += 2LL;
            }
            else
            {
              v20 = (__m128 *)": ";
              v12 = v72;
              sub_227BF10(v72, ": ", 2);
            }
            switch ( v25[1] & 7 )
            {
              case 1u:
                v97 = sub_227D6D0(v12, v20);
                v98 = *(_QWORD *)(v97 + 32);
                if ( (unsigned __int64)(*(_QWORD *)(v97 + 24) - v98) > 6 )
                {
                  *(_DWORD *)v98 = 1869506409;
                  *(_WORD *)(v98 + 4) = 25970;
                  *(_BYTE *)(v98 + 6) = 100;
                  *(_QWORD *)(v97 + 32) += 7LL;
                }
                else
                {
                  v20 = (__m128 *)"ignored";
                  v12 = v97;
                  sub_227BF10(v97, "ignored", 7);
                }
                goto LABEL_77;
              case 2u:
                v93 = sub_227D6D0(v12, v20);
                v94 = *(_QWORD *)(v93 + 32);
                if ( (unsigned __int64)(*(_QWORD *)(v93 + 24) - v94) > 5 )
                {
                  *(_DWORD *)v94 = 1634559346;
                  *(_WORD *)(v94 + 4) = 27506;
                  *(_QWORD *)(v93 + 32) += 6LL;
                }
                else
                {
                  v20 = (__m128 *)"remark";
                  v12 = v93;
                  sub_227BF10(v93, "remark", 6);
                }
                goto LABEL_77;
              case 3u:
                v95 = sub_227D6D0(v12, v20);
                v96 = *(_QWORD *)(v95 + 32);
                if ( (unsigned __int64)(*(_QWORD *)(v95 + 24) - v96) > 6 )
                {
                  v12 = 28265;
                  *(_DWORD *)v96 = 1852989815;
                  *(_WORD *)(v96 + 4) = 28265;
                  *(_BYTE *)(v96 + 6) = 103;
                  *(_QWORD *)(v95 + 32) += 7LL;
                }
                else
                {
                  v20 = (__m128 *)"warning";
                  v12 = v95;
                  sub_227BF10(v95, "warning", 7);
                }
                goto LABEL_77;
              case 4u:
                v81 = sub_227D6D0(v12, v20);
                v82 = *(_QWORD *)(v81 + 32);
                if ( (unsigned __int64)(*(_QWORD *)(v81 + 24) - v82) > 4 )
                {
                  *(_DWORD *)v82 = 1869771365;
                  *(_BYTE *)(v82 + 4) = 114;
                  *(_QWORD *)(v81 + 32) += 5LL;
LABEL_77:
                  v76 = v25[1];
                  if ( (v76 & 8) != 0 )
                    goto LABEL_78;
                }
                else
                {
                  v20 = (__m128 *)"error";
                  v12 = v81;
                  sub_227BF10(v81, "error", 5);
                  v76 = v25[1];
                  if ( (v76 & 8) != 0 )
                    goto LABEL_78;
                }
                v83 = sub_227D6D0(v12, v20);
                v84 = *(_QWORD **)(v83 + 32);
                if ( *(_QWORD *)(v83 + 24) - (_QWORD)v84 > 7u )
                {
                  v12 = 0x746C756166656420LL;
                  *v84 = 0x746C756166656420LL;
                  *(_QWORD *)(v83 + 32) += 8LL;
                  v76 = v25[1];
LABEL_78:
                  if ( (v76 & 0x10) == 0 )
                    goto LABEL_79;
                  goto LABEL_99;
                }
                v20 = (__m128 *)" default";
                v12 = v83;
                sub_227BF10(v83, " default", 8);
                v76 = v25[1];
                if ( (v76 & 0x10) == 0 )
                  goto LABEL_79;
LABEL_99:
                v85 = sub_227D6D0(v12, v20);
                v86 = *(_QWORD *)(v85 + 32);
                if ( (unsigned __int64)(*(_QWORD *)(v85 + 24) - v86) > 6 )
                {
                  v20 = (__m128 *)(&stru_6D60 + 7);
                  *(_DWORD *)v86 = 1634889760;
                  *(_WORD *)(v86 + 4) = 28007;
                  *(_BYTE *)(v86 + 6) = 97;
                  *(_QWORD *)(v85 + 32) += 7LL;
                  v76 = v25[1];
LABEL_79:
                  if ( (v76 & 0x20) == 0 )
                    goto LABEL_80;
                  goto LABEL_101;
                }
                v20 = (__m128 *)" pragma";
                v12 = v85;
                sub_227BF10(v85, " pragma", 7);
                v76 = v25[1];
                if ( (v76 & 0x20) == 0 )
                  goto LABEL_80;
LABEL_101:
                v87 = sub_227D6D0(v12, v20);
                v88 = *(_QWORD *)(v87 + 32);
                if ( (unsigned __int64)(*(_QWORD *)(v87 + 24) - v88) > 8 )
                {
                  v20 = (__m128 *)0x6F7272652D6F6E20LL;
                  *(_BYTE *)(v88 + 8) = 114;
                  *(_QWORD *)v88 = 0x6F7272652D6F6E20LL;
                  *(_QWORD *)(v87 + 32) += 9LL;
                  v76 = v25[1];
LABEL_80:
                  if ( (v76 & 0x40) == 0 )
                    goto LABEL_81;
                  goto LABEL_103;
                }
                v20 = (__m128 *)" no-error";
                v12 = v87;
                sub_227BF10(v87, " no-error", 9);
                v76 = v25[1];
                if ( (v76 & 0x40) == 0 )
                  goto LABEL_81;
LABEL_103:
                v89 = sub_227D6D0(v12, v20);
                v90 = *(_QWORD *)(v89 + 32);
                if ( (unsigned __int64)(*(_QWORD *)(v89 + 24) - v90) > 8 )
                {
                  v12 = 0x617461662D6F6E20LL;
                  *(_BYTE *)(v90 + 8) = 108;
                  *(_QWORD *)v90 = 0x617461662D6F6E20LL;
                  *(_QWORD *)(v89 + 32) += 9LL;
                  v76 = v25[1];
LABEL_81:
                  if ( (v76 & 0x80u) == 0 )
                    goto LABEL_82;
                  goto LABEL_105;
                }
                v20 = (__m128 *)" no-fatal";
                v12 = v89;
                sub_227BF10(v89, " no-fatal", 9);
                if ( (v25[1] & 0x80u) == 0 )
                  goto LABEL_82;
LABEL_105:
                v91 = sub_227D6D0(v12, v20);
                v92 = *(void **)(v91 + 32);
                if ( *(_QWORD *)(v91 + 24) - (_QWORD)v92 > 9u )
                {
                  v12 = 0x6C75727265766F20LL;
                  qmemcpy(v92, " overruled", 10);
                  *(_QWORD *)(v91 + 32) += 10LL;
LABEL_82:
                  v77 = sub_227D6D0(v12, v20);
                  v78 = *(_BYTE **)(v77 + 32);
                  if ( *(_BYTE **)(v77 + 24) == v78 )
                    goto LABEL_83;
                  goto LABEL_107;
                }
                v20 = (__m128 *)" overruled";
                v12 = v91;
                sub_227BF10(v91, " overruled", 10);
                v77 = sub_227D6D0(v12, " overruled");
                v78 = *(_BYTE **)(v77 + 32);
                if ( *(_BYTE **)(v77 + 24) == v78 )
                {
LABEL_83:
                  v20 = (__m128 *)"\n";
                  v12 = v77;
                  sub_227BF10(v77, "\n", 1);
                  goto LABEL_84;
                }
LABEL_107:
                *v78 = 10;
                ++*(_QWORD *)(v77 + 32);
LABEL_84:
                v26 = 1;
                break;
              case 5u:
                v74 = sub_227D6D0(v12, v20);
                v75 = *(_QWORD *)(v74 + 32);
                if ( (unsigned __int64)(*(_QWORD *)(v74 + 24) - v75) > 4 )
                {
                  *(_DWORD *)v75 = 1635017062;
                  *(_BYTE *)(v75 + 4) = 108;
                  *(_QWORD *)(v74 + 32) += 5LL;
                }
                else
                {
                  v20 = (__m128 *)"fatal";
                  v12 = v74;
                  sub_227BF10(v74, "fatal", 5);
                }
                goto LABEL_77;
              default:
                goto LABEL_77;
            }
LABEL_85:
            v79 = v25 + 2;
            if ( (unsigned int *)v24 == v25 + 2 )
            {
              v25 = (unsigned int *)v24;
              if ( v196 == v24 )
                goto LABEL_91;
            }
            else if ( v25[2] < 0xFFFFFFFE )
            {
              v25 += 2;
              if ( (unsigned int *)v196 == v79 )
                goto LABEL_91;
            }
            else
            {
              v80 = v25 + 4;
              do
              {
                v25 = v80;
                if ( (unsigned int *)v24 == v80 )
                  break;
                v80 += 2;
              }
              while ( *v25 >= 0xFFFFFFFE );
              if ( (unsigned int *)v196 == v25 )
                goto LABEL_91;
            }
          }
          if ( !*v215 )
          {
            *v215 = 1;
            v30 = sub_227D6D0(v12, v20);
            v31 = *(_QWORD *)(v30 + 32);
            if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v31) > 4 )
            {
              *(_DWORD *)v31 = 1701603654;
              *(_BYTE *)(v31 + 4) = 32;
              *(_QWORD *)(v30 + 32) += 5LL;
            }
            else
            {
              v30 = sub_227BF10(v30, "File ", 5);
            }
            v32 = sub_227B9B0(v30, v216);
            v33 = *(_QWORD *)(v32 + 32);
            if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v33) > 8 )
            {
              *(_BYTE *)(v33 + 8) = 32;
              *(_QWORD *)v33 = 0x4449656C69463C20LL;
              *(_QWORD *)(v32 + 32) += 9LL;
            }
            else
            {
              v32 = sub_227BF10(v32, " <FileID ", 9);
            }
            v34 = sub_227B910(v32, (unsigned int)*v217);
            v36 = *(_QWORD *)(v34 + 32);
            v37 = v34;
            if ( (unsigned __int64)(*(_QWORD *)(v34 + 24) - v36) > 2 )
            {
              *(_BYTE *)(v36 + 2) = 32;
              *(_WORD *)v36 = 14910;
              *(_QWORD *)(v34 + 32) += 3LL;
            }
            else
            {
              v37 = sub_227BF10(v34, ">: ", 3);
            }
            v38 = v218;
            v39 = (unsigned int)*v217;
            v220.m128_i8[0] = 0;
            if ( (unsigned int)(v39 + 1) <= 1 )
              goto LABEL_136;
            if ( (int)v39 >= 0 )
            {
              v40 = *((_QWORD *)v218 + 23) + 24 * v39;
              goto LABEL_30;
            }
            v151 = (unsigned int)(-2 - v39);
            v152 = *(_QWORD *)(*((_QWORD *)v218 + 40) + 8LL * ((unsigned int)(-2 - v39) >> 6));
            if ( _bittest64(&v152, v151) )
            {
              v153 = (_QWORD *)(*((_QWORD *)v218 + 34) + 8 * ((unsigned __int64)(int)v151 >> 5));
              if ( *v153 )
              {
                v40 = *v153 + 24 * (v151 & 0x1F);
                goto LABEL_30;
              }
              v171 = (__int64 *)(*((_QWORD *)v218 + 36) & 0xFFFFFFFFFFFFFFF8LL);
              v172 = *v171;
              v171[10] += 768;
              v173 = (_DWORD *)((v172 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v171[1] >= (unsigned __int64)(v173 + 192) && v172 )
              {
                *v171 = (__int64)(v173 + 192);
              }
              else
              {
                v212 = v153;
                v209 = v151;
                v204 = v38;
                v173 = (_DWORD *)sub_986170((__int64)v171, 768, 768, 3, v151, v35);
                v153 = v212;
                LOBYTE(v151) = v209;
                v38 = v204;
              }
              *v153 = v173;
              v174 = v173 + 192;
              do
              {
                *v173 = 0;
                v173 += 6;
                *((_OWORD *)v173 - 1) = 0;
                *((_QWORD *)v173 - 1) = 0;
              }
              while ( v173 != v174 );
              v103 = v220.m128_i8[0];
              v40 = *v153 + 24 * (v151 & 0x1F);
            }
            else
            {
              v201 = v218;
              v40 = sub_101F930(v218, (unsigned int)v151, &v220);
              v103 = v220.m128_i8[0];
              v38 = v201;
            }
            if ( v103 )
            {
LABEL_136:
              sub_101D1C0(&v220, v38);
            }
            else
            {
LABEL_30:
              if ( !v40 )
                goto LABEL_136;
              if ( *(char *)(v40 + 3) < 0 )
                goto LABEL_136;
              v199 = v38;
              sub_101D9A0(
                &v220,
                *(_QWORD *)(v40 + 16) & 0xFFFFFFFFFFFFFFF8LL,
                *((_QWORD *)v38 + 1),
                *((_QWORD *)v38 + 2),
                0);
              v38 = v199;
              if ( !v223 )
                goto LABEL_136;
            }
            v12 = *(_QWORD *)(v37 + 32);
            v20 = (__m128 *)v221;
            if ( n > *(_QWORD *)(v37 + 24) - v12 )
            {
              v12 = v37;
              sub_227BF10(v37, v221, n);
            }
            else if ( n )
            {
              v202 = n;
              memcpy((void *)v12, v221, n);
              *(_QWORD *)(v37 + 32) += v202;
            }
            if ( *(_QWORD *)(v219 + 8) )
            {
              v41 = v218;
              v42 = (unsigned int)*v217;
              v200 = sub_10239D0(v218, v42);
              v43 = sub_227D6D0(v41, v42);
              v44 = *(_QWORD **)(v43 + 32);
              if ( *(_QWORD *)(v43 + 24) - (_QWORD)v44 > 7u )
              {
                *v44 = 0x20746E6572617020LL;
                *(_QWORD *)(v43 + 32) += 8LL;
              }
              else
              {
                v43 = sub_227BF10(v43, " parent ", 8);
              }
              v45 = sub_227B9B0(v43, *(_QWORD *)v216);
              v46 = *(_QWORD *)(v45 + 32);
              if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v46) > 8 )
              {
                *(_BYTE *)(v46 + 8) = 32;
                *(_QWORD *)v46 = 0x4449656C69463C20LL;
                *(_QWORD *)(v45 + 32) += 9LL;
              }
              else
              {
                v45 = sub_227BF10(v45, " <FileID ", 9);
              }
              v47 = sub_227B910(v45, (unsigned int)v200);
              v49 = *(_WORD **)(v47 + 32);
              if ( *(_QWORD *)(v47 + 24) - (_QWORD)v49 > 1u )
              {
                *v49 = 8254;
                *(_QWORD *)(v47 + 32) += 2LL;
              }
              else
              {
                sub_227BF10(v47, "> ", 2);
              }
              v50 = v200;
              v51 = v218;
              v220.m128_i8[0] = 0;
              if ( (unsigned int)(v200 + 1) <= 1 )
                goto LABEL_132;
              if ( (int)v200 >= 0 )
              {
                v52 = *((_QWORD *)v218 + 23) + 24LL * (unsigned int)v200;
                goto LABEL_46;
              }
              v155 = (unsigned int)(-2 - v200);
              v156 = *(_QWORD *)(*((_QWORD *)v218 + 40) + 8LL * ((unsigned int)(-2 - v200) >> 6));
              if ( _bittest64(&v156, v155) )
              {
                v157 = (_QWORD *)(*((_QWORD *)v218 + 34) + 8 * ((unsigned __int64)(int)v155 >> 5));
                if ( *v157 )
                {
                  v52 = *v157 + 24LL * ((-2 - (_BYTE)v200) & 0x1F);
                  goto LABEL_46;
                }
                v180 = (__int64 *)(*((_QWORD *)v218 + 36) & 0xFFFFFFFFFFFFFFF8LL);
                v181 = *v180;
                v180[10] += 768;
                v182 = (_DWORD *)((v181 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                if ( v180[1] >= (unsigned __int64)(v182 + 192) && v181 )
                {
                  *v180 = (__int64)(v182 + 192);
                }
                else
                {
                  v50 = 768;
                  v208 = v157;
                  v182 = (_DWORD *)sub_986170((__int64)v180, 768, 768, 3, (__int64)v157, v48);
                  v157 = v208;
                }
                *v157 = v182;
                v183 = v182 + 192;
                do
                {
                  *v182 = 0;
                  v182 += 6;
                  *((_OWORD *)v182 - 1) = 0;
                  *((_QWORD *)v182 - 1) = 0;
                }
                while ( v183 != v182 );
                v51 = v218;
                v102 = v220.m128_i8[0];
                v52 = *v157 + 24LL * ((-2 - (_BYTE)v200) & 0x1F);
              }
              else
              {
                v50 = (unsigned int)v155;
                v52 = sub_101F930(v218, (unsigned int)v155, &v220);
                v51 = v218;
                v102 = v220.m128_i8[0];
              }
              if ( v102 )
              {
LABEL_132:
                v53 = 0;
              }
              else
              {
LABEL_46:
                if ( !v52 || *(char *)(v52 + 3) < 0 )
                  goto LABEL_132;
                v53 = *(_DWORD *)v52 & 0x7FFFFFFF;
              }
              v207 = v51;
              v220.m128_i32[0] = v53 + HIDWORD(v200);
              v20 = (__m128 *)sub_227D6D0(v51, v50);
              v12 = (unsigned __int64)&v220;
              sub_101AC40(&v220, v20, v207);
            }
            if ( *(_BYTE *)(v216 + 12) )
            {
              v104 = sub_227D6D0(v12, v20);
              v105 = *(__m128i **)(v104 + 32);
              if ( *(_QWORD *)(v104 + 24) - (_QWORD)v105 > 0x15u )
              {
                v158 = _mm_load_si128((const __m128i *)&xmmword_23A9240);
                v105[1].m128i_i32[0] = 1869182057;
                v105[1].m128i_i16[2] = 29550;
                *v105 = v158;
                *(_QWORD *)(v104 + 32) += 22LL;
                goto LABEL_51;
              }
              v20 = (__m128 *)" has_local_transitions";
              v12 = v104;
              sub_227BF10(v104, " has_local_transitions", 22);
              v54 = sub_227D6D0(v12, " has_local_transitions");
              v55 = *(_BYTE **)(v54 + 32);
              if ( *(_BYTE **)(v54 + 24) != v55 )
                goto LABEL_139;
LABEL_52:
              v20 = (__m128 *)"\n";
              v12 = v54;
              sub_227BF10(v54, "\n", 1);
            }
            else
            {
LABEL_51:
              v54 = sub_227D6D0(v12, v20);
              v55 = *(_BYTE **)(v54 + 32);
              if ( *(_BYTE **)(v54 + 24) == v55 )
                goto LABEL_52;
LABEL_139:
              *v55 = 10;
              ++*(_QWORD *)(v54 + 32);
            }
          }
          v56 = sub_227D6D0(v12, v20);
          v58 = *(_WORD **)(v56 + 32);
          if ( *(_QWORD *)(v56 + 24) - (_QWORD)v58 > 1u )
          {
            *v58 = 8224;
            *(_QWORD *)(v56 + 32) += 2LL;
          }
          else
          {
            v12 = v56;
            sub_227BF10(v56, "  ", 2);
          }
          v220.m128_i8[0] = 0;
          if ( (unsigned int)(v214 + 1) <= 1 )
            goto LABEL_118;
          if ( v214 >= 0 )
          {
            v59 = *((_QWORD *)v18 + 23) + 24LL * (unsigned int)v214;
            goto LABEL_58;
          }
          v106 = (unsigned int)(-2 - v214);
          v107 = *(_QWORD *)(*((_QWORD *)v18 + 40) + 8LL * ((unsigned int)(-2 - v214) >> 6));
          if ( _bittest64(&v107, v106) )
          {
            v108 = (_QWORD *)(*((_QWORD *)v18 + 34) + 8 * ((unsigned __int64)(int)v106 >> 5));
            if ( *v108 )
            {
              v59 = *v108 + 24LL * ((-2 - (_BYTE)v214) & 0x1F);
              goto LABEL_58;
            }
            v12 = *((_QWORD *)v18 + 36) & 0xFFFFFFFFFFFFFFF8LL;
            v168 = *(_QWORD *)v12;
            *(_QWORD *)(v12 + 80) += 768LL;
            v169 = (_DWORD *)((v168 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( *(_QWORD *)(v12 + 8) >= (unsigned __int64)(v169 + 192) && v168 )
            {
              *(_QWORD *)v12 = v169 + 192;
            }
            else
            {
              v203 = v108;
              v169 = (_DWORD *)sub_986170(v12, 768, 768, 3, (__int64)v108, v57);
              v108 = v203;
            }
            *v108 = v169;
            v170 = v169 + 192;
            do
            {
              *v169 = 0;
              v169 += 6;
              *((_OWORD *)v169 - 1) = 0;
              *((_QWORD *)v169 - 1) = 0;
            }
            while ( v170 != v169 );
            v101 = v220.m128_i8[0];
            v59 = *v108 + 24 * (v106 & 0x1F);
          }
          else
          {
            v12 = (unsigned __int64)v18;
            v59 = sub_101F930(v18, (unsigned int)v106, &v220);
            v101 = v220.m128_i8[0];
          }
          if ( v101 )
          {
LABEL_118:
            v60 = 0;
          }
          else
          {
LABEL_58:
            if ( !v59 || *(char *)(v59 + 3) < 0 )
              goto LABEL_118;
            v60 = *(_DWORD *)v59 & 0x7FFFFFFF;
          }
          v220.m128_i32[0] = *((_DWORD *)v197 + 2) + v60;
          v61 = sub_227D6D0(v12, v197);
          sub_101AC40(&v220, v61, v18);
          v62 = sub_227D6D0(&v220, v61);
          v63 = *(_QWORD **)(v62 + 32);
          if ( *(_QWORD *)(v62 + 24) - (_QWORD)v63 > 7u )
          {
            *v63 = 0x206574617473203ALL;
            *(_QWORD *)(v62 + 32) += 8LL;
          }
          else
          {
            v62 = sub_227BF10(v62, ": state ", 8);
          }
          v12 = v62;
          v20 = (__m128 *)*v197;
          v64 = sub_227B9B0(v62, *v197);
          v65 = *(_WORD **)(v64 + 32);
          if ( *(_QWORD *)(v64 + 24) - (_QWORD)v65 > 1u )
          {
            *v65 = 2618;
            *(_QWORD *)(v64 + 32) += 2LL;
          }
          else
          {
            v20 = (__m128 *)":\n";
            v12 = v64;
            sub_227BF10(v64, ":\n", 2);
          }
          goto LABEL_65;
        }
LABEL_91:
        v197 += 2;
      }
      while ( v205 != v197 );
      v17 = v21;
LABEL_93:
      v12 = v210;
      result = std::_Rb_tree_increment(v210, (const char *)v20);
      v210 = result;
    }
    while ( v211 != result );
  }
  return result;
}
