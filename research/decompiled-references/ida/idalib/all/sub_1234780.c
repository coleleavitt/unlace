void __fastcall sub_1234780(__int64 a1)
{
  void **p_ptr; // r15
  __int64 **v2; // rax
  __int64 *v3; // rax
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  size_t v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r12
  _QWORD *i; // rbx
  void **v12; // rbp
  const char **v13; // rax
  const char *v14; // r13
  size_t v15; // rax
  size_t v16; // r14
  __int64 v17; // rcx
  size_t v18; // r14
  const char *v19; // r13
  unsigned __int64 v20; // rdx
  const char **v21; // rcx
  void **v22; // rdi
  unsigned __int64 v23; // rax
  char *v24; // rdx
  void ***v25; // r12
  void ***j; // rbx
  const char *v27; // r14
  size_t v28; // rax
  __int64 v29; // rcx
  void **v30; // rsi
  unsigned __int64 v31; // rdx
  const char **v32; // rcx
  __int64 *v33; // r13
  __int64 *p_src; // r14
  __int64 v35; // rax
  void *v36; // rdx
  char *v37; // rdi
  size_t v38; // rbx
  __int64 *v39; // rbp
  __int64 v40; // rsi
  const void **v41; // rbx
  unsigned int v42; // r13d
  size_t v43; // rbp
  __m128i v44; // xmm1
  const void *v45; // r12
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // r8d
  int v50; // r9d
  void **v51; // r14
  void *v52; // rdx
  char *v53; // rdi
  size_t v54; // rbx
  void **v55; // rbp
  __int64 v56; // rsi
  const void **v57; // rbx
  unsigned int v58; // r14d
  __int64 *v59; // rbp
  size_t v60; // r12
  __m128i v61; // xmm2
  const void *v62; // r13
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // r8d
  int v67; // r9d
  __int64 v68; // rax
  unsigned __int8 *v69; // r12
  _BYTE *v70; // rsi
  size_t v71; // rdx
  void **v72; // rdi
  void *v73; // r12
  _QWORD *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  char *v78; // r13
  _BYTE *v79; // rdi
  void *v80; // rax
  void **v81; // rax
  void **v82; // r12
  size_t v83; // rax
  void **v84; // rdx
  void **v85; // r13
  __int64 *v86; // r15
  const void **v87; // rbp
  void **v88; // rbx
  void **v89; // rdi
  void **v90; // rdi
  void **v91; // r13
  __int64 v92; // rax
  __m128i *v93; // rcx
  __int64 v94; // rax
  _BYTE *v95; // rdx
  __int64 v96; // rax
  unsigned __int8 *v97; // rbp
  _BYTE *v98; // rsi
  size_t v99; // rdx
  void **v100; // rdi
  void *v101; // rbp
  _QWORD *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  char *v106; // r12
  _BYTE *v107; // rdi
  void *v108; // rax
  void **v109; // rax
  void **v110; // rbp
  size_t v111; // rax
  void **v112; // rdx
  void **v113; // r12
  __int64 *v114; // r15
  unsigned int v115; // r14d
  const void **v116; // r13
  void **v117; // rbx
  void **v118; // rdi
  void **v119; // rdi
  void **v120; // r12
  __int64 v121; // rax
  __m128i *v122; // rcx
  __int64 v123; // rax
  char *v124; // rdi
  char *v125; // rdi
  __int64 v126; // rax
  unsigned __int64 v127; // rdx
  const char **v128; // rax
  __int64 v129; // rax
  __m128i *v130; // rcx
  __int64 v131; // rax
  _BYTE *v132; // rdx
  __int64 v133; // rax
  __m128i *v134; // rcx
  __int64 v135; // rax
  _BYTE *v136; // rdx
  __int64 v137; // rax
  __m128i *v138; // rdx
  __int64 v139; // r13
  size_t v140; // rax
  _BYTE *v141; // rdi
  size_t v142; // r8
  _BYTE *v143; // rax
  __m128i v144; // xmm0
  __m128i v145; // xmm0
  __m128i si128; // xmm0
  size_t v147; // rdx
  size_t v148; // rdx
  char *v149; // rax
  size_t v150; // rcx
  int v151; // eax
  __int64 v152; // rax
  __int64 v153; // r13
  __int64 v154; // rax
  __int64 v155; // r13
  size_t v156; // r14
  const void **v157; // rbp
  __int64 v158; // rbx
  void *v159; // rdi
  size_t v160; // rcx
  int v161; // eax
  __int64 v162; // rax
  __int64 v163; // r12
  __int64 v164; // rax
  __int64 v165; // r12
  size_t v166; // r13
  const void **v167; // r15
  __int64 v168; // rbx
  void *v169; // rdi
  __int64 v170; // rdx
  __int64 v171; // rdx
  __m128i v172; // xmm0
  __m128i v173; // xmm0
  __m128i v175; // [rsp+10h] [rbp-788h] BYREF
  void **v176; // [rsp+20h] [rbp-778h]
  __int64 *v177; // [rsp+28h] [rbp-770h]
  void **v178; // [rsp+30h] [rbp-768h]
  void **v179; // [rsp+38h] [rbp-760h]
  const void **v180; // [rsp+40h] [rbp-758h]
  void **v181; // [rsp+48h] [rbp-750h]
  void **v182; // [rsp+50h] [rbp-748h]
  char *v183; // [rsp+58h] [rbp-740h]
  char *s; // [rsp+60h] [rbp-738h]
  bool v185; // [rsp+6Fh] [rbp-729h]
  size_t v186; // [rsp+70h] [rbp-728h]
  __int64 *v187; // [rsp+78h] [rbp-720h]
  unsigned __int64 v188; // [rsp+80h] [rbp-718h]
  unsigned __int64 v189; // [rsp+88h] [rbp-710h]
  void **v190; // [rsp+90h] [rbp-708h]
  void **v191; // [rsp+98h] [rbp-700h]
  void **v192; // [rsp+A0h] [rbp-6F8h]
  void **v193; // [rsp+A8h] [rbp-6F0h]
  size_t v194; // [rsp+B0h] [rbp-6E8h]
  void **v195; // [rsp+B8h] [rbp-6E0h]
  __int64 v196; // [rsp+C0h] [rbp-6D8h] BYREF
  __int64 v197; // [rsp+C8h] [rbp-6D0h] BYREF
  void *v198; // [rsp+D0h] [rbp-6C8h] BYREF
  __int64 v199; // [rsp+D8h] [rbp-6C0h]
  char v200; // [rsp+E0h] [rbp-6B8h]
  __int16 v201; // [rsp+F0h] [rbp-6A8h]
  void *v202; // [rsp+100h] [rbp-698h] BYREF
  size_t v203; // [rsp+108h] [rbp-690h]
  __int16 v204; // [rsp+120h] [rbp-678h]
  void *v205; // [rsp+130h] [rbp-668h] BYREF
  size_t v206; // [rsp+138h] [rbp-660h]
  void *v207; // [rsp+140h] [rbp-658h]
  void *v208; // [rsp+148h] [rbp-650h]
  __int16 v209; // [rsp+150h] [rbp-648h]
  void *v210[5]; // [rsp+160h] [rbp-638h] BYREF
  int v211; // [rsp+18Ch] [rbp-60Ch]
  int v212; // [rsp+190h] [rbp-608h]
  void *src; // [rsp+1A0h] [rbp-5F8h] BYREF
  size_t n; // [rsp+1A8h] [rbp-5F0h]
  char *v215; // [rsp+1B0h] [rbp-5E8h]
  size_t v216; // [rsp+1B8h] [rbp-5E0h]
  void *v217; // [rsp+1C0h] [rbp-5D8h]
  __int16 v218; // [rsp+1E0h] [rbp-5B8h]
  void *v219; // [rsp+1F0h] [rbp-5A8h] BYREF
  __int64 v220; // [rsp+1F8h] [rbp-5A0h]
  char v221; // [rsp+200h] [rbp-598h] BYREF
  void *v222; // [rsp+300h] [rbp-498h] BYREF
  __int64 v223; // [rsp+308h] [rbp-490h]
  char v224; // [rsp+310h] [rbp-488h] BYREF
  void *v225; // [rsp+410h] [rbp-388h] BYREF
  __int64 v226; // [rsp+418h] [rbp-380h]
  char v227; // [rsp+420h] [rbp-378h] BYREF
  void *v228; // [rsp+520h] [rbp-278h] BYREF
  __m128i v229; // [rsp+528h] [rbp-270h]
  void *ptr; // [rsp+640h] [rbp-158h] BYREF
  __m128i v231; // [rsp+648h] [rbp-150h] BYREF
  size_t v232; // [rsp+658h] [rbp-140h]
  __int16 v233; // [rsp+660h] [rbp-138h]

  v190 = &v219;
  p_ptr = &ptr;
  v219 = &v221;
  v220 = 0x1000000000LL;
  v223 = 0x1000000000LL;
  v226 = 0x1000000000LL;
  v2 = *(__int64 ***)a1;
  v222 = &v224;
  v225 = &v227;
  v3 = *v2;
  ptr = &v231.m128i_u64[1];
  v4 = (_BYTE *)v3[118];
  v5 = v3[119];
  v191 = &v222;
  v192 = &v225;
  sub_1232650(&ptr, v4, (__int64)&v4[v5]);
  v193 = v210;
  sub_22B9ED0(v210, &ptr);
  if ( ptr != &v231.m128i_u64[1] )
    operator delete(ptr);
  v185 = 0;
  s = ".a";
  if ( v211 == 15 )
  {
    if ( v212 == 27 )
    {
      v185 = 1;
      s = ".lib";
    }
    else
    {
      v185 = v212 == 0;
      v149 = ".lib";
      if ( v212 )
        v149 = s;
      s = v149;
    }
  }
  v6 = strlen(s);
  LODWORD(ptr) = 2205;
  v186 = v6;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = sub_21B6DA0(v7, &ptr, 1);
  v9 = *(_QWORD *)(v7 + 8);
  v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
  for ( i = (_QWORD *)(v9 + 8 * HIDWORD(v8)); i != v10; ++v10 )
  {
    if ( *v10 && (unsigned __int8)sub_21B9810(*v10, 2205) )
      break;
  }
  v12 = v190 + 2;
  while ( i != v10 )
  {
    v13 = *(const char ***)(*v10 + 48LL);
    v14 = *v13;
    if ( *v13 )
    {
      v15 = strlen(*v13);
      v16 = v15;
      if ( v15 && *v14 == 58 )
      {
        v17 = (unsigned int)v226;
        v18 = v15 - 1;
        v19 = v14 + 1;
        v20 = (unsigned int)v226 + 1LL;
        if ( v20 > HIDWORD(v226) )
        {
          sub_2237220(v192, v192 + 2, v20, 16);
          v17 = (unsigned int)v226;
        }
        v21 = (const char **)((char *)v225 + 16 * v17);
        *v21 = v19;
        v21[1] = (const char *)v18;
        LODWORD(v226) = v226 + 1;
        goto LABEL_16;
      }
    }
    else
    {
      v16 = 0;
    }
    v126 = (unsigned int)v220;
    v127 = (unsigned int)v220 + 1LL;
    if ( v127 > HIDWORD(v220) )
    {
      sub_2237220(v190, v12, v127, 16);
      v126 = (unsigned int)v220;
    }
    v128 = (const char **)((char *)v219 + 16 * v126);
    *v128 = v14;
    v128[1] = (const char *)v16;
    LODWORD(v220) = v220 + 1;
LABEL_16:
    if ( ++v10 == i )
      break;
    while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 2205) )
    {
      if ( i == ++v10 )
        goto LABEL_20;
    }
  }
