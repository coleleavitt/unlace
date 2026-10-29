__int64 __fastcall CoinMpsIO::readMps(CoinMpsIO *this, int *a2, CoinSet ***a3, __m128d a4)
{
  CoinMpsIO *v4; // r14
  int v5; // eax
  __int64 v6; // rax
  size_t v7; // r12
  int v8; // eax
  int v9; // r15d
  int v10; // r13d
  bool v11; // cc
  __int64 v12; // r12
  double *v13; // r15
  int v14; // edx
  int v15; // eax
  int v16; // eax
  CoinPackedMatrix *v17; // r12
  CoinMessageHandler *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  CoinMessageHandler *v23; // rax
  CoinMessageHandler *v24; // rax
  CoinMessageHandler *v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // rax
  int v28; // edx
  int v29; // ecx
  __int64 v30; // r8
  int v31; // edx
  CoinMessageHandler *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v39; // rax
  int v40; // r8d
  size_t v41; // rdx
  char *v42; // r15
  CoinMessageHandler *v43; // rax
  CoinMessageHandler *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // ebx
  void *v51; // r12
  void *v52; // r13
  char *v53; // rax
  size_t v54; // rdx
  unsigned int v55; // eax
  char v56; // bl
  char *v57; // rsi
  char *v58; // rax
  const char *v59; // rdx
  __int64 v60; // r15
  __int64 v61; // rax
  char *v62; // r15
  CoinMessageHandler *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  CoinMessageHandler *v68; // rax
  CoinMessageHandler *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  int v75; // eax
  CoinMessageHandler *v76; // r12
  __int64 v77; // rax
  CoinMessageHandler *v78; // rax
  CoinMessageHandler *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // r15
  int v86; // ebx
  char **v87; // rbx
  int v88; // r12d
  unsigned __int64 v89; // rbx
  size_t v90; // r13
  __int64 v91; // r12
  int v92; // eax
  char *v93; // r13
  char v94; // r12
  double v95; // xmm1_8
  unsigned __int64 v96; // xmm2_8
  __int64 v97; // rax
  int v98; // r12d
  char *v99; // rax
  char *v100; // r13
  __int64 v101; // rax
  int v102; // edx
  char *v103; // rax
  __int64 v104; // rdx
  char *v105; // rax
  CoinMpsCardReader *v106; // rdx
  __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  int v111; // r13d
  int v112; // r12d
  __int64 v113; // rax
  char *v114; // rdi
  __int64 v115; // rdi
  int v116; // eax
  int v117; // eax
  CoinSet **v118; // rax
  int v119; // edx
  __int64 v120; // rax
  __int64 v121; // rdx
  unsigned __int64 *v122; // rcx
  __m128d v123; // xmm14
  double v124; // xmm1_8
  __m128d v125; // xmm12
  double *v126; // rdx
  double v127; // xmm1_8
  __m128d v128; // xmm12
  int v129; // eax
  CoinMessageHandler *v130; // rax
  CoinMessageHandler *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rax
  __int64 v136; // rax
  const char *v137; // r15
  int v138; // edx
  __int64 v139; // r13
  char *v140; // rax
  int v141; // eax
  int v142; // eax
  char *v143; // rcx
  __int64 v144; // rdx
  double *v145; // rax
  __int64 v146; // rax
  CoinMessageHandler *v147; // rax
  CoinMessageHandler *v148; // rax
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  int Hash; // eax
  void *v154; // rax
  int v155; // esi
  int v156; // ecx
  int *v157; // rax
  unsigned __int64 v158; // rsi
  __int64 v159; // rcx
  char *v160; // rax
  int v161; // eax
  size_t v162; // r15
  size_t v163; // r13
  double *v164; // rax
  CoinMessageHandler *v165; // rdi
  const CoinMessages *v166; // rdx
  int v167; // esi
  CoinMessageHandler *v168; // rax
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // r12
  void *v173; // r15
  size_t v174; // rsi
  size_t v175; // r12
  int *v176; // rax
  __int64 v177; // r12
  int v178; // edx
  size_t v179; // r13
  char *v180; // rax
  char *v181; // r12
  __int64 v182; // rax
  int v183; // edx
  char *v184; // rax
  __int64 v185; // r13
  int v186; // r12d
  CoinMpsCardReader *v187; // rdi
  __int64 v188; // r8
  double v189; // xmm2_8
  int v190; // esi
  unsigned __int64 *v191; // rcx
  __int64 v192; // rax
  int v193; // r14d
  double *v194; // rdx
  CoinMpsIO *v195; // r14
  CoinMessageHandler *v196; // rax
  CoinMessageHandler *v197; // rax
  __int64 v198; // rdx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rax
  int v202; // eax
  __int64 v203; // rdx
  int v204; // esi
  CoinSosSet *v205; // r12
  __int64 v206; // rax
  __int64 v207; // rsi
  CoinMessageHandler *v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // rax
  int v214; // esi
  CoinMessageHandler *v215; // rdi
  const CoinMessages *v216; // rdx
  CoinMessageHandler *v217; // rax
  __int64 v218; // rdx
  __int64 v219; // r8
  __int64 v220; // r9
  CoinMessageHandler *v221; // rax
  CoinMessageHandler *v222; // rax
  __int64 v223; // rdx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rax
  int v227; // ebx
  char v228; // r13
  int v229; // eax
  size_t v230; // r8
  CoinMpsCardReader *i; // rdi
  __int64 v232; // rax
  int v233; // eax
  unsigned __int64 *v234; // rax
  CoinMessageHandler *v235; // rdi
  const CoinMessages *v236; // rdx
  int v237; // esi
  CoinMessageHandler *v238; // rax
  __int64 v239; // rdx
  __int64 v240; // r8
  __int64 v241; // r9
  CoinMessageHandler *v242; // rax
  CoinMessageHandler *v243; // rax
  __int64 v244; // rdx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // rax
  CoinMessageHandler *v248; // rdi
  const CoinMessages *v249; // rdx
  int v250; // esi
  CoinMessageHandler *v251; // rax
  CoinMessageHandler *v252; // rax
  __int64 v253; // rdx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rax
  int v257; // r12d
  CoinMpsCardReader *v258; // rdi
  char *v259; // r15
  __int64 v260; // rax
  char *v261; // rax
  __int64 v262; // rcx
  double v263; // xmm1_8
  __int64 v264; // r9
  unsigned int *v265; // r11
  unsigned int v266; // r10d
  bool v267; // r15
  int v268; // eax
  _BYTE *v269; // r9
  _DWORD *v270; // rcx
  __int64 v271; // rdx
  __int64 v272; // rdx
  char *v273; // r9
  unsigned int *v274; // r11
  unsigned int v275; // r10d
  __int64 v276; // rdx
  int *v277; // rdx
  int v278; // esi
  int *v279; // rdx
  int v280; // ecx
  double v281; // xmm0_8
  __int64 v282; // r9
  unsigned int *v283; // r11
  unsigned int v284; // r10d
  int v285; // eax
  __int64 v286; // rcx
  _DWORD *v287; // rdx
  double v288; // xmm0_8
  bool v289; // zf
  __int64 v290; // r9
  unsigned __int64 v291; // r10
  __int64 v292; // rax
  __int64 v293; // rax
  double v294; // xmm0_8
  __int64 v295; // r9
  __int64 v296; // r10
  unsigned int *v297; // r8
  unsigned __int64 v298; // r11
  double *v299; // r10
  __int64 v300; // rax
  __int64 v301; // rax
  double v302; // xmm0_8
  int v303; // eax
  _DWORD *v304; // rdx
  __int64 v305; // rcx
  _BYTE *v306; // rax
  CoinMessageHandler *v307; // rax
  __int64 v308; // rdx
  __int64 v309; // r8
  __int64 v310; // r9
  CoinMessageHandler *v311; // rax
  CoinMessageHandler *v312; // rax
  __int64 v313; // rdx
  __int64 v314; // r8
  __int64 v315; // r9
  __int64 v316; // rax
  CoinMessageHandler *v317; // rax
  __int64 v318; // rdx
  __int64 v319; // r8
  __int64 v320; // r9
  CoinMessageHandler *v321; // rax
  CoinMessageHandler *v322; // rax
  __int64 v323; // rdx
  __int64 v324; // r8
  __int64 v325; // r9
  __int64 v326; // rax
  int v327; // esi
  CoinSosSet *v328; // r12
  __int64 v329; // rdx
  __int64 v330; // rax
  __int64 v331; // rcx
  __int64 v332; // rdx
  __int64 v333; // rax
  __int64 v334; // rdx
  CoinMpsCardReader *v335; // rdi
  __int64 v336; // rax
  __int64 v337; // [rsp+0h] [rbp-4B0h]
  __int64 v338; // [rsp+0h] [rbp-4B0h]
  __int64 v339; // [rsp+0h] [rbp-4B0h]
  __int64 v340; // [rsp+0h] [rbp-4B0h]
  _DWORD *v341; // [rsp+8h] [rbp-4A8h]
  char *v342; // [rsp+10h] [rbp-4A0h]
  char v343; // [rsp+1Bh] [rbp-495h]
  int v344; // [rsp+1Ch] [rbp-494h]
  char *v345; // [rsp+20h] [rbp-490h]
  _BYTE *v346; // [rsp+20h] [rbp-490h]
  void *v347; // [rsp+20h] [rbp-490h]
  int v348; // [rsp+28h] [rbp-488h]
  _DWORD *v349; // [rsp+28h] [rbp-488h]
  __int64 v350; // [rsp+28h] [rbp-488h]
  __int64 v351; // [rsp+28h] [rbp-488h]
  unsigned int v352; // [rsp+28h] [rbp-488h]
  __int64 v353; // [rsp+28h] [rbp-488h]
  __int64 v354; // [rsp+28h] [rbp-488h]
  char *v355; // [rsp+30h] [rbp-480h]
  char *v356; // [rsp+30h] [rbp-480h]
  char *v357; // [rsp+30h] [rbp-480h]
  int v358; // [rsp+30h] [rbp-480h]
  char *v359; // [rsp+30h] [rbp-480h]
  char *v360; // [rsp+30h] [rbp-480h]
  char *v361; // [rsp+30h] [rbp-480h]
  char *v362; // [rsp+30h] [rbp-480h]
  char *v363; // [rsp+30h] [rbp-480h]
  char *v364; // [rsp+30h] [rbp-480h]
  int v365; // [rsp+38h] [rbp-478h]
  char **v366; // [rsp+38h] [rbp-478h]
  char **v367; // [rsp+38h] [rbp-478h]
  char **v368; // [rsp+38h] [rbp-478h]
  unsigned int v369; // [rsp+38h] [rbp-478h]
  unsigned int v370; // [rsp+38h] [rbp-478h]
  char **v371; // [rsp+38h] [rbp-478h]
  unsigned int v372; // [rsp+38h] [rbp-478h]
  unsigned int v373; // [rsp+38h] [rbp-478h]
  int v374; // [rsp+38h] [rbp-478h]
  size_t v375; // [rsp+40h] [rbp-470h]
  double *v376; // [rsp+40h] [rbp-470h]
  int v377; // [rsp+40h] [rbp-470h]
  size_t v378; // [rsp+40h] [rbp-470h]
  char v379; // [rsp+40h] [rbp-470h]
  size_t v380; // [rsp+40h] [rbp-470h]
  size_t v381; // [rsp+40h] [rbp-470h]
  int size; // [rsp+48h] [rbp-468h]
  int sizea; // [rsp+48h] [rbp-468h]
  int *sizeb; // [rsp+48h] [rbp-468h]
  int sizee; // [rsp+48h] [rbp-468h]
  int sizef; // [rsp+48h] [rbp-468h]
  char sizec; // [rsp+48h] [rbp-468h]
  char sized; // [rsp+48h] [rbp-468h]
  char *src; // [rsp+50h] [rbp-460h]
  char *srca; // [rsp+50h] [rbp-460h]
  _DWORD *srcb; // [rsp+50h] [rbp-460h]
  int *ptr; // [rsp+60h] [rbp-450h]
  char ptra; // [rsp+60h] [rbp-450h]
  void *ptrb; // [rsp+60h] [rbp-450h]
  char *ptrc; // [rsp+60h] [rbp-450h]
  CoinMpsIO *ptrd; // [rsp+60h] [rbp-450h]
  int *v399; // [rsp+70h] [rbp-440h]
  int v400; // [rsp+70h] [rbp-440h]
  _DWORD *v401; // [rsp+70h] [rbp-440h]
  int v402; // [rsp+78h] [rbp-438h]
  char *v403; // [rsp+78h] [rbp-438h]
  int v404; // [rsp+78h] [rbp-438h]
  char *v405; // [rsp+78h] [rbp-438h]
  int v406; // [rsp+84h] [rbp-42Ch] BYREF
  int v407; // [rsp+88h] [rbp-428h] BYREF
  int v408; // [rsp+8Ch] [rbp-424h] BYREF
  char s[1056]; // [rsp+90h] [rbp-420h] BYREF

  v4 = this;
  CoinMpsCardReader::readToNextSection(*((CoinMpsCardReader **)this + 34));
  v5 = *(_DWORD *)(*((_QWORD *)this + 34) + 1240LL);
  if ( v5 == 1 )
  {
    free(*(void **)this);
    v39 = CoinStrdup((const char *)(*((_QWORD *)this + 34) + 1068LL));
    v40 = *((_DWORD *)this + 71);
    *(_QWORD *)this = v39;
    *((_QWORD *)this + 17) = 0;
    if ( v40 )
      *(_BYTE *)(*((_QWORD *)this + 34) + 1472LL) = 1;
    CoinMpsCardReader::nextField(*((CoinMpsCardReader **)this + 34));
    v41 = *((_QWORD *)this + 34);
    v42 = (char *)(v41 + 8);
    if ( !memcmp((const void *)(v41 + 8), "OBJSENSE", 8u) )
    {
      v403 = *((char **)v4 + 34);
      CoinMpsCardReader::strcpyAndCompress((CoinMpsCardReader *)s, (char *)(v41 + 8), (const char *)v41);
      v56 = 0;
      if ( strlen(s) > 0xA )
      {
        v56 = 1;
        v42 = v403 + 16;
      }
      CoinMpsCardReader::nextField(*((CoinMpsCardReader **)v4 + 34));
      v57 = v42;
      while ( 1 )
      {
        v58 = v57;
        if ( *v57 != 32 )
          break;
        if ( v42 + 20 == ++v57 )
          goto LABEL_165;
      }
      v59 = "MAX";
      if ( !memcmp(v57, "MAX", 3u) || (v59 = "MIN", !memcmp(v58, "MIN", 3u)) )
        printf("%s found after OBJSENSE - Coin ignores\n", v59);
      else
LABEL_165:
        puts("No MAX/MIN found after OBJSENSE");
      v41 = *((_QWORD *)v4 + 34);
      if ( !v56 )
      {
        CoinMpsCardReader::nextField(*((CoinMpsCardReader **)v4 + 34));
        v41 = *((_QWORD *)v4 + 34);
      }
    }
    if ( *(_DWORD *)(v41 + 1240) != 2 )
    {
      v43 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)v4 + 28),
                                    3,
                                    (CoinMpsIO *)((char *)v4 + 240));
      v44 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v43);
      v48 = CoinMessageHandler::operator<<(v44, *((_QWORD *)v4 + 34) + 8LL, v45, *((_QWORD *)v4 + 34), v46, v47, v337);
      CoinMessageHandler::operator<<(v48, 0, a4.m128d_f64[0]);
      v49 = CoinMessageHandler::message(*((CoinMessageHandler **)v4 + 28), 12, (CoinMpsIO *)((char *)v4 + 240));
      CoinMessageHandler::operator<<(v49, 0, a4.m128d_f64[0]);
      return (unsigned int)&stru_186A0;
    }
    *((_QWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 12) = 0;
    v375 = v41;
    v50 = 1000;
    v51 = malloc(0xFA0u);
    v52 = malloc(0x1F40u);
    v53 = (char *)malloc(0x320u);
    v54 = v375;
    src = v53;
    size = 100;
    ptra = 0;
    v402 = 0;
    v400 = 0;
    while ( (unsigned int)CoinMpsCardReader::nextField((CoinMpsCardReader *)v54) == 2 )
    {
      v54 = *((_QWORD *)v4 + 34);
      v55 = *(_DWORD *)(v54 + 904);
      if ( v55 )
      {
        if ( v55 <= 3 )
        {
          v60 = *((int *)v4 + 10);
          if ( (_DWORD)v60 == v50 )
          {
            v367 = *((char ***)v4 + 34);
            v50 = 3 * v50 / 2 + 1000;
            v51 = realloc(v51, 4LL * v50);
            v154 = realloc(v52, 8LL * v50);
            v54 = (size_t)v367;
            v52 = v154;
            v55 = *((_DWORD *)v367 + 226);
          }
          *((_DWORD *)v51 + v60) = v55;
          v61 = CoinStrdup((const char *)(v54 + 1068));
          ++*((_DWORD *)v4 + 10);
          *((_QWORD *)v52 + v60) = v61;
          v54 = *((_QWORD *)v4 + 34);
        }
        else if ( ++v402 <= 99 )
        {
          v78 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)v4 + 28),
                                        3,
                                        (CoinMpsIO *)((char *)v4 + 240));
          v79 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v78);
          v83 = CoinMessageHandler::operator<<(
                  v79,
                  *((_QWORD *)v4 + 34) + 8LL,
                  v80,
                  *((_QWORD *)v4 + 34),
                  v81,
                  v82,
                  v337);
          CoinMessageHandler::operator<<(v83, 0, a4.m128d_f64[0]);
          v54 = *((_QWORD *)v4 + 34);
        }
        else if ( v402 > (int)&stru_186A0 )
        {
          goto LABEL_150;
        }
      }
      else if ( ptra )
      {
        if ( size == v400 )
        {
          v378 = *((_QWORD *)v4 + 34);
          size = ((3 * size) >> 1) + 100;
          v160 = (char *)realloc(src, 8LL * size);
          v54 = v378;
          src = v160;
        }
        v62 = &src[8 * v400++];
        *(_QWORD *)v62 = CoinStrdup((const char *)(v54 + 1068));
        v54 = *((_QWORD *)v4 + 34);
      }
      else
      {
        free(*((void **)v4 + 1));
        v84 = CoinStrdup((const char *)(*((_QWORD *)v4 + 34) + 1068LL));
        v54 = *((_QWORD *)v4 + 34);
        *((_QWORD *)v4 + 1) = v84;
        ptra = 1;
      }
    }
    if ( *(_DWORD *)(*((_QWORD *)v4 + 34) + 1240LL) != 3 )
      goto LABEL_131;
    v85 = *((int *)v4 + 10);
    v86 = *((_DWORD *)v4 + 10);
    if ( (_DWORD)v85 )
      v341 = realloc(v51, 4 * v85);
    else
      v341 = realloc(v51, 4u);
    v87 = (char **)realloc(v52, 8LL * (v86 + v400 + 1));
    v87[v85] = (char *)CoinStrdup(*((const char **)v4 + 1));
    v88 = *((_DWORD *)v4 + 10);
    memcpy(&v87[v88 + 1], src, 8LL * v400);
    free(src);
    CoinMpsIO::startHash(v4, v87, v88 + v400 + 1, 0);
    v89 = *((int *)v4 + 10);
    v365 = *((_DWORD *)v4 + 10) / 2 + 5000;
    v90 = (int)v89 / 5 + 1000;
    v344 = (int)v89 / 5 + 1000;
    v91 = 4 * v90;
    srca = (char *)malloc(4 * v90);
    v90 *= 8LL;
    ptrb = malloc(v90);
    *((_QWORD *)v4 + 16) = malloc(v90);
    v401 = malloc(v91 + 4);
    v345 = (char *)malloc(4LL * v365);
    v355 = (char *)malloc(8LL * v365);
    if ( v89 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_423;
    v342 = (char *)operator new[](4 * v89);
    v92 = *((_DWORD *)v4 + 10);
    if ( v92 > 0 )
      memset(v342, 255, 4LL * (unsigned int)(v92 - 1) + 4);
    v93 = *((char **)v4 + 34);
    *((_DWORD *)v4 + 12) = 0;
    v94 = 0;
    v348 = 0;
    sizea = -1;
    memset(s, 0, 0xC8u);
    v343 = 0;
    while ( (unsigned int)CoinMpsCardReader::nextField((CoinMpsCardReader *)v93) == 3 )
    {
      v93 = *((char **)v4 + 34);
      switch ( *((_DWORD *)v93 + 226) )
      {
        case 4:
          v137 = v93 + 1068;
          if ( strcmp(s, v93 + 1068) )
          {
            v138 = *((_DWORD *)v4 + 11);
            if ( v138 )
            {
              v155 = v401[sizea];
              v156 = *((_DWORD *)v4 + 12);
              if ( v155 < v156 )
              {
                v157 = (int *)&v345[4 * v155];
                v158 = (unsigned __int64)&v345[4 * v155 + 4 + 4 * (unsigned __int64)(unsigned int)(v156 - 1 - v155)];
                do
                {
                  v159 = *v157++;
                  *(_DWORD *)&v342[4 * v159] = -1;
                }
                while ( (int *)v158 != v157 );
              }
              v343 = 0;
            }
            if ( v138 == v344 )
            {
              sizee = v138;
              v161 = 3 * v138 / 2 + 1000;
              v344 = v161;
              v162 = 4LL * v161;
              v163 = 8LL * v161;
              srca = (char *)realloc(srca, v162);
              ptrb = realloc(ptrb, v163);
              *((_QWORD *)v4 + 16) = realloc(*((void **)v4 + 16), v163);
              v401 = realloc(v401, v162 + 4);
              v138 = sizee;
              v137 = (const char *)(*((_QWORD *)v4 + 34) + 1068LL);
            }
            v139 = v138;
            v140 = &srca[4 * v138];
            if ( v94 )
            {
              *(_DWORD *)v140 = 8;
              ++v348;
            }
            else
            {
              *(_DWORD *)v140 = 11;
            }
            v377 = v138;
            *((_QWORD *)ptrb + v138) = CoinStrdup(v137);
            strcpy(s, (const char *)(*((_QWORD *)v4 + 34) + 1068LL));
            *(_QWORD *)(*((_QWORD *)v4 + 16) + 8 * v139) = 0;
            v141 = *((_DWORD *)v4 + 12);
            ++*((_DWORD *)v4 + 11);
            sizea = v377;
            v401[v139] = v141;
            v93 = *((char **)v4 + 34);
          }
          a4.m128d_f64[0] = *(double *)v93;
          if ( fabs(*(double *)v93) <= *((double *)v4 + 27) )
          {
            if ( a4.m128d_f64[0] == -1.234567e-101 )
            {
              Hash = CoinMpsIO::findHash(v4, v93 + 908, 0);
              if ( Hash < 0 )
                goto LABEL_157;
              CoinMpsIO::addString(v4, Hash, sizea, v93 + 1313);
              v93 = *((char **)v4 + 34);
            }
          }
          else
          {
            if ( *((_DWORD *)v4 + 12) == v365 )
            {
              v365 = 3 * v365 / 2 + 1000;
              v345 = (char *)realloc(v345, 4LL * v365);
              v355 = (char *)realloc(v355, 8LL * v365);
            }
            v142 = CoinMpsIO::findHash(v4, v93 + 908, 0);
            if ( v142 < 0 )
            {
LABEL_157:
              if ( ++v402 <= 99 )
              {
                v165 = *((CoinMessageHandler **)v4 + 28);
                v166 = (CoinMpsIO *)((char *)v4 + 240);
                v167 = 6;
                goto LABEL_171;
              }
              if ( v402 > (int)&stru_186A0 )
                goto LABEL_150;
LABEL_154:
              v93 = *((char **)v4 + 34);
            }
            else
            {
              v93 = *((char **)v4 + 34);
              a4 = (__m128d)*(unsigned __int64 *)v93;
              if ( *((_DWORD *)v4 + 10) == v142 )
              {
                if ( v343 )
                {
                  if ( ++v402 <= 99 )
                  {
                    v221 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                   *((CoinMessageHandler **)v4 + 28),
                                                   4,
                                                   (CoinMpsIO *)((char *)v4 + 240));
                    v222 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v221);
                    v226 = CoinMessageHandler::operator<<(
                             v222,
                             *((_QWORD *)v4 + 34) + 8LL,
                             v223,
                             *((_QWORD *)v4 + 34),
                             v224,
                             v225,
                             v337);
                    CoinMessageHandler::operator<<(v226, 0, a4.m128d_f64[0]);
                    a4 = (__m128d)*(unsigned __int64 *)&a4.m128d_f64[0];
                  }
                  else if ( v402 > (int)&stru_186A0 )
                  {
LABEL_150:
                    v146 = CoinMessageHandler::message(
                             *((CoinMessageHandler **)v4 + 28),
                             12,
                             (CoinMpsIO *)((char *)v4 + 240));
                    CoinMessageHandler::operator<<(v146, 0, a4.m128d_f64[0]);
                    return (unsigned int)v402;
                  }
                }
                v343 = 1;
                v164 = (double *)(*((_QWORD *)v4 + 16) + 8LL * sizea);
                a4.m128d_f64[0] = a4.m128d_f64[0] + *v164;
                *(_QWORD *)&a4.m128d_f64[0] &= *(_QWORD *)&_mm_cmpgt_sd(
                                                             _mm_and_pd(a4, (__m128d)xmmword_289DB0),
                                                             (__m128d)*((unsigned __int64 *)v4 + 27)).m128d_f64[0];
                *v164 = a4.m128d_f64[0];
                v93 = *((char **)v4 + 34);
              }
              else if ( *((_DWORD *)v4 + 10) > v142 )
              {
                v143 = &v342[4 * v142];
                v144 = *(int *)v143;
                if ( (int)v144 < 0 )
                {
                  v207 = *((int *)v4 + 12);
                  *(_DWORD *)&v345[4 * v207] = v142;
                  *(_DWORD *)v143 = v207;
                  *((_DWORD *)v4 + 12) = v207 + 1;
                  *(double *)&v355[8 * v207] = a4.m128d_f64[0];
                }
                else
                {
                  ++v402;
                  v145 = (double *)&v355[8 * v144];
                  a4.m128d_f64[0] = a4.m128d_f64[0] + *v145;
                  *v145 = a4.m128d_f64[0];
                  if ( v402 <= 99 )
                  {
                    v166 = (CoinMpsIO *)((char *)v4 + 240);
                    v165 = *((CoinMessageHandler **)v4 + 28);
                    v167 = 5;
LABEL_171:
                    v168 = (CoinMessageHandler *)CoinMessageHandler::message(v165, v167, v166);
                    v147 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                                   v168,
                                                   *((_QWORD *)v4 + 34) + 908LL,
                                                   v169,
                                                   *((_QWORD *)v4 + 34),
                                                   v170,
                                                   v171,
                                                   v337);
LABEL_153:
                    v148 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v147);
                    v152 = CoinMessageHandler::operator<<(
                             v148,
                             *((_QWORD *)v4 + 34) + 8LL,
                             v149,
                             *((_QWORD *)v4 + 34),
                             v150,
                             v151,
                             v337);
                    CoinMessageHandler::operator<<(v152, 0, a4.m128d_f64[0]);
                    goto LABEL_154;
                  }
LABEL_149:
                  if ( v402 > (int)&stru_186A0 )
                    goto LABEL_150;
                }
              }
            }
          }
          break;
        case 5:
        case 6:
        case 7:
        case 0xA:
          std::__ostream_insert<char,std::char_traits<char>>();
          std::endl<char,std::char_traits<char>>();
          abort();
        case 8:
          v94 = 1;
          continue;
        case 9:
          v94 = 0;
          continue;
        default:
          if ( ++v402 > 99 )
            goto LABEL_149;
          v147 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *((CoinMessageHandler **)v4 + 28),
                                         3,
                                         (CoinMpsIO *)((char *)v4 + 240));
          goto LABEL_153;
      }
    }
    v401[*((int *)v4 + 11)] = *((_DWORD *)v4 + 12);
    operator delete[](v342);
    if ( *(_DWORD *)(*((_QWORD *)v4 + 34) + 1240LL) != 4 )
      goto LABEL_131;
    v172 = *((int *)v4 + 11);
    v173 = *((void **)v4 + 16);
    if ( (_DWORD)v172 )
    {
      v174 = 4 * v172;
      v175 = 8 * v172;
      srcb = realloc(srca, v174);
      v368 = (char **)realloc(ptrb, v175);
      *((_QWORD *)v4 + 16) = realloc(v173, v175);
    }
    else
    {
      srcb = realloc(srca, 4u);
      v368 = (char **)realloc(ptrb, 8u);
      *((_QWORD *)v4 + 16) = realloc(v173, 8u);
    }
    v176 = (int *)realloc(v401, 4LL * (*((_DWORD *)v4 + 11) + 1));
    v177 = *((int *)v4 + 12);
    v399 = v176;
    if ( (_DWORD)v177 )
    {
      ptrc = (char *)realloc(v345, 4 * v177);
      v13 = (double *)realloc(v355, 8 * v177);
    }
    else
    {
      ptrc = (char *)realloc(v345, 4u);
      v13 = (double *)realloc(v355, 8u);
    }
    v178 = *((_DWORD *)v4 + 10);
    if ( v178 )
    {
      sizef = *((_DWORD *)v4 + 10);
      v179 = 8LL * v178;
      v180 = (char *)malloc(v179);
      *((_QWORD *)v4 + 12) = v180;
      v181 = v180;
      *((_QWORD *)v4 + 13) = malloc(v179);
      if ( sizef > 0 )
      {
        v182 = 0;
        v183 = 0;
        while ( 1 )
        {
          ++v183;
          *(double *)&v181[v182] = -*((double *)v4 + 26);
          a4.m128d_f64[0] = *((double *)v4 + 26);
          *(double *)(*((_QWORD *)v4 + 13) + v182) = a4.m128d_f64[0];
          v182 += 8;
          if ( *((_DWORD *)v4 + 10) <= v183 )
            break;
          v181 = *((char **)v4 + 12);
        }
      }
    }
    else
    {
      *((_QWORD *)v4 + 12) = malloc(8u);
      *((_QWORD *)v4 + 13) = malloc(8u);
    }
    memset(s, 0, 0xC8u);
    v184 = ptrc;
    v185 = *((_QWORD *)v4 + 34);
    v186 = v402;
    sizec = 0;
    v379 = 0;
    ptrd = v4;
    v356 = v184;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (unsigned int)CoinMpsCardReader::nextField((CoinMpsCardReader *)v185) != 4 )
            {
              v4 = ptrd;
              v402 = v186;
              ptr = (int *)v356;
              goto LABEL_191;
            }
            v185 = *((_QWORD *)ptrd + 34);
            if ( *(_DWORD *)(v185 + 904) == 4 )
              break;
            if ( ++v186 <= 99 )
            {
              v195 = ptrd;
              v196 = (CoinMessageHandler *)CoinMessageHandler::message(
                                             *((CoinMessageHandler **)ptrd + 28),
                                             3,
                                             (CoinMpsIO *)((char *)ptrd + 240));
              goto LABEL_218;
            }
            if ( v186 > (int)&stru_186A0 )
            {
              v4 = ptrd;
              v402 = v186;
              goto LABEL_150;
            }
          }
          if ( strcmp(s, (const char *)(v185 + 1068)) )
          {
            if ( sizec )
            {
              v402 = v186;
              v187 = (CoinMpsCardReader *)v185;
              v4 = ptrd;
              while ( (unsigned int)CoinMpsCardReader::nextField(v187) == 4 )
                v187 = *((CoinMpsCardReader **)ptrd + 34);
              ptr = (int *)v356;
LABEL_191:
              v188 = *((_QWORD *)v4 + 34);
              if ( *(_DWORD *)(v188 + 1240) != 5 )
                goto LABEL_192;
              memset(s, 0, 0xC8u);
              v227 = v402;
              v228 = 0;
              while ( 1 )
              {
                if ( (unsigned int)CoinMpsCardReader::nextField((CoinMpsCardReader *)v188) != 5 )
                {
                  v402 = v227;
LABEL_192:
                  CoinMpsIO::stopHash(v4, 0);
                  if ( *((int *)v4 + 10) > 0 )
                  {
                    v97 = 0;
                    do
                    {
                      v189 = *(double *)(*((_QWORD *)v4 + 13) + 8 * v97);
                      v190 = v341[v97];
                      v191 = (unsigned __int64 *)(8 * v97 + *((_QWORD *)v4 + 12));
                      *(_QWORD *)&a4.m128d_f64[0] = *v191;
                      switch ( v190 )
                      {
                        case 2:
                          v95 = -*((double *)v4 + 26);
                          if ( v95 == a4.m128d_f64[0] )
                          {
                            v95 = *(double *)v191;
                            a4.m128d_f64[0] = 0.0;
                          }
                          if ( *((double *)v4 + 26) != v189 )
                            v95 = a4.m128d_f64[0] - fabs(v189);
                          break;
                        case 3:
                          v95 = 0.0;
                          if ( -*((double *)v4 + 26) != a4.m128d_f64[0] )
                            v95 = *(double *)v191;
                          a4.m128d_f64[0] = *((double *)v4 + 26);
                          if ( a4.m128d_f64[0] != v189 )
                            a4.m128d_f64[0] = fabs(v189) + v95;
                          break;
                        case 1:
                          v95 = 0.0;
                          if ( -*((double *)v4 + 26) != a4.m128d_f64[0] )
                            v95 = *(double *)v191;
                          a4.m128d_f64[0] = v95;
                          if ( *((double *)v4 + 26) != v189 )
                          {
                            a4.m128d_f64[0] = v95 + v189;
                            if ( v189 <= 0.0 )
                            {
                              v96 = *(_QWORD *)&v95;
                              v95 = a4.m128d_f64[0];
                              *(_QWORD *)&a4.m128d_f64[0] = v96;
                            }
                          }
                          break;
                        default:
                          abort();
                      }
                      *(double *)v191 = v95;
                      *(double *)(*((_QWORD *)v4 + 13) + 8 * v97++) = a4.m128d_f64[0];
                    }
                    while ( *((_DWORD *)v4 + 10) > (int)v97 );
                  }
                  free(v341);
                  v98 = *((_DWORD *)v4 + 11);
                  if ( v98 )
                  {
                    v99 = (char *)malloc(8LL * v98);
                    *((_QWORD *)v4 + 14) = v99;
                    v100 = v99;
                    *((_QWORD *)v4 + 15) = malloc(8LL * v98);
                    if ( v98 <= 0 )
                    {
                      *((_QWORD *)v4 + 18) = malloc(v98);
                      goto LABEL_90;
                    }
                    v101 = 0;
                    v102 = 0;
                    while ( 1 )
                    {
                      *(_QWORD *)&v100[v101] = 0;
                      ++v102;
                      a4.m128d_f64[0] = *((double *)v4 + 26);
                      *(double *)(*((_QWORD *)v4 + 15) + v101) = a4.m128d_f64[0];
                      v98 = *((_DWORD *)v4 + 11);
                      v101 += 8;
                      if ( v98 <= v102 )
                        break;
                      v100 = *((char **)v4 + 14);
                    }
                    if ( v98 )
                    {
                      v103 = (char *)malloc(v98);
                      *((_QWORD *)v4 + 18) = v103;
                      if ( v98 > 0 )
                      {
                        v104 = 0;
                        while ( 1 )
                        {
                          v105 = &v103[v104];
                          if ( srcb[v104] == 8 )
                          {
                            *v105 = 1;
                            v98 = *((_DWORD *)v4 + 11);
                            srcb[v104++] = 11;
                            if ( (int)v104 >= v98 )
                              break;
                          }
                          else
                          {
                            *v105 = 0;
                            v98 = *((_DWORD *)v4 + 11);
                            if ( v98 <= (int)++v104 )
                              break;
                          }
                          v103 = *((char **)v4 + 18);
                        }
                      }
LABEL_90:
                      CoinMpsIO::startHash(v4, v368, v98, 1);
                      v106 = *((CoinMpsCardReader **)v4 + 34);
                      if ( *((_DWORD *)v106 + 310) != 6 )
                        goto LABEL_91;
                      v257 = v348;
                      sized = 0;
                      memset(s, 0, 0xC8u);
                      v381 = (size_t)v13;
                      v258 = v106;
                      while ( 2 )
                      {
                        if ( (unsigned int)CoinMpsCardReader::nextField(v258) != 6 )
                        {
                          v348 = v257;
                          v13 = (double *)v381;
                          goto LABEL_91;
                        }
                        v259 = *((char **)v4 + 34);
                        if ( strcmp(s, v259 + 1068) )
                        {
                          if ( sized )
                          {
                            v348 = v257;
                            v335 = (CoinMpsCardReader *)v259;
                            v13 = (double *)v381;
                            while ( (unsigned int)CoinMpsCardReader::nextField(v335) == 6 )
                              v335 = *((CoinMpsCardReader **)v4 + 34);
LABEL_91:
                            *a2 = 0;
                            *a3 = nullptr;
                            v107 = *((_QWORD *)v4 + 34);
                            if ( *(_DWORD *)(v107 + 1240) == 12 )
                            {
                              *(_BYTE *)(v107 + 1248) = 1;
                              v108 = *((int *)v4 + 11);
                              if ( v108 > 0x1FFFFFFFFFFFFFFELL )
                                goto LABEL_423;
                              sizeb = (int *)operator new[](4 * v108);
                              v109 = *((int *)v4 + 11);
                              if ( v109 > 0xFFFFFFFFFFFFFFFLL )
                                goto LABEL_423;
                              v376 = (double *)operator new[](8 * v109);
                              v110 = *((int *)v4 + 11);
                              if ( v110 > 0xFFFFFFFFFFFFFFFLL )
                                goto LABEL_423;
                              v111 = -1;
                              v112 = 0;
                              v113 = operator new[](8 * v110);
                              v114 = *((char **)v4 + 34);
                              v366 = (char **)v113;
                              while ( (unsigned int)CoinMpsCardReader::nextField((CoinMpsCardReader *)v114) == 12 )
                              {
                                while ( 1 )
                                {
                                  v115 = *((_QWORD *)v4 + 34);
                                  v116 = *(_DWORD *)(v115 + 904);
                                  if ( (unsigned int)(v116 - 23) > 1 )
                                    break;
                                  if ( v112 )
                                  {
                                    v204 = v112;
                                    v205 = (CoinSosSet *)operator new(0x20u);
                                    CoinSosSet::CoinSosSet(v205, v204, sizeb, v376, v111);
                                    v206 = *a2;
                                    *a2 = v206 + 1;
                                    v115 = *((_QWORD *)v4 + 34);
                                    v366[v206] = (char *)v205;
                                    v116 = *(_DWORD *)(v115 + 904);
                                  }
                                  v112 = 0;
                                  v111 = (v116 != 23) + 1;
                                  if ( (unsigned int)CoinMpsCardReader::nextField((CoinMpsCardReader *)v115) != 12 )
                                    goto LABEL_101;
                                }
                                v202 = CoinMpsIO::findHash(v4, (const char *)(v115 + 1068), 1);
                                if ( v202 < 0 )
                                {
                                  if ( ++v402 <= 99 )
                                  {
                                    v317 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                                   *((CoinMessageHandler **)v4 + 28),
                                                                   7,
                                                                   (CoinMpsIO *)((char *)v4 + 240));
                                    v321 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                                                   v317,
                                                                   *((_QWORD *)v4 + 34) + 1068LL,
                                                                   v318,
                                                                   *((_QWORD *)v4 + 34),
                                                                   v319,
                                                                   v320,
                                                                   v337);
                                    v322 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v321);
                                    v326 = CoinMessageHandler::operator<<(
                                             v322,
                                             *((_QWORD *)v4 + 34) + 8LL,
                                             v323,
                                             *((_QWORD *)v4 + 34),
                                             v324,
                                             v325,
                                             v340);
                                    CoinMessageHandler::operator<<(v326, 0, a4.m128d_f64[0]);
                                    v114 = *((char **)v4 + 34);
                                  }
                                  else
                                  {
                                    if ( v402 > (int)&stru_186A0 )
                                      goto LABEL_150;
                                    v114 = *((char **)v4 + 34);
                                  }
                                }
                                else
                                {
                                  v114 = *((char **)v4 + 34);
                                  a4.m128d_f64[0] = *(double *)v114;
                                  if ( *(double *)v114 == -1.0e100 )
                                  {
                                    v358 = v202;
                                    a4.m128d_f64[0] = strtod(v114 + 908, nullptr);
                                    v114 = *((char **)v4 + 34);
                                    v202 = v358;
                                  }
                                  v203 = v112++;
                                  sizeb[v203] = v202;
                                  v376[v203] = a4.m128d_f64[0];
                                }
                              }
LABEL_101:
                              if ( v112 )
                              {
                                v327 = v112;
                                v328 = (CoinSosSet *)operator new(0x20u);
                                CoinSosSet::CoinSosSet(v328, v327, sizeb, v376, v111);
                                v329 = *a2;
                                v117 = v329 + 1;
                                *a2 = v329 + 1;
                                v366[v329] = (char *)v328;
                              }
                              else
                              {
                                v117 = *a2;
                              }
                              if ( v117 )
                              {
                                if ( (unsigned __int64)v117 <= 0xFFFFFFFFFFFFFFFLL )
                                {
                                  v118 = (CoinSet **)operator new[](8LL * v117);
                                  *a3 = v118;
                                  memcpy(v118, v366, 8LL * *a2);
                                  goto LABEL_106;
                                }
LABEL_423:
                                __cxa_throw_bad_array_new_length();
                              }
LABEL_106:
                              operator delete[](v366);
                              operator delete[](sizeb);
                              operator delete[](v376);
                            }
                            CoinMpsIO::stopHash(v4, 1);
                            if ( v348 )
                            {
                              v119 = *((_DWORD *)v4 + 11);
                              if ( v119 > 0 )
                              {
                                v120 = 0;
                                do
                                {
                                  if ( *(_BYTE *)(*((_QWORD *)v4 + 18) + v120) )
                                  {
                                    v121 = 8 * v120;
                                    *(double *)(8 * v120 + *((_QWORD *)v4 + 14)) = fmax(
                                                                                     *(double *)(8 * v120
                                                                                               + *((_QWORD *)v4 + 14)),
                                                                                     -1.797693134862316e308);
                                    if ( srcb[v120] == 11 )
                                      *(double *)(*((_QWORD *)v4 + 15) + 8 * v120) = (double)*((int *)v4 + 50);
                                    v122 = (unsigned __int64 *)(v121 + *((_QWORD *)v4 + 15));
                                    *(_QWORD *)&a4.m128d_f64[0] = *v122;
                                    if ( *(double *)v122 > 1.797693134862316e308 )
                                    {
                                      *v122 = 0x7FEFFFFFFFFFFFFFLL;
                                      v122 = (unsigned __int64 *)(v121 + *((_QWORD *)v4 + 15));
                                      *(_QWORD *)&a4.m128d_f64[0] = *v122;
                                    }
                                    if ( a4.m128d_f64[0] < 1.0e10 )
                                    {
                                      v123.m128d_f64[0] = a4.m128d_f64[0] + 0.5;
                                      v124 = a4.m128d_f64[0] + 0.5;
                                      if ( fabs(a4.m128d_f64[0] + 0.5) < 4.503599627370496e15 )
                                      {
                                        v125 = 0;
                                        v125.m128d_f64[0] = (double)(int)v123.m128d_f64[0];
                                        *(_QWORD *)&v124 = COERCE_UNSIGNED_INT64(
                                                             v125.m128d_f64[0]
                                                           - COERCE_DOUBLE(
                                                               COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v125, v123).m128d_f64[0]))
                                                             & 0x3FF0000000000000LL))
                                                         | *(_QWORD *)&v123.m128d_f64[0] & 0x8000000000000000LL;
                                      }
                                      if ( v124 != a4.m128d_f64[0] )
                                      {
                                        a4.m128d_f64[0] = fabs(a4.m128d_f64[0] - v124);
                                        if ( a4.m128d_f64[0] < 0.00001 )
                                          *(double *)v122 = v124;
                                      }
                                    }
                                    v126 = (double *)(*((_QWORD *)v4 + 14) + v121);
                                    v127 = *v126;
                                    if ( *v126 > -1.0e10 )
                                    {
                                      a4.m128d_f64[0] = v127 + 0.5;
                                      if ( fabs(v127 + 0.5) < 4.503599627370496e15 )
                                      {
                                        v128 = 0;
                                        v128.m128d_f64[0] = (double)(int)a4.m128d_f64[0];
                                        *(_QWORD *)&a4.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                                        v128.m128d_f64[0]
                                                                      - COERCE_DOUBLE(
                                                                          *(_QWORD *)&_mm_cmpgt_sd(v128, a4).m128d_f64[0]
                                                                        & 0x3FF0000000000000LL))
                                                                    | *(_QWORD *)&a4.m128d_f64[0] & 0x8000000000000000LL;
                                      }
                                      if ( v127 != a4.m128d_f64[0] && fabs(v127 - a4.m128d_f64[0]) < 0.00001 )
                                        *v126 = a4.m128d_f64[0];
                                    }
                                    v119 = *((_DWORD *)v4 + 11);
                                  }
                                  ++v120;
                                }
                                while ( (int)v120 < v119 );
                              }
                            }
                            else
                            {
                              free(*((void **)v4 + 18));
                              *((_QWORD *)v4 + 18) = 0;
                            }
                            free(srcb);
                            v129 = *(_DWORD *)(*((_QWORD *)v4 + 34) + 1240LL);
                            if ( (unsigned int)(v129 - 10) > 1 && v129 != 7 )
                            {
LABEL_131:
                              v130 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                             *((CoinMessageHandler **)v4 + 28),
                                                             3,
                                                             (CoinMpsIO *)((char *)v4 + 240));
                              v131 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v130);
                              v135 = CoinMessageHandler::operator<<(
                                       v131,
                                       *((_QWORD *)v4 + 34) + 8LL,
                                       v132,
                                       *((_QWORD *)v4 + 34),
                                       v133,
                                       v134,
                                       v337);
                              CoinMessageHandler::operator<<(v135, 0, a4.m128d_f64[0]);
                              v136 = CoinMessageHandler::message(
                                       *((CoinMessageHandler **)v4 + 28),
                                       12,
                                       (CoinMpsIO *)((char *)v4 + 240));
                              CoinMessageHandler::operator<<(v136, 0, a4.m128d_f64[0]);
                              v402 += 100000;
                              return (unsigned int)v402;
                            }
