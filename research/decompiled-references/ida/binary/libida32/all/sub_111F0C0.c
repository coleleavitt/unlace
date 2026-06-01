__int64 __fastcall sub_111F0C0(__int64 *a1, _DWORD *a2, _QWORD *a3, char **a4, int a5, int a6)
{
  char v6; // r14
  int v8; // eax
  char v9; // r15
  char v10; // r9
  __int8 v11; // r8
  int v12; // eax
  const char *v13; // rdi
  __int8 v14; // r8
  char v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r13
  __int8 v19; // r9
  __int8 v20; // r9
  __int64 *v21; // r14
  __int64 v22; // rdx
  __int64 *v23; // r15
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rsi
  char *v27; // rdx
  __m128i si128; // xmm7
  __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD *, __int64, __int64); // r13
  const char *v31; // rax
  size_t v32; // rdx
  _QWORD *v33; // rax
  __int64 *v34; // rax
  void *v35; // rdi
  size_t v36; // rax
  unsigned int v37; // eax
  __int64 *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbp
  unsigned int v41; // eax
  __int64 *v42; // rbp
  __int64 *v43; // rbx
  signed __int64 v44; // rcx
  char *v45; // r12
  unsigned __int64 v46; // rsi
  char *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbp
  unsigned __int8 **p_ptr; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r14
  unsigned __int64 v56; // rbp
  __int64 v57; // r15
  unsigned __int64 v58; // r13
  unsigned __int64 v59; // r14
  __int64 v60; // r15
  unsigned __int64 v61; // r13
  const char *v62; // rdi
  __int64 v63; // r12
  unsigned int v64; // ebp
  __int64 v65; // rax
  const char *v66; // rdi
  char v67; // r12
  char *v68; // r15
  char *v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  char *v73; // r13
  size_t v74; // rax
  size_t v75; // rax
  size_t v76; // rax
  size_t v77; // rax
  char *v78; // r13
  size_t v79; // rax
  char *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r14
  __int64 v84; // r12
  size_t v85; // rax
  size_t v86; // rax
  size_t v87; // rax
  size_t v88; // rax
  __int64 *v89; // r12
  char *v90; // r14
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 *v94; // r13
  __int64 *v95; // rbp
  __int64 *v96; // r15
  __int64 *v97; // rbp
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 *v100; // r14
  __int64 *v101; // r13
  __int64 *v102; // r15
  char *v103; // r15
  __int64 v104; // rax
  __int64 v105; // rdx
  char *v106; // r14
  size_t v107; // rax
  size_t v108; // rax
  size_t v109; // rax
  size_t v110; // rax
  char *v111; // r14
  __int64 v112; // rax
  __int64 v113; // rdx
  char *v114; // rcx
  char *v115; // r12
  __int64 *v116; // r14
  char *v117; // rbp
  size_t v118; // rax
  size_t v119; // rax
  size_t v120; // rax
  size_t v121; // rax
  __int64 v122; // r13
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r12
  __int64 v126; // rcx
  __int64 *v127; // r13
  __int64 v128; // rbp
  size_t v129; // rax
  size_t v130; // rax
  size_t v131; // rax
  size_t v132; // rax
  __int64 v133; // rcx
  size_t v134; // rax
  bool v135; // al
  bool v136; // r12
  size_t v137; // rax
  bool v138; // al
  size_t v139; // rax
  bool v140; // al
  bool v141; // bp
  size_t v142; // rax
  bool v143; // al
  bool v144; // r14
  size_t v145; // rax
  bool v146; // al
  const char *v147; // rdi
  _DWORD *v148; // rbp
  __int64 v149; // r14
  char *v150; // r15
  const char *v151; // rbp
  __int64 v152; // rdx
  __int64 v153; // r14
  int v154; // r13d
  __int64 v155; // rax
  const char *v156; // rdi
  size_t v157; // rax
  size_t v158; // rax
  _QWORD *v159; // r14
  _QWORD *v160; // rbp
  const char *v161; // rdi
  __int64 v162; // rax
  const char *v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rdx
  _DWORD *v168; // r14
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rax
  __int64 v172; // rdx
  _BYTE *v173; // rax
  signed __int64 v174; // rdx
  size_t v175; // rax
  size_t v176; // rax
  unsigned int v177; // eax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rdx
  _QWORD *v181; // r14
  __int64 v182; // rbp
  _QWORD *v183; // rdx
  __int64 *v184; // r14
  void *v185; // rdi
  _QWORD *v186; // r14
  unsigned __int64 v187; // rax
  __int64 v188; // rdx
  __m128i v189; // xmm1
  __m128i v190; // xmm2
  size_t v191; // r15
  size_t v192; // rbp
  __m128i v193; // xmm7
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // r14
  __m256i *v197; // r13
  __int64 v198; // rsi
  __int64 v199; // rax
  size_t v200; // r15
  char *v201; // rbp
  size_t v202; // r12
  size_t v203; // rax
  size_t v204; // rax
  const __m128i *v205; // r12
  __m256i *v206; // rax
  __m256i *v207; // rdi
  __int64 v208; // rbx
  char *v209; // r14
  size_t v210; // rbp
  void *v211; // rax
  void *v212; // rdx
  unsigned __int64 v213; // rax
  unsigned __int64 v214; // rbp
  size_t v215; // rax
  const void *v216; // r14
  void *v217; // rbp
  unsigned __int8 **v218; // r14
  char v219; // bp
  __int64 v220; // rax
  __int64 v221; // rdx
  __int64 *v222; // r14
  __int64 v223; // rax
  __int64 v224; // rbp
  __int64 *v225; // r14
  size_t v227; // rax
  char *v228; // rsi
  char *v229; // rsi
  __int64 *v230; // r15
  __int64 v231; // rax
  size_t v232; // rdx
  const char **v233; // rax
  size_t v234; // rsi
  const char *v235; // rbx
  __int64 v236; // rax
  const char **v237; // rax
  size_t v238; // rsi
  const char *v239; // rbx
  size_t v240; // rax
  char *v241; // rax
  void *v242; // rdi
  size_t v243; // rax
  int v244; // eax
  char v245; // r12
  char v246; // r14
  char *v247; // r13
  const char **v248; // rbx
  __int64 v249; // rax
  size_t v250; // r15
  char v251; // r10
  char v252; // r8
  char v253; // r9
  const char *v254; // rbp
  size_t v255; // rax
  size_t v256; // rax
  size_t v257; // rax
  size_t v258; // rax
  int v259; // eax
  size_t v260; // rax
  __int8 v261; // r8
  char v262; // r9
  __int64 v263; // rax
  __int64 v264; // rdx
  size_t v265; // rax
  size_t v266; // rax
  int v267; // eax
  char v268; // bl
  char v269; // bp
  unsigned __int64 v270; // r13
  __int64 v271; // r14
  char *v272; // rsi
  char *v273; // rdi
  char *v274; // rax
  __int64 v275; // rdx
  __int64 v276; // r8
  __int64 v277; // rcx
  unsigned __int64 v278; // r8
  __int64 *v279; // rax
  unsigned __int64 v280; // rdx
  __int64 v281; // r9
  __int64 v282; // rcx
  unsigned __int64 v283; // rbx
  char *v284; // rax
  unsigned __int64 v285; // rdx
  __int64 v286; // r8
  __int64 v287; // rcx
  __int64 v288; // rbx
  __int64 v289; // rbp
  char *v290; // rax
  __int64 v291; // rdi
  size_t v292; // r12
  const char **v293; // rax
  const char *v294; // r13
  _DWORD *v295; // r14
  unsigned int v296; // eax
  _BYTE *v297; // rax
  signed __int64 v298; // rdx
  unsigned int v299; // eax
  _BYTE *v300; // rax
  signed __int64 v301; // rdx
  __int64 v302; // rax
  __int64 v303; // rdx
  __int64 v304; // rdi
  __int64 v305; // rsi
  __int64 v306; // rdi
  __int64 v307; // rsi
  __int64 v308; // rbp
  __int64 v309; // rbp
  __int64 v310; // r13
  char *v311; // r14
  unsigned __int64 v312; // r12
  __int64 v313; // rdx
  __int64 v314; // rcx
  __int64 v315; // rcx
  __int64 v316; // rcx
  __int64 v317; // rcx
  __int64 v318; // r13
  char *v319; // r14
  char *v320; // r14
  __int64 v321; // r13
  __int64 v322; // rax
  __int64 v323; // rax
  __int64 v324; // rax
  _DWORD *v325; // r14
  __int64 v326; // rax
  __int64 v327; // rdx
  int v328; // eax
  unsigned __int64 v329; // rdx
  int v330; // eax
  int v331; // eax
  _QWORD *v332; // rax
  __int64 *v333; // rdx
  _DWORD *v334; // r13
  size_t v335; // r14
  char *v336; // r12
  size_t v337; // rax
  signed __int64 v338; // rdx
  __int64 v339; // rcx
  unsigned __int64 v340; // rax
  __int64 v341; // rdx
  __int64 v342; // rax
  __int64 v343; // rdx
  unsigned int v344; // eax
  __int64 v345; // rdi
  _QWORD *v346; // r14
  unsigned __int64 v347; // rax
  __int64 v348; // rcx
  __int64 v349; // r12
  __int64 v350; // r14
  __m128 v351; // xmm0
  __int64 v352; // r13
  __m256i *v353; // rbp
  __int64 v354; // rsi
  __m128i v355; // xmm0
  __int64 v356; // rcx
  __int64 *v357; // rbp
  __int64 v358; // rax
  __int64 v359; // r15
  __m256i *v360; // r12
  __int64 v361; // rsi
  _QWORD *v362; // r14
  _QWORD *v363; // rdx
  __int64 *v364; // r14
  _BYTE *v365; // rax
  signed __int64 v366; // rdx
  __int64 v367; // r12
  const char *v368; // rdi
  __int64 v369; // rax
  __int64 v370; // rdx
  size_t v371; // rax
  size_t v372; // rax
  size_t v373; // r8
  void *v374; // rcx
  char *v375; // rbp
  unsigned __int64 v376; // rax
  _BYTE *v377; // rdi
  __m128i *v378; // rsi
  void *v379; // rdx
  size_t v380; // rax
  __m128i v382; // [rsp+10h] [rbp-2C8h] BYREF
  const char *v383; // [rsp+20h] [rbp-2B8h]
  char *v384; // [rsp+28h] [rbp-2B0h]
  _QWORD *v385; // [rsp+30h] [rbp-2A8h]
  const char *v386; // [rsp+38h] [rbp-2A0h]
  size_t n; // [rsp+40h] [rbp-298h]
  __int64 v388; // [rsp+48h] [rbp-290h]
  __int64 *v389; // [rsp+50h] [rbp-288h]
  char *v390; // [rsp+58h] [rbp-280h]
  void *s1; // [rsp+60h] [rbp-278h]
  __int64 v392; // [rsp+68h] [rbp-270h]
  _DWORD *v393; // [rsp+70h] [rbp-268h]
  __int64 *v394; // [rsp+78h] [rbp-260h]
  size_t v395; // [rsp+80h] [rbp-258h]
  size_t v396; // [rsp+88h] [rbp-250h]
  char *v397; // [rsp+90h] [rbp-248h]
  char *v398; // [rsp+98h] [rbp-240h]
  __int64 v399; // [rsp+A0h] [rbp-238h]
  const char *v400; // [rsp+A8h] [rbp-230h]
  __int64 v401; // [rsp+B0h] [rbp-228h]
  int v402; // [rsp+B8h] [rbp-220h]
  int v403; // [rsp+BCh] [rbp-21Ch]
  char *v404; // [rsp+C0h] [rbp-218h]
  int v405; // [rsp+C8h] [rbp-210h]
  char v406; // [rsp+CCh] [rbp-20Ch]
  char v407; // [rsp+CDh] [rbp-20Bh]
  char v408; // [rsp+CEh] [rbp-20Ah]
  char v409; // [rsp+CFh] [rbp-209h]
  int v410; // [rsp+D8h] [rbp-200h] BYREF
  int v411; // [rsp+DCh] [rbp-1FCh] BYREF
  char *v412; // [rsp+E0h] [rbp-1F8h] BYREF
  size_t v413; // [rsp+E8h] [rbp-1F0h]
  void *v414[2]; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v415; // [rsp+100h] [rbp-1D8h]
  void *v416[2]; // [rsp+110h] [rbp-1C8h] BYREF
  __m128i v417; // [rsp+120h] [rbp-1B8h] BYREF
  size_t v418[2]; // [rsp+130h] [rbp-1A8h] BYREF
  __m128i v419; // [rsp+140h] [rbp-198h] BYREF
  __int16 v420; // [rsp+150h] [rbp-188h]
  __m256i ptr; // [rsp+180h] [rbp-158h] BYREF
  char *v422; // [rsp+1A0h] [rbp-138h]
  __int64 v423; // [rsp+1A8h] [rbp-130h]
  const char *v424; // [rsp+1B0h] [rbp-128h]
  __int64 v425; // [rsp+1B8h] [rbp-120h]
  char *v426; // [rsp+1C0h] [rbp-118h] BYREF
  __int64 v427; // [rsp+1C8h] [rbp-110h]
  _QWORD v428[2]; // [rsp+1D0h] [rbp-108h] BYREF
  char v429[248]; // [rsp+1E0h] [rbp-F8h] BYREF

  v6 = a5;
  v394 = a1;
  v393 = a2;
  v385 = a3;
  v402 = a5;
  v405 = a6;
  LOBYTE(v388) = a5;
  v399 = sub_10BA920((__int64)a3, 0x992u, 0x1ACu);
  v8 = sub_111AEF0(a1, a2, (__int64)a3);
  v415 = 0;
  v403 = v8;
  *(_OWORD *)v414 = 0;
  if ( !v6 )
  {
    if ( v8 == 1 )
    {
      ptr.m256i_i64[0] = (__int64)"+soft-float";
      ptr.m256i_i64[1] = j__strlen("+soft-float");
      sub_1115760((__int64)a4, ptr.m256i_i64);
    }
    else if ( v403 == 3 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
LABEL_5:
      v395 = 0;
      v400 = nullptr;
      v382.m128i_i64[0] = 0;
      v386 = nullptr;
      v396 = 0;
      v397 = nullptr;
      v404 = nullptr;
      v406 = 0;
      v398 = nullptr;
      v384 = nullptr;
      n = 0;
      s1 = nullptr;
      v390 = nullptr;
      goto LABEL_6;
    }
    ptr.m256i_i64[0] = (__int64)"+soft-float-abi";
    ptr.m256i_i64[1] = j__strlen("+soft-float-abi");
    sub_1115760((__int64)a4, ptr.m256i_i64);
    v9 = v402;
    v10 = v402;
    v11 = v402;
    goto LABEL_5;
  }
  sub_10BB2E0((__int64)&ptr, (__int64)v385, 0xD4Bu, 0xD9Fu);
  *(__m128i *)v418 = _mm_load_si128((const __m128i *)&ptr);
  v401 = ptr.m256i_i64[3];
  v419.m128i_i64[0] = ptr.m256i_i64[2];
  v392 = ptr.m256i_i64[0];
  if ( ptr.m256i_i64[3] == ptr.m256i_i64[0] )
  {
    v9 = 0;
    v262 = 0;
    v261 = 0;
    v395 = 0;
    v400 = nullptr;
    v382.m128i_i64[0] = 0;
    v386 = nullptr;
    s1 = nullptr;
    v398 = nullptr;
    v384 = nullptr;
    v390 = nullptr;
    v406 = 0;
    n = 0;
    v404 = nullptr;
    v397 = nullptr;
    v396 = 0;
    goto LABEL_370;
  }
  v245 = 0;
  v246 = 0;
  v395 = 0;
  v400 = nullptr;
  v382.m128i_i64[0] = 0;
  v386 = nullptr;
  s1 = nullptr;
  v398 = nullptr;
  v384 = nullptr;
  v390 = nullptr;
  v406 = 0;
  n = 0;
  v404 = nullptr;
  v397 = nullptr;
  v396 = 0;
  LOBYTE(v383) = 0;
  v389 = (__int64 *)v418;
  do
  {
    v247 = *(char **)v392;
    v248 = *(const char ***)(*(_QWORD *)v392 + 48LL);
    v382.m128i_i64[1] = (__int64)&v248[*(unsigned int *)(*(_QWORD *)v392 + 56LL)];
    if ( (const char **)v382.m128i_i64[1] == v248 )
    {
      v268 = v246;
      v9 = v245;
      v269 = (char)v383;
      goto LABEL_368;
    }
    do
    {
      while ( 1 )
      {
        v254 = *v248;
        v250 = 0;
        if ( *v248 )
          v250 = j__strlen(*v248);
        v255 = j__strlen("-mfpu=");
        if ( v250 >= v255 && (!v255 || !memcmp(v254, "-mfpu=", v255)) )
        {
          v382.m128i_i64[0] = 0;
          if ( v250 > 5 )
          {
            v249 = v250 - 6;
            v250 = 6;
            v382.m128i_i64[0] = v249;
          }
          v251 = v245;
          v252 = v246;
          v384 = v247;
          v386 = &v254[v250];
          v253 = (char)v383;
          if ( !v245 )
          {
            v251 = v388;
            v245 = 1;
          }
          goto LABEL_350;
        }
        v256 = j__strlen("-mcpu=");
        if ( v256 <= v250 && (!v256 || !memcmp(v254, "-mcpu=", v256)) )
        {
          n = 0;
          if ( v250 > 5 )
          {
            v265 = v250 - 6;
            v250 = 6;
            n = v265;
          }
          v252 = v246;
          v251 = v245;
          v390 = v247;
          s1 = (void *)&v254[v250];
          v253 = (char)v383;
          if ( !v246 )
          {
            v252 = v388;
            v246 = 1;
          }
          goto LABEL_350;
        }
        v257 = j__strlen("-mhwdiv=");
        if ( v257 <= v250 && (!v257 || !memcmp(v254, "-mhwdiv=", v257)) )
        {
          v395 = 0;
          if ( v250 > 7 )
          {
            v266 = v250 - 8;
            v250 = 8;
            v395 = v266;
          }
          v253 = (char)v383;
          v252 = v246;
          v251 = v245;
          v400 = &v254[v250];
          v398 = v247;
          if ( !v406 )
            v406 = 1;
          goto LABEL_350;
        }
        v258 = j__strlen("-march=");
        v253 = (char)v383;
        v252 = v246;
        v251 = v245;
        if ( v258 <= v250 )
        {
          if ( !v258 )
            break;
          v409 = (char)v383;
          v408 = v245;
          v407 = v246;
          v259 = memcmp(v254, "-march=", v258);
          v252 = v246;
          v251 = v245;
          v253 = (char)v383;
          if ( !v259 )
            break;
        }
LABEL_350:
        if ( (const char **)v382.m128i_i64[1] == ++v248 )
          goto LABEL_367;
      }
      v396 = 0;
      if ( v250 > 6 )
      {
        v260 = v250 - 7;
        v250 = 7;
        v396 = v260;
      }
      v397 = (char *)&v254[v250];
      if ( !(_BYTE)v383 )
      {
        v253 = v388;
        v404 = v247;
        LOBYTE(v383) = 1;
        goto LABEL_350;
      }
      v404 = v247;
      ++v248;
    }
    while ( (const char **)v382.m128i_i64[1] != v248 );
LABEL_367:
    v268 = v252;
    v9 = v251;
    v269 = v253;
LABEL_368:
    v418[0] = v392 + 8;
    sub_111C030((__int64)v389);
    v392 = v418[0];
  }
  while ( v418[0] != v401 );
  v261 = v268;
  v262 = v269;
