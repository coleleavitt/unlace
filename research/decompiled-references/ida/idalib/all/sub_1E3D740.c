void __fastcall sub_1E3D740(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  bool v14; // sf
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _WORD *v28; // r15
  __int64 v29; // rax
  __m128i *v30; // r8
  unsigned __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __m128i v36; // xmm2
  unsigned __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __m128i v41; // xmm4
  __int64 v42; // rdx
  __int64 v43; // rax
  __m128 v44; // xmm1
  __m128i v45; // xmm3
  __int64 *v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 *v50; // rdi
  unsigned __int64 v51; // rcx
  char v52; // bp
  __int64 v53; // rbp
  int v54; // eax
  int v55; // eax
  __int64 *v56; // rbp
  size_t v57; // r12
  _DWORD *v58; // r12
  __m128 v59; // xmm0
  __int64 v60; // rax
  __m128i *v61; // rdi
  int v62; // rax^4
  __int64 v63; // r13
  _QWORD *v64; // r14
  __int64 *v65; // rdx
  __int64 v66; // r12
  _QWORD *v67; // r14
  void *v68; // rax
  unsigned int v69; // eax
  _QWORD *v70; // rdi
  __int64 v71; // r8
  __int64 v72; // r9
  _QWORD *v73; // rax
  _DWORD *v74; // r12
  __int64 v75; // r9
  __int64 v76; // r13
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned __int64 v80; // r12
  __int64 *v81; // rax
  __int64 v82; // r13
  __int64 v83; // rcx
  __int64 v84; // rsi
  char v85; // r8
  __int64 v86; // rax
  __int64 v87; // rdi
  unsigned __int64 v88; // rdx
  char v89; // al
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rdx
  int v95; // edx
  _QWORD *m128i_i64; // rsi
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rbp
  _QWORD *v100; // r12
  unsigned __int64 v101; // r13
  __int64 v102; // r14
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r14
  __int64 v108; // rdi
  __int64 v109; // rcx
  __int64 v110; // rax
  unsigned int *v111; // rax
  unsigned int *v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r9
  __m128i *v115; // rdx
  _BYTE *v116; // r12
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rbp
  __int64 v120; // r13
  __int64 v121; // rdx
  int v122; // eax
  int v123; // eax
  unsigned int v124; // eax
  __int64 *v125; // rdx
  __int64 v126; // rsi
  __int64 v127; // rcx
  __int64 v128; // r9
  double v129; // xmm4_8
  double v130; // xmm5_8
  __int64 v131; // r8
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // r8
  __int64 v135; // r9
  unsigned __int16 *v136; // rdx
  __int64 v137; // rsi
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 *v142; // rdi
  __int64 v143; // rax
  _QWORD *i; // r15
  __int64 v145; // rax
  void (*v146)(); // rdx
  __int64 v147; // rax
  unsigned __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rsi
  __int64 v151; // rax
  __int64 v152; // r10
  __int64 v153; // r8
  __int64 v154; // r8
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // r12
  __int64 v160; // rsi
  unsigned __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rax
  unsigned __int64 v164; // rax
  unsigned __int64 v165; // rsi
  __int64 v166; // rdi
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rcx
  unsigned int v170; // edx
  __int64 **v171; // rsi
  __int64 *v172; // r9
  unsigned __int64 v173; // r12
  _QWORD *v174; // rdx
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rax
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  unsigned __int64 v184; // rax
  char v185; // al
  unsigned __int64 v186; // rsi
  __m128i *v187; // rdi
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rdi
  _DWORD **v191; // rdi
  unsigned __int64 v192; // rax
  char v193; // dl
  __int64 v194; // rax
  bool v195; // cf
  __int64 v196; // rdx
  unsigned __int64 v197; // rcx
  __int64 v198; // rcx
  unsigned __int64 v199; // rsi
  unsigned __int64 v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // rbp
  unsigned __int64 v204; // rsi
  unsigned __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rbp
  __int64 v208; // rax
  __int64 v209; // r12
  __int64 *v210; // rax
  unsigned __int64 v211; // rax
  __int64 v212; // rcx
  __int64 v213; // rbp
  unsigned __int64 v214; // rsi
  int v215; // eax
  int v216; // r13d
  __int64 v217; // rcx
  int v218; // eax
  __int64 v219; // rax
  void *v220; // rdx
  unsigned __int64 *v221; // rax
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rax
  unsigned __int64 v225; // rax
  _DWORD **v226; // r12
  _DWORD *v227; // rdi
  int v228; // eax
  unsigned __int64 v229; // rax
  __int64 v230; // rax
  void (*v231)(); // rax
  _QWORD *v232; // rdi
  __int64 v233; // rax
  int v234; // esi
  int v235; // r10d
  __int64 *v236; // r9
  bool v237; // al
  __int64 v238; // rdx
  __int64 v239; // [rsp+10h] [rbp-2F8h]
  __int64 v240; // [rsp+10h] [rbp-2F8h]
  __int64 v241; // [rsp+18h] [rbp-2F0h]
  size_t n; // [rsp+30h] [rbp-2D8h] BYREF
  _QWORD *v243; // [rsp+38h] [rbp-2D0h]
  _DWORD *v244; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v245; // [rsp+48h] [rbp-2C0h]
  __int64 v246; // [rsp+50h] [rbp-2B8h] BYREF
  int v247; // [rsp+58h] [rbp-2B0h]
  unsigned int v248; // [rsp+5Ch] [rbp-2ACh] BYREF
  char v249; // [rsp+63h] [rbp-2A5h] BYREF
  unsigned int v250; // [rsp+64h] [rbp-2A4h] BYREF
  __int64 v251; // [rsp+68h] [rbp-2A0h] BYREF
  __m128i *v252; // [rsp+70h] [rbp-298h] BYREF
  unsigned __int64 v253; // [rsp+78h] [rbp-290h] BYREF
  __int64 v254; // [rsp+80h] [rbp-288h] BYREF
  char v255; // [rsp+88h] [rbp-280h]
  unsigned __int8 v256; // [rsp+89h] [rbp-27Fh]
  _BYTE v257[9]; // [rsp+90h] [rbp-278h] BYREF
  char v258; // [rsp+99h] [rbp-26Fh]
  _BYTE v259[32]; // [rsp+A0h] [rbp-268h] BYREF
  __int128 v260; // [rsp+C0h] [rbp-248h]
  __int64 v261; // [rsp+D0h] [rbp-238h]
  _BYTE v262[56]; // [rsp+E0h] [rbp-228h] BYREF
  __int64 v263; // [rsp+118h] [rbp-1F0h]
  _QWORD v264[2]; // [rsp+130h] [rbp-1D8h] BYREF
  __m128 v265; // [rsp+140h] [rbp-1C8h]
  int v266; // [rsp+150h] [rbp-1B8h]
  const char *v267; // [rsp+158h] [rbp-1B0h]
  const __m128i *v268; // [rsp+160h] [rbp-1A8h] BYREF
  char v269; // [rsp+168h] [rbp-1A0h]
  __m128i v270; // [rsp+170h] [rbp-198h] BYREF
  __m128 v271; // [rsp+180h] [rbp-188h]
  __m128i v272; // [rsp+190h] [rbp-178h]
  __m128i v273; // [rsp+1A0h] [rbp-168h]
  __m128i v274; // [rsp+1B0h] [rbp-158h]
  void *ptr; // [rsp+1C0h] [rbp-148h] BYREF
  _QWORD *v276; // [rsp+1C8h] [rbp-140h]
  __int64 v277; // [rsp+1D0h] [rbp-138h] BYREF
  unsigned int v278; // [rsp+1D8h] [rbp-130h]
  __m128 v279; // [rsp+1E0h] [rbp-128h]
  __m128 v280; // [rsp+240h] [rbp-C8h] BYREF
  __int64 v281; // [rsp+250h] [rbp-B8h]
  _DWORD v282[9]; // [rsp+258h] [rbp-B0h] BYREF
  char v283; // [rsp+27Ch] [rbp-8Ch]
  __int64 v284; // [rsp+290h] [rbp-78h]
  __int64 v285; // [rsp+298h] [rbp-70h]
  __int64 v286; // [rsp+2A8h] [rbp-60h]
  char v287; // [rsp+2B0h] [rbp-58h]
  char v288; // [rsp+2B1h] [rbp-57h]
  char v289; // [rsp+2B2h] [rbp-56h]
  __int64 v290; // [rsp+2B8h] [rbp-50h]

  v14 = *(char *)(a3 + 28) < 0;
  v248 = a2;
  v246 = a3;
  if ( v14 )
    return;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x27 )
    return;
  v19 = sub_B77DB0(a3);
  if ( v19 == 2 || (unsigned int)sub_B75A50(v246, 0) && v19 == 1 && a5 != 1 )
    return;
  v251 = 0;
  if ( (unsigned __int8)sub_B7D390(v246, (__int64)&v251, 1, v20) )
  {
    if ( (unsigned __int8)sub_B726C0(v251, (__int64)&v251, v21, v22) )
      return;
    v23 = v251;
    v246 = v251;
  }
  else
  {
    v23 = v246;
  }
  v252 = (__m128i *)sub_B7D580(v23, 1, v21, v22);
  if ( (unsigned __int8)sub_B7D390((__int64)v252, (__int64)&v280, 0, (__int64)&v280) )
  {
    v28 = (_WORD *)v280.m128_u64[0];
    v253 = v280.m128_u64[0];
    if ( v280.m128_u64[0] )
    {
      v29 = sub_B7F750(v280.m128_u64[0], &v253, v24, v25, v26, v27);
      v30 = (__m128i *)v253;
      v28 = (_WORD *)v29;
      v252 = (__m128i *)v253;
      v31 = v253;
      if ( (*(_BYTE *)(v253 + 84) & 0x40) != 0 )
      {
        v253 = 0;
        v31 = 0;
      }
    }
    else
    {
      v30 = v252;
      v31 = 0;
    }
  }
  else
  {
    v253 = 0;
    v30 = v252;
    v31 = 0;
    v28 = nullptr;
  }
  v241 = v31;
  v239 = (__int64)v30;
  v249 = 0;
  v32 = sub_B77970(v246);
  if ( (unsigned __int8)sub_1CCCE10(a1, v248, v246, v32 != nullptr, v239, v241, v19, a5, &v249) )
  {
    if ( a5 )
    {
      sub_B88650(v246, 1);
    }
    else if ( v19 == 4 || (*(_BYTE *)(v246 + 84) & 3) != 0 && !a4 )
    {
      *(_BYTE *)(v246 + 84) |= 8u;
      sub_1E0AE40((_QWORD *)(a1 + 12640), &v246, &v248);
      if ( (unsigned __int8)sub_224A960() )
      {
        v280.m128_u64[0] = (unsigned __int64)&v246;
        v280.m128_u64[1] = a1;
        sub_224C660("DeferInstantiation", 18, sub_1DFEA80, &v280);
      }
    }
    else if ( v19 == 1 )
    {
      if ( a6 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 264) + 192LL) )
        {
          v53 = *(_QWORD *)(a1 + 272);
          v54 = sub_B73090((__int64)v252);
          if ( !v54 || (v55 = sub_1021680(v53, v54), v55 == 3) || !v55 )
          {
            v56 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)&v280, (__int64 *)(a1 + 8), v248, 0x1B27u, 0);
            sub_1795A40((__int64)&v280, &v246);
            sub_15F7200(&v280);
            if ( v249 )
            {
              sub_168B9F0((__int64)&v280, v56, v252[1].m128i_u32[2], 0x1928u, 0);
              sub_15F7200(&v280);
            }
            else
            {
              sub_168B9F0((__int64)&v280, (__int64 *)(a1 + 8), v252[1].m128i_u32[2], 0x176Bu, 0);
              sub_15F7200(&v280);
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
              {
                sub_168B9F0((__int64)&v280, v56, v248, 0x17A2u, 0);
                sub_1795A40((__int64)&v280, &v246);
                sub_15F7200(&v280);
              }
            }
          }
        }
      }
    }
    return;
  }
  if ( (v252[5].m128i_i8[3] & 0x40) != 0 && !*(_QWORD *)(a1 + 440) )
  {
    v207 = v246;
    *(_BYTE *)(v246 + 84) |= 8u;
    v208 = *(unsigned int *)(a1 + 12728);
    v209 = v248;
    if ( v208 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12732) )
    {
      sub_2237220(a1 + 12720, a1 + 12736, v208 + 1, 16);
      v208 = *(unsigned int *)(a1 + 12728);
    }
    v210 = (__int64 *)(*(_QWORD *)(a1 + 12720) + 16 * v208);
    *v210 = v207;
    v210[1] = v209;
    ++*(_DWORD *)(a1 + 12728);
    return;
  }
  v280.m128_u64[0] = (unsigned __int64)&v246;
  v280.m128_u64[1] = a1;
  v240 = sub_224B4C0("InstantiateFunction", 19, sub_1E0ABB0, &v280);
  sub_1E0A6E0((__int64)&v254, (const __m128i *)a1, a4, a6);
  v268 = (const __m128i *)a1;
  v269 = a6;
  v270 = 0u;
  v271 = 0u;
  v272 = 0u;
  v273 = 0u;
  v274 = 0u;
  sub_1DFE940(&v270);
  v35 = v272.m128i_i64[1];
  v36 = _mm_loadu_si128((const __m128i *)(a1 + 15632));
  v37 = v271.m128_u64[0];
  *(_QWORD *)(a1 + 15632) = v272.m128i_i64[0];
  v38 = v274.m128i_i64[0];
  *(_QWORD *)(a1 + 15640) = v35;
  v39 = v274.m128i_i64[1];
  v40 = v271.m128_u64[1];
  v41 = _mm_loadu_si128((const __m128i *)(a1 + 15664));
  *(_QWORD *)(a1 + 15664) = v38;
  *(_QWORD *)(a1 + 15672) = v39;
  v42 = *(_QWORD *)(a1 + 15600);
  v43 = v270.m128i_i64[0];
  v44 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 15616));
  *(_QWORD *)(a1 + 15616) = v37;
  v45 = _mm_loadu_si128((const __m128i *)(a1 + 15648));
  v46 = (__int64 *)v273.m128i_i64[0];
  *(_QWORD *)(a1 + 15624) = v40;
  v270.m128i_i64[0] = v42;
  v47 = v273.m128i_i64[1];
  v48 = *(_QWORD *)(a1 + 15608);
  *(_QWORD *)(a1 + 15600) = v43;
  v49 = v270.m128i_i64[1];
  v271 = v44;
  v272 = v36;
  v273 = v45;
  v274 = v41;
  *(_QWORD *)(a1 + 15648) = v46;
  *(_QWORD *)(a1 + 15656) = v47;
  v270.m128i_i64[1] = v48;
  *(_QWORD *)(a1 + 15608) = v49;
  v50 = (__int64 *)v252;
  if ( !v28 && (v252[5].m128i_i8[3] & 0x40) != 0 && *(_QWORD *)(a1 + 440) )
  {
    if ( v252[1].m128i_i8[13] < 0 )
    {
      v231 = *(void (**)())(**(_QWORD **)(a1 + 552) + 376LL);
      if ( v231 != nullsub_214 )
      {
        ((void (__fastcall *)(_QWORD, unsigned __int64))v231)(*(_QWORD *)(a1 + 552), a1 + 11208);
        v50 = (__int64 *)v252;
      }
    }
    v168 = *(unsigned int *)(a1 + 11224);
    v169 = *(_QWORD *)(a1 + 11208);
    if ( (_DWORD)v168 )
    {
      v170 = (v168 - 1) & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
      v171 = (__int64 **)(v169 + 16LL * v170);
      v172 = *v171;
      if ( *v171 == v50 )
      {
LABEL_156:
        sub_13BE860(&v280, v171, (_QWORD *)(v169 + 16 * v168), a1 + 11208, 1);
        v173 = v280.m128_u64[0];
LABEL_157:
        v174 = (_QWORD *)(*(_QWORD *)(a1 + 11208) + 16LL * *(unsigned int *)(a1 + 11224));
        sub_13BE860(&v280, v174, v174, a1 + 11208, 1);
        if ( v280.m128_u64[0] == v173 )
          v175 = 16LL * *(unsigned int *)(a1 + 11240);
        else
          v175 = 16LL * *(unsigned int *)(v173 + 8);
        (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 440))(
          *(_QWORD *)(a1 + 456),
          *(_QWORD *)(*(_QWORD *)(a1 + 11232) + v175 + 8));
        v180 = sub_B7F750(v252, &v252, v176, v177, v178, v179);
        v46 = (__int64 *)v252;
        v28 = (_WORD *)v180;
        sub_1E017F0(a1, v252, v246, v181, v182, v183);
        v50 = (__int64 *)v252;
        goto LABEL_18;
      }
      v234 = 1;
      if ( v172 != (__int64 *)-4096LL )
      {
        do
        {
          v235 = v234 + 1;
          v170 = (v168 - 1) & (v234 + v170);
          v171 = (__int64 **)(v169 + 16LL * v170);
          v236 = *v171;
          if ( *v171 == v50 )
            goto LABEL_156;
          v234 = v235;
        }
        while ( v236 != (__int64 *)-4096LL );
      }
    }
    sub_13BE860(
      &v280,
      (_QWORD *)(v169 + 16LL * (unsigned int)v168),
      (_QWORD *)(v169 + 16LL * (unsigned int)v168),
      a1 + 11208,
      1);
    v173 = v280.m128_u64[0];
    goto LABEL_157;
  }
