__m128i *__fastcall sub_1FAF3F0(__m128i *a1, __int64 a2, __int64 a3, _BYTE *a4, signed __int64 a5, __int64 a6)
{
  __m128i *v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rbx
  int v10; // r13d
  __int64 *v11; // rsi
  __int64 *v12; // r13
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r14
  char v18; // al
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 *v22; // rax
  char *v23; // rbx
  char *v24; // r12
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // r12
  __int64 *v28; // rbx
  __int64 v29; // rsi
  _BYTE *v30; // rdx
  __int64 v31; // r15
  __int64 *v32; // rbx
  __int64 v33; // r14
  __int64 *v34; // r12
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  void *v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  __int64 *v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rsi
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rsi
  unsigned __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r12
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // r12
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // r14
  __int64 *v93; // rax
  __int64 *v94; // r14
  __int64 v95; // rdx
  __int64 *v96; // r12
  __int64 v97; // rax
  __int64 v98; // rdx
  unsigned __int64 v99; // rdx
  __int64 v100; // r15
  char *v101; // r12
  char *v102; // rbx
  __int64 v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // r12
  unsigned int v107; // esi
  _DWORD *v108; // r14
  unsigned int v109; // eax
  bool v110; // zf
  __int64 *v111; // rax
  __int64 v112; // r15
  __int64 v113; // rbp
  __int64 v114; // rdi
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  unsigned int v120; // ecx
  __int64 v121; // rdx
  __int64 v122; // rsi
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  unsigned __int64 v129; // rcx
  __int64 v130; // rbx
  __m128i v131; // xmm2
  int v132; // edx
  __m128i v133; // xmm1
  __m128i v134; // xmm0
  unsigned __int64 *v135; // r14
  unsigned __int64 v136; // rsi
  __int64 v137; // r12
  __int64 v138; // rbx
  _QWORD **v139; // r12
  _QWORD **v140; // rbx
  _QWORD *v141; // rdx
  int v143; // eax
  _QWORD *v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // rax
  _QWORD *m; // rax
  __int32 v148; // eax
  _QWORD *v149; // rdi
  __int64 v150; // rdx
  __int64 v151; // rsi
  _QWORD *j; // rax
  _DWORD *v153; // rdx
  unsigned __int64 v154; // rbx
  __int64 v155; // rax
  __int64 v156; // rdi
  unsigned int v157; // ecx
  __int64 v158; // r14
  _QWORD *v159; // rax
  __int64 v160; // r12
  __int64 v161; // rdi
  int v162; // eax
  _QWORD *v163; // rdi
  _QWORD *v164; // rdi
  __int64 v165; // rdi
  __int64 m128i_i64; // rax
  __int64 *v167; // r12
  __int64 v168; // rax
  int v169; // esi
  unsigned __int64 v170; // rdi
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 *v173; // r14
  char *v174; // r14
  unsigned __int64 v175; // rbx
  __m128i *v176; // r12
  __int64 v177; // rsi
  const __m128i *ii; // rdx
  _DWORD *v179; // r10
  int v180; // r11d
  __int32 v181; // eax
  unsigned int v182; // ecx
  __int64 v183; // rsi
  unsigned int v184; // ecx
  __int64 v185; // rsi
  __m128i *v186; // rbx
  unsigned __int64 v187; // rcx
  __int64 v188; // rsi
  __m128i *v189; // rax
  const __m128i *v190; // rcx
  const __m128i *v191; // r8
  __int64 v192; // rdi
  __m128i v193; // xmm4
  unsigned int v194; // eax
  __int64 v195; // rax
  _QWORD *v196; // rax
  unsigned int v197; // eax
  int v198; // eax
  _QWORD *v199; // rax
  unsigned __int64 v200; // rax
  unsigned __int64 v201; // rax
  int v202; // r12d
  __int64 v203; // rbx
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  _QWORD *v208; // rax
  __int64 v209; // rdx
  _QWORD *i; // rdx
  unsigned __int64 v211; // rax
  unsigned __int64 v212; // rax
  int v213; // r12d
  __int64 v214; // rbx
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  _QWORD *v219; // rax
  __int64 v220; // rdx
  _QWORD *k; // rdx
  __int64 v223; // [rsp+18h] [rbp-1300h]
  __int64 v224; // [rsp+18h] [rbp-1300h]
  __int64 n; // [rsp+28h] [rbp-12F0h]
  __int64 v226; // [rsp+28h] [rbp-12F0h]
  bool v229; // [rsp+4Fh] [rbp-12C9h]
  unsigned int v231; // [rsp+50h] [rbp-12C8h]
  __m128i *v233; // [rsp+58h] [rbp-12C0h]
  __int16 v234; // [rsp+6Eh] [rbp-12AAh] BYREF
  __int128 v235; // [rsp+70h] [rbp-12A8h] BYREF
  void *v236; // [rsp+80h] [rbp-1298h] BYREF
  __int64 v237; // [rsp+88h] [rbp-1290h]
  _BYTE v238[512]; // [rsp+90h] [rbp-1288h] BYREF
  void *v239; // [rsp+290h] [rbp-1088h] BYREF
  __int64 v240; // [rsp+298h] [rbp-1080h]
  _BYTE v241[512]; // [rsp+2A0h] [rbp-1078h] BYREF
  void *v242; // [rsp+4A0h] [rbp-E78h] BYREF
  __int64 v243; // [rsp+4A8h] [rbp-E70h]
  __int128 v244; // [rsp+4B0h] [rbp-E68h] BYREF
  __int64 v245; // [rsp+4C0h] [rbp-E58h]
  char v246; // [rsp+4C8h] [rbp-E50h]
  int v247; // [rsp+4CCh] [rbp-E4Ch]
  _OWORD *v248; // [rsp+4D0h] [rbp-E48h]
  void *v249; // [rsp+6B0h] [rbp-C68h] BYREF
  __int64 v250; // [rsp+6B8h] [rbp-C60h]
  _BYTE v251[1024]; // [rsp+6C0h] [rbp-C58h] BYREF
  _OWORD ptr[3]; // [rsp+AC0h] [rbp-858h] BYREF
  __int64 v253; // [rsp+AF0h] [rbp-828h] BYREF

  v6 = (__m128i *)a2;
  v229 = a6 != 0;
  if ( *(_QWORD *)(a2 + 48) )
    nullsub_1235();
  sub_1F8D8D0(a2);
  sub_1FA2850((_QWORD *)a2, *(_QWORD *)(a2 + 40));
  v7 = *(_QWORD *)(a2 + 56);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 36);
    if ( v8 <= 7 && ((1LL << v8) & 0xBC) != 0 )
    {
      v143 = *(_DWORD *)(a2 + 832);
      if ( v143 )
      {
        v184 = 4 * v143;
        v185 = *(unsigned int *)(a2 + 840);
        v144 = (_QWORD *)v6[51].m128i_i64[1];
        if ( (unsigned int)(4 * v143) < 0x40 )
          v184 = 64;
        if ( (unsigned int)v185 > v184 )
        {
          v194 = v143 - 1;
          if ( v194 )
          {
            _BitScanReverse(&v194, v194);
            v195 = (unsigned int)(1 << (33 - (v194 ^ 0x1F)));
            if ( (int)v195 < 64 )
              v195 = 64;
            if ( (_DWORD)v195 == (_DWORD)v185 )
            {
              v6[52].m128i_i64[0] = 0;
              v196 = &v144[2 * v195];
              do
              {
                *v144 = 1;
                v144 += 2;
              }
              while ( v196 != v144 );
              goto LABEL_120;
            }
            v200 = (4 * (int)v195 / 3u + 1) | ((unsigned __int64)(4 * (int)v195 / 3u + 1) >> 1);
            v201 = ((v200 | (v200 >> 2)) >> 4)
                 | v200
                 | (v200 >> 2)
                 | ((((v200 | (v200 >> 2)) >> 4) | v200 | (v200 >> 2)) >> 8);
            v202 = (v201 | (v201 >> 16)) + 1;
            v203 = 16 * ((v201 | (v201 >> 16)) + 1);
          }
          else
          {
            v203 = 2048;
            v202 = 128;
          }
          operator delete(v144, 16 * v185, 8);
          v6[52].m128i_i32[2] = v202;
          v208 = (_QWORD *)sub_22300B0(v203, 8, v204, v205, v206, v207);
          v209 = v6[52].m128i_u32[2];
          v6[52].m128i_i64[0] = 0;
          v6[51].m128i_i64[1] = (__int64)v208;
          for ( i = &v208[2 * v209]; i != v208; v208 += 2 )
            *v208 = 1;
LABEL_120:
          v148 = v6[56].m128i_i32[0];
          if ( !v148 )
          {
            if ( v6[56].m128i_i32[1] )
            {
              v149 = (_QWORD *)v6[55].m128i_i64[1];
              v150 = v6[56].m128i_u32[2];
              v151 = 2 * v150;
              if ( (unsigned int)v150 <= 0x40 )
              {
LABEL_123:
                for ( j = &v149[v151]; j != v149; v149 += 2 )
                  *v149 = -4096;
                v6[56].m128i_i64[0] = 0;
                goto LABEL_126;
              }
              operator delete(v149, v151 * 8, 8);
              v6[55].m128i_i64[1] = 0;
              v6[56].m128i_i64[0] = 0;
              v6[56].m128i_i32[2] = 0;
            }
LABEL_126:
            v6[57].m128i_i32[2] = 0;
            goto LABEL_5;
          }
          v182 = 4 * v148;
          v183 = v6[56].m128i_u32[2];
          v149 = (_QWORD *)v6[55].m128i_i64[1];
          if ( (unsigned int)(4 * v148) < 0x40 )
            v182 = 64;
          if ( (unsigned int)v183 <= v182 )
          {
            v151 = 2 * v183;
            goto LABEL_123;
          }
          v197 = v148 - 1;
          if ( v197 )
          {
            _BitScanReverse(&v197, v197);
            v198 = 1 << (33 - (v197 ^ 0x1F));
            if ( v198 < 64 )
              v198 = 64;
            if ( (_DWORD)v183 == v198 )
            {
              v6[56].m128i_i64[0] = 0;
              v199 = &v149[2 * (unsigned int)v183];
              do
              {
                *v149 = -4096;
                v149 += 2;
              }
              while ( v199 != v149 );
              goto LABEL_126;
            }
            v211 = (4 * v198 / 3u + 1) | ((unsigned __int64)(4 * v198 / 3u + 1) >> 1);
            v212 = ((v211 | (v211 >> 2)) >> 4)
                 | v211
                 | (v211 >> 2)
                 | ((((v211 | (v211 >> 2)) >> 4) | v211 | (v211 >> 2)) >> 8);
            v213 = (v212 | (v212 >> 16)) + 1;
            v214 = 16 * ((v212 | (v212 >> 16)) + 1);
          }
          else
          {
            v214 = 2048;
            v213 = 128;
          }
          operator delete(v149, 16 * v183, 8);
          v6[56].m128i_i32[2] = v213;
          v219 = (_QWORD *)sub_22300B0(v214, 8, v215, v216, v217, v218);
          v220 = v6[56].m128i_u32[2];
          v6[56].m128i_i64[0] = 0;
          v6[55].m128i_i64[1] = (__int64)v219;
          for ( k = &v219[2 * v220]; k != v219; v219 += 2 )
            *v219 = -4096;
          goto LABEL_126;
        }
        v146 = 2LL * (unsigned int)v185;
      }
      else
      {
        if ( !*(_DWORD *)(a2 + 836) )
          goto LABEL_120;
        v144 = *(_QWORD **)(a2 + 824);
        v145 = *(unsigned int *)(a2 + 840);
        v146 = 2 * v145;
        if ( (unsigned int)v145 > 0x40 )
        {
          operator delete(v144, v146 * 8, 8);
          *(_QWORD *)(a2 + 824) = 0;
          *(_QWORD *)(a2 + 832) = 0;
          *(_DWORD *)(a2 + 840) = 0;
          goto LABEL_120;
        }
      }
      for ( m = &v144[v146]; m != v144; v144 += 2 )
        *v144 = 1;
      v6[52].m128i_i64[0] = 0;
      goto LABEL_120;
    }
  }