LABEL_370:
  LOBYTE(v383) = v262;
  v382.m128i_i8[8] = v261;
  v263 = sub_10BB400((__int64)v385, 0x8AEu);
  v11 = v382.m128i_i8[8];
  v10 = (char)v383;
  if ( v263 )
  {
    v264 = *(_QWORD *)(v263 + 16);
    if ( !v264 )
      v264 = v263;
    *(_BYTE *)(v264 + 44) |= 2u;
  }
LABEL_6:
  LOBYTE(v383) = v10;
  v382.m128i_i8[8] = v11;
  v12 = sub_1119EF0(v394, (__int64)v385, (__int64)v393, v402);
  v13 = "+read-tp-tpidrurw";
  v14 = v382.m128i_i8[8];
  v15 = (char)v383;
  switch ( v12 )
  {
    case 2:
      goto LABEL_337;
    case 4:
      v13 = "+read-tp-tpidrprw";
LABEL_337:
      ptr.m256i_i64[0] = (__int64)v13;
      ptr.m256i_i64[1] = j__strlen(v13);
      sub_1115760((__int64)a4, ptr.m256i_i64);
      v14 = v382.m128i_i8[8];
      v15 = (char)v383;
      break;
    case 3:
      ptr.m256i_i64[0] = (__int64)"+read-tp-tpidruro";
      ptr.m256i_i64[1] = j__strlen("+read-tp-tpidruro");
      sub_1115760((__int64)a4, ptr.m256i_i64);
      v15 = (char)v383;
      v14 = v382.m128i_i8[8];
      break;
  }
  LOBYTE(v383) = v15;
  v382.m128i_i8[8] = v14;
  v16 = sub_10B8FF0((__int64)v385, 0x8D4u);
  v17 = sub_10B8FF0((__int64)v385, 0x913u);
  v410 = 0;
  v18 = v17;
  v19 = (char)v383;
  v411 = 0;
  if ( v382.m128i_i8[8] )
  {
    if ( v17 )
    {
      v382.m128i_i8[8] = (char)v383;
      sub_FA3370((__int64)&ptr, *v394, 0, 611);
      sub_21922B0(v418, v18, v385);
      sub_AC84E0((unsigned __int8 **)&ptr, (_BYTE *)v418[0], v418[1]);
      v20 = (char)v383;
      if ( (__m128i *)v418[0] != &v419 )
      {
        operator delete((void *)v418[0]);
        v20 = v382.m128i_i8[8];
      }
      v382.m128i_i8[8] = v20;
      sub_AC6300((__int64)&ptr);
      v18 = (__int64)v390;
      v19 = v382.m128i_i8[8];
    }
    else
    {
      v18 = (__int64)v390;
    }
  }
  else if ( v17 )
  {
    n = 0;
    v242 = **(void ***)(v17 + 48);
    s1 = v242;
    if ( v242 )
    {
      v382.m128i_i8[8] = (char)v383;
      v243 = j__strlen((const char *)v242);
      v19 = (char)v383;
      n = v243;
    }
  }
  else
  {
    s1 = nullptr;
    n = 0;
  }
  if ( v19 )
  {
    if ( v16 )
    {
      sub_FA3370((__int64)&ptr, *v394, 0, 611);
      sub_21922B0(v418, v16, v385);
      sub_AC84E0((unsigned __int8 **)&ptr, (_BYTE *)v418[0], v418[1]);
      if ( (__m128i *)v418[0] != &v419 )
        operator delete((void *)v418[0]);
      sub_AC6300((__int64)&ptr);
    }
    sub_111C8F0(v394, v404, v397, v396, (__int64)s1, n, (__int64)v414, (__int64)v393, (__int64)&v410);
  }
  else if ( v16 )
  {
    v396 = 0;
    v241 = **(char ***)(v16 + 48);
    v397 = v241;
    if ( v241 )
      v396 = j__strlen(v241);
    sub_111C8F0(v394, (_QWORD *)v16, v397, v396, (__int64)s1, n, (__int64)v414, (__int64)v393, (__int64)&v410);
  }
  else
  {
    v397 = nullptr;
    v396 = 0;
  }
  if ( n != j__strlen("native") )
  {
    if ( !n )
      goto LABEL_41;
    goto LABEL_201;
  }
  if ( n && memcmp(s1, "native", n) )
  {
LABEL_201:
    v418[0] = (size_t)s1;
    v418[1] = n;
    v175 = j__strlen("+");
    sub_103B480(&ptr, (__int64 *)v418, (__int64)"+", v175);
    *(__m128i *)v418 = _mm_load_si128((const __m128i *)&ptr);
    v176 = j__strlen("generic");
    if ( v176 != v418[1] || v176 && memcmp((const void *)v418[0], "generic", v176) )
    {
      v177 = sub_227C0C0((void *)v418[0], v418[1]);
      v178 = sub_227A8D0(v418[0], v418[1], v177);
      sub_227CE40(v178, a4);
    }
    goto LABEL_41;
  }
  sub_2280F80(v416);
  sub_E9D250((__int64 **)&ptr, (__int64 *)v416[0], LODWORD(v416[1]) == 0);
  v21 = (__int64 *)ptr.m256i_i64[0];
  sub_E9D250((__int64 **)&ptr, (__int64 *)v416[0] + LODWORD(v416[1]), 1);
  v382.m128i_i64[1] = ptr.m256i_i64[0];
  if ( v21 != (__int64 *)ptr.m256i_i64[0] )
  {
    v388 = v18;
    v22 = *v21;
    LOBYTE(v389) = v9;
    v23 = v21;
    do
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)v22;
        v25 = *(_BYTE *)(v22 + 8) == 0;
        v26 = v22 + 16;
        v27 = "-";
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
        v420 = 1283;
        if ( !v25 )
          v27 = "+";
        v419.m128i_i64[1] = v24;
        v29 = *v385;
        v419.m128i_i64[0] = v26;
        v418[0] = (size_t)v27;
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
        v30 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v29 + 16);
        *(__m128i *)&ptr.m256i_u64[1] = si128;
        sub_222FB80(v418, &ptr);
        v31 = (const char *)v30(v385, ptr.m256i_i64[0], ptr.m256i_i64[1]);
        if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
        {
          v383 = v31;
          free((void *)ptr.m256i_i64[0]);
          v31 = v383;
        }
        ptr.m256i_i64[0] = (__int64)v31;
        v32 = 0;
        if ( v31 )
          v32 = j__strlen(v31);
        ptr.m256i_i64[1] = v32;
        sub_1115760((__int64)a4, ptr.m256i_i64);
        v22 = v23[1];
        v33 = v23 + 1;
        if ( v22 == -8 || !v22 )
          break;
        ++v23;
        if ( (_QWORD *)v382.m128i_i64[1] == v33 )
          goto LABEL_38;
      }
      v34 = v23 + 2;
      do
      {
        do
        {
          v22 = *v34;
          v23 = v34++;
        }
        while ( v22 == -8 );
      }
      while ( !v22 );
    }
    while ( (__int64 *)v382.m128i_i64[1] != v23 );