LABEL_13:
                            v17 = (CoinPackedMatrix *)operator new(0x58u);
                            CoinPackedMatrix::CoinPackedMatrix(
                              v17,
                              1,
                              *((_DWORD *)v4 + 10),
                              *((_DWORD *)v4 + 11),
                              *((_DWORD *)v4 + 12),
                              v13,
                              ptr,
                              v399,
                              nullptr);
                            *((_QWORD *)v4 + 11) = v17;
                            free(ptr);
                            free(v399);
                            free(v13);
                            v18 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                          *((CoinMessageHandler **)v4 + 28),
                                                          1,
                                                          (CoinMpsIO *)((char *)v4 + 240));
                            v23 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                                          v18,
                                                          *(_QWORD *)v4,
                                                          v19,
                                                          v20,
                                                          v21,
                                                          v22,
                                                          v337);
                            v24 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v23);
                            v25 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v24);
                            v26 = CoinMessageHandler::operator<<(v25);
                            CoinMessageHandler::operator<<(v26, 0, a4.m128d_f64[0]);
                            v27 = *((_BYTE **)v4 + 18);
                            if ( v27 )
                            {
                              v28 = *((_DWORD *)v4 + 11);
                              if ( v28 > 0 )
                              {
                                v29 = 0;
                                v30 = (__int64)&v27[v28 - 1 + 1];
                                v31 = 0;
                                do
                                {
                                  if ( (unsigned __int8)(*v27 - 3) <= 1u )
                                  {
                                    ++v31;
                                    v29 += *v27 == 4;
                                  }
                                  ++v27;
                                }
                                while ( (_BYTE *)v30 != v27 );
                                if ( v31 )
                                {
                                  if ( v29 )
                                    sprintf(s, "%d semi-continuous variables (%d integer!) - be wary", v31, v29);
                                  else
                                    sprintf(s, "%d semi-continuous variables - report odd behavior", v31);
                                  v32 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                                *((CoinMessageHandler **)v4 + 28),
                                                                28,
                                                                (CoinMpsIO *)((char *)v4 + 240));
                                  v37 = CoinMessageHandler::operator<<(v32, (__int64)s, v33, v34, v35, v36, v338);
                                  CoinMessageHandler::operator<<(v37, 0, a4.m128d_f64[0]);
                                }
                              }
                            }
                            return (unsigned int)v402;
                          }
                          strcpy(s, v259 + 1068);
                          free(*((void **)v4 + 4));
                          v260 = CoinStrdup((const char *)(*((_QWORD *)v4 + 34) + 1068LL));
                          v259 = *((char **)v4 + 34);
                          *((_QWORD *)v4 + 4) = v260;
                          sized = 1;
                        }
                        LODWORD(v261) = CoinMpsIO::findHash(v4, v259 + 908, 1);
                        if ( (int)v261 < 0 )
                        {
                          if ( ++v402 <= 99 )
                          {
                            v307 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                           *((CoinMessageHandler **)v4 + 28),
                                                           7,
                                                           (CoinMpsIO *)((char *)v4 + 240));
                            v311 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                                           v307,
                                                           *((_QWORD *)v4 + 34) + 908LL,
                                                           v308,
                                                           *((_QWORD *)v4 + 34),
                                                           v309,
                                                           v310,
                                                           v337);
                            goto LABEL_365;
                          }
