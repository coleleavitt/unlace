__int64 __fastcall sub_36D180(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  int v8; // r14d
  __int64 v9; // rbx
  char v10; // al
  __int64 i; // rdx
  int *v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r12d
  int v17; // eax
  _DWORD *v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // rax
  char v21; // al
  char v22; // dl
  bool v23; // zf
  int v24; // edx
  _BOOL4 v25; // eax
  __int64 v26; // rbx
  __m128i *v27; // rsi
  __m128i si128; // xmm0
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r14
  void (__fastcall *v31)(const char **); // rax
  char *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdi
  size_t v35; // rbx
  void *v36; // r12
  void *v37; // rcx
  __int64 *v38; // r14
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 j; // rbx
  __int64 *v42; // r12
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __m128i v48; // xmm0
  __int64 *v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r15
  size_t *v53; // r12
  size_t v54; // r13
  size_t v55; // rbx
  size_t v56; // rax
  size_t v57; // rbx
  size_t v58; // rax
  __int64 v59; // r12
  size_t v60; // rax
  __int64 v61; // r12
  void *v62; // r13
  void *v63; // r12
  __int64 v64; // rax
  __int64 v65; // rsi
  __m128i v66; // xmm0
  size_t v67; // rbx
  __int64 v68; // r15
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  void *v73; // rax
  __m128i v74; // xmm0
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // r12
  __int64 v78; // r14
  __int64 *v79; // rbx
  __int64 v80; // rdi
  __int64 v81; // rdi
  char v82; // al
  double v83; // xmm4_8
  double v84; // xmm5_8
  __m128 v85; // xmm4
  __m128 v86; // xmm5
  __int64 (__fastcall *v87)(int, __int64 *, double, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, __int64, __int64, __int64); // rsi
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __m128 v91; // xmm4
  __m128 v92; // xmm5
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __m128 v98; // xmm4
  __m128 v99; // xmm5
  __int64 v100; // rax
  int v101; // ecx
  unsigned __int8 v102; // al
  unsigned __int8 v103; // al
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  const char *v106; // rdx
  const char *v107; // rsi
  const char *v108; // rsi
  const char *v109; // rdi
  __int64 v110; // rax
  __int64 srclang_parser_internal; // r14
  void (__fastcall *v112)(const char *); // rax
  const char *v113; // rdi
  unsigned int v114; // r14d
  __int64 v115; // rdx
  __int64 v116; // r12
  __int64 v117; // rbx
  __int64 *v118; // rax
  __int64 v119; // rdi
  _BYTE *v120; // rdx
  __int64 v121; // r12
  __int64 v122; // rbx
  __int64 *v123; // rax
  __int64 v124; // rdi
  char *v125; // rdx
  unsigned __int64 v126; // r12
  __int64 v127; // rbx
  char *v128; // rax
  __int64 v129; // rdi
  __int64 v130; // rdx
  __int64 v131; // r12
  __int64 v132; // rbx
  __int64 *v133; // rax
  __int64 v134; // rdi
  __int64 v135; // rdx
  __int64 v136; // r12
  __int64 v137; // rbx
  __int64 *v138; // rax
  __int64 v139; // rdi
  __int64 v140; // rdx
  __int64 v141; // r12
  __int64 v142; // rbx
  __int64 *v143; // rax
  __int64 v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // r12
  __int64 v147; // rbx
  __int64 *v148; // rax
  __int64 v149; // rdi
  __int64 v150; // rdx
  __int64 v151; // r12
  __int64 v152; // rbx
  __int64 *v153; // rax
  __int64 v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // r12
  __int64 v157; // rbx
  __int64 *v158; // rax
  __int64 v159; // rdi
  __int64 v160; // rdx
  __int64 v161; // r12
  __int64 v162; // rbx
  __int64 *v163; // rax
  __int64 v164; // rdi
  size_t v166; // r13
  void *v167; // rax
  const void *v168; // rsi
  __int64 v169; // rdi
  __int64 v170; // r12
  __int64 v171; // r14
  __int64 *v172; // rbx
  __int64 v173; // rdi
  __int64 v174; // rdi
  __int64 v175; // rax
  char *v176; // r12
  _BYTE *v177; // rbx
  __int64 v178; // rax
  __int64 v179; // rbx
  __int64 v180; // r13
  size_t v181; // r14
  __int64 v182; // r12
  size_t v183; // r14
  void *v184; // rax
  void *v185; // rax
  char v186; // [rsp+0h] [rbp-440h]
  __int64 v187; // [rsp+48h] [rbp-3F8h]
  __int64 v188; // [rsp+60h] [rbp-3E0h]
  __int64 v189; // [rsp+B0h] [rbp-390h]
  void *v190; // [rsp+B8h] [rbp-388h]
  void *v191; // [rsp+C0h] [rbp-380h]
  void *v192; // [rsp+C8h] [rbp-378h]
  void *src[2]; // [rsp+D0h] [rbp-370h] BYREF
  size_t n[2]; // [rsp+E0h] [rbp-360h] BYREF
  int v195; // [rsp+F4h] [rbp-34Ch] BYREF
  int v196; // [rsp+F8h] [rbp-348h] BYREF
  int v197; // [rsp+FCh] [rbp-344h]
  _BOOL4 v198; // [rsp+100h] [rbp-340h]
  int v199; // [rsp+104h] [rbp-33Ch]
  _DWORD v200[2]; // [rsp+108h] [rbp-338h] BYREF
  __int64 v201; // [rsp+110h] [rbp-330h]
  __int64 v202; // [rsp+118h] [rbp-328h]
  unsigned __int64 v203; // [rsp+120h] [rbp-320h]
  __int64 v204; // [rsp+128h] [rbp-318h]
  __int64 v205; // [rsp+130h] [rbp-310h]
  __int64 v206; // [rsp+138h] [rbp-308h]
  __int64 v207; // [rsp+140h] [rbp-300h]
  __int64 v208; // [rsp+148h] [rbp-2F8h]
  __int128 v209; // [rsp+150h] [rbp-2F0h] BYREF
  __int64 v210; // [rsp+160h] [rbp-2E0h] BYREF
  __int64 *v211; // [rsp+168h] [rbp-2D8h]
  __int128 v212; // [rsp+170h] [rbp-2D0h] BYREF
  __int64 v213; // [rsp+180h] [rbp-2C0h] BYREF
  __int128 v214; // [rsp+188h] [rbp-2B8h]
  __int64 v215; // [rsp+1A0h] [rbp-2A0h] BYREF
  __int128 v216; // [rsp+1A8h] [rbp-298h]
  __int64 v217; // [rsp+1C0h] [rbp-280h] BYREF
  __int128 v218; // [rsp+1C8h] [rbp-278h]
  __int64 v219; // [rsp+1E0h] [rbp-260h] BYREF
  __int128 v220; // [rsp+1E8h] [rbp-258h]
  __int64 v221; // [rsp+200h] [rbp-240h] BYREF
  __int128 v222; // [rsp+208h] [rbp-238h]
  __int64 v223; // [rsp+220h] [rbp-220h] BYREF
  __int128 v224; // [rsp+228h] [rbp-218h]
  __int64 v225; // [rsp+240h] [rbp-200h] BYREF
  __int128 v226; // [rsp+248h] [rbp-1F8h]
  const char *v227; // [rsp+260h] [rbp-1E0h] BYREF
  __int128 v228; // [rsp+268h] [rbp-1D8h]
  const char *v229; // [rsp+280h] [rbp-1C0h] BYREF
  __int128 v230; // [rsp+288h] [rbp-1B8h]
  __int64 v231; // [rsp+2A0h] [rbp-1A0h] BYREF
  __int128 v232; // [rsp+2A8h] [rbp-198h]
  __int64 v233; // [rsp+2C0h] [rbp-180h] BYREF
  __int128 v234; // [rsp+2C8h] [rbp-178h]
  const char *v235; // [rsp+2E0h] [rbp-160h] BYREF
  __int128 v236; // [rsp+2E8h] [rbp-158h]
  __int64 v237; // [rsp+300h] [rbp-140h] BYREF
  __int128 v238; // [rsp+308h] [rbp-138h]
  void *v239; // [rsp+320h] [rbp-120h] BYREF
  __m128i v240; // [rsp+328h] [rbp-118h] BYREF
  __int64 v241; // [rsp+338h] [rbp-108h]
  __m128i v242; // [rsp+340h] [rbp-100h] BYREF
  char *v243; // [rsp+350h] [rbp-F0h] BYREF
  __m128 v244; // [rsp+358h] [rbp-E8h]
  _BYTE *v245; // [rsp+368h] [rbp-D8h] BYREF
  __m128i v246; // [rsp+370h] [rbp-D0h]
  __int64 v247; // [rsp+380h] [rbp-C0h]
  __int64 v248; // [rsp+388h] [rbp-B8h]
  __int64 v249; // [rsp+398h] [rbp-A8h]
  __int64 v250; // [rsp+3A0h] [rbp-A0h]
  const char *v251; // [rsp+3B0h] [rbp-90h]
  __int64 v252; // [rsp+3B8h] [rbp-88h]
  __int64 v253; // [rsp+3C8h] [rbp-78h]
  __int64 v254; // [rsp+3D0h] [rbp-70h]
  int v255; // [rsp+3E0h] [rbp-60h] BYREF
  unsigned __int64 v256; // [rsp+408h] [rbp-38h]

  v256 = __readfsqword(0x28u);
  v213 = 0;
  v215 = 0;
  v214 = 0;
  v216 = 0;
  get_compilers(&v215, &v213, 0);
  v8 = v216;
  v9 = v215;
  v10 = getinf(57) & 0xF;
  if ( v8 <= 0 )
  {
LABEL_16:
    LODWORD(i) = 0;
  }
  else
  {
    for ( i = 0; *(_BYTE *)(v9 + i) != v10; ++i )
    {
      if ( v8 - 1 == i )
        goto LABEL_16;
    }
  }
  v12 = (int *)&unk_5E8580;
  v13 = 0;
  v14 = 0;
  v195 = i;
  v15 = 0;
  v217 = 0;
  v219 = 0;
  v218 = 0;
  v220 = 0;
  while ( 1 )
  {
    v16 = *v12;
    if ( v14 < v15 + 1 )
    {
      v219 = qvector_reserve(&v219, v13, v15 + 1, 4);
      v15 = v220;
      v13 = v219;
    }
    *(_DWORD *)(v13 + 4 * v15) = v16;
    ++v12;
    v15 = v220 + 1;
    *(_QWORD *)&v220 = v220 + 1;
    if ( &unk_5E85A4 == (_UNKNOWN *)v12 )
      break;
    v14 = *((_QWORD *)&v220 + 1);
    v13 = v219;
  }
  sub_34B3C0((__int64)&v217, (const char **)&off_867340, 9);
  get_custom_callcnvs(&v217, &v219);
  v17 = getinf(99);
  v18 = (_DWORD *)(v219 + 4 * v220);
  if ( (_DWORD *)v219 == v18 )
  {
LABEL_17:
    LODWORD(v20) = -1;
  }
  else
  {
    v19 = (_DWORD *)v219;
    while ( v17 != *v19 )
    {
      if ( v18 == ++v19 )
        goto LABEL_17;
    }
    v20 = ((__int64)v19 - v219) >> 2;
  }
  v196 = v20;
  v221 = 0;
  v223 = 0;
  v222 = 0;
  v224 = 0;
  sub_34B3C0((__int64)&v221, (const char **)off_867320, 2);
  sub_34B3C0((__int64)&v223, (const char **)off_867330, 2);
  v21 = getinf(58);
  v22 = v21 & 0xC;
  if ( (v21 & 4) != 0 )
  {
    v23 = v22 == 12;
    v24 = 1;
    v25 = !v23;
  }
  else
  {
    v25 = v22 != 0;
    v24 = 0;
  }
  v198 = v25;
  v197 = v24;
  v225 = 0;
  v226 = 0;
  sub_34B3C0((__int64)&v225, (const char **)&off_867300, 4);
  if ( (unsigned __int8)getinf(59) > 2u )
  {
    v26 = v225;
    v27 = *(__m128i **)(v225 + 24);
    if ( *(_QWORD *)(v225 + 40) <= 0x14u )
    {
      v175 = qvector_reserve(v225 + 24, v27, 21, 1);
      *(_QWORD *)(v26 + 24) = v175;
      v27 = (__m128i *)v175;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD2E0);
    *(_QWORD *)(v26 + 32) = 21;
    v27[1].m128i_i32[0] = 538976288;
    *v27 = si128;
    *(_BYTE *)(*(_QWORD *)(v26 + 24) + 20LL) = 0;
  }
  v199 = getinf(58) & 3;
  v209 = 0;
  getinf_buf(98, &v209, 16);
  v227 = nullptr;
  v228 = 0;
  v201 = BYTE5(v209);
  v202 = BYTE3(v209);
  v203 = BYTE2(v209);
  v204 = BYTE4(v209);
  v205 = BYTE6(v209);
  v206 = BYTE7(v209);
  v207 = BYTE8(v209);
  v208 = BYTE9(v209);
  getinf_str(&v227, 71);
  v229 = nullptr;
  v230 = 0;
  getinf_str(&v229, 72);
  v231 = 0;
  v200[0] = 0;
  v233 = 0;
  v235 = nullptr;
  v232 = 0;
  v234 = 0;
  v236 = 0;
  v244.m128_u64[0] = get_srclang_parser_internal();
  v29 = v244.m128_u64[0];
  v30 = v244.m128_u64[0];
  v244.m128_u64[1] = (unsigned __int64)&v231;
  v245 = v200;
  v243 = (char *)&get_parser_info;
  for_all_srclang_parsers(&v243, 0);
  sub_34BA00(&v233, *(_DWORD *)(v29 + 24));
  v31 = *(void (__fastcall **)(const char **))(v29 + 48);
  if ( v31 )
    v31(&v235);
  if ( v30 )
    --*(_DWORD *)(v30 + 12);
  v32 = "PARSER_PRESETS";
  v210 = 0;
  v211 = nullptr;
  get_config_value(&v210, "PARSER_PRESETS");
  if ( (_DWORD)v210 == 3 )
  {
    v34 = qword_8CF0B0;
    if ( qword_8CF0B0 )
    {
      v35 = xmmword_8CF0B8;
      if ( (_QWORD)xmmword_8CF0B8 )
      {
        v36 = nullptr;
        do
        {
          v37 = v36;
          v38 = (__int64 *)(v34 + 48LL * (_QWORD)v36);
          v39 = v38[3];
          if ( v39 )
          {
            v40 = v38[4];
            if ( v40 )
            {
              src[0] = v36;
              n[0] = v35;
              for ( j = 0; j != v40; ++j )
              {
                v33 = 48 * j;
                v42 = (__int64 *)(v39 + 48 * j);
                v43 = v42[3];
                if ( v43 )
                {
                  v42[4] = 0;
                  qfree(v43, "PARSER_PRESETS", v33, v37);
                }
                v44 = *v42;
                if ( *v42 )
                {
                  v42[1] = 0;
                  qfree(v44, "PARSER_PRESETS", v33, v37);
                }
                v39 = v38[3];
              }
              v35 = n[0];
              v36 = src[0];
            }
            v38[4] = 0;
            qfree(v39, "PARSER_PRESETS", v33, v37);
          }
          v45 = *v38;
          if ( *v38 )
          {
            v38[1] = 0;
            qfree(v45, "PARSER_PRESETS", v33, v37);
          }
          v34 = qword_8CF0B0;
          v36 = (char *)v36 + 1;
        }
        while ( (void *)v35 != v36 );
      }
      *(_QWORD *)&xmmword_8CF0B8 = 0;
      *(double *)v48.m128i_i64 = qfree(v34, "PARSER_PRESETS");
      qword_8CF0B0 = 0;
      *((_QWORD *)&xmmword_8CF0B8 + 1) = 0;
      if ( (_DWORD)v210 != 3 )
      {
LABEL_273:
        if ( !under_debugger )
        {
          interr(1279, v32, v46, v47, *(double *)v48.m128i_i64);
LABEL_275:
          if ( !under_debugger )
            interr(1623, v32, v51, v50, *(double *)v48.m128i_i64);
        }
LABEL_279:
        BUG();
      }
    }
    v187 = *v211 + 40 * v211[1];
    if ( *v211 != v187 )
    {
      v188 = *v211;
      do
      {
        if ( *(_DWORD *)(v188 + 24) != 4 )
          break;
        v49 = *(__int64 **)(v188 + 32);
        v238 = 0;
        v237 = 0;
        v243 = nullptr;
        v244 = 0;
        v48.m128i_i64[0] = 0;
        v243 = (char *)qvector_reserve(&v243, 0, 11, 1);
        v244.m128_u64[0] = 11;
        strcpy(v243, "Presets...");
        v246 = 0;
        v245 = nullptr;
        v245 = (_BYTE *)qvector_reserve(&v245, 0, 1, 1);
        v32 = (char *)&v243;
        v246.m128i_i64[0] = 1;
        *v245 = 0;
        sub_36CFD0(&v237, (__int64)&v243);
        if ( v245 )
        {
          v246.m128i_i64[0] = 0;
          *(double *)v48.m128i_i64 = qfree(v245, (const char *)&v243);
        }
        if ( v243 )
        {
          v244.m128_u64[0] = 0;
          *(double *)v48.m128i_i64 = qfree(v243, (const char *)&v243);
        }
        v51 = *v49;
        v52 = *v49;
        v189 = *v49 + 16 * v49[1];
        if ( *v49 != v189 )
        {
          do
          {
            if ( *(_DWORD *)v52 != 3 )
            {
              v169 = v237;
              if ( v237 )
              {
                v170 = v238;
                if ( (_QWORD)v238 )
                {
                  v171 = 0;
                  do
                  {
                    v172 = (__int64 *)(v169 + 48 * v171);
                    v173 = v172[3];
                    if ( v173 )
                    {
                      v172[4] = 0;
                      qfree(v173, v32);
                    }
                    v174 = *v172;
                    if ( *v172 )
                    {
                      v172[1] = 0;
                      qfree(v174, v32);
                    }
                    v169 = v237;
                    ++v171;
                  }
                  while ( v170 != v171 );
                }
                *(_QWORD *)&v238 = 0;
                qfree(v169, v32);
              }
              goto LABEL_101;
            }
            v53 = *(size_t **)(v52 + 8);
            v54 = v53[1];
            if ( !v54 )
              goto LABEL_277;
            v55 = *v53;
            n[0] = 0;
            while ( 1 )
            {
              if ( *(_QWORD *)(v55 + 8) )
              {
                v32 = "name";
                if ( !strcmp(*(const char **)v55, "name") )
                  break;
              }
              ++n[0];
              v55 += 40LL;
              if ( v54 == n[0] )
                goto LABEL_277;
            }
            if ( *(_DWORD *)(v55 + 24) != 2 )
            {
LABEL_277:
              if ( !under_debugger )
                interr(1623, v32, v51, v50, *(double *)v48.m128i_i64);
              goto LABEL_279;
            }
            v56 = *(_QWORD *)(v55 + 32);
            n[0] = v56;
            v57 = *(_QWORD *)(v56 + 8);
            if ( v57 )
            {
              v192 = (void *)qalloc_or_throw(*(_QWORD *)(v56 + 8));
              v32 = *(char **)n[0];
              memcpy(v192, *(const void **)n[0], v57);
              if ( *(_DWORD *)v52 != 3 )
              {
                if ( under_debugger )
                  goto LABEL_279;
                interr(1279, v32, v51, v50, *(double *)v48.m128i_i64);
                goto LABEL_273;
              }
              v53 = *(size_t **)(v52 + 8);
              v54 = v53[1];
              if ( !v54 )
              {
LABEL_236:
                v60 = 0;
                goto LABEL_68;
              }
            }
            else
            {
              v192 = nullptr;
              v57 = 0;
            }
            v58 = *v53;
            v59 = 0;
            n[0] = v58;
            while ( 1 )
            {
              if ( *(_QWORD *)(n[0] + 8) )
              {
                v32 = "argv";
                if ( !strcmp(*(const char **)n[0], "argv") )
                  break;
              }
              ++v59;
              n[0] += 40LL;
              if ( v59 == v54 )
                goto LABEL_236;
            }
            v60 = n[0] + 24;
LABEL_68:
            if ( *(_DWORD *)v60 != 2 )
              goto LABEL_275;
            v61 = *(_QWORD *)(v60 + 8);
            n[0] = *(_QWORD *)(v61 + 8);
            if ( n[0] )
            {
              v166 = n[0];
              v167 = (void *)qalloc_or_throw(n[0]);
              v168 = *(const void **)v61;
              v63 = nullptr;
              src[0] = v167;
              memcpy(v167, v168, v166);
              v244.m128_u64[1] = 0;
              if ( !v57 )
                goto LABEL_238;
            }
            else
            {
              v244.m128_u64[1] = 0;
              if ( !v57 )
              {
                v246.m128i_i64[1] = 0;
                v62 = nullptr;
                v63 = nullptr;
                src[0] = nullptr;
                v191 = nullptr;
                v190 = nullptr;
                goto LABEL_72;
              }
              src[0] = nullptr;
            }
            v63 = (void *)qalloc_or_throw(v57);
            v244.m128_u64[1] = v57;
            memcpy(v63, v192, v57);
            v246.m128i_i64[1] = 0;
            if ( n[0] )
            {
LABEL_238:
              v62 = (void *)qalloc_or_throw(n[0]);
              v246.m128i_i64[1] = n[0];
              memcpy(v62, src[0], n[0]);
              if ( v57 )
              {
                v191 = (void *)qalloc_or_throw(v57);
                memcpy(v191, v63, v57);
              }
              else
              {
                v191 = nullptr;
              }
              v190 = (void *)qalloc_or_throw(n[0]);
              memcpy(v190, v62, n[0]);
              goto LABEL_72;
            }
            v191 = (void *)qalloc_or_throw(v57);
            memcpy(v191, v63, v57);
            v62 = nullptr;
            v190 = nullptr;
LABEL_72:
            v64 = v238;
            v65 = v237;
            v51 = v238 + 1;
            if ( *((_QWORD *)&v238 + 1) < (unsigned __int64)(v238 + 1) )
            {
              v237 = qvector_reserve(&v237, v237, v51, 48);
              v65 = v237;
              v64 = v238;
            }
            v32 = (char *)(48 * v64 + v65);
            *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
            v66 = _mm_loadl_epi64((const __m128i *)n);
            *(_QWORD *)v32 = v191;
            v48 = _mm_unpacklo_epi64(v66, v66);
            *((_QWORD *)v32 + 3) = v190;
            *((__m128i *)v32 + 2) = v48;
            *(_QWORD *)&v238 = v238 + 1;
            if ( v62 )
              *(double *)v48.m128i_i64 = qfree(v62, v32);
            if ( v63 )
              *(double *)v48.m128i_i64 = qfree(v63, v32, *(double *)v48.m128i_i64);
            if ( src[0] )
              *(double *)v48.m128i_i64 = qfree(src[0], v32, *(double *)v48.m128i_i64);
            if ( v192 )
              *(double *)v48.m128i_i64 = qfree(v192, v32, *(double *)v48.m128i_i64);
            v52 += 16;
          }
          while ( v189 != v52 );
        }
        v239 = nullptr;
        v240 = 0;
        v67 = *(_QWORD *)(v188 + 8);
        if ( v67 )
        {
          v239 = (void *)qalloc_or_throw(*(_QWORD *)(v188 + 8));
          v240.m128i_i64[1] = v67;
          memcpy(v239, *(const void **)v188, v67);
          v240.m128i_i64[0] = v67;
        }
        v241 = 0;
        v242 = 0;
        v68 = v238;
        if ( (_QWORD)v238 )
        {
          v241 = qalloc_or_throw(48 * v238);
          v179 = v241;
          v180 = 0;
          v242.m128i_i64[1] = v68;
          do
          {
            while ( 1 )
            {
              a4 = 0;
              v182 = v237 + 48 * v180;
              *(_OWORD *)(v179 + 8) = 0;
              *(_QWORD *)v179 = 0;
              v183 = *(_QWORD *)(v182 + 8);
              if ( v183 )
              {
                v184 = (void *)qalloc_or_throw(*(_QWORD *)(v182 + 8));
                *(_QWORD *)v179 = v184;
                *(_QWORD *)(v179 + 16) = v183;
                memcpy(v184, *(const void **)v182, v183);
                *(_QWORD *)(v179 + 8) = v183;
              }
              *(_QWORD *)(v179 + 24) = 0;
              *(_OWORD *)(v179 + 32) = 0;
              v181 = *(_QWORD *)(v182 + 32);
              if ( v181 )
                break;
              ++v180;
              v179 += 48;
              if ( v68 == v180 )
                goto LABEL_270;
            }
            v185 = (void *)qalloc_or_throw(*(_QWORD *)(v182 + 32));
            *(_QWORD *)(v179 + 24) = v185;
            ++v180;
            *(_QWORD *)(v179 + 40) = v181;
            v179 += 48;
            memcpy(v185, *(const void **)(v182 + 24), v181);
            *(_QWORD *)(v179 - 16) = v181;
          }
          while ( v68 != v180 );
LABEL_270:
          v242.m128i_i64[0] = v68;
        }
        v69 = xmmword_8CF0B8;
        v70 = qword_8CF0B0;
        v71 = *((_QWORD *)&xmmword_8CF0B8 + 1);
        v72 = xmmword_8CF0B8 + 1;
        if ( (unsigned __int64)&v239 >= qword_8CF0B0
          && (unsigned __int64)&v239 < qword_8CF0B0 + 48LL * *((_QWORD *)&xmmword_8CF0B8 + 1) )
        {
          v176 = (char *)v239;
          a2 = (__m128)_mm_loadu_si128(&v240);
          a3 = 0;
          v239 = nullptr;
          v177 = (_BYTE *)v241;
          v74 = _mm_load_si128(&v242);
          v241 = 0;
          v243 = v176;
          v245 = v177;
          v244 = a2;
          v240 = 0;
          v246 = v74;
          v242 = 0;
          if ( *((_QWORD *)&xmmword_8CF0B8 + 1) < v72 )
          {
            *(__m128 *)src = a2;
            *(__m128i *)n = v74;
            qword_8CF0B0 = qvector_reserve(&qword_8CF0B0, qword_8CF0B0, v72, 48);
            v70 = qword_8CF0B0;
            a2 = (__m128)_mm_load_si128((const __m128i *)src);
            v69 = xmmword_8CF0B8;
            v74 = _mm_load_si128((const __m128i *)n);
          }
          v178 = v70 + 48 * v69;
          *(_QWORD *)v178 = v176;
          *(_QWORD *)(v178 + 24) = v177;
          *(__m128 *)(v178 + 8) = a2;
          *(__m128i *)(v178 + 32) = v74;
        }
        else
        {
          if ( *((_QWORD *)&xmmword_8CF0B8 + 1) < v72 )
          {
            qword_8CF0B0 = qvector_reserve(&qword_8CF0B0, qword_8CF0B0, v72, 48);
            v70 = qword_8CF0B0;
            v69 = xmmword_8CF0B8;
          }
          v70 += 48 * v69;
          v73 = v239;
          *(__m128i *)(v70 + 8) = _mm_loadu_si128(&v240);
          v74 = _mm_load_si128(&v242);
          *(_QWORD *)v70 = v73;
          v75 = v241;
          *(__m128i *)(v70 + 32) = v74;
          *(_QWORD *)(v70 + 24) = v75;
        }
        v76 = v237;
        *(_QWORD *)&xmmword_8CF0B8 = xmmword_8CF0B8 + 1;
        if ( v237 )
        {
          v77 = v238;
          if ( (_QWORD)v238 )
          {
            v78 = 0;
            do
            {
              v79 = (__int64 *)(v76 + 48 * v78);
              v80 = v79[3];
              if ( v80 )
              {
                v79[4] = 0;
                *(double *)v74.m128i_i64 = qfree(v80, (const char *)v70, v72, v71);
              }
              v81 = *v79;
              if ( *v79 )
              {
                v79[1] = 0;
                *(double *)v74.m128i_i64 = qfree(v81, (const char *)v70, v72, v71, *(double *)v74.m128i_i64);
              }
              v76 = v237;
              ++v78;
            }
            while ( v77 != v78 );
          }
          *(_QWORD *)&v238 = 0;
          qfree(v76, (const char *)v70, v72, v71);
        }
        v188 += 40;
      }
      while ( v187 != v188 );
    }
  }
LABEL_101:
  v200[1] = 0;
  v237 = 0;
  v238 = 0;
  sub_34BB50((__int64)&v237, v231 + 24LL * v200[0]);
  sub_364720((__int64)&v243, (__int64)&v215, (__int64)&v231, (__int64)&v217, (__int64)&v219);
  v82 = getinf(57);
  sub_34E6D0((__int64 *)&v243, (const char *)(v82 & 0xF), 0.0, a2, a3, a4, v83, v84, a7, a8);
  n[0] = (size_t)&v195;
  src[0] = &v196;
  while ( 1 )
  {
    v87 = sub_366A70;
    if ( !(unsigned int)sub_1697D0(
                          (int)"Compiler options\n"
                               "%/%*<~C~ompiler           :b1:0:25::>\n"
                               "<ABI ~n~ame           :b16:0:16::> <~O~ptions:B17:1:::>\n"
                               "                   %18q\n"
                               "<Callin~g~ convention :b2:0:25::>\n"
                               "<~M~emory model       :b3:0:15::><:b4:0:15::>\n"
                               "<Poin~t~er size       :b5:0:25::>\n"
                               "\n"
                               "<Default ~a~lignment  :D6:4:4::>\n"
                               "\n"
                               "<sizeof(~i~nt)        :D7:4:4::>  <sizeof(~s~hort)   :D8:4:4::>\n"
                               "<sizeof(~b~ool)       :D9:4:4::>  <sizeof(~l~ong)    :D10:4:4::>\n"
                               "<sizeof(~e~num)       :D11:4:4::>  <sizeof(l~o~nglong):D12:4:4::>\n"
                               "<sizeof(long do~u~ble):D15:4:4::>\n"
                               "\n"
                               "<~P~redefined macros  :q13::31::>\n"
                               "<Include ~d~irectories:q14::31::>\n"
                               "\n"
                               "<Source pa~r~ser      :b19:0:8::> Syntax:%20X\n"
                               "Arguments          <:b23:0:8::><:q21::31::>\n"
                               "                   <Parser specific options :B22:1:::>\n"
                               "\n",
                          (__int64)sub_366A70,
                          (__int64)&v243,
                          (__int64)&v213,
                          n[0],
                          (__int64)&v245,
                          (__m128)0LL,
                          a2,
                          a3,
                          a4,
                          v85,
                          v86,
                          a7,
                          a8,
                          (char)&v255) )
    {
      v114 = -1;
      goto LABEL_137;
    }
    if ( v195 <= 0 )
      break;
    v93 = v201 - 1;
    if ( (v201 & (v201 - 1)) != 0 )
    {
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\nWrong alignment value",
        (__int64)sub_366A70,
        v93,
        v88,
        v89,
        v90,
        (__m128)0LL,
        a2,
        a3,
        a4,
        v91,
        v92,
        a7,
        a8,
        v186);
    }
    else if ( v202 )
    {
      if ( v203 )
      {
        if ( v204 )
        {
          if ( v205 )
          {
            if ( v206 )
            {
              if ( v207 )
              {
                if ( v208 )
                {
                  if ( v199 != 1 )
                    break;
                  LOBYTE(v94) = (unsigned __int8)getinf(59) > 2u;
                  if ( (_BYTE)v94 == v203 > 2 )
                    break;
                  sub_169630(
                    (int)"ICON ERROR\nAUTOHIDE NONE\nPointer size is not compatible with the integer size",
                    (__int64)sub_366A70,
                    v94,
                    v95,
                    v96,
                    v97,
                    (__m128)0LL,
                    a2,
                    a3,
                    a4,
                    v98,
                    v99,
                    a7,
                    a8,
                    v186);
                }
                else
                {
                  sub_169630(
                    (int)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)",
                    (__int64)"longdouble",
                    v93,
                    v88,
                    v89,
                    v90,
                    (__m128)0LL,
                    a2,
                    a3,
                    a4,
                    v91,
                    v92,
                    a7,
                    a8,
                    v186);
                }
              }
              else
              {
                sub_169630(
                  (int)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)",
                  (__int64)"longlong",
                  v93,
                  v88,
                  v89,
                  v90,
                  (__m128)0LL,
                  a2,
                  a3,
                  a4,
                  v91,
                  v92,
                  a7,
                  a8,
                  v186);
              }
            }
            else
            {
              sub_169630(
                (int)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)",
                (__int64)"long",
                v93,
                v88,
                v89,
                v90,
                (__m128)0LL,
                a2,
                a3,
                a4,
                v91,
                v92,
                a7,
                a8,
                v186);
            }
          }
          else
          {
            sub_169630(
              (int)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)",
              (__int64)"short",
              v93,
              v88,
              v89,
              v90,
              (__m128)0LL,
              a2,
              a3,
              a4,
              v91,
              v92,
              a7,
              a8,
              v186);
          }
        }
        else
        {
          sub_169630(
            (int)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)",
            (__int64)"enum",
            v93,
            v88,
            v89,
            v90,
            (__m128)0LL,
            a2,
            a3,
            a4,
            v91,
            v92,
            a7,
            a8,
            v186);
        }
      }
      else
      {
        sub_169630(
          (int)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)",
          (__int64)"int",
          v93,
          v88,
          v89,
          v90,
          (__m128)0LL,
          a2,
          a3,
          a4,
          v91,
          v92,
          a7,
          a8,
          v186);
      }
    }
    else
    {
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)",
        (__int64)"bool",
        v93,
        v88,
        v89,
        v90,
        (__m128)0LL,
        a2,
        a3,
        a4,
        v91,
        v92,
        a7,
        a8,
        v186);
    }
  }
  v212 = 0;
  getinf_buf(98, &v212, 16);
  v100 = v195;
  if ( v195 < 0 )
    v100 = 0;
  LOBYTE(v212) = *(_BYTE *)(v215 + v100);
  v101 = *(_DWORD *)(v219 + 4LL * v196);
  if ( v197 )
  {
    v102 = (v199 | (!v198 ? 12 : 4)) & 0xF;
    if ( (v101 & 0xFFFFFF0F) != 0 )
      goto LABEL_232;
  }
  else
  {
    v102 = (v199 | (8 * v198)) & 0xF;
    if ( (v101 & 0xFFFFFF0F) != 0 )
      goto LABEL_232;
  }
  if ( v101 != 192 )
  {
    v103 = v101 | v102;
    v101 = 0;
    v104 = v103;
    goto LABEL_120;
  }
