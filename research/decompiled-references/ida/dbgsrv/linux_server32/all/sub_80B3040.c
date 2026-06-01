/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B3040
// Address: 0x080B3040

//----- (080B3040) --------------------------------------------------------
int *__userpurge sub_80B3040@<eax>(int *a1, int a2, int a3)
{
  char v3; // al
  __int64 v4; // xmm0_8
  void *v5; // esi
  void *v6; // eax
  void *v7; // eax
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int (__cdecl *v12)(int, void **, int); // eax
  char **v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // eax
  void **v22; // edx
  unsigned int v23; // ecx
  char *v24; // edx
  int v25; // esi
  int v26; // eax
  unsigned int v27; // ebx
  char *v28; // eax
  char *v29; // eax
  int i1; // edi
  char *v31; // esi
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  char *v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  int v38; // esi
  int v39; // edx
  int (__cdecl *v40)(int, void **, int); // eax
  char *v41; // ecx
  int v42; // edi
  int v43; // esi
  char *v44; // edx
  void *v45; // eax
  int v46; // eax
  const char *v47; // edi
  _BYTE *v48; // eax
  int v49; // edx
  __int64 *v50; // eax
  int v51; // edi
  void **v52; // eax
  int v53; // eax
  __int64 v54; // rax
  char *v55; // ecx
  void *v56; // edi
  void *v57; // esi
  char *v58; // edx
  void *v59; // eax
  char *v60; // ecx
  int v61; // edi
  int v62; // esi
  char *v63; // edx
  void *v64; // eax
  int v65; // eax
  int v66; // ecx
  int (__cdecl *v67)(int, int, void **); // edx
  unsigned int v68; // eax
  unsigned int v69; // edx
  signed int v70; // eax
  size_t v71; // edi
  size_t v72; // esi
  unsigned int v73; // esi
  FILE *v74; // edi
  int v75; // eax
  int v76; // eax
  __int64 v77; // xmm0_8
  void *v78; // esi
  void *v79; // eax
  int v80; // edi
  unsigned int v81; // eax
  unsigned int v82; // edx
  unsigned int v83; // eax
  size_t v84; // esi
  char *v85; // eax
  unsigned int v86; // esi
  FILE *v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // edx
  _DWORD *v90; // edi
  int v91; // eax
  _DWORD *v92; // esi
  void *v93; // eax
  void *v94; // eax
  int v95; // eax
  int v96; // esi
  int v97; // edi
  unsigned int v98; // ebx
  char *v99; // eax
  int v100; // edi
  unsigned int v101; // esi
  void *v102; // ebx
  signed int v103; // ecx
  bool v104; // di
  size_t v105; // ecx
  int v106; // eax
  int v107; // eax
  signed int v108; // esi
  int v109; // ebx
  char *v110; // eax
  char *v111; // eax
  int m; // esi
  char *v113; // edi
  void *v114; // edx
  void *v115; // edx
  int v116; // esi
  int v117; // edi
  unsigned int v118; // ebx
  int v119; // esi
  int v120; // esi
  _BYTE *v121; // eax
  int v122; // edx
  char v123; // bl
  _BOOL4 v124; // ebx
  char v125; // si
  void (__cdecl *v126)(int, void **, _BOOL4, void **); // ecx
  void **p_ptr; // eax
  int v128; // eax
  char *v129; // ecx
  int v130; // edi
  int v131; // esi
  char *v132; // eax
  void *v133; // edx
  int j; // edi
  char *v135; // esi
  void *v136; // eax
  void *v137; // eax
  signed int v138; // ebx
  int v139; // eax
  char *v140; // esi
  signed int v141; // ebx
  unsigned int v142; // ebx
  char *v143; // eax
  _BYTE *v144; // eax
  _BYTE *v145; // eax
  _BYTE *v146; // eax
  _BYTE *v147; // eax
  bool v148; // cl
  char *v149; // eax
  int v150; // eax
  char *v151; // edx
  void **v152; // esi
  char *v153; // ecx
  unsigned int v154; // edx
  char *v155; // eax
  signed int v156; // ebx
  char *v157; // ecx
  int v158; // edi
  int v159; // esi
  char *v160; // edx
  void *v161; // eax
  int v162; // eax
  unsigned int v163; // esi
  char *v164; // ecx
  size_t v165; // edi
  int v166; // esi
  char *v167; // eax
  void *v168; // edx
  int v169; // esi
  int v170; // eax
  signed int v171; // edi
  int v172; // eax
  size_t v173; // ecx
  size_t v174; // eax
  void *v175; // edx
  unsigned int v176; // ebx
  char *v177; // eax
  char *v178; // edx
  int v179; // edi
  int v180; // esi
  int *v181; // eax
  void *v182; // ecx
  int v183; // esi
  int v184; // edi
  int v185; // eax
  char *v186; // edx
  char *v187; // eax
  char v188; // dl
  int v189; // ebx
  unsigned int v190; // edx
  unsigned int ii; // ecx
  int v192; // eax
  char *v193; // edx
  char *v194; // eax
  char v195; // dl
  int v196; // ebx
  unsigned int v197; // edx
  unsigned int jj; // ecx
  unsigned int v199; // esi
  int v200; // eax
  char *v201; // ecx
  void *v202; // eax
  signed int v203; // ebx
  signed int v204; // eax
  signed int v205; // ebx
  unsigned int v206; // esi
  void *v207; // edi
  void *v208; // eax
  signed int v209; // ebx
  int v210; // esi
  int v211; // edx
  int v212; // eax
  const char *v213; // esi
  unsigned int v214; // ecx
  char *v215; // edx
  int v216; // edi
  char *v217; // eax
  int v218; // edi
  int v219; // eax
  unsigned int v220; // ebx
  char *v221; // eax
  void *v222; // eax
  unsigned int v223; // ebx
  char *v224; // edi
  int v225; // eax
  int v226; // edx
  void *v227; // eax
  unsigned int v228; // edx
  void *v229; // edx
  char *v230; // eax
  unsigned int v231; // edx
  void *v232; // edx
  char *v233; // eax
  char *v234; // edx
  char *v235; // eax
  char v236; // dl
  int v237; // esi
  unsigned int v238; // edx
  unsigned int kk; // ecx
  int v240; // eax
  char *v241; // edx
  int v242; // edi
  char *v243; // eax
  char v244; // dl
  int v245; // esi
  unsigned int v246; // edx
  unsigned int mm; // ecx
  char *v248; // eax
  char *v249; // eax
  size_t v250; // eax
  unsigned int v251; // ebx
  void *v252; // eax
  __int64 *v253; // eax
  size_t v254; // esi
  int *v255; // eax
  void *v256; // eax
  int *v257; // eax
  char *v258; // eax
  _BYTE *v259; // ebx
  void *v260; // ebx
  char *v261; // eax
  char *v262; // eax
  int *v263; // eax
  char *v264; // eax
  char *v265; // eax
  int v266; // esi
  int v267; // edi
  int nn; // edi
  unsigned int v269; // esi
  unsigned __int8 v270; // bl
  void *v271; // ebx
  char *v272; // eax
  __m128i v273; // xmm0
  __m128i v274; // xmm0
  FILE *v275; // eax
  char v276; // al
  char v277; // dl
  int v278; // esi
  int i; // ebx
  unsigned int *v280; // edi
  char *v281; // eax
  void *v282; // eax
  int k; // edi
  unsigned int v284; // esi
  __m128i v285; // xmm0
  unsigned int v286; // ebx
  char *v287; // edx
  size_t v288; // eax
  char *v289; // eax
  __int64 v290; // xmm5_8
  char *v291; // edx
  size_t v292; // eax
  int *v293; // eax
  int v294; // edx
  char *v295; // ebx
  char *v296; // eax
  int v297; // [esp-Ch] [ebp-3134h]
  unsigned int v298; // [esp-Ch] [ebp-3134h]
  int v299; // [esp-8h] [ebp-3130h]
  int v300; // [esp-4h] [ebp-312Ch]
  int v301; // [esp+0h] [ebp-3128h]
  _BYTE *v302; // [esp+4h] [ebp-3124h]
  int v303; // [esp+8h] [ebp-3120h]
  void *v304; // [esp+Ch] [ebp-311Ch]
  void *v305; // [esp+10h] [ebp-3118h]
  int v306; // [esp+14h] [ebp-3114h]
  int v307; // [esp+18h] [ebp-3110h]
  char *v308; // [esp+18h] [ebp-3110h]
  int v309; // [esp+1Ch] [ebp-310Ch]
  signed int v310; // [esp+20h] [ebp-3108h]
  int v311; // [esp+20h] [ebp-3108h]
  int v312; // [esp+20h] [ebp-3108h]
  unsigned int v313; // [esp+20h] [ebp-3108h]
  int v314; // [esp+20h] [ebp-3108h]
  size_t v315; // [esp+20h] [ebp-3108h]
  size_t v316; // [esp+20h] [ebp-3108h]
  int v317; // [esp+28h] [ebp-3100h]
  _BYTE *v318; // [esp+28h] [ebp-3100h]
  char *v319; // [esp+28h] [ebp-3100h]
  char *path; // [esp+2Ch] [ebp-30FCh]
  char *patha; // [esp+2Ch] [ebp-30FCh]
  char *pathd; // [esp+2Ch] [ebp-30FCh]
  char *pathb; // [esp+2Ch] [ebp-30FCh]
  char *pathc; // [esp+2Ch] [ebp-30FCh]
  int v325; // [esp+30h] [ebp-30F8h]
  __int64 v326; // [esp+30h] [ebp-30F8h]
  unsigned __int64 v327; // [esp+30h] [ebp-30F8h]
  size_t v328; // [esp+30h] [ebp-30F8h]
  size_t v329; // [esp+30h] [ebp-30F8h]
  size_t v330; // [esp+30h] [ebp-30F8h]
  int v331; // [esp+30h] [ebp-30F8h]
  size_t v332; // [esp+30h] [ebp-30F8h]
  size_t v333; // [esp+30h] [ebp-30F8h]
  int v334; // [esp+30h] [ebp-30F8h]
  int v335; // [esp+30h] [ebp-30F8h]
  int v336; // [esp+40h] [ebp-30E8h]
  int v337; // [esp+40h] [ebp-30E8h]
  void *v338; // [esp+40h] [ebp-30E8h]
  __int64 v339; // [esp+40h] [ebp-30E8h]
  int v340; // [esp+40h] [ebp-30E8h]
  int v341; // [esp+40h] [ebp-30E8h]
  int v342; // [esp+40h] [ebp-30E8h]
  int v343; // [esp+40h] [ebp-30E8h]
  bool v344; // [esp+40h] [ebp-30E8h]
  void *v345; // [esp+40h] [ebp-30E8h]
  size_t v346; // [esp+50h] [ebp-30D8h]
  __int64 *v347; // [esp+50h] [ebp-30D8h]
  unsigned __int64 v348; // [esp+50h] [ebp-30D8h]
  int v349; // [esp+50h] [ebp-30D8h]
  char *v350; // [esp+50h] [ebp-30D8h]
  int v351; // [esp+50h] [ebp-30D8h]
  signed int v352; // [esp+50h] [ebp-30D8h]
  size_t v353; // [esp+50h] [ebp-30D8h]
  size_t v354; // [esp+50h] [ebp-30D8h]
  int v355; // [esp+50h] [ebp-30D8h]
  int v356; // [esp+50h] [ebp-30D8h]
  int v357; // [esp+50h] [ebp-30D8h]
  int v358; // [esp+50h] [ebp-30D8h]
  int v359; // [esp+50h] [ebp-30D8h]
  void *v360; // [esp+50h] [ebp-30D8h]
  size_t v361; // [esp+50h] [ebp-30D8h]
  unsigned int v362; // [esp+50h] [ebp-30D8h]
  unsigned __int64 v363; // [esp+50h] [ebp-30D8h]
  unsigned __int64 v364; // [esp+50h] [ebp-30D8h]
  char v365; // [esp+63h] [ebp-30C5h]
  _BYTE *v366; // [esp+70h] [ebp-30B8h] BYREF
  char *v367; // [esp+74h] [ebp-30B4h] BYREF
  void *src; // [esp+78h] [ebp-30B0h] BYREF
  unsigned int v369; // [esp+7Ch] [ebp-30ACh]
  void *v370; // [esp+80h] [ebp-30A8h] BYREF
  int v371; // [esp+84h] [ebp-30A4h]
  int v372; // [esp+88h] [ebp-30A0h]
  void *v373[2]; // [esp+90h] [ebp-3098h] BYREF
  int v374; // [esp+98h] [ebp-3090h]
  void *dest; // [esp+A0h] [ebp-3088h] BYREF
  size_t n; // [esp+A4h] [ebp-3084h]
  size_t v377; // [esp+A8h] [ebp-3080h]
  void *ptr; // [esp+B0h] [ebp-3078h] BYREF
  __int64 v379; // [esp+B4h] [ebp-3074h]
  void *v380; // [esp+BCh] [ebp-306Ch]
  void *v381; // [esp+C0h] [ebp-3068h]
  int v382; // [esp+C4h] [ebp-3064h]
  void *v383; // [esp+C8h] [ebp-3060h]
  int v384; // [esp+CCh] [ebp-305Ch]
  int v385; // [esp+D0h] [ebp-3058h]
  int v386; // [esp+D4h] [ebp-3054h]
  char v387[4]; // [esp+D8h] [ebp-3050h] BYREF
  unsigned __int64 v388; // [esp+DCh] [ebp-304Ch] BYREF
  unsigned int v389; // [esp+E4h] [ebp-3044h]
  int v390; // [esp+E8h] [ebp-3040h]
  _BYTE v391[24]; // [esp+ECh] [ebp-303Ch] BYREF
  _BYTE v392[5]; // [esp+107h] [ebp-3021h] BYREF
  char v393[4096]; // [esp+10Ch] [ebp-301Ch] BYREF
  char v394[4096]; // [esp+110Ch] [ebp-201Ch] BYREF
  char s[4096]; // [esp+210Ch] [ebp-101Ch] BYREF
  unsigned int v396; // [esp+310Ch] [ebp-1Ch]

  v3 = *(_BYTE *)(a2 + 153);
  v396 = __readgsdword(0x14u);
  v365 = v3;
  *(_BYTE *)(a2 + 153) = 0;
  src = (void *)(a3 + 5);
  v369 = *(_DWORD *)a3 + a3 + 5;
  sub_80BD060(a1, 0);
  switch ( *(_BYTE *)(a3 + 4) )
  {
    case 5:
      v222 = (void *)*a1;
      if ( *a1 )
      {
        a1[1] = 0;
        sub_80CF780(v222);
        *a1 = 0;
        a1[2] = 0;
      }
      goto LABEL_5;
    case 0xA:
      v210 = *(_DWORD *)(a2 + 244);
      *(_DWORD *)(v210 + 416) = sub_80CE010((unsigned int *)&src, v369);
      *(_DWORD *)(v210 + 420) = v211;
      v212 = sub_80CDEC0((unsigned int *)&src, v369);
      v344 = v212 != 0;
      if ( v212 )
        *(_BYTE *)(a2 + 96) = 1;
      v213 = (const char *)src;
      v214 = v369;
      v215 = (char *)src;
      do
      {
        if ( (unsigned int)v215 >= v369 )
        {
          v216 = *(_DWORD *)(a2 + 244);
LABEL_390:
          *(_UNKNOWN **)((char *)&off_811D1A0 + v216 - 135385076) = nullptr;
          goto LABEL_391;
        }
        ++v215;
      }
      while ( *(v215 - 1) );
      src = v215;
      v216 = *(_DWORD *)(a2 + 244);
      if ( !v213 )
      {
        v213 = v215;
        goto LABEL_390;
      }
      v313 = v369;
      patha = v215;
      v329 = strlen(v213);
      if ( !v329 )
      {
        v213 = patha;
        v214 = v313;
        goto LABEL_390;
      }
      v282 = *(_UNKNOWN **)((char *)&off_811D19C + v216 - 135385076);
      if ( *(unsigned int *)((char *)&off_811D1A4 + v216 - 135385076) < v329 + 1 )
      {
        v282 = sub_80CF920((int)&off_811D19C + v216 - 135385076, v282, v329 + 1, 1u);
        *(_UNKNOWN **)((char *)&off_811D19C + v216 - 135385076) = v282;
      }
      *(_UNKNOWN **)((char *)&off_811D1A0 + v216 - 135385076) = (_UNKNOWN *)(v329 + 1);
      memmove(v282, v213, v329);
      (*(_BYTE **)((char *)&off_811D19C + v216 - 135385076))[v329] = 0;
      v214 = v369;
      v213 = (const char *)src;
LABEL_391:
      v217 = (char *)v213;
      do
      {
        if ( (unsigned int)v217 >= v214 )
        {
          v218 = *(_DWORD *)(a2 + 244);
LABEL_395:
          *(_UNKNOWN **)((char *)&off_811D1AC + v218 - 135385076) = nullptr;
          goto LABEL_396;
        }
        ++v217;
      }
      while ( *(v217 - 1) );
      src = v217;
      v218 = *(_DWORD *)(a2 + 244);
      if ( !v213 )
        goto LABEL_395;
      pathd = (char *)v214;
      v250 = strlen(v213);
      v214 = (unsigned int)pathd;
      v330 = v250;
      if ( !v250 )
        goto LABEL_395;
      pathb = (char *)(v250 + 1);
      v251 = v250 + 1;
      v252 = *(_UNKNOWN **)((char *)&off_811D1A8 + v218 - 135385076);
      if ( *(unsigned int *)((char *)&off_811D1B0 + v218 - 135385076) < v251 )
      {
        v252 = sub_80CF920((int)&off_811D1A8 + v218 - 135385076, v252, v251, 1u);
        *(_UNKNOWN **)((char *)&off_811D1A8 + v218 - 135385076) = v252;
      }
      *(_UNKNOWN **)((char *)&off_811D1AC + v218 - 135385076) = pathb;
      memmove(v252, v213, v330);
      (*(_BYTE **)((char *)&off_811D1A8 + v218 - 135385076))[v330] = 0;
      v214 = v369;
LABEL_396:
      (*(_DWORD **)((char *)&off_811D0E8 + a2 - 135385076))[112] = sub_80CDEC0((unsigned int *)&src, v214);
      (*(void (__cdecl **)(_DWORD, bool))(**(_DWORD **)((char *)&off_811D0E8 + a2 - 135385076) + 48))(
        *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076),
        v344);
      v219 = *(int *)((char *)&off_811D0E8 + a2 - 135385076);
      ptr = nullptr;
      v379 = 0;
      dest = nullptr;
      n = 0;
      v220 = (*(int (__cdecl **)(int, void **, void **))(*(_DWORD *)v219 + 52))(v219, &dest, &ptr);
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      sub_80A6580((char **)a1, v220);
      sub_80A6680((char **)a1, (unsigned int)dest, n);
      if ( v220 == 1 )
      {
        if ( *(_BYTE *)(a2 + 96) )
          sub_8058290();
        sub_80B9AA0((char **)a1, (int *)(*(_DWORD *)(a2 + 244) + 344));
      }
      else
      {
        v221 = (char *)&qword_811CFF4 - 258076;
        if ( (_DWORD)v379 )
          v221 = (char *)ptr;
        sub_80A6780((char **)a1, v221);
      }
      if ( ptr )
      {
LABEL_403:
        LODWORD(v379) = 0;
        sub_80CF780(ptr);
      }
LABEL_5:
      if ( v365 )
LABEL_10:
        *(_BYTE *)(a2 + 153) = 1;
      if ( v396 != __readgsdword(0x14u) )
        sub_80D7AB0();
      return a1;
    case 0xB:
      goto LABEL_5;
    case 0xC:
      dest = nullptr;
      n = 0;
      v377 = 0;
      v162 = *(_DWORD *)(a2 + 244);
      ptr = nullptr;
      v379 = 0;
      v163 = (*(int (__cdecl **)(int))(*(_DWORD *)v162 + 36))(v162);
      sub_80A6580((char **)a1, v163);
      if ( v163 == 1 )
        sub_80B81B0((int)a1, &dest);
      else
        sub_80A6780((char **)a1, (char *)&qword_811CFF4 - 258076);
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      if ( ptr )
      {
        LODWORD(v379) = 0;
        sub_80CF780(ptr);
      }
      v164 = (char *)dest;
      if ( dest )
      {
        v165 = n;
        if ( n )
        {
          v166 = 0;
          do
          {
            v167 = &v164[16 * v166];
            v168 = *((void **)v167 + 1);
            if ( v168 )
            {
              *((_DWORD *)v167 + 2) = 0;
              sub_80CF780(v168);
              v164 = (char *)dest;
            }
            ++v166;
          }
          while ( v165 != v166 );
        }
        n = 0;
        sub_80CF780(v164);
      }
      goto LABEL_5;
    case 0xD:
      v144 = src;
      v318 = src;
      while ( (unsigned int)v144 < v369 )
      {
        if ( !*v144++ )
        {
          v260 = src;
          src = v144;
          v318 = v144;
          v304 = v260;
          goto LABEL_248;
        }
      }
      v304 = nullptr;
LABEL_248:
      v145 = v318;
      while ( (unsigned int)v145 < v369 )
      {
        if ( !*v145++ )
        {
          v259 = v318;
          src = v145;
          v318 = v145;
          v302 = v259;
          goto LABEL_252;
        }
      }
      v302 = nullptr;
LABEL_252:
      v146 = v318;
      while ( (unsigned int)v146 < v369 )
      {
        if ( !*v146++ )
        {
          src = v146;
          goto LABEL_256;
        }
      }
      v318 = nullptr;
LABEL_256:
      v303 = sub_80CDEC0((unsigned int *)&src, v369);
      v147 = src;
      v305 = src;
      while ( (unsigned int)v147 < v369 )
      {
        if ( !*v147++ )
        {
          src = v147;
LABEL_260:
          v301 = sub_80CDEC0((unsigned int *)&src, v369);
          v148 = 0;
          v149 = (char *)src;
          dest = nullptr;
          n = 0;
          v377 = 0;
          ptr = nullptr;
          v379 = 0;
          LOBYTE(v380) = 1;
          if ( (unsigned int)src < v369 )
          {
            v148 = *(_BYTE *)src != 0;
            v149 = (char *)src + 1;
          }
          src = v149;
          LOBYTE(v380) = v148;
          v312 = sub_80CDEC0((unsigned int *)&src, v369);
          v355 = 0;
          if ( v312 > 0 )
          {
            do
            {
              if ( (unsigned int)src >= v369 )
                break;
              v150 = v379;
              v151 = (char *)ptr;
              if ( HIDWORD(v379) < (unsigned int)(v379 + 1) )
              {
                v151 = (char *)sub_80CF920((int)&ptr, ptr, v379 + 1, 0xCu);
                ptr = v151;
                v150 = v379;
              }
              v152 = (void **)&v151[12 * v150];
              *v152 = nullptr;
              v153 = (char *)src;
              v152[1] = nullptr;
              v154 = v369;
              v152[2] = nullptr;
              v155 = v153;
              LODWORD(v379) = v379 + 1;
              do
              {
                if ( (unsigned int)v155 >= v154 )
                  goto LABEL_269;
                ++v155;
              }
              while ( *(v155 - 1) );
              src = v155;
              if ( v153 )
              {
                v224 = (char *)v152[1];
                v225 = v155 - v153 - 1;
                v328 = v225;
                v226 = v225;
                if ( v224 )
                {
                  --v224;
                  v226 = (int)&v224[v225];
                }
                v227 = *v152;
                v345 = (void *)(v226 + 1);
                if ( v226 != -1 )
                {
                  v306 = v226;
                  v308 = v153;
                  v227 = sub_80CF920((int)v152, v227, v226 + 1, 1u);
                  v226 = v306;
                  v153 = v308;
                  *v152 = v227;
                }
                v152[1] = v345;
                *((_BYTE *)v227 + v226) = 0;
                memmove(&v224[(_DWORD)*v152], v153, v328);
              }
LABEL_269:
              ++v355;
            }
            while ( v312 != v355 );
          }
          if ( v318 != nullptr && v304 != nullptr && v305 )
          {
            v156 = (*(int (__cdecl **)(_DWORD, void *, _BYTE *, void **, _BYTE *, int, void *, int, void **))(**(_DWORD **)(a2 + 244) + 64))(
                     *(_DWORD *)(a2 + 244),
                     v304,
                     v302,
                     &ptr,
                     v318,
                     v303,
                     v305,
                     v301,
                     &dest);
            if ( *(_BYTE *)(a2 + 96) )
              sub_8058290();
          }
          else
          {
            v156 = -3;
          }
          sub_80AAD70(a2, (char **)a1, v156, (int)&dest);
          v157 = (char *)ptr;
          if ( ptr )
          {
            v158 = v379;
            if ( (_DWORD)v379 )
            {
              v159 = 0;
              do
              {
                v160 = &v157[12 * v159];
                v161 = *(void **)v160;
                if ( *(_DWORD *)v160 )
                {
                  *((_DWORD *)v160 + 1) = 0;
                  sub_80CF780(v161);
                  v157 = (char *)ptr;
                }
                ++v159;
              }
              while ( v158 != v159 );
            }
            LODWORD(v379) = 0;
            sub_80CF780(v157);
          }
          if ( dest )
          {
            n = 0;
            sub_80CF780(dest);
          }
          goto LABEL_5;
        }
      }
      v305 = nullptr;
      goto LABEL_260;
    case 0xE:
      ptr = nullptr;
      v379 = 0;
      v205 = (*(int (__cdecl **)(_DWORD, void **))(**(_DWORD **)((char *)&off_811D0E8 + a2 - 135385076) + 80))(
               *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076),
               &ptr);
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      sub_80A6580((char **)a1, v205);
      if ( v205 < 0 )
      {
        v262 = (char *)&qword_811CFF4 - 258076;
        if ( (_DWORD)v379 )
          v262 = (char *)ptr;
        sub_80A6780((char **)a1, v262);
      }
      if ( ptr )
        goto LABEL_230;
      goto LABEL_5;
    case 0xF:
      ptr = nullptr;
      v379 = 0;
      v204 = sub_80AACC0(a2, (int)&ptr, (unsigned int *)&src);
      sub_80AAD70(a2, (char **)a1, v204, (int)&ptr);
      if ( ptr )
        goto LABEL_403;
      goto LABEL_5;
    case 0x10:
      v223 = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(a2 + 244) + 60))(*(_DWORD *)(a2 + 244));
      sub_80A6580((char **)a1, v223);
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      goto LABEL_5;
    case 0x11:
      v139 = sub_80CDEC0((unsigned int *)&src, v369);
      if ( *(_BYTE *)(a2 + 152) )
      {
        sub_80A6580((char **)a1, 0);
      }
      else
      {
        v140 = (char *)&off_811D090 + a2 - 135385076;
        v141 = (*(int (__cdecl **)(_DWORD, char *, int))(**(_DWORD **)((char *)&off_811D0E8 + a2 - 135385076) + 68))(
                 *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076),
                 v140,
                 v139);
        sub_80A6580((char **)a1, v141);
        if ( v141 > 0 )
        {
          sub_80B8A50((char **)a1, v140);
          if ( *(_BYTE *)(a2 + 96) )
          {
            sub_80A0C60((int *)v140, s, 1024);
            sub_8058290();
          }
          goto LABEL_5;
        }
      }
      if ( *(_BYTE *)(a2 + 152) )
        goto LABEL_5;
      goto LABEL_10;
    case 0x12:
      ptr = nullptr;
      v379 = 0;
      v138 = (*(int (__cdecl **)(_DWORD, void **))(**(_DWORD **)(a2 + 244) + 76))(*(_DWORD *)(a2 + 244), &ptr);
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      sub_80A6580((char **)a1, v138);
      if ( v138 < 0 )
      {
        v261 = (char *)&qword_811CFF4 - 258076;
        if ( (_DWORD)v379 )
          v261 = (char *)ptr;
        sub_80A6780((char **)a1, v261);
      }
      if ( ptr )
      {
LABEL_230:
        LODWORD(v379) = 0;
        sub_80CF780(ptr);
      }
      goto LABEL_5;
    case 0x13:
      v121 = src;
      v122 = *(_DWORD *)(a2 + 244);
      if ( (unsigned int)src >= v369 )
      {
        v124 = 0;
      }
      else
      {
        v123 = *(_BYTE *)src;
        src = (char *)src + 1;
        v124 = v123 != 0;
        if ( (unsigned int)(v121 + 1) < v369 )
        {
          v125 = v121[1];
          dest = nullptr;
          n = 0;
          v377 = 0;
          ptr = nullptr;
          v379 = 0;
          src = v121 + 2;
          v126 = *(void (__cdecl **)(int, void **, _BOOL4, void **))(*(_DWORD *)v122 + 96);
          if ( v125 )
            p_ptr = &ptr;
          else
            p_ptr = nullptr;
LABEL_203:
          v126(v122, &dest, v124, p_ptr);
          sub_80AB790(a2, (unsigned int **)&dest);
          v128 = sub_80A0FB0(*(int *)((char *)&off_811D0E8 + a2 - 135385076));
          if ( v128 )
          {
            v341 = sub_80AB000(a2, *(int **)v128, *(const char ***)(v128 + 12), *(_DWORD *)(v128 + 4));
            sub_80A0FC0(*(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076));
          }
          else
          {
            v341 = 0;
          }
          if ( v125 )
          {
            v278 = v379;
            sub_80A6580((char **)a1, v379);
            if ( v278 )
            {
              for ( i = 0; i != v278; ++i )
              {
                v280 = (unsigned int *)((char *)ptr + 16 * i);
                sub_80A6580((char **)a1, *v280);
                v281 = (char *)&qword_811CFF4 - 258076;
                if ( v280[2] )
                  v281 = (char *)v280[1];
                sub_80A6780((char **)a1, v281);
              }
            }
          }
          if ( *(_BYTE *)(a2 + 96) )
          {
            if ( !*((_DWORD *)&qword_811CFF4 + v341 - 869) )
              sub_80D3B60((_BYTE *)&qword_811CFF4 + 6060, 16, (char *)&qword_811CFF4 - 276229, v341);
            sub_8058290();
          }
          v129 = (char *)ptr;
          if ( ptr )
          {
            v130 = v379;
            if ( (_DWORD)v379 )
            {
              v131 = 0;
              do
              {
                v132 = &v129[16 * v131];
                v133 = *((void **)v132 + 1);
                if ( v133 )
                {
                  *((_DWORD *)v132 + 2) = 0;
                  sub_80CF780(v133);
                  v129 = (char *)ptr;
                }
                ++v131;
              }
              while ( v130 != v131 );
            }
            LODWORD(v379) = 0;
            sub_80CF780(v129);
          }
          v111 = (char *)dest;
          if ( dest )
          {
            if ( n )
            {
              v354 = n;
              for ( j = 0; j != v354; ++j )
              {
                v135 = &v111[28 * j];
                v136 = *((void **)v135 + 4);
                if ( v136 )
                {
                  *((_DWORD *)v135 + 5) = 0;
                  sub_80CF780(v136);
                }
                v137 = *((void **)v135 + 1);
                if ( v137 )
                {
                  *((_DWORD *)v135 + 2) = 0;
                  sub_80CF780(v137);
                }
                v111 = (char *)dest;
              }
            }
LABEL_189:
            n = 0;
            sub_80CF780(v111);
          }
          goto LABEL_5;
        }
        ++v121;
      }
      dest = nullptr;
      v125 = 0;
      n = 0;
      v377 = 0;
      ptr = nullptr;
      v379 = 0;
      src = v121;
      v126 = *(void (__cdecl **)(int, void **, _BOOL4, void **))(*(_DWORD *)v122 + 96);
      p_ptr = nullptr;
      goto LABEL_203;
    case 0x14:
      sub_80B8840((int)&off_811D090 + a2 - 135385076, (unsigned int *)&src);
      v118 = (*(int (__cdecl **)(_DWORD, char *))(**(_DWORD **)((char *)&off_811D0E8 + a2 - 135385076) + 84))(
               *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076),
               (char *)&off_811D090 + a2 - 135385076);
      if ( *(_BYTE *)(a2 + 96) )
        goto LABEL_191;
      goto LABEL_192;
    case 0x15:
      v120 = sub_80CDEC0((unsigned int *)&src, v369);
      v118 = (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)((char *)&off_811D0E8 + a2 - 135385076) + 100))(
               *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076),
               v120);
      if ( *(_BYTE *)(a2 + 96) )
        goto LABEL_191;
      goto LABEL_192;
    case 0x16:
      v119 = sub_80CDEC0((unsigned int *)&src, v369);
      v118 = (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)((char *)&off_811D0E8 + a2 - 135385076) + 104))(
               *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076),
               v119);
      if ( *(_BYTE *)(a2 + 96) )
        goto LABEL_191;
      goto LABEL_192;
    case 0x17:
      v116 = sub_80CDEC0((unsigned int *)&src, v369);
      v117 = sub_80CDEC0((unsigned int *)&src, v369);
      v118 = (*(int (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(a2 + 244) + 108))(*(_DWORD *)(a2 + 244), v116, v117);
      if ( *(_BYTE *)(a2 + 96) )
        goto LABEL_191;
      goto LABEL_192;
    case 0x18:
      dest = nullptr;
      n = 0;
      v377 = 0;
      v106 = *(int *)((char *)&off_811D0E8 + a2 - 135385076);
      ptr = nullptr;
      v379 = 0;
      v107 = (*(int (__cdecl **)(int, void **, void **))(*(_DWORD *)v106 + 128))(v106, &dest, &ptr);
      v108 = n;
      v109 = v107;
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      sub_80A6580((char **)a1, v109 + 4);
      if ( v109 == 1 )
      {
        sub_80A6580((char **)a1, v108);
        if ( v108 > 0 )
        {
          for ( k = 0; k != v108; ++k )
            sub_80B7EC0((char **)a1, (char *)dest + 40 * k);
        }
      }
      else
      {
        v110 = (char *)&qword_811CFF4 - 258076;
        if ( (_DWORD)v379 )
          v110 = (char *)ptr;
        sub_80A6780((char **)a1, v110);
      }
      if ( ptr )
      {
        LODWORD(v379) = 0;
        sub_80CF780(ptr);
      }
      v111 = (char *)dest;
      if ( !dest )
        goto LABEL_5;
      if ( n )
      {
        v353 = n;
        for ( m = 0; m != v353; ++m )
        {
          v113 = &v111[40 * m];
          v114 = *((void **)v113 + 5);
          if ( v114 )
          {
            *((_DWORD *)v113 + 6) = 0;
            sub_80CF780(v114);
          }
          v115 = *((void **)v113 + 2);
          if ( v115 )
          {
            *((_DWORD *)v113 + 3) = 0;
            sub_80CF780(v115);
          }
          v111 = (char *)dest;
        }
      }
      goto LABEL_189;
    case 0x19:
      v100 = sub_80CE010((unsigned int *)&src, v369) - 1;
      v101 = sub_80CDEC0((unsigned int *)&src, v369);
      v102 = (void *)operator new[](v101);
      ptr = nullptr;
      v379 = 0;
      v103 = (*(int (__cdecl **)(_DWORD, int, void *, unsigned int, void **))(**(_DWORD **)(a2 + 244) + 144))(
               *(_DWORD *)(a2 + 244),
               v100,
               v102,
               v101,
               &ptr);
      if ( *(_BYTE *)(a2 + 96) )
      {
        v352 = v103;
        sub_8058290();
        v103 = v352;
        v277 = *(_BYTE *)(a2 + 96);
        v104 = v352 > 0;
        if ( v101 == 1 && v352 > 0 )
        {
          if ( v277 )
          {
            sub_8058290();
            sub_80A6580((char **)a1, v352);
            goto LABEL_167;
          }
LABEL_166:
          v352 = v103;
          sub_80A6580((char **)a1, v103);
LABEL_167:
          v105 = v352;
          goto LABEL_168;
        }
        if ( v277 )
        {
          sub_8058290();
          v103 = v352;
        }
      }
      else
      {
        v104 = v103 > 0;
        if ( v101 == 1 && v103 > 0 )
          goto LABEL_166;
      }
      v361 = v103;
      sub_80A6580((char **)a1, v103);
      v105 = v361;
      if ( !v104 )
      {
        v258 = (char *)&qword_811CFF4 - 258076;
        if ( (_DWORD)v379 )
          v258 = (char *)ptr;
        sub_80A6780((char **)a1, v258);
LABEL_169:
        if ( v102 )
          operator delete[](v102);
        if ( ptr )
          goto LABEL_403;
        goto LABEL_5;
      }
LABEL_168:
      sub_80A62C0(v105, (char **)a1, v102);
      goto LABEL_169;
    case 0x1A:
      v359 = sub_80CE010((unsigned int *)&src, v369) - 1;
      v206 = sub_80CDEC0((unsigned int *)&src, v369);
      v207 = (void *)operator new[](v206);
      v208 = src;
      if ( v369 >= (unsigned int)src + v206 && (char *)src + v206 >= src )
      {
        src = (char *)src + v206;
        memcpy(v207, v208, v206);
      }
      ptr = nullptr;
      v379 = 0;
      v209 = (*(int (__cdecl **)(_DWORD, int, void *, unsigned int, void **))(**(_DWORD **)(a2 + 244) + 148))(
               *(_DWORD *)(a2 + 244),
               v359,
               v207,
               v206,
               &ptr);
      if ( !*(_BYTE *)(a2 + 96) )
        goto LABEL_379;
      sub_8058290();
      v276 = *(_BYTE *)(a2 + 96);
      if ( v209 && v206 == 1 )
      {
        if ( !v276 )
          goto LABEL_379;
      }
      else if ( !v276 )
      {
LABEL_379:
        sub_80A6580((char **)a1, v209);
        if ( v209 <= 0 )
        {
          v264 = (char *)&qword_811CFF4 - 258076;
          if ( (_DWORD)v379 )
            v264 = (char *)ptr;
          sub_80A6780((char **)a1, v264);
        }
        if ( v207 )
          operator delete[](v207);
        if ( ptr )
          goto LABEL_403;
        goto LABEL_5;
      }
      sub_8058290();
      goto LABEL_379;
    case 0x1B:
      if ( !sub_80AA040(a2, (int)a1, (unsigned int *)&src) && *(_BYTE *)(a2 + 96) )
        goto LABEL_120;
      goto LABEL_5;
    case 0x1C:
      sub_80B2960(a2, (int)a1, (unsigned int *)&src);
      goto LABEL_5;
    case 0x1D:
      sub_80CDEC0((unsigned int *)&src, v369);
      sub_80CE010((unsigned int *)&src, v369);
      ptr = nullptr;
      v379 = 0;
      v142 = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(a2 + 244) + 180))(*(_DWORD *)(a2 + 244));
      sub_80A6580((char **)a1, v142);
      if ( v142 != 1 )
      {
        v143 = (char *)&qword_811CFF4 - 258076;
        if ( (_DWORD)v379 )
          v143 = (char *)ptr;
        sub_80A6780((char **)a1, v143);
      }
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      if ( ptr )
        goto LABEL_403;
      goto LABEL_5;
    case 0x1E:
      v183 = sub_80CDEC0((unsigned int *)&src, v369);
      v357 = sub_80CE010((unsigned int *)&src, v369) - 1;
      v184 = sub_80CDEC0((unsigned int *)&src, v369) - 1;
      v118 = (*(int (__cdecl **)(_DWORD, int, int, int))(**(_DWORD **)(a2 + 244) + 152))(
               *(_DWORD *)(a2 + 244),
               v183,
               v357,
               v184);
      if ( *(_BYTE *)(a2 + 96) )