LABEL_38:
    v18 = v388;
    v9 = (char)v389;
  }
  v35 = v416[0];
  if ( HIDWORD(v416[1]) && LODWORD(v416[1]) )
  {
    v288 = 0;
    v289 = 8LL * (unsigned int)(LODWORD(v416[1]) - 1) + 8;
    v290 = (char *)v416[0];
    do
    {
      v291 = *(_QWORD *)&v290[v288];
      if ( v291 && v291 != -8 )
      {
        operator delete();
        v290 = (char *)v416[0];
      }
      v288 += 8;
    }
    while ( v289 != v288 );
    v35 = v290;
  }
  free(v35);
LABEL_41:
  if ( v18 )
  {
    v412 = (char *)s1;
    v413 = n;
    v36 = j__strlen("+");
    sub_103B480(v416, (__int64 *)&v412, (__int64)"+", v36);
    v389 = (__int64 *)v418;
    sub_111D230((__int64)v418, v412, v413, v397, v396, (__int64)v393);
    v37 = sub_111C7C0((_WORD *)v418[0], v418[1], (__int64)v397, v396, (__int64)v393);
    if ( !v37 )
      goto LABEL_394;
    v38 = (__int64 *)v418[0];
    if ( !v417.m128i_i64[1] )
    {
LABEL_44:
      if ( v38 != v389 + 2 )
        operator delete(v38);
      goto LABEL_46;
    }
    if ( !(unsigned __int8)sub_1118BA0(
                             v417.m128i_i64[0],
                             v417.m128i_i64[1],
                             v418[0],
                             v418[1],
                             v37,
                             (__int64)v414,
                             (__int64)&v411) )
    {
LABEL_394:
      sub_FA3370((__int64)&ptr, *v394, 0, 497);
      sub_AC84E0((unsigned __int8 **)&ptr, *(_BYTE **)(v18 + 24), *(_QWORD *)(v18 + 32));
      sub_AC60B0((unsigned __int8 **)&ptr, **(_QWORD **)(v18 + 48), 1u);
      sub_AC6300((__int64)&ptr);
    }
    v38 = (__int64 *)v418[0];
    goto LABEL_44;
  }
LABEL_46:
  sub_10B8FF0((__int64)v385, 0xB64u);
  v39 = sub_10B8FF0((__int64)v385, 0x94Eu);
  v40 = v39;
  if ( v9 )
  {
    if ( v39 )
    {
      sub_FA3370((__int64)&ptr, *v394, 0, 611);
      sub_21922B0(v418, v40, v385);
      sub_AC84E0((unsigned __int8 **)&ptr, (_BYTE *)v418[0], v418[1]);
      if ( (__m128i *)v418[0] != &v419 )
        operator delete((void *)v418[0]);
      sub_AC6300((__int64)&ptr);
    }
    v41 = sub_2279300(v386, v382.m128i_i64[0]);
    if ( !(unsigned __int8)sub_227CA70(v41, a4) )
      sub_11190A0(v394, (__int64)v384, (__int64)v385);
    LODWORD(v383) = 0;
    goto LABEL_54;
  }
  if ( v39 )
  {
    v237 = *(const char ***)(v39 + 48);
    v238 = 0;
    v239 = *v237;
    if ( *v237 )
      v238 = j__strlen(*v237);
    LODWORD(v383) = sub_2279300(v239, v238);
    if ( !(unsigned __int8)sub_227CA70((unsigned int)v383, a4) )
      sub_11190A0(v394, v40, (__int64)v385);
    goto LABEL_54;
  }
  if ( v393[12] == 17 )
  {
    v369 = sub_2293740(v393);
    if ( (unsigned int)sub_2278E20(v369, v370) == 7 )
    {
      v371 = j__strlen("neon");
      LODWORD(v383) = sub_2279300("neon", v371);
      if ( !(unsigned __int8)sub_227CA70((unsigned int)v383, a4) )
      {
        sub_FA3370((__int64)&ptr, *v394, 0, 333);
        sub_1119610((__int64 *)v416, "-mfpu=");
        v372 = j__strlen("neon");
        v373 = v372;
        if ( v372 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v416[1] )
          std::__throw_length_error("basic_string::append");
        v374 = v416[0];
        v375 = (char *)v416[1] + v372;
        if ( v416[0] == &v417 )
          v376 = 15;
        else
          v376 = v417.m128i_i64[0];
        if ( (unsigned __int64)v375 > v376 )
        {
          sub_974DF0((__int64)v416, (size_t)v416[1], 0, "neon", v373);
          v374 = v416[0];
        }
        else if ( v373 )
        {
          v377 = (char *)v416[0] + (unsigned __int64)v416[1];
          if ( v373 == 1 )
            *v377 = 110;
          else
            memcpy(v377, "neon", v373);
          v374 = v416[0];
        }
        v416[1] = v375;
        v375[(_QWORD)v374] = 0;
        v378 = (__m128i *)v416[0];
        v389 = (__int64 *)v418;
        v418[0] = (size_t)&v419;
        if ( v416[0] == &v417 )
        {
          v378 = &v419;
          v419 = _mm_load_si128(&v417);
        }
        else
        {
          v418[0] = (size_t)v416[0];
          v419.m128i_i64[0] = v417.m128i_i64[0];
        }
        v379 = v416[1];
        v416[1] = nullptr;
        v417.m128i_i8[0] = 0;
        v416[0] = &v417;
        v418[1] = (size_t)v379;
        sub_AC84E0((unsigned __int8 **)&ptr, v378, (signed __int64)v379);
        if ( (__int64 *)v418[0] != v389 + 2 )
          operator delete((void *)v418[0]);
        if ( v416[0] != &v417 )
          operator delete(v416[0]);
        sub_AC6300((__int64)&ptr);
      }
      goto LABEL_54;
    }
  }
  v331 = v410;
  LODWORD(v383) = v411;
  if ( v410 )
  {
    if ( v411 )
      v331 = v411;
    LODWORD(v383) = v331;
    goto LABEL_586;
  }
  if ( (_DWORD)v383 )
  {
LABEL_586:
    sub_227CA70((unsigned int)v383, a4);
    goto LABEL_54;
  }
  sub_111D230((__int64)&ptr, (char *)s1, n, v397, v396, (__int64)v393);
  if ( !sub_990D60((__int64)&ptr, "generic")
    && (v340 = (unsigned int)v393[11], (unsigned int)v340 <= 0x1F)
    && (v341 = 4160782882LL, _bittest64(&v341, v340))
    && (v342 = sub_2293740(v393), (int)sub_2278E20(v342, v343) > 6) )
  {
    v380 = j__strlen("neon");
    LODWORD(v383) = sub_2279300("neon", v380);
    v345 = (unsigned int)v383;
  }
  else
  {
    v344 = sub_111C7C0(ptr.m256i_i64[0], ptr.m256i_u64[1], (__int64)v397, v396, (__int64)v393);
    LODWORD(v383) = sub_22793A0(ptr.m256i_i64[0], ptr.m256i_i64[1], v344);
    v345 = (unsigned int)v383;
  }
  sub_227CA70(v345, a4);
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
    operator delete((void *)ptr.m256i_i64[0]);
