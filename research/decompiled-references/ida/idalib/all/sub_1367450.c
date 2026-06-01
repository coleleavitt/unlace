__int64 __fastcall sub_1367450(unsigned __int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned int *v2; // rax
  __int64 *v3; // r9
  __int64 *v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // r12
  void *v8; // rax
  int v9; // ebx
  int v10; // edx
  __int64 v11; // r9
  int v12; // edx
  char v13; // bp
  unsigned __int64 v14; // r14
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char **v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rbx
  unsigned int v33; // eax
  char *v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rsi
  _QWORD *v39; // rbp
  void *v40; // rdi
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  char v44; // dl
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  char v47; // dl
  _QWORD *v48; // r12
  int v49; // eax
  int v50; // esi
  __int64 v51; // rcx
  bool v52; // zf
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned int v55; // esi
  int v56; // eax
  _QWORD *v57; // r14
  _QWORD *v58; // r10
  _QWORD *v59; // rax
  __int64 v60; // rdx
  unsigned int *v61; // rbx
  unsigned int *v62; // r12
  _QWORD *v63; // r15
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // r15
  __int64 v68; // rdi
  unsigned __int64 v69; // rbx
  __int64 v70; // rax
  __int64 *v71; // rbx
  const void **v72; // r12
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // rbp
  const void *v76; // rsi
  void *v77; // rdi
  __int64 v78; // rbx
  unsigned __int64 v79; // rbp
  __int64 v80; // rax
  __int64 v81; // rax
  _BYTE *v82; // rbx
  __int64 v83; // rdi
  _BYTE *v84; // rax
  __int64 v85; // rdi
  __m128i *v86; // rdx
  _BYTE *v87; // rax
  __int64 v88; // rdi
  __m128i *v89; // rdx
  __int64 v90; // rax
  _WORD *v91; // rcx
  __int64 v92; // rdi
  __m128i *v93; // rdx
  __int64 v94; // rax
  _BYTE *v95; // rdx
  void *v96; // rcx
  _BYTE *v97; // rdx
  __int64 v98; // rdi
  __m128i *v99; // rdx
  _BYTE *v100; // rax
  __int64 v101; // rdi
  __m128i *v102; // rdx
  __int64 v103; // rax
  _WORD *v104; // rcx
  __int64 v105; // rdi
  __m128i *v106; // rdx
  __int64 v107; // rax
  _BYTE *v108; // rdx
  void *v109; // rcx
  _BYTE *v110; // rdx
  __int64 v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rdi
  _BYTE *v114; // rdx
  _BYTE *v115; // rcx
  unsigned int *v116; // rbx
  __int64 v117; // rdx
  _QWORD *v118; // r11
  _QWORD *v119; // r11
  __m128i v120; // xmm0
  __m128i v121; // xmm0
  __m128i v122; // xmm0
  __m128i v123; // xmm0
  __m128i v124; // xmm0
  __m128i v125; // xmm0
  __int64 v126; // rax
  __int64 v127; // rax
  char *v128; // r12
  __int64 v129; // rax
  __int64 v130; // rax
  unsigned __int64 v131; // rbp
  const void *v132; // rsi
  void *v133; // rdi
  __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rbx
  unsigned __int64 v138; // rbp
  __int64 v139; // rdi
  unsigned int *v140; // rbx
  __int64 v141; // rdx
  _BYTE *v142; // rax
  __int64 v143; // rdi
  __m128i *v144; // rdx
  _BYTE *v145; // rax
  __int64 v146; // rdi
  __m128i *v147; // rdx
  __int64 v148; // rax
  _WORD *v149; // rcx
  __int64 v150; // rdi
  __m128i *v151; // rdx
  __int64 v152; // rax
  _BYTE *v153; // rdx
  void *v154; // rcx
  _BYTE *v155; // rdx
  __int64 v156; // rdi
  __m128i *v157; // rdx
  _BYTE *v158; // rax
  __int64 v159; // rdi
  __m128i *v160; // rdx
  __int64 v161; // rax
  _WORD *v162; // rcx
  __int64 v163; // rdi
  __m128i *v164; // rdx
  __int64 v165; // rax
  _BYTE *v166; // rdx
  void *v167; // rcx
  _BYTE *v168; // rdx
  __int64 v169; // rdi
  __int64 v170; // rdx
  __int64 v171; // rdi
  _BYTE *v172; // rdx
  _BYTE *v173; // rcx
  __int64 v174; // rax
  __int64 v175; // rax
  unsigned int *v176; // rbx
  void *v177; // rdi
  __int64 v178; // rax
  __m128i v179; // xmm0
  __m128i v180; // xmm0
  __m128i v181; // xmm0
  __m128i v182; // xmm0
  __m128i v183; // xmm0
  __m128i si128; // xmm0
  unsigned int *v185; // r13
  unsigned int *v186; // rax
  unsigned int *v187; // rsi
  __int64 v188; // rbp
  unsigned __int64 v189; // rcx
  unsigned int *v190; // rbp
  unsigned int *v191; // rsi
  unsigned __int32 v192; // edx
  unsigned int v193; // ecx
  unsigned int v194; // edi
  __m128i *v195; // rax
  unsigned int v196; // r8d
  unsigned int v197; // r9d
  __int64 v198; // rdx
  unsigned __int64 v199; // rcx
  char *v200; // rsi
  char *v201; // r8
  const __m128i *v202; // rbp
  unsigned __int32 v203; // edx
  __int32 v204; // eax
  __int32 v205; // ecx
  __int32 v206; // edi
  __int32 v207; // edx
  _QWORD *v208; // rdx
  __int64 i; // rax
  unsigned __int64 v210; // rax
  unsigned int *v211; // rax
  unsigned int *v212; // rcx
  _QWORD *v213; // r13
  __m128 v214; // xmm0
  __int64 *v215; // rdx
  __int64 v216; // rdi
  unsigned __int64 v217; // r9
  unsigned __int64 v218; // rbx
  char *v219; // rax
  _QWORD *v220; // rbp
  __int64 v221; // rdi
  __m128 *v222; // rax
  __m128 v223; // xmm0
  const __m128i *v224; // rdx
  _QWORD *v225; // rax
  __m128i v226; // xmm4
  __int64 v227; // rcx
  __int64 v228; // rsi
  __int64 v229; // rcx
  __int64 v230; // rsi
  __int64 v231; // rcx
  unsigned int *v232; // r13
  void *v233; // rdi
  __int64 *v234; // rdi
  __int64 v235; // rcx
  _DWORD *v236; // rax
  _DWORD *v237; // rdx
  __int64 *v238; // rdi
  __int64 v239; // rcx
  _DWORD *v240; // rax
  _DWORD *v241; // rdx
  unsigned __int64 v242; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int *v243; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v244; // [rsp+10h] [rbp-C8h]
  void *v245; // [rsp+18h] [rbp-C0h]
  __int64 *v246; // [rsp+20h] [rbp-B8h]
  __int64 *v247; // [rsp+28h] [rbp-B0h]
  char *v248; // [rsp+30h] [rbp-A8h]
  __int64 v249; // [rsp+38h] [rbp-A0h]
  _QWORD *v250; // [rsp+40h] [rbp-98h]
  unsigned int v251; // [rsp+4Ch] [rbp-8Ch]
  unsigned __int64 v252; // [rsp+50h] [rbp-88h] BYREF
  _QWORD *v253; // [rsp+58h] [rbp-80h] BYREF
  _QWORD *v254; // [rsp+60h] [rbp-78h] BYREF
  __int64 v255; // [rsp+68h] [rbp-70h]
  unsigned int v256; // [rsp+70h] [rbp-68h]
  void *v257[2]; // [rsp+80h] [rbp-58h] BYREF
  char *v258; // [rsp+90h] [rbp-48h]

  v1 = a1;
  v2 = *(unsigned int **)(a1 + 32);
  v3 = *(__int64 **)(a1 + 24);
  *(_BYTE *)(a1 + 48) = 0;
  v254 = nullptr;
  v255 = 0;
  v256 = 0;
  v243 = v2;
  if ( v3 == (__int64 *)v2 )
    goto LABEL_40;
  v4 = v3;
  v242 = a1;
  v248 = (char *)&v253;
  v246 = (__int64 *)&v252;
  v247 = (__int64 *)&v254;
  v245 = v257;
  do
  {
    while ( 1 )
    {
      v5 = *v4;
      v6 = *(_QWORD *)(v242 + 56);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v4 + 16LL))(*v4);
      v8 = (void *)sub_101FD20(v6, v7);
      v9 = (int)v8;
      v257[0] = v8;
      LODWORD(v257[1]) = v10;
      v257[0] = (void *)sub_101FD20(v6, SHIDWORD(v7));
      v13 = v12;
      LODWORD(v257[1]) = v12;
      v14 = (unsigned __int64)v257[0] >> 32;
      if ( !v9 || !HIDWORD(v257[0]) )
        goto LABEL_3;
      v15 = *(_QWORD *)(v242 + 56);
      LODWORD(v244) = v9 & 0x7FFFFFFF;
      if ( (v9 & 0x7FFFFFFFu) < *(_DWORD *)(v15 + 476) || (v9 & 0x7FFFFFFFu) >= *(_DWORD *)(v15 + 480) )
        v16 = sub_101D590(v15, v244);
      else
        v16 = *(_DWORD *)(v15 + 472);
      LOBYTE(v257[0]) = 0;
      if ( (unsigned int)(v16 + 1) > 1 )
      {
        if ( v16 >= 0 )
        {
          v17 = *(_QWORD *)(v15 + 184) + 24LL * (unsigned int)v16;
LABEL_12:
          if ( v17 )
          {
            if ( *(char *)(v17 + 3) >= 0 )
            {
              v18 = *(_QWORD *)((*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
              if ( v18 )
              {
                while ( 1 )
                {
                  v19 = *(_QWORD *)(v18 + 8);
                  if ( !v19 )
                    break;
                  v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v19 & 4) == 0 || !v18 )
                    goto LABEL_18;
                }
              }
            }
          }
          goto LABEL_58;
        }
        v45 = (unsigned int)(-2 - v16);
        v46 = *(_QWORD *)(*(_QWORD *)(v15 + 320) + 8LL * ((unsigned int)(-2 - v16) >> 6));
        if ( _bittest64(&v46, v45) )
        {
          v118 = (_QWORD *)(*(_QWORD *)(v15 + 272) + 8 * ((unsigned __int64)(int)v45 >> 5));
          if ( *v118 )
          {
            v17 = *v118 + 24 * (v45 & 0x1F);
            goto LABEL_12;
          }
          v238 = (__int64 *)(*(_QWORD *)(v15 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v239 = *v238;
          v238[10] += 768;
          v240 = (_DWORD *)((v239 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v238[1] >= (unsigned __int64)(v240 + 192) && v239 )
          {
            *v238 = (__int64)(v240 + 192);
          }
          else
          {
            v250 = v118;
            LODWORD(v249) = v45;
            v240 = (_DWORD *)sub_986170((__int64)v238, 768, 768, 3, v45, v11);
            v118 = v250;
            LOBYTE(v45) = v249;
          }
          *v118 = v240;
          v241 = v240 + 192;
          do
          {
            *v240 = 0;
            v240 += 6;
            *((_OWORD *)v240 - 1) = 0;
            *((_QWORD *)v240 - 1) = 0;
          }
          while ( v240 != v241 );
          v47 = (char)v257[0];
          v17 = *v118 + 24 * (v45 & 0x1F);
        }
        else
        {
          v17 = sub_101F930(v15, v45, v245);
          v47 = (char)v257[0];
        }
        if ( v47 )
          goto LABEL_58;
        goto LABEL_12;
      }
LABEL_58:
      v18 = 0;
LABEL_18:
      v252 = v18;
      v20 = v14 & 0x7FFFFFFF;
      v21 = *(_QWORD *)(v242 + 56);
      if ( (v14 & 0x7FFFFFFF) < *(_DWORD *)(v21 + 476) || v20 >= *(_DWORD *)(v21 + 480) )
        v22 = sub_101D590(*(_QWORD *)(v242 + 56), v20);
      else
        v22 = *(_DWORD *)(v21 + 472);
      LOBYTE(v257[0]) = 0;
      if ( (unsigned int)(v22 + 1) > 1 )
      {
        if ( v22 >= 0 )
        {
          v23 = *(_QWORD *)(v21 + 184) + 24LL * (unsigned int)v22;
LABEL_24:
          if ( v23 )
          {
            if ( *(char *)(v23 + 3) >= 0 )
            {
              v24 = *(_QWORD *)((*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
              if ( v24 )
              {
                while ( 1 )
                {
                  v25 = *(_QWORD *)(v24 + 8);
                  if ( !v25 )
                    break;
                  v24 = v25 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v25 & 4) == 0 || !v24 )
                  {
                    if ( v252 != v24 )
                      goto LABEL_3;
                    goto LABEL_31;
                  }
                }
              }
            }
          }
          goto LABEL_53;
        }
        v42 = (unsigned int)(-2 - v22);
        v43 = *(_QWORD *)(*(_QWORD *)(v21 + 320) + 8LL * ((unsigned int)(-2 - v22) >> 6));
        if ( _bittest64(&v43, v42) )
        {
          v119 = (_QWORD *)(*(_QWORD *)(v21 + 272) + 8 * ((unsigned __int64)(int)v42 >> 5));
          if ( *v119 )
          {
            v23 = *v119 + 24 * (v42 & 0x1F);
            goto LABEL_24;
          }
          v234 = (__int64 *)(*(_QWORD *)(v21 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v235 = *v234;
          v234[10] += 768;
          v236 = (_DWORD *)((v235 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v234[1] >= (unsigned __int64)(v236 + 192) && v235 )
          {
            *v234 = (__int64)(v236 + 192);
          }
          else
          {
            v250 = v119;
            LODWORD(v249) = v42;
            v236 = (_DWORD *)sub_986170((__int64)v234, 768, 768, 3, v42, v11);
            v119 = v250;
            LOBYTE(v42) = v249;
          }
          *v119 = v236;
          v237 = v236 + 192;
          do
          {
            *v236 = 0;
            v236 += 6;
            *((_OWORD *)v236 - 1) = 0;
            *((_QWORD *)v236 - 1) = 0;
          }
          while ( v236 != v237 );
          v44 = (char)v257[0];
          v23 = *v119 + 24 * (v42 & 0x1F);
        }
        else
        {
          v23 = sub_101F930(v21, v42, v245);
          v44 = (char)v257[0];
        }
        if ( v44 )
          goto LABEL_53;
        goto LABEL_24;
      }
LABEL_53:
      if ( !v252 )
        break;
LABEL_3:
      if ( v243 == (unsigned int *)++v4 )
        goto LABEL_39;
    }
LABEL_31:
    if ( (unsigned __int8)sub_1364310(v247, v246, v248) )
    {
      v29 = (char **)(v253 + 1);
      v30 = *(_QWORD *)(v242 + 56);
      if ( v253[4] )
        goto LABEL_33;
      goto LABEL_66;
    }
    v26 = v256;
    v48 = v253;
    v49 = v255 + 1;
    v50 = 2 * v256;
    v51 = 3 * v256;
    v257[0] = v253;
    if ( 4 * ((int)v255 + 1) >= (unsigned int)v51 )
      goto LABEL_313;
    v51 = v256 - HIDWORD(v255) - v49;
    if ( (unsigned int)v51 <= v256 >> 3 )
    {
      v50 = v256;
LABEL_313:
      sub_1364E60((__int64)v247, v50, v256, v51, v27, v28);
      sub_1364310(v247, v246, v245);
      v48 = v257[0];
      v49 = v255 + 1;
    }
    v52 = *v48 == -4096;
    LODWORD(v255) = v49;
    if ( !v52 )
      --HIDWORD(v255);
    v53 = v252;
    v29 = (char **)(v48 + 1);
    *v29 = nullptr;
    v29[1] = nullptr;
    *(v29 - 1) = (char *)v53;
    v54 = v242;
    v29[2] = nullptr;
    v29[3] = nullptr;
    v30 = *(_QWORD *)(v54 + 56);
LABEL_66:
    if ( (unsigned int)v244 >= *(_DWORD *)(v30 + 476) && (unsigned int)v244 < *(_DWORD *)(v30 + 480) )
    {
      v56 = *(_DWORD *)(v30 + 472);
    }
    else
    {
      v55 = v244;
      v244 = v30;
      v56 = sub_101D590(v30, v55);
      v30 = v244;
    }
    v29[3] = (char *)sub_1366CC0((_QWORD *)v30, v56, v26, v30, v27, v28);
    v30 = *(_QWORD *)(v242 + 56);
LABEL_33:
    v249 = v30;
    LODWORD(v244) = sub_10228C0(v30, v9, nullptr);
    LODWORD(v249) = sub_1021A20(v249, v9, nullptr);
    v31 = sub_B8C5D0(v5);
    v32 = *(_QWORD *)(v242 + 56);
    if ( v13 )
      LODWORD(v14) = sub_13DC060((unsigned int)v14, 0, *(_QWORD *)(v242 + 56), v31);
    sub_13DBB50((unsigned int)v14, v245, v32, v31, 1);
    if ( (_WORD)v258 == 63 )
      LODWORD(v14) = v14 + 1;
    LODWORD(v250) = sub_10228C0(v32, v14, nullptr);
    v251 = _mm_cvtsi128_si32(_mm_cvtsi32_si128((unsigned int)v250));
    v33 = sub_1021A20(v32, v14, nullptr);
    v34 = v29[1];
    LODWORD(v250) = v33;
    v35 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v244), _mm_cvtsi32_si128(v249)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v251), _mm_cvtsi32_si128(v33)));
    *(__m128i *)v257 = v35;
    if ( v34 == v29[2] )
    {
      sub_1364510(v29, v34, (const __m128i *)v245);
      goto LABEL_3;
    }
    *(__m128i *)v34 = v35;
    ++v4;
    v29[1] = v34 + 16;
  }
  while ( v243 != (unsigned int *)v4 );
LABEL_39:
  v1 = v242;
  if ( !(_DWORD)v255 )
    goto LABEL_40;
  v57 = v254;
  v58 = &v254[5 * v256];
  if ( v254 == v58 )
    goto LABEL_40;
  if ( *v254 != -8192 && *v254 != -4096 )
  {
LABEL_77:
    v245 = nullptr;
    v61 = nullptr;
    v62 = nullptr;
    v244 = v242;
    v63 = &v254[5 * v256];
    while ( 1 )
    {
LABEL_78:
      if ( !v57[4] )
        goto LABEL_79;
      v185 = (unsigned int *)v57[2];
      v186 = (unsigned int *)v57[1];
      if ( v185 != v186 )
      {
        v187 = (unsigned int *)v57[2];
        v188 = (char *)v185 - (char *)v186;
        v242 = v57[1];
        _BitScanReverse64(&v189, ((char *)v185 - (char *)v186) >> 4);
        sub_1365240(v242, v187, 2LL * (int)(63 - (v189 ^ 0x3F)));
        if ( v188 <= 256 )
        {
          sub_1364AC0((unsigned int *)v242, v185);
          goto LABEL_265;
        }
        v190 = (unsigned int *)(v242 + 256);
        v191 = (unsigned int *)(v242 + 256);
        sub_1364AC0((unsigned int *)v242, (unsigned int *)(v242 + 256));
        if ( v185 != v190 )
          break;
      }
LABEL_265:
      v258 = nullptr;
      *(_OWORD *)v257 = 0;
      sub_1364510((char **)v257, nullptr, (const __m128i *)v57[1]);
      v199 = v57[2];
      v200 = (char *)v257[1];
      v201 = v258;
      v202 = (const __m128i *)(v57[1] + 16LL);
      if ( (unsigned __int64)v202 < v199 )
      {
        while ( 1 )
        {
          v203 = *((_DWORD *)v200 - 2);
          v204 = v202->m128i_i32[0];
          if ( v203 >= v202->m128i_i32[0] && (v203 != v204 || *((_DWORD *)v200 - 1) >= v202->m128i_i32[1]) )
            break;
          if ( v200 == v201 )
          {
            sub_1364510((char **)v257, v200, v202);
            v200 = (char *)v257[1];
            v199 = v57[2];
            v201 = v258;
LABEL_273:
            if ( v199 <= (unsigned __int64)++v202 )
              goto LABEL_277;
          }
          else
          {
            v205 = v202->m128i_i32[2];
            v206 = v202->m128i_i32[1];
            v200 += 16;
            ++v202;
            v207 = v202[-1].m128i_i32[3];
            *((_DWORD *)v200 - 4) = v204;
            *((_DWORD *)v200 - 2) = v205;
            *((_DWORD *)v200 - 3) = v206;
            *((_DWORD *)v200 - 1) = v207;
            v257[1] = v200;
            v199 = v57[2];
            if ( v199 <= (unsigned __int64)v202 )
              goto LABEL_277;
          }
        }
        if ( v203 < v202->m128i_i32[2] || v203 == v202->m128i_i32[2] && *((_DWORD *)v200 - 1) < v202->m128i_i32[3] )
          *((_QWORD *)v200 - 1) = v202->m128i_i64[1];
        goto LABEL_273;
      }
LABEL_277:
      v208 = (_QWORD *)v57[4];
      for ( i = v208[1]; i; i = *(_QWORD *)(v210 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v210 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v210 )
          break;
        v208 = (_QWORD *)v210;
      }
      v211 = (unsigned int *)v257[0];
      v212 = (unsigned int *)*v208;
      v213 = v208 + 4;
      *(_OWORD *)v257 = 0;
      v242 = (unsigned __int64)v211;
      v258 = nullptr;
      if ( v62 != v61 )
      {
        v242 = (unsigned __int64)v200;
        v62 += 10;
        *((_QWORD *)v62 - 5) = v213;
        *((_QWORD *)v62 - 4) = v212;
        v214 = _mm_loadh_ps((const double *)&v242);
        *((_QWORD *)v62 - 1) = v201;
        *(__m128 *)(v62 - 6) = v214;
        goto LABEL_79;
      }
      v215 = (__int64 *)((char *)v62 - (_BYTE *)v245);
      v216 = ((char *)v62 - (_BYTE *)v245) >> 3;
      if ( 0xCCCCCCCCCCCCCCCDLL * v216 )
      {
        v217 = 0x999999999999999ALL * v216;
        if ( 0x999999999999999ALL * v216 < 0xCCCCCCCCCCCCCCCDLL * v216 )
        {
          v218 = -16;
        }
        else
        {
          v218 = -16;
          if ( v217 <= 0x666666666666666LL )
          {
            if ( !v217 )
            {
              v61 = nullptr;
              v221 = 40;
              v220 = nullptr;
              goto LABEL_290;
            }
            v218 = 16 * v216;
          }
        }
      }
      else
      {
        v218 = 40;
      }
      v248 = v201;
      v247 = (__int64 *)v200;
      v246 = (__int64 *)((char *)v62 - (_BYTE *)v245);
      v243 = v212;
      v219 = (char *)operator new(v218);
      v212 = v243;
      v215 = v246;
      v200 = (char *)v247;
      v201 = v248;
      v220 = v219;
      v61 = (unsigned int *)&v219[v218];
      v221 = (__int64)(v219 + 40);
LABEL_290:
      v242 = (unsigned __int64)v200;
      v222 = (__m128 *)((char *)v215 + (_QWORD)v220);
      v222->m128_u64[0] = (unsigned __int64)v213;
      v222->m128_u64[1] = (unsigned __int64)v212;
      v223 = _mm_loadh_ps((const double *)&v242);
      v222[2].m128_u64[0] = (unsigned __int64)v201;
      v222[1] = v223;
      if ( v245 == v62 )
      {
        v62 = (unsigned int *)v221;
      }
      else
      {
        v224 = (const __m128i *)v245;
        v225 = v220;
        do
        {
          v226 = _mm_loadu_si128(v224);
          v225[3] = 0;
          v224 = (const __m128i *)((char *)v224 + 40);
          v225 += 5;
          *(v225 - 1) = 0;
          *(v225 - 3) = 0;
          v227 = v224[-2].m128i_i64[1];
          *(__m128i *)(v225 - 5) = v226;
          *(v225 - 3) = v227;
          v228 = v224[-1].m128i_i64[0];
          v224[-2].m128i_i64[1] = 0;
          v229 = *(v225 - 2);
          *(v225 - 2) = v228;
          v230 = v224[-1].m128i_i64[1];
          v224[-1].m128i_i64[0] = v229;
          v231 = *(v225 - 1);
          *(v225 - 1) = v230;
          v224[-1].m128i_i64[1] = v231;
        }
        while ( v62 != (unsigned int *)v224 );
        v232 = (unsigned int *)v245;
        v242 = (unsigned __int64)&v220[5
                                     * ((0xCCCCCCCCCCCCCCDLL
                                       * ((unsigned __int64)((char *)(v62 - 10) - (_BYTE *)v245) >> 3))
                                      & 0x1FFFFFFFFFFFFFFFLL)
                                     + 10];
        do
        {
          while ( 1 )
          {
            v233 = *((void **)v232 + 2);
            if ( !v233 )
              break;
            operator delete(v233);
            v232 += 10;
            if ( v62 == v232 )
              goto LABEL_296;
          }
          v232 += 10;
        }
        while ( v232 != v62 );
LABEL_296:
        v62 = (unsigned int *)v242;
      }
      if ( v245 )
        operator delete(v245);
      if ( v257[0] )
        operator delete(v257[0]);
      v245 = v220;
LABEL_79:
      if ( v57 + 5 == v63 )
        goto LABEL_87;
      v64 = v57[5];
      if ( v64 == -4096 || v64 == -8192 )
      {
        v65 = v57 + 10;
        while ( 1 )
        {
          v57 = v65;
          if ( v65 == v63 )
            break;
          while ( 1 )
          {
            v66 = *v65;
            v65 += 5;
            if ( v66 == -8192 )
              break;
            if ( v66 != -4096 )
              goto LABEL_78;
            v57 = v65;
            if ( v65 == v63 )
              goto LABEL_87;
          }
        }
LABEL_87:
        v67 = v244;
        v243 = v62;
        v68 = *(_QWORD *)(v244 + 64);
        v69 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v62 - (_BYTE *)v245) >> 3);
        v244 = v69;
        sub_995540(v68, "{\n");
        v70 = sub_995540(*(_QWORD *)(v67 + 64), "  \"required_ranges\": [");
        sub_995540(v70, "\n");
        if ( !v69 )
          goto LABEL_215;
        v71 = (__int64 *)(v244 - 1);
        v242 = v244 - 1;
        if ( v244 == 1 )
          goto LABEL_167;
        v242 = 0;
        v72 = (const void **)v245;
        if ( v244 <= (unsigned __int64)v71 )
          v71 = (__int64 *)v244;
        v246 = v71;
        while ( 1 )
        {
          v73 = sub_995540(*(_QWORD *)(v67 + 64), "    {");
          sub_995540(v73, "\n");
          v74 = sub_995540(*(_QWORD *)(v67 + 64), "      \"file\": \"");
          v75 = (unsigned __int64)v72[1];
          v76 = *v72;
          v77 = *(void **)(v74 + 32);
          v78 = v74;
          if ( *(_QWORD *)(v74 + 24) - (_QWORD)v77 < v75 )
          {
            v78 = sub_227BF10(v74, v76, v72[1]);
          }
          else if ( v75 )
          {
            memcpy(v77, v76, (size_t)v72[1]);
            *(_QWORD *)(v78 + 32) += v75;
          }
          v79 = 0;
          v80 = sub_995540(v78, "\",");
          sub_995540(v80, "\n");
          v81 = sub_995540(*(_QWORD *)(v67 + 64), "      \"range\": [");
          sub_995540(v81, "\n");
          v82 = v72[2];
          if ( v82 != v72[3] )
            break;
LABEL_165:
          v72 += 5;
          v126 = sub_995540(*(_QWORD *)(v67 + 64), "      ]");
          v127 = sub_995540(v126, "\n");
          sub_995540(v127, "    }");
          sub_995540(*(_QWORD *)(v67 + 64), ",");
          sub_995540(*(_QWORD *)(v67 + 64), "\n");
          if ( ++v242 >= (unsigned __int64)v246 )
          {
            if ( v244 > v242 )
            {
LABEL_167:
              v128 = (char *)v245 + 40 * v242;
              while ( 1 )
              {
                v129 = sub_995540(*(_QWORD *)(v67 + 64), "    {");
                sub_995540(v129, "\n");
                v130 = sub_995540(*(_QWORD *)(v67 + 64), "      \"file\": \"");
                v131 = *((_QWORD *)v128 + 1);
                v132 = *(const void **)v128;
                v133 = *(void **)(v130 + 32);
                v134 = v130;
                if ( *(_QWORD *)(v130 + 24) - (_QWORD)v133 < v131 )
                {
                  v134 = sub_227BF10(v130, v132, *((_QWORD *)v128 + 1));
                }
                else if ( v131 )
                {
                  memcpy(v133, v132, *((_QWORD *)v128 + 1));
                  *(_QWORD *)(v134 + 32) += v131;
                }
                v135 = sub_995540(v134, "\",");
                sub_995540(v135, "\n");
                v136 = sub_995540(*(_QWORD *)(v67 + 64), "      \"range\": [");
                sub_995540(v136, "\n");
                v137 = *((_QWORD *)v128 + 2);
                if ( *((_QWORD *)v128 + 3) != v137 )
                  break;
LABEL_214:
                v128 += 40;
                v174 = sub_995540(*(_QWORD *)(v67 + 64), "      ]");
                v175 = sub_995540(v174, "\n");
                sub_995540(v175, "    }");
                sub_995540(*(_QWORD *)(v67 + 64), "\n");
                if ( v244 <= ++v242 )
                  goto LABEL_215;
              }
              v138 = 0;
              while ( 1 )
              {
                while ( 1 )
                {
                  v139 = *(_QWORD *)(v67 + 64);
                  v140 = (unsigned int *)(16 * v138 + v137);
                  v141 = *(_QWORD *)(v139 + 32);
                  if ( (unsigned __int64)(*(_QWORD *)(v139 + 24) - v141) > 8 )
                  {
                    *(_QWORD *)v141 = 0x2020202020202020LL;
                    *(_BYTE *)(v141 + 8) = 123;
                    v142 = (_BYTE *)(*(_QWORD *)(v139 + 32) + 9LL);
                    *(_QWORD *)(v139 + 32) = v142;
                  }
                  else
                  {
                    v139 = sub_227BF10(v139, "        {", 9);
                    v142 = *(_BYTE **)(v139 + 32);
                  }
                  if ( *(_BYTE **)(v139 + 24) == v142 )
                  {
                    sub_227BF10(v139, "\n", 1);
                  }
                  else
                  {
                    *v142 = 10;
                    ++*(_QWORD *)(v139 + 32);
                  }
                  v143 = *(_QWORD *)(v67 + 64);
                  v144 = *(__m128i **)(v143 + 32);
                  if ( *(_QWORD *)(v143 + 24) - (_QWORD)v144 > 0x12u )
                  {
                    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA0C0);
                    v144[1].m128i_i8[2] = 123;
                    v144[1].m128i_i16[0] = 8250;
                    *v144 = si128;
                    v145 = (_BYTE *)(*(_QWORD *)(v143 + 32) + 19LL);
                    *(_QWORD *)(v143 + 32) = v145;
                  }
                  else
                  {
                    v143 = sub_227BF10(v143, "          \"from\": {", 19);
                    v145 = *(_BYTE **)(v143 + 32);
                  }
                  if ( *(_BYTE **)(v143 + 24) == v145 )
                  {
                    sub_227BF10(v143, "\n", 1);
                  }
                  else
                  {
                    *v145 = 10;
                    ++*(_QWORD *)(v143 + 32);
                  }
                  v146 = *(_QWORD *)(v67 + 64);
                  v147 = *(__m128i **)(v146 + 32);
                  if ( *(_QWORD *)(v146 + 24) - (_QWORD)v147 > 0x13u )
                  {
                    v183 = _mm_load_si128((const __m128i *)&xmmword_23AA0D0);
                    v147[1].m128i_i32[0] = 540680805;
                    *v147 = v183;
                    *(_QWORD *)(v146 + 32) += 20LL;
                  }
                  else
                  {
                    v146 = sub_227BF10(v146, "            \"line\": ", 20);
                  }
                  v148 = sub_227B910(v146, *v140);
                  v149 = *(_WORD **)(v148 + 32);
                  if ( *(_QWORD *)(v148 + 24) - (_QWORD)v149 > 1u )
                  {
                    *v149 = 2604;
                    *(_QWORD *)(v148 + 32) += 2LL;
                  }
                  else
                  {
                    sub_227BF10(v148, ",\n", 2);
                  }
                  v150 = *(_QWORD *)(v67 + 64);
                  v151 = *(__m128i **)(v150 + 32);
                  if ( *(_QWORD *)(v150 + 24) - (_QWORD)v151 > 0x15u )
                  {
                    v182 = _mm_load_si128((const __m128i *)&xmmword_23AA0E0);
                    v151[1].m128i_i32[0] = 577662325;
                    v151[1].m128i_i16[2] = 8250;
                    *v151 = v182;
                    *(_QWORD *)(v150 + 32) += 22LL;
                  }
                  else
                  {
                    v150 = sub_227BF10(v150, "            \"column\": ", 22);
                  }
                  v152 = sub_227B910(v150, v140[1]);
                  v153 = *(_BYTE **)(v152 + 32);
                  if ( v153 == *(_BYTE **)(v152 + 24) )
                  {
                    v152 = sub_227BF10(v152, "\n", 1);
                    v154 = *(void **)(v152 + 32);
                  }
                  else
                  {
                    *v153 = 10;
                    v154 = (void *)(*(_QWORD *)(v152 + 32) + 1LL);
                    *(_QWORD *)(v152 + 32) = v154;
                  }
                  if ( *(_QWORD *)(v152 + 24) - (_QWORD)v154 > 0xBu )
                  {
                    qmemcpy(v154, "          },", 12);
                    v155 = (_BYTE *)(*(_QWORD *)(v152 + 32) + 12LL);
                    *(_QWORD *)(v152 + 32) = v155;
                  }
                  else
                  {
                    v152 = sub_227BF10(v152, "          },", 12);
                    v155 = *(_BYTE **)(v152 + 32);
                  }
                  if ( *(_BYTE **)(v152 + 24) == v155 )
                  {
                    sub_227BF10(v152, "\n", 1);
                  }
                  else
                  {
                    *v155 = 10;
                    ++*(_QWORD *)(v152 + 32);
                  }
                  v156 = *(_QWORD *)(v67 + 64);
                  v157 = *(__m128i **)(v156 + 32);
                  if ( *(_QWORD *)(v156 + 24) - (_QWORD)v157 > 0x10u )
                  {
                    v181 = _mm_load_si128((const __m128i *)&xmmword_23AA0F0);
                    v157[1].m128i_i8[0] = 123;
                    *v157 = v181;
                    v158 = (_BYTE *)(*(_QWORD *)(v156 + 32) + 17LL);
                    *(_QWORD *)(v156 + 32) = v158;
                  }
                  else
                  {
                    v156 = sub_227BF10(v156, "          \"to\": {", 17);
                    v158 = *(_BYTE **)(v156 + 32);
                  }
                  if ( *(_BYTE **)(v156 + 24) == v158 )
                  {
                    sub_227BF10(v156, "\n", 1);
                  }
                  else
                  {
                    *v158 = 10;
                    ++*(_QWORD *)(v156 + 32);
                  }
                  v159 = *(_QWORD *)(v67 + 64);
                  v160 = *(__m128i **)(v159 + 32);
                  if ( *(_QWORD *)(v159 + 24) - (_QWORD)v160 > 0x13u )
                  {
                    v180 = _mm_load_si128((const __m128i *)&xmmword_23AA0D0);
                    v160[1].m128i_i32[0] = 540680805;
                    *v160 = v180;
                    *(_QWORD *)(v159 + 32) += 20LL;
                  }
                  else
                  {
                    v159 = sub_227BF10(v159, "            \"line\": ", 20);
                  }
                  v161 = sub_227B910(v159, v140[2]);
                  v162 = *(_WORD **)(v161 + 32);
                  if ( *(_QWORD *)(v161 + 24) - (_QWORD)v162 > 1u )
                  {
                    *v162 = 2604;
                    *(_QWORD *)(v161 + 32) += 2LL;
                  }
                  else
                  {
                    sub_227BF10(v161, ",\n", 2);
                  }
                  v163 = *(_QWORD *)(v67 + 64);
                  v164 = *(__m128i **)(v163 + 32);
                  if ( *(_QWORD *)(v163 + 24) - (_QWORD)v164 > 0x15u )
                  {
                    v179 = _mm_load_si128((const __m128i *)&xmmword_23AA0E0);
                    v164[1].m128i_i32[0] = 577662325;
                    v164[1].m128i_i16[2] = 8250;
                    *v164 = v179;
                    *(_QWORD *)(v163 + 32) += 22LL;
                  }
                  else
                  {
                    v163 = sub_227BF10(v163, "            \"column\": ", 22);
                  }
                  v165 = sub_227B910(v163, v140[3]);
                  v166 = *(_BYTE **)(v165 + 32);
                  if ( v166 == *(_BYTE **)(v165 + 24) )
                  {
                    v165 = sub_227BF10(v165, "\n", 1);
                    v167 = *(void **)(v165 + 32);
                  }
                  else
                  {
                    *v166 = 10;
                    v167 = (void *)(*(_QWORD *)(v165 + 32) + 1LL);
                    *(_QWORD *)(v165 + 32) = v167;
                  }
                  if ( *(_QWORD *)(v165 + 24) - (_QWORD)v167 > 0xAu )
                  {
                    qmemcpy(v167, "          }", 11);
                    v168 = (_BYTE *)(*(_QWORD *)(v165 + 32) + 11LL);
                    *(_QWORD *)(v165 + 32) = v168;
                  }
                  else
                  {
                    v165 = sub_227BF10(v165, "          }", 11);
                    v168 = *(_BYTE **)(v165 + 32);
                  }
                  if ( *(_BYTE **)(v165 + 24) == v168 )
                  {
                    sub_227BF10(v165, "\n", 1);
                  }
                  else
                  {
                    *v168 = 10;
                    ++*(_QWORD *)(v165 + 32);
                  }
                  v169 = *(_QWORD *)(v67 + 64);
                  v170 = *(_QWORD *)(v169 + 32);
                  if ( (unsigned __int64)(*(_QWORD *)(v169 + 24) - v170) > 8 )
                  {
                    *(_QWORD *)v170 = 0x2020202020202020LL;
                    *(_BYTE *)(v170 + 8) = 125;
                    *(_QWORD *)(v169 + 32) += 9LL;
                  }
                  else
                  {
                    sub_227BF10(v169, "        }", 9);
                  }
                  v171 = *(_QWORD *)(v67 + 64);
                  v172 = *(_BYTE **)(v171 + 32);
                  v173 = *(_BYTE **)(v171 + 24);
                  if ( ((__int64)(*((_QWORD *)v128 + 3) - *((_QWORD *)v128 + 2)) >> 4) - 1 <= v138 )
                    break;
                  if ( v173 == v172 )
                  {
                    sub_227BF10(v171, ",", 1);
                  }
                  else
                  {
                    *v172 = 44;
                    ++*(_QWORD *)(v171 + 32);
                  }
                  v171 = *(_QWORD *)(v67 + 64);
                  v172 = *(_BYTE **)(v171 + 32);
                  if ( *(_BYTE **)(v171 + 24) == v172 )
                    goto LABEL_213;
LABEL_223:
                  *v172 = 10;
                  v137 = *((_QWORD *)v128 + 2);
                  ++v138;
                  v178 = *((_QWORD *)v128 + 3);
                  ++*(_QWORD *)(v171 + 32);
                  if ( v138 >= (v178 - v137) >> 4 )
                    goto LABEL_214;
                }
                if ( v173 != v172 )
                  goto LABEL_223;
LABEL_213:
                ++v138;
                sub_227BF10(v171, "\n", 1);
                v137 = *((_QWORD *)v128 + 2);
                if ( (*((_QWORD *)v128 + 3) - v137) >> 4 <= v138 )
                  goto LABEL_214;
              }
            }
LABEL_215:
            sub_995540(*(_QWORD *)(v67 + 64), "  ]\n");
            sub_995540(*(_QWORD *)(v67 + 64), "}\n");
            v176 = (unsigned int *)v245;
            if ( v243 != v245 )
            {
              do
              {
                while ( 1 )
                {
                  v177 = *((void **)v176 + 2);
                  if ( !v177 )
                    break;
                  operator delete(v177);
                  v176 += 10;
                  if ( v176 == v243 )
                    goto LABEL_218;
                }
                v176 += 10;
              }
              while ( v243 != v176 );
            }
LABEL_218:
            if ( v245 )
              operator delete(v245);
            goto LABEL_41;
          }
        }
        while ( 1 )
        {
          v83 = *(_QWORD *)(v67 + 64);
          v116 = (unsigned int *)&v82[16 * v79];
          v117 = *(_QWORD *)(v83 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v83 + 24) - v117) <= 8 )
          {
            v83 = sub_227BF10(v83, "        {", 9);
            v84 = *(_BYTE **)(v83 + 32);
            if ( v84 != *(_BYTE **)(v83 + 24) )
              goto LABEL_139;
          }
          else
          {
            *(_QWORD *)v117 = 0x2020202020202020LL;
            *(_BYTE *)(v117 + 8) = 123;
            v84 = (_BYTE *)(*(_QWORD *)(v83 + 32) + 9LL);
            *(_QWORD *)(v83 + 32) = v84;
            if ( v84 != *(_BYTE **)(v83 + 24) )
            {
LABEL_139:
              *v84 = 10;
              ++*(_QWORD *)(v83 + 32);
              goto LABEL_99;
            }
          }
          sub_227BF10(v83, "\n", 1);