LABEL_191:
        sub_8058290();
LABEL_192:
      sub_80A6580((char **)a1, v118);
      goto LABEL_5;
    case 0x1F:
      v373[0] = nullptr;
      v373[1] = nullptr;
      v374 = 0;
      dest = nullptr;
      n = 0;
      v377 = 0;
      ptr = nullptr;
      v379 = 0;
      v356 = sub_80CDEC0((unsigned int *)&src, v369);
      v342 = sub_80CDEC0((unsigned int *)&src, v369);
      v169 = sub_80CDEC0((unsigned int *)&src, v369);
      v170 = *(_DWORD *)(a2 + 244);
      v171 = *(_DWORD *)(v170 + 348);
      if ( !v171 )
        v171 = *(_DWORD *)(v170 + 396);
      if ( v169 <= 0 || v169 > v171 )
      {
        sub_805ED10(v373, (char *)&qword_811CFF4 - 262508, v356, v342, v169, v171);
        sub_80A6580((char **)a1, 0);
        goto LABEL_311;
      }
      v172 = v169 + 7;
      if ( v169 + 7 < 0 )
        v172 = v169 + 14;
      v173 = v172 >> 3;
      v174 = n;
      if ( n < v173 )
      {
        v287 = (char *)dest;
        if ( v377 < v173 )
        {
          v333 = v173;
          v287 = (char *)sub_80CF920((int)&dest, dest, v173, 1u);
          v173 = v333;
          dest = v287;
          v174 = n;
        }
        v332 = v173;
        memset(&v287[v174], 0, v173 - v174);
        v173 = v332;
      }
      else if ( v173 == n )
      {
        goto LABEL_305;
      }
      n = v173;
      v174 = v173;
