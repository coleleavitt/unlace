__int64 __fastcall sub_19F2A40(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // r9d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  const __m128i *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r11
  __m128d *v16; // rdx
  const __m128i *v17; // rdi
  __m128d *v18; // r10
  __m128d v19; // xmm0
  __m128d v20; // xmm1
  unsigned __int64 *v21; // rdx
  __int64 v22; // rdx
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 *v26; // rdx
  __int64 v27; // rax
  __m128i *v28; // rbp
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 i; // r14
  __int64 v34; // r9
  __int64 v35; // rax
  void *v36; // r13
  __int64 v37; // r12
  _QWORD *v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // rbx
  __int64 v41; // rdi
  void **v42; // r12
  __int64 v43; // rax
  __int64 *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // ecx
  __int64 v49; // rdi
  unsigned __int64 *v50; // rdi
  void **v51; // rbx
  __m128i *v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  int v55; // edx
  __int64 *v56; // rsi
  __int64 v57; // rax
  bool v58; // al
  __int64 v59; // r12
  __int64 v60; // rdx
  __int64 v61; // rbp
  __m128i *v62; // rsi
  __int64 v63; // r12
  __int64 v64; // r13
  __m128 v65; // xmm0
  unsigned __int8 v66; // al
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __m128i *v72; // rsi
  __int64 v73; // rbp
  unsigned __int64 v74; // rbp
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned __int64 v78; // r14
  __int64 j; // rax
  __int64 v80; // rdi
  __int64 v81; // rdx
  unsigned __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  _QWORD *v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rdi
  __int64 v89; // r12
  __int64 v90; // r13
  __int64 v91; // rdx
  __int64 v92; // rsi
  unsigned __int64 v93; // rax
  _QWORD *v94; // rdi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r12
  unsigned __int64 v98; // rax
  __int64 v99; // rdi
  int v100; // eax
  __int64 v101; // rbp
  unsigned __int64 v102; // rax
  __int64 v103; // rdi
  __m128i **v104; // rdx
  __int64 *v105; // rax
  __int64 v106; // rax
  char v107; // di
  unsigned __int8 v108; // r8
  __int64 v109; // r9
  __int64 v110; // r10
  __int64 v111; // rcx
  unsigned __int64 v112; // r11
  __int64 *v113; // rsi
  __int64 v114; // rax
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rax
  unsigned int v118; // r12d
  __int64 v119; // rbp
  __int64 v120; // rax
  __int64 v121; // rax
  void *v122; // rax
  unsigned int v123; // r12d
  __int64 v124; // rax
  __int64 *v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdi
  void *v129; // rbx
  _BYTE *v130; // rbx
  _BYTE *v131; // rbp
  __int64 *v132; // rdx
  __int64 v133; // r8
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // r13
  _DWORD *v137; // rdx
  __int64 v138; // rdi
  int v139; // eax
  _DWORD *v140; // rdx
  __int64 v141; // rdi
  int v142; // eax
  _QWORD *v143; // rax
  unsigned __int64 v144; // rax
  __int64 v145; // r13
  __int64 v146; // rdi
  __int64 (__fastcall *v147)(__int64); // rax
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // rdx
  _QWORD *v154; // rax
  unsigned __int64 v155; // rax
  __int64 v156; // rdi
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  unsigned __int64 *v161; // rax
  __int64 *v162; // rdx
  unsigned __int64 v163; // rcx
  unsigned __int64 v164; // rax
  _QWORD *v165; // rax
  unsigned __int64 v166; // rax
  __int64 v167; // r14
  __int64 v168; // rdi
  __int64 (__fastcall *v169)(__int64); // rax
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  int v174; // edx
  int v175; // r9d
  char v176; // cl
  __int64 v177; // rdx
  unsigned __int64 *v178; // rax
  int v179; // edx
  unsigned __int64 *v180; // rax
  int v181; // edx
  unsigned __int16 v182; // ax
  __int64 v183; // rcx
  __int32 v184; // edx
  __m128i *v185; // rax
  __m128i *v186; // r8
  __int64 v187; // rdi
  __m128i *v188; // rcx
  __int64 v189; // r10
  __int64 v190; // rdi
  __m128i *v191; // r11
  __m128i *v192; // r10
  __m128i *v193; // rdi
  unsigned __int64 v194; // rdx
  __m128i *v195; // rsi
  void **v196; // rdx
  void *v197; // rdi
  __int64 v198; // rcx
  __m128i *v199; // rdi
  __m128i *v200; // rsi
  __int64 v201; // r12
  __int64 v202; // rbp
  __int64 *v203; // rax
  unsigned int *v204; // rdi
  __int64 v205; // rsi
  unsigned __int64 v206; // rbx
  __m128i *v207; // rax
  unsigned __int64 *v208; // rdx
  __int64 v209; // r8
  __int64 v210; // r9
  unsigned int v211; // ebp
  unsigned int v212; // edi
  _QWORD *v213; // r12
  _QWORD *v214; // rbp
  _QWORD *v215; // rbx
  _QWORD *v216; // rdi
  void **v217; // r13
  _QWORD *v218; // rdi
  __int64 v219; // rax
  _QWORD *v220; // rax
  __int64 v221; // rdx
  __m128i *v222; // r14
  __int64 v223; // rbx
  __m128i *v224; // r13
  __int64 v225; // rbp
  unsigned __int64 v226; // rax
  const __m128i *v227; // r12
  __m128i *v228; // rbx
  __m128i v229; // xmm2
  int v230; // edx
  __m128i *v231; // r14
  _QWORD *v232; // rax
  __int64 v233; // rdx
  void **v234; // r13
  __m128i *v235; // r14
  unsigned __int64 v236; // rbx
  __m128i *v237; // rsi
  __int64 v238; // r12
  __m128i *v239; // rsi
  const __m128i *v240; // rbp
  __m128i *v241; // rbx
  __m128i v242; // xmm4
  int v243; // edx
  __m128i *v244; // r14
  __int64 v245; // rdx
  __int64 v246; // r9
  _BYTE *v247; // rax
  __int64 v248; // rdx
  _BYTE *v249; // r10
  __int64 v250; // r13
  __int64 v251; // rdx
  _BYTE *v252; // r11
  _BYTE *v253; // rdx
  __int64 v254; // rcx
  _BYTE *v255; // rax
  int v256; // r10d
  __int64 *v257; // r11
  bool v258; // zf
  __int64 *m128i_i64; // rbx
  int v260; // r9d
  _BYTE *v261; // rdx
  __int64 v262; // rax
  _BYTE *v263; // r11
  __int64 v264; // r12
  __int64 v265; // rax
  _BYTE *v266; // r10
  _BYTE *v267; // rax
  __int64 v268; // rcx
  _BYTE *v269; // rdx
  int v270; // r10d
  __int64 *v271; // r11
  __int64 v272; // r8
  __int64 v273; // rsi
  unsigned __int32 v274; // ecx
  char v275; // al
  __int64 v276; // rax
  __int64 v277; // rdx
  __int64 v278; // rcx
  unsigned int v279; // eax
  unsigned __int8 v280; // al
  __int64 v281; // rax
  unsigned __int64 v282; // rax
  __int64 v283; // rdx
  __int32 v284; // eax
  __int64 v285; // r12
  char *v286; // rax
  signed __int64 v287; // rdx
  char *v288; // r13
  signed __int64 v289; // r14
  unsigned __int64 *v290; // rdx
  __int64 v291; // rcx
  __int64 v292; // r8
  __int64 v293; // r9
  _QWORD *v294; // rax
  __int64 v295; // rcx
  _QWORD *v296; // rax
  int v297; // r11d
  unsigned __int64 *v298; // r10
  __int64 v299; // r8
  unsigned int v300; // edi
  unsigned int v301; // ebp
  int v302; // r10d
  unsigned __int64 *v303; // r9
  __int64 *v304; // rax
  __int64 v305; // rcx
  int v306; // r10d
  __int64 *v307; // r9
  int v308; // r11d
  unsigned __int64 *v309; // r10
  unsigned __int64 *v310; // [rsp+0h] [rbp-1B8h] BYREF
  __m128i *v311; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 *v312; // [rsp+10h] [rbp-1A8h]
  __m128i *v313; // [rsp+18h] [rbp-1A0h]
  __m128i *v314; // [rsp+20h] [rbp-198h]
  __m128i *v315; // [rsp+28h] [rbp-190h]
  __int64 v316; // [rsp+38h] [rbp-180h] BYREF
  _QWORD v317[2]; // [rsp+40h] [rbp-178h] BYREF
  __int64 v318; // [rsp+50h] [rbp-168h]
  __m128i v319; // [rsp+60h] [rbp-158h] BYREF
  __m128i v320; // [rsp+70h] [rbp-148h] BYREF
  __int64 v321; // [rsp+80h] [rbp-138h] BYREF
  __int64 v322; // [rsp+88h] [rbp-130h]
  _QWORD *v323; // [rsp+90h] [rbp-128h] BYREF
  __int64 v324; // [rsp+98h] [rbp-120h]
  unsigned int v325; // [rsp+A0h] [rbp-118h]
  _QWORD *v326; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v327; // [rsp+B8h] [rbp-100h]
  void *src; // [rsp+C0h] [rbp-F8h]
  __int64 v329; // [rsp+C8h] [rbp-F0h]
  void *v330; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+D8h] [rbp-E0h]
  __int64 v332; // [rsp+E0h] [rbp-D8h]
  __m128i v333; // [rsp+F0h] [rbp-C8h] BYREF
  __m128i v334; // [rsp+100h] [rbp-B8h] BYREF
  unsigned __int64 *v335; // [rsp+110h] [rbp-A8h]
  __int64 v336; // [rsp+118h] [rbp-A0h]
  __int128 v337; // [rsp+120h] [rbp-98h]

  result = sub_15F7970(a1);
  if ( (_BYTE)result )
    return result;
  result = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 152LL) + 24LL) & 1;
  LOBYTE(result) = (a2 == 0) | result;
  if ( (_BYTE)result )
    return result;
  v5 = *(_QWORD *)(a1 + 17432);
  v321 = a1;
  v322 = 0;
  v323 = nullptr;
  v324 = 0;
  v325 = 0;
  if ( (v5 & 1) != 0 )
  {
    v6 = 0;
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = 1;
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = 2;
  }
  else
  {
    v6 = 3;
    if ( (v5 & 8) == 0 )
      goto LABEL_8;
  }
  v245 = (unsigned __int8)v6;
  v246 = 0;
  while ( 1 )
  {
    if ( (dword_2646E30[v245] & 1) != 0 )
    {
      v246 |= 1LL << v6;
      LOBYTE(result) = 1;
    }
    v4 = v6 + 1;
    if ( v6 == 3 )
      break;
    if ( (v5 & (1LL << v4)) != 0 )
      goto LABEL_340;
    v4 = v6 + 2;
    if ( v6 == 2 )
      break;
    if ( (v5 & (1LL << v4)) != 0 )
    {
LABEL_340:
      v6 = v4;
    }
    else
    {
      if ( v6 || (v5 & 8) == 0 )
        break;
      v6 = 3;
    }
    v245 = (unsigned __int8)v6;
  }
  if ( (_BYTE)result )
    v322 = v246;
