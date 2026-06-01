/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E4BC
// Address: 0x0005E4BC

//----- (0005E4BC) --------------------------------------------------------
int *__fastcall sub_5E4BC(int *a1, int a2, int *a3)
{
  int v6; // r12
  signed int v7; // r0
  int v8; // r2
  int v9; // r7
  signed int v10; // r9
  _BOOL4 v11; // r3
  int v12; // r1
  unsigned int v13; // r1
  size_t v14; // r2
  int v15; // r0
  unsigned int v16; // r4
  char *v17; // r1
  int v19; // r1
  _BYTE *v20; // r3
  unsigned int v22; // r0
  char *v23; // r9
  _BYTE *v24; // r3
  unsigned int v26; // r4
  FILE *v27; // r0
  __int64 v28; // r6
  int v29; // r2
  int v30; // r1
  __int64 v31; // r2
  const char *v32; // r3
  const char *v34; // r3
  unsigned __int8 *v36; // r3
  unsigned __int8 *v38; // r3
  unsigned int v40; // r0
  int v41; // r2
  int v42; // r12
  unsigned int v43; // r2
  char *v44; // r1
  char *v45; // r8
  unsigned __int8 *v46; // r9
  unsigned __int8 *v47; // r7
  unsigned int v49; // r10
  int v50; // r1
  __int64 v51; // r6
  size_t v52; // r0
  size_t v53; // r8
  void *v54; // r9
  int v55; // r4
  int *v56; // r0
  unsigned int v57; // r9
  int v58; // r1
  __int64 v59; // r6
  signed int v60; // r0
  size_t v61; // r4
  unsigned int v62; // r10
  void *v63; // r8
  size_t v64; // r10
  void *v65; // r0
  unsigned int v66; // r0
  int v67; // r9
  char *v68; // r9
  unsigned int v69; // r0
  size_t v70; // r6
  unsigned int v71; // r3
  unsigned int v72; // r0
  size_t v73; // r6
  unsigned int v74; // r3
  unsigned int v75; // r0
  unsigned int v76; // r3
  char *v77; // r2
  int v78; // r0
  unsigned int v79; // r1
  int v80; // r6
  char **v81; // r7
  int v82; // r1
  char *v83; // r2
  int ii; // r6
  int v85; // r7
  unsigned int v86; // r0
  int v87; // r4
  unsigned int v88; // r4
  char *v89; // r1
  char *v90; // r4
  _BYTE *v91; // r3
  int v93; // r9
  int (*v94)(); // r7
  int v95; // r7
  unsigned int v96; // r0
  int v97; // r2
  unsigned int v98; // r7
  int (*v99)(); // r4
  unsigned int v100; // r8
  unsigned int v101; // r4
  char *v102; // r7
  unsigned int v103; // r0
  int v104; // r2
  int v105; // r4
  int (*v106)(); // r3
  int v107; // r7
  unsigned int v108; // r8
  int v109; // r7
  int n; // r8
  unsigned int v111; // r7
  char *v112; // r6
  int v113; // r1
  char *v114; // r4
  void *v115; // r0
  void *v116; // r0
  unsigned int v117; // r4
  size_t v118; // r7
  unsigned __int8 *v119; // r9
  int v120; // r1
  int v121; // r0
  signed int v122; // r4
  char *v123; // r0
  unsigned int v124; // r7
  size_t v125; // r4
  unsigned __int8 *v126; // r0
  int v127; // r1
  int v128; // r0
  signed int v129; // r9
  _BOOL4 v130; // r7
  _BOOL4 v131; // r4
  unsigned int v132; // r0
  unsigned int v133; // r4
  unsigned int v134; // r7
  FILE *v135; // r6
  int v136; // r0
  int v137; // r2
  int v138; // r0
  signed int v139; // r4
  char *v140; // r0
  unsigned int v141; // r0
  unsigned int v142; // r6
  unsigned int v143; // r7
  unsigned int v144; // r8
  int v145; // r0
  unsigned int v146; // r4
  unsigned int v147; // r7
  unsigned int v148; // r0
  int v149; // r2
  unsigned int v150; // r9
  unsigned int v151; // r4
  char *v152; // r1
  signed int v153; // r0
  unsigned int v154; // r7
  unsigned int v155; // r0
  int v156; // r4
  unsigned int v157; // r9
  unsigned int v158; // r4
  char *v159; // r1
  int v160; // r4
  unsigned int v161; // r4
  char *v162; // r1
  void *v163; // r0
  int v164; // r7
  int v165; // r6
  int i; // r3
  int v167; // r3
  void *v168; // r0
  int v169; // r6
  __int64 v170; // r0
  bool v171; // zf
  unsigned int v172; // r0
  int v173; // r9
  char *v174; // r1
  _BYTE *v175; // r3
  char *v177; // r1
  unsigned __int8 *v178; // r3
  int v180; // r3
  int v181; // r0
  unsigned int v182; // r7
  int v183; // r1
  char *v184; // r1
  int v185; // r2
  int v186; // r0
  signed int v187; // r4
  unsigned int v188; // r0
  signed int v189; // r6
  const char *v190; // r0
  unsigned int v191; // r6
  int v192; // r0
  unsigned int v193; // r6
  int v194; // r0
  unsigned int v195; // r0
  int (*v196)(); // r3
  int v197; // r0
  void *v198; // r0
  char *v199; // r9
  int v200; // r8
  int v201; // r6
  unsigned int v202; // r0
  char **v203; // r2
  int v204; // lr
  __int64 v205; // r0
  int v206; // r4
  __int64 v207; // r2
  int v208; // r4
  int v209; // r0
  int v210; // r4
  signed int v211; // r7
  char *v212; // r1
  unsigned int v213; // r6
  unsigned int v214; // r7
  int v215; // r0
  signed int v216; // r0
  int v217; // r0
  int v218; // r0
  int v219; // r3
  int v220; // r2
  int v221; // lr
  int v222; // r7
  int v223; // r12
  char **v224; // r3
  void (__fastcall *v225)(int, __int64 *, int, char **); // r4
  int v226; // r0
  unsigned int v227; // r9
  const char *v228; // r1
  void *v229; // r0
  char *v230; // r8
  int v231; // r7
  int v232; // r6
  char *v233; // r0
  char *v234; // r1
  int v235; // r3
  size_t v236; // r7
  void *v237; // r1
  int v238; // r3
  signed int v239; // r4
  unsigned int v240; // r4
  int *v241; // r0
  int v242; // r0
  const char *v243; // r3
  const char *v244; // r12
  const char *v245; // r7
  const char *v246; // r2
  char *v247; // r1
  char *v248; // r1
  char *v249; // r1
  unsigned int v250; // r6
  unsigned int v251; // r0
  int v252; // r1
  int v253; // r0
  signed int v254; // r4
  int *v255; // r0
  __int64 v256; // r2
  __int64 v257; // r2
  char *v258; // r1
  int v259; // r1
  _BOOL4 v260; // r4
  _BOOL4 v261; // r3
  FILE *v262; // r0
  unsigned int v263; // r10
  int k; // r7
  char *v265; // r1
  unsigned int *v266; // r4
  unsigned int v267; // r0
  size_t v268; // r6
  char *v269; // r0
  int v270; // r0
  int v271; // r0
  unsigned int v272; // r4
  int v273; // r4
  int m; // r8
  int v275; // r1
  char *v276; // r2
  char *v277; // r1
  const char *v278; // r2
  char *v279; // r0
  size_t v280; // r0
  int v281; // r6
  int v282; // r3
  char *v283; // r0
  char *v284; // r6
  int v285; // r7
  int v286; // r10
  const char *v287; // r6
  double v288; // [sp+0h] [bp-30E4h]
  double v289; // [sp+8h] [bp-30DCh]
  char **v290; // [sp+18h] [bp-30CCh]
  void *v291; // [sp+18h] [bp-30CCh]
  void *v292; // [sp+18h] [bp-30CCh]
  int j; // [sp+18h] [bp-30CCh]
  void *v294; // [sp+18h] [bp-30CCh]
  unsigned __int8 *v295; // [sp+18h] [bp-30CCh]
  int v296; // [sp+20h] [bp-30C4h]
  unsigned int v297; // [sp+24h] [bp-30C0h]
  unsigned int v298; // [sp+24h] [bp-30C0h]
  unsigned int v299; // [sp+24h] [bp-30C0h]
  unsigned int v300; // [sp+24h] [bp-30C0h]
  int v301; // [sp+24h] [bp-30C0h]
  unsigned int v302; // [sp+28h] [bp-30BCh]
  int v303; // [sp+28h] [bp-30BCh]
  size_t v304; // [sp+28h] [bp-30BCh]
  char *v305; // [sp+28h] [bp-30BCh]
  int v306; // [sp+28h] [bp-30BCh]
  unsigned int v307; // [sp+2Ch] [bp-30B8h]
  unsigned int v308; // [sp+2Ch] [bp-30B8h]
  int v309; // [sp+2Ch] [bp-30B8h]
  const char *ptr; // [sp+30h] [bp-30B4h]
  char *ptra; // [sp+30h] [bp-30B4h]
  void *ptrb; // [sp+30h] [bp-30B4h]
  char *ptrc; // [sp+30h] [bp-30B4h]
  char *s; // [sp+34h] [bp-30B0h]
  char *sa; // [sp+34h] [bp-30B0h]
  char *sb; // [sp+34h] [bp-30B0h]
  signed int v317; // [sp+38h] [bp-30ACh]
  unsigned int v318; // [sp+38h] [bp-30ACh]
  unsigned int v319; // [sp+38h] [bp-30ACh]
  const char *v320; // [sp+3Ch] [bp-30A8h]
  unsigned int v321; // [sp+3Ch] [bp-30A8h]
  char **v322; // [sp+3Ch] [bp-30A8h]
  unsigned int v323; // [sp+3Ch] [bp-30A8h]
  const char *v324; // [sp+40h] [bp-30A4h]
  unsigned int v325; // [sp+40h] [bp-30A4h]
  const char *v326; // [sp+44h] [bp-30A0h]
  unsigned int v327; // [sp+48h] [bp-309Ch]
  unsigned int v328; // [sp+4Ch] [bp-3098h]
  __int64 v329; // [sp+50h] [bp-3094h] BYREF
  int v330; // [sp+58h] [bp-308Ch] BYREF
  int v331; // [sp+5Ch] [bp-3088h]
  char *v332; // [sp+60h] [bp-3084h] BYREF
  int v333; // [sp+64h] [bp-3080h]
  int v334; // [sp+68h] [bp-307Ch]
  char *v335; // [sp+6Ch] [bp-3078h] BYREF
  int v336; // [sp+70h] [bp-3074h]
  int v337; // [sp+74h] [bp-3070h]
  __int64 v338; // [sp+78h] [bp-306Ch] BYREF
  unsigned int v339; // [sp+80h] [bp-3064h]
  char *v340; // [sp+88h] [bp-305Ch] BYREF
  unsigned int v341; // [sp+8Ch] [bp-3058h]
  unsigned int v342; // [sp+90h] [bp-3054h]
  int v343; // [sp+94h] [bp-3050h]
  void *v344; // [sp+98h] [bp-304Ch]
  int v345; // [sp+9Ch] [bp-3048h]
  int v346; // [sp+A0h] [bp-3044h]
  int v347; // [sp+A4h] [bp-3040h]
  int v348; // [sp+A8h] [bp-303Ch]
  int v349; // [sp+ACh] [bp-3038h]
  _DWORD v350[2]; // [sp+B0h] [bp-3034h] BYREF
  __int64 v351; // [sp+B8h] [bp-302Ch] BYREF
  int v352; // [sp+C0h] [bp-3024h]
  int v353; // [sp+C4h] [bp-3020h]
  int v354; // [sp+C8h] [bp-301Ch]
  int v355; // [sp+CCh] [bp-3018h]
  int v356; // [sp+D0h] [bp-3014h]
  int v357; // [sp+D4h] [bp-3010h]
  int v358; // [sp+D8h] [bp-300Ch]
  char v359[4]; // [sp+DCh] [bp-3008h] BYREF
  unsigned __int8 v360[4068]; // [sp+10DCh] [bp-2008h] BYREF
  char v361[4068]; // [sp+20DCh] [bp-1008h] BYREF

  v296 = *(unsigned __int8 *)(a2 + 153);
  v290 = &v332;
  *(_BYTE *)(a2 + 153) = 0;
  v6 = *a3;
  LODWORD(v329) = (char *)a3 + 5;
  HIDWORD(v329) = (char *)a3 + v6 + 5;
  sub_67C24(a1, 0);
  switch ( *((_BYTE *)a3 + 4) )
  {
    case 5:
      v65 = (void *)*a1;
      if ( *a1 )
      {
        a1[1] = 0;
        sub_77F70(v65);
        *a1 = 0;
        a1[2] = 0;
      }
      goto LABEL_22;
    case 0xA:
      v169 = *(_DWORD *)(a2 + 244);
      LODWORD(v170) = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329));
      *(_QWORD *)(v169 + 416) = v170;
      v171 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329)) == 0;
      v172 = HIDWORD(v329);
      if ( v171 )
      {
        v173 = 0;
      }
      else
      {
        v173 = 1;
        *(_BYTE *)(a2 + 96) = 1;
      }
      v174 = (char *)v329;
      if ( (unsigned int)v329 >= v172 )
        goto LABEL_273;
      v175 = (_BYTE *)(v329 + 1);
      if ( !*(_BYTE *)v329 )
        goto LABEL_401;
      do
      {
        if ( (_BYTE *)v172 == v175 )
        {
LABEL_273:
          v174 = nullptr;
          goto LABEL_274;
        }
      }
      while ( *v175++ );