LABEL_18:
  if ( v19 == 3 && (*((_BYTE *)v50 + 82) & 1) == 0 )
  {
    v157 = sub_C1D490((__int64)v50, (__int64)v46, v48, v47);
    v158 = sub_F57E80(*(_QWORD *)(v157 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v158 || *(_BYTE *)(v158 + 16) != 16 )
      goto LABEL_23;
    v50 = (__int64 *)v252;
  }
  v51 = v246;
  if ( (*((_BYTE *)v50 + 82) & 1) == 0 )
    goto LABEL_20;
  v159 = *(_QWORD *)(v246 + 112);
  v160 = *(_QWORD *)(v159 + 104);
  v161 = v160 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v160 & 1) == 0 && (v160 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    v162 = v246;
    v51 = v160 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v160 & 2) == 0 )
      goto LABEL_138;
    v161 = sub_6E2500((_QWORD *)(v160 & 0xFFFFFFFFFFFFFFFCLL), v159, v246, v160 & 0xFFFFFFFFFFFFFFFCLL, v33, v34)
         & 0xFFFFFFFFFFFFFFFELL;
    v160 = v161 | 1;
    *(_QWORD *)(v159 + 104) = v161 | 1;
  }
  v165 = v160 & 0xFFFFFFFFFFFFFFF8LL;
  v51 = v165;
  if ( v161 )
  {
    if ( (v161 & 4) != 0 )
    {
      v51 = 0;
      if ( v165 )
      {
        v166 = *(_QWORD *)v165;
        v167 = *(_DWORD *)(*(_QWORD *)v165 + 12LL);
        if ( *(_DWORD *)(v165 + 8) != v167 )
        {
          *(_DWORD *)(v165 + 8) = v167;
          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v166 + 152LL))(v166, v159, v48, 0);
        }
        v51 = *(_QWORD *)(v165 + 16);
      }
    }
  }