LABEL_8:
  v7 = *(unsigned int *)(a1 + 17376);
  v8 = *(_QWORD *)(a1 + 17368);
  v9 = 8 * v7;
  v10 = *(_DWORD *)(a1 + 17376);
  v11 = v8 + 8 * v7;
  if ( v8 != v11 )
  {
    v12 = v11 - 8;
    if ( v8 < v11 - 8 )
    {
      v13 = *(const __m128i **)(a1 + 17368);
      v14 = (unsigned __int64)(8 * v7 - 9) >> 4;
      v15 = v14 + 1;
      if ( (v9 <= 0 || (__int64)(v9 - 8 * v14 - 8) >= (__int64)(8 * (v14 + 1))) && (unsigned __int64)(8 * v7 - 9) > 0x1F )
      {
        v17 = (const __m128i *)(v8 + v9 - 16);
        v16 = (__m128d *)v17;
        v18 = (__m128d *)&v17[-(v15 >> 1)];
        do
        {
          v19 = (__m128d)_mm_loadu_si128(v13);
          v20 = (__m128d)_mm_loadu_si128(v17);
          --v16;
          ++v13;
          --v17;
          v13[-1] = (const __m128i)_mm_shuffle_pd(v20, v20, 1);
          v16[1] = _mm_shuffle_pd(v19, v19, 1);
        }
        while ( v18 != v16 );
        v4 = v8 + 8 * (v15 & 0xFFFFFFFFFFFFFFFELL);
        v21 = (unsigned __int64 *)(v12 - 8 * (v15 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v15 & 0xFFFFFFFFFFFFFFFELL) != v15 )
        {
          v8 = *(_QWORD *)v4;
          *(_QWORD *)v4 = *v21;
          *v21 = v8;
        }
      }
      else
      {
        do
        {
          v54 = *(_QWORD *)v8;
          v4 = *(_QWORD *)v12;
          v8 += 8LL;
          v12 -= 8LL;
          *(_QWORD *)(v8 - 8) = v4;
          *(_QWORD *)(v12 + 8) = v54;
        }
        while ( v12 > v8 );
      }
    }
  }
  if ( v10 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(a1 + 17368);
      v23 = *(__int64 **)(v22 + 8 * v7 - 8);
      v24 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, __int64))(*v23 + 32))(v23, v8, v22, v4);
      if ( !v325 )
        break;
      v8 = v325 - 1;
      v4 = (unsigned int)v8 & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
      v26 = &v323[2 * v4];
      v25 = *v26;
      if ( v24 != *v26 )
      {
        v55 = 1;
        if ( v25 == -4096 )
          break;
        while ( 1 )
        {
          v260 = v55 + 1;
          v4 = (unsigned int)v8 & (v55 + (_DWORD)v4);
          v26 = &v323[2 * (unsigned int)v4];
          v25 = *v26;
          if ( v24 == *v26 )
            break;
          if ( v25 == -4096 )
            goto LABEL_52;
          v55 = v260;
        }
      }
      v27 = v26[1];
      v28 = (__m128i *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v27 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        break;
      if ( (v27 & 4) == 0 )
      {
        v310 = (unsigned __int64 *)&v326;
        sub_19EC960((__int64)&v326, (__int64)v23, 0, v4, v25);
        v32 = v28[2].m128i_i64[1];
        for ( i = v32 + 24LL * v28[3].m128i_u32[0]; i != v32; v32 += 24 )
        {
          if ( !*(_BYTE *)(v32 + 12) )
          {
            sub_19EC960((__int64)&v333, *(_QWORD *)v32, 0, v29, v30);
            sub_19EB530(
              (__int64)&v321,
              v28->m128i_i64,
              (__int64)&v333,
              *(unsigned int *)(v32 + 8),
              *(_QWORD *)(v32 + 16),
              v34);
          }
        }
        v35 = v28[1].m128i_u32[2];
        if ( (_DWORD)v35 )
        {
          v235 = (__m128i *)v28[1].m128i_i64[0];
          v236 = 32 * v35;
          v237 = &v235[2 * v35];
          v238 = *(_QWORD *)(v321 + 272);
          _BitScanReverse64((unsigned __int64 *)&v35, (32 * v35) >> 5);
          v311 = v237;
          sub_19EA1E0(v235, v237, 2LL * (int)(63 - (v35 ^ 0x3F)), v238, v30, v31);
          if ( v236 <= 0x200 )
          {
            sub_19EA600(v235, v311, v238);
          }
          else
          {
            sub_19EA600(v235, v235 + 32, v238);
            v239 = v311;
            if ( v311 != &v235[32] )
            {
              v311 = v28;
              v240 = v235 + 32;
              do
              {
                v241 = (__m128i *)v240;
                v333 = _mm_loadu_si128(v240);
                v334 = _mm_loadu_si128(v240 + 1);
                while ( 1 )
                {
                  v243 = v241[-1].m128i_i32[0];
                  v244 = v241;
                  v241 -= 2;
                  if ( !sub_10246C0(v238, v334.m128i_i32[0], v243) )
                    break;
                  v242 = _mm_loadu_si128(v241 + 1);
                  v241[2] = _mm_loadu_si128(v241);
                  v241[3] = v242;
                }
                v240 += 2;
                *v244 = _mm_load_si128(&v333);
                v244[1] = _mm_load_si128(&v334);
              }
              while ( v239 != v240 );
              v28 = v311;
            }
          }
          if ( v28[1].m128i_i32[2] )
            sub_19EE370(&v321, (unsigned __int8 *)v28[1].m128i_i64[0], v28[1].m128i_u32[2], v310);
        }
        v36 = src;
        v37 = v322;
        v38 = (_QWORD *)operator new(0x10u);
        v39 = 0;
        *v38 = v36;
        v40 = (unsigned __int64)v38;
        v38[1] = 0;
        v41 = v28[2].m128i_i64[0];
        if ( (v37 & 1) == 0 )
        {
          if ( (v37 & 2) != 0 )
          {
            v39 = 1;
            goto LABEL_348;
          }
          if ( (v37 & 4) != 0 )
          {
            v39 = 2;
            goto LABEL_348;
          }
          v39 = 3;
          if ( (v37 & 8) != 0 )
            goto LABEL_348;
LABEL_30:
          v28[2].m128i_i64[0] = 0;
          v42 = *(void ***)(v40 + 8);
          *(_QWORD *)(v40 + 8) = v41;
          if ( v42 )
          {
            if ( *v42 != v42 + 2 )
              free(*v42);
            v39 = 48;
            operator delete(v42, 0x30u);
          }
          v43 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v326 + 32LL))(v326, v39);
          v319.m128i_i64[0] = v43;
          if ( v325 )
          {
            v47 = v325 - 1;
            v48 = v47 & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
            v44 = &v323[2 * v48];
            v49 = *v44;
            if ( v43 == *v44 )
            {
LABEL_36:
              v44[1] = v40 | 4;
              v50 = (unsigned __int64 *)v28[2].m128i_i64[1];
              if ( v50 != &v28[3].m128i_u64[1] )
                free(v50);
              v51 = (void **)v28[2].m128i_i64[0];
              if ( v51 )
              {
                if ( *v51 != v51 + 2 )
                  free(*v51);
                operator delete(v51, 0x30u);
              }
              v52 = (__m128i *)v28[1].m128i_i64[0];
              if ( &v28[2] != v52 )
                free(v52);
              v8 = 56;
              operator delete(v28, 0x38u);
              goto LABEL_45;
            }
            v270 = 1;
            v271 = nullptr;
            if ( v49 != -4096 )
            {
              while ( 1 )
              {
                if ( v49 == -8192 && !v271 )
                  v271 = v44;
                v48 = v47 & (v270 + v48);
                v44 = &v323[2 * v48];
                v49 = *v44;
                if ( v43 == *v44 )
                  goto LABEL_36;
                if ( v49 == -4096 )
                {
                  if ( v271 )
                    v44 = v271;
                  break;
                }
                ++v270;
              }
            }
            v333.m128i_i64[0] = (__int64)v44;
            v45 = (unsigned int)(v324 + 1);
            v46 = (unsigned int)(4 * v45);
            if ( (unsigned int)v46 < 3 * v325 )
            {
              v272 = v325 >> 3;
              if ( v325 - HIDWORD(v324) - (unsigned int)v45 <= (unsigned int)v272 )
              {
                sub_19EA7F0((__int64)&v323, v325, (__int64)v44, v45, v272, v47);
                sub_19E9A70((__int64 *)&v323, v319.m128i_i64, &v333);
                v43 = v319.m128i_i64[0];
                v44 = (__int64 *)v333.m128i_i64[0];
                LODWORD(v45) = v324 + 1;
              }
              v273 = *v44;
LABEL_477:
              LODWORD(v324) = v45;
              if ( v273 != -4096 )
                --HIDWORD(v324);
              *v44 = v43;
              v44[1] = 0;
              goto LABEL_36;
            }
          }
          else
          {
            v333.m128i_i64[0] = 0;
          }
          sub_19EA7F0((__int64)&v323, 2 * v325, (__int64)v44, v45, v46, v47);
          if ( v325 )
          {
            v43 = v319.m128i_i64[0];
            v274 = (v325 - 1)
                 & (((unsigned __int32)v319.m128i_i32[0] >> 9)
                  ^ ((unsigned __int32)v319.m128i_i32[0] >> 4));
            v44 = &v323[2 * v274];
            v273 = *v44;
            if ( v319.m128i_i64[0] != *v44 )
            {
              v306 = 1;
              v307 = nullptr;
              if ( v273 != -4096 )
              {
                while ( 1 )
                {
                  if ( v273 == -8192 && !v307 )
                    v307 = v44;
                  v274 = (v325 - 1) & (v306 + v274);
                  v44 = &v323[2 * v274];
                  v273 = *v44;
                  if ( v319.m128i_i64[0] == *v44 )
                    break;
                  if ( v273 == -4096 )
                  {
                    if ( v307 )
                    {
                      v273 = *v307;
                      v44 = v307;
                    }
                    break;
                  }
                  ++v306;
                }
              }
            }
            v333.m128i_i64[0] = (__int64)v44;
            LODWORD(v45) = v324 + 1;
          }
          else
          {
            v43 = v319.m128i_i64[0];
            v44 = nullptr;
            v333.m128i_i64[0] = 0;
            LODWORD(v45) = v324 + 1;
            v273 = 0x10102464C457FLL;
          }
          goto LABEL_477;
        }