LABEL_302:
                          if ( v402 > (int)&stru_186A0 )
                            goto LABEL_150;
                        }
                        else
                        {
                          v262 = *((_QWORD *)v4 + 34);
                          v263 = *(double *)v262;
                          switch ( *(_DWORD *)(v262 + 904) )
                          {
                            case 0xC:
                              v273 = (char *)(int)v261;
                              v274 = &srcb[(int)v261];
                              v275 = *v274;
                              v267 = v263 == -1.0e100;
                              if ( v263 == -1.234567e-101 )
                              {
                                v352 = *v274;
                                v361 = (char *)(int)v261;
                                v371 = (char **)&srcb[(int)v261];
                                CoinMpsIO::addString(
                                  v4,
                                  *((_DWORD *)v4 + 10) + 2,
                                  (int)v261,
                                  (const char *)(v262 + 1313));
                                v275 = v352;
                                v274 = (unsigned int *)v371;
                                v273 = v361;
                                if ( v352 == 11 )
                                {
                                  v336 = *((_QWORD *)v4 + 15);
                                  *(_DWORD *)v371 = 12;
                                  *(_QWORD *)(v336 + 8LL * (_QWORD)v361) = 0x4202A05F20000000LL;
                                  v262 = *((_QWORD *)v4 + 34);
                                  goto LABEL_304;
                                }
                                v263 = 1.0e10;
                              }
                              else if ( v275 == 11 )
                              {
                                a4.m128d_f64[0] = 0.0;
                                if ( v263 < 0.0 )
                                {
                                  a4.m128d_f64[0] = -*((double *)v4 + 26);
                                  *(double *)(*((_QWORD *)v4 + 14) + 8LL * (int)v261) = a4.m128d_f64[0];
                                  if ( v263 > 1.0e25 )
                                    goto LABEL_431;
                                }
                                else if ( v263 > 1.0e25 )
                                {
LABEL_431:
                                  a4.m128d_f64[0] = *((double *)v4 + 26);
                                  *(double *)(*((_QWORD *)v4 + 15) + 8LL * (int)v261) = a4.m128d_f64[0];
                                  goto LABEL_323;
                                }
                                *(double *)(*((_QWORD *)v4 + 15) + 8LL * (int)v261) = v263;
                                goto LABEL_323;
                              }
                              if ( v275 == 20 || v275 == 14 )
                              {
                                v276 = *((_QWORD *)v4 + 14);
                                a4.m128d_f64[0] = *(double *)(v276 + 8LL * (_QWORD)v273);
                                if ( a4.m128d_f64[0] > v263 )
                                {
                                  v267 = v275 == 20 || v275 == 14;
                                }
                                else if ( *((double *)v4 + 27) + a4.m128d_f64[0] > v263 )
                                {
                                  v263 = *(double *)(v276 + 8LL * (_QWORD)v273);
                                }
                                if ( v263 > 1.0e25 )
                                  goto LABEL_322;
LABEL_368:
                                *(double *)(*((_QWORD *)v4 + 15) + 8LL * (_QWORD)v273) = v263;
                                goto LABEL_348;
                              }
                              if ( v275 != 16 )
                              {
                                if ( v263 > 1.0e25 )
                                {
                                  v267 = 1;
LABEL_322:
                                  a4.m128d_f64[0] = *((double *)v4 + 26);
                                  *(double *)(*((_QWORD *)v4 + 15) + 8LL * (_QWORD)v273) = a4.m128d_f64[0];
                                  if ( v275 != 11 )
                                    goto LABEL_348;
LABEL_323:
                                  *v274 = 12;
                                  goto LABEL_300;
                                }
                                *(double *)(*((_QWORD *)v4 + 15) + 8LL * (_QWORD)v273) = v263;
                                *v274 = 21;
                                goto LABEL_301;
                              }
                              if ( v263 <= 1.0e25 )
                                goto LABEL_368;
                              a4.m128d_f64[0] = *((double *)v4 + 26);
                              *(double *)(*((_QWORD *)v4 + 15) + 8LL * (_QWORD)v273) = a4.m128d_f64[0];
LABEL_348:
                              *v274 = 21;
LABEL_300:
                              if ( !v267 )
                                goto LABEL_303;
LABEL_301:
                              if ( ++v402 > 99 )
                                goto LABEL_302;
                              v311 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                             *((CoinMessageHandler **)v4 + 28),
                                                             3,
                                                             (CoinMpsIO *)((char *)v4 + 240));
                              break;
                            case 0xD:
                              v267 = v263 == -1.0e100;
                              if ( v263 == -1.234567e-101 )
                              {
                                v374 = (int)v261;
                                v364 = (char *)(v262 + 1313);
                                CoinMpsIO::addString(
                                  v4,
                                  *((_DWORD *)v4 + 10) + 1,
                                  (int)v261,
                                  (const char *)(v262 + 1313));
                                CoinMpsIO::addString(v4, *((_DWORD *)v4 + 10) + 2, v374, v364);
                                v263 = 0.0;
                                LODWORD(v261) = v374;
                              }
                              v261 = (char *)(int)v261;
                              v270 = &srcb[(int)v261];
                              if ( *v270 == 11 )
                                goto LABEL_458;
                              if ( *v270 == 13
                                || (v346 = (_BYTE *)((int)v261 + *((_QWORD *)v4 + 18)), !*v346)
                                || (v349 = &srcb[(int)v261],
                                    v357 = (char *)(int)v261,
                                    a4.m128d_f64[0] = floor(v263),
                                    v261 = v357,
                                    v270 = v349,
                                    fabs(a4.m128d_f64[0] - v263) > 1.0e-12) )
                              {
                                v267 = 1;
LABEL_458:
                                v271 = *((_QWORD *)v4 + 14);
                              }
                              else
                              {
                                v271 = *((_QWORD *)v4 + 14);
                                if ( *(double *)(v271 + 8LL * (_QWORD)v357) > a4.m128d_f64[0]
                                  || a4.m128d_f64[0] > *(double *)(*((_QWORD *)v4 + 15) + 8LL * (_QWORD)v357) )
                                {
                                  v267 = 1;
                                }
                                else
                                {
                                  --v257;
                                  *v346 = 0;
                                  v271 = *((_QWORD *)v4 + 14);
                                }
                              }
                              *(double *)(v271 + 8LL * (_QWORD)v261) = v263;
                              v272 = *((_QWORD *)v4 + 15);
                              *v270 = 13;
                              *(double *)(v272 + 8LL * (_QWORD)v261) = v263;
                              goto LABEL_300;
                            case 0xE:
                              v290 = (int)v261;
                              v274 = &srcb[(int)v261];
                              v291 = *v274;
                              v267 = v263 == -1.0e100;
                              if ( v263 == -1.234567e-101 )
                              {
                                v354 = (int)v261;
                                v363 = (char *)&srcb[(int)v261];
                                v373 = *v274;
                                CoinMpsIO::addString(
                                  v4,
                                  *((_DWORD *)v4 + 10) + 1,
                                  (int)v261,
                                  (const char *)(v262 + 1313));
                                v291 = v373;
                                v263 = -1.0e10;
                                v274 = (unsigned int *)v363;
                                v290 = v354;
                                if ( v373 == 11 )
                                  goto LABEL_454;
                              }
                              else if ( (_DWORD)v291 == 11 )
                              {
                                a4.m128d_f64[0] = -1.0e25;
                                if ( v263 >= -1.0e25 )
                                {
LABEL_454:
                                  *(double *)(*((_QWORD *)v4 + 14) + 8 * v290) = v263;
                                }
                                else
                                {
                                  a4.m128d_f64[0] = -*((double *)v4 + 26);
                                  *(double *)(*((_QWORD *)v4 + 14) + 8LL * (int)v261) = a4.m128d_f64[0];
                                }
                                *v274 = 14;
                                goto LABEL_300;
                              }
                              if ( (unsigned int)v291 <= 0x16 )
                              {
                                v292 = 4722688;
                                if ( _bittest64(&v292, v291) )
                                {
                                  v293 = *((_QWORD *)v4 + 15);
                                  v294 = *(double *)(v293 + 8 * v290);
                                  if ( v263 > v294 )
                                  {
                                    v267 = 1;
                                  }
                                  else if ( v263 > v294 - *((double *)v4 + 27) )
                                  {
                                    v263 = *(double *)(v293 + 8 * v290);
                                  }
LABEL_346:
                                  a4.m128d_f64[0] = -1.0e25;
                                  if ( v263 < -1.0e25 )
                                    goto LABEL_347;
                                  *(double *)(*((_QWORD *)v4 + 14) + 8 * v290) = v263;
                                  goto LABEL_348;
                                }
                              }
                              if ( (_DWORD)v291 == 17 )
                                goto LABEL_346;
                              a4.m128d_f64[0] = -1.0e25;
                              if ( v263 < -1.0e25 )
                              {
                                v267 = 1;
LABEL_347:
                                a4.m128d_f64[0] = -*((double *)v4 + 26);
                                *(double *)(*((_QWORD *)v4 + 14) + 8 * v290) = a4.m128d_f64[0];
                                goto LABEL_348;
                              }
                              *(double *)(*((_QWORD *)v4 + 14) + 8 * v290) = v263;
                              *v274 = 21;
                              goto LABEL_301;
                            case 0xF:
                              v286 = *((_QWORD *)v4 + 14);
                              v287 = &srcb[(int)v261];
                              v288 = -*((double *)v4 + 26);
                              v289 = *v287 == 11;
                              *v287 = 15;
                              *(double *)(v286 + 8LL * (int)v261) = v288;
                              v267 = !v289;
                              a4.m128d_f64[0] = *((double *)v4 + 26);
                              *(double *)(*((_QWORD *)v4 + 15) + 8LL * (int)v261) = a4.m128d_f64[0];
                              goto LABEL_300;
                            case 0x10:
                              v279 = &srcb[(int)v261];
                              v280 = *v279;
                              if ( *v279 != 11 )
                              {
                                v281 = *((double *)v4 + 26);
                                *v279 = 21;
                                a4.m128d_f64[0] = -v281;
                                v267 = v280 != 19 && v280 != 12;
                                *(double *)(*((_QWORD *)v4 + 14) + 8LL * (int)v261) = a4.m128d_f64[0];
                                goto LABEL_300;
                              }
                              v331 = *((_QWORD *)v4 + 15);
                              *v279 = 16;
                              *(_QWORD *)(v331 + 8LL * (int)v261) = 0x7FEFFFFFFFFFFFFFLL;
                              a4.m128d_f64[0] = -*((double *)v4 + 26);
                              *(double *)(*((_QWORD *)v4 + 14) + 8LL * (int)v261) = a4.m128d_f64[0];
                              v262 = *((_QWORD *)v4 + 34);
                              goto LABEL_304;
                            case 0x11:
                              v277 = &srcb[(int)v261];
                              a4.m128d_f64[0] = *(double *)(*((_QWORD *)v4 + 15) + 8LL * (int)v261);
                              v278 = *v277;
                              if ( a4.m128d_f64[0] == *((double *)v4 + 26) )
                              {
                                *v277 = 4 * (v278 != 11) + 17;
                                goto LABEL_304;
                              }
                              if ( v278 == 11 )
                                *v277 = 17;
                              else
                                *v277 = 21;
                              goto LABEL_301;
                            case 0x12:
                              v304 = &srcb[(int)v261];
                              v289 = *v304 == 11;
                              *(_QWORD *)(*((_QWORD *)v4 + 14) + 8LL * (int)v261) = 0;
                              v305 = *((_QWORD *)v4 + 15);
                              *v304 = 18;
                              v267 = !v289;
                              *(_QWORD *)(v305 + 8LL * (int)v261) = 0x3FF0000000000000LL;
                              v306 = (_BYTE *)(*((_QWORD *)v4 + 18) + (int)v261);
                              if ( !*v306 )
                              {
                                ++v257;
                                *v306 = 1;
                              }
                              goto LABEL_300;
                            case 0x13:
                              v282 = (int)v261;
                              v283 = &srcb[(int)v261];
                              v284 = *v283;
                              if ( v263 == -1.234567e-101 )
                              {
                                v351 = (int)v261;
                                v360 = (char *)&srcb[(int)v261];
                                v370 = *v283;
                                CoinMpsIO::addString(
                                  v4,
                                  *((_DWORD *)v4 + 10) + 2,
                                  (int)v261,
                                  (const char *)(v262 + 1313));
                                v284 = v370;
                                v283 = (unsigned int *)v360;
                                v282 = v351;
                                if ( v370 != 11 )
                                {
                                  v333 = 8 * v351;
                                  if ( (v370 & 0xFFFFFFFB) != 0x10 && v370 != 14 )
                                  {
                                    v267 = 1;
                                    *(_QWORD *)(*((_QWORD *)v4 + 15) + 8 * v351) = 0x4415AF1D78B58C40LL;
                                    v285 = 21;
                                    goto LABEL_336;
                                  }
                                  v263 = 1.0e20;
                                  goto LABEL_395;
                                }
                                *(_QWORD *)(*((_QWORD *)v4 + 15) + 8 * v351) = 0x4415AF1D78B58C40LL;
                              }
                              else
                              {
                                if ( v263 == -1.0e100 )
                                {
                                  v263 = *((double *)v4 + 26);
                                  v267 = 1;
                                  if ( v284 <= 0x14 )
                                    v267 = ((0x114800uLL >> v284) & 1) == 0;
                                  goto LABEL_333;
                                }
                                if ( v284 != 11 )
                                {
                                  v333 = 8LL * (int)v261;
                                  if ( (v284 & 0xFFFFFFFB) != 0x10 && v284 != 14 )
                                  {
                                    if ( v263 > 1.0e25 )
                                    {
                                      v267 = 1;
                                      goto LABEL_334;
                                    }
                                    v267 = 1;
                                    *(double *)(*((_QWORD *)v4 + 15) + 8 * v282) = v263;
                                    v285 = 21;
                                    goto LABEL_336;
                                  }
LABEL_395:
                                  v334 = *((_QWORD *)v4 + 14);
                                  v267 = 1;
                                  a4.m128d_f64[0] = *(double *)(v334 + v333);
                                  if ( a4.m128d_f64[0] <= v263 )
                                  {
                                    if ( *((double *)v4 + 27) + a4.m128d_f64[0] > v263 )
                                      v263 = *(double *)(v334 + v333);
                                    v267 = 0;
                                  }
LABEL_333:
                                  if ( v263 > 1.0e25 )
                                    goto LABEL_334;
                                  goto LABEL_335;
                                }
                                if ( v263 > 1.0e25 )
                                {
                                  v267 = 0;
LABEL_334:
                                  v263 = *((double *)v4 + 26);
LABEL_335:
                                  *(double *)(*((_QWORD *)v4 + 15) + 8 * v282) = v263;
                                  v285 = 2 * (v284 != 11) + 19;
LABEL_336:
                                  v269 = (_BYTE *)(*((_QWORD *)v4 + 18) + v282);
                                  *v283 = v285;
                                  if ( *v269 )
                                    goto LABEL_300;
                                  goto LABEL_337;
                                }
                                *(double *)(*((_QWORD *)v4 + 15) + 8LL * (int)v261) = v263;
                              }
                              v269 = (_BYTE *)(*((_QWORD *)v4 + 18) + v282);
                              *v283 = 19;
                              if ( *v269 )
                                goto LABEL_303;
                              v267 = 0;
LABEL_337:
                              ++v257;
                              *v269 = 1;
                              goto LABEL_300;
                            case 0x14:
                              v295 = (int)v261;
                              v296 = 8LL * (int)v261;
                              v297 = &srcb[(int)v261];
                              v267 = v263 == -1.0e100;
                              v298 = *v297;
                              if ( v263 == -1.234567e-101 )
                              {
                                v353 = (int)v261;
                                v362 = (char *)&srcb[(int)v261];
                                v372 = *v297;
                                v347 = (void *)(8LL * (int)v261);
                                CoinMpsIO::addString(
                                  v4,
                                  *((_DWORD *)v4 + 10) + 1,
                                  (int)v261,
                                  (const char *)(v262 + 1313));
                                v298 = v372;
                                v263 = -1.0e20;
                                v297 = (unsigned int *)v362;
                                v295 = v353;
                                if ( v372 == 11 )
                                  goto LABEL_445;
                                v296 = (__int64)v347;
                              }
                              else if ( (_DWORD)v298 == 11 )
                              {
                                a4.m128d_f64[0] = -1.0e25;
                                if ( v263 < -1.0e25 )
                                {
                                  a4.m128d_f64[0] = -*((double *)v4 + 26);
                                  *(double *)(*((_QWORD *)v4 + 14) + 8LL * (int)v261) = a4.m128d_f64[0];
                                  v303 = 20;
                                  goto LABEL_358;
                                }
LABEL_445:
                                *(double *)(*((_QWORD *)v4 + 14) + 8 * v295) = v263;
                                v303 = 20;
                                goto LABEL_358;
                              }
                              v299 = (double *)(*((_QWORD *)v4 + 14) + v296);
                              if ( (unsigned int)v298 <= 0x16 )
                              {
                                v300 = 4722688;
                                if ( _bittest64(&v300, v298) )
                                {
                                  v301 = *((_QWORD *)v4 + 15);
                                  v302 = *(double *)(v301 + 8 * v295);
                                  if ( v263 > v302 )
                                  {
                                    v267 = 1;
                                  }
                                  else if ( v263 > v302 - *((double *)v4 + 27) )
                                  {
                                    v263 = *(double *)(v301 + 8 * v295);
                                  }
LABEL_356:
                                  a4.m128d_f64[0] = -1.0e25;
                                  if ( v263 < -1.0e25 )
                                    goto LABEL_357;
                                  *v299 = v263;
                                  v303 = 21;
                                  goto LABEL_358;
                                }
                              }
                              if ( (_DWORD)v298 == 17 )
                                goto LABEL_356;
                              a4.m128d_f64[0] = -1.0e25;
                              if ( v263 < -1.0e25 )
                              {
                                v267 = 1;
LABEL_357:
                                v303 = 21;
                                a4.m128d_f64[0] = -*((double *)v4 + 26);
                                *v299 = a4.m128d_f64[0];
                                goto LABEL_358;
                              }
                              *v299 = v263;
                              v303 = 21;
                              v267 = 1;
LABEL_358:
                              v269 = (_BYTE *)(*((_QWORD *)v4 + 18) + v295);
                              *v297 = v303;
                              if ( !*v269 )
                                goto LABEL_337;
                              if ( *v269 == 3 )
                                goto LABEL_360;
                              goto LABEL_300;
                            case 0x16:
                              v264 = (int)v261;
                              v265 = &srcb[(int)v261];
                              v266 = *v265;
                              if ( v263 == -1.234567e-101 )
                              {
                                v350 = (int)v261;
                                v359 = (char *)&srcb[(int)v261];
                                v369 = *v265;
                                CoinMpsIO::addString(
                                  v4,
                                  *((_DWORD *)v4 + 10) + 2,
                                  (int)v261,
                                  (const char *)(v262 + 1313));
                                v266 = v369;
                                v265 = (unsigned int *)v359;
                                v264 = v350;
                                if ( v369 == 11 )
                                {
                                  v267 = 0;
                                  *(_QWORD *)(*((_QWORD *)v4 + 15) + 8 * v350) = 0x4415AF1D78B58C40LL;
                                  v268 = 22;
                                }
                                else
                                {
                                  v330 = 8 * v350;
                                  if ( v369 == 20 || v369 == 14 )
                                  {
                                    v263 = 1.0e20;
LABEL_380:
                                    v332 = *((_QWORD *)v4 + 14);
                                    v267 = 1;
                                    a4.m128d_f64[0] = *(double *)(v332 + v330);
                                    if ( a4.m128d_f64[0] <= v263 )
                                    {
                                      if ( *((double *)v4 + 27) + a4.m128d_f64[0] > v263 )
                                        v263 = *(double *)(v332 + v330);
                                      v267 = 0;
                                    }
LABEL_295:
                                    if ( v263 > 1.0e25 )
                                      goto LABEL_296;
                                    goto LABEL_297;
                                  }
                                  v267 = 1;
                                  *(_QWORD *)(*((_QWORD *)v4 + 15) + 8 * v350) = 0x4415AF1D78B58C40LL;
                                  v268 = 21;
                                }
                              }
                              else
                              {
                                a4.m128d_f64[0] = 0.0;
                                v267 = v263 == 0.0 || v263 == -1.0e100;
                                if ( v267 )
                                {
                                  v263 = *((double *)v4 + 26);
                                  if ( v266 <= 0x14 )
                                    v267 = ((0x104800uLL >> v266) & 1) == 0;
                                  goto LABEL_295;
                                }
                                if ( v266 == 11 )
                                {
                                  if ( v263 > 1.0e25 )
                                    goto LABEL_296;
                                  *(double *)(*((_QWORD *)v4 + 15) + 8LL * (int)v261) = v263;
                                  v268 = 22;
                                }
                                else
                                {
                                  v330 = 8LL * (int)v261;
                                  if ( v266 == 14 || v266 == 20 )
                                    goto LABEL_380;
                                  if ( v263 > 1.0e25 )
                                  {
                                    v267 = 1;
LABEL_296:
                                    v263 = *((double *)v4 + 26);
LABEL_297:
                                    *(double *)(*((_QWORD *)v4 + 15) + 8 * v264) = v263;
                                    v268 = (v266 == 11) + 21;
                                    goto LABEL_298;
                                  }
                                  v267 = 1;
                                  *(double *)(*((_QWORD *)v4 + 15) + 8 * v264) = v263;
                                  v268 = 21;
                                }
                              }
LABEL_298:
                              v269 = (_BYTE *)(*((_QWORD *)v4 + 18) + v264);
                              *v265 = v268;
                              if ( *v269 )
                              {
                                if ( *v269 == 1 )
LABEL_360:
                                  *v269 = 4;
                              }
                              else
                              {
                                ++v257;
                                *v269 = 3;
                              }
                              goto LABEL_300;
                            default:
                              goto LABEL_301;
                          }
