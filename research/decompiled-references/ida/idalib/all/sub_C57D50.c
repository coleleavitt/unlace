__int64 __fastcall sub_C57D50(
        unsigned __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7)
{
  const __m128i *v8; // r14
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  unsigned __int32 v12; // r12d
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rdi
  unsigned __int64 v27; // rcx
  __m128i v28; // xmm0
  __m128i si128; // xmm1
  __int64 v30; // r9
  char v31; // al
  __int64 v32; // rax
  __m128i *v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  __int64 v53; // rax
  __int16 v54; // dx
  __int64 v55; // r9
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE *v59; // rbx
  __int64 v60; // r12
  _WORD *v61; // r15
  __int64 v62; // rbp
  __int64 v63; // rdi
  __int64 v64; // rdi
  int v65; // esi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rbx
  int v70; // ebp
  __int64 v71; // r12
  unsigned __int64 v72; // rax
  __int64 v73; // r9
  __int64 (__fastcall *v74)(__int64); // rax
  _WORD *v75; // rax
  int v76; // eax
  unsigned __int8 **v77; // rax
  unsigned __int8 **v79; // rbx
  __int64 v80; // rax
  __m128i *v81; // rbp
  __int8 *v82; // rdi
  __m128i *v83; // r12
  __m128i v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned __int64 v90; // rax
  int v91; // ebx
  int v92; // esi
  __int64 v93; // r9
  unsigned int v94; // ebp
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rbp
  __int64 v100; // r12
  __int64 v101; // r12
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // r8
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __m128i *v109; // rsi
  __m128i v110; // rax
  _QWORD *v111; // rbp
  __int64 v112; // rdx
  _QWORD *v113; // rax
  _QWORD *v114; // rcx
  _QWORD *v115; // rdx
  __m128i *v116; // rax
  int v117; // edx
  __m128i v118; // xmm6
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // rax
  _QWORD *v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rbx
  _QWORD *v127; // rcx
  __int64 v128; // rax
  _QWORD *v129; // r14
  int v130; // eax
  unsigned __int64 v131; // rbp
  char v132; // al
  __int64 v133; // rbp
  unsigned __int64 v134; // rax
  __m128i v135; // xmm4
  __int16 v136; // dx
  _BYTE *v137; // rdi
  __int64 v138; // r15
  unsigned __int64 v139; // r15
  unsigned int v140; // ebp
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  _QWORD *v145; // rax
  __int64 v146; // r14
  __int64 v147; // r13
  _QWORD *v148; // r15
  __int64 v149; // r12
  __int64 v150; // r12
  __int64 v151; // rdx
  unsigned __int64 v152; // rax
  _BYTE *v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 (*v157)(void); // rax
  _WORD *v158; // rax
  _QWORD *v159; // rax
  __int64 v160; // r15
  unsigned __int64 v161; // rax
  __int32 v162; // eax
  __int64 v163; // rax
  int v164; // esi
  __int64 v165; // rsi
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  char v169; // al
  unsigned __int64 v170; // rdx
  unsigned int v171; // eax
  __int64 v172; // rdi
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rax
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // rdx
  __int64 v179; // rdx
  __int64 v180; // rax
  __int64 m; // rdx
  __m128i v182; // xmm7
  __m128i v183; // rax
  __m128i v184; // rax
  __m128i *v185; // rbx
  __m128i *v186; // rax
  __int32 v187; // edx
  __m128i v188; // xmm6
  __int64 v189; // rdx
  _QWORD *v190; // rax
  _QWORD *v191; // rsi
  _QWORD *v192; // rdx
  __int64 v193; // rdx
  _QWORD *v194; // rax
  _QWORD *v195; // rsi
  _QWORD *v196; // rdx
  unsigned __int64 v197; // rax
  __int64 v198; // rdi
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // rdx
  __int64 v205; // rdx
  __int64 v206; // rax
  __int64 j; // rdx
  __m128i v208; // xmm5
  __m128i v209; // rax
  __m128i v210; // rax
  __m128i *v211; // rbx
  __m128i *v212; // rax
  __int32 v213; // edx
  __m128i v214; // xmm5
  __int64 v215; // rdx
  _QWORD *v216; // rax
  _QWORD *v217; // rsi
  _QWORD *v218; // rdx
  __int64 v219; // rdx
  _QWORD *v220; // rax
  _QWORD *v221; // rsi
  _QWORD *v222; // rdx
  __int64 v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rdx
  __int64 v226; // rax
  __int64 i; // rdx
  __m128i v228; // xmm7
  __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rdx
  __int64 v232; // rax
  __int64 k; // rdx
  __m128i v234; // xmm7
  __int64 v235; // [rsp-10h] [rbp-428h]
  __int64 v236; // [rsp-8h] [rbp-420h]
  __int128 v238; // [rsp+10h] [rbp-408h]
  __int64 v239; // [rsp+10h] [rbp-408h]
  __m128i *v240; // [rsp+20h] [rbp-3F8h]
  unsigned int v241; // [rsp+28h] [rbp-3F0h]
  __int64 *v242; // [rsp+30h] [rbp-3E8h]
  _DWORD *v243; // [rsp+30h] [rbp-3E8h]
  unsigned int v244; // [rsp+30h] [rbp-3E8h]
  unsigned __int64 v245; // [rsp+40h] [rbp-3D8h]
  unsigned __int8 v246; // [rsp+48h] [rbp-3D0h]
  __int64 v247; // [rsp+48h] [rbp-3D0h]
  __int64 v248; // [rsp+50h] [rbp-3C8h]
  _QWORD *v249; // [rsp+50h] [rbp-3C8h]
  _QWORD *v250; // [rsp+58h] [rbp-3C0h]
  __int64 v251; // [rsp+58h] [rbp-3C0h]
  unsigned __int64 v252; // [rsp+60h] [rbp-3B8h]
  _QWORD *v253; // [rsp+68h] [rbp-3B0h]
  __int64 v254; // [rsp+70h] [rbp-3A8h]
  __int64 v255; // [rsp+78h] [rbp-3A0h]
  unsigned __int64 v256; // [rsp+88h] [rbp-390h]
  unsigned __int64 v257; // [rsp+98h] [rbp-380h]
  __int64 v258; // [rsp+98h] [rbp-380h]
  __int64 v259; // [rsp+A0h] [rbp-378h]
  unsigned int v260; // [rsp+A8h] [rbp-370h]
  const __m128i *v261; // [rsp+B8h] [rbp-360h]
  __int64 v262[2]; // [rsp+C0h] [rbp-358h] BYREF
  __int64 *v263; // [rsp+D0h] [rbp-348h] BYREF
  unsigned int v264; // [rsp+D8h] [rbp-340h]
  __m128i v265; // [rsp+E0h] [rbp-338h]
  unsigned __int128 v266; // [rsp+F0h] [rbp-328h] BYREF
  __m128i *v267; // [rsp+100h] [rbp-318h]
  __m128i v268[2]; // [rsp+108h] [rbp-310h] BYREF
  char v269; // [rsp+128h] [rbp-2F0h]
  _QWORD *v270[8]; // [rsp+130h] [rbp-2E8h] BYREF
  _QWORD v271[8]; // [rsp+170h] [rbp-2A8h] BYREF
  _OWORD v272[4]; // [rsp+1B0h] [rbp-268h] BYREF
  __m128i v273; // [rsp+1F0h] [rbp-228h] BYREF
  __int64 v274; // [rsp+200h] [rbp-218h]
  _QWORD v275[3]; // [rsp+208h] [rbp-210h] BYREF
  void *v276; // [rsp+220h] [rbp-1F8h] BYREF
  _BYTE v277[64]; // [rsp+230h] [rbp-1E8h] BYREF
  __int16 v278; // [rsp+270h] [rbp-1A8h]
  __m128i v279; // [rsp+280h] [rbp-198h] BYREF
  __m128i v280; // [rsp+290h] [rbp-188h] BYREF
  __int64 v281; // [rsp+2A0h] [rbp-178h]
  __int64 v282; // [rsp+2A8h] [rbp-170h]
  void *ptr; // [rsp+2B0h] [rbp-168h] BYREF
  _BYTE v284[64]; // [rsp+2C0h] [rbp-158h] BYREF
  __int16 v285; // [rsp+300h] [rbp-118h]
  __m128i v286; // [rsp+310h] [rbp-108h] BYREF
  __m128i v287; // [rsp+320h] [rbp-F8h] BYREF
  int v288; // [rsp+330h] [rbp-E8h]

  v8 = a2;
  v9 = (_DWORD *)a1;
  v238 = __PAIR128__(a4, a3);
  v10 = sub_C00A40(a1, (__int64)a2, a3, a4, a5);
  v11 = v10;
  if ( a6[57].m128i_i8[2] && a6[2].m128i_i32[2] > 1u )
  {
LABEL_49:
    LODWORD(v9) = 0;
    return (unsigned int)v9;
  }
  if ( !a6[2].m128i_i32[3] )
  {
    sub_E33C80(a6, v10, 2393, 0);
    LODWORD(v9) = 0;
    return (unsigned int)v9;
  }
  v12 = a6[2].m128i_u32[2];
  if ( v12 > *(_DWORD *)(sub_E32240(a6) + 132) )
  {
    v79 = (unsigned __int8 **)sub_E33C80(a6, v11, 2402, 0);
    v80 = sub_E32240(a6);
    if ( v79 )
      sub_AE9DF0(v79, *(unsigned int *)(v80 + 132), 3u);
    goto LABEL_49;
  }
  v13 = a5 + 72;
  v14 = *(_QWORD *)(sub_B8C1B0(a5 + 72) + 16);
  if ( (v14 & 4) != 0 )
    v19 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v19 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v19 )
    BUG();
  v245 = v19 - 64;
  sub_7052B0((__int64 *)(*(_QWORD *)(v19 + 40) + 96LL), *(_QWORD *)(v19 + 40), v15, v16, v17, v18);
  v260 = *(_DWORD *)(*(_QWORD *)(v19 + 64) + 20LL);
  if ( v260 )
  {
    v77 = (unsigned __int8 **)sub_E33C80(a6, v11, 2504, 0);
    if ( v77 )
      sub_AE9DF0(v77, v245, 0xAu);
    goto LABEL_49;
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(v19 + 40) + 96LL), *(_QWORD *)(v19 + 40), v20, v21, v22, v23);
  v24 = *(_QWORD *)(v19 + 64);
  v25 = a2[3].m128i_i64[0];
  v26 = &a6[51].m128i_i64[1];
  v27 = a2[3].m128i_u32[2];
  v28 = _mm_loadu_si128(a2);
  v267 = a6;
  LODWORD(v24) = *(_DWORD *)(v24 + 16);
  v266 = __PAIR128__(v27, v25);
  si128 = _mm_load_si128((const __m128i *)&v266);
  v265 = v28;
  v272[0] = v28;
  v272[1] = si128;
  v268[0] = v28;
  v288 = ((_DWORD)v24 == 0) + 1;
  v268[1] = si128;
  v286 = v28;
  v287 = si128;
  if ( !sub_C2F580(&a6[51].m128i_i64[1], (unsigned __int64 *)&v286, &v263) )
  {
    v105 = a6[52].m128i_u32[2];
    v270[0] = v263;
    v106 = a6[52].m128i_i32[0] + 1;
    if ( 4 * v106 < (unsigned int)(3 * v105) )
    {
      v107 = (unsigned int)(v105 - a6[52].m128i_i32[1] - v106);
      v108 = (unsigned int)v105 >> 3;
      v109 = (__m128i *)v270;
      if ( (unsigned int)v107 > (unsigned int)v108 )
      {
LABEL_101:
        a6[52].m128i_i32[0] = v106;
        v110.m128i_i64[0] = sub_A4F710(v26, v109, v107, v108, v105);
        v111 = v270[0];
        v280 = 0u;
        v279 = v110;
        if ( sub_A4F650(v270[0], &v279) )
        {
          v112 = v111[3];
          if ( v112 == v280.m128i_i64[1] )
          {
            v113 = (_QWORD *)v111[2];
            v114 = &v113[v112];
            if ( v113 == v114 )
            {
LABEL_108:
              v116 = (__m128i *)v270[0];
              v117 = v288;
              *(__m128i *)v270[0] = _mm_load_si128(&v286);
              v118 = _mm_load_si128(&v287);
              v116[2].m128i_i32[0] = v117;
              v116[1] = v118;
              v31 = 1;
              goto LABEL_11;
            }
            v115 = (_QWORD *)v280.m128i_i64[0];
            while ( *v113 == *v115 )
            {
              ++v113;
              ++v115;
              if ( v114 == v113 )
                goto LABEL_108;
            }
          }
        }
        --a6[52].m128i_i32[1];
        goto LABEL_108;
      }
      v244 = v105;
      v240 = (__m128i *)a6[51].m128i_i64[1];
      v197 = ((((((((((unsigned int)(v105 - 1) | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 2)
                  | (unsigned int)(v105 - 1)
                  | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 4)
                | (((unsigned int)(v105 - 1) | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 2)
                | (unsigned int)(v105 - 1)
                | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 8)
              | (((((unsigned int)(v105 - 1) | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 2)
                | (unsigned int)(v105 - 1)
                | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 4)
              | (((unsigned int)(v105 - 1) | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 2)
              | (unsigned int)(v105 - 1)
              | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 16)
            | (((((((unsigned int)(v105 - 1) | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 2)
                | (unsigned int)(v105 - 1)
                | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 4)
              | (((unsigned int)(v105 - 1) | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 2)
              | (unsigned int)(v105 - 1)
              | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 8)
            | (((((unsigned int)(v105 - 1) | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 2)
              | (unsigned int)(v105 - 1)
              | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 4)
            | (((unsigned int)(v105 - 1) | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1)) >> 2)
            | (unsigned int)(v105 - 1)
            | ((unsigned __int64)(unsigned int)(v105 - 1) >> 1))
           + 1;
      if ( (unsigned int)v197 < 0x40 )
        LODWORD(v197) = 64;
      a6[52].m128i_i32[2] = v197;
      v198 = 40LL * (unsigned int)v197;
      a6[51].m128i_i64[1] = sub_22300B0(v198, 8, 64, (unsigned __int64)(unsigned int)(v105 - 1) >> 1, v105, v30);
      if ( !v240 )
      {
        a6[52].m128i_i64[0] = 0;
        v223 = sub_A4F710(v198, 8, v199, v200, v244);
        v279.m128i_i64[1] = v224;
        v225 = a6[52].m128i_u32[2];
        v279.m128i_i64[0] = v223;
        v226 = a6[51].m128i_i64[1];
        for ( i = v226 + 40 * v225; i != v226; *(__m128i *)(v226 - 24) = _mm_load_si128(&v280) )
        {
          v228 = _mm_load_si128(&v279);
          v226 += 40;
          v280 = 0u;
          *(__m128i *)(v226 - 40) = v228;
        }
        goto LABEL_225;
      }
      a6[52].m128i_i64[0] = 0;
      v247 = 40LL * v244;
      v201 = sub_A4F710(v198, 8, v199, &v240->m128i_i8[v247], v244);
      v279.m128i_i64[1] = v204;
      v205 = a6[52].m128i_u32[2];
      v279.m128i_i64[0] = v201;
      v206 = a6[51].m128i_i64[1];
      for ( j = v206 + 40 * v205; j != v206; *(__m128i *)(v206 - 24) = _mm_load_si128(&v280) )
      {
        v208 = _mm_load_si128(&v279);
        v206 += 40;
        v280 = 0u;
        *(__m128i *)(v206 - 40) = v208;
      }
      v209.m128i_i64[0] = sub_A4F710(v198, 8, j, v202, v203);
      v274 = 0;
      v273 = v209;
      v275[0] = 0;
      v210.m128i_i64[0] = sub_A4F720(v198, 8);
      v280 = 0u;
      v279 = v210;
      if ( v240 != (__m128i *)&v240->m128i_i8[v247] )
      {
        v251 = a5 + 72;
        v252 = v19;
        v243 = v9;
        v211 = v240;
        while ( 1 )
        {
          if ( sub_A4F650(v211, &v273) )
          {
            v215 = v211[1].m128i_i64[1];
            if ( v215 == v275[0] )
            {
              v216 = (_QWORD *)v211[1].m128i_i64[0];
              v217 = &v216[v215];
              if ( v216 == v217 )
                goto LABEL_242;
              v218 = (_QWORD *)v274;
              while ( *v216 == *v218 )
              {
                ++v216;
                ++v218;
                if ( v217 == v216 )
                  goto LABEL_242;
              }
            }
          }
          if ( sub_A4F650(v211, &v279) )
          {
            v219 = v211[1].m128i_i64[1];
            if ( v219 == v280.m128i_i64[1] )
            {
              v220 = (_QWORD *)v211[1].m128i_i64[0];
              v221 = &v220[v219];
              if ( v220 == v221 )
                goto LABEL_242;
              v222 = (_QWORD *)v280.m128i_i64[0];
              while ( *v220 == *v222 )
              {
                ++v220;
                ++v222;
                if ( v221 == v220 )
                  goto LABEL_242;
              }
            }
          }
          sub_C2F580(&a6[51].m128i_i64[1], (unsigned __int64 *)v211, v271);
          v212 = (__m128i *)v271[0];
          v213 = v211[2].m128i_i32[0];
          *(__m128i *)v271[0] = _mm_loadu_si128(v211);
          v214 = _mm_loadu_si128(v211 + 1);
          v212[2].m128i_i32[0] = v213;
          v212[1] = v214;
          ++a6[52].m128i_i32[0];
LABEL_242:
          v211 = (__m128i *)((char *)v211 + 40);
          if ( &v240->m128i_i8[v247] == (__int8 *)v211 )
            goto LABEL_223;
        }
      }
LABEL_224:
      operator delete(v240, v247, 8);
LABEL_225:
      v109 = &v286;
      v26 = &a6[51].m128i_i64[1];
      sub_C2F580(&a6[51].m128i_i64[1], (unsigned __int64 *)&v286, v270);
      v106 = a6[52].m128i_i32[0] + 1;
      goto LABEL_101;
    }
    v170 = (unsigned int)(2 * v105 - 1);
    v241 = v105;
    v240 = (__m128i *)a6[51].m128i_i64[1];
    v171 = (((((((((v170 | (v170 >> 1)) >> 2) | v170 | (v170 >> 1)) >> 4)
              | ((v170 | (v170 >> 1)) >> 2)
              | v170
              | (v170 >> 1)) >> 8)
            | ((((v170 | (v170 >> 1)) >> 2) | v170 | (v170 >> 1)) >> 4)
            | ((v170 | (v170 >> 1)) >> 2)
            | v170
            | (v170 >> 1)) >> 16)
          | ((((((v170 | (v170 >> 1)) >> 2) | v170 | (v170 >> 1)) >> 4)
            | ((v170 | (v170 >> 1)) >> 2)
            | v170
            | (v170 >> 1)) >> 8)
          | ((((v170 | (v170 >> 1)) >> 2) | v170 | (v170 >> 1)) >> 4)
          | ((v170 | (v170 >> 1)) >> 2)
          | v170
          | (v170 >> 1))
         + 1;
    if ( v171 < 0x40 )
      v171 = 64;
    a6[52].m128i_i32[2] = v171;
    v172 = 40LL * v171;
    a6[51].m128i_i64[1] = sub_22300B0(v172, 8, 64, v170 >> 1, v105, v30);
    if ( !v240 )
    {
      a6[52].m128i_i64[0] = 0;
      v229 = sub_A4F710(v172, 8, v173, v174, v241);
      v279.m128i_i64[1] = v230;
      v231 = a6[52].m128i_u32[2];
      v279.m128i_i64[0] = v229;
      v232 = a6[51].m128i_i64[1];
      for ( k = v232 + 40 * v231; k != v232; *(__m128i *)(v232 - 24) = _mm_load_si128(&v280) )
      {
        v234 = _mm_load_si128(&v279);
        v232 += 40;
        v280 = 0u;
        *(__m128i *)(v232 - 40) = v234;
      }
      goto LABEL_225;
    }
    a6[52].m128i_i64[0] = 0;
    v247 = 40LL * v241;
    v175 = sub_A4F710(v172, 8, v173, &v240->m128i_i8[v247], v241);
    v279.m128i_i64[1] = v178;
    v179 = a6[52].m128i_u32[2];
    v279.m128i_i64[0] = v175;
    v180 = a6[51].m128i_i64[1];
    for ( m = v180 + 40 * v179; m != v180; *(__m128i *)(v180 - 24) = _mm_load_si128(&v280) )
    {
      v182 = _mm_load_si128(&v279);
      v180 += 40;
      v280 = 0u;
      *(__m128i *)(v180 - 40) = v182;
    }
    v183.m128i_i64[0] = sub_A4F710(v172, 8, m, v176, v177);
    v274 = 0;
    v273 = v183;
    v275[0] = 0;
    v184.m128i_i64[0] = sub_A4F720(v172, 8);
    v280 = 0u;
    v279 = v184;
    if ( v240 == (__m128i *)&v240->m128i_i8[v247] )
      goto LABEL_224;
    v251 = a5 + 72;
    v252 = v19;
    v243 = v9;
    v185 = v240;
    while ( 1 )
    {
      if ( sub_A4F650(v185, &v273) )
      {
        v189 = v185[1].m128i_i64[1];
        if ( v189 == v275[0] )
        {
          v190 = (_QWORD *)v185[1].m128i_i64[0];
          v191 = &v190[v189];
          if ( v190 == v191 )
            goto LABEL_214;
          v192 = (_QWORD *)v274;
          while ( *v190 == *v192 )
          {
            ++v190;
            ++v192;
            if ( v191 == v190 )
              goto LABEL_214;
          }
        }
      }
      if ( sub_A4F650(v185, &v279) )
      {
        v193 = v185[1].m128i_i64[1];
        if ( v193 == v280.m128i_i64[1] )
        {
          v194 = (_QWORD *)v185[1].m128i_i64[0];
          v195 = &v194[v193];
          if ( v194 == v195 )
            goto LABEL_214;
          v196 = (_QWORD *)v280.m128i_i64[0];
          while ( *v194 == *v196 )
          {
            ++v194;
            ++v196;
            if ( v195 == v194 )
              goto LABEL_214;
          }
        }
      }
      sub_C2F580(&a6[51].m128i_i64[1], (unsigned __int64 *)v185, v271);
      v186 = (__m128i *)v271[0];
      v187 = v185[2].m128i_i32[0];
      *(__m128i *)v271[0] = _mm_loadu_si128(v185);
      v188 = _mm_loadu_si128(v185 + 1);
      v186[2].m128i_i32[0] = v187;
      v186[1] = v188;
      ++a6[52].m128i_i32[0];
LABEL_214:
      v185 = (__m128i *)((char *)v185 + 40);
      if ( (__m128i *)((char *)v240 + 40 * v241) == v185 )
      {
LABEL_223:
        v13 = v251;
        v19 = v252;
        v9 = v243;
        goto LABEL_224;
      }
    }
  }
  v31 = 0;
LABEL_11:
  v269 = v31;
  v32 = sub_EEC8C0(v9);
  v33 = a6;
  sub_C0F9C0(&v286, (__int64)a6, v32, a5, (__int64)v8, (__int64)v9, v238);
  LODWORD(v270[0]) = 0;
  BYTE4(v270[0]) &= ~1u;
  v262[0] = (__int64)v270;
  v37 = *(_DWORD *)(v36 + 84);
  v262[1] = 0;
  v38 = v235;
  v39 = v236;
  if ( (unsigned __int16)(v37 >> 13) == 1 )
  {
    v153 = *(_BYTE **)sub_B98F20(a5);
    if ( (*v153 & 6) == 0 && (v153[28] & 1) != 0 )
    {
      v9 = (_DWORD *)sub_B98F20(a5);
      if ( (**(_DWORD **)(*(_QWORD *)v9 + 8LL) & 0x20000) != 0 )
      {
        if ( (unsigned __int8)sub_C10290((__int64)a6) )
        {
LABEL_176:
          v157 = *(__int64 (**)(void))(*(_QWORD *)a5 + 64LL);
          if ( (char *)v157 == (char *)sub_6EF210 )
            v158 = (_WORD *)sub_B7F750((_QWORD *)a5, &v279, (__int64)sub_6EF210, v154, v155, v156);
          else
            v158 = (_WORD *)v157();
          LOBYTE(v9) = (unsigned int)sub_C53060(v262, (__int64)a6, v158) != 0;
          goto LABEL_57;
        }
      }
      else
      {
        v162 = a6[17].m128i_i32[0];
        v279.m128i_i64[0] = (__int64)a6;
        v279.m128i_i32[2] = v162;
        v163 = a6[2].m128i_i64[0];
        v164 = *(_DWORD *)(v163 + 160) + 1;
        *(_DWORD *)(v163 + 160) = v164;
        sub_9B7040(v163 + 136, v164);
        v165 = (__int64)a6;
        if ( (unsigned __int8)sub_C4F9A0(a7, (__int64)a6, v8, *(_QWORD *)(*(_QWORD *)v9 + 8LL)) )
        {
          v165 = 1;
          v169 = sub_C553F0(v279.m128i_i64[0], 1, v279.m128i_u32[2], v167, v168);
          v279.m128i_i32[2] = -1;
          if ( v169 )
          {
            sub_C559A0((__int64)&v279, 1, v166, v167, v168);
            goto LABEL_176;
          }
        }
        sub_C559A0((__int64)&v279, v165, v166, v167, v168);
      }
      goto LABEL_56;
    }
  }
  if ( (*(_BYTE *)(a5 + 83) & 2) != 0 )
  {
    v33 = &v279;
    if ( (unsigned __int8)sub_B990E0(a5, &v279, v38, v39) )
    {
      v119 = sub_B72690(v13);
      if ( !v119 )
        BUG();
      if ( *(_BYTE *)(v119 + 9) >> 5 == 2 )
        goto LABEL_116;
      if ( *(char *)(a5 + 82) < 0 )
      {
        v120 = sub_B72690(v13);
        v124 = v120 - 64;
        if ( v120 )
          v120 -= 64LL;
        if ( sub_C29DE0(v120, (__int64)&v279, v124, v121, v122, v123) )
        {
LABEL_116:
          v125 = sub_B72690(v13);
          if ( !v125 )
            BUG();
          LODWORD(v9) = sub_C36DF0((__int64)a6, **(_QWORD **)(a5 + 120), v9, a7, *(_BYTE *)(v125 + 9) >> 5 == 2);
          goto LABEL_57;
        }
      }
    }
  }
  if ( *(_DWORD *)a7 <= 1u )
  {
    if ( *(_BYTE *)(v19 + 9) >> 5 == 2 )
    {
      v273.m128i_i8[4] &= ~1u;
      v279.m128i_i8[4] &= ~1u;
      v273.m128i_i32[0] = 0;
      v279.m128i_i32[0] = 0;
      sub_A4F870(&v279.m128i_i64[1]);
      v279.m128i_i32[0] = 11;
      sub_A54D90((__int64)&v279, 0, v273.m128i_i32);
      sub_A4FD20(a7, (__int64)&v279);
      if ( v279.m128i_i32[0] > 1u )
        sub_A4F8E0(v279.m128i_i32);
      if ( v273.m128i_i32[0] > 1u )
        sub_A4F8E0(v273.m128i_i32);
    }
    else
    {
      v85 = sub_B7E900(v245, (__int64)v33, v38, v39, v34, v35);
      if ( v85 )
      {
        v87 = 0;
        v86 = *(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v86 )
        {
          while ( (*(_BYTE *)(v86 + 28) & 0x7Fu) - 49 <= 2 )
          {
LABEL_72:
            ++v87;
            v86 = *(_QWORD *)(v86 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v86 )
              goto LABEL_69;
          }
          while ( 1 )
          {
            v90 = *(_QWORD *)(v86 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v86 = v90;
            if ( !v90 )
              break;
            if ( (*(_BYTE *)(v90 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_72;
          }
        }
LABEL_69:
        v91 = v87 + 1;
      }
      else
      {
        v91 = 0;
      }
      sub_7052B0((__int64 *)(*(_QWORD *)(v19 + 40) + 96LL), *(_QWORD *)(v19 + 40), v86, v87, v88, v89);
      v92 = *(_DWORD *)(*(_QWORD *)(v19 + 64) + 16LL);
      v279.m128i_i8[4] &= ~1u;
      v279.m128i_i32[0] = 0;
      sub_A4F800((__int64)&v279.m128i_i64[1], v92, v91);
      v279.m128i_i32[0] = 10;
      sub_A4FD20(a7, (__int64)&v279);
      if ( v279.m128i_i32[0] > 1u )
        sub_A4F8E0(v279.m128i_i32);
    }
  }
  if ( *(char *)(v19 - 36) >= 0 )
  {
    v40 = sub_EDE580(a6[1].m128i_i64[0], v245);
    v41 = a6[2].m128i_i64[0];
    v263 = (__int64 *)a6;
    v255 = v40;
    v41 += 136;
    v264 = a6[17].m128i_u32[0];
    v42 = (unsigned int)(*(_DWORD *)(v41 + 24) + 1);
    *(_DWORD *)(v41 + 24) = v42;
    sub_9B7040(v41, v42);
    v257 = sub_B7E900(v245, v42, v43, v44, v45, v46);
    v259 = sub_B98F20(a5) + 8LL * (unsigned __int16)(*(_DWORD *)(a5 + 84) >> 13);
    v47 = sub_B98F20(a5);
    if ( v259 == v47 )
    {
      if ( *(_BYTE *)(v19 + 9) >> 5 == 2 || (v69 = v257, v70 = 1, v71 = a7, !v257) )
      {
        sub_C2FF90((__int64)&v267[51].m128i_i64[1], v268, v48, v49, v50, v51)->m128i_i32[0] = 3;
LABEL_43:
        v74 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 64LL);
        if ( v74 == sub_6EF210 )
          v75 = (_WORD *)sub_B7F750((_QWORD *)a5, &v279, (__int64)sub_6EF210, v49, v50, v73);
        else
          v75 = (_WORD *)v74(a5);
        v42 = (__int64)a6;
        if ( (unsigned int)sub_C53060(v262, (__int64)a6, v75) )
        {
          v42 = 1;
          v76 = sub_C54F60((__int64)v263, (__m128i *)((char *)&dword_0 + 1), v264, v49, v50);
          v264 = -1;
          LODWORD(v9) = v76;
LABEL_124:
          sub_C55380((__int64)&v263, v42, v48, v49, v50);
          goto LABEL_57;
        }
LABEL_123:
        LODWORD(v9) = 0;
        goto LABEL_124;
      }
      goto LABEL_36;
    }
    v242 = (__int64 *)v47;
    v254 = (__int64)&v8[1].m128i_i64[1];
    v246 = 1;
    v256 = v19;
    v239 = (__int64)a6;
    while ( 1 )
    {
      v52 = *v242;
      v53 = v8[1].m128i_i64[0];
      v273 = _mm_loadu_si128(v8);
      v274 = v53;
      sub_C133F0((__int64)v275, v254);
      v54 = v8[8].m128i_i16[0];
      v279 = _mm_loadu_si128(v8);
      LOBYTE(v54) = v54 & 3;
      v278 = v54 | v278 & 0xFC;
      v280.m128i_i64[0] = v8[1].m128i_i64[0];
      sub_C133F0((__int64)&v280.m128i_i64[1], v254);
      v48 = v8[8].m128i_u16[0];
      LOBYTE(v48) = v48 & 3;
      v285 = v48 | v285 & 0xFC;
      v56 = *(_QWORD *)v52;
      if ( ((*(__int64 *)v52 >> 1) & 3) == 0 )
      {
        v57 = sub_B98AD0(v52);
        v58 = sub_F63270(*(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL));
        v42 = *(_QWORD *)(v52 + 8);
        if ( (unsigned __int8)sub_C27D80(v239, v42, (__int64)&v273, v245, v58, v255) )
        {
          v42 = a7;
          v59 = nullptr;
          v60 = *(_QWORD *)(a7 + 8) + 56LL * v260++;
          goto LABEL_20;
        }
LABEL_119:
        if ( ptr != v284 )
          free(ptr);
        if ( v276 != v277 )
          free(v276);
        goto LABEL_123;
      }
      if ( ((*(__int64 *)v52 >> 1) & 3) == 1 )
      {
        v59 = (_BYTE *)(v56 & 0xFFFFFFFFFFFFFFF8LL);
        v42 = *(_QWORD *)(v52 + 8);
        if ( !(unsigned __int8)sub_C14E10(v239, v42, (__int64)&v273, (__int64)v59, v255, v55) )
          goto LABEL_119;
        if ( *(_BYTE *)(v256 + 9) >> 5 == 2 )
        {
          BYTE4(v271[0]) &= ~1u;
          BYTE4(v272[0]) &= ~1u;
          LODWORD(v271[0]) = 0;
          LODWORD(v272[0]) = 0;
          sub_A4F870((_QWORD *)v272 + 1);
          LODWORD(v272[0]) = 11;
          sub_A54D90((__int64)v272, (__int64)v59, (int *)v271);
          v42 = (__int64)v272;
          sub_A4FD20(a7, (__int64)v272);
          if ( LODWORD(v272[0]) > 1 )
            sub_A4F8E0((int *)v272);
          if ( LODWORD(v271[0]) > 1 )
            sub_A4F8E0((int *)v271);
          v60 = *(_QWORD *)(a7 + 16);
        }
        else
        {
          if ( v257 )
          {
            v94 = sub_C1D4D0(v257, v42, v48, v49, v50, v93);
            if ( v94 <= (unsigned int)sub_C1D4D0((__int64)v59, v42, v95, v96, v97, v98) )
            {
              v99 = v257;
LABEL_80:
              if ( v59 != (_BYTE *)v99 )
              {
                v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
                if ( v100 != (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v59 + 32LL))(v59) )
                {
                  while ( 1 )
                  {
                    if ( (*(_BYTE *)(v99 + 68) & 1) == 0 || *(_QWORD *)(v99 + 40) )
                    {
                      v101 = v99;
                      if ( *(char *)(v99 + 29) < 0 )
                        v101 = sub_B72720(v99);
                      v102 = *(unsigned int *)(v101 + 68);
                      if ( (v102 & 0xFFFFFFF0) == 0 )
                      {
                        sub_B7EAB0(v101, v42, v102, v49, v50, v93);
                        LODWORD(v102) = *(_DWORD *)(v101 + 68);
                      }
                      v42 = *(_QWORD *)(a7 + 8) + 56LL * (((unsigned int)v102 >> 4) + *(_DWORD *)(a7 + 16) - 1);
                      v246 &= sub_C267C0(*(_QWORD *)(v99 + 48), v42);
                    }
                    while ( 1 )
                    {
                      v103 = *(_QWORD *)(v99 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v99 = v103;
                      if ( !v103 )
                        break;
                      if ( (*(_BYTE *)(v103 + 28) & 0x7Fu) - 49 <= 2 )
                        goto LABEL_80;
                    }
                  }
                }
              }
              v48 = *(_QWORD *)(v99 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v257 = v48;
              if ( v48 )
              {
                if ( (*(_BYTE *)((*(_QWORD *)(v99 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 49 > 2 )
                {
                  do
                  {
                    v104 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v48 = v104;
                    if ( !v104 )
                    {
                      v257 = 0;
                      goto LABEL_98;
                    }
                  }
                  while ( (*(_BYTE *)(v104 + 28) & 0x7Fu) - 49 > 2 );
                  v257 = v104;
                }
              }
            }
          }
LABEL_98:
          v60 = *(_QWORD *)(a7 + 8)
              + 56LL * (*(_DWORD *)(a7 + 16) + (unsigned int)sub_C1D4D0((__int64)v59, v42, v48, v49, v50, v93));
        }
        goto LABEL_20;
      }
      v126 = v56 & 0xFFFFFFFFFFFFFFF8LL;
      v127 = *(_QWORD **)(v126 + 56);
      v128 = *(unsigned int *)(v126 + 64);
      v253 = v127;
      v42 = (__int64)&v127[v128];
      v250 = &v127[v128];
      if ( v127 != &v127[v128] )
        break;
      v60 = a7;
      v59 = nullptr;
LABEL_20:
      v61 = *(_WORD **)(v52 + 8);
      if ( (*(_DWORD *)v61 & 0x20000) != 0 )
      {
        if ( !(unsigned __int8)sub_C10290(v239) )
          goto LABEL_119;
      }
      else
      {
        v62 = *(_QWORD *)(v239 + 32);
        v63 = v62;
        v248 = *(_QWORD *)(v62 + 32);
        if ( (*v61 & 0x1FF) == 0x6F )
        {
          *(_QWORD *)(v62 + 32) = &v279;
          v63 = *(_QWORD *)(v239 + 32);
        }
        v64 = v63 + 136;
        *(_QWORD *)&v272[0] = v239;
        DWORD2(v272[0]) = *(_DWORD *)(v239 + 272);
        v65 = *(_DWORD *)(v64 + 24) + 1;
        *(_DWORD *)(v64 + 24) = v65;
        sub_9B7040(v64, v65);
        v42 = v239;
        if ( !(unsigned __int8)sub_C4F9A0(v60, v239, &v273, (__int64)v61)
          || v59
          && (v59[68] & 1) != 0
          && (v42 = (__int64)v61, !(unsigned __int8)sub_C12D50(v239, (__int64)v61, v60, (__int64)v59)) )
        {
          if ( !(unsigned __int8)sub_C11850(v239) )
          {
            sub_C559A0((__int64)v272, v42, v66, v67, v68);
            *(_QWORD *)(v62 + 32) = v248;
            goto LABEL_119;
          }
          v246 = 0;
        }
        sub_C559A0((__int64)v272, v42, v66, v67, v68);
        *(_QWORD *)(v62 + 32) = v248;
      }
      if ( (*(_BYTE *)v52 & 6) == 0 && (*(_BYTE *)(v52 + 28) & 1) == 0 )
      {
        v42 = *(_QWORD *)(v256 + 40);
        sub_7052B0((__int64 *)(v42 + 96), v42, v48, v49, v50, v51);
        v49 = v260;
        if ( v260 == *(_DWORD *)(*(_QWORD *)(v256 + 64) + 16LL) )
        {
          v42 = (__int64)v268;
          sub_C2FF90((__int64)&v267[51].m128i_i64[1], v268, v48, v260, v50, v51)->m128i_i32[0] = 2;
        }
      }
      if ( ptr != v284 )
        free(ptr);
      if ( v276 == v277 )
      {
        if ( (__int64 *)v259 == ++v242 )
        {
LABEL_33:
          a6 = (__m128i *)v239;
          if ( *(_BYTE *)(v256 + 9) >> 5 == 2 )
            goto LABEL_42;
          v69 = v257;
          if ( !v257 )
            goto LABEL_42;
          v70 = v246;
          v71 = a7;
LABEL_36:
          if ( (*(_BYTE *)(v69 + 68) & 1) == 0 || *(_QWORD *)(v69 + 40) )
          {
            v42 = *(_QWORD *)(v71 + 8)
                + 56LL * (*(_DWORD *)(v71 + 16) + (unsigned int)sub_C1D4D0(v69, v42, v48, v49, v50, v51));
            v70 &= sub_C267C0(*(_QWORD *)(v69 + 48), v42);
          }
          while ( 1 )
          {
            v72 = *(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v69 = v72;
            if ( !v72 )
              break;
            if ( (*(_BYTE *)(v72 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_36;
          }
          v246 = v70;
LABEL_42:
          v42 = (__int64)v268;
          sub_C2FF90((__int64)&v267[51].m128i_i64[1], v268, v48, v49, v50, v51)->m128i_i32[0] = 3;
          if ( !v246 )
            goto LABEL_123;
          goto LABEL_43;
        }
      }
      else
      {
        free(v276);
        if ( (__int64 *)v259 == ++v242 )
          goto LABEL_33;
      }
    }
    v261 = v8;
    v60 = a7;
    v249 = &v127[v128 - 1];
    v49 = (__int64)v271;
    v129 = *(_QWORD **)(v126 + 56);
    while ( 1 )
    {
      v59 = (_BYTE *)*v129;
      v131 = *(_QWORD *)(*v129 + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(*v129 + 16LL) & 4) != 0 )
        v131 = *(_QWORD *)v131;
      v132 = *(_BYTE *)(v131 + 8);
      v133 = v131 - 64;
      if ( (v132 & 0x7Fu) - 58 >= 4 )
        v133 = 0;
      if ( *(_DWORD *)v60 > 1u )
      {
        if ( *(_DWORD *)v60 != 11 )
          goto LABEL_130;
        v137 = *(_BYTE **)(v60 + 8);
        if ( v137 )
        {
          if ( v59 == v137 )
            goto LABEL_130;
          v138 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v137 + 32LL))(v137);
          if ( v138 == (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v59 + 32LL))(v59) )
            goto LABEL_130;
        }
      }
      if ( *(_BYTE *)(v133 + 73) >> 5 == 2 )
        break;
      v134 = sub_A7A9D0(*(_QWORD *)(v239 + 16), v133, v48, v49, v50, v55);
      v246 &= sub_C267C0(v134, v60);
      if ( (_BYTE *)*v249 == v59 )
      {
LABEL_143:
        v135 = _mm_load_si128(&v273);
        v280.m128i_i64[0] = v274;
        v279 = v135;
        v280.m128i_i32[2] = v275[0];
        v281 = v275[1];
        v282 = v275[2];
        sub_C25E10((__int64 *)&ptr, (__int64 *)&v276);
        HIBYTE(v136) = HIBYTE(v278);
        LOBYTE(v136) = v278 & 3;
        v285 = v136 | v285 & 0xFC;
      }
LABEL_131:
      v42 = *(_QWORD *)(v52 + 8);
      if ( !(unsigned __int8)sub_C15060(v239, v42, (__int64)&v273, (__int64)v59) )
        goto LABEL_119;
      if ( *(_BYTE *)(v133 + 73) >> 5 == 2 )
      {
        v60 = *(_QWORD *)(v60 + 16);
      }
      else
      {
        if ( (_BYTE *)*v253 == v59 && *(_BYTE *)(v256 + 9) >> 5 != 2 )
        {
          v139 = v257;
          if ( v257 )
          {
            v140 = sub_C1D4D0(v257, v42, v48, v49, v50, v55);
            if ( v140 <= (unsigned int)sub_C1D4D0((__int64)v59, v42, v141, v142, v143, v144) )
            {
              v258 = v60;
              v145 = v129;
              v146 = v52;
              v147 = v139;
              v148 = v145;
LABEL_153:
              if ( !v147
                || v59 != (_BYTE *)v147
                && (v149 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v147 + 32LL))(v147),
                    v149 != (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v59 + 32LL))(v59)) )
              {
                while ( 1 )
                {
                  if ( (*(_BYTE *)(v147 + 68) & 1) == 0 || *(_QWORD *)(v147 + 40) )
                  {
                    v150 = v147;
                    if ( *(char *)(v147 + 29) < 0 )
                      v150 = sub_B72720(v147);
                    v151 = *(unsigned int *)(v150 + 68);
                    if ( (v151 & 0xFFFFFFF0) == 0 )
                    {
                      sub_B7EAB0(v150, v42, v151, v49, v50, v55);
                      LODWORD(v151) = *(_DWORD *)(v150 + 68);
                    }
                    v42 = *(_QWORD *)(a7 + 8) + 56LL * (((unsigned int)v151 >> 4) + *(_DWORD *)(a7 + 16) - 1);
                    v246 &= sub_C267C0(*(_QWORD *)(v147 + 48), v42);
                  }
                  while ( 1 )
                  {
                    v152 = *(_QWORD *)(v147 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v147 = v152;
                    if ( !v152 )
                      break;
                    if ( (*(_BYTE *)(v152 + 28) & 0x7Fu) - 49 <= 2 )
                      goto LABEL_153;
                  }
                }
              }
              v159 = v148;
              v160 = v147;
              v52 = v146;
              v60 = v258;
              v129 = v159;
              v48 = *(_QWORD *)(v160 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v257 = v48;
              if ( v48 )
              {
                if ( (*(_BYTE *)((*(_QWORD *)(v160 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 49 > 2 )
                {
                  do
                  {
                    v161 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v48 = v161;
                    if ( !v161 )
                    {
                      v257 = 0;
                      goto LABEL_134;
                    }
                  }
                  while ( (*(_BYTE *)(v161 + 28) & 0x7Fu) - 49 > 2 );
                  v257 = v161;
                }
              }
            }
          }
        }
LABEL_134:
        v130 = sub_C1D4D0((__int64)v59, v42, v48, v49, v50, v55);
        v48 = *(_QWORD *)(v60 + 8);
        v60 = v48 + 56LL * (unsigned int)(*(_DWORD *)(v60 + 16) + v130);
      }
      if ( v250 == ++v129 )
      {
        v8 = v261;
        goto LABEL_20;
      }
    }
    BYTE4(v271[0]) &= ~1u;
    BYTE4(v272[0]) &= ~1u;
    LODWORD(v271[0]) = 0;
    LODWORD(v272[0]) = 0;
    sub_A4F870((_QWORD *)v272 + 1);
    LODWORD(v272[0]) = 11;
    sub_A54D90((__int64)v272, (__int64)v59, (int *)v271);
    sub_A4FD20(v60, (__int64)v272);
    if ( LODWORD(v272[0]) > 1 )
      sub_A4F8E0((int *)v272);
    if ( LODWORD(v271[0]) > 1 )
      sub_A4F8E0((int *)v271);
LABEL_130:
    if ( (_BYTE *)*v249 == v59 )
      goto LABEL_143;
    goto LABEL_131;
  }
LABEL_56:
  LODWORD(v9) = 0;
LABEL_57:
  if ( LODWORD(v270[0]) > 1 )
    sub_A4F8E0((int *)v270);
  sub_C23C00((__int64)&v286);
  if ( v269 )
  {
    v81 = v267;
    v82 = &v267[51].m128i_i8[8];
    v83 = (__m128i *)sub_C2F440(&v267[51].m128i_i64[1], (unsigned __int64 *)v268);
    if ( v83 )
    {
      v84.m128i_i64[0] = sub_A4F720(v82, v268);
      v280 = 0u;
      v279 = v84;
      *v83 = v84;
      v83[1] = _mm_load_si128(&v280);
      --v81[52].m128i_i32[0];
      ++v81[52].m128i_i32[1];
    }
  }
  return (unsigned int)v9;
}