LABEL_5:
  v9 = v6[2].m128i_i64[1];
  v10 = *(_DWORD *)(v9 + 560);
  v11 = *(__int64 **)(v9 + 552);
  v250 = 0x8000000000LL;
  v249 = v251;
  sub_FBDEE0((__int64 **)ptr, v11, v10 == 0);
  v12 = *(__int64 **)&ptr[0];
  sub_FBDEE0((__int64 **)ptr, (__int64 *)(*(_QWORD *)(v9 + 552) + 8LL * *(unsigned int *)(v9 + 560)), 1);
  v15 = *(__int64 **)&ptr[0];
  if ( v12 == *(__int64 **)&ptr[0] )
  {
    v20 = (unsigned int)v250;
  }
  else
  {
    v16 = *v12;
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        v18 = sub_1F6A120(
                v17,
                0,
                v6[3].m128i_i64[1] != 0,
                (*(_BYTE *)(*(_QWORD *)(v6[2].m128i_i64[1] + 56) + 1LL) & 8) != 0);
        v20 = v19;
        if ( v18 )
        {
          if ( v19 + 1 > (unsigned __int64)HIDWORD(v250) )
          {
            sub_2237220(&v249, v251, v19 + 1, 8);
            v20 = (unsigned int)v250;
          }
          *((_QWORD *)v249 + v20) = v17;
          LODWORD(v250) = v250 + 1;
          v20 = (unsigned int)v250;
        }
        v16 = v12[1];
        v21 = v12 + 1;
        if ( !v16 || v16 == -8 )
          break;
        ++v12;
        if ( v21 == v15 )
          goto LABEL_14;
      }
      v22 = v12 + 2;
      do
      {
        do
        {
          v16 = *v22;
          v12 = v22++;
        }
        while ( !v16 );
      }
      while ( v16 == -8 );
    }
    while ( v12 != v15 );
  }