LABEL_365:
                          v312 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v311);
                          v316 = CoinMessageHandler::operator<<(
                                   v312,
                                   *((_QWORD *)v4 + 34) + 8LL,
                                   v313,
                                   *((_QWORD *)v4 + 34),
                                   v314,
                                   v315,
                                   v337);
                          CoinMessageHandler::operator<<(v316, 0, a4.m128d_f64[0]);
                        }
LABEL_303:
                        v262 = *((_QWORD *)v4 + 34);
LABEL_304:
                        v258 = (CoinMpsCardReader *)v262;
                        continue;
                      }
                    }
                  }
                  else
                  {
                    *((_QWORD *)v4 + 14) = malloc(8u);
                    *((_QWORD *)v4 + 15) = malloc(8u);
                  }
                  v98 = 0;
                  *((_QWORD *)v4 + 18) = malloc(1u);
                  goto LABEL_90;
                }
                v188 = *((_QWORD *)v4 + 34);
                if ( *(_DWORD *)(v188 + 904) == 4 )
                {
                  v380 = *((_QWORD *)v4 + 34);
                  v405 = (char *)(v188 + 1068);
                  v229 = strcmp(s, (const char *)(v188 + 1068));
                  v230 = v380;
                  if ( v229 )
                  {
                    if ( v228 )
                    {
                      for ( i = (CoinMpsCardReader *)v380;
                            (unsigned int)CoinMpsCardReader::nextField(i) == 5;
                            i = *((CoinMpsCardReader **)v4 + 34) )
                      {
                        ;
                      }
LABEL_261:
                      v188 = *((_QWORD *)v4 + 34);
                      continue;
                    }
                    v228 = 1;
                    strcpy(s, v405);
                    free(*((void **)v4 + 3));
                    v232 = CoinStrdup((const char *)(*((_QWORD *)v4 + 34) + 1068LL));
                    v230 = *((_QWORD *)v4 + 34);
                    *((_QWORD *)v4 + 3) = v232;
                  }
                  v233 = CoinMpsIO::findHash(v4, (const char *)(v230 + 908), 0);
                  if ( v233 < 0 )
                  {
                    if ( ++v227 > 99 )
                    {
                      if ( v227 > (int)&stru_186A0 )
                      {
LABEL_264:
                        v402 = v227;
                        goto LABEL_150;
                      }
                      goto LABEL_261;
                    }
                    v235 = *((CoinMessageHandler **)v4 + 28);
                    v236 = (CoinMpsIO *)((char *)v4 + 240);
                    v237 = 6;
LABEL_271:
                    v238 = (CoinMessageHandler *)CoinMessageHandler::message(v235, v237, v236);
                    v242 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                                   v238,
                                                   *((_QWORD *)v4 + 34) + 908LL,
                                                   v239,
                                                   *((_QWORD *)v4 + 34),
                                                   v240,
                                                   v241,
                                                   v337);
LABEL_272:
                    v243 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v242);
                    v247 = CoinMessageHandler::operator<<(
                             v243,
                             *((_QWORD *)v4 + 34) + 8LL,
                             v244,
                             *((_QWORD *)v4 + 34),
                             v245,
                             v246,
                             v337);
                    CoinMessageHandler::operator<<(v247, 0, a4.m128d_f64[0]);
                    v188 = *((_QWORD *)v4 + 34);
                    continue;
                  }
                  v188 = *((_QWORD *)v4 + 34);
                  if ( *((_DWORD *)v4 + 10) == v233 )
                  {
                    if ( ++v227 <= 99 )
                    {
                      v248 = *((CoinMessageHandler **)v4 + 28);
                      v249 = (CoinMpsIO *)((char *)v4 + 240);
                      v250 = 4;
                      goto LABEL_274;
                    }
                  }
                  else
                  {
                    v234 = (unsigned __int64 *)(*((_QWORD *)v4 + 13) + 8LL * v233);
                    *(_QWORD *)&a4.m128d_f64[0] = *v234;
                    if ( *(double *)v234 == *((double *)v4 + 26) )
                    {
                      a4.m128d_f64[0] = *(double *)v188;
                      *v234 = *(_QWORD *)v188;
                      v188 = *((_QWORD *)v4 + 34);
                      continue;
                    }
                    if ( ++v227 <= 99 )
                    {
                      v235 = *((CoinMessageHandler **)v4 + 28);
                      v236 = (CoinMpsIO *)((char *)v4 + 240);
                      v237 = 5;
                      goto LABEL_271;
                    }
                  }
                }
                else if ( ++v227 <= 99 )
                {
                  v248 = *((CoinMessageHandler **)v4 + 28);
                  v249 = (CoinMpsIO *)((char *)v4 + 240);
                  v250 = 3;
LABEL_274:
                  v242 = (CoinMessageHandler *)CoinMessageHandler::message(v248, v250, v249);
                  goto LABEL_272;
                }
                if ( v227 > (int)&stru_186A0 )
                  goto LABEL_264;
              }
            }
            strcpy(s, (const char *)(v185 + 1068));
            free(*((void **)ptrd + 2));
            v192 = CoinStrdup((const char *)(*((_QWORD *)ptrd + 34) + 1068LL));
            v185 = *((_QWORD *)ptrd + 34);
            *((_QWORD *)ptrd + 2) = v192;
            sizec = 1;
          }
          v193 = CoinMpsIO::findHash(ptrd, (const char *)(v185 + 908), 0);
          if ( v193 >= 0 )
            break;
          if ( ++v186 <= 99 )
          {
            v195 = ptrd;
            v214 = 6;
            v215 = *((CoinMessageHandler **)ptrd + 28);
            v216 = (CoinMpsIO *)((char *)ptrd + 240);
LABEL_243:
            v217 = (CoinMessageHandler *)CoinMessageHandler::message(v215, v214, v216);
            v196 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                           v217,
                                           *((_QWORD *)v195 + 34) + 908LL,
                                           v218,
                                           *((_QWORD *)v195 + 34),
                                           v219,
                                           v220,
                                           v337);