LABEL_54:
  v42 = (__int64 *)v414[1];
  v43 = (__int64 *)v414[0];
  if ( v414[0] != v414[1] )
  {
    v44 = (char *)v414[1] - (char *)v414[0];
    v45 = a4[1];
    v46 = ((char *)v414[1] - (char *)v414[0]) >> 4;
    v382.m128i_i64[0] = (__int64)a4[2];
    if ( v46 > (v382.m128i_i64[0] - (__int64)v45) >> 4 )
    {
      v270 = sub_111EFF0(a4, v46, "vector::_M_range_insert");
      if ( v270 )
      {
        if ( v270 > 0xFFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v270 *= 16LL;
        v271 = operator new(v270);
        v272 = a4[1];
      }
      else
      {
        v272 = v45;
        v271 = 0;
      }
      v273 = *a4;
      if ( v45 == *a4 )
      {
        v278 = v271;
      }
      else
      {
        v274 = *a4;
        v275 = v271;
        do
        {
          v276 = *(_QWORD *)v274;
          v277 = *((_QWORD *)v274 + 1);
          v274 += 16;
          v275 += 16;
          *(_QWORD *)(v275 - 16) = v276;
          *(_QWORD *)(v275 - 8) = v277;
        }
        while ( v45 != v274 );
        v278 = v271 + ((v45 - 16 - v273) & 0xFFFFFFFFFFFFFFF0LL) + 16;
      }
      v279 = v43;
      v280 = v278;
      do
      {
        v281 = *v279;
        v282 = v279[1];
        v279 += 2;
        v280 += 16LL;
        *(_QWORD *)(v280 - 16) = v281;
        *(_QWORD *)(v280 - 8) = v282;
      }
      while ( v42 != v279 );
      v283 = v278 + (((char *)(v42 - 2) - (char *)v43) & 0xFFFFFFFFFFFFFFF0LL) + 16;
      if ( v45 != v272 )
      {
        v284 = v45;
        v285 = v283;
        do
        {
          v286 = *(_QWORD *)v284;
          v287 = *((_QWORD *)v284 + 1);
          v284 += 16;
          v285 += 16LL;
          *(_QWORD *)(v285 - 16) = v286;
          *(_QWORD *)(v285 - 8) = v287;
        }
        while ( v272 != v284 );
        v283 += ((v272 - v45 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
      }
      if ( v273 )
        operator delete(v273);
      v382.m128i_i64[0] = v283;
      a4[2] = (char *)(v271 + v270);
      *(__m128 *)a4 = _mm_loadh_ps((const double *)v382.m128i_i64);
    }
    else
    {
      v47 = v45;
      do
      {
        v48 = *v43;
        v49 = v43[1];
        v43 += 2;
        v47 += 16;
        *((_QWORD *)v47 - 2) = v48;
        *((_QWORD *)v47 - 1) = v49;
      }
      while ( v42 != v43 );
      a4[1] = &v45[v44];
    }
  }
  v50 = sub_10B8FF0((__int64)v385, 0x96Du);
  v51 = v50;
  if ( v406 )
  {
    if ( v50 )
    {
      p_ptr = (unsigned __int8 **)&ptr;
      sub_FA3370((__int64)&ptr, *v394, 0, 611);
      v389 = (__int64 *)v418;
      sub_21922B0(v418, v51, v385);
      sub_AC84E0((unsigned __int8 **)&ptr, (_BYTE *)v418[0], v418[1]);
      if ( (__m128i *)v418[0] != &v419 )
        operator delete((void *)v418[0]);
      sub_AC6300((__int64)&ptr);
    }
    else
    {
      p_ptr = (unsigned __int8 **)&ptr;
      v389 = (__int64 *)v418;
    }
    v53 = sub_227BFB0(v400, v395);
    if ( !(unsigned __int8)sub_227CD30(v53, a4) )
      sub_11190A0(v394, (__int64)v398, (__int64)v385);
  }
  else
  {
    if ( v50 )
    {
      v233 = *(const char ***)(v50 + 48);
      v234 = 0;
      v235 = *v233;
      if ( *v233 )
        v234 = j__strlen(*v233);
      v236 = sub_227BFB0(v235, v234);
      if ( !(unsigned __int8)sub_227CD30(v236, a4) )
        sub_11190A0(v394, v51, (__int64)v385);
    }
    p_ptr = (unsigned __int8 **)&ptr;
    v389 = (__int64 *)v418;
  }
  v54 = (__int64)a4[1];
  v384 = *a4;
  v382.m128i_i64[1] = v54;
  v55 = (v54 - (__int64)v384) >> 6;
  v382.m128i_i64[0] = v55;
  v388 = (v54 - (__int64)v384) >> 4;
  v386 = (const char *)v388;
  if ( v55 <= 0 )
  {
    v56 = v54;
    v324 = v388;
LABEL_567:
    if ( v324 != 2 )
    {
      if ( v324 != 3 )
      {
        if ( v324 != 1 )
        {
LABEL_570:
          v56 = (unsigned __int64)v384;
          goto LABEL_571;
        }
        goto LABEL_604;
      }
      ptr.m256i_i64[0] = v56;
      if ( (unsigned __int8)sub_1118CB0("-fullfp16", &ptr) )
        goto LABEL_571;
      v56 -= 16LL;
    }
    ptr.m256i_i64[0] = v56;
    if ( (unsigned __int8)sub_1118CB0("-fullfp16", &ptr) )
      goto LABEL_571;
    v56 -= 16LL;
LABEL_604:
    ptr.m256i_i64[0] = v56;
    if ( !(unsigned __int8)sub_1118CB0("-fullfp16", &ptr) )
      goto LABEL_570;
LABEL_571:
    if ( v382.m128i_i64[0] > 0 )
      goto LABEL_73;
    v322 = v388;
    v59 = v382.m128i_u64[1];
LABEL_555:
    if ( v322 != 2 )
    {
      if ( v322 != 3 )
      {
        if ( v322 != 1 )
        {
LABEL_558:
          v59 = (unsigned __int64)v384;
          goto LABEL_559;
        }
        goto LABEL_598;
      }
      ptr.m256i_i64[0] = v59;
      if ( (unsigned __int8)sub_1118CB0("+fp16fml", &ptr) )
        goto LABEL_559;
      v59 -= 16LL;
    }
    ptr.m256i_i64[0] = v59;
    if ( (unsigned __int8)sub_1118CB0("+fp16fml", &ptr) )
      goto LABEL_559;
    v59 -= 16LL;
LABEL_598:
    ptr.m256i_i64[0] = v59;
    if ( !(unsigned __int8)sub_1118CB0("+fp16fml", &ptr) )
      goto LABEL_558;
LABEL_559:
    if ( v393[9] != 13 )
      goto LABEL_80;
    if ( v382.m128i_i64[0] > 0 )
    {
LABEL_524:
      v312 = v382.m128i_u64[1];
      v313 = v382.m128i_i64[0];
      while ( 1 )
      {
        if ( *(_QWORD *)(v312 - 8) == 9 )
        {
          v317 = *(_QWORD *)(v312 - 16);
          if ( *(_QWORD *)v317 == 0x3170666C6C75662BLL && *(_BYTE *)(v317 + 8) == 54 )
            goto LABEL_535;
        }
        if ( *(_QWORD *)(v312 - 24) == 9 )
        {
          v314 = *(_QWORD *)(v312 - 32);
          if ( *(_QWORD *)v314 == 0x3170666C6C75662BLL && *(_BYTE *)(v314 + 8) == 54 )
          {
            v312 -= 16LL;
            goto LABEL_535;
          }
        }
        if ( *(_QWORD *)(v312 - 40) == 9 )
        {
          v315 = *(_QWORD *)(v312 - 48);
          if ( *(_QWORD *)v315 == 0x3170666C6C75662BLL && *(_BYTE *)(v315 + 8) == 54 )
          {
            v312 -= 32LL;
            goto LABEL_535;
          }
        }
        if ( *(_QWORD *)(v312 - 56) == 9 )
        {
          v316 = *(_QWORD *)(v312 - 64);
          if ( *(_QWORD *)v316 == 0x3170666C6C75662BLL && *(_BYTE *)(v316 + 8) == 54 )
          {
            v312 -= 48LL;
            goto LABEL_535;
          }
        }
        v312 -= 64LL;
        if ( !--v313 )
        {
          v323 = (__int64)(v312 - (_QWORD)v384) >> 4;
          v386 = (const char *)v323;
          goto LABEL_562;
        }
      }
    }
    v312 = v382.m128i_u64[1];
    v323 = (__int64)v386;
LABEL_562:
    if ( v323 != 2 )
    {
      if ( v323 != 3 )
      {
        if ( v323 != 1 )
        {
LABEL_565:
          v312 = (unsigned __int64)v384;
          goto LABEL_535;
        }
        goto LABEL_674;
      }
      ptr.m256i_i64[0] = v312;
      if ( (unsigned __int8)sub_1118CB0("+fullfp16", &ptr) )
        goto LABEL_535;
      v312 -= 16LL;
    }
    ptr.m256i_i64[0] = v312;
    if ( (unsigned __int8)sub_1118CB0("+fullfp16", &ptr) )
      goto LABEL_535;
    v312 -= 16LL;
LABEL_674:
    ptr.m256i_i64[0] = v312;
    if ( !(unsigned __int8)sub_1118CB0("+fullfp16", &ptr) )
      goto LABEL_565;
LABEL_535:
    if ( v56 >= v312 || v59 >= v312 )
      goto LABEL_80;
    v418[0] = v312;
    v416[0] = (void *)v382.m128i_i64[1];
    sub_11196B0(&ptr, v382.m128i_i64[1], v312, "-fp16fml");
    v62 = "+fp16fml";
    if ( ptr.m256i_i64[0] == v312 )
      goto LABEL_298;
LABEL_82:
    if ( v403 != 1 )
      goto LABEL_83;
LABEL_299:
    sub_227CA70(1, a4);
    v228 = a4[1];
    ptr.m256i_i64[1] = 8;
    ptr.m256i_i64[0] = (__int64)"-dotprod";
    ptr.m256i_i64[2] = (__int64)"-fp16fml";
    v422 = "-bf16";
    v424 = "-mve";
    ptr.m256i_i64[3] = 8;
    v423 = 5;
    v425 = 4;
    v426 = "-mve.fp";
    v427 = 7;
    sub_1118770((__int64)a4, v228, ptr.m256i_i8, (char *)v428);
LABEL_300:
    sub_111BEC0(a4, "-fpregs");
    LOBYTE(v386) = 0;
    goto LABEL_305;
  }
  v56 = v54;
  v57 = v54 - (v55 << 6);
  while ( 1 )
  {
    ptr.m256i_i64[0] = v56;
    if ( (unsigned __int8)sub_1118CB0("-fullfp16", &ptr) )
      break;
    v58 = v56;
    v56 -= 16LL;
    ptr.m256i_i64[0] = v56;
    if ( (unsigned __int8)sub_1118CB0("-fullfp16", &ptr) )
      break;
    v56 = v58 - 32;
    ptr.m256i_i64[0] = v58 - 32;
    if ( (unsigned __int8)sub_1118CB0("-fullfp16", &ptr) )
      break;
    v56 = v58 - 48;
    ptr.m256i_i64[0] = v58 - 48;
    if ( (unsigned __int8)sub_1118CB0("-fullfp16", &ptr) )
      break;
    v56 = v58 - 64;
    if ( v57 == v58 - 64 )
    {
      v324 = (__int64)(v56 - (_QWORD)v384) >> 4;
      goto LABEL_567;
    }
  }
LABEL_73:
  v59 = v382.m128i_u64[1];
  v60 = v382.m128i_i64[1] - (v382.m128i_i64[0] << 6);
  while ( 1 )
  {
    ptr.m256i_i64[0] = v59;
    if ( (unsigned __int8)sub_1118CB0("+fp16fml", &ptr) )
      break;
    v61 = v59;
    v59 -= 16LL;
    ptr.m256i_i64[0] = v59;
    if ( (unsigned __int8)sub_1118CB0("+fp16fml", &ptr) )
      break;
    v59 = v61 - 32;
    ptr.m256i_i64[0] = v61 - 32;
    if ( (unsigned __int8)sub_1118CB0("+fp16fml", &ptr) )
      break;
    v59 = v61 - 48;
    ptr.m256i_i64[0] = v61 - 48;
    if ( (unsigned __int8)sub_1118CB0("+fp16fml", &ptr) )
      break;
    v59 = v61 - 64;
    if ( v60 == v61 - 64 )
    {
      v322 = (__int64)(v59 - (_QWORD)v384) >> 4;
      goto LABEL_555;
    }
  }
  if ( v393[9] == 13 )
    goto LABEL_524;
LABEL_80:
  v62 = "-fp16fml";
  if ( v56 <= v59 )
  {
    if ( v56 >= v59 )
      goto LABEL_82;
    v62 = "+fullfp16";
  }
LABEL_298:
  ptr.m256i_i64[0] = (__int64)v62;
  ptr.m256i_i64[1] = j__strlen(v62);
  sub_1115760((__int64)a4, ptr.m256i_i64);
  if ( v403 == 1 )
    goto LABEL_299;
LABEL_83:
  v63 = (int)v383;
  if ( (_DWORD)v383 != 1 && v410 != 1 && v411 != 1 )
  {
    v64 = (_DWORD)v383 - 13;
    v65 = sub_10BA920((__int64)v385, 0x916u, 0xAD9u);
    LOBYTE(v386) = 1;
    if ( v65 )
      goto LABEL_87;
    goto LABEL_90;
  }
  ptr.m256i_i64[0] = (__int64)"-dotprod";
  ptr.m256i_i64[2] = (__int64)"-fp16fml";
  v229 = a4[1];
  v422 = "-bf16";
  v424 = "-mve.fp";
  ptr.m256i_i64[1] = 8;
  ptr.m256i_i64[3] = 8;
  v423 = 5;
  v425 = 7;
  sub_1118770((__int64)a4, v229, ptr.m256i_i8, (char *)&v426);
  v230 = v389;
  v231 = (__int64)a4[1];
  v418[0] = (size_t)*a4;
  ptr.m256i_i64[0] = v231;
  sub_1118DE0((__int64 *)&v412, ptr.m256i_i64, v389, "+mve");
  v232 = (size_t)*a4;
  ptr.m256i_i64[0] = (__int64)a4[1];
  v418[0] = v232;
  sub_1118DE0((__int64 *)v416, ptr.m256i_i64, v230, "-mve");
  if ( *a4 == v412 || *a4 != v416[0] && v412 - (char *)v416[0] <= 0 )
    goto LABEL_300;
  LOBYTE(v386) = 1;
LABEL_305:
  v65 = sub_10BA920((__int64)v385, 0x916u, 0xAD9u);
  if ( v65 )
  {
    v63 = 1;
    v64 = -12;
    LODWORD(v383) = 1;
LABEL_87:
    v66 = "+crc";
    if ( !(unsigned __int8)sub_2195AD0(v65, 2326) )
      v66 = "-crc";
    ptr.m256i_i64[0] = (__int64)v66;
    ptr.m256i_i64[1] = j__strlen(v66);
    sub_1115760((__int64)a4, ptr.m256i_i64);
LABEL_90:
    v67 = (unsigned int)(*((_DWORD *)&off_2B7F960 + 8 * v63 + 6) - 1) <= 1;
    if ( v64 <= 1 )
    {
      ptr.m256i_i64[0] = (__int64)"-mve.fp";
      ptr.m256i_i64[1] = j__strlen("-mve.fp");
      sub_1115760((__int64)a4, ptr.m256i_i64);
    }
  }
  else
  {
    v67 = 0;
    LODWORD(v383) = 1;
  }
  v68 = a4[1];
  v69 = *a4;
  v70 = v68 - *a4;
  v71 = v70 >> 6;
  v72 = v70 >> 4;
  if ( v71 <= 0 )
  {
LABEL_422:
    if ( v72 != 2 )
    {
      if ( v72 != 3 )
      {
        if ( v72 != 1 )
          goto LABEL_425;
        goto LABEL_485;
      }
      if ( sub_1118AE0(*((_QWORD *)v68 - 2), *((_QWORD *)v68 - 1)) )
        goto LABEL_99;
      v68 -= 16;
    }
    if ( sub_1118AE0(*((_QWORD *)v68 - 2), *((_QWORD *)v68 - 1)) )
      goto LABEL_99;
    v68 -= 16;
LABEL_485:
    if ( sub_1118AE0(*((_QWORD *)v68 - 2), *((_QWORD *)v68 - 1)) )
      goto LABEL_99;
LABEL_425:
    v68 = v69;
    goto LABEL_99;
  }
  v73 = &v68[-64 * v71];
  while ( 1 )
  {
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v68 - 1);
    v77 = j__strlen("neon");
    if ( sub_2222D70(&ptr, "neon", v77, 0) != -1 )
      break;
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v68 - 2);
    v74 = j__strlen("neon");
    if ( sub_2222D70(&ptr, "neon", v74, 0) != -1 )
    {
      v68 -= 16;
      break;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v68 - 3);
    v75 = j__strlen("neon");
    if ( sub_2222D70(&ptr, "neon", v75, 0) != -1 )
    {
      v68 -= 32;
      break;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v68 - 4);
    v76 = j__strlen("neon");
    if ( sub_2222D70(&ptr, "neon", v76, 0) != -1 )
    {
      v68 -= 48;
      break;
    }
    v68 -= 64;
    if ( v73 == v68 )
    {
      v72 = (v68 - v69) >> 4;
      goto LABEL_422;
    }
  }
LABEL_99:
  v78 = *a4;
  if ( *a4 != v68 )
  {
    v79 = j__strlen("+");
    v67 &= !sub_9A3FC0((__int64)(v68 - 16), "+", v79);
  }
  v80 = a4[1];
  v382.m128i_i64[0] = (__int64)v80;
  if ( v67 )
  {
    ptr.m256i_i64[1] = 5;
    ptr.m256i_i64[0] = (__int64)"-sha2";
    ptr.m256i_i64[2] = (__int64)"-aes";
    v422 = "-crypto";
    v424 = "-dotprod";
    v426 = "-bf16";
    v428[0] = "-i8mm";
    ptr.m256i_i64[3] = 4;
    v423 = 7;
    v425 = 8;
    v427 = 5;
    v428[1] = 5;
    sub_1118770((__int64)a4, v80, ptr.m256i_i8, v429);
    v78 = *a4;
    v382.m128i_i64[0] = (__int64)a4[1];
  }
  v81 = (v382.m128i_i64[0] - (__int64)v78) >> 6;
  v82 = (v382.m128i_i64[0] - (__int64)v78) >> 4;
  if ( v81 <= 0 )
  {
LABEL_437:
    if ( v82 != 2 )
    {
      if ( v82 != 3 )
      {
        if ( v82 != 1 )
          goto LABEL_440;
        goto LABEL_509;
      }
      v308 = v382.m128i_i64[0] - 16;
      if ( sub_1118B10(*(_QWORD *)(v382.m128i_i64[0] - 16), *(_QWORD *)(v382.m128i_i64[0] - 8)) )
        goto LABEL_111;
      v382.m128i_i64[0] = v308;
    }
    v309 = v382.m128i_i64[0] - 16;
    if ( sub_1118B10(*(_QWORD *)(v382.m128i_i64[0] - 16), *(_QWORD *)(v382.m128i_i64[0] - 8)) )
      goto LABEL_111;
    v382.m128i_i64[0] = v309;
LABEL_509:
    if ( sub_1118B10(*(_QWORD *)(v382.m128i_i64[0] - 16), *(_QWORD *)(v382.m128i_i64[0] - 8)) )
      goto LABEL_111;
LABEL_440:
    v382.m128i_i64[0] = (__int64)v78;
    goto LABEL_111;
  }
  v83 = v382.m128i_i64[0];
  v84 = v382.m128i_i64[0] - (v81 << 6);
  while ( 1 )
  {
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)(v83 - 16));
    v88 = j__strlen("crypto");
    if ( sub_2222D70(&ptr, "crypto", v88, 0) != -1 )
    {
      v382.m128i_i64[0] = v83;
      goto LABEL_111;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)(v83 - 32));
    v85 = j__strlen("crypto");
    if ( sub_2222D70(&ptr, "crypto", v85, 0) != -1 )
    {
      v382.m128i_i64[0] = v83 - 16;
      goto LABEL_111;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)(v83 - 48));
    v86 = j__strlen("crypto");
    if ( sub_2222D70(&ptr, "crypto", v86, 0) != -1 )
    {
      v382.m128i_i64[0] = v83 - 32;
      goto LABEL_111;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)(v83 - 64));
    v87 = j__strlen("crypto");
    if ( sub_2222D70(&ptr, "crypto", v87, 0) != -1 )
      break;
    v83 -= 64;
    if ( v84 == v83 )
    {
      v382.m128i_i64[0] = v83;
      v82 = (v83 - (__int64)v78) >> 4;
      goto LABEL_437;
    }
  }
  v382.m128i_i64[0] = v83 - 48;