LABEL_14:
  v23 = (char *)v249;
  v24 = (char *)v249 + 8 * v20;
  if ( v24 != v249 )
  {
    _BitScanReverse64(&v25, (8 * v20) >> 3);
    sub_1F805F0((__int64 *)v249, (char *)v249 + 8 * v20, 2LL * (int)(63 - (v25 ^ 0x3F)));
    sub_1F80B70(v23, v24);
    v27 = (__int64 *)v249;
    v28 = (__int64 *)((char *)v249 + 8 * (unsigned int)v250);
    if ( v249 != v28 )
    {
      do
      {
        v29 = *v27++;
        sub_1F80CA0((__int64)v6, v29, v26, v20, v13, v14);
      }
      while ( v28 != v27 );
    }
  }
  v30 = v238;
  v237 = 0x4000000000LL;
  v236 = v238;
  if ( a3 )
  {
    v31 = *(_QWORD *)(a3 + 2744);
    for ( n = v31 + 80LL * *(unsigned int *)(a3 + 2752); n != v31; v31 += 80 )
    {
      v32 = *(__int64 **)(v31 + 48);
      v33 = *(_QWORD *)v31;
      v34 = &v32[2 * *(unsigned int *)(v31 + 56)];
      while ( v34 != v32 )
      {
        v35 = sub_1F80CA0((__int64)v6, v33, (__int64)v30, v20, v13, v14);
        v38 = (unsigned int)v237;
        v39 = (unsigned int)v237 + 1LL;
        if ( v39 > HIDWORD(v237) )
        {
          v224 = v35;
          sub_2237220(&v236, v238, v39, 8);
          v38 = (unsigned int)v237;
          v35 = v224;
        }
        v40 = v236;
        *((_QWORD *)v236 + v38) = v35;
        v41 = *v32;
        LODWORD(v237) = v237 + 1;
        v42 = sub_1F80CA0((__int64)v6, v41, (__int64)v40, v38, v36, v37);
        v43 = (unsigned int)v237;
        v44 = (unsigned int)v237 + 1LL;
        if ( v44 > HIDWORD(v237) )
        {
          v223 = v42;
          sub_2237220(&v236, v238, v44, 8);
          v43 = (unsigned int)v237;
          v42 = v223;
        }
        *((_QWORD *)v236 + v43) = v42;
        v32 += 2;
        LODWORD(v237) = v237 + 1;
        sub_1F6F570(v6, *((_DWORD *)v32 - 2), (__int64)&v236);
      }
    }
    v45 = 0;
    v239 = v241;
    v240 = 0x4000000000LL;
    v46 = *(__int64 **)(a3 + 248);
    v47 = v46[202];
    if ( v47 )
      v45 = sub_A70A40(*(_QWORD *)(a3 + 248), v47, 0);
    sub_1F85840((__int64)v6, (__int64)v46, v45, &v239, v13, v14);
    v51 = v46[206];
    v52 = 0;
    if ( v51 )
    {
      v53 = *(_QWORD *)(v51 + 48);
      if ( v53 )
        v52 = v53 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v52 = sub_A7AA70((__int64)v46, v51, 0, v48, v49, v50);
    }
    sub_1F85840((__int64)v6, (__int64)v46, v52, &v239, v49, v50);
    v57 = v46[207];
    v58 = 0;
    if ( v57 )
    {
      v59 = *(_QWORD *)(v57 + 48);
      if ( v59 )
        v58 = v59 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v58 = sub_A7AA70((__int64)v46, v57, 0, v54, v55, v56);
    }
    sub_1F85840((__int64)v6, (__int64)v46, v58, &v239, v55, v56);
    v63 = v46[208];
    v64 = 0;
    if ( v63 )
    {
      v65 = *(_QWORD *)(v63 + 48);
      if ( v65 )
        v64 = v65 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v64 = sub_A7AA70((__int64)v46, v63, 0, v60, v61, v62);
    }
    sub_1F85840((__int64)v6, (__int64)v46, v64, &v239, v61, v62);
    sub_1F85840((__int64)v6, (__int64)v46, v46[190], &v239, v66, v67);
    sub_1F85840((__int64)v6, (__int64)v46, v46[191], &v239, v68, v69);
    sub_1F85840((__int64)v6, (__int64)v46, v46[192], &v239, v70, v71);
    v75 = v46[209];
    v76 = 0;
    if ( v75 )
    {
      v77 = *(_QWORD *)(v75 + 48);
      if ( v77 )
        v76 = v77 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v76 = sub_A7AA70((__int64)v46, v75, 0, v72, v73, v74);
    }
    sub_1F85840((__int64)v6, (__int64)v46, v76, &v239, v73, v74);
    sub_1F96550((__int64)v6, a3, v78, v79, v80, v81);
  }
  else
  {
    v240 = 0x4000000000LL;
    v239 = v241;
  }
  sub_1F7A0A0((__int64)v6, v6[2].m128i_i64[1], a4, a5);
  v82 = v6[1].m128i_i64[0];
  if ( *(_DWORD *)(v82 + 48) )
  {
    v164 = *(_QWORD **)(v82 + 24);
    LODWORD(ptr[0]) = *(_DWORD *)(v82 + 52);
    sub_A1FE50(v164, ptr, (_BYTE *)ptr + 4);
    *(_QWORD *)(v82 + 48) = 0;
    v82 = v6[1].m128i_i64[0];
  }
  v83 = *(_QWORD *)(*(_QWORD *)(v82 + 24) + 8LL);
  v84 = sub_A1F730(v82);
  v85 = v6[1].m128i_i64[0];
  v6[6].m128i_i64[1] = ((unsigned __int64)*(unsigned int *)(v82 + 48) + 8 * (v84 + v83)) >> 3;
  sub_A25970(v85, 8u, 5u);
  v86 = v6[1].m128i_i64[0];
  v87 = *(_QWORD *)(*(_QWORD *)(v86 + 24) + 8LL);
  v88 = sub_A1F730(v86);
  v89 = v6[1].m128i_i64[0];
  v90 = v88 + v87;
  v91 = *(unsigned int *)(v86 + 48);
  *(_QWORD *)&ptr[1] = 34;
  v6[6].m128i_i64[0] = v91 + 8 * v90;
  *(_QWORD *)&ptr[0] = &ptr[1];
  *((_QWORD *)&ptr[0] + 1) = 0x4000000001LL;
  sub_1F6EB90(v89, 4u, (__int64)ptr);
  if ( *(_OWORD **)&ptr[0] != &ptr[1] )
    free(*(void **)&ptr[0]);
  if ( a3 )
  {
    v92 = 2LL * v6[70].m128i_u32[2];
    *((_QWORD *)&ptr[0] + 1) = 0x10000000000LL;
    v93 = (__int64 *)v6[70].m128i_i64[0];
    *(_QWORD *)&ptr[0] = &ptr[1];
    v94 = &v93[v92];
    if ( v94 != v93 )
    {
      v95 = *v93;
      v96 = v93 + 2;
      v97 = 1;
      DWORD2(ptr[0]) = 1;
      *(_QWORD *)&ptr[1] = v95;
      v98 = 1;
      if ( v94 == v96 )
      {
        v101 = (char *)&ptr[1];
        v102 = (char *)&ptr[1] + 8;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v99 = v98 + 1;
            v100 = *v96;
            if ( v99 > HIDWORD(ptr[0]) )
              break;
            v96 += 2;
            *(_QWORD *)(*(_QWORD *)&ptr[0] + 8 * v97) = v100;
            v97 = (unsigned int)(DWORD2(ptr[0]) + 1);
            DWORD2(ptr[0]) = v97;
            v98 = (unsigned int)v97;
            if ( v94 == v96 )
              goto LABEL_50;
          }
          v96 += 2;
          sub_2237220(ptr, &ptr[1], v99, 8);
          *(_QWORD *)(*(_QWORD *)&ptr[0] + 8LL * DWORD2(ptr[0])) = v100;
          v98 = (unsigned int)(DWORD2(ptr[0]) + 1);
          v97 = v98;
          ++DWORD2(ptr[0]);
        }
        while ( v94 != v96 );
LABEL_50:
        v101 = *(char **)&ptr[0];
        v102 = (char *)(*(_QWORD *)&ptr[0] + 8 * v98);
        if ( *(char **)&ptr[0] == v102 )
          goto LABEL_53;
      }
      do
      {
        v101 += 8;
        sub_18953F0(*(__int64 **)(a3 + 736));
      }
      while ( v102 != v101 );
      v102 = *(char **)&ptr[0];