LABEL_218:
            v197 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v196);
            v201 = CoinMessageHandler::operator<<(
                     v197,
                     *((_QWORD *)v195 + 34) + 8LL,
                     v198,
                     *((_QWORD *)v195 + 34),
                     v199,
                     v200,
                     v337);
            CoinMessageHandler::operator<<(v201, 0, a4.m128d_f64[0]);
            v185 = *((_QWORD *)v195 + 34);
          }
          else
          {
            if ( v186 > (int)&stru_186A0 )
              goto LABEL_208;
            v185 = *((_QWORD *)ptrd + 34);
          }
        }
        v185 = *((_QWORD *)ptrd + 34);
        a4.m128d_f64[0] = *(double *)v185;
        if ( *((_DWORD *)ptrd + 10) != v193 )
          break;
        if ( v379 )
        {
          if ( ++v186 <= 99 )
          {
            v251 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)ptrd + 28),
                                           4,
                                           (CoinMpsIO *)((char *)ptrd + 240));
            v252 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v251);
            v256 = CoinMessageHandler::operator<<(
                     v252,
                     *((_QWORD *)ptrd + 34) + 8LL,
                     v253,
                     *((_QWORD *)ptrd + 34),
                     v254,
                     v255,
                     v337);
            CoinMessageHandler::operator<<(v256, 0, a4.m128d_f64[0]);
            v185 = *((_QWORD *)ptrd + 34);
          }
          else if ( v186 > (int)&stru_186A0 )
          {
LABEL_208:
            v402 = v186;
            v4 = ptrd;
            goto LABEL_150;
          }
        }
        if ( a4.m128d_f64[0] == -1.234567e-101 )
        {
          CoinMpsIO::addString(ptrd, v193, *((_DWORD *)ptrd + 11), (const char *)(v185 + 1313));
          v185 = *((_QWORD *)ptrd + 34);
          a4.m128d_f64[0] = 0.0;
        }
        v379 = 1;
        a4.m128d_f64[0] = a4.m128d_f64[0] + *((double *)ptrd + 17);
        *((_QWORD *)ptrd + 17) = *(_QWORD *)&a4.m128d_f64[0];
      }
      if ( *((_DWORD *)ptrd + 10) > v193 )
      {
        v194 = (double *)(8LL * v193 + *((_QWORD *)ptrd + 12));
        if ( -*((double *)ptrd + 26) == *v194 )
        {
          if ( a4.m128d_f64[0] == -1.234567e-101 )
          {
            CoinMpsIO::addString(ptrd, v193, *((_DWORD *)ptrd + 11), (const char *)(v185 + 1313));
            a4.m128d_f64[0] = 0.0;
            v194 = (double *)(*((_QWORD *)ptrd + 12) + 8LL * v193);
          }
          *v194 = a4.m128d_f64[0];
          v185 = *((_QWORD *)ptrd + 34);
        }
        else
        {
          if ( ++v186 <= 99 )
          {
            v195 = ptrd;
            v214 = 5;
            v216 = (CoinMpsIO *)((char *)ptrd + 240);
            v215 = *((CoinMessageHandler **)ptrd + 28);
            goto LABEL_243;
          }
          if ( v186 > (int)&stru_186A0 )
            goto LABEL_208;
        }
      }
    }
  }
  if ( v5 != 14 )
  {
    if ( v5 == 8 )
    {
      v208 = (CoinMessageHandler *)CoinMessageHandler::message(
                                     *((CoinMessageHandler **)this + 28),
                                     11,
                                     (CoinMpsIO *)((char *)this + 240));
      v213 = CoinMessageHandler::operator<<(v208, *((_QWORD *)this + 21), v209, v210, v211, v212, v337);
      CoinMessageHandler::operator<<(v213, 0, a4.m128d_f64[0]);
      return (unsigned int)-3;
    }
    free(*(void **)this);
    *(_QWORD *)this = CoinStrdup((const char *)(*((_QWORD *)this + 34) + 8LL));
    v6 = *((_QWORD *)this + 34);
    *((_QWORD *)this + 17) = 0;
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v6 + 1232) + 24LL))(*(_QWORD *)(v6 + 1232), s, 1000);
    sscanf(s, "%d %d %d\n", (char *)this + 40, (char *)this + 44, &v406);
    v7 = *((int *)this + 10);
    v8 = v406;
    *((_DWORD *)this + 12) = v406;
    v9 = v8;
    v10 = v7;
    v7 *= 8LL;
    *((_QWORD *)this + 12) = malloc(v7);
    *((_QWORD *)this + 13) = malloc(v7);
    v406 = 0;
    if ( v10 > 0 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(*((_QWORD *)this + 34) + 1232LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)this + 34) + 1232LL),
          s,
          1000);
        sscanf(s, "%d %lg %lg\n", &v408, 8LL * v406 + *((_QWORD *)this + 12), *((_QWORD *)this + 13) + 8LL * v406);
        v11 = *((_DWORD *)this + 10) <= ++v406;
      }
      while ( !v11 );
      v9 = *((_DWORD *)this + 12);
    }
    v12 = *((int *)this + 11);
    *((_QWORD *)this + 14) = malloc(8 * v12);
    *((_QWORD *)this + 15) = malloc(8 * v12);
    *((_QWORD *)this + 16) = malloc(8 * v12);
    v399 = (int *)malloc(4LL * ((int)v12 + 1));
    ptr = (int *)malloc(4LL * v9);
    v13 = (double *)malloc(8LL * v9);
    *((_DWORD *)this + 12) = 0;
    v406 = 0;
    *v399 = 0;
    if ( (int)v12 > 0 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(*((_QWORD *)this + 34) + 1232LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)this + 34) + 1232LL),
          s,
          1000);
        sscanf(
          s,
          "%d %d %lg %lg %lg\n",
          &v407,
          &v408,
          *((_QWORD *)this + 14) + 8LL * v406,
          8LL * v406 + *((_QWORD *)this + 15),
          8LL * v406 + *((_QWORD *)this + 16));
        v407 = 0;
        if ( v408 <= 0 )
        {
          v14 = *((_DWORD *)this + 12);
        }
        else
        {
          do
          {
            (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(*((_QWORD *)this + 34) + 1232LL) + 24LL))(
              *(_QWORD *)(*((_QWORD *)this + 34) + 1232LL),
              s,
              1000);
            sscanf(s, "       %d %lg\n", &ptr[*((int *)this + 12)], &v13[*((int *)this + 12)]);
            v14 = *((_DWORD *)this + 12) + 1;
            v15 = v407;
            *((_DWORD *)this + 12) = v14;
            v407 = v15 + 1;
          }
          while ( v408 > v15 + 1 );
        }
        v16 = v406;
        v399[v406 + 1] = v14;
        v11 = *((_DWORD *)this + 11) <= ++v16;
        v406 = v16;
      }
      while ( !v11 );
      v4 = this;
    }
    v402 = 0;
    goto LABEL_13;
  }
  v63 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)this + 28),
                                9,
                                (CoinMpsIO *)((char *)this + 240));
  v68 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                v63,
                                *((_QWORD *)this + 34) + 8LL,
                                v64,
                                v65,
                                v66,
                                v67,
                                v337);
  v69 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v68);
  v74 = CoinMessageHandler::operator<<(v69, *((_QWORD *)this + 21), v70, v71, v72, v73, v339);
  CoinMessageHandler::operator<<(v74, 0, a4.m128d_f64[0]);
  std::string::string();
  v75 = std::string::compare((std::string *)s, "plain");
  if ( (_UNKNOWN *)(*(_QWORD *)s - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    v404 = v75;
    sub_1F9DC0(*(_QWORD *)s - 24LL);
    v75 = v404;
  }
  v402 = -2;
  if ( v75 )
  {
    v76 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 28),
                                  10,
                                  (CoinMpsIO *)((char *)this + 240));
    std::string::string();
    v77 = CoinMessageHandler::operator<<(v76);
    CoinMessageHandler::operator<<(v77, 0, a4.m128d_f64[0]);
    if ( (_UNKNOWN *)(*(_QWORD *)s - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1F9DC0(*(_QWORD *)s - 24LL);
    return (unsigned int)-2;
  }
  return (unsigned int)v402;
}

