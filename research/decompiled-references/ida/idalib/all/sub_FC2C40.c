__m128i *__fastcall sub_FC2C40(__m128i *a1, __int64 a2)
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
  __int64 v26; // r12
  char *v27; // rbx
  char *v28; // rbp
  int v29; // edi
  char *v30; // rbx
  __int64 v31; // rdx
  __m128i *v32; // rax
  __int64 v33; // rdi
  __m128i v34; // xmm7
  __m128i v35; // xmm1
  __int64 v36; // rsi
  __m128i v37; // xmm6
  __int64 v38; // rax
  bool v39; // zf
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // esi
  int v46; // edi
  char *v47; // rbx
  __int64 v48; // rcx
  __m128i *v49; // rax
  __int64 v50; // rdi
  __m128i v51; // xmm7
  __m128i v52; // xmm6
  __int64 v53; // rsi
  __m128i v54; // xmm1
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  __int64 v60; // rax
  size_t *v61; // rbx
  __int64 v62; // rax
  size_t v63; // r12
  __int64 v64; // r13
  __int64 v65; // rbp
  size_t v66; // r9
  __m128i *v67; // r9
  size_t v68; // r15
  const void *v69; // rdi
  int v70; // eax
  bool v71; // al
  char *v72; // r12
  size_t v73; // rbp
  int v74; // eax
  bool v75; // al
  __m128i *v76; // rcx
  size_t *v77; // r14
  size_t v78; // rax
  unsigned __int64 v79; // rax
  size_t v80; // rsi
  size_t v81; // rdi
  size_t v82; // rbp
  __int64 v83; // r12
  char v84; // al
  __int64 v85; // r13
  size_t v86; // rbx
  void **v87; // r15
  size_t v88; // r15
  size_t v89; // rbp
  int v90; // eax
  void *v91; // rcx
  char *v92; // rbx
  bool v93; // al
  char *v94; // rdi
  bool v95; // al
  void *v96; // r9
  unsigned __int64 v97; // rsi
  unsigned __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  void **v101; // rbx
  __m128i *v102; // rax
  __m128i *v103; // rdi
  __m128i *v104; // r9
  __int64 v105; // rax
  void *v106; // rsi
  void **v107; // rax
  char v108; // al
  void **v109; // rbx
  __m128i *v110; // rax
  void **v111; // rdi
  __m128i *v112; // rbp
  _QWORD *v113; // rcx
  __int64 v114; // rax
  _QWORD *v115; // rax
  void *v116; // rsi
  __int64 v117; // rbp
  unsigned __int64 v118; // r12
  int v119; // esi
  char *v120; // rbx
  __int64 v121; // rax
  __m128i *v122; // rdx
  __int64 v123; // rax
  __m128i v124; // xmm6
  __m128i v125; // xmm7
  __int64 v126; // rax
  __m128i v127; // xmm6
  __m128i v128; // xmm7
  __int64 v129; // rdi
  __m128i v130; // xmm7
  __int64 v131; // rsi
  __m128i v132; // xmm6
  __m128i v133; // xmm7
  __int64 v134; // rax
  __int64 v135; // rax
  char *v136; // rax
  __int64 v137; // rdx
  __m128i v138; // xmm7
  __m128i v139; // xmm1
  __m128i v140; // xmm6
  __int64 v141; // rdx
  __m128i v142; // xmm7
  size_t v143; // r13
  char *v144; // rdi
  bool v145; // al
  __m128i *v146; // rbx
  _BYTE *v147; // rdi
  __m128i *v148; // rax
  __int64 v149; // rcx
  __m128i **v150; // rbx
  __m128i *v151; // r15
  __m128i *v152; // rdi
  __m128i *v153; // rax
  char *v154; // rbx
  __int64 v155; // rcx
  char *v156; // rdx
  __int64 v157; // rcx
  __m128i *v158; // rdx
  __int64 v159; // rdx
  __m128i v160; // xmm1
  __m128i v161; // xmm4
  __m128i v162; // xmm5
  __int64 v163; // rdx
  __m128i v164; // xmm7
  void **v165; // rbp
  _QWORD *v166; // rax
  void **v167; // rdi
  size_t v168; // rcx
  _QWORD *v169; // rdx
  __int64 v170; // rax
  _QWORD *v171; // rax
  void *v172; // rsi
  char v173; // al
  void **v174; // r12
  void **v175; // rax
  void **v176; // rdi
  void **v177; // rbp
  _QWORD *v178; // rcx
  __int64 v179; // rax
  _QWORD *v180; // rax
  void *v181; // rsi
  int v182; // edi
  __int64 *v183; // rdx
  __int64 v184; // rax
  size_t v185; // rdx
  size_t v186; // rdx
  unsigned __int64 v187; // rax
  unsigned int v188; // edx
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rbx
  char *v192; // rax
  char *v193; // r15
  char *v194; // rdx
  char *v195; // r13
  char *v196; // rbp
  char *v197; // r13
  int v198; // ebx
  __int64 v199; // rax
  unsigned int v200; // esi
  char *v201; // rdx
  __int64 v202; // rdi
  unsigned int v203; // edx
  __int64 v204; // rdx
  __int64 v205; // rbx
  char *v206; // rax
  char *v207; // rdx
  char *v208; // r13
  char *v209; // rbx
  unsigned __int64 v210; // rax
  char *v211; // rbp
  int v212; // r13d
  __int64 v213; // rax
  unsigned int v214; // esi
  char *v215; // rdx
  __int64 v216; // rdi
  char *v217; // rax
  unsigned int v218; // r12d
  int v219; // eax
  __int64 *v220; // rcx
  __int64 v221; // rsi
  unsigned int v222; // r12d
  __int64 v223; // rax
  int v224; // ecx
  __int64 *v225; // rsi
  unsigned __int64 v226; // rdx
  __int64 v227; // rbp
  __int64 v228; // rbx
  char *v229; // rax
  char *v230; // r12
  char *v231; // rdx
  char *v232; // r10
  char *v233; // r13
  int v234; // ebx
  char *v235; // rbp
  __int64 v236; // rdx
  unsigned int v237; // ecx
  char *v238; // rax
  __int64 v239; // rsi
  unsigned __int64 v240; // rdx
  __int64 v241; // rbx
  char *v242; // rax
  char *v243; // rdx
  char *v244; // r13
  int v245; // ebp
  char *v246; // rbx
  __int64 v247; // rdx
  int v248; // r8d
  char *v249; // rdi
  unsigned int v250; // esi
  char *v251; // rax
  __int64 v252; // rcx
  int v253; // esi
  unsigned int v254; // edx
  char *v255; // rcx
  __int64 v256; // rdi
  int v257; // esi
  unsigned int v258; // edx
  __int64 v259; // rdi
  char *v260; // rdx
  char *v261; // rcx
  char *v262; // rdx
  unsigned __int64 v263; // rdx
  unsigned __int64 v264; // rbx
  __int64 v265; // rbp
  __int64 v266; // rax
  __int64 v267; // r14
  _QWORD *v268; // rbp
  _QWORD *v269; // rdx
  int v270; // r12d
  char *v271; // r13
  int m; // ebp
  __int64 v273; // rcx
  int v274; // edi
  __int64 v275; // rsi
  unsigned int ii; // edx
  __int64 v277; // rax
  __int64 v278; // r8
  unsigned __int64 v279; // rax
  unsigned __int64 v280; // rdx
  __int64 v281; // rbp
  __int64 v282; // rax
  _QWORD *v283; // rbp
  _QWORD *v284; // rdx
  int v285; // r12d
  char *v286; // r13
  __int64 v287; // rsi
  int v288; // edi
  __int64 v289; // rcx
  unsigned int i; // edx
  __int64 v291; // rax
  __int64 v292; // r8
  _BYTE *v293; // rdi
  char *v294; // rcx
  __m128 v295; // xmm0
  __int64 v296; // rax
  __m128i **v297; // rbp
  __m128i *v298; // rdi
  char *v299; // rdx
  __m128 v300; // xmm0
  __int64 v301; // rax
  int v302; // edi
  unsigned int kk; // ecx
  char *v304; // rsi
  __int64 v305; // rax
  int v306; // r9d
  char *v307; // r8
  int v308; // edi
  unsigned int k; // ecx
  __int64 v310; // rax
  int v311; // r10d
  char *v312; // r8
  char *v313; // rdx
  char *v314; // rax
  __m128 v315; // xmm0
  char *v316; // rax
  __m128 v317; // xmm0
  size_t v318; // rdx
  int v319; // r9d
  char *v320; // rdi
  _QWORD *v321; // rbp
  _QWORD *jj; // rdx
  _QWORD *v323; // rbp
  _QWORD *j; // rdx
  size_t v325; // rdx
  unsigned int v326; // ecx
  unsigned int v327; // ecx
  unsigned int v328; // edx
  unsigned int v329; // edx
  size_t *v330; // [rsp+0h] [rbp-1C8h]
  int v331; // [rsp+0h] [rbp-1C8h]
  int v332; // [rsp+0h] [rbp-1C8h]
  char *v333; // [rsp+0h] [rbp-1C8h]
  __int64 v334; // [rsp+0h] [rbp-1C8h]
  void *v335; // [rsp+8h] [rbp-1C0h] BYREF
  void *v336; // [rsp+10h] [rbp-1B8h] BYREF
  size_t n; // [rsp+18h] [rbp-1B0h] BYREF
  void **v338; // [rsp+20h] [rbp-1A8h]
  __m128i *v339; // [rsp+28h] [rbp-1A0h]
  size_t *v340; // [rsp+30h] [rbp-198h]
  size_t *v341; // [rsp+38h] [rbp-190h]
  char *v342; // [rsp+40h] [rbp-188h]
  __int64 v343; // [rsp+48h] [rbp-180h]
  __int64 v344; // [rsp+50h] [rbp-178h]
  int v345; // [rsp+5Ch] [rbp-16Ch]
  int v346; // [rsp+60h] [rbp-168h]
  __int32 v347; // [rsp+64h] [rbp-164h]
  __m128i *v348; // [rsp+68h] [rbp-160h]
  __m128i v349[2]; // [rsp+70h] [rbp-158h] BYREF
  __m128i si128; // [rsp+90h] [rbp-138h] BYREF
  size_t v351; // [rsp+B0h] [rbp-118h] BYREF
  size_t v352; // [rsp+B8h] [rbp-110h]
  size_t v353; // [rsp+C0h] [rbp-108h]
  size_t v354; // [rsp+C8h] [rbp-100h]
  void *v355; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v356; // [rsp+D8h] [rbp-F0h]
  __int64 v357; // [rsp+E0h] [rbp-E8h] BYREF
  void *v358[2]; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i v359; // [rsp+100h] [rbp-C8h] BYREF
  unsigned int v360; // [rsp+11Ch] [rbp-ACh]
  size_t v361[2]; // [rsp+130h] [rbp-98h] BYREF
  __m128i v362; // [rsp+140h] [rbp-88h] BYREF
  __m128i v363; // [rsp+150h] [rbp-78h] BYREF
  __m128i v364; // [rsp+160h] [rbp-68h] BYREF
  __int64 v365; // [rsp+170h] [rbp-58h]
  __int64 v366; // [rsp+178h] [rbp-50h]
  unsigned int v367; // [rsp+180h] [rbp-48h]
  char v368; // [rsp+188h] [rbp-40h]

  v2 = a1;
  v4 = (__m128i *)v361;
  sub_222B070(v361, a2, "Version", 7);
  if ( !v362.m128i_i8[0]
    || (*(_OWORD *)v358 = 0, v338 = v358, (unsigned __int8)sub_22578D0(v358, v361[0], v361[1], v5, v6, v7))
    || (v349[0] = _mm_load_si128((const __m128i *)v358),
        sub_222B070(v361, a2, "MaximumDeploymentTarget", 23),
        !v362.m128i_i8[0])
    || (*(_OWORD *)v358 = 0, (v12 = sub_22578D0(v338, v361[0], v361[1], v9, v10, v11)) != 0) )
  {
    a1[4].m128i_i8[0] = 0;
    return v2;
  }
  si128 = _mm_load_si128((const __m128i *)v358);
  sub_222B070(v361, a2, "CanonicalName", 13);
  v346 = 0;
  v13 = v362.m128i_i8[0];
  if ( v362.m128i_i8[0] )
  {
    v14 = sub_2246EC0(v361, "0123456789", 10, 0);
    if ( v361[1] <= v14 )
      v14 = v361[1];
    v15 = v14 != 9;
    switch ( v14 )
    {
      case 6uLL:
        if ( *(_DWORD *)v361[0] == 1868783981 && *(_WORD *)(v361[0] + 4) == 30835 )
          v12 = v13;
        break;
      case 8uLL:
        v39 = *(_QWORD *)v361[0] == 0x736F656E6F687069LL;
        v346 = 5;
        if ( v39 )
          v12 = v13;
        goto LABEL_55;
      case 0xFuLL:
        if ( *(_QWORD *)v361[0] == 0x6973656E6F687069LL
          && *(_DWORD *)(v361[0] + 8) == 1634497901
          && *(_WORD *)(v361[0] + 12) == 28532
          && *(_BYTE *)(v361[0] + 14) == 114 )
        {
          v12 = v13;
          v346 = 5;
          goto LABEL_16;
        }
        v346 = 9;
        v16 = 1;
        goto LABEL_15;
      case 9uLL:
        if ( *(_QWORD *)v361[0] == 0x6F7674656C707061LL && *(_BYTE *)(v361[0] + 8) == 115 )
        {
          v12 = v13;
          v346 = 27;
        }
        else
        {
          v346 = 9;
        }
        goto LABEL_64;
    }
    v346 = 9;
LABEL_55:
    v16 = v12 | (v14 != 16);
LABEL_15:
    if ( v16 )
    {
LABEL_16:
      if ( v14 == 7 && !v12 )
      {
        if ( *(_DWORD *)v361[0] == 1668571511 && *(_WORD *)(v361[0] + 4) == 28520 && *(_BYTE *)(v361[0] + 6) == 115 )
        {
          v12 = v13;
          v346 = 28;
          goto LABEL_21;
        }
        v17 = 1;
LABEL_20:
        if ( !v17 )
        {
          v18 = v12 | v15;
          if ( *(_DWORD *)v361[0] != 1936683640 )
          {
LABEL_23:
            if ( !v18 )
            {
              if ( *(_QWORD *)v361[0] == 0x696B726576697264LL && *(_BYTE *)(v361[0] + 8) == 116 )
                v346 = 30;
              else
                v346 = 0;
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
        if ( *(_QWORD *)v361[0] != 0x616C756D69737278LL
          || *(_WORD *)(v361[0] + 8) != 28532
          || *(_BYTE *)(v361[0] + 10) != 114 )
        {
LABEL_24:
          v19 = 0;
          if ( v12 )
            v19 = v346;
          v346 = v19;
          goto LABEL_27;
        }
LABEL_59:
        v346 = 31;
        goto LABEL_27;
      }
      goto LABEL_64;
    }
    if ( !(*(_QWORD *)v361[0] ^ 0x737674656C707061LL | *(_QWORD *)(v361[0] + 8) ^ 0x726F74616C756D69LL) )
    {
      v12 = v13;
      v346 = 27;
LABEL_65:
      v17 = v12 | (v14 != 4);
      goto LABEL_20;
    }
LABEL_64:
    if ( !((unsigned __int8)v12 | (v14 != 14)) )
    {
      if ( *(_QWORD *)v361[0] == 0x6D69736863746177LL
        && *(_DWORD *)(v361[0] + 8) == 1952541813
        && *(_WORD *)(v361[0] + 12) == 29295 )
      {
        v12 = v13;
        v346 = 28;
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    goto LABEL_65;
  }
LABEL_27:
  v20 = sub_222B040(a2, "VersionMap", 10);
  v344 = v20;
  if ( !v20 )
  {
    LODWORD(v343) = 0;
    v347 = 0;
    v345 = 0;
    goto LABEL_49;
  }
  if ( !*(_DWORD *)(v20 + 8) )
    goto LABEL_29;
  v61 = *(size_t **)v20;
  v62 = *(unsigned int *)(v20 + 16);
  v352 = -1;
  v63 = 0;
  v64 = -1;
  v353 = 0;
  v330 = &v61[8 * v62];
  v336 = nullptr;
  if ( !(unsigned __int8)sub_22296D0(-1, 0, 0) )
  {
    v174 = v338;
    sub_222A8E0(v338, -1, 0);
    v175 = (void **)operator new(0x20u);
    v176 = (void **)v358[0];
    v177 = v175 + 2;
    v336 = v175;
    *v175 = v175 + 2;
    if ( v176 == v174 + 2 )
    {
      v180 = v336;
      v176 = v177;
      *((__m128i *)v336 + 1) = _mm_load_si128(&v359);
    }
    else
    {
      v178 = v336;
      v179 = v359.m128i_i64[0];
      *(_QWORD *)v336 = v176;
      v178[2] = v179;
      v180 = v178;
    }
    v181 = v358[1];
    v358[1] = nullptr;
    v359.m128i_i8[0] = 0;
    v180[1] = v181;
    v358[0] = v338 + 2;
    if ( (unsigned __int8)sub_22296D0(v176, v181, 0) )
    {
LABEL_254:
      v64 = *(_QWORD *)v336;
      v63 = *((_QWORD *)v336 + 1);
      if ( v358[0] != v338 + 2 )
        operator delete(v358[0]);
      goto LABEL_67;
    }
    sub_222A8E0(v361, *(_QWORD *)v336, *((_QWORD *)v336 + 1));
    v293 = *(_BYTE **)v336;
    if ( (__m128i *)v361[0] == &v362 )
    {
      v325 = v361[1];
      if ( v361[1] )
      {
        if ( v361[1] == 1 )
          *v293 = v362.m128i_i8[0];
        else
          memcpy(v293, (const void *)v361[0], v361[1]);
        v325 = v361[1];
        v293 = *(_BYTE **)v336;
      }
      *((_QWORD *)v336 + 1) = v325;
      v293[v325] = 0;
      goto LABEL_388;
    }
    v335 = (void *)v362.m128i_i64[0];
    if ( v177 == (void **)v293 )
    {
      v314 = (char *)v336;
      v315 = _mm_loadh_ps((const double *)&v335);
      *(_QWORD *)v336 = v361[0];
      *(__m128 *)(v314 + 8) = v315;
    }
    else
    {
      v294 = (char *)v336;
      v295 = _mm_loadh_ps((const double *)&v335);
      v296 = *((_QWORD *)v336 + 2);
      *(_QWORD *)v336 = v361[0];
      *(__m128 *)(v294 + 8) = v295;
      if ( v293 )
      {
        v361[0] = (size_t)v293;
        v362.m128i_i64[0] = v296;
        goto LABEL_388;
      }
    }
    v361[0] = (size_t)&v362;
LABEL_388:
    v361[1] = 0;
    *(_BYTE *)v361[0] = 0;
    if ( (__m128i *)v361[0] != &v362 )
      operator delete((void *)v361[0]);
    goto LABEL_254;
  }
LABEL_67:
  v65 = -2;
  v357 = 0;
  v356 = -2;
  if ( !(unsigned __int8)sub_22296D0(-2, 0, 0) )
  {
    v165 = v338;
    sub_222A8E0(v338, -2, 0);
    v166 = (_QWORD *)operator new(0x20u);
    v167 = (void **)v358[0];
    v168 = (size_t)(v166 + 2);
    v335 = v166;
    *v166 = v166 + 2;
    if ( v167 == v165 + 2 )
    {
      v171 = v335;
      v167 = (void **)v168;
      *((__m128i *)v335 + 1) = _mm_load_si128(&v359);
    }
    else
    {
      v169 = v335;
      v170 = v359.m128i_i64[0];
      *(_QWORD *)v335 = v167;
      v169[2] = v170;
      v171 = v169;
    }
    v172 = v358[1];
    n = v168;
    v358[1] = nullptr;
    v171[1] = v172;
    v359.m128i_i8[0] = 0;
    v358[0] = v338 + 2;
    v173 = sub_22296D0(v167, v172, 0);
    v76 = (__m128i *)n;
    if ( v173 )
      goto LABEL_247;
    v297 = (__m128i **)v335;
    sub_222A8E0(v361, *(_QWORD *)v335, *((_QWORD *)v335 + 1));
    v298 = *v297;
    v76 = (__m128i *)n;
    if ( (__m128i *)v361[0] == &v362 )
    {
      v318 = v361[1];
      if ( v361[1] )
      {
        if ( v361[1] == 1 )
        {
          v298->m128i_i8[0] = v362.m128i_i8[0];
        }
        else
        {
          memcpy(v298, (const void *)v361[0], v361[1]);
          v76 = (__m128i *)n;
        }
        v318 = v361[1];
        v298 = *(__m128i **)v335;
      }
      *((_QWORD *)v335 + 1) = v318;
      v298->m128i_i8[v318] = 0;
      goto LABEL_395;
    }
    n = v362.m128i_i64[0];
    if ( v76 == v298 )
    {
      v316 = (char *)v335;
      v317 = _mm_loadh_ps((const double *)&n);
      *(_QWORD *)v335 = v361[0];
      *(__m128 *)(v316 + 8) = v317;
    }
    else
    {
      v299 = (char *)v335;
      v300 = _mm_loadh_ps((const double *)&n);
      v301 = *((_QWORD *)v335 + 2);
      *(_QWORD *)v335 = v361[0];
      *(__m128 *)(v299 + 8) = v300;
      if ( v298 )
      {
        v361[0] = (size_t)v298;
        v362.m128i_i64[0] = v301;
        goto LABEL_395;
      }
    }
    v361[0] = (size_t)&v362;
LABEL_395:
    v361[1] = 0;
    *(_BYTE *)v361[0] = 0;
    if ( (__m128i *)v361[0] != &v362 )
    {
      n = (size_t)v76;
      operator delete((void *)v361[0]);
      v76 = (__m128i *)n;
    }
LABEL_247:
    v65 = *(_QWORD *)v335;
    v66 = *((_QWORD *)v335 + 1);
    if ( v358[0] != v338 + 2 )
    {
      v339 = v76;
      n = v66;
      operator delete(v358[0]);
      v76 = v339;
      v66 = n;
    }
    if ( v61 == v330 )
    {
LABEL_87:
      if ( *(__m128i **)v335 != v76 )
        operator delete(*(void **)v335);
      operator delete(v335, 0x20u);
      goto LABEL_90;
    }
    goto LABEL_69;
  }
  v335 = nullptr;
  v66 = 0;
  if ( v61 == v330 )
    goto LABEL_90;
LABEL_69:
  if ( v64 != -1 )
  {
    n = v66;
    v67 = (__m128i *)v65;
    v340 = (size_t *)v2;
    v68 = v63;
    v341 = v361;
    while ( 1 )
    {
      v72 = (char *)v61[1];
      v73 = v61[2];
      if ( v64 == -2 )
      {
        v71 = v72 + 2 == nullptr;
      }
      else
      {
        if ( v68 != v73 )
          goto LABEL_78;
        if ( !v68 )
          goto LABEL_75;
        v69 = (const void *)v61[1];
        v339 = v67;
        v70 = memcmp(v69, (const void *)v64, v68);
        v67 = v339;
        v71 = v70 == 0;
      }
      if ( v71 )
        goto LABEL_75;
LABEL_78:
      if ( v67 == (__m128i *)-1LL )
      {
        v75 = v72 + 1 == nullptr;
      }
      else if ( v67 == (__m128i *)-2LL )
      {
        v75 = v72 + 2 == nullptr;
      }
      else
      {
        if ( n != v73 )
          goto LABEL_84;
        if ( !n )
          goto LABEL_75;
        v339 = v67;
        v74 = memcmp(v72, v67, n);
        v67 = v339;
        v75 = v74 == 0;
      }
      if ( !v75 )
      {
LABEL_84:
        v2 = (__m128i *)v340;
        v4 = (__m128i *)v341;
        goto LABEL_85;
      }
LABEL_75:
      v61 += 8;
      if ( v330 == v61 )
        goto LABEL_84;
    }
  }
  v143 = v66;
  while ( 1 )
  {
    v144 = (char *)v61[1];
    if ( v144 == (char *)-1LL )
      goto LABEL_201;
    if ( v65 == -1 )
      goto LABEL_85;
    if ( v65 == -2 )
      break;
    if ( v61[2] != v143 )
      goto LABEL_85;
    if ( v143 )
    {
      v145 = memcmp(v144, (const void *)v65, v143) == 0;
      goto LABEL_208;
    }
LABEL_201:
    v61 += 8;
    if ( v330 == v61 )
      goto LABEL_85;
  }
  v145 = v144 + 2 == nullptr;
LABEL_208:
  if ( v145 )
    goto LABEL_201;
LABEL_85:
  if ( v335 )
  {
    v76 = (__m128i *)((char *)v335 + 16);
    goto LABEL_87;
  }
LABEL_90:
  if ( v336 )
  {
    if ( *(void **)v336 != (char *)v336 + 16 )
      operator delete(*(void **)v336);
    operator delete(v336, 0x20u);
  }
  v341 = (size_t *)(*(_QWORD *)v344 + ((unsigned __int64)*(unsigned int *)(v344 + 16) << 6));
  if ( v341 == v61 )
  {
LABEL_29:
    LODWORD(v343) = 0;
    v347 = 0;
    v345 = 0;
    v342 = nullptr;
    goto LABEL_30;
  }
  LODWORD(v343) = 0;
  v347 = 0;
  v345 = 0;
  v342 = nullptr;
  v340 = &v351;
  v348 = v2;
  v339 = v4;
  v77 = v61;
  while ( 2 )
  {
    v78 = v77[2];
    v361[0] = v77[1];
    v361[1] = v78;
    v79 = sub_2246AB0(v339, "_", 1, 0);
    if ( v79 == -1 )
    {
      v353 = 0;
      v354 = 0;
      v351 = v361[0];
      v352 = v361[1];
    }
    else
    {
      v80 = v79 + 1;
      if ( v79 + 1 > v361[1] )
      {
        v80 = v361[1];
        v81 = 0;
      }
      else
      {
        v81 = v361[1] - v80;
      }
      v354 = v81;
      if ( v79 > v361[1] )
        v79 = v361[1];
      v351 = v361[0];
      v352 = v79;
      v353 = v80 + v361[0];
    }
    if ( !(unsigned int)sub_22462B0(v340, "ios", 3) )
    {
      sub_2246450(&v355, v340 + 2);
      v362.m128i_i64[0] = (__int64)&v355;
      v361[0] = (size_t)"--";
      v363.m128i_i16[0] = 1027;
      sub_22BA1B0(v338, v339);
      if ( v355 != &v357 )
        operator delete(v355);
      if ( !v360 )
        goto LABEL_150;
      v97 = *((_WORD *)v77 + 12) == 7 ? (unsigned __int64)(v77 + 4) : 0LL;
      sub_FC0410(v339, v97, si128.m128i_u64[0], si128.m128i_u64[1]);
      if ( !v368 )
        goto LABEL_150;
      v117 = (41LL * v360) | 0xCD00000000LL;
      v118 = ((0xBF58476D1CE4E5B9LL * v117) >> 31) ^ (0xBF58476D1CE4E5B9LL * v117);
      if ( (_DWORD)v343 )
      {
        v98 = (unsigned int)(v343 - 1);
        v119 = v118 & (v343 - 1);
        v120 = &v342[104 * v119];
        v121 = *(_QWORD *)v120;
        if ( v117 == *(_QWORD *)v120 )
        {
LABEL_167:
          v122 = (__m128i *)(v120 + 8);
          if ( !v120[96] )
          {
LABEL_168:
            v123 = v365;
            v122[5].m128i_i8[8] = 1;
            v124 = _mm_load_si128((const __m128i *)v361);
            v125 = _mm_load_si128(&v362);
            v365 = 0;
            v122[4].m128i_i64[0] = v123;
            v126 = v366;
            *v122 = v124;
            v127 = _mm_load_si128(&v363);
            v122[4].m128i_i64[1] = v126;
            LODWORD(v126) = v367;
            v122[1] = v125;
            v128 = _mm_load_si128(&v364);
            v122[5].m128i_i32[0] = v126;
            v366 = 0;
            v367 = 0;
            v122[2] = v127;
            v122[3] = v128;
LABEL_169:
            operator delete(v365, 32LL * v367, 4);
            goto LABEL_150;
          }
          v129 = *((_QWORD *)v120 + 9);
          v130 = _mm_load_si128(&v362);
          v131 = 32LL * *((unsigned int *)v120 + 22);
          *(__m128i *)(v120 + 8) = _mm_load_si128((const __m128i *)v361);
          v132 = _mm_load_si128(&v363);
          *(__m128i *)(v120 + 24) = v130;
          v133 = _mm_load_si128(&v364);
          *(__m128i *)(v120 + 40) = v132;
          *(__m128i *)(v120 + 56) = v133;
          operator delete(v129, v131, 4);
          v134 = v365;
          v39 = v368 == 0;
          v365 = 0;
          *((_QWORD *)v120 + 9) = v134;
          v135 = v366;
          v366 = 0;
          *((_QWORD *)v120 + 10) = v135;
          LODWORD(v135) = v367;
          v367 = 0;
          *((_DWORD *)v120 + 22) = v135;
          if ( !v39 )
            goto LABEL_169;
LABEL_150:
          if ( v358[0] != v338 + 2 )
            operator delete(v358[0]);
          goto LABEL_103;
        }
        v182 = 1;
        v183 = nullptr;
        if ( v121 != -1 )
        {
          while ( 1 )
          {
            if ( !v183 && v121 == -2 )
              v183 = (__int64 *)v120;
            v99 = (unsigned int)(v182 + 1);
            v119 = v98 & (v182 + v119);
            v120 = &v342[104 * v119];
            v121 = *(_QWORD *)v120;
            if ( v117 == *(_QWORD *)v120 )
              goto LABEL_167;
            if ( v121 == -1 )
            {
              if ( v183 )
                goto LABEL_258;
              break;
            }
            ++v182;
          }
        }
        v183 = (__int64 *)v120;
LABEL_258:
        ++v345;
        if ( 4 * v345 < (unsigned int)(3 * v343) )
        {
          if ( (int)v343 - v347 - v345 > (unsigned int)v343 >> 3 )
          {
            v184 = *v183;
            goto LABEL_261;
          }
          v203 = 64;
          if ( ((unsigned int)((((((((v98 | (v98 >> 1)) >> 2) | v98 | (v98 >> 1)) >> 4)
                                | ((v98 | (v98 >> 1)) >> 2)
                                | v98
                                | (v98 >> 1)) >> 8)
                              | ((((v98 | (v98 >> 1)) >> 2) | v98 | (v98 >> 1)) >> 4)
                              | ((v98 | (v98 >> 1)) >> 2)
                              | v98
                              | (v98 >> 1)) >> 16)
              | (unsigned int)((((((v98 | (v98 >> 1)) >> 2) | v98 | (v98 >> 1)) >> 4)
                              | ((v98 | (v98 >> 1)) >> 2)
                              | v98
                              | (v98 >> 1)) >> 8)
              | (unsigned int)((((v98 | (v98 >> 1)) >> 2) | v98 | (v98 >> 1)) >> 4)
              | (unsigned int)((v98 | (v98 >> 1)) >> 2)
              | (unsigned int)v98
              | (unsigned int)(v98 >> 1))
             + 1 >= 0x40 )
            v203 = (((((((((v98 | (v98 >> 1)) >> 2) | v98 | (v98 >> 1)) >> 4)
                      | ((v98 | (v98 >> 1)) >> 2)
                      | v98
                      | (v98 >> 1)) >> 8)
                    | ((((v98 | (v98 >> 1)) >> 2) | v98 | (v98 >> 1)) >> 4)
                    | ((v98 | (v98 >> 1)) >> 2)
                    | v98
                    | (v98 >> 1)) >> 16)
                  | ((((((v98 | (v98 >> 1)) >> 2) | v98 | (v98 >> 1)) >> 4)
                    | ((v98 | (v98 >> 1)) >> 2)
                    | v98
                    | (v98 >> 1)) >> 8)
                  | ((((v98 | (v98 >> 1)) >> 2) | v98 | (v98 >> 1)) >> 4)
                  | ((v98 | (v98 >> 1)) >> 2)
                  | v98
                  | (v98 >> 1))
                 + 1;
          LODWORD(v335) = v203;
          v204 = 13LL * v203;
          v205 = 8 * v204;
          v206 = (char *)sub_22300B0(8 * v204, 8, v204, v98, v99, v100);
          v193 = v206;
          if ( v342 )
          {
            v207 = &v206[v205];
            v343 = 104LL * (unsigned int)v343;
            v208 = &v342[v343];
            do
            {
              *(_QWORD *)v206 = -1;
              v206 += 104;
            }
            while ( v207 != v206 );
            v209 = v342;
            LODWORD(v336) = 0;
            LODWORD(n) = (_DWORD)v335 - 1;
            v210 = ((0xBF58476D1CE4E5B9LL * v117) >> 31) ^ (0xBF58476D1CE4E5B9LL * v117);
            v118 = v117;
            v211 = v208;
            v212 = v210;
            do
            {
              v213 = *(_QWORD *)v209;
              if ( (unsigned __int64)(*(_QWORD *)v209 + 2LL) > 1 )
              {
                v214 = (((0xBF58476D1CE4E5B9LL * v213) >> 31) ^ (484763065 * v213)) & n;
                v215 = &v193[104 * v214];
                v216 = *(_QWORD *)v215;
                if ( v213 != *(_QWORD *)v215 )
                {
                  v311 = 1;
                  v312 = nullptr;
                  if ( v216 != -1 )
                  {
                    while ( 1 )
                    {
                      if ( v216 == -2 && !v312 )
                        v312 = v215;
                      v214 = n & (v311 + v214);
                      v215 = &v193[104 * v214];
                      v216 = *(_QWORD *)v215;
                      if ( v213 == *(_QWORD *)v215 )
                        break;
                      if ( v216 == -1 )
                      {
                        if ( v312 )
                          v215 = v312;
                        break;
                      }
                      ++v311;
                    }
                  }
                }
                *(_QWORD *)v215 = v213;
                sub_FC2BC0((__m128i *)(v215 + 8), (const __m128i *)(v209 + 8));
                LODWORD(v336) = (_DWORD)v336 + 1;
                if ( v209[96] )
                  operator delete(*((_QWORD *)v209 + 9), 32LL * *((unsigned int *)v209 + 22), 4);
              }
              v209 += 104;
            }
            while ( v211 != v209 );
            v117 = v118;
            LODWORD(v118) = v212;
            operator delete(v342, v343, 8);
          }
          else
          {
            v260 = &v206[v205];
            do
            {
              *(_QWORD *)v206 = -1;
              v206 += 104;
            }
            while ( v260 != v206 );
            LODWORD(v336) = 0;
            LODWORD(n) = (_DWORD)v335 - 1;
          }
          v218 = n & v118;
          v219 = 1;
          v220 = nullptr;
          while ( 1 )
          {
            v183 = (__int64 *)&v193[104 * v218];
            v221 = *v183;
            if ( v117 == *v183 )
            {
              v345 = (_DWORD)v336 + 1;
              goto LABEL_306;
            }
            if ( v221 == -1 )
              break;
            if ( v221 != -2 || v220 )
              v183 = v220;
            v220 = v183;
            v218 = n & (v219 + v218);
            ++v219;
          }
          if ( v220 )
          {
            v342 = v193;
            v347 = 0;
            LODWORD(v343) = (_DWORD)v335;
            v183 = v220;
            v345 = (_DWORD)v336 + 1;
            v184 = *v220;
LABEL_261:
            if ( v184 == -1 )
              goto LABEL_263;
            goto LABEL_262;
          }
LABEL_311:
          v342 = v193;
          v347 = 0;
          v345 = (_DWORD)v336 + 1;
          LODWORD(v343) = (_DWORD)v335;
LABEL_263:
          *v183 = v117;
          memset(v183 + 1, 0, 0x60u);
          v122 = (__m128i *)(v183 + 1);
          if ( v368 )
            goto LABEL_168;
          goto LABEL_150;
        }
      }
      v187 = (((((((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v343 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v343 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v343 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v343 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1);
      v188 = 64;
      v189 = ((v187 >> 16) | v187) + 1;
      if ( (unsigned int)v189 >= 0x40 )
        v188 = v189;
      LODWORD(v335) = v188;
      v190 = 13LL * v188;
      v191 = 8 * v190;
      v192 = (char *)sub_22300B0(8 * v190, 8, v190, v98, v99, v100);
      v193 = v192;
      if ( v342 )
      {
        v194 = &v192[v191];
        v343 = 104LL * (unsigned int)v343;
        v195 = &v342[v343];
        do
        {
          *(_QWORD *)v192 = -1;
          v192 += 104;
        }
        while ( v194 != v192 );
        LODWORD(n) = (_DWORD)v335 - 1;
        if ( v195 == v342 )
        {
          v345 = 1;
          LODWORD(v336) = 0;
        }
        else
        {
          v336 = (void *)v117;
          v196 = v195;
          v197 = v342;
          v198 = 0;
          do
          {
            v199 = *(_QWORD *)v197;
            if ( (unsigned __int64)(*(_QWORD *)v197 + 2LL) > 1 )
            {
              v200 = n & (((0xBF58476D1CE4E5B9LL * v199) >> 31) ^ (484763065 * v199));
              v201 = &v193[104 * v200];
              v202 = *(_QWORD *)v201;
              if ( *(_QWORD *)v201 != v199 )
              {
                v306 = 1;
                v307 = nullptr;
                if ( v202 != -1 )
                {
                  while ( 1 )
                  {
                    if ( !v307 && v202 == -2 )
                      v307 = v201;
                    v200 = n & (v306 + v200);
                    v201 = &v193[104 * v200];
                    v202 = *(_QWORD *)v201;
                    if ( v199 == *(_QWORD *)v201 )
                      break;
                    if ( v202 == -1 )
                    {
                      if ( v307 )
                        v201 = v307;
                      break;
                    }
                    ++v306;
                  }
                }
              }
              *(_QWORD *)v201 = v199;
              ++v198;
              sub_FC2BC0((__m128i *)(v201 + 8), (const __m128i *)(v197 + 8));
              if ( v197[96] )
                operator delete(*((_QWORD *)v197 + 9), 32LL * *((unsigned int *)v197 + 22), 4);
            }
            v197 += 104;
          }
          while ( v196 != v197 );
          v117 = (__int64)v336;
          LODWORD(v336) = v198;
          v345 = v198 + 1;
        }
        operator delete(v342, v343, 8);
      }
      else
      {
        v261 = &v192[v191];
        do
        {
          *(_QWORD *)v192 = -1;
          v192 += 104;
        }
        while ( v261 != v192 );
        v345 = 1;
        LODWORD(v336) = 0;
        LODWORD(n) = (_DWORD)v335 - 1;
      }
      v222 = n & v118;
      v183 = (__int64 *)&v193[104 * v222];
      v223 = *v183;
      if ( v117 != *v183 )
      {
        v224 = 1;
        v225 = nullptr;
        if ( v223 == -1 )
          goto LABEL_311;
        while ( 1 )
        {
          if ( !v225 && v223 == -2 )
            v225 = v183;
          v222 = n & (v224 + v222);
          v183 = (__int64 *)&v193[104 * v222];
          v223 = *v183;
          if ( v117 == *v183 )
            break;
          if ( v223 == -1 )
          {
            if ( !v225 )
              goto LABEL_311;
            v184 = *v225;
            v342 = v193;
            v183 = v225;
            v347 = 0;
            LODWORD(v343) = (_DWORD)v335;
            goto LABEL_261;
          }
          ++v224;
        }
      }
LABEL_306:
      v342 = v193;
      v347 = 0;
      LODWORD(v343) = (_DWORD)v335;
LABEL_262:
      --v347;
      goto LABEL_263;
    }
LABEL_103:
    v77 += 8;
    v352 = -1;
    v82 = 0;
    v83 = -1;
    v353 = 0;
    v84 = sub_22296D0(-1, 0, 0);
    v335 = nullptr;
    if ( v84 )
      goto LABEL_104;
    v109 = v338;
    sub_222A8E0(v338, -1, 0);
    v110 = (__m128i *)operator new(0x20u);
    v111 = (void **)v358[0];
    v112 = v110 + 1;
    v335 = v110;
    v110->m128i_i64[0] = (__int64)v110[1].m128i_i64;
    if ( v111 == v109 + 2 )
    {
      v115 = v335;
      v111 = (void **)v112;
      *((__m128i *)v335 + 1) = _mm_load_si128(&v359);
    }
    else
    {
      v113 = v335;
      v114 = v359.m128i_i64[0];
      *(_QWORD *)v335 = v111;
      v113[2] = v114;
      v115 = v113;
    }
    v116 = v358[1];
    v358[1] = nullptr;
    v359.m128i_i8[0] = 0;
    v115[1] = v116;
    v358[0] = v338 + 2;
    if ( !(unsigned __int8)sub_22296D0(v111, v116, 0) )
    {
      v150 = (__m128i **)v335;
      v151 = v339;
      sub_222A8E0(v339, *(_QWORD *)v335, *((_QWORD *)v335 + 1));
      v152 = *v150;
      v153 = *v150;
      if ( (__m128i *)v361[0] == &v151[1] )
      {
        v185 = v361[1];
        if ( v361[1] )
        {
          if ( v361[1] == 1 )
            v152->m128i_i8[0] = v362.m128i_i8[0];
          else
            memcpy(v152, (const void *)v361[0], v361[1]);
          v185 = v361[1];
          v152 = *(__m128i **)v335;
        }
        *((_QWORD *)v335 + 1) = v185;
        v152->m128i_i8[v185] = 0;
        v153 = (__m128i *)v361[0];
        goto LABEL_221;
      }
      if ( v112 == v152 )
      {
        v217 = (char *)v335;
        v336 = (void *)v362.m128i_i64[0];
        *(_QWORD *)v335 = v361[0];
        *(__m128 *)(v217 + 8) = _mm_loadh_ps((const double *)&v336);
      }
      else
      {
        v336 = (void *)v362.m128i_i64[0];
        v154 = (char *)v335;
        v155 = *((_QWORD *)v335 + 2);
        *(_QWORD *)v335 = v361[0];
        *(__m128 *)(v154 + 8) = _mm_loadh_ps((const double *)&v336);
        if ( v152 )
        {
          v361[0] = (size_t)v152;
          v362.m128i_i64[0] = v155;
          goto LABEL_221;
        }
      }
      v153 = v339 + 1;
      v361[0] = (size_t)&v339[1];
LABEL_221:
      v361[1] = 0;
      v153->m128i_i8[0] = 0;
      if ( (__m128i *)v361[0] != &v339[1] )
        operator delete((void *)v361[0]);
    }
    v83 = *(_QWORD *)v335;
    v82 = *((_QWORD *)v335 + 1);
    if ( v358[0] != v338 + 2 )
      operator delete(v358[0]);
LABEL_104:
    v85 = -2;
    v357 = 0;
    v356 = -2;
    if ( (unsigned __int8)sub_22296D0(-2, 0, 0) )
    {
      v86 = 0;
      v87 = nullptr;
      if ( v77 == v330 )
        goto LABEL_134;
      goto LABEL_106;
    }
    v101 = v338;
    sub_222A8E0(v338, -2, 0);
    v102 = (__m128i *)operator new(0x20u);
    v103 = (__m128i *)v358[0];
    v104 = v102 + 1;
    v87 = (void **)v102;
    v102->m128i_i64[0] = (__int64)v102[1].m128i_i64;
    if ( v103 == (__m128i *)(v101 + 2) )
    {
      v103 = v102 + 1;
      v102[1] = _mm_load_si128(&v359);
    }
    else
    {
      v105 = v359.m128i_i64[0];
      *v87 = v103;
      v87[2] = (void *)v105;
    }
    v106 = v358[1];
    v107 = v338;
    v336 = v104;
    v358[1] = nullptr;
    v87[1] = v106;
    v358[0] = v107 + 2;
    v359.m128i_i8[0] = 0;
    v108 = sub_22296D0(v103, v106, 0);
    v96 = v336;
    if ( !v108 )
    {
      v146 = v339;
      sub_222A8E0(v339, *v87, v87[1]);
      v147 = *v87;
      v96 = v336;
      v148 = (__m128i *)*v87;
      if ( (__m128i *)v361[0] == &v146[1] )
      {
        v186 = v361[1];
        if ( v361[1] )
        {
          if ( v361[1] == 1 )
          {
            *v147 = v362.m128i_i8[0];
            v147 = *v87;
          }
          else
          {
            memcpy(v147, (const void *)v361[0], v361[1]);
            v147 = *v87;
            v96 = v336;
          }
          v186 = v361[1];
        }
        v87[1] = (void *)v186;
        v147[v186] = 0;
        v148 = (__m128i *)v361[0];
        goto LABEL_215;
      }
      if ( v336 == v147 )
      {
        v336 = (void *)v362.m128i_i64[0];
        *v87 = (void *)v361[0];
        *(__m128 *)(v87 + 1) = _mm_loadh_ps((const double *)&v336);
      }
      else
      {
        v336 = (void *)v362.m128i_i64[0];
        v149 = (__int64)v87[2];
        *v87 = (void *)v361[0];
        *(__m128 *)(v87 + 1) = _mm_loadh_ps((const double *)&v336);
        if ( v147 )
        {
          v361[0] = (size_t)v147;
          v362.m128i_i64[0] = v149;
          goto LABEL_215;
        }
      }
      v148 = v339 + 1;
      v361[0] = (size_t)&v339[1];
LABEL_215:
      v361[1] = 0;
      v148->m128i_i8[0] = 0;
      if ( (__m128i *)v361[0] != &v339[1] )
      {
        v336 = v96;
        operator delete((void *)v361[0]);
        v96 = v336;
      }
    }
    v85 = (__int64)*v87;
    v86 = (size_t)v87[1];
    if ( v358[0] != v338 + 2 )
    {
      v336 = v96;
      operator delete(v358[0]);
      v96 = v336;
    }
    if ( v77 == v330 )
    {
LABEL_131:
      if ( v96 != *v87 )
        operator delete(*v87);
      operator delete(v87, 0x20u);
      goto LABEL_134;
    }
LABEL_106:
    if ( v83 != -1 )
    {
      n = (size_t)v87;
      v88 = v82;
      v89 = v86;
      while ( 1 )
      {
        v92 = (char *)v77[1];
        v91 = (void *)v77[2];
        if ( v83 == -2 )
        {
          if ( v92 == (char *)-2LL )
            goto LABEL_111;
        }
        else if ( (void *)v88 == v91 )
        {
          v336 = (void *)v77[2];
          if ( !v88 )
            goto LABEL_111;
          v90 = memcmp(v92, (const void *)v83, v88);
          v91 = v336;
          if ( !v90 )
            goto LABEL_111;
        }
        if ( v85 == -1 )
        {
          v93 = v92 + 1 == nullptr;
        }
        else if ( v85 == -2 )
        {
          v93 = v92 + 2 == nullptr;
        }
        else
        {
          if ( (void *)v89 != v91 )
            goto LABEL_120;
          if ( !v89 )
            goto LABEL_111;
          v93 = memcmp(v92, (const void *)v85, v89) == 0;
        }
        if ( !v93 )
        {
LABEL_120:
          v87 = (void **)n;
          goto LABEL_129;
        }
LABEL_111:
        v77 += 8;
        if ( v330 == v77 )
          goto LABEL_120;
      }
    }
    while ( 2 )
    {
      v94 = (char *)v77[1];
      if ( v94 == (char *)-1LL )
        goto LABEL_121;
      if ( v85 == -1 )
        break;
      if ( v85 != -2 )
      {
        if ( v77[2] != v86 )
          break;
        if ( v86 )
        {
          v95 = memcmp(v94, (const void *)v85, v86) == 0;
          goto LABEL_128;
        }
        goto LABEL_121;
      }
      v95 = v94 + 2 == nullptr;
LABEL_128:
      if ( v95 )
      {
LABEL_121:
        v77 += 8;
        if ( v330 == v77 )
          break;
        continue;
      }
      break;
    }
LABEL_129:
    if ( v87 )
    {
      v96 = v87 + 2;
      goto LABEL_131;
    }
LABEL_134:
    if ( v335 )
    {
      if ( *(void **)v335 != (char *)v335 + 16 )
        operator delete(*(void **)v335);
      operator delete(v335, 0x20u);
    }
    if ( v341 != v77 )
      continue;
    break;
  }
  v2 = v348;
  v4 = v339;
LABEL_30:
  v21 = sub_222B040(v344, "macOS_iOSMac", 12);
  if ( !v21 )
    goto LABEL_42;
  sub_FC0410(v4, v21, si128.m128i_u64[0], si128.m128i_u64[1]);
  if ( v368 )
  {
    if ( !(_DWORD)v343 )
      goto LABEL_312;
    v22 = (unsigned int)(v343 - 1);
    v29 = (v343 - 1) & 0x2ABAD31C;
    v30 = &v342[104 * v29];
    v31 = *(_QWORD *)v30;
    if ( *(_QWORD *)v30 == 0x171000000EDLL )
      goto LABEL_40;
    v23 = 1;
    v136 = nullptr;
    if ( v31 != -1 )
    {
      while ( 1 )
      {
        if ( !v136 && v31 == -2 )
          v136 = v30;
        v24 = (unsigned int)(v23 + 1);
        v29 = v22 & (v23 + v29);
        v30 = &v342[104 * v29];
        v31 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == 0x171000000EDLL )
          break;
        if ( v31 == -1 )
        {
          if ( v136 )
            goto LABEL_192;
          goto LABEL_191;
        }
        v23 = (unsigned int)v24;
      }
LABEL_40:
      v32 = (__m128i *)(v30 + 8);
      if ( v30[96] )
      {
        v33 = *((_QWORD *)v30 + 9);
        v34 = _mm_load_si128(&v362);
        v35 = _mm_load_si128(&v363);
        v36 = 32LL * *((unsigned int *)v30 + 22);
        *(__m128i *)(v30 + 8) = _mm_load_si128((const __m128i *)v361);
        v37 = _mm_load_si128(&v364);
        *(__m128i *)(v30 + 24) = v34;
        *(__m128i *)(v30 + 40) = v35;
        *(__m128i *)(v30 + 56) = v37;
        operator delete(v33, v36, 4);
        v38 = v365;
        v39 = v368 == 0;
        v365 = 0;
        *((_QWORD *)v30 + 9) = v38;
        v40 = v366;
        v366 = 0;
        *((_QWORD *)v30 + 10) = v40;
        LODWORD(v40) = v367;
        v367 = 0;
        *((_DWORD *)v30 + 22) = v40;
        if ( v39 )
        {
LABEL_42:
          v41 = sub_222B040(v344, "iOSMac_macOS", 12);
          if ( !v41 )
          {
LABEL_48:
            v344 = (__int64)v342;
LABEL_49:
            v57 = v346;
            v58 = _mm_load_si128(v349);
            v2[4].m128i_i8[0] = 1;
            v26 = 0;
            v59 = _mm_load_si128(&si128);
            v2[2].m128i_i32[0] = v57;
            v60 = v344;
            *v2 = v58;
            v2[2].m128i_i64[1] = v60;
            LODWORD(v60) = v345;
            v2[1] = v59;
            v2[3].m128i_i32[0] = v60;
            *(__m128i *)v361 = v58;
            v2[3].m128i_i32[1] = v347;
            v362 = v59;
            v2[3].m128i_i32[2] = v343;
            operator delete(0, 0, 8);
            operator delete(0, 0, 8);
            v342 = nullptr;
            goto LABEL_50;
          }
          sub_FC0410(v4, v41, si128.m128i_u64[0], si128.m128i_u64[1]);
          if ( !v368 )
            goto LABEL_32;
          if ( !(_DWORD)v343 )
            goto LABEL_358;
          v45 = v343 - 1;
          v46 = (v343 - 1) & 0xB9A05EBE;
          v47 = &v342[104 * v46];
          v48 = *(_QWORD *)v47;
          if ( *(_QWORD *)v47 == 0xED00000171LL )
            goto LABEL_46;
          v43 = 1;
          v156 = nullptr;
          if ( v48 != -1 )
          {
            while ( 1 )
            {
              if ( !v156 && v48 == -2 )
                v156 = v47;
              v44 = (unsigned int)(v43 + 1);
              v46 = v45 & (v43 + v46);
              v47 = &v342[104 * v46];
              v48 = *(_QWORD *)v47;
              if ( *(_QWORD *)v47 == 0xED00000171LL )
                break;
              if ( v48 == -1 )
              {
                if ( v156 )
                  goto LABEL_234;
                goto LABEL_233;
              }
              v43 = (unsigned int)v44;
            }
LABEL_46:
            v49 = (__m128i *)(v47 + 8);
            if ( v47[96] )
            {
              v50 = *((_QWORD *)v47 + 9);
              v51 = _mm_load_si128(&v363);
              v52 = _mm_load_si128(&v364);
              v53 = 32LL * *((unsigned int *)v47 + 22);
              *(__m128i *)(v47 + 8) = _mm_load_si128((const __m128i *)v361);
              v54 = _mm_load_si128(&v362);
              *(__m128i *)(v47 + 40) = v51;
              *(__m128i *)(v47 + 24) = v54;
              *(__m128i *)(v47 + 56) = v52;
              operator delete(v50, v53, 4);
              v55 = v365;
              v39 = v368 == 0;
              v365 = 0;
              *((_QWORD *)v47 + 9) = v55;
              v56 = v366;
              v366 = 0;
              *((_QWORD *)v47 + 10) = v56;
              LODWORD(v56) = v367;
              v367 = 0;
              *((_DWORD *)v47 + 22) = v56;
              if ( v39 )
                goto LABEL_48;
LABEL_241:
              operator delete(v365, 32LL * v367, 4);
              goto LABEL_48;
            }
LABEL_240:
            v159 = v365;
            v49[5].m128i_i8[8] = 1;
            v160 = _mm_load_si128((const __m128i *)v361);
            v161 = _mm_load_si128(&v362);
            v365 = 0;
            v162 = _mm_load_si128(&v363);
            v49[4].m128i_i64[0] = v159;
            v163 = v366;
            *v49 = v160;
            v164 = _mm_load_si128(&v364);
            v366 = 0;
            v49[4].m128i_i64[1] = v163;
            LODWORD(v163) = v367;
            v367 = 0;
            v49[5].m128i_i32[0] = v163;
            v49[1] = v161;
            v49[2] = v162;
            v49[3] = v164;
            goto LABEL_241;
          }
LABEL_233:
          v156 = v47;
LABEL_234:
          ++v345;
          v42 = (unsigned int)(4 * v345);
          if ( (unsigned int)v42 < 3 * (int)v343 )
          {
            v157 = (unsigned int)(v343 - v347 - v345);
            if ( (unsigned int)v157 > (unsigned int)v343 >> 3 )
            {
LABEL_236:
              if ( *(_QWORD *)v156 == -1 )
              {
LABEL_238:
                v158 = (__m128i *)(v156 + 8);
                v158[-1].m128i_i64[1] = 0xED00000171LL;
                v39 = v368 == 0;
                memset(v158, 0, 0x60u);
                if ( v39 )
                  goto LABEL_48;
                v49 = v158;
                goto LABEL_240;
              }
LABEL_237:
              --v347;
              goto LABEL_238;
            }
            v279 = ((((v45 | ((unsigned __int64)v45 >> 1)) >> 2) | v45 | ((unsigned __int64)v45 >> 1)) >> 4)
                 | ((v45 | ((unsigned __int64)v45 >> 1)) >> 2)
                 | v45
                 | ((unsigned __int64)v45 >> 1);
            v280 = v279 >> 8;
            LODWORD(v264) = (v280 | v279 | ((v280 | v279) >> 16)) + 1;
            if ( (unsigned int)v264 < 0x40 )
              LODWORD(v264) = 64;
            v281 = 104LL * (unsigned int)v264;
            v282 = sub_22300B0(v281, 8, v280, v157, v43, v44);
            v267 = v282;
            if ( v342 )
            {
              v283 = (_QWORD *)(v282 + v281);
              v284 = (_QWORD *)v282;
              v334 = 104LL * (unsigned int)v343;
              v335 = &v342[v334];
              do
              {
                *v284 = -1;
                v284 += 13;
              }
              while ( v283 != v284 );
              v285 = v264 - 1;
              v286 = v342;
              m = 0;
              do
              {
                v287 = *(_QWORD *)v286;
                if ( (unsigned __int64)(*(_QWORD *)v286 + 2LL) > 1 )
                {
                  v288 = 1;
                  v289 = 0;
                  for ( i = v285 & (((0xBF58476D1CE4E5B9LL * v287) >> 31) ^ (484763065 * v287)); ; i = v285 & v329 )
                  {
                    v291 = v267 + 104LL * i;
                    v292 = *(_QWORD *)v291;
                    if ( v287 == *(_QWORD *)v291 )
                      break;
                    if ( v292 == -1 )
                    {
                      if ( v289 )
                        v291 = v289;
                      break;
                    }
                    if ( v292 != -2 || v289 )
                      v291 = v289;
                    v329 = v288 + i;
                    v289 = v291;
                    ++v288;
                  }
                  *(_QWORD *)v291 = v287;
                  ++m;
                  sub_FC2BC0((__m128i *)(v291 + 8), (const __m128i *)(v286 + 8));
                  if ( v286[96] )
                    operator delete(*((_QWORD *)v286 + 9), 32LL * *((unsigned int *)v286 + 22), 4);
                }
                v286 += 104;
              }
              while ( v335 != v286 );
              operator delete(v342, v334, 8);
            }
            else
            {
              v323 = (_QWORD *)(v282 + v281);
              for ( j = (_QWORD *)v282; v323 != j; j += 13 )
                *j = -1;
              m = 0;
              v285 = v264 - 1;
            }
            v308 = 1;
            v156 = nullptr;
            for ( k = v285 & 0xB9A05EBE; ; k = v285 & v326 )
            {
              v304 = (char *)(v267 + 104LL * k);
              v310 = *(_QWORD *)v304;
              if ( *(_QWORD *)v304 == 0xED00000171LL )
                break;
              if ( v310 == -1 )
                goto LABEL_422;
              if ( v310 != -2 || v156 )
                v304 = v156;
              v326 = v308 + k;
              v156 = v304;
              ++v308;
            }
          }
          else
          {
LABEL_358:
            v263 = ((((((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v343 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v343 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 8;
            v264 = (v263
                  | (((((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v343 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v343 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)
                  | ((v263
                    | (((((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v343 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 4)
                    | (((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v343 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 16))
                 + 1;
            if ( (unsigned int)v264 < 0x40 )
              LODWORD(v264) = 64;
            v265 = 104LL * (unsigned int)v264;
            v266 = sub_22300B0(v265, 8, v263, v42, v43, v44);
            v267 = v266;
            if ( v342 )
            {
              v268 = (_QWORD *)(v266 + v265);
              v269 = (_QWORD *)v266;
              v335 = (void *)(104LL * (unsigned int)v343);
              v333 = &v342[(_QWORD)v335];
              do
              {
                *v269 = -1;
                v269 += 13;
              }
              while ( v268 != v269 );
              v270 = v264 - 1;
              v271 = v342;
              for ( m = 0; v333 != v271; v271 += 104 )
              {
                v273 = *(_QWORD *)v271;
                if ( (unsigned __int64)(*(_QWORD *)v271 + 2LL) > 1 )
                {
                  v274 = 1;
                  v275 = 0;
                  for ( ii = v270 & (((0xBF58476D1CE4E5B9LL * v273) >> 31) ^ (484763065 * v273)); ; ii = v270 & v328 )
                  {
                    v277 = v267 + 104LL * ii;
                    v278 = *(_QWORD *)v277;
                    if ( v273 == *(_QWORD *)v277 )
                      break;
                    if ( v278 == -1 )
                    {
                      if ( v275 )
                        v277 = v275;
                      break;
                    }
                    if ( v278 != -2 || v275 )
                      v277 = v275;
                    v328 = v274 + ii;
                    v275 = v277;
                    ++v274;
                  }
                  *(_QWORD *)v277 = v273;
                  ++m;
                  sub_FC2BC0((__m128i *)(v277 + 8), (const __m128i *)(v271 + 8));
                  if ( v271[96] )
                    operator delete(*((_QWORD *)v271 + 9), 32LL * *((unsigned int *)v271 + 22), 4);
                }
              }
              operator delete(v342, v335, 8);
            }
            else
            {
              v321 = (_QWORD *)(v266 + v265);
              for ( jj = (_QWORD *)v266; v321 != jj; jj += 13 )
                *jj = -1;
              m = 0;
              v270 = v264 - 1;
            }
            v302 = 1;
            v156 = nullptr;
            for ( kk = v270 & 0xB9A05EBE; ; kk = v270 & v327 )
            {
              v304 = (char *)(v267 + 104LL * kk);
              v305 = *(_QWORD *)v304;
              if ( *(_QWORD *)v304 == 0xED00000171LL )
                break;
              if ( v305 == -1 )
              {
LABEL_422:
                if ( v156 )
                {
                  LODWORD(v343) = v264;
                  v345 = m + 1;
                  v342 = (char *)v267;
                  v347 = 0;
                  goto LABEL_236;
                }
                v156 = v304;
                LODWORD(v343) = v264;
                v345 = m + 1;
                v342 = (char *)v267;
                v347 = 0;
                goto LABEL_238;
              }
              if ( v156 || v305 != -2 )
                v304 = v156;
              v327 = v302 + kk;
              v156 = v304;
              ++v302;
            }
          }
          v156 = v304;
          LODWORD(v343) = v264;
          v345 = m + 1;
          v342 = (char *)v267;
          v347 = 0;
          goto LABEL_237;
        }
LABEL_199:
        operator delete(v365, 32LL * v367, 4);
        goto LABEL_42;
      }
LABEL_198:
      v137 = v365;
      v32[5].m128i_i8[8] = 1;
      v138 = _mm_load_si128((const __m128i *)v361);
      v139 = _mm_load_si128(&v362);
      v365 = 0;
      v140 = _mm_load_si128(&v364);
      v32[4].m128i_i64[0] = v137;
      v141 = v366;
      *v32 = v138;
      v142 = _mm_load_si128(&v363);
      v366 = 0;
      v32[4].m128i_i64[1] = v141;
      LODWORD(v141) = v367;
      v367 = 0;
      v32[5].m128i_i32[0] = v141;
      v32[1] = v139;
      v32[2] = v142;
      v32[3] = v140;
      goto LABEL_199;
    }
LABEL_191:
    v136 = v30;
LABEL_192:
    ++v345;
    if ( 4 * v345 < (unsigned int)(3 * v343) )
    {
      if ( (int)v343 - v347 - v345 > (unsigned int)v343 >> 3 )
      {
LABEL_194:
        if ( *(_QWORD *)v136 == -1 )
        {
LABEL_196:
          *(_QWORD *)v136 = 0x171000000EDLL;
          memset(v136 + 8, 0, 0x60u);
          if ( !v368 )
            goto LABEL_42;
          v32 = (__m128i *)(v136 + 8);
          goto LABEL_198;
        }
LABEL_195:
        --v347;
        goto LABEL_196;
      }
      v240 = (((((v22 | (v22 >> 1)) >> 2) | v22 | (v22 >> 1)) >> 4) | ((v22 | (v22 >> 1)) >> 2) | v22 | (v22 >> 1)) >> 8;
      v227 = (v240
            | ((((v22 | (v22 >> 1)) >> 2) | v22 | (v22 >> 1)) >> 4)
            | ((v22 | (v22 >> 1)) >> 2)
            | v22
            | (v22 >> 1)
            | ((v240
              | ((((v22 | (v22 >> 1)) >> 2) | v22 | (v22 >> 1)) >> 4)
              | ((v22 | (v22 >> 1)) >> 2)
              | v22
              | (v22 >> 1)) >> 16))
           + 1;
      if ( (unsigned int)v227 < 0x40 )
        LODWORD(v227) = 64;
      v241 = 104LL * (unsigned int)v227;
      v242 = (char *)sub_22300B0(v241, 8, (unsigned int)v227, v22, v23, v24);
      v230 = v242;
      if ( v342 )
      {
        v243 = &v242[v241];
        v335 = (void *)(104LL * (unsigned int)v343);
        v244 = &v342[(_QWORD)v335];
        do
        {
          *(_QWORD *)v242 = -1;
          v242 += 104;
        }
        while ( v243 != v242 );
        LODWORD(v336) = v227;
        v332 = v227 - 1;
        v245 = 0;
        v246 = v342;
        do
        {
          v247 = *(_QWORD *)v246;
          if ( (unsigned __int64)(*(_QWORD *)v246 + 2LL) > 1 )
          {
            v248 = 1;
            v249 = nullptr;
            v250 = (((0xBF58476D1CE4E5B9LL * v247) >> 31) ^ (484763065 * v247)) & v332;
            while ( 1 )
            {
              v251 = &v230[104 * v250];
              v252 = *(_QWORD *)v251;
              if ( v247 == *(_QWORD *)v251 )
                break;
              if ( v252 == -1 )
              {
                if ( v249 )
                  v251 = v249;
                break;
              }
              if ( v252 != -2 || v249 )
                v251 = v249;
              v249 = v251;
              v250 = v332 & (v248 + v250);
              ++v248;
            }
            *(_QWORD *)v251 = v247;
            ++v245;
            sub_FC2BC0((__m128i *)(v251 + 8), (const __m128i *)(v246 + 8));
            if ( v246[96] )
              operator delete(*((_QWORD *)v246 + 9), 32LL * *((unsigned int *)v246 + 22), 4);
          }
          v246 += 104;
        }
        while ( v244 != v246 );
        v234 = v245;
        LODWORD(v227) = (_DWORD)v336;
        operator delete(v342, v335, 8);
      }
      else
      {
        v313 = &v242[v241];
        do
        {
          *(_QWORD *)v242 = -1;
          v242 += 104;
        }
        while ( v313 != v242 );
        v234 = 0;
        v332 = v227 - 1;
      }
      v257 = 1;
      v136 = nullptr;
      v258 = v332 & 0x2ABAD31C;
      while ( 1 )
      {
        v255 = &v230[104 * v258];
        v259 = *(_QWORD *)v255;
        if ( *(_QWORD *)v255 == 0x171000000EDLL )
          break;
        if ( v259 == -1 )
          goto LABEL_347;
        if ( v259 != -2 || v136 )
          v255 = v136;
        v136 = v255;
        v258 = v332 & (v257 + v258);
        ++v257;
      }
    }
    else
    {
LABEL_312:
      v226 = ((((((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v343 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v343 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 8;
      v227 = (v226
            | (((((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v343 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v343 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)
            | ((v226
              | (((((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v343 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v343 - 1) | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v343 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v343 - 1) >> 1)) >> 16))
           + 1;
      if ( (unsigned int)v227 < 0x40 )
        LODWORD(v227) = 64;
      v228 = 104LL * (unsigned int)v227;
      v229 = (char *)sub_22300B0(v228, 8, (unsigned int)v227, v22, v23, v24);
      v230 = v229;
      if ( v342 )
      {
        v231 = &v229[v228];
        v335 = (void *)(104LL * (unsigned int)v343);
        v232 = &v342[(_QWORD)v335];
        do
        {
          *(_QWORD *)v229 = -1;
          v229 += 104;
        }
        while ( v231 != v229 );
        v233 = v342;
        v234 = 0;
        v331 = v227 - 1;
        if ( v232 != v342 )
        {
          LODWORD(v336) = v227;
          v235 = v232;
          do
          {
            v236 = *(_QWORD *)v233;
            if ( (unsigned __int64)(*(_QWORD *)v233 + 2LL) > 1 )
            {
              v237 = (((0xBF58476D1CE4E5B9LL * v236) >> 31) ^ (484763065 * v236)) & v331;
              v238 = &v230[104 * v237];
              v239 = *(_QWORD *)v238;
              if ( v236 != *(_QWORD *)v238 )
              {
                v319 = 1;
                v320 = nullptr;
                if ( v239 != -1 )
                {
                  while ( 1 )
                  {
                    if ( v239 == -2 && !v320 )
                      v320 = v238;
                    v237 = v331 & (v319 + v237);
                    v238 = &v230[104 * v237];
                    v239 = *(_QWORD *)v238;
                    if ( v236 == *(_QWORD *)v238 )
                      break;
                    if ( v239 == -1 )
                    {
                      if ( v320 )
                        v238 = v320;
                      break;
                    }
                    ++v319;
                  }
                }
              }
              *(_QWORD *)v238 = v236;
              ++v234;
              sub_FC2BC0((__m128i *)(v238 + 8), (const __m128i *)(v233 + 8));
              if ( v233[96] )
                operator delete(*((_QWORD *)v233 + 9), 32LL * *((unsigned int *)v233 + 22), 4);
            }
            v233 += 104;
          }
          while ( v235 != v233 );
          LODWORD(v227) = (_DWORD)v336;
        }
        operator delete(v342, v335, 8);
      }
      else
      {
        v262 = &v229[v228];
        do
        {
          *(_QWORD *)v229 = -1;
          v229 += 104;
        }
        while ( v262 != v229 );
        v234 = 0;
        v331 = v227 - 1;
      }
      v253 = 1;
      v136 = nullptr;
      v254 = v331 & 0x2ABAD31C;
      while ( 1 )
      {
        v255 = &v230[104 * v254];
        v256 = *(_QWORD *)v255;
        if ( *(_QWORD *)v255 == 0x171000000EDLL )
          break;
        if ( v256 == -1 )
        {
LABEL_347:
          if ( v136 )
          {
            LODWORD(v343) = v227;
            v345 = v234 + 1;
            v342 = v230;
            v347 = 0;
            goto LABEL_194;
          }
          v342 = v230;
          v345 = v234 + 1;
          v136 = v255;
          LODWORD(v343) = v227;
          v347 = 0;
          goto LABEL_196;
        }
        if ( v256 != -2 || v136 )
          v255 = v136;
        v136 = v255;
        v254 = v331 & (v253 + v254);
        ++v253;
      }
    }
    v342 = v230;
    v345 = v234 + 1;
    v136 = v255;
    LODWORD(v343) = v227;
    v347 = 0;
    goto LABEL_195;
  }
LABEL_32:
  v25 = (unsigned int)v343;
  v2[4].m128i_i8[0] = 0;
  v26 = 104 * v25;
  if ( (_DWORD)v25 )
  {
    v27 = v342;
    v28 = &v342[v26];
    do
    {
      if ( *(_QWORD *)v27 != -2 && *(_QWORD *)v27 != -1 && v27[96] )
        operator delete(*((_QWORD *)v27 + 9), 32LL * *((unsigned int *)v27 + 22), 4);
      v27 += 104;
    }
    while ( v28 != v27 );
  }
LABEL_50:
  operator delete(v342, v26, 8);
  return v2;
}
