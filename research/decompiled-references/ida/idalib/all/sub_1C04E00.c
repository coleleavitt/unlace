unsigned __int16 *__fastcall sub_1C04E00(
        __int64 a1,
        __int64 a2,
        void **a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        __int64 a10,
        int a11,
        char a12)
{
  __int64 v14; // rdx
  unsigned int *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  unsigned __int16 v19; // ax
  __m128 v20; // xmm0
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  void **p_ptr; // r14
  __int64 *v24; // r12
  unsigned __int64 *v25; // rbp
  __int64 v26; // r12
  __m128 v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rsi
  unsigned __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int64 v38; // r14
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int16 *v47; // r12
  unsigned int v48; // eax
  __int16 v49; // ax
  int v50; // eax
  bool v51; // al
  __int64 *v52; // rax
  __int64 *v53; // rcx
  __int64 *v54; // rbp
  __int64 v55; // r12
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // r14
  _QWORD *v58; // r13
  unsigned __int8 v59; // al
  int v60; // edx
  __int64 v61; // rdx
  __int16 v62; // ax
  __int64 v63; // r8
  unsigned __int64 v64; // rdi
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rbp
  char *v70; // rax
  unsigned int v71; // r13d
  char *v72; // rsi
  __int64 v73; // rcx
  _QWORD *v74; // rdx
  unsigned int v75; // edx
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // rbp
  __int64 v83; // rax
  __int64 *v84; // rax
  void **v85; // rsi
  __int64 v86; // r12
  __int32 v87; // eax
  __int64 v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 *v91; // rax
  __int64 v92; // r13
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // r14d
  __int64 v96; // r13
  _BYTE *v97; // rax
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 *v102; // rbp
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rdx
  void **v106; // rsi
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // r9
  __int64 v110; // r9
  __int64 *v111; // rbx
  unsigned int v112; // edx
  __int64 v113; // rax
  _BYTE *v114; // r15
  __int64 *v115; // rsi
  _BYTE *v116; // rbx
  __int64 v117; // r15
  __int64 v118; // rax
  __int64 v119; // rdx
  unsigned __int64 v120; // r13
  __int64 v121; // rax
  unsigned __int64 v122; // r13
  __int64 v123; // rax
  __int64 v124; // rsi
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  unsigned __int64 v129; // rax
  char v130; // al
  __int8 v131; // al
  int v132; // eax
  __int8 v133; // dl
  __int64 v134; // r15
  unsigned __int64 v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rax
  _QWORD *v138; // r13
  unsigned __int8 v139; // al
  bool v140; // bp
  unsigned int v141; // r15d
  unsigned int v142; // eax
  __int64 v143; // rax
  unsigned __int64 v144; // rdx
  unsigned __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // rbp
  unsigned __int16 *v148; // rax
  __int64 v149; // rax
  __int64 v150; // r13
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // r13
  __int64 v156; // rax
  _QWORD *v157; // rax
  unsigned int v158; // eax
  _BYTE *v159; // rax
  __int64 v160; // rax
  __int64 *v161; // rax
  unsigned int v162; // eax
  unsigned int v163; // eax
  __int64 v164; // rax
  __int128 v165; // [rsp-40h] [rbp-21D8h]
  __m128i v166; // [rsp+8h] [rbp-2190h] BYREF
  size_t v167; // [rsp+18h] [rbp-2180h]
  __int64 *v168; // [rsp+20h] [rbp-2178h]
  __int64 v169; // [rsp+28h] [rbp-2170h]
  unsigned __int8 (__fastcall *v170)(__int64, __int64); // [rsp+30h] [rbp-2168h]
  bool *v171; // [rsp+38h] [rbp-2160h]
  unsigned __int64 *v172; // [rsp+40h] [rbp-2158h]
  unsigned __int64 v173; // [rsp+48h] [rbp-2150h]
  __int64 v174; // [rsp+50h] [rbp-2148h]
  __int64 v175; // [rsp+58h] [rbp-2140h]
  unsigned int v176; // [rsp+60h] [rbp-2138h]
  int v177; // [rsp+64h] [rbp-2134h]
  void **p_s; // [rsp+68h] [rbp-2130h]
  unsigned __int64 *v179; // [rsp+70h] [rbp-2128h]
  unsigned __int64 v180; // [rsp+78h] [rbp-2120h]
  __int64 v181; // [rsp+80h] [rbp-2118h]
  __int64 v182; // [rsp+88h] [rbp-2110h]
  __int64 v183; // [rsp+90h] [rbp-2108h]
  void **v184; // [rsp+98h] [rbp-2100h]
  unsigned __int64 *v185; // [rsp+A0h] [rbp-20F8h] BYREF
  unsigned __int64 v186; // [rsp+A8h] [rbp-20F0h]
  unsigned int v187; // [rsp+B0h] [rbp-20E8h]
  char v188; // [rsp+B4h] [rbp-20E4h]
  void **v189[2]; // [rsp+B8h] [rbp-20E0h] BYREF
  bool v190; // [rsp+CFh] [rbp-20C9h] BYREF
  __int64 v191; // [rsp+D0h] [rbp-20C8h]
  __int64 *v192; // [rsp+D8h] [rbp-20C0h] BYREF
  _BYTE *v193; // [rsp+E0h] [rbp-20B8h] BYREF
  unsigned __int64 v194; // [rsp+E8h] [rbp-20B0h]
  __m128i v195; // [rsp+100h] [rbp-2098h] BYREF
  unsigned __int64 v196; // [rsp+110h] [rbp-2088h]
  __m128 v197; // [rsp+120h] [rbp-2078h] BYREF
  __m128i v198; // [rsp+130h] [rbp-2068h]
  __int64 v199; // [rsp+140h] [rbp-2058h]
  void *ptr; // [rsp+150h] [rbp-2048h] BYREF
  __int64 v201; // [rsp+158h] [rbp-2040h]
  __int64 v202; // [rsp+160h] [rbp-2038h] BYREF
  void *s; // [rsp+180h] [rbp-2018h] BYREF
  size_t n; // [rsp+188h] [rbp-2010h]
  char v205; // [rsp+190h] [rbp-2008h] BYREF
  __int64 v206; // [rsp+290h] [rbp-1F08h]
  __int64 *v207; // [rsp+2A0h] [rbp-1EF8h] BYREF
  __int64 v208; // [rsp+2A8h] [rbp-1EF0h]
  __int64 v209; // [rsp+2B0h] [rbp-1EE8h] BYREF
  char v210; // [rsp+318h] [rbp-1E80h]
  unsigned int v211; // [rsp+320h] [rbp-1E78h]
  char v212; // [rsp+324h] [rbp-1E74h]
  char *v213; // [rsp+D30h] [rbp-1468h]
  __int64 v214; // [rsp+D38h] [rbp-1460h]
  int v215; // [rsp+D40h] [rbp-1458h]
  char v216; // [rsp+D44h] [rbp-1454h]
  char v217; // [rsp+D48h] [rbp-1450h] BYREF
  __int64 v218; // [rsp+DC8h] [rbp-13D0h]
  int v219; // [rsp+DD0h] [rbp-13C8h]
  __int64 v220; // [rsp+DD8h] [rbp-13C0h]
  __int64 v221; // [rsp+DE0h] [rbp-13B8h]
  char *v222; // [rsp+DE8h] [rbp-13B0h]
  __int64 v223; // [rsp+DF0h] [rbp-13A8h]
  char v224; // [rsp+DF8h] [rbp-13A0h] BYREF
  _QWORD *v225; // [rsp+E18h] [rbp-1380h]
  __int64 v226; // [rsp+E20h] [rbp-1378h]
  _QWORD v227[2]; // [rsp+E28h] [rbp-1370h] BYREF
  int v228; // [rsp+E38h] [rbp-1360h]
  int v229; // [rsp+E3Ch] [rbp-135Ch]
  __int64 v230; // [rsp+E40h] [rbp-1358h]
  char v231; // [rsp+E48h] [rbp-1350h]
  int v232; // [rsp+E4Ch] [rbp-134Ch]
  int v233; // [rsp+2150h] [rbp-48h]

  v189[0] = a3;
  v176 = a4;
  v177 = a11;
  v185 = a5;
  v186 = a6;
  v188 = a12;
  v18 = sub_BFB9F0((__int64)a3);
  v19 = *(_WORD *)v18 & 0x1FF;
  if ( v19 <= 0x75u )
  {
    v199 = a1;
    v166.m128i_i64[0] = (__int64)v189;
    v166.m128i_i64[1] = (__int64)&v185;
    v15 = &a9;
    v28 = _mm_loadh_ps((const double *)v166.m128i_i64);
    v166.m128i_i64[0] = (__int64)&a9;
    a8 = (__m128)_mm_loadl_epi64(&v166);
    v197 = v28;
    v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]), (__m128i)a8);
    v198 = v22;
    if ( v19 != 102 )
    {
LABEL_4:
      p_ptr = &ptr;
      v24 = (__int64 *)v185;
      ptr = &v202;
      v201 = 0x200000000LL;
      if ( (_DWORD)v186 )
      {
        v25 = &v185[(unsigned int)(v186 - 1) + 1];
        while ( !(unsigned __int8)sub_1BC6C10(a1, v24, (__int64)&ptr, v22, a8, (__int64)v15, v16, v17) )
        {
          if ( ++v24 == (__int64 *)v25 )
            goto LABEL_30;
        }
        v26 = 1;
        goto LABEL_9;
      }
LABEL_30:
      v207 = nullptr;
      v49 = *(_WORD *)v18;
      v191 = 0;
      if ( (v49 & 0x1FF) == 0x2E )
      {
        v81 = *(_QWORD *)v18;
        v82 = *(_QWORD *)(v18 + 24);
        if ( (*(_QWORD *)v18 & 0x200000LL) != 0 )
        {
          v83 = *(_QWORD *)(v18 + 16LL * ((*(_QWORD *)v18 & 0x100000LL) != 0) + 48);
        }
        else
        {
          v83 = v82 | (*(_BYTE *)(v82 + 29) >> 5) & 3;
          v207 = (__int64 *)v83;
        }
        v191 = v83;
        v183 = 0;
        if ( (v81 & 0x100000) != 0 )
          v183 = *(_QWORD *)(v18 + 48);
        v84 = (__int64 *)ptr;
        v85 = (void **)((char *)ptr + 16 * (unsigned int)v201);
        if ( ptr != v85 )
        {
          do
          {
            v15 = (unsigned int *)v84[1];
            v81 = *v84;
            v84 += 2;
            *(_QWORD *)v81 = v15;
          }
          while ( v85 != (void **)v84 );
        }
        LOBYTE(v169) = 0;
        v86 = v18;
        p_s = &s;
        v168 = (__int64 *)&v192;
      }
      else
      {
        v183 = *(_QWORD *)(v18 + 40);
        v169 = *(_QWORD *)(v18 + 64);
        if ( (*(_DWORD *)v18 & 0x100000) != 0 )
          v187 = (unsigned int)&stru_10000;
        else
          v187 = sub_C0EB40(*(_QWORD *)(v18 + 56), *(_QWORD *)(a1 + 248), nullptr, (__int64)v15, v16);
        v50 = *(_DWORD *)(v18 + 24);
        v207 = &v209;
        v228 = v50;
        v213 = &v217;
        p_s = &s;
        v208 = 0x1000000000LL;
        v222 = &v224;
        s = &v205;
        v166.m128i_i64[0] = (__int64)&v207;
        v214 = 16;
        v215 = 0;
        v216 = 1;
        v218 = 0;
        v219 = 0;
        v220 = 0;
        v221 = 0;
        v223 = 0x400000000LL;
        v225 = v227;
        v226 = 0;
        v227[0] = 0;
        v227[1] = 1;
        v229 = 0;
        v230 = 0;
        v231 = 0;
        v232 = 0;
        v233 = 0;
        n = 0x800000000LL;
        v206 = 0;
        v51 = sub_18C0AE0(v18);
        v170 = nullptr;
        if ( v51 )
        {
          v102 = (__int64 *)p_s;
          sub_1BCD380(v18, (__int64)p_s);
          v170 = (unsigned __int8 (__fastcall *)(__int64, __int64))v102;
        }
        v52 = (__int64 *)(v18 + 80);
        if ( (*(_WORD *)v18 & 0x1FF) == 0x18 )
          v52 = (__int64 *)(v18 + 64);
        v53 = &v52[*(unsigned int *)(v18 + 4)];
        v168 = v53;
        if ( v53 != v52 )
        {
          v54 = v52;
          v184 = &ptr;
          while ( 1 )
          {
            v55 = v169;
            v56 = *v52 & 0xFFFFFFFFFFFFFFF8LL;
            v57 = v56;
            v58 = (_QWORD *)(*(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v56 + 16) & 4) != 0 )
              v58 = (_QWORD *)*v58;
            if ( v58 )
              v58 -= 8;
            v59 = *(_BYTE *)(v56 + 28) & 0x7F;
            v60 = v59;
            if ( (unsigned int)v59 - 53 <= 1 )
            {
              v57 = *(_QWORD *)(v56 + 64);
              v59 = *(_BYTE *)(v57 + 28) & 0x7F;
              v60 = v59;
            }
            v61 = (unsigned int)(v60 - 34);
            if ( (unsigned int)v61 <= 5 )
            {
              if ( (unsigned __int8)sub_B771C0(v57, v56, v61, (__int64)v53) )
                break;
              v59 = *(_BYTE *)(v57 + 28) & 0x7F;
            }
            if ( v59 != 71 )
              goto LABEL_67;
            if ( (unsigned __int8)sub_B771C0(*(_QWORD *)(v57 + 48), v56, v61, (__int64)v53) )
              break;
LABEL_66:
            v59 = *(_BYTE *)(v57 + 28) & 0x7F;
LABEL_67:
            if ( **(char **)(a1 + 232) < 0 && v59 == 38 )
            {
              ++v54;
              v181 = 0;
              v182 = 0;
              sub_1BF10B0(
                (_QWORD *)a1,
                v57,
                *(v54 - 1),
                v185,
                v186,
                (unsigned int *)v166.m128i_i64[0],
                (__m128)v22,
                a8,
                0,
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0,
                0);
              v52 = v54;
              if ( v168 == v54 )
                goto LABEL_70;
            }
            else
            {
              if ( (unsigned int)v59 - 35 > 3 )
              {
                v179 = v185;
                v180 = v186;
                *((_QWORD *)&v165 + 1) = v185;
                *(_QWORD *)&v165 = v187;
                sub_1BF0A40(
                  a1,
                  (_QWORD *)v57,
                  *v54,
                  (__int64)v58,
                  (__int64)v170,
                  v55,
                  *(double *)v22.m128i_i64,
                  a8,
                  v165,
                  v186,
                  v166.m128i_i64[0],
                  0,
                  0,
                  0);
              }
              else if ( !v170 )
              {
                v174 = 0;
                v175 = 0;
                v172 = v185;
                v173 = v186;
                sub_1BEF9D0(
                  a1,
                  v57,
                  *v54,
                  (__int64)v58,
                  v55,
                  v187,
                  (__m128)v22,
                  a8,
                  (__int64)v185,
                  v186,
                  (unsigned int *)v166.m128i_i64[0],
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              v52 = ++v54;
              if ( v168 == v54 )
              {
LABEL_70:
                p_ptr = v184;
                goto LABEL_71;
              }
            }
          }
          v62 = *(_WORD *)v18 & 0x1FF;
          if ( v62 == 23 )
          {
            if ( !(unsigned __int8)sub_C95850(v18) )
            {
              v65 = *(_QWORD *)(v18 + 56);
              goto LABEL_61;
            }
            v62 = *(_WORD *)v18 & 0x1FF;
          }
          if ( v62 != 46 )
            goto LABEL_110;
          v64 = *(_QWORD *)(v18 + 16);
          if ( !v64 || (unsigned __int8)sub_BFE300(v64) )
            goto LABEL_110;
          v65 = *(_QWORD *)(v18 + 16);
LABEL_61:
          if ( v65 )
          {
            v66 = *(_QWORD *)(v65 + 8);
LABEL_63:
            v67 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
            v68 = *(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v68 + 16) == 42 )
              v66 = sub_F68450(v67, v56, v68, (__int64)v53, v63);
            v55 = v66;
            goto LABEL_66;
          }
LABEL_110:
          v66 = sub_19A27D0(a1);
          goto LABEL_63;
        }
LABEL_71:
        v69 = *(_QWORD *)(v18 + 16);
        LODWORD(v169) = v208;
        v70 = (char *)ptr;
        v71 = v219 & 0x3FFFFFFF;
        v72 = (char *)ptr + 16 * (unsigned int)v201;
        if ( ptr != v72 )
        {
          do
          {
            v73 = *((_QWORD *)v70 + 1);
            v74 = *(_QWORD **)v70;
            v70 += 16;
            *v74 = v73;
          }
          while ( v72 != v70 );
        }
        if ( (unsigned __int8)sub_C95850(v18) )
        {
          v101 = *(_QWORD *)(v18 + 40);
          v195 = _mm_loadu_si128((const __m128i *)(v18 + 40));
          if ( v101 )
            v75 = sub_BF6BF0(&v195);
          else
            v75 = *(_DWORD *)(v18 + 24);
        }
        else
        {
          v75 = sub_EEB7E0(*(_QWORD *)(v18 + 56), (__int64)v72, *(double *)v22.m128i_i64);
        }
        v168 = (__int64 *)&v192;
        v76 = sub_1BF27B0(v166.m128i_i64[0], (_QWORD *)a1, v75, &v192, *(double *)v22.m128i_i64, a8);
        if ( v76 == 1 )
        {
          v167 = 0;
          v170 = (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620;
          v171 = &v190;
          v166.m128i_i64[1] = (__int64)&byte_22F0C30;
          v167 = j__strlen(&byte_22F0C30);
          v120 = v186;
          v169 = (__int64)v185;
          sub_168B9B0((__int64)&v193, a1 + 8, 4765);
          sub_AE9DF0(&v193, v69, 9u);
          v121 = sub_EEC8C0((unsigned __int64)v189[0], v69, *(double *)v22.m128i_i64);
          v195.m128i_i8[8] = 1;
          v195.m128i_i64[0] = v121;
          sub_AEC610((__int64 *)&v193, v195.m128i_i64);
          v195.m128i_i32[0] = *(_DWORD *)(v18 + 24);
          sub_1582CA0((__int64)&v195.m128i_i64[1], &v193);
          sub_1C022A0(
            v166.m128i_i64[0],
            (unsigned int *)&v195,
            (__m128 *)a1,
            0,
            v169,
            v120,
            (__m128)v22,
            a8,
            (_BYTE *)v166.m128i_i64[1],
            v167,
            0,
            v170,
            (__int64)v171);
          goto LABEL_139;
        }
        if ( v76 )
        {
          if ( v76 != 2 )
          {
            if ( v76 == 3 )
            {
              v78 = *v192;
              v79 = sub_EEC8C0((unsigned __int64)v189[0], a1, *(double *)v22.m128i_i64);
              sub_1C026E0(
                (__m128 *)a1,
                *(_DWORD *)(v18 + 24),
                v79,
                v69,
                v166.m128i_i64[0],
                v78,
                (__m128)v22,
                a8,
                (__int64)v185,
                v186,
                1u);
            }
            goto LABEL_80;
          }
          v167 = 0;
          v170 = (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620;
          v171 = &v190;
          v166.m128i_i64[1] = (__int64)&byte_22F0C30;
          v167 = j__strlen(&byte_22F0C30);
          v122 = v186;
          v169 = (__int64)v185;
          sub_168B9B0((__int64)&v193, a1 + 8, 4745);
          sub_AE9DF0(&v193, v69, 9u);
          v123 = sub_EEC8C0((unsigned __int64)v189[0], v69, *(double *)v22.m128i_i64);
          v195.m128i_i8[8] = 1;
          v195.m128i_i64[0] = v123;
          sub_AEC610((__int64 *)&v193, v195.m128i_i64);
          v195.m128i_i32[0] = *(_DWORD *)(v18 + 24);
          sub_1582CA0((__int64)&v195.m128i_i64[1], &v193);
          sub_1C022A0(
            v166.m128i_i64[0],
            (unsigned int *)&v195,
            (__m128 *)a1,
            2,
            v169,
            v122,
            (__m128)v22,
            a8,
            (_BYTE *)v166.m128i_i64[1],
            v167,
            0,
            v170,
            (__int64)v171);
LABEL_139:
          if ( v195.m128i_i64[1] && v196 )
            sub_1580C40(v196, v195.m128i_u64[1]);
          if ( v193 && v194 )
            sub_1580C40(v194, (unsigned __int64)v193);
          goto LABEL_80;
        }
        v82 = *v192;
        v191 = v192[1];
        sub_165F300((_QWORD *)a1, v18, v191, v77, *(double *)v22.m128i_i64);
        v124 = v192[1];
        v195.m128i_i32[0] = *(_DWORD *)(v18 + 24);
        if ( (unsigned __int8)sub_18F5260(
                                a1,
                                v124 & 0xFFFFFFFFFFFFFFF8LL,
                                v195.m128i_i32,
                                1u,
                                0,
                                0,
                                v22,
                                *(double *)a8.m128_u64,
                                0,
                                0,
                                1)
          || v82 != (v191 & 0xFFFFFFFFFFFFFFF8LL)
          && (v195.m128i_i32[0] = *(_DWORD *)(v18 + 24),
              (unsigned __int8)sub_18F5260(a1, v82, v195.m128i_i32, 1u, 0, 0, v22, *(double *)a8.m128_u64, 0, 0, 1)) )
        {
LABEL_80:
          v80 = sub_1BCC960(v166.m128i_i64[0], v168);
          v26 = sub_1BD9190((__int64)&v197, v80);
LABEL_81:
          if ( s != p_s + 2 )
            free(s);
          sub_17A20D0(v166.m128i_i64[0]);
LABEL_9:
          if ( ptr != p_ptr + 2 )
            free(ptr);
          return (unsigned __int16 *)v26;
        }
        v26 = 1;
        v85 = v189[0];
        v125 = sub_1BD6F50(a1, v189[0], v191, v82, (__m128)v22, a8);
        if ( v125 == 1 )
          goto LABEL_81;
        v189[0] = (void **)(v125 & 0xFFFFFFFFFFFFFFFELL);
        if ( sub_B979F0((_QWORD *)v82) )
        {
          v26 = sub_192ED50(a1, (unsigned __int64)v189[0], v82, v176, v185, v186, (__m128)v22, a8, a9, a10, v177, 0);
          goto LABEL_81;
        }
        v86 = sub_BFB9F0((__int64)v189[0]);
        if ( s != p_s + 2 )
          free(s);
        LOBYTE(v169) = v71 + (unsigned __int64)(unsigned int)v169 > 1;
        sub_17A20D0(v166.m128i_i64[0]);
      }
      v192 = (__int64 *)sub_C1D490(v82, (__int64)v85, v81, (__int64)v15);
      v87 = sub_18C0240((__int64)v192, (__int64)v85);
      v88 = *(_QWORD *)(a1 + 248);
      v166.m128i_i32[0] = v87;
      v192 = (__int64 *)sub_F67970(v168, v88);
      v91 = (__int64 *)(*(_QWORD *)(v82 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v92 = *v91;
      if ( *(_BYTE *)(*v91 + 16) != 26 )
        v92 = sub_F63050(*v91, v88, v89, v90);
      n = 0x800000000LL;
      s = p_s + 2;
      if ( (unsigned __int8)sub_B981D0((_QWORD *)v82, 0x800000000LL) )
      {
        if ( (unsigned __int8)sub_1BC8860(
                                a1,
                                v82,
                                *(_QWORD *)(v86 + 16),
                                (const void **)v166.m128i_i64[1],
                                (__int64)p_s,
                                *(double *)v22.m128i_i64) )
          goto LABEL_104;
        v207 = nullptr;
        v126 = sub_1BC7390(
                 (__m128 *)a1,
                 v82,
                 v191 & 0xFFFFFFFFFFFFFFF8LL,
                 v86,
                 v169 & 1,
                 *(_DWORD *)(v86 + 40),
                 (__m128)v22,
                 a8,
                 &v207);
        if ( v126 == 1 )
          goto LABEL_104;
        v127 = *(unsigned int *)(a1 + 1952);
        v128 = *(unsigned int *)(a1 + 1956);
        if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v128, v127) )
        {
          v128 = 0;
          v127 = 0;
        }
        v129 = sub_C0BFD0(
                 *(_QWORD **)(a1 + 248),
                 v126 & 0xFFFFFFFFFFFFFFFELL,
                 v185,
                 v186,
                 (__int64)v192,
                 v166.m128i_u32[0],
                 a9,
                 (v128 << 32) | v127,
                 *(unsigned __int16 *)(v92 + 22),
                 0);
        v166.m128i_i64[0] = v129;
        v106 = (void **)v129;
        *(_BYTE *)(v129 + 2) |= 0x80u;
        v130 = *(_BYTE *)(v129 + 3);
        if ( (v130 & 1) != 0 )
        {
          v131 = v130 & 0xFE;
          v166.m128i_i64[0] = (__int64)v106;
          *((_BYTE *)v106 + 3) = v131;
          v166.m128i_i8[8] = v131;
          v132 = sub_BF6D70((__int64)v106);
          v106 = (void **)v166.m128i_i64[0];
          v133 = v166.m128i_i8[8];
          *(_DWORD *)(v166.m128i_i64[0] + 24) = v132;
          *((_BYTE *)v106 + 3) = v133 | 1;
        }
      }
      else
      {
        v103 = sub_1BF87F0(a1, *(_QWORD *)(v86 + 16), v183, v191 & 0xFFFFFFFFFFFFFFF8LL, v82, (__m128)v22, a8);
        if ( v103 == 1 )
          goto LABEL_104;
        *(_QWORD *)(v86 + 16) = v103 & 0xFFFFFFFFFFFFFFFELL;
        v104 = *(unsigned int *)(a1 + 1952);
        if ( *(_QWORD *)(a1 + 1944) == *(_QWORD *)(a1 + 1952) )
        {
          v105 = 0;
          v104 = 0;
        }
        else
        {
          v105 = *(unsigned int *)(a1 + 1956);
        }
        v106 = v189[0];
        v166.m128i_i64[0] = sub_C99A50(
                              *(_QWORD **)(a1 + 248),
                              (__int64)v189[0],
                              v185,
                              v186,
                              (__int64)v192,
                              v166.m128i_u32[0],
                              a9,
                              (v105 << 32) | v104,
                              *(unsigned __int16 *)(v92 + 22));
      }
      v166.m128i_i32[2] = *(_DWORD *)(v86 + 40);
      v108 = sub_C1D490(v82, (__int64)v106, v166.m128i_u32[2], v107);
      if ( (unsigned __int8)sub_18C4140(a1, v108, v166.m128i_u32[2], v166.m128i_i64[0], v82)
        || (unsigned __int8)sub_192D780(a1, v166.m128i_i32[0], (__int64)v185, v186, 0) )
      {
        v26 = sub_1BD9190((__int64)&v197, (__int64)v192);
LABEL_105:
        if ( s != p_s + 2 )
          free(s);
        goto LABEL_9;
      }
      sub_18CE000((__int64 *)a1, v82, v176, (__int64)v185, v186, v109, v22, *(double *)a8.m128_u64);
      if ( !(unsigned __int8)sub_16F8E60((__int64 *)a1, v82, v166.m128i_u64[0], v92, v22, *(double *)a8.m128_u64) )
      {
        if ( (*(_WORD *)v18 & 0x1FF) != 0x2E
          || (v166.m128i_i64[1] = sub_1BCB950(a1, v82, v176, (__int64)v185, v186, v110, (__m128)v22, a8)) == 0 )
        {
          v134 = v166.m128i_i64[0];
          v135 = *(_QWORD *)(v166.m128i_i64[0] + 32);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) & 0x7D) == 0x24 )
          {
            v136 = sub_BFBC70(v135);
            if ( !v136 || (*(_BYTE *)(v136 + 28) & 0x7Fu) - 34 > 5 )
              BUG();
            v135 = *(_QWORD *)(v134 + 32);
            if ( (*(_BYTE *)(v136 + 82) & 8) != 0 )
            {
              v149 = sub_BFBC70(v135);
              v150 = v149;
              if ( v149 && (*(_BYTE *)(v149 + 28) & 0x7Fu) - 34 >= 6 )
                v150 = 0;
              if ( (*(_WORD *)sub_BFD550(*(_QWORD *)(v86 + 16)) & 0x1FF) == 0x62
                && ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 12LL) & 0x10) != 0 || (*(_QWORD *)v86 & 0x100000LL) == 0) )
              {
                v158 = sub_BFE3C0(v86);
                v166.m128i_i64[1] = a1 + 8;
                sub_168B9F0((__int64)&v207, (__int64 *)(a1 + 8), v158, 0x19F5u, 0);
                v159 = *(_BYTE **)(v150 + 40);
                v170 = (unsigned __int8 (__fastcall *)(__int64, __int64))&v193;
                v193 = v159;
                v160 = sub_15894B0((__int64)&v207, (__int64 *)&v193);
                v190 = (*(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) & 0x7F) == 36;
                v161 = (__int64 *)sub_1588420(v160, (unsigned __int8 *)&v190);
                v169 = v150 + 72;
                v168 = v161;
                v195.m128i_i64[0] = sub_B72690(v150 + 72);
                sub_1BDBA30((__int64)v168, v195.m128i_i64);
                sub_15F7200(&v207);
                v162 = sub_B73090(v150);
                sub_168B9F0((__int64)&v207, (__int64 *)v166.m128i_i64[1], v162, 0x188Bu, 0);
                v195.m128i_i64[0] = *(_QWORD *)(v150 + 40);
                sub_15894B0((__int64)&v207, v195.m128i_i64);
                sub_15F7200(&v207);
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 12LL) & 0x10) != 0 )
                {
                  v163 = sub_BFE3C0(v86);
                  sub_168B9F0((__int64)&v207, (__int64 *)v166.m128i_i64[1], v163, 0x18BBu, 0);
                  v193 = (_BYTE *)sub_B72690(v169);
                  v164 = sub_1BDBA30((__int64)&v207, (__int64 *)v170);
                  v195.m128i_i64[0] = *(_QWORD *)(v150 + 40);
                  sub_15894B0(v164, v195.m128i_i64);
                  sub_15F7200(&v207);
                }
              }
              v135 = *(_QWORD *)(v166.m128i_i64[0] + 32);
            }
          }
          v137 = sub_BFBC70(v135);
          v138 = (_QWORD *)v137;
          if ( !v137 || (v139 = *(_BYTE *)(v137 + 28) & 0x7F, (unsigned int)v139 - 34 > 5) )
            BUG();
          if ( v139 == 36 )
          {
            v140 = 1;
            if ( (*(_QWORD *)v86 & 0x100000LL) != 0 )
              v140 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 12LL) & 0x10) != 0;
            v141 = *(_DWORD *)(v86 + 40);
            v142 = sub_BFE3C0(v86);
            sub_19A93E0(a1, v138, v142, 0, v140, 1, v141);
          }
          v143 = sub_BFBC70(*(_QWORD *)(v166.m128i_i64[0] + 32));
          v147 = v143;
          if ( v143 && (*(_BYTE *)(v143 + 28) & 0x7Fu) - 34 >= 6 )
            v147 = 0;
          v148 = sub_19A3E40(a1, (unsigned __int16 *)v166.m128i_i64[0], v144, v145, v146, (__m128)v22, a8);
          v26 = sub_18C3A50(a1, (unsigned __int64)v148, v147);
          goto LABEL_105;
        }
        v111 = (__int64 *)(a1 + 8);
        v112 = *(_DWORD *)(v18 + 40);
        v166.m128i_i64[0] = (__int64)&v207;
        sub_168B9F0((__int64)&v207, v111, v112, 0x129Du, 0);
        if ( v210 )
        {
          sub_AE9DF0((unsigned __int8 **)(v166.m128i_i64[0] + 32), v82, 0xAu);
        }
        else if ( v212 )
        {
          v155 = sub_168B9E0(v166.m128i_i64[0]);
          v156 = v209;
          if ( v209 )
            v156 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v209 + 32LL))(v209);
          v195.m128i_i64[0] = v156;
          v157 = sub_1587BC0(v155, v195.m128i_i64, v151, v152, v153, v154);
          sub_AE9DF0((unsigned __int8 **)(*v157 + 32LL * v211 + 8), v82, 0xAu);
        }
        v113 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v82 + 16LL))(v82);
        v114 = (_BYTE *)v166.m128i_i64[0];
        v195.m128i_i64[0] = v113;
        sub_1587DB0(v166.m128i_i64[0], v195.m128i_i64);
        sub_15F7200(v114);
        v115 = v111;
        v116 = v114;
        sub_168B9F0((__int64)v114, v115, *(_DWORD *)(v82 + 24), 0x1859u, 0);
        v117 = v166.m128i_i64[1];
        v193 = (_BYTE *)sub_EEC8C0(*(_QWORD *)(v166.m128i_i64[1] + 40), (__int64)v115, *(double *)v22.m128i_i64);
        v118 = sub_1587DB0((__int64)v116, (__int64 *)&v193);
        v119 = *(unsigned int *)(v117 + 48);
        v195.m128i_i64[0] = *(_QWORD *)(v117 + 56);
        v195.m128i_i64[1] = v119;
        sub_166BAF0(v118, (__int64)&v195);
        sub_15F7200(v116);
      }