LABEL_99:
          v85 = *(_QWORD *)(v67 + 64);
          v86 = *(__m128i **)(v85 + 32);
          if ( *(_QWORD *)(v85 + 24) - (_QWORD)v86 > 0x12u )
          {
            v125 = _mm_load_si128((const __m128i *)&xmmword_23AA0C0);
            v86[1].m128i_i8[2] = 123;
            v86[1].m128i_i16[0] = 8250;
            *v86 = v125;
            v87 = (_BYTE *)(*(_QWORD *)(v85 + 32) + 19LL);
            *(_QWORD *)(v85 + 32) = v87;
          }
          else
          {
            v85 = sub_227BF10(v85, "          \"from\": {", 19);
            v87 = *(_BYTE **)(v85 + 32);
          }
          if ( v87 == *(_BYTE **)(v85 + 24) )
          {
            sub_227BF10(v85, "\n", 1);
          }
          else
          {
            *v87 = 10;
            ++*(_QWORD *)(v85 + 32);
          }
          v88 = *(_QWORD *)(v67 + 64);
          v89 = *(__m128i **)(v88 + 32);
          if ( *(_QWORD *)(v88 + 24) - (_QWORD)v89 > 0x13u )
          {
            v124 = _mm_load_si128((const __m128i *)&xmmword_23AA0D0);
            v89[1].m128i_i32[0] = 540680805;
            *v89 = v124;
            *(_QWORD *)(v88 + 32) += 20LL;
          }
          else
          {
            v88 = sub_227BF10(v88, "            \"line\": ", 20);
          }
          v90 = sub_227B910(v88, *v116);
          v91 = *(_WORD **)(v90 + 32);
          if ( *(_QWORD *)(v90 + 24) - (_QWORD)v91 > 1u )
          {
            *v91 = 2604;
            *(_QWORD *)(v90 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(v90, ",\n", 2);
          }
          v92 = *(_QWORD *)(v67 + 64);
          v93 = *(__m128i **)(v92 + 32);
          if ( *(_QWORD *)(v92 + 24) - (_QWORD)v93 > 0x15u )
          {
            v123 = _mm_load_si128((const __m128i *)&xmmword_23AA0E0);
            v93[1].m128i_i32[0] = 577662325;
            v93[1].m128i_i16[2] = 8250;
            *v93 = v123;
            *(_QWORD *)(v92 + 32) += 22LL;
          }
          else
          {
            v92 = sub_227BF10(v92, "            \"column\": ", 22);
          }
          v94 = sub_227B910(v92, v116[1]);
          v95 = *(_BYTE **)(v94 + 32);
          if ( *(_BYTE **)(v94 + 24) == v95 )
          {
            v94 = sub_227BF10(v94, "\n", 1);
            v96 = *(void **)(v94 + 32);
          }
          else
          {
            *v95 = 10;
            v96 = (void *)(*(_QWORD *)(v94 + 32) + 1LL);
            *(_QWORD *)(v94 + 32) = v96;
          }
          if ( *(_QWORD *)(v94 + 24) - (_QWORD)v96 > 0xBu )
          {
            qmemcpy(v96, "          },", 12);
            v97 = (_BYTE *)(*(_QWORD *)(v94 + 32) + 12LL);
            *(_QWORD *)(v94 + 32) = v97;
          }
          else
          {
            v94 = sub_227BF10(v94, "          },", 12);
            v97 = *(_BYTE **)(v94 + 32);
          }
          if ( *(_BYTE **)(v94 + 24) == v97 )
          {
            sub_227BF10(v94, "\n", 1);
          }
          else
          {
            *v97 = 10;
            ++*(_QWORD *)(v94 + 32);
          }
          v98 = *(_QWORD *)(v67 + 64);
          v99 = *(__m128i **)(v98 + 32);
          if ( *(_QWORD *)(v98 + 24) - (_QWORD)v99 > 0x10u )
          {
            v122 = _mm_load_si128((const __m128i *)&xmmword_23AA0F0);
            v99[1].m128i_i8[0] = 123;
            *v99 = v122;
            v100 = (_BYTE *)(*(_QWORD *)(v98 + 32) + 17LL);
            *(_QWORD *)(v98 + 32) = v100;
          }
          else
          {
            v98 = sub_227BF10(v98, "          \"to\": {", 17);
            v100 = *(_BYTE **)(v98 + 32);
          }
          if ( *(_BYTE **)(v98 + 24) == v100 )
          {
            sub_227BF10(v98, "\n", 1);
          }
          else
          {
            *v100 = 10;
            ++*(_QWORD *)(v98 + 32);
          }
          v101 = *(_QWORD *)(v67 + 64);
          v102 = *(__m128i **)(v101 + 32);
          if ( *(_QWORD *)(v101 + 24) - (_QWORD)v102 > 0x13u )
          {
            v121 = _mm_load_si128((const __m128i *)&xmmword_23AA0D0);
            v102[1].m128i_i32[0] = 540680805;
            *v102 = v121;
            *(_QWORD *)(v101 + 32) += 20LL;
          }
          else
          {
            v101 = sub_227BF10(v101, "            \"line\": ", 20);
          }
          v103 = sub_227B910(v101, v116[2]);
          v104 = *(_WORD **)(v103 + 32);
          if ( *(_QWORD *)(v103 + 24) - (_QWORD)v104 > 1u )
          {
            *v104 = 2604;
            *(_QWORD *)(v103 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(v103, ",\n", 2);
          }
          v105 = *(_QWORD *)(v67 + 64);
          v106 = *(__m128i **)(v105 + 32);
          if ( *(_QWORD *)(v105 + 24) - (_QWORD)v106 > 0x15u )
          {
            v120 = _mm_load_si128((const __m128i *)&xmmword_23AA0E0);
            v106[1].m128i_i32[0] = 577662325;
            v106[1].m128i_i16[2] = 8250;
            *v106 = v120;
            *(_QWORD *)(v105 + 32) += 22LL;
          }
          else
          {
            v105 = sub_227BF10(v105, "            \"column\": ", 22);
          }
          v107 = sub_227B910(v105, v116[3]);
          v108 = *(_BYTE **)(v107 + 32);
          if ( *(_BYTE **)(v107 + 24) == v108 )
          {
            v107 = sub_227BF10(v107, "\n", 1);
            v109 = *(void **)(v107 + 32);
          }
          else
          {
            *v108 = 10;
            v109 = (void *)(*(_QWORD *)(v107 + 32) + 1LL);
            *(_QWORD *)(v107 + 32) = v109;
          }
          if ( *(_QWORD *)(v107 + 24) - (_QWORD)v109 > 0xAu )
          {
            qmemcpy(v109, "          }", 11);
            v110 = (_BYTE *)(*(_QWORD *)(v107 + 32) + 11LL);
            *(_QWORD *)(v107 + 32) = v110;
          }
          else
          {
            v107 = sub_227BF10(v107, "          }", 11);
            v110 = *(_BYTE **)(v107 + 32);
          }
          if ( v110 == *(_BYTE **)(v107 + 24) )
          {
            sub_227BF10(v107, "\n", 1);
          }
          else
          {
            *v110 = 10;
            ++*(_QWORD *)(v107 + 32);
          }
          v111 = *(_QWORD *)(v67 + 64);
          v112 = *(_QWORD *)(v111 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v111 + 24) - v112) > 8 )
          {
            *(_QWORD *)v112 = 0x2020202020202020LL;
            *(_BYTE *)(v112 + 8) = 125;
            *(_QWORD *)(v111 + 32) += 9LL;
          }
          else
          {
            sub_227BF10(v111, "        }", 9);
          }
          v113 = *(_QWORD *)(v67 + 64);
          v114 = *(_BYTE **)(v113 + 32);
          v115 = *(_BYTE **)(v113 + 24);
          if ( (((_BYTE *)v72[3] - (_BYTE *)v72[2]) >> 4) - 1 > v79 )
          {
            if ( v114 == v115 )
            {
              sub_227BF10(v113, ",", 1);
            }
            else
            {
              *v114 = 44;
              ++*(_QWORD *)(v113 + 32);
            }
            v113 = *(_QWORD *)(v67 + 64);
            v114 = *(_BYTE **)(v113 + 32);
            v115 = *(_BYTE **)(v113 + 24);
          }
          if ( v114 == v115 )
          {
            sub_227BF10(v113, "\n", 1);
          }
          else
          {
            *v114 = 10;
            ++*(_QWORD *)(v113 + 32);
          }
          v82 = v72[2];
          if ( ((_BYTE *)v72[3] - v82) >> 4 <= ++v79 )
            goto LABEL_165;
        }
      }
      v57 += 5;
    }