LABEL_232:
  v104 = v102 | 0xC0u;
LABEL_120:
  HIDWORD(v212) = v101;
  v105 = v104
       | (((unsigned __int8)v203
         | (((unsigned __int8)v202
           | (((unsigned __int8)v204
             | (((unsigned __int8)v201
               | (((unsigned __int8)v205
                 | (((unsigned __int8)v206 | ((unsigned __int64)(unsigned __int8)v207 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  v106 = nullptr;
  *(_QWORD *)((char *)&v212 + 1) = v105;
  BYTE9(v212) = v208;
  if ( v255 >= 0 && v255 < v244.m128_i32[0] )
  {
    v106 = &s1;
    if ( v252 )
      v106 = v251;
  }
  set_compiler(&v212, 9, v106);
  v107 = &s1;
  if ( (_QWORD)v228 )
    v107 = v227;
  setinf_buf(71, v107, 0);
  v108 = &s1;
  if ( (_QWORD)v230 )
    v108 = v229;
  setinf_buf(72, v108, 0);
  v109 = &s1;
  v110 = v231 + 24LL * v200[0];
  if ( *(_QWORD *)(v110 + 8) )
    v109 = *(const char **)v110;
  select_parser_by_name(v109);
  srclang_parser_internal = get_srclang_parser_internal();
  v112 = *(void (__fastcall **)(const char *))(srclang_parser_internal + 40);
  if ( v112 )
  {
    v113 = &s1;
    if ( (_QWORD)v236 )
      v113 = v235;
    v112(v113);
  }
  if ( srclang_parser_internal )
    --*(_DWORD *)(srclang_parser_internal + 12);
  setinf(60, (unsigned __int8)v202);
  setinf(61, (unsigned __int8)v204);
  setinf(59, (unsigned __int8)v203);
  setinf(63, (unsigned __int8)v205);
  setinf(64, (unsigned __int8)v206);
  setinf(65, (unsigned __int8)v207);
  v87 = (__int64 (__fastcall *)(int, __int64 *, double, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, __int64, __int64, __int64))(unsigned __int8)v208;
  setinf(66, (unsigned __int8)v208);
  v114 = 1;
LABEL_137:
  if ( v253 )
  {
    v254 = 0;
    qfree(v253, (const char *)v87);
  }
  if ( v251 )
  {
    v252 = 0;
    qfree(v251, (const char *)v87);
  }
  if ( v249 )
  {
    v250 = 0;
    qfree(v249, (const char *)v87);
  }
  v115 = v247;
  if ( v247 )
  {
    v116 = v248;
    if ( v248 )
    {
      v117 = 0;
      do
      {
        v118 = (__int64 *)(v115 + 24 * v117);
        v119 = *v118;
        if ( *v118 )
        {
          v118[1] = 0;
          qfree(v119, (const char *)v87);
          v115 = v247;
        }
        ++v117;
      }
      while ( v116 != v117 );
    }
    v248 = 0;
    qfree(v115, (const char *)v87);
  }
  v120 = v245;
  if ( v245 )
  {
    v121 = v246.m128i_i64[0];
    if ( v246.m128i_i64[0] )
    {
      v122 = 0;
      do
      {
        v123 = (__int64 *)&v120[24 * v122];
        v124 = *v123;
        if ( *v123 )
        {
          v123[1] = 0;
          qfree(v124, (const char *)v87);
          v120 = v245;
        }
        ++v122;
      }
      while ( v121 != v122 );
    }
    v246.m128i_i64[0] = 0;
    qfree(v120, (const char *)v87);
  }
  v125 = v243;
  if ( v243 )
  {
    v126 = v244.m128_u64[0];
    if ( v244.m128_u64[0] )
    {
      v127 = 0;
      do
      {
        v128 = &v125[24 * v127];
        v129 = *(_QWORD *)v128;
        if ( *(_QWORD *)v128 )
        {
          *((_QWORD *)v128 + 1) = 0;
          qfree(v129, (const char *)v87);
          v125 = v243;
        }
        ++v127;
      }
      while ( v126 != v127 );
    }
    v244.m128_u64[0] = 0;
    qfree(v125, (const char *)v87);
  }
  v130 = v237;
  if ( v237 )
  {
    v131 = v238;
    if ( (_QWORD)v238 )
    {
      v132 = 0;
      do
      {
        v133 = (__int64 *)(v130 + 24 * v132);
        v134 = *v133;
        if ( *v133 )
        {
          v133[1] = 0;
          qfree(v134, (const char *)v87);
          v130 = v237;
        }
        ++v132;
      }
      while ( v131 != v132 );
    }
    *(_QWORD *)&v238 = 0;
    qfree(v130, (const char *)v87);
  }
  jvalue_t_clear(&v210);
  if ( v235 )
  {
    *(_QWORD *)&v236 = 0;
    qfree(v235, (const char *)v87);
  }
  if ( v233 )
  {
    *(_QWORD *)&v234 = 0;
    qfree(v233, (const char *)v87);
  }
  v135 = v231;
  if ( v231 )
  {
    v136 = v232;
    if ( (_QWORD)v232 )
    {
      v137 = 0;
      do
      {
        v138 = (__int64 *)(v135 + 24 * v137);
        v139 = *v138;
        if ( *v138 )
        {
          v138[1] = 0;
          qfree(v139, (const char *)v87);
          v135 = v231;
        }
        ++v137;
      }
      while ( v136 != v137 );
    }
    *(_QWORD *)&v232 = 0;
    qfree(v135, (const char *)v87);
  }
  if ( v229 )
  {
    *(_QWORD *)&v230 = 0;
    qfree(v229, (const char *)v87);
  }
  if ( v227 )
  {
    *(_QWORD *)&v228 = 0;
    qfree(v227, (const char *)v87);
  }
  v140 = v225;
  if ( v225 )
  {
    v141 = v226;
    if ( (_QWORD)v226 )
    {
      v142 = 0;
      do
      {
        v143 = (__int64 *)(v140 + 24 * v142);
        v144 = *v143;
        if ( *v143 )
        {
          v143[1] = 0;
          qfree(v144, (const char *)v87);
          v140 = v225;
        }
        ++v142;
      }
      while ( v141 != v142 );
    }
    *(_QWORD *)&v226 = 0;
    qfree(v140, (const char *)v87);
  }
  v145 = v223;
  if ( v223 )
  {
    v146 = v224;
    if ( (_QWORD)v224 )
    {
      v147 = 0;
      do
      {
        v148 = (__int64 *)(v145 + 24 * v147);
        v149 = *v148;
        if ( *v148 )
        {
          v148[1] = 0;
          qfree(v149, (const char *)v87);
          v145 = v223;
        }
        ++v147;
      }
      while ( v146 != v147 );
    }
    *(_QWORD *)&v224 = 0;
    qfree(v145, (const char *)v87);
  }
  v150 = v221;
  if ( v221 )
  {
    v151 = v222;
    if ( (_QWORD)v222 )
    {
      v152 = 0;
      do
      {
        v153 = (__int64 *)(v150 + 24 * v152);
        v154 = *v153;
        if ( *v153 )
        {
          v153[1] = 0;
          qfree(v154, (const char *)v87);
          v150 = v221;
        }
        ++v152;
      }
      while ( v151 != v152 );
    }
    *(_QWORD *)&v222 = 0;
    qfree(v150, (const char *)v87);
  }
  if ( v219 )
  {
    *(_QWORD *)&v220 = 0;
    qfree(v219, (const char *)v87);
  }
  v155 = v217;
  if ( v217 )
  {
    v156 = v218;
    if ( (_QWORD)v218 )
    {
      v157 = 0;
      do
      {
        v158 = (__int64 *)(v155 + 24 * v157);
        v159 = *v158;
        if ( *v158 )
        {
          v158[1] = 0;
          qfree(v159, (const char *)v87);
          v155 = v217;
        }
        ++v157;
      }
      while ( v156 != v157 );
    }
    *(_QWORD *)&v218 = 0;
    qfree(v155, (const char *)v87);
  }
  if ( v215 )
  {
    *(_QWORD *)&v216 = 0;
    qfree(v215, (const char *)v87);
  }
  v160 = v213;
  if ( v213 )
  {
    v161 = v214;
    if ( (_QWORD)v214 )
    {
      v162 = 0;
      do
      {
        v163 = (__int64 *)(v160 + 24 * v162);
        v164 = *v163;
        if ( *v163 )
        {
          v163[1] = 0;
          qfree(v164, (const char *)v87);
          v160 = v213;
        }
        ++v162;
      }
      while ( v161 != v162 );
    }
    *(_QWORD *)&v214 = 0;
    qfree(v160, (const char *)v87);
  }
  return v114;
}