LABEL_104:
      v26 = 1;
      goto LABEL_105;
    }
    v29 = *(unsigned int *)(a1 + 1952);
    v30 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v30, v29) )
    {
      v30 = 0;
      v29 = 0;
    }
    return (unsigned __int16 *)sub_C0BFD0(
                                 *(_QWORD **)(a1 + 248),
                                 (__int64)a3,
                                 v185,
                                 v186,
                                 *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL),
                                 0,
                                 a9,
                                 (v30 << 32) | v29,
                                 0,
                                 0);
  }
  else
  {
    if ( v19 > 0x77u )
    {
      v199 = a1;
      v166.m128i_i64[0] = (__int64)v189;
      v166.m128i_i64[1] = (__int64)&v185;
      v20 = _mm_loadh_ps((const double *)v166.m128i_i64);
      v166.m128i_i64[0] = (__int64)&a9;
      v21 = _mm_loadl_epi64(&v166);
      v197 = v20;
      v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v166.m128i_u64[1]), v21);
      v198 = v22;
      goto LABEL_4;
    }
    v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) != 33 )
      v31 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v14, v15);
    v195.m128i_i64[0] = *(_QWORD *)(v31 + 32);
    v32 = *(_QWORD *)(v195.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v32 + 16) != 26 )
      v32 = sub_F63050(*(_QWORD *)(v195.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v14, v15);
    v33 = *(_QWORD *)(a1 + 248);
    v207 = *(__int64 **)(v32 + 24);
    v166.m128i_i64[0] = (__int64)&v207;
    v34 = sub_F67970(&v207, v33);
    v166.m128i_i32[2] = sub_18C0240(*(_QWORD *)(v32 + 24), v33);
    v38 = sub_A5DBE0(v32, v33, v35, v36, v37);
    v39 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 8LL);
    v40 = (__int64 *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
    if ( ((*(_WORD *)(v18 + 2) >> 3) & 0x3F) == 1 )
    {
      v93 = *v40;
      if ( *(_BYTE *)(*v40 + 16) != 42 )
        v93 = sub_F63050(*v40, v33, (*(_WORD *)(v18 + 2) >> 3) & 0x3F, v40);
      v39 = *(_QWORD *)(v93 + 32);
      v40 = (__int64 *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v41 = v40[1];
    v42 = 0;
    if ( (v41 & 8) != 0 )
      v42 = *(__int64 *)((char *)&qword_18 + (v41 & 0xFFFFFFFFFFFFFFF0LL));
    v43 = v42 | ((unsigned __int8)v39 | (unsigned __int8)v41) & 7;
    if ( (v38 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v44 = ~(v38 & 7) & v43;
      if ( ((v44 >> 4) & 3) == ((v38 >> 4) & 3) )
        v44 &= 0xFFFFFFFFFFFFFFCFLL;
      if ( ((v44 >> 6) & 7) == ((v38 >> 6) & 7) )
        v44 &= 0xFFFFFFFFFFFFFE3FLL;
      if ( (unsigned int)v44 >> 9 == (unsigned int)v38 >> 9 )
        v44 &= 0xFFFFFFFF000001FFLL;
      if ( HIDWORD(v38) == HIDWORD(v44) )
        v44 = (unsigned int)v44;
    }
    else
    {
      v44 = ~v38 & v43;
    }
    v197.m128_u64[0] = v44 & 0xFFFFFFFF000001CFLL;
    if ( (v44 & 0xFFFFFFFF000001CFLL) != 0 )
    {
      p_s = &s;
      sub_F71C30(&s, (unsigned __int64 *)&v197);
      sub_168B9F0(v166.m128i_i64[0], (__int64 *)(a1 + 8), v176, 0x12C6u, 0);
      ptr = (void *)sub_6D5440(&v195);
      v94 = sub_162B6D0(v166.m128i_i64[0], (__int64 *)&ptr);
      v95 = 1;
      v96 = sub_1682A40(v94, (__int64)&s);
      if ( n )
      {
        v168 = (__int64 *)s;
        v97 = memchr(s, 32, n);
        if ( v97 )
          v95 = (v97 - (_BYTE *)v168 != -1) + 1;
      }
      LODWORD(v193) = v95;
      sub_1587D10(v96, (int *)&v193);
      sub_15F7200(v166.m128i_i64[0]);
      if ( s != p_s + 2 )
        operator delete(s);
    }
    v45 = *(unsigned int *)(a1 + 1952);
    v46 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v46, v45) )
    {
      v46 = 0;
      v45 = 0;
    }
    v47 = (unsigned __int16 *)sub_C99A50(
                                *(_QWORD **)(a1 + 248),
                                (__int64)v189[0],
                                v185,
                                v186,
                                v34,
                                v166.m128i_u32[2],
                                a9,
                                (v46 << 32) | v45,
                                *(unsigned __int16 *)(v32 + 22));
    v48 = sub_EEB7E0(*(_QWORD *)(v18 + 24), (__int64)v189[0], *(double *)a7.m128_u64);
    if ( (unsigned __int8)sub_18C4140(a1, *(_QWORD *)(v32 + 24), v48, (__int64)v47, 0)
      || (unsigned __int8)sub_192D780(a1, (_DWORD)v47, (__int64)v185, v186, 0)
      || (unsigned __int8)sub_16EB250(a1, (__int64)v47, v32, (__m128i)a7) )
    {
      return (_WORD *)(&dword_0 + 1);
    }
    else
    {
      return sub_19A3E40(a1, v47, v98, v99, v100, a7, a8);
    }
  }
}
