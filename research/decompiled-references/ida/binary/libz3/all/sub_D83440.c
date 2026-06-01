__int64 __fastcall sub_D83440(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, __int64 *a7)
{
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edx
  _QWORD *v13; // r14
  unsigned int v14; // r12d
  int v15; // edx
  char *v16; // r14
  const char **v17; // r13
  __int64 v18; // r15
  __int64 v19; // rdi
  _DWORD *v20; // rax
  int v21; // edx
  int v22; // eax
  const char *v23; // rax
  size_t v24; // r14
  size_t v25; // r15
  char *v26; // rax
  void *v27; // r12
  char *v28; // r13
  __int64 v29; // r12
  __int64 v30; // rax
  char *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r12
  char *v34; // rax
  char *v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  const char *v38; // rax
  size_t v39; // r15
  size_t v40; // r12
  char *v41; // rax
  void *v42; // r14
  char *v43; // r13
  _BYTE *v44; // rcx
  _BYTE *v45; // r8
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rdi
  bool v50; // zf
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rax
  unsigned __int64 v58; // r15
  __int64 *v59; // rbx
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v63; // r12
  char *v64; // rax
  void *v65; // r14
  char *v66; // r15
  size_t v67; // r12
  size_t v68; // r13
  size_t v69; // r14
  char *v70; // rax
  void *v71; // r12
  char *v72; // r15
  size_t v73; // r14
  void *v74; // r15
  int v75; // edx
  char *v76; // r13
  __int64 v77; // rax
  int v78; // edx
  __int64 v79; // r14
  _QWORD *v80; // r13
  unsigned __int64 v81; // rax
  __int64 v82; // rsi
  size_t v83; // rax
  size_t v84; // r12
  size_t v85; // r14
  char *v86; // rax
  void *v87; // r13
  char *v88; // r15
  size_t v89; // r14
  void *v90; // r15
  int v91; // edx
  char *v92; // r13
  __int64 v93; // rax
  __int64 v94; // r12
  char *v95; // rax
  char *v96; // rdi
  unsigned int *v97; // rsi
  unsigned __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r12
  char *v101; // rax
  void *v102; // r14
  char *v103; // r13
  char *v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r12
  __int64 v108; // rax
  char *v109; // rdi
  __int64 v110; // rsi
  size_t v111; // r12
  void *v112; // rax
  void *v113; // r13
  unsigned int v114; // r14d
  unsigned int v115; // r15d
  unsigned int v116; // ecx
  int v117; // r12d
  char *v118; // rcx
  unsigned __int64 v119; // r13
  unsigned __int64 v120; // rdi
  __m128i si128; // xmm0
  int v122; // r8d
  char *v123; // rcx
  unsigned int v124; // eax
  unsigned int v125; // esi
  __int64 v126; // rax
  __int64 v127; // rdx
  __int8 v128; // r15
  size_t v129; // rax
  size_t v130; // r13
  size_t v131; // rsi
  size_t v132; // rax
  size_t v133; // r15
  char *v134; // rax
  void *v135; // r14
  __int64 v136; // r12
  __int64 v137; // rax
  char *v138; // rdi
  __int64 v139; // rsi
  size_t v140; // r12
  void *v141; // rax
  void *v142; // r13
  unsigned int v143; // r14d
  unsigned int v144; // r15d
  unsigned int v145; // ecx
  int v146; // r12d
  char *v147; // rcx
  unsigned __int64 v148; // r13
  unsigned __int64 v149; // rdi
  __m128i v150; // xmm0
  int v151; // r8d
  char *v152; // rcx
  unsigned int v153; // eax
  unsigned int v154; // esi
  __int64 v155; // rax
  __int64 v156; // rdx
  __int8 v157; // r15
  size_t v158; // rax
  size_t v159; // r12
  size_t v160; // rsi
  size_t v161; // rax
  size_t v162; // r14
  char *v163; // rax
  void *v164; // r13
  char *v165; // rax
  void *v166; // r12
  char *v167; // r13
  char *v168; // rax
  void *v169; // r12
  char *v170; // r13
  __int64 v171; // r15
  __int64 v172; // r15
  char *v173; // r15
  char *v174; // r15
  unsigned int *v175; // r11
  unsigned __int64 v176; // rax
  __int64 v177; // rsi
  unsigned __int64 v178; // rax
  __int64 v179; // rsi
  char *v180; // rdi
  char *v181; // rdi
  char *v182; // rcx
  char *v183; // r12
  char *v184; // r15
  char *v185; // r15
  char *v186; // r13
  char *v187; // r13
  size_t v188; // [rsp+0h] [rbp-320h]
  __int64 v189; // [rsp+8h] [rbp-318h]
  int v190; // [rsp+10h] [rbp-310h]
  size_t v191; // [rsp+10h] [rbp-310h]
  int v192; // [rsp+18h] [rbp-308h]
  __int64 v193; // [rsp+18h] [rbp-308h]
  unsigned int v197; // [rsp+3Ch] [rbp-2E4h]
  unsigned __int64 v198; // [rsp+40h] [rbp-2E0h]
  unsigned __int64 v199; // [rsp+40h] [rbp-2E0h]
  __int64 v201; // [rsp+60h] [rbp-2C0h]
  __int64 v202; // [rsp+68h] [rbp-2B8h]
  unsigned int *v204; // [rsp+78h] [rbp-2A8h]
  char *s; // [rsp+80h] [rbp-2A0h]
  char *sa; // [rsp+80h] [rbp-2A0h]
  _QWORD v207[2]; // [rsp+90h] [rbp-290h] BYREF
  char v208; // [rsp+A0h] [rbp-280h] BYREF
  void *src; // [rsp+E0h] [rbp-240h]
  __m128i n; // [rsp+E8h] [rbp-238h]
  void *v211; // [rsp+100h] [rbp-220h]
  __int64 v212; // [rsp+108h] [rbp-218h]
  _BYTE v213[128]; // [rsp+110h] [rbp-210h] BYREF
  void *ptr; // [rsp+190h] [rbp-190h]
  __int64 v215; // [rsp+198h] [rbp-188h]
  _BYTE v216[128]; // [rsp+1A0h] [rbp-180h] BYREF
  __m128i v217; // [rsp+220h] [rbp-100h] BYREF
  __m128i v218; // [rsp+230h] [rbp-F0h]
  __m128i v219; // [rsp+240h] [rbp-E0h]
  __m128i v220; // [rsp+250h] [rbp-D0h]
  __m128i v221; // [rsp+260h] [rbp-C0h]
  __m128i v222; // [rsp+270h] [rbp-B0h]
  __m128i v223; // [rsp+280h] [rbp-A0h]
  __m128i v224; // [rsp+290h] [rbp-90h]
  __m128i v225; // [rsp+2A0h] [rbp-80h]
  __m128i v226; // [rsp+2B0h] [rbp-70h]
  __m128i v227; // [rsp+2C0h] [rbp-60h]
  __m128i v228[5]; // [rsp+2D0h] [rbp-50h]

  v204 = (unsigned int *)a2;
  if ( *(_WORD *)(a2 + 4) == 2 && *(_DWORD *)(a2 + 16) == 2 )
    return 0;
  v7 = a1[5];
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  v9 = *(unsigned int *)(a2 + 20);
  ptr = v216;
  n = _mm_load_si128((const __m128i *)&xmmword_18B6650);
  v197 = v8 - v9;
  src = &v208;
  v211 = v213;
  v212 = 0x1000000000LL;
  v215 = 0x1000000000LL;
  if ( !(_DWORD)v9 )
  {
    v44 = v213;
    v45 = v216;
    goto LABEL_49;
  }
  v10 = (unsigned int)v9;
  v11 = 0;
  v201 = (unsigned int)v9;
  v202 = a2 + 80;
  while ( 1 )
  {
    v17 = (const char **)(v202 + 8 * (v11 + v10));
    v18 = *(_QWORD *)&v204[2 * v11 + 20];
    v19 = a1[3];
    v20 = *(_DWORD **)(v18 + 24);
    v21 = *(_DWORD *)(v19 + 448);
    if ( !v20 || *v20 != v21 )
      goto LABEL_6;
    v22 = v20[1];
    if ( !v22 )
    {
      v192 = sub_15C5540((int)v19 + 432, *(_QWORD *)&v204[2 * v11 + 20], v21, v202, a5, (_DWORD)a6);
      v190 = sub_15C5560(a1[3] + 432LL, v18);
      v38 = *v17;
      n.m128i_i64[0] = 0;
      v39 = n.m128i_u64[1];
      v199 = (unsigned __int64)v38;
      if ( ((unsigned __int8)v38 & 7) == 0 )
      {
        if ( v38 )
        {
          v40 = strlen(v38);
          if ( v39 < v40 )
          {
            do
            {
              v39 *= 2LL;
              v41 = (char *)sub_186B270(v39);
              v42 = src;
              v43 = v41;
              memcpy(v41, src, n.m128i_u64[0]);
              if ( n.m128i_i64[1] > 0x40uLL )
                sub_186B220(v42);
              n.m128i_i64[1] = v39;
              src = v43;
            }
            while ( v39 < v40 );
            v180 = &v43[n.m128i_i64[0]];
          }
          else
          {
            v180 = (char *)src;
          }
          memcpy(v180, (const void *)v199, v40);
          v67 = n.m128i_i64[0] + v40;
          n.m128i_i64[0] = v67;
        }
        else
        {
          if ( n.m128i_i64[1] <= 3uLL )
          {
            do
            {
              v39 *= 2LL;
              v165 = (char *)sub_186B270(v39);
              v166 = src;
              v167 = v165;
              memcpy(v165, src, n.m128i_u64[0]);
              if ( n.m128i_i64[1] > 0x40uLL )
                sub_186B220(v166);
              n.m128i_i64[1] = v39;
              src = v167;
            }
            while ( v39 <= 3 );
            v186 = &v167[n.m128i_i64[0]];
          }
          else
          {
            v186 = (char *)src;
          }
          *(_DWORD *)v186 = 1819047278;
          v67 = n.m128i_i64[0] + 4;
          n.m128i_i64[0] += 4;
        }
        goto LABEL_92;
      }
      if ( n.m128i_i64[1] <= 1uLL )
      {
        do
        {
          v100 = 2 * v39;
          v101 = (char *)sub_186B270(2 * v39);
          v102 = src;
          v103 = v101;
          memcpy(v101, src, n.m128i_u64[0]);
          if ( n.m128i_i64[1] > 0x40uLL )
            sub_186B220(v102);
          n.m128i_i64[1] = 2 * v39;
          v39 = 0;
          src = v103;
        }
        while ( v100 != 2 );
        v182 = &v103[n.m128i_i64[0]];
      }
      else
      {
        v182 = (char *)src;
      }
      *(_WORD *)v182 = 8555;
      n.m128i_i64[0] += 2;
      v114 = (unsigned int)(v199 >> 3) >> 31;
      v115 = -(int)(v199 >> 3);
      if ( (int)(v199 >> 3) > 0 )
        v115 = v199 >> 3;
      if ( v115 <= 9 )
      {
        LOBYTE(v207[0]) = 45;
        v119 = v114 + 1;
        v123 = (char *)v207 + (((v199 >> 3) & 0x80000000) != 0LL);
        s = (char *)v207;
      }
      else
      {
        v116 = v115;
        v117 = 1;
        while ( 1 )
        {
          if ( v116 <= 0x63 )
          {
            ++v117;
            goto LABEL_163;
          }
          if ( v116 <= 0x3E7 )
          {
            v117 += 2;
            goto LABEL_163;
          }
          if ( v116 <= 0x270F )
            break;
          v117 += 4;
          if ( v116 <= 0x1869F )
            goto LABEL_163;
          v116 /= 0x2710u;
        }
        v117 += 3;
LABEL_163:
        v118 = (char *)v207;
        v119 = v117 + v114;
        s = (char *)v207;
        LOBYTE(v207[0]) = 0;
        if ( v119 > 0xF )
        {
          if ( v119 <= 0x1D )
          {
            v189 = 30;
            v120 = 31;
          }
          else
          {
            v189 = v117 + v114;
            v120 = v119 + 1;
          }
          v118 = (char *)operator new(v120);
          *v118 = v207[0];
          s = v118;
          v207[0] = v189;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
        *v118 = 45;
        v122 = v117 - 1;
        v123 = &v118[((v199 >> 3) & 0x80000000) != 0LL];
        v217 = si128;
        v218 = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
        v219 = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
        v220 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
        v221 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
        v222 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
        v223 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
        v224 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
        v225 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
        v226 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
        v227 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
        v228[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
        *(__m128i *)((char *)v228 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
        if ( v115 <= 0x63 )
          goto LABEL_230;
        do
        {
          v124 = v115 % 0x64;
          v125 = v115;
          v115 /= 0x64u;
          v126 = 2 * v124;
          v123[v122] = v217.m128i_i8[(unsigned int)(v126 + 1)];
          v127 = (unsigned int)(v122 - 1);
          v122 -= 2;
          v123[v127] = v217.m128i_i8[v126];
        }
        while ( v125 > 0x270F );
        if ( v125 > 0x3E7 )
        {
LABEL_230:
          v171 = 2 * v115;
          v123[1] = v217.m128i_i8[(unsigned int)(v171 + 1)];
          v128 = v217.m128i_i8[v171];
          goto LABEL_171;
        }
      }
      v128 = v115 + 48;
LABEL_171:
      *v123 = v128;
      s[v119] = 0;
      v129 = strlen(s);
      v130 = n.m128i_u64[1];
      v131 = v129;
      v188 = v129;
      v132 = n.m128i_i64[0];
      v133 = v131 + n.m128i_i64[0];
      if ( n.m128i_i64[1] < v131 + n.m128i_i64[0] )
      {
        do
        {
          v130 *= 2LL;
          v134 = (char *)sub_186B270(v130);
          v135 = src;
          v183 = v134;
          memcpy(v134, src, n.m128i_u64[0]);
          if ( n.m128i_i64[1] > 0x40uLL )
            sub_186B220(v135);
          n.m128i_i64[1] = v130;
          src = v183;
        }
        while ( v130 < v133 );
        v132 = n.m128i_i64[0];
      }
      else
      {
        v183 = (char *)src;
      }
      memcpy(&v183[v132], s, v188);
      v67 = n.m128i_i64[0] + v188;
      n.m128i_i64[0] += v188;
      if ( s != (char *)v207 )
      {
        operator delete(s, v207[0] + 1LL);
        v67 = n.m128i_i64[0];
      }
LABEL_92:
      v68 = n.m128i_u64[1];
      v69 = v67 + 3;
      if ( n.m128i_i64[1] < v67 + 3 )
      {
        do
        {
          v68 *= 2LL;
          v70 = (char *)sub_186B270(v68);
          v71 = src;
          v173 = v70;
          memcpy(v70, src, n.m128i_u64[0]);
          if ( n.m128i_i64[1] > 0x40uLL )
            sub_186B220(v71);
          n.m128i_i64[1] = v68;
          src = v173;
        }
        while ( v68 < v69 );
        v67 = n.m128i_i64[0];
      }
      else
      {
        v173 = (char *)src;
      }
      v72 = &v173[v67];
      *(_WORD *)v72 = 25134;
      v72[2] = 118;
      v73 = n.m128i_i64[0] + 3;
      n.m128i_i64[0] = v73;
      if ( v73 >= n.m128i_i64[1] )
      {
        v111 = 2 * n.m128i_i64[1];
        v112 = (void *)sub_186B270(2 * n.m128i_i64[1]);
        v73 = n.m128i_i64[0];
        v113 = src;
        v74 = v112;
        memcpy(v112, src, n.m128i_u64[0]);
        if ( n.m128i_i64[1] > 0x40uLL )
        {
          sub_186B220(v113);
          v73 = n.m128i_i64[0];
        }
        n.m128i_i64[1] = v111;
        src = v74;
      }
      else
      {
        v74 = src;
      }
      *((_BYTE *)v74 + v73) = 0;
      sub_180C5A0(&v217, src);
      v75 = v215;
      if ( (unsigned int)v215 >= HIDWORD(v215) )
      {
        v107 = (unsigned int)(2 * HIDWORD(v215));
        v76 = (char *)sub_186B270(8 * v107);
        v108 = 0;
        v109 = (char *)ptr;
        v75 = v215;
        v110 = 8LL * (unsigned int)v215;
        if ( (_DWORD)v215 )
        {
          do
          {
            *(_QWORD *)&v76[v108] = *(_QWORD *)&v109[v108];
            v108 += 8;
          }
          while ( v108 != v110 );
        }
        if ( v109 != v216 && v109 )
        {
          sub_186B220(v109);
          v75 = v215;
        }
        ptr = v76;
        HIDWORD(v215) = v107;
      }
      else
      {
        v76 = (char *)ptr;
      }
      *(_QWORD *)&v76[8 * v75] = v217.m128i_i64[0];
      LODWORD(v215) = v75 + 1;
      v77 = sub_1674700(a1[3] + 232LL, (unsigned int)(v190 + v192));
      v78 = v212;
      v79 = v77;
      if ( (unsigned int)v212 >= HIDWORD(v212) )
      {
        v94 = (unsigned int)(2 * HIDWORD(v212));
        v104 = (char *)sub_186B270(8 * v94);
        v78 = v212;
        v96 = (char *)v211;
        v80 = v104;
        if ( !(_DWORD)v212 )
          goto LABEL_128;
        if ( (unsigned int)(v212 - 1) > 2 && v104 != (char *)v211 + 8 )
        {
          v97 = v204;
          v105 = 0;
          v106 = 16LL * ((unsigned int)v212 >> 1);
          do
          {
            *(__m128i *)&v80[v105 / 8] = _mm_loadu_si128((const __m128i *)&v96[v105]);
            v105 += 16LL;
          }
          while ( v105 != v106 );
LABEL_126:
          v204 = v97;
          if ( (v78 & 1) != 0 )
            v80[v78 & 0xFFFFFFFE] = *(_QWORD *)&v96[8 * (v78 & 0xFFFFFFFE)];
          goto LABEL_128;
        }
        v175 = v204;
        v176 = 0;
        v177 = 8LL * (unsigned int)v212;
        do
        {
          v80[v176 / 8] = *(_QWORD *)&v96[v176];
          v176 += 8LL;
        }
        while ( v176 != v177 );
LABEL_243:
        v204 = v175;
LABEL_128:
        if ( v96 != v213 && v96 )
        {
          sub_186B220(v96);
          v78 = v212;
        }
        v211 = v80;
        HIDWORD(v212) = v94;
        goto LABEL_104;
      }
LABEL_103:
      v80 = v211;
LABEL_104:
      v80[v78] = v79;
      LODWORD(v212) = v78 + 1;
      goto LABEL_11;
    }
    if ( v22 == 1 )
    {
      v23 = *v17;
      v24 = n.m128i_u64[1];
      n.m128i_i64[0] = 0;
      v198 = (unsigned __int64)v23;
      if ( ((unsigned __int8)v23 & 7) == 0 )
      {
        if ( v23 )
        {
          v25 = strlen(v23);
          if ( v24 < v25 )
          {
            do
            {
              v24 *= 2LL;
              v26 = (char *)sub_186B270(v24);
              v27 = src;
              v28 = v26;
              memcpy(v26, src, n.m128i_u64[0]);
              if ( n.m128i_i64[1] > 0x40uLL )
                sub_186B220(v27);
              n.m128i_i64[1] = v24;
              src = v28;
            }
            while ( v24 < v25 );
            v181 = &v28[n.m128i_i64[0]];
          }
          else
          {
            v181 = (char *)src;
          }
          memcpy(v181, (const void *)v198, v25);
          v83 = v25 + n.m128i_i64[0];
          n.m128i_i64[0] += v25;
        }
        else
        {
          if ( n.m128i_i64[1] <= 3uLL )
          {
            do
            {
              v24 *= 2LL;
              v168 = (char *)sub_186B270(v24);
              v169 = src;
              v170 = v168;
              memcpy(v168, src, n.m128i_u64[0]);
              if ( n.m128i_i64[1] > 0x40uLL )
                sub_186B220(v169);
              n.m128i_i64[1] = v24;
              src = v170;
            }
            while ( v24 <= 3 );
            v187 = &v170[n.m128i_i64[0]];
          }
          else
          {
            v187 = (char *)src;
          }
          *(_DWORD *)v187 = 1819047278;
          v83 = n.m128i_i64[0] + 4;
          n.m128i_i64[0] += 4;
        }
        goto LABEL_110;
      }
      if ( n.m128i_i64[1] <= 1uLL )
      {
        do
        {
          v63 = 2 * v24;
          v64 = (char *)sub_186B270(2 * v24);
          v65 = src;
          v66 = v64;
          memcpy(v64, src, n.m128i_u64[0]);
          if ( n.m128i_i64[1] > 0x40uLL )
            sub_186B220(v65);
          n.m128i_i64[1] = v63;
          v24 = 0;
          src = v66;
        }
        while ( v63 != 2 );
        v184 = &v66[n.m128i_i64[0]];
      }
      else
      {
        v184 = (char *)src;
      }
      *(_WORD *)v184 = 8555;
      n.m128i_i64[0] += 2;
      v143 = (unsigned int)(v198 >> 3) >> 31;
      v144 = -(int)(v198 >> 3);
      if ( (int)(v198 >> 3) > 0 )
        v144 = v198 >> 3;
      if ( v144 <= 9 )
      {
        LOBYTE(v207[0]) = 45;
        v148 = v143 + 1;
        v152 = (char *)v207 + (((v198 >> 3) & 0x80000000) != 0LL);
        sa = (char *)v207;
      }
      else
      {
        v145 = v144;
        v146 = 1;
        while ( 1 )
        {
          if ( v145 <= 0x63 )
          {
            ++v146;
            goto LABEL_196;
          }
          if ( v145 <= 0x3E7 )
          {
            v146 += 2;
            goto LABEL_196;
          }
          if ( v145 <= 0x270F )
            break;
          v146 += 4;
          if ( v145 <= 0x1869F )
            goto LABEL_196;
          v145 /= 0x2710u;
        }
        v146 += 3;
LABEL_196:
        v147 = (char *)v207;
        v148 = v146 + v143;
        sa = (char *)v207;
        LOBYTE(v207[0]) = 0;
        if ( v148 > 0xF )
        {
          if ( v148 <= 0x1D )
          {
            v193 = 30;
            v149 = 31;
          }
          else
          {
            v193 = v146 + v143;
            v149 = v148 + 1;
          }
          v147 = (char *)operator new(v149);
          *v147 = v207[0];
          sa = v147;
          v207[0] = v193;
        }
        v150 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
        *v147 = 45;
        v151 = v146 - 1;
        v152 = &v147[((v198 >> 3) & 0x80000000) != 0LL];
        v217 = v150;
        v218 = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
        v219 = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
        v220 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
        v221 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
        v222 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
        v223 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
        v224 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
        v225 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
        v226 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
        v227 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
        v228[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
        *(__m128i *)((char *)v228 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
        if ( v144 <= 0x63 )
          goto LABEL_231;
        do
        {
          v153 = v144 % 0x64;
          v154 = v144;
          v144 /= 0x64u;
          v155 = 2 * v153;
          v152[v151] = v217.m128i_i8[(unsigned int)(v155 + 1)];
          v156 = (unsigned int)(v151 - 1);
          v151 -= 2;
          v152[v156] = v217.m128i_i8[v155];
        }
        while ( v154 > 0x270F );
        if ( v154 > 0x3E7 )
        {
LABEL_231:
          v172 = 2 * v144;
          v152[1] = v217.m128i_i8[(unsigned int)(v172 + 1)];
          v157 = v217.m128i_i8[v172];
          goto LABEL_204;
        }
      }
      v157 = v144 + 48;
LABEL_204:
      *v152 = v157;
      sa[v148] = 0;
      v158 = strlen(sa);
      v159 = n.m128i_u64[1];
      v160 = v158;
      v191 = v158;
      v161 = n.m128i_i64[0];
      v162 = v160 + n.m128i_i64[0];
      if ( n.m128i_i64[1] < v160 + n.m128i_i64[0] )
      {
        do
        {
          v159 *= 2LL;
          v163 = (char *)sub_186B270(v159);
          v164 = src;
          v185 = v163;
          memcpy(v163, src, n.m128i_u64[0]);
          if ( n.m128i_i64[1] > 0x40uLL )
            sub_186B220(v164);
          n.m128i_i64[1] = v159;
          src = v185;
        }
        while ( v159 < v162 );
        v161 = n.m128i_i64[0];
      }
      else
      {
        v185 = (char *)src;
      }
      memcpy(&v185[v161], sa, v191);
      v83 = v191 + n.m128i_i64[0];
      n.m128i_i64[0] += v191;
      if ( sa != (char *)v207 )
      {
        operator delete(sa, v207[0] + 1LL);
        v83 = n.m128i_i64[0];
      }
LABEL_110:
      v84 = n.m128i_u64[1];
      v85 = v83 + 3;
      if ( n.m128i_i64[1] < v83 + 3 )
      {
        do
        {
          v84 *= 2LL;
          v86 = (char *)sub_186B270(v84);
          v87 = src;
          v174 = v86;
          memcpy(v86, src, n.m128i_u64[0]);
          if ( n.m128i_i64[1] > 0x40uLL )
            sub_186B220(v87);
          n.m128i_i64[1] = v84;
          src = v174;
        }
        while ( v84 < v85 );
        v83 = n.m128i_i64[0];
      }
      else
      {
        v174 = (char *)src;
      }
      v88 = &v174[v83];
      *(_WORD *)v88 = 25134;
      v88[2] = 118;
      v89 = n.m128i_i64[0] + 3;
      n.m128i_i64[0] = v89;
      if ( v89 >= n.m128i_i64[1] )
      {
        v140 = 2 * n.m128i_i64[1];
        v141 = (void *)sub_186B270(2 * n.m128i_i64[1]);
        v89 = n.m128i_i64[0];
        v142 = src;
        v90 = v141;
        memcpy(v141, src, n.m128i_u64[0]);
        if ( n.m128i_i64[1] > 0x40uLL )
        {
          sub_186B220(v142);
          v89 = n.m128i_i64[0];
        }
        n.m128i_i64[1] = v140;
        src = v90;
      }
      else
      {
        v90 = src;
      }
      *((_BYTE *)v90 + v89) = 0;
      sub_180C5A0(&v217, src);
      v91 = v215;
      if ( (unsigned int)v215 >= HIDWORD(v215) )
      {
        v136 = (unsigned int)(2 * HIDWORD(v215));
        v92 = (char *)sub_186B270(8 * v136);
        v137 = 0;
        v138 = (char *)ptr;
        v91 = v215;
        v139 = 8LL * (unsigned int)v215;
        if ( (_DWORD)v215 )
        {
          do
          {
            *(_QWORD *)&v92[v137] = *(_QWORD *)&v138[v137];
            v137 += 8;
          }
          while ( v137 != v139 );
        }
        if ( v138 && v138 != v216 )
        {
          sub_186B220(v138);
          v91 = v215;
        }
        ptr = v92;
        HIDWORD(v215) = v136;
      }
      else
      {
        v92 = (char *)ptr;
      }
      *(_QWORD *)&v92[8 * v91] = v217.m128i_i64[0];
      LODWORD(v215) = v91 + 1;
      v93 = sub_1674700(a1[3] + 232LL, 3);
      v78 = v212;
      v79 = v93;
      if ( (unsigned int)v212 >= HIDWORD(v212) )
      {
        v94 = (unsigned int)(2 * HIDWORD(v212));
        v95 = (char *)sub_186B270(8 * v94);
        v78 = v212;
        v96 = (char *)v211;
        v80 = v95;
        if ( !(_DWORD)v212 )
          goto LABEL_128;
        if ( (unsigned int)(v212 - 1) > 2 && v95 != (char *)v211 + 8 )
        {
          v97 = v204;
          v98 = 0;
          v99 = 16LL * ((unsigned int)v212 >> 1);
          do
          {
            *(__m128i *)&v80[v98 / 8] = _mm_loadu_si128((const __m128i *)&v96[v98]);
            v98 += 16LL;
          }
          while ( v98 != v99 );
          goto LABEL_126;
        }
        v175 = v204;
        v178 = 0;
        v179 = 8LL * (unsigned int)v212;
        do
        {
          v80[v178 / 8] = *(_QWORD *)&v96[v178];
          v178 += 8LL;
        }
        while ( v178 != v179 );
        goto LABEL_243;
      }
      goto LABEL_103;
    }
LABEL_6:
    v12 = v212;
    if ( (unsigned int)v212 >= HIDWORD(v212) )
    {
      v33 = (unsigned int)(2 * HIDWORD(v212));
      v34 = (char *)sub_186B270(8 * v33);
      v12 = v212;
      v35 = (char *)v211;
      v13 = v34;
      if ( (_DWORD)v212 )
      {
        if ( (unsigned int)(v212 - 1) <= 2 || v34 == (char *)v211 + 8 )
        {
          v81 = 0;
          v82 = 8LL * (unsigned int)v212;
          do
          {
            v13[v81 / 8] = *(_QWORD *)&v35[v81];
            v81 += 8LL;
          }
          while ( v81 != v82 );
        }
        else
        {
          v36 = 0;
          v37 = 16LL * ((unsigned int)v212 >> 1);
          do
          {
            *(__m128i *)&v13[v36 / 8] = _mm_loadu_si128((const __m128i *)&v35[v36]);
            v36 += 16LL;
          }
          while ( v36 != v37 );
          if ( (v12 & 1) != 0 )
            v13[v12 & 0xFFFFFFFE] = *(_QWORD *)&v35[8 * (v12 & 0xFFFFFFFE)];
        }
      }
      if ( v35 != v213 && v35 )
      {
        sub_186B220(v35);
        v12 = v212;
      }
      v211 = v13;
      HIDWORD(v212) = v33;
    }
    else
    {
      v13 = v211;
    }
    v14 = HIDWORD(v215);
    v13[v12] = v18;
    LODWORD(v212) = v12 + 1;
    v15 = v215;
    if ( (unsigned int)v215 >= v14 )
    {
      v29 = 2 * v14;
      v16 = (char *)sub_186B270(8 * v29);
      v30 = 0;
      v31 = (char *)ptr;
      v15 = v215;
      v32 = 8LL * (unsigned int)v215;
      if ( (_DWORD)v215 )
      {
        do
        {
          *(_QWORD *)&v16[v30] = *(_QWORD *)&v31[v30];
          v30 += 8;
        }
        while ( v30 != v32 );
      }
      if ( v31 && v31 != v216 )
      {
        sub_186B220(v31);
        v15 = v215;
      }
      ptr = v16;
      HIDWORD(v215) = v29;
    }
    else
    {
      v16 = (char *)ptr;
    }
    *(_QWORD *)&v16[8 * v15] = *v17;
    LODWORD(v215) = v15 + 1;
LABEL_11:
    if ( v201 == ++v11 )
      break;
    v10 = v204[5];
  }
  v9 = (unsigned int)v212;
  v44 = v211;
  v45 = ptr;
LABEL_49:
  v46 = sub_15DB6A0(*a1, v204[4], v9, v44, v45, a3, v204[11], v204 + 14, v204 + 16, v204[18], a4, v204[19], a5);
  v47 = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v48 = *a6;
  if ( *a6 )
  {
    v49 = a6[1];
    v50 = (*(_DWORD *)(v48 + 8))-- == 1;
    if ( v50 )
      sub_15D7BC0(v49, v48);
  }
  *a6 = v47;
  v51 = *a7;
  if ( *a7 )
  {
    v52 = a7[1];
    v50 = (*(_DWORD *)(v51 + 8))-- == 1;
    if ( v50 )
      sub_15D7BC0(v52, v51);
  }
  *a7 = 0;
  if ( *(_DWORD *)(*a1 + 712LL) )
  {
    v53 = sub_15DE370(*a1);
    v54 = v53;
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
    v55 = *a7;
    if ( *a7 )
    {
      v56 = a7[1];
      v50 = (*(_DWORD *)(v55 + 8))-- == 1;
      if ( v50 )
        sub_15D7BC0(v56, v55);
    }
    *a7 = v54;
  }
  v57 = a1[5];
  if ( v57 )
  {
    v58 = v57 + 8LL * *(unsigned int *)(v57 - 4);
    v59 = (__int64 *)(v57 + 8LL * v197);
    if ( (unsigned __int64)v59 >= v58 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v60 = *v59;
        if ( *v59 )
        {
          v61 = a1[4];
          v50 = (*(_DWORD *)(v60 + 8))-- == 1;
          if ( v50 )
            break;
        }
        if ( (unsigned __int64)++v59 >= v58 )
          goto LABEL_71;
      }
      sub_15D7BC0(v61, v60);
      ++v59;
    }
    while ( (unsigned __int64)v59 < v58 );
LABEL_71:
    v57 = a1[5];
    if ( v57 )
LABEL_72:
      *(_DWORD *)(v57 - 4) = v197;
  }
  if ( ptr && ptr != v216 )
    sub_186B220(ptr);
  if ( v211 && v211 != v213 )
    sub_186B220(v211);
  if ( n.m128i_i64[1] > 0x40uLL )
  {
    if ( src )
      sub_186B220(src);
  }
  return 1;
}

