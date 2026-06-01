void __fastcall sub_1E40A90(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  _QWORD *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 *i; // rbp
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int16 *v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // r9
  _DWORD *v30; // r8
  _DWORD *v31; // r14
  unsigned __int16 *v32; // rax
  const __m128i *v33; // rbx
  __int64 v34; // rsi
  double v35; // xmm4_8
  double v36; // xmm5_8
  __int16 v37; // ax
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int16 *v41; // rax
  _QWORD *v42; // rdi
  int v43; // ecx
  __int64 v44; // rdx
  void *v45; // rax
  _DWORD *v46; // r14
  bool v47; // zf
  __int32 v48; // esi
  int v49; // eax
  __int64 v50; // r15
  int v51; // r12d
  int v52; // r14d
  int v53; // eax
  unsigned __int32 v54; // eax
  unsigned __int64 *v55; // rsi
  const void *v56; // rdx
  char *v57; // rdi
  char *v58; // r10
  int v59; // edx
  __int64 v60; // rax
  __int64 v61; // r9
  unsigned __int64 v62; // r8
  _QWORD *v63; // rdi
  unsigned int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // r9d
  unsigned int v67; // edx
  unsigned __int64 v68; // rdx
  unsigned __int64 *v69; // rsi
  __int64 *v70; // r8
  __int64 v71; // r14
  __m128i *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // r14d
  __int64 *v79; // r14
  __int64 v80; // r9
  __int64 v81; // r10
  const void *v82; // r8
  __int32 v83; // ecx
  int v84; // r11d
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  unsigned __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  unsigned __int16 *v101; // rax
  unsigned __int64 v102; // rcx
  __int64 v103; // r9
  unsigned __int64 v104; // r8
  _DWORD *v105; // r14
  unsigned __int16 *v106; // rax
  unsigned __int64 v107; // r9
  unsigned __int64 v108; // rsi
  unsigned __int16 *v109; // rax
  unsigned __int64 v110; // r8
  unsigned __int64 v111; // rcx
  __int64 v112; // r10
  __int64 v113; // rax
  __int64 *v114; // rdx
  __int64 *v115; // rsi
  __int64 v116; // rdi
  int v117; // r11d
  char *v118; // rsi
  int v119; // edx
  char *v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rbx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  _QWORD *v133; // rax
  unsigned __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  unsigned __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  unsigned __int16 *v140; // r14
  unsigned __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 *v144; // rdi
  __m128i *v145; // rax
  unsigned __int64 v146; // r8
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  unsigned __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  unsigned __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  unsigned __int16 *v157; // r14
  unsigned __int16 *v158; // rax
  unsigned __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  unsigned __int16 *v162; // rax
  unsigned __int64 v163; // rcx
  __int64 v164; // r9
  _DWORD *v165; // r8
  _DWORD *v166; // r14
  unsigned __int16 *v167; // rax
  unsigned __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  unsigned __int64 v171; // rsi
  unsigned __int16 *v172; // rax
  _DWORD *v173; // r14
  unsigned __int64 v174; // rsi
  unsigned __int16 *v175; // rax
  __m128 *v176; // r8
  unsigned __int16 *v177; // rax
  _DWORD *v178; // r9
  int v179; // eax
  __m128i *v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rcx
  _QWORD *v188; // r8
  __int64 v189; // r9
  __int64 v190; // r14
  __int64 v191; // rax
  unsigned __int64 v192; // rdx
  __int64 v193; // rax
  __int64 v194; // rbx
  __int64 v195; // rcx
  __int64 v196; // rsi
  _QWORD *v197; // rdi
  __int64 v198; // r14
  int v199; // eax
  __int64 *v200; // rax
  __int64 *v201; // rax
  __int64 *v202; // rax
  __int64 *v203; // rax
  __int64 *v204; // rdi
  __int64 v205; // rcx
  __int64 v206; // rdx
  __m128i *v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 *v212; // rax
  __int64 *v213; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __m128i *v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 *v221; // rax
  __int64 *v222; // rax
  __int64 v223; // rax
  __m128i *v224; // rax
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __m128i *v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  __int64 v234; // rax
  __int64 *v235; // rax
  __int64 *v236; // rax
  _BYTE *v237; // rax
  unsigned __int64 v238; // r14
  unsigned __int8 v239; // al
  __int64 v240; // r9
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // r14
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rax
  unsigned __int64 v254; // [rsp+28h] [rbp-150h] BYREF
  __int64 *v255; // [rsp+30h] [rbp-148h]
  __int64 v256; // [rsp+38h] [rbp-140h]
  const void *v257; // [rsp+40h] [rbp-138h]
  __int64 v258; // [rsp+48h] [rbp-130h]
  const void *v259; // [rsp+50h] [rbp-128h]
  __int64 v260; // [rsp+58h] [rbp-120h]
  __int64 v261; // [rsp+68h] [rbp-110h] BYREF
  const void *v262; // [rsp+70h] [rbp-108h] BYREF
  __int64 v263; // [rsp+78h] [rbp-100h]
  void *v264; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 v265; // [rsp+88h] [rbp-F0h]
  _BYTE v266[32]; // [rsp+90h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v268[2]; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int8 *v269[11]; // [rsp+D0h] [rbp-A8h] BYREF
  char v270; // [rsp+128h] [rbp-50h]
  unsigned int v271; // [rsp+130h] [rbp-48h]
  char v272; // [rsp+134h] [rbp-44h]

  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    v17 = sub_B8C3D0(a3, (__int64)a2, a3, a4, a5, (__int64)a6);
    v21 = *((unsigned int *)v17 + 2);
    v22 = *v17 + 8 * v21;
    for ( i = (*(_BYTE *)(a3 + 29) & 1) != 0
            ? (__int64 *)*sub_B8C3D0(a3, (__int64)a2, v21, (__int64)v18, v19, v20)
            : nullptr; (__int64 *)v22 != i; ++i )
    {
      while ( 1 )
      {
        v33 = (const __m128i *)*i;
        v34 = *i;
        if ( !(unsigned __int8)sub_1DFFB00(a4, *i, v21, (__int64)v18, v19, v20) )
          goto LABEL_11;
        v37 = v33[2].m128i_i16[2];
        if ( v37 == 126 )
        {
          if ( sub_B08AF0((__int64)v33) )
          {
            if ( (v33[2].m128i_i8[6] & 2) != 0 )
            {
              v47 = v33[2].m128i_i8[7] == 0;
              ptr[0] = v268;
              ptr[1] = (void *)0x200000000LL;
              if ( v47 )
                sub_1E4C9B0(a1, *(_QWORD *)v33[2].m128i_i64[1], v33[2].m128i_i64[1] + 8, ptr);
              else
                sub_1E4CA90(v33[2].m128i_i64[1]);
              v48 = v33[1].m128i_i32[2];
              LOBYTE(v261) = 1;
              LOBYTE(v262) = 0;
              LODWORD(v264) = 0;
              if ( !(unsigned __int8)sub_1E54D70(
                                       a1,
                                       v48,
                                       v48,
                                       ptr[0],
                                       ptr[1],
                                       (_DWORD)a2,
                                       (__int64)&v261,
                                       (__int64)&v262,
                                       (__int64)&v264) )
              {
                if ( (_BYTE)v261 )
                {
                  if ( (_DWORD)v264 != 1 )
                  {
                    v49 = *(_DWORD *)(a1 + 12632);
                    v255 = i;
                    v254 = v22;
                    v50 = a1;
                    v51 = 0;
                    v52 = v49;
                    do
                    {
                      *(_DWORD *)(v50 + 12632) = ++v51;
                      sub_1DFEEB0(v50, (unsigned __int64)a2, v33, a4, 0, a7, a8);
                      v53 = (int)v264;
                      *(_DWORD *)(v50 + 12632) = v52;
                      v21 = (unsigned int)(v53 - 1);
                    }
                    while ( (_DWORD)v21 != v51 );
                    a1 = v50;
                    i = v255;
                    v22 = v254;
                  }
                }
                else
                {
                  v78 = *(_DWORD *)(a1 + 12632);
                  *(_DWORD *)(a1 + 12632) = 0;
                  sub_1DFEEB0(a1, (unsigned __int64)a2, v33, a4, 1, a7, a8);
                  *(_DWORD *)(a1 + 12632) = v78;
                }
              }
              if ( ptr[0] != v268 )
                free(ptr[0]);
            }
            else
            {
              sub_1DFEEB0(a1, (unsigned __int64)a2, v33, a4, 0, a7, a8);
            }
            goto LABEL_11;
          }
          v37 = v33[2].m128i_i16[2];
        }
        switch ( v37 )
        {
          case 141:
            sub_18C74E0(a1, 4, 0, 4);
            v27 = sub_1DF2070(a1, v33[2].m128i_u64[1], (unsigned __int64)a2, v24, v25, v26, a7, a8);
            if ( v27 == (unsigned __int16 *)((char *)&dword_0 + 1) )
              goto LABEL_20;
            v30 = (_DWORD *)v33[3].m128i_i64[0];
            v31 = (_DWORD *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFELL);
            if ( v30 )
            {
              v32 = sub_1DF2070(a1, v33[3].m128i_u64[0], (unsigned __int64)a2, v28, (__int64)v30, v29, a7, a8);
              if ( v32 == (unsigned __int16 *)((char *)&dword_0 + 1) )
                goto LABEL_20;
              v30 = (_DWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFELL);
            }
            sub_180BD30(a1, a4, v33, v31, v30, *(double *)a7.m128_u64);
            sub_190D5E0(a1, a7);
            goto LABEL_11;
          case 412:
            sub_18C74E0(a1, 4, 0, 4);
            v41 = sub_1DF2070(a1, v33[2].m128i_u64[1], (unsigned __int64)a2, v38, v39, v40, a7, a8);
            if ( v41 != (unsigned __int16 *)((char *)&dword_0 + 1) )
              sub_180E220(a1, a4, v33, (_DWORD *)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFFELL), *(double *)a7.m128_u64);
            goto LABEL_20;
          case 127:
            v42 = *(_QWORD **)(a1 + 248);
            v43 = v33[1].m128i_i32[2];
            v44 = v42[2348];
            v45 = (void *)(v33[2].m128i_i32[2] & 0x3FFFFFFF);
            LODWORD(ptr[1]) = 64;
            ptr[0] = v45;
            v46 = (_DWORD *)sub_C0C5D0(v42, (__int64)ptr, v44, v43);
            if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
              operator delete[](ptr[0]);
            sub_18261A0(a1, a4, v33, v46);
            goto LABEL_11;
          case 91:
            sub_18C74E0(a1, 4, 0, 4);
            v54 = v33[4].m128i_u32[2];
            if ( !v54 )
            {
              v68 = v33[3].m128i_u32[2];
              v69 = (unsigned __int64 *)v33[4].m128i_i64[0];
              v264 = v266;
              v265 = 0x400000000LL;
              if ( !(unsigned __int8)sub_1DDF840(a1, v69, v68, 0, (__int64)a2, (__int64)&v264, a7, a8) )
              {
                v92 = v33[2].m128i_u32[2];
                v66 = v265;
                v262 = (const void *)v33[3].m128i_i64[0];
                v263 = v92;
                goto LABEL_66;
              }
LABEL_56:
              if ( v264 != v266 )
                free(v264);
              goto LABEL_20;
            }
            v55 = (unsigned __int64 *)v33[5].m128i_i64[0];
            v264 = v266;
            v265 = 0x400000000LL;
            if ( (unsigned __int8)sub_1DDF840(a1, v55, v54, 0, (__int64)a2, (__int64)&v264, a7, a8) )
              goto LABEL_56;
            v56 = (const void *)v33[3].m128i_i64[0];
            v263 = v33[2].m128i_u32[2];
            v262 = v56;
            if ( (_DWORD)v265 )
            {
              if ( (unsigned __int8)sub_181E980(
                                      a1,
                                      (__int64)v33,
                                      *(_QWORD *)v264,
                                      &v262,
                                      nullptr,
                                      *(double *)a7.m128_u64) )
              {
                v57 = (char *)v268;
                v58 = (char *)v264;
                v59 = 0;
                ptr[1] = (void *)0x400000000LL;
                ptr[0] = v268;
                v60 = 8LL * (unsigned int)v265;
                v61 = v60 - 8;
                v62 = (v60 - 8) >> 3;
                if ( v62 > 4 )
                {
                  v259 = (const void *)(v60 - 8);
                  v256 = 8LL * (unsigned int)v265;
                  v255 = (__int64 *)v264;
                  v254 = (v60 - 8) >> 3;
                  sub_2237220(ptr, v268, v254, 8);
                  v61 = (__int64)v259;
                  v60 = v256;
                  v59 = (int)ptr[1];
                  v58 = (char *)v255;
                  v62 = v254;
                  v57 = (char *)ptr[0] + 8 * LODWORD(ptr[1]);
                }
                if ( v58 + 8 != &v58[v60] )
                {
                  v254 = v62;
                  memcpy(v57, v58 + 8, v61);
                  v59 = (int)ptr[1];
                  LODWORD(v62) = v254;
                }
                v63 = v264;
                v64 = v62 + v59;
                v65 = HIDWORD(v265);
                v66 = v62 + v59;
                LODWORD(ptr[1]) = v62 + v59;
                if ( v264 == v266 || ptr[0] == v268 )
                {
                  if ( HIDWORD(v265) < v64 )
                    sub_2237220(&v264, v266, v64, 8);
                  v110 = (unsigned int)v265;
                  v66 = v265;
                  if ( HIDWORD(ptr[1]) < (unsigned int)v265 )
                  {
                    sub_2237220(ptr, v268, (unsigned int)v265, 8);
                    v110 = (unsigned int)v265;
                    v66 = v265;
                  }
                  v111 = LODWORD(ptr[1]);
                  v112 = v110;
                  if ( LODWORD(ptr[1]) <= v110 )
                    v112 = LODWORD(ptr[1]);
                  v113 = 0;
                  if ( v112 )
                  {
                    v254 = LODWORD(ptr[1]);
                    do
                    {
                      v114 = (__int64 *)((char *)ptr[0] + v113);
                      v115 = (__int64 *)((char *)v264 + v113);
                      v113 += 8;
                      v116 = *v115;
                      *v115 = *v114;
                      *v114 = v116;
                    }
                    while ( 8 * v112 != v113 );
                    v111 = v254;
                  }
                  v63 = ptr[0];
                  if ( v111 >= v110 )
                  {
                    if ( v111 > v110 )
                    {
                      v119 = v110;
                      v120 = (char *)ptr[0] + 8 * v112;
                      if ( v120 != (char *)ptr[0] + 8 * v111 )
                      {
                        v256 = v112;
                        v255 = (__int64 *)v111;
                        v254 = v110;
                        memcpy((char *)v264 + 8 * v110, v120, 8 * v111 - 8 * v112);
                        LODWORD(v112) = v256;
                        LODWORD(v111) = (_DWORD)v255;
                        v119 = v265;
                        v63 = ptr[0];
                        LODWORD(v110) = v254;
                      }
                      LODWORD(ptr[1]) = v112;
                      v66 = v119 + v111 - v110;
                      LODWORD(v265) = v66;
                    }
                  }
                  else
                  {
                    v117 = v111;
                    v118 = (char *)v264 + 8 * v112;
                    if ( v118 != (char *)v264 + 8 * v110 )
                    {
                      v256 = v112;
                      v255 = (__int64 *)v110;
                      v254 = v111;
                      memcpy((char *)ptr[0] + 8 * v111, v118, 8 * v110 - 8 * v112);
                      LODWORD(v112) = v256;
                      LODWORD(v110) = (_DWORD)v255;
                      v117 = (int)ptr[1];
                      v63 = ptr[0];
                      LODWORD(v111) = v254;
                    }
                    v66 = v112;
                    LODWORD(v265) = v112;
                    LODWORD(ptr[1]) = v117 + v110 - v111;
                  }
                }
                else
                {
                  v264 = ptr[0];
                  v67 = v265;
                  v265 = __PAIR64__(HIDWORD(ptr[1]), v64);
                  ptr[0] = v63;
                  ptr[1] = (void *)__PAIR64__(v65, v67);
                }
                if ( v63 != v268 )
                {
                  free(v63);
                  v66 = v265;
                }
LABEL_66:
                v93 = sub_15F3610(a1, v33, v262, v263, v264, v66);
                if ( v93 )
                  sub_B8CC60(a4, v93, v94, v95, v96, v97);
              }
              goto LABEL_56;
            }
            sub_168B9F0((__int64)ptr, (__int64 *)(a1 + 8), v33[1].m128i_u32[2], 0xC9Cu, 0);
            if ( v270 )
            {
              sub_AE9DF0(v269, (__int64)v33, 0xEu);
            }
            else
            {
              if ( !v272 )
              {
LABEL_79:
                sub_15F7200(ptr);
                goto LABEL_56;
              }
              v254 = sub_168B9E0(ptr);
              v125 = v268[0];
              if ( v268[0] )
                v125 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v268[0] + 32LL))(v268[0]);
              v261 = v125;
              v126 = sub_1587BC0(v254, &v261, v121, v122, v123, v124);
              sub_AE9DF0((unsigned __int8 **)(*v126 + 32LL * v271 + 8), (__int64)v33, 0xEu);
            }
            if ( v270 )
            {
              sub_AE9DF0(v269, 1, 2u);
            }
            else if ( v272 )
            {
              v129 = sub_168B9E0(ptr);
              v132 = v268[0];
              if ( v268[0] )
                v132 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v268[0] + 32LL))(v268[0]);
              v261 = v132;
              v133 = sub_1587BC0(v129, &v261, v127, v128, v130, v131);
              sub_AE9DF0((unsigned __int8 **)(*v133 + 32LL * v271 + 8), 1, 2u);
            }
            goto LABEL_79;
          case 206:
            v254 = (unsigned __int64)sub_1E0C890(
                                       (__m128 *)a1,
                                       (unsigned __int64)a2,
                                       (__int64)v33,
                                       (_DWORD *)v33[2].m128i_i64[1],
                                       a4,
                                       a7,
                                       a8);
            if ( v254 )
            {
              v70 = (__int64 *)v33[3].m128i_i64[1];
              v71 = *(_QWORD *)(a1 + 248);
              v256 = v33[3].m128i_u32[0];
              v255 = v70;
              v72 = (__m128i *)sub_1E083C0((__int64 *)(v71 + 2352), 64, 3u);
              v73 = v254;
              v254 = (unsigned __int64)v72;
              sub_B2E6C0(v72, v71, v33, v73, v255, v256);
              sub_B8CC60(a4, v254, v74, v75, v76, v77);
            }
            goto LABEL_11;
          case 202:
            v79 = sub_1E0C890(
                    (__m128 *)a1,
                    (unsigned __int64)a2,
                    (__int64)v33,
                    (_DWORD *)v33[2].m128i_i64[1],
                    a4,
                    a7,
                    a8);
            if ( v79 )
            {
              v80 = v33[3].m128i_u32[0];
              v81 = *(_QWORD *)(a1 + 248);
              v82 = (const void *)v33[3].m128i_i64[1];
              v83 = v33[4].m128i_i32[0];
              v84 = v33[5].m128i_u8[0];
              v257 = (const void *)v33[4].m128i_i64[1];
              v85 = v33[4].m128i_u32[1];
              v260 = v80;
              v259 = v82;
              LODWORD(v256) = v83;
              v258 = v85;
              LODWORD(v255) = v84;
              v254 = v81;
              v86 = sub_1E083C0((__int64 *)(v81 + 2352), 96, 3u);
              v87 = v254;
              v254 = v86;
              sub_B2E4F0(v86, v87, v33, (__int64)v79, v259, v260, v256, v257, v258, (char)v255, a4);
              sub_B8CC60(a4, v254, v88, v89, v90, v91);
            }
            goto LABEL_11;
        }
        if ( v37 != 167 )
          break;
        sub_18C74E0(a1, 4, 0, 4);
        v101 = sub_1DF2070(a1, v33[2].m128i_u64[1], (unsigned __int64)a2, v98, v99, v100, a7, a8);
        if ( v101 != (unsigned __int16 *)((char *)&dword_0 + 1) )
        {
          v104 = v33[3].m128i_u64[0];
          v105 = (_DWORD *)((unsigned __int64)v101 & 0xFFFFFFFFFFFFFFFELL);
          if ( v104 )
          {
            v106 = sub_1DF2070(a1, v33[3].m128i_u64[0], (unsigned __int64)a2, v102, v104, v103, a7, a8);
            if ( v106 == (unsigned __int16 *)((char *)&dword_0 + 1) )
              goto LABEL_20;
            v104 = (unsigned __int64)v106 & 0xFFFFFFFFFFFFFFFELL;
          }
          v107 = v33[3].m128i_u64[1];
          if ( !v107 )
            goto LABEL_76;
          v108 = v33[3].m128i_u64[1];
          v254 = v104;
          v109 = sub_1DF2070(a1, v108, (unsigned __int64)a2, v102, v104, v107, a7, a8);
          if ( v109 != (unsigned __int16 *)((char *)&dword_0 + 1) )
          {
            v104 = v254;
            v107 = (unsigned __int64)v109 & 0xFFFFFFFFFFFFFFFELL;
LABEL_76:
            sub_1825EE0(a1, a4, v33, v105, v104, v107, *(double *)a7.m128_u64);
          }
        }
