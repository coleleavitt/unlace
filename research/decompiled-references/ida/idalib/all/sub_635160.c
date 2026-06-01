__int64 __fastcall sub_635160(__m128i *a1, char *a2, unsigned __int8 a3)
{
  __int64 v4; // rcx
  _BYTE *v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r15d
  unsigned int v9; // r12d
  char v10; // r14
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 *v19; // r13
  __int64 v20; // rdx
  char v21; // al
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  int v26; // r12d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdi
  const char **v36; // r12
  char *v37; // rdi
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // r12
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rbp
  int v46; // eax
  __int64 v47; // r9
  __int64 ii; // rax
  _BYTE *v49; // r13
  __int64 v50; // rbx
  __int64 v51; // rax
  size_t v52; // r13
  __int64 v53; // r15
  size_t v54; // rdx
  __int64 v55; // rdx
  __m128i v56; // xmm0
  size_t v57; // rbx
  __int64 v58; // r12
  const char *v59; // rsi
  size_t v60; // rax
  char *v61; // rdx
  size_t v62; // rbp
  __int64 v63; // rbx
  char *v64; // rax
  void *v65; // rdi
  int v66; // ebx
  const char *v67; // rdi
  __int64 v68; // rax
  unsigned __int64 v69; // r13
  __int64 v70; // rsi
  __int64 v71; // r15
  int v72; // ebx
  __int64 v73; // r15
  unsigned __int64 v74; // rdx
  __int64 v75; // r13
  __int64 v76; // rsi
  __int64 v77; // r13
  const char *v78; // rsi
  __int64 v79; // rax
  unsigned __int64 v80; // r15
  __int64 v81; // rsi
  __int64 v82; // r13
  const char *v83; // rsi
  int v84; // ebx
  __int64 v85; // r15
  unsigned __int64 v86; // rdx
  __int64 v87; // r13
  __int64 v88; // rsi
  __int64 v89; // r13
  const char *v90; // rsi
  unsigned __int64 v91; // r13
  __int64 v92; // rsi
  __int64 v93; // r15
  const char *v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  void *v98; // rax
  size_t v99; // rbx
  unsigned __int64 v100; // r13
  unsigned int v101; // ebx
  __int64 v102; // rax
  _DWORD *v103; // rbp
  __int64 v104; // rdi
  int v105; // kr00_4
  __int16 v106; // ax
  __int64 v107; // rdi
  __int64 v108; // rcx
  __int64 v109; // rbx
  int v110; // eax
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  char *v113; // rsi
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  unsigned __int64 v117; // rbx
  size_t v118; // rax
  char *v119; // rbp
  const char *v120; // rsi
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  unsigned __int8 v124; // r12
  int v125; // ebx
  __int64 v126; // rax
  unsigned __int64 v127; // r15
  __int64 v128; // rsi
  __int64 v129; // rbp
  int v130; // eax
  const char *v131; // rbx
  __int64 v132; // rcx
  char *v133; // r12
  size_t v134; // rbp
  size_t v135; // rdx
  int v136; // ebx
  size_t v137; // rbp
  const char *v138; // r15
  __int64 v139; // rbp
  unsigned __int64 v140; // rdx
  const char *v141; // rsi
  const char *v142; // rdx
  __int64 v143; // rdx
  char **v144; // rbx
  __int64 i; // rax
  size_t v146; // rdx
  size_t v147; // rbp
  size_t v148; // rax
  size_t v149; // r12
  const char *v150; // rsi
  const char *v151; // rdx
  const char *v152; // rdi
  const char *v153; // r15
  size_t v154; // rbp
  size_t v155; // r12
  __int64 v156; // rdx
  size_t v157; // rax
  char *v158; // r12
  size_t v159; // rbp
  __int64 v160; // r13
  __int64 v161; // rdx
  __m128i v162; // xmm0
  void *v163; // rdi
  size_t v165; // r13
  void *v166; // rax
  int v167; // ebx
  __int64 v168; // rax
  unsigned __int64 v169; // r13
  __int64 v170; // rsi
  __int64 v171; // r15
  int v172; // ebx
  const char *v173; // rsi
  unsigned __int64 v174; // r15
  __int64 v175; // rsi
  __int64 v176; // r13
  __int64 j; // r13
  __int64 v178; // r9
  __m128i *v179; // rax
  __int64 v180; // r9
  size_t v181; // rbx
  char v182; // al
  __int64 k; // rax
  const char *v184; // rdx
  const char *v185; // rsi
  size_t v186; // rbx
  size_t v187; // r12
  size_t v188; // r13
  char *v189; // rsi
  __int64 v190; // r9
  size_t v191; // r15
  int v192; // eax
  _BYTE *v193; // rbx
  char *v194; // rax
  signed __int64 v195; // r13
  __int32 v196; // eax
  unsigned __int64 v197; // r12
  size_t v198; // rax
  void *v199; // rax
  void *v200; // rax
  size_t v201; // rax
  char v202; // dl
  int v203; // [rsp+0h] [rbp-A38h]
  int v204; // [rsp+0h] [rbp-A38h]
  char *v205; // [rsp+8h] [rbp-A30h]
  void *v206; // [rsp+8h] [rbp-A30h]
  _DWORD *v207; // [rsp+8h] [rbp-A30h]
  __int64 v208; // [rsp+10h] [rbp-A28h]
  __int64 *v209; // [rsp+10h] [rbp-A28h]
  int v210; // [rsp+18h] [rbp-A20h]
  unsigned __int64 *v211; // [rsp+18h] [rbp-A20h]
  int v212[2]; // [rsp+18h] [rbp-A20h]
  int v213; // [rsp+20h] [rbp-A18h]
  int v214; // [rsp+20h] [rbp-A18h]
  char v215; // [rsp+20h] [rbp-A18h]
  char *v216; // [rsp+20h] [rbp-A18h]
  int v217; // [rsp+28h] [rbp-A10h]
  int v218; // [rsp+28h] [rbp-A10h]
  int m; // [rsp+28h] [rbp-A10h]
  unsigned __int64 v220; // [rsp+28h] [rbp-A10h]
  unsigned __int64 v221; // [rsp+28h] [rbp-A10h]
  __int64 v222; // [rsp+28h] [rbp-A10h]
  size_t v223; // [rsp+28h] [rbp-A10h]
  __int64 s2; // [rsp+30h] [rbp-A08h]
  void *s2c; // [rsp+30h] [rbp-A08h]
  unsigned __int64 s2a; // [rsp+30h] [rbp-A08h]
  void *s2b; // [rsp+30h] [rbp-A08h]
  char v229; // [rsp+40h] [rbp-9F8h]
  __int64 v230; // [rsp+48h] [rbp-9F0h]
  int v231[2]; // [rsp+50h] [rbp-9E8h]
  __int64 v232; // [rsp+58h] [rbp-9E0h]
  size_t v233; // [rsp+58h] [rbp-9E0h]
  __int64 v234; // [rsp+60h] [rbp-9D8h]
  int v235; // [rsp+68h] [rbp-9D0h]
  char v236; // [rsp+6Fh] [rbp-9C9h]
  __int64 v237; // [rsp+78h] [rbp-9C0h] BYREF
  char *v238; // [rsp+80h] [rbp-9B8h] BYREF
  size_t v239[3]; // [rsp+88h] [rbp-9B0h]
  __int64 v240; // [rsp+A0h] [rbp-998h] BYREF
  int v241; // [rsp+A8h] [rbp-990h]
  __int64 v242; // [rsp+B0h] [rbp-988h]
  __m128i v243[2]; // [rsp+C0h] [rbp-978h] BYREF
  size_t n[4]; // [rsp+E0h] [rbp-958h] BYREF
  _BYTE src[24]; // [rsp+100h] [rbp-938h] BYREF
  __int64 v246; // [rsp+118h] [rbp-920h]
  __int64 v247; // [rsp+120h] [rbp-918h]
  void *v248; // [rsp+128h] [rbp-910h]
  void *v249; // [rsp+130h] [rbp-908h]
  __int128 v250; // [rsp+138h] [rbp-900h]
  void *v251; // [rsp+148h] [rbp-8F0h]
  __int128 v252; // [rsp+150h] [rbp-8E8h]
  const char *v253; // [rsp+160h] [rbp-8D8h] BYREF
  __int16 v254; // [rsp+168h] [rbp-8D0h]
  _BYTE v255[14]; // [rsp+16Ah] [rbp-8CEh]
  __int16 v256; // [rsp+178h] [rbp-8C0h]
  _BYTE v257[14]; // [rsp+17Ah] [rbp-8BEh]
  __int16 v258; // [rsp+188h] [rbp-8B0h]
  _BYTE v259[22]; // [rsp+18Ah] [rbp-8AEh]
  char v260; // [rsp+1A0h] [rbp-898h] BYREF
  char v261[2]; // [rsp+1E0h] [rbp-858h] BYREF
  char s[14]; // [rsp+1E2h] [rbp-856h] BYREF
  _BYTE s1[1020]; // [rsp+1F0h] [rbp-848h] BYREF
  __int64 v264; // [rsp+5F0h] [rbp-448h] BYREF
  __int128 v265; // [rsp+5F8h] [rbp-440h]
  __int64 v266; // [rsp+608h] [rbp-430h]
  unsigned __int64 v267; // [rsp+9F8h] [rbp-40h]

  LOBYTE(v213) = a3;
  v205 = a2;
  v267 = __readfsqword(0x28u);
  v4 = *((_QWORD *)a2 + 209);
  a1[1].m128i_i32[3] = 0;
  v230 = v4;
  *(_QWORD *)v231 = a2 + 1520;
  v5 = a2 + 1520;
  v6 = sub_7BE950(a2 + 1520, a2, &loc_41B994, s1, 1024, 83);
  if ( v6 <= 22
    || ((v8 = v6, v9 = v6, *(_WORD *)s1 != 17481) || s1[2] != 65) && (a2 = "ida", v5 = s1, strcmp(s1, "ida")) )
  {
    v14 = is_cvt64(v5, a2, v7);
    if ( !(_BYTE)v14 )
      return v14;
    goto LABEL_44;
  }
  v10 = is_cvt64(v5, a2, v7);
  v11 = strcmp(s1, "ida");
  if ( v10 )
  {
    if ( v11 )
    {
      if ( *(_WORD *)&s1[3] == 920 )
        goto LABEL_48;
    }
    else if ( *(_WORD *)&s1[4] == 920 )
    {
LABEL_48:
      v235 = 920;
      goto LABEL_49;
    }
LABEL_44:
    if ( !under_debugger )
      interr(2859);
    BUG();
  }
  if ( v11 )
    v12 = *(unsigned __int16 *)&s1[3];
  else
    v12 = *(unsigned __int16 *)&s1[4];
  v235 = v12;
  if ( v12 <= 699 )
  {
    v238 = nullptr;
    s2 = 0;
    *(_OWORD *)v239 = 0;
    if ( *(_DWORD *)s1 != 6382697 )
    {
LABEL_9:
      v229 = 1;
      v14 = sub_63BBD0(a1, v205, s1, v9, &v238, a3);
      goto LABEL_10;
    }
    v229 = 1;
    goto LABEL_57;
  }
LABEL_49:
  *(_QWORD *)src = -1;
  netnode_check(src, "$ upgrade 700", 0, 1);
  v238 = nullptr;
  s2 = netnode_altval(*(_QWORD *)src, 0, 65);
  *(_OWORD *)v239 = 0;
  if ( *(_DWORD *)s1 == 6382697 )
  {
    v229 = ((unsigned __int8)(s2 & 0x40) >> 6) ^ 1;
LABEL_57:
    v14 = sub_63B8B0(a1, s1, v9);
    goto LABEL_10;
  }
  if ( (s2 & 0x40) == 0 )
    goto LABEL_9;
  v229 = 0;
  v14 = sub_62EBD0((__int64)a1, s2, (__int64)s1, v8);
LABEL_10:
  v17 = *((__int64 **)v205 + 209);
  v18 = *v17;
  v19 = (__int64 *)v17[3];
  v20 = *v17 + 640;
  *(_QWORD *)src = v18;
  if ( v18 )
    *(_QWORD *)&src[8] = *(_QWORD *)(v18 + 1520);
  else
    *(_QWORD *)&src[8] = -1;
  *(_QWORD *)&src[16] = v20;
  v21 = sub_6317E0((__int64 *)src, (__int64)&unk_2B34DE0, 0, v13, v15, v16);
  if ( *((_BYTE *)v19 + 28) )
  {
    v23 = *v19;
    v22 = 4;
    if ( (v21 & 4) != 0 )
    {
      v23 = v19[1];
      v22 = 8;
    }
    v19[2] = v23;
    *((_DWORD *)v19 + 6) = v22;
  }
  v26 = (_DWORD)v17 + 1080;
  v243[0] = _mm_load_si128((const __m128i *)&xmmword_23A7910);
  rangeset_t_add(v26, (int)v243, v22, v23, v24, v25, v203, v205, v208, (int)v243, v213, v217, s2);
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A7920);
  rangeset_t_add(v26, (int)n, v27, v28, v29, v30, v204, v206, (__int64)n, v210, v214, v218, (__int64)s2c);
  if ( a3 )
    goto LABEL_40;
  v33 = a1->m128i_u16[2];
  switch ( (_WORD)v33 )
  {
    case 0x28A:
      v144 = off_2B36C20;
      do
      {
        qsnprintf((unsigned int)&v264, 1024, (unsigned int)"$ debugger plugin %s", (unsigned int)*v144, v31, v32);
        netnode_check(src, &v264, 0, 0);
        if ( (unsigned __int8)netnode_exist(src) )
        {
          qsnprintf((unsigned int)&v264, 1024, (unsigned int)"$ debugger plugin %s", (unsigned int)v144[1], v31, v32);
          netnode_rename(*(_QWORD *)src, &v264, 0);
        }
        v144 += 2;
      }
      while ( v144 != (char **)&unk_2B36D60 );
      sub_62B2F0();
      v240 = -1;
      netnode_check(&v240, "$ dwarf mappings lut", 0, 1);
      memset(n, 0, 24);
      memset(src, 0, sizeof(src));
      for ( i = netnode_qhashfirst(v240, src, 72); i >= 0; i = netnode_qhashnext(v240, src, v151, 72) )
      {
        v152 = haystack;
        if ( *(_QWORD *)&src[8] )
          v152 = *(const char **)src;
        v153 = (const char *)qbasename(v152);
        if ( v153 )
        {
          v154 = n[1];
          v155 = n[2];
          if ( n[2] >= n[1] + 1 )
          {
            v146 = n[0];
          }
          else
          {
            v156 = qvector_reserve(v209, 0, n[1] + 1, 32);
            v157 = n[2];
            n[2] = v155;
            v158 = (char *)n[0];
            v223 = v157;
            v159 = n[1] - 1;
            if ( (signed __int64)(n[1] - 1) >= 0 )
            {
              v232 = v156;
              v160 = v156;
              do
              {
                v161 = *(_QWORD *)v158;
                v162 = _mm_loadu_si128((const __m128i *)(v158 + 8));
                *(_QWORD *)v158 = 0;
                *((_QWORD *)v158 + 2) = 0;
                *(_QWORD *)v160 = v161;
                *(__m128i *)(v160 + 8) = v162;
                *(_QWORD *)(v160 + 24) = *((_QWORD *)v158 + 3);
                v163 = *(void **)v158;
                if ( *(_QWORD *)v158 )
                {
                  *((_QWORD *)v158 + 1) = 0;
                  qfree(v163);
                }
                v158 += 32;
                v160 += 32;
              }
              while ( v159-- != 0 );
              v156 = v232;
              v158 = (char *)n[0];
            }
            v233 = v156;
            qfree(v158);
            v146 = v233;
            v154 = n[1];
            n[0] = v233;
            n[2] = v223;
          }
          v147 = v146 + 32 * v154;
          *(_QWORD *)v147 = 0;
          *(_OWORD *)(v147 + 8) = 0;
          ++n[1];
          v148 = strlen(v153);
          v149 = v148;
          if ( v148 )
          {
            v165 = v148 + 1;
            v166 = (void *)qvector_reserve(v147, *(_QWORD *)v147, v148 + 1, 1);
            *(_QWORD *)v147 = v166;
            *(_QWORD *)(v147 + 8) = v165;
            memmove(v166, v153, v149);
            *(_BYTE *)(*(_QWORD *)v147 + v149) = 0;
          }
          else
          {
            *(_QWORD *)(v147 + 8) = 0;
          }
          v150 = haystack;
          if ( *(_QWORD *)&src[8] )
            v150 = *(const char **)src;
          *(_QWORD *)(v147 + 24) = netnode_hashval_long(v240, v150, 72);
        }
        v151 = haystack;
        if ( *(_QWORD *)&src[8] )
          v151 = *(const char **)src;
      }
      v57 = n[1];
      v58 = 0;
      if ( n[1] )
      {
        do
        {
          v59 = haystack;
          v60 = n[0] + 32 * v58;
          if ( *(_QWORD *)(v60 + 8) )
            v59 = *(const char **)v60;
          v243[0].m128i_i64[0] = *(_QWORD *)(v60 + 24);
          netnode_hashset(v240, v59, v211, 8, 72);
          ++v58;
        }
        while ( v57 != v58 );
      }
      if ( *(_QWORD *)src )
      {
        *(_QWORD *)&src[8] = 0;
        qfree(*(void **)src);
      }
      v61 = (char *)n[0];
      if ( n[0] )
      {
        v62 = n[1];
        if ( n[1] )
        {
          v63 = 0;
          do
          {
            v64 = &v61[32 * v63];
            v65 = *(void **)v64;
            if ( *(_QWORD *)v64 )
            {
              *((_QWORD *)v64 + 1) = 0;
              qfree(v65);
              v61 = (char *)n[0];
            }
            ++v63;
          }
          while ( v62 != v63 );
        }
        n[1] = 0;
        qfree(v61);
      }
      a1[11].m128i_i8[9] = a1[11].m128i_i8[8];
      goto LABEL_148;
    case 0x29E:
LABEL_148:
      a1->m128i_i16[2] = 680;
      goto LABEL_149;
    case 0x2A8:
LABEL_149:
      if ( a1[2].m128i_i8[7] == 1 )
        a1[2].m128i_i8[7] = 4;
      if ( (getinf(57) & 0xF) == 6 && !(unsigned __int8)getinf_flag(3, 4) )
        a1[17].m128i_i32[0] |= 1u;
      if ( a1[2].m128i_i16[0] == 18 && (v207[233] & 0xFFFFFFFD) == 0xD )
        a1[17].m128i_i32[0] |= 4u;
      v66 = 65;
      a1[11].m128i_i8[10] = 1;
      do
      {
        memset(src, 0, sizeof(src));
        v68 = qvector_reserve(src, 0, 10, 1);
        *(_QWORD *)src = v68;
        v69 = 2;
        *(_QWORD *)&src[8] = 10;
        *(_QWORD *)v68 = 0x7765695620414449LL;
        *(_BYTE *)(v68 + 8) = 45;
        v70 = *(_QWORD *)src;
        *(_BYTE *)(*(_QWORD *)src + 9LL) = 0;
        v71 = *(_QWORD *)&src[8];
        if ( *(_QWORD *)&src[8] )
        {
          v69 = *(_QWORD *)&src[8] + 1LL;
          v71 = *(_QWORD *)&src[8] - 1LL;
        }
        if ( *(_QWORD *)&src[16] < v69 )
        {
          *(_QWORD *)src = qvector_reserve(src, v70, v69, 1);
          v70 = *(_QWORD *)src;
        }
        *(_QWORD *)&src[8] = v69;
        v67 = haystack;
        *(_BYTE *)(v70 + v71) = v66;
        *(_BYTE *)(*(_QWORD *)src + v71 + 1) = 0;
        if ( *(_QWORD *)&src[8] )
          v67 = *(const char **)src;
        sub_62D2F0(v67);
        if ( *(_QWORD *)src )
        {
          *(_QWORD *)&src[8] = 0;
          qfree(*(void **)src);
        }
        ++v66;
      }
      while ( (_BYTE)v66 != 91 );
      v72 = 49;
      do
      {
        memset(src, 0, sizeof(src));
        v79 = qvector_reserve(src, 0, 10, 1);
        *(_QWORD *)src = v79;
        v80 = 2;
        *(_QWORD *)&src[8] = 10;
        *(_QWORD *)v79 = 0x7765695620786548LL;
        *(_BYTE *)(v79 + 8) = 45;
        v81 = *(_QWORD *)src;
        *(_BYTE *)(*(_QWORD *)src + 9LL) = 0;
        v82 = *(_QWORD *)&src[8];
        if ( *(_QWORD *)&src[8] )
        {
          v80 = *(_QWORD *)&src[8] + 1LL;
          v82 = *(_QWORD *)&src[8] - 1LL;
        }
        if ( *(_QWORD *)&src[16] < v80 )
        {
          *(_QWORD *)src = qvector_reserve(src, v81, v80, 1);
          v81 = *(_QWORD *)src;
        }
        *(_QWORD *)&src[8] = v80;
        *(_BYTE *)(v81 + v82) = v72;
        v83 = haystack;
        *(_BYTE *)(*(_QWORD *)src + v82 + 1) = 0;
        if ( *(_QWORD *)&src[8] )
          v83 = *(const char **)src;
        netnode_check(v211, v83, 0, 0);
        netnode_kill((int)v211);
        v75 = *(_QWORD *)&src[8];
        if ( *(_QWORD *)&src[8] )
        {
          v73 = *(_QWORD *)&src[8] + 4LL;
          v74 = *(_QWORD *)&src[8] + 5LL;
          v75 = *(_QWORD *)&src[8] - 1LL;
        }
        else
        {
          v74 = 6;
          v73 = 5;
        }
        v76 = *(_QWORD *)src;
        if ( *(_QWORD *)&src[16] < v74 )
        {
          v220 = v74;
          *(_QWORD *)src = qvector_reserve(src, *(_QWORD *)src, v74, 1);
          v74 = v220;
          v76 = *(_QWORD *)src;
        }
        *(_QWORD *)&src[8] = v74;
        *(_BYTE *)(v76 + v73) = 0;
        v77 = *(_QWORD *)src + v75;
        v78 = haystack;
        *(_DWORD *)v77 = 2019913262;
        *(_BYTE *)(v77 + 4) = 116;
        if ( *(_QWORD *)&src[8] )
          v78 = *(const char **)src;
        netnode_check(v209, v78, 0, 0);
        netnode_kill((int)v209);
        if ( *(_QWORD *)src )
        {
          *(_QWORD *)&src[8] = 0;
          qfree(*(void **)src);
        }
        ++v72;
      }
      while ( (_BYTE)v72 != 58 );
      v84 = 65;
      do
      {
        memset(src, 0, sizeof(src));
        *(_QWORD *)src = qvector_reserve(src, 0, 12, 1);
        v91 = 2;
        *(_QWORD *)&src[8] = 12;
        strcpy(*(char **)src, "Pseudocode-");
        v92 = *(_QWORD *)src;
        v93 = *(_QWORD *)&src[8];
        if ( *(_QWORD *)&src[8] )
        {
          v91 = *(_QWORD *)&src[8] + 1LL;
          v93 = *(_QWORD *)&src[8] - 1LL;
        }
        if ( *(_QWORD *)&src[16] < v91 )
        {
          *(_QWORD *)src = qvector_reserve(src, *(_QWORD *)src, v91, 1);
          v92 = *(_QWORD *)src;
        }
        *(_QWORD *)&src[8] = v91;
        *(_BYTE *)(v92 + v93) = v84;
        v94 = haystack;
        *(_BYTE *)(*(_QWORD *)src + v93 + 1) = 0;
        if ( *(_QWORD *)&src[8] )
          v94 = *(const char **)src;
        netnode_check(v211, v94, 0, 0);
        netnode_kill((int)v211);
        v87 = *(_QWORD *)&src[8];
        if ( *(_QWORD *)&src[8] )
        {
          v85 = *(_QWORD *)&src[8] + 4LL;
          v86 = *(_QWORD *)&src[8] + 5LL;
          v87 = *(_QWORD *)&src[8] - 1LL;
        }
        else
        {
          v86 = 6;
          v85 = 5;
        }
        v88 = *(_QWORD *)src;
        if ( *(_QWORD *)&src[16] < v86 )
        {
          v221 = v86;
          *(_QWORD *)src = qvector_reserve(src, *(_QWORD *)src, v86, 1);
          v86 = v221;
          v88 = *(_QWORD *)src;
        }
        *(_QWORD *)&src[8] = v86;
        *(_BYTE *)(v88 + v85) = 0;
        v89 = *(_QWORD *)src + v87;
        v90 = haystack;
        *(_DWORD *)v89 = 2019913262;
        *(_BYTE *)(v89 + 4) = 116;
        if ( *(_QWORD *)&src[8] )
          v90 = *(const char **)src;
        netnode_check(v209, v90, 0, 0);
        netnode_kill((int)v209);
        if ( *(_QWORD *)src )
        {
          *(_QWORD *)&src[8] = 0;
          qfree(*(void **)src);
        }
        ++v84;
      }
      while ( (_BYTE)v84 != 91 );
      netnode_check(&v237, "$ MARKS", 0, 0);
      if ( (unsigned __int8)netnode_exist(&v237) )
      {
        v241 = 0;
        v240 = (__int64)off_2B25850;
        v242 = -1;
        memset(n, 0, 24);
        n[0] = qvector_reserve(v209, 0, 11, 1);
        n[1] = 11;
        strcpy((char *)n[0], "IDA View-A");
        v246 = -1;
        v247 = 0;
        v248 = &v240;
        memset(src, 0, sizeof(src));
        v98 = (void *)idaplace_t__clone(&v240, 0, v95, 0x7765695620414449LL, v96, v97);
        v99 = n[1];
        v248 = v98;
        v249 = nullptr;
        v250 = 0;
        if ( n[1] )
        {
          v249 = (void *)qalloc_or_throw(n[1]);
          *((_QWORD *)&v250 + 1) = v99;
          memcpy(v249, (const void *)n[0], v99);
          *(_QWORD *)&v250 = v99;
        }
        v251 = nullptr;
        v252 = 0;
        if ( n[0] )
        {
          n[1] = 0;
          qfree((void *)n[0]);
        }
        v100 = 1;
        v101 = 0;
        do
        {
          while ( 1 )
          {
            v102 = netnode_altval(v237, v100, 65);
            if ( v102 )
              break;
            v100 = netnode_supnext(v237, v100, 65);
            if ( v100 > 0x400 )
              goto LABEL_210;
          }
          v103 = v248;
          v104 = v237;
          *((_QWORD *)v248 + 2) = v102 - 1;
          v105 = netnode_altval(v104, v100 + 1024, 65);
          WORD2(v246) = HIWORD(v105);
          HIWORD(v246) = v105;
          v106 = netnode_altval(v237, v100 + 2048, 65);
          v107 = v237;
          v103[2] = v106;
          memset(v243, 0, 24);
          netnode_qsupstr(v107, v211, v100, 83);
          memset(n, 0, 24);
          netnode_supval(v237, v100, v209, 24, 71);
          v108 = 1;
          if ( v243[0].m128i_i64[1] > 1uLL )
            v108 = v243[0].m128i_i64[0];
          bookmarks_t_mark(src, v101++, 0, v108, 0);
          if ( v243[0].m128i_i64[0] )
          {
            v243[0].m128i_i64[1] = 0;
            qfree((void *)v243[0].m128i_i64[0]);
          }
          ++v100;
        }
        while ( v100 != 1025 );
LABEL_210:
        netnode_kill((int)&v237);
        if ( v248 )
        {
          qfree(v248);
          v248 = nullptr;
        }
        if ( v249 )
        {
          *(_QWORD *)&v250 = 0;
          qfree(v249);
          v249 = nullptr;
          *((_QWORD *)&v250 + 1) = 0;
        }
        if ( v251 )
        {
          *(_QWORD *)&v252 = 0;
          qfree(v251);
        }
        if ( v249 )
        {
          *(_QWORD *)&v250 = 0;
          qfree(v249);
        }
        if ( v248 )
          qfree(v248);
      }
      netnode_check(src, "$ ea_sync_groups", 0, 0);
      if ( (unsigned __int8)netnode_exist(src) )
      {
        for ( j = netnode_supfirst(*(_QWORD *)src, 83); j != -1; j = netnode_supnext(*(_QWORD *)src, j, 83) )
        {
          if ( netnode_supstr(*(_QWORD *)src, j, &v264, 1024, 83) > 0
            && !((unsigned __int64)v265 ^ 0x3B312D7765695620LL | v264 ^ 0x7865483A77656976LL)
            && !(v266 ^ 0x412D7765695620LL | *((_QWORD *)&v265 + 1) ^ 0x4144493A77656976LL) )
          {
            netnode_supset(*(_QWORD *)src, j, "view:IDA View-A;view:Hex View-1", 0, 83, v178);
            break;
          }
        }
      }
      a1->m128i_i16[2] = 690;
      v109 = 131074;
      goto LABEL_222;
    case 0x2B2:
      v109 = 0;
LABEL_222:
      v110 = v207[233];
      if ( v110 == 12 )
      {
        a1[1].m128i_i32[2] |= 2u;
        v110 = v207[233];
      }
      if ( v110 == 15 )
      {
        a1[1].m128i_i32[2] |= 2u;
        sub_51B170(1);
      }
      a1->m128i_i16[2] = 695;
      goto LABEL_227;
    case 0x2B7:
      v109 = 0;
      if ( v207[233] != 15 || (sub_51B170(0), v33 = a1->m128i_u16[2], (_WORD)v33 == 695) )
      {
LABEL_227:
        a1[11].m128i_i64[0] = 0;
        a1[10] = _mm_loadu_si128((const __m128i *)(*((_QWORD *)v207 + 209) + 40LL));
        v111 = sub_7AFEE0(v207);
        v112 = node2ea(v111);
        if ( a1[10].m128i_i64[0] < v112 )
          a1[10].m128i_i64[1] = (v112 + 0x7FFFFF) & 0xFFFFFFFFFF800000LL;
        if ( v207[233] == 15 )
        {
          v113 = (char *)haystack;
          if ( v239[0] )
            v113 = v238;
          sub_62DFC0((__int64)a1, v113);
        }
        netnode_check(src, "$ c166 mappings", 0, 0);
        netnode_rename(*(_QWORD *)src, "$ memory mappings", 0);
        sub_7BE850(*(_QWORD *)v231, v207, 1304, 83);
        dword_2CCC3C8 |= 0x300000u;
        a1->m128i_i16[2] = 700;
LABEL_234:
        sub_7BAC10(v207);
        v117 = s2a | v109;
        if ( v239[0] <= 1 )
        {
          s2b = v207 + 160;
        }
        else
        {
          *(_QWORD *)src = v207;
          s2b = v207 + 160;
          if ( v207 )
            *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
          else
            *(_QWORD *)&src[8] = -1;
          *(_QWORD *)&src[16] = v207 + 160;
          if ( sub_631310(src, (__int64)&off_2B36160, nullptr, (__int64)(v207 + 160), v115, v116) < 0 )
          {
            *(_QWORD *)src = v207;
            if ( v207 )
              *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
            else
              *(_QWORD *)&src[8] = -1;
            *(_QWORD *)&src[16] = v207 + 160;
            sub_6327E0((__int64)src, (__int64)&off_2B36160, v238, 0, 81, v116);
LABEL_241:
            v118 = v239[0];
            if ( v239[0] > 6 )
            {
              v119 = v238;
              if ( strncmp(v238, "golang", 6u) )
              {
                a1[17].m128i_i32[0] &= ~0x400u;
                goto LABEL_379;
              }
              if ( (getinf(67) & 0x40) == 0 )
              {
                setinf(99, 176);
                if ( (getinf(57) & 0xF) == 0 )
                {
                  *(_OWORD *)src = 0;
                  src[0] = 6;
                  set_compiler((const __m128i *)src, (_BYTE *)&dword_0 + 2, nullptr);
                }
                if ( v238 )
                {
                  v239[0] = 0;
                  qfree(v238);
                  v238 = nullptr;
                  v239[1] = 0;
                }
                *(_QWORD *)src = v207;
                if ( v207 )
                  *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
                else
                  *(_QWORD *)&src[8] = -1;
                *(_QWORD *)&src[16] = s2b;
                sub_6327E0((__int64)src, (__int64)&off_2B36160, &byte_22F0C30, 0, 81, v190);
              }
              v118 = v239[0];
            }
            v120 = haystack;
            a1[17].m128i_i32[0] &= ~0x400u;
            if ( !v118 )
              goto LABEL_246;
            v119 = v238;
LABEL_379:
            v120 = v119;
LABEL_246:
            sub_656330(v207, v120);
            v234 = v117 | 0x400000;
            v222 = v117 | 0x400000;
            if ( (v117 & 1) == 0 )
            {
              v222 = v117 | 0x400001;
              dword_2CCC3C8 |= 0x100000u;
            }
            *(_QWORD *)src = v207;
            v124 = (v222 & 2) == 0;
            if ( v207 )
              *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
            else
              *(_QWORD *)&src[8] = -1;
            *(_QWORD *)&src[16] = s2b;
            v125 = 65;
            v236 = (unsigned __int64)sub_6317E0((__int64 *)src, (__int64)&off_2B36320, 0, v121, v122, v123) <= 0x2B1;
            do
            {
              memset(src, 0, sizeof(src));
              v126 = qvector_reserve(src, 0, 10, 1);
              *(_QWORD *)src = v126;
              v127 = 2;
              *(_QWORD *)&src[8] = 10;
              *(_QWORD *)v126 = 0x7765695620414449LL;
              *(_BYTE *)(v126 + 8) = 45;
              v128 = *(_QWORD *)src;
              *(_BYTE *)(*(_QWORD *)src + 9LL) = 0;
              v129 = *(_QWORD *)&src[8];
              if ( *(_QWORD *)&src[8] )
              {
                v127 = *(_QWORD *)&src[8] + 1LL;
                v129 = *(_QWORD *)&src[8] - 1LL;
              }
              if ( *(_QWORD *)&src[16] < v127 )
              {
                *(_QWORD *)src = qvector_reserve(src, v128, v127, 1);
                v128 = *(_QWORD *)src;
              }
              *(_QWORD *)&src[8] = v127;
              *(_BYTE *)(v128 + v129) = v125;
              *(_BYTE *)(*(_QWORD *)src + v129 + 1) = 0;
              v215 |= sub_62CE40((const void **)src, v124, 0);
              if ( *(_QWORD *)src )
              {
                *(_QWORD *)&src[8] = 0;
                qfree(*(void **)src);
              }
              ++v125;
            }
            while ( (_BYTE)v125 != 91 );
            memset(src, 0, sizeof(src));
            *(_QWORD *)src = qvector_reserve(src, 0, 13, 1);
            *(_QWORD *)&src[8] = 13;
            strcpy(*(char **)src, "IDA View-RIP");
            sub_62CE40((const void **)src, v124, v236);
            if ( *(_QWORD *)src )
            {
              *(_QWORD *)&src[8] = 0;
              qfree(*(void **)src);
            }
            memset(src, 0, sizeof(src));
            *(_QWORD *)src = qvector_reserve(src, 0, 13, 1);
            *(_QWORD *)&src[8] = 13;
            strcpy(*(char **)src, "IDA View-EIP");
            sub_62CE40((const void **)src, v124, v236);
            if ( *(_QWORD *)src )
            {
              *(_QWORD *)&src[8] = 0;
              qfree(*(void **)src);
            }
            v167 = 49;
            do
            {
              memset(src, 0, sizeof(src));
              v168 = qvector_reserve(src, 0, 10, 1);
              *(_QWORD *)src = v168;
              v169 = 2;
              *(_QWORD *)&src[8] = 10;
              *(_QWORD *)v168 = 0x7765695620786548LL;
              *(_BYTE *)(v168 + 8) = 45;
              v170 = *(_QWORD *)src;
              *(_BYTE *)(*(_QWORD *)src + 9LL) = 0;
              v171 = *(_QWORD *)&src[8];
              if ( *(_QWORD *)&src[8] )
              {
                v169 = *(_QWORD *)&src[8] + 1LL;
                v171 = *(_QWORD *)&src[8] - 1LL;
              }
              if ( *(_QWORD *)&src[16] < v169 )
              {
                *(_QWORD *)src = qvector_reserve(src, v170, v169, 1);
                v170 = *(_QWORD *)src;
              }
              *(_QWORD *)&src[8] = v169;
              *(_BYTE *)(v170 + v171) = v167;
              *(_BYTE *)(*(_QWORD *)src + v171 + 1) = 0;
              v215 |= sub_62CE40((const void **)src, v124, 0);
              if ( *(_QWORD *)src )
              {
                *(_QWORD *)&src[8] = 0;
                qfree(*(void **)src);
              }
              ++v167;
            }
            while ( (_BYTE)v167 != 58 );
            v172 = 65;
            do
            {
              memset(src, 0, sizeof(src));
              *(_QWORD *)src = qvector_reserve(src, 0, 12, 1);
              v174 = 2;
              *(_QWORD *)&src[8] = 12;
              strcpy(*(char **)src, "Pseudocode-");
              v175 = *(_QWORD *)src;
              v176 = *(_QWORD *)&src[8];
              if ( *(_QWORD *)&src[8] )
              {
                v174 = *(_QWORD *)&src[8] + 1LL;
                v176 = *(_QWORD *)&src[8] - 1LL;
              }
              if ( *(_QWORD *)&src[16] < v174 )
              {
                *(_QWORD *)src = qvector_reserve(src, *(_QWORD *)src, v174, 1);
                v175 = *(_QWORD *)src;
              }
              *(_QWORD *)&src[8] = v174;
              *(_BYTE *)(v175 + v176) = v172;
              v173 = (const char *)v124;
              *(_BYTE *)(*(_QWORD *)src + v176 + 1) = 0;
              v215 |= sub_62CE40((const void **)src, v124, 0);
              if ( *(_QWORD *)src )
              {
                *(_QWORD *)&src[8] = 0;
                qfree(*(void **)src);
              }
              ++v172;
            }
            while ( (_BYTE)v172 != 91 );
            if ( (v222 & 0x20000) == 0 )
            {
              if ( v215 )
              {
                v173 = "$ BMARKS ";
                netnode_check(v211, "$ BMARKS ", 0, 0);
                if ( (unsigned __int8)netnode_exist(v211) )
                {
                  v173 = src;
                  memset(src, 0, sizeof(src));
                  for ( k = netnode_qhashfirst(v243[0].m128i_i64[0], src, 72);
                        k != -1;
                        k = netnode_qhashnext(v243[0].m128i_i64[0], src, v184, 72) )
                  {
                    v185 = haystack;
                    if ( *(_QWORD *)&src[8] )
                      v185 = *(const char **)src;
                    n[0] = netnode_hashval_long(v243[0].m128i_i64[0], v185, 72);
                    if ( (unsigned __int8)netnode_exist(v209) )
                      sub_62C820(n[0], -1, v124, 2);
                    v184 = haystack;
                    if ( *(_QWORD *)&src[8] )
                      v184 = *(const char **)src;
                    v173 = src;
                  }
                  if ( *(_QWORD *)src )
                  {
                    *(_QWORD *)&src[8] = 0;
                    qfree(*(void **)src);
                  }
                }
              }
            }
            sub_62AA00("Watch List");
            sub_62AA00("Hint View");
            sub_62AA00("Sample hexview");
            sub_62AA00("Dictionary");
            v37 = "Definition";
            sub_62AA00("Definition");
            if ( (v222 & 4) != 0 )
            {
              v38 = v222 | 0x20002;
            }
            else
            {
              dword_2CCC3C8 |= 0x200000u;
              v38 = v222 | 0x20006;
            }
            if ( (v38 & 8) != 0 )
            {
LABEL_72:
              if ( (v38 & 0x10) == 0 )
              {
                v37 = (char *)v207;
                sub_41DD60((__int64)v207);
                v38 |= 0x10uLL;
              }
              if ( (v38 & 0x20) == 0 )
              {
                v38 |= 0x20uLL;
                dword_2CCC3C8 |= 0x400000u;
              }
              if ( (~(_DWORD)v38 & 0x280) != 0 )
              {
                sub_5AAFD0((__int64)v37, v173);
                v38 |= 0x280uLL;
              }
              v40 = v38 & 0x100;
              if ( (v38 & 0x100) == 0 )
              {
                do
                {
                  netnode_check(src, *(char **)((char *)off_2B36B60 + v40), 0, 0);
                  if ( *(_QWORD *)src == -1 )
                    netnode_check(src, 0, 0, 1);
                  else
                    netnode_rename(*(_QWORD *)src, 0, 0);
                  *(const char **)((char *)&v253 + v40) = *(const char **)src;
                  v40 += 8;
                }
                while ( v40 != 128 );
                *(_QWORD *)src = v207;
                if ( v207 )
                  *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
                else
                  *(_QWORD *)&src[8] = -1;
                *(_QWORD *)&src[16] = s2b;
                sub_6327E0((__int64)src, (__int64)&unk_2B361E0, (const char *)&v253, 0x80u, 83, v180);
                BYTE1(v38) |= 1u;
              }
              if ( (v38 & 0x800) == 0 )
              {
                BYTE1(v38) |= 8u;
                dword_2CCC3C8 |= 0x100000u;
              }
              if ( (v38 & 0x2000) == 0 )
                dword_2CCC3C8 |= 0x800000u;
              if ( (v38 & 0x800000) == 0 )
              {
                v38 |= 0x800000uLL;
                dword_2CCC3C8 |= 0x2000000u;
              }
              if ( (v38 & 0x4000) == 0 )
              {
                netnode_check(src, "$ debugger application", 0, 0);
                if ( (unsigned __int8)netnode_exist(src)
                  && netnode_hashval(*(_QWORD *)src, "Name", &v264, 1024, 72) > 0
                  && !((unsigned __int64)v265 ^ 0x756265642032336ELL | v264 ^ 0x6957206C61636F4CLL)
                  && *(_QWORD *)((char *)&v265 + 5) == 0x72656767756265LL )
                {
                  netnode_hashset(*(_QWORD *)src, "Name", "Local Windows debugger", 0, 72);
                }
                BYTE1(v38) |= 0x40u;
              }
              if ( (v38 & 0x40000) == 0 )
              {
                v38 |= 0x40000uLL;
                dword_2CCC3C8 |= 0x1000000u;
              }
              if ( (v38 & 0x8000000) == 0 )
              {
                v38 |= 0x8000000uLL;
                dword_2CCC3C8 |= 0x4000000u;
              }
              v41 = (__int64)"$ hidden_areas";
              netnode_check(v209, "$ hidden_areas", 0, 0);
              if ( (unsigned __int8)netnode_exist(v209) )
              {
                v41 = (__int64)"$ hidden_ranges";
                netnode_check(src, "$ hidden_ranges", 0, 0);
                if ( !(unsigned __int8)netnode_exist(src) )
                {
                  v41 = (__int64)"$ hidden_ranges";
                  netnode_rename(n[0], "$ hidden_ranges", 0);
                }
              }
              if ( (v38 & 0x8000) == 0 )
              {
                v42 = 696;
                if ( v235 != 700 )
                  v42 = v235;
                v235 = v42;
              }
              v43 = v38 & 0x200000;
              v44 = v207[233];
              if ( (v44 & 0xFFFFFFFD) == 0xD )
              {
                v45 = v38 | 0x18040;
                if ( (v38 & 0x200000) != 0 )
                  goto LABEL_370;
                if ( (a1[17].m128i_i8[0] & 1) == 0 )
                {
LABEL_369:
                  v45 |= 0x200000uLL;
LABEL_370:
                  if ( v44 != 15 )
                    goto LABEL_99;
                  v179 = a1;
                  if ( (a1[1].m128i_i8[8] & 4) == 0 )
                  {
                    if ( (v45 & 0x2000000) != 0 )
                      goto LABEL_105;
                    goto LABEL_104;
                  }
                  v191 = v239[0];
                  memset(src, 0, sizeof(src));
                  if ( !v239[0] )
                    goto LABEL_438;
                  *(_QWORD *)src = qalloc_or_throw(v239[0]);
                  *(_QWORD *)&src[16] = v191;
                  memcpy(*(void **)src, v238, v191);
                  v193 = *(_BYTE **)src;
                  v41 = 45;
                  *(_QWORD *)&src[8] = v191;
                  v194 = strchr(*(const char **)src, 45);
                  if ( v194 )
                  {
                    v195 = v194 - v193;
                    if ( v194 - v193 != -1 )
                    {
                      if ( v195 )
                      {
                        v197 = v195 + 1;
                        if ( v191 < v195 + 1 )
                        {
                          if ( *(_QWORD *)&src[16] < v197 )
                          {
                            *(_QWORD *)src = qvector_reserve(src, v193, v195 + 1, 1);
                            v193 = *(_BYTE **)src;
                          }
                          v41 = 0;
                          memset(&v193[*(_QWORD *)&src[8]], 0, v197 - *(_QWORD *)&src[8]);
                          *(_QWORD *)&src[8] = v195 + 1;
                          v194 = (char *)(v195 + *(_QWORD *)src);
                        }
                        else if ( v191 != v195 + 1 )
                        {
                          *(_QWORD *)&src[8] = v195 + 1;
                        }
                        *v194 = 0;
                        v193 = *(_BYTE **)src;
                        if ( !*(_QWORD *)&src[8] )
                          goto LABEL_474;
                      }
                      else
                      {
                        if ( v193 )
                        {
                          *(_QWORD *)&src[8] = 0;
                          qfree(v193);
                          *(_QWORD *)src = 0;
                          *(_QWORD *)&src[16] = 0;
                          if ( !*(_QWORD *)&src[8] )
                          {
                            v179 = a1;
LABEL_438:
                            v179[17].m128i_i32[0] &= ~0x100u;
                            goto LABEL_99;
                          }
                        }
                        v193 = nullptr;
                      }
                    }
                  }
                  v41 = (__int64)"sysv";
                  if ( !strcmp(v193, "sysv")
                    || (v41 = (__int64)"elfv2", !strcmp(v193, "elfv2"))
                    || (v41 = (__int64)"celloslv2", !strcmp(v193, "celloslv2")) )
                  {
                    v196 = a1[17].m128i_i32[0];
                    BYTE1(v196) |= 1u;
                    goto LABEL_468;
                  }
LABEL_474:
                  v196 = a1[17].m128i_i32[0];
                  BYTE1(v196) &= ~1u;
LABEL_468:
                  a1[17].m128i_i32[0] = v196;
                  if ( v193 )
                  {
                    *(_QWORD *)&src[8] = 0;
                    qfree(v193);
                  }
LABEL_99:
                  if ( (v45 & 0x2000000) != 0 )
                  {
LABEL_105:
                    if ( a1[2].m128i_i16[0] == 18 )
                    {
                      if ( v207[233] == 12 )
                        a1[17].m128i_i32[0] |= 4u;
                      v41 = (__int64)v207;
                      sub_624B20(*((_QWORD *)v207 + 209) + 2328LL, (__int64)v207, (__int64)".dynsym");
                    }
                    if ( (v45 & 0x20000000) == 0 )
                    {
                      sub_521B20((__int64)v207);
                      v45 |= 0x20000000uLL;
                    }
                    if ( (v45 & 0x40000000) == 0 )
                    {
                      sub_62BED0((__int64)v207);
                      sub_4BC4A0((__int64)v207);
                      v45 |= 0x40000000uLL;
                    }
                    if ( v45 != v234 )
                    {
                      *(_QWORD *)src = -1;
                      netnode_check(src, "$ upgrade 700", 0, 1);
                      v41 = 0;
                      v240 = v45;
                      netnode_supset(*(_QWORD *)src, 0, &v240, 8, 65, v47);
                    }
                    if ( v229 || *(_DWORD *)s1 == 6382697 )
                      sub_63C620(v207, v41, v43);
                    goto LABEL_115;
                  }
                  v46 = v207[233];
                  if ( v46 == 13 )
                  {
                    netnode_check(src, " $arm", 0, 0);
                    v41 = -1;
                    if ( (netnode_altval(*(_QWORD *)src, -1, 65) & 4) != 0 )
                    {
LABEL_445:
                      a1[2].m128i_i32[3] |= 4u;
                      goto LABEL_104;
                    }
                  }
                  else
                  {
                    switch ( v46 )
                    {
                      case 12:
                        netnode_check(src, "$ mips", 0, 0);
                        v41 = -1;
                        v192 = ((unsigned __int64)netnode_altval(*(_QWORD *)src, -1, 65) >> 3) & 1;
                        break;
                      case 22:
                        netnode_check(src, "$ pic", 0, 0);
                        v41 = -1;
                        if ( (netnode_altval(*(_QWORD *)src, -1, 65) & 1) != 0 )
                          goto LABEL_445;
                        goto LABEL_442;
                      case 23:
                        netnode_check(src, "$ sparc", 0, 0);
                        v41 = -1;
                        v192 = ((unsigned __int64)netnode_altval(*(_QWORD *)src, -1, 65) >> 2) & 1;
                        break;
                      default:
LABEL_104:
                        v45 |= 0x2000000uLL;
                        goto LABEL_105;
                    }
                    if ( v192 )
                      goto LABEL_445;
                  }
LABEL_442:
                  a1[2].m128i_i32[3] &= ~4u;
                  goto LABEL_104;
                }
              }
              else
              {
                v45 = v38 | 0x118040;
                if ( (v38 & 0x200000) != 0 )
                  goto LABEL_99;
                if ( (a1[17].m128i_i8[0] & 1) == 0 )
                {
                  v45 = v38 | 0x318040;
                  goto LABEL_99;
                }
              }
              v186 = v239[0];
              if ( v239[0] )
              {
                v187 = v239[0] + 7;
                v188 = v239[0] + 8;
                v186 = v239[0] - 1;
              }
              else
              {
                v188 = 9;
                v187 = 8;
              }
              v189 = v238;
              if ( v239[1] < v188 )
              {
                v238 = (char *)qvector_reserve(&v238, v238, v188, 1);
                v189 = v238;
              }
              v239[0] = v188;
              v189[v187] = 0;
              *(_QWORD *)&v238[v186] = 0x346E67696C61382DLL;
              *(_QWORD *)src = v207;
              if ( v207 )
                *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
              else
                *(_QWORD *)&src[8] = -1;
              *(_QWORD *)&src[16] = s2b;
              sub_6327E0((__int64)src, (__int64)&off_2B36160, v238, 0, 81, v32);
              v41 = (__int64)v238;
              sub_656330(v207, v238);
              v44 = v207[233];
              goto LABEL_369;
            }
            v39 = v207[233];
            if ( v39 == 25 )
            {
              v37 = (char *)v207;
              v173 = "L21";
              sub_41F570((__int64)v207, "L21", "R11");
            }
            else
            {
              if ( v39 != 23 )
              {
LABEL_71:
                v38 |= 8uLL;
                goto LABEL_72;
              }
              v37 = (char *)v207;
              v173 = "HI22";
              sub_41F570((__int64)v207, "HI22", "LO10");
            }
            dword_2CCC3C8 |= 0x400000u;
            goto LABEL_71;
          }
        }
        *(_QWORD *)src = v207;
        if ( v207 )
          *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
        else
          *(_QWORD *)&src[8] = -1;
        *(_QWORD *)&src[16] = s2b;
        sub_631310(src, (__int64)&off_2B36160, (__int64 *)&v238, v114, v115, v116);
        goto LABEL_241;
      }
      break;
  }
  switch ( (_WORD)v33 )
  {
    case 0x2BC:
      v109 = 0;
      goto LABEL_234;
    case 0x2F8:
    case 0x2FD:
    case 0x302:
LABEL_115:
      dword_2CCC3C8 |= 0x8000000u;
      a1->m128i_i16[2] = 830;
LABEL_116:
      if ( a1[2].m128i_i16[0] == 18 && !v207[233] && (getinf(57) & 0xF) == 6 && !(unsigned __int8)getinf_flag(3, 4) )
        a1[17].m128i_i32[0] |= 0x200u;
      dword_2CCC3C8 |= 0x10000000u;
      a1->m128i_i16[2] = 840;
      goto LABEL_118;
    case 0x33E:
      goto LABEL_116;
    case 0x348:
LABEL_118:
      for ( m = 65; m != 91; ++m )
      {
        qsnprintf((unsigned int)v261, 16, (unsigned int)"$ Pseudocode-%c", m, v31, v32);
        netnode_check(&v240, v261, 0, 0);
        if ( (unsigned __int8)netnode_exist(&v240) )
        {
          for ( ii = sub_7BEB80(&v240, v207, 83); ; ii = sub_7BEBF0(&v240, v207, v50, 83) )
          {
            v50 = ii;
            if ( ii == -1 )
              break;
            v51 = sub_7BE950(&v240, v207, ii, &v264, 1024, 83);
            v52 = v51;
            if ( v51 >= 0 )
            {
              v53 = v51 + 1;
              if ( (unsigned __int64)(v51 + 1) <= 0x3FF )
              {
                v243[0].m128i_i64[0] = (__int64)&v264;
                v216 = (char *)&v264 + v51;
                v54 = strlen(s);
                if ( v52 < v54 || memcmp(&v264, s, v54) )
                {
                  n[1] = 0;
                  n[0] = (size_t)off_2B2DD20;
                  if ( (unsigned __int8)simpleline_place_t__deserialize((__int64)v209, v211, (unsigned __int64)v216) )
                  {
                    v56 = _mm_unpacklo_epi64(_mm_loadl_epi64(v243), (__m128i)(unsigned __int64)v216);
                    if ( v243[0].m128i_i64[0] < (unsigned __int64)v216 )
                    {
                      *(__m128i *)src = v56;
                      if ( (unsigned __int8)is_cvt64(v209, v211, v55) )
                        unpack_dd(src);
                      else
                        unpack_dq(src);
                      v49 = *(_BYTE **)src;
                      memmove((void *)(*(_QWORD *)src + 1LL), *(const void **)src, *(_QWORD *)&src[8] - *(_QWORD *)src);
                      *v49 = 0;
                      sub_7BE7C0(&v240, v207, v50, &v264, v53, 83);
                    }
                  }
                }
              }
            }
          }
        }
      }
      dword_2CCC3C8 |= 0x20000000u;
      a1->m128i_i16[2] = 900;
LABEL_265:
      v130 = v207[233];
      switch ( v130 )
      {
        case 13:
          if ( (unsigned int)getinf(5) == 25 )
          {
            netnode_check(v211, " $arm", 0, 0);
            memset(src, 0, sizeof(src));
            if ( netnode_qgetblob(v243[0].m128i_i64[0], src, 1, 0, 97) > 0
              && (n[0] = *(_QWORD *)src,
                  v181 = *(_QWORD *)src + *(_QWORD *)&src[8],
                  *(_QWORD *)src < *(_QWORD *)src + *(_QWORD *)&src[8])
              && (v182 = **(_BYTE **)src, n[0] = *(_QWORD *)src + 1LL, v182 == 3) )
            {
              unpack_dd(v209);
              v198 = n[0];
              if ( n[0] < v181 )
              {
                v198 = n[0] + 1;
                if ( n[0] + 1 < v181 )
                {
                  v198 = n[0] + 2;
                  if ( n[0] + 2 < v181 )
                  {
                    v198 = n[0] + 3;
                    if ( n[0] + 3 < v181 )
                    {
                      v198 = n[0] + 4;
                      if ( n[0] + 4 < v181 )
                      {
                        v198 = n[0] + 5;
                        if ( n[0] + 5 < v181 )
                        {
                          v198 = n[0] + 6;
                          if ( n[0] + 6 < v181 )
                          {
                            v198 = n[0] + 7;
                            if ( n[0] + 7 < v181 )
                            {
                              v198 = n[0] + 8;
                              if ( n[0] + 8 < v181 )
                                v198 = n[0] + 9;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              n[0] = v198;
              v199 = (void *)unpack_ds(v209, v181, 1);
              qfree(v199);
              v200 = (void *)unpack_ds(v209, v181, 1);
              qfree(v200);
              v201 = n[0];
              if ( n[0] < v181 )
              {
                ++n[0];
                if ( v201 + 1 < v181 )
                {
                  v202 = *(_BYTE *)(v201 + 1);
                  n[0] = v201 + 2;
                  if ( v202 )
                    setinf_flag(3, 4096, 1);
                }
              }
              if ( !*(_QWORD *)src )
                break;
            }
            else if ( !*(_QWORD *)src )
            {
              break;
            }
            *(_QWORD *)&src[8] = 0;
            qfree(*(void **)src);
          }
          break;
        case 72:
          v131 = "ilp32";
          goto LABEL_269;
        case 12:
          v131 = "n32";
LABEL_269:
          v132 = (__int64)v207;
          memset(n, 0, 24);
          *(_QWORD *)src = v207;
          if ( v207 )
          {
            v132 = (__int64)v207;
            *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
          }
          else
          {
            *(_QWORD *)&src[8] = -1;
          }
          *(_QWORD *)&src[16] = v207 + 160;
          sub_631310(src, (__int64)&off_2B36160, v209, v132, v31, v32);
          v133 = (char *)n[0];
          if ( n[1] )
          {
            v134 = n[1] - 1;
            v135 = strlen(v131);
            if ( v134 >= v135 && !strncmp(v133, v131, v135) )
            {
              setinf_flag(3, 4096, 1);
              v133 = (char *)n[0];
            }
          }
          if ( v133 )
          {
            n[1] = 0;
            qfree(v133);
          }
          break;
      }
      a1->m128i_i16[2] = 910;
LABEL_278:
      netnode_check(src, "$ Types Layout", 0, 0);
      if ( (unsigned __int8)netnode_exist(src) )
        netnode_rename(*(_QWORD *)src, "$ Local Types: Types Layout", 0);
      netnode_check(src, "$ chooser\\Local Types", 0, 0);
      if ( (unsigned __int8)netnode_exist(src) )
        netnode_rename(*(_QWORD *)src, "$ chooser\\Local Types: Tree", 0);
      v253 = "$ IDA View-";
      v36 = &v253;
      *(_QWORD *)v257 = 0;
      v254 = 23105;
      v258 = 23105;
      *(_QWORD *)v255 = 0;
      *(_QWORD *)v259 = 0;
      *(_QWORD *)&v255[6] = "$ Hex View-";
      *(_QWORD *)&v259[6] = "$ Local Types: Types Layout";
      *(_QWORD *)&v259[14] = 0;
      v256 = 14641;
      *(_QWORD *)&v257[6] = "$ Pseudocode-";
      while ( 1 )
      {
        v136 = *((unsigned __int8 *)v36 + 8);
        if ( (char)v136 <= *((char *)v36 + 9) )
          break;
LABEL_61:
        v36 += 2;
        if ( &v260 == (char *)v36 )
        {
          sub_62BED0((__int64)v207);
          a1->m128i_i16[2] = 920;
          goto LABEL_63;
        }
      }
      while ( 1 )
      {
        v138 = *v36;
        memset(src, 0, sizeof(src));
        if ( v138 )
        {
          v137 = strlen(v138);
          *(_QWORD *)src = qvector_reserve(src, 0, v137 + 1, 1);
          *(_QWORD *)&src[8] = v137 + 1;
          memmove(*(void **)src, v138, v137);
          *(_BYTE *)(*(_QWORD *)src + v137) = 0;
          v138 = *(const char **)src;
          v139 = *(_QWORD *)&src[8] - 1LL;
          v140 = *(_QWORD *)&src[8] + 1LL;
          if ( !*(_QWORD *)&src[8] )
          {
            v139 = 0;
            v140 = 2;
          }
          if ( *(_QWORD *)&src[16] >= v140 )
            goto LABEL_288;
        }
        else
        {
          v139 = 0;
          v140 = 2;
        }
        *(_QWORD *)v212 = v140;
        *(_QWORD *)src = qvector_reserve(src, v138, v140, 1);
        v140 = *(_QWORD *)v212;
        v138 = *(const char **)src;
LABEL_288:
        *(_QWORD *)&src[8] = v140;
        v141 = haystack;
        v138[v139] = v136;
        *(_BYTE *)(*(_QWORD *)src + v139 + 1) = 0;
        if ( *(_QWORD *)&src[8] )
          v141 = *(const char **)src;
        netnode_check(v209, v141, 0, 0);
        if ( (unsigned __int8)netnode_exist(v209) )
        {
          v142 = haystack;
          if ( *(_QWORD *)&src[8] )
            v142 = *(const char **)src;
          sub_62AF30((__int64)v207, n[0], v142 + 2, 0);
        }
        if ( *(_QWORD *)src )
        {
          *(_QWORD *)&src[8] = 0;
          qfree(*(void **)src);
        }
        if ( (char)++v136 > *((char *)v36 + 9) )
          goto LABEL_61;
      }
    case 0x384:
      goto LABEL_265;
    case 0x38E:
      goto LABEL_278;
    case 0x398:
LABEL_63:
      dword_2CCC3C8 |= 0x40000000u;
      v33 = 920;
      break;
  }
  if ( v235 < v33 )
    sub_39ADA0(2u, (unsigned int)v235);
  v34 = v230 + 496;
  if ( (unsigned __int8)sub_630E70(v230 + 496, (__int64)v207, 0) )
    dto_copy_to_inf(v34);
  else
    dto_copy_from_inf(v34);
  sub_630E70(v230 + 512, (__int64)v207, 1u);
  if ( a1[2].m128i_i16[0] == 11 && sub_7BECC0(*(_QWORD *)v231, v207, -5, 65) != -6 )
  {
    netnode_check(v209, "$ PE header", 0, 0);
    v143 = netnode_altval(n[0], -2, 65);
    *(_QWORD *)src = v207;
    if ( v207 )
      *(_QWORD *)&src[8] = *((_QWORD *)v207 + 190);
    else
      *(_QWORD *)&src[8] = -1;
    *(_QWORD *)&src[16] = v207 + 160;
    sub_632390((__int64)src, (__int64)&off_2B36460, v143, 93, 1);
    setinf_flag(2, 2, 1);
  }
  if ( byte_2CCC2F8 )
    a1[13].m128i_i8[4] |= 0x10u;
  if ( (time(nullptr) & 0x3F) == 0xD && (unk_23C3E60 != 19 || unk_23C3DC0 != 0xED) )
    sub_7BF0F0(v231[0]);
  v14 = 1;
LABEL_40:
  if ( v238 )
  {
    v239[0] = 0;
    qfree(v238);
  }
  return v14;
}