LABEL_401:
      LODWORD(v329) = v175;
LABEL_274:
      sub_5AAEC(*(_DWORD *)(a2 + 244) + 424, v174);
      v177 = (char *)v329;
      if ( (unsigned int)v329 >= HIDWORD(v329) )
        goto LABEL_279;
      v178 = (unsigned __int8 *)(v329 + 1);
      if ( *(_BYTE *)v329 )
      {
        while ( (unsigned __int8 *)HIDWORD(v329) != v178 )
        {
          if ( !*v178++ )
            goto LABEL_404;
        }
LABEL_279:
        v177 = nullptr;
      }
      else
      {
LABEL_404:
        LODWORD(v329) = v178;
      }
      sub_5AAEC(*(_DWORD *)(a2 + 244) + 436, v177);
      *(_DWORD *)(*(_DWORD *)(a2 + 244) + 448) = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a2 + 244) + 48))(*(_DWORD *)(a2 + 244), v173);
      v180 = *(_DWORD *)(a2 + 244);
      v338 = 0;
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v181 = (*(int (__fastcall **)(int, __int64 *, char **))(*(_DWORD *)v180 + 52))(v180, &v338, &v340);
      v182 = v181;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"init(debug_debugger=%d) => %d (add_debugger_flags=0x%llX)\n", v173, v181, v338);
      sub_58140((int)a1, v182);
      sub_58184((int)a1, v183, v338, HIDWORD(v338));
      if ( v182 == 1 )
      {
        v259 = *(_DWORD *)(a2 + 244);
        if ( *(_BYTE *)(a2 + 96) )
        {
          sub_171B0((int)"init() => idaregs.nregs %zu\n", *(_DWORD *)(v259 + 348));
          v259 = *(_DWORD *)(a2 + 244);
        }
        sub_63B54(a1, v259 + 344);
      }
      else
      {
        if ( v341 )
          v184 = v340;
        else
          v184 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v184);
      }
      v123 = v340;
      if ( v340 )
      {
LABEL_337:
        v341 = 0;
        sub_77F70(v123);
      }
      goto LABEL_22;
    case 0xB:
      goto LABEL_22;
    case 0xC:
      v160 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v339 = 0;
      v338 = 0;
      v341 = 0;
      v342 = 0;
      v161 = (*(int (__fastcall **)(int))(*(_DWORD *)v160 + 36))(v160);
      sub_58140((int)a1, v161);
      if ( v161 == 1 )
      {
        sub_6165C((int)a1, &v338);
      }
      else
      {
        if ( v341 )
          v162 = v340;
        else
          v162 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v162);
      }
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"get_processes() => %d\n", v161);
      if ( v340 )
      {
        v341 = 0;
        sub_77F70(v340);
      }
      v163 = (void *)v338;
      if ( (_DWORD)v338 )
      {
        v164 = HIDWORD(v338);
        if ( HIDWORD(v338) )
        {
          v165 = 0;
          for ( i = v338; ; i = v338 )
          {
            v167 = i + 16 * v165;
            v168 = *(void **)(v167 + 4);
            if ( v168 )
            {
              *(_DWORD *)(v167 + 8) = 0;
              sub_77F70(v168);
            }
            if ( v164 == ++v165 )
              break;
          }
          v163 = (void *)v338;
        }
        HIDWORD(v338) = 0;
        sub_77F70(v163);
      }
      goto LABEL_22;
    case 0xD:
      v324 = (const char *)v329;
      if ( HIDWORD(v329) <= (unsigned int)v329 )
      {
        v324 = nullptr;
        v326 = nullptr;
        ptr = nullptr;
      }
      else
      {
        if ( *(_BYTE *)v329 )
        {
          v32 = (const char *)(v329 + 1);
          do
          {
            if ( (const char *)HIDWORD(v329) == v32 )
            {
              v326 = nullptr;
              v34 = (const char *)(v329 + 1);
              goto LABEL_56;
            }
          }
          while ( *v32++ );
        }
        else
        {
          v32 = (const char *)(v329 + 1);
        }
        LODWORD(v329) = v32;
        if ( HIDWORD(v329) > (unsigned int)v32 )
        {
          ptr = v32 + 1;
          if ( *v32 )
          {
            v246 = v324;
            v324 = v32;
            v326 = v246;
            v34 = v32 + 1;
LABEL_56:
            while ( HIDWORD(v329) > (unsigned int)v34 )
            {
              if ( !*(unsigned __int8 *)v34++ )
              {
                ptr = v34;
                goto LABEL_418;
              }
            }
            ptr = (const char *)v329;
            v324 = nullptr;
          }
          else
          {
            v278 = v324;
            v324 = v32;
            v326 = v278;
LABEL_418:
            LODWORD(v329) = ptr;
            if ( HIDWORD(v329) <= (unsigned int)ptr )
              goto LABEL_62;
          }
          v36 = (unsigned __int8 *)(ptr + 1);
          if ( !*ptr )
          {
LABEL_400:
            LODWORD(v329) = v36;
            goto LABEL_63;
          }
          while ( HIDWORD(v329) > (unsigned int)v36 )
          {
            if ( !*v36++ )
              goto LABEL_400;
          }
LABEL_62:
          ptr = nullptr;
          goto LABEL_63;
        }
        v326 = v324;
        v324 = nullptr;
        ptr = nullptr;
      }