LABEL_305:
      v175 = src;
      if ( v369 >= (unsigned int)src + v174 && (char *)src + v174 >= src )
      {
        src = (char *)src + v174;
        memcpy(dest, v175, v174);
      }
      sub_80A2840(&ptr, v171);
      v176 = (*(int (__cdecl **)(_DWORD, int, int, void *, void **))(**(_DWORD **)((char *)&off_811D0E8 + a2 - 135385076)
                                                                   + 112))(
               *(_UNKNOWN **)((char *)&off_811D0E8 + a2 - 135385076),
               v356,
               v342,
               ptr,
               v373);
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      sub_80A6580((char **)a1, v176);
      if ( v176 == 1 )
      {
        sub_80B98B0((char **)a1, (int)ptr, v169, (int)dest);
        goto LABEL_314;
      }
LABEL_311:
      v177 = (char *)&qword_811CFF4 - 258076;
      if ( v373[1] )
        v177 = (char *)v373[0];
      sub_80A6780((char **)a1, v177);
LABEL_314:
      v178 = (char *)ptr;
      if ( ptr )
      {
        v179 = v379;
        if ( (_DWORD)v379 )
        {
          v180 = 0;
          do
          {
            v181 = (int *)&v178[16 * v180];
            if ( *v181 >= -1 )
            {
              v182 = (void *)v181[1];
              if ( v182 )
              {
                v181[2] = 0;
                sub_80CF780(v182);
                v178 = (char *)ptr;
              }
            }
            ++v180;
          }
          while ( v179 != v180 );
        }
        LODWORD(v379) = 0;
        sub_80CF780(v178);
      }
      if ( dest )
      {
        n = 0;
        sub_80CF780(dest);
      }
      if ( v373[0] )
      {
        v373[1] = nullptr;
        sub_80CF780(v373[0]);
      }
      goto LABEL_5;
    case 0x20:
      v358 = sub_80CDEC0((unsigned int *)&src, v369);
      v185 = sub_80CDEC0((unsigned int *)&src, v369);
      v186 = (char *)src;
      v343 = v185;
      *(_DWORD *)v387 = -2;
      v389 = 0;
      v388 = -1;
      if ( (unsigned int)src >= v369 )
        goto LABEL_357;
      v187 = (char *)src + 1;
      if ( v369 < (unsigned int)src + 1 )
      {
        v392[0] = 0;
      }
      else
      {
        src = (char *)src + 1;
        v188 = *v186;
        v392[0] = v188;
        if ( v188 < 0 )
        {
          if ( (~v188 & 0xC0) != 0 )
          {
            v189 = 2;
            v190 = 1;
          }
          else if ( (~v188 & 0xE0) != 0 )
          {
            v189 = 4;
            v190 = 3;
          }
          else
          {
            v189 = 5;
            v190 = 4;
          }
          if ( !__CFADD__(v190, v187) && v369 >= (unsigned int)&v187[v190] )
          {
            src = &v187[v190];
            for ( ii = 0; ii < v190; ++ii )
              v392[ii + 1] = v187[ii];
          }
LABEL_338:
          v366 = v392;
          v192 = sub_80CDEC0((unsigned int *)&v366, (unsigned int)&v392[v189]) - 3;
          *(_DWORD *)v387 = v192;
          if ( v192 != -2 )
          {
            if ( v192 == -3 )
              goto LABEL_357;
            v388 = 0;
            v389 = 0;
            if ( v192 < -1 )
            {
              if ( !byte_811F8A1 )
              {
                if ( v396 == __readgsdword(0x14u) )
                  sub_80CFF40(3216, v297, v299, v300);
                sub_80D7AB0();
              }
              BUG();
            }
            v193 = (char *)src;
            v194 = (char *)src + 1;
            if ( v369 < (unsigned int)src + 1 )
            {
              s[0] = 0;
            }
            else
            {
              src = (char *)src + 1;
              v195 = *v193;
              s[0] = v195;
              if ( v195 < 0 )
              {
                if ( (~v195 & 0xC0) != 0 )
                {
                  v196 = 2;
                  v197 = 1;
                }
                else if ( (~v195 & 0xE0) != 0 )
                {
                  v196 = 4;
                  v197 = 3;
                }
                else
                {
                  v196 = 5;
                  v197 = 4;
                }
                if ( !__CFADD__(v197, v194) && v369 >= (unsigned int)&v194[v197] )
                {
                  src = &v194[v197];
                  for ( jj = 0; jj < v197; ++jj )
                    s[jj + 1] = v194[jj];
                }
                goto LABEL_350;
              }
            }
            v196 = 1;
LABEL_350:
            dest = s;
            v199 = sub_80CDEC0((unsigned int *)&dest, (unsigned int)&s[v196]);
            v200 = HIDWORD(v388);
            v201 = (char *)v388;
            if ( HIDWORD(v388) < v199 )
            {
              if ( v389 < v199 )
              {
                v201 = (char *)sub_80CF920((int)&v388, (void *)v388, v199, 1u);
                LODWORD(v388) = v201;
                v200 = HIDWORD(v388);
              }
              memset(&v201[v200], 0, v199 - v200);
              HIDWORD(v388) = v199;
              v201 = (char *)v388;
            }
            else
            {
              if ( v199 != HIDWORD(v388) )
                HIDWORD(v388) = v199;
              if ( !v199 )
                goto LABEL_357;
            }
            v202 = src;
            if ( v369 >= (unsigned int)src + v199 && (char *)src + v199 >= src )
            {
              src = (char *)src + v199;
              memcpy(v201, v202, v199);
            }
LABEL_357:
            ptr = nullptr;
            v379 = 0;
            v203 = (*(int (__cdecl **)(_DWORD, int, int, char *, void **))(**(_DWORD **)(a2 + 244) + 116))(
                     *(_DWORD *)(a2 + 244),
                     v358,
                     v343,
                     v387,
                     &ptr);
            if ( *(_BYTE *)(a2 + 96) )
              sub_8058290();
            sub_80A6580((char **)a1, v203);
            if ( v203 < 0 )
            {
              v265 = (char *)&qword_811CFF4 - 258076;
              if ( (_DWORD)v379 )
                v265 = (char *)ptr;
              sub_80A6780((char **)a1, v265);
            }
            if ( ptr )
            {
              LODWORD(v379) = 0;
              sub_80CF780(ptr);
            }
            if ( *(int *)v387 >= -1 && (_DWORD)v388 )
            {
              HIDWORD(v388) = 0;
              sub_80CF780((void *)v388);
            }
            goto LABEL_5;
          }
          v234 = (char *)src;
          v235 = (char *)src + 1;
          if ( v369 < (unsigned int)src + 1 )
          {
            v393[0] = 0;
          }
          else
          {
            src = (char *)src + 1;
            v236 = *v234;
            v393[0] = v236;
            if ( v236 < 0 )
            {
              if ( (~v236 & 0xC0) != 0 )
              {
                v237 = 2;
                v238 = 1;
              }
              else if ( (~v236 & 0xE0) != 0 )
              {
                v237 = 4;
                v238 = 3;
              }
              else
              {
                v237 = 5;
                v238 = 4;
              }
              if ( !__CFADD__(v238, v235) && v369 >= (unsigned int)&v235[v238] )
              {
                src = &v235[v238];
                for ( kk = 0; kk < v238; ++kk )
                  v393[kk + 1] = v235[kk];
              }
LABEL_438:
              v367 = v393;
              v240 = sub_80CDEC0((unsigned int *)&v367, (unsigned int)&v393[v237]);
              v241 = (char *)src;
              v242 = v240;
              v243 = (char *)src + 1;
              if ( v369 < (unsigned int)src + 1 )
              {
                v394[0] = 0;
              }
              else
              {
                src = (char *)src + 1;
                v244 = *v241;
                v394[0] = v244;
                if ( v244 < 0 )
                {
                  if ( (~v244 & 0xC0) != 0 )
                  {
                    v245 = 2;
                    v246 = 1;
                  }
                  else if ( (~v244 & 0xE0) != 0 )
                  {
                    v245 = 4;
                    v246 = 3;
                  }
                  else
                  {
                    v245 = 5;
                    v246 = 4;
                  }
                  if ( !__CFADD__(v246, v243) && v369 >= (unsigned int)&v243[v246] )
                  {
                    src = &v243[v246];
                    for ( mm = 0; mm < v246; ++mm )
                      v394[mm + 1] = v243[mm];
                  }
                  goto LABEL_447;
                }
              }
              v245 = 1;
LABEL_447:
              v370 = v394;
              v388 = __PAIR64__(sub_80CDEC0((unsigned int *)&v370, (unsigned int)&v394[v245]), v242) - 1;
              goto LABEL_357;
            }
          }
          v237 = 1;
          goto LABEL_438;
        }
      }
      v189 = 1;
      goto LABEL_338;
    case 0x21:
      v96 = sub_80CDEC0((unsigned int *)&src, v369);
      v97 = sub_80CDEC0((unsigned int *)&src, v369);
      ptr = nullptr;
      v379 = 0;
      v98 = (*(int (__cdecl **)(_DWORD, void **, int, int, void **))(**(_DWORD **)(a2 + 244) + 120))(
              *(_DWORD *)(a2 + 244),
              &dest,
              v96,
              v97,
              &ptr);
      if ( *(_BYTE *)(a2 + 96) )
        sub_8058290();
      sub_80A6580((char **)a1, v98);
      if ( v98 == 1 )
      {
        v273 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)dest), _mm_cvtsi32_si128(0));
        v363 = 0;
        if ( dest != (void *)-1 )
          v363 = _mm_add_epi64(v273, _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524))).m128i_u64[0];
        sub_80A6680((char **)a1, v363, HIDWORD(v363));
      }
      else
      {
        v99 = (char *)&qword_811CFF4 - 258076;
        if ( (_DWORD)v379 )
          v99 = (char *)ptr;
        sub_80A6780((char **)a1, v99);
      }
      if ( ptr )
        goto LABEL_403;
      goto LABEL_5;
    case 0x22:
      v351 = sub_80CDEC0((unsigned int *)&src, v369);
      v90 = sub_80B8D20(v351, (unsigned int *)&src);
      (*(void (__cdecl **)(_DWORD, _DWORD *, int))(**(_DWORD **)(a2 + 244) + 92))(*(_DWORD *)(a2 + 244), v90, v351);
      if ( v90 )
      {
        v91 = 8 * *(v90 - 1);
        v92 = &v90[v91];
        if ( v90 == &v90[v91] )
        {
          v95 = 0;
        }
        else
        {
          do
          {
            v93 = (void *)*(v92 - 3);
            v92 -= 8;
            if ( v93 )
            {
              v92[6] = 0;
              sub_80CF780(v93);
            }
            v94 = (void *)v92[2];
            if ( v94 )
            {
              v92[3] = 0;
              sub_80CF780(v94);
            }
          }
          while ( v90 != v92 );
          v95 = 32 * *(v90 - 1);
        }
        operator delete[](v90 - 1, v95 + 4);
      }
      if ( *(_BYTE *)(a2 + 96) )
        goto LABEL_120;
      goto LABEL_5;
    case 0x23:
      v85 = (char *)src;
      v350 = (char *)src;
      do
      {
        if ( (unsigned int)v85 >= v369 )
        {
          v350 = nullptr;
          goto LABEL_138;
        }
        ++v85;
      }
      while ( *(v85 - 1) );
      src = v85;
