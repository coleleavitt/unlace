__int64 __fastcall sub_1B585F0(__int64 a1, int a2, const __m128i *a3, __int64 a4, int a5)
{
  __int64 v8; // rdx
  __int64 v9; // r15
  __m128i *v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // r15
  __m128i *v13; // r15
  __int64 v14; // r13
  __m128i v15; // xmm0
  __int64 v16; // rcx
  char *v17; // rdi
  char *v18; // rax
  char *v19; // rdx
  __int64 i; // rsi
  char *v21; // rdx
  char *v22; // rdx
  char *v23; // rdx
  char *v24; // rdx
  __m128i *v25; // rdx
  int v26; // edi
  __m128i si128; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rdx
  _QWORD *v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rbx
  int v43; // edi
  __m128i v44; // xmm0
  __m128i *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r13
  char *v48; // r12
  char *v49; // r13
  _QWORD *v50; // rax
  int v51; // edx
  unsigned int v52; // eax
  int v53; // eax
  int v54; // esi
  char *v55; // rax
  char *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  char *v66; // rdi
  _QWORD *v67; // rdx
  char *v68; // rcx
  char *v69; // rax
  int v70; // esi
  int v71; // edx
  int v72; // edx
  int v73; // esi
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  _QWORD *v80; // rdx
  _QWORD *v81; // rax
  int v82; // esi
  int v83; // ecx
  int v84; // ecx
  int v85; // esi
  __int64 v86; // rcx
  __int64 v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  _QWORD *v95; // rcx
  _QWORD *v96; // rdx
  _QWORD *v97; // rax
  int v98; // esi
  int v99; // ecx
  int v100; // ecx
  int v101; // esi
  __int64 v102; // rcx
  __int64 v103; // rdi
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rax
  _QWORD *v112; // rcx
  int v113; // edx
  int v114; // edx
  _QWORD *v115; // rdx
  _QWORD *v116; // rax
  int v117; // esi
  int v118; // ecx
  int v119; // ecx
  int v120; // esi
  __int64 v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  int v130; // eax
  __int64 v131; // rax
  int v132; // edx
  int v133; // edx
  __m128i v134; // xmm3
  __int64 v135; // rax
  __int64 v136; // rax
  int v137; // edx
  int v138; // edx
  int v139; // esi
  __int64 v140; // rax
  int v141; // edx
  int v142; // edx
  int v143; // ecx
  __int64 v144; // rax
  int v145; // edx
  int v146; // edx
  __int64 v147; // rax
  int v148; // edx
  int v149; // edx
  __int64 v150; // rax
  char *v151; // rbx
  int v152; // ebx
  _QWORD *v153; // rax
  __int64 v154; // rdx
  bool v155; // cl
  __int64 v156; // rax
  __int64 v157; // rsi
  __int64 v158; // rdx
  bool v159; // cl
  __int64 v160; // rax
  __int64 v161; // rsi
  __int64 v162; // rdx
  bool v163; // cl
  __int64 v164; // rax
  __int64 v165; // rsi
  __int64 v166; // rdx
  bool v167; // cl
  __int64 v168; // rax
  __int64 v169; // rsi
  __int64 v170; // rdx
  bool v171; // cl
  __int64 v172; // rax
  __int64 v173; // rsi
  __int64 v174; // rdx
  bool v175; // cl
  __int64 v176; // rax
  __int64 v177; // rsi
  __int64 v178; // rdx
  bool v179; // cl
  __int64 v180; // rax
  __int64 v181; // rsi
  __int64 v182; // rax
  bool v183; // dl
  __int64 v184; // rcx
  __int64 v185; // rsi
  __int64 v186; // rcx
  bool v187; // al
  __int64 v188; // rdx
  __m128i v189; // xmm7
  __int64 v190; // rax
  bool v191; // dl
  __int64 v192; // rcx
  __m128i v193; // xmm7
  __int64 v194; // rax
  bool v195; // dl
  __int64 v196; // rcx
  __m128i v197; // xmm3
  __int64 v198; // rax
  bool v199; // dl
  __int64 v200; // rcx
  __m128i v201; // xmm1
  __int64 v202; // rdx
  bool v203; // cl
  __int64 v204; // rax
  __int64 v205; // rsi
  __int64 v206; // rdx
  bool v207; // cl
  __int64 v208; // rax
  __int64 v209; // rsi
  __int64 v210; // rdx
  bool v211; // cl
  __int64 v212; // rax
  __int64 v213; // rsi
  __int64 v214; // rdx
  bool v215; // cl
  __int64 v216; // rax
  __int64 v217; // rsi
  __int64 v218; // rdx
  bool v219; // cl
  __int64 v220; // rax
  __int64 v221; // rsi
  __int64 v222; // rdx
  bool v223; // cl
  __int64 v224; // rax
  __int64 v225; // rsi
  __int64 v226; // rdx
  bool v227; // cl
  __int64 v228; // rax
  __int64 v229; // rsi
  __int64 v230; // rax
  bool v231; // dl
  __int64 v232; // rcx
  __int64 v233; // rsi
  __int64 *v234; // rax
  __int64 *v235; // rdx
  __m128i v236; // xmm6
  __int64 v237; // rcx
  bool v238; // si
  __int64 v239; // rdi
  int v240; // r9d
  __int64 v241; // rsi
  char *v242; // rax
  __int64 *v243; // rdx
  __m128i v244; // xmm6
  __int64 v245; // r8
  bool v246; // cl
  __int64 v247; // rsi
  __int64 v248; // rcx
  __int64 v249; // rax
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rdx
  _QWORD *v256; // r13
  __int32 v257; // r8d
  _QWORD *v258; // rcx
  __int64 v259; // rdx
  _QWORD *v260; // r13
  char *v261; // r15
  __int64 v262; // rax
  int v263; // edi
  _QWORD *v264; // rax
  __int64 v265; // rdx
  _QWORD *v266; // rbx
  _QWORD *v267; // r13
  __int64 v268; // r15
  __int32 v269; // r15d
  char *v270; // rax
  __int64 v271; // rcx
  __int64 v272; // rcx
  __int64 v273; // rax
  __int64 v274; // rcx
  __int64 v275; // rcx
  __int64 v276; // rcx
  __int64 v277; // rcx
  __int64 v278; // rdx
  __int64 v279; // rcx
  __int64 v280; // rcx
  __int64 v281; // rdx
  __int64 v282; // rcx
  __int64 v283; // rcx
  __int64 v284; // rcx
  __int64 v285; // rcx
  __int64 v286; // rcx
  __int64 v287; // rcx
  int v288; // [rsp+4h] [rbp-1B04h]
  __int64 v289; // [rsp+8h] [rbp-1B00h] BYREF
  _QWORD *v290; // [rsp+10h] [rbp-1AF8h]
  char *v291; // [rsp+18h] [rbp-1AF0h]
  _QWORD *v292; // [rsp+20h] [rbp-1AE8h]
  __m128i *v293; // [rsp+28h] [rbp-1AE0h]
  __int64 v294; // [rsp+38h] [rbp-1AD0h] BYREF
  __m128i v295; // [rsp+40h] [rbp-1AC8h] BYREF
  __int64 v296; // [rsp+50h] [rbp-1AB8h]
  __m128i v297; // [rsp+60h] [rbp-1AA8h] BYREF
  __m128i v298; // [rsp+70h] [rbp-1A98h] BYREF
  __int64 v299; // [rsp+80h] [rbp-1A88h]

  v8 = *(unsigned int *)(a1 + 344);
  LODWORD(v289) = a2;
  v288 = a5;
  if ( !(_DWORD)v8 || (v9 = *(_QWORD *)(a1 + 336) + 6776 * v8 - 6776, *(_QWORD *)(v9 + 6768) != *(_QWORD *)(a1 + 328)) )
  {
    v10 = &v297;
    v297.m128i_i64[1] = 0x400000000LL;
    v297.m128i_i64[0] = (__int64)&v298;
    if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 348) )
    {
      v292 = (_QWORD *)(a1 + 352);
      v254 = sub_2237400(a1 + 336, a1 + 352, 0, 6776, &v295);
      v255 = *(unsigned int *)(a1 + 344);
      v291 = (char *)v254;
      v256 = (_QWORD *)(v254 + 6776 * v255);
      v256[1] = 0x400000000LL;
      v257 = v297.m128i_i32[2];
      *v256 = v256 + 2;
      if ( v257 )
        sub_1B53A10(v256, &v297);
      v256[846] = *(_QWORD *)(a1 + 328);
      v258 = *(_QWORD **)(a1 + 336);
      v259 = 847LL * *(unsigned int *)(a1 + 344);
      v260 = &v258[v259];
      if ( v258 != &v258[v259] )
      {
        v261 = v291;
        do
        {
          *((_DWORD *)v261 + 2) = 0;
          *((_DWORD *)v261 + 3) = 4;
          v263 = *((_DWORD *)v258 + 2);
          *(_QWORD *)v261 = v261 + 16;
          if ( v263 )
          {
            v290 = v258;
            sub_1B53A10(v261, v258);
            v258 = v290;
          }
          v262 = v258[846];
          v258 += 847;
          v261 += 6776;
          *((_QWORD *)v261 - 1) = v262;
        }
        while ( v260 != v258 );
        v264 = *(_QWORD **)(a1 + 336);
        v265 = 847LL * *(unsigned int *)(a1 + 344);
        v290 = v264;
        v260 = &v264[v265];
        if ( v264 != &v264[v265] )
        {
          v293 = &v297;
          v266 = &v264[v265];
          do
          {
            while ( 1 )
            {
              v266 -= 847;
              v267 = (_QWORD *)*v266;
              v268 = *v266 + 1688LL * *((unsigned int *)v266 + 2);
              if ( *v266 != v268 )
              {
                do
                {
                  v268 -= 1688;
                  sub_1AEA350(v268);
                }
                while ( v267 != (_QWORD *)v268 );
                v267 = (_QWORD *)*v266;
              }
              if ( v267 == v266 + 2 )
                break;
              free(v267);
              if ( v266 == v290 )
                goto LABEL_323;
            }
          }
          while ( v266 != v290 );
LABEL_323:
          v10 = v293;
          v260 = *(_QWORD **)(a1 + 336);
        }
      }
      v269 = v295.m128i_i32[0];
      if ( v292 != v260 )
        free(v260);
      v270 = v291;
      *(_DWORD *)(a1 + 348) = v269;
      ++*(_DWORD *)(a1 + 344);
      v12 = v297.m128i_u32[2];
      *(_QWORD *)(a1 + 336) = v270;
    }
    else
    {
      v11 = (_QWORD *)(*(_QWORD *)(a1 + 336) + 6776 * v8);
      v11[1] = 0x400000000LL;
      v12 = v297.m128i_u32[2];
      *v11 = v11 + 2;
      if ( (_DWORD)v12 )
      {
        v290 = v11;
        sub_1B53A10(v11, &v297);
        v12 = v297.m128i_u32[2];
        v11 = v290;
      }
      v11[846] = *(_QWORD *)(a1 + 328);
      ++*(_DWORD *)(a1 + 344);
    }
    v13 = (__m128i *)(v297.m128i_i64[0] + 1688 * v12);
    if ( (__m128i *)v297.m128i_i64[0] != v13 )
    {
      v14 = v297.m128i_i64[0];
      do
      {
        v13 = (__m128i *)((char *)v13 - 1688);
        sub_1AEA350((__int64)v13);
      }
      while ( (__m128i *)v14 != v13 );
      v13 = (__m128i *)v297.m128i_i64[0];
    }
    if ( v13 != &v10[1] )
      free(v13);
    v9 = *(_QWORD *)(a1 + 336) + 6776LL * *(unsigned int *)(a1 + 344) - 6776;
  }
  if ( *(_DWORD *)(v9 + 12) > *(_DWORD *)(v9 + 8) )
  {
    v15 = _mm_loadu_si128(a3);
    v16 = 1688LL * *(unsigned int *)(v9 + 8);
    v296 = a3[1].m128i_i64[0];
    v295 = v15;
    v17 = *(char **)v9;
    v298.m128i_i64[0] = v296;
    v18 = &v17[v16];
    v297 = v15;
    v19 = &v17[v16 + 8];
    *(_QWORD *)&v17[v16] = 1;
    for ( i = (__int64)&v17[v16 + 328]; (char *)i != v19; v19 += 40 )
      *(_QWORD *)v19 = -4096;
    v21 = v18 + 336;
    for ( *((_QWORD *)v18 + 41) = 1; v18 + 432 != v21; v21 += 24 )
      *(_QWORD *)v21 = -4096;
    v22 = v18 + 440;
    for ( *((_QWORD *)v18 + 54) = 1; v18 + 568 != v22; v22 += 16 )
      *(_QWORD *)v22 = -4096;
    v23 = v18 + 576;
    for ( *((_QWORD *)v18 + 71) = 1; v18 + 704 != v23; v23 += 16 )
      *(_QWORD *)v23 = -4096;
    v24 = v18 + 736;
    *((_QWORD *)v18 + 88) = 0;
    *((_QWORD *)v18 + 89) = 0;
    *((_DWORD *)v18 + 180) = 0;
    for ( *((_QWORD *)v18 + 91) = 1; v18 + 928 != v24; v24 += 24 )
      *(_QWORD *)v24 = -4096;
    v25 = (__m128i *)&v17[v16 + 944];
    v26 = v289;
    *((__m128i *)v18 + 58) = _mm_load_si128((const __m128i *)&xmmword_23A8870);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AAB40);
    *v25 = si128;
    v25[1] = si128;
    *((_DWORD *)v18 + 244) = v26;
    *(__m128i *)(v18 + 984) = _mm_load_si128(&v297);
    v28 = v298.m128i_i64[0];
    *((_DWORD *)v18 + 256) = v288;
    *((_QWORD *)v18 + 125) = v28;
    *((_QWORD *)v18 + 145) = v18 + 1176;
    *((_QWORD *)v18 + 126) = a4;
    *((_QWORD *)v18 + 127) = 0;
    *((_QWORD *)v18 + 129) = 0;
    *((_QWORD *)v18 + 130) = 0;
    *((_DWORD *)v18 + 262) = 0;
    v18[1072] = 0;
    v18[1080] = 0;
    *((_DWORD *)v18 + 271) = 1;
    v18[1088] = 0;
    *((_QWORD *)v18 + 137) = 0;
    *((_DWORD *)v18 + 276) = 0;
    v18[1108] = 0;
    *((_QWORD *)v18 + 139) = 0;
    *((_DWORD *)v18 + 280) = 0;
    *((_QWORD *)v18 + 141) = 0;
    *((_QWORD *)v18 + 142) = 0;
    *((_QWORD *)v18 + 143) = 0;
    *((_DWORD *)v18 + 288) = 0;
    *((_QWORD *)v18 + 146) = 0x400000000LL;
    *((_QWORD *)v18 + 155) = 0x400000000LL;
    *((_QWORD *)v18 + 166) = v18 + 1344;
    *((_QWORD *)v18 + 167) = 0x800000000LL;
    *((_QWORD *)v18 + 151) = 0;
    *((_QWORD *)v18 + 152) = 0;
    *((_DWORD *)v18 + 306) = 0;
    *((_QWORD *)v18 + 154) = v18 + 1248;
    *((_QWORD *)v18 + 160) = 0;
    *((_QWORD *)v18 + 161) = 0;
    *((_DWORD *)v18 + 324) = 0;
    *((_QWORD *)v18 + 163) = 0;
    *((_QWORD *)v18 + 164) = 0;
    *((_DWORD *)v18 + 330) = 0;
    *((_QWORD *)v18 + 192) = 0;
    *((_QWORD *)v18 + 193) = v18 + 1560;
    *((_QWORD *)v18 + 194) = 0x1000000000LL;
    ++*(_DWORD *)(v9 + 8);
    goto LABEL_26;
  }
  v291 = (char *)(v9 + 16);
  v31 = sub_2237400(v9, v9 + 16, 0, 1688, &v294);
  v32 = a3[1].m128i_i64[0];
  v33 = _mm_loadu_si128(a3);
  v290 = (_QWORD *)v31;
  v296 = v32;
  v295 = v33;
  v34 = *(unsigned int *)(v9 + 8);
  v298.m128i_i64[0] = v32;
  v35 = 211 * v34;
  v297 = v33;
  v36 = v35 * 8 + v31;
  v37 = (_QWORD *)(v36 + 8);
  for ( *(_QWORD *)v36 = 1; (_QWORD *)(v36 + 328) != v37; v37 += 5 )
    *v37 = -4096;
  v38 = (_QWORD *)(v36 + 336);
  for ( *(_QWORD *)(v36 + 328) = 1; (_QWORD *)(v36 + 432) != v38; v38 += 3 )
    *v38 = -4096;
  v39 = (_QWORD *)(v36 + 440);
  for ( *(_QWORD *)(v36 + 432) = 1; (_QWORD *)(v36 + 568) != v39; v39 += 2 )
    *v39 = -4096;
  v40 = (_QWORD *)(v36 + 576);
  for ( *(_QWORD *)(v36 + 568) = 1; (_QWORD *)(v36 + 704) != v40; v40 += 2 )
    *v40 = -4096;
  v41 = (_QWORD *)(v36 + 736);
  *(_QWORD *)(v36 + 704) = 0;
  *(_QWORD *)(v36 + 712) = 0;
  *(_DWORD *)(v36 + 720) = 0;
  for ( *(_QWORD *)(v36 + 728) = 1; (_QWORD *)(v36 + 928) != v41; v41 += 3 )
    *v41 = -4096;
  v42 = v290;
  v43 = v289;
  *(__m128i *)(v36 + 928) = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  v44 = _mm_load_si128((const __m128i *)&xmmword_23AAB40);
  v45 = (__m128i *)&v42[v35 + 118];
  *v45 = v44;
  v45[1] = v44;
  *(_DWORD *)(v36 + 976) = v43;
  *(__m128i *)(v36 + 984) = _mm_load_si128(&v297);
  v46 = v298.m128i_i64[0];
  *(_DWORD *)(v36 + 1024) = v288;
  *(_QWORD *)(v36 + 1000) = v46;
  *(_QWORD *)(v36 + 1008) = a4;
  *(_QWORD *)(v36 + 1016) = 0;
  *(_QWORD *)(v36 + 1032) = 0;
  *(_QWORD *)(v36 + 1040) = 0;
  *(_DWORD *)(v36 + 1048) = 0;
  *(_BYTE *)(v36 + 1072) = 0;
  *(_BYTE *)(v36 + 1080) = 0;
  *(_DWORD *)(v36 + 1084) = 1;
  *(_BYTE *)(v36 + 1088) = 0;
  *(_QWORD *)(v36 + 1096) = 0;
  *(_DWORD *)(v36 + 1104) = 0;
  *(_BYTE *)(v36 + 1108) = 0;
  *(_QWORD *)(v36 + 1112) = 0;
  *(_DWORD *)(v36 + 1120) = 0;
  *(_QWORD *)(v36 + 1128) = 0;
  *(_QWORD *)(v36 + 1136) = 0;
  *(_QWORD *)(v36 + 1144) = 0;
  *(_DWORD *)(v36 + 1152) = 0;
  *(_QWORD *)(v36 + 1160) = v36 + 1176;
  *(_QWORD *)(v36 + 1336) = 0x800000000LL;
  *(_QWORD *)(v36 + 1168) = 0x400000000LL;
  *(_QWORD *)(v36 + 1240) = 0x400000000LL;
  *(_QWORD *)(v36 + 1536) = 0;
  *(_QWORD *)(v36 + 1216) = 0;
  *(_DWORD *)(v36 + 1224) = 0;
  *(_QWORD *)(v36 + 1288) = 0;
  *(_DWORD *)(v36 + 1296) = 0;
  *(_QWORD *)(v36 + 1312) = 0;
  *(_DWORD *)(v36 + 1320) = 0;
  *(_QWORD *)(v36 + 1552) = 0x1000000000LL;
  v47 = *(unsigned int *)(v9 + 8);
  *(_QWORD *)(v36 + 1328) = v36 + 1344;
  *(_QWORD *)(v36 + 1208) = 0;
  *(_QWORD *)(v36 + 1232) = v36 + 1248;
  *(_QWORD *)(v36 + 1280) = 0;
  *(_QWORD *)(v36 + 1304) = 0;
  *(_QWORD *)(v36 + 1544) = v36 + 1560;
  v48 = *(char **)v9;
  v49 = (char *)(*(_QWORD *)v9 + 1688 * v47);
  if ( *(char **)v9 != v49 )
  {
    while ( 1 )
    {
      v50 = v42 + 1;
      *(_DWORD *)v42 = 1;
      *((_DWORD *)v42 + 1) = 0;
      if ( v42 + 41 == v42 + 1 )
      {
        v51 = 0;
      }
      else
      {
        do
        {
          *v50 = -4096;
          v50 += 5;
        }
        while ( v42 + 41 != v50 );
        v51 = *(_DWORD *)v42 >> 1;
      }
      v52 = *(_DWORD *)v48 & 0xFFFFFFFE;
      *(_DWORD *)v48 = *(_DWORD *)v48 & 1 | (2 * v51);
      *(_DWORD *)v42 = v52 | *(_DWORD *)v42 & 1;
      v53 = *((_DWORD *)v42 + 1);
      *((_DWORD *)v42 + 1) = *((_DWORD *)v48 + 1);
      *((_DWORD *)v48 + 1) = v53;
      if ( (*(_BYTE *)v42 & 1) == 0 )
        break;
      if ( (*v48 & 1) == 0 )
      {
        v54 = *((_DWORD *)v48 + 4);
        v55 = (char *)v42;
        v56 = v48;
LABEL_43:
        *v56 |= 1u;
        v57 = *((_QWORD *)v55 + 1);
        v58 = *((_QWORD *)v56 + 1);
        *((_QWORD *)v56 + 1) = v57;
        if ( v57 != -8192 && v57 != -4096 )
        {
          *((__m128i *)v56 + 1) = _mm_loadu_si128((const __m128i *)v55 + 1);
          *((__m128i *)v56 + 2) = _mm_loadu_si128((const __m128i *)v55 + 2);
        }
        v59 = *((_QWORD *)v55 + 6);
        *((_QWORD *)v56 + 6) = v59;
        if ( v59 != -4096 && v59 != -8192 )
        {
          *(__m128i *)(v56 + 56) = _mm_loadu_si128((const __m128i *)(v55 + 56));
          *(__m128i *)(v56 + 72) = _mm_loadu_si128((const __m128i *)(v55 + 72));
        }
        v60 = *((_QWORD *)v55 + 11);
        *((_QWORD *)v56 + 11) = v60;
        if ( v60 != -8192 && v60 != -4096 )
        {
          *((__m128i *)v56 + 6) = _mm_loadu_si128((const __m128i *)v55 + 6);
          *((__m128i *)v56 + 7) = _mm_loadu_si128((const __m128i *)v55 + 7);
        }
        v61 = *((_QWORD *)v55 + 16);
        *((_QWORD *)v56 + 16) = v61;
        if ( v61 != -4096 && v61 != -8192 )
        {
          *(__m128i *)(v56 + 136) = _mm_loadu_si128((const __m128i *)(v55 + 136));
          *(__m128i *)(v56 + 152) = _mm_loadu_si128((const __m128i *)(v55 + 152));
        }
        v62 = *((_QWORD *)v55 + 21);
        *((_QWORD *)v56 + 21) = v62;
        if ( v62 != -8192 && v62 != -4096 )
        {
          *((__m128i *)v56 + 11) = _mm_loadu_si128((const __m128i *)v55 + 11);
          *((__m128i *)v56 + 12) = _mm_loadu_si128((const __m128i *)v55 + 12);
        }
        v63 = *((_QWORD *)v55 + 26);
        *((_QWORD *)v56 + 26) = v63;
        if ( v63 != -4096 && v63 != -8192 )
        {
          *(__m128i *)(v56 + 216) = _mm_loadu_si128((const __m128i *)(v55 + 216));
          *(__m128i *)(v56 + 232) = _mm_loadu_si128((const __m128i *)(v55 + 232));
        }
        v64 = *((_QWORD *)v55 + 31);
        *((_QWORD *)v56 + 31) = v64;
        if ( v64 != -8192 && v64 != -4096 )
        {
          *((__m128i *)v56 + 16) = _mm_loadu_si128((const __m128i *)v55 + 16);
          *((__m128i *)v56 + 17) = _mm_loadu_si128((const __m128i *)v55 + 17);
        }
        v65 = *((_QWORD *)v55 + 36);
        *((_QWORD *)v56 + 36) = v65;
        if ( v65 != -4096 && v65 != -8192 )
        {
          *(__m128i *)(v56 + 296) = _mm_loadu_si128((const __m128i *)(v55 + 296));
          *(__m128i *)(v56 + 312) = _mm_loadu_si128((const __m128i *)(v55 + 312));
        }
        *v55 &= ~1u;
        *((_DWORD *)v55 + 4) = v54;
        *((_QWORD *)v55 + 1) = v58;
        v66 = (char *)(v42 + 41);
        goto LABEL_68;
      }
      v242 = (char *)(v42 + 1);
      v243 = (__int64 *)(v48 + 8);
      v66 = (char *)(v42 + 41);
      do
      {
        v245 = *(_QWORD *)v242;
        v246 = *(_QWORD *)v242 != -4096 && *(_QWORD *)v242 != -8192;
        v247 = *v243;
        if ( *v243 == -4096 || v247 == -8192 )
        {
          *(_QWORD *)v242 = v247;
          *v243 = v245;
          if ( v246 )
          {
            *(__m128i *)(v243 + 1) = _mm_loadu_si128((const __m128i *)(v242 + 8));
            *(__m128i *)(v243 + 3) = _mm_loadu_si128((const __m128i *)(v242 + 24));
          }
        }
        else if ( v246 )
        {
          v297 = _mm_loadu_si128((const __m128i *)v242);
          v298 = _mm_loadu_si128((const __m128i *)v242 + 1);
          v299 = *((_QWORD *)v242 + 4);
          v248 = *(_QWORD *)v242;
          *(_QWORD *)v242 = v247;
          *(__m128i *)(v242 + 8) = _mm_loadu_si128((const __m128i *)(v243 + 1));
          *((_QWORD *)v242 + 3) = v243[3];
          v242[32] = *((_BYTE *)v243 + 32);
          *v243 = v248;
          *(__m128i *)(v243 + 1) = _mm_loadu_si128((const __m128i *)&v297.m128i_u64[1]);
          v243[3] = v298.m128i_i64[1];
          *((_BYTE *)v243 + 32) = v299;
        }
        else
        {
          *(_QWORD *)v242 = v247;
          v244 = _mm_loadu_si128((const __m128i *)(v243 + 1));
          *v243 = v245;
          *(__m128i *)(v242 + 8) = v244;
          *(__m128i *)(v242 + 24) = _mm_loadu_si128((const __m128i *)(v243 + 3));
        }
        v242 += 40;
        v243 += 5;
      }
      while ( v242 != v66 );
LABEL_68:
      v67 = v42 + 42;
      v68 = v66;
      *((_DWORD *)v42 + 82) = 1;
      v69 = v48 + 328;
      *((_DWORD *)v42 + 83) = 0;
      if ( v42 + 54 == v42 + 42 )
      {
        v70 = 0;
      }
      else
      {
        do
        {
          *v67 = -4096;
          v67 += 3;
        }
        while ( v42 + 54 != v67 );
        v70 = *((_DWORD *)v42 + 82) >> 1;
      }
      v71 = *((_DWORD *)v48 + 82);
      *((_DWORD *)v48 + 82) = v71 & 1 | (2 * v70);
      *((_DWORD *)v42 + 82) = v71 & 0xFFFFFFFE | v42[41] & 1;
      v72 = *((_DWORD *)v42 + 83);
      *((_DWORD *)v42 + 83) = *((_DWORD *)v48 + 83);
      *((_DWORD *)v48 + 83) = v72;
      if ( (v42[41] & 1) == 0 )
      {
        v73 = *((_DWORD *)v42 + 86);
        if ( (v48[328] & 1) == 0 )
        {
          v252 = v42[42];
          v42[42] = *((_QWORD *)v48 + 42);
          *((_QWORD *)v48 + 42) = v252;
          *((_DWORD *)v42 + 86) = *((_DWORD *)v48 + 86);
          *((_DWORD *)v48 + 86) = v73;
          goto LABEL_86;
        }
        goto LABEL_73;
      }
      if ( (v48[328] & 1) == 0 )
      {
        v68 = v48 + 328;
        v73 = *((_DWORD *)v48 + 86);
        v69 = v66;
LABEL_73:
        *v68 |= 1u;
        v74 = *((_QWORD *)v69 + 1);
        v75 = *((_QWORD *)v68 + 1);
        *((_QWORD *)v68 + 1) = v74;
        if ( v74 != -8192 && v74 != -4096 )
          *((__m128i *)v68 + 1) = _mm_loadu_si128((const __m128i *)v69 + 1);
        v76 = *((_QWORD *)v69 + 4);
        *((_QWORD *)v68 + 4) = v76;
        if ( v76 != -8192 && v76 != -4096 )
          *(__m128i *)(v68 + 40) = _mm_loadu_si128((const __m128i *)(v69 + 40));
        v77 = *((_QWORD *)v69 + 7);
        *((_QWORD *)v68 + 7) = v77;
        if ( v77 != -4096 && v77 != -8192 )
          *((__m128i *)v68 + 4) = _mm_loadu_si128((const __m128i *)v69 + 4);
        v78 = *((_QWORD *)v69 + 10);
        *((_QWORD *)v68 + 10) = v78;
        if ( v78 != -4096 && v78 != -8192 )
          *(__m128i *)(v68 + 88) = _mm_loadu_si128((const __m128i *)(v69 + 88));
        *v69 &= ~1u;
        *((_QWORD *)v69 + 1) = v75;
        *((_DWORD *)v69 + 4) = v73;
        goto LABEL_86;
      }
      v186 = v42[42];
      v187 = v186 != -8192 && v186 != -4096;
      v188 = *((_QWORD *)v48 + 42);
      if ( v188 == -4096 || v188 == -8192 )
      {
        v42[42] = v188;
        *((_QWORD *)v48 + 42) = v186;
        if ( v187 )
          *(__m128i *)(v48 + 344) = _mm_loadu_si128((const __m128i *)(v42 + 43));
      }
      else if ( v187 )
      {
        v297 = _mm_loadu_si128((const __m128i *)v42 + 21);
        v298.m128i_i64[0] = v42[44];
        v273 = v42[42];
        v42[42] = v188;
        *(__m128i *)(v42 + 43) = _mm_loadu_si128((const __m128i *)(v48 + 344));
        *((_QWORD *)v48 + 42) = v273;
        *(__m128i *)(v48 + 344) = _mm_loadu_si128((const __m128i *)&v297.m128i_u64[1]);
      }
      else
      {
        v42[42] = v188;
        v189 = _mm_loadu_si128((const __m128i *)(v48 + 344));
        *((_QWORD *)v48 + 42) = v186;
        *(__m128i *)(v42 + 43) = v189;
      }
      v190 = v42[45];
      v191 = v190 != -8192 && v190 != -4096;
      v192 = *((_QWORD *)v48 + 45);
      if ( v192 == -4096 || v192 == -8192 )
      {
        v42[45] = v192;
        *((_QWORD *)v48 + 45) = v190;
        if ( v191 )
          *((__m128i *)v48 + 23) = _mm_loadu_si128((const __m128i *)v42 + 23);
      }
      else if ( v191 )
      {
        v297 = _mm_loadu_si128((const __m128i *)(v42 + 45));
        v298.m128i_i64[0] = v42[47];
        v42[45] = v192;
        *((__m128i *)v42 + 23) = _mm_loadu_si128((const __m128i *)v48 + 23);
        *((_QWORD *)v48 + 45) = v190;
        *((__m128i *)v48 + 23) = _mm_loadu_si128((const __m128i *)&v297.m128i_u64[1]);
      }
      else
      {
        v42[45] = v192;
        v193 = _mm_loadu_si128((const __m128i *)v48 + 23);
        *((_QWORD *)v48 + 45) = v190;
        *((__m128i *)v42 + 23) = v193;
      }
      v194 = v42[48];
      v195 = v194 != -8192 && v194 != -4096;
      v196 = *((_QWORD *)v48 + 48);
      if ( v196 == -4096 || v196 == -8192 )
      {
        v42[48] = v196;
        *((_QWORD *)v48 + 48) = v194;
        if ( v195 )
          *(__m128i *)(v48 + 392) = _mm_loadu_si128((const __m128i *)(v42 + 49));
      }
      else if ( v195 )
      {
        v297 = _mm_loadu_si128((const __m128i *)v42 + 24);
        v298.m128i_i64[0] = v42[50];
        v42[48] = v196;
        *(__m128i *)(v42 + 49) = _mm_loadu_si128((const __m128i *)(v48 + 392));
        *((_QWORD *)v48 + 48) = v194;
        *(__m128i *)(v48 + 392) = _mm_loadu_si128((const __m128i *)&v297.m128i_u64[1]);
      }
      else
      {
        v42[48] = v196;
        v197 = _mm_loadu_si128((const __m128i *)(v48 + 392));
        *((_QWORD *)v48 + 48) = v194;
        *(__m128i *)(v42 + 49) = v197;
      }
      v198 = v42[51];
      v199 = v198 != -4096 && v198 != -8192;
      v200 = *((_QWORD *)v48 + 51);
      if ( v200 == -4096 || v200 == -8192 )
      {
        v42[51] = v200;
        *((_QWORD *)v48 + 51) = v198;
        if ( v199 )
          *((__m128i *)v48 + 26) = _mm_loadu_si128((const __m128i *)v42 + 26);
      }
      else if ( v199 )
      {
        v297 = _mm_loadu_si128((const __m128i *)(v42 + 51));
        v298.m128i_i64[0] = v42[53];
        v42[51] = v200;
        *((__m128i *)v42 + 26) = _mm_loadu_si128((const __m128i *)v48 + 26);
        *((_QWORD *)v48 + 51) = v198;
        *((__m128i *)v48 + 26) = _mm_loadu_si128((const __m128i *)&v297.m128i_u64[1]);
      }
      else
      {
        v42[51] = v200;
        v201 = _mm_loadu_si128((const __m128i *)v48 + 26);
        *((_QWORD *)v48 + 51) = v198;
        *((__m128i *)v42 + 26) = v201;
      }
LABEL_86:
      v79 = v42 + 55;
      *((_DWORD *)v42 + 108) = 1;
      v80 = v42 + 54;
      v81 = v48 + 432;
      *((_DWORD *)v42 + 109) = 0;
      if ( v42 + 71 == v42 + 55 )
      {
        v82 = 0;
      }
      else
      {
        do
        {
          *v79 = -4096;
          v79 += 2;
        }
        while ( v42 + 71 != v79 );
        v82 = *((_DWORD *)v42 + 108) >> 1;
      }
      v83 = *((_DWORD *)v48 + 108);
      *((_DWORD *)v48 + 108) = v83 & 1 | (2 * v82);
      *((_DWORD *)v42 + 108) = v83 & 0xFFFFFFFE | v42[54] & 1;
      v84 = *((_DWORD *)v42 + 109);
      *((_DWORD *)v42 + 109) = *((_DWORD *)v48 + 109);
      *((_DWORD *)v48 + 109) = v84;
      if ( (v42[54] & 1) == 0 )
      {
        v85 = *((_DWORD *)v42 + 112);
        if ( (v48[432] & 1) == 0 )
        {
          v249 = v42[55];
          v42[55] = *((_QWORD *)v48 + 55);
          *((_QWORD *)v48 + 55) = v249;
          *((_DWORD *)v42 + 112) = *((_DWORD *)v48 + 112);
          *((_DWORD *)v48 + 112) = v85;
          goto LABEL_116;
        }
        goto LABEL_91;
      }
      if ( (v48[432] & 1) == 0 )
      {
        v85 = *((_DWORD *)v48 + 112);
        v80 = v48 + 432;
        v81 = v42 + 54;
LABEL_91:
        *(_BYTE *)v80 |= 1u;
        v86 = v81[1];
        v87 = v80[1];
        v80[1] = v86;
        if ( v86 != -8192 && v86 != -4096 )
          v80[2] = v81[2];
        v88 = v81[3];
        v80[3] = v88;
        if ( v88 != -8192 && v88 != -4096 )
          v80[4] = v81[4];
        v89 = v81[5];
        v80[5] = v89;
        if ( v89 != -8192 && v89 != -4096 )
          v80[6] = v81[6];
        v90 = v81[7];
        v80[7] = v90;
        if ( v90 != -4096 && v90 != -8192 )
          v80[8] = v81[8];
        v91 = v81[9];
        v80[9] = v91;
        if ( v91 != -8192 && v91 != -4096 )
          v80[10] = v81[10];
        v92 = v81[11];
        v80[11] = v92;
        if ( v92 != -8192 && v92 != -4096 )
          v80[12] = v81[12];
        v93 = v81[13];
        v80[13] = v93;
        if ( v93 != -8192 && v93 != -4096 )
          v80[14] = v81[14];
        v94 = v81[15];
        v80[15] = v94;
        if ( v94 != -8192 && v94 != -4096 )
          v80[16] = v81[16];
        *(_BYTE *)v81 &= ~1u;
        v81[1] = v87;
        *((_DWORD *)v81 + 4) = v85;
        goto LABEL_116;
      }
      v154 = v42[55];
      v155 = v154 != -4096 && v154 != -8192;
      v156 = *((_QWORD *)v48 + 55);
      if ( v156 == -4096 || v156 == -8192 )
      {
        v42[55] = v156;
        *((_QWORD *)v48 + 55) = v154;
        if ( v155 )
          *((_QWORD *)v48 + 56) = v42[56];
      }
      else
      {
        v157 = *((_QWORD *)v48 + 56);
        if ( v155 )
        {
          v289 = *((_QWORD *)v48 + 56);
          v271 = v42[56];
          *(__m128 *)(v42 + 55) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 55) = v154;
          *((_QWORD *)v48 + 56) = v271;
        }
        else
        {
          v42[55] = v156;
          *((_QWORD *)v48 + 55) = v154;
          v42[56] = v157;
        }
      }
      v158 = v42[57];
      v159 = v158 != -4096 && v158 != -8192;
      v160 = *((_QWORD *)v48 + 57);
      if ( v160 == -4096 || v160 == -8192 )
      {
        v42[57] = v160;
        *((_QWORD *)v48 + 57) = v158;
        if ( v159 )
          *((_QWORD *)v48 + 58) = v42[58];
      }
      else
      {
        v161 = *((_QWORD *)v48 + 58);
        if ( v159 )
        {
          v289 = *((_QWORD *)v48 + 58);
          v277 = v42[58];
          *(__m128 *)(v42 + 57) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 57) = v158;
          *((_QWORD *)v48 + 58) = v277;
        }
        else
        {
          v42[57] = v160;
          *((_QWORD *)v48 + 57) = v158;
          v42[58] = v161;
        }
      }
      v162 = v42[59];
      v163 = v162 != -4096 && v162 != -8192;
      v164 = *((_QWORD *)v48 + 59);
      if ( v164 == -4096 || v164 == -8192 )
      {
        v42[59] = v164;
        *((_QWORD *)v48 + 59) = v162;
        if ( v163 )
          *((_QWORD *)v48 + 60) = v42[60];
      }
      else
      {
        v165 = *((_QWORD *)v48 + 60);
        if ( v163 )
        {
          v289 = *((_QWORD *)v48 + 60);
          v276 = v42[60];
          *(__m128 *)(v42 + 59) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 59) = v162;
          *((_QWORD *)v48 + 60) = v276;
        }
        else
        {
          v42[59] = v164;
          *((_QWORD *)v48 + 59) = v162;
          v42[60] = v165;
        }
      }
      v166 = v42[61];
      v167 = v166 != -4096 && v166 != -8192;
      v168 = *((_QWORD *)v48 + 61);
      if ( v168 == -4096 || v168 == -8192 )
      {
        v42[61] = v168;
        *((_QWORD *)v48 + 61) = v166;
        if ( v167 )
          *((_QWORD *)v48 + 62) = v42[62];
      }
      else
      {
        v169 = *((_QWORD *)v48 + 62);
        if ( v167 )
        {
          v289 = *((_QWORD *)v48 + 62);
          v285 = v42[62];
          *(__m128 *)(v42 + 61) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 61) = v166;
          *((_QWORD *)v48 + 62) = v285;
        }
        else
        {
          v42[61] = v168;
          *((_QWORD *)v48 + 61) = v166;
          v42[62] = v169;
        }
      }
      v170 = v42[63];
      v171 = v170 != -4096 && v170 != -8192;
      v172 = *((_QWORD *)v48 + 63);
      if ( v172 == -4096 || v172 == -8192 )
      {
        v42[63] = v172;
        *((_QWORD *)v48 + 63) = v170;
        if ( v171 )
          *((_QWORD *)v48 + 64) = v42[64];
      }
      else
      {
        v173 = *((_QWORD *)v48 + 64);
        if ( v171 )
        {
          v289 = *((_QWORD *)v48 + 64);
          v284 = v42[64];
          *(__m128 *)(v42 + 63) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 63) = v170;
          *((_QWORD *)v48 + 64) = v284;
        }
        else
        {
          v42[63] = v172;
          *((_QWORD *)v48 + 63) = v170;
          v42[64] = v173;
        }
      }
      v174 = v42[65];
      v175 = v174 != -4096 && v174 != -8192;
      v176 = *((_QWORD *)v48 + 65);
      if ( v176 == -4096 || v176 == -8192 )
      {
        v42[65] = v176;
        *((_QWORD *)v48 + 65) = v174;
        if ( v175 )
          *((_QWORD *)v48 + 66) = v42[66];
      }
      else
      {
        v177 = *((_QWORD *)v48 + 66);
        if ( v175 )
        {
          v289 = *((_QWORD *)v48 + 66);
          v287 = v42[66];
          *(__m128 *)(v42 + 65) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 65) = v174;
          *((_QWORD *)v48 + 66) = v287;
        }
        else
        {
          v42[65] = v176;
          *((_QWORD *)v48 + 65) = v174;
          v42[66] = v177;
        }
      }
      v178 = v42[67];
      v179 = v178 != -4096 && v178 != -8192;
      v180 = *((_QWORD *)v48 + 67);
      if ( v180 == -4096 || v180 == -8192 )
      {
        v42[67] = v180;
        *((_QWORD *)v48 + 67) = v178;
        if ( v179 )
          *((_QWORD *)v48 + 68) = v42[68];
      }
      else
      {
        v181 = *((_QWORD *)v48 + 68);
        if ( v179 )
        {
          v289 = *((_QWORD *)v48 + 68);
          v286 = v42[68];
          *(__m128 *)(v42 + 67) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 67) = v178;
          *((_QWORD *)v48 + 68) = v286;
        }
        else
        {
          v42[67] = v180;
          *((_QWORD *)v48 + 67) = v178;
          v42[68] = v181;
        }
      }
      v182 = v42[69];
      v183 = v182 != -4096 && v182 != -8192;
      v184 = *((_QWORD *)v48 + 69);
      if ( v184 == -4096 || v184 == -8192 )
      {
        v42[69] = v184;
        *((_QWORD *)v48 + 69) = v182;
        if ( v183 )
          *((_QWORD *)v48 + 70) = v42[70];
      }
      else
      {
        v185 = *((_QWORD *)v48 + 70);
        if ( v183 )
        {
          v289 = *((_QWORD *)v48 + 70);
          v281 = v42[70];
          *(__m128 *)(v42 + 69) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 69) = v182;
          *((_QWORD *)v48 + 70) = v281;
        }
        else
        {
          v42[69] = v184;
          *((_QWORD *)v48 + 69) = v182;
          v42[70] = v185;
        }
      }
