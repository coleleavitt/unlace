/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C088
// Address: 0x000000000046C088

//----- (000000000046C088) ----------------------------------------------------
__int64 *__usercall sub_46C088@<X0>(__int64 a1@<X0>, unsigned int *a2@<X1>, __int64 *a3@<X8>)
{
  int v6; // w22
  void *v7; // x0
  __int64 v8; // x24
  void *v9; // x25
  __int64 v10; // x23
  void *v11; // x0
  void *v13; // x1
  char *v14; // x0
  unsigned int v16; // w0
  char *v17; // x24
  char *v18; // x0
  int v20; // w26
  signed int v21; // w25
  FILE *v22; // x0
  __int64 v23; // x23
  unsigned __int8 *v24; // x25
  unsigned __int8 *v25; // x0
  unsigned __int8 *v28; // x0
  char *v30; // x0
  bool v32; // w2
  char *v33; // x0
  __int64 v34; // x3
  int v35; // w27
  void *v36; // x0
  __int64 v37; // x23
  unsigned __int64 v38; // x24
  char *v39; // x0
  __int64 v41; // x2
  unsigned int v42; // w23
  void *v43; // x0
  unsigned int v44; // w24
  unsigned int v45; // w25
  unsigned int v46; // w23
  unsigned __int8 *v47; // x1
  __int64 v48; // x0
  int v49; // w24
  void (*v50)(void); // x4
  __int64 v51; // x0
  unsigned int v52; // w28
  char *v53; // x0
  __int64 v54; // x25
  __int64 v55; // x24
  char *v56; // x1
  void *v57; // x0
  __int64 v58; // x2
  unsigned int v59; // w23
  unsigned int v60; // w0
  signed int v61; // w24
  const char *v62; // x0
  unsigned int v63; // w24
  unsigned int v64; // w24
  __int64 v65; // x0
  __int64 v66; // x4
  __int64 v67; // x25
  __int64 (*v68)(); // x3
  int v69; // w23
  unsigned int v70; // w26
  int v71; // w24
  __int64 v72; // x0
  __int64 v73; // x23
  __int64 v74; // x24
  char *v75; // x0
  __int64 v76; // x25
  __int64 v77; // x24
  __int64 v78; // x23
  char *v79; // x1
  void *v80; // x0
  unsigned int v81; // w0
  unsigned int v82; // w23
  __int64 v83; // x25
  FILE *v84; // x24
  int v85; // w0
  unsigned int v86; // w25
  _QWORD *v87; // x24
  _QWORD *v88; // x23
  void *v89; // x0
  void *v90; // x0
  unsigned int v91; // w24
  unsigned int v92; // w25
  __int64 v93; // x0
  unsigned int v94; // w23
  __int64 v95; // x3
  char *v96; // x1
  unsigned int v97; // w0
  __int64 (*v98)(); // x3
  __int64 v99; // x0
  unsigned int v100; // w25
  signed int v101; // w24
  char *v102; // x1
  unsigned int v103; // w27
  unsigned int v104; // w28
  int v105; // w0
  __int64 v106; // x1
  int v107; // w24
  int v108; // w25
  int v110; // w0
  int v111; // w1
  size_t v112; // x2
  unsigned __int64 v113; // x1
  unsigned int v114; // w23
  char *v115; // x1
  unsigned int v116; // w25
  unsigned int v117; // w26
  int v118; // w0
  void *v119; // x0
  int v120; // w0
  int v121; // w24
  __int64 v122; // x26
  char *v123; // x24
  int v124; // w0
  unsigned __int64 v125; // x1
  size_t v126; // x25
  int v127; // w0
  unsigned __int64 v128; // x1
  size_t v129; // x25
  int v130; // w0
  void **v131; // x28
  unsigned __int64 v132; // x2
  unsigned __int64 v133; // x27
  int v134; // w25
  __int64 v135; // x27
  __int64 v136; // x25
  __int64 v137; // x0
  __int64 v138; // x1
  unsigned int v139; // w0
  __int64 v140; // x7
  unsigned int v141; // w23
  char *v142; // x1
  unsigned int v143; // w23
  signed int v144; // w0
  __int64 v145; // x0
  unsigned int v146; // w24
  char *v147; // x1
  char *v148; // x0
  size_t v149; // x24
  __int64 v150; // x23
  char *v151; // x1
  void *v152; // x0
  __int64 v153; // x0
  char *v154; // x23
  __int64 v155; // x24
  char *v156; // x0
  __int64 v158; // x28
  __int64 (*v159)(); // x27
  __int64 v160; // x25
  __int64 v161; // x0
  __int64 v162; // x4
  __int64 v163; // x24
  signed int v164; // w25
  unsigned int v165; // w23
  __int64 (*v166)(); // x3
  void *v167; // x24
  unsigned int v168; // w26
  __off64_t v169; // x27
  unsigned int v170; // w0
  unsigned int v171; // w24
  void *v172; // x25
  unsigned int v173; // w23
  int *v174; // x0
  unsigned int v175; // w25
  __off64_t v176; // x26
  int v177; // w0
  unsigned int v178; // w23
  size_t v179; // x28
  __int64 v180; // x27
  void *v181; // x24
  unsigned int v182; // w27
  unsigned int v183; // w1
  int *v184; // x0
  __int64 v185; // x26
  size_t v186; // x25
  unsigned __int8 *v187; // x24
  __int64 v188; // x0
  __int64 v189; // x23
  __int64 v190; // x27
  size_t v191; // x24
  unsigned __int8 *v192; // x25
  __int64 v193; // x0
  __int64 v194; // x26
  _BOOL4 v195; // w23
  _BOOL4 v196; // w0
  char *v197; // x1
  unsigned int v198; // w0
  unsigned int v199; // w28
  int v200; // w25
  void **p_ptr; // x2
  __int64 v202; // x0
  __int64 v203; // x23
  int v204; // w0
  void *v205; // x0
  void *v206; // x0
  __int64 v207; // x24
  __int64 v208; // x0
  unsigned __int64 v209; // x1
  int v210; // w0
  _BOOL4 v211; // w24
  char *v212; // x1
  char *v213; // x0
  char *v215; // x1
  char *v216; // x0
  __int64 v218; // x3
  unsigned int v219; // w23
  char *v220; // x1
  unsigned int v221; // w24
  __int64 v222; // x25
  unsigned int v223; // w26
  unsigned int v224; // w24
  __int64 v225; // x0
  __int64 v226; // x4
  __int64 v227; // x25
  unsigned int v228; // w23
  char *v229; // x1
  char *v230; // x1
  bool v231; // zf
  signed int v233; // w24
  __int64 v234; // x1
  char *v235; // x0
  char *v236; // x28
  void *v237; // x0
  char *v238; // x0
  unsigned __int64 v239; // x1
  __int64 v240; // x1
  char *v241; // x0
  __int64 v242; // x5
  size_t v243; // x28
  __int64 v244; // x23
  void *v245; // x2
  void *v246; // x2
  signed int v247; // w0
  char *v248; // x3
  char *v249; // x4
  char *v250; // x5
  char *v251; // x1
  char *v252; // x1
  int *v253; // x0
  char *v254; // x1
  __int64 v255; // x1
  int v256; // w27
  _BOOL4 v257; // w0
  bool v258; // zf
  FILE *v259; // x0
  int v260; // w26
  int i; // w24
  char *v262; // x25
  char *v263; // x1
  __int64 v264; // x0
  unsigned int v265; // w23
  int v266; // w0
  size_t v267; // x27
  unsigned int v268; // w23
  int v269; // w0
  __int64 v270; // x0
  __int64 v271; // x24
  __int64 v272; // x25
  unsigned int v273; // w24
  __int64 v274; // x1
  char *v275; // x3
  char *v276; // x1
  size_t v277; // x0
  _BYTE *v278; // x27
  size_t v279; // x0
  char *v280; // x4
  signed __int64 v281; // x27
  __int64 v282; // x27
  const char *v283; // x28
  void *v284; // x0
  __int64 v285; // [xsp+0h] [xbp-31C0h]
  char *v286; // [xsp+70h] [xbp-3150h]
  void *v287; // [xsp+70h] [xbp-3150h]
  char *v288; // [xsp+70h] [xbp-3150h]
  __int64 v289; // [xsp+78h] [xbp-3148h]
  unsigned int v290; // [xsp+78h] [xbp-3148h]
  __int64 v291; // [xsp+78h] [xbp-3148h]
  __int64 v292; // [xsp+78h] [xbp-3148h]
  int v293; // [xsp+80h] [xbp-3140h]
  __int64 v294; // [xsp+80h] [xbp-3140h]
  __int64 v295; // [xsp+80h] [xbp-3140h]
  unsigned __int64 v296; // [xsp+80h] [xbp-3140h]
  char *v297; // [xsp+80h] [xbp-3140h]
  __int64 v298; // [xsp+88h] [xbp-3138h]
  char *v299; // [xsp+88h] [xbp-3138h]
  void *v300; // [xsp+90h] [xbp-3130h]
  char *v301; // [xsp+90h] [xbp-3130h]
  void *v302; // [xsp+98h] [xbp-3128h]
  void *v303; // [xsp+A0h] [xbp-3120h]
  unsigned int v304; // [xsp+A8h] [xbp-3118h]
  unsigned int v305; // [xsp+ACh] [xbp-3114h]
  void *src; // [xsp+B8h] [xbp-3108h] BYREF
  char *v307; // [xsp+C0h] [xbp-3100h]
  __int64 v308; // [xsp+C8h] [xbp-30F8h] BYREF
  __int64 v309; // [xsp+D0h] [xbp-30F0h]
  void *v310; // [xsp+D8h] [xbp-30E8h] BYREF
  __int64 v311; // [xsp+E0h] [xbp-30E0h]
  __int64 v312; // [xsp+E8h] [xbp-30D8h]
  void *ptr; // [xsp+F0h] [xbp-30D0h] BYREF
  __int64 v314; // [xsp+F8h] [xbp-30C8h]
  __int64 v315; // [xsp+100h] [xbp-30C0h]
  void *v316; // [xsp+108h] [xbp-30B8h] BYREF
  size_t v317; // [xsp+110h] [xbp-30B0h]
  unsigned __int64 v318; // [xsp+118h] [xbp-30A8h]
  void *v319; // [xsp+120h] [xbp-30A0h] BYREF
  __int64 v320; // [xsp+128h] [xbp-3098h]
  unsigned __int64 v321; // [xsp+130h] [xbp-3090h]
  __int64 v322; // [xsp+138h] [xbp-3088h]
  void *v323; // [xsp+140h] [xbp-3080h]
  __int64 v324; // [xsp+148h] [xbp-3078h]
  __int64 v325; // [xsp+150h] [xbp-3070h]
  __int64 v326; // [xsp+158h] [xbp-3068h]
  __int64 v327; // [xsp+160h] [xbp-3060h]
  int v328; // [xsp+168h] [xbp-3058h]
  __int64 v329; // [xsp+170h] [xbp-3050h] BYREF
  void *v330; // [xsp+178h] [xbp-3048h] BYREF
  unsigned __int64 v331; // [xsp+180h] [xbp-3040h]
  __int64 v332; // [xsp+188h] [xbp-3038h]
  __int64 v333; // [xsp+190h] [xbp-3030h]
  __int64 v334; // [xsp+198h] [xbp-3028h]
  __int64 v335; // [xsp+1A0h] [xbp-3020h]
  __int64 v336; // [xsp+1A8h] [xbp-3018h]
  __int64 v337; // [xsp+1B0h] [xbp-3010h]
  unsigned __int8 v338[136]; // [xsp+1B8h] [xbp-3008h] BYREF
  char v339[4096]; // [xsp+11B8h] [xbp-2008h] BYREF
  char v340[4096]; // [xsp+21B8h] [xbp-1008h] BYREF

  v6 = *(unsigned __int8 *)(a1 + 289);
  *(_BYTE *)(a1 + 289) = 0;
  src = (char *)a2 + 5;
  v307 = (char *)a2 + *a2 + 5;
  sub_479010(0, a3);
  switch ( *((_BYTE *)a2 + 4) )
  {
    case 5:
      goto LABEL_186;
    case 0xA:
      v207 = *(_QWORD *)(a1 + 440);
      v208 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v209 = (unsigned __int64)v307;
      *(_QWORD *)(v207 + 800) = v208;
      v210 = sub_48E5A8((unsigned __int8 **)&src, v209);
      v211 = v210 != 0;
      if ( v210 )
        *(_BYTE *)(a1 + 184) = 1;
      v212 = (char *)src;
      if ( src >= v307 )
        goto LABEL_320;
      v213 = (char *)src + 1;
      if ( !*(_BYTE *)src )
        goto LABEL_406;
      do
      {
        if ( v307 == v213 )
        {
LABEL_320:
          v212 = nullptr;
          goto LABEL_321;
        }
      }
      while ( *v213++ );
LABEL_406:
      src = v213;
LABEL_321:
      sub_466FE8(*(_QWORD *)(a1 + 440) + 808LL, v212);
      v215 = (char *)src;
      if ( src >= v307 )
        goto LABEL_326;
      v216 = (char *)src + 1;
      if ( *(_BYTE *)src )
      {
        while ( v307 != v216 )
        {
          if ( !*v216++ )
            goto LABEL_408;
        }
LABEL_326:
        v215 = nullptr;
      }
      else
      {
LABEL_408:
        src = v216;
      }
      sub_466FE8(*(_QWORD *)(a1 + 440) + 832LL, v215);
      *(_DWORD *)(*(_QWORD *)(a1 + 440) + 856LL) = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      (*(void (__fastcall **)(_QWORD, _BOOL4))(**(_QWORD **)(a1 + 440) + 96LL))(*(_QWORD *)(a1 + 440), v211);
      v218 = *(_QWORD *)(a1 + 440);
      v316 = nullptr;
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v219 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v218 + 104LL))(v218, &v316, &v319);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"init(debug_debugger=%d) => %d (add_debugger_flags=0x%llX)\n", v211, v219, v316);
      sub_4631C0((__int64)a3, v219);
      sub_463230((__int64)a3, (__int64)v316);
      if ( v219 == 1 )
      {
        v255 = *(_QWORD *)(a1 + 440);
        if ( *(_BYTE *)(a1 + 184) )
        {
          sub_40A690((int)"init() => idaregs.nregs %zu\n", *(_QWORD *)(v255 + 680));
          v255 = *(_QWORD *)(a1 + 440);
        }
        sub_4738F8(a3, v255 + 672);
      }
      else
      {
        v220 = (char *)&qword_4B2D48;
        if ( v320 )
          v220 = (char *)v319;
        sub_4632A0((__int64)a3, v220);
      }
      v75 = (char *)v319;
      if ( v319 )
      {
LABEL_344:
        v320 = 0;
        j__free(v75);
      }
      goto LABEL_5;
    case 0xB:
      goto LABEL_5;
    case 0xC:
      v145 = *(_QWORD *)(a1 + 440);
      v316 = nullptr;
      v317 = 0;
      v318 = 0;
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v146 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v145 + 72LL))(v145, &v316, &v319);
      sub_4631C0((__int64)a3, v146);
      if ( v146 == 1 )
      {
        sub_46FFC8((__int64)a3, &v316);
      }
      else
      {
        v147 = (char *)&qword_4B2D48;
        if ( v320 )
          v147 = (char *)v319;
        sub_4632A0((__int64)a3, v147);
      }
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"get_processes() => %d\n", v146);
      if ( v319 )
      {
        v320 = 0;
        j__free(v319);
      }
      v148 = (char *)v316;
      if ( v316 )
      {
        v149 = v317;
        if ( v317 )
        {
          v150 = 0;
          do
          {
            v151 = &v148[32 * v150];
            v152 = *((void **)v151 + 1);
            if ( v152 )
            {
              *((_QWORD *)v151 + 2) = 0;
              j__free(v152);
            }
            ++v150;
            v148 = (char *)v316;
          }
          while ( v149 != v150 );
        }
        v317 = 0;
        j__free(v148);
      }
      goto LABEL_5;
    case 0xD:
      v300 = src;
      if ( v307 <= src )
      {
        v24 = nullptr;
        v300 = nullptr;
        v303 = nullptr;
      }
      else
      {
        v24 = (unsigned __int8 *)src + 1;
        v25 = (unsigned __int8 *)src + 1;
        if ( *(_BYTE *)src )
        {
          do
          {
            if ( v307 == (char *)v25 )
            {
              v303 = nullptr;
              goto LABEL_37;
            }
          }
          while ( *v25++ );
        }
        src = v25;
        if ( v307 > (char *)v25 )
        {
          v24 = v25 + 1;
          if ( *v25 )
          {
            v245 = v300;
            v300 = v25;
            v303 = v245;
LABEL_37:
            while ( v307 > (char *)v24 )
            {
              if ( !*v24++ )
                goto LABEL_402;
            }
            v24 = (unsigned __int8 *)src;
            v300 = nullptr;
          }
          else
          {
            v246 = v300;
            v300 = v25;
            v303 = v246;
LABEL_402:
            src = v24;
            if ( v307 <= (char *)v24 )
              goto LABEL_43;
          }
          v28 = v24 + 1;
          if ( !*v24 )
          {
LABEL_409:
            src = v28;
            goto LABEL_44;
          }
          while ( v307 > (char *)v28 )
          {
            if ( !*v28++ )
              goto LABEL_409;
          }
LABEL_43:
          v24 = nullptr;
          goto LABEL_44;
        }
        v284 = v300;
        v24 = nullptr;
        v300 = nullptr;
        v303 = v284;
      }