LABEL_20:
        ++i;
        sub_190D5E0(a1, a7);
        if ( (__int64 *)v22 == i )
          return;
      }
      switch ( v37 )
      {
        case 419:
          sub_1816B80((__int64 *)a1, a4, v33, v33[2].m128i_i64[1], 1);
          continue;
        case 423:
          sub_1E00240(a1, (unsigned __int64)a2, (__int64)v33, a4, v19, a7, a8);
          continue;
        case 296:
          sub_1E3F110(a1, a2, (__int64)v33, a4, *(double *)a7.m128_u64, a8, a9, a10, v35, v36, a13, a14);
          continue;
        case 346:
          sub_18C74E0(a1, 4, 0, 4);
          v34 = v33[2].m128i_i64[1];
          v140 = sub_1DF2070(a1, v34, (unsigned __int64)a2, v134, v135, v136, a7, a8);
          if ( v140 == (unsigned __int16 *)((char *)&dword_0 + 1)
            || (v34 = v33[3].m128i_i64[0],
                v254 = (unsigned __int64)sub_1DF2070(a1, v34, (unsigned __int64)a2, v137, v138, v139, a7, a8),
                v254 == 1)
            || (v34 = v33[3].m128i_i64[1],
                v256 = (__int64)sub_1DF2070(a1, v34, (unsigned __int64)a2, v141, v142, v143, a7, a8),
                v256 == 1) )
          {
            sub_190D5E0(a1, a7);
          }
          else
          {
            v144 = (__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL);
            v255 = *(__int64 **)(a1 + 248);
            v145 = (__m128i *)sub_1E083C0(v144, 64, 3u);
            v146 = v254 & 0xFFFFFFFFFFFFFFFELL;
            v254 = (unsigned __int64)v145;
            sub_B18220(
              v145,
              (__int64)v255,
              v33,
              (unsigned __int64)v140 & 0xFFFFFFFFFFFFFFFELL,
              v146,
              v256 & 0xFFFFFFFFFFFFFFFELL);
            v34 = v254;
            sub_B8CC60(a4, v254, v147, v148, v149, v150);
            sub_190D5E0(a1, a7);
          }
          break;
      }
      if ( v33[2].m128i_i16[2] == 111 )
      {
        sub_18C74E0(a1, 4, 0, 4);
        v34 = v33[2].m128i_i64[1];
        v157 = sub_1DF2070(a1, v34, (unsigned __int64)a2, v151, v152, v153, a7, a8);
        if ( v157 == (unsigned __int16 *)((char *)&dword_0 + 1)
          || (v34 = v33[3].m128i_i64[0],
              v158 = sub_1DF2070(a1, v34, (unsigned __int64)a2, v154, v155, v156, a7, a8),
              v158 == (unsigned __int16 *)((char *)&dword_0 + 1)) )
        {
          sub_190D5E0(a1, a7);
        }
        else
        {
          v34 = a4;
          sub_16266A0(
            *(__int64 **)(a1 + 624),
            a4,
            v33,
            (_DWORD *)((unsigned __int64)v157 & 0xFFFFFFFFFFFFFFFELL),
            (_DWORD *)((unsigned __int64)v158 & 0xFFFFFFFFFFFFFFFELL));
          sub_190D5E0(a1, a7);
        }
      }
      if ( v33[2].m128i_i16[2] == 115 )
      {
        sub_18C74E0(a1, 4, 0, 4);
        v34 = v33[2].m128i_i64[1];
        v162 = sub_1DF2070(a1, v34, (unsigned __int64)a2, v159, v160, v161, a7, a8);
        if ( v162 != (unsigned __int16 *)((char *)&dword_0 + 1) )
        {
          v165 = (_DWORD *)v33[3].m128i_i64[0];
          v166 = (_DWORD *)((unsigned __int64)v162 & 0xFFFFFFFFFFFFFFFELL);
          if ( !v165 )
            goto LABEL_128;
          v34 = v33[3].m128i_i64[0];
          v167 = sub_1DF2070(a1, v34, (unsigned __int64)a2, v163, (__int64)v165, v164, a7, a8);
          if ( v167 != (unsigned __int16 *)((char *)&dword_0 + 1) )
          {
            v165 = (_DWORD *)((unsigned __int64)v167 & 0xFFFFFFFFFFFFFFFELL);
LABEL_128:
            v34 = a4;
            sub_16279F0(*(_QWORD **)(a1 + 624), a4, v33, v166, v165);
            sub_190D5E0(a1, a7);
            goto LABEL_129;
          }
        }
        sub_190D5E0(a1, a7);
      }