LABEL_63:
      v327 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v320 = (const char *)v329;
      if ( HIDWORD(v329) > (unsigned int)v329 )
      {
        v38 = (unsigned __int8 *)(v329 + 1);
        if ( !*(_BYTE *)v329 )
        {
LABEL_399:
          LODWORD(v329) = v38;
LABEL_69:
          v40 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
          v41 = v329;
          v340 = nullptr;
          v338 = 0;
          LOBYTE(v343) = 1;
          v42 = HIDWORD(v329) > (unsigned int)v329;
          v328 = v40;
          v339 = 0;
          v341 = 0;
          v342 = 0;
          if ( HIDWORD(v329) > (unsigned int)v329 )
          {
            v41 = v329 + v42;
            LOBYTE(v42) = *(_BYTE *)v329;
            if ( *(_BYTE *)v329 )
              LOBYTE(v42) = 1;
          }
          LOBYTE(v343) = v42;
          LODWORD(v329) = v41;
          v317 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
          if ( v317 > 0 && (unsigned int)v329 < HIDWORD(v329) )
          {
            v43 = v341;
            for ( j = 1; ; ++j )
            {
              v44 = v340;
              if ( v43 + 1 > v342 )
              {
                v44 = (char *)sub_78018((int)&v340, v340, v43 + 1, 0xCu);
                v43 = v341;
                v340 = v44;
              }
              v45 = &v44[12 * v43];
              *(_DWORD *)v45 = 0;
              v46 = (unsigned __int8 *)v329;
              *((_DWORD *)v45 + 1) = 0;
              *((_DWORD *)v45 + 2) = 0;
              v43 = ++v341;
              if ( HIDWORD(v329) <= (unsigned int)v46 )
                break;
              v47 = v46 + 1;
              if ( *v46 )
              {
                while ( (unsigned __int8 *)HIDWORD(v329) != v47 )
                {
                  if ( !*v47++ )
                    goto LABEL_366;
                }
                if ( v317 <= j )
                  break;
              }
              else
              {
LABEL_366:
                LODWORD(v329) = v47;
                if ( v46 )
                {
                  v235 = *((_DWORD *)v45 + 1);
                  v236 = (size_t)&v47[~(unsigned int)v46];
                  if ( v235 )
                  {
                    sb = (char *)(v235 - 1);
                    v304 = v236 + v235 - 1;
                  }
                  else
                  {
                    sb = nullptr;
                    v304 = v236;
                  }
                  v237 = *(void **)v45;
                  v308 = v304 + 1;
                  if ( v304 != -1 )
                  {
                    v237 = sub_78018((int)v45, v237, v308, 1u);
                    *(_DWORD *)v45 = v237;
                  }
                  *((_DWORD *)v45 + 1) = v308;
                  *((_BYTE *)v237 + v304) = 0;
                  memmove(&sb[*(_DWORD *)v45], v46, v236);
                }
                if ( v317 <= j || (unsigned int)v329 >= HIDWORD(v329) )
                  break;
                v43 = v341;
              }
            }
          }
          v238 = (int)ptr;
          v239 = -3;
          if ( ptr )
            v238 = 1;
          if ( !v326 )
            v238 = 0;
          if ( !v320 )
            v238 = 0;
          if ( v238 )
          {
            v242 = (*(int (__fastcall **)(_DWORD, const char *, const char *, char **, const char *, unsigned int, const char *, unsigned int, __int64 *))(**(_DWORD **)(a2 + 244) + 64))(
                     *(_DWORD *)(a2 + 244),
                     v326,
                     v324,
                     &v340,
                     ptr,
                     v327,
                     v320,
                     v328,
                     &v338);
            v239 = v242;
            if ( *(_BYTE *)(a2 + 96) )
            {
              if ( (v327 & 1) != 0 )
                v243 = " is_dll";
              else
                v243 = &byte_8DFE8;
              if ( (v327 & 2) != 0 )
                v244 = " under_gui";
              else
                v244 = &byte_8DFE8;
              if ( (v327 & 0x20) != 0 )
                v245 = " hide_window";
              else
                v245 = &byte_8DFE8;
              sub_171B0(
                (int)"start_process(path=%s args=%s flags=%s%s%s\n"
                     "              sdir=%s\n"
                     "              input=%s crc32=%x) => %d\n",
                v326,
                v324,
                v243,
                v244,
                v245,
                ptr,
                v320,
                v328,
                v242);
            }
          }
          sub_59CEC(a2, (void **)a1, v239, (int)&v338);
          sub_187E0((int)&v340);
          if ( (_DWORD)v338 )
          {
            HIDWORD(v338) = 0;
            sub_77F70((void *)v338);
          }
          goto LABEL_22;
        }
        while ( (unsigned __int8 *)HIDWORD(v329) != v38 )
        {
          if ( !*v38++ )
            goto LABEL_399;
        }
      }
      v320 = nullptr;
      goto LABEL_69;
    case 0xE:
      v137 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v138 = (*(int (__fastcall **)(int, char **))(*(_DWORD *)v137 + 80))(v137, &v340);
      v139 = v138;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"exit_process() => %d\n", v138);
      sub_58140((int)a1, v139);
      if ( v139 < 0 )
      {
        if ( v341 )
          v249 = v340;
        else
          v249 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v249);
      }
      v140 = v340;
      if ( v340 )
        goto LABEL_215;
      goto LABEL_22;
    case 0xF:
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v216 = sub_59C7C(a2, (int)&v340, (int)&v329);
      sub_59CEC(a2, (void **)a1, v216, (int)&v340);
      v123 = v340;
      if ( v340 )
        goto LABEL_337;
      goto LABEL_22;
    case 0x10:
      v117 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 244) + 60))(*(_DWORD *)(a2 + 244));
      sub_58140((int)a1, v117);
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"detach_process() => %d\n", v117);
      goto LABEL_22;
    case 0x11:
      v188 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      if ( *(_BYTE *)(a2 + 152) )
      {
        sub_58140((int)a1, 0);
      }
      else
      {
        v189 = (*(int (__fastcall **)(_DWORD, int, unsigned int))(**(_DWORD **)(a2 + 244) + 68))(
                 *(_DWORD *)(a2 + 244),
                 a2 + 156,
                 v188);
        sub_58140((int)a1, v189);
        if ( v189 > 0 )
        {
          sub_6209C((int)a1, a2 + 156);
          if ( *(_BYTE *)(a2 + 96) )
          {
            v190 = sub_54268(a2 + 156, v361, 1024);
            sub_171B0((int)"got event: %s\n", v190);
          }
          goto LABEL_22;
        }
      }
      if ( *(_BYTE *)(a2 + 152) )
        goto LABEL_22;
      goto LABEL_23;
    case 0x12:
      v185 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v186 = (*(int (__fastcall **)(int, char **))(*(_DWORD *)v185 + 76))(v185, &v340);
      v187 = v186;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"prepare_to_pause_process() => %d\n", v186);
      sub_58140((int)a1, v187);
      if ( v187 < 0 )
      {
        if ( v341 )
          v248 = v340;
        else
          v248 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v248);
      }
      v140 = v340;
      if ( v340 )
      {
LABEL_215:
        v341 = 0;
        sub_77F70(v140);
      }
      goto LABEL_22;
    case 0x13:
      v218 = *(_DWORD *)(a2 + 244);
      v219 = v329;
      if ( HIDWORD(v329) <= (unsigned int)v329 )
      {
        v221 = 0;
      }
      else
      {
        v220 = *(unsigned __int8 *)v329;
        LODWORD(v329) = v329 + 1;
        v221 = v220;
        if ( v220 )
          v221 = 1;
        if ( HIDWORD(v329) > v219 + 1 )
        {
          v222 = *(unsigned __int8 *)(v219 + 1);
          v223 = v219 + 2;
          v224 = (char **)&v338;
          v339 = 0;
          v338 = 0;
          if ( !v222 )
            v224 = nullptr;
          v340 = nullptr;
          if ( v222 )
            v224 = &v340;
          v341 = 0;
          v342 = 0;
          LODWORD(v329) = v223;
          v225 = *(void (__fastcall **)(int, __int64 *, int, char **))(*(_DWORD *)v218 + 96);
LABEL_349:
          v225(v218, &v338, v221, v224);
          sub_5A420(a2, (int)&v338);
          v226 = sub_54514(*(_DWORD *)(a2 + 244));
          v227 = v226;
          if ( v226 )
          {
            v227 = sub_59FD4(a2, *(int **)v226, *(char ***)(v226 + 12), *(_DWORD *)(v226 + 4));
            sub_54540(*(_DWORD *)(a2 + 244));
          }
          if ( v222 )
          {
            v263 = v341;
            sub_58140((int)a1, v341);
            if ( v263 )
            {
              for ( k = 0; k != v263; ++k )
              {
                v266 = (unsigned int *)&v340[16 * k];
                sub_58140((int)a1, *v266);
                if ( v266[2] )
                  v265 = (char *)v266[1];
                else
                  v265 = (char *)&dword_8DB98;
                sub_581C8((void **)a1, v265);
              }
            }
          }
          if ( *(_BYTE *)(a2 + 96) )
          {
            if ( v227 > 0x38 || (v228 = off_D0FE4[v227]) == nullptr )
            {
              sub_7EBB4(dword_D4B44, 16, "RPC_%d", v227);
              v228 = (const char *)dword_D4B44;
            }
            sub_171B0((int)"stopped_at_debug_event => %s\n", v228);
          }
          sub_5B8A0(&v340);
          sub_5B858((char **)&v338);
          goto LABEL_22;
        }
        ++v219;
      }
      v222 = 0;
      LODWORD(v329) = v219;
      v224 = nullptr;
      v339 = 0;
      v338 = 0;
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v225 = *(void (__fastcall **)(int, __int64 *, int, char **))(*(_DWORD *)v218 + 96);
      goto LABEL_349;
    case 0x14:
      sub_61F14(a2 + 156, (int)&v329);
      v217 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a2 + 244) + 84))(*(_DWORD *)(a2 + 244), a2 + 156);
      v146 = v217;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"continue_after_event(...) => %d\n", v217);
      goto LABEL_220;
    case 0x15:
      v193 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v194 = (*(int (__fastcall **)(_DWORD, unsigned int))(**(_DWORD **)(a2 + 244) + 100))(*(_DWORD *)(a2 + 244), v193);
      v146 = v194;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"thread_suspend(tid=%d) => %d\n", v193, v194);
      goto LABEL_220;
    case 0x16:
      v191 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v192 = (*(int (__fastcall **)(_DWORD, unsigned int))(**(_DWORD **)(a2 + 244) + 104))(*(_DWORD *)(a2 + 244), v191);
      v146 = v192;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"thread_continue(tid=%d) => %d\n", v191, v192);
      goto LABEL_220;
    case 0x17:
      v213 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v214 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v215 = (*(int (__fastcall **)(_DWORD, unsigned int, unsigned int))(**(_DWORD **)(a2 + 244) + 108))(
               *(_DWORD *)(a2 + 244),
               v213,
               v214);
      v146 = v215;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"set_resume_mode(tid=%d, resmod=%d) => %d\n", v213, v214, v215);
      goto LABEL_220;
    case 0x18:
      v208 = *(_DWORD *)(a2 + 244);
      v338 = 0;
      v340 = nullptr;
      v339 = 0;
      v341 = 0;
      v342 = 0;
      v209 = (*(int (__fastcall **)(int))(*(_DWORD *)v208 + 128))(v208);
      v210 = v209;
      v211 = HIDWORD(v338);
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"get_memory_info() => %d (qty=%d)\n", v209, HIDWORD(v338));
      sub_58140((int)a1, v210 + 4);
      if ( v210 == 1 )
      {
        sub_58140((int)a1, v211);
        if ( v211 > 0 )
        {
          v273 = 0;
          for ( m = 0; m != v211; ++m )
          {
            sub_60F24((int)a1, v338 + v273);
            v273 += 40;
          }
        }
      }
      else
      {
        if ( v341 )
          v212 = v340;
        else
          v212 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v212);
      }
      if ( v340 )
      {
        v341 = 0;
        sub_77F70(v340);
      }
      sub_1881C((char **)&v338);
      goto LABEL_22;
    case 0x19:
      v124 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
      v125 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v126 = (unsigned __int8 *)sub_8128C(v125);
      v127 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v295 = v126;
      v128 = (*(int (__fastcall **)(int, unsigned int, unsigned __int8 *, size_t, char **))(*(_DWORD *)v127 + 144))(
               v127,
               v124,
               v126,
               v125,
               &v340);
      v129 = v128;
      if ( *(_BYTE *)(a2 + 96) )
      {
        sub_171B0(
          (int)"read_memory(ea=%a size=%zu) => %zd",
          COERCE_DOUBLE(__PAIR64__(v128, v125)),
          LODWORD(v288),
          HIDWORD(v288));
        v130 = v129 > 0;
        v260 = v125 == 1 && v129 > 0;
        v301 = *(unsigned __int8 *)(a2 + 96);
        if ( v260 )
        {
          if ( *(_BYTE *)(a2 + 96) )
          {
            sub_171B0((int)" (0x%02X)\n", *v295);
            v130 = v301;
          }
          else
          {
            v130 = v260;
          }
        }
        else if ( *(_BYTE *)(a2 + 96) )
        {
          sub_171B0((int)"\n");
        }
      }
      else
      {
        v130 = v128 > 0;
        v131 = v125 == 1 && v128 > 0;
        if ( v131 )
          v130 = v131;
      }
      sub_58140((int)a1, v129);
      if ( v130 )
      {
        if ( v129 )
          sub_580D4((int)a1, v295, v129);
      }
      else
      {
        if ( v341 )
          v247 = v340;
        else
          v247 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v247);
      }
      if ( v295 )
        sub_80FF8(v295);
      v123 = v340;
      if ( v340 )
        goto LABEL_337;
      goto LABEL_22;
    case 0x1A:
      v294 = (void *)(sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1);
      v118 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v119 = (unsigned __int8 *)sub_8128C(v118);
      sub_58248(&v329, v119, v118);
      v120 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v121 = (*(int (__fastcall **)(int, void *, unsigned __int8 *, size_t, char **))(*(_DWORD *)v120 + 148))(
               v120,
               v294,
               v119,
               v118,
               &v340);
      v122 = v121;
      if ( *(_BYTE *)(a2 + 96) )
      {
        sub_171B0(
          (int)"write_memory(ea=%a size=%zu) => %zd",
          COERCE_DOUBLE(__PAIR64__(v121, v118)),
          LODWORD(v288),
          HIDWORD(v288));
        v261 = v118 == 1;
        if ( !v122 )
          v261 = 0;
        if ( v261 )
        {
          if ( *(_BYTE *)(a2 + 96) )
            sub_171B0((int)" (0x%02X)\n", *v119);
        }
        else if ( *(_BYTE *)(a2 + 96) )
        {
          sub_171B0((int)"\n");
        }
      }
      sub_58140((int)a1, v122);
      if ( v122 <= 0 )
      {
        if ( v341 )
          v234 = v340;
        else
          v234 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v234);
      }
      if ( v119 )
        sub_80FF8(v119);
      v123 = v340;
      if ( v340 )
        goto LABEL_337;
      goto LABEL_22;
    case 0x1B:
      if ( !sub_5C818(a2, (int)a1, (int)&v329) && *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"rpc_update_bpts failed!\n");
      goto LABEL_22;
    case 0x1C:
      sub_5BC58(a2, (void **)a1, &v329);
      goto LABEL_22;
    case 0x1D:
      v147 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v148 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329));
      v149 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v150 = v148 - 1;
      v341 = 0;
      v342 = 0;
      v151 = (*(int (__fastcall **)(int, unsigned int, unsigned int, char **))(*(_DWORD *)v149 + 180))(
               v149,
               v147,
               v148 - 1,
               &v340);
      sub_58140((int)a1, v151);
      if ( v151 != 1 )
      {
        if ( v341 )
          v152 = v340;
        else
          v152 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v152);
      }
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"eval_lowcnd(tid=%d, ea=%a) => %d\n", v147, COERCE_DOUBLE(__PAIR64__(v151, v150)), LODWORD(v288));
      v123 = v340;
      if ( v340 )
        goto LABEL_337;
      goto LABEL_22;
    case 0x1E:
      v142 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v143 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
      v144 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
      v145 = (*(int (__fastcall **)(_DWORD, unsigned int, unsigned int, unsigned int))(**(_DWORD **)(a2 + 244) + 152))(
               *(_DWORD *)(a2 + 244),
               v142,
               v143,
               v144);
      v146 = v145;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0(
          (int)"isok_bpt(type=%d ea=%a len=%d) => %d\n",
          v142,
          COERCE_DOUBLE(__PAIR64__(v144, v143)),
          v145,
          HIDWORD(v288));