LABEL_111:
  v89 = (__int64 *)a4[1];
  v90 = *a4;
  v91 = (char *)v89 - *a4;
  v92 = v91 >> 6;
  v93 = v91 >> 4;
  if ( v92 <= 0 )
  {
LABEL_432:
    if ( v93 != 2 )
    {
      if ( v93 != 3 )
      {
        if ( v93 != 1 )
          goto LABEL_435;
        goto LABEL_497;
      }
      if ( (unsigned __int8)sub_1118D70(*(v89 - 2), *(v89 - 1)) )
        goto LABEL_118;
      v89 -= 2;
    }
    if ( (unsigned __int8)sub_1118D70(*(v89 - 2), *(v89 - 1)) )
      goto LABEL_118;
    v89 -= 2;
LABEL_497:
    if ( (unsigned __int8)sub_1118D70(*(v89 - 2), *(v89 - 1)) )
      goto LABEL_118;
LABEL_435:
    v89 = (__int64 *)v90;
    goto LABEL_118;
  }
  v94 = &v89[-8 * v92];
  while ( 1 )
  {
    v96 = v89;
    v95 = v89 - 2;
    if ( (unsigned __int8)sub_1118D70(*(v89 - 2), *(v89 - 1)) )
      break;
    v89 -= 4;
    if ( (unsigned __int8)sub_1118D70(*v89, v89[1]) )
      goto LABEL_335;
    v95 = v96 - 6;
    if ( (unsigned __int8)sub_1118D70(*(v96 - 6), *(v96 - 5)) )
      break;
    v89 = v96 - 8;
    if ( (unsigned __int8)sub_1118D70(*(v96 - 8), *(v96 - 7)) )
    {
LABEL_335:
      v89 = v95;
      break;
    }
    if ( v94 == v89 )
    {
      v93 = ((char *)v89 - v90) >> 4;
      goto LABEL_432;
    }
  }
LABEL_118:
  v97 = (__int64 *)a4[1];
  v382.m128i_i64[1] = (__int64)*a4;
  v98 = ((__int64)v97 - v382.m128i_i64[1]) >> 6;
  v99 = ((__int64)v97 - v382.m128i_i64[1]) >> 4;
  if ( v98 <= 0 )
  {
LABEL_427:
    if ( v99 != 2 )
    {
      if ( v99 != 3 )
      {
        if ( v99 != 1 )
          goto LABEL_430;
        goto LABEL_515;
      }
      if ( (unsigned __int8)sub_1118D00(*(v97 - 2), *(v97 - 1)) )
        goto LABEL_125;
      v97 -= 2;
    }
    if ( (unsigned __int8)sub_1118D00(*(v97 - 2), *(v97 - 1)) )
      goto LABEL_125;
    v97 -= 2;
LABEL_515:
    if ( (unsigned __int8)sub_1118D00(*(v97 - 2), *(v97 - 1)) )
      goto LABEL_125;
LABEL_430:
    v97 = (__int64 *)v382.m128i_i64[1];
    goto LABEL_125;
  }
  v100 = &v97[-8 * v98];
  while ( 1 )
  {
    v102 = v97;
    v101 = v97 - 2;
    if ( (unsigned __int8)sub_1118D00(*(v97 - 2), *(v97 - 1)) )
      break;
    v97 -= 4;
    if ( (unsigned __int8)sub_1118D00(*v97, v97[1]) )
      goto LABEL_334;
    v101 = v102 - 6;
    if ( (unsigned __int8)sub_1118D00(*(v102 - 6), *(v102 - 5)) )
      break;
    v97 = v102 - 8;
    if ( (unsigned __int8)sub_1118D00(*(v102 - 8), *(v102 - 7)) )
    {
LABEL_334:
      v97 = v101;
      break;
    }
    if ( v97 == v100 )
    {
      v99 = ((__int64)v97 - v382.m128i_i64[1]) >> 4;
      goto LABEL_427;
    }
  }
LABEL_125:
  v103 = a4[1];
  v382.m128i_i64[1] = (__int64)*a4;
  v104 = (__int64)&v103[-v382.m128i_i64[1]] >> 6;
  v105 = (__int64)&v103[-v382.m128i_i64[1]] >> 4;
  if ( v104 <= 0 )
  {
LABEL_447:
    if ( v105 != 2 )
    {
      if ( v105 != 3 )
      {
        if ( v105 != 1 )
          goto LABEL_450;
        goto LABEL_503;
      }
      if ( sub_1118B40(*((_QWORD *)v103 - 2), *((_QWORD *)v103 - 1)) )
        goto LABEL_132;
      v103 -= 16;
    }
    if ( sub_1118B40(*((_QWORD *)v103 - 2), *((_QWORD *)v103 - 1)) )
      goto LABEL_132;
    v103 -= 16;
LABEL_503:
    if ( sub_1118B40(*((_QWORD *)v103 - 2), *((_QWORD *)v103 - 1)) )
      goto LABEL_132;
LABEL_450:
    v103 = (char *)v382.m128i_i64[1];
    goto LABEL_132;
  }
  v106 = &v103[-64 * v104];
  while ( 1 )
  {
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v103 - 1);
    v110 = j__strlen("bf16");
    if ( sub_2222D70(&ptr, "bf16", v110, 0) != -1 )
      break;
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v103 - 2);
    v107 = j__strlen("bf16");
    if ( sub_2222D70(&ptr, "bf16", v107, 0) != -1 )
    {
      v103 -= 16;
      break;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v103 - 3);
    v108 = j__strlen("bf16");
    if ( sub_2222D70(&ptr, "bf16", v108, 0) != -1 )
    {
      v103 -= 32;
      break;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v103 - 4);
    v109 = j__strlen("bf16");
    if ( sub_2222D70(&ptr, "bf16", v109, 0) != -1 )
    {
      v103 -= 48;
      break;
    }
    v103 -= 64;
    if ( v106 == v103 )
    {
      v105 = (__int64)&v103[-v382.m128i_i64[1]] >> 4;
      goto LABEL_447;
    }
  }