LABEL_150:
  v162 = v246;
LABEL_138:
  while ( 1 )
  {
    *(_BYTE *)(v51 + 82) |= 1u;
    if ( v162 == v51 )
      break;
    while ( 1 )
    {
      v163 = *(_QWORD *)(v51 + 104);
      v51 = 0;
      if ( (v163 & 3) != 0 )
        break;
      v164 = v163 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v164 )
        goto LABEL_150;
      v51 = v164;
      *(_BYTE *)(v164 + 82) |= 1u;
      if ( v162 == v164 )
        goto LABEL_20;
    }
  }
LABEL_20:
  sub_1DC3A50((__int64)v257, a1, v248, v51, 0);
  if ( v257[8] )
    goto LABEL_22;
  v52 = v258;
  if ( v258 )
    goto LABEL_22;
  v57 = v246;
  v243 = v264;
  sub_2233820(v264);
  n = v57;
  v266 = 0;
  v58 = (_DWORD *)v246;
  v264[0] = &off_2B4A628;
  v59 = _mm_loadh_ps((const double *)&n);
  v265 = v59;
  v267 = "instantiating function definition";
  v60 = *(_QWORD *)(v246 + 8);
  if ( (v60 & 6) != 0 )
    *(_QWORD *)(v246 + 8) = v60 & 0xFFFFFFFFFFFFFFF8LL | 1;
  v61 = v252;
  v58[6] = v252[1].m128i_i32[2];
  v58[16] = v61[4].m128i_i32[0];
  v62 = (unsigned __int64)(*(__int64 (__fastcall **)(__m128i *))(v61->m128i_i64[0] + 16))(v61) >> 32;
  v63 = v246;
  v58[35] = v62;
  v64 = (_QWORD *)v252[10].m128i_i64[0];
  if ( ((unsigned int)v252[2].m128i_i64[1] & 7) - 3 <= 2 )
  {
    v65 = *(__int64 **)(v63 + 160);
    if ( (*(_DWORD *)(v63 + 40) & 7u) - 3 <= 2 )
    {
      if ( v65 )
      {
        v66 = *v65;
        v67 = v64 + 1;
        v280.m128_u64[1] = 32;
        v281 = 32;
        v283 = 0;
        v280.m128_u64[0] = (unsigned __int64)v282;
        v282[8] = 0;
        v68 = (void *)*(v67 - 1);
        v276 = v67;
        v244 = v282;
        ptr = v68;
        v69 = sub_F6CCB0((__int64 *)&ptr, v59);
        sub_1EA6B50(&v280, *(_QWORD *)(a1 + 248), v66, v69);
        v70 = *(_QWORD **)(a1 + 248);
        n = v280.m128_u64[1] - v281;
        v73 = sub_A81BC0(v70, v66, v280.m128_i32[2] - (int)v281, v280.m128_u64[1] - v281, v71, v72);
        v74 = (_DWORD *)v280.m128_u64[0];
        v64 = v73;
        memcpy(v73 + 1, (const void *)(v280.m128_u64[0] + v281), n);
        if ( v74 )
        {
          if ( v74 != v244 )
            operator delete[](v74);
        }
      }
    }
  }
  *(_QWORD *)(v63 + 160) = v64;
  sub_18C7FE0(a1, 6, 0);
  v76 = v246;
  v77 = 0;
  if ( (*(_BYTE *)(v246 + 28) & 0x7Fu) - 35 > 3 )
  {
    v80 = 0;
  }
  else
  {
    v80 = sub_B72690(v246 + 72);
    if ( v80 )
      v80 -= 64LL;
    v81 = (__int64 *)(*(_QWORD *)(v76 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v82 = *v81;
    if ( *(_BYTE *)(*v81 + 16) != 26 )
      v82 = sub_F63050(*v81, 6, v78, v79);
    v83 = *(_QWORD *)(v82 + 16);
    if ( (v83 & 0x1000000) != 0 )
    {
      v84 = *(unsigned __int16 *)(v82 + 22);
      v85 = *(_BYTE *)(v82 + 19);
      v86 = (v83 & 0x40000000) != 0;
      v87 = 8 * v84 + 48;
      if ( (v85 & 0x40) != 0 )
      {
        v75 = (*(_BYTE *)(((v82 + v87 + ((v85 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v86 += v75;
      }
      v88 = ((v82 + v87 + ((SBYTE3(v83) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v86;
      v89 = ((unsigned __int8)v85 >> 1) & 0xF;
      if ( v89 != 2 )
        __asm { jmp     rdi }
      v90 = v88 + 8LL * (*(_WORD *)((v82 + ((v85 >> 5) & 4) + v87 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
      if ( (v83 & 0x20000000) != 0 )
        v90 += v84;
      v77 = *(_QWORD *)((v90 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else if ( *(_BYTE *)(v82 + 16) == 26
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v82 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
           && sub_F63050(v82, 6, v78, v83) )
    {
      v77 = *(_BYTE *)(v82 + 18) >> 5;
    }
    else
    {
      v77 = 0;
    }
  }
  n = (size_t)v259;
  sub_19A2CD0((__int64)v259, a1, v80, v77, 1, v75);
  v91 = *(_QWORD *)(v246 + 16);
  if ( (v91 & 4) != 0 )
    v92 = *(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v92 = v91 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v92 + 8) & 0x7Fu) - 59 <= 2 )
  {
    while ( 1 )
    {
      v93 = v92 - 64;
      if ( !v93 )
        break;
      v94 = *(_QWORD *)(v93 + 16);
      v92 = v94 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v94 & 4) != 0 )
        v92 = *(_QWORD *)v92;
      v95 = *(_BYTE *)(v92 + 8) & 0x7F;
      if ( (unsigned int)(v95 - 59) > 2 )
      {
        if ( (unsigned int)(v95 - 34) <= 5 && v92 != 72 )
          v52 = sub_B77A80(v246) ^ 1;
        break;
      }
    }
  }
  v280.m128_u64[0] = a1;
  sub_1DFE9C0(&v280.m128_u64[1]);
  m128i_i64 = v252->m128i_i64;
  v287 = 0;
  v288 = v52;
  v284 = v97 + 96;
  v285 = 0x100000000LL;
  v98 = *(_QWORD *)(a1 + 11280);
  v289 = 0;
  v286 = v98;
  v290 = 0;
  *(_QWORD *)(a1 + 11280) = v97;
  v99 = (m128i_i64[10] >> 24) & 2LL;
  if ( ((m128i_i64[10] >> 24) & 2) != 0 )
  {
    v185 = sub_183C740(a1, m128i_i64);
    v186 = v246;
    if ( (unsigned __int8)(v185 - 1) <= 3u )
    {
      v192 = *(_QWORD *)(v246 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v246 + 16) & 4) != 0 )
        v192 = *(_QWORD *)v192;
      v193 = *(_BYTE *)(v192 + 8);
      v187 = v252;
      v194 = v192 - 64;
      v195 = (v193 & 0x7Fu) - 59 < 3;
      v196 = 0;
      if ( v195 )
        v196 = v194;
      v197 = v252[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v252[1].m128i_i64[0] & 4) != 0 )
        v197 = *(_QWORD *)v197;
      if ( (*(_BYTE *)(v197 + 8) & 0x7Fu) - 59 <= 2 )
      {
        if ( v196 )
        {
          if ( v197 != 64 )
          {
            v198 = *(_QWORD *)(v197 + 64);
            if ( v198 )
            {
              if ( (*(_BYTE *)(v198 + 10) & 0x20) != 0 )
              {
                v244 = (_DWORD *)v196;
                ptr = (void *)a1;
                v276 = nullptr;
                v278 = 0;
                v59 = _mm_loadh_ps((const double *)&v244);
                v277 = 0;
                v279 = v59;
                v199 = *(_QWORD *)(v246 + 56) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v246 + 56) & 4) != 0 )
                  v199 = *(_QWORD *)(v199 + 32);
                v200 = (unsigned __int64)sub_1E1F330((__int64 *)&ptr, v199, v59, v44);
                v201 = v246;
                *(_QWORD *)(v246 + 48) = *(_QWORD *)v200;
                v202 = *(_QWORD *)(v201 + 56);
                if ( (v202 & 4) != 0 )
                  *(_QWORD *)((v202 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v200;
                else
                  *(_QWORD *)(v201 + 56) = v200 & 0xFFFFFFFFFFFFFFFBLL;
                v203 = **(_QWORD **)(v201 + 120);
                v204 = *(_QWORD *)(v203 + 56) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v203 + 56) & 4) != 0 )
                  v204 = *(_QWORD *)(v204 + 32);
                v205 = (unsigned __int64)sub_1E1F330((__int64 *)&ptr, v204, v59, v44);
                *(_QWORD *)(v203 + 48) = *(_QWORD *)v205;
                v206 = *(_QWORD *)(v203 + 56);
                if ( (v206 & 4) != 0 )
                  *(_QWORD *)((v206 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v205;
                else
                  *(_QWORD *)(v203 + 56) = v205 & 0xFFFFFFFFFFFFFFFBLL;
                operator delete(v276, 16LL * v278, 8);
                v187 = v252;
                v186 = v246;
              }
            }
          }
        }
      }
    }
    else
    {
      v187 = v252;
    }
    sub_1890630((__int64 *)a1, v186, v187[1].m128i_u32[2], v59, v44);
LABEL_114:
    v148 = sub_B72690(v246 + 72);
    if ( (*(_BYTE *)(v148 + 8) & 0x7Fu) - 59 > 2 )
      goto LABEL_171;
    if ( v148 == 64 )
      goto LABEL_171;
    v149 = *(_QWORD *)(v148 + 64);
    if ( !v149 || (*(_BYTE *)(v149 + 10) & 0x20) == 0 )
      goto LABEL_171;
    v150 = *(_QWORD *)(a1 + 4616);
    v151 = 640LL * *(unsigned int *)(a1 + 4624);
    v152 = v150 + v151;
    if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * (v151 >> 7)) >> 2 )
    {
      while ( !(unsigned __int8)sub_1DFE280(v150) )
      {
        v150 += 640;
        if ( (unsigned __int8)sub_1DFE280(v150) )
          break;
        v150 = v153 + 1280;
        if ( (unsigned __int8)sub_1DFE280(v153 + 1280) )
          break;
        v150 = v154 + 1920;
        if ( (unsigned __int8)sub_1DFE280(v154 + 1920) )
          break;
        v150 = v155 + 2560;
        if ( v156 == v155 + 2560 )
          goto LABEL_164;
      }
LABEL_125:
      if ( v152 != v150 )
      {
LABEL_126:
        sub_1E3CE70((__int64)v268, 1, v269, *(double *)v59.m128_u64, v44);
        if ( !v287 )
          sub_1DFE520((__int64 *)&v280);
        if ( v255 )
        {
          sub_188ECA0(v254);
          sub_1E3CE70(v254, 0, v256, *(double *)v59.m128_u64, v44);
        }
        goto LABEL_130;
      }
LABEL_171:
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 256) + 24LL))(*(_QWORD *)(a1 + 256), v246);
      goto LABEL_126;
    }
LABEL_164:
    v184 = 0xCCCCCCCCCCCCCCCDLL * ((v152 - v150) >> 7);
    if ( v184 != 2 )
    {
      if ( v184 != 3 )
      {
        if ( v184 != 1 )
          goto LABEL_171;
        goto LABEL_170;
      }
      if ( (unsigned __int8)sub_1DFE280(v150) )
        goto LABEL_125;
      v150 += 640;
    }
    if ( (unsigned __int8)sub_1DFE280(v150) )
      goto LABEL_125;
    v150 += 640;
LABEL_170:
    if ( !(unsigned __int8)sub_1DFE280(v150) )
      goto LABEL_171;
    goto LABEL_125;
  }
  v100 = (_QWORD *)(*(_QWORD *)(v246 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v246 + 16) & 4) != 0 )
    v100 = (_QWORD *)v100[1];
  v261 = 0;
  v59 = 0;
  v260 = 0;
  v101 = sub_B77AF0(v246);
  if ( !v101 )
    goto LABEL_93;
  v102 = v246;
  if ( !v246 )
    BUG();
  if ( (*(_BYTE *)(v246 + 80) & 0x7Fu) - 35 <= 3 )
  {
    v244 = (_DWORD *)(v246 + 72);
    v103 = *(_QWORD *)(sub_B8C1B0(v246 + 72) + 16);
    if ( (v103 & 4) != 0 )
      v104 = *(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v104 = v103 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v104
      && v104 != 64
      && sub_B96EF0(v104 - 64)
      && ((v229 = sub_B72690((__int64)v244)) != 0
       && v229 != 64
       && (v230 = *(_QWORD *)(v229 + 64)) != 0
       && (*(_BYTE *)(v230 + 10) & 0x20) != 0
       && (unsigned int)sub_B77890(v102) == 42
       || (unsigned __int8)sub_B98950(v102)) )
    {
      if ( (unsigned __int8)sub_B77A80(v102) )
        goto LABEL_93;
    }
    v102 = v246;
  }
  if ( (unsigned int)sub_B77D20(v102) == 2 )
    goto LABEL_93;
  v107 = v101;
  do
  {
    v108 = *(_QWORD *)(v107 + 48);
    if ( *(char *)(v108 + 83) < 0 )
    {
      v109 = v107;
      goto LABEL_88;
    }
    if ( (unsigned __int8)sub_B726C0(v108, (__int64)m128i_i64, v105, v106) )
    {
      v109 = v107;
      v108 = *(_QWORD *)(v107 + 48);
      goto LABEL_88;
    }
    v190 = *(_QWORD *)(v107 + 64);
    if ( (v190 & 1) != 0 )
    {
      if ( (_BYTE)v99 )
        break;
      v225 = v190 & 0xFFFFFFFFFFFFFFFELL;
LABEL_221:
      v191 = (_DWORD **)(v190 & 0xFFFFFFFFFFFFFFF8LL);
      LOBYTE(v99) = 1;
      v226 = v191;
      if ( v225 && (v225 & 4) != 0 && v191 )
      {
        v227 = *v191;
        v228 = v227[3];
        if ( *((_DWORD *)v226 + 2) != v228 )
        {
          *((_DWORD *)v226 + 2) = v228;
          m128i_i64 = (_QWORD *)v107;
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v227 + 152LL))(v227, v107);
        }
        v191 = (_DWORD **)v226[2];
        LOBYTE(v99) = 1;
      }
      goto LABEL_183;
    }
    if ( (v190 & 2) != 0 )
    {
      if ( (_BYTE)v99 )
        break;
      v232 = (_QWORD *)(v190 & 0xFFFFFFFFFFFFFFFCLL);
      LOBYTE(v99) = 1;
      if ( !v232 )
      {
LABEL_270:
        v191 = nullptr;
        goto LABEL_183;
      }
      m128i_i64 = (_QWORD *)v107;
      v225 = sub_6E2500(v232, v107, v105, v106, v188, v189) & 0xFFFFFFFFFFFFFFFELL;
      v190 = v225 | 1;
      *(_QWORD *)(v107 + 64) = v225 | 1;
      goto LABEL_221;
    }
    v191 = (_DWORD **)(v190 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v191 )
      goto LABEL_270;
LABEL_183:
    if ( (_DWORD **)v101 == v191 )
      break;
    v107 = (__int64)v191;
  }
  while ( v191 );
  v108 = 0x38004000000000LL;
  v109 = 0;
LABEL_88:
  v244 = (_DWORD *)v109;
  if ( (unsigned __int8)sub_B7D390(v108, (__int64)&ptr, 0, v109) && ptr )
  {
    v110 = *((_QWORD *)ptr + 2);
    v100 = (_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v110 & 4) != 0 )
      goto LABEL_91;
  }
  else
  {
    v100 = (_QWORD *)(*((_QWORD *)v244 + 2) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*((_QWORD *)v244 + 2) & 4) != 0 )
