__int64 __fastcall sub_834F00(
        unsigned int a1,
        unsigned int a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7,
        unsigned int *a8,
        __int64 a9,
        unsigned int *a10,
        const __m128i a11,
        unsigned __int16 *a12,
        __int64 a13)
{
  int v13; // ebx
  __int64 v14; // r14
  __int64 v15; // r13
  char *v16; // r8
  unsigned __int16 *v17; // r11
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __m128i si128; // xmm0
  __int64 v20; // rsi
  __int64 v21; // rdi
  int v22; // eax
  char v23; // al
  __int16 v24; // dx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rbx
  size_t *p_n; // rdx
  unsigned __int64 *v29; // rcx
  int v30; // esi
  unsigned __int64 *v31; // rbp
  unsigned __int16 *v32; // r15
  __int16 v33; // dx
  int *v34; // rbx
  int v35; // r10d
  char *v36; // r12
  _BOOL4 v37; // r13d
  _QWORD *v38; // r15
  unsigned int v39; // edx
  __int64 v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rcx
  char *v43; // rax
  int v44; // esi
  unsigned int v45; // r12d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  char v51; // dl
  int v52; // r9d
  int v53; // r13d
  int v54; // r11d
  unsigned int *v55; // rcx
  _BYTE *v56; // rax
  int v57; // r11d
  unsigned int v58; // eax
  char *v59; // rax
  _BYTE *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  unsigned int *v64; // rdi
  _BYTE *v65; // rax
  unsigned int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned int v69; // eax
  unsigned int v70; // eax
  char v71; // dl
  int v72; // ecx
  char *v73; // rdx
  void *v74; // rax
  unsigned int v75; // edx
  int v76; // eax
  unsigned int v77; // edi
  int v78; // esi
  int v79; // edx
  _BYTE *v80; // rax
  _BYTE *v81; // rdx
  int v82; // edx
  _BYTE *v83; // rax
  unsigned int *v84; // rax
  _BYTE *v85; // rdx
  int v86; // esi
  unsigned __int8 v87; // dl
  int v88; // eax
  _BYTE *v89; // rax
  _BYTE *v90; // rax
  _BYTE *v91; // rax
  _OWORD *v92; // rax
  void *v93; // rax
  unsigned int v94; // esi
  int v95; // r11d
  unsigned __int8 v96; // al
  char v97; // cl
  int v98; // esi
  int v99; // r11d
  __int64 v100; // r10
  char v101; // bl
  char v102; // cl
  __int64 v103; // r8
  size_t v104; // rdx
  void *v105; // rax
  char v106; // cl
  __int64 v107; // r8
  __int64 v108; // r10
  char *v109; // rdi
  int v110; // r8d
  size_t v111; // rbx
  char *v112; // rsi
  bool v113; // zf
  int v114; // ecx
  char *v115; // r11
  char *v116; // r11
  _BYTE *v117; // rdx
  int v118; // eax
  char *v119; // rdi
  unsigned __int16 v120; // cx
  int v121; // ebx
  unsigned __int8 *v122; // rsi
  __int64 v123; // rax
  bool v124; // cc
  int v125; // ebx
  int v126; // esi
  int v127; // eax
  char v128; // al
  _BYTE *v129; // rdx
  unsigned __int8 v130; // bl
  unsigned __int8 *v131; // rax
  int v132; // eax
  int v133; // edx
  unsigned int v134; // edi
  int v135; // edx
  _BYTE *v136; // rcx
  unsigned __int8 v137; // bl
  char v138; // bl
  int v139; // r8d
  int v140; // edi
  char v141; // si
  char *v142; // rcx
  char *v143; // rdx
  _BYTE *v144; // rdx
  char *v145; // rcx
  _BYTE *v146; // rdx
  __int64 v147; // rax
  __int64 v148; // rdx
  unsigned __int64 v149; // rax
  int v150; // eax
  _BYTE *v151; // rax
  int v152; // esi
  unsigned int *v153; // rax
  __int64 v154; // rdx
  unsigned int *v155; // rbx
  __int64 v156; // rax
  unsigned int v157; // r13d
  __int64 v158; // rax
  int v159; // edx
  int v160; // eax
  _BYTE *v161; // rdx
  int v162; // ecx
  _BYTE *v163; // rax
  _BYTE *v164; // rax
  _BYTE *v165; // rax
  unsigned int v166; // edi
  _BYTE *v167; // rsi
  int v168; // eax
  unsigned int *v169; // rax
  unsigned int *v170; // rax
  unsigned int v171; // edi
  unsigned __int64 v172; // rax
  unsigned int v173; // edx
  int v174; // eax
  _BYTE *v175; // rdx
  int v176; // edi
  __int64 v177; // rax
  char *v178; // rdx
  __int64 v179; // rax
  char v180; // al
  unsigned int v181; // esi
  int v182; // eax
  _BYTE *v183; // rax
  unsigned int v184; // eax
  int v185; // edx
  int v186; // ecx
  __int64 v187; // rax
  unsigned int v188; // eax
  _BYTE *v189; // rax
  char *v190; // rdi
  _BYTE *v191; // rcx
  _BYTE *v192; // rax
  _BYTE *v193; // rax
  __int64 v194; // rdx
  unsigned __int64 v195; // rax
  unsigned __int64 v196; // r13
  __int64 v197; // rax
  int v198; // r8d
  unsigned int v199; // edx
  unsigned int v200; // eax
  _BYTE *v201; // rax
  __int64 v202; // rax
  __int64 v203; // rdx
  unsigned __int8 v204; // di
  int v205; // edx
  _BYTE *v206; // rbx
  char *v207; // rdx
  char *v208; // rcx
  char v209; // al
  char *v210; // rcx
  __int64 v211; // rax
  unsigned __int8 v212; // al
  size_t v213; // rdx
  __int16 v214; // bx
  _BYTE *v215; // rax
  int *v216; // r15
  int v217; // edx
  char *v218; // rax
  __int16 v219; // bx
  int v220; // edi
  __int16 v221; // dx
  unsigned int v222; // ebx
  char v223; // dl
  __int16 v224; // dx
  char *v225; // rax
  _QWORD *v226; // rsi
  unsigned __int16 *v227; // r11
  int v228; // edi
  _DWORD *v229; // r15
  _QWORD *v230; // r13
  unsigned int v231; // ebx
  unsigned __int64 v232; // rcx
  void *v233; // rax
  void *v234; // rcx
  int v235; // r13d
  int v236; // eax
  __int64 v237; // rax
  __int64 v238; // rax
  _QWORD *v239; // rdi
  __int16 *v240; // rdx
  unsigned __int64 v241; // rsi
  __int16 v242; // cx
  __int64 v243; // rax
  char v244; // al
  char *v245; // rdi
  int v246; // ebp
  int v247; // ebx
  void *v248; // rsi
  char v249; // si
  char *v250; // rdi
  __int64 v251; // rcx
  __int64 v252; // rsi
  _BYTE *v253; // rdx
  unsigned __int64 v254; // rbx
  __int64 v255; // rsi
  unsigned __int8 *v256; // rsi
  unsigned __int8 *v257; // rcx
  char v258; // di
  __int16 v259; // bx
  unsigned int i; // esi
  _BYTE *v261; // rcx
  __int64 v262; // rax
  __int64 v263; // rax
  char v264; // dl
  char v265; // al
  char v266; // al
  char v267; // di
  int v268; // r12d
  char *v269; // rax
  const void *v270; // r13
  char v271; // bp
  __int16 v272; // kr00_2
  _BYTE *v273; // rdi
  char *v274; // r14
  __int64 v275; // rax
  __int64 v276; // rax
  _BYTE *v277; // rcx
  _BYTE *v278; // rax
  char v279; // al
  const void *v280; // r13
  size_t v281; // rbp
  int v282; // r12d
  int v283; // ebx
  char *v284; // rcx
  __int16 v285; // si
  _BYTE *v286; // rax
  int v287; // eax
  __int64 v288; // rcx
  _BYTE *v289; // rdx
  char v290; // al
  char v291; // cl
  unsigned __int16 *v292; // r11
  __int16 v293; // r8
  _BYTE *v294; // r9
  _DWORD *v295; // r15
  __int16 v296; // si
  unsigned __int16 v297; // di
  __int16 v298; // r10
  int v299; // ebx
  unsigned int v300; // edi
  unsigned int v301; // ebx
  _BYTE *v302; // rdx
  _BYTE *v303; // rdx
  char *v304; // [rsp+0h] [rbp-1E8h]
  int v305; // [rsp+0h] [rbp-1E8h]
  unsigned __int16 *v306; // [rsp+8h] [rbp-1E0h]
  char *v307; // [rsp+8h] [rbp-1E0h]
  void *src[2]; // [rsp+10h] [rbp-1D8h] BYREF
  unsigned int *v309; // [rsp+20h] [rbp-1C8h]
  unsigned int v310; // [rsp+2Ch] [rbp-1BCh]
  unsigned int v311; // [rsp+30h] [rbp-1B8h]
  int v312; // [rsp+34h] [rbp-1B4h]
  _DWORD *v313; // [rsp+38h] [rbp-1B0h]
  __int64 *v314; // [rsp+40h] [rbp-1A8h]
  int v315; // [rsp+48h] [rbp-1A0h]
  unsigned int v316; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v317; // [rsp+50h] [rbp-198h]
  int v318; // [rsp+54h] [rbp-194h]
  size_t *v319; // [rsp+58h] [rbp-190h]
  unsigned int **v320; // [rsp+60h] [rbp-188h]
  char *v321; // [rsp+68h] [rbp-180h]
  unsigned int v322; // [rsp+70h] [rbp-178h]
  int v323; // [rsp+74h] [rbp-174h]
  int v324; // [rsp+78h] [rbp-170h]
  int v325; // [rsp+7Ch] [rbp-16Ch]
  unsigned __int64 v326; // [rsp+80h] [rbp-168h]
  _QWORD *v327; // [rsp+88h] [rbp-160h]
  int v328; // [rsp+90h] [rbp-158h]
  int v329; // [rsp+94h] [rbp-154h]
  unsigned int v330; // [rsp+98h] [rbp-150h]
  int v331; // [rsp+9Ch] [rbp-14Ch]
  unsigned __int64 *v332; // [rsp+A0h] [rbp-148h]
  unsigned int v333; // [rsp+A8h] [rbp-140h]
  int v334; // [rsp+ACh] [rbp-13Ch]
  _BYTE *v335; // [rsp+B0h] [rbp-138h]
  unsigned __int8 v336; // [rsp+BAh] [rbp-12Eh]
  bool v337; // [rsp+BBh] [rbp-12Dh]
  int v338; // [rsp+BCh] [rbp-12Ch]
  _QWORD *v339; // [rsp+C0h] [rbp-128h]
  __int64 v340; // [rsp+C8h] [rbp-120h]
  unsigned int v341; // [rsp+D0h] [rbp-118h]
  unsigned int v342; // [rsp+D4h] [rbp-114h]
  int v343; // [rsp+D8h] [rbp-110h]
  int v344; // [rsp+DCh] [rbp-10Ch]
  unsigned __int64 *v345; // [rsp+E0h] [rbp-108h]
  char *v346; // [rsp+E8h] [rbp-100h]
  bool v347; // [rsp+F2h] [rbp-F6h]
  bool v348; // [rsp+F3h] [rbp-F5h]
  unsigned int v349; // [rsp+F4h] [rbp-F4h]
  __int64 v350; // [rsp+F8h] [rbp-F0h]
  __int64 v351; // [rsp+100h] [rbp-E8h]
  char *v352; // [rsp+108h] [rbp-E0h]
  __int64 v353; // [rsp+110h] [rbp-D8h]
  _QWORD *v354; // [rsp+118h] [rbp-D0h]
  _DWORD *v355; // [rsp+120h] [rbp-C8h]
  unsigned int *v356; // [rsp+128h] [rbp-C0h]
  unsigned int *v357; // [rsp+130h] [rbp-B8h]
  int v358; // [rsp+138h] [rbp-B0h]
  bool v359; // [rsp+13Fh] [rbp-A9h]
  int v360; // [rsp+144h] [rbp-A4h] BYREF
  int v361; // [rsp+148h] [rbp-A0h] BYREF
  unsigned int v362; // [rsp+14Ch] [rbp-9Ch] BYREF
  unsigned __int64 v363; // [rsp+150h] [rbp-98h] BYREF
  unsigned int *v364; // [rsp+158h] [rbp-90h] BYREF
  size_t n; // [rsp+160h] [rbp-88h] BYREF
  void *dest; // [rsp+168h] [rbp-80h] BYREF
  unsigned __int8 *v367; // [rsp+170h] [rbp-78h] BYREF
  unsigned __int64 v368; // [rsp+178h] [rbp-70h] BYREF
  __int64 v369; // [rsp+180h] [rbp-68h] BYREF
  int v370; // [rsp+188h] [rbp-60h]
  __m128i v371; // [rsp+190h] [rbp-58h] BYREF
  unsigned __int64 v372; // [rsp+1A8h] [rbp-40h]

  v13 = a6;
  v339 = a3;
  v333 = a1;
  v14 = (__int64)a12;
  v355 = a7;
  v317 = a2;
  v356 = a8;
  v354 = a4;
  v357 = a10;
  v313 = a5;
  v314 = (__int64 *)a11.m128i_i64[1];
  v372 = __readfsqword(0x28u);
  v15 = a13;
  v16 = (char *)*a3;
  v17 = (unsigned __int16 *)*a4;
  v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a12 + 24LL);
  si128 = _mm_unpacklo_epi64(_mm_loadl_epi64(&a11), (__m128i)*a3);
  if ( v18 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)a12 + 32LL);
    v21 = a12[106];
    v304 = (char *)*a3;
    v306 = (unsigned __int16 *)*a4;
    *(__m128i *)src = si128;
    v22 = v18(v21, v20);
    v16 = v304;
    v17 = v306;
    si128 = _mm_load_si128((const __m128i *)src);
    if ( v22 )
    {
      *v313 = 133;
      *(_QWORD *)(v14 + 168) = 0;
      return 0;
    }
  }
  v371 = si128;
  v363 = (unsigned int)(v13 + 6);
  v23 = *v16;
  v347 = v23 == -123 || (unsigned __int8)(v23 + 126) <= 1u;
  if ( v347 )
  {
    v44 = *(_DWORD *)v17;
    v26 = *(v17 - 2);
    v17 += 4;
    v338 = v44;
    v348 = v44 == 0xFFFF;
  }
  else if ( v23 == -117 )
  {
    v24 = *(_WORD *)(v16 + 3);
    v348 = 0;
    v338 = 0;
    v369 = (__int64)v314;
    v25 = *(unsigned __int16 *)(v14 + 214);
    v314 = &v369;
    v370 = (unsigned __int16)__ROL2__(v24, 8) | (v25 << 16);
    v26 = 0;
  }
  else
  {
    v348 = 0;
    v26 = 0;
    v338 = 0;
  }
  v27 = (unsigned int)(v13 + 3);
  p_n = nullptr;
  v29 = &v363;
  *(_WORD *)(v16 + 1) = 0;
  if ( !v15 )
    v29 = nullptr;
  v307 = &v16[v27];
  v30 = 1;
  v340 = v27;
  v320 = &v364;
  if ( v15 )
    p_n = &n;
  v31 = v29;
  v342 = -1;
  v341 = -1;
  v319 = p_n;
  v344 = 0;
  v343 = 0;
  v352 = v16;
  v335 = v16;
  v327 = (_QWORD *)v15;
  v353 = a9;
  v32 = v17;
  v359 = v15 != 0;
  v337 = v15 == 0;
  while ( 2 )
  {
    if ( v26 && v347 )
    {
      if ( v26 == v338 || v348 )
      {
        *v307 = 126;
        *(_WORD *)(v307 + 1) = __ROL2__(v26, 8);
        v307 += 3;
        v363 += 3LL;
      }
      else
      {
        v33 = v338;
        *v307 = 127;
        *(_WORD *)(v307 + 3) = __ROL2__(v26, 8);
        *(_WORD *)(v307 + 1) = __ROL2__(v33, 8);
        v363 += 5LL;
        v307 += 5;
      }
    }
    v34 = (int *)v32;
    v35 = 0;
    v36 = v307;
    v364 = (unsigned int *)v32;
    v37 = 0;
    v38 = v327;
    v311 = v333;
    dest = v307;
    n = 0;
    v39 = *v34;
    v330 = (v333 & 0x40000) >> 18;
    v331 = v330 ^ 1;
    v40 = v39;
    v305 = -1;
    LOWORD(v40) = 0;
    v334 = v30;
    v329 = (v333 >> 3) & 1;
    v312 = 0;
    v328 = 0;
    src[0] = nullptr;
    v326 = 0;
    v322 = -1;
    v325 = -1;
    v316 = -1;
    v310 = -1;
    v323 = 0;
    v324 = 0;
    v318 = 0;
    v315 = 0;
    if ( v327 )
    {
LABEL_17:
      v41 = *(_QWORD *)(v14 + 40);
      v42 = *(_QWORD *)(v14 + 80);
      v43 = (char *)dest;
      if ( (unsigned __int64)dest >= v41 + v42 )
      {
        *v313 = 152;
        *(_QWORD *)(v14 + 168) = 0;
        return 0;
      }
      if ( v41 + v42 - 100 < (unsigned __int64)dest )
      {
        *v313 = 186;
        *(_QWORD *)(v14 + 168) = 0;
        return 0;
      }
      if ( dest < v36 )
      {
        dest = v36;
        v43 = v36;
      }
      if ( (unsigned int)(v40 + 2143813632) > 0xB0000 )
      {
        v47 = v43 - v307;
        if ( 2147483627 - *v31 >= v47 )
        {
          v48 = v47 + *v31;
          *v31 = v48;
          if ( v48 <= 0x10000 )
          {
            v36 = v307;
            dest = v307;
            src[0] = v307;
            goto LABEL_36;
          }
        }
        *v313 = 120;
        *(_QWORD *)(v14 + 168) = 0;
        return 0;
      }
      goto LABEL_22;
    }
    while ( 1 )
    {
      if ( (unsigned int)(v40 + 2143813632) <= 0xB0000 )
      {
        if ( (_DWORD)v40 != -2143420416 )
        {
          if ( (unsigned int)v40 <= 0x803E0000 )
          {
            if ( (_DWORD)v40 != -2143617024 )
            {
              if ( (unsigned int)v40 <= 0x803B0000 )
              {
                if ( (v39 & 0xFFFE0000) != 0x80380000 )
                {
                  if ( (_DWORD)v40 != -2143682560 )
                    goto LABEL_28;
LABEL_512:
                  v37 = 0;
                  a6 = 0x10000;
                  v95 = 0;
                  LODWORD(v309) = 2;
                  v310 = v322;
                  LODWORD(v321) = 0;
                  v318 = v324;
                  v315 = v323;
                  v316 = v325;
                  LODWORD(v332) = v331;
                  goto LABEL_171;
                }
                if ( (_DWORD)v40 != -2143748096 )
                {
                  v95 = 0;
                  v37 = 0;
                  v316 = v325;
                  v315 = v323;
                  v318 = v324;
                  v310 = v322;
                  v43 = v36;
                  goto LABEL_404;
                }
LABEL_643:
                v37 = 0;
                a6 = 0x10000;
                v95 = 0;
                LODWORD(v309) = 2;
                v310 = v322;
                LODWORD(v321) = 1;
                v318 = v324;
                LODWORD(v332) = 0;
                v315 = v323;
                v316 = v325;
                goto LABEL_171;
              }
              if ( (v39 & 0xFFFE0000) != 0x803C0000 )
                goto LABEL_28;
              if ( !v37 )
              {
                if ( (_DWORD)v40 == -2143551488 )
                  goto LABEL_522;
                goto LABEL_395;
              }
              v43 = v36;
LABEL_400:
              if ( (_DWORD)v40 == -2143551488 )
              {
                v36 = v43;
                v37 = 1;
                goto LABEL_522;
              }
              if ( (unsigned int)v40 <= 0x803C0000 )
              {
LABEL_402:
                v37 = 1;
LABEL_403:
                v95 = 1;
LABEL_404:
                v36 = v43;
                LODWORD(v309) = 2;
                a6 = 0x10000;
                LODWORD(v321) = 0;
                LODWORD(v332) = v330;
                goto LABEL_171;
              }
              v36 = v43;
              v37 = 1;
LABEL_395:
              v43 = v36;
              v95 = 1;
              a6 = 0x10000;
              if ( (_DWORD)v40 == -2143485952 )
              {
                LODWORD(v309) = 2;
                a6 = 0x10000;
                v95 = 1;
                LODWORD(v321) = 0;
                LODWORD(v332) = v331;
                goto LABEL_171;
              }
              goto LABEL_497;
            }
            v43 = v36;
LABEL_493:
            if ( !v37 )
              goto LABEL_403;
            goto LABEL_402;
          }
          if ( (_DWORD)v40 != -2143223808 )
          {
            if ( (unsigned int)v40 <= 0x80410000 )
            {
              v95 = (v40 + 2143354880) & 0xFFFEFFFF;
              if ( v95 )
                goto LABEL_28;
LABEL_169:
              v310 = v322;
              v318 = v324;
              v315 = v323;
              v316 = v325;
              if ( (_DWORD)v40 == -2143354880 )
              {
                LODWORD(v332) = 0;
                v37 = 0;
                a6 = 1;
                LODWORD(v309) = 2;
                LODWORD(v321) = 1;
              }
              else
              {
                LODWORD(v309) = 2;
                v37 = 0;
                a6 = 1;
                LODWORD(v321) = 0;
                LODWORD(v332) = v331;
              }
LABEL_171:
              v367 = (unsigned __int8 *)src[0];
              v96 = *(_BYTE *)src[0];
              if ( *(_BYTE *)src[0] > 0x20u )
              {
                v97 = v96 - 110;
                if ( (unsigned __int8)(v96 - 110) <= 0x1Fu )
                {
                  if ( ((1LL << v97) & 0xAFFC0000) == 0 )
                  {
                    if ( ((1LL << v97) & 0xF3) != 0 )
                    {
                      if ( !(_DWORD)a6 )
                      {
                        v126 = *(_DWORD *)(v14 + 308);
                        dest = src[0];
                        goto LABEL_213;
                      }
                      if ( (_DWORD)a6 == 1 && v95 == 1 )
                        goto LABEL_212;
                      v191 = dest;
                      if ( !v95 && (_DWORD)a6 == 0x10000 )
                      {
                        dest = (char *)dest + 1;
                        *v191 = (_BYTE)v332 + 98;
                        goto LABEL_203;
                      }
                      if ( v95 == 1 && (_DWORD)a6 == 0x10000 )
                      {
                        v249 = (_BYTE)v332 + 100;
                      }
                      else
                      {
                        if ( (_DWORD)a6 != 1 || v95 )
                        {
                          dest = (char *)dest + 1;
                          *v191 = (_BYTE)v332 + 104;
                          *(_BYTE *)dest = BYTE1(v95);
                          *((_BYTE *)dest + 1) = v95;
                          v289 = dest;
                          dest = (char *)dest + 2;
                          if ( (_DWORD)a6 == 0x10000 )
                          {
                            v290 = 0;
                            v291 = 0;
                          }
                          else
                          {
                            v290 = a6;
                            v291 = BYTE1(a6);
                          }
                          v289[2] = v291;
                          *((_BYTE *)dest + 1) = v290;
                          dest = (char *)dest + 2;
                          goto LABEL_203;
                        }
                        v249 = (_BYTE)v332 + 102;
                      }
                      dest = (char *)dest + 1;
                      *v191 = v249;
                      goto LABEL_203;
                    }
                    if ( v96 == 118 )
                    {
                      if ( (_DWORD)a6 == 1 && v95 == 1 )
                      {
                        if ( !(_DWORD)v321 )
                          goto LABEL_212;
                        v98 = 0;
                        if ( v38 )
                          goto LABEL_180;
LABEL_709:
                        v122 = (unsigned __int8 *)src[0];
                        v121 = (int)dest;
                        goto LABEL_457;
                      }
                      if ( !v95 )
                        goto LABEL_190;
                      if ( v95 == 1 && (_DWORD)a6 == 0x10000 )
                      {
                        LODWORD(a6) = 0x10000;
                        v95 = 1;
LABEL_190:
                        v104 = n;
                        if ( v38 )
                        {
                          v100 = 8;
                          v101 = 6;
                          v102 = 0;
                          v103 = 6;
                          v345 = (_QWORD *)&byte_7;
                          v104 = 3;
                          goto LABEL_192;
                        }
                        goto LABEL_571;
                      }
                      v98 = v95;
                      if ( (_DWORD)a6 == v95 )
                      {
                        v98 = a6 - 1;
                        if ( !v38 )
                        {
                          if ( v98 <= 0 )
                          {
                            if ( !(_DWORD)v321 )
                              goto LABEL_212;
                            goto LABEL_709;
                          }
                          goto LABEL_565;
                        }
                      }
                      else if ( !v38 )
                      {
                        if ( v95 <= 0 )
                        {
                          v104 = n;
                          if ( (_DWORD)a6 != 0x10000 )
                            LODWORD(a6) = a6 - v95;
                          v95 = 0;
LABEL_571:
                          v103 = v104 + 3;
                          v101 = v104 + 3;
                          v100 = v104 + 5;
                          v102 = (unsigned __int16)(v104 + 3) >> 8;
                          v345 = (unsigned __int64 *)(v104 + 4);
                          goto LABEL_192;
                        }
LABEL_565:
                        LODWORD(v346) = v95;
                        v104 = n;
                        v349 = v35;
                        v245 = (char *)dest;
                        LODWORD(v350) = a6;
                        v345 = v31;
                        v246 = 0;
                        v247 = v98;
                        v248 = src[0];
                        do
                        {
                          memcpy(v245, v248, v104);
                          v248 = dest;
                          v104 = n;
                          ++v246;
                          v245 = (char *)dest + n;
                          dest = (char *)dest + n;
                        }
                        while ( v247 != v246 );
                        a6 = (unsigned int)v350;
                        src[0] = v248;
                        v31 = v345;
                        v35 = v349;
                        if ( (_DWORD)v350 == (_DWORD)v346 )
                          goto LABEL_203;
                        if ( (_DWORD)v350 != 0x10000 )
                          LODWORD(a6) = v350 - (_DWORD)v346;
                        v95 = 0;
                        goto LABEL_571;
                      }
LABEL_180:
                      v349 = v35;
                      LODWORD(v346) = a6;
                      LODWORD(v345) = v95;
                      if ( (unsigned int)sub_8327C0(&v368, v98, n) )
                        goto LABEL_504;
                      v99 = (int)v345;
                      a6 = (unsigned int)v346;
                      v35 = v349;
                      if ( 2147483627 - *v31 < v368 )
                        goto LABEL_504;
                      *v31 += v368;
                      if ( (_DWORD)a6 == v99 )
                        goto LABEL_203;
                      if ( (_DWORD)a6 != 0x10000 )
                        LODWORD(a6) = a6 - v99;
                      v100 = 8;
                      v101 = 6;
                      v102 = 0;
                      v95 = 0;
                      v103 = 6;
                      v104 = 3;
                      v345 = (_QWORD *)&byte_7;
LABEL_192:
                      v351 = v100;
                      LOBYTE(v358) = v102;
                      v350 = v103;
                      v349 = a6;
                      LODWORD(v346) = v95;
                      memmove((char *)src[0] + 3, src[0], v104);
                      v105 = src[0];
                      v106 = v358;
                      v107 = v350;
                      v108 = v351;
                      v109 = (char *)v345;
                      v95 = (int)v346;
                      *(_BYTE *)src[0] = -119;
                      *((_BYTE *)v105 + 1) = v106;
                      a6 = v349;
                      *((_BYTE *)v105 + 2) = v101;
                      *((_BYTE *)v105 + v107) = 122;
                      v109[(_QWORD)v105] = v106;
                      *((_BYTE *)v105 + v108) = v101;
                      v35 = -1;
                      n += 6LL;
                      dest = (char *)dest + 6;
                      v110 = (_DWORD)dest - (_DWORD)v105;
                      if ( !v95 )
                        goto LABEL_193;
                      goto LABEL_448;
                    }
                    goto LABEL_714;
                  }
                  v121 = (int)dest;
                  v190 = (char *)dest;
                  v110 = (_DWORD)dest - LODWORD(src[0]);
                  if ( (_DWORD)a6 == 1 && v95 == 1 )
                  {
                    if ( !(_DWORD)v321 )
                      goto LABEL_212;
                    if ( v96 == 0x8D )
                    {
                      if ( *((_BYTE *)src[0] + 3) != 0x97 )
                      {
LABEL_205:
                        v122 = v367;
                        v123 = *v367;
                        v124 = (unsigned __int8)v123 <= 0x5Du;
                        if ( (_BYTE)v123 != 93 )
                          goto LABEL_206;
                        goto LABEL_349;
                      }
                      LOWORD(v332) = *(_WORD *)((char *)src[0] + 1);
                      if ( *((_BYTE *)src[0] + (unsigned __int16)__ROL2__((_WORD)v332, 8)) != 121 )
                        goto LABEL_212;
                    }
                    else if ( v96 <= 0x86u )
                    {
                      v122 = v367;
                      v123 = *v367;
                      v124 = (unsigned __int8)v123 <= 0x5Du;
                      if ( (_BYTE)v123 != 93 )
                      {
LABEL_206:
                        if ( v124 )
                        {
                          if ( (_BYTE)v123 == 54 )
                            goto LABEL_211;
                          if ( (unsigned __int8)v123 > 0x36u )
                          {
                            if ( (_BYTE)v123 != 67 && (_BYTE)v123 != 80 )
                              goto LABEL_457;
                          }
                          else
                          {
                            if ( (unsigned __int8)v123 <= 0x20u )
                            {
                              if ( (unsigned __int8)v123 > 0x1Cu )
                                goto LABEL_211;
LABEL_457:
                              v125 = v121 - (_DWORD)v122;
                              if ( v125 <= 0 )
                                goto LABEL_212;
                              goto LABEL_458;
                            }
                            if ( (_BYTE)v123 != 41 )
                              goto LABEL_457;
                          }
LABEL_211:
                          v122 += byte_239F9C0[v123];
                          v125 = v121 - (_DWORD)v122;
                          v367 = v122;
                          if ( v125 <= 0 )
                            goto LABEL_212;
LABEL_458:
                          v211 = *v122;
                          if ( (unsigned int)v211 <= 0x76 && (v212 = byte_239AFE0[v211]) != 0 )
                          {
                            *v122 = v212;
                            v126 = *(_DWORD *)(v14 + 308);
                          }
                          else
                          {
                            v213 = v125;
                            LODWORD(v321) = v35;
                            v214 = v125 + 3;
                            memmove(v122 + 3, v122, v213);
                            v35 = (int)v321;
                            dest = (char *)dest + 3;
                            *v367 = -121;
                            v215 = dest;
                            dest = (char *)dest + 1;
                            *v215 = 122;
                            *(_BYTE *)dest = HIBYTE(v214);
                            *((_BYTE *)dest + 1) = v214;
                            dest = (char *)dest + 2;
                            v367[1] = HIBYTE(v214);
                            v367[2] = v214;
                            v126 = *(_DWORD *)(v14 + 308);
                          }
                          goto LABEL_213;
                        }
                        if ( (unsigned __int8)(v123 - 110) <= 1u )
                        {
                          v122 += 33;
                          v367 = v122;
                        }
                        goto LABEL_457;
                      }
LABEL_349:
                      v122 += 2 * ((unsigned __int8)(v122[3] - 15) <= 1u) + byte_239F9C0[93];
                      v367 = v122;
                      goto LABEL_457;
                    }
                    goto LABEL_203;
                  }
                  if ( v96 == 0x8D )
                  {
                    if ( *((_BYTE *)src[0] + 3) == 0x97 )
                    {
                      LOWORD(v345) = *(_WORD *)((char *)src[0] + 1);
                      if ( *((_BYTE *)src[0] + (unsigned __int16)__ROL2__((_WORD)v345, 8)) != 121 )
                        goto LABEL_212;
                    }
                  }
                  else if ( v96 <= 0x86u )
                  {
                    if ( (_DWORD)a6 != 0x10000 )
                    {
                      if ( v95 )
                      {
                        v114 = a6 - 1;
                        if ( v95 == 1 )
                        {
LABEL_586:
                          if ( v114 != 0x10000 )
                          {
                            if ( !v114 )
                              goto LABEL_203;
                            if ( v359 )
                            {
                              v115 = nullptr;
                              v345 = (unsigned __int64 *)src[0];
LABEL_197:
                              LODWORD(v332) = v35;
                              src[0] = v115;
                              if ( (unsigned int)sub_8327C0(&v368, v114, (int)n + 7) )
                                goto LABEL_504;
                              v116 = (char *)src[0];
                              v35 = (int)v332;
                              if ( 2147483633 - *v31 < v368 )
                                goto LABEL_504;
                              *v31 = *v31 + v368 - 6;
                              src[0] = v345;
                              goto LABEL_200;
                            }
                            v115 = nullptr;
                            v111 = v110;
LABEL_624:
                            v267 = (char)v332;
                            v345 = (unsigned __int64 *)v36;
                            v268 = v114;
                            v332 = v31;
                            v269 = (char *)dest;
                            LODWORD(v346) = v37;
                            v270 = src[0];
                            v349 = v35;
                            v271 = v267 - 103;
                            v350 = v14;
                            while ( 1 )
                            {
                              dest = v269 + 1;
                              *v269 = v271;
                              v273 = dest;
                              if ( v268 == 1 )
                                break;
                              dest = (char *)dest + 1;
                              *v273 = -119;
                              v274 = (char *)dest;
                              if ( v115 )
                                v272 = (_WORD)dest - (_WORD)v115;
                              else
                                v272 = 0;
                              *(_BYTE *)dest = HIBYTE(v272);
                              --v268;
                              *((_BYTE *)dest + 1) = v272;
                              dest = (char *)dest + 2;
                              memcpy(dest, v270, v111);
                              v115 = v274;
                              v269 = (char *)dest + v111;
                            }
                            v31 = v332;
                            v36 = (char *)v345;
                            v345 = (unsigned __int64 *)v115;
                            LODWORD(v332) = v349;
                            v37 = (int)v346;
                            v14 = v350;
                            memcpy(dest, src[0], v111);
                            dest = (char *)dest + v111;
                            v35 = (int)v332;
                            v116 = (char *)v345;
LABEL_200:
                            if ( v116 )
                            {
                              while ( 1 )
                              {
                                v117 = dest;
                                a6 = (__int64)dest + 1;
                                v118 = (_DWORD)dest - (_DWORD)v116 + 1;
                                v119 = (char *)dest - v118;
                                v120 = __ROL2__(*(_WORD *)(v119 + 1), 8);
                                if ( !*(_WORD *)(v119 + 1) )
                                  break;
                                dest = (char *)dest + 1;
                                *v117 = 122;
                                *(_BYTE *)dest = BYTE1(v118);
                                *((_BYTE *)dest + 1) = v118;
                                dest = (char *)dest + 2;
                                *(_WORD *)(v119 + 1) = __ROL2__(v118, 8);
                                v116 -= v120;
                                if ( !v116 )
                                  goto LABEL_203;
                              }
                              dest = (char *)dest + 1;
                              *v117 = 122;
                              *(_BYTE *)dest = BYTE1(v118);
                              *((_BYTE *)dest + 1) = v118;
                              dest = (char *)dest + 2;
                              *(_WORD *)(v119 + 1) = __ROL2__(v118, 8);
                            }
                            goto LABEL_203;
                          }
                          v206 = nullptr;
LABEL_449:
                          v207 = (char *)dest;
                          v208 = (char *)dest
                               - ((unsigned __int8)*((char *)dest - 1) | ((unsigned __int8)*((char *)dest - 2) << 8));
                          v209 = *(v208 - 3);
                          v210 = v208 - 3;
                          if ( v209 == -121 )
                          {
                            if ( !(_DWORD)v321 )
                              goto LABEL_453;
                            *v210 = -119;
                            v244 = -118;
                            if ( v38 )
                              goto LABEL_556;
                            if ( v35 < 0 )
                              *v210 = -114;
                            v279 = *v210;
LABEL_648:
                            v244 = v279 + 1;
LABEL_556:
                            *v210 = v244;
                            *(v207 - 3) = 125;
                            goto LABEL_557;
                          }
                          if ( v209 == -120 )
                          {
                            *((char *)dest - 3) = (_BYTE)v332 + 123;
                            goto LABEL_203;
                          }
                          if ( !v38 )
                          {
                            if ( v35 < 0 )
                            {
                              *v210 = v209 + 5;
                            }
                            else if ( v209 == -115 )
                            {
                              if ( v210[(unsigned __int16)__ROL2__(*(_WORD *)(v210 + 1), 8)] != 121 )
                                *v210 = -110;
                              if ( !(_DWORD)v321 )
                                goto LABEL_453;
                              goto LABEL_661;
                            }
                          }
                          if ( !(_DWORD)v321 )
                          {
LABEL_453:
                            *(v207 - 3) = (_BYTE)v332 + 123;
                            v126 = *(_DWORD *)(v14 + 308);
                            goto LABEL_213;
                          }
                          v279 = *v210;
                          if ( *v210 != -115 && v279 != -110 )
                            goto LABEL_648;
LABEL_661:
                          LODWORD(v346) = v35;
                          LODWORD(v345) = v95;
                          v321 = v210;
                          v332 = (unsigned __int64 *)((_BYTE *)dest - v210);
                          memmove(v210 + 3, v210, (int)dest - (int)v210);
                          v284 = v321;
                          dest = (char *)dest + 3;
                          v95 = (int)v345;
                          v35 = (int)v346;
                          v285 = (_WORD)v332 + 3;
                          *v321 = 5 * (*v321 != -115) - 118;
                          v286 = dest;
                          dest = (char *)dest + 1;
                          *v286 = 125;
                          *(_BYTE *)dest = HIBYTE(v285);
                          *((_BYTE *)dest + 1) = v285;
                          dest = (char *)dest + 2;
                          *(_WORD *)(v284 + 1) = __ROL2__(v285, 8);
LABEL_557:
                          if ( v206 )
                            *v206 = -101;
                          if ( (unsigned int)v95 <= 1 )
                            goto LABEL_212;
                          goto LABEL_204;
                        }
                        goto LABEL_444;
                      }
LABEL_193:
                      v111 = v110;
                      if ( (unsigned int)a6 > 1 && (_DWORD)a6 != 0x10000 )
                      {
                        v349 = v35;
                        LODWORD(v346) = a6;
                        v345 = (unsigned __int64 *)((char *)src[0] + 4);
                        memmove((char *)src[0] + 4, src[0], v110);
                        v112 = (char *)src[0];
                        a6 = (unsigned int)v346;
                        v35 = v349;
                        dest = (char *)dest + 4;
                        v113 = (_DWORD)v346 == 65537;
                        *(_BYTE *)src[0] = (_BYTE)v332 - 103;
                        v114 = a6 - 1;
                        *(_WORD *)(v112 + 1) = 137;
                        v112[3] = 0;
                        if ( !v113 )
                        {
                          v115 = v112 + 2;
                          if ( v38 )
                            goto LABEL_197;
                          src[0] = v345;
                          goto LABEL_624;
                        }
                        v95 = 0;
                        v206 = nullptr;
                        src[0] = v345;
                        goto LABEL_449;
                      }
                      LODWORD(v346) = v35;
                      LODWORD(v345) = a6;
                      v233 = memmove((char *)src[0] + 1, src[0], v110);
                      a6 = (unsigned int)v345;
                      dest = (char *)dest + 1;
                      v35 = (int)v346;
                      v234 = v233;
                      if ( !(_DWORD)v345 )
                      {
                        v278 = src[0];
                        src[0] = v234;
                        *v278 = -87;
                        v126 = *(_DWORD *)(v14 + 308);
                        goto LABEL_213;
                      }
                      v206 = src[0];
                      v95 = 0;
                      src[0] = v233;
                      *v206 = (_BYTE)v332 - 103;
                      if ( (_DWORD)a6 == 0x10000 )
                        goto LABEL_449;
LABEL_203:
                      if ( (_DWORD)v321 )
                      {
LABEL_204:
                        v121 = (int)dest;
                        goto LABEL_205;
                      }
LABEL_212:
                      v126 = *(_DWORD *)(v14 + 308);
LABEL_213:
                      *(_DWORD *)(v14 + 308) = v126 | (unsigned int)v309;
                      v34 = (int *)(v364 + 1);
                      goto LABEL_58;
                    }
                    a6 = (unsigned int)(v95 + 1);
                  }
                  if ( v95 )
                  {
                    if ( v95 == 1 )
                    {
LABEL_448:
                      v206 = nullptr;
                      if ( (_DWORD)a6 == 0x10000 )
                        goto LABEL_449;
                      v114 = a6 - v95;
                      goto LABEL_586;
                    }
LABEL_444:
                    if ( v38 )
                    {
                      LODWORD(v350) = v35;
                      v349 = a6;
                      LODWORD(v346) = (_DWORD)dest - LODWORD(src[0]);
                      LODWORD(v345) = v95;
                      if ( (unsigned int)sub_8327C0(&v368, v95 - 1, n) )
                        goto LABEL_504;
                      v95 = (int)v345;
                      v110 = (int)v346;
                      a6 = v349;
                      v35 = v350;
                      if ( 2147483627 - *v31 < v368 )
                        goto LABEL_504;
                      *v31 += v368;
                    }
                    else
                    {
                      if ( v316 > 0xFFFFFFFD && v328 )
                      {
                        v316 = v310;
                        v318 = v315;
                      }
                      LODWORD(v350) = v35;
                      v358 = (_DWORD)dest - LODWORD(src[0]);
                      LODWORD(v351) = a6;
                      v349 = v37;
                      v280 = src[0];
                      v345 = v31;
                      v281 = (int)dest - LODWORD(src[0]);
                      v346 = v36;
                      v282 = 1;
                      v283 = v95;
                      do
                      {
                        ++v282;
                        memcpy(v190, v280, v281);
                        v190 = (char *)dest + v281;
                        dest = (char *)dest + v281;
                      }
                      while ( v282 != v283 );
                      v31 = v345;
                      v36 = v346;
                      v95 = v283;
                      v37 = v349;
                      v35 = v350;
                      v110 = v358;
                      a6 = (unsigned int)v351;
                    }
                    goto LABEL_448;
                  }
                  goto LABEL_193;
                }
LABEL_714:
                *v313 = 110;
                return 0;
              }
              if ( v96 <= 0x1Cu )
              {
                if ( (unsigned __int8)(v96 - 6) > 0x10u )
                  goto LABEL_714;
                if ( (_DWORD)a6 == 1 && v95 == 1 )
                  goto LABEL_212;
                v136 = dest;
                if ( (unsigned __int8)(v96 - 15) <= 1u )
                {
                  v140 = 0;
                  LOBYTE(v135) = 52;
                  v139 = *((unsigned __int8 *)src[0] + 1);
                  v138 = *((_BYTE *)src[0] + 2);
                }
                else
                {
                  v138 = -1;
                  v139 = -1;
                  v140 = 0;
                  LOBYTE(v135) = 52;
                }
              }
              else
              {
                if ( (_DWORD)a6 == 1 && v95 == 1 )
                  goto LABEL_212;
                v135 = dword_239B180[v96 - 29];
                v136 = dest;
                v137 = *((char *)dest - 1);
                v336 = v137;
                if ( v96 <= 0x1Eu && (unsigned int)v95 > 1 )
                {
                  v318 = v137;
                  v126 = *(_DWORD *)(v14 + 308);
                  if ( v96 == 30 )
                  {
                    v316 = v126 | 1;
                    dest = src[0];
                    if ( !(_DWORD)a6 )
                      goto LABEL_213;
                  }
                  else
                  {
                    v316 = *(_DWORD *)(v14 + 308);
                    dest = src[0];
                    if ( !(_DWORD)a6 )
                      goto LABEL_213;
                  }
                  v138 = -1;
                  v139 = -1;
                  v140 = 1;
                  v141 = v135 + (_BYTE)v332;
                  goto LABEL_238;
                }
                v138 = -1;
                v139 = -1;
                v140 = 1;
              }
              dest = src[0];
              if ( !(_DWORD)a6 )
                goto LABEL_212;
              v141 = v135 + (_BYTE)v332;
              if ( !v95 )
              {
                dest = (char *)src[0] + 1;
                if ( (_DWORD)a6 == 0x10000 )
                {
                  *(_BYTE *)src[0] = v141 + 33;
                  v143 = (char *)dest;
                }
                else
                {
                  if ( (_DWORD)a6 != 1 )
                  {
                    *(_BYTE *)src[0] = v141 + 39;
LABEL_508:
                    *(_BYTE *)dest = BYTE1(a6);
                    *((_BYTE *)dest + 1) = a6;
                    v143 = (char *)dest + 2;
                    dest = (char *)dest + 2;
                    if ( v140 )
                      goto LABEL_509;
LABEL_370:
                    dest = v143 + 1;
                    *v143 = v96;
                    if ( v139 == -1 )
                      goto LABEL_203;
                    LOBYTE(v332) = v139;
                    LOBYTE(v345) = v138;
                    goto LABEL_372;
                  }
                  *(_BYTE *)src[0] = v141 + 37;
                  v143 = (char *)dest;
                }
LABEL_369:
                if ( v140 )
                {
LABEL_509:
                  *v143 = v336;
                  dest = (char *)dest + 1;
                  goto LABEL_203;
                }
                goto LABEL_370;
              }
              if ( v95 == 1 )
              {
                if ( (_DWORD)a6 == 0x10000 )
                {
                  dest = (char *)src[0] + 1;
                  *(_BYTE *)src[0] = v141 + 35;
                  v143 = (char *)dest;
                }
                else
                {
                  dest = v136;
                  if ( (_DWORD)a6 == 1 )
                    goto LABEL_212;
                  dest = v136 + 1;
                  *v136 = v141 + 39;
                  *(_BYTE *)dest = (unsigned __int16)(a6 - 1) >> 8;
                  *((_BYTE *)dest + 1) = a6 - 1;
                  v143 = (char *)dest + 2;
                  dest = (char *)dest + 2;
                }
                goto LABEL_369;
              }
LABEL_238:
              dest = (char *)src[0] + 1;
              *(_BYTE *)src[0] = v135 + 41;
              *(_BYTE *)dest = BYTE1(v95);
              *((_BYTE *)dest + 1) = v95;
              v142 = (char *)dest;
              v143 = (char *)dest + 2;
              dest = (char *)dest + 2;
              if ( (_DWORD)a6 != v95 )
              {
                LOBYTE(v346) = v141;
                if ( v140 )
                {
                  v142[2] = v336;
                  v277 = dest;
                  if ( (_DWORD)a6 == 0x10000 )
                  {
                    dest = (char *)dest + 2;
                    v277[1] = (_BYTE)v346 + 33;
                    v143 = (char *)dest;
                    goto LABEL_509;
                  }
                  v144 = (char *)dest + 1;
                  v145 = (char *)dest + 2;
                }
                else
                {
                  dest = v142 + 3;
                  v142[2] = v96;
                  v144 = dest;
                  v145 = (char *)dest + 1;
                  if ( v139 == -1 )
                  {
                    if ( (_DWORD)a6 == 0x10000 )
                    {
                      dest = (char *)dest + 1;
                      *v144 = (_BYTE)v346 + 33;
                      v302 = dest;
                      dest = (char *)dest + 1;
                      *v302 = v96;
                      goto LABEL_203;
                    }
                  }
                  else
                  {
                    dest = (char *)dest + 1;
                    *v144 = v139;
                    v146 = dest;
                    LOBYTE(v332) = v139;
                    LOBYTE(v345) = v138;
                    dest = (char *)dest + 1;
                    *v146 = v138;
                    v144 = dest;
                    v145 = (char *)dest + 1;
                    if ( (_DWORD)a6 == 0x10000 )
                    {
                      dest = (char *)dest + 1;
                      *v144 = v141 + 33;
                      v303 = dest;
                      dest = (char *)dest + 1;
                      *v303 = v96;
LABEL_372:
                      v192 = dest;
                      dest = (char *)dest + 1;
                      *v192 = (_BYTE)v332;
                      v193 = dest;
                      dest = (char *)dest + 1;
                      *v193 = (_BYTE)v345;
                      goto LABEL_203;
                    }
                  }
                }
                a6 = (unsigned int)(a6 - v95);
                dest = v145;
                if ( (_DWORD)a6 != 1 )
                {
                  *v144 = (_BYTE)v346 + 39;
                  goto LABEL_508;
                }
                *v144 = (_BYTE)v346 + 37;
                v143 = (char *)dest;
              }
              goto LABEL_369;
            }
            if ( (v39 & 0xFFFE0000) != 0x80420000 )
              goto LABEL_28;
          }
LABEL_407:
          a6 = (unsigned int)v34[2];
          v364 = (unsigned int *)(v34 + 1);
          v95 = v34[1];
          v364 = (unsigned int *)(v34 + 2);
          LODWORD(v309) = 2 * (v95 != (_DWORD)a6);
          if ( v95 )
          {
            if ( v37 )
            {
              if ( (_DWORD)v40 == -2143158272 )
              {
                LODWORD(v321) = 1;
                v37 = 1;
                LODWORD(v332) = 0;
                goto LABEL_171;
              }
              if ( (_DWORD)v40 == -2143092736 )
              {
                LODWORD(v321) = 0;
                v37 = 1;
                LODWORD(v332) = v331;
                goto LABEL_171;
              }
              v37 = 1;
              goto LABEL_412;
            }
          }
          else
          {
            v316 = v325;
            v310 = v322;
            v318 = v324;
            v315 = v323;
          }
          if ( (_DWORD)v40 == -2143158272 )
          {
            LODWORD(v321) = 1;
            v37 = 0;
            LODWORD(v332) = 0;
            goto LABEL_171;
          }
          v37 = 0;
          if ( (_DWORD)v40 == -2143092736 )
          {
            LODWORD(v321) = 0;
            v37 = 0;
            LODWORD(v332) = v331;
            goto LABEL_171;
          }
LABEL_412:
          LODWORD(v321) = 0;
          LODWORD(v332) = v330;
          goto LABEL_171;
        }
        v95 = 0;
        a6 = 1;
        v37 = 0;
        v316 = v325;
        v315 = v323;
        v318 = v324;
        v310 = v322;
        v43 = v36;
LABEL_497:
        v36 = v43;
        LODWORD(v309) = 2;
        LODWORD(v321) = 0;
        LODWORD(v332) = v330;
        goto LABEL_171;
      }
      src[0] = dest;
LABEL_36:
      v49 = v37 & (v312 ^ 1);
      if ( !v49 )
        v49 = v305;
      v305 = v49;
      if ( (_DWORD)v40 == -2145517568 )
      {
        v51 = -119;
        v52 = 0;
        v53 = 1;
        v54 = 137;
        v55 = &v362;
        goto LABEL_49;
      }
      v50 = (unsigned __int16)v39;
      if ( (unsigned int)v40 > 0x801E0000 )
      {
        if ( (_DWORD)v40 != -2144468992 )
        {
          if ( (unsigned int)v40 <= 0x802E0000 )
          {
            if ( (_DWORD)v40 == -2144862208 )
            {
              if ( v34[1] == -2145583104 && (unsigned int)(v34[2] + 2143813632) > 0xB0000 )
              {
                v183 = dest;
                v37 = 0;
                dest = (char *)dest + 1;
                *v183 = -91;
                v34 = (int *)(v364 + 2);
                goto LABEL_58;
              }
              ++*(_WORD *)(v14 + 214);
              v51 = -127;
              v52 = 0;
              v53 = 0;
              v54 = 129;
              v55 = &v362;
            }
            else if ( (unsigned int)v40 > 0x80280000 )
            {
              if ( (_DWORD)v40 == -2144665600 )
              {
                ++*(_WORD *)(v14 + 214);
                v51 = -124;
                v52 = 0;
                v53 = 0;
                v54 = 132;
                v55 = &v362;
              }
              else if ( (unsigned int)v40 > 0x802B0000 )
              {
                if ( (_DWORD)v40 != -2144600064 )
                {
                  if ( (_DWORD)v40 != -2144534528 )
                    goto LABEL_28;
                  goto LABEL_136;
                }
                ++*(_WORD *)(v14 + 214);
                v51 = -123;
                v52 = 0;
                v53 = 0;
                v54 = 133;
                v55 = &v362;
              }
              else if ( (_DWORD)v40 == -2144796672 )
              {
                ++*(_WORD *)(v14 + 214);
                v51 = -126;
                v52 = 0;
                v53 = 0;
                v54 = 130;
                v55 = &v362;
              }
              else
              {
                if ( (_DWORD)v40 != -2144731136 )
                  goto LABEL_28;
                ++*(_WORD *)(v14 + 214);
                v51 = -125;
                v52 = 0;
                v53 = 0;
                v54 = 131;
                v55 = &v362;
              }
            }
            else
            {
              if ( (_DWORD)v40 == -2145058816 )
                goto LABEL_256;
              if ( (unsigned int)v40 <= 0x80250000 )
              {
                if ( (_DWORD)v40 == -2145452032 )
                {
                  v170 = (unsigned int *)(v34 + 1);
                  v37 = 0;
                  v34 += 3;
                  v364 = v170;
                  v171 = *(v34 - 2);
                  v317 = *(v34 - 1);
                  v311 = v171;
                  v333 = v171;
                  v330 = (v171 & 0x40000) >> 18;
                  v331 = v330 ^ 1;
                  v329 = (v171 >> 3) & 1;
                  goto LABEL_58;
                }
                if ( (_DWORD)v40 != -2145124352 )
                  goto LABEL_28;
                v61 = (unsigned int)v34[1];
                v62 = (unsigned int)v34[2];
                v364 = (unsigned int *)(v34 + 2);
                v63 = v62 | (v61 << 32);
                v326 = v63;
                if ( *(_DWORD *)(v14 + 236) < (unsigned int)v50 )
                {
                  *(_QWORD *)(v14 + 168) = v63;
                  *v313 = 115;
                  return 0;
                }
                goto LABEL_76;
              }
              if ( (_DWORD)v40 == -2144993280 )
              {
                v51 = -120;
                v52 = 0;
                v53 = 1;
                v54 = 136;
                v55 = &v362;
              }
              else
              {
                if ( (_DWORD)v40 != -2144927744 )
                  goto LABEL_28;
                ++*(_WORD *)(v14 + 214);
                v51 = 0x80;
                v52 = 0;
                v53 = 0;
                v54 = 128;
                v55 = &v362;
              }
            }
            goto LABEL_49;
          }
          if ( (_DWORD)v40 == -2143879168 )
          {
            *(_DWORD *)(v14 + 232) |= 0x1000u;
            goto LABEL_136;
          }
          if ( (unsigned int)v40 > 0x80370000 )
          {
            v43 = v36;
LABEL_22:
            if ( (_DWORD)v40 != -2143420416 )
            {
              if ( (unsigned int)v40 <= 0x803E0000 )
              {
                if ( (_DWORD)v40 != -2143617024 )
                {
                  if ( (unsigned int)v40 <= 0x803B0000 )
                  {
                    if ( (v39 & 0xFFFE0000) != 0x80380000 )
                    {
                      if ( (_DWORD)v40 != -2143682560 )
                      {
LABEL_28:
                        *v313 = 189;
                        return 0;
                      }
                      v36 = v43;
                      goto LABEL_512;
                    }
                    if ( (_DWORD)v40 != -2143748096 )
                    {
                      v95 = 0;
                      v37 = 0;
                      v316 = v325;
                      v315 = v323;
                      v318 = v324;
                      v310 = v322;
                      goto LABEL_404;
                    }
                    v36 = v43;
                    goto LABEL_643;
                  }
                  if ( (v39 & 0xFFFE0000) != 0x803C0000 )
                    goto LABEL_28;
                  if ( !v37 )
                  {
                    v36 = v43;
                    if ( (_DWORD)v40 != -2143551488 )
                      goto LABEL_395;
LABEL_522:
                    LODWORD(v309) = 2;
                    a6 = 0x10000;
                    v95 = 1;
                    LODWORD(v321) = 1;
                    LODWORD(v332) = 0;
                    goto LABEL_171;
                  }
                  goto LABEL_400;
                }
                goto LABEL_493;
              }
              if ( (_DWORD)v40 != -2143223808 )
              {
                if ( (unsigned int)v40 <= 0x80410000 )
                {
                  v95 = (v40 + 2143354880) & 0xFFFEFFFF;
                  if ( v95 )
                    goto LABEL_28;
                  v36 = v43;
                  goto LABEL_169;
                }
                if ( (v39 & 0xFFFE0000) != 0x80420000 )
                  goto LABEL_28;
              }
              v36 = v43;
              goto LABEL_407;
            }
            v95 = 0;
            v37 = 0;
            a6 = 1;
            v316 = v325;
            v315 = v323;
            v318 = v324;
            v310 = v322;
            goto LABEL_497;
          }
          if ( (_DWORD)v40 == -2144141312 )
          {
LABEL_135:
            *(_DWORD *)(v14 + 324) = 1;
LABEL_136:
            v82 = dword_239B340[(unsigned int)(v40 + 2144534528) >> 16];
            v83 = dest;
            dest = (char *)dest + 1;
            *v83 = v82;
            v84 = v364++;
            v85 = dest;
            v86 = v84[1];
            v367 = (unsigned __int8 *)dest;
            dest = (char *)dest + 1;
            if ( v86 <= 0 )
            {
              LOBYTE(v88) = 0;
            }
            else
            {
              v364 = v84 + 2;
              v87 = *((_BYTE *)v84 + 8);
              v88 = 0;
              v336 = v87;
              if ( v38 )
              {
                while ( 1 )
                {
                  ++v88;
                  ++*v31;
                  if ( v86 == v88 )
                    break;
                  v87 = *(_BYTE *)++v364;
                }
                v336 = v87;
                LOBYTE(v88) = 0;
              }
              else
              {
                v204 = v336;
                v205 = 0;
                while ( 1 )
                {
                  ++v205;
                  LOBYTE(v88) = v88 + 1;
                  *(_BYTE *)dest = v204;
                  dest = (char *)dest + 1;
                  if ( v205 == v86 )
                    break;
                  v204 = *(_BYTE *)++v364;
                }
                v336 = v204;
              }
              v85 = v367;
            }
            *v85 = v88;
            v89 = dest;
            v37 = 0;
            dest = (char *)dest + 1;
            *v89 = 0;
            v34 = (int *)(v364 + 1);
            goto LABEL_58;
          }
          if ( (unsigned int)v40 > 0x80330000 )
          {
            if ( (_DWORD)v40 == -2144010240 )
              goto LABEL_135;
            if ( (_DWORD)v40 == -2143944704 )
            {
              v90 = dest;
              v37 = 0;
              *(_DWORD *)(v14 + 232) |= 0x1000u;
              dest = v90 + 1;
              *v90 = -95;
              v34 = (int *)(v364 + 1);
              goto LABEL_58;
            }
            if ( (_DWORD)v40 != -2144075776 )
              goto LABEL_28;
          }
          else
          {
            if ( (_DWORD)v40 == -2144272384 )
              goto LABEL_136;
            if ( (unsigned int)v40 <= 0x80310000 )
            {
              if ( (((_DWORD)v40 + 2144403456) & 0xFFFEFFFF) != 0 )
                goto LABEL_28;
              goto LABEL_117;
            }
            if ( (_DWORD)v40 != -2144206848 )
              goto LABEL_28;
          }
          *(_DWORD *)(v14 + 324) = 1;
LABEL_117:
          v37 = 0;
          v79 = dword_239B340[(unsigned int)(v40 + 2144534528) >> 16];
          v80 = dest;
          dest = (char *)dest + 1;
          *v80 = v79;
          v34 = (int *)(v364 + 1);
          goto LABEL_58;
        }
        v113 = v314 == nullptr;
        v178 = (char *)dest;
        *(_DWORD *)(v14 + 320) = 1;
        if ( v113 )
        {
LABEL_304:
          v180 = -90 - ((*(_WORD *)(v14 + 214) == 0) - 1);
        }
        else
        {
          if ( *((_WORD *)v314 + 5) >= *(_WORD *)(v14 + 214) )
          {
            v179 = (__int64)v314;
            if ( v38 )
            {
              while ( 1 )
              {
                *v31 += 3LL;
                v179 = *(_QWORD *)v179;
                if ( !v179 )
                  break;
                if ( *(_WORD *)(v179 + 10) < *(_WORD *)(v14 + 214) )
                  goto LABEL_425;
              }
            }
            else
            {
              while ( 1 )
              {
                dest = v178 + 1;
                *v178 = -88;
                *(_BYTE *)dest = *(_BYTE *)(v179 + 9);
                *((_BYTE *)dest + 1) = *(_WORD *)(v179 + 8);
                v178 = (char *)dest + 2;
                dest = (char *)dest + 2;
                v179 = *(_QWORD *)v179;
                if ( !v179 )
                  break;
                if ( *(_WORD *)(v179 + 10) < *(_WORD *)(v14 + 214) )
                  goto LABEL_425;
              }
            }
            goto LABEL_304;
          }
LABEL_425:
          v180 = -89;
        }
        v181 = v310;
        v312 = 1;
        dest = v178 + 1;
        *v178 = v180;
        v182 = -2;
        if ( v181 != -1 )
          v182 = v181;
        v37 = 0;
        v310 = v182;
        v34 = (int *)(v364 + 1);
        goto LABEL_58;
      }
      if ( (_DWORD)v40 == -2146500608 )
      {
        v51 = -115;
        v52 = 0;
        v53 = 1;
        v54 = 141;
        v55 = &v362;
        goto LABEL_49;
      }
      if ( (unsigned int)v40 <= 0x800F0000 )
        break;
      if ( (_DWORD)v40 == -2146041856 )
      {
        if ( !v38 )
        {
          v235 = v35;
          while ( 1 )
          {
            while ( 1 )
            {
              v236 = *v34;
              LOWORD(v236) = 0;
              if ( v236 == -2145910784 )
                break;
              while ( v236 != -2145845248 )
              {
                if ( v236 != -2146041856 )
                {
                  v35 = v235;
                  v37 = 0;
                  goto LABEL_58;
                }
                v34 += 3;
                v364 = (unsigned int *)v34;
                v236 = *v34;
                LOWORD(v236) = 0;
                if ( v236 == -2145910784 )
                  goto LABEL_534;
              }
              v364 = (unsigned int *)(v34 + 2);
              a6 = (unsigned int)v34[1];
              v34 += 2;
              if ( (_DWORD)a6 )
              {
                *(_BYTE *)dest = -109;
                *((_BYTE *)dest + 1) = BYTE1(*(v364 - 1));
                *((_BYTE *)dest + 2) = *(v364 - 1);
                v34 = (int *)v364;
                dest = (char *)dest + 3;
              }
            }
LABEL_534:
            v237 = (unsigned int)v34[1];
            v364 = (unsigned int *)(v34 + 2);
            v362 = 0;
            v238 = *(_QWORD *)(v14 + 216) + 16 * v237;
            LODWORD(v368) = 0;
            if ( !(unsigned int)sub_841320(*(_QWORD *)v238, *(unsigned __int16 *)(v238 + 12), &v368, &v362, v313, v14) )
              return 0;
            *(_BYTE *)dest = -108;
            *((_BYTE *)dest + 1) = BYTE1(v368);
            *((_BYTE *)dest + 2) = v368;
            *((_BYTE *)dest + 3) = BYTE1(v362);
            *((_BYTE *)dest + 4) = v362;
            v34 = (int *)v364;
            dest = (char *)dest + 5;
          }
        }
        LODWORD(v309) = v35;
        v177 = sub_841480(v34, v313, v14, v31);
        v364 = (unsigned int *)v177;
        if ( !v177 )
          return 0;
        v35 = (int)v309;
        v34 = (int *)(v177 + 4);
        v37 = 0;
        goto LABEL_58;
      }
      if ( (unsigned int)v40 > 0x80160000 )
      {
        if ( (_DWORD)v40 == -2145714176 )
        {
          v174 = -2;
          v175 = dest;
          if ( v310 != -1 )
            v174 = v310;
          dest = (char *)dest + 1;
          v310 = v174;
          v176 = v174;
          *v175 = ((v311 & 0x20) != 0) + 12;
          goto LABEL_292;
        }
        if ( (unsigned int)v40 > 0x801B0000 )
        {
          if ( (_DWORD)v40 != -2145648640 )
          {
            v30 = v334;
            v216 = v34;
            if ( (_DWORD)v40 == -2145583104 )
              goto LABEL_463;
            goto LABEL_28;
          }
          if ( (unsigned int)(unsigned __int16)v39 - 6 <= 0x10 )
          {
            v150 = -2;
            v37 = 1;
            if ( v310 != -1 )
              v150 = v310;
            v310 = v150;
            if ( (unsigned __int16)v39 == 14 )
            {
              *(_DWORD *)(v14 + 232) |= 0x400000u;
              LOBYTE(v39) = 13;
              v37 = 1;
LABEL_252:
              v151 = dest;
              dest = (char *)dest + 1;
              *v151 = v39;
              v34 = (int *)(v364 + 1);
              v322 = v310;
              v325 = v316;
              v323 = v315;
              v324 = v318;
              goto LABEL_58;
            }
LABEL_546:
            LOBYTE(v39) = v50;
            goto LABEL_252;
          }
          if ( *(_WORD *)(v14 + 214) && (unsigned __int16)v39 == 3 )
          {
            if ( (v317 & 0x40) == 0 )
            {
              *v313 = 199;
              return 0;
            }
LABEL_421:
            *(_DWORD *)(v14 + 232) |= 0x1000000u;
            LOBYTE(v39) = 3;
LABEL_422:
            v37 = 0;
            goto LABEL_252;
          }
          if ( (unsigned __int16)v39 <= 5u )
          {
            if ( (v39 & 0xFFFC) != 0 )
            {
              if ( (v311 & 0x20000) != 0 && (v317 & 0x400) == 0 )
                LOBYTE(v39) = ((unsigned __int16)v39 != 4) - 85;
              goto LABEL_501;
            }
            LOBYTE(v39) = 1;
            if ( (_DWORD)v50 == 1 )
            {
LABEL_501:
              if ( !*(_DWORD *)(v14 + 316) )
                *(_DWORD *)(v14 + 316) = 1;
              goto LABEL_422;
            }
            if ( (_DWORD)v50 == 3 )
              goto LABEL_421;
          }
          v37 = 0;
          goto LABEL_546;
        }
        if ( (_DWORD)v40 != -2145976320 )
        {
          if ( (_DWORD)v40 != -2145779712 )
            goto LABEL_28;
          v81 = dest;
          v37 = 0;
          dest = (char *)dest + 1;
          *v81 = ((v311 & 0x400) != 0) + 25;
          v34 = (int *)(v364 + 1);
          goto LABEL_58;
        }
        ++*(_WORD *)(v14 + 214);
        v51 = -122;
        v52 = 0;
        v53 = 0;
        v54 = 134;
        v55 = &v362;
        goto LABEL_49;
      }
      if ( (_DWORD)v40 == -2146304000 )
      {
        v172 = (unsigned int)v34[2] | ((unsigned __int64)(unsigned int)v34[1] << 32);
        v364 = (unsigned int *)(v34 + 3);
        v173 = v34[3];
        if ( *(_DWORD *)(v14 + 236) < v173 )
        {
          *v313 = 115;
          *(_QWORD *)(v14 + 168) = v172;
          return 0;
        }
        if ( *(_DWORD *)(v14 + 272) < v173 )
          *(_DWORD *)(v14 + 272) = v173;
        v326 = v172 - 2;
        *((_BYTE *)dest + 3) = -109;
        *((_BYTE *)dest + 4) = BYTE1(v173);
        *((_BYTE *)dest + 5) = v173;
        goto LABEL_285;
      }
      if ( (unsigned int)v40 > 0x80120000 )
      {
        if ( (_DWORD)v40 == -2146107392 )
        {
          v70 = v34[2];
          if ( v34[1] )
          {
            v71 = -104;
            if ( v70 > 9 )
            {
              v71 = -105;
              if ( v70 == 10 )
                v71 = ((unsigned int)v34[3] < 0x30) - 105;
            }
          }
          else
          {
            v71 = -105;
            if ( v70 == 10 )
              v71 = (v34[3] == 47) - 105;
          }
          v52 = 1;
          v53 = 1;
          v54 = 141;
          v55 = &v362;
          *((_BYTE *)dest + 3) = v71;
          v51 = -115;
          v364 += 3;
          goto LABEL_49;
        }
        if ( (unsigned int)v40 > 0x80150000 || (((_DWORD)v40 + 2146238464) & 0xFFFEFFFF) != 0 )
          goto LABEL_28;
        if ( v38 )
          goto LABEL_382;
        if ( (_DWORD)v40 != -2146172928 )
        {
          v223 = -107;
          if ( (_DWORD)v50 )
          {
            v262 = (unsigned int)v34[1];
            v362 = 0;
            v263 = *(_QWORD *)(v14 + 216) + 16 * v262;
            v309 = &v362;
            LODWORD(v368) = 0;
            if ( !(unsigned int)sub_841320(*(_QWORD *)v263, *(unsigned __int16 *)(v263 + 12), &v368, &v362, v313, v14) )
              return 0;
            v55 = v309;
            v264 = -106;
LABEL_614:
            v52 = 5;
            v53 = 1;
            v54 = 141;
            *((_BYTE *)dest + 3) = v264;
            v265 = v368;
            *((_BYTE *)dest + 4) = BYTE1(v368);
            *((_BYTE *)dest + 5) = v265;
            v266 = v362;
            *((_BYTE *)dest + 6) = BYTE1(v362);
            *((_BYTE *)dest + 7) = v266;
            v51 = -115;
            v364 += 3;
            goto LABEL_49;
          }
          goto LABEL_486;
        }
        *((_BYTE *)dest + 3) = -107;
LABEL_487:
        *((_BYTE *)dest + 4) = BYTE1(v364[1]);
        *((_BYTE *)dest + 5) = v364[1];
        v364 += 3;
LABEL_285:
        v51 = -115;
        v52 = 3;
        v53 = 1;
        v54 = 141;
        v55 = &v362;
        goto LABEL_49;
      }
      if ( (_DWORD)v40 != -2146435072 )
      {
        if ( (_DWORD)v40 != -2146369536 )
          goto LABEL_28;
        if ( v38 )
        {
LABEL_382:
          v194 = (unsigned int)v34[3];
          LODWORD(v309) = v40;
          v364 = (unsigned int *)(v34 + 1);
          v195 = v194 | ((unsigned __int64)(unsigned int)v34[2] << 32);
          LODWORD(v321) = v34[1];
          v196 = *(_QWORD *)(v14 + 56) + v195;
          v326 = v195;
          v364 = (unsigned int *)(v34 + 3);
          v197 = sub_840EA0(v196, (unsigned int)v321, v14, v50, v40, a6);
          v198 = (int)v309;
          if ( v197 )
          {
            if ( (_DWORD)v309 == -2146172928 )
              v198 = -2146369536;
            if ( *(__int16 *)(v197 + 14) < 0 )
            {
              v51 = -115;
              v52 = 5;
              v53 = 1;
              *v34 = v198 | 1;
              v54 = 141;
              v55 = &v362;
              v34[1] = (v197 - *(_QWORD *)(v14 + 216)) >> 4;
              goto LABEL_49;
            }
            v199 = *(_DWORD *)(v197 + 8);
            if ( *(_DWORD *)(v14 + 272) < v199 )
              *(_DWORD *)(v14 + 272) = v199;
            *v34 = v198;
            v200 = *(_DWORD *)(v197 + 8);
          }
          else
          {
            if ( (_DWORD)v309 != -2146172928 )
              goto LABEL_710;
            if ( (unsigned int)v321 <= 1 )
            {
              v200 = 0xFFFF;
            }
            else
            {
              v288 = 1;
              v200 = 0;
              do
              {
                v200 = *(unsigned __int8 *)(v196 + v288) + 10 * v200 - 48;
                if ( v200 > 0xFFFF )
                {
                  *v313 = 161;
                  *(_QWORD *)(v14 + 168) = v288 + v326;
                  return 0;
                }
                ++v288;
              }
              while ( v288 != (unsigned int)v321 );
              if ( *(_DWORD *)(v14 + 236) < v200 )
              {
LABEL_710:
                *v313 = 115;
                *(_QWORD *)(v14 + 168) = v326;
                return 0;
              }
              if ( !v200 )
                v200 = 0xFFFF;
            }
          }
          v34[1] = v200;
          goto LABEL_285;
        }
        v223 = -109;
        if ( (_DWORD)v50 )
        {
          v275 = (unsigned int)v34[1];
          v362 = 0;
          v276 = *(_QWORD *)(v14 + 216) + 16 * v275;
          v309 = &v362;
          LODWORD(v368) = 0;
          if ( !(unsigned int)sub_841320(*(_QWORD *)v276, *(unsigned __int16 *)(v276 + 12), &v368, &v362, v313, v14) )
            return 0;
          v55 = v309;
          v264 = -108;
          goto LABEL_614;
        }
LABEL_486:
        *((_BYTE *)dest + 3) = v223;
        goto LABEL_487;
      }
      v147 = (unsigned int)v34[1];
      v148 = (unsigned int)v34[2];
      v52 = 1;
      v364 = (unsigned int *)(v34 + 2);
      v53 = 0;
      v54 = 141;
      v55 = &v362;
      v149 = v148 | (v147 << 32);
      v51 = -115;
      v326 = v149;
      *((_BYTE *)dest + 3) = -86;
LABEL_49:
      v56 = dest;
      LODWORD(v309) = v54;
      ++*(_WORD *)(v14 + 212);
      *v56 = v51;
      ++v364;
      v367 = (unsigned __int8 *)dest;
      LODWORD(v56) = *(_DWORD *)(v14 + 308);
      n = 0;
      LODWORD(v321) = (_DWORD)v56;
      v35 = sub_834F00(
              v311,
              v317,
              (unsigned int)&v367,
              (_DWORD)v320,
              (_DWORD)v313,
              v52,
              (__int64)&v361,
              (__int64)&v368,
              (__int64)&v360,
              (__int64)v55,
              (__int64)&v371,
              (__int64)v314,
              v14,
              (__int64)v319);
      if ( !v35 )
        return 0;
      --*(_WORD *)(v14 + 212);
      v57 = (int)v309;
      v58 = (_DWORD)v309 - 128;
      if ( (_DWORD)v309 != 141 && v53 )
      {
        if ( v35 == 1 )
        {
          if ( v58 <= 6 )
          {
            --*(_WORD *)(v14 + 214);
            if ( v38 )
              goto LABEL_55;
            v93 = v367;
            v37 = 1;
LABEL_161:
            dest = v93;
            v34 = (int *)(v364 + 1);
            if ( (v57 & 0xFFFFFFFB) == 0x80 && v362 <= 0xFFFFFFFD && (unsigned int)v368 <= 0xFFFFFFFD )
            {
              v328 = 0;
              v322 = v310;
              v94 = v316;
              v316 = v362;
              v325 = v94;
              v323 = v315;
              v324 = v318;
              v318 = v360;
            }
            else
            {
              v328 = 0;
              v322 = v310;
              v325 = v316;
              v323 = v315;
              v324 = v318;
            }
            goto LABEL_58;
          }
          if ( v38 )
          {
LABEL_55:
            v37 = 1;
LABEL_56:
            if ( 2147483627 - *v31 < n - 6 )
              goto LABEL_504;
            v59 = (char *)dest;
            *v31 += n - 6;
            dest = v59 + 1;
            v59[1] = 0;
            *((_BYTE *)dest + 1) = 3;
            v60 = dest;
            dest = (char *)dest + 3;
            v60[2] = 122;
            *(_BYTE *)dest = 0;
            *((_BYTE *)dest + 1) = 3;
            dest = (char *)dest + 2;
            v34 = (int *)(v364 + 1);
            goto LABEL_58;
          }
          v74 = v367;
          v37 = 1;
        }
        else
        {
          if ( v58 <= 6 )
          {
LABEL_108:
            --*(_WORD *)(v14 + 214);
            if ( v38 )
              goto LABEL_109;
            v93 = v367;
            v37 = 0;
            goto LABEL_161;
          }
LABEL_133:
          if ( v38 )
          {
LABEL_109:
            v37 = 0;
            goto LABEL_56;
          }
          v74 = v367;
          v37 = 0;
        }
LABEL_101:
        dest = v74;
        v75 = v362;
        v322 = v368;
        if ( v310 == -1 )
        {
          if ( (_DWORD)v368 != -1 )
          {
            if ( (_DWORD)v368 == -2 )
            {
              v310 = -2;
              v76 = v315;
              v328 = 0;
            }
            else
            {
              v310 = v368;
              v76 = v361;
              v328 = 1;
              v322 = -2;
            }
            goto LABEL_105;
          }
LABEL_528:
          v328 = 0;
          v76 = v315;
LABEL_105:
          if ( v75 > 0xFFFFFFFD )
            goto LABEL_339;
        }
        else
        {
          if ( v322 > 0xFFFFFFFD )
          {
            v322 = v310;
            goto LABEL_528;
          }
          if ( v362 > 0xFFFFFFFD )
          {
            v328 = 0;
            v360 = v361;
            v75 = v322 | (unsigned int)v321;
            v322 = v310;
            v76 = v315;
            goto LABEL_105;
          }
          v328 = 0;
          v322 = v310;
          v76 = v315;
        }
        v77 = v316;
        v78 = v315;
        v316 = v75;
        v315 = v76;
        v325 = v77;
        v323 = v78;
        v34 = (int *)(v364 + 1);
        v324 = v318;
        v318 = v360;
        goto LABEL_58;
      }
      if ( v58 <= 6 )
        goto LABEL_108;
      if ( (_DWORD)v309 != 141 || !v337 )
        goto LABEL_133;
      v72 = 0;
      v73 = (char *)dest;
      do
      {
        ++v72;
        v73 += (unsigned __int16)__ROL2__(*(_WORD *)(v73 + 1), 8);
      }
      while ( *v73 != 122 );
      if ( *((_BYTE *)dest + 3) != 0xAA )
      {
        if ( v72 > 2 )
        {
          *(_QWORD *)(v14 + 168) = v326;
          *v313 = 127;
          return 0;
        }
        v74 = v367;
        v37 = v35 == 1;
        if ( v72 == 1 )
        {
          dest = v367;
          if ( v310 == -1 )
          {
            v322 = -2;
            v76 = v315;
            v37 = 0;
            v328 = 0;
            v310 = -2;
          }
          else
          {
            v37 = 0;
            v328 = 0;
            v322 = v310;
            v76 = v315;
          }
LABEL_339:
          v325 = v316;
          v34 = (int *)(v364 + 1);
          v324 = v318;
          v323 = v315;
          v315 = v76;
          goto LABEL_58;
        }
        goto LABEL_101;
      }
      if ( v72 > 1 )
      {
        *(_QWORD *)(v14 + 168) = v326;
        *v313 = 154;
        return 0;
      }
      *((_BYTE *)dest + 3) = -105;
      v37 = 0;
      dest = v367;
      v34 = (int *)(v364 + 1);
LABEL_58:
      v364 = (unsigned int *)v34;
      v39 = *v34;
      v40 = (unsigned int)*v34;
      LOWORD(v40) = 0;
      if ( v38 )
        goto LABEL_17;
    }
    if ( (_DWORD)v40 == -2147090432 )
    {
      v37 = 0;
      *(_BYTE *)dest = 119;
      *((_BYTE *)dest + 1) = BYTE1(v364[1]);
      *((_BYTE *)dest + 2) = v364[1];
      *((_BYTE *)dest + 3) = BYTE1(v364[2]);
      *((_BYTE *)dest + 4) = v364[2];
      *((_BYTE *)dest + 5) = v364[3];
      dest = (char *)dest + byte_239F9C0[119];
      v34 = (int *)(v364 + 4);
      goto LABEL_58;
    }
    if ( (unsigned int)v40 > 0x80060000 )
    {
      if ( (_DWORD)v40 == -2146893824 )
      {
        v189 = dest;
        if ( (v311 & 0x400) != 0 )
        {
          if ( v310 == -1 )
          {
            v322 = -2;
            v310 = -2;
          }
          dest = (char *)dest + 1;
          v37 = 0;
          *v189 = 28;
          v34 = (int *)(v364 + 1);
        }
        else
        {
          dest = (char *)dest + 1;
          v37 = 0;
          *v189 = 27;
          v34 = (int *)(v364 + 1);
        }
        goto LABEL_58;
      }
      if ( (unsigned int)v40 > 0x80090000 )
      {
        if ( (_DWORD)v40 == -2146697216 )
        {
          v201 = dest;
          dest = (char *)dest + 1;
          *v201 = 13;
LABEL_157:
          v34 = (int *)(v364 + 1);
          if ( v310 == -1 )
          {
            v322 = -2;
            v37 = 1;
            v310 = -2;
          }
          else
          {
            v322 = v310;
            v37 = 1;
          }
          v323 = v315;
          goto LABEL_58;
        }
        if ( (unsigned int)v40 > 0x800C0000 )
        {
          if ( (_DWORD)v40 != -2146566144 )
            goto LABEL_28;
        }
        else if ( (_DWORD)v40 != -2146828288 )
        {
          if ( (_DWORD)v40 != -2146762752 )
            goto LABEL_28;
          v91 = dest;
          dest = (char *)dest + 1;
          *v91 = 110;
          v92 = dest;
          dest = (char *)dest + 32;
          *v92 = 0;
          v92[1] = 0;
          goto LABEL_157;
        }
        if ( (*(_BYTE *)v34 & 1) != 0 )
        {
          LODWORD(v309) = v35;
          if ( !(unsigned int)sub_842FB0(
                                v311,
                                v317,
                                (unsigned int)&v364,
                                (unsigned int)&dest,
                                (_DWORD)v313,
                                v14,
                                (__int64)v31) )
            return 0;
          v35 = (int)v309;
          v34 = (int *)(v364 + 1);
          v188 = v310;
          if ( v310 == -1 )
          {
LABEL_491:
            v322 = -2;
            v37 = 1;
            v310 = -2;
            v325 = v316;
            v323 = v315;
            v324 = v318;
            goto LABEL_58;
          }
        }
        else
        {
          v127 = v34[1];
          if ( v127 >= 0 )
          {
            v185 = v34[2];
            if ( v185 != -2146631680 )
            {
              if ( (_DWORD)v40 == -2146828288 && v185 >= 0 && v34[3] == -2146631680 )
              {
                v186 = *(unsigned __int8 *)(*(_QWORD *)(v14 + 16) + (unsigned int)v127);
                if ( v185 == v186 && v127 != v186 )
                {
                  v336 = v34[1];
                  v364 = (unsigned int *)(v34 + 3);
                  if ( (v311 & 8) != 0 )
                  {
                    v37 = 0;
                  }
                  else
                  {
                    v37 = 1;
                    v329 = 1;
                    v311 |= 8u;
                  }
                  v128 = 30;
                  goto LABEL_221;
                }
              }
              goto LABEL_329;
            }
            v364 = (unsigned int *)(v34 + 2);
            if ( (_DWORD)v40 == -2146828288 )
              goto LABEL_220;
            v176 = -2;
            if ( v310 != -1 )
              v176 = v310;
            v261 = dest;
            v310 = v176;
            dest = (char *)dest + 1;
            *v261 = 31 - (((v311 & 8) == 0) - 1);
            *(_BYTE *)dest = v127;
            dest = (char *)dest + 1;
LABEL_292:
            v322 = v176;
            v34 = (int *)(v364 + 1);
LABEL_293:
            v37 = 1;
            v325 = v316;
            v323 = v315;
            v324 = v318;
            goto LABEL_58;
          }
LABEL_329:
          LODWORD(v309) = v35;
          v187 = sub_841F40(v311, v317, (int)v34 + 4, (unsigned int)&dest, v40 == -2146566144, 0, (_DWORD)v313, v14);
          v364 = (unsigned int *)v187;
          v35 = (int)v309;
          if ( !v187 )
            return 0;
          v34 = (int *)(v187 + 4);
          v188 = v310;
          if ( v310 == -1 )
            goto LABEL_491;
        }
        v322 = v188;
        goto LABEL_293;
      }
      if ( (_DWORD)v40 == -2147024896 )
      {
        v184 = v34[3];
        if ( v38 )
        {
          v34 += 6;
          *v31 += v184 + 9;
          v37 = 0;
          goto LABEL_58;
        }
        v250 = (char *)dest;
        *(_BYTE *)dest = 120;
        *((_BYTE *)dest + 1) = BYTE1(v364[1]);
        *((_BYTE *)dest + 2) = v364[1];
        *((_BYTE *)dest + 3) = BYTE1(v364[2]);
        *((_BYTE *)dest + 4) = v364[2];
        v251 = v364[4];
        v252 = v364[5];
        v364 += 5;
        v253 = v250 + 10;
        v254 = v252 | (v251 << 32);
        v255 = *(_QWORD *)(v14 + 56);
        v326 = v254;
        v256 = (unsigned __int8 *)(v254 + v255);
        a6 = *v256;
        v257 = v256 + 1;
        v250[9] = a6;
        v258 = v254;
        v259 = v254 + 1;
        if ( (_BYTE)a6 == 123 )
          a6 = 125;
        *((_BYTE *)dest + 7) = HIBYTE(v259);
        *((_BYTE *)dest + 8) = v258 + 1;
        for ( i = v184 - 1; v184 - 1 > 1; *(v253 - 1) = a6 )
        {
          while ( 1 )
          {
            ++v253;
            if ( *v257 == (_DWORD)a6 && (_DWORD)a6 == v257[1] )
              break;
            v184 = i;
            *(v253 - 1) = *v257++;
            if ( --i <= 1 )
              goto LABEL_605;
          }
          v184 -= 2;
          v257 += 2;
          i = v184 - 1;
        }
LABEL_605:
        *v253 = 0;
        *((_BYTE *)dest + 5) = (unsigned __int16)((_WORD)v253 + 1 - (_WORD)dest) >> 8;
        *((_BYTE *)dest + 6) = (_BYTE)v253 + 1 - (_BYTE)dest;
        dest = v253 + 1;
        goto LABEL_268;
      }
      if ( (_DWORD)v40 != -2146959360 )
        goto LABEL_28;
      v51 = -117;
      v52 = 2;
      v53 = 1;
      v54 = 139;
      *((_BYTE *)dest + 3) = BYTE1(v50);
      *((_BYTE *)dest + 4) = v50;
      *(_DWORD *)(v14 + 240) = v50;
      v55 = &v362;
      goto LABEL_49;
    }
    if ( (_DWORD)v40 == -2147287040 )
    {
      if ( (unsigned __int16)v39 > 9u )
      {
        v202 = (unsigned int)v34[1];
        v203 = (unsigned int)v34[2];
        v364 = (unsigned int *)(v34 + 2);
        v326 = v203 | (v202 << 32);
      }
      else
      {
        v326 = *(_QWORD *)(v14 + 8LL * (unsigned __int16)v39 + 88);
      }
      if ( *(_DWORD *)(v14 + 236) < (unsigned int)v50 )
      {
        *(_QWORD *)(v14 + 168) = v326;
        *v313 = 115;
        return 0;
      }
      goto LABEL_272;
    }
    if ( (unsigned int)v40 > 0x80030000 )
    {
      if ( (_DWORD)v40 != -2147221504 )
      {
        if ( (_DWORD)v40 != -2147155968 )
          goto LABEL_28;
        v364 = (unsigned int *)++v34;
        goto LABEL_219;
      }
LABEL_256:
      v153 = (unsigned int *)(v34 + 1);
      v154 = (unsigned int)v34[3];
      v155 = (unsigned int *)(v34 + 3);
      LODWORD(v321) = v40;
      v364 = v153;
      v156 = *(v155 - 1);
      v157 = *(v155 - 2);
      LODWORD(v309) = v35;
      v364 = v155;
      v326 = v154 | (v156 << 32);
      v332 = (unsigned __int64 *)(*(_QWORD *)(v14 + 56) + v326);
      v158 = sub_840EA0(v332, v157, v14, v50, v40, a6);
      v35 = (int)v309;
      if ( !v158 )
        goto LABEL_710;
      LODWORD(v50) = *(_DWORD *)(v158 + 8);
      if ( (_DWORD)v321 != -2145058816 )
      {
        v159 = 1 << v50;
        if ( (unsigned int)v50 >= 0x20 )
          v159 = 1;
        *(_DWORD *)(v14 + 276) |= v159;
        if ( *(_DWORD *)(v14 + 272) < (unsigned int)v50 )
          *(_DWORD *)(v14 + 272) = v50;
        if ( *(__int16 *)(v158 + 14) < 0 )
        {
          v362 = 0;
          LODWORD(v368) = 0;
          if ( !v38 )
          {
            LODWORD(v309) = v35;
            v287 = sub_841320(v332, v157, &v368, &v362, v313, v14);
            v35 = (int)v309;
            if ( !v287 )
              return 0;
          }
          v160 = -2;
          v161 = dest;
          if ( v310 != -1 )
            v160 = v310;
          v162 = v311 & 8;
          dest = (char *)dest + 1;
          v310 = v160;
          *v161 = (v162 != 0) + 116;
          *(_BYTE *)dest = BYTE1(v368);
          *((_BYTE *)dest + 1) = v368;
          v163 = dest;
          dest = (char *)dest + 2;
          v163[2] = BYTE1(v362);
          *((_BYTE *)dest + 1) = v362;
          v164 = dest;
          if ( v162 )
          {
            dest = (char *)dest + 3;
            v164[2] = (v317 >> 15) & 2 | ((unsigned __int8)v317 >> 7);
          }
          else
          {
            dest = (char *)dest + 2;
          }
LABEL_268:
          v37 = 0;
          v34 = (int *)(v364 + 1);
          goto LABEL_58;
        }
LABEL_272:
        if ( v310 == -1 )
        {
          v322 = -2;
          v310 = -2;
        }
        v165 = dest;
        dest = (char *)dest + 1;
        if ( (v311 & 8) != 0 )
        {
          v166 = v317;
          *v165 = 115;
          *(_BYTE *)dest = BYTE1(v50);
          *((_BYTE *)dest + 1) = v50;
          v167 = dest;
          dest = (char *)dest + 3;
          v167[2] = (v166 >> 15) & 2 | ((unsigned __int8)v166 >> 7);
        }
        else
        {
          *v165 = 114;
          *(_BYTE *)dest = BYTE1(v50);
          *((_BYTE *)dest + 1) = v50;
          dest = (char *)dest + 2;
        }
        v168 = 1 << v50;
        if ( (unsigned int)v50 >= 0x20 )
          v168 = 1;
        *(_DWORD *)(v14 + 276) |= v168;
        if ( *(_DWORD *)(v14 + 272) < (unsigned int)v50 )
        {
          v169 = v364;
          *(_DWORD *)(v14 + 272) = v50;
          v37 = 0;
          v34 = (int *)(v169 + 1);
          goto LABEL_58;
        }
        goto LABEL_268;
      }
LABEL_76:
      *(_BYTE *)dest = 118;
      *((_BYTE *)dest + 1) = BYTE1(v50);
      *((_BYTE *)dest + 2) = v50;
      v64 = v364;
      n = 3;
      v65 = (char *)dest + 3;
      dest = (char *)dest + 3;
      v66 = v364[1];
      LOWORD(v66) = 0;
      if ( v66 == -2146041856 || (v364[1] & 0xFFFE0000) == 0x80180000 )
      {
        if ( v38 )
        {
          LODWORD(v309) = v35;
          if ( !(unsigned int)sub_841660(v364, v326, v313, v14) )
            return 0;
          v67 = *(_QWORD *)(v14 + 344);
          v35 = (int)v309;
          v68 = 3LL * *(_QWORD *)(v67 + 8);
          n += v68;
          *v31 += v68;
          v64 = &v364[*(_QWORD *)(v67 + 16)];
        }
        else
        {
          v239 = *(_QWORD **)(v14 + 336);
          v240 = (__int16 *)(v239 + 3);
          v241 = (unsigned __int64)v239 + 2 * v239[1] + 24;
          do
          {
            *v65 = -109;
            v242 = *v240++;
            *((_BYTE *)dest + 1) = HIBYTE(v242);
            *((_BYTE *)dest + 2) = *(v240 - 1);
            v65 = (char *)dest + 3;
            dest = (char *)dest + 3;
          }
          while ( (unsigned __int64)v240 < v241 );
          v243 = v239[1];
          LODWORD(v309) = v35;
          n += 3 * v243;
          v364 += v239[2];
          *(_QWORD *)(v14 + 336) = *v239;
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*(_QWORD *)v14 + 8LL))(v239, *(_QWORD *)(*(_QWORD *)v14 + 16LL));
          v64 = v364;
          v35 = (int)v309;
        }
      }
      v69 = v310;
      v34 = (int *)(v64 + 1);
      *(_DWORD *)(v14 + 328) = 1;
      if ( v69 == -1 )
      {
        v322 = -2;
        v37 = 0;
        v328 = 0;
        v323 = v315;
        v310 = -2;
      }
      else
      {
        v322 = v69;
        v37 = 0;
        v328 = 0;
        v323 = v315;
      }
      goto LABEL_58;
    }
    if ( (_DWORD)v40 == -2147352576 )
    {
      v51 = -121;
      v52 = 0;
      v53 = 1;
      v54 = 135;
      v55 = &v362;
      goto LABEL_49;
    }
    if ( (unsigned int)v40 > 0x80020000 )
      goto LABEL_28;
    if ( (v39 & 0xFFFE0000) != 0x80000000 )
    {
      if ( (int)v40 < 0 )
        goto LABEL_28;
LABEL_219:
      v127 = *v34;
LABEL_220:
      v336 = v127;
      v37 = 0;
      v128 = 30 - ((v311 & 8) == 0);
LABEL_221:
      v129 = dest;
      v130 = v336;
      dest = (char *)dest + 1;
      *v129 = v128;
      *(_BYTE *)dest = v130;
      v131 = (unsigned __int8 *)dest;
      dest = (char *)dest + 1;
      if ( v130 == 13 || v130 == 10 )
      {
        *(_DWORD *)(v14 + 232) |= 0x800u;
        if ( v310 == -1 )
          goto LABEL_255;
LABEL_224:
        v132 = *v131;
        v322 = v310;
        v133 = *(_DWORD *)(v14 + 308) | v329;
        v323 = v315;
      }
      else
      {
        if ( v310 != -1 )
          goto LABEL_224;
LABEL_255:
        v133 = v316;
        v322 = -2;
        v315 = v336;
        v310 = v329;
        v132 = v318;
      }
      v34 = (int *)(v364 + 1);
      v134 = v316;
      if ( v37 )
      {
        v316 = v133;
        v311 &= ~8u;
        v325 = v134;
        v324 = v318;
        v318 = v132;
        v329 = 0;
      }
      else
      {
        v152 = v318;
        v316 = v133;
        v37 = 1;
        v318 = v132;
        v325 = v134;
        v324 = v152;
      }
      goto LABEL_58;
    }
    v30 = v334;
    v216 = v34;