LABEL_116:
      v95 = v42 + 72;
      *((_DWORD *)v42 + 142) = 1;
      v96 = v42 + 71;
      v97 = v48 + 568;
      *((_DWORD *)v42 + 143) = 0;
      if ( v42 + 88 == v42 + 72 )
      {
        v98 = 0;
      }
      else
      {
        do
        {
          *v95 = -4096;
          v95 += 2;
        }
        while ( v42 + 88 != v95 );
        v98 = *((_DWORD *)v42 + 142) >> 1;
      }
      v99 = *((_DWORD *)v48 + 142);
      *((_DWORD *)v48 + 142) = v99 & 1 | (2 * v98);
      *((_DWORD *)v42 + 142) = v99 & 0xFFFFFFFE | v42[71] & 1;
      v100 = *((_DWORD *)v42 + 143);
      *((_DWORD *)v42 + 143) = *((_DWORD *)v48 + 143);
      *((_DWORD *)v48 + 143) = v100;
      if ( (v42[71] & 1) == 0 )
      {
        v101 = *((_DWORD *)v42 + 146);
        if ( (v48[568] & 1) == 0 )
        {
          v253 = v42[72];
          v42[72] = *((_QWORD *)v48 + 72);
          *((_QWORD *)v48 + 72) = v253;
          *((_DWORD *)v42 + 146) = *((_DWORD *)v48 + 146);
          *((_DWORD *)v48 + 146) = v101;
          goto LABEL_146;
        }
        goto LABEL_121;
      }
      if ( (v48[568] & 1) == 0 )
      {
        v101 = *((_DWORD *)v48 + 146);
        v96 = v48 + 568;
        v97 = v42 + 71;
LABEL_121:
        *(_BYTE *)v96 |= 1u;
        v102 = v97[1];
        v103 = v96[1];
        v96[1] = v102;
        if ( v102 != -4096 && v102 != -8192 )
          v96[2] = v97[2];
        v104 = v97[3];
        v96[3] = v104;
        if ( v104 != -4096 && v104 != -8192 )
          v96[4] = v97[4];
        v105 = v97[5];
        v96[5] = v105;
        if ( v105 != -4096 && v105 != -8192 )
          v96[6] = v97[6];
        v106 = v97[7];
        v96[7] = v106;
        if ( v106 != -4096 && v106 != -8192 )
          v96[8] = v97[8];
        v107 = v97[9];
        v96[9] = v107;
        if ( v107 != -4096 && v107 != -8192 )
          v96[10] = v97[10];
        v108 = v97[11];
        v96[11] = v108;
        if ( v108 != -8192 && v108 != -4096 )
          v96[12] = v97[12];
        v109 = v97[13];
        v96[13] = v109;
        if ( v109 != -8192 && v109 != -4096 )
          v96[14] = v97[14];
        v110 = v97[15];
        v96[15] = v110;
        if ( v110 != -8192 && v110 != -4096 )
          v96[16] = v97[16];
        *(_BYTE *)v97 &= ~1u;
        v97[1] = v103;
        *((_DWORD *)v97 + 4) = v101;
        goto LABEL_146;
      }
      v202 = v42[72];
      v203 = v202 != -4096 && v202 != -8192;
      v204 = *((_QWORD *)v48 + 72);
      if ( v204 == -4096 || v204 == -8192 )
      {
        v42[72] = v204;
        *((_QWORD *)v48 + 72) = v202;
        if ( v203 )
          *((_QWORD *)v48 + 73) = v42[73];
      }
      else
      {
        v205 = *((_QWORD *)v48 + 73);
        if ( v203 )
        {
          v289 = *((_QWORD *)v48 + 73);
          v272 = v42[73];
          *((__m128 *)v42 + 36) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 72) = v202;
          *((_QWORD *)v48 + 73) = v272;
        }
        else
        {
          v42[72] = v204;
          *((_QWORD *)v48 + 72) = v202;
          v42[73] = v205;
        }
      }
      v206 = v42[74];
      v207 = v206 != -8192 && v206 != -4096;
      v208 = *((_QWORD *)v48 + 74);
      if ( v208 == -4096 || v208 == -8192 )
      {
        v42[74] = v208;
        *((_QWORD *)v48 + 74) = v206;
        if ( v207 )
          *((_QWORD *)v48 + 75) = v42[75];
      }
      else
      {
        v209 = *((_QWORD *)v48 + 75);
        if ( v207 )
        {
          v289 = *((_QWORD *)v48 + 75);
          v280 = v42[75];
          *((__m128 *)v42 + 37) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 74) = v206;
          *((_QWORD *)v48 + 75) = v280;
        }
        else
        {
          v42[74] = v208;
          *((_QWORD *)v48 + 74) = v206;
          v42[75] = v209;
        }
      }
      v210 = v42[76];
      v211 = v210 != -8192 && v210 != -4096;
      v212 = *((_QWORD *)v48 + 76);
      if ( v212 == -4096 || v212 == -8192 )
      {
        v42[76] = v212;
        *((_QWORD *)v48 + 76) = v210;
        if ( v211 )
          *((_QWORD *)v48 + 77) = v42[77];
      }
      else
      {
        v213 = *((_QWORD *)v48 + 77);
        if ( v211 )
        {
          v289 = *((_QWORD *)v48 + 77);
          v279 = v42[77];
          *((__m128 *)v42 + 38) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 76) = v210;
          *((_QWORD *)v48 + 77) = v279;
        }
        else
        {
          v42[76] = v212;
          *((_QWORD *)v48 + 76) = v210;
          v42[77] = v213;
        }
      }
      v214 = v42[78];
      v215 = v214 != -4096 && v214 != -8192;
      v216 = *((_QWORD *)v48 + 78);
      if ( v216 == -4096 || v216 == -8192 )
      {
        v42[78] = v216;
        *((_QWORD *)v48 + 78) = v214;
        if ( v215 )
          *((_QWORD *)v48 + 79) = v42[79];
      }
      else
      {
        v217 = *((_QWORD *)v48 + 79);
        if ( v215 )
        {
          v289 = *((_QWORD *)v48 + 79);
          v275 = v42[79];
          *((__m128 *)v42 + 39) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 78) = v214;
          *((_QWORD *)v48 + 79) = v275;
        }
        else
        {
          v42[78] = v216;
          *((_QWORD *)v48 + 78) = v214;
          v42[79] = v217;
        }
      }
      v218 = v42[80];
      v219 = v218 != -4096 && v218 != -8192;
      v220 = *((_QWORD *)v48 + 80);
      if ( v220 == -4096 || v220 == -8192 )
      {
        v42[80] = v220;
        *((_QWORD *)v48 + 80) = v218;
        if ( v219 )
          *((_QWORD *)v48 + 81) = v42[81];
      }
      else
      {
        v221 = *((_QWORD *)v48 + 81);
        if ( v219 )
        {
          v289 = *((_QWORD *)v48 + 81);
          v274 = v42[81];
          *((__m128 *)v42 + 40) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 80) = v218;
          *((_QWORD *)v48 + 81) = v274;
        }
        else
        {
          v42[80] = v220;
          *((_QWORD *)v48 + 80) = v218;
          v42[81] = v221;
        }
      }
      v222 = v42[82];
      v223 = v222 != -4096 && v222 != -8192;
      v224 = *((_QWORD *)v48 + 82);
      if ( v224 == -4096 || v224 == -8192 )
      {
        v42[82] = v224;
        *((_QWORD *)v48 + 82) = v222;
        if ( v223 )
          *((_QWORD *)v48 + 83) = v42[83];
      }
      else
      {
        v225 = *((_QWORD *)v48 + 83);
        if ( v223 )
        {
          v289 = *((_QWORD *)v48 + 83);
          v283 = v42[83];
          *((__m128 *)v42 + 41) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 82) = v222;
          *((_QWORD *)v48 + 83) = v283;
        }
        else
        {
          v42[82] = v224;
          *((_QWORD *)v48 + 82) = v222;
          v42[83] = v225;
        }
      }
      v226 = v42[84];
      v227 = v226 != -4096 && v226 != -8192;
      v228 = *((_QWORD *)v48 + 84);
      if ( v228 == -4096 || v228 == -8192 )
      {
        v42[84] = v228;
        *((_QWORD *)v48 + 84) = v226;
        if ( v227 )
          *((_QWORD *)v48 + 85) = v42[85];
      }
      else
      {
        v229 = *((_QWORD *)v48 + 85);
        if ( v227 )
        {
          v289 = *((_QWORD *)v48 + 85);
          v282 = v42[85];
          *((__m128 *)v42 + 42) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 84) = v226;
          *((_QWORD *)v48 + 85) = v282;
        }
        else
        {
          v42[84] = v228;
          *((_QWORD *)v48 + 84) = v226;
          v42[85] = v229;
        }
      }
      v230 = v42[86];
      v231 = v230 != -4096 && v230 != -8192;
      v232 = *((_QWORD *)v48 + 86);
      if ( v232 == -4096 || v232 == -8192 )
      {
        v42[86] = v232;
        *((_QWORD *)v48 + 86) = v230;
        if ( v231 )
          *((_QWORD *)v48 + 87) = v42[87];
      }
      else
      {
        v233 = *((_QWORD *)v48 + 87);
        if ( v231 )
        {
          v289 = *((_QWORD *)v48 + 87);
          v278 = v42[87];
          *((__m128 *)v42 + 43) = _mm_loadh_ps((const double *)&v289);
          *((_QWORD *)v48 + 86) = v230;
          *((_QWORD *)v48 + 87) = v278;
        }
        else
        {
          v42[86] = v232;
          *((_QWORD *)v48 + 86) = v230;
          v42[87] = v233;
        }
      }