LABEL_220:
      sub_58140((int)a1, v146);
      goto LABEL_22;
    case 0x1F:
      v335 = nullptr;
      v336 = 0;
      v338 = 0;
      v337 = 0;
      v339 = 0;
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v291 = (void *)sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v302 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v7 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v8 = *(_DWORD *)(a2 + 244);
      v9 = v7;
      v10 = *(_DWORD *)(v8 + 348);
      if ( !v10 )
        v10 = *(_DWORD *)(v8 + 396);
      v11 = v7 > v10;
      if ( v7 <= 0 )
        v11 = 1;
      if ( v11 )
      {
        sub_188E0(
          (int)&v335,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v291,
          v302,
          v7,
          v10);
        sub_58140((int)a1, 0);
      }
      else
      {
        v12 = v7 + 14;
        if ( v7 + 7 >= 0 )
          v12 = v7 + 7;
        v13 = v12 >> 3;
        v14 = HIDWORD(v338);
        if ( v13 > HIDWORD(v338) )
        {
          sub_5B970((int)&v338, v13);
          v14 = HIDWORD(v338);
        }
        else if ( v13 < HIDWORD(v338) )
        {
          v14 = v13;
          HIDWORD(v338) = v13;
        }
        sub_58248(&v329, (void *)v338, v14);
        sub_550A8(&v340, v10);
        v15 = (*(int (__fastcall **)(_DWORD, void *, unsigned int, char *, char **))(**(_DWORD **)(a2 + 244) + 112))(
                *(_DWORD *)(a2 + 244),
                v291,
                v302,
                v340,
                &v335);
        v16 = v15;
        if ( *(_BYTE *)(a2 + 96) )
          sub_171B0((int)"read_regs(tid=%d, mask=%x) => %d\n", v291, v302, v15);
        sub_58140((int)a1, v16);
        if ( v16 == 1 )
        {
          sub_636E4((int)a1, v340, v9, v338);
          goto LABEL_18;
        }
      }
      if ( v336 )
        v17 = v335;
      else
        v17 = (char *)&dword_8DB98;
      sub_581C8((void **)a1, v17);