LABEL_20:
  LODWORD(ptr) = 2204;
  v22 = *(void ***)(a1 + 8);
  v23 = sub_21B6DA0(v22, &ptr, 1);
  v24 = (char *)v22[1];
  v25 = (void ***)&v24[8 * (unsigned int)v23];
  for ( j = (void ***)&v24[8 * HIDWORD(v23)]; j != v25; ++v25 )
  {
    v22 = *v25;
    if ( *v25 && (unsigned __int8)sub_21B9810(v22, 2204) )
      break;
  }
  while ( v25 != j )
  {
    v27 = *(const char **)(*v25)[6];
    v28 = 0;
    if ( v27 )
    {
      v22 = *(void ***)(*v25)[6];
      v28 = strlen((const char *)v22);
    }
    v29 = (unsigned int)v223;
    v30 = (void **)HIDWORD(v223);
    v31 = (unsigned int)v223 + 1LL;
    if ( v31 > HIDWORD(v223) )
    {
      v22 = v191;
      v176 = (void **)v28;
      v30 = v191 + 2;
      sub_2237220(v191, v191 + 2, v31, 16);
      v29 = (unsigned int)v223;
      v28 = (size_t)v176;
    }
    v32 = (const char **)((char *)v222 + 16 * v29);
    v32[1] = (const char *)v28;
    *v32 = v27;
    LODWORD(v223) = v223 + 1;
    if ( *(_BYTE *)(a1 + 21) )
    {
      v137 = sub_227D6D0(v22, v30);
      v138 = *(__m128i **)(v137 + 32);
      v139 = v137;
      if ( *(_QWORD *)(v137 + 24) - (_QWORD)v138 > 0x2Cu )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A9C70);
        qmemcpy(&v138[2], "brary path:  ", 13);
        *v138 = si128;
        v138[1] = _mm_load_si128((const __m128i *)&xmmword_23A9C80);
        *(_QWORD *)(v137 + 32) += 45LL;
      }
      else
      {
        v139 = sub_227BF10(v137, "HIP fatbin symbol search uses library path:  ", 45);
      }
      if ( v27 )
      {
        v140 = strlen(v27);
        v141 = *(_BYTE **)(v139 + 32);
        v142 = v140;
        v143 = *(_BYTE **)(v139 + 24);
        if ( v142 > v143 - v141 )
        {
          v139 = sub_227BF10(v139, v27, v142);
          goto LABEL_200;
        }
        if ( v142 )
        {
          v176 = (void **)v142;
          memcpy(v141, v27, v142);
          v143 = *(_BYTE **)(v139 + 24);
          v141 = (char *)v176 + *(_QWORD *)(v139 + 32);
          *(_QWORD *)(v139 + 32) = v141;
        }
      }
      else
      {
LABEL_200:
        v143 = *(_BYTE **)(v139 + 24);
        v141 = *(_BYTE **)(v139 + 32);
      }
      if ( v143 == v141 )
      {
        sub_227BF10(v139, "\n", 1);
      }
      else
      {
        *v141 = 10;
        ++*(_QWORD *)(v139 + 32);
      }
    }
    if ( ++v25 == j )
      break;
    while ( 1 )
    {
      v22 = *v25;
      if ( *v25 )
      {
        if ( (unsigned __int8)sub_21B9810(v22, 2204) )
          break;
      }
      if ( j == ++v25 )
        goto LABEL_34;
    }
  }