LABEL_53:
      if ( v102 != (char *)&ptr[1] )
        free(v102);
    }
  }
  if ( v6[3].m128i_i64[0] )
  {
    sub_1F6B880(&v235);
    sub_A1FE00(v235, 39, 1);
    sub_A1FE00(v235, 0, 10);
    v103 = v6[1].m128i_i64[0];
    v104 = *((_QWORD *)&v235 + 1);
    *(_QWORD *)&ptr[0] = v235;
    v235 = 0;
    *((_QWORD *)&ptr[0] + 1) = v104;
    v231 = sub_A22F90(v103, (__int64 *)ptr);
    if ( *((_QWORD *)&ptr[0] + 1) )
      sub_4343A0(*((volatile signed __int32 **)&ptr[0] + 1));
    LODWORD(v243) = 2;
    v248 = ptr;
    *(_QWORD *)&ptr[0] = (char *)&ptr[1] + 8;
    *(__m128i *)((char *)ptr + 8) = _mm_load_si128(xmmword_23AAC30);
    v246 = 0;
    v242 = &off_2BEBEE0;
    v247 = 1;
    v245 = 0;
    v244 = 0;
    sub_227B8B0(&v242, 0, 0, 0);
    v105 = v6[3].m128i_i64[0];
    v106 = *(_QWORD *)(v105 + 160);
    v226 = v106 + 8LL * *(unsigned int *)(v105 + 168);
    if ( v226 != v106 )
    {
      v233 = v6;
      while ( 1 )
      {
        v108 = *(_DWORD **)v106;
        LOBYTE(v234) = *(_DWORD *)(*(_QWORD *)v106 + 4LL);
        sub_227BF10(&v242, &v234, 1);
        v109 = v108[1];
        if ( v109 <= 1 || (v110 = v109 == 5, v111 = (__int64 *)(v108 + 2), v110) )
          v111 = (__int64 *)(v108 + 10);
        v112 = *v111;
        v113 = v111[1];
        v234 = v113;
        sub_227BF10(&v242, &v234, 2);
        sub_227BF10(&v242, v112, v113);
        if ( v108[520] )
        {
          sub_A20800((__int64)&v242, v108[526], 1);
          if ( v108[638] )
            goto LABEL_61;
        }
        else
        {
          sub_A20800((__int64)&v242, 0xFFFFFFFF, 1);
          if ( v108[638] )
          {
LABEL_61:
            sub_A20800((__int64)&v242, v108[626], 1);
            if ( v108[648] )
              goto LABEL_62;
            goto LABEL_70;
          }
        }
        sub_A20800((__int64)&v242, 0xFFFFFFFF, 1);
        if ( v108[648] )
        {
LABEL_62:
          sub_A20800((__int64)&v242, v108[649], 1);
          if ( !v108[658] )
            goto LABEL_71;
          goto LABEL_63;
        }
LABEL_70:
        sub_A20800((__int64)&v242, 0xFFFFFFFF, 1);
        if ( !v108[658] )
        {
LABEL_71:
          v107 = -1;
          goto LABEL_64;
        }
LABEL_63:
        v107 = v108[662];
LABEL_64:
        v106 += 8;
        sub_A20800((__int64)&v242, v107, 1);
        if ( v226 == v106 )
        {
          v6 = v233;
          break;
        }
      }
    }
    v242 = &unk_2C76288;
    sub_227B7A0(&v242);
    v114 = v6[1].m128i_i64[0];
    v242 = &qword_20 + 7;
    sub_1F76000(v114, v231, (unsigned __int8 *)&v242, 1, *(unsigned __int64 *)&ptr[0], DWORD2(ptr[0]));
    if ( *(_OWORD **)&ptr[0] != (_OWORD *)((char *)&ptr[1] + 8) )
      free(*(void **)&ptr[0]);
    if ( *((_QWORD *)&v235 + 1) )
      sub_4343A0(*((volatile signed __int32 **)&v235 + 1));
  }
  if ( !a3 )
  {
    sub_1F8F920((__int64)v6);
    sub_1F7F020((__int64)v6, *(_QWORD *)(v6[2].m128i_i64[1] + 88));
    sub_1F88930((__int64)v6, v6[2].m128i_i64[1], v229);
    sub_1F82D00(v6, *(_QWORD *)(v6[2].m128i_i64[1] + 104));
    sub_1F85F60((__int64)v6, v6[2].m128i_i64[1], 0, v229);
    if ( a6 )
    {
      sub_1F932B0((__int64)v6, a6, 0);
      v122 = 7;
      sub_1F6EB90(v6[1].m128i_i64[0], 7u, (__int64)&v239);
      v129 = (unsigned int)v237;
      if ( !(_DWORD)v237 )
        goto LABEL_88;
    }
    else
    {
      v122 = 7;
      sub_1F6EB90(v6[1].m128i_i64[0], 7u, (__int64)&v239);
      if ( !(_DWORD)v237 )
        goto LABEL_176;
    }
    goto LABEL_132;
  }
  sub_1FAE7E0((__int64)v6, *(_QWORD *)(a3 + 248));
  sub_1F8F920((__int64)v6);
  sub_1F7F020((__int64)v6, *(_QWORD *)(v6[2].m128i_i64[1] + 88));
  sub_1F788F0(v6, *(_QWORD *)(a3 + 248));
  sub_1F88930((__int64)v6, v6[2].m128i_i64[1], v229);
  sub_1F82D00(v6, *(_QWORD *)(v6[2].m128i_i64[1] + 104));
  sub_1F90760((__int64)v6, a3);
  sub_1F90460(v6, a3, v115, v116, v117, v118);
  sub_1F92C30(v6, a3);
  sub_1F85F60((__int64)v6, v6[2].m128i_i64[1], a3 + 2608, v229);
  v119 = *(unsigned int *)(a3 + 1952);
  if ( *(_DWORD *)(a3 + 1944) != (_DWORD)v119 )
  {
    v120 = *(_DWORD *)(a3 + 1956);
LABEL_80:
    v121 = (v119 << 32) | v120;
    goto LABEL_81;
  }
  v121 = 0;
  v120 = *(_DWORD *)(a3 + 1956);
  if ( *(_DWORD *)(a3 + 1948) != v120 )
    goto LABEL_80;