LABEL_18:
      sub_552D0(&v340);
      if ( (_DWORD)v338 )
      {
        HIDWORD(v338) = 0;
        sub_77F70((void *)v338);
      }
      if ( v335 )
      {
        v336 = 0;
        sub_77F70(v335);
      }
      goto LABEL_22;
    case 0x20:
      v299 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v307 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v350[0] = -2;
      v352 = 0;
      v353 = 0;
      v351 = -1;
      if ( HIDWORD(v329) > (unsigned int)v329 )
      {
        v153 = sub_5E314((char **)&v329) - 3;
        v350[0] = v153;
        if ( v153 == -2 )
        {
          v250 = sub_5E314((char **)&v329);
          v251 = sub_5E314((char **)&v329);
          LODWORD(v351) = v250 - 1;
          HIDWORD(v351) = (v250 != 0) + v251 - 1;
        }
        else if ( v153 != -3 )
        {
          v351 = 0;
          v352 = 0;
          if ( v153 < -1 )
          {
            if ( under_debugger )
              __und(0xFFu);
            sub_78C64(3216);
          }
          v267 = sub_5E314((char **)&v329);
          v268 = v267;
          if ( v267 > HIDWORD(v351) )
          {
            sub_5B970((int)&v351, v267);
          }
          else if ( v267 < HIDWORD(v351) )
          {
            HIDWORD(v351) = v267;
          }
          if ( v268 )
            sub_58248(&v329, (void *)v351, v268);
        }
      }
      v252 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v253 = (*(int (__fastcall **)(int, unsigned int, unsigned int, _DWORD *, char **))(*(_DWORD *)v252 + 116))(
               v252,
               v299,
               v307,
               v350,
               &v340);
      v254 = v253;
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"write_reg(tid=%d) => %d\n", v299, v253);
      sub_58140((int)a1, v254);
      if ( v254 < 0 )
      {
        if ( v341 )
          v277 = v340;
        else
          v277 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v277);
      }
      if ( v340 )
      {
        v341 = 0;
        sub_77F70(v340);
      }
      if ( v350[0] >= -1 && (_DWORD)v351 )
      {
        HIDWORD(v351) = 0;
        sub_77F70((void *)v351);
      }
      goto LABEL_22;
    case 0x21:
      v154 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v155 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v156 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v157 = v155;
      v341 = 0;
      v342 = 0;
      v158 = (*(int (__fastcall **)(int, __int64 *, unsigned int, unsigned int, char **))(*(_DWORD *)v156 + 120))(
               v156,
               &v338,
               v154,
               v155,
               &v340);
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"get_thread_sreg_base(tid=%d, %d) => %a\n", v154, v157, v288);
      sub_58140((int)a1, v158);
      if ( v158 == 1 )
      {
        if ( (_DWORD)v338 == -1 )
          v256 = 0;
        else
          v256 = (unsigned int)v338 + 1LL;
        sub_58184((int)a1, 0, v256, HIDWORD(v256));
      }
      else
      {
        if ( v341 )
          v159 = v340;
        else
          v159 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v159);
      }
      v123 = v340;
      if ( v340 )
        goto LABEL_337;
      goto LABEL_22;
    case 0x22:
      v111 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v112 = sub_62604(v111, &v329);
      (*(void (__fastcall **)(_DWORD, char *, unsigned int))(**(_DWORD **)(a2 + 244) + 92))(
        *(_DWORD *)(a2 + 244),
        v112,
        v111);
      if ( v112 )
      {
        v113 = 32 * *((_DWORD *)v112 - 1);
        v114 = &v112[v113];
        while ( v112 != v114 )
        {
          v114 -= 32;
          v115 = *((void **)v114 + 5);
          if ( v115 )
          {
            *((_DWORD *)v114 + 6) = 0;
            sub_77F70(v115);
          }
          v116 = *((void **)v114 + 2);
          if ( v116 )
          {
            *((_DWORD *)v114 + 3) = 0;
            sub_77F70(v116);
          }
        }
        sub_809E8(v112 - 8);
      }
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"set_exception_info(qty=%d)\n", v111);
      goto LABEL_22;
    case 0x23:
      v23 = (char *)v329;
      if ( HIDWORD(v329) <= (unsigned int)v329 )
        goto LABEL_37;
      v24 = (_BYTE *)(v329 + 1);
      if ( !*(_BYTE *)v329 )
        goto LABEL_402;
      do
      {
        if ( (_BYTE *)HIDWORD(v329) == v24 )
        {
LABEL_37:
          v23 = nullptr;
          goto LABEL_38;
        }
      }
      while ( *v24++ );
