__m128i *__fastcall sub_F9EF00(__m128i *a1, __int64 a2)
{
  __m128i *v2; // r15
  __m128i *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int8 v12; // bp
  __int8 v13; // r12
  unsigned __int64 v14; // rax
  bool v15; // cl
  char v16; // si
  char v17; // si
  char v18; // cl
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  char *v26; // rbx
  char *v27; // rbp
  int v28; // edi
  char *v29; // rbx
  __int64 v30; // rdx
  __m128i *v31; // rax
  __m128i v32; // xmm7
  __m128i v33; // xmm1
  __m128i v34; // xmm6
  __int64 v35; // rax
  bool v36; // zf
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // esi
  int v43; // edi
  char *v44; // rbx
  __int64 v45; // rcx
  __m128i *v46; // rax
  __m128i v47; // xmm7
  __m128i v48; // xmm6
  __m128i v49; // xmm1
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  __m128i v53; // xmm1
  __m128i v54; // xmm0
  __int64 v55; // rax
  size_t *v56; // rbx
  __int64 v57; // rax
  size_t v58; // r12
  __int64 v59; // r13
  __int64 v60; // rbp
  size_t v61; // r9
  __m128i *v62; // r9
  size_t v63; // r15
  const void *v64; // rdi
  int v65; // eax
  bool v66; // al
  char *v67; // r12
  size_t v68; // rbp
  int v69; // eax
  bool v70; // al
  __m128i *v71; // rcx
  size_t *v72; // r14
  size_t v73; // rax
  unsigned __int64 v74; // rax
  size_t v75; // rsi
  size_t v76; // rdi
  size_t v77; // rbp
  __int64 v78; // r12
  char v79; // al
  __int64 v80; // r13
  size_t v81; // rbx
  void **v82; // r15
  size_t v83; // r15
  size_t v84; // rbp
  int v85; // eax
  void *v86; // rcx
  char *v87; // rbx
  bool v88; // al
  char *v89; // rdi
  bool v90; // al
  void *v91; // r9
  unsigned __int64 v92; // rsi
  unsigned __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  void **v96; // rbx
  __m128i *v97; // rax
  __m128i *v98; // rdi
  __m128i *v99; // r9
  __int64 v100; // rax
  void *v101; // rsi
  void **v102; // rax
  char v103; // al
  void **v104; // rbx
  __m128i *v105; // rax
  void **v106; // rdi
  __m128i *v107; // rbp
  _QWORD *v108; // rcx
  __int64 v109; // rax
  _QWORD *v110; // rax
  void *v111; // rsi
  __int64 v112; // rbp
  unsigned __int64 v113; // r12
  int v114; // esi
  char *v115; // rbx
  __int64 v116; // rax
  __m128i *v117; // rdx
  __int64 v118; // rax
  __m128i v119; // xmm6
  __m128i v120; // xmm7
  __int64 v121; // rax
  __m128i v122; // xmm6
  __m128i v123; // xmm7
  __m128i v124; // xmm7
  __m128i v125; // xmm6
  __m128i v126; // xmm7
  __int64 v127; // rax
  __int64 v128; // rax
  char *v129; // rax
  __int64 v130; // rdx
  __m128i v131; // xmm7
  __m128i v132; // xmm1
  __m128i v133; // xmm6
  __int64 v134; // rdx
  __m128i v135; // xmm7
  size_t v136; // r13
  char *v137; // rdi
  bool v138; // al
  __m128i *v139; // rbx
  _BYTE *v140; // rdi
  __m128i *v141; // rax
  __int64 v142; // rcx
  __m128i **v143; // rbx
  __m128i *v144; // r15
  __m128i *v145; // rdi
  __m128i *v146; // rax
  char *v147; // rbx
  __int64 v148; // rcx
  char *v149; // rdx
  __int64 v150; // rcx
  __m128i *v151; // rdx
  __int64 v152; // rdx
  __m128i v153; // xmm1
  __m128i v154; // xmm4
  __m128i v155; // xmm5
  __int64 v156; // rdx
  __m128i v157; // xmm7
  void **v158; // rbp
  _QWORD *v159; // rax
  void **v160; // rdi
  size_t v161; // rcx
  _QWORD *v162; // rdx
  __int64 v163; // rax
  _QWORD *v164; // rax
  void *v165; // rsi
  char v166; // al
  void **v167; // r12
  void **v168; // rax
  void **v169; // rdi
  void **v170; // rbp
  _QWORD *v171; // rcx
  __int64 v172; // rax
  _QWORD *v173; // rax
  void *v174; // rsi
  int v175; // edi
  __int64 *v176; // rdx
  __int64 v177; // rax
  size_t v178; // rdx
  size_t v179; // rdx
  unsigned __int64 v180; // rax
  unsigned int v181; // edx
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rbx
  char *v185; // rax
  char *v186; // r15
  char *v187; // rdx
  char *v188; // r13
  char *v189; // rbp
  char *v190; // r13
  int v191; // ebx
  __int64 v192; // rax
  unsigned int v193; // esi
  char *v194; // rdx
  __int64 v195; // rdi
  unsigned int v196; // edx
  __int64 v197; // rdx
  __int64 v198; // rbx
  char *v199; // rax
  char *v200; // rdx
  char *v201; // r13
  char *v202; // rbx
  unsigned __int64 v203; // rax
  char *v204; // rbp
  int v205; // r13d
  __int64 v206; // rax
  unsigned int v207; // esi
  char *v208; // rdx
  __int64 v209; // rdi
  char *v210; // rax
  unsigned int v211; // r12d
  int v212; // eax
  __int64 *v213; // rcx
  __int64 v214; // rsi
  unsigned int v215; // r12d
  __int64 v216; // rax
  int v217; // ecx
  __int64 *v218; // rsi
  unsigned __int64 v219; // rdx
  __int64 v220; // rbp
  __int64 v221; // rbx
  char *v222; // rax
  char *v223; // r12
  char *v224; // rdx
  char *v225; // r10
  char *v226; // r13
  int v227; // ebx
  char *v228; // rbp
  __int64 v229; // rdx
  unsigned int v230; // ecx
  char *v231; // rax
  __int64 v232; // rsi
  unsigned __int64 v233; // rdx
  __int64 v234; // rbx
  char *v235; // rax
  char *v236; // rdx
  char *v237; // r13
  int v238; // ebp
  char *v239; // rbx
  __int64 v240; // rdx
  int v241; // r8d
  char *v242; // rdi
  unsigned int v243; // esi
  char *v244; // rax
  __int64 v245; // rcx
  int v246; // esi
  unsigned int v247; // edx
  char *v248; // rcx
  __int64 v249; // rdi
  int v250; // esi
  unsigned int v251; // edx
  __int64 v252; // rdi
  char *v253; // rdx
  char *v254; // rcx
  char *v255; // rdx
  unsigned __int64 v256; // rdx
  unsigned __int64 v257; // rbx
  __int64 v258; // rbp
  __int64 v259; // rax
  __int64 v260; // r14
  _QWORD *v261; // rbp
  _QWORD *v262; // rdx
  int v263; // r12d
  char *v264; // r13
  int m; // ebp
  __int64 v266; // rcx
  int v267; // edi
  __int64 v268; // rsi
  unsigned int ii; // edx
  __int64 v270; // rax
  __int64 v271; // r8
  unsigned __int64 v272; // rax
  unsigned __int64 v273; // rdx
  __int64 v274; // rbp
  __int64 v275; // rax
  _QWORD *v276; // rbp
  _QWORD *v277; // rdx
  int v278; // r12d
  char *v279; // r13
  __int64 v280; // rsi
  int v281; // edi
  __int64 v282; // rcx
  unsigned int i; // edx
  __int64 v284; // rax
  __int64 v285; // r8
  _BYTE *v286; // rdi
  char *v287; // rcx
  __m128 v288; // xmm0
  __int64 v289; // rax
  __m128i **v290; // rbp
  __m128i *v291; // rdi
  char *v292; // rdx
  __m128 v293; // xmm0
  __int64 v294; // rax
  int v295; // edi
  unsigned int kk; // ecx
  char *v297; // rsi
  __int64 v298; // rax
  int v299; // r9d
  char *v300; // r8
  int v301; // edi
  unsigned int k; // ecx
  __int64 v303; // rax
  int v304; // r10d
  char *v305; // r8
  char *v306; // rdx
  char *v307; // rax
  __m128 v308; // xmm0
  char *v309; // rax
  __m128 v310; // xmm0
  size_t v311; // rdx
  int v312; // r9d
  char *v313; // rdi
  _QWORD *v314; // rbp
  _QWORD *jj; // rdx
  _QWORD *v316; // rbp
  _QWORD *j; // rdx
  size_t v318; // rdx
  unsigned int v319; // ecx
  unsigned int v320; // ecx
  unsigned int v321; // edx
  unsigned int v322; // edx
  size_t *v323; // [rsp+0h] [rbp-1C8h]
  int v324; // [rsp+0h] [rbp-1C8h]
  int v325; // [rsp+0h] [rbp-1C8h]
  char *v326; // [rsp+0h] [rbp-1C8h]
  void *v327; // [rsp+8h] [rbp-1C0h] BYREF
  void *v328; // [rsp+10h] [rbp-1B8h] BYREF
  size_t n; // [rsp+18h] [rbp-1B0h] BYREF
  void **v330; // [rsp+20h] [rbp-1A8h]
  __m128i *v331; // [rsp+28h] [rbp-1A0h]
  size_t *v332; // [rsp+30h] [rbp-198h]
  size_t *v333; // [rsp+38h] [rbp-190h]
  char *v334; // [rsp+40h] [rbp-188h]
  __int64 v335; // [rsp+48h] [rbp-180h]
  __int64 v336; // [rsp+50h] [rbp-178h]
  int v337; // [rsp+5Ch] [rbp-16Ch]
  int v338; // [rsp+60h] [rbp-168h]
  __int32 v339; // [rsp+64h] [rbp-164h]
  __m128i *v340; // [rsp+68h] [rbp-160h]
  __m128i v341[2]; // [rsp+70h] [rbp-158h] BYREF
  __m128i si128; // [rsp+90h] [rbp-138h] BYREF
  size_t v343; // [rsp+B0h] [rbp-118h] BYREF
  size_t v344; // [rsp+B8h] [rbp-110h]
  size_t v345; // [rsp+C0h] [rbp-108h]
  size_t v346; // [rsp+C8h] [rbp-100h]
  void *v347; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v348; // [rsp+D8h] [rbp-F0h]
  __int64 v349; // [rsp+E0h] [rbp-E8h] BYREF
  void *v350[2]; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i v351; // [rsp+100h] [rbp-C8h] BYREF
  unsigned int v352; // [rsp+11Ch] [rbp-ACh]
  size_t v353[2]; // [rsp+130h] [rbp-98h] BYREF
  __m128i v354; // [rsp+140h] [rbp-88h] BYREF
  __m128i v355; // [rsp+150h] [rbp-78h] BYREF
  __m128i v356; // [rsp+160h] [rbp-68h] BYREF
  __int64 v357; // [rsp+170h] [rbp-58h]
  __int64 v358; // [rsp+178h] [rbp-50h]
  int v359; // [rsp+180h] [rbp-48h]
  char v360; // [rsp+188h] [rbp-40h]

  v2 = a1;
  v4 = (__m128i *)v353;
  sub_2207330(v353, a2, "Version", 7);
  if ( !v354.m128i_i8[0]
    || (*(_OWORD *)v350 = 0, v330 = v350, (unsigned __int8)sub_2233B90(v350, v353[0], v353[1], v5, v6, v7))
    || (v341[0] = _mm_load_si128((const __m128i *)v350),
        sub_2207330(v353, a2, "MaximumDeploymentTarget", 23),
        !v354.m128i_i8[0])
    || (*(_OWORD *)v350 = 0, (v12 = sub_2233B90(v330, v353[0], v353[1], v9, v10, v11)) != 0) )
  {
    a1[4].m128i_i8[0] = 0;
    return v2;
  }
  si128 = _mm_load_si128((const __m128i *)v350);
  sub_2207330(v353, a2, "CanonicalName", 13);
  v338 = 0;
  v13 = v354.m128i_i8[0];
  if ( v354.m128i_i8[0] )
  {
    v14 = sub_2223180(v353, "0123456789", 10, 0);
    if ( v353[1] <= v14 )
      v14 = v353[1];
    v15 = v14 != 9;
    switch ( v14 )
    {
      case 6uLL:
        if ( *(_DWORD *)v353[0] == 1868783981 && *(_WORD *)(v353[0] + 4) == 30835 )
          v12 = v13;
        break;
      case 8uLL:
        v36 = *(_QWORD *)v353[0] == 0x736F656E6F687069LL;
        v338 = 5;
        if ( v36 )
          v12 = v13;
        goto LABEL_55;
      case 0xFuLL:
        if ( *(_QWORD *)v353[0] == 0x6973656E6F687069LL
          && *(_DWORD *)(v353[0] + 8) == 1634497901
          && *(_WORD *)(v353[0] + 12) == 28532
          && *(_BYTE *)(v353[0] + 14) == 114 )
        {
          v12 = v13;
          v338 = 5;
          goto LABEL_16;
        }
        v338 = 9;
        v16 = 1;
        goto LABEL_15;
      case 9uLL:
        if ( *(_QWORD *)v353[0] == 0x6F7674656C707061LL && *(_BYTE *)(v353[0] + 8) == 115 )
        {
          v12 = v13;
          v338 = 27;
        }
        else
        {
          v338 = 9;
        }
        goto LABEL_64;
    }
    v338 = 9;
LABEL_55:
    v16 = v12 | (v14 != 16);
LABEL_15:
    if ( v16 )
    {
LABEL_16:
      if ( v14 == 7 && !v12 )
      {
        if ( *(_DWORD *)v353[0] == 1668571511 && *(_WORD *)(v353[0] + 4) == 28520 && *(_BYTE *)(v353[0] + 6) == 115 )
        {
          v12 = v13;
          v338 = 28;
          goto LABEL_21;
        }
        v17 = 1;
LABEL_20:
        if ( !v17 )
        {
          v18 = v12 | v15;
          if ( *(_DWORD *)v353[0] != 1936683640 )
          {
LABEL_23:
            if ( !v18 )
            {
              if ( *(_QWORD *)v353[0] == 0x696B726576697264LL && *(_BYTE *)(v353[0] + 8) == 116 )
                v338 = 30;
              else
                v338 = 0;
              goto LABEL_27;
            }
            goto LABEL_24;
          }
          goto LABEL_59;
        }
LABEL_21:
        if ( (unsigned __int8)v12 | (v14 != 11) )
        {
LABEL_22:
          v18 = v12 | v15;
          goto LABEL_23;
        }
        if ( *(_QWORD *)v353[0] != 0x616C756D69737278LL
          || *(_WORD *)(v353[0] + 8) != 28532
          || *(_BYTE *)(v353[0] + 10) != 114 )
        {
LABEL_24:
          v19 = 0;
          if ( v12 )
            v19 = v338;
          v338 = v19;
          goto LABEL_27;
        }
LABEL_59:
        v338 = 31;
        goto LABEL_27;
      }
      goto LABEL_64;
    }
    if ( !(*(_QWORD *)v353[0] ^ 0x737674656C707061LL | *(_QWORD *)(v353[0] + 8) ^ 0x726F74616C756D69LL) )
    {
      v12 = v13;
      v338 = 27;
LABEL_65:
      v17 = v12 | (v14 != 4);
      goto LABEL_20;
    }
LABEL_64:
    if ( !((unsigned __int8)v12 | (v14 != 14)) )
    {
      if ( *(_QWORD *)v353[0] == 0x6D69736863746177LL
        && *(_DWORD *)(v353[0] + 8) == 1952541813
        && *(_WORD *)(v353[0] + 12) == 29295 )
      {
        v12 = v13;
        v338 = 28;
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    goto LABEL_65;
  }
LABEL_27:
  v20 = sub_2207300(a2, "VersionMap", 10);
  v336 = v20;
  if ( !v20 )
  {
    LODWORD(v335) = 0;
    v339 = 0;
    v337 = 0;
    goto LABEL_49;
  }
  if ( !*(_DWORD *)(v20 + 8) )
    goto LABEL_29;
  v56 = *(size_t **)v20;
  v57 = *(unsigned int *)(v20 + 16);
  v344 = -1;
  v58 = 0;
  v59 = -1;
  v345 = 0;
  v323 = &v56[8 * v57];
  v328 = nullptr;
  if ( !(unsigned __int8)sub_2205990(-1, 0, 0) )
  {
    v167 = v330;
    sub_2206BA0(v330, -1, 0);
    v168 = (void **)operator new(0x20u);
    v169 = (void **)v350[0];
    v170 = v168 + 2;
    v328 = v168;
    *v168 = v168 + 2;
    if ( v169 == v167 + 2 )
    {
      v173 = v328;
      v169 = v170;
      *((__m128i *)v328 + 1) = _mm_load_si128(&v351);
    }
    else
    {
      v171 = v328;
      v172 = v351.m128i_i64[0];
      *(_QWORD *)v328 = v169;
      v171[2] = v172;
      v173 = v171;
    }
    v174 = v350[1];
    v350[1] = nullptr;
    v351.m128i_i8[0] = 0;
    v173[1] = v174;
    v350[0] = v330 + 2;
    if ( (unsigned __int8)sub_2205990(v169, v174, 0) )
    {
LABEL_254:
      v59 = *(_QWORD *)v328;
      v58 = *((_QWORD *)v328 + 1);
      if ( v350[0] != v330 + 2 )
        operator delete(v350[0]);
      goto LABEL_67;
    }
    sub_2206BA0(v353, *(_QWORD *)v328, *((_QWORD *)v328 + 1));
    v286 = *(_BYTE **)v328;
    if ( (__m128i *)v353[0] == &v354 )
    {
      v318 = v353[1];
      if ( v353[1] )
      {
        if ( v353[1] == 1 )
          *v286 = v354.m128i_i8[0];
        else
          memcpy(v286, (const void *)v353[0], v353[1]);
        v318 = v353[1];
        v286 = *(_BYTE **)v328;
      }
      *((_QWORD *)v328 + 1) = v318;
      v286[v318] = 0;
      goto LABEL_388;
    }
    v327 = (void *)v354.m128i_i64[0];
    if ( v170 == (void **)v286 )
    {
      v307 = (char *)v328;
      v308 = _mm_loadh_ps((const double *)&v327);
      *(_QWORD *)v328 = v353[0];
      *(__m128 *)(v307 + 8) = v308;
    }
    else
    {
      v287 = (char *)v328;
      v288 = _mm_loadh_ps((const double *)&v327);
      v289 = *((_QWORD *)v328 + 2);
      *(_QWORD *)v328 = v353[0];
      *(__m128 *)(v287 + 8) = v288;
      if ( v286 )
      {
        v353[0] = (size_t)v286;
        v354.m128i_i64[0] = v289;
        goto LABEL_388;
      }
    }
    v353[0] = (size_t)&v354;
LABEL_388:
    v353[1] = 0;
    *(_BYTE *)v353[0] = 0;
    if ( (__m128i *)v353[0] != &v354 )
      operator delete((void *)v353[0]);
    goto LABEL_254;
  }
LABEL_67:
  v60 = -2;
  v349 = 0;
  v348 = -2;
  if ( !(unsigned __int8)sub_2205990(-2, 0, 0) )
  {
    v158 = v330;
    sub_2206BA0(v330, -2, 0);
    v159 = (_QWORD *)operator new(0x20u);
    v160 = (void **)v350[0];
    v161 = (size_t)(v159 + 2);
    v327 = v159;
    *v159 = v159 + 2;
    if ( v160 == v158 + 2 )
    {
      v164 = v327;
      v160 = (void **)v161;
      *((__m128i *)v327 + 1) = _mm_load_si128(&v351);
    }
    else
    {
      v162 = v327;
      v163 = v351.m128i_i64[0];
      *(_QWORD *)v327 = v160;
      v162[2] = v163;
      v164 = v162;
    }
    v165 = v350[1];
    n = v161;
    v350[1] = nullptr;
    v164[1] = v165;
    v351.m128i_i8[0] = 0;
    v350[0] = v330 + 2;
    v166 = sub_2205990(v160, v165, 0);
    v71 = (__m128i *)n;
    if ( v166 )
      goto LABEL_247;
    v290 = (__m128i **)v327;
    sub_2206BA0(v353, *(_QWORD *)v327, *((_QWORD *)v327 + 1));
    v291 = *v290;
    v71 = (__m128i *)n;
    if ( (__m128i *)v353[0] == &v354 )
    {
      v311 = v353[1];
      if ( v353[1] )
      {
        if ( v353[1] == 1 )
        {
          v291->m128i_i8[0] = v354.m128i_i8[0];
        }
        else
        {
          memcpy(v291, (const void *)v353[0], v353[1]);
          v71 = (__m128i *)n;
        }
        v311 = v353[1];
        v291 = *(__m128i **)v327;
      }
      *((_QWORD *)v327 + 1) = v311;
      v291->m128i_i8[v311] = 0;
      goto LABEL_395;
    }
    n = v354.m128i_i64[0];
    if ( v71 == v291 )
    {
      v309 = (char *)v327;
      v310 = _mm_loadh_ps((const double *)&n);
      *(_QWORD *)v327 = v353[0];
      *(__m128 *)(v309 + 8) = v310;
    }
    else
    {
      v292 = (char *)v327;
      v293 = _mm_loadh_ps((const double *)&n);
      v294 = *((_QWORD *)v327 + 2);
      *(_QWORD *)v327 = v353[0];
      *(__m128 *)(v292 + 8) = v293;
      if ( v291 )
      {
        v353[0] = (size_t)v291;
        v354.m128i_i64[0] = v294;
        goto LABEL_395;
      }
    }
    v353[0] = (size_t)&v354;
LABEL_395:
    v353[1] = 0;
    *(_BYTE *)v353[0] = 0;
    if ( (__m128i *)v353[0] != &v354 )
    {
      n = (size_t)v71;
      operator delete((void *)v353[0]);
      v71 = (__m128i *)n;
    }
LABEL_247:
    v60 = *(_QWORD *)v327;
    v61 = *((_QWORD *)v327 + 1);
    if ( v350[0] != v330 + 2 )
    {
      v331 = v71;
      n = v61;
      operator delete(v350[0]);
      v71 = v331;
      v61 = n;
    }
    if ( v56 == v323 )
    {
LABEL_87:
      if ( *(__m128i **)v327 != v71 )
        operator delete(*(void **)v327);
      operator delete(v327, 0x20u);
      goto LABEL_90;
    }
    goto LABEL_69;
  }
  v327 = nullptr;
  v61 = 0;
  if ( v56 == v323 )
    goto LABEL_90;
LABEL_69:
  if ( v59 != -1 )
  {
    n = v61;
    v62 = (__m128i *)v60;
    v332 = (size_t *)v2;
    v63 = v58;
    v333 = v353;
    while ( 1 )
    {
      v67 = (char *)v56[1];
      v68 = v56[2];
      if ( v59 == -2 )
      {
        v66 = v67 + 2 == nullptr;
      }
      else
      {
        if ( v63 != v68 )
          goto LABEL_78;
        if ( !v63 )
          goto LABEL_75;
        v64 = (const void *)v56[1];
        v331 = v62;
        v65 = memcmp(v64, (const void *)v59, v63);
        v62 = v331;
        v66 = v65 == 0;
      }
      if ( v66 )
        goto LABEL_75;
LABEL_78:
      if ( v62 == (__m128i *)-1LL )
      {
        v70 = v67 + 1 == nullptr;
      }
      else if ( v62 == (__m128i *)-2LL )
      {
        v70 = v67 + 2 == nullptr;
      }
      else
      {
        if ( n != v68 )
          goto LABEL_84;
        if ( !n )
          goto LABEL_75;
        v331 = v62;
        v69 = memcmp(v67, v62, n);
        v62 = v331;
        v70 = v69 == 0;
      }
      if ( !v70 )
      {
LABEL_84:
        v2 = (__m128i *)v332;
        v4 = (__m128i *)v333;
        goto LABEL_85;
      }
LABEL_75:
      v56 += 8;
      if ( v323 == v56 )
        goto LABEL_84;
    }
  }
  v136 = v61;
  while ( 1 )
  {
    v137 = (char *)v56[1];
    if ( v137 == (char *)-1LL )
      goto LABEL_201;
    if ( v60 == -1 )
      goto LABEL_85;
    if ( v60 == -2 )
      break;
    if ( v56[2] != v136 )
      goto LABEL_85;
    if ( v136 )
    {
      v138 = memcmp(v137, (const void *)v60, v136) == 0;
      goto LABEL_208;
    }
LABEL_201:
    v56 += 8;
    if ( v323 == v56 )
      goto LABEL_85;
  }
  v138 = v137 + 2 == nullptr;
LABEL_208:
  if ( v138 )
    goto LABEL_201;
LABEL_85:
  if ( v327 )
  {
    v71 = (__m128i *)((char *)v327 + 16);
    goto LABEL_87;
  }
LABEL_90:
  if ( v328 )
  {
    if ( *(void **)v328 != (char *)v328 + 16 )
      operator delete(*(void **)v328);
    operator delete(v328, 0x20u);
  }
  v333 = (size_t *)(*(_QWORD *)v336 + ((unsigned __int64)*(unsigned int *)(v336 + 16) << 6));
  if ( v333 == v56 )
  {
LABEL_29:
    LODWORD(v335) = 0;
    v339 = 0;
    v337 = 0;
    v334 = nullptr;
    goto LABEL_30;
  }
  LODWORD(v335) = 0;
  v339 = 0;
  v337 = 0;
  v334 = nullptr;
  v332 = &v343;
  v340 = v2;
  v331 = v4;
  v72 = v56;
  while ( 2 )
  {
    v73 = v72[2];
    v353[0] = v72[1];
    v353[1] = v73;
    v74 = sub_2222D70(v331, "_", 1, 0);
    if ( v74 == -1 )
    {
      v345 = 0;
      v346 = 0;
      v343 = v353[0];
      v344 = v353[1];
    }
    else
    {
      v75 = v74 + 1;
      if ( v74 + 1 > v353[1] )
      {
        v75 = v353[1];
        v76 = 0;
      }
      else
      {
        v76 = v353[1] - v75;
      }
      v346 = v76;
      if ( v74 > v353[1] )
        v74 = v353[1];
      v343 = v353[0];
      v344 = v74;
      v345 = v75 + v353[0];
    }
    if ( !(unsigned int)sub_2222570(v332, "ios", 3) )
    {
      sub_2222710(&v347, v332 + 2);
      v354.m128i_i64[0] = (__int64)&v347;
      v353[0] = (size_t)"--";
      v355.m128i_i16[0] = 1027;
      sub_2296470(v330, v331);
      if ( v347 != &v349 )
        operator delete(v347);
      if ( !v352 )
        goto LABEL_150;
      v92 = *((_WORD *)v72 + 12) == 7 ? (unsigned __int64)(v72 + 4) : 0LL;
      sub_F9C6D0(v331, v92, si128.m128i_u64[0], si128.m128i_u64[1]);
      if ( !v360 )
        goto LABEL_150;
      v112 = (41LL * v352) | 0xCD00000000LL;
      v113 = ((0xBF58476D1CE4E5B9LL * v112) >> 31) ^ (0xBF58476D1CE4E5B9LL * v112);
      if ( (_DWORD)v335 )
      {
        v93 = (unsigned int)(v335 - 1);
        v114 = v113 & (v335 - 1);
        v115 = &v334[104 * v114];
        v116 = *(_QWORD *)v115;
        if ( v112 == *(_QWORD *)v115 )
        {
LABEL_167:
          v117 = (__m128i *)(v115 + 8);
          if ( !v115[96] )
          {
LABEL_168:
            v118 = v357;
            v117[5].m128i_i8[8] = 1;
            v119 = _mm_load_si128((const __m128i *)v353);
            v120 = _mm_load_si128(&v354);
            v357 = 0;
            v117[4].m128i_i64[0] = v118;
            v121 = v358;
            *v117 = v119;
            v122 = _mm_load_si128(&v355);
            v117[4].m128i_i64[1] = v121;
            LODWORD(v121) = v359;
            v117[1] = v120;
            v123 = _mm_load_si128(&v356);
            v117[5].m128i_i32[0] = v121;
            v358 = 0;
            v359 = 0;
            v117[2] = v122;
            v117[3] = v123;
LABEL_169:
            operator delete();
            goto LABEL_150;
          }
          v124 = _mm_load_si128(&v354);
          *(__m128i *)(v115 + 8) = _mm_load_si128((const __m128i *)v353);
          v125 = _mm_load_si128(&v355);
          *(__m128i *)(v115 + 24) = v124;
          v126 = _mm_load_si128(&v356);
          *(__m128i *)(v115 + 40) = v125;
          *(__m128i *)(v115 + 56) = v126;
          operator delete();
          v127 = v357;
          v36 = v360 == 0;
          v357 = 0;
          *((_QWORD *)v115 + 9) = v127;
          v128 = v358;
          v358 = 0;
          *((_QWORD *)v115 + 10) = v128;
          LODWORD(v128) = v359;
          v359 = 0;
          *((_DWORD *)v115 + 22) = v128;
          if ( !v36 )
            goto LABEL_169;
LABEL_150:
          if ( v350[0] != v330 + 2 )
            operator delete(v350[0]);
          goto LABEL_103;
        }
        v175 = 1;
        v176 = nullptr;
        if ( v116 != -1 )
        {
          while ( 1 )
          {
            if ( !v176 && v116 == -2 )
              v176 = (__int64 *)v115;
            v94 = (unsigned int)(v175 + 1);
            v114 = v93 & (v175 + v114);
            v115 = &v334[104 * v114];
            v116 = *(_QWORD *)v115;
            if ( v112 == *(_QWORD *)v115 )
              goto LABEL_167;
            if ( v116 == -1 )
            {
              if ( v176 )
                goto LABEL_258;
              break;
            }
            ++v175;
          }
        }
        v176 = (__int64 *)v115;
LABEL_258:
        ++v337;
        if ( 4 * v337 < (unsigned int)(3 * v335) )
        {
          if ( (int)v335 - v339 - v337 > (unsigned int)v335 >> 3 )
          {
            v177 = *v176;
            goto LABEL_261;
          }
          v196 = 64;
          if ( ((unsigned int)((((((((v93 | (v93 >> 1)) >> 2) | v93 | (v93 >> 1)) >> 4)
                                | ((v93 | (v93 >> 1)) >> 2)
                                | v93
                                | (v93 >> 1)) >> 8)
                              | ((((v93 | (v93 >> 1)) >> 2) | v93 | (v93 >> 1)) >> 4)
                              | ((v93 | (v93 >> 1)) >> 2)
                              | v93
                              | (v93 >> 1)) >> 16)
              | (unsigned int)((((((v93 | (v93 >> 1)) >> 2) | v93 | (v93 >> 1)) >> 4)
                              | ((v93 | (v93 >> 1)) >> 2)
                              | v93
                              | (v93 >> 1)) >> 8)
              | (unsigned int)((((v93 | (v93 >> 1)) >> 2) | v93 | (v93 >> 1)) >> 4)
              | (unsigned int)((v93 | (v93 >> 1)) >> 2)
              | (unsigned int)v93
              | (unsigned int)(v93 >> 1))
             + 1 >= 0x40 )
            v196 = (((((((((v93 | (v93 >> 1)) >> 2) | v93 | (v93 >> 1)) >> 4)
                      | ((v93 | (v93 >> 1)) >> 2)
                      | v93
                      | (v93 >> 1)) >> 8)
                    | ((((v93 | (v93 >> 1)) >> 2) | v93 | (v93 >> 1)) >> 4)
                    | ((v93 | (v93 >> 1)) >> 2)
                    | v93
                    | (v93 >> 1)) >> 16)
                  | ((((((v93 | (v93 >> 1)) >> 2) | v93 | (v93 >> 1)) >> 4)
                    | ((v93 | (v93 >> 1)) >> 2)
                    | v93
                    | (v93 >> 1)) >> 8)
                  | ((((v93 | (v93 >> 1)) >> 2) | v93 | (v93 >> 1)) >> 4)
                  | ((v93 | (v93 >> 1)) >> 2)
                  | v93
                  | (v93 >> 1))
                 + 1;
          LODWORD(v327) = v196;
          v197 = 13LL * v196;
          v198 = 8 * v197;
          v199 = (char *)sub_220C370(8 * v197, 8, v197, v93, v94, v95);
          v186 = v199;
          if ( v334 )
          {
            v200 = &v199[v198];
            v335 = 104LL * (unsigned int)v335;
            v201 = &v334[v335];
            do
            {
              *(_QWORD *)v199 = -1;
              v199 += 104;
            }
            while ( v200 != v199 );
            v202 = v334;
            LODWORD(v328) = 0;
            LODWORD(n) = (_DWORD)v327 - 1;
            v203 = ((0xBF58476D1CE4E5B9LL * v112) >> 31) ^ (0xBF58476D1CE4E5B9LL * v112);
            v113 = v112;
            v204 = v201;
            v205 = v203;
            do
            {
              v206 = *(_QWORD *)v202;
              if ( (unsigned __int64)(*(_QWORD *)v202 + 2LL) > 1 )
              {
                v207 = (((0xBF58476D1CE4E5B9LL * v206) >> 31) ^ (484763065 * v206)) & n;
                v208 = &v186[104 * v207];
                v209 = *(_QWORD *)v208;
                if ( v206 != *(_QWORD *)v208 )
                {
                  v304 = 1;
                  v305 = nullptr;
                  if ( v209 != -1 )
                  {
                    while ( 1 )
                    {
                      if ( v209 == -2 && !v305 )
                        v305 = v208;
                      v207 = n & (v304 + v207);
                      v208 = &v186[104 * v207];
                      v209 = *(_QWORD *)v208;
                      if ( v206 == *(_QWORD *)v208 )
                        break;
                      if ( v209 == -1 )
                      {
                        if ( v305 )
                          v208 = v305;
                        break;
                      }
                      ++v304;
                    }
                  }
                }
                *(_QWORD *)v208 = v206;
                sub_F9EE80((__m128i *)(v208 + 8), (const __m128i *)(v202 + 8));
                LODWORD(v328) = (_DWORD)v328 + 1;
                if ( v202[96] )
                  operator delete();
              }
              v202 += 104;
            }
            while ( v204 != v202 );
            v112 = v113;
            LODWORD(v113) = v205;
            operator delete();
          }
          else
          {
            v253 = &v199[v198];
            do
            {
              *(_QWORD *)v199 = -1;
              v199 += 104;
            }
            while ( v253 != v199 );
            LODWORD(v328) = 0;
            LODWORD(n) = (_DWORD)v327 - 1;
          }
          v211 = n & v113;
          v212 = 1;
          v213 = nullptr;
          while ( 1 )
          {
            v176 = (__int64 *)&v186[104 * v211];
            v214 = *v176;
            if ( v112 == *v176 )
            {
              v337 = (_DWORD)v328 + 1;
              goto LABEL_306;
            }
            if ( v214 == -1 )
              break;
            if ( v214 != -2 || v213 )
              v176 = v213;
            v213 = v176;
            v211 = n & (v212 + v211);
            ++v212;
          }
          if ( v213 )
          {
            v334 = v186;
            v339 = 0;
            LODWORD(v335) = (_DWORD)v327;
            v176 = v213;
            v337 = (_DWORD)v328 + 1;
            v177 = *v213;
LABEL_261:
            if ( v177 == -1 )
              goto LABEL_263;
            goto LABEL_262;
          }
LABEL_311:
          v334 = v186;
          v339 = 0;
          v337 = (_DWORD)v328 + 1;
          LODWORD(v335) = (_DWORD)v327;
LABEL_263:
          *v176 = v112;
          memset(v176 + 1, 0, 0x60u);
          v117 = (__m128i *)(v176 + 1);
          if ( v360 )
            goto LABEL_168;
          goto LABEL_150;
        }
      }
      v180 = (((((((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v335 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v335 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v335 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v335 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1);
      v181 = 64;
      v182 = ((v180 >> 16) | v180) + 1;
      if ( (unsigned int)v182 >= 0x40 )
        v181 = v182;
      LODWORD(v327) = v181;
      v183 = 13LL * v181;
      v184 = 8 * v183;
      v185 = (char *)sub_220C370(8 * v183, 8, v183, v93, v94, v95);
      v186 = v185;
      if ( v334 )
      {
        v187 = &v185[v184];
        v335 = 104LL * (unsigned int)v335;
        v188 = &v334[v335];
        do
        {
          *(_QWORD *)v185 = -1;
          v185 += 104;
        }
        while ( v187 != v185 );
        LODWORD(n) = (_DWORD)v327 - 1;
        if ( v188 == v334 )
        {
          v337 = 1;
          LODWORD(v328) = 0;
        }
        else
        {
          v328 = (void *)v112;
          v189 = v188;
          v190 = v334;
          v191 = 0;
          do
          {
            v192 = *(_QWORD *)v190;
            if ( (unsigned __int64)(*(_QWORD *)v190 + 2LL) > 1 )
            {
              v193 = n & (((0xBF58476D1CE4E5B9LL * v192) >> 31) ^ (484763065 * v192));
              v194 = &v186[104 * v193];
              v195 = *(_QWORD *)v194;
              if ( *(_QWORD *)v194 != v192 )
              {
                v299 = 1;
                v300 = nullptr;
                if ( v195 != -1 )
                {
                  while ( 1 )
                  {
                    if ( !v300 && v195 == -2 )
                      v300 = v194;
                    v193 = n & (v299 + v193);
                    v194 = &v186[104 * v193];
                    v195 = *(_QWORD *)v194;
                    if ( v192 == *(_QWORD *)v194 )
                      break;
                    if ( v195 == -1 )
                    {
                      if ( v300 )
                        v194 = v300;
                      break;
                    }
                    ++v299;
                  }
                }
              }
              *(_QWORD *)v194 = v192;
              ++v191;
              sub_F9EE80((__m128i *)(v194 + 8), (const __m128i *)(v190 + 8));
              if ( v190[96] )
                operator delete();
            }
            v190 += 104;
          }
          while ( v189 != v190 );
          v112 = (__int64)v328;
          LODWORD(v328) = v191;
          v337 = v191 + 1;
        }
        operator delete();
      }
      else
      {
        v254 = &v185[v184];
        do
        {
          *(_QWORD *)v185 = -1;
          v185 += 104;
        }
        while ( v254 != v185 );
        v337 = 1;
        LODWORD(v328) = 0;
        LODWORD(n) = (_DWORD)v327 - 1;
      }
      v215 = n & v113;
      v176 = (__int64 *)&v186[104 * v215];
      v216 = *v176;
      if ( v112 != *v176 )
      {
        v217 = 1;
        v218 = nullptr;
        if ( v216 == -1 )
          goto LABEL_311;
        while ( 1 )
        {
          if ( !v218 && v216 == -2 )
            v218 = v176;
          v215 = n & (v217 + v215);
          v176 = (__int64 *)&v186[104 * v215];
          v216 = *v176;
          if ( v112 == *v176 )
            break;
          if ( v216 == -1 )
          {
            if ( !v218 )
              goto LABEL_311;
            v177 = *v218;
            v334 = v186;
            v176 = v218;
            v339 = 0;
            LODWORD(v335) = (_DWORD)v327;
            goto LABEL_261;
          }
          ++v217;
        }
      }
LABEL_306:
      v334 = v186;
      v339 = 0;
      LODWORD(v335) = (_DWORD)v327;
LABEL_262:
      --v339;
      goto LABEL_263;
    }
LABEL_103:
    v72 += 8;
    v344 = -1;
    v77 = 0;
    v78 = -1;
    v345 = 0;
    v79 = sub_2205990(-1, 0, 0);
    v327 = nullptr;
    if ( v79 )
      goto LABEL_104;
    v104 = v330;
    sub_2206BA0(v330, -1, 0);
    v105 = (__m128i *)operator new(0x20u);
    v106 = (void **)v350[0];
    v107 = v105 + 1;
    v327 = v105;
    v105->m128i_i64[0] = (__int64)v105[1].m128i_i64;
    if ( v106 == v104 + 2 )
    {
      v110 = v327;
      v106 = (void **)v107;
      *((__m128i *)v327 + 1) = _mm_load_si128(&v351);
    }
    else
    {
      v108 = v327;
      v109 = v351.m128i_i64[0];
      *(_QWORD *)v327 = v106;
      v108[2] = v109;
      v110 = v108;
    }
    v111 = v350[1];
    v350[1] = nullptr;
    v351.m128i_i8[0] = 0;
    v110[1] = v111;
    v350[0] = v330 + 2;
    if ( !(unsigned __int8)sub_2205990(v106, v111, 0) )
    {
      v143 = (__m128i **)v327;
      v144 = v331;
      sub_2206BA0(v331, *(_QWORD *)v327, *((_QWORD *)v327 + 1));
      v145 = *v143;
      v146 = *v143;
      if ( (__m128i *)v353[0] == &v144[1] )
      {
        v178 = v353[1];
        if ( v353[1] )
        {
          if ( v353[1] == 1 )
            v145->m128i_i8[0] = v354.m128i_i8[0];
          else
            memcpy(v145, (const void *)v353[0], v353[1]);
          v178 = v353[1];
          v145 = *(__m128i **)v327;
        }
        *((_QWORD *)v327 + 1) = v178;
        v145->m128i_i8[v178] = 0;
        v146 = (__m128i *)v353[0];
        goto LABEL_221;
      }
      if ( v107 == v145 )
      {
        v210 = (char *)v327;
        v328 = (void *)v354.m128i_i64[0];
        *(_QWORD *)v327 = v353[0];
        *(__m128 *)(v210 + 8) = _mm_loadh_ps((const double *)&v328);
      }
      else
      {
        v328 = (void *)v354.m128i_i64[0];
        v147 = (char *)v327;
        v148 = *((_QWORD *)v327 + 2);
        *(_QWORD *)v327 = v353[0];
        *(__m128 *)(v147 + 8) = _mm_loadh_ps((const double *)&v328);
        if ( v145 )
        {
          v353[0] = (size_t)v145;
          v354.m128i_i64[0] = v148;
          goto LABEL_221;
        }
      }
      v146 = v331 + 1;
      v353[0] = (size_t)&v331[1];
LABEL_221:
      v353[1] = 0;
      v146->m128i_i8[0] = 0;
      if ( (__m128i *)v353[0] != &v331[1] )
        operator delete((void *)v353[0]);
    }
    v78 = *(_QWORD *)v327;
    v77 = *((_QWORD *)v327 + 1);
    if ( v350[0] != v330 + 2 )
      operator delete(v350[0]);
LABEL_104:
    v80 = -2;
    v349 = 0;
    v348 = -2;
    if ( (unsigned __int8)sub_2205990(-2, 0, 0) )
    {
      v81 = 0;
      v82 = nullptr;
      if ( v72 == v323 )
        goto LABEL_134;
      goto LABEL_106;
    }
    v96 = v330;
    sub_2206BA0(v330, -2, 0);
    v97 = (__m128i *)operator new(0x20u);
    v98 = (__m128i *)v350[0];
    v99 = v97 + 1;
    v82 = (void **)v97;
    v97->m128i_i64[0] = (__int64)v97[1].m128i_i64;
    if ( v98 == (__m128i *)(v96 + 2) )
    {
      v98 = v97 + 1;
      v97[1] = _mm_load_si128(&v351);
    }
    else
    {
      v100 = v351.m128i_i64[0];
      *v82 = v98;
      v82[2] = (void *)v100;
    }
    v101 = v350[1];
    v102 = v330;
    v328 = v99;
    v350[1] = nullptr;
    v82[1] = v101;
    v350[0] = v102 + 2;
    v351.m128i_i8[0] = 0;
    v103 = sub_2205990(v98, v101, 0);
    v91 = v328;
    if ( !v103 )
    {
      v139 = v331;
      sub_2206BA0(v331, *v82, v82[1]);
      v140 = *v82;
      v91 = v328;
      v141 = (__m128i *)*v82;
      if ( (__m128i *)v353[0] == &v139[1] )
      {
        v179 = v353[1];
        if ( v353[1] )
        {
          if ( v353[1] == 1 )
          {
            *v140 = v354.m128i_i8[0];
            v140 = *v82;
          }
          else
          {
            memcpy(v140, (const void *)v353[0], v353[1]);
            v140 = *v82;
            v91 = v328;
          }
          v179 = v353[1];
        }
        v82[1] = (void *)v179;
        v140[v179] = 0;
        v141 = (__m128i *)v353[0];
        goto LABEL_215;
      }
      if ( v328 == v140 )
      {
        v328 = (void *)v354.m128i_i64[0];
        *v82 = (void *)v353[0];
        *(__m128 *)(v82 + 1) = _mm_loadh_ps((const double *)&v328);
      }
      else
      {
        v328 = (void *)v354.m128i_i64[0];
        v142 = (__int64)v82[2];
        *v82 = (void *)v353[0];
        *(__m128 *)(v82 + 1) = _mm_loadh_ps((const double *)&v328);
        if ( v140 )
        {
          v353[0] = (size_t)v140;
          v354.m128i_i64[0] = v142;
          goto LABEL_215;
        }
      }
      v141 = v331 + 1;
      v353[0] = (size_t)&v331[1];
LABEL_215:
      v353[1] = 0;
      v141->m128i_i8[0] = 0;
      if ( (__m128i *)v353[0] != &v331[1] )
      {
        v328 = v91;
        operator delete((void *)v353[0]);
        v91 = v328;
      }
    }
    v80 = (__int64)*v82;
    v81 = (size_t)v82[1];
    if ( v350[0] != v330 + 2 )
    {
      v328 = v91;
      operator delete(v350[0]);
      v91 = v328;
    }
    if ( v72 == v323 )
    {
LABEL_131:
      if ( v91 != *v82 )
        operator delete(*v82);
      operator delete(v82, 0x20u);
      goto LABEL_134;
    }
LABEL_106:
    if ( v78 != -1 )
    {
      n = (size_t)v82;
      v83 = v77;
      v84 = v81;
      while ( 1 )
      {
        v87 = (char *)v72[1];
        v86 = (void *)v72[2];
        if ( v78 == -2 )
        {
          if ( v87 == (char *)-2LL )
            goto LABEL_111;
        }
        else if ( (void *)v83 == v86 )
        {
          v328 = (void *)v72[2];
          if ( !v83 )
            goto LABEL_111;
          v85 = memcmp(v87, (const void *)v78, v83);
          v86 = v328;
          if ( !v85 )
            goto LABEL_111;
        }
        if ( v80 == -1 )
        {
          v88 = v87 + 1 == nullptr;
        }
        else if ( v80 == -2 )
        {
          v88 = v87 + 2 == nullptr;
        }
        else
        {
          if ( (void *)v84 != v86 )
            goto LABEL_120;
          if ( !v84 )
            goto LABEL_111;
          v88 = memcmp(v87, (const void *)v80, v84) == 0;
        }
        if ( !v88 )
        {
LABEL_120:
          v82 = (void **)n;
          goto LABEL_129;
        }
LABEL_111:
        v72 += 8;
        if ( v323 == v72 )
          goto LABEL_120;
      }
    }
    while ( 2 )
    {
      v89 = (char *)v72[1];
      if ( v89 == (char *)-1LL )
        goto LABEL_121;
      if ( v80 == -1 )
        break;
      if ( v80 != -2 )
      {
        if ( v72[2] != v81 )
          break;
        if ( v81 )
        {
          v90 = memcmp(v89, (const void *)v80, v81) == 0;
          goto LABEL_128;
        }
        goto LABEL_121;
      }
      v90 = v89 + 2 == nullptr;
LABEL_128:
      if ( v90 )
      {
LABEL_121:
        v72 += 8;
        if ( v323 == v72 )
          break;
        continue;
      }
      break;
    }
LABEL_129:
    if ( v82 )
    {
      v91 = v82 + 2;
      goto LABEL_131;
    }
LABEL_134:
    if ( v327 )
    {
      if ( *(void **)v327 != (char *)v327 + 16 )
        operator delete(*(void **)v327);
      operator delete(v327, 0x20u);
    }
    if ( v333 != v72 )
      continue;
    break;
  }
  v2 = v340;
  v4 = v331;
LABEL_30:
  v21 = sub_2207300(v336, "macOS_iOSMac", 12);
  if ( !v21 )
    goto LABEL_42;
  sub_F9C6D0(v4, v21, si128.m128i_u64[0], si128.m128i_u64[1]);
  if ( v360 )
  {
    if ( !(_DWORD)v335 )
      goto LABEL_312;
    v22 = (unsigned int)(v335 - 1);
    v28 = (v335 - 1) & 0x2ABAD31C;
    v29 = &v334[104 * v28];
    v30 = *(_QWORD *)v29;
    if ( *(_QWORD *)v29 == 0x171000000EDLL )
      goto LABEL_40;
    v23 = 1;
    v129 = nullptr;
    if ( v30 != -1 )
    {
      while ( 1 )
      {
        if ( !v129 && v30 == -2 )
          v129 = v29;
        v24 = (unsigned int)(v23 + 1);
        v28 = v22 & (v23 + v28);
        v29 = &v334[104 * v28];
        v30 = *(_QWORD *)v29;
        if ( *(_QWORD *)v29 == 0x171000000EDLL )
          break;
        if ( v30 == -1 )
        {
          if ( v129 )
            goto LABEL_192;
          goto LABEL_191;
        }
        v23 = (unsigned int)v24;
      }
LABEL_40:
      v31 = (__m128i *)(v29 + 8);
      if ( v29[96] )
      {
        v32 = _mm_load_si128(&v354);
        v33 = _mm_load_si128(&v355);
        *(__m128i *)(v29 + 8) = _mm_load_si128((const __m128i *)v353);
        v34 = _mm_load_si128(&v356);
        *(__m128i *)(v29 + 24) = v32;
        *(__m128i *)(v29 + 40) = v33;
        *(__m128i *)(v29 + 56) = v34;
        operator delete();
        v35 = v357;
        v36 = v360 == 0;
        v357 = 0;
        *((_QWORD *)v29 + 9) = v35;
        v37 = v358;
        v358 = 0;
        *((_QWORD *)v29 + 10) = v37;
        LODWORD(v37) = v359;
        v359 = 0;
        *((_DWORD *)v29 + 22) = v37;
        if ( v36 )
        {
LABEL_42:
          v38 = sub_2207300(v336, "iOSMac_macOS", 12);
          if ( !v38 )
          {
LABEL_48:
            v336 = (__int64)v334;
LABEL_49:
            v52 = v338;
            v53 = _mm_load_si128(v341);
            v2[4].m128i_i8[0] = 1;
            v54 = _mm_load_si128(&si128);
            v2[2].m128i_i32[0] = v52;
            v55 = v336;
            *v2 = v53;
            v2[2].m128i_i64[1] = v55;
            LODWORD(v55) = v337;
            v2[1] = v54;
            v2[3].m128i_i32[0] = v55;
            *(__m128i *)v353 = v53;
            v2[3].m128i_i32[1] = v339;
            v354 = v54;
            v2[3].m128i_i32[2] = v335;
            operator delete();
            operator delete();
            v334 = nullptr;
            goto LABEL_50;
          }
          sub_F9C6D0(v4, v38, si128.m128i_u64[0], si128.m128i_u64[1]);
          if ( !v360 )
            goto LABEL_32;
          if ( !(_DWORD)v335 )
            goto LABEL_358;
          v42 = v335 - 1;
          v43 = (v335 - 1) & 0xB9A05EBE;
          v44 = &v334[104 * v43];
          v45 = *(_QWORD *)v44;
          if ( *(_QWORD *)v44 == 0xED00000171LL )
            goto LABEL_46;
          v40 = 1;
          v149 = nullptr;
          if ( v45 != -1 )
          {
            while ( 1 )
            {
              if ( !v149 && v45 == -2 )
                v149 = v44;
              v41 = (unsigned int)(v40 + 1);
              v43 = v42 & (v40 + v43);
              v44 = &v334[104 * v43];
              v45 = *(_QWORD *)v44;
              if ( *(_QWORD *)v44 == 0xED00000171LL )
                break;
              if ( v45 == -1 )
              {
                if ( v149 )
                  goto LABEL_234;
                goto LABEL_233;
              }
              v40 = (unsigned int)v41;
            }
LABEL_46:
            v46 = (__m128i *)(v44 + 8);
            if ( v44[96] )
            {
              v47 = _mm_load_si128(&v355);
              v48 = _mm_load_si128(&v356);
              *(__m128i *)(v44 + 8) = _mm_load_si128((const __m128i *)v353);
              v49 = _mm_load_si128(&v354);
              *(__m128i *)(v44 + 40) = v47;
              *(__m128i *)(v44 + 24) = v49;
              *(__m128i *)(v44 + 56) = v48;
              operator delete();
              v50 = v357;
              v36 = v360 == 0;
              v357 = 0;
              *((_QWORD *)v44 + 9) = v50;
              v51 = v358;
              v358 = 0;
              *((_QWORD *)v44 + 10) = v51;
              LODWORD(v51) = v359;
              v359 = 0;
              *((_DWORD *)v44 + 22) = v51;
              if ( v36 )
                goto LABEL_48;
LABEL_241:
              operator delete();
              goto LABEL_48;
            }
LABEL_240:
            v152 = v357;
            v46[5].m128i_i8[8] = 1;
            v153 = _mm_load_si128((const __m128i *)v353);
            v154 = _mm_load_si128(&v354);
            v357 = 0;
            v155 = _mm_load_si128(&v355);
            v46[4].m128i_i64[0] = v152;
            v156 = v358;
            *v46 = v153;
            v157 = _mm_load_si128(&v356);
            v358 = 0;
            v46[4].m128i_i64[1] = v156;
            LODWORD(v156) = v359;
            v359 = 0;
            v46[5].m128i_i32[0] = v156;
            v46[1] = v154;
            v46[2] = v155;
            v46[3] = v157;
            goto LABEL_241;
          }
LABEL_233:
          v149 = v44;
LABEL_234:
          ++v337;
          v39 = (unsigned int)(4 * v337);
          if ( (unsigned int)v39 < 3 * (int)v335 )
          {
            v150 = (unsigned int)(v335 - v339 - v337);
            if ( (unsigned int)v150 > (unsigned int)v335 >> 3 )
            {
LABEL_236:
              if ( *(_QWORD *)v149 == -1 )
              {
LABEL_238:
                v151 = (__m128i *)(v149 + 8);
                v151[-1].m128i_i64[1] = 0xED00000171LL;
                v36 = v360 == 0;
                memset(v151, 0, 0x60u);
                if ( v36 )
                  goto LABEL_48;
                v46 = v151;
                goto LABEL_240;
              }
LABEL_237:
              --v339;
              goto LABEL_238;
            }
            v272 = ((((v42 | ((unsigned __int64)v42 >> 1)) >> 2) | v42 | ((unsigned __int64)v42 >> 1)) >> 4)
                 | ((v42 | ((unsigned __int64)v42 >> 1)) >> 2)
                 | v42
                 | ((unsigned __int64)v42 >> 1);
            v273 = v272 >> 8;
            LODWORD(v257) = (v273 | v272 | ((v273 | v272) >> 16)) + 1;
            if ( (unsigned int)v257 < 0x40 )
              LODWORD(v257) = 64;
            v274 = 104LL * (unsigned int)v257;
            v275 = sub_220C370(v274, 8, v273, v150, v40, v41);
            v260 = v275;
            if ( v334 )
            {
              v276 = (_QWORD *)(v275 + v274);
              v277 = (_QWORD *)v275;
              v327 = &v334[104 * (unsigned int)v335];
              do
              {
                *v277 = -1;
                v277 += 13;
              }
              while ( v276 != v277 );
              v278 = v257 - 1;
              v279 = v334;
              m = 0;
              do
              {
                v280 = *(_QWORD *)v279;
                if ( (unsigned __int64)(*(_QWORD *)v279 + 2LL) > 1 )
                {
                  v281 = 1;
                  v282 = 0;
                  for ( i = v278 & (((0xBF58476D1CE4E5B9LL * v280) >> 31) ^ (484763065 * v280)); ; i = v278 & v322 )
                  {
                    v284 = v260 + 104LL * i;
                    v285 = *(_QWORD *)v284;
                    if ( v280 == *(_QWORD *)v284 )
                      break;
                    if ( v285 == -1 )
                    {
                      if ( v282 )
                        v284 = v282;
                      break;
                    }
                    if ( v285 != -2 || v282 )
                      v284 = v282;
                    v322 = v281 + i;
                    v282 = v284;
                    ++v281;
                  }
                  *(_QWORD *)v284 = v280;
                  ++m;
                  sub_F9EE80((__m128i *)(v284 + 8), (const __m128i *)(v279 + 8));
                  if ( v279[96] )
                    operator delete();
                }
                v279 += 104;
              }
              while ( v327 != v279 );
              operator delete();
            }
            else
            {
              v316 = (_QWORD *)(v275 + v274);
              for ( j = (_QWORD *)v275; v316 != j; j += 13 )
                *j = -1;
              m = 0;
              v278 = v257 - 1;
            }
            v301 = 1;
            v149 = nullptr;
            for ( k = v278 & 0xB9A05EBE; ; k = v278 & v319 )
            {
              v297 = (char *)(v260 + 104LL * k);
              v303 = *(_QWORD *)v297;
              if ( *(_QWORD *)v297 == 0xED00000171LL )
                break;
              if ( v303 == -1 )
                goto LABEL_422;
              if ( v303 != -2 || v149 )
                v297 = v149;
              v319 = v301 + k;
              v149 = v297;
              ++v301;
            }
          }
          else
          {
LABEL_358:
            v256 = ((((((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v335 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v335 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 8;
            v257 = (v256
                  | (((((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v335 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v335 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)
                  | ((v256
                    | (((((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v335 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 4)
                    | (((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v335 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 16))
                 + 1;
            if ( (unsigned int)v257 < 0x40 )
              LODWORD(v257) = 64;
            v258 = 104LL * (unsigned int)v257;
            v259 = sub_220C370(v258, 8, v256, v39, v40, v41);
            v260 = v259;
            if ( v334 )
            {
              v261 = (_QWORD *)(v259 + v258);
              v262 = (_QWORD *)v259;
              v327 = (void *)(104LL * (unsigned int)v335);
              v326 = &v334[(_QWORD)v327];
              do
              {
                *v262 = -1;
                v262 += 13;
              }
              while ( v261 != v262 );
              v263 = v257 - 1;
              v264 = v334;
              for ( m = 0; v326 != v264; v264 += 104 )
              {
                v266 = *(_QWORD *)v264;
                if ( (unsigned __int64)(*(_QWORD *)v264 + 2LL) > 1 )
                {
                  v267 = 1;
                  v268 = 0;
                  for ( ii = v263 & (((0xBF58476D1CE4E5B9LL * v266) >> 31) ^ (484763065 * v266)); ; ii = v263 & v321 )
                  {
                    v270 = v260 + 104LL * ii;
                    v271 = *(_QWORD *)v270;
                    if ( v266 == *(_QWORD *)v270 )
                      break;
                    if ( v271 == -1 )
                    {
                      if ( v268 )
                        v270 = v268;
                      break;
                    }
                    if ( v271 != -2 || v268 )
                      v270 = v268;
                    v321 = v267 + ii;
                    v268 = v270;
                    ++v267;
                  }
                  *(_QWORD *)v270 = v266;
                  ++m;
                  sub_F9EE80((__m128i *)(v270 + 8), (const __m128i *)(v264 + 8));
                  if ( v264[96] )
                    operator delete();
                }
              }
              operator delete();
            }
            else
            {
              v314 = (_QWORD *)(v259 + v258);
              for ( jj = (_QWORD *)v259; v314 != jj; jj += 13 )
                *jj = -1;
              m = 0;
              v263 = v257 - 1;
            }
            v295 = 1;
            v149 = nullptr;
            for ( kk = v263 & 0xB9A05EBE; ; kk = v263 & v320 )
            {
              v297 = (char *)(v260 + 104LL * kk);
              v298 = *(_QWORD *)v297;
              if ( *(_QWORD *)v297 == 0xED00000171LL )
                break;
              if ( v298 == -1 )
              {
LABEL_422:
                if ( v149 )
                {
                  LODWORD(v335) = v257;
                  v337 = m + 1;
                  v334 = (char *)v260;
                  v339 = 0;
                  goto LABEL_236;
                }
                v149 = v297;
                LODWORD(v335) = v257;
                v337 = m + 1;
                v334 = (char *)v260;
                v339 = 0;
                goto LABEL_238;
              }
              if ( v149 || v298 != -2 )
                v297 = v149;
              v320 = v295 + kk;
              v149 = v297;
              ++v295;
            }
          }
          v149 = v297;
          LODWORD(v335) = v257;
          v337 = m + 1;
          v334 = (char *)v260;
          v339 = 0;
          goto LABEL_237;
        }
LABEL_199:
        operator delete();
        goto LABEL_42;
      }
LABEL_198:
      v130 = v357;
      v31[5].m128i_i8[8] = 1;
      v131 = _mm_load_si128((const __m128i *)v353);
      v132 = _mm_load_si128(&v354);
      v357 = 0;
      v133 = _mm_load_si128(&v356);
      v31[4].m128i_i64[0] = v130;
      v134 = v358;
      *v31 = v131;
      v135 = _mm_load_si128(&v355);
      v358 = 0;
      v31[4].m128i_i64[1] = v134;
      LODWORD(v134) = v359;
      v359 = 0;
      v31[5].m128i_i32[0] = v134;
      v31[1] = v132;
      v31[2] = v135;
      v31[3] = v133;
      goto LABEL_199;
    }
LABEL_191:
    v129 = v29;
LABEL_192:
    ++v337;
    if ( 4 * v337 < (unsigned int)(3 * v335) )
    {
      if ( (int)v335 - v339 - v337 > (unsigned int)v335 >> 3 )
      {
LABEL_194:
        if ( *(_QWORD *)v129 == -1 )
        {
LABEL_196:
          *(_QWORD *)v129 = 0x171000000EDLL;
          memset(v129 + 8, 0, 0x60u);
          if ( !v360 )
            goto LABEL_42;
          v31 = (__m128i *)(v129 + 8);
          goto LABEL_198;
        }
LABEL_195:
        --v339;
        goto LABEL_196;
      }
      v233 = (((((v22 | (v22 >> 1)) >> 2) | v22 | (v22 >> 1)) >> 4) | ((v22 | (v22 >> 1)) >> 2) | v22 | (v22 >> 1)) >> 8;
      v220 = (v233
            | ((((v22 | (v22 >> 1)) >> 2) | v22 | (v22 >> 1)) >> 4)
            | ((v22 | (v22 >> 1)) >> 2)
            | v22
            | (v22 >> 1)
            | ((v233
              | ((((v22 | (v22 >> 1)) >> 2) | v22 | (v22 >> 1)) >> 4)
              | ((v22 | (v22 >> 1)) >> 2)
              | v22
              | (v22 >> 1)) >> 16))
           + 1;
      if ( (unsigned int)v220 < 0x40 )
        LODWORD(v220) = 64;
      v234 = 104LL * (unsigned int)v220;
      v235 = (char *)sub_220C370(v234, 8, (unsigned int)v220, v22, v23, v24);
      v223 = v235;
      if ( v334 )
      {
        v236 = &v235[v234];
        v327 = (void *)(104LL * (unsigned int)v335);
        v237 = &v334[(_QWORD)v327];
        do
        {
          *(_QWORD *)v235 = -1;
          v235 += 104;
        }
        while ( v236 != v235 );
        LODWORD(v328) = v220;
        v325 = v220 - 1;
        v238 = 0;
        v239 = v334;
        do
        {
          v240 = *(_QWORD *)v239;
          if ( (unsigned __int64)(*(_QWORD *)v239 + 2LL) > 1 )
          {
            v241 = 1;
            v242 = nullptr;
            v243 = (((0xBF58476D1CE4E5B9LL * v240) >> 31) ^ (484763065 * v240)) & v325;
            while ( 1 )
            {
              v244 = &v223[104 * v243];
              v245 = *(_QWORD *)v244;
              if ( v240 == *(_QWORD *)v244 )
                break;
              if ( v245 == -1 )
              {
                if ( v242 )
                  v244 = v242;
                break;
              }
              if ( v245 != -2 || v242 )
                v244 = v242;
              v242 = v244;
              v243 = v325 & (v241 + v243);
              ++v241;
            }
            *(_QWORD *)v244 = v240;
            ++v238;
            sub_F9EE80((__m128i *)(v244 + 8), (const __m128i *)(v239 + 8));
            if ( v239[96] )
              operator delete();
          }
          v239 += 104;
        }
        while ( v237 != v239 );
        v227 = v238;
        LODWORD(v220) = (_DWORD)v328;
        operator delete();
      }
      else
      {
        v306 = &v235[v234];
        do
        {
          *(_QWORD *)v235 = -1;
          v235 += 104;
        }
        while ( v306 != v235 );
        v227 = 0;
        v325 = v220 - 1;
      }
      v250 = 1;
      v129 = nullptr;
      v251 = v325 & 0x2ABAD31C;
      while ( 1 )
      {
        v248 = &v223[104 * v251];
        v252 = *(_QWORD *)v248;
        if ( *(_QWORD *)v248 == 0x171000000EDLL )
          break;
        if ( v252 == -1 )
          goto LABEL_347;
        if ( v252 != -2 || v129 )
          v248 = v129;
        v129 = v248;
        v251 = v325 & (v250 + v251);
        ++v250;
      }
    }
    else
    {
LABEL_312:
      v219 = ((((((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v335 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v335 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 8;
      v220 = (v219
            | (((((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v335 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v335 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)
            | ((v219
              | (((((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v335 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v335 - 1) | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v335 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v335 - 1) >> 1)) >> 16))
           + 1;
      if ( (unsigned int)v220 < 0x40 )
        LODWORD(v220) = 64;
      v221 = 104LL * (unsigned int)v220;
      v222 = (char *)sub_220C370(v221, 8, (unsigned int)v220, v22, v23, v24);
      v223 = v222;
      if ( v334 )
      {
        v224 = &v222[v221];
        v327 = (void *)(104LL * (unsigned int)v335);
        v225 = &v334[(_QWORD)v327];
        do
        {
          *(_QWORD *)v222 = -1;
          v222 += 104;
        }
        while ( v224 != v222 );
        v226 = v334;
        v227 = 0;
        v324 = v220 - 1;
        if ( v225 != v334 )
        {
          LODWORD(v328) = v220;
          v228 = v225;
          do
          {
            v229 = *(_QWORD *)v226;
            if ( (unsigned __int64)(*(_QWORD *)v226 + 2LL) > 1 )
            {
              v230 = (((0xBF58476D1CE4E5B9LL * v229) >> 31) ^ (484763065 * v229)) & v324;
              v231 = &v223[104 * v230];
              v232 = *(_QWORD *)v231;
              if ( v229 != *(_QWORD *)v231 )
              {
                v312 = 1;
                v313 = nullptr;
                if ( v232 != -1 )
                {
                  while ( 1 )
                  {
                    if ( v232 == -2 && !v313 )
                      v313 = v231;
                    v230 = v324 & (v312 + v230);
                    v231 = &v223[104 * v230];
                    v232 = *(_QWORD *)v231;
                    if ( v229 == *(_QWORD *)v231 )
                      break;
                    if ( v232 == -1 )
                    {
                      if ( v313 )
                        v231 = v313;
                      break;
                    }
                    ++v312;
                  }
                }
              }
              *(_QWORD *)v231 = v229;
              ++v227;
              sub_F9EE80((__m128i *)(v231 + 8), (const __m128i *)(v226 + 8));
              if ( v226[96] )
                operator delete();
            }
            v226 += 104;
          }
          while ( v228 != v226 );
          LODWORD(v220) = (_DWORD)v328;
        }
        operator delete();
      }
      else
      {
        v255 = &v222[v221];
        do
        {
          *(_QWORD *)v222 = -1;
          v222 += 104;
        }
        while ( v255 != v222 );
        v227 = 0;
        v324 = v220 - 1;
      }
      v246 = 1;
      v129 = nullptr;
      v247 = v324 & 0x2ABAD31C;
      while ( 1 )
      {
        v248 = &v223[104 * v247];
        v249 = *(_QWORD *)v248;
        if ( *(_QWORD *)v248 == 0x171000000EDLL )
          break;
        if ( v249 == -1 )
        {
LABEL_347:
          if ( v129 )
          {
            LODWORD(v335) = v220;
            v337 = v227 + 1;
            v334 = v223;
            v339 = 0;
            goto LABEL_194;
          }
          v334 = v223;
          v337 = v227 + 1;
          v129 = v248;
          LODWORD(v335) = v220;
          v339 = 0;
          goto LABEL_196;
        }
        if ( v249 != -2 || v129 )
          v248 = v129;
        v129 = v248;
        v247 = v324 & (v246 + v247);
        ++v246;
      }
    }
    v334 = v223;
    v337 = v227 + 1;
    v129 = v248;
    LODWORD(v335) = v220;
    v339 = 0;
    goto LABEL_195;
  }
LABEL_32:
  v25 = (unsigned int)v335;
  v2[4].m128i_i8[0] = 0;
  if ( (_DWORD)v25 )
  {
    v26 = v334;
    v27 = &v334[104 * v25];
    do
    {
      if ( *(_QWORD *)v26 != -2 && *(_QWORD *)v26 != -1 && v26[96] )
        operator delete();
      v26 += 104;
    }
    while ( v27 != v26 );
  }
LABEL_50:
  operator delete();
  return v2;
}