LABEL_81:
  *(_QWORD *)&ptr[0] = v121;
  sub_1F6ED70(v6[1].m128i_i64[0], 0x23u, (unsigned __int64 *)ptr);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 248) + 2320LL) + 47LL) & 0x20) != 0 )
    sub_1F78DC0((__int64)v6, a3);
  if ( *(_DWORD *)(*(_QWORD *)(a3 + 664) + 72LL) )
  {
    v165 = v6[1].m128i_i64[0];
    *(_QWORD *)&ptr[0] = *(unsigned int *)(*(_QWORD *)(a3 + 664) + 72LL);
    sub_1F6ED70(v165, 0x39u, (unsigned __int64 *)ptr);
  }
  if ( a6 )
    sub_1F932B0((__int64)v6, a6, *(_QWORD *)(a3 + 248));
  sub_1F6EB90(v6[1].m128i_i64[0], 7u, (__int64)&v239);
  v122 = a3;
  sub_1F972A0((__int64)v6, a3, v123, v124, v125);
  v129 = (unsigned int)v237;
  if ( !(_DWORD)v237 )
  {
LABEL_88:
    if ( a6 )
      goto LABEL_89;
    goto LABEL_133;
  }
LABEL_132:
  v122 = 25;
  sub_1F6EB90(v6[1].m128i_i64[0], 0x19u, (__int64)&v236);
  if ( a6 )
  {
LABEL_89:
    sub_1F92E50((__int64)v6, v122, v126, v129, v127, v128);
    if ( a3 )
    {
      if ( !v6[3].m128i_i64[1] )
        goto LABEL_160;
      goto LABEL_91;
    }
    goto LABEL_92;
  }