LABEL_348:
        while ( 2 )
        {
          if ( !v41 )
            goto LABEL_365;
          v247 = *(_BYTE **)v41;
          v248 = 32LL * *(unsigned int *)(v41 + 8);
          v249 = (_BYTE *)(*(_QWORD *)v41 + v248);
          v250 = v248 >> 5;
          v251 = v248 >> 7;
          if ( v251 )
          {
            if ( (_BYTE)v39 == *v247 )
            {
              v252 = *(_BYTE **)v41;
              goto LABEL_374;
            }
            if ( (_BYTE)v39 == v247[32] )
            {
              v255 = v247 + 32;
              if ( v249 != v255 && v255 )
                goto LABEL_366;
            }
            else
            {
              v252 = v247 + 64;
              if ( (_BYTE)v39 == v247[64] || (v252 = v247 + 96, v253 = &v247[128 * v251], (_BYTE)v39 == v247[96]) )
              {
LABEL_374:
                if ( v249 == v252 )
                  goto LABEL_365;
LABEL_366:
                v254 = v39 + 1;
                if ( v39 == 3 )
                  goto LABEL_30;
                if ( (v37 & (1LL << v254)) != 0 )
                  goto LABEL_386;
                v254 = v39 + 2;
                if ( v39 == 2 )
                  goto LABEL_30;
                if ( (v37 & (1LL << v254)) != 0 )
                {
LABEL_386:
                  v39 = v254;
                }
                else
                {
                  if ( v39 == 1 || (v37 & 8) == 0 )
                    goto LABEL_30;
                  v39 = 3;
                }
                continue;
              }
              while ( 1 )
              {
                v252 = v247 + 128;
                if ( v253 == v247 + 128 )
                {
                  v250 = (v249 - v252) >> 5;
                  goto LABEL_362;
                }
                if ( (_BYTE)v39 == v247[128] )
                  goto LABEL_374;
                if ( (_BYTE)v39 == v247[160] )
                {
                  if ( v249 != v247 + 160 )
                    goto LABEL_366;
                  goto LABEL_365;
                }
                if ( (_BYTE)v39 == v247[192] )
                  break;
                if ( (_BYTE)v39 == v247[224] )
                {
                  v252 = v247 + 224;
                  goto LABEL_374;
                }
                v247 += 128;
              }
              if ( v249 != v247 + 192 )
                goto LABEL_366;
            }
LABEL_365:
            *(_QWORD *)v40 |= 1LL << v39;
            goto LABEL_366;
          }
          break;
        }
        v252 = *(_BYTE **)v41;
LABEL_362:
        if ( v250 != 2 )
        {
          if ( v250 != 3 )
          {
            if ( v250 != 1 )
              goto LABEL_365;
            goto LABEL_384;
          }
          if ( (_BYTE)v39 == *v252 )
            goto LABEL_374;
          v252 += 32;
        }
        if ( (_BYTE)v39 == *v252 )
          goto LABEL_374;
        v252 += 32;
LABEL_384:
        if ( (_BYTE)v39 == *v252 )
          goto LABEL_374;
        goto LABEL_365;
      }
LABEL_45:
      v7 = (unsigned int)(*(_DWORD *)(a1 + 17376) - 1);
      *(_DWORD *)(a1 + 17376) = v7;
LABEL_46:
      if ( !(_DWORD)v7 )
        goto LABEL_47;
    }