LABEL_402:
      LODWORD(v329) = v24;
LABEL_38:
      v292 = (void *)sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v26 = sub_65840(a2);
      if ( v26 == -1 )
        goto LABEL_41;
      if ( v292 )
      {
        v27 = sub_75DD0((int)v23);
        *(_DWORD *)(a2 + 4 * v26 + 4) = v27;
        if ( !v27 )
        {
LABEL_41:
          v26 = -1;
          v28 = 0;
          goto LABEL_42;
        }
        v28 = sub_71108((int)v27);
      }
      else
      {
        if ( sub_76BD4(v359, 0x1000u, v23) && !sub_775B0((int)v359) )
        {
          sub_76FF4(v360, 4096, (unsigned __int8 *)v359);
          sub_76FD0(v361, 0x1000u);
          v280 = strlen(v361);
          if ( !strncmp((const char *)v360, v361, v280) )
          {
            v338 = 0;
            v339 = 0;
            do
            {
              if ( sub_775B0((int)v360) )
                break;
              v281 = v338;
              sub_5ACC4(&v340, (char *)v360);
              ptrc = v340;
              v282 = HIDWORD(v338);
              v305 = (char *)v338;
              v309 = v281 - v338;
              v340 = nullptr;
              v319 = v341;
              v323 = v342;
              v341 = 0;
              v342 = 0;
              if ( HIDWORD(v338) + 1 > v339 )
              {
                v283 = (char *)sub_78018((int)&v338, (void *)v338, HIDWORD(v338) + 1, 0xCu);
                v282 = HIDWORD(v338);
                v305 = v283;
                LODWORD(v338) = v283;
              }
              v284 = &v305[v309];
              memmove(&v305[v309 + 12], &v305[v309], 12 * v282 - v309);
              *(_DWORD *)&v305[v309] = ptrc;
              *((_DWORD *)v284 + 1) = v319;
              *((_DWORD *)v284 + 2) = v323;
              ++HIDWORD(v338);
              if ( v340 )
              {
                v341 = 0;
                sub_77F70(v340);
              }
            }
            while ( sub_76BD4((char *)v360, 0x1000u, (char *)v360) );
            v306 = HIDWORD(v338);
            if ( HIDWORD(v338) )
            {
              v285 = 0;
              v286 = 0;
              do
              {
                if ( *(_DWORD *)(v338 + v285 + 4) )
                  v287 = *(const char **)(v338 + v285);
                else
                  v287 = (const char *)&dword_8DB98;
                if ( *(_BYTE *)(a2 + 96) )
                  sub_171B0((int)"open_file() creating directory %s\n", v287);
                if ( sub_77464(v287, 0x1FFu) )
                  break;
                ++v286;
                v285 += 12;
              }
              while ( v286 != v306 );
            }
            sub_187E0((int)&v338);
          }
        }
        v262 = sub_75E60((int)v23);
        *(_DWORD *)(a2 + 4 * v26 + 4) = v262;
        if ( !v262 )
          goto LABEL_41;
        v28 = 0;
      }
LABEL_42:
      if ( *(_BYTE *)(a2 + 96) )
      {
        v29 = (int)v292;
        if ( v292 )
          v29 = 1;
        sub_171B0((int)"open_file('%s', %d) => %d %lld\n", v23, v29, v26, v28);
      }
      sub_58140((int)a1, v26);
      if ( v26 == -1 )
      {
        v255 = _errno_location();
        sub_58140((int)a1, *v255);
      }
      else
      {
        v31 = v28;
LABEL_48:
        sub_58184((int)a1, v30, v31, HIDWORD(v31));
      }
LABEL_22:
      if ( v296 )