LABEL_44:
      v304 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v302 = src;
      if ( v307 > src )
      {
        v30 = (char *)src + 1;
        if ( !*(_BYTE *)src )
        {
LABEL_410:
          src = v30;
          goto LABEL_50;
        }
        while ( v307 != v30 )
        {
          if ( !*v30++ )
            goto LABEL_410;
        }
      }
      v302 = nullptr;
LABEL_50:
      v305 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v316 = nullptr;
      v317 = 0;
      LOBYTE(v322) = 1;
      v32 = 0;
      v33 = (char *)src;
      v318 = 0;
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      if ( v307 > src )
      {
        v33 = (char *)src + 1;
        v32 = *(_BYTE *)src != 0;
      }
      src = v33;
      LOBYTE(v322) = v32;
      v293 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      if ( v293 > 0 && v307 > src )
      {
        v34 = v320;
        v35 = 1;
        while ( 1 )
        {
          v36 = v319;
          if ( v34 + 1 > v321 )
          {
            v36 = sub_491288((__int64)&v319, v319, v34 + 1, 0x18u);
            v34 = v320;
            v319 = v36;
          }
          v37 = (__int64)v36 + 24 * v34;
          *(_QWORD *)v37 = 0;
          *(_QWORD *)(v37 + 8) = 0;
          *(_QWORD *)(v37 + 16) = 0;
          v38 = (unsigned __int64)src;
          v34 = ++v320;
          if ( v307 <= src )
            break;
          v39 = (char *)src + 1;
          if ( *(_BYTE *)src )
          {
            while ( v307 != v39 )
            {
              if ( !*v39++ )
                goto LABEL_367;
            }
            if ( v293 <= v35 )
              break;
            ++v35;
          }
          else
          {
LABEL_367:
            src = v39;
            if ( v38 )
            {
              v234 = *(_QWORD *)(v37 + 8);
              v235 = &v39[~v38];
              v286 = v235;
              if ( v234 )
              {
                v291 = v234 - 1;
                v236 = &v235[v234 - 1];
              }
              else
              {
                v236 = v235;
                v291 = 0;
              }
              v237 = *(void **)v37;
              if ( v236 != (char *)-1LL )
              {
                v237 = sub_491288(v37, *(void **)v37, (unsigned __int64)(v236 + 1), 1u);
                *(_QWORD *)v37 = v237;
              }
              *(_QWORD *)(v37 + 8) = v236 + 1;
              v236[(_QWORD)v237] = 0;
              memmove((void *)(*(_QWORD *)v37 + v291), (const void *)v38, (size_t)v286);
            }
            if ( v293 <= v35 || src >= v307 )
              break;
            v34 = v320;
            ++v35;
          }
        }
      }
      if ( v303 )
        v231 = v24 == nullptr;
      else
        v231 = 1;
      if ( v231 || v302 == nullptr )
      {
        v233 = -3;
      }
      else
      {
        v247 = (*(__int64 (__fastcall **)(_QWORD, void *, void *, void **, unsigned __int8 *, _QWORD, void *, _QWORD, void **))(**(_QWORD **)(a1 + 440) + 128LL))(
                 *(_QWORD *)(a1 + 440),
                 v303,
                 v300,
                 &v319,
                 v24,
                 v304,
                 v302,
                 v305,
                 &v316);
        v233 = v247;
        if ( *(_BYTE *)(a1 + 184) )
        {
          v248 = " is_dll";
          if ( (v304 & 1) == 0 )
            v248 = &byte_4B31F0;
          v249 = " under_gui";
          if ( (v304 & 2) == 0 )
            v249 = &byte_4B31F0;
          v250 = " hide_window";
          if ( (v304 & 0x20) == 0 )
            v250 = &byte_4B31F0;
          LODWORD(v285) = v305;
          sub_40A690(
            (int)"start_process(path=%s args=%s flags=%s%s%s\n"
                 "              sdir=%s\n"
                 "              input=%s crc32=%x) => %d\n",
            v303,
            v300,
            v248,
            v249,
            v250,
            v24,
            v302,
            v285,
            v247);
        }
      }
      sub_465BD8(a1, (__int64)a3, v233, (__int64)&v316);
      sub_40CB60((char **)&v319);
      if ( v316 )
      {
        v317 = 0;
        j__free(v316);
      }