LABEL_463:
    v217 = *v216;
    if ( v49 == -1 )
      v30 = -1;
    v218 = (char *)dest;
    LOWORD(v217) = 0;
    if ( !v327 )
    {
      if ( *v335 != 121 )
      {
        if ( v217 == -2147418112 )
          goto LABEL_471;
        v292 = (unsigned __int16 *)v216;
        v293 = (__int16)v352;
        v294 = v335;
        v45 = v30;
        v295 = (_DWORD *)v353;
LABEL_687:
        v296 = (_WORD)dest - v293;
        v297 = (_WORD)dest - (_WORD)v294;
        do
        {
          v298 = *(_WORD *)(v294 + 1);
          *(_WORD *)(v294 + 1) = __ROL2__(v297, 8);
          v297 = __ROL2__(v298, 8);
          v294 -= v297;
        }
        while ( v298 );
        v299 = v315;
        v300 = v310;
        *v218 = 122;
        *(_WORD *)(v218 + 1) = __ROL2__(v296, 8);
        *v339 = v218 + 3;
        *v354 = v292;
        *v355 = v299;
        v301 = v316;
        *v356 = v300;
        *v295 = v318;
        *v357 = v301;
        return v45;
      }
      if ( v341 == v310 && v343 == v315 )
      {
        if ( v341 <= 0xFFFFFFFD )
          goto LABEL_479;
      }
      else if ( v342 > 0xFFFFFFFD && v341 <= 0xFFFFFFFD )
      {
        v342 = v341;
        v341 = -2;
        v344 = v343;
      }
      else
      {
        v341 = -2;
      }
      if ( v310 <= 0xFFFFFFFD && v316 > 0xFFFFFFFD )
      {
        v316 = v310;
        v310 = v341;
        v318 = v344;
LABEL_480:
        if ( ((v316 ^ v342) & 0xFFFFFFFD) != 0 )
        {
          if ( v217 != -2147418112 )
            goto LABEL_717;
          v316 = -2;
          v315 = v343;
        }
        else if ( v344 == v315 )
        {
          v316 |= v342;
          if ( v217 != -2147418112 )
          {
            v292 = (unsigned __int16 *)v216;
            v45 = v30;
            v293 = (__int16)v352;
            v294 = v335;
            v295 = (_DWORD *)v353;
            v315 = v343;
            goto LABEL_687;
          }
          v315 = v343;
        }
        else
        {
          if ( v217 != -2147418112 )
          {
LABEL_717:
            v292 = (unsigned __int16 *)v216;
            v316 = -2;
            v45 = v30;
            v293 = (__int16)v352;
            v294 = v335;
            v315 = v343;
            v295 = (_DWORD *)v353;
            goto LABEL_687;
          }
          v316 = -2;
          v315 = v343;
        }
LABEL_471:
        v219 = (__int16)v335;
        v220 = v318;
        *(_BYTE *)dest = 121;
        v335 = v218;
        v221 = (_WORD)v218 - v219;
        v344 = v220;
        v307 = v218 + 3;
        v222 = v316;
        *(_WORD *)(v218 + 1) = __ROL2__(v221, 8);
        v342 = v222;
        v371.m128i_i64[1] = (__int64)v218;
        v341 = v310;
        v343 = v315;
LABEL_468:
        v26 = *(unsigned __int16 *)v216;
        v32 = (unsigned __int16 *)(v216 + 1);
        continue;
      }
LABEL_479:
      v315 = v318;
      v310 = v341;
      v318 = v344;
      goto LABEL_480;
    }
    break;
  }
  if ( v217 == -2147418112 )
  {
    v363 += 3LL;
    v307 = (char *)(*v339 + v340);
    goto LABEL_468;
  }
  v224 = (__int16)dest;
  v45 = v30;
  *(_BYTE *)dest = 122;
  v225 = v218 + 3;
  v226 = v339;
  v227 = (unsigned __int16 *)v216;
  v228 = v343;
  v229 = (_DWORD *)v353;
  v230 = v327;
  v231 = v342;
  *((_WORD *)v225 - 1) = __ROL2__(v224 - (_WORD)v352, 8);
  v232 = v363;
  *v226 = v225;
  LODWORD(v226) = v341;
  *v354 = v227;
  *v355 = v228;
  *v356 = (unsigned int)v226;
  *v229 = v344;
  *v357 = v231;
  if ( 2147483627LL - *v230 < v232 )
  {
LABEL_504:
    *v313 = 120;
    return 0;
  }
  *v230 += v232;
  return v45;
}