LABEL_52:
    v56 = v23;
    v312 = v317;
    sub_19EC960((__int64)v317, (__int64)v23, 0, v4, v25);
    if ( (*((_BYTE *)v23 + 28) & 0x7Fu) - 34 > 5 )
    {
      v59 = v321;
      if ( (*(_BYTE *)(*(_QWORD *)(v321 + 232) + 1LL) & 8) == 0 )
        goto LABEL_179;
    }
    else
    {
      v57 = (*(__int64 (__fastcall **)(__int64 *))(*v23 + 32))(v23);
      v58 = sub_B8E4C0(v57 + 72);
      v59 = v321;
      if ( (*(_BYTE *)(*(_QWORD *)(v321 + 232) + 1LL) & 8) == 0 )
        goto LABEL_179;
      v56 = (__int64 *)&v326;
      v310 = (unsigned __int64 *)&v326;
      if ( v58 )
      {
LABEL_55:
        v60 = v318;
        v327 = 0;
        v61 = v322;
        v329 = 0;
        v326 = (_QWORD *)v318;
        src = v310 + 4;
        v62 = (__m128i *)v317[0];
        v330 = nullptr;
        ptr = v310 + 7;
        v332 = 0;
        if ( (v322 & 1) != 0 )
        {
          v63 = 0;
        }
        else if ( (v322 & 2) != 0 )
        {
          v63 = 1;
        }
        else
        {
          if ( (v322 & 4) == 0 )
          {
            v63 = 3;
            LOBYTE(v64) = v322 & 8;
            if ( (v322 & 8) != 0 )
              goto LABEL_207;
LABEL_59:
            v333.m128i_i8[8] = 0;
            v333.m128i_i8[11] = 1;
            *(__int16 *)((char *)&v333.m128i_i16[4] + 1) = 256;
            v336 = 0;
            v333.m128i_i64[0] = (__int64)off_2C5EE08;
            v311 = (__m128i *)&v321;
            v313 = (__m128i *)&v321;
            v65 = _mm_loadh_ps((const double *)&v310);
            v327 = (unsigned __int8)~(_BYTE)v326 & (unsigned __int8)v64 & 0xF;
            v334 = (__m128i)v65;
            v335 = v312;
            v337 = 0;
            v66 = v62[1].m128i_i8[12] & 0x7F;
            if ( v66 != 36 )
            {
              v104 = (__m128i **)v312;
LABEL_102:
              if ( (unsigned int)v66 - 34 <= 5 )
              {
                v105 = (__int64 *)(v62[3].m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v62[3].m128i_i64[1] & 4) != 0 )
                {
                  *(_QWORD *)&v337 = v105[5];
                  v105 = (__int64 *)v105[4];
                }
                else
                {
                  *(_QWORD *)&v337 = 0;
                }
                if ( v105 )
                {
                  v106 = *v105;
                  if ( (v106 & 7) == 0
                    && (v106 & 8) == 0
                    && *(_BYTE *)(*(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
                    && v106 )
                  {
                    v107 = *(_BYTE *)(v106 + 19);
                    v108 = ((unsigned __int8)v107 >> 1) & 0xF;
                    if ( (unsigned int)v108 - 6 > 2 )
                    {
                      v114 = 0;
                    }
                    else
                    {
                      v109 = *(_QWORD *)(v106 + 16);
                      v110 = 8LL * *(unsigned __int16 *)(v106 + 22) + 48;
                      v111 = (v109 & 0x40000000) != 0;
                      v112 = (v106 + v110 + ((SBYTE3(v109) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (v107 & 0x40) != 0 )
                        v111 += (*(_BYTE *)(((v106 + v110 + ((v107 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                      v113 = (__int64 *)(v112 + 8 * v111);
                      if ( v108 == 2 )
                        v113 = (__int64 *)(v112
                                         + 8
                                         * ((*(_WORD *)((v106 + ((SBYTE3(v109) >> 5) & 4) + v110 + 7)
                                                      & 0xFFFFFFFFFFFFFFF8LL)
                                           & 0x3FF)
                                          + v111));
                      v114 = *v113;
                    }
                    *((_QWORD *)&v337 + 1) = v114;
                  }
                }
                v62 = *v104;
              }
              sub_BC7960(&v333, (__int64)v62);
              if ( (_DWORD)v332 )
              {
                v117 = operator new(0x38u);
                v118 = v329;
                v119 = v117;
                v120 = (__int64)v326;
                *(_QWORD *)(v119 + 24) = 0;
                *(_QWORD *)v119 = v120;
                v121 = v327;
                *(_QWORD *)(v119 + 16) = v119 + 32;
                *(_QWORD *)(v119 + 8) = v121;
                if ( v118 )
                {
                  v180 = v310 + 4;
                  if ( src == v310 + 4 )
                  {
                    sub_2237220(v119 + 16, v119 + 32, v118, 32);
                    if ( 32LL * (unsigned int)v329 )
                      memcpy(*(void **)(v119 + 16), src, 32LL * (unsigned int)v329);
                    *(_DWORD *)(v119 + 24) = v118;
                    LODWORD(v329) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v119 + 16) = src;
                    v181 = HIDWORD(v329);
                    *(_DWORD *)(v119 + 24) = v118;
                    *(_DWORD *)(v119 + 28) = v181;
                    src = v180;
                    v329 = 0;
                  }
                }
                v122 = v330;
                v123 = v332;
                v330 = nullptr;
                *(_QWORD *)(v119 + 40) = v119 + 56;
                *(_QWORD *)(v119 + 32) = v122;
                *(_QWORD *)(v119 + 48) = 0;
                if ( v123 )
                {
                  v178 = v310 + 7;
                  if ( ptr == v310 + 7 )
                  {
                    sub_2237220(v119 + 40, v119 + 56, v123, 24);
                    if ( 24LL * (unsigned int)v332 )
                      memcpy(*(void **)(v119 + 40), ptr, 24LL * (unsigned int)v332);
                    *(_DWORD *)(v119 + 48) = v123;
                    LODWORD(v332) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v119 + 40) = ptr;
                    v179 = HIDWORD(v332);
                    *(_DWORD *)(v119 + 48) = v123;
                    *(_DWORD *)(v119 + 52) = v179;
                    ptr = v178;
                    v332 = 0;
                  }
                }
                v124 = (*(__int64 (__fastcall **)(__int64 *))(*v23 + 32))(v23);
                v8 = v325;
                v316 = v124;
                if ( v325 )
                {
                  v127 = v325 - 1;
                  v4 = (unsigned int)v127 & (((unsigned int)v124 >> 9) ^ ((unsigned int)v124 >> 4));
                  v125 = &v323[2 * v4];
                  v128 = *v125;
                  if ( *v125 == v124 )
                  {
LABEL_123:
                    v125[1] = v119 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_124:
                    if ( ptr != v310 + 7 )
                      free(ptr);
                    v129 = v330;
                    if ( v330 )
                    {
                      if ( *(void **)v330 != (char *)v330 + 16 )
                        free(*(void **)v330);
                      v8 = 48;
                      operator delete(v129, 0x30u);
                    }
                    if ( src != v310 + 4 )
                      free(src);
                    if ( !v119 )
                      goto LABEL_45;
                    v130 = *(_BYTE **)(v119 + 40);
                    v131 = &v130[24 * *(unsigned int *)(v119 + 48)];
                    if ( v130 == v131 )
                    {
LABEL_142:
                      v7 = *(unsigned int *)(a1 + 17376);
                      goto LABEL_46;
                    }
                    while ( 1 )
                    {
                      v134 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v130 + 32LL))(*(_QWORD *)v130);
                      v8 = (unsigned __int64)v323;
                      if ( !v325 )
                        goto LABEL_139;
                      v4 = (v325 - 1) & (((unsigned int)v134 >> 9) ^ ((unsigned int)v134 >> 4));
                      v132 = &v323[2 * v4];
                      v133 = *v132;
                      if ( *v132 != v134 )
                      {
                        v174 = 1;
                        if ( v133 == -4096 )
                          goto LABEL_139;
                        while ( 1 )
                        {
                          v175 = v174 + 1;
                          v4 = (v325 - 1) & (v174 + (_DWORD)v4);
                          v132 = &v323[2 * (unsigned int)v4];
                          if ( v134 == *v132 )
                            break;
                          if ( *v132 == -4096 )
                            goto LABEL_139;
                          v174 = v175;
                        }
                      }
                      if ( (v132[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                      {
                        v130[12] = 1;
                        v130 += 24;
                        if ( v131 == v130 )
                          goto LABEL_142;
                      }
                      else
                      {
LABEL_139:
                        v135 = *(unsigned int *)(a1 + 17376);
                        v4 = *(unsigned int *)(a1 + 17380);
                        v136 = *(_QWORD *)v130;
                        if ( v135 + 1 > (unsigned __int64)v4 )
                        {
                          v8 = a1 + 17384;
                          sub_2237220(a1 + 17368, a1 + 17384, v135 + 1, 8);
                          v135 = *(unsigned int *)(a1 + 17376);
                        }
                        v130 += 24;
                        *(_QWORD *)(*(_QWORD *)(a1 + 17368) + 8 * v135) = v136;
                        ++*(_DWORD *)(a1 + 17376);
                        if ( v131 == v130 )
                          goto LABEL_142;
                      }
                    }
                  }
                  v256 = 1;
                  v257 = nullptr;
                  if ( v128 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( !v257 && v128 == -8192 )
                        v257 = v125;
                      v4 = (unsigned int)v127 & (v256 + (_DWORD)v4);
                      v125 = &v323[2 * (unsigned int)v4];
                      v128 = *v125;
                      if ( v124 == *v125 )
                        goto LABEL_123;
                      if ( v128 == -4096 )
                      {
                        if ( v257 )
                          v125 = v257;
                        break;
                      }
                      ++v256;
                    }
                  }
                  v319.m128i_i64[0] = (__int64)v125;
                  v4 = (unsigned int)(v324 + 1);
                  v126 = (unsigned int)(4 * v4);
                  if ( (unsigned int)v126 < 3 * v325 )
                  {
                    v126 = v325 >> 3;
                    if ( v325 - HIDWORD(v324) - (unsigned int)v4 > (unsigned int)v126 )
                    {
LABEL_403:
                      v258 = *v125 == -4096;
                      LODWORD(v324) = v4;
                      if ( !v258 )
                        --HIDWORD(v324);
                      *v125 = v124;
                      v125[1] = 0;
                      goto LABEL_123;
                    }
LABEL_408:
                    m128i_i64 = v313[1].m128i_i64;
                    sub_19EA7F0((__int64)v313[1].m128i_i64, v8, (__int64)v125, v4, v126, v127);
                    v8 = (unsigned __int64)&v316;
                    sub_19E9A70(m128i_i64, &v316, &v319);
                    v124 = v316;
                    v125 = (__int64 *)v319.m128i_i64[0];
                    v4 = (unsigned int)(v324 + 1);
                    goto LABEL_403;
                  }
                }
                else
                {
                  v319.m128i_i64[0] = 0;
                }
                LODWORD(v8) = 2 * v325;
                goto LABEL_408;
              }
              if ( (_DWORD)v329 )
              {
                v222 = (__m128i *)src;
                v223 = 32LL * (unsigned int)v329;
                v224 = (__m128i *)((char *)src + v223);
                v225 = *(_QWORD *)(v321 + 272);
                _BitScanReverse64(&v226, v223 >> 5);
                sub_19EA1E0(
                  (__m128i *)src,
                  (__m128i *)((char *)src + v223),
                  2LL * (int)(63 - (v226 ^ 0x3F)),
                  v225,
                  v115,
                  v116);
                if ( (unsigned __int64)v223 <= 0x200 )
                {
                  sub_19EA600(v222, v224, v225);
                }
                else
                {
                  v227 = v222 + 32;
                  sub_19EA600(v222, v222 + 32, v225);
                  if ( v224 != &v222[32] )
                  {
                    do
                    {
                      v228 = (__m128i *)v227;
                      v319 = _mm_loadu_si128(v227);
                      v320 = _mm_loadu_si128(v227 + 1);
                      while ( 1 )
                      {
                        v230 = v228[-1].m128i_i32[0];
                        v231 = v228;
                        v228 -= 2;
                        if ( !sub_10246C0(v225, v320.m128i_i32[0], v230) )
                          break;
                        v229 = _mm_loadu_si128(v228 + 1);
                        v228[2] = _mm_loadu_si128(v228);
                        v228[3] = v229;
                      }
                      v227 += 2;
                      *v231 = _mm_load_si128(&v319);
                      v231[1] = _mm_load_si128(&v320);
                    }
                    while ( v224 != v227 );
                  }
                }
                if ( (_DWORD)v329 )
                  sub_19EE370(v313->m128i_i64, (unsigned __int8 *)src, (unsigned int)v329, v312);
              }
              v201 = v318;
              v202 = v322;
              v203 = (__int64 *)operator new(0x10u);
              v204 = (unsigned int *)v330;
              v205 = 0;
              v206 = (unsigned __int64)v203;
              *v203 = v201;
              v203[1] = 0;
              if ( (v202 & 1) == 0 )
              {
                if ( (v202 & 2) != 0 )
                {
                  v205 = 1;
                  goto LABEL_418;
                }
                if ( (v202 & 4) != 0 )
                {
                  v205 = 2;
                  goto LABEL_418;
                }
                v205 = 3;
                if ( (v202 & 8) != 0 )
                  goto LABEL_418;
LABEL_264:
                *(_QWORD *)(v206 + 8) = v204;
                v330 = nullptr;
                v207 = (__m128i *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v317[0] + 32LL))(
                                    v317[0],
                                    v205);
                v8 = v325;
                if ( !v325 )
                  goto LABEL_522;
                v210 = v325 - 1;
                v211 = ((unsigned int)v207 >> 9) ^ ((unsigned int)v207 >> 4);
                v212 = v210 & v211;
                v208 = &v323[2 * ((unsigned int)v210 & v211)];
                v4 = *v208;
                if ( (__m128i *)*v208 == v207 )
                {
LABEL_266:
                  v119 = 0;
                  v208[1] = v206 | 4;
                  goto LABEL_124;
                }
                v297 = 1;
                v298 = nullptr;
                if ( v4 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( v4 == -8192 && !v298 )
                      v298 = v208;
                    v212 = v210 & (v297 + v212);
                    v208 = &v323[2 * v212];
                    v4 = *v208;
                    if ( v207 == (__m128i *)*v208 )
                      goto LABEL_266;
                    if ( v4 == -4096 )
                      break;
                    ++v297;
                  }
                  if ( v298 )
                    v208 = v298;
                }
                v4 = (unsigned int)(v324 + 1);
                v209 = (unsigned int)(4 * v4);
                if ( (unsigned int)v209 < 3 * v325 )
                {
                  v299 = v325 >> 3;
                  if ( v325 - HIDWORD(v324) - (unsigned int)v4 > (unsigned int)v299 )
                  {
                    v8 = *v208;
                    goto LABEL_518;
                  }
                  v311 = v207;
                  sub_19EA7F0((__int64)v313[1].m128i_i64, v325, (__int64)v208, v4, v299, v210);
                  if ( !v325 )
                  {
LABEL_581:
                    LODWORD(v324) = v324 + 1;
                    BUG();
                  }
                  v301 = (v325 - 1) & v211;
                  v4 = (unsigned int)(v324 + 1);
                  v207 = v311;
                  v208 = &v323[2 * v301];
                  v8 = *v208;
                  if ( (__m128i *)*v208 != v311 )
                  {
                    v302 = 1;
                    v303 = nullptr;
                    if ( v8 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( v8 == -8192 && !v303 )
                          v303 = v208;
                        v301 = (v325 - 1) & (v302 + v301);
                        v208 = &v323[2 * v301];
                        v8 = *v208;
                        if ( v311 == (__m128i *)*v208 )
                          goto LABEL_518;
                        if ( v8 == -4096 )
                        {
                          if ( !v303 )
                            break;
                          v8 = *v303;
                          v208 = v303;
                          goto LABEL_518;
                        }
                        ++v302;
                      }
                    }
LABEL_528:
                    LODWORD(v324) = v4;
LABEL_520:
                    *v208 = (unsigned __int64)v207;
                    v208[1] = 0;
                    goto LABEL_266;
                  }
                }
                else
                {
LABEL_522:
                  v311 = v207;
                  sub_19EA7F0((__int64)v313[1].m128i_i64, 2 * v325, (__int64)v208, v4, v209, v210);
                  if ( !v325 )
                    goto LABEL_581;
                  v207 = v311;
                  v4 = (unsigned int)(v324 + 1);
                  v300 = (v325 - 1) & (((unsigned int)v311 >> 9) ^ ((unsigned int)v311 >> 4));
                  v208 = &v323[2 * v300];
                  v8 = *v208;
                  if ( (__m128i *)*v208 != v311 )
                  {
                    v308 = 1;
                    v309 = nullptr;
                    if ( v8 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( v8 == -8192 && !v309 )
                          v309 = v208;
                        v300 = (v325 - 1) & (v308 + v300);
                        v208 = &v323[2 * v300];
                        v8 = *v208;
                        if ( v311 == (__m128i *)*v208 )
                          goto LABEL_518;
                        if ( v8 == -4096 )
                        {
                          if ( !v309 )
                            goto LABEL_528;
                          v8 = *v309;
                          v208 = v309;
                          goto LABEL_518;
                        }
                        ++v308;
                      }
                    }
                    goto LABEL_528;
                  }
                }
                v8 = (unsigned __int64)v207;
LABEL_518:
                LODWORD(v324) = v4;
                if ( v8 != -4096 )
                  --HIDWORD(v324);
                goto LABEL_520;
              }
              while ( 1 )
              {
LABEL_418:
                if ( !v204 )
                  goto LABEL_435;
                v261 = *(_BYTE **)v204;
                v262 = 32LL * v204[2];
                v263 = (_BYTE *)(*(_QWORD *)v204 + v262);
                v264 = v262 >> 5;
                v265 = v262 >> 7;
                if ( !v265 )
                  break;
                if ( (_BYTE)v205 == *v261 )
                {
                  v266 = *(_BYTE **)v204;
LABEL_453:
                  if ( v263 == v266 )
                    goto LABEL_435;
                  goto LABEL_436;
                }
                if ( v261[32] != (_BYTE)v205 )
                {
                  v266 = v261 + 64;
                  if ( (_BYTE)v205 != v261[64] )
                  {
                    v266 = v261 + 96;
                    v267 = &v261[128 * v265];
                    if ( (_BYTE)v205 != v261[96] )
                    {
                      while ( 1 )
                      {
                        v266 = v261 + 128;
                        if ( v267 == v261 + 128 )
                        {
                          v264 = (v263 - v266) >> 5;
                          goto LABEL_432;
                        }
                        if ( (_BYTE)v205 == v261[128] )
                          goto LABEL_453;
                        if ( (_BYTE)v205 == v261[160] )
                        {
                          if ( v263 != v261 + 160 )
                            goto LABEL_436;
                          goto LABEL_435;
                        }
                        if ( (_BYTE)v205 == v261[192] )
                          break;
                        if ( (_BYTE)v205 == v261[224] )
                        {
                          v266 = v261 + 224;
                          goto LABEL_453;
                        }
                        v261 += 128;
                      }
                      if ( v263 != v261 + 192 )
                        goto LABEL_436;
LABEL_435:
                      *(_QWORD *)v206 |= 1LL << v205;
                      goto LABEL_436;
                    }
                  }
                  goto LABEL_453;
                }
                v269 = v261 + 32;
                if ( v263 == v269 || !v269 )
                  goto LABEL_435;
LABEL_436:
                v268 = v205 + 1;
                if ( v205 == 3 )
                  goto LABEL_264;
                if ( (v202 & (1LL << v268)) != 0 )
                  goto LABEL_465;
                v268 = v205 + 2;
                if ( v205 == 2 )
                  goto LABEL_264;
                if ( (v202 & (1LL << v268)) != 0 )
                {
LABEL_465:
                  v205 = v268;
                }
                else
                {
                  if ( v205 == 1 || (v202 & 8) == 0 )
                    goto LABEL_264;
                  v205 = 3;
                }
              }
              v266 = *(_BYTE **)v204;
LABEL_432:
              if ( v264 != 2 )
              {
                if ( v264 != 3 )
                {
                  if ( v264 != 1 )
                    goto LABEL_435;
                  goto LABEL_463;
                }
                if ( (_BYTE)v205 == *v266 )
                  goto LABEL_453;
                v266 += 32;
              }
              if ( (_BYTE)v205 == *v266 )
                goto LABEL_453;
              v266 += 32;
LABEL_463:
              if ( (_BYTE)v205 != *v266 )
                goto LABEL_435;
              goto LABEL_453;
            }
            v311 = v62;
            v67 = sub_B8C1B0((__int64)&v62[4].m128i_i64[1]);
            v72 = v311;
            v73 = *(_QWORD *)(v67 + 16);
            if ( (v73 & 4) != 0 )
              v74 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v74 = v73 & 0xFFFFFFFFFFFFFFF8LL;
            LODWORD(v311) = v311[1].m128i_i32[2];
            if ( v74 )
            {
              v74 -= 64LL;
              v78 = sub_B7E900(v74, (__int64)v72, v68, v69, v70, v71);
              if ( !v78 )
                goto LABEL_73;
            }
            else
            {
              v78 = sub_B7E900(0, (__int64)v72, v68, v69, v70, v71);
              if ( !v78 )
                goto LABEL_101;
            }
            v314 = &v333;
LABEL_65:
            for ( j = *(_QWORD *)(v78 + 48); ; j = *(_QWORD *)(v80 + 32) )
            {
              v80 = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFF0LL);
              v81 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v80 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
              v75 = (unsigned int)(v81 - 2);
              if ( (unsigned __int8)(v81 - 2) > 4u )
                break;
              if ( (unsigned __int8)(*(_BYTE *)(v80 + 16) - 2) > 4u )
              {
                v152 = (unsigned int)(v81 - 2);
                if ( (unsigned int)v152 > 4 )
LABEL_582:
                  BUG();
                v80 = sub_F63050(v80, v72, v152, v75);
              }
            }
            if ( (_BYTE)v81 == 48 )
            {
              v143 = sub_F63270(v80, (__int64)v72, v81, v75, v76, v77);
              if ( v143 )
              {
                v144 = sub_B97300((__int64)v143);
                v145 = v144;
                if ( v144 )
                {
                  v72 = (__m128i *)sub_B94CD0;
                  v146 = v144;
                  v147 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL);
                  v148 = v147 == sub_B94CD0 ? sub_B709C0(v146) : v147(v146);
                  if ( (*(_BYTE *)(v148 + 82) & 0x40) == 0 )
                  {
                    sub_19EC960((__int64)&v319, v145, 0, v75, v76);
                    v72 = &v319;
                    sub_19EC1F0((__int64)v314, v319.m128i_i64, (unsigned int)v311, v149, v150, v151);
                  }
                }
              }
            }
            while ( 1 )
            {
              v82 = *(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v78 = v82;
              if ( !v82 )
                break;
              if ( (*(_BYTE *)(v82 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_65;
            }
LABEL_73:
            if ( v74 )
            {
              v83 = *(_QWORD *)(v74 + 104);
              v84 = *(_QWORD *)(v83 + 96);
              v85 = v84 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v84 & 1) == 0 )
              {
                v86 = (_QWORD *)(v84 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v84 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                {
                  v87 = v84 & 2;
                  if ( !(_DWORD)v87 )
                    goto LABEL_77;
                  v85 = sub_6E2500(v86, *(_QWORD *)(v74 + 104), v87, v75, v76, v77) & 0xFFFFFFFFFFFFFFFELL;
                  v84 = v85 | 1;
                  *(_QWORD *)(v83 + 96) = v85 | 1;
                }
              }
              if ( v85 )
              {
                if ( (v85 & 4) != 0 )
                {
                  v137 = (_DWORD *)(v84 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v137 )
                  {
                    v138 = *(_QWORD *)v137;
                    v139 = *(_DWORD *)(*(_QWORD *)v137 + 12LL);
                    if ( v137[2] != v139 )
                    {
                      v137[2] = v139;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v138 + 152LL))(v138, v83);
                    }
                  }
                }
              }
LABEL_77:
              v88 = *(_QWORD *)(v74 + 128);
              if ( (*(_BYTE *)(v88 + 24) & 1) != 0 )
                v89 = sub_B96980(v88);
              else
                v89 = *(_QWORD *)(v88 + 24);
              v90 = *(_QWORD *)(v74 + 104);
              v91 = *(_QWORD *)(v90 + 96);
              LOBYTE(v92) = v91;
              v93 = v91 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v91 & 1) == 0 )
              {
                v94 = (_QWORD *)(v91 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v91 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                {
                  v95 = v91 & 2;
                  if ( !(_DWORD)v95 )
                  {
                    v96 = *(_QWORD *)(v74 + 128);
                    v97 = v89 + 24LL * *(unsigned int *)(v96 + 16);
                    goto LABEL_83;
                  }
                  v93 = sub_6E2500(v94, *(_QWORD *)(v74 + 104), v95, v75, v76, v77) & 0xFFFFFFFFFFFFFFFELL;
                  v91 = v93 | 1;
                  *(_QWORD *)(v90 + 96) = v93 | 1;
                }
              }
              if ( v93 )
              {
                if ( (v93 & 4) != 0 )
                {
                  v140 = (_DWORD *)(v91 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v140 )
                  {
                    v141 = *(_QWORD *)v140;
                    v142 = *(_DWORD *)(*(_QWORD *)v140 + 12LL);
                    if ( v140[2] != v142 )
                    {
                      v140[2] = v142;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v141 + 152LL))(v141, v90);
                    }
                  }
                }
              }
              v96 = *(_QWORD *)(v74 + 128);
              v90 = *(_QWORD *)(v74 + 104);
              v95 = *(_QWORD *)(v90 + 96);
              v92 = v95;
              v97 = v89 + 24LL * *(unsigned int *)(v96 + 16);
              v98 = v95 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v95 & 1) != 0 || (v94 = (_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCLL), (v95 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
              {
                if ( v98 )
                {
LABEL_85:
                  if ( (v98 & 4) != 0 )
                  {
                    v95 &= 0xFFFFFFFFFFFFFFF8LL;
                    if ( v95 )
                    {
                      v99 = *(_QWORD *)v95;
                      v100 = *(_DWORD *)(*(_QWORD *)v95 + 12LL);
                      if ( *(_DWORD *)(v95 + 8) != v100 )
                      {
                        *(_DWORD *)(v95 + 8) = v100;
                        v92 = v90;
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v99 + 152LL))(v99, v90);
                      }
                    }
                  }
                }
LABEL_89:
                v96 = *(_QWORD *)(v74 + 128);
LABEL_90:
                if ( (*(_BYTE *)(v96 + 24) & 1) != 0 )
                  v101 = sub_B96980(v96);
                else
                  v101 = *(_QWORD *)(v96 + 24);
                if ( v97 != v101 )
                {
                  v314 = &v333;
                  do
                  {
                    v102 = *(_QWORD *)(**(_QWORD **)(v101 + 16) & 0xFFFFFFFFFFFFFFF0LL);
                    if ( (*(_BYTE *)(v102 + 8) & 0xF) != 0 )
                      v102 = sub_F64F00(**(_QWORD **)(v101 + 16), v92, v95, v96, v76);
                    while ( 1 )
                    {
                      v103 = *(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL);
                      v95 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
                      v96 = (unsigned int)(v95 - 2);
                      if ( (unsigned __int8)(v95 - 2) > 4u )
                        break;
                      if ( (unsigned __int8)(*(_BYTE *)(v103 + 16) - 2) > 4u )
                      {
                        v153 = (unsigned int)(v95 - 2);
                        if ( (unsigned int)v153 > 4 )
                          goto LABEL_582;
                        v103 = sub_F63050(v103, v92, v153, v96);
                      }
                      v102 = *(_QWORD *)(v103 + 32);
                    }
                    if ( (_BYTE)v95 == 48 )
                    {
                      v165 = sub_F63270(v103, v92, v95, v96, v76, v77);
                      if ( v165 )
                      {
                        v166 = sub_B97300((__int64)v165);
                        v167 = v166;
                        if ( v166 )
                        {
                          v92 = (__int64)sub_B94CD0;
                          v168 = v166;
                          v169 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v166 + 32LL);
                          v170 = v169 == sub_B94CD0 ? sub_B709C0(v168) : v169(v168);
                          if ( (*(_BYTE *)(v170 + 82) & 0x40) == 0 )
                          {
                            sub_19EC960((__int64)&v319, v167, 0, v96, v76);
                            v92 = (__int64)&v319;
                            sub_19EC1F0((__int64)v314, v319.m128i_i64, (unsigned int)v311, v171, v172, v173);
                          }
                        }
                      }
                    }
                    v101 += 24;
                  }
                  while ( v97 != v101 );
                }
                goto LABEL_101;
              }
LABEL_83:
              v92 &= 2u;
              if ( !(_DWORD)v92 )
                goto LABEL_90;
              v92 = v90;
              v98 = sub_6E2500(v94, v90, v95, v96, v76, v77) & 0xFFFFFFFFFFFFFFFELL;
              v95 = v98 | 1;
              *(_QWORD *)(v90 + 96) = v98 | 1;
              if ( v98 )
                goto LABEL_85;
              goto LABEL_89;
            }
LABEL_101:
            v104 = (__m128i **)v335;
            v62 = (__m128i *)*v335;
            v66 = *(_BYTE *)(*v335 + 28) & 0x7F;
            goto LABEL_102;
          }
          v63 = 2;
        }