LABEL_5:
      if ( v6 )
LABEL_6:
        *(_BYTE *)(a1 + 289) = 1;
      return a3;
    case 0xE:
      v41 = *(_QWORD *)(a1 + 440);
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v42 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v41 + 160LL))(v41, &v319);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"exit_process() => %d\n", v42);
      sub_4631C0((__int64)a3, v42);
      if ( (v42 & 0x80000000) != 0 )
      {
        v251 = (char *)&qword_4B2D48;
        if ( v320 )
          v251 = (char *)v319;
        sub_4632A0((__int64)a3, v251);
      }
      v43 = v319;
      if ( v319 )
        goto LABEL_68;
      goto LABEL_5;
    case 0xF:
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v144 = sub_465B10(a1, (__int64)&v319, (__int64)&src);
      sub_465BD8(a1, (__int64)a3, v144, (__int64)&v319);
      v75 = (char *)v319;
      if ( v319 )
        goto LABEL_344;
      goto LABEL_5;
    case 0x10:
      v143 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 120LL))(*(_QWORD *)(a1 + 440));
      sub_4631C0((__int64)a3, v143);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"detach_process() => %d\n", v143);
      goto LABEL_5;
    case 0x11:
      v60 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      if ( *(_BYTE *)(a1 + 288) )
      {
        sub_4631C0((__int64)a3, 0);
      }
      else
      {
        v61 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 440) + 136LL))(
                *(_QWORD *)(a1 + 440),
                a1 + 296,
                v60);
        sub_4631C0((__int64)a3, v61);
        if ( v61 > 0 )
        {
          sub_470FA8((__int64)a3, a1 + 296);
          if ( *(_BYTE *)(a1 + 184) )
          {
            v62 = sub_45D348(a1 + 296, v340, 0x400u);
            sub_40A690((int)"got event: %s\n", v62);
          }
          goto LABEL_5;
        }
      }
      if ( *(_BYTE *)(a1 + 288) )
        goto LABEL_5;
      goto LABEL_6;
    case 0x12:
      v58 = *(_QWORD *)(a1 + 440);
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v59 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v58 + 152LL))(v58, &v319);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"prepare_to_pause_process() => %d\n", v59);
      sub_4631C0((__int64)a3, v59);
      if ( (v59 & 0x80000000) != 0 )
      {
        v252 = (char *)&qword_4B2D48;
        if ( v320 )
          v252 = (char *)v319;
        sub_4632A0((__int64)a3, v252);
      }
      v43 = v319;
      if ( v319 )
      {
LABEL_68:
        v320 = 0;
        j__free(v43);
      }
      goto LABEL_5;
    case 0x13:
      v47 = (unsigned __int8 *)src;
      v48 = *(_QWORD *)(a1 + 440);
      if ( v307 <= src )
        goto LABEL_394;
      src = (char *)src + 1;
      if ( v307 <= src )
      {
        ++v47;
LABEL_394:
        src = v47;
        v49 = 0;
        v316 = nullptr;
        v317 = 0;
        v318 = 0;
        v319 = nullptr;
        v320 = 0;
        v321 = 0;
        v50 = *(void (**)(void))(*(_QWORD *)v48 + 192LL);
      }
      else
      {
        v49 = v47[1];
        src = v47 + 2;
        v316 = nullptr;
        v317 = 0;
        v318 = 0;
        v319 = nullptr;
        v320 = 0;
        v321 = 0;
        v50 = *(void (**)(void))(*(_QWORD *)v48 + 192LL);
      }
      v50();
      sub_4666F8(a1, (__int64)&v316);
      v51 = sub_45D728(*(_QWORD *)(a1 + 440));
      if ( v51 )
      {
        v52 = sub_466060(a1, *(__int64 **)v51, *(char ***)(v51 + 24), *(_DWORD *)(v51 + 8));
        sub_45D788(*(_QWORD **)(a1 + 440));
      }
      else
      {
        v52 = 0;
      }
      if ( v49 )
      {
        v260 = v320;
        sub_4631C0((__int64)a3, v320);
        if ( v260 )
        {
          for ( i = 0; i != v260; ++i )
          {
            v262 = (char *)v319 + 32 * i;
            sub_4631C0((__int64)a3, *(_DWORD *)v262);
            v263 = (char *)&qword_4B2D48;
            if ( *((_QWORD *)v262 + 2) )
              v263 = *((char **)v262 + 1);
            sub_4632A0((__int64)a3, v263);
          }
        }
      }
      if ( *(_BYTE *)(a1 + 184) )
      {
        if ( v52 > 0x38 || !off_51AFC8[v52] )
          sub_49B748((const char *)qword_522380, 0x10u, "RPC_%d", v52);
        sub_40A690((int)"stopped_at_debug_event => %s\n");
      }
      v53 = (char *)v319;
      if ( v319 )
      {
        v54 = v320;
        if ( v320 )
        {
          v55 = 0;
          do
          {
            v56 = &v53[32 * v55];
            v57 = *((void **)v56 + 1);
            if ( v57 )
            {
              *((_QWORD *)v56 + 2) = 0;
              j__free(v57);
            }
            ++v55;
            v53 = (char *)v319;
          }
          while ( v54 != v55 );
        }
        v320 = 0;
        j__free(v53);
      }
      sub_4683B0((char **)&v316);
      goto LABEL_5;
    case 0x14:
      sub_470CF0(a1 + 296, (__int64)&src);
      v46 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 168LL))(
              *(_QWORD *)(a1 + 440),
              a1 + 296);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"continue_after_event(...) => %d\n", v46);
      goto LABEL_71;
    case 0x15:
      v64 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 200LL))(*(_QWORD *)(a1 + 440), v64);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"thread_suspend(tid=%d) => %d\n", v64, v46);
      goto LABEL_71;
    case 0x16:
      v63 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 208LL))(*(_QWORD *)(a1 + 440), v63);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"thread_continue(tid=%d) => %d\n", v63, v46);
      goto LABEL_71;
    case 0x17:
      v44 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v45 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 216LL))(
              *(_QWORD *)(a1 + 440),
              v44,
              v45);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"set_resume_mode(tid=%d, resmod=%d) => %d\n", v44, v45, v46);
      goto LABEL_71;
    case 0x18:
      v99 = *(_QWORD *)(a1 + 440);
      v316 = nullptr;
      v317 = 0;
      v318 = 0;
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v100 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v99 + 256LL))(v99, &v316, &v319);
      v101 = v317;
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"get_memory_info() => %d (qty=%d)\n", v100, (unsigned int)v317);
      sub_4631C0((__int64)a3, v100 + 4);
      if ( v100 == 1 )
      {
        sub_4631C0((__int64)a3, v101);
        if ( v101 > 0 )
        {
          v270 = (unsigned int)(v101 - 1);
          v271 = 0;
          v272 = 80 * (v270 + 1);
          do
          {
            sub_46F568((__int64)a3, (__int64)v316 + v271);
            v271 += 80;
          }
          while ( v272 != v271 );
        }
      }
      else
      {
        v102 = (char *)&qword_4B2D48;
        if ( v320 )
          v102 = (char *)v319;
        sub_4632A0((__int64)a3, v102);
      }
      if ( v319 )
      {
        v320 = 0;
        j__free(v319);
      }
      sub_40CBD0((char **)&v316);
      goto LABEL_5;
    case 0x19:
      v190 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307) - 1;
      v191 = (unsigned int)sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v192 = (unsigned __int8 *)sub_49ECD8(v191);
      v193 = *(_QWORD *)(a1 + 440);
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v194 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, size_t, void **))(*(_QWORD *)v193 + 288LL))(
               v193,
               v190,
               v192,
               v191,
               &v319);
      if ( *(_BYTE *)(a1 + 184) )
      {
        sub_40A690((int)"read_memory(ea=%a size=%zu) => %zd", v190, v191, v194);
        v256 = *(unsigned __int8 *)(a1 + 184);
        v195 = v194 > 0;
        v257 = v191 == 1 && v194 > 0;
        if ( v257 )
        {
          if ( *(_BYTE *)(a1 + 184) )
          {
            sub_40A690((int)" (0x%02X)\n", *v192);
            v195 = v256;
          }
          else
          {
            v195 = v257;
          }
        }
        else if ( *(_BYTE *)(a1 + 184) )
        {
          sub_40A690((int)&byte_4C77D8);
        }
      }
      else
      {
        v195 = v194 > 0;
        v196 = v191 == 1 && v194 > 0;
        if ( v196 )
          v195 = v196;
      }
      sub_4631C0((__int64)a3, v194);
      if ( v195 )
      {
        sub_4630F0((__int64)a3, v192, v194);
      }
      else
      {
        v197 = (char *)&qword_4B2D48;
        if ( v320 )
          v197 = (char *)v319;
        sub_4632A0((__int64)a3, v197);
      }
      if ( v192 )
        j_j__free_0_1(v192);
      v75 = (char *)v319;
      if ( v319 )
        goto LABEL_344;
      goto LABEL_5;
    case 0x1A:
      v185 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307) - 1;
      v186 = (unsigned int)sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v187 = (unsigned __int8 *)sub_49ECD8(v186);
      sub_463390((__int64)&src, v187, v186);
      v319 = nullptr;
      v320 = 0;
      v188 = *(_QWORD *)(a1 + 440);
      v321 = 0;
      v189 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, size_t, void **))(*(_QWORD *)v188 + 296LL))(
               v188,
               v185,
               v187,
               v186,
               &v319);
      if ( *(_BYTE *)(a1 + 184) )
      {
        sub_40A690((int)"write_memory(ea=%a size=%zu) => %zd", v185, v186, v189);
        if ( v189 )
          v258 = v186 == 1;
        else
          v258 = 0;
        if ( v258 )
        {
          if ( *(_BYTE *)(a1 + 184) )
            sub_40A690((int)" (0x%02X)\n", *v187);
        }
        else if ( *(_BYTE *)(a1 + 184) )
        {
          sub_40A690((int)&byte_4C77D8);
        }
      }
      sub_4631C0((__int64)a3, v189);
      if ( v189 <= 0 )
      {
        v230 = (char *)&qword_4B2D48;
        if ( v320 )
          v230 = (char *)v319;
        sub_4632A0((__int64)a3, v230);
      }
      if ( v187 )
        j_j__free_0_1(v187);
      v75 = (char *)v319;
      if ( v319 )
        goto LABEL_344;
      goto LABEL_5;
    case 0x1B:
      if ( !(unsigned int)sub_469A10(a1, (__int64)a3, (__int64)&src) && *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"rpc_update_bpts failed!\n");
      goto LABEL_5;
    case 0x1C:
      sub_468968(a1, (__int64)a3, (__int64)&src);
      goto LABEL_5;
    case 0x1D:
      v224 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v225 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v226 = *(_QWORD *)(a1 + 440);
      v227 = v225 - 1;
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v228 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, void **))(*(_QWORD *)v226 + 360LL))(
               v226,
               v224,
               v225 - 1,
               &v319);
      sub_4631C0((__int64)a3, v228);
      if ( v228 != 1 )
      {
        v229 = (char *)&qword_4B2D48;
        if ( v320 )
          v229 = (char *)v319;
        sub_4632A0((__int64)a3, v229);
      }
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"eval_lowcnd(tid=%d, ea=%a) => %d\n", v224, v227, v228);
      v75 = (char *)v319;
      if ( v319 )
        goto LABEL_344;
      goto LABEL_5;
    case 0x1E:
      v221 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v222 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307) - 1;
      v223 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307) - 1;
      v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 440) + 304LL))(
              *(_QWORD *)(a1 + 440),
              v221,
              v222,
              v223);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"isok_bpt(type=%d ea=%a len=%d) => %d\n", v221, v222, v223, v46);