LABEL_138:
      v340 = sub_80CDEC0((unsigned int *)&src, v369);
      v86 = sub_80BA370(a2);
      if ( v86 == -1 )
        goto LABEL_479;
      if ( v340 )
      {
        v87 = sub_80CDAB0((int)v350);
        *(_DWORD *)(a2 + 4 * v86 + 4) = v87;
        if ( v87 )
        {
          v88 = sub_80C7DB0((int)v87);
          v327 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v88), _mm_cvtsi32_si128(v89)).m128i_u64[0];
          if ( !*(_BYTE *)(a2 + 96) )
          {
            sub_80A6580((char **)a1, v86);
LABEL_143:
            sub_80A6680((char **)a1, v327, HIDWORD(v327));
            goto LABEL_5;
          }
          goto LABEL_481;
        }
      }
      else
      {
        if ( (unsigned __int8)sub_80CE6B0(v393, 0x1000u, v350) )
        {
          if ( !(unsigned __int8)sub_80CEDA0((int)v393) )
          {
            sub_80CE860(v394, 4096, v393);
            sub_80CE7F0(s, 0x1000u);
            v288 = strlen(s);
            if ( !strncmp(v394, s, v288) )
            {
              dest = nullptr;
              n = 0;
              v377 = 0;
              do
              {
                if ( (unsigned __int8)sub_80CEDA0((int)v394) )
                  break;
                ptr = nullptr;
                v379 = 0;
                v315 = strlen(v394);
                ptr = sub_80CF920((int)&ptr, nullptr, v315 + 1, 1u);
                LODWORD(v379) = v315 + 1;
                memmove(ptr, v394, v315);
                *((_BYTE *)ptr + v315) = 0;
                v289 = (char *)ptr;
                v290 = v379;
                v291 = (char *)dest;
                ptr = nullptr;
                pathc = v289;
                v292 = n;
                v379 = 0;
                if ( v377 < n + 1 )
                {
                  v291 = (char *)sub_80CF920((int)&dest, dest, n + 1, 0xCu);
                  dest = v291;
                  v292 = n;
                }
                v319 = v291;
                memmove(v291 + 12, v291, 12 * v292);
                *(_DWORD *)v319 = pathc;
                *(_QWORD *)(v319 + 4) = v290;
                ++n;
                if ( ptr )
                {
                  LODWORD(v379) = 0;
                  sub_80CF780(ptr);
                }
              }
              while ( (unsigned __int8)sub_80CE6B0(v394, 0x1000u, v394) );
              v294 = 0;
              v316 = n;
              if ( n )
              {
                do
                {
                  v295 = (char *)&qword_811CFF4 - 258076;
                  v296 = (char *)dest + 12 * v294;
                  if ( *((_DWORD *)v296 + 1) )
                    v295 = *(char **)v296;
                  if ( *(_BYTE *)(a2 + 96) )
                  {
                    v334 = v294;
                    sub_8058290();
                    v294 = v334;
                  }
                  v335 = v294;
                  if ( sub_80CEBA0(v295, 0x1FFu) )
                    break;
                  v294 = v335 + 1;
                }
                while ( v335 + 1 != v316 );
              }
              sub_805D810((char **)&dest);
            }
          }
        }
        v275 = sub_80CDB50((int)v350);
        *(_DWORD *)(a2 + 4 * v86 + 4) = v275;
        if ( v275 )
        {
          if ( !*(_BYTE *)(a2 + 96) )
          {
            sub_80A6580((char **)a1, v86);
            v327 = 0;
            goto LABEL_143;
          }
          v327 = 0;
          goto LABEL_481;
        }
      }