LABEL_132:
  v111 = a4[1];
  v384 = *a4;
  v112 = (v111 - v384) >> 6;
  v113 = (v111 - v384) >> 4;
  if ( v112 <= 0 )
  {
LABEL_442:
    if ( v113 != 2 )
    {
      if ( v113 != 3 )
      {
        if ( v113 != 1 )
          goto LABEL_445;
        goto LABEL_479;
      }
      if ( sub_1118B70(*((_QWORD *)v111 - 2), *((_QWORD *)v111 - 1)) )
        goto LABEL_140;
      v111 -= 16;
    }
    if ( sub_1118B70(*((_QWORD *)v111 - 2), *((_QWORD *)v111 - 1)) )
      goto LABEL_140;
    v111 -= 16;
LABEL_479:
    if ( sub_1118B70(*((_QWORD *)v111 - 2), *((_QWORD *)v111 - 1)) )
      goto LABEL_140;
LABEL_445:
    v111 = v384;
    goto LABEL_140;
  }
  v382.m128i_i64[1] = (__int64)v89;
  v114 = &v111[-64 * v112];
  v115 = v111;
  v116 = v97;
  v117 = v114;
  while ( 1 )
  {
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v115 - 1);
    v121 = j__strlen("dotprod");
    if ( sub_2222D70(&ptr, "dotprod", v121, 0) != -1 )
    {
      v97 = v116;
      v111 = v115;
      v89 = (__int64 *)v382.m128i_i64[1];
      goto LABEL_140;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v115 - 2);
    v118 = j__strlen("dotprod");
    if ( sub_2222D70(&ptr, "dotprod", v118, 0) != -1 )
    {
      v97 = v116;
      v311 = v115;
      v89 = (__int64 *)v382.m128i_i64[1];
      v111 = v311 - 16;
      goto LABEL_140;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v115 - 3);
    v119 = j__strlen("dotprod");
    if ( sub_2222D70(&ptr, "dotprod", v119, 0) != -1 )
    {
      v97 = v116;
      v319 = v115;
      v89 = (__int64 *)v382.m128i_i64[1];
      v111 = v319 - 32;
      goto LABEL_140;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)v115 - 4);
    v120 = j__strlen("dotprod");
    if ( sub_2222D70(&ptr, "dotprod", v120, 0) != -1 )
      break;
    v115 -= 64;
    if ( v117 == v115 )
    {
      v97 = v116;
      v111 = v115;
      v89 = (__int64 *)v382.m128i_i64[1];
      v113 = (v111 - v384) >> 4;
      goto LABEL_442;
    }
  }
  v97 = v116;
  v320 = v115;
  v89 = (__int64 *)v382.m128i_i64[1];
  v111 = v320 - 48;
LABEL_140:
  v122 = (__int64)a4[1];
  v384 = *a4;
  v123 = (v122 - (__int64)v384) >> 6;
  v124 = (v122 - (__int64)v384) >> 4;
  if ( v123 <= 0 )
  {
LABEL_415:
    if ( v124 != 2 )
    {
      if ( v124 != 3 )
      {
        if ( v124 != 1 )
          goto LABEL_418;
        goto LABEL_491;
      }
      v304 = *(_QWORD *)(v122 - 16);
      v305 = *(_QWORD *)(v122 - 8);
      v382.m128i_i64[1] = v122 - 16;
      if ( sub_1118AB0(v304, v305) )
        goto LABEL_148;
      v122 = v382.m128i_i64[1];
    }
    v306 = *(_QWORD *)(v122 - 16);
    v307 = *(_QWORD *)(v122 - 8);
    v382.m128i_i64[1] = v122 - 16;
    if ( sub_1118AB0(v306, v307) )
      goto LABEL_148;
    v122 = v382.m128i_i64[1];
LABEL_491:
    if ( sub_1118AB0(*(_QWORD *)(v122 - 16), *(_QWORD *)(v122 - 8)) )
      goto LABEL_148;
LABEL_418:
    v122 = (__int64)v384;
    goto LABEL_148;
  }
  v382.m128i_i64[1] = (__int64)v89;
  v125 = v122;
  v126 = v122 - (v123 << 6);
  v127 = v97;
  v128 = v126;
  while ( 1 )
  {
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)(v125 - 16));
    v132 = j__strlen("i8mm");
    if ( sub_2222D70(&ptr, "i8mm", v132, 0) != -1 )
    {
      v97 = v127;
      v122 = v125;
      v89 = (__int64 *)v382.m128i_i64[1];
      goto LABEL_148;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)(v125 - 32));
    v129 = j__strlen("i8mm");
    if ( sub_2222D70(&ptr, "i8mm", v129, 0) != -1 )
    {
      v97 = v127;
      v310 = v125;
      v89 = (__int64 *)v382.m128i_i64[1];
      v122 = v310 - 16;
      goto LABEL_148;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)(v125 - 48));
    v130 = j__strlen("i8mm");
    if ( sub_2222D70(&ptr, "i8mm", v130, 0) != -1 )
    {
      v97 = v127;
      v318 = v125;
      v89 = (__int64 *)v382.m128i_i64[1];
      v122 = v318 - 32;
      goto LABEL_148;
    }
    *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128((const __m128i *)(v125 - 64));
    v131 = j__strlen("i8mm");
    if ( sub_2222D70(&ptr, "i8mm", v131, 0) != -1 )
      break;
    v125 -= 64;
    if ( v125 == v128 )
    {
      v97 = v127;
      v122 = v125;
      v89 = (__int64 *)v382.m128i_i64[1];
      v124 = (v122 - (__int64)v384) >> 4;
      goto LABEL_415;
    }
  }
  v97 = v127;
  v321 = v125;
  v89 = (__int64 *)v382.m128i_i64[1];
  v122 = v321 - 48;
LABEL_148:
  v382.m128i_i8[8] = 0;
  v133 = (__int64)*a4;
  if ( *a4 != (char *)v89 )
  {
    v384 = *a4;
    v134 = j__strlen("+");
    v135 = sub_9A3FC0((__int64)(v89 - 2), "+", v134);
    v133 = (__int64)v384;
    v382.m128i_i8[8] = v135;
  }
  v136 = 0;
  if ( (__int64 *)v133 != v97 )
  {
    v384 = (char *)v133;
    v137 = j__strlen("+");
    v138 = sub_9A3FC0((__int64)(v97 - 2), "+", v137);
    v133 = (__int64)v384;
    v136 = v138;
  }
  LOBYTE(v384) = 0;
  if ( (char *)v133 != v103 )
  {
    v388 = v133;
    v139 = j__strlen("+");
    v140 = sub_9A3FC0((__int64)(v103 - 16), "+", v139);
    v133 = v388;
    LOBYTE(v384) = v140;
  }
  v141 = 0;
  if ( (char *)v133 != v111 )
  {
    v388 = v133;
    v142 = j__strlen("+");
    v143 = sub_9A3FC0((__int64)(v111 - 16), "+", v142);
    v133 = v388;
    v141 = v143;
  }
  v144 = 0;
  if ( v133 != v122 )
  {
    v388 = v133;
    v145 = j__strlen("+");
    v146 = sub_9A3FC0(v122 - 16, "+", v145);
    v133 = v388;
    v144 = v146;
  }
  if ( v133 != v382.m128i_i64[0] )
  {
    if ( v382.m128i_i8[8] && v136 )
    {
      ptr.m256i_i64[0] = (__int64)"+crypto";
      ptr.m256i_i64[1] = j__strlen("+crypto");
      sub_1115760((__int64)a4, ptr.m256i_i64);
      goto LABEL_162;
    }
    ptr.m256i_i64[0] = (__int64)"-crypto";
    ptr.m256i_i64[1] = j__strlen("-crypto");
    sub_1115760((__int64)a4, ptr.m256i_i64);
    if ( v382.m128i_i8[8] )
LABEL_162:
      v147 = "+sha2";
    else
      v147 = "-sha2";
    ptr.m256i_i64[0] = (__int64)v147;
    ptr.m256i_i64[1] = j__strlen(v147);
    sub_1115760((__int64)a4, ptr.m256i_i64);
    if ( v136 )
    {
      ptr.m256i_i64[0] = (__int64)"+aes";
      ptr.m256i_i64[1] = j__strlen("+aes");
      sub_1115760((__int64)a4, ptr.m256i_i64);
      goto LABEL_165;
    }
    ptr.m256i_i64[0] = (__int64)"-aes";
    ptr.m256i_i64[1] = j__strlen("-aes");
    sub_1115760((__int64)a4, ptr.m256i_i64);
  }
  if ( v382.m128i_i8[8] || v136 )
  {
LABEL_165:
    ptr.m256i_i64[0] = (__int64)"+neon";
    ptr.m256i_i64[1] = j__strlen("+neon");
    sub_1115760((__int64)a4, ptr.m256i_i64);
    v148 = v393;
    v149 = v396;
    v150 = v397;
    sub_111D230((__int64)&ptr, (char *)s1, n, v397, v396, (__int64)v393);
    v151 = sub_111C8C0(ptr.m256i_i64[0], ptr.m256i_u64[1], (__int64)v150, v149, (__int64)v148);
    v153 = v152;
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
      operator delete((void *)ptr.m256i_i64[0]);
    v154 = sub_2278ED0(v151, v153);
    if ( (unsigned int)sub_2278E20(v151, v153) <= 7 || (unsigned int)(v154 - 1) > 1 )
    {
      if ( v382.m128i_i8[8] )
      {
        sub_FA3370((__int64)&ptr, *v394, 0, 630);
        sub_AC60B0((unsigned __int8 **)&ptr, (__int64)"sha2", 1u);
        v299 = sub_2278D80(v151, v153);
        v300 = (_BYTE *)sub_227BE40(v299);
        sub_AC84E0((unsigned __int8 **)&ptr, v300, v301);
        sub_AC6300((__int64)&ptr);
      }
      if ( v136 )
      {
        sub_FA3370((__int64)&ptr, *v394, 0, 630);
        sub_AC60B0((unsigned __int8 **)&ptr, (__int64)"aes", 1u);
        v296 = sub_2278D80(v151, v153);
        v297 = (_BYTE *)sub_227BE40(v296);
        sub_AC84E0((unsigned __int8 **)&ptr, v297, v298);
        sub_AC6300((__int64)&ptr);
      }
      if ( !sub_10B8FF0((__int64)v385, 0x4A5u) )
      {
        ptr.m256i_i64[0] = (__int64)"-sha2";
        ptr.m256i_i64[1] = j__strlen("-sha2");
        sub_1115760((__int64)a4, ptr.m256i_i64);
        ptr.m256i_i64[0] = (__int64)"-aes";
        ptr.m256i_i64[1] = j__strlen("-aes");
        sub_1115760((__int64)a4, ptr.m256i_i64);
      }
    }
  }
  else if ( v141 | (unsigned __int8)v384 || v144 )
  {
    ptr.m256i_i64[0] = (__int64)"+neon";
    ptr.m256i_i64[1] = j__strlen("+neon");
    sub_1115760((__int64)a4, ptr.m256i_i64);
  }
  v155 = sub_10B8FF0((__int64)v385, 0x951u);
  if ( v155 )
  {
    v156 = **(const char ***)(v155 + 48);
    v157 = 0;
    v418[0] = (size_t)v156;
    if ( v156 )
      v157 = j__strlen(v156);
    v418[1] = v157;
    v158 = j__strlen("aapcs");
    if ( sub_9A3FC0((__int64)v389, "aapcs", v158) )
    {
      ptr.m256i_i64[0] = (__int64)"+aapcs-frame-chain";
      ptr.m256i_i64[1] = j__strlen("+aapcs-frame-chain");
      sub_1115760((__int64)a4, ptr.m256i_i64);
    }
  }
  if ( sub_10B8FF0((__int64)v385, 0x90Cu) )
  {
    ptr.m256i_i64[0] = (__int64)"+8msecext";
    ptr.m256i_i64[1] = j__strlen("+8msecext");
    sub_1115760((__int64)a4, ptr.m256i_i64);
  }
  v159 = v385;
  v160 = (_QWORD *)sub_10BA920((__int64)v385, 0x93Bu, 0xA1Fu);
  if ( !v160 )
    goto LABEL_186;
  if ( sub_10B8FF0((__int64)v159, 0x90Cu) )
    goto LABEL_183;
  sub_FA3370((__int64)&ptr, *v394, 0, 54);
  v332 = (_QWORD *)v160[1];
  v333 = (__int64 *)v332[1];
  v334 = (_DWORD *)(v332[4] + 80LL * (unsigned int)(*(_DWORD *)(*v160 + 40LL) - 1));
  if ( *v334 )
  {
    v367 = *v333;
    v368 = (const char *)(*v333 + *(unsigned int *)(v332[2] + 4LL * (unsigned int)(*v334 + 1)));
    if ( v368 )
    {
      v335 = (unsigned int)j__strlen(v368);
      v337 = 0;
      v336 = (char *)((unsigned int)v334[1] + v367);
      if ( !v336 )
      {
LABEL_591:
        if ( v335 > v337 )
        {
          v336 += v337;
          v338 = 0;
          goto LABEL_593;
        }
LABEL_663:
        v336 += v335;
        v338 = v337 - v335;
        goto LABEL_593;
      }
    }
    else
    {
      v335 = 0;
      v336 = (char *)((unsigned int)v334[1] + v367);
      if ( !v336 )
      {
        v337 = 0;
        v335 = 0;
        goto LABEL_663;
      }
    }
LABEL_590:
    v337 = j__strlen(v336);
    goto LABEL_591;
  }
  v335 = 0;
  v336 = (char *)(*v333 + (unsigned int)v334[1]);
  if ( v336 )
    goto LABEL_590;
  v338 = 0;