LABEL_259:
    v193 = *v191;
    v194 = v191[1];
    v195 = (__m128i *)v191;
    v196 = v191[2];
    v197 = v191[3];
    while ( 1 )
    {
      if ( v195[-1].m128i_i32[0] <= v193 )
      {
        if ( v195[-1].m128i_i32[0] == v193 )
        {
          v192 = v195[-1].m128i_u32[1];
          if ( v192 > v194 )
            goto LABEL_261;
        }
        else
        {
          if ( v195[-1].m128i_i32[0] < v193 )
            goto LABEL_258;
          v192 = v195[-1].m128i_u32[1];
        }
        if ( v194 > v192
          || v195[-1].m128i_i32[2] <= v196 && (v195[-1].m128i_i32[2] != v196 || v195[-1].m128i_i32[3] <= v197) )
        {
LABEL_258:
          v191 += 4;
          LODWORD(v242) = v194;
          *v195 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v193), _mm_cvtsi32_si128(v194)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v196), _mm_cvtsi32_si128(v197)));
          if ( v185 == v191 )
            goto LABEL_265;
          goto LABEL_259;
        }
      }
LABEL_261:
      v198 = v195[-1].m128i_i64[0];
      --v195;
      v195[1].m128i_i64[0] = v198;
      v195[1].m128i_i64[1] = v195->m128i_i64[1];
    }
  }
  v59 = v254 + 5;
  while ( 1 )
  {
    v57 = v59;
    if ( v58 == v59 )
      break;
    v60 = *v59;
    v59 += 5;
    if ( v60 != -8192 && v60 != -4096 )
      goto LABEL_77;
  }
LABEL_40:
  sub_995540(*(_QWORD *)(v1 + 64), "{\n");
  v36 = sub_995540(*(_QWORD *)(v1 + 64), "  \"required_ranges\": [");
  sub_995540(v36, "\n");
  sub_995540(*(_QWORD *)(v1 + 64), "  ]\n");
  sub_995540(*(_QWORD *)(v1 + 64), "}\n");
LABEL_41:
  v37 = v254;
  v38 = 40LL * v256;
  if ( v256 )
  {
    v39 = &v254[5 * v256];
    do
    {
      if ( *v37 != -8192 && *v37 != -4096 )
      {
        v40 = (void *)v37[1];
        if ( v40 )
          operator delete(v40);
      }
      v37 += 5;
    }
    while ( v39 != v37 );
    v37 = v254;
    v38 = 40LL * v256;
  }
  return operator delete(v37, v38, 8);
}