LABEL_479:
      if ( !*(_BYTE *)(a2 + 96) )
      {
        sub_80A6580((char **)a1, 0xFFFFFFFF);
        goto LABEL_482;
      }
      v86 = -1;
      v327 = 0;
LABEL_481:
      sub_8058290();
      sub_80A6580((char **)a1, v86);
      if ( v86 != -1 )
        goto LABEL_143;
LABEL_482:
      v255 = __errno_location();
      sub_80A6580((char **)a1, *v255);
      goto LABEL_5;
    case 0x24:
      v73 = sub_80CDEC0((unsigned int *)&src, v369);
      if ( v73 <= 0xF )
      {
        v74 = *(FILE **)(a2 + 4 * v73 + 4);
        if ( v74 )
        {
          v75 = fileno(*(FILE **)(a2 + 4 * v73 + 4));
          fchmod(v75, 0x1EDu);
          sub_80CF060(v74);
          *(_DWORD *)(a2 + 4 * v73 + 4) = 0;
        }
      }
      if ( *(_BYTE *)(a2 + 96) )
        goto LABEL_120;
      goto LABEL_5;
    case 0x25:
      v349 = sub_80CDEC0((unsigned int *)&src, v369);
      v68 = sub_80CE010((unsigned int *)&src, v369);
      v326 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(v69)).m128i_u64[0];
      v70 = sub_80CDEC0((unsigned int *)&src, v369);
      v71 = v70;
      if ( v70 <= 0 )
      {
        sub_80A6580((char **)a1, 0);
        if ( v71 )
        {
          v263 = __errno_location();
          sub_80A6580((char **)a1, *v263);
        }
      }
      else
      {
        v338 = (void *)operator new[](v70);
        sub_80CEFD0(*(_DWORD *)(a2 + 4 * v349 + 4), v326, 0);
        v72 = sub_80CEE00(*(FILE **)(a2 + 4 * v349 + 4), v338, v71);
        sub_80A6580((char **)a1, v72);
        if ( v71 == v72 )
        {
          sub_80A62C0(v71, (char **)a1, v338);
        }
        else
        {
          v298 = *__errno_location();
          sub_80A6580((char **)a1, v298);
        }
        if ( v338 )
          operator delete[](v338);
      }
      if ( *(_BYTE *)(a2 + 96) )
        goto LABEL_120;
      goto LABEL_5;
    case 0x26:
      v80 = sub_80CDEC0((unsigned int *)&src, v369);
      v81 = sub_80CE010((unsigned int *)&src, v369);
      v339 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v81), _mm_cvtsi32_si128(v82)).m128i_u64[0];
      v83 = sub_80CDEC0((unsigned int *)&src, v369);
      v84 = v83;
      if ( v83 )
      {
        v360 = (void *)operator new[](v83);
        v256 = src;
        if ( v369 >= (unsigned int)src + v84 && (char *)src + v84 >= src )
        {
          src = (char *)src + v84;
          memcpy(v360, v256, v84);
        }
        sub_80CEFD0(*(_DWORD *)(a2 + 4 * v80 + 4), v339, 0);
        if ( v360 )
        {
          v331 = sub_80CEEB0(*(FILE **)(a2 + 4 * v80 + 4), v360, v84);
          sub_80A6580((char **)a1, v84);
          if ( v331 != v84 )
          {
            v257 = __errno_location();
            sub_80A6580((char **)a1, *v257);
          }
          operator delete[](v360);
        }
        else
        {
          sub_80A6580((char **)a1, v84);
          v293 = __errno_location();
          sub_80A6580((char **)a1, *v293);
        }
      }
      else
      {
        sub_80CEFD0(*(_DWORD *)(a2 + 4 * v80 + 4), v339, 0);
        sub_80A6580((char **)a1, 0);
      }
      if ( *(_BYTE *)(a2 + 96) )