LABEL_593:
  sub_AC84E0((unsigned __int8 **)&ptr, v336, v338);
  sub_AC60B0((unsigned __int8 **)&ptr, (__int64)"-mcmse", 1u);
  sub_AC6300((__int64)&ptr);
LABEL_183:
  v161 = "+fix-cmse-cve-2021-35465";
  if ( !(unsigned __int8)sub_2195AD0(v160, 2363) )
    v161 = "-fix-cmse-cve-2021-35465";
  ptr.m256i_i64[0] = (__int64)v161;
  ptr.m256i_i64[1] = j__strlen(v161);
  sub_1115760((__int64)a4, ptr.m256i_i64);
LABEL_186:
  v162 = sub_10BA920((__int64)v385, 0x93Eu, 0xA22u);
  if ( v162 )
  {
    v163 = "+fix-cortex-a57-aes-1742098";
    if ( !(unsigned __int8)sub_2195AD0(v162, 2366) )
      v163 = "-fix-cortex-a57-aes-1742098";
    ptr.m256i_i64[0] = (__int64)v163;
    ptr.m256i_i64[1] = j__strlen(v163);
    sub_1115760((__int64)a4, ptr.m256i_i64);
  }
  v164 = sub_10BA920((__int64)v385, 0x9A3u, 0xA49u);
  if ( v164 )
  {
    if ( !(unsigned __int8)sub_2195AD0(v164, 2467) )
      goto LABEL_192;
LABEL_333:
    ptr.m256i_i64[0] = (__int64)"+long-calls";
    ptr.m256i_i64[1] = j__strlen("+long-calls");
    sub_1115760((__int64)a4, ptr.m256i_i64);
    goto LABEL_192;
  }
  if ( v399 )
  {
    v244 = v393[11];
    if ( v244 == 27 || v244 == 5 )
    {
      v295 = v393;
      if ( (unsigned int)sub_2293DC0(v393) > 5 )
        goto LABEL_192;
      v244 = v295[11];
    }
    if ( v244 != 28 && v244 != 31 )
      goto LABEL_333;
  }
LABEL_192:
  if ( !(_BYTE)v402 && !(_BYTE)v405 )
  {
    v165 = sub_10BA920((__int64)v385, 0x934u, 0xA1Bu);
    v382.m128i_i64[0] = v165;
    if ( v165 )
    {
      if ( (unsigned __int8)sub_2195AD0(v165, 2356) )
      {
        v166 = sub_2293740(v393);
        if ( (int)sub_2278E20(v166, v167) <= 6 )
        {
          v168 = v393;
          v169 = sub_2293740(v393);
          if ( (unsigned int)sub_2278D80(v169, v170) != 8 )
          {
            v171 = sub_2293740(v168);
            if ( (unsigned int)sub_2278D80(v171, v172) != 10 )
            {
              sub_FA3370((__int64)&ptr, *v394, 0, 72);
              v173 = (_BYTE *)sub_2293740(v168);
              sub_AC84E0((unsigned __int8 **)&ptr, v173, v174);
              sub_AC6300((__int64)&ptr);
              goto LABEL_212;
            }
          }
        }
        v179 = sub_2293740(v393);
        if ( (unsigned int)sub_2278D80(v179, v180) == 10 )
        {
          v346 = v385;
          *(__m128i *)ptr.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_2385910);
          ptr.m256i_i64[2] = 0x64900000647LL;
          v347 = sub_2193060(v385, &ptr, 6);
          v348 = v346[1];
          v419.m128i_i64[0] = 0x64900000647LL;
          v422 = (char *)0x64900000647LL;
          v349 = v348 + 8LL * (unsigned int)v347;
          v350 = v348 + 8 * HIDWORD(v347);
          *(__m128i *)v418 = _mm_load_si128((const __m128i *)&xmmword_2385910);
          v382.m128i_i64[1] = v350;
          *(_OWORD *)&ptr.m256i_u64[2] = *(_OWORD *)v418;
          v351 = _mm_loadh_ps((const double *)&v382.m128i_i64[1]);
          *(__m128 *)ptr.m256i_i8 = v351;
          if ( v349 != v350 )
          {
            do
            {
              v352 = *(_QWORD *)v349;
              v353 = &ptr;
              if ( *(_QWORD *)v349 )
              {
                do
                {
                  v354 = v353->m256i_u32[4];
                  if ( !(_DWORD)v354 )
                    break;
                  if ( (unsigned __int8)sub_2195AD0(v352, v354) )
                  {
                    v382.m128i_i64[1] = v350;
                    v351 = _mm_loadh_ps((const double *)&v382.m128i_i64[1]);
                    goto LABEL_626;
                  }
                  v353 = (__m256i *)((char *)v353 + 4);
                }
                while ( v353 != (__m256i *)&ptr.m256i_u64[3] );
              }
              v349 += 8;
              ptr.m256i_i64[0] = v349;
            }
            while ( v350 != v349 );
            v382.m128i_i64[1] = v350;
            v355 = _mm_loadl_epi64((const __m128i *)&v382.m128i_u64[1]);
            v351 = (__m128)_mm_unpacklo_epi64(v355, v355);
          }
LABEL_626:
          *(__m128 *)ptr.m256i_i8 = v351;
          if ( v350 != v349 )
          {
LABEL_627:
            v356 = *(_QWORD *)v349;
            v357 = (__int64 *)(v349 + 8);
            v358 = *(_QWORD *)(*(_QWORD *)v349 + 16LL);
            v382.m128i_i64[1] = *(_QWORD *)v349;
            if ( !v358 )
              v358 = v356;
            *(_BYTE *)(v358 + 44) |= 1u;
            for ( ptr.m256i_i64[0] = v349 + 8; (__int64 *)v350 != v357; ptr.m256i_i64[0] = (__int64)v357 )
            {
              v359 = *v357;
              v360 = &ptr;
              if ( *v357 )
              {
                do
                {
                  v361 = v360->m256i_u32[4];
                  if ( !(_DWORD)v361 )
                    break;
                  if ( (unsigned __int8)sub_2195AD0(v359, v361) )
                  {
                    v349 = ptr.m256i_i64[0];
                    if ( ptr.m256i_i64[0] != v350 )
                      goto LABEL_627;
                    goto LABEL_635;
                  }
                  v360 = (__m256i *)((char *)v360 + 4);
                }
                while ( &ptr.m256i_u64[3] != (unsigned __int64 *)v360 );
              }
              ++v357;
            }
LABEL_635:
            sub_FA3370((__int64)&ptr, *v394, 0, 53);
            v362 = v385;
            sub_21922B0(v416, v382.m128i_i64[0], v385);
            sub_AC84E0((unsigned __int8 **)&ptr, (_BYTE *)v416[0], (signed __int64)v416[1]);
            v363 = v362;
            v364 = v389;
            sub_21922B0(v389, v382.m128i_i64[1], v363);
            sub_AC84E0((unsigned __int8 **)&ptr, (_BYTE *)v418[0], v418[1]);
            v365 = (_BYTE *)sub_2293740(v393);
            sub_AC84E0((unsigned __int8 **)&ptr, v365, v366);
            v185 = (void *)v418[0];
            if ( (__int64 *)v418[0] != v364 + 2 )
LABEL_208:
              operator delete(v185);
LABEL_209:
            if ( v416[0] != &v417 )
              operator delete(v416[0]);
            sub_AC6300((__int64)&ptr);
          }
        }
        else
        {
          v181 = v385;
          v182 = sub_10B8FF0((__int64)v385, 0xA5Cu);
          if ( v182 )
          {
            sub_FA3370((__int64)&ptr, *v394, 0, 52);
            sub_21922B0(v416, v382.m128i_i64[0], v181);
            sub_AC84E0((unsigned __int8 **)&ptr, (_BYTE *)v416[0], (signed __int64)v416[1]);
            v183 = v181;
            v184 = v389;
            sub_21922B0(v389, v182, v183);
            sub_AC84E0((unsigned __int8 **)&ptr, (_BYTE *)v418[0], v418[1]);
            v185 = (void *)v418[0];
            if ( (__int64 *)v418[0] != v184 + 2 )
              goto LABEL_208;
            goto LABEL_209;
          }
        }
LABEL_212:
        ptr.m256i_i64[0] = (__int64)"+execute-only";
        ptr.m256i_i64[1] = j__strlen("+execute-only");
        sub_1115760((__int64)a4, ptr.m256i_i64);
      }
    }
  }
  v186 = v385;
  *(__m128i *)ptr.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_2385920);
  v187 = sub_2193060(v385, &ptr, 4);
  v188 = v186[1];
  *(__m128i *)&ptr.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_2385920);
  v382.m128i_i64[0] = v188 + 8 * HIDWORD(v187);
  v189 = _mm_loadl_epi64(&v382);
  v382.m128i_i64[1] = v188 + 8LL * (unsigned int)v187;
  *(__m128i *)ptr.m256i_i8 = _mm_unpacklo_epi64(v189, v189);
  sub_111F040((__int64)&ptr);
  *(__m128 *)v418 = _mm_loadh_ps((const double *)v382.m128i_i64);
  v419 = _mm_load_si128((const __m128i *)&xmmword_2385920);
  sub_111F040((__int64)v389);
  v190 = _mm_load_si128((const __m128i *)v418);
  v191 = v418[0];
  v192 = v418[1];
  v193 = _mm_load_si128(&v419);
  v382.m128i_i64[0] = ptr.m256i_i64[0];
  *(__m128i *)ptr.m256i_i8 = v190;
  *(__m128i *)&ptr.m256i_u64[2] = v193;
  if ( v418[0] == v382.m128i_i64[0] )
  {
    v325 = v393;
    v326 = sub_2293740(v393);
    v328 = sub_2278E20(v326, v327);
    v329 = (unsigned int)v325[11];
    if ( (unsigned int)v329 <= 0x1F && (v339 = 4160752162LL, _bittest64(&v339, v329)) )
    {
      if ( v328 <= 5 || v393[9] == 29 )
      {
LABEL_224:
        ptr.m256i_i64[0] = (__int64)"+strict-align";
        ptr.m256i_i64[1] = j__strlen("+strict-align");
        sub_1115760((__int64)a4, ptr.m256i_i64);
      }
    }
    else
    {
      if ( v393[10] == 1 && v393[13] == 5 )
        goto LABEL_224;
      if ( v328 <= 6 )
        goto LABEL_224;
      v330 = v393[9];
      if ( v330 == 19 || v330 == 29 )
        goto LABEL_224;
    }
    if ( !sub_10B8FF0((__int64)v385, 0x2EFu) )
      goto LABEL_227;
    goto LABEL_226;
  }
  do
  {
LABEL_214:
    v194 = *(_QWORD *)v191;
    v195 = *(_QWORD *)(*(_QWORD *)v191 + 16LL);
    v382.m128i_i64[1] = *(_QWORD *)v191;
    if ( !v195 )
      v195 = v194;
    v191 += 8LL;
    *(_BYTE *)(v195 + 44) |= 1u;
    for ( ptr.m256i_i64[0] = v191; v192 != v191; ptr.m256i_i64[0] = v191 )
    {
      v196 = *(_QWORD *)v191;
      v197 = &ptr;
      if ( *(_QWORD *)v191 )
      {
        do
        {
          v198 = v197->m256i_u32[4];
          if ( !(_DWORD)v198 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v196, v198) )
          {
            v191 = ptr.m256i_i64[0];
            if ( ptr.m256i_i64[0] != v382.m128i_i64[0] )
              goto LABEL_214;
            goto LABEL_223;
          }
          v197 = (__m256i *)((char *)v197 + 4);
        }
        while ( &ptr.m256i_u64[2] != (unsigned __int64 *)v197 );
      }
      v191 += 8LL;
    }
  }
  while ( v191 != v382.m128i_i64[0] );