LABEL_129:
      if ( v33[2].m128i_i16[2] == 112 )
      {
        sub_18C74E0(a1, 4, 0, 4);
        v171 = v33[2].m128i_u64[1];
        if ( v171
          && (v172 = sub_1DF2070(a1, v171, (unsigned __int64)a2, v168, v169, v170, a7, a8), (unsigned __int64)v172 > 1) )
        {
          v173 = (_DWORD *)((unsigned __int64)v172 & 0xFFFFFFFFFFFFFFFELL);
        }
        else
        {
          v173 = nullptr;
        }
        v174 = v33[3].m128i_u64[0];
        if ( v174
          && (v175 = sub_1DF2070(a1, v174, (unsigned __int64)a2, v168, v169, v170, a7, a8), (unsigned __int64)v175 > 1) )
        {
          v176 = (__m128 *)((unsigned __int64)v175 & 0xFFFFFFFFFFFFFFFELL);
        }
        else
        {
          v176 = nullptr;
        }
        v34 = v33[3].m128i_i64[1];
        if ( v34
          && (v254 = (unsigned __int64)v176,
              v177 = sub_1DF2070(a1, v34, (unsigned __int64)a2, v168, (__int64)v176, v170, a7, a8),
              v176 = (__m128 *)v254,
              (unsigned __int64)v177 > 1) )
        {
          v178 = (_DWORD *)((unsigned __int64)v177 & 0xFFFFFFFFFFFFFFFELL);
        }
        else
        {
          v178 = nullptr;
        }
        if ( v173 )
        {
          v34 = a4;
          sub_1627FC0(*(_QWORD **)(a1 + 624), a4, v33, v173, v176, v178);
        }
        sub_190D5E0(a1, a7);
      }
      v179 = v33[2].m128i_u16[2];
      if ( (_WORD)v179 == 92 )
      {
        v180 = sub_B26040(v33, *(_QWORD *)(a1 + 248));
        sub_B8CC60(a4, (__int64)v180, v181, v182, v183, v184);
        *(_QWORD *)(a4 + 48) = sub_19F7000(*(_QWORD *)(a1 + 680), *(_QWORD *)(a4 + 48));
      }
      else
      {
        if ( (_WORD)v179 == 319 )
        {
          v185 = sub_B33F30(*(_QWORD *)(a1 + 248), v33[1].m128i_u32[2] | ((unsigned __int64)v33[1].m128i_u32[2] << 32));
          v189 = v33[3].m128i_u32[0];
          v190 = v185;
          if ( (_DWORD)v189 )
          {
            sub_1E06AB0(ptr, a1, (unsigned __int64)a2, 19, (__int64 *)v33[2].m128i_i64[1], v189);
            v191 = LODWORD(ptr[1]);
            v192 = *(unsigned int *)(v190 + 52);
            v188 = ptr[0];
            *(_DWORD *)(v190 + 48) = 0;
            v193 = 8 * v191;
            v194 = v193 >> 3;
            if ( v193 >> 3 > v192 )
            {
              v255 = (__int64 *)v193;
              v254 = (unsigned __int64)v188;
              sub_2237220(v190 + 40, v190 + 56, v193 >> 3, 8);
              v193 = (__int64)v255;
              v188 = (_QWORD *)v254;
            }
            v195 = *(unsigned int *)(v190 + 48);
            v196 = *(_QWORD *)(v190 + 40) + 8 * v195;
            v186 = 0;
            if ( v193 )
            {
              do
              {
                *(_QWORD *)(v196 + 8 * v186) = v188[v186];
                ++v186;
              }
              while ( v194 != v186 );
            }
            v187 = v194 + v195;
            v197 = ptr[0];
            *(_DWORD *)(v190 + 48) = v187;
            if ( v197 != v268 )
              free(v197);
          }
          sub_B8CC60(a4, v190, v186, v187, (__int64)v188, v189);
          continue;
        }
        if ( (((_WORD)v179 - 195) & 0xFFFD) == 0 && (*(_BYTE *)(a4 + 29) & 1) != 0 )
        {
          v200 = sub_B8C3D0(a4, v34, (unsigned int)(v179 - 195), (__int64)v18, v19, v20);
          v21 = *v200;
          v18 = (__int64 *)(*v200 + 8LL * *((unsigned int *)v200 + 2));
          if ( *v200 >= (unsigned __int64)v18 )
          {
            while ( (__int64 *)v21 != v18 )
            {
              v223 = *v18++;
              if ( *(_WORD *)(v223 + 36) == 195 )
                goto LABEL_11;
            }
          }
          else
          {
            v201 = (__int64 *)*v200;
            while ( 1 )
            {
              v21 = *v201;
              if ( *(_WORD *)(*v201 + 36) == 195 )
                break;
              if ( v18 == ++v201 )
                goto LABEL_165;
            }
            if ( v18 != v201 )
              continue;
          }
LABEL_165:
          if ( (*(_BYTE *)(a4 + 29) & 1) != 0 )
          {
            v202 = sub_B8C3D0(a4, v34, v21, (__int64)v18, v19, v20);
            v21 = *v202;
            v18 = (__int64 *)(*v202 + 8LL * *((unsigned int *)v202 + 2));
            if ( *v202 >= (unsigned __int64)v18 )
            {
              while ( (__int64 *)v21 != v18 )
              {
                v214 = *v18++;
                if ( *(_WORD *)(v214 + 36) == 197 )
                  goto LABEL_11;
              }
            }
            else
            {
              v203 = (__int64 *)*v202;
              while ( 1 )
              {
                v21 = *v203;
                if ( *(_WORD *)(*v203 + 36) == 197 )
                  break;
                if ( v18 == ++v203 )
                  goto LABEL_189;
              }
              if ( v18 != v203 )
                continue;
            }
          }
LABEL_189:
          v179 = v33[2].m128i_u16[2];
        }
        if ( (unsigned __int16)v179 > 0x5Bu )
        {
          if ( (unsigned __int16)v179 <= 0x60u )
          {
            v198 = *(_QWORD *)(a1 + 808);
            v199 = sub_1E00060((__int64)v33);
            sub_1CABEE0(v198, a4, v33, v199);
            continue;
          }
          if ( (_WORD)v179 == 99 )
          {
            v204 = *(__int64 **)(a1 + 736);
            v205 = 0;
LABEL_173:
            sub_1A90D50(v204, a4, v33, v205, 1);
            continue;
          }
        }
        v206 = v179 & 0xFFFFFFFB;
        if ( (v179 & 0xFFFB) == 0x61 )
        {
          v204 = *(__int64 **)(a1 + 736);
          v205 = (unsigned int)((_WORD)v179 == 101) + 1;
          goto LABEL_173;
        }
        switch ( (_WORD)v179 )
        {
          case 0x148:
            if ( (*(_BYTE *)(a4 + 29) & 1) != 0 )
            {
              v212 = sub_B8C3D0(a4, v34, v206, (__int64)v18, v19, v20);
              v21 = *v212;
              v18 = (__int64 *)(*v212 + 8LL * *((unsigned int *)v212 + 2));
              if ( *v212 >= (unsigned __int64)v18 )
              {
                while ( (__int64 *)v21 != v18 )
                {
                  v215 = *v18++;
                  if ( *(_WORD *)(v215 + 36) == 328 )
                    goto LABEL_11;
                }
              }
              else
              {
                v213 = (__int64 *)*v212;
                while ( 1 )
                {
                  v21 = *v213;
                  if ( *(_WORD *)(*v213 + 36) == 328 )
                    break;
                  if ( v18 == ++v213 )
                    goto LABEL_181;
                }
                if ( v18 != v213 )
                  break;
              }
            }
LABEL_181:
            v207 = sub_B2A560(v33, *(_QWORD *)(a1 + 248));
            sub_B8CC60(a4, (__int64)v207, v208, v209, v210, v211);
            break;
          case 0x143:
            if ( (*(_BYTE *)(a4 + 29) & 1) != 0 )
            {
              v221 = sub_B8C3D0(a4, v34, v206, (__int64)v18, v19, v20);
              v21 = *v221;
              v18 = (__int64 *)(*v221 + 8LL * *((unsigned int *)v221 + 2));
              if ( *v221 >= (unsigned __int64)v18 )
              {
                while ( (__int64 *)v21 != v18 )
                {
                  v234 = *v18++;
                  if ( *(_WORD *)(v234 + 36) == 323 )
                    goto LABEL_11;
                }
              }
              else
              {
                v222 = (__int64 *)*v221;
                while ( 1 )
                {
                  v21 = *v222;
                  if ( *(_WORD *)(*v222 + 36) == 323 )
                    break;
                  if ( v18 == ++v222 )
                    goto LABEL_198;
                }
                if ( v18 != v222 )
                  break;
              }
            }
LABEL_198:
            v216 = sub_B2A2B0(v33, *(_QWORD *)(a1 + 248));
            sub_B8CC60(a4, (__int64)v216, v217, v218, v219, v220);
            break;
          case 0x40:
            v224 = sub_B252A0(v33, *(_QWORD *)(a1 + 248));
            sub_B8CC60(a4, (__int64)v224, v225, v226, v227, v228);
            break;
          case 0xA4:
            if ( (*(_BYTE *)(a4 + 29) & 1) != 0 )
            {
              v235 = sub_B8C3D0(a4, v34, v206, (__int64)v18, v19, v20);
              v21 = *v235;
              v18 = (__int64 *)(*v235 + 8LL * *((unsigned int *)v235 + 2));
              if ( *v235 >= (unsigned __int64)v18 )
              {
                while ( (__int64 *)v21 != v18 )
                {
                  v250 = *v18++;
                  if ( *(_WORD *)(v250 + 36) == 164 )
                    goto LABEL_11;
                }
              }
              else
              {
                v236 = (__int64 *)*v235;
                while ( 1 )
                {
                  v21 = *v236;
                  if ( *(_WORD *)(*v236 + 36) == 164 )
                    break;
                  if ( v18 == ++v236 )
                    goto LABEL_215;
                }
                if ( v18 != v236 )
                  break;
              }
            }
LABEL_215:
            v229 = sub_B24030(v33, *(_QWORD *)(a1 + 248));
            sub_B8CC60(a4, (__int64)v229, v230, v231, v232, v233);
            break;
          default:
            if ( (v33[2].m128i_i8[6] & 8) != 0 && a5 )
            {
              v237 = *(_BYTE **)(a1 + 11280);
              if ( v237 )
                v237 = sub_1E0B9C0(*(_BYTE **)(a1 + 11280), a6);
              v254 = (unsigned __int64)v237;
              v268[0] = a4;
              a7 = _mm_loadh_ps((const double *)&v254);
              *(__m128 *)ptr = a7;
              sub_1E05CD0(a5, (const __m128i *)ptr);
            }
            else
            {
              v238 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
                v238 = *(_QWORD *)v238;
              if ( v238 )
              {
                if ( (*(_BYTE *)(v238 + 8) & 0x7Fu) - 59 > 2 )
                  v238 = 0;
                else
                  v238 -= 64LL;
              }
              v239 = sub_B72F20(a4);
              sub_19A2CD0((__int64)ptr, a1, v238, 0, v239, v240);
              v245 = sub_1E08400(v33, *(__int64 **)(a1 + 248), a1, (unsigned __int64)a2, a7, a8);
              if ( v245 && (unsigned __int8)sub_1DFFB00(a4, (__int64)v33, v241, v242, v243, v244) )
                sub_B8CC60(a4, v245, v246, v247, v248, v249);
              sub_19A2DA0((__int64 *)ptr);
            }
            break;
        }
      }
LABEL_11:
      ;
    }
  }
}