LABEL_34:
  v187 = (__int64 *)((char *)v225 + 16 * (unsigned int)v226);
  if ( v225 != v187 )
  {
    v33 = (__int64 *)v225;
    p_src = (__int64 *)&src;
    v176 = &v228;
    v175 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    while ( 1 )
    {
      v35 = v33[1];
      v36 = (void *)*v33;
      v37 = (char *)p_src;
      v233 = 261;
      v231.m128i_i64[0] = v35;
      ptr = v36;
      sub_2253560(p_src, p_ptr);
      v38 = n;
      v39 = (__int64 *)src;
      v40 = (__int64)(v176 + 3);
      v229 = _mm_load_si128(&v175);
      v228 = v176 + 3;
      if ( n > 0x100 )
      {
        sub_2236E10(v176, v40, n, 1);
        v37 = (char *)v228 + v229.m128i_i64[0];
      }
      else
      {
        if ( !n )
          goto LABEL_38;
        v37 = (char *)(v176 + 3);
      }
      v40 = (__int64)v39;
      memcpy(v37, v39, v38);
      v39 = (__int64 *)src;
      v38 += v229.m128i_i64[0];
LABEL_38:
      v229.m128i_i64[0] = v38;
      if ( v39 != p_src + 2 )
      {
        v37 = (char *)v39;
        operator delete(v39);
      }
      v41 = (const void **)v222;
      v180 = (const void **)((char *)v222 + 16 * (unsigned int)v223);
      if ( v222 != v180 )
      {
        v183 = (char *)v33;
        v42 = (unsigned __int16)v182;
        v178 = &v205;
        v179 = &v202;
        v177 = (__int64 *)&v198;
        while ( 1 )
        {
          v43 = (size_t)v41[1];
          v44 = _mm_load_si128(&v175);
          v45 = *v41;
          ptr = p_ptr + 3;
          v231 = v44;
          if ( v43 > 0x100 )
          {
            sub_2236E10(p_ptr, p_ptr + 3, v43, 1);
            v125 = (char *)ptr + v231.m128i_i64[0];
          }
          else
          {
            if ( !v43 )
              goto LABEL_44;
            v125 = (char *)(p_ptr + 3);
          }
          memcpy(v125, v45, v43);
          v43 += v231.m128i_i64[0];
LABEL_44:
          LOWORD(v217) = 257;
          v209 = 257;
          v204 = 257;
          v201 = 261;
          v231.m128i_i64[0] = v43;
          v198 = v228;
          v199 = v229.m128i_i64[0];
          sub_228A3B0(p_ptr, v177, v179, v178, p_src);
          v40 = 0;
          LOWORD(v217) = 261;
          src = ptr;
          n = v231.m128i_i64[0];
          if ( !(unsigned int)sub_228C1E0(p_src, 0) )
          {
            if ( *(_BYTE *)(a1 + 21) )
            {
              v129 = sub_227D6D0(p_src, 0);
              v130 = *(__m128i **)(v129 + 32);
              if ( *(_QWORD *)(v129 + 24) - (_QWORD)v130 > 0x27u )
              {
                v145 = _mm_load_si128((const __m128i *)&xmmword_23A9C70);
                v130[2].m128i_i64[0] = 0x203A797261726269LL;
                *v130 = v145;
                v130[1] = _mm_load_si128((const __m128i *)&xmmword_23A9C90);
                *(_QWORD *)(v129 + 32) += 40LL;
              }
              else
              {
                v129 = sub_227BF10(v129, "HIP fatbin symbol search found library: ", 40);
              }
              v131 = sub_227BF10(v129, ptr, v231.m128i_i64[0]);
              v132 = *(_BYTE **)(v131 + 32);
              if ( *(_BYTE **)(v131 + 24) == v132 )
              {
                sub_227BF10(v131, "\n", 1);
              }
              else
              {
                *v132 = 10;
                ++*(_QWORD *)(v131 + 32);
              }
            }
            v46 = v42;
            BYTE1(v46) = 0;
            LOWORD(v217) = 261;
            v42 = v46;
            src = ptr;
            n = v231.m128i_i64[0];
            sub_2230FD0(v177, p_src, 0, 1, 0, v46);
            if ( (v200 & 1) == 0 )
            {
              LOWORD(v182) = v42;
              v33 = (__int64 *)v183;
              sub_2230760(p_src, v198);
              sub_12342A0(a1, p_src, v47, v48, v49, v50);
              sub_FC2AF0(v177);
              if ( ptr != p_ptr + 3 )
                free(ptr);
              goto LABEL_49;
            }
            v189 = (unsigned int)v198 | v189 & 0xFFFFFFFF00000000LL;
            v40 = (unsigned int)v189;
            sub_2220500(&v196, (unsigned int)v189, v199);
            if ( *(_BYTE *)(a1 + 20) )
              goto LABEL_157;
            sub_FC70B0((__int64)p_src, ***(_QWORD ***)a1, 0, *(_DWORD *)(a1 + 16));
            v96 = v196;
            v196 = 0;
            v197 = v96;
            sub_2221210(v179, &v197);
            v97 = (unsigned __int8 *)src;
            v98 = v202;
            v99 = v203;
            if ( !src )
            {
              v160 = n;
              v161 = *(_DWORD *)(n + 14976);
              if ( v161 )
              {
                v162 = (unsigned int)(v161 - 1);
                *(_DWORD *)(n + 14976) = v162;
                v97 = *(unsigned __int8 **)(v160 + 8 * v162 + 14848);
                v163 = *((unsigned int *)v97 + 134);
                *v97 = 0;
                v164 = *((_QWORD *)v97 + 66);
                *((_DWORD *)v97 + 106) = 0;
                v165 = v164 + (v163 << 6);
                if ( v164 != v165 )
                {
                  LOWORD(v182) = v42;
                  v166 = v99;
                  v194 = (size_t)p_src;
                  v195 = p_ptr;
                  v167 = v41;
                  v168 = v164;
                  do
                  {
                    while ( 1 )
                    {
                      v165 -= 64;
                      v169 = *(void **)(v165 + 24);
                      if ( v169 == (void *)(v165 + 40) )
                        break;
                      operator delete(v169);
                      if ( v168 == v165 )
                        goto LABEL_251;
                    }
                  }
                  while ( v168 != v165 );
LABEL_251:
                  v99 = v166;
                  v41 = v167;
                  v42 = (unsigned __int16)v182;
                  p_src = (__int64 *)v194;
                  p_ptr = v195;
                }
                *((_DWORD *)v97 + 134) = 0;
              }
              else
              {
                v194 = v203;
                v182 = (void **)v202;
                v97 = (unsigned __int8 *)operator new(0x3A0u);
                *v97 = 0;
                *((_QWORD *)v97 + 12) = v97 + 112;
                *((_QWORD *)v97 + 16) = v97 + 144;
                *((_QWORD *)v97 + 20) = v97 + 176;
                *((_QWORD *)v97 + 24) = v97 + 208;
                *((_QWORD *)v97 + 28) = v97 + 240;
                *((_QWORD *)v97 + 32) = v97 + 272;
                *((_QWORD *)v97 + 36) = v97 + 304;
                *((_QWORD *)v97 + 40) = v97 + 336;
                *((_QWORD *)v97 + 44) = v97 + 368;
                *((_QWORD *)v97 + 48) = v97 + 400;
                *((_QWORD *)v97 + 52) = v97 + 432;
                *((_QWORD *)v97 + 13) = 0;
                v97[112] = 0;
                *((_QWORD *)v97 + 17) = 0;
                v97[144] = 0;
                *((_QWORD *)v97 + 21) = 0;
                v97[176] = 0;
                *((_QWORD *)v97 + 25) = 0;
                v97[208] = 0;
                *((_QWORD *)v97 + 29) = 0;
                v97[240] = 0;
                *((_QWORD *)v97 + 33) = 0;
                v97[272] = 0;
                *((_QWORD *)v97 + 37) = 0;
                v97[304] = 0;
                *((_QWORD *)v97 + 41) = 0;
                v97[336] = 0;
                *((_QWORD *)v97 + 45) = 0;
                v97[368] = 0;
                *((_QWORD *)v97 + 49) = 0;
                v97[400] = 0;
                *((_QWORD *)v97 + 53) = 0x800000000LL;
                v98 = v182;
                *((_QWORD *)v97 + 66) = v97 + 544;
                v99 = v194;
                *((_QWORD *)v97 + 67) = 0x600000000LL;
              }
              src = v97;
            }
            v100 = v178;
            v97[*v97 + 1] = 0;
            v101 = v100 + 2;
            v205 = v100 + 2;
            sub_1232590(v100, v98, (__int64)&v98[v99]);
            v102 = src;
            v103 = *(unsigned __int8 *)src;
            *(_BYTE *)src = v103 + 1;
            v104 = (unsigned __int8)v103;
            v40 = (__int64)v205;
            v105 = 4 * (v103 + 3);
            v106 = (char *)&v102[v105];
            v107 = (_BYTE *)v102[v105];
            if ( v205 == v101 )
            {
              v147 = v206;
              if ( v206 )
              {
                if ( v206 == 1 )
                  *v107 = (_BYTE)v207;
                else
                  memcpy(v107, v205, v206);
                v147 = v206;
                v107 = *(_BYTE **)v106;
              }
              *((_QWORD *)v106 + 1) = v147;
              v107[v147] = 0;
              v107 = v205;
              goto LABEL_130;
            }
            if ( v107 == (_BYTE *)&v102[v105 + 2] )
            {
              *(_QWORD *)v106 = v205;
              *((_QWORD *)v106 + 1) = v206;
              *((_QWORD *)v106 + 2) = v207;
            }
            else
            {
              v108 = (void *)v102[4 * v104 + 14];
              *(_QWORD *)v106 = v205;
              *((_QWORD *)v106 + 1) = v206;
              *((_QWORD *)v106 + 2) = v207;
              if ( v107 )
              {
                v205 = v107;
                v207 = v108;
LABEL_130:
                v109 = v178;
                v206 = 0;
                *v107 = 0;
                if ( v205 != v109 + 2 )
                  operator delete(v205);
                if ( v202 != v179 + 2 )
                  operator delete(v202);
                if ( v197 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v197 + 8LL))(v197);
                if ( (_BYTE)v218 )
                {
                  v40 = (__int64)p_src;
                  sub_FC7790((__int64)v215, p_src, SHIBYTE(v218));
                  v218 = 0;
                  v215 = nullptr;
                }
                if ( v217 != p_src + 6 )
                  operator delete(v217);
                v110 = (void **)src;
                if ( src )
                {
                  v111 = n;
                  if ( n )
                  {
                    if ( (unsigned __int64)src >= n && (unsigned __int64)src <= n + 14848 )
                    {
                      v171 = *(unsigned int *)(n + 14976);
                      *(_DWORD *)(n + 14976) = v171 + 1;
                      *(_QWORD *)(v111 + 8 * v171 + 14848) = v110;
                    }
                    else
                    {
                      v112 = *((void ***)src + 66);
                      v113 = &v112[8 * (unsigned __int64)*((unsigned int *)src + 134)];
                      if ( v112 != v113 )
                      {
                        v182 = p_ptr;
                        v114 = p_src;
                        v115 = v42;
                        v116 = v41;
                        v117 = v112;
                        do
                        {
                          while ( 1 )
                          {
                            v113 -= 8;
                            v118 = (void **)v113[3];
                            if ( v118 == v113 + 5 )
                              break;
                            operator delete(v118);
                            if ( v117 == v113 )
                              goto LABEL_148;
                          }
                        }
                        while ( v117 != v113 );
LABEL_148:
                        v41 = v116;
                        v113 = (void **)v110[66];
                        v42 = v115;
                        p_src = v114;
                        p_ptr = v182;
                      }
                      if ( v113 != v110 + 68 )
                        free(v113);
                      v119 = (void **)v110[52];
                      if ( v119 != v110 + 54 )
                        free(v119);
                      v120 = v110 + 48;
                      v182 = v110 + 8;
                      do
                      {
                        while ( *v120 != v120 + 2 )
                        {
                          operator delete(*v120);
                          v120 -= 4;
                          if ( v120 == v182 )
                            goto LABEL_156;
                        }
                        v120 -= 4;
                      }
                      while ( v182 != v120 );
LABEL_156:
                      v40 = 928;
                      operator delete(v110, 0x3A0u);
                    }
                  }
                }
LABEL_157:
                if ( v196 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 8LL))(v196);
                sub_FC2AF0(v177);
                goto LABEL_160;
              }
            }
            v107 = v178 + 2;
            v205 = v178 + 2;
            goto LABEL_130;
          }
LABEL_160:
          v37 = (char *)ptr;
          if ( ptr != p_ptr + 3 )
            free(ptr);
          v41 += 2;
          if ( v180 == v41 )
          {
            LOWORD(v182) = v42;
            v33 = (__int64 *)v183;
            break;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 21) )
      {
        v121 = sub_227D6D0(v37, v40);
        v122 = *(__m128i **)(v121 + 32);
        if ( *(_QWORD *)(v121 + 24) - (_QWORD)v122 > 0x30u )
        {
          v172 = _mm_load_si128((const __m128i *)&xmmword_23A9C70);
          v122[3].m128i_i8[0] = 32;
          *v122 = v172;
          v122[1] = _mm_load_si128((const __m128i *)&xmmword_23A9CA0);
          v122[2] = _mm_load_si128((const __m128i *)&xmmword_23A9CB0);
          *(_QWORD *)(v121 + 32) += 49LL;
        }
        else
        {
          v121 = sub_227BF10(v121, "HIP fatbin symbol search could not find library: ", 49);
        }
        v123 = sub_227BF10(v121, v228, v229.m128i_i64[0]);
        sub_995540(v123, "\n");
      }
LABEL_49:
      if ( v228 == v176 + 3 )
      {
        v33 += 2;
        if ( v187 == v33 )
          break;
      }
      else
      {
        free(v228);
        v33 += 2;
        if ( v187 == v33 )
          break;
      }
    }
  }
  v183 = (char *)v219 + 16 * (unsigned int)v220;
  if ( v219 != v183 )
  {
    v51 = (void **)v219;
    v176 = &v228;
    v178 = &v202;
    v175 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    while ( 1 )
    {
      v52 = *v51;
      if ( v185 )
      {
        v231.m128i_i64[0] = (__int64)v51[1];
        v53 = (char *)v178;
        ptr = v52;
        v231.m128i_i64[1] = (__int64)s;
        v233 = 1285;
        v232 = v186;
        sub_2253560(v178, p_ptr);
      }
      else
      {
        v208 = v51[1];
        v53 = (char *)v178;
        src = &v205;
        v205 = "lib";
        v215 = s;
        v207 = v52;
        v209 = 1283;
        n = 0;
        v216 = v186;
        LOWORD(v217) = 1282;
        sub_2253560(v178, &src);
      }
      v54 = v203;
      v55 = (void **)v202;
      v56 = (__int64)(v176 + 3);
      v229 = _mm_load_si128(&v175);
      v228 = v176 + 3;
      if ( v203 > 0x100 )
      {
        sub_2236E10(v176, v56, v203, 1);
        v53 = (char *)v228 + v229.m128i_i64[0];
      }
      else
      {
        if ( !v203 )
          goto LABEL_57;
        v53 = (char *)(v176 + 3);
      }
      v56 = (__int64)v55;
      memcpy(v53, v55, v54);
      v55 = (void **)v202;
      v54 += v229.m128i_i64[0];
LABEL_57:
      v229.m128i_i64[0] = v54;
      if ( v55 != v178 + 2 )
      {
        v53 = (char *)v55;
        operator delete(v55);
      }
      v57 = (const void **)v222;
      v180 = (const void **)((char *)v222 + 16 * (unsigned int)v223);
      if ( v222 != v180 )
      {
        v182 = v51;
        v58 = (unsigned __int16)v181;
        v59 = (__int64 *)&src;
        v179 = &v205;
        v177 = (__int64 *)&v198;
        while ( 1 )
        {
          v60 = (size_t)v57[1];
          v61 = _mm_load_si128(&v175);
          v62 = *v57;
          ptr = p_ptr + 3;
          v231 = v61;
          if ( v60 > 0x100 )
          {
            sub_2236E10(p_ptr, p_ptr + 3, v60, 1);
            v124 = (char *)ptr + v231.m128i_i64[0];
          }
          else
          {
            if ( !v60 )
              goto LABEL_63;
            v124 = (char *)(p_ptr + 3);
          }
          memcpy(v124, v62, v60);
          v60 += v231.m128i_i64[0];
LABEL_63:
          LOWORD(v217) = 257;
          v209 = 257;
          v198 = v228;
          v204 = 257;
          v201 = 261;
          v199 = v229.m128i_i64[0];
          v231.m128i_i64[0] = v60;
          sub_228A3B0(p_ptr, v177, v178, v179, v59);
          v56 = 0;
          LOWORD(v217) = 261;
          src = ptr;
          n = v231.m128i_i64[0];
          if ( !(unsigned int)sub_228C1E0(v59, 0) )
          {
            if ( *(_BYTE *)(a1 + 21) )
            {
              v133 = sub_227D6D0(v59, 0);
              v134 = *(__m128i **)(v133 + 32);
              if ( *(_QWORD *)(v133 + 24) - (_QWORD)v134 > 0x27u )
              {
                v144 = _mm_load_si128((const __m128i *)&xmmword_23A9C70);
                v134[2].m128i_i64[0] = 0x203A797261726269LL;
                *v134 = v144;
                v134[1] = _mm_load_si128((const __m128i *)&xmmword_23A9C90);
                *(_QWORD *)(v133 + 32) += 40LL;
              }
              else
              {
                v133 = sub_227BF10(v133, "HIP fatbin symbol search found library: ", 40);
              }
              v135 = sub_227BF10(v133, ptr, v231.m128i_i64[0]);
              v136 = *(_BYTE **)(v135 + 32);
              if ( *(_BYTE **)(v135 + 24) == v136 )
              {
                sub_227BF10(v135, "\n", 1);
              }
              else
              {
                *v136 = 10;
                ++*(_QWORD *)(v135 + 32);
              }
            }
            v63 = v58;
            BYTE1(v63) = 0;
            LOWORD(v217) = 261;
            v58 = v63;
            src = ptr;
            n = v231.m128i_i64[0];
            sub_2230FD0(v177, v59, 0, 1, 0, v63);
            if ( (v200 & 1) == 0 )
            {
              LOWORD(v181) = v58;
              v51 = v182;
              sub_2230760(v59, v198);
              sub_12342A0(a1, v59, v64, v65, v66, v67);
              sub_FC2AF0(v177);
              if ( ptr != p_ptr + 3 )
                free(ptr);
              goto LABEL_68;
            }
            v188 = (unsigned int)v198 | v188 & 0xFFFFFFFF00000000LL;
            v56 = (unsigned int)v188;
            sub_2220500(&v196, (unsigned int)v188, v199);
            if ( *(_BYTE *)(a1 + 20) )
              goto LABEL_112;
            sub_FC70B0((__int64)v59, ***(_QWORD ***)a1, 0, *(_DWORD *)(a1 + 16));
            v68 = v196;
            v196 = 0;
            v197 = v68;
            sub_2221210(v178, &v197);
            v69 = (unsigned __int8 *)src;
            v70 = v202;
            v71 = v203;
            if ( !src )
            {
              v150 = n;
              v151 = *(_DWORD *)(n + 14976);
              if ( v151 )
              {
                v152 = (unsigned int)(v151 - 1);
                *(_DWORD *)(n + 14976) = v152;
                v69 = *(unsigned __int8 **)(v150 + 8 * v152 + 14848);
                v153 = *((unsigned int *)v69 + 134);
                v154 = *((_QWORD *)v69 + 66);
                *v69 = 0;
                *((_DWORD *)v69 + 106) = 0;
                v155 = v154 + (v153 << 6);
                if ( v154 != v155 )
                {
                  LOWORD(v181) = v58;
                  v156 = v71;
                  v187 = v59;
                  v157 = v57;
                  v158 = v154;
                  v189 = (unsigned __int64)p_ptr;
                  do
                  {
                    while ( 1 )
                    {
                      v155 -= 64;
                      v159 = *(void **)(v155 + 24);
                      if ( v159 == (void *)(v155 + 40) )
                        break;
                      operator delete(v159);
                      if ( v158 == v155 )
                        goto LABEL_244;
                    }
                  }
                  while ( v158 != v155 );
LABEL_244:
                  v57 = v157;
                  v71 = v156;
                  v58 = (unsigned __int16)v181;
                  v59 = v187;
                  p_ptr = (void **)v189;
                }
                *((_DWORD *)v69 + 134) = 0;
              }
              else
              {
                v187 = (__int64 *)v203;
                v181 = (void **)v202;
                v69 = (unsigned __int8 *)operator new(0x3A0u);
                *v69 = 0;
                *((_QWORD *)v69 + 12) = v69 + 112;
                *((_QWORD *)v69 + 16) = v69 + 144;
                *((_QWORD *)v69 + 20) = v69 + 176;
                *((_QWORD *)v69 + 24) = v69 + 208;
                *((_QWORD *)v69 + 28) = v69 + 240;
                *((_QWORD *)v69 + 32) = v69 + 272;
                *((_QWORD *)v69 + 36) = v69 + 304;
                *((_QWORD *)v69 + 40) = v69 + 336;
                *((_QWORD *)v69 + 44) = v69 + 368;
                *((_QWORD *)v69 + 48) = v69 + 400;
                *((_QWORD *)v69 + 52) = v69 + 432;
                *((_QWORD *)v69 + 13) = 0;
                v69[112] = 0;
                *((_QWORD *)v69 + 17) = 0;
                v69[144] = 0;
                *((_QWORD *)v69 + 21) = 0;
                v69[176] = 0;
                *((_QWORD *)v69 + 25) = 0;
                v69[208] = 0;
                *((_QWORD *)v69 + 29) = 0;
                v69[240] = 0;
                *((_QWORD *)v69 + 33) = 0;
                v69[272] = 0;
                *((_QWORD *)v69 + 37) = 0;
                v69[304] = 0;
                *((_QWORD *)v69 + 41) = 0;
                v69[336] = 0;
                *((_QWORD *)v69 + 45) = 0;
                v69[368] = 0;
                *((_QWORD *)v69 + 49) = 0;
                v69[400] = 0;
                *((_QWORD *)v69 + 53) = 0x800000000LL;
                v70 = v181;
                *((_QWORD *)v69 + 66) = v69 + 544;
                v71 = (size_t)v187;
                *((_QWORD *)v69 + 67) = 0x600000000LL;
              }
              src = v69;
            }
            v72 = v179;
            v69[*v69 + 1] = 0;
            v73 = v72 + 2;
            v205 = v72 + 2;
            sub_1232590(v72, v70, (__int64)&v70[v71]);
            v74 = src;
            v75 = *(unsigned __int8 *)src;
            *(_BYTE *)src = v75 + 1;
            v76 = (unsigned __int8)v75;
            v56 = (__int64)v205;
            v77 = 4 * (v75 + 3);
            v78 = (char *)&v74[v77];
            v79 = (_BYTE *)v74[v77];
            if ( v205 == v73 )
            {
              v148 = v206;
              if ( v206 )
              {
                if ( v206 == 1 )
                  *v79 = (_BYTE)v207;
                else
                  memcpy(v79, v205, v206);
                v148 = v206;
                v79 = *(_BYTE **)v78;
              }
              *((_QWORD *)v78 + 1) = v148;
              v79[v148] = 0;
              v79 = v205;
              goto LABEL_85;
            }
            if ( v79 == (_BYTE *)&v74[v77 + 2] )
            {
              *(_QWORD *)v78 = v205;
              *((_QWORD *)v78 + 1) = v206;
              *((_QWORD *)v78 + 2) = v207;
            }
            else
            {
              v80 = (void *)v74[4 * v76 + 14];
              *(_QWORD *)v78 = v205;
              *((_QWORD *)v78 + 1) = v206;
              *((_QWORD *)v78 + 2) = v207;
              if ( v79 )
              {
                v205 = v79;
                v207 = v80;
LABEL_85:
                v81 = v179;
                v206 = 0;
                *v79 = 0;
                if ( v205 != v81 + 2 )
                  operator delete(v205);
                if ( v202 != v178 + 2 )
                  operator delete(v202);
                if ( v197 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v197 + 8LL))(v197);
                if ( (_BYTE)v218 )
                {
                  v56 = (__int64)v59;
                  sub_FC7790((__int64)v215, v59, SHIBYTE(v218));
                  v215 = nullptr;
                  v218 = 0;
                }
                if ( v217 != v59 + 6 )
                  operator delete(v217);
                v82 = (void **)src;
                if ( src )
                {
                  v83 = n;
                  if ( n )
                  {
                    if ( (unsigned __int64)src >= n && (unsigned __int64)src <= n + 14848 )
                    {
                      v170 = *(unsigned int *)(n + 14976);
                      *(_DWORD *)(n + 14976) = v170 + 1;
                      *(_QWORD *)(v83 + 8 * v170 + 14848) = v82;
                    }
                    else
                    {
                      v84 = *((void ***)src + 66);
                      v85 = &v84[8 * (unsigned __int64)*((unsigned int *)src + 134)];
                      if ( v84 != v85 )
                      {
                        v181 = p_ptr;
                        v86 = v59;
                        v87 = v57;
                        v88 = v84;
                        do
                        {
                          while ( 1 )
                          {
                            v85 -= 8;
                            v89 = (void **)v85[3];
                            if ( v89 == v85 + 5 )
                              break;
                            operator delete(v89);
                            if ( v88 == v85 )
                              goto LABEL_103;
                          }
                        }
                        while ( v88 != v85 );
LABEL_103:
                        v57 = v87;
                        v85 = (void **)v82[66];
                        v59 = v86;
                        p_ptr = v181;
                      }
                      if ( v85 != v82 + 68 )
                        free(v85);
                      v90 = (void **)v82[52];
                      v91 = v82 + 52;
                      if ( v90 != v82 + 54 )
                        free(v90);
                      v181 = v82 + 12;
                      do
                      {
                        while ( 1 )
                        {
                          v91 -= 4;
                          if ( *v91 == v91 + 2 )
                            break;
                          operator delete(*v91);
                          if ( v91 == v181 )
                            goto LABEL_111;
                        }
                      }
                      while ( v91 != v181 );
LABEL_111:
                      v56 = 928;
                      operator delete(v82, 0x3A0u);
                    }
                  }
                }
LABEL_112:
                if ( v196 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 8LL))(v196);
                sub_FC2AF0(v177);
                goto LABEL_115;
              }
            }
            v79 = v179 + 2;
            v205 = v179 + 2;
            goto LABEL_85;
          }
LABEL_115:
          v53 = (char *)ptr;
          if ( ptr != p_ptr + 3 )
            free(ptr);
          v57 += 2;
          if ( v180 == v57 )
          {
            LOWORD(v181) = v58;
            v51 = v182;
            break;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 21) )
      {
        v92 = sub_227D6D0(v53, v56);
        v93 = *(__m128i **)(v92 + 32);
        if ( *(_QWORD *)(v92 + 24) - (_QWORD)v93 > 0x30u )
        {
          v173 = _mm_load_si128((const __m128i *)&xmmword_23A9C70);
          v93[3].m128i_i8[0] = 32;
          *v93 = v173;
          v93[1] = _mm_load_si128((const __m128i *)&xmmword_23A9CA0);
          v93[2] = _mm_load_si128((const __m128i *)&xmmword_23A9CB0);
          *(_QWORD *)(v92 + 32) += 49LL;
        }
        else
        {
          v92 = sub_227BF10(v92, "HIP fatbin symbol search could not find library: ", 49);
        }
        v94 = sub_227BF10(v92, v228, v229.m128i_i64[0]);
        v95 = *(_BYTE **)(v94 + 32);
        if ( *(_BYTE **)(v94 + 24) == v95 )
        {
          sub_227BF10(v94, "\n", 1);
        }
        else
        {
          *v95 = 10;
          ++*(_QWORD *)(v94 + 32);
        }
      }
LABEL_68:
      if ( v228 == v176 + 3 )
      {
        v51 += 2;
        if ( v183 == (char *)v51 )
          break;
      }
      else
      {
        free(v228);
        v51 += 2;
        if ( v183 == (char *)v51 )
          break;
      }
    }
  }
  if ( v210[0] != v193 + 2 )
    operator delete(v210[0]);
  if ( v225 != v192 + 2 )
    free(v225);
  if ( v222 != v191 + 2 )
    free(v222);
  if ( v219 != v190 + 2 )
    free(v219);
}