LABEL_207:
        v64 = 0;
        v313 = &v319;
        v311 = &v333;
        while ( 1 )
        {
          v319.m128i_i8[0] = v63;
          v182 = sub_F5EDA0((unsigned __int8 *)v313, (__int64)v62, v60);
          if ( !HIBYTE(v182) )
          {
            if ( v319.m128i_u8[0] > 3uLL )
              std::__throw_out_of_range_fmt(
                "%s: __position (which is %zu) >= _Nb (which is %zu)",
                "bitset::set",
                v319.m128i_u8[0],
                4u);
            v62 = (__m128i *)v317[0];
            v64 |= 1LL << v319.m128i_i8[0];
            goto LABEL_211;
          }
          v62 = (__m128i *)v317[0];
          v184 = *(_DWORD *)(v317[0] + 24LL);
          *(__int16 *)((char *)v333.m128i_i16 + 1) = v182;
          v185 = (__m128i *)v330;
          v333.m128i_i8[0] = v319.m128i_i8[0];
          v333.m128i_i8[3] = 6;
          v333.m128i_i64[1] = 0;
          v334.m128i_i32[0] = v184;
          v334.m128i_i64[1] = 0;
          if ( !v330 )
          {
            v185 = (__m128i *)operator new(0x30u);
            v196 = (void **)v330;
            v188 = v185 + 1;
            v185->m128i_i64[1] = 0x100000000LL;
            v195 = v311;
            v185->m128i_i64[0] = (__int64)v185[1].m128i_i64;
            v330 = v185;
            if ( !v196 )
              goto LABEL_237;
            v197 = *v196;
            if ( *v196 != v196 + 2 )
            {
              v314 = (__m128i *)v196;
              free(v197);
              v196 = (void **)v314;
            }
            operator delete(v196, 0x30u);
            v185 = (__m128i *)v330;
            v195 = v311;
            v198 = *((unsigned int *)v330 + 2);
            v186 = *(__m128i **)v330;
            v194 = v198 + 1;
            v188 = (__m128i *)(*(_QWORD *)v330 + 32 * v198);
            if ( v194 <= *((unsigned int *)v330 + 3) )
              goto LABEL_237;
LABEL_245:
            v199 = v195;
            v314 = v186;
            v200 = v185 + 1;
            if ( v186 > v199 || v188 <= v199 )
            {
              v314 = v185;
              sub_2237220(v185, v200, v194, 32);
              v185 = v314;
              v195 = v311;
              v188 = (__m128i *)(v314->m128i_i64[0] + 32LL * v314->m128i_u32[2]);
            }
            else
            {
              v315 = v185;
              sub_2237220(v185, v200, v194, 32);
              v185 = v315;
              v195 = (__m128i *)(v315->m128i_i64[0] + (char *)v311 - (char *)v314);
              v188 = (__m128i *)(v315->m128i_i64[0] + 32LL * v315->m128i_u32[2]);
            }
            goto LABEL_237;
          }
          v186 = *(__m128i **)v330;
          v187 = 32LL * *((unsigned int *)v330 + 2);
          v188 = (__m128i *)(*(_QWORD *)v330 + v187);
          v189 = v187 >> 5;
          v190 = v187 >> 7;
          if ( v190 )
          {
            if ( v319.m128i_i8[0] == v186->m128i_i8[0] )
            {
              v191 = *(__m128i **)v330;
            }
            else
            {
              if ( v319.m128i_i8[0] == v186[2].m128i_i8[0] )
              {
                if ( v188 != &v186[2] && v186 != (__m128i *)-32LL )
                  goto LABEL_211;
                goto LABEL_236;
              }
              v191 = v186 + 4;
              if ( v186[4].m128i_i8[0] != v319.m128i_i8[0] )
              {
                v192 = *(__m128i **)v330;
                v191 = v186 + 6;
                v193 = &v186[8 * v190];
                if ( v319.m128i_i8[0] != v186[6].m128i_i8[0] )
                {
                  while ( 1 )
                  {
                    v191 = v192 + 8;
                    if ( v193 == &v192[8] )
                    {
                      v189 = ((char *)v188 - (char *)v191) >> 5;
                      goto LABEL_233;
                    }
                    if ( v319.m128i_i8[0] == v192[8].m128i_i8[0] )
                      goto LABEL_239;
                    if ( v319.m128i_i8[0] == v192[10].m128i_i8[0] )
                    {
                      if ( v188 != &v192[10] )
                        goto LABEL_211;
                      goto LABEL_236;
                    }
                    if ( v319.m128i_i8[0] == v192[12].m128i_i8[0] )
                      break;
                    if ( v319.m128i_i8[0] == v192[14].m128i_i8[0] )
                    {
                      v191 = v192 + 14;
                      goto LABEL_239;
                    }
                    v192 += 8;
                  }
                  if ( &v192[12] != v188 )
                    goto LABEL_211;
                  goto LABEL_236;
                }
              }
            }
            goto LABEL_239;
          }
          v191 = *(__m128i **)v330;
LABEL_233:
          if ( v189 == 2 )
            goto LABEL_254;
          if ( v189 != 3 )
          {
            if ( v189 != 1 )
              goto LABEL_236;
LABEL_256:
            if ( v319.m128i_i8[0] != v191->m128i_i8[0] )
              goto LABEL_236;
            goto LABEL_239;
          }
          if ( v319.m128i_i8[0] != v191->m128i_i8[0] )
            break;
LABEL_239:
          if ( v191 != v188 )
            goto LABEL_211;
LABEL_236:
          v194 = *((unsigned int *)v330 + 2) + 1LL;
          v195 = v311;
          if ( v194 > *((unsigned int *)v330 + 3) )
            goto LABEL_245;
LABEL_237:
          *v188 = _mm_loadu_si128(v195);
          v188[1] = _mm_loadu_si128(v195 + 1);
          v62 = (__m128i *)v317[0];
          ++v185->m128i_i32[2];
LABEL_211:
          v183 = v63 + 1;
          if ( v63 == 3 )
            goto LABEL_59;
          if ( (v61 & (1LL << v183)) == 0 )
          {
            v183 = v63 + 2;
            if ( v63 == 2 )
              goto LABEL_59;
            if ( (v61 & (1LL << v183)) == 0 )
            {
              if ( v63 == 1 || (v61 & 8) == 0 )
                goto LABEL_59;
              v183 = 3;
            }
          }
          v63 = v183;
          v60 = v318;
        }
        v191 += 2;