LABEL_91:
      v100 = (_QWORD *)v100[1];
  }
  v111 = (unsigned int *)sub_B77B50(v246);
  LOBYTE(v261) = 1;
  v112 = v111 + 2;
  v113 = *v111;
  *(_QWORD *)&v260 = v112;
  *((_QWORD *)&v260 + 1) = v113;
LABEL_93:
  sub_1DBA4B0((__int64)&ptr, a1, v246, v100, 0, 0, v260, *((__int64 *)&v260 + 1), v261, (__int64)v252, 0, 0, 0);
  v115 = v252;
  v116 = (_BYTE *)v246;
  v117 = v252[3].m128i_i64[1];
  if ( (v117 & 4) != 0 && *(_QWORD *)(v117 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    if ( (*(_WORD *)(v246 + 30) & 0x180) != 0 )
    {
      v211 = *(_QWORD *)(v246 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v246 + 16) & 4) != 0 )
        goto LABEL_212;
    }
    else
    {
      v211 = v252[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v252[1].m128i_i64[0] & 4) != 0 )
LABEL_212:
        v211 = *(_QWORD *)(v211 + 8);
    }
    v212 = *(_QWORD *)(a1 + 512);
    v213 = *(_QWORD *)(a1 + 544);
    *(_QWORD *)(a1 + 544) = v211;
    v214 = 0;
    v215 = *(_DWORD *)(a1 + 40);
    v216 = *(_DWORD *)(a1 + 2632);
    *(_QWORD *)(a1 + 512) = 0;
    v244 = (_DWORD *)v212;
    v217 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 9944) = 0;
    v263 = v217;
    LODWORD(v217) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v215;
    v218 = *(_DWORD *)(a1 + 3688);
    v247 = v217;
    *(_DWORD *)(a1 + 2632) = v218;
    v219 = v115[3].m128i_i64[1];
    v220 = nullptr;
    if ( (v219 & 4) != 0 )
    {
      v221 = (unsigned __int64 *)(v219 & 0xFFFFFFFFFFFFFFF8LL);
      v214 = *v221;
      v220 = (void *)v221[1];
    }
    v222 = sub_1DEB190(a1, v214, v220, (__int64)&ptr);
    if ( v222 )
      sub_B7BD70((__int64)v116, v222, v223);
    v116 = (_BYTE *)v246;
    if ( v213 )
    {
      v224 = (__int64)v244;
      *(_QWORD *)(a1 + 544) = v213;
      *(_DWORD *)(a1 + 2632) = v216;
      *(_QWORD *)(a1 + 512) = v224;
      *(_QWORD *)(a1 + 9944) = v263;
      *(_DWORD *)(a1 + 80) = v247;
    }
  }
  sub_17DE740(a1, 0, v116, nullptr, 0, v114);
  v118 = v246;
  v119 = *(_QWORD *)(a1 + 544);
  v120 = *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 512) = 0;
  if ( v118 )
    v118 += 72;
  v121 = *(_QWORD *)(a1 + 9944);
  *(_QWORD *)(a1 + 9944) = 0;
  *(_QWORD *)(a1 + 544) = v118;
  v122 = *(_DWORD *)(a1 + 40);
  v263 = v121;
  LODWORD(v121) = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = v122;
  v123 = *(_DWORD *)(a1 + 3688);
  LODWORD(v244) = v121;
  LODWORD(v121) = *(_DWORD *)(a1 + 2632);
  *(_DWORD *)(a1 + 2632) = v123;
  v247 = v121;
  sub_15F3080((__int64)v262, a1);
  sub_BF6C80(&v250, *(_QWORD *)(a1 + 232));
  v124 = v250;
  *(_QWORD *)(a1 + 1952) = 0;
  v125 = (__int64 *)v252;
  v126 = v246;
  *(_DWORD *)(a1 + 224) = v124;
  if ( !(unsigned __int8)sub_1E03DC0(a1, v126, (__int64)v125, (__int64)&v280, (__int64)&ptr, (__m128)0LL, v44) )
  {
    v131 = v246;
    if ( (v252[5].m128i_i8[4] & 0x20) != 0 )
    {
      sub_17A5DE0(a1, v246);
      v136 = nullptr;
    }
    else
    {
      if ( (*(_BYTE *)(v246 + 28) & 0x7F) == 0x26 )
      {
        v132 = v246;
        v245 = v246;
        sub_1E392C0(a1, v246, (__int64)v252, (__int64)&ptr, (__m128)0LL, v44, v36);
        v131 = v245;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10 )
        {
          v237 = sub_B98FC0(v245, v132);
          v131 = v245;
          if ( v237 )
            sub_1E01910(a1, v245, v238, v127, (__m128)0LL);
        }
      }
      v133 = sub_1DFD470(a1, v28, (__int64)&ptr, v127, v131, v128, (__m128)0LL, v44, v36, v45, v129, v130, a13, a14);
      if ( v133 == 1 )
      {
        sub_B88650(v246, 1);
        v136 = nullptr;
      }
      else
      {
        v136 = (unsigned __int16 *)(v133 & 0xFFFFFFFFFFFFFFFELL);
      }
    }
    v137 = v246;
    sub_17EEDE0(a1, v246, v136, (unsigned __int16 *)((char *)&dword_0 + 1), v134, v135, (__m128i)0LL);
    v142 = (__int64 *)v252;
    if ( v252 )
      v142 = &v252[4].m128i_i64[1];
    v143 = *(_QWORD *)sub_B91570((__int64)v142, v137, v138, v139, v140, v141);
    if ( v143 )
    {
      for ( i = *(_QWORD **)(v143 + 80); i; i = (_QWORD *)*i )
        sub_165DB50((_QWORD *)a1, (__int64)i, (__int64)&ptr);
    }
    v145 = sub_15F1120(a1);
    if ( v145 )
    {
      v146 = *(void (**)())(*(_QWORD *)v145 + 112LL);
      if ( v146 != nullsub_441 )
        ((void (__fastcall *)(__int64, __int64))v146)(v145, v246);
    }
    if ( v119 )
    {
      v147 = v263;
      *(_QWORD *)(a1 + 544) = v119;
      *(_QWORD *)(a1 + 512) = v120;
      *(_QWORD *)(a1 + 9944) = v147;
      *(_DWORD *)(a1 + 80) = (_DWORD)v244;
      *(_DWORD *)(a1 + 2632) = v247;
    }
    sub_15F30C0((__int64)v262);
    if ( ptr != &v277 )
      free(ptr);
    goto LABEL_114;
  }
  sub_15F30C0((__int64)v262);
  if ( v119 )
  {
    v233 = v263;
    *(_QWORD *)(a1 + 544) = v119;
    *(_QWORD *)(a1 + 512) = v120;
    *(_QWORD *)(a1 + 9944) = v233;
    *(_DWORD *)(a1 + 80) = (_DWORD)v244;
    *(_DWORD *)(a1 + 2632) = v247;
  }
  if ( ptr != &v277 )
    free(ptr);
LABEL_130:
  sub_1CB3BA0((__int64)&v280);
  sub_19A2DA0((__int64 *)n);
  sub_190D5E0(a1, v59);
  v264[0] = &off_2B4A628;
  sub_22338A0(v243);
LABEL_22:
  sub_1DBADA0(v257);
LABEL_23:
  sub_1E00130(&v268);
  sub_1E0C0A0(&v254);
  if ( v240 )
    sub_224D6D0(v240);
}