LABEL_120:
        sub_8058290();
      goto LABEL_5;
    case 0x27:
      v76 = sub_80BC940(a2 + 100, (char **)a1, src, v369);
      if ( !v76 )
        goto LABEL_5;
      sub_80BD060((int *)&ptr, v76);
      v77 = v379;
      v379 = 0;
      v78 = ptr;
      ptr = nullptr;
      v79 = (void *)*a1;
      if ( !*a1 )
      {
        *a1 = (int)v78;
        *(_QWORD *)(a1 + 1) = v77;
        goto LABEL_5;
      }
      a1[1] = 0;
      sub_80CF780(v79);
      v7 = ptr;
      *a1 = (int)v78;
      *(_QWORD *)(a1 + 1) = v77;
      if ( !v7 )
        goto LABEL_5;
      goto LABEL_4;
    case 0x28:
      ptr = nullptr;
      v379 = 0;
      v65 = sub_80CDEC0((unsigned int *)&src, v369);
      v66 = *(_DWORD *)(a2 + 244);
      v67 = *(int (__cdecl **)(int, int, void **))(*(_DWORD *)v66 + 208);
      if ( (char *)v67 == (char *)((char *)&qword_811CFF4 - 826532) )
      {
        sub_80A6580((char **)a1, 0);
      }
      else
      {
        v286 = v67(v66, v65, &ptr);
        sub_80A6580((char **)a1, v286);
        if ( v286 == 1 )
          sub_80B8F60((char **)a1, &ptr);
      }
      if ( ptr )
        goto LABEL_403;
      goto LABEL_5;
    case 0x29:
      v325 = sub_80CE010((unsigned int *)&src, v369) - 1;
      v311 = sub_80CDEC0((unsigned int *)&src, v369);
      v317 = sub_80CDEC0((unsigned int *)&src, v369);
      v51 = sub_80CDEC0((unsigned int *)&src, v369);
      v370 = nullptr;
      v371 = 0;
      v372 = 0;
      v373[0] = nullptr;
      v373[1] = nullptr;
      v374 = 0;
      ptr = nullptr;
      v379 = 0;
      v380 = nullptr;
      v381 = nullptr;
      v382 = 0;
      v383 = nullptr;
      if ( (v51 & 1) != 0 )
        v52 = nullptr;
      else
        v52 = v373;
      sub_80B94F0(&v370, (char **)&ptr, v52, (unsigned int *)&src);
      *(_DWORD *)v387 = -1;
      v53 = *(_DWORD *)(a2 + 244);
      v388 = 0xFFFFFFFF00000000LL;
      memset(v391, 0, sizeof(v391));
      dest = nullptr;
      n = 0;
      v377 = 0;
      LOBYTE(v389) = 0;
      v390 = 0;
      v54 = (unsigned int)(*(int (__cdecl **)(int, int, int, int, void **, void **, void **, void **, char *, int))(*(_DWORD *)v53 + 212))(
                            v53,
                            v325,
                            v311,
                            v317,
                            &v370,
                            &ptr,
                            v373,
                            &dest,
                            v387,
                            v51);
      if ( (_DWORD)v54 == -1 )
      {
        sub_80A6680((char **)a1, 0, 0);
        if ( (v51 & 2) != 0 )
          sub_80B8A50((char **)a1, v387);
        v272 = (char *)&qword_811CFF4 - 258076;
        if ( n )
          v272 = (char *)dest;
        sub_80A6780((char **)a1, v272);
      }
      else
      {
        sub_80A6680((char **)a1, v54 + 1, (unsigned __int64)(v54 + 1) >> 32);
        if ( (v51 & 1) == 0 )
          sub_80B9680((int)a1, v373, 1);
      }
      sub_80C6090(v387);
      if ( dest )
      {
        n = 0;
        sub_80CF780(dest);
      }
      if ( v381 )
      {
        v382 = 0;
        sub_80CF780(v381);
      }
      if ( ptr )
      {
        LODWORD(v379) = 0;
        sub_80CF780(ptr);
      }
      v55 = (char *)v373[0];
      if ( v373[0] )
      {
        v56 = v373[1];
        if ( v373[1] )
        {
          v57 = nullptr;
          do
          {
            v58 = &v55[20 * (_DWORD)v57];
            v59 = *((void **)v58 + 2);
            if ( v59 )
            {
              *((_DWORD *)v58 + 3) = 0;
              sub_80CF780(v59);
              v55 = (char *)v373[0];
            }
            v57 = (char *)v57 + 1;
          }
          while ( v56 != v57 );
        }
        v373[1] = nullptr;
        sub_80CF780(v55);
      }
      v60 = (char *)v370;
      if ( v370 )
      {
        v61 = v371;
        if ( v371 )
        {
          v62 = 0;
          do
          {
            v63 = &v60[20 * v62];
            v64 = *((void **)v63 + 2);
            if ( v64 )
            {
              *((_DWORD *)v63 + 3) = 0;
              sub_80CF780(v64);
              v60 = (char *)v370;
            }
            ++v62;
          }
          while ( v61 != v62 );
        }
        v371 = 0;
        sub_80CF780(v60);
      }
      goto LABEL_5;
    case 0x2A:
      sub_80CDEC0((unsigned int *)&src, v369);
      v36 = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(a2 + 244) + 216))(*(_DWORD *)(a2 + 244));
      goto LABEL_84;
    case 0x2B:
      v35 = (char *)src;
      do
      {
        if ( (unsigned int)v35 >= v369 )
          goto LABEL_64;
        ++v35;
      }
      while ( *(v35 - 1) );
      src = v35;