LABEL_71:
      sub_4631C0((__int64)a3, v46);
      goto LABEL_5;
    case 0x1F:
      ptr = nullptr;
      v314 = 0;
      v315 = 0;
      v316 = nullptr;
      v317 = 0;
      v318 = 0;
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v103 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v104 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v105 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v106 = *(_QWORD *)(a1 + 440);
      v107 = v105;
      v108 = *(_QWORD *)(v106 + 680);
      if ( !*(_QWORD *)(v106 + 680) )
        v108 = *(_DWORD *)(v106 + 776);
      if ( v105 > 0 && v105 <= v108 )
      {
        v110 = v105 + 7;
        v111 = v107 + 14;
        if ( v107 + 7 >= 0 )
          v111 = v110;
        v112 = v317;
        v113 = v111 >> 3;
        if ( v113 > v317 )
        {
          sub_4684E8((__int64)&v316, v113);
          v112 = v317;
        }
        else if ( v113 < v317 )
        {
          v112 = v113;
          v317 = v113;
        }
        sub_463390((__int64)&src, v316, v112);
        sub_45E9A8((char **)&v319, v108);
        v114 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, void **))(**(_QWORD **)(a1 + 440) + 224LL))(
                 *(_QWORD *)(a1 + 440),
                 v103,
                 v104,
                 v319,
                 &ptr);
        if ( *(_BYTE *)(a1 + 184) )
          sub_40A690((int)"read_regs(tid=%d, mask=%x) => %d\n", v103, v104, v114);
        sub_4631C0((__int64)a3, v114);
        if ( v114 == 1 )
        {
          sub_4731E8((__int64)a3, (int *)v319, v107, (__int64)v316);
          goto LABEL_176;
        }
      }
      else
      {
        sub_40CD68(
          (__int64)&ptr,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v103,
          v104,
          v105,
          v108);
        sub_4631C0((__int64)a3, 0);
      }
      v115 = (char *)&qword_4B2D48;
      if ( v314 )
        v115 = (char *)ptr;
      sub_4632A0((__int64)a3, v115);