LABEL_133:
  v153 = &ptr[1];
  *((_QWORD *)&ptr[0] + 1) = 0x4000000000LL;
  *(_QWORD *)&ptr[0] = &ptr[1];
  if ( !a3 )
  {
LABEL_176:
    sub_1F92E50((__int64)v6, v122, (__int64)v153, v129, v127, v128);
    goto LABEL_92;
  }
  v154 = *(_QWORD *)(*(_QWORD *)(a3 + 248) + 2248LL);
  if ( !v154 )
    goto LABEL_159;
  v155 = 0;
  do
  {
    v160 = *(_QWORD *)(v154 + 40);
    v122 = v6[194].m128i_u32[2];
    *(_QWORD *)&v235 = v160;
    if ( !(_DWORD)v122 )
    {
      v242 = nullptr;
LABEL_141:
      LODWORD(v122) = 2 * v122;
LABEL_142:
      sub_1F82880(&v6[193].m128i_i64[1], v122, (__int64)v153, v129, v127, v128);
      v122 = (__int64)&v235;
      sub_1F72DF0(&v6[193].m128i_i64[1], (__int64 *)&v235, &v242);
      v161 = v235;
      v153 = v242;
      v162 = v6[194].m128i_i32[0] + 1;
      goto LABEL_143;
    }
    v127 = (unsigned int)(v122 - 1);
    v156 = v6[193].m128i_i64[1];
    v157 = v127 & (((unsigned int)v160 >> 9) ^ ((unsigned int)v160 >> 4));
    v153 = (_DWORD *)(v156 + 16LL * v157);
    v128 = *(_QWORD *)v153;
    if ( v160 == *(_QWORD *)v153 )
      goto LABEL_137;
    v179 = nullptr;
    v180 = 1;
    if ( v128 != -4096 )
    {
      while ( 1 )
      {
        if ( !v179 && v128 == -8192 )
          v179 = v153;
        v157 = v127 & (v180 + v157);
        v153 = (_DWORD *)(v156 + 16LL * v157);
        v128 = *(_QWORD *)v153;
        if ( v160 == *(_QWORD *)v153 )
          break;
        if ( v128 == -4096 )
        {
          if ( v179 )
            v153 = v179;
          goto LABEL_178;
        }
        ++v180;
      }
LABEL_137:
      v129 = HIDWORD(ptr[0]);
      v158 = (unsigned int)v153[2];
      v153 = (_DWORD *)(v155 + 1);
      if ( v155 + 1 <= (unsigned __int64)HIDWORD(ptr[0]) )
        goto LABEL_138;
LABEL_146:
      v122 = (__int64)&ptr[1];
      sub_2237220(ptr, &ptr[1], v153, 16);
      v155 = DWORD2(ptr[0]);
      goto LABEL_138;
    }
LABEL_178:
    v181 = v6[194].m128i_i32[0];
    v129 = (unsigned int)(3 * v122);
    v242 = v153;
    v162 = v181 + 1;
    if ( 4 * v162 >= (unsigned int)v129 )
      goto LABEL_141;
    v161 = v160;
    v129 = (unsigned int)(v122 - v6[194].m128i_i32[1] - v162);
    v127 = (unsigned int)v122 >> 3;
    if ( (unsigned int)v129 <= (unsigned int)v127 )
      goto LABEL_142;
LABEL_143:
    v110 = *(_QWORD *)v153 == -4096;
    v6[194].m128i_i32[0] = v162;
    if ( !v110 )
      --v6[194].m128i_i32[1];
    v153[2] = 0;
    v155 = DWORD2(ptr[0]);
    v158 = 0;
    v129 = HIDWORD(ptr[0]);
    *(_QWORD *)v153 = v161;
    v153 = (_DWORD *)(v155 + 1);
    if ( v155 + 1 > v129 )
      goto LABEL_146;
LABEL_138:
    v159 = (_QWORD *)(*(_QWORD *)&ptr[0] + 16 * v155);
    *v159 = v158;
    v159[1] = v160;
    v155 = (unsigned int)++DWORD2(ptr[0]);
    v154 = *(_QWORD *)(v154 + 48) & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( v154 );
  v174 = *(char **)&ptr[0];
  if ( (_DWORD)v155 )
  {
    v175 = 16 * v155;
    v176 = (__m128i *)(*(_QWORD *)&ptr[0] + 16 * v155);
    _BitScanReverse64((unsigned __int64 *)&v155, (16 * v155) >> 4);
    sub_1F6A730(*(__m128i **)&ptr[0], v176, 2LL * (int)(63 - (v155 ^ 0x3F)));
    if ( v175 > 0x100 )
    {
      v186 = (__m128i *)(v174 + 256);
      sub_1F6A4F0(v174, v174 + 256);
      if ( v176 != (__m128i *)(v174 + 256) )
      {
        do
        {
          v187 = v186->m128i_i64[0];
          v188 = v186->m128i_i64[1];
          v189 = v186 - 1;
          if ( v186->m128i_i64[0] < (unsigned __int64)v186[-1].m128i_i64[0] )
          {
            while ( 1 )
            {
              v189[1] = _mm_loadu_si128(v189);
              if ( v187 >= v189[-1].m128i_i64[0] )
                break;
              --v189;
            }
          }
          else
          {
            v189 = v186;
          }
          ++v186;
          v189->m128i_i64[0] = v187;
          v189->m128i_i64[1] = v188;
        }
        while ( v176 != v186 );
      }
    }
    else
    {
      sub_1F6A4F0(v174, v176->m128i_i8);
    }
    v173 = *(__int64 **)&ptr[0];
    v177 = *(_QWORD *)&ptr[0] + 16LL * DWORD2(ptr[0]);
    if ( *(_QWORD *)&ptr[0] == v177 )
    {
      m128i_i64 = *(_QWORD *)&ptr[0];
    }
    else
    {
      for ( ii = *(const __m128i **)&ptr[0]; ; ++ii )
      {
        m128i_i64 = (__int64)ii[1].m128i_i64;
        if ( (const __m128i *)v177 == &ii[1] )
          break;
        if ( ii->m128i_i64[0] == ii[1].m128i_i64[0] )
        {
          if ( (const __m128i *)v177 == ii )
          {
            m128i_i64 = *(_QWORD *)&ptr[0] + 16LL * DWORD2(ptr[0]);
          }
          else
          {
            v190 = ii + 2;
            v191 = ii + 1;
            if ( (const __m128i *)v177 != &ii[2] )
            {
              v192 = ii->m128i_i64[0];
              while ( 1 )
              {
                if ( v192 == v190->m128i_i64[0] )
                {
                  ++v190;
                  m128i_i64 = (__int64)ii[1].m128i_i64;
                  if ( (const __m128i *)v177 == v190 )
                    goto LABEL_149;
                }
                else
                {
                  v193 = _mm_loadu_si128(v190++);
                  m128i_i64 += 16;
                  ii[1] = v193;
                  if ( v190 == (const __m128i *)v177 )
                    goto LABEL_149;
                  v192 = v191->m128i_i64[0];
                  ii = v191;
                }
                v191 = (const __m128i *)m128i_i64;
              }
            }
          }
          break;
        }
      }
    }
LABEL_149:
    v243 = 0x4000000000LL;
    DWORD2(ptr[0]) = (m128i_i64 - (__int64)v173) >> 4;
    v242 = &v244;
    v167 = &v173[2 * DWORD2(ptr[0])];
    while ( v167 != v173 )
    {
      sub_9B9C90((__int64)&v242, *v173);
      v168 = v173[1];
      v169 = 0;
      if ( v168 )
      {
        v170 = *(unsigned int *)(v168 + 416);
        v171 = *(_QWORD *)(v6[2].m128i_i64[1] + 1704);
        v172 = *(_QWORD *)(v171 + 24);
        if ( v170 < (*(_QWORD *)(v171 + 32) - v172) >> 2 )
          v169 = *(_DWORD *)(v172 + 4 * v170);
      }
      v173 += 2;
      sub_1F6F570(v6, v169, (__int64)&v242);
    }
    v122 = 43;
    sub_1F6EB90(v6[1].m128i_i64[0], 0x2Bu, (__int64)&v242);
    if ( v242 != &v244 )
      free(v242);
    v174 = *(char **)&ptr[0];
  }
  if ( v174 != (char *)&ptr[1] )
    free(v174);
LABEL_159:
  sub_1F92E50((__int64)v6, v122, (__int64)v153, v129, v127, v128);
  sub_1F6F5E0(v6, a3);
  sub_1F6F7C0((__int64)v6, a3);
  sub_1F6F830(v6, a3);
  if ( !v6[3].m128i_i64[1] )
  {
LABEL_160:
    sub_1F6F8B0(v6, a3);
    if ( !v6[3].m128i_i64[1] )
      sub_1F74130(v6, a3);
  }
LABEL_91:
  sub_1F92B40((__int64)v6, a3);
LABEL_92:
  v130 = v6[1].m128i_i64[0];
  v131 = _mm_loadu_si128(v6 + 192);
  v132 = *(_DWORD *)(v130 + 56);
  ptr[1] = _mm_unpackhi_epi32(v131, (__m128i)0LL);
  v133 = _mm_cvtsi32_si128(v6[193].m128i_u32[1]);
  v134 = _mm_cvtsi32_si128(v6[193].m128i_u32[0]);
  ptr[0] = _mm_unpacklo_epi32(v131, (__m128i)0LL);
  ptr[2] = _mm_unpacklo_epi64(v134, v133);
  sub_A1FEC0(v130, 3u, v132);
  sub_1F6E7D0(v130, 8u);
  sub_1F6E7D0(v130, 6u);
  v135 = (unsigned __int64 *)ptr;
  do
  {
    v136 = *v135++;
    sub_1F6EF10(v130, v136);
  }
  while ( &v253 != (__int64 *)v135 );
  sub_A25550(v6[1].m128i_i64[0]);
  v137 = v6[1].m128i_i64[0];
  if ( *(_DWORD *)(v137 + 48) )
  {
    v163 = *(_QWORD **)(v137 + 24);
    LODWORD(v242) = *(_DWORD *)(v137 + 52);
    sub_A1FE50(v163, &v242, (_BYTE *)&v242 + 4);
    *(_QWORD *)(v137 + 48) = 0;
    v137 = v6[1].m128i_i64[0];
  }
  v138 = *(_QWORD *)(*(_QWORD *)(v137 + 24) + 8LL);
  v6[7].m128i_i64[0] = ((unsigned __int64)*(unsigned int *)(v137 + 48) + 8 * (sub_A1F730(v137) + v138)) >> 3;
  if ( a3 )
  {
    v139 = (_QWORD **)v6[195].m128i_i64[0];
    v140 = (_QWORD **)v6[195].m128i_i64[1];
    while ( v140 != v139 )
    {
      v141 = *v139++;
      sub_1F76B40((__int64)v6, a3, v141);
    }
  }
  sub_1F6DFF0(a1, v6);
  if ( v239 != v241 )
    free(v239);
  if ( v236 != v238 )
    free(v236);
  if ( v249 != v251 )
    free(v249);
  return a1;
}