LABEL_254:
        if ( v319.m128i_i8[0] != v191->m128i_i8[0] )
        {
          v191 += 2;
          goto LABEL_256;
        }
        goto LABEL_239;
      }
    }
    if ( (v318 & 1) != 0 )
    {
      v275 = 0;
    }
    else
    {
      if ( (v318 & 2) == 0 )
      {
        if ( (v318 & 4) != 0 )
        {
          v176 = 2;
          v177 = 2;
          goto LABEL_197;
        }
        if ( (v318 & 8) != 0 )
        {
          v176 = 3;
          v177 = 3;
LABEL_197:
          LOBYTE(v316) = v176;
          if ( v177 != 3 )
          {
            v310 = (unsigned __int64 *)&v326;
            if ( (v318 & 8) == 0 )
              goto LABEL_55;
          }
        }
LABEL_179:
        v310 = (unsigned __int64 *)&v326;
        goto LABEL_55;
      }
      v275 = 1;
    }
    LOBYTE(v316) = v275;
    v276 = sub_B8BF30((__int64)v23);
    if ( v276 )
    {
      if ( sub_19EA510(v276, (__int64)v56, v277, v278) )
        goto LABEL_179;
    }
    else
    {
      if ( (*((_BYTE *)v23 + 28) & 0x7F) != 8 || (v154 = (_QWORD *)v23[12]) == nullptr )
      {
LABEL_489:
        v279 = (*(__int64 (__fastcall **)(__int64 *))(*v23 + 16))(v23);
        sub_168B9F0((__int64)&v333, (__int64 *)(v59 + 8), v279, 0x1C4Du, 0);
        v280 = *((_BYTE *)v23 + 28) & 0x7F;
        if ( v280 == 8 )
        {
          v284 = 4;
          goto LABEL_498;
        }
        if ( (unsigned int)v280 - 35 <= 3 )
        {
          if ( v280 == 38 )
          {
            v284 = 1;
            goto LABEL_498;
          }
          if ( v280 == 36 )
          {
            v284 = 2;
            goto LABEL_498;
          }
          v281 = *(_QWORD *)(sub_B8C1B0((__int64)(v23 + 9)) + 16);
          if ( (v281 & 4) != 0 )
            v282 = *(_QWORD *)(v281 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v282 = v281 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v282 )
            BUG();
          v283 = *(_QWORD *)(v282 + 64);
          if ( v283 )
          {
            v284 = 3;
            if ( (*(_BYTE *)(v283 + 10) & 0x20) != 0 )
              goto LABEL_498;
          }
        }
        v284 = 0;
LABEL_498:
        v319.m128i_i32[0] = v284;
        v285 = sub_19ED540((__int64)&v333, v319.m128i_i32);
        v286 = sub_F5ED10((char *)&v316);
        v288 = v286;
        v289 = v287;
        if ( *(_BYTE *)(v285 + 120) )
        {
          sub_AEC220((unsigned __int8 **)(v285 + 32), v286, v287);
          v310 = (unsigned __int64 *)&v326;
        }
        else
        {
          v258 = *(_BYTE *)(v285 + 132) == 0;
          v310 = (unsigned __int64 *)&v326;
          if ( !v258 )
          {
            v290 = (unsigned __int64 *)sub_168B9E0((_QWORD *)v285);
            v294 = *(_QWORD **)(v285 + 16);
            if ( v294 )
            {
              v295 = *v294;
              v310 = v290;
              v294 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v295 + 32))(v294);
              v290 = v310;
            }
            v326 = v294;
            v310 = (unsigned __int64 *)&v326;
            v296 = sub_1587BC0((__int64)v290, (__int64 *)&v326, (__int64)v290, v291, v292, v293);
            sub_AEC220((unsigned __int8 **)(*v296 + 32LL * *(unsigned int *)(v285 + 128) + 8), v288, v289);
          }
        }
        sub_15F7200(&v333);
        goto LABEL_55;
      }
      v155 = *v154 & 0xFFFFFFFFFFFFFFF0LL;
      v156 = *(_QWORD *)v155;
      if ( *(_BYTE *)(*(_QWORD *)v155 + 16LL) != 26 )
        v156 = sub_F63050(v156, v56, v277, v278);
      if ( !(unsigned int)sub_F63060(v156) )
        goto LABEL_179;
      if ( (*((_BYTE *)v23 + 29) & 1) != 0 )
      {
        v161 = sub_B8C3D0((__int64)v23, (__int64)v56, v157, v158, v159, v160);
        v162 = (__int64 *)*v161;
        v163 = *v161 + 8LL * *((unsigned int *)v161 + 2);
        if ( *v161 >= v163 )
        {
          if ( v162 != (__int64 *)v163 )
          {
            if ( *(_WORD *)(*(_QWORD *)v163 + 36LL) == 286 )
              goto LABEL_179;
            v304 = (__int64 *)(v163 + 8);
            while ( v162 != v304 )
            {
              v305 = *v304++;
              if ( *(_WORD *)(v305 + 36) == 286 )
                goto LABEL_179;
            }
          }
        }
        else
        {
          v164 = *v161;
          while ( *(_WORD *)(*(_QWORD *)v164 + 36LL) != 286 )
          {
            v164 += 8LL;
            if ( v163 == v164 )
              goto LABEL_488;
          }
          if ( v163 != v164 )
            goto LABEL_179;
        }
      }
    }