LABEL_176:
      sub_45ECD0((char **)&v319);
      if ( v316 )
      {
        v317 = 0;
        j__free(v316);
      }
      if ( ptr )
      {
        v314 = 0;
        j__free(ptr);
      }
      goto LABEL_5;
    case 0x20:
      v116 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v117 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      LODWORD(v329) = -2;
      v330 = (void *)-1LL;
      v331 = 0;
      v332 = 0;
      if ( v307 <= src )
        goto LABEL_462;
      v118 = sub_46BE08((char **)&src) - 3;
      LODWORD(v329) = v118;
      if ( v118 == -2 )
      {
        v273 = sub_46BE08((char **)&src);
        v330 = (void *)((v273 | (unsigned __int64)(sub_46BE08((char **)&src) << 32)) - 1);
      }
      else if ( v118 != -3 )
      {
        v330 = nullptr;
        v331 = 0;
        v332 = 0;
        if ( v118 < -1 )
        {
          if ( !under_debugger )
            sub_492270(3216);
          goto LABEL_185;
        }
        v266 = sub_46BE08((char **)&src);
        v267 = v266;
        if ( v266 > v331 )
        {
          sub_4684E8((__int64)&v330, v266);
        }
        else if ( v266 < v331 )
        {
          v331 = v266;
        }
        if ( v267 )
          sub_463390((__int64)&src, v330, v267);
      }