LABEL_23:
        *(_BYTE *)(a2 + 153) = 1;
      return a1;
    case 0x24:
      v132 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v133 = v132;
      if ( v132 <= 0xF )
      {
        v134 = a2 + 4 * v132;
        v135 = *(FILE **)(v134 + 4);
        if ( v135 )
        {
          v136 = fileno(*(FILE **)(v134 + 4));
          fchmod(v136, 0x1EDu);
          sub_778BC(v135);
          *(_DWORD *)(v134 + 4) = 0;
        }
      }
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"close_file(%d)\n", v133);
      goto LABEL_22;
    case 0x25:
      v57 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      LODWORD(v59) = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329));
      HIDWORD(v59) = v58;
      v60 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v61 = v60;
      if ( v60 <= 0 )
      {
        sub_58140((int)a1, 0);
        v64 = v61;
        if ( !v61 )
          goto LABEL_99;
        v64 = 0;
        v63 = nullptr;
      }
      else
      {
        v62 = a2 + 4 * v57;
        v63 = sub_8128C(v60);
        sub_77884(*(_DWORD *)(v62 + 4));
        v64 = sub_77788(*(FILE **)(v62 + 4), v63, v61);
        sub_58140((int)a1, v64);
        if ( v61 == v64 )
        {
          if ( v61 )
            sub_580D4((int)a1, v63, v61);
LABEL_97:
          if ( v63 )
            sub_80FF8(v63);
LABEL_99:
          if ( *(_BYTE *)(a2 + 96) )
            sub_171B0((int)"read_file(%d, 0x%llX, %d) => %d\n", v57, v59, v61, v64);
          goto LABEL_22;
        }
      }
      v241 = _errno_location();
      sub_58140((int)a1, *v241);
      goto LABEL_97;
    case 0x26:
      v49 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      LODWORD(v51) = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329));
      HIDWORD(v51) = v50;
      v52 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v53 = v52;
      if ( v52 )
      {
        v54 = sub_8128C(v52);
        v240 = a2 + 4 * v49;
        sub_58248(&v329, v54, v53);
        sub_77884(*(_DWORD *)(v240 + 4));
        if ( v54 )
        {
          v55 = sub_777F4(*(FILE **)(v240 + 4), v54, v53);
LABEL_87:
          sub_58140((int)a1, v53);
          if ( v55 != v53 )
          {
            v56 = _errno_location();
            sub_58140((int)a1, *v56);
          }
          if ( v54 )
            sub_80FF8(v54);
          if ( *(_BYTE *)(a2 + 96) )
            sub_171B0((int)"write_file(%d, 0x%llX, %u) => %u\n", v49, v51, v53, v55);
          goto LABEL_22;
        }
      }
      else
      {
        sub_77884(*(_DWORD *)(a2 + 4 * v49 + 4));
      }
      v54 = nullptr;
      v55 = 0;
      goto LABEL_87;
    case 0x27:
      v197 = sub_674E0(a2 + 100, (int)a1, (unsigned __int8 *)v329, HIDWORD(v329));
      if ( v197 )
      {
        sub_67C24((int *)&v332, v197);
        v198 = (void *)*a1;
        v199 = v332;
        v200 = v333;
        v332 = nullptr;
        v333 = 0;
        v201 = v334;
        v334 = 0;
        if ( v198 )
        {
          a1[1] = 0;
          sub_77F70(v198);
          *a1 = (int)v199;
          a1[1] = v200;
          a1[2] = v201;
          if ( v332 )
          {
            v333 = 0;
            sub_77F70(v332);
          }
        }
        else
        {
          *a1 = (int)v199;
          a1[1] = v200;
          a1[2] = v201;
        }
      }
      goto LABEL_22;
    case 0x28:
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v195 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v196 = *(int (**)())(**(_DWORD **)(a2 + 244) + 208);
      if ( v196 == sub_15098 )
      {
        sub_58140((int)a1, 0);
      }
      else
      {
        v272 = ((int (__fastcall *)(_DWORD, unsigned int, char **))v196)(*(_DWORD *)(a2 + 244), v195, &v340);
        sub_58140((int)a1, v272);
        if ( v272 == 1 )
          sub_62AAC((int)a1, &v340);
      }
      v123 = v340;
      if ( v340 )
        goto LABEL_337;
      goto LABEL_22;
    case 0x29:
      v318 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
      v300 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      sa = (char *)sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v202 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v203 = (char **)(v202 & 1);
      v322 = v203;
      ptrb = (void *)v202;
      if ( (v202 & 1) == 0 )
        v203 = &v335;
      v340 = nullptr;
      v335 = nullptr;
      if ( (v202 & 1) != 0 )
        v203 = nullptr;
      v336 = 0;
      v337 = 0;
      v332 = nullptr;
      v333 = 0;
      v334 = 0;
      v341 = 0;
      v342 = 0;
      v343 = 0;
      v344 = nullptr;
      v345 = 0;
      v346 = 0;
      sub_63044(&v332, (int)&v340, v203, (unsigned __int8 **)&v329);
      v350[1] = 0;
      BYTE4(v351) = 0;
      LODWORD(v351) = -1;
      v338 = 0;
      v350[0] = -1;
      v352 = 0;
      v353 = 0;
      v204 = *(_DWORD *)(a2 + 244);
      v354 = 0;
      v355 = 0;
      v356 = 0;
      v357 = 0;
      v358 = 0;
      v339 = 0;
      v205 = (unsigned int)(*(int (__fastcall **)(int, unsigned int, unsigned int, char *, char **, char **, char **, __int64 *, _DWORD *, void *))(*(_DWORD *)v204 + 212))(
                             v204,
                             v318,
                             v300,
                             sa,
                             &v332,
                             &v340,
                             &v335,
                             &v338,
                             v350,
                             ptrb);
      v206 = v205;
      if ( (_DWORD)v205 == -1 )
        v207 = 0;
      else
        v207 = v205 + 1;
      sub_58184((int)a1, 0, v207, HIDWORD(v207));
      if ( v206 == -1 )
      {
        if ( ((unsigned __int8)ptrb & 2) != 0 )
          sub_6209C((int)a1, (int)v350);
        if ( HIDWORD(v338) )
          v258 = (char *)v338;
        else
          v258 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v258);
      }
      else if ( !v322 )
      {
        sub_63134((int)a1, &v335, 1);
      }
      sub_6E484(v350);
      if ( (_DWORD)v338 )
      {
        HIDWORD(v338) = 0;
        sub_77F70((void *)v338);
      }
      if ( v344 )
      {
        v345 = 0;
        sub_77F70(v344);
      }
      if ( v340 )
      {
        v341 = 0;
        sub_77F70(v340);
      }
      sub_5B90C(&v335);
      sub_5B90C(&v332);
      goto LABEL_22;
    case 0x2A:
      v141 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v22 = (*(int (__fastcall **)(_DWORD, unsigned int))(**(_DWORD **)(a2 + 244) + 216))(*(_DWORD *)(a2 + 244), v141);
      goto LABEL_217;
    case 0x2B:
      v19 = v329;
      if ( HIDWORD(v329) <= (unsigned int)v329 )
        goto LABEL_30;
      v20 = (_BYTE *)(v329 + 1);
      if ( !*(_BYTE *)v329 )
        goto LABEL_403;
      do
      {
        if ( (_BYTE *)HIDWORD(v329) == v20 )
        {
LABEL_30:
          v19 = 0;
          goto LABEL_31;
        }
      }
      while ( *v20++ );
LABEL_403:
      LODWORD(v329) = v20;
LABEL_31:
      v22 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a2 + 244) + 268))(*(_DWORD *)(a2 + 244), v19);
LABEL_217:
      sub_58140((int)a1, v22);
      goto LABEL_22;
    case 0x2C:
      v103 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329));
      v104 = *(_DWORD *)(a2 + 244);
      v105 = 0;
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v106 = *(int (**)())(*(_DWORD *)v104 + 132);
      if ( v106 == sub_15064 )
      {
        v107 = -1;
        v108 = 0;
      }
      else
      {
        v270 = ((int (__fastcall *)(int, char **, unsigned int))v106)(v104, &v340, v103 - 1);
        v108 = v341;
        v107 = v270;
        v105 = v341;
      }
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0(
          (int)"get_scattered_image(base=%a) => %d (qty=%d)\n",
          COERCE_DOUBLE(__PAIR64__(v105, v107)),
          LODWORD(v288),
          HIDWORD(v288));
      sub_58140((int)a1, v107 + 2);
      if ( v107 > 0 )
      {
        sub_58140((int)a1, v108);
        if ( v105 > 0 )
        {
          v109 = 0;
          for ( n = 0; n != v105; ++n )
          {
            sub_613E8((int)a1, (unsigned int *)&v340[v109]);
            v109 += 20;
          }
        }
      }
      sub_5B8D4(&v340);
      goto LABEL_22;
    case 0x2D:
      v96 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329));
      v97 = *(_DWORD *)(a2 + 244);
      v340 = nullptr;
      v98 = v96 - 1;
      v341 = 0;
      v342 = 0;
      v99 = *(int (**)())(*(_DWORD *)v97 + 136);
      if ( v99 == sub_1506C )
      {
        v100 = 0;
        v101 = 0;
      }
      else
      {
        v271 = ((int (__fastcall *)(int, char **, unsigned int))v99)(v97, &v340, v98);
        v100 = v341;
        v101 = v271;
      }
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0((int)"get_image_uuid(base=%a) => %d (size=%d)\n", v98, v101);
      sub_58140((int)a1, v101);
      v102 = v340;
      if ( v101 )
      {
        sub_58140((int)a1, v100);
        if ( v100 )
          sub_580D4((int)a1, v102, v100);
        v102 = v340;
      }
      if ( v102 )
      {
        v341 = 0;
        sub_77F70(v102);
      }
      goto LABEL_22;
    case 0x2E:
      v298 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
      v90 = (char *)v329;
      if ( HIDWORD(v329) <= (unsigned int)v329 )
        goto LABEL_145;
      v91 = (_BYTE *)(v329 + 1);
      if ( !*(_BYTE *)v329 )
        goto LABEL_398;
      do
      {
        if ( (_BYTE *)HIDWORD(v329) == v91 )
        {
LABEL_145:
          v90 = nullptr;
          goto LABEL_146;
        }
      }
      while ( *v91++ );
LABEL_398:
      LODWORD(v329) = v91;