LABEL_64:
      v36 = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(a2 + 244) + 268))(*(_DWORD *)(a2 + 244));
LABEL_84:
      sub_80A6580((char **)a1, v36);
      goto LABEL_5;
    case 0x2C:
      v37 = sub_80CE010((unsigned int *)&src, v369);
      ptr = nullptr;
      v379 = 0;
      v38 = v37 - 1;
      v39 = *(_DWORD *)(a2 + 244);
      v40 = *(int (__cdecl **)(int, void **, int))(*(_DWORD *)v39 + 132);
      if ( (char *)v40 == (char *)((char *)&qword_811CFF4 - 826692) )
      {
        if ( !*(_BYTE *)(a2 + 96) )
        {
          sub_80A6580((char **)a1, 1u);
          goto LABEL_68;
        }
        v362 = 0;
        v266 = 0;
        v267 = -1;
      }
      else
      {
        v267 = v40(v39, &ptr, v38);
        v266 = v379;
        v362 = v379;
        if ( !*(_BYTE *)(a2 + 96) )
        {
LABEL_531:
          sub_80A6580((char **)a1, v267 + 2);
          if ( v267 > 0 )
          {
            sub_80A6580((char **)a1, v362);
            if ( v266 > 0 )
            {
              for ( nn = 0; nn != v266; ++nn )
                sub_80B8090((char **)a1, (char *)ptr + 20 * nn);
            }
          }
LABEL_68:
          v41 = (char *)ptr;
          if ( ptr )
          {
            v42 = v379;
            if ( (_DWORD)v379 )
            {
              v43 = 0;
              do
              {
                v44 = &v41[20 * v43];
                v45 = *((void **)v44 + 2);
                if ( v45 )
                {
                  *((_DWORD *)v44 + 3) = 0;
                  sub_80CF780(v45);
                  v41 = (char *)ptr;
                }
                ++v43;
              }
              while ( v42 != v43 );
            }
            LODWORD(v379) = 0;
            sub_80CF780(v41);
          }
          goto LABEL_5;
        }
      }
      sub_8058290();
      goto LABEL_531;
    case 0x2D:
      v9 = sub_80CE010((unsigned int *)&src, v369);
      ptr = nullptr;
      v10 = v9 - 1;
      v379 = 0;
      v11 = *(_DWORD *)(a2 + 244);
      v12 = *(int (__cdecl **)(int, void **, int))(*(_DWORD *)v11 + 136);
      if ( (char *)v12 == (char *)((char *)&qword_811CFF4 - 826676) )
      {
        if ( !*(_BYTE *)(a2 + 96) )
        {
          sub_80A6580((char **)a1, 0);
          goto LABEL_16;
        }
        v269 = 0;
        v270 = 0;
      }
      else
      {
        v270 = v12(v11, &ptr, v10);
        v269 = v379;
        if ( !*(_BYTE *)(a2 + 96) )
        {
LABEL_538:
          sub_80A6580((char **)a1, v270);
          if ( v270 )
          {
            v271 = ptr;
            sub_80A6580((char **)a1, v269);
            if ( v269 )
              sub_80A62C0(v269, (char **)a1, v271);
          }
LABEL_16:
          if ( ptr )
            goto LABEL_403;
          goto LABEL_5;
        }
      }
      sub_8058290();
      goto LABEL_538;
    case 0x2E:
      v46 = sub_80CE010((unsigned int *)&src, v369);
      v47 = (const char *)src;
      v337 = v46 - 1;
      v48 = src;
      while ( (unsigned int)v48 < v369 )
      {
        if ( !*v48++ )
        {
          src = v48;
          v49 = *(_DWORD *)(a2 + 244);
          v253 = *(__int64 **)(*(_DWORD *)v49 + 140);
          ptr = nullptr;
          v379 = 0;
          v347 = v253;
          if ( v47 )
          {
            v314 = v49;
            v254 = strlen(v47);
            ptr = sub_80CF920((int)&ptr, nullptr, v254 + 1, 1u);
            LODWORD(v379) = v254 + 1;
            memmove(ptr, v47, v254);
            v49 = v314;
            *((_BYTE *)ptr + v254) = 0;
            if ( v347 == (__int64 *)((char *)&qword_811CFF4 - 826660) )
            {
              if ( ptr )
              {
                LODWORD(v379) = 0;
                sub_80CF780(ptr);
                if ( *(_BYTE *)(a2 + 96) )
LABEL_478:
                  sub_8058290();
LABEL_81:
                v348 = 0;
LABEL_82:
                sub_80A6680((char **)a1, v348, HIDWORD(v348));
                goto LABEL_5;
              }
LABEL_80:
              if ( *(_BYTE *)(a2 + 96) )
                goto LABEL_478;
              goto LABEL_81;
            }
LABEL_587:
            v284 = ((int (__cdecl *)(int, int, void **))v347)(v49, v337, &ptr);
            if ( ptr )
            {
              LODWORD(v379) = 0;
              sub_80CF780(ptr);
            }
            if ( *(_BYTE *)(a2 + 96) )
              sub_8058290();
            v285 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v284), _mm_cvtsi32_si128(0));
            if ( v284 == -1 )
              goto LABEL_81;
            v348 = _mm_add_epi64(v285, _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524))).m128i_u64[0];
            goto LABEL_82;
          }