LABEL_462:
      v264 = *(_QWORD *)(a1 + 440);
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v265 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, void **))(*(_QWORD *)v264 + 232LL))(
               v264,
               v116,
               v117,
               &v329,
               &v319);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"write_reg(tid=%d) => %d\n", v116, v265);
      sub_4631C0((__int64)a3, v265);
      if ( (v265 & 0x80000000) != 0 )
      {
        v276 = (char *)&qword_4B2D48;
        if ( v320 )
          v276 = (char *)v319;
        sub_4632A0((__int64)a3, v276);
      }
      if ( v319 )
      {
        v320 = 0;
        j__free(v319);
      }
      if ( (int)v329 >= -1 && v330 )
      {
        v331 = 0;
        j__free(v330);
      }
      goto LABEL_5;
    case 0x21:
      v91 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v92 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v93 = *(_QWORD *)(a1 + 440);
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v94 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, _QWORD, void **))(*(_QWORD *)v93 + 240LL))(
              v93,
              &v316,
              v91,
              v92,
              &v319);
      if ( *(_BYTE *)(a1 + 184) )
      {
        v95 = (__int64)v316;
        if ( v94 != 1 )
          v95 = -1;
        sub_40A690((int)"get_thread_sreg_base(tid=%d, %d) => %a\n", v91, v92, v95);
      }
      sub_4631C0((__int64)a3, v94);
      if ( v94 == 1 )
      {
        sub_463230((__int64)a3, (__int64)v316 + 1);
      }
      else
      {
        v96 = (char *)&qword_4B2D48;
        if ( v320 )
          v96 = (char *)v319;
        sub_4632A0((__int64)a3, v96);
      }
      v75 = (char *)v319;
      if ( v319 )
        goto LABEL_344;
      goto LABEL_5;
    case 0x22:
      v86 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v87 = sub_4716B8(v86, (__int64)&src);
      (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 440) + 184LL))(
        *(_QWORD *)(a1 + 440),
        v87,
        v86);
      if ( v87 )
      {
        v88 = &v87[7 * *(v87 - 1)];
        while ( v87 != v88 )
        {
          v88 -= 7;
          v89 = (void *)v88[4];
          if ( v89 )
          {
            v88[5] = 0;
            j__free(v89);
          }
          v90 = (void *)v88[1];
          if ( v90 )
          {
            v88[2] = 0;
            j__free(v90);
          }
        }
        j_j_j__free_0_1(v87 - 1);
      }
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"set_exception_info(qty=%d)\n", v86);
      goto LABEL_5;
    case 0x23:
      v17 = (char *)src;
      if ( v307 <= src )
        goto LABEL_21;
      v18 = (char *)src + 1;
      if ( !*(_BYTE *)src )
        goto LABEL_405;
      do
      {
        if ( v307 == v18 )
        {
LABEL_21:
          v17 = nullptr;
          goto LABEL_22;
        }
      }
      while ( *v18++ );
LABEL_405:
      src = v18;
LABEL_22:
      v20 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v21 = sub_475A40(a1);
      if ( v21 == -1 )
        goto LABEL_25;
      if ( v20 )
      {
        v22 = sub_48DDA0(v17);
        *(_QWORD *)(a1 + 8LL * v21 + 8) = v22;
        if ( !v22 )
        {
LABEL_25:
          v21 = -1;
          v23 = 0;
          goto LABEL_26;
        }
        v23 = sub_4871C0(v22);
      }
      else
      {
        if ( sub_48F310((char *)v338, 0x1000u, v17) && !(unsigned __int8)sub_4902C8((const char *)v338) )
        {
          sub_48F988((unsigned __int64)v339, 4096, v338);
          sub_48F950(v340, 0x1000u);
          v277 = strlen(v340);
          if ( !strncmp(v339, v340, v277) )
          {
            v316 = nullptr;
            v317 = 0;
            v318 = 0;
            do
            {
              if ( (unsigned __int8)sub_4902C8(v339) )
                break;
              v278 = v316;
              sub_4672E0(&v319, v339);
              v287 = v319;
              v280 = (char *)v316;
              v279 = v317;
              v319 = nullptr;
              v292 = v320;
              v281 = v278 - (_BYTE *)v316;
              v296 = v321;
              v320 = 0;
              v321 = 0;
              if ( v317 + 1 > v318 )
              {
                v280 = (char *)sub_491288((__int64)&v316, v316, v317 + 1, 0x18u);
                v279 = v317;
                v316 = v280;
              }
              v299 = &v280[v281];
              v301 = v280;
              memmove(&v280[v281 + 24], &v280[v281], 24 * v279 - v281);
              *(_QWORD *)&v301[v281] = v287;
              *((_QWORD *)v299 + 1) = v292;
              *((_QWORD *)v299 + 2) = v296;
              ++v317;
              if ( v319 )
              {
                v320 = 0;
                j__free(v319);
              }
            }
            while ( sub_48F310(v339, 0x1000u, v339) );
            v297 = (char *)v317;
            if ( v317 )
            {
              v282 = 0;
              v288 = nullptr;
              do
              {
                v283 = (const char *)&qword_4B2D48;
                if ( *(_QWORD *)((char *)v316 + v282 + 8) )
                  v283 = *(const char **)((char *)v316 + v282);
                if ( *(_BYTE *)(a1 + 184) )
                  sub_40A690((int)"open_file() creating directory %s\n", v283);
                if ( (unsigned int)sub_490180(v283, 0x1FFu) )
                  break;
                v282 += 24;
                ++v288;
              }
              while ( v288 != v297 );
            }
            sub_40CB60((char **)&v316);
          }
        }
        v259 = sub_48DEA0(v17);
        *(_QWORD *)(a1 + 8LL * v21 + 8) = v259;
        if ( !v259 )
          goto LABEL_25;
        v23 = 0;
      }