LABEL_146:
      v93 = *(_DWORD *)(a2 + 244);
      v94 = *(int (**)())(*(_DWORD *)v93 + 140);
      sub_5ACC4(&v340, v90);
      if ( v94 == sub_15070 )
        v95 = -1;
      else
        v95 = ((int (__fastcall *)(int, unsigned int, char **))v94)(v93, v298, &v340);
      if ( v340 )
      {
        v341 = 0;
        sub_77F70(v340);
      }
      if ( *(_BYTE *)(a2 + 96) )
        sub_171B0(
          (int)"get_segm_start(base=%a, segname=%s) => %a\n",
          COERCE_DOUBLE(__PAIR64__(v95, (unsigned int)v90)),
          (const char *)LODWORD(v288),
          v289);
      v30 = 0;
      if ( v95 == -1 )
        v31 = 0;
      else
        v31 = (unsigned int)v95 + 1LL;
      goto LABEL_48;
    case 0x2F:
      v321 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
      v325 = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
      v66 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v335 = nullptr;
      v336 = 0;
      s = (char *)v66;
      v337 = 0;
      if ( !v66 )
        goto LABEL_132;
      v340 = nullptr;
      v67 = v66;
      v341 = 0;
      v342 = 0;
      v343 = 0;
      v344 = nullptr;
      v345 = 0;
      v346 = 0;
      v347 = 0;
      v348 = 0;
      v349 = -1;
      sub_5E3B0((int *)&v335, v66, (int)&v340);
      sub_5B944((int)&v340);
      if ( v67 <= 0 )
        goto LABEL_132;
      v303 = 0;
      ptra = nullptr;
      break;
    case 0x30:
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 244) + 348) )
      {
        sub_58140((int)a1, 1u);
        sub_63B54(a1, *(_DWORD *)(a2 + 244) + 344);
      }
      else
      {
        sub_58140((int)a1, 0);
      }
      goto LABEL_22;
    default:
      sub_67C24((int *)&v335, 1);
      v229 = (void *)*a1;
      v230 = v335;
      v335 = nullptr;
      v231 = v336;
      v232 = v337;
      v336 = 0;
      v337 = 0;
      if ( v229 )
      {
        a1[1] = 0;
        sub_77F70(v229);
        v233 = v335;
        *a1 = (int)v230;
        a1[1] = v231;
        a1[2] = v232;
        if ( v233 )
        {
          v336 = 0;
          sub_77F70(v233);
        }
      }
      else
      {
        *a1 = (int)v230;
        a1[1] = v231;
        a1[2] = v232;
      }
      goto LABEL_22;
  }
  while ( 1 )
  {
    v68 = &v335[v303];
    v69 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
    v70 = v69;
    if ( v69 )
    {
      v71 = *((_DWORD *)v68 + 1);
      if ( v69 > v71 )
      {
        sub_5B970((int)v68, v69);
      }
      else if ( v69 < v71 )
      {
        *((_DWORD *)v68 + 1) = v69;
      }
      sub_58248(&v329, *(void **)v68, v70);
    }
    v72 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
    v73 = v72;
    if ( v72 )
    {
      v74 = *((_DWORD *)v68 + 4);
      if ( v72 > v74 )
      {
        sub_5B970((int)(v68 + 12), v72);
      }
      else if ( v72 < v74 )
      {
        *((_DWORD *)v68 + 4) = v72;
      }
      sub_58248(&v329, *((void **)v68 + 3), v73);
    }
    v75 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
    v76 = *((_DWORD *)v68 + 7);
    v297 = v75;
    if ( v75 == v76 )
      goto LABEL_128;
    if ( v75 < v76 )
      *((_DWORD *)v68 + 7) = v75;
    v330 = 0;
    v331 = 0;
    if ( v75 <= v76 )
      goto LABEL_128;
    v77 = *((char **)v68 + 6);
    v78 = (int)(v68 + 24);
    v79 = *((_DWORD *)v68 + 8);
    if ( v77 <= (char *)&v330 && &v330 < (int *)&v77[8 * v79] )
    {
      if ( v297 > v79 )
      {
        v279 = (char *)sub_78018(v78, *((void **)v68 + 6), v297, 8u);
        v76 = *((_DWORD *)v68 + 7);
        v77 = v279;
        *((_DWORD *)v68 + 6) = v279;
        if ( v297 <= v76 )
          goto LABEL_127;
      }
      v275 = 8 * v76;
      v81 = v290;
      while ( 1 )
      {
        ++v76;
        *(_DWORD *)&v77[v275] = 0;
        v276 = &v77[v275];
        v275 += 8;
        *((_DWORD *)v276 + 1) = 0;
        if ( v297 <= v76 )
          break;
        v77 = *((char **)v68 + 6);
      }
    }
    else
    {
      if ( v297 > v79 )
      {
        v269 = (char *)sub_78018(v78, *((void **)v68 + 6), v297, 8u);
        v76 = *((_DWORD *)v68 + 7);
        v77 = v269;
        *((_DWORD *)v68 + 6) = v269;
        if ( v297 <= v76 )
          goto LABEL_127;
      }
      v80 = 8 * v76;
      v81 = v290;
      while ( 1 )
      {
        v82 = v331;
        ++v76;
        v83 = &v77[v80];
        v80 += 8;
        *(_DWORD *)v83 = v330;
        *((_DWORD *)v83 + 1) = v82;
        if ( v297 <= v76 )
          break;
        v77 = *((char **)v68 + 6);
      }
    }
    v290 = v81;
LABEL_127:
    *((_DWORD *)v68 + 7) = v297;
LABEL_128:
    if ( (int)v297 > 0 )
    {
      for ( ii = 0; ii != v297; ++ii )
      {
        v85 = 8 * ii;
        *(_DWORD *)(*((_DWORD *)v68 + 6) + 8 * ii) = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
        *(_DWORD *)(*((_DWORD *)v68 + 6) + v85 + 4) = sub_763AC((unsigned __int8 **)&v329, HIDWORD(v329)) - 1;
      }
    }
    *((_DWORD *)v68 + 9) = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
    v303 += 40;
    if ( s == ++ptra )
    {
LABEL_132:
      v86 = sub_762E4((unsigned __int8 **)&v329, HIDWORD(v329));
      v87 = *(_DWORD *)(a2 + 244);
      v338 = 0;
      v339 = 0;
      v88 = (*(int (__fastcall **)(int, char **, unsigned int, unsigned int, char **, unsigned int, __int64 *))(*(_DWORD *)v87 + 288))(
              v87,
              v290,
              v321,
              v325,
              &v335,
              v86,
              &v338);
      sub_58140((int)a1, v88);
      if ( v88 == 1 )
      {
        if ( *v290 == (char *)-1 )
          v257 = 0;
        else
          v257 = (__int64)(*v290 + 1);
        sub_58184((int)a1, 0, v257, HIDWORD(v257));
      }
      else if ( v88 != -1 )
      {
        if ( HIDWORD(v338) )
          v89 = (char *)v338;
        else
          v89 = (char *)&dword_8DB98;
        sub_581C8((void **)a1, v89);
      }
      if ( (_DWORD)v338 )
      {
        HIDWORD(v338) = 0;
        sub_77F70((void *)v338);
      }
      sub_5AD18(&v335);
      goto LABEL_22;
    }
  }
}
// 5EFB0: masking with 0x1 was optimized away because r7.4 <= 0x1
// 6000E: masking with 0x1 was optimized away because r7.4 <= 0x1
// 5E782: variable 'v30' is possibly undefined
// 5E922: variable 'v50' is possibly undefined
// 5E9A4: variable 'v58' is possibly undefined
// 600C8: variable 'v288' is possibly undefined
// 600C8: variable 'v289' is possibly undefined
// 5F3D0: variable 'v170' is possibly undefined
// 5F4CC: variable 'v183' is possibly undefined
// 63B54: using guessed type int __fastcall sub_63B54(_DWORD, _DWORD);
// 8DB98: using guessed type int dword_8DB98;
// 8DFE8: using guessed type char byte_8DFE8;
// D0FE4: using guessed type char *off_D0FE4[6];
// D4B44: using guessed type int dword_D4B44[4];
// D6C20: using guessed type char under_debugger;