LABEL_146:
      v42[88] = 0;
      v111 = *((_QWORD *)v48 + 88);
      v112 = v42 + 92;
      *((_DWORD *)v42 + 180) = 0;
      *((_DWORD *)v42 + 179) = 0;
      *((_DWORD *)v42 + 178) = 0;
      v42[88] = v111;
      LODWORD(v111) = *((_DWORD *)v48 + 178);
      *((_QWORD *)v48 + 88) = 0;
      *((_DWORD *)v42 + 178) = v111;
      v113 = *((_DWORD *)v48 + 179);
      *((_DWORD *)v48 + 178) = 0;
      LODWORD(v111) = *((_DWORD *)v42 + 179);
      *((_DWORD *)v42 + 179) = v113;
      v114 = *((_DWORD *)v48 + 180);
      *((_DWORD *)v48 + 179) = v111;
      LODWORD(v111) = *((_DWORD *)v42 + 180);
      *((_DWORD *)v42 + 180) = v114;
      v115 = v42 + 91;
      *((_DWORD *)v48 + 180) = v111;
      v116 = v48 + 728;
      *((_DWORD *)v42 + 182) = 1;
      *((_DWORD *)v42 + 183) = 0;
      if ( v42 + 116 == v42 + 92 )
      {
        v117 = 0;
      }
      else
      {
        do
        {
          *v112 = -4096;
          v112 += 3;
        }
        while ( v42 + 116 != v112 );
        v117 = *((_DWORD *)v42 + 182) >> 1;
      }
      v118 = *((_DWORD *)v48 + 182);
      *((_DWORD *)v48 + 182) = v118 & 1 | (2 * v117);
      *((_DWORD *)v42 + 182) = v118 & 0xFFFFFFFE | v42[91] & 1;
      v119 = *((_DWORD *)v42 + 183);
      *((_DWORD *)v42 + 183) = *((_DWORD *)v48 + 183);
      *((_DWORD *)v48 + 183) = v119;
      if ( (v42[91] & 1) != 0 )
      {
        if ( (v48[728] & 1) != 0 )
        {
          v234 = v42 + 92;
          v235 = (__int64 *)(v48 + 736);
          do
          {
            v237 = *v234;
            v238 = *v234 != -8192 && *v234 != -4096;
            v239 = *v235;
            if ( *v235 == -4096 || v239 == -8192 )
            {
              *v234 = v239;
              *v235 = v237;
              if ( v238 )
                *(__m128i *)(v235 + 1) = _mm_loadu_si128((const __m128i *)(v234 + 1));
            }
            else if ( v238 )
            {
              v240 = *((_DWORD *)v234 + 2);
              v241 = v234[2];
              *v234 = v239;
              *((_DWORD *)v234 + 2) = *((_DWORD *)v235 + 2);
              v234[2] = v235[2];
              *v235 = v237;
              *((_DWORD *)v235 + 2) = v240;
              v235[2] = v241;
            }
            else
            {
              v236 = _mm_loadu_si128((const __m128i *)(v235 + 1));
              *v234 = v239;
              *v235 = v237;
              *(__m128i *)(v234 + 1) = v236;
            }
            v234 += 3;
            v235 += 3;
          }
          while ( v42 + 116 != v234 );
          goto LABEL_176;
        }
        v120 = *((_DWORD *)v48 + 186);
        v115 = v48 + 728;
        v116 = v42 + 91;
LABEL_151:
        *(_BYTE *)v115 |= 1u;
        v121 = v116[1];
        v122 = v115[1];
        v115[1] = v121;
        if ( v121 != -8192 && v121 != -4096 )
          *((__m128i *)v115 + 1) = _mm_loadu_si128((const __m128i *)v116 + 1);
        v123 = v116[4];
        v115[4] = v123;
        if ( v123 != -8192 && v123 != -4096 )
          *(__m128i *)(v115 + 5) = _mm_loadu_si128((const __m128i *)(v116 + 5));
        v124 = v116[7];
        v115[7] = v124;
        if ( v124 != -8192 && v124 != -4096 )
          *((__m128i *)v115 + 4) = _mm_loadu_si128((const __m128i *)v116 + 4);
        v125 = v116[10];
        v115[10] = v125;
        if ( v125 != -4096 && v125 != -8192 )
          *(__m128i *)(v115 + 11) = _mm_loadu_si128((const __m128i *)(v116 + 11));
        v126 = v116[13];
        v115[13] = v126;
        if ( v126 != -8192 && v126 != -4096 )
          *((__m128i *)v115 + 7) = _mm_loadu_si128((const __m128i *)v116 + 7);
        v127 = v116[16];
        v115[16] = v127;
        if ( v127 != -8192 && v127 != -4096 )
          *(__m128i *)(v115 + 17) = _mm_loadu_si128((const __m128i *)(v116 + 17));
        v128 = v116[19];
        v115[19] = v128;
        if ( v128 != -8192 && v128 != -4096 )
          *((__m128i *)v115 + 10) = _mm_loadu_si128((const __m128i *)v116 + 10);
        v129 = v116[22];
        v115[22] = v129;
        if ( v129 != -8192 && v129 != -4096 )
          *(__m128i *)(v115 + 23) = _mm_loadu_si128((const __m128i *)(v116 + 23));
        *(_BYTE *)v116 &= ~1u;
        v116[1] = v122;
        *((_DWORD *)v116 + 4) = v120;
        goto LABEL_176;
      }
      v120 = *((_DWORD *)v42 + 186);
      if ( (v48[728] & 1) != 0 )
        goto LABEL_151;
      v250 = v42[92];
      v42[92] = *((_QWORD *)v48 + 92);
      *((_QWORD *)v48 + 92) = v250;
      *((_DWORD *)v42 + 186) = *((_DWORD *)v48 + 186);
      *((_DWORD *)v48 + 186) = v120;