LABEL_26:
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"open_file('%s', %d) => %d %lld\n", v17, v20 != 0, (unsigned int)v21, v23);
      sub_4631C0((__int64)a3, v21);
      if ( v21 == -1 )
      {
        v253 = __errno_location();
        sub_4631C0((__int64)a3, *v253);
      }
      else
      {
        sub_463230((__int64)a3, v23);
      }
      goto LABEL_5;
    case 0x24:
      v81 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v82 = v81;
      if ( v81 <= 0xF )
      {
        v83 = a1 + 8LL * (int)v81;
        v84 = *(FILE **)(v83 + 8);
        if ( v84 )
        {
          v85 = fileno(*(FILE **)(v83 + 8));
          fchmod(v85, 0x1EDu);
          sub_4906A0(v84);
          *(_QWORD *)(v83 + 8) = 0;
        }
      }
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"close_file(%d)\n", v82);
      goto LABEL_5;
    case 0x25:
      v175 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v176 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v177 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v178 = v177;
      if ( v177 <= 0 )
      {
        v183 = 0;
        v182 = 0;
        v181 = nullptr;
      }
      else
      {
        v179 = v177;
        v180 = a1 + 8LL * (int)v175;
        v181 = sub_49ECD8(v177);
        sub_490650(*(FILE **)(v180 + 8), v176, 0);
        v182 = sub_4904B8(*(FILE **)(v180 + 8), v181, v179);
        v183 = v182;
      }
      sub_4631C0((__int64)a3, v183);
      if ( v182 == v178 )
      {
        if ( v182 )
          sub_4630F0((__int64)a3, v181, (int)v182);
      }
      else
      {
        v184 = __errno_location();
        sub_4631C0((__int64)a3, *v184);
      }
      if ( v181 )
        j_j__free_0_1(v181);
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"read_file(%d, 0x%llX, %d) => %d\n", v175, v176, v178, v182);
      goto LABEL_5;
    case 0x26:
      v168 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v169 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v170 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v171 = v170;
      if ( v170 )
      {
        v243 = v170;
        v172 = sub_49ECD8(v170);
        v244 = a1 + 8LL * (int)v168;
        sub_463390((__int64)&src, v172, v243);
        sub_490650(*(FILE **)(v244 + 8), v169, 0);
        if ( v172 )
        {
          v173 = sub_490560(*(FILE **)(v244 + 8), v172, v243);
LABEL_260:
          sub_4631C0((__int64)a3, v171);
          if ( v173 != v171 )
          {
            v174 = __errno_location();
            sub_4631C0((__int64)a3, *v174);
          }
          if ( v172 )
            j_j__free_0_1(v172);
          if ( *(_BYTE *)(a1 + 184) )
            sub_40A690((int)"write_file(%d, 0x%llX, %u) => %u\n", v168, v169, v171, v173);
          goto LABEL_5;
        }
      }
      else
      {
        sub_490650(*(FILE **)(a1 + 8LL * (int)v168 + 8), v169, 0);
      }
      v172 = nullptr;
      v173 = 0;
      goto LABEL_260;
    case 0x27:
      v204 = sub_4783F8(a1 + 192, (__int64)a3, (unsigned __int8 *)src, (unsigned __int64)v307);
      if ( !v204 )
        goto LABEL_5;
      sub_479010(v204, (__int64 *)&v310);
      v205 = (void *)*a3;
      v9 = v310;
      v8 = v311;
      v310 = nullptr;
      v311 = 0;
      v10 = v312;
      v312 = 0;
      if ( v205 )
      {
        a3[1] = 0;
        j__free(v205);
        *a3 = (__int64)v9;
        a3[1] = v8;
        v206 = v310;
        a3[2] = v10;
        if ( v206 )
        {
          v311 = 0;
          j__free(v206);
        }
      }
      else
      {
LABEL_348:
        *a3 = (__int64)v9;
        a3[1] = v8;
        a3[2] = v10;
      }
      goto LABEL_5;
    case 0x28:
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v97 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v98 = *(__int64 (**)())(**(_QWORD **)(a1 + 440) + 416LL);
      if ( v98 == sub_407170 )
      {
        sub_4631C0((__int64)a3, 0);
      }
      else
      {
        v268 = ((__int64 (__fastcall *)(_QWORD, _QWORD, void **))v98)(*(_QWORD *)(a1 + 440), v97, &v319);
        sub_4631C0((__int64)a3, v268);
        if ( v268 == 1 )
          sub_471E58((__int64)a3, &v319);
      }
      v75 = (char *)v319;
      if ( v319 )
        goto LABEL_344;
      goto LABEL_5;
    case 0x29:
      v295 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307) - 1;
      v290 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v199 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v200 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      p_ptr = &ptr;
      v310 = nullptr;
      v311 = 0;
      v312 = 0;
      ptr = nullptr;
      v314 = 0;
      v315 = 0;
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v322 = 0;
      v323 = nullptr;
      v324 = 0;
      v325 = 0;
      if ( (v200 & 1) != 0 )
        p_ptr = nullptr;
      sub_472738((__int64)&v310, (__int64)&v319, (__int64)p_ptr, (__int64)&src);
      LOBYTE(v331) = 0;
      HIDWORD(v331) = 0;
      v332 = 0;
      v333 = 0;
      v329 = 0xFFFFFFFFLL;
      v330 = (void *)-1LL;
      v202 = *(_QWORD *)(a1 + 440);
      v334 = 0;
      v335 = 0;
      v336 = 0;
      v337 = 0;
      v316 = nullptr;
      v317 = 0;
      v318 = 0;
      v203 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, void **, void **, void **, void **, __int64 *, int))(*(_QWORD *)v202 + 424LL))(
               v202,
               v295,
               v290,
               v199,
               &v310,
               &v319,
               &ptr,
               &v316,
               &v329,
               v200);
      sub_463230((__int64)a3, v203 + 1);
      if ( v203 == -1 )
      {
        if ( (v200 & 2) != 0 )
          sub_470FA8((__int64)a3, (__int64)&v329);
        v254 = (char *)&qword_4B2D48;
        if ( v317 )
          v254 = (char *)v316;
        sub_4632A0((__int64)a3, v254);
      }
      else if ( (v200 & 1) == 0 )
      {
        sub_4728E0((__int64)a3, (__int64)&ptr, 1u);
      }
      sub_482ED0((__int64)&v329);
      if ( v316 )
      {
        v317 = 0;
        j__free(v316);
      }
      if ( v323 )
      {
        v324 = 0;
        j__free(v323);
      }
      if ( v319 )
      {
        v320 = 0;
        j__free(v319);
      }
      sub_468440((char **)&ptr);
      sub_468440((char **)&v310);
      goto LABEL_5;
    case 0x2A:
      v198 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 432LL))(*(_QWORD *)(a1 + 440), v198);
      goto LABEL_296;
    case 0x2B:
      v13 = src;
      if ( v307 <= src )
        goto LABEL_14;
      v14 = (char *)src + 1;
      if ( !*(_BYTE *)src )
        goto LABEL_407;
      do
      {
        if ( v307 == v14 )
        {
LABEL_14:
          v13 = nullptr;
          goto LABEL_15;
        }
      }
      while ( *v14++ );
LABEL_407:
      src = v14;
LABEL_15:
      v16 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 440) + 536LL))(*(_QWORD *)(a1 + 440), v13);
LABEL_296:
      sub_4631C0((__int64)a3, v16);
      goto LABEL_5;
    case 0x2C:
      v65 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v66 = *(_QWORD *)(a1 + 440);
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v67 = v65 - 1;
      v68 = *(__int64 (**)())(*(_QWORD *)v66 + 264LL);
      if ( v68 == sub_407120 )
      {
        v69 = 0;
        v70 = 0;
        v71 = -1;
      }
      else
      {
        v269 = ((__int64 (__fastcall *)(__int64, void **, __int64))v68)(v66, &v319, v65 - 1);
        v70 = v320;
        v71 = v269;
        v69 = v320;
      }
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"get_scattered_image(base=%a) => %d (qty=%d)\n", v67, (unsigned int)v71, (unsigned int)v69);
      sub_4631C0((__int64)a3, v71 + 2);
      if ( v71 > 0 )
      {
        sub_4631C0((__int64)a3, v70);
        if ( v69 > 0 )
        {
          v72 = (unsigned int)(v69 - 1);
          v73 = 0;
          v74 = 40 * (v72 + 1);
          do
          {
            sub_46FC38((__int64)a3, (char *)v319 + v73);
            v73 += 40;
          }
          while ( v74 != v73 );
        }
      }
      v75 = (char *)v319;
      if ( !v319 )
        goto LABEL_5;
      v76 = v320;
      if ( v320 )
      {
        v77 = 0;
        v78 = 0;
        do
        {
          v79 = &v75[v77];
          v80 = *(void **)&v75[v77 + 16];
          if ( v80 )
          {
            *((_QWORD *)v79 + 3) = 0;
            j__free(v80);
          }
          ++v78;
          v77 += 40;
          v75 = (char *)v319;
        }
        while ( v76 != v78 );
      }
      goto LABEL_344;
    case 0x2D:
      v161 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v162 = *(_QWORD *)(a1 + 440);
      v319 = nullptr;
      v320 = 0;
      v321 = 0;
      v163 = v161 - 1;
      v164 = 0;
      v165 = 0;
      v166 = *(__int64 (**)())(*(_QWORD *)v162 + 272LL);
      if ( v166 != sub_407128 )
      {
        v165 = ((unsigned __int8 (__fastcall *)(__int64, void **, __int64))v166)(v162, &v319, v161 - 1);
        v164 = v320;
      }
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"get_image_uuid(base=%a) => %d (size=%d)\n", v163, v165, (unsigned int)v164);
      sub_4631C0((__int64)a3, v165);
      v167 = v319;
      if ( !v165 )
        goto LABEL_255;
      if ( (unsigned __int64)v164 <= 0xFFFFFFFF )
      {
        sub_4631C0((__int64)a3, v164);
        if ( v164 )
          sub_4630F0((__int64)a3, v167, v164);
        v167 = v319;
LABEL_255:
        if ( v167 )
        {
          v320 = 0;
          j__free(v167);
        }
      }
      else
      {
        if ( !under_debugger )
          sub_492270(5);
LABEL_185:
        __break(0x3E8u);
LABEL_186:
        v119 = (void *)*a3;
        if ( *a3 )
        {
          a3[1] = 0;
          j__free(v119);
          *a3 = 0;
          a3[2] = 0;
        }
      }
      goto LABEL_5;
    case 0x2E:
      v153 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v154 = (char *)src;
      v155 = v153 - 1;
      if ( v307 <= src )
        goto LABEL_242;
      v156 = (char *)src + 1;
      if ( !*(_BYTE *)src )
        goto LABEL_404;
      do
      {
        if ( v307 == v156 )
        {
LABEL_242:
          v154 = nullptr;
          goto LABEL_243;
        }
      }
      while ( *v156++ );