LABEL_488:
    v59 = v321;
    goto LABEL_489;
  }
LABEL_47:
  v53 = 2LL * v325;
  if ( (_DWORD)v324 )
  {
    v213 = &v323[v53];
    if ( &v323[v53] != v323 )
    {
      if ( *v323 != -4096 && *v323 != -8192 )
      {
        v214 = v323;
        goto LABEL_277;
      }
      v232 = v323 + 2;
      while ( 1 )
      {
        v214 = v232;
        if ( v213 == v232 )
          break;
        v233 = *v232;
        v232 += 2;
        if ( v233 != -4096 && v233 != -8192 )
        {
          while ( 1 )
          {
LABEL_277:
            v215 = (_QWORD *)(v214[1] & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v214[1] & 4) != 0 )
            {
              if ( v215 )
              {
                v234 = (void **)v215[1];
                if ( v234 )
                {
                  if ( *v234 != v234 + 2 )
                    free(*v234);
                  operator delete(v234, 0x30u);
                }
                operator delete(v215, 0x10u);
              }
            }
            else if ( v215 )
            {
              v216 = (_QWORD *)v215[5];
              if ( v216 != v215 + 7 )
                free(v216);
              v217 = (void **)v215[4];
              if ( v217 )
              {
                if ( *v217 != v217 + 2 )
                  free(*v217);
                operator delete(v217, 0x30u);
              }
              v218 = (_QWORD *)v215[2];
              if ( v215 + 4 != v218 )
                free(v218);
              operator delete(v215, 0x38u);
            }
            if ( v214 + 2 == v213 )
              return operator delete(v323, 16LL * v325, 8);
            v219 = v214[2];
            if ( v219 == -4096 || v219 == -8192 )
            {
              v220 = v214 + 4;
              while ( 1 )
              {
                v214 = v220;
                if ( v220 == v213 )
                  return operator delete(v323, 16LL * v325, 8);
                while ( 1 )
                {
                  v221 = *v220;
                  v220 += 2;
                  if ( v221 == -4096 )
                    break;
                  if ( v221 != -8192 )
                    goto LABEL_277;
                  v214 = v220;
                  if ( v220 == v213 )
                    return operator delete(v323, 16LL * v325, 8);
                }
              }
            }
            v214 += 2;
          }
        }
      }
    }
  }
  return operator delete(v323, v53 * 8, 8);
}