LABEL_79:
          if ( v347 == (__int64 *)((char *)&qword_811CFF4 - 826660) )
            goto LABEL_80;
          goto LABEL_587;
        }
      }
      v49 = *(_DWORD *)(a2 + 244);
      v50 = *(__int64 **)(*(_DWORD *)v49 + 140);
      ptr = nullptr;
      v379 = 0;
      v347 = v50;
      goto LABEL_79;
    case 0x2F:
      v309 = sub_80CE010((unsigned int *)&src, v369) - 1;
      v307 = sub_80CE010((unsigned int *)&src, v369) - 1;
      v310 = sub_80CDEC0((unsigned int *)&src, v369);
      dest = nullptr;
      n = 0;
      v377 = 0;
      if ( v310 )
      {
        ptr = nullptr;
        v379 = 0;
        v380 = nullptr;
        v381 = nullptr;
        v382 = 0;
        v383 = nullptr;
        v384 = 0;
        v385 = 0;
        v386 = -1;
        sub_80B2E40((int)&dest, v310, (int)&ptr);
        if ( v383 )
        {
          v384 = 0;
          sub_80CF780(v383);
        }
        if ( v380 )
        {
          v381 = nullptr;
          sub_80CF780(v380);
        }
        if ( ptr )
        {
          LODWORD(v379) = 0;
          sub_80CF780(ptr);
        }
        if ( v310 > 0 )
        {
          for ( path = nullptr; path != (char *)v310; ++path )
          {
            v13 = (char **)((char *)dest + 40 * (_DWORD)path);
            v14 = sub_80CDEC0((unsigned int *)&src, v369);
            v15 = v14;
            if ( v14 )
            {
              v231 = (unsigned int)v13[1];
              if ( v231 < v14 )
              {
                v248 = *v13;
                if ( (unsigned int)v13[2] < v15 )
                {
                  v248 = (char *)sub_80CF920((int)v13, v248, v15, 1u);
                  v231 = (unsigned int)v13[1];
                  *v13 = v248;
                }
                memset(&v248[v231], 0, v15 - v231);
                v13[1] = (char *)v15;
              }
              else if ( v14 != v231 )
              {
                v13[1] = (char *)v14;
              }
              v232 = src;
              v16 = v369;
              if ( !__CFADD__(v15, src) && v369 >= (unsigned int)src + v15 )
              {
                v233 = *v13;
                src = (char *)src + v15;
                memcpy(v233, v232, v15);
                v16 = v369;
              }
            }
            else
            {
              v16 = v369;
            }
            v17 = sub_80CDEC0((unsigned int *)&src, v16);
            v18 = v17;
            if ( v17 )
            {
              v228 = (unsigned int)v13[4];
              if ( v228 < v17 )
              {
                v249 = v13[3];
                if ( (unsigned int)v13[5] < v18 )
                {
                  v249 = (char *)sub_80CF920((int)(v13 + 3), v249, v18, 1u);
                  v228 = (unsigned int)v13[4];
                  v13[3] = v249;
                }
                memset(&v249[v228], 0, v18 - v228);
                v13[4] = (char *)v18;
              }
              else if ( v17 != v228 )
              {
                v13[4] = (char *)v17;
              }
              v229 = src;
              v19 = v369;
              if ( !__CFADD__(v18, src) && v369 >= (unsigned int)src + v18 )
              {
                v230 = v13[3];
                src = (char *)src + v18;
                memcpy(v230, v229, v18);
                v19 = v369;
              }
            }
            else
            {
              v19 = v369;
            }
            v20 = sub_80CDEC0((unsigned int *)&src, v19);
            v21 = (unsigned int)v13[7];
            if ( v20 != v21 )
            {
              v373[0] = nullptr;
              v373[1] = nullptr;
              if ( v20 >= v21 )
              {
                v22 = (void **)v13[6];
                v23 = (unsigned int)v13[8];
                if ( v373 < v22 || v373 >= &v22[2 * v23] )
                {
                  if ( v23 < v20 )
                  {
                    v13[6] = (char *)sub_80CF920((int)(v13 + 6), v22, v20, 8u);
                    v21 = (unsigned int)v13[7];
                  }
                  if ( v21 < v20 )
                  {
                    do
                      *(_QWORD *)&v13[6][8 * v21++] = *(_QWORD *)v373;
                    while ( v20 != v21 );
                  }
                }
                else
                {
                  if ( v23 < v20 )
                  {
                    v13[6] = (char *)sub_80CF920((int)(v13 + 6), v22, v20, 8u);
                    v21 = (unsigned int)v13[7];
                  }
                  if ( v21 < v20 )
                  {
                    do
                    {
                      v24 = v13[6];
                      *(_DWORD *)&v24[8 * v21] = 0;
                      *(_DWORD *)&v24[8 * v21++ + 4] = 0;
                    }
                    while ( v20 != v21 );
                  }
                }
              }
              v13[7] = (char *)v20;
            }
            v25 = 0;
            if ( (int)v20 > 0 )
            {
              do
              {
                v336 = 8 * v25;
                *(_DWORD *)&v13[6][8 * v25++] = sub_80CE010((unsigned int *)&src, v369) - 1;
                *(_DWORD *)&v13[6][v336 + 4] = sub_80CE010((unsigned int *)&src, v369) - 1;
              }
              while ( v20 != v25 );
            }
            v13[9] = (char *)sub_80CDEC0((unsigned int *)&src, v369);
          }
        }
      }
      v26 = sub_80CDEC0((unsigned int *)&src, v369);
      ptr = nullptr;
      v379 = 0;
      v27 = (*(int (__cdecl **)(_DWORD, void **, int, int, void **, int))(**(_DWORD **)(a2 + 244) + 288))(
              *(_DWORD *)(a2 + 244),
              &v370,
              v309,
              v307,
              &dest,
              v26);
      sub_80A6580((char **)a1, v27);
      if ( v27 == 1 )
      {
        v274 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v370), _mm_cvtsi32_si128(0));
        v364 = 0;
        if ( v370 != (void *)-1 )
          v364 = _mm_add_epi64(v274, _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524))).m128i_u64[0];
        sub_80A6680((char **)a1, v364, HIDWORD(v364));
      }
      else if ( v27 != -1 )
      {
        v28 = (char *)&qword_811CFF4 - 258076;
        if ( (_DWORD)v379 )
          v28 = (char *)ptr;
        sub_80A6780((char **)a1, v28);
      }
      if ( ptr )
      {
        LODWORD(v379) = 0;
        sub_80CF780(ptr);
      }
      v29 = (char *)dest;
      if ( dest )
      {
        if ( n )
        {
          v346 = n;
          for ( i1 = 0; i1 != v346; ++i1 )
          {
            v31 = &v29[40 * i1];
            v32 = *((void **)v31 + 6);
            if ( v32 )
            {
              *((_DWORD *)v31 + 7) = 0;
              sub_80CF780(v32);
            }
            v33 = *((void **)v31 + 3);
            if ( v33 )
            {
              *((_DWORD *)v31 + 4) = 0;
              sub_80CF780(v33);
            }
            v34 = *(void **)v31;
            if ( *(_DWORD *)v31 )
            {
              *((_DWORD *)v31 + 1) = 0;
              sub_80CF780(v34);
            }
            v29 = (char *)dest;
          }
        }
        n = 0;
        sub_80CF780(v29);
      }
      goto LABEL_5;
    case 0x30:
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 244) + 348) )
      {
        sub_80A6580((char **)a1, 1u);
        sub_80B9AA0((char **)a1, (int *)(*(_DWORD *)(a2 + 244) + 344));
      }
      else
      {
        sub_80A6580((char **)a1, 0);
      }
      goto LABEL_5;
    default:
      sub_80BD060((int *)&ptr, 1);
      v4 = v379;
      v379 = 0;
      v5 = ptr;
      ptr = nullptr;
      v6 = (void *)*a1;
      if ( *a1 )
      {
        a1[1] = 0;
        sub_80CF780(v6);
        v7 = ptr;
        *a1 = (int)v5;
        *(_QWORD *)(a1 + 1) = v4;
        if ( v7 )
        {
LABEL_4:
          LODWORD(v379) = 0;
          sub_80CF780(v7);
        }
      }
      else
      {
        *a1 = (int)v5;
        *(_QWORD *)(a1 + 1) = v4;
      }
      goto LABEL_5;
  }
}
// 8050E81: control flows out of bounds to 8050E87
// 80B7865: control flows out of bounds to 8050D0E
// 80B786E: control flows out of bounds to 8050D4A
// 80B7877: control flows out of bounds to 8050E8D
// 80B791B: control flows out of bounds to 8050DAF
// 8050E81: control flows out of bounds to 80514D5
// 80B5823: conditional instruction was optimized away because edx.4 is in (==1|3..4)
// 80B5914: conditional instruction was optimized away because edx.4 is in (==1|3..4)
// 80B622B: conditional instruction was optimized away because edx.4 is in (==1|3..4)
// 80B62D4: conditional instruction was optimized away because edx.4 is in (==1|3..4)
// 80B534F: conditional instruction was optimized away because %var_3074.4==0
// 80B3EC3: variable 'v69' is possibly undefined
// 80B417F: variable 'v82' is possibly undefined
// 80B42D7: variable 'v89' is possibly undefined
// 80B5D80: variable 'v211' is possibly undefined
// 80B7845: variable 'v297' is possibly undefined
// 80B7845: variable 'v299' is possibly undefined
// 80B7845: variable 'v300' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D090: using guessed type _UNKNOWN *off_811D090;
// 811D0E8: using guessed type _UNKNOWN *off_811D0E8;
// 811D19C: using guessed type _UNKNOWN *off_811D19C;
// 811D1A0: using guessed type _UNKNOWN *off_811D1A0;
// 811D1A4: using guessed type _UNKNOWN *off_811D1A4;
// 811D1A8: using guessed type _UNKNOWN *off_811D1A8;
// 811D1AC: using guessed type _UNKNOWN *off_811D1AC;
// 811D1B0: using guessed type _UNKNOWN *off_811D1B0;
// 811F8A1: using guessed type char byte_811F8A1;