LABEL_404:
      src = v156;
LABEL_243:
      v158 = *(_QWORD *)(a1 + 440);
      v159 = *(__int64 (**)())(*(_QWORD *)v158 + 280LL);
      sub_4672E0(&v319, v154);
      v160 = -1;
      if ( v159 != sub_407130 )
        v160 = ((__int64 (__fastcall *)(__int64, __int64, void **))v159)(v158, v155, &v319);
      if ( v319 )
      {
        v320 = 0;
        j__free(v319);
      }
      if ( *(_BYTE *)(a1 + 184) )
        sub_40A690((int)"get_segm_start(base=%a, segname=%s) => %a\n", v155, v154, v160);
      sub_463230((__int64)a3, v160 + 1);
      goto LABEL_5;
    case 0x2F:
      v294 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307) - 1;
      v298 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307) - 1;
      v120 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      ptr = nullptr;
      v314 = 0;
      v315 = 0;
      v121 = v120;
      if ( v120 )
      {
        v319 = nullptr;
        v320 = 0;
        v321 = 0;
        v322 = 0;
        v323 = nullptr;
        v324 = 0;
        v325 = 0;
        v326 = 0;
        v327 = 0;
        v328 = -1;
        sub_46BEE8((__int64)&ptr, v120, (__int64)&v319);
        sub_4684A0((__int64)&v319);
        if ( v121 > 0 )
        {
          v122 = 0;
          v289 = 80 * ((unsigned int)(v121 - 1) + 1LL);
          do
          {
            v123 = (char *)ptr + v122;
            v124 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
            if ( v124 )
            {
              v125 = *((_QWORD *)v123 + 1);
              v126 = v124;
              if ( v124 > v125 )
              {
                sub_4684E8((__int64)v123, v124);
              }
              else if ( v124 < v125 )
              {
                *((_QWORD *)v123 + 1) = v124;
              }
              sub_463390((__int64)&src, *(void **)v123, v126);
            }
            v127 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
            if ( v127 )
            {
              v128 = *((_QWORD *)v123 + 4);
              v129 = v127;
              if ( v127 > v128 )
              {
                sub_4684E8((__int64)(v123 + 24), v127);
              }
              else if ( v127 < v128 )
              {
                *((_QWORD *)v123 + 4) = v127;
              }
              sub_463390((__int64)&src, *((void **)v123 + 3), v129);
            }
            v130 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
            v131 = (void **)(v123 + 48);
            v132 = *((_QWORD *)v123 + 7);
            v133 = v130;
            v134 = v130;
            if ( v130 != v132 )
            {
              v308 = 0;
              v309 = 0;
              if ( v130 >= v132 )
              {
                if ( v130 > v132 )
                {
                  v238 = *((char **)v123 + 6);
                  v239 = *((_QWORD *)v123 + 8);
                  if ( v238 <= (char *)&v308 && &v308 < (__int64 *)&v238[16 * v239] )
                  {
                    if ( v133 <= v239
                      || (v238 = (char *)sub_491288((__int64)(v123 + 48), *((void **)v123 + 6), v133, 0x10u),
                          *((_QWORD *)v123 + 6) = v238,
                          v132 = *((_QWORD *)v123 + 7),
                          v133 > v132) )
                    {
                      v274 = 16 * v132;
                      while ( 1 )
                      {
                        v275 = &v238[v274];
                        *(_QWORD *)&v238[v274] = 0;
                        ++v132;
                        v274 += 16;
                        *((_QWORD *)v275 + 1) = 0;
                        if ( v133 <= v132 )
                          break;
                        v238 = (char *)*v131;
                      }
                      *((_QWORD *)v123 + 7) = v133;
                    }
                    else
                    {
                      *((_QWORD *)v123 + 7) = v133;
                    }
                  }
                  else if ( v133 <= v239
                         || (v238 = (char *)sub_491288((__int64)(v123 + 48), *((void **)v123 + 6), v133, 0x10u),
                             *((_QWORD *)v123 + 6) = v238,
                             v132 = *((_QWORD *)v123 + 7),
                             v133 > v132) )
                  {
                    v240 = 16 * v132;
                    while ( 1 )
                    {
                      v241 = &v238[v240];
                      ++v132;
                      v242 = v309;
                      *(_QWORD *)v241 = v308;
                      *((_QWORD *)v241 + 1) = v242;
                      v240 += 16;
                      if ( v133 <= v132 )
                        break;
                      v238 = (char *)*v131;
                    }
                    *((_QWORD *)v123 + 7) = v133;
                  }
                  else
                  {
                    *((_QWORD *)v123 + 7) = v133;
                  }
                }
              }
              else
              {
                *((_QWORD *)v123 + 7) = v130;
              }
            }
            if ( v134 > 0 )
            {
              v135 = 0;
              v136 = 16 * ((unsigned int)(v134 - 1) + 1LL);
              do
              {
                *(_QWORD *)(*((_QWORD *)v123 + 6) + v135) = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307)
                                                          - 1;
                v137 = sub_48E6E8((unsigned __int8 **)&src, (unsigned __int64)v307);
                v138 = *((_QWORD *)v123 + 6) + v135;
                v135 += 16;
                *(_QWORD *)(v138 + 8) = v137 - 1;
              }
              while ( v136 != v135 );
            }
            *((_DWORD *)v123 + 18) = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
            v122 += 80;
          }
          while ( v289 != v122 );
        }
      }
      v139 = sub_48E5A8((unsigned __int8 **)&src, (unsigned __int64)v307);
      v140 = *(_QWORD *)(a1 + 440);
      v316 = nullptr;
      v317 = 0;
      v318 = 0;
      v141 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64, void **, _QWORD, void **))(*(_QWORD *)v140 + 576LL))(
               v140,
               &v310,
               v294,
               v298,
               &ptr,
               v139,
               &v316);
      sub_4631C0((__int64)a3, v141);
      if ( v141 == 1 )
      {
        sub_463230((__int64)a3, (__int64)v310 + 1);
      }
      else if ( v141 != -1 )
      {
        v142 = (char *)&qword_4B2D48;
        if ( v317 )
          v142 = (char *)v316;
        sub_4632A0((__int64)a3, v142);
      }
      if ( v316 )
      {
        v317 = 0;
        j__free(v316);
      }
      sub_467370((char **)&ptr);
      goto LABEL_5;
    case 0x30:
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 440) + 680LL) )
      {
        sub_4631C0((__int64)a3, 1u);
        sub_4738F8(a3, *(_QWORD *)(a1 + 440) + 672LL);
      }
      else
      {
        sub_4631C0((__int64)a3, 0);
      }
      goto LABEL_5;
    default:
      sub_479010(1, (__int64 *)&ptr);
      v7 = (void *)*a3;
      v9 = ptr;
      v8 = v314;
      ptr = nullptr;
      v314 = 0;
      v10 = v315;
      v315 = 0;
      if ( !v7 )
        goto LABEL_348;
      a3[1] = 0;
      j__free(v7);
      *a3 = (__int64)v9;
      a3[1] = v8;
      v11 = ptr;
      a3[2] = v10;
      if ( v11 )
      {
        v314 = 0;
        j__free(v11);
      }
      goto LABEL_5;
  }
}
// 46DF00: variable 'v285' is possibly undefined
// 4738F8: using guessed type __int64 __fastcall sub_4738F8(_QWORD, _QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
// 4C77D8: using guessed type char byte_4C77D8;
// 51AFC8: using guessed type char *off_51AFC8[6];
// 522380: using guessed type __int64 qword_522380[2];
// 52451C: using guessed type char under_debugger;