LABEL_223:
  if ( v399
    || (unsigned __int8)sub_2195AD0(v382.m128i_i64[1], 2746)
    || (unsigned __int8)sub_2195AD0(v382.m128i_i64[1], 2895) )
  {
    goto LABEL_224;
  }
  v267 = v393[9];
  if ( v267 == 29 )
  {
    sub_FA3370((__int64)&ptr, *v394, 0, 76);
    sub_AC60B0((unsigned __int8 **)&ptr, (__int64)"v6m", 1u);
    sub_AC6300((__int64)&ptr);
  }
  else if ( v267 == 19 )
  {
    sub_FA3370((__int64)&ptr, *v394, 0, 76);
    sub_AC60B0((unsigned __int8 **)&ptr, (__int64)"v8m.base", 1u);
    sub_AC6300((__int64)&ptr);
  }
  if ( sub_10B8FF0((__int64)v385, 0x2EFu) )
  {
LABEL_226:
    ptr.m256i_i64[0] = (__int64)"+reserve-r9";
    ptr.m256i_i64[1] = j__strlen("+reserve-r9");
    sub_1115760((__int64)a4, ptr.m256i_i64);
LABEL_227:
    if ( !v399 )
      goto LABEL_390;
    goto LABEL_228;
  }
LABEL_390:
  if ( sub_10B8FF0((__int64)v385, 0xA5Cu) )
  {
LABEL_228:
    ptr.m256i_i64[0] = (__int64)"+no-movt";
    ptr.m256i_i64[1] = j__strlen("+no-movt");
    sub_1115760((__int64)a4, ptr.m256i_i64);
  }
  if ( sub_10B8FF0((__int64)v385, 0xA65u) )
  {
    ptr.m256i_i64[0] = (__int64)"+no-neg-immediates";
    ptr.m256i_i64[1] = j__strlen("+no-neg-immediates");
    sub_1115760((__int64)a4, ptr.m256i_i64);
  }
  v199 = sub_10B8FF0((__int64)v385, 0x964u);
  v200 = v199;
  if ( !v199 )
    goto LABEL_271;
  v201 = **(char ***)(v199 + 48);
  v412 = v201;
  if ( v201 )
  {
    v202 = j__strlen(v201);
    v413 = v202;
    v203 = j__strlen("none");
    if ( v203 == v202 && (!v203 || !memcmp(v201, "none", v203)) )
      goto LABEL_271;
  }
  else
  {
    v413 = 0;
    if ( !j__strlen("none") )
      goto LABEL_271;
  }
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
  ptr.m256i_i64[1] = 0x400000000LL;
  v204 = j__strlen(",");
  sub_2223490(&v412, &ptr, ",", v204, 0xFFFFFFFFLL, 1);
  v205 = (const __m128i *)ptr.m256i_i64[0];
  v206 = (__m256i *)(ptr.m256i_i64[0] + 16LL * ptr.m256i_u32[2]);
  v207 = v206;
  if ( (__m256i *)ptr.m256i_i64[0] != v206 )
  {
    LOBYTE(v384) = 0;
    v382.m128i_i8[8] = 0;
    v382.m128i_i8[0] = 0;
    n = v200;
    v388 = (__int64)&ptr;
    v208 = ptr.m256i_i64[0] + 16LL * ptr.m256i_u32[2];
    while ( 1 )
    {
      v209 = nullptr;
      *(__m128i *)v416 = _mm_loadu_si128(v205);
      v210 = j__strlen(asc_22BE270);
      v211 = (void *)sub_2223270(v416, asc_22BE270, v210, 0);
      v212 = v416[1];
      if ( v211 < v416[1] )
      {
        v209 = (char *)((char *)v416[1] - (char *)v211);
        v212 = v211;
      }
      v418[0] = (size_t)v416[0] + (unsigned __int64)v212;
      v418[1] = (size_t)v209;
      v213 = sub_22233F0(v389, asc_22BE270, v210, -1) + 1;
      if ( v213 > v418[1] )
        v213 = v418[1];
      v214 = v213;
      v215 = v418[1] - (_QWORD)v209;
      v216 = (const void *)v418[0];
      v217 = (void *)(v215 + v214);
      v416[0] = (void *)v418[0];
      if ( (unsigned __int64)v217 > v418[1] )
        v217 = (void *)v418[1];
      v416[1] = v217;
      if ( (void *)j__strlen("all") == v217 )
        break;
      v227 = j__strlen("retbr");
      if ( (void *)v227 == v217 )
      {
        if ( !v227 )
        {
LABEL_289:
          v382.m128i_i8[0] = 1;
          goto LABEL_283;
        }
LABEL_246:
        if ( !memcmp(v216, "retbr", (size_t)v217) )
          goto LABEL_289;
LABEL_247:
        if ( (void *)j__strlen("blr") == v217 )
          goto LABEL_248;
        goto LABEL_253;
      }
      v240 = j__strlen("blr");
      if ( (void *)v240 == v217 )
      {
        if ( !v240 )
        {
LABEL_320:
          v382.m128i_i8[8] = 1;
          goto LABEL_283;
        }
LABEL_248:
        if ( !memcmp(v216, "blr", (size_t)v217) )
          goto LABEL_320;
        if ( (void *)j__strlen("comdat") == v217 )
          goto LABEL_255;
        goto LABEL_250;
      }
LABEL_253:
      if ( (void *)j__strlen("comdat") == v217 )
      {
        if ( !v217 )
          goto LABEL_282;
LABEL_255:
        if ( !memcmp(v216, "comdat", (size_t)v217) )
        {
LABEL_282:
          LOBYTE(v384) = 0;
          goto LABEL_283;
        }
        if ( (void *)j__strlen("nocomdat") != v217 )
          goto LABEL_258;
LABEL_257:
        if ( memcmp(v216, "nocomdat", (size_t)v217) )
        {
LABEL_258:
          v218 = (unsigned __int8 **)v389;
          v200 = n;
          p_ptr = (unsigned __int8 **)v388;
          sub_FA3370((__int64)v389, *v394, 0, 497);
          sub_AC84E0(v218, *(_BYTE **)(v200 + 24), *(_QWORD *)(v200 + 32));
          sub_AC84E0(v218, v412, v413);
          sub_AC6300((__int64)v218);
          v219 = v382.m128i_i8[8] | v382.m128i_i8[0];
          v207 = (__m256i *)ptr.m256i_i64[0];
          goto LABEL_259;
        }
        goto LABEL_252;
      }
LABEL_250:
      if ( (void *)j__strlen("nocomdat") != v217 )
        goto LABEL_258;
      if ( v217 )
        goto LABEL_257;
LABEL_252:
      LOBYTE(v384) = 1;
LABEL_283:
      if ( (const __m128i *)v208 == ++v205 )
      {
        v200 = n;
        p_ptr = (unsigned __int8 **)v388;
        v219 = v382.m128i_i8[8] | v382.m128i_i8[0];
        v207 = (__m256i *)ptr.m256i_i64[0];
LABEL_259:
        if ( v207 != (__m256i *)(p_ptr + 2) )
LABEL_260:
          free(v207);
        if ( v219 )
        {
          v220 = sub_2293740(v393);
          if ( (unsigned int)sub_2278ED0(v220, v221) != 1
            || (v302 = sub_2293740(v393), (int)sub_2278E20(v302, v303) <= 6) )
          {
            sub_FA3370((__int64)p_ptr, *v394, 0, 511);
            sub_AC84E0(p_ptr, v412, v413);
            v222 = v389;
            sub_21922B0(v389, v200, v385);
            sub_AC84E0(p_ptr, (_BYTE *)v418[0], v418[1]);
            if ( (__int64 *)v418[0] != v222 + 2 )
              operator delete((void *)v418[0]);
            sub_AC6300((__int64)p_ptr);
          }
          if ( !v382.m128i_i8[0]
            || (ptr.m256i_i64[0] = (__int64)"+harden-sls-retbr",
                ptr.m256i_i64[1] = j__strlen("+harden-sls-retbr"),
                sub_1115760((__int64)a4, (__int64 *)p_ptr),
                v382.m128i_i8[8]) )
          {
            ptr.m256i_i64[0] = (__int64)"+harden-sls-blr";
            ptr.m256i_i64[1] = j__strlen("+harden-sls-blr");
            sub_1115760((__int64)a4, (__int64 *)p_ptr);
          }
        }
        if ( (_BYTE)v384 )
        {
          ptr.m256i_i64[0] = (__int64)"+harden-sls-nocomdat";
          ptr.m256i_i64[1] = j__strlen("+harden-sls-nocomdat");
          sub_1115760((__int64)a4, (__int64 *)p_ptr);
        }
        goto LABEL_271;
      }
    }
    if ( !v217 || !memcmp(v216, "all", (size_t)v217) )
    {
      v382.m128i_i8[8] = 1;
      v382.m128i_i8[0] = 1;
      goto LABEL_283;
    }
    if ( (void *)j__strlen("retbr") == v217 )
      goto LABEL_246;
    goto LABEL_247;
  }
  if ( v206 != (__m256i *)&ptr.m256i_u64[2] )
  {
    LOBYTE(v384) = 0;
    v219 = 0;
    v382.m128i_i8[8] = 0;
    v382.m128i_i8[0] = 0;
    goto LABEL_260;
  }
LABEL_271:
  if ( sub_10B8FF0((__int64)v385, 0x9FEu) )
  {
    ptr.m256i_i64[0] = (__int64)"+no-bti-at-return-twice";
    ptr.m256i_i64[1] = j__strlen("+no-bti-at-return-twice");
    sub_1115760((__int64)a4, (__int64 *)p_ptr);
  }
  if ( !(_BYTE)v386 )
  {
    v223 = sub_111BD30((__int64)v385, 0xB3Au, 0x962u, 2371);
    v224 = v223;
    if ( v223 )
    {
      if ( (unsigned __int8)sub_2195AD0(v223, 2402) )
        goto LABEL_276;
      if ( (unsigned __int8)sub_2195AD0(v224, 2371) )
      {
        v292 = j__strlen("hard");
        v293 = *(const char ***)(v224 + 48);
        v294 = *v293;
        if ( *v293 )
        {
          if ( v292 != j__strlen(*v293) || v292 && memcmp(v294, "hard", v292) )
            goto LABEL_279;
        }
        else if ( v292 )
        {
          goto LABEL_279;
        }
LABEL_276:
        sub_FA3370((__int64)p_ptr, *v394, 0, 580);
        v225 = v389;
        sub_21922B0(v389, v224, v385);
        sub_AC84E0(p_ptr, (_BYTE *)v418[0], v418[1]);
        if ( (__int64 *)v418[0] != v225 + 2 )
          operator delete((void *)v418[0]);
        sub_AC6300((__int64)p_ptr);
      }
    }
  }
LABEL_279:
  if ( v414[0] )
    operator delete(v414[0]);
  return (unsigned int)v383;
}