LABEL_176:
      *((_DWORD *)v42 + 232) = *((_DWORD *)v48 + 232);
      *((_DWORD *)v42 + 233) = *((_DWORD *)v48 + 233);
      v42[117] = *((_QWORD *)v48 + 117);
      v42[118] = *((_QWORD *)v48 + 118);
      v42[119] = *((_QWORD *)v48 + 119);
      v42[120] = *((_QWORD *)v48 + 120);
      v42[121] = *((_QWORD *)v48 + 121);
      *((_DWORD *)v42 + 244) = *((_DWORD *)v48 + 244);
      *(__m128i *)(v42 + 123) = _mm_loadu_si128((const __m128i *)(v48 + 984));
      v42[125] = *((_QWORD *)v48 + 125);
      v42[126] = *((_QWORD *)v48 + 126);
      v42[127] = *((_QWORD *)v48 + 127);
      v130 = *((_DWORD *)v48 + 256);
      v42[129] = 0;
      *((_DWORD *)v42 + 256) = v130;
      v131 = *((_QWORD *)v48 + 129);
      *((_DWORD *)v42 + 262) = 0;
      v42[129] = v131;
      *((_DWORD *)v42 + 260) = 0;
      *((_DWORD *)v42 + 261) = 0;
      *((_QWORD *)v48 + 129) = 0;
      *((_DWORD *)v42 + 260) = *((_DWORD *)v48 + 260);
      v132 = *((_DWORD *)v48 + 261);
      *((_DWORD *)v48 + 260) = 0;
      LODWORD(v131) = *((_DWORD *)v42 + 261);
      *((_DWORD *)v42 + 261) = v132;
      v133 = *((_DWORD *)v48 + 262);
      *((_DWORD *)v48 + 261) = v131;
      LODWORD(v131) = *((_DWORD *)v42 + 262);
      *((_DWORD *)v42 + 262) = v133;
      v134 = _mm_loadu_si128((const __m128i *)v48 + 66);
      *((_DWORD *)v48 + 262) = v131;
      *((__m128i *)v42 + 66) = v134;
      v42[134] = *((_QWORD *)v48 + 134);
      *((_BYTE *)v42 + 1080) = v48[1080];
      *((_DWORD *)v42 + 271) = *((_DWORD *)v48 + 271);
      *((_BYTE *)v42 + 1088) = v48[1088];
      v42[137] = *((_QWORD *)v48 + 137);
      *((_BYTE *)v42 + 1104) = v48[1104];
      *((_BYTE *)v42 + 1105) = v48[1105];
      *((_BYTE *)v42 + 1106) = v48[1106];
      *((_BYTE *)v42 + 1107) = v48[1107];
      *((_BYTE *)v42 + 1108) = v48[1108];
      *((_DWORD *)v42 + 278) = *((_DWORD *)v48 + 278);
      *((_DWORD *)v42 + 279) = *((_DWORD *)v48 + 279);
      *((_DWORD *)v42 + 280) = *((_DWORD *)v48 + 280);
      v135 = *((_QWORD *)v48 + 141);
      v42[142] = 0;
      v42[141] = v135;
      v136 = *((_QWORD *)v48 + 142);
      *((_DWORD *)v42 + 288) = 0;
      *((_DWORD *)v42 + 287) = 0;
      *((_DWORD *)v42 + 286) = 0;
      v42[142] = v136;
      LODWORD(v136) = *((_DWORD *)v48 + 286);
      *((_QWORD *)v48 + 142) = 0;
      *((_DWORD *)v42 + 286) = v136;
      v137 = *((_DWORD *)v48 + 287);
      *((_DWORD *)v48 + 286) = 0;
      LODWORD(v136) = *((_DWORD *)v42 + 287);
      *((_DWORD *)v42 + 287) = v137;
      v138 = *((_DWORD *)v48 + 288);
      *((_DWORD *)v48 + 287) = v136;
      LODWORD(v136) = *((_DWORD *)v42 + 288);
      *((_DWORD *)v42 + 288) = v138;
      *((_DWORD *)v48 + 288) = v136;
      *((_DWORD *)v42 + 292) = 0;
      *((_DWORD *)v42 + 293) = 4;
      v139 = *((_DWORD *)v48 + 292);
      v42[145] = v42 + 147;
      if ( v139 )
        sub_1576230((char ***)v42 + 145, (char ***)v48 + 145);
      v42[151] = 0;
      v140 = *((_QWORD *)v48 + 151);
      *((_DWORD *)v42 + 306) = 0;
      *((_DWORD *)v42 + 305) = 0;
      *((_DWORD *)v42 + 304) = 0;
      v42[151] = v140;
      LODWORD(v140) = *((_DWORD *)v48 + 304);
      *((_QWORD *)v48 + 151) = 0;
      *((_DWORD *)v42 + 304) = v140;
      v141 = *((_DWORD *)v48 + 305);
      *((_DWORD *)v48 + 304) = 0;
      LODWORD(v140) = *((_DWORD *)v42 + 305);
      *((_DWORD *)v42 + 305) = v141;
      v142 = *((_DWORD *)v48 + 306);
      *((_DWORD *)v48 + 305) = v140;
      LODWORD(v140) = *((_DWORD *)v42 + 306);
      *((_DWORD *)v42 + 306) = v142;
      *((_DWORD *)v48 + 306) = v140;
      *((_DWORD *)v42 + 310) = 0;
      *((_DWORD *)v42 + 311) = 4;
      v143 = *((_DWORD *)v48 + 310);
      v42[154] = v42 + 156;
      if ( v143 )
        sub_1B52350((char ***)v42 + 154, (char ***)v48 + 154);
      v42[160] = 0;
      v144 = *((_QWORD *)v48 + 160);
      *((_DWORD *)v42 + 324) = 0;
      *((_DWORD *)v42 + 323) = 0;
      *((_DWORD *)v42 + 322) = 0;
      v42[160] = v144;
      LODWORD(v144) = *((_DWORD *)v48 + 322);
      *((_QWORD *)v48 + 160) = 0;
      *((_DWORD *)v42 + 322) = v144;
      v145 = *((_DWORD *)v48 + 323);
      *((_DWORD *)v48 + 322) = 0;
      LODWORD(v144) = *((_DWORD *)v42 + 323);
      *((_DWORD *)v42 + 323) = v145;
      v146 = *((_DWORD *)v48 + 324);
      *((_DWORD *)v48 + 323) = v144;
      LODWORD(v144) = *((_DWORD *)v42 + 324);
      *((_DWORD *)v42 + 324) = v146;
      *((_DWORD *)v48 + 324) = v144;
      v42[163] = 0;
      v147 = *((_QWORD *)v48 + 163);
      *((_DWORD *)v42 + 329) = 0;
      *((_DWORD *)v42 + 328) = 0;
      *((_DWORD *)v42 + 330) = 0;
      v42[163] = v147;
      LODWORD(v147) = *((_DWORD *)v48 + 328);
      *((_QWORD *)v48 + 163) = 0;
      *((_DWORD *)v42 + 328) = v147;
      v148 = *((_DWORD *)v48 + 329);
      *((_DWORD *)v48 + 328) = 0;
      LODWORD(v147) = *((_DWORD *)v42 + 329);
      *((_DWORD *)v42 + 329) = v148;
      *((_DWORD *)v48 + 329) = v147;
      LODWORD(v147) = *((_DWORD *)v42 + 330);
      *((_DWORD *)v42 + 330) = *((_DWORD *)v48 + 330);
      *((_DWORD *)v48 + 330) = v147;
      *((_DWORD *)v42 + 334) = 0;
      *((_DWORD *)v42 + 335) = 8;
      v149 = *((_DWORD *)v48 + 334);
      v42[166] = v42 + 168;
      if ( v149 )
        sub_1AE6B10((char ***)v42 + 166, (char ***)v48 + 166);
      v150 = *((_QWORD *)v48 + 192);
      *((_DWORD *)v42 + 388) = 0;
      *((_DWORD *)v42 + 389) = 16;
      v42[192] = v150;
      v42[193] = v42 + 195;
      if ( *((_DWORD *)v48 + 388) )
        sub_1B52470((char ***)v42 + 193, (char ***)v48 + 193);
      v48 += 1688;
      v42 += 211;
      if ( v49 == v48 )
      {
        v151 = *(char **)v9;
        v49 = (char *)(*(_QWORD *)v9 + 1688LL * *(unsigned int *)(v9 + 8));
        if ( *(char **)v9 != v49 )
        {
          do
          {
            v49 -= 1688;
            sub_1AEA350((__int64)v49);
          }
          while ( v151 != v49 );
          v49 = *(char **)v9;
        }
        goto LABEL_188;
      }
    }
    v54 = *((_DWORD *)v42 + 4);
    v55 = v48;
    v56 = (char *)v42;
    if ( (*v48 & 1) == 0 )
    {
      v251 = v42[1];
      v66 = (char *)(v42 + 41);
      v42[1] = *((_QWORD *)v48 + 1);
      *((_QWORD *)v48 + 1) = v251;
      *((_DWORD *)v42 + 4) = *((_DWORD *)v48 + 4);
      *((_DWORD *)v48 + 4) = v54;
      goto LABEL_68;
    }
    goto LABEL_43;
  }
LABEL_188:
  v152 = v294;
  if ( v291 != v49 )
    free(v49);
  v153 = v290;
  *(_DWORD *)(v9 + 12) = v152;
  ++*(_DWORD *)(v9 + 8);
  *(_QWORD *)v9 = v153;
LABEL_26:
  v29 = *(_QWORD *)(a1 + 336) + 6776LL * *(unsigned int *)(a1 + 344) - 6776;
  result = *(_QWORD *)v29 + 1688LL * *(unsigned int *)(v29 + 8);
  *(_DWORD *)(result - 756) = v288;
  return result;
}
