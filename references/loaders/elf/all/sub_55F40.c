unsigned __int64 __fastcall sub_55F40(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _QWORD **j; // rdi
  _QWORD **v10; // r12
  __int64 v11; // r12
  __int64 m; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *v15; // r15
  __int64 v16; // rdi
  _QWORD **k; // rdi
  _QWORD **v18; // r12
  __int64 first_seg; // rax
  __int64 v21; // rsi
  __m128i *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r15
  char v28; // r15
  unsigned __int64 *v29; // rdi
  __int64 v30; // rdi
  int v31; // ecx
  __int64 (*v32)(); // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // r15
  int *v41; // rsi
  const char *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  char v52; // al
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 named_type_tid; // r12
  __int64 v58; // rsi
  _DWORD *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // r14d
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // r8
  __int64 v69; // r9
  __m128 v70; // xmm0
  __m128i *v71; // rsi
  __int64 v72; // r8
  __int64 v73; // r9
  __m128 v74; // xmm4
  __m128 v75; // xmm5
  __int64 *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  const char *v87; // r9
  __m128 v88; // xmm4
  __m128 v89; // xmm5
  _QWORD *v90; // r15
  unsigned __int64 *v91; // r14
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __m128 v95; // xmm4
  __m128 v96; // xmm5
  const char *v97; // rsi
  unsigned int v98; // eax
  const char *v99; // rdx
  const char *v100; // rsi
  double v101; // xmm4_8
  double v102; // xmm5_8
  __int64 v103; // r8
  __int64 v104; // r9
  const char *v105; // rsi
  double v106; // xmm4_8
  double v107; // xmm5_8
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // rdi
  __int64 v111; // rdi
  __int64 v112; // rdi
  unsigned __int64 v113; // rdi
  __int64 v114; // r15
  __int64 i; // r14
  __int64 *v116; // r12
  __int64 v117; // rdi
  __int64 v118; // rdi
  unsigned __int64 v119; // rdi
  unsigned __int64 v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  unsigned __int64 v125; // r14
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 name_ea; // rcx
  unsigned __int64 *v133; // rax
  __m128i *v134; // rsi
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  _WORD *v138; // rdi
  __int16 v139; // dx
  __int64 (*v140)(); // rcx
  unsigned __int64 v141; // rax
  __int64 v142; // r14
  unsigned __int64 v143; // rax
  __int64 max_strlit_length; // rax
  __int64 v145; // r15
  unsigned __int64 v146; // r14
  bool v147; // cf
  __int64 v148; // r14
  __int8 strlit; // al
  __int64 v150; // r14
  __int64 v151; // rdx
  unsigned __int64 v152; // rax
  unsigned __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rsi
  __int64 v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rdi
  __int64 v159; // rdi
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  unsigned __int64 v169; // rax
  __int64 v170; // rdx
  unsigned __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rdi
  unsigned __int8 (*v174)(void); // rax
  const char *v175; // rsi
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 plugin; // rax
  __int64 v186; // rdi
  __int64 v187; // r14
  __int64 v188; // r13
  __int64 v189; // r12
  __int64 *v190; // rbx
  __int64 v191; // rdi
  __int64 v192; // rdi
  __int64 v193; // rdi
  __int64 v194; // r12
  __int64 v195; // r15
  __int64 *v196; // rbx
  __int64 v197; // rdi
  __int64 v198; // rdi
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __m128 v204; // xmm4
  __m128 v205; // xmm5
  __int64 v206; // rsi
  __int64 v207; // rsi
  __int64 v208; // rdi
  int v209; // eax
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  unsigned __int64 v214; // rax
  __int64 v215; // r15
  char v216; // cl
  unsigned __int64 v217; // r14
  int v218; // r15d
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // rax
  unsigned int qword; // eax
  const char *v224; // rax
  const char *v225; // rdx
  const char *v226; // rdx
  const char *v227; // r12
  __int64 v228; // rsi
  int flags; // eax
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r12
  unsigned int v234; // eax
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // r9
  int v239; // eax
  char *v240; // r12
  void *v241; // rdi
  char *v242; // r15
  int v243; // eax
  char v244; // al
  char v245; // al
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // rax
  __int64 next_seg; // rcx
  char v251; // r14
  __int64 v252; // rax
  __int64 v253; // rdi
  _BYTE *v254; // rax
  __int64 v255; // rdi
  __int64 (*v256)(); // rax
  char v257; // al
  _BYTE *v258; // rax
  _BYTE *v259; // rsi
  const char *v260; // rax
  _BYTE *v261; // rax
  _WORD *v262; // rax
  __int64 v263; // rcx
  __int64 v264; // r8
  __m128 v265; // xmm4
  __m128 v266; // xmm5
  const char *v267; // rdx
  void *v268; // rdi
  __int64 v269; // rax
  __int64 v270; // rax
  char *v271; // r15
  char *v272; // r14
  char *v273; // r12
  void *v274; // rsi
  char *v275; // rax
  __int64 v276; // rax
  __int8 *v277; // rax
  void *v278; // rdx
  bool v279; // zf
  int v280; // eax
  _BYTE *v281; // rax
  _WORD *v282; // rsi
  _WORD *v283; // rsi
  __int64 v284; // rax
  _BYTE *v285; // rax
  _BYTE *v286; // rax
  __int64 v287; // r15
  unsigned int dword; // eax
  __int64 v289; // rcx
  __int64 v290; // rax
  unsigned __int64 *v291; // rcx
  __int64 v292; // rdx
  unsigned __int64 v293; // rax
  int v294; // eax
  unsigned __int64 v295; // rax
  struct _Unwind_Exception *v296; // rbx
  __int64 v297; // [rsp+0h] [rbp-740h]
  __int64 v298; // [rsp+0h] [rbp-740h]
  const char *src; // [rsp+8h] [rbp-738h]
  __int64 v300; // [rsp+10h] [rbp-730h]
  __int64 v301; // [rsp+18h] [rbp-728h]
  __int64 v302; // [rsp+18h] [rbp-728h]
  int v303; // [rsp+18h] [rbp-728h]
  unsigned __int64 *v304; // [rsp+18h] [rbp-728h]
  __int64 v305; // [rsp+20h] [rbp-720h]
  __int64 **v306; // [rsp+28h] [rbp-718h]
  __int64 v307; // [rsp+28h] [rbp-718h]
  unsigned int v308; // [rsp+28h] [rbp-718h]
  __int64 *v309; // [rsp+28h] [rbp-718h]
  __int64 v310; // [rsp+28h] [rbp-718h]
  __int64 v311; // [rsp+28h] [rbp-718h]
  unsigned __int64 v312; // [rsp+28h] [rbp-718h]
  __m128i n; // [rsp+30h] [rbp-710h] BYREF
  __int64 *v314; // [rsp+40h] [rbp-700h]
  unsigned __int64 *v315; // [rsp+48h] [rbp-6F8h]
  __int64 v316; // [rsp+50h] [rbp-6F0h] BYREF
  __int64 v317; // [rsp+58h] [rbp-6E8h] BYREF
  int v318; // [rsp+64h] [rbp-6DCh] BYREF
  int v319; // [rsp+68h] [rbp-6D8h]
  bool v320; // [rsp+6Ch] [rbp-6D4h]
  const char *v321; // [rsp+70h] [rbp-6D0h] BYREF
  __int128 v322; // [rsp+78h] [rbp-6C8h]
  __int64 v323; // [rsp+90h] [rbp-6B0h] BYREF
  __int128 v324; // [rsp+98h] [rbp-6A8h]
  unsigned __int64 *v325; // [rsp+B0h] [rbp-690h] BYREF
  __int128 v326; // [rsp+B8h] [rbp-688h]
  __int128 v327; // [rsp+D0h] [rbp-670h] BYREF
  __int128 v328; // [rsp+E0h] [rbp-660h]
  char v329; // [rsp+F0h] [rbp-650h]
  void *dest[6]; // [rsp+100h] [rbp-640h] BYREF
  int v331; // [rsp+130h] [rbp-610h] BYREF
  void *v332; // [rsp+138h] [rbp-608h]
  int *v333; // [rsp+140h] [rbp-600h]
  int *v334; // [rsp+148h] [rbp-5F8h]
  __int64 v335; // [rsp+150h] [rbp-5F0h]
  int v336; // [rsp+160h] [rbp-5E0h] BYREF
  void *v337; // [rsp+168h] [rbp-5D8h]
  int *v338; // [rsp+170h] [rbp-5D0h]
  int *v339; // [rsp+178h] [rbp-5C8h]
  __int64 v340; // [rsp+180h] [rbp-5C0h]
  __int64 v341; // [rsp+188h] [rbp-5B8h]
  __m128i v342[2]; // [rsp+190h] [rbp-5B0h] BYREF
  __int64 v343; // [rsp+1B0h] [rbp-590h]
  __int64 v344; // [rsp+1B8h] [rbp-588h]
  __m128i v345[2]; // [rsp+1E0h] [rbp-560h] BYREF
  __int64 v346; // [rsp+200h] [rbp-540h]
  unsigned __int64 v347; // [rsp+208h] [rbp-538h]
  __int64 v348; // [rsp+210h] [rbp-530h]
  _DWORD v349[28]; // [rsp+218h] [rbp-528h] BYREF
  unsigned __int8 v350; // [rsp+288h] [rbp-4B8h]
  __int64 v351; // [rsp+2B0h] [rbp-490h]
  __int64 v352; // [rsp+2B8h] [rbp-488h]
  __m128i v353; // [rsp+2F0h] [rbp-450h] BYREF
  __m128 v354; // [rsp+300h] [rbp-440h]
  int v355; // [rsp+32Ch] [rbp-414h]
  int v356; // [rsp+330h] [rbp-410h]
  int v357; // [rsp+334h] [rbp-40Ch]
  __int64 v358; // [rsp+358h] [rbp-3E8h]
  _BYTE v359[7]; // [rsp+388h] [rbp-3B8h] BYREF
  unsigned __int8 v360; // [rsp+38Fh] [rbp-3B1h]
  unsigned __int16 v361; // [rsp+398h] [rbp-3A8h]
  __int64 v362; // [rsp+3A0h] [rbp-3A0h]
  __int64 v363; // [rsp+3A8h] [rbp-398h]
  __int64 v364; // [rsp+3B0h] [rbp-390h]
  int v365; // [rsp+3B8h] [rbp-388h]
  __int16 v366; // [rsp+3C4h] [rbp-37Ch]
  unsigned int v367; // [rsp+3C8h] [rbp-378h]
  unsigned int v368; // [rsp+3CCh] [rbp-374h]
  __int64 v369; // [rsp+3D0h] [rbp-370h]
  __int64 v370; // [rsp+3D8h] [rbp-368h]
  __int64 v371; // [rsp+3E8h] [rbp-358h]
  __int64 v372; // [rsp+3F0h] [rbp-350h]
  char v373; // [rsp+3F9h] [rbp-347h]
  __int64 v374; // [rsp+400h] [rbp-340h] BYREF
  __int128 v375; // [rsp+408h] [rbp-338h]
  __int64 v376; // [rsp+418h] [rbp-328h]
  __int128 v377; // [rsp+420h] [rbp-320h]
  __int64 v378; // [rsp+430h] [rbp-310h]
  __int128 v379; // [rsp+438h] [rbp-308h]
  __int64 v380; // [rsp+448h] [rbp-2F8h]
  __int64 v381; // [rsp+450h] [rbp-2F0h]
  __int128 v382; // [rsp+458h] [rbp-2E8h]
  __int64 v383; // [rsp+468h] [rbp-2D8h]
  __int128 v384; // [rsp+470h] [rbp-2D0h]
  int v385; // [rsp+488h] [rbp-2B8h] BYREF
  __int64 v386; // [rsp+490h] [rbp-2B0h]
  int *v387; // [rsp+498h] [rbp-2A8h]
  int *v388; // [rsp+4A0h] [rbp-2A0h]
  _BYTE v389[36]; // [rsp+4A8h] [rbp-298h] BYREF
  __int64 v390; // [rsp+4D0h] [rbp-270h]
  __m128i v391; // [rsp+4D8h] [rbp-268h] BYREF
  __m128i v392; // [rsp+4E8h] [rbp-258h] BYREF
  __int64 v393[4]; // [rsp+4F8h] [rbp-248h] BYREF
  __int64 v394[4]; // [rsp+518h] [rbp-228h] BYREF
  __int64 v395[12]; // [rsp+538h] [rbp-208h] BYREF
  __int64 v396[4]; // [rsp+598h] [rbp-1A8h] BYREF
  __int64 v397[4]; // [rsp+5B8h] [rbp-188h] BYREF
  __int64 v398[4]; // [rsp+5D8h] [rbp-168h] BYREF
  __int64 v399[4]; // [rsp+5F8h] [rbp-148h] BYREF
  __int64 v400[4]; // [rsp+618h] [rbp-128h] BYREF
  __int64 v401[4]; // [rsp+638h] [rbp-108h] BYREF
  __int64 v402[4]; // [rsp+658h] [rbp-E8h] BYREF
  __int64 v403[4]; // [rsp+678h] [rbp-C8h] BYREF
  __int64 v404[4]; // [rsp+698h] [rbp-A8h] BYREF
  int v405; // [rsp+6B8h] [rbp-88h] BYREF
  __int64 v406; // [rsp+6C0h] [rbp-80h]
  __int128 v407; // [rsp+6C8h] [rbp-78h]
  __int64 v408; // [rsp+6D8h] [rbp-68h]
  __int128 v409; // [rsp+6E0h] [rbp-60h]
  __int64 v410; // [rsp+6F0h] [rbp-50h]
  __int128 v411; // [rsp+6F8h] [rbp-48h]
  unsigned __int64 v412; // [rsp+708h] [rbp-38h]

  v412 = __readfsqword(0x28u);
  first_seg = get_first_seg();
  v21 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 526) = first_seg == 0;
  sub_45020((__int64)v342, v21, 0);
  v374 = 0;
  v387 = &v385;
  v388 = &v385;
  v22 = &v391;
  v376 = 0;
  v378 = 0;
  v380 = 0;
  v381 = 0;
  v383 = 0;
  v385 = 0;
  v386 = 0;
  v390 = 0;
  n.m128i_i64[0] = (__int64)&v391;
  v375 = 0;
  v377 = 0;
  v379 = 0;
  v382 = 0;
  v384 = 0;
  memset(v389, 0, sizeof(v389));
  do
  {
    v22->m128i_i64[0] = 0;
    v22 += 2;
    *(__m128i *)((char *)&v22[-2] + 8) = 0;
    v22[-1].m128i_i16[4] = 0;
    v22[-1].m128i_i32[3] = 0;
  }
  while ( v22 != (__m128i *)&v405 );
  v406 = 0;
  v408 = 0;
  memset((void *)n.m128i_i64[0], 0, 0x1E8u);
  v410 = 0;
  v407 = 0;
  v409 = 0;
  v411 = 0;
  if ( !(unsigned __int8)sub_39590((__int64)v342) || !(unsigned __int8)sub_39BD0((__int64)v342) )
    sub_EB70((__int64)"Failed reading ELF header");
  n.m128i_i16[7] = sub_43980((_QWORD *)a1, (__int64)v342);
  v26 = v360;
  LODWORD(v27) = v365;
  memset(dest, 0, 24);
  if ( n.m128i_i16[7] <= 0x3Eu )
  {
    if ( n.m128i_i16[7] <= 2u )
      goto LABEL_19;
    switch ( n.m128i_i16[7] )
    {
      case 3:
      case 6:
        v29 = (unsigned __int64 *)dest[0];
        if ( !(unsigned __int8)getinf_flag(3, 4) )
        {
          if ( dest[2] <= &byte_8 )
          {
            dest[0] = (void *)qvector_reserve(dest, dest[0], 9, 1);
            v29 = (unsigned __int64 *)dest[0];
          }
          dest[1] = byte_9;
          *v29 = 0x346E67696C61382DLL;
          v29 = (unsigned __int64 *)dest[0];
          *((_BYTE *)dest[0] + 8) = 0;
        }
        goto LABEL_383;
      case 8:
      case 0x19:
      case 0x1E:
        v239 = v365 & 0xF000;
        switch ( v239 )
        {
          case 0x1000:
            v285 = (_BYTE *)qvector_reserve(dest, 0, 4, 1);
            dest[0] = v285;
            dest[1] = &byte_4;
            *(_WORD *)v285 = 13167;
            v285[2] = 50;
            *((_BYTE *)dest[0] + 3) = 0;
            break;
          case 0x2000:
            v281 = (_BYTE *)qvector_reserve(dest, 0, 4, 1);
            dest[0] = v281;
            dest[1] = &byte_4;
            *(_WORD *)v281 = 13935;
            v281[2] = 52;
            *((_BYTE *)dest[0] + 3) = 0;
            goto LABEL_356;
          case 0x3000:
            v262 = (_WORD *)qvector_reserve(dest, 0, 7, 1);
            dest[0] = v262;
            dest[1] = &byte_7;
            *(_DWORD *)v262 = 1768055141;
            v262[2] = 12851;
            *((_BYTE *)dest[0] + 6) = 0;
            goto LABEL_356;
          case 0x4000:
            v240 = "n64";
            v241 = dest[0];
            if ( !(unsigned __int8)getinf_flag(3, 4) )
              v240 = "n32";
            if ( dest[2] > (char *)&dword_0 + 3 )
              goto LABEL_355;
            goto LABEL_527;
        }
        if ( (v27 & 0xE0000000) == 0x20000000 )
        {
          if ( (v27 & 0x20) != 0 )
          {
            v240 = "n32";
          }
          else
          {
            v240 = "n64";
            if ( !(unsigned __int8)getinf_flag(3, 4) )
              v240 = "o32";
          }
        }
        else
        {
          v280 = v27 & 0xF0000000;
          if ( (v27 & 0xD0000000) == 0x80000000 || v280 == 1610612736 )
          {
            v240 = "n64";
            if ( (unsigned __int8)getinf_flag(3, 4) )
              goto LABEL_354;
          }
          else if ( ((v280 - 1879048192) & 0xD0000000) != 0 )
          {
            named_type_tid = (unsigned __int64)"n64";
            if ( !(unsigned __int8)getinf_flag(3, 4) )
              named_type_tid = (unsigned __int64)"o32";
            if ( dest[2] <= (char *)&dword_0 + 3 )
              goto LABEL_597;
            goto LABEL_570;
          }
          v240 = "n32";
          if ( (v27 & 0x20) == 0 )
            v240 = "o32";
        }
LABEL_354:
        v241 = dest[0];
        if ( dest[2] > (char *)&dword_0 + 3 )
        {
LABEL_355:
          dest[1] = &byte_4;
          memmove(v241, v240, 3u);
          *((_BYTE *)dest[0] + 3) = 0;
          goto LABEL_356;
        }
LABEL_527:
        dest[0] = (void *)qvector_reserve(dest, v241, 4, 1);
        v241 = dest[0];
        goto LABEL_355;
      case 0x14:
        goto LABEL_389;
      case 0x15:
        if ( v360 != 102 )
        {
          if ( (v365 & 3) != 2 )
          {
LABEL_389:
            dest[0] = (void *)qvector_reserve(dest, 0, 5, 1);
            dest[1] = &byte_5;
            *(_DWORD *)dest[0] = 1987279219;
            goto LABEL_390;
          }
          v261 = (_BYTE *)qvector_reserve(dest, 0, 6, 1);
          dest[0] = v261;
          dest[1] = &byte_6;
          *(_DWORD *)v261 = 1986423909;
          v261[4] = 50;
          goto LABEL_429;
        }
        v286 = (_BYTE *)qvector_reserve(dest, 0, 10, 1);
        v23 = 0x766C736F6C6C6563LL;
        dest[0] = v286;
        dest[1] = byte_9 + 1;
        *(_QWORD *)v286 = 0x766C736F6C6C6563LL;
        v286[8] = 50;
        v29 = (unsigned __int64 *)dest[0];
        *((_BYTE *)dest[0] + 9) = 0;
        if ( dest[1] <= (char *)&dword_0 + 1 )
          goto LABEL_17;
        goto LABEL_384;
      case 0x24:
        if ( (~v365 & 0xF0000000) != 0 )
          goto LABEL_19;
        v254 = (_BYTE *)qvector_reserve(dest, 0, 6, 1);
        dest[0] = v254;
        dest[1] = &byte_6;
        *(_DWORD *)v254 = 892889202;
        v254[4] = 48;
        goto LABEL_429;
      case 0x28:
        dest[0] = (void *)qvector_reserve(dest, 0, 5, 1);
        dest[1] = &byte_5;
        *(_DWORD *)dest[0] = 1768055141;
        goto LABEL_390;
      case 0x3E:
        if ( v360 != 123 )
          goto LABEL_19;
        dest[0] = (void *)qvector_reserve(dest, 0, 5, 1);
        dest[1] = &byte_5;
        *(_DWORD *)dest[0] = 1818452334;
        goto LABEL_390;
      default:
        goto LABEL_19;
    }
  }
  switch ( n.m128i_i16[7] )
  {
    case 0xF3:
      v257 = getinf_flag(3, 4);
      v23 = v27 & 6;
      if ( !v257 )
      {
        if ( (_DWORD)v23 == 2 )
        {
          v283 = dest[0];
          if ( dest[2] <= &byte_6 )
          {
            dest[0] = (void *)qvector_reserve(dest, dest[0], 7, 1);
            v283 = dest[0];
          }
          dest[1] = &byte_7;
          *(_DWORD *)v283 = 863005801;
          v283[2] = 26162;
          *((_BYTE *)dest[0] + 6) = 0;
          if ( dest[1] <= (char *)&dword_0 + 1 )
            goto LABEL_15;
        }
        else if ( (_DWORD)v23 == 4 )
        {
          v282 = dest[0];
          if ( dest[2] <= &byte_6 )
          {
            dest[0] = (void *)qvector_reserve(dest, dest[0], 7, 1);
            v282 = dest[0];
          }
          dest[1] = &byte_7;
          *(_DWORD *)v282 = 863005801;
          v282[2] = 25650;
          *((_BYTE *)dest[0] + 6) = 0;
          if ( dest[1] <= (char *)&dword_0 + 1 )
            goto LABEL_15;
        }
        else if ( (v27 & 6) != 0 )
        {
          if ( dest[1] <= (char *)&dword_0 + 1 )
            goto LABEL_15;
        }
        else
        {
          v259 = dest[0];
          if ( dest[2] <= &byte_5 )
          {
            dest[0] = (void *)qvector_reserve(dest, dest[0], 6, 1);
            v259 = dest[0];
          }
          dest[1] = &byte_6;
          *(_DWORD *)v259 = 863005801;
          v259[4] = 50;
          *((_BYTE *)dest[0] + 5) = 0;
          if ( dest[1] <= (char *)&dword_0 + 1 )
            goto LABEL_15;
        }
        v327 = 0;
        set_compiler(&v327, 4, dest[0]);
        goto LABEL_15;
      }
      v29 = (unsigned __int64 *)dest[0];
      if ( (_DWORD)v23 == 4 )
      {
        if ( dest[2] <= &byte_5 )
        {
          dest[0] = (void *)qvector_reserve(dest, dest[0], 6, 1);
          v29 = (unsigned __int64 *)dest[0];
        }
        dest[1] = &byte_6;
        *(_DWORD *)v29 = 875982956;
        *((_BYTE *)v29 + 4) = 100;
      }
      else
      {
        if ( (unsigned int)v23 <= 4 )
        {
          if ( (v27 & 6) != 0 )
          {
            if ( dest[2] <= &byte_5 )
            {
              dest[0] = (void *)qvector_reserve(dest, dest[0], 6, 1);
              v29 = (unsigned __int64 *)dest[0];
            }
            dest[1] = &byte_6;
            *(_DWORD *)v29 = 875982956;
            *((_BYTE *)v29 + 4) = 102;
            goto LABEL_429;
          }
          if ( dest[2] <= &byte_4 )
          {
            dest[0] = (void *)qvector_reserve(dest, dest[0], 5, 1);
            v29 = (unsigned __int64 *)dest[0];
          }
          dest[1] = &byte_5;
          *(_DWORD *)v29 = 875982956;
LABEL_390:
          *((_BYTE *)dest[0] + 4) = 0;
          v29 = (unsigned __int64 *)dest[0];
LABEL_383:
          if ( dest[1] > (char *)&dword_0 + 1 )
            goto LABEL_384;
          goto LABEL_17;
        }
        if ( (_DWORD)v23 != 6 )
          goto LABEL_383;
        if ( dest[2] <= &byte_5 )
        {
          dest[0] = (void *)qvector_reserve(dest, dest[0], 6, 1);
          v29 = (unsigned __int64 *)dest[0];
        }
        dest[1] = &byte_6;
        *(_DWORD *)v29 = 875982956;
        *((_BYTE *)v29 + 4) = 113;
      }
LABEL_429:
      *((_BYTE *)dest[0] + 5) = 0;
      v29 = (unsigned __int64 *)dest[0];
      if ( dest[1] > (char *)&dword_0 + 1 )
        goto LABEL_384;
      goto LABEL_17;
    case 0xF9:
      v258 = (_BYTE *)qvector_reserve(dest, 0, 4, 1);
      dest[0] = v258;
      dest[1] = &byte_4;
      *(_WORD *)v258 = 13168;
      v258[2] = 50;
      *((_BYTE *)dest[0] + 3) = 0;
      v29 = (unsigned __int64 *)dest[0];
      goto LABEL_383;
    case 0xB7:
      dest[0] = (void *)qvector_reserve(dest, 0, 5, 1);
      dest[1] = &byte_5;
      strcpy((char *)dest[0], "eabi");
      v28 = getinf_flag(3, 4);
      if ( dest[1] > (char *)&dword_0 + 1 )
      {
        v327 = 0;
        set_compiler(&v327, 4, dest[0]);
      }
      if ( v28 )
        goto LABEL_16;
      goto LABEL_15;
  }
LABEL_19:
  while ( 2 )
  {
    if ( (unsigned int)v361 - 1 > 3 )
    {
      v30 = *(_QWORD *)(a1 + 240);
      v31 = v361;
      v32 = *(__int64 (**)())(*(_QWORD *)v30 + 88LL);
      if ( v32 != sub_D100 )
      {
        if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64 (*)(), _QWORD))v32)(v30, v361, sub_D100, v361) )
          goto LABEL_22;
        v31 = v361;
      }
      if ( (int)sub_343A0(
                  0,
                  (__int64)"HIDECANCEL\n"
                           "Unsupported or unknown image type %d (0x%04X).\n"
                           "Do you still want load it into the database?\n"
                           "\n"
                           "Please note that most likely it will fail because IDA\n"
                           "doesn't know about particularities of this image.",
                  v31,
                  v31) <= 0 )
        sub_EB70(0);
    }
LABEL_22:
    setinf(12, 0, v26, v23, v24, v25);
    v37 = 4;
    if ( v373 )
      v37 = 8;
    setinf(9, v37, v33, v34, v35, v36);
    netnode_check(a1 + 304, "$ elfnode", 0, 1);
    v38 = *(_QWORD *)(a1 + 304);
    v315 = (unsigned __int64 *)v359;
    netnode_set(v38, v359, 72);
    v321 = nullptr;
    v39 = v363;
    v40 = v364;
    v322 = 0;
    if ( (unsigned __int8)qgetenv("IDA_ELF_PATCH_MODE", &v321) && (unsigned int)qsscanf(v321, "%i", dest) == 1 )
      *(_WORD *)(*(_QWORD *)(a1 + 240) + 346LL) = dest[0];
    v41 = (int *)&v321;
    v42 = "IDA_ELF_LOAD_OPTS";
    v320 = 0;
    v318 = v39 == 0 ? -1 : 1;
    v319 = v40 == 0 ? -1 : 1;
    if ( (unsigned __int8)qgetenv("IDA_ELF_LOAD_OPTS", &v321)
      && (v42 = v321, v41 = (int *)"%i", (unsigned int)qsscanf(v321, "%i", dest) == 1) )
    {
      if ( v39 )
        v318 = (__int64)dest[0] & 1;
      if ( v40 )
      {
        v47 = (LODWORD(dest[0]) >> 1) & 1;
        v319 = v47;
      }
      else
      {
        v47 = v319;
      }
      v43 = (LODWORD(dest[0]) >> 2) & 1;
      v320 = ((__int64)dest[0] & 4) != 0;
    }
    else
    {
      v47 = v319;
    }
    if ( v47 > 0 && v361 == 4 && *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 23 )
    {
      v42 = "A sparc core file has been detected, disabling use of SHT...\n";
      sub_EAA0((__int64)"A sparc core file has been detected, disabling use of SHT...\n");
      v319 = -1;
    }
    if ( (*(_BYTE *)(a1 + 521) & 0x10) != 0 )
    {
      v41 = &v318;
      v42 = (const char *)a1;
      sub_40C60(a1, (__int64)&v318);
    }
    if ( (unsigned __int8)is_debugger_on(v42, v41, v43, v44, v45, v46) )
      sub_EAA0((__int64)"Loading as is for debugging...\n");
    v316 = sub_45960(a1, v342, 0.0, *(double *)a3.m128_u64);
    sub_42E20(a1, (__int64)v342, &v316, &v317);
    v52 = is_debugger_on(a1, v342, v48, v49, v50, v51);
    v27 = v316;
    if ( v52 )
      v27 = getinf(93, v342, v53, v54, v55, v56);
    setinf(93, v27, v53, v54, v55, v56);
    v301 = v317;
    v305 = v27 - v317;
    v372 = v27 - v317;
    if ( v319 <= 0 )
    {
      v364 = 0;
      v366 = 0;
      v367 = 0;
LABEL_37:
      LOBYTE(named_type_tid) = 0;
      goto LABEL_38;
    }
    sub_319C0((__int64)v342);
    if ( v367 <= 1 )
      goto LABEL_37;
    LOBYTE(named_type_tid) = sub_472C0(a1, (__int64)v342);
    if ( !(_BYTE)named_type_tid )
      goto LABEL_37;
    if ( v368 )
    {
      named_type_tid = v350;
      if ( !v350 )
        goto LABEL_593;
      if ( v368 >= v347 || (v209 = *(_DWORD *)(v346 + ((unsigned __int64)v368 << 6) + 4), v209 != 3) && v209 != 8 )
      {
        if ( !byte_8C221 )
        {
          if ( (int)sub_343A0(1u, (__int64)"HIDECANCEL\nBad file structure or read error (line %d). Continue?", 5874) <= 0 )
            sub_EB70(0);
          byte_8C221 = 1;
        }
        goto LABEL_37;
      }
    }
LABEL_38:
    v58 = (__int64)v315;
    (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)(a1 + 240) + 96LL))(*(_QWORD *)(a1 + 240), v315);
    sub_101F0(0x7E3u);
    v63 = v319;
    if ( (_BYTE)named_type_tid )
    {
      v233 = *(_QWORD *)(a1 + 8);
      v234 = getinf(10, v58, v59, v60, v61, v62);
      v66 = *(unsigned int *)(v233 + 4);
      v67 = v234;
      if ( !(_DWORD)v66 )
        v67 = v234 & 0xFFDFFFFF;
      if ( v63 > 0 )
        v67 = (unsigned int)v67 | 8;
    }
    else
    {
      if ( v319 > 0 )
      {
        if ( v361 == 1 )
          sub_EB70((__int64)"File contains meaningless/illegal section declarations");
        sub_BFC0((__int64)"File contains meaningless/illegal section declarations");
        v364 = 0;
        v366 = 0;
        v367 = 0;
        if ( v346 )
        {
          v347 = 0;
          qfree(v346);
          v346 = 0;
          v348 = 0;
        }
        v59 = v349;
        memset(v349, 0, 0x68u);
        v60 = 0;
        if ( v408 )
        {
          *(_QWORD *)&v409 = 0;
          qfree(v408);
          v408 = 0;
          *((_QWORD *)&v409 + 1) = 0;
        }
        if ( v406 )
        {
          *(_QWORD *)&v407 = 0;
          qfree(v406);
          v406 = 0;
          *((_QWORD *)&v407 + 1) = 0;
        }
        v319 = -1;
      }
      v64 = *(_QWORD *)(a1 + 8);
      v67 = (unsigned int)getinf(10, v58, v59, v60, v61, v62);
      if ( !*(_DWORD *)(v64 + 4) )
        v67 = (unsigned int)v67 & 0xFFDFFFFF;
    }
    setinf(10, v67, v65, v66, v68, v69);
    v323 = 0;
    v314 = &v323;
    v324 = 0;
    sub_51EE0(a1, (__int64)v342, &v318, (__int64)&v323, (__m128i)0LL, (__m128i)a3);
    if ( v318 > 0 )
    {
      *(__m128i *)&v389[8] = _mm_load_si128(v342);
      *(__m128i *)&v389[20] = _mm_loadu_si128((const __m128i *)((char *)&v342[0].m128i_u64[1] + 4));
    }
    v70 = 0;
    v327 = (unsigned __int64)v342;
    v71 = (__m128i *)&v327;
    v329 = 0;
    v328 = 0;
    sub_48800((__int64)v342, (__int64)&v327);
    v76 = *((__int64 **)&v327 + 1);
    v77 = 7 * v328;
    v78 = *((_QWORD *)&v327 + 1) + 56 * v328;
    if ( *((_QWORD *)&v327 + 1) != v78 )
    {
      while ( 1 )
      {
        if ( v76[1] )
        {
          v77 = *v76;
          if ( *(_BYTE *)*v76 == 71 && *(_BYTE *)(v77 + 1) == 111 && !*(_BYTE *)(v77 + 2) )
            break;
        }
        v76 += 7;
        if ( (__int64 *)v78 == v76 )
          goto LABEL_61;
      }
      v71 = (__m128i *)&dword_B0;
      setinf(99, 176, v77, v78, v72, v73);
      if ( (getinf(57, 176, v79, v80, v81, v82) & 0xF) == 0 )
      {
        v70 = 0;
        v71 = (__m128i *)(&dword_0 + 2);
        *(_OWORD *)dest = 0;
        LOBYTE(dest[0]) = 6;
        set_compiler(dest, 2, 0);
      }
    }
LABEL_61:
    if ( v319 <= 0
      || (v71 = v342, sub_4A8C0(a1, (__int64)v342, v314, *(double *)v70.m128_u64, (__m128i)a3), *(_QWORD *)&v389[8])
      || (*(__m128i *)&v389[8] = _mm_load_si128(v345),
          v70 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v345[0].m128i_u64[1] + 4)),
          *(__m128 *)&v389[20] = v70,
          *(_QWORD *)&v389[8])
      || !v342[0].m128i_i64[0] )
    {
      if ( !v27 )
        goto LABEL_63;
    }
    else
    {
      *(__m128i *)&v389[8] = _mm_load_si128(v342);
      v70 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v342[0].m128i_u64[1] + 4));
      *(__m128 *)&v389[20] = v70;
      if ( !v27 )
        goto LABEL_63;
    }
    v71 = (__m128i *)v27;
    sub_F630((__int64)"Imagebase   : %a", v27, v77, v78, v72, v73, v70, a3, a4, a5, v74, v75, a8, a9, v297);
LABEL_63:
    v83 = 0x8000000;
    if ( *(_QWORD *)(a1 + 176) )
      v83 = (*(_QWORD *)(a1 + 512) + 3LL) & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)(a1 + 512) = v83;
    *(_QWORD *)(a1 + 312) = v83;
    create_filename_cmt();
    if ( v349[10] )
    {
      if ( !v350 )
      {
        sub_30AC0();
LABEL_605:
        sub_30AC0();
        goto LABEL_606;
      }
      if ( v349[10] < v347 )
      {
        v71 = (__m128i *)(a1 + 280);
        sub_45FA0((__int64)v342, (__int64 *)(a1 + 280), *(_QWORD *)(v346 + ((unsigned __int64)v349[10] << 6) + 24));
      }
    }
    if ( *(_QWORD *)(a1 + 288) > 1u )
    {
      v71 = *(__m128i **)(a1 + 280);
      sub_F630(
        (__int64)"Interpreter '%s'",
        (__int64)v71,
        v84,
        v85,
        v86,
        (__int64)v87,
        v70,
        a3,
        a4,
        a5,
        v88,
        v89,
        a8,
        a9,
        v297);
      if ( !*(_QWORD *)&v389[8] )
      {
        if ( *(_QWORD *)(a1 + 288) <= 1u )
          goto LABEL_71;
LABEL_275:
        v71 = (__m128i *)(getinf(3, v71, v84, v85, v86, v87) & 0xFFFFFFF7LL);
        setinf(3, v71, v210, v211, v212, v213);
        goto LABEL_71;
      }
    }
    else if ( !*(_QWORD *)&v389[8] )
    {
      goto LABEL_71;
    }
    v70 = 0;
    v326 = 0;
    v325 = nullptr;
    v71 = (__m128i *)&v325;
    v325 = (unsigned __int64 *)qvector_reserve(&v325, 0, 10, 16);
    if ( !(unsigned __int8)sub_45B00((__int64)v342, (__int64 *)&v325, (__int64 *)&v389[8])
      || (v71 = (__m128i *)n.m128i_i64[0], LOBYTE(v300) = sub_3B290(v342, n.m128i_i64[0], &v325), !(_BYTE)v300) )
    {
      if ( v325 )
      {
        *(_QWORD *)&v326 = 0;
        qfree(v325);
      }
LABEL_323:
      if ( *(_QWORD *)(a1 + 288) <= 1u )
        goto LABEL_71;
      goto LABEL_275;
    }
    v71 = v342;
    sub_44040(a1, (__int64)v342, (__int64 *)n.m128i_i64[0]);
    v84 = v391.m128i_i64[0];
    LODWORD(src) = *(_DWORD *)&v389[32];
    if ( v391.m128i_i64[0] > 0 && v392.m128i_i64[0] )
    {
      v71 = (__m128i *)v353.m128i_i64[0];
      if ( v353.m128i_i64[0] > 0 && v354.m128_u64[0] )
      {
        if ( v391.m128i_i64[0] == v353.m128i_i64[0] )
          goto LABEL_412;
        sub_BFC0(
          (__int64)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%08llX), "
                   "using the latter",
          v353.m128i_i64[0],
          v391.m128i_i64[0]);
      }
      v353 = _mm_loadu_si128(&v391);
      v70 = (__m128)_mm_loadu_si128(&v392);
      v354 = v70;
    }
LABEL_412:
    v315 = v325;
    if ( !(16LL * (_QWORD)v326) )
    {
      if ( v315 )
      {
        *(_QWORD *)&v326 = 0;
        qfree(v315);
      }
      goto LABEL_323;
    }
    n.m128i_i16[6] = 0;
    LOBYTE(v297) = 0;
    do
    {
      v255 = *(_QWORD *)(a1 + 240);
      v256 = *(__int64 (**)())(*(_QWORD *)v255 + 80LL);
      if ( v256 != sub_D0F0 )
      {
        v71 = (__m128i *)v315;
        v260 = (const char *)((__int64 (__fastcall *)(__int64, unsigned __int64 *))v256)(v255, v315);
        v87 = v260;
        if ( v260 )
        {
          if ( !*v260 )
            goto LABEL_442;
LABEL_460:
          a3 = 0;
          memset(dest, 0, 24);
          v310 = (__int64)v87;
          sub_461E0((__int64)v342, (__int64 *)dest, v353.m128i_i64, *((_DWORD *)v315 + 2));
          v267 = &s1;
          if ( dest[1] )
            v267 = (const char *)dest[0];
          v71 = (__m128i *)v310;
          sub_F630(
            (__int64)"%s '%s'",
            v310,
            (__int64)v267,
            v263,
            v264,
            v310,
            v70,
            (__m128)0LL,
            a4,
            a5,
            v265,
            v266,
            a8,
            a9,
            v297);
          if ( *v315 == 1 )
          {
            v276 = *(_QWORD *)(a1 + 256);
            v71 = *(__m128i **)(a1 + 248);
            if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v276 + 1) )
            {
              v284 = qvector_reserve(a1 + 248, v71, v276 + 1, 24);
              *(_QWORD *)(a1 + 248) = v284;
              v71 = (__m128i *)v284;
              v276 = *(_QWORD *)(a1 + 256);
            }
            v277 = &v71->m128i_i8[24 * v276];
            *(_OWORD *)(v277 + 8) = 0;
            *(_QWORD *)v277 = 0;
            v278 = dest[0];
            ++*(_QWORD *)(a1 + 256);
            v268 = *(void **)v277;
            *(_QWORD *)v277 = v278;
            v70 = (__m128)_mm_loadu_si128((const __m128i *)(v277 + 8));
            *((void **)v277 + 1) = dest[1];
            v84 = (unsigned __int64)dest[2];
            *((void **)v277 + 2) = dest[2];
            v279 = *(_QWORD *)(a1 + 272) == -1;
            dest[0] = v268;
            *(__m128 *)&dest[1] = v70;
            if ( !v279 )
              goto LABEL_464;
            v71 = (__m128i *)"$ IDALDR node for ids loading $";
            netnode_check(a1 + 272, "$ IDALDR node for ids loading $", 0, 1);
          }
          v268 = dest[0];
LABEL_464:
          if ( v268 )
          {
            dest[1] = nullptr;
            qfree(v268);
          }
          goto LABEL_442;
        }
      }
      v71 = (__m128i *)*v315;
      switch ( *v315 )
      {
        case 0uLL:
        case 2uLL:
        case 4uLL:
        case 5uLL:
        case 6uLL:
        case 8uLL:
        case 0xAuLL:
        case 0x10uLL:
        case 0x12uLL:
        case 0x16uLL:
        case 0x17uLL:
        case 0x19uLL:
        case 0x1AuLL:
        case 0x1BuLL:
        case 0x1CuLL:
        case 0x1EuLL:
          break;
        case 1uLL:
          v87 = "Needed Library";
          goto LABEL_460;
        case 3uLL:
          v71 = v342;
          sub_43D90(a1, (__int64)v342, (__int64)v315);
          break;
        case 7uLL:
        case 0x11uLL:
        case 0x14uLL:
          if ( (_DWORD)src == -1 )
            *(_BYTE *)(a1 + 528) = 1;
          break;
        case 9uLL:
          v84 = v315[1] - 1;
          if ( v84 <= 0x17 )
            v357 = v315[1];
          break;
        case 0xBuLL:
          v84 = v315[1] - 1;
          if ( v84 <= 0x17 )
            v355 = v315[1];
          break;
        case 0xCuLL:
          if ( (_DWORD)src == -1 )
          {
            v269 = v358 & (v315[1] + v372);
            v84 = -1;
            if ( v269 == v358 )
              v269 = -1;
            *(_QWORD *)(a1 + 216) = v269;
          }
          break;
        case 0xDuLL:
          if ( (_DWORD)src == -1 )
          {
            v270 = v358 & (v315[1] + v372);
            v84 = -1;
            if ( v270 == v358 )
              v270 = -1;
            *(_QWORD *)(a1 + 224) = v270;
          }
          break;
        case 0xEuLL:
          v87 = "Shared Name";
          LOBYTE(v297) = v300;
          goto LABEL_460;
        case 0xFuLL:
          v87 = "Library rpath";
          goto LABEL_460;
        case 0x13uLL:
          v84 = v315[1] - 1;
          if ( v84 <= 0xF )
            v356 = v315[1];
          break;
        case 0x15uLL:
          n.m128i_i8[13] = v300;
          break;
        case 0x18uLL:
          goto LABEL_485;
        case 0x1DuLL:
          v87 = "Library runpath";
          goto LABEL_460;
        default:
          if ( v71 == (__m128i *)1879048176 )
            break;
          if ( (unsigned __int64)v71 > 0x6FFFFFF0 )
          {
            if ( v71 == (__m128i *)2147483645 )
            {
              v87 = "Auxiliary library";
              goto LABEL_460;
            }
            if ( (unsigned __int64)v71 > 0x7FFFFFFD )
            {
              v87 = "Filter library";
              if ( v71 == (__m128i *)0x7FFFFFFF )
                goto LABEL_460;
            }
            else
            {
              if ( v71 == (__m128i *)1879048187 )
              {
                n.m128i_i8[12] = (*((_BYTE *)v315 + 11) & 8) != 0;
                break;
              }
              if ( (unsigned __int64)v71 > 0x6FFFFFFB )
              {
                if ( (unsigned __int64)v71[-117440512].m128i_u64 + 4 <= 3 )
                  break;
              }
              else if ( v71 == (__m128i *)1879048186 )
              {
                break;
              }
            }
            goto LABEL_485;
          }
          if ( v71 == (__m128i *)1879047931 )
          {
            v87 = "Dependency audit library";
            goto LABEL_460;
          }
          if ( (unsigned __int64)v71 > 0x6FFFFEFB )
          {
            v87 = "Audit library";
            if ( v71 == (__m128i *)1879047932 )
              goto LABEL_460;
LABEL_485:
            if ( (debug & 0x10) != 0 )
              sub_E950((__int64)"Illegal or not supported dynamic tag %llu\n", v71);
            break;
          }
          v87 = "Configuration file";
          if ( v71 == (__m128i *)1879047930 )
            goto LABEL_460;
          if ( v71 != (__m128i *)1879047669 && v71 != (__m128i *)1879047672 )
            goto LABEL_485;
          break;
      }
LABEL_442:
      v315 += 2;
      v85 = (__int64)v315;
    }
    while ( v315 != &v325[2 * (_QWORD)v326] );
    if ( v325 )
    {
      *(_QWORD *)&v326 = 0;
      qfree(v325);
    }
    if ( !(_BYTE)v297 && (*(_QWORD *)(a1 + 288) > 1u || n.m128i_i16[6]) )
      goto LABEL_275;
LABEL_71:
    if ( v365 || (v84 = *(_QWORD *)(a1 + 8), *(_DWORD *)(v84 + 4) == 20) )
    {
      LODWORD(dest[0]) = v365;
      sub_F630((__int64)"", (__int64)v71, v84, v85, v86, (__int64)v87, v70, a3, a4, a5, v88, v89, a8, a9, v297);
      while ( LODWORD(dest[0]) )
      {
        v71 = (__m128i *)(*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 240) + 64LL))(
                           *(_QWORD *)(a1 + 240),
                           dest);
        if ( !v71
          || !(unsigned __int8)sub_F630(
                                 (__int64)"Options     : %s",
                                 (__int64)v71,
                                 v84,
                                 v85,
                                 v86,
                                 (__int64)v87,
                                 v70,
                                 a3,
                                 a4,
                                 a5,
                                 v88,
                                 v89,
                                 a8,
                                 a9,
                                 v297) )
        {
          if ( LODWORD(dest[0]) )
          {
            sub_11BE0((__int64)"ELF-flag contain unknown bit(s) [0x%X]. Ignored", v365);
            v71 = (__m128i *)"UNKNOWN!";
            sub_F630(
              (__int64)"Options     : %s",
              (__int64)"UNKNOWN!",
              v200,
              v201,
              v202,
              v203,
              v70,
              a3,
              a4,
              a5,
              v204,
              v205,
              a8,
              a9,
              v297);
          }
          break;
        }
      }
    }
    sub_F630((__int64)"", (__int64)v71, v84, v85, v86, (__int64)v87, v70, a3, a4, a5, v88, v89, a8, a9, v297);
    v90 = sub_52850(
            a1,
            (__int64)v342,
            (__int64)&v327,
            (__int64)&v318,
            (__int64)v314,
            *(double *)v70.m128_u64,
            (__m128i)a3);
    v91 = v90;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 112LL))(*(_QWORD *)(a1 + 240));
    sub_33430((__int64)"Reading symbols");
    sub_55A10(a1, (__int64)v342, &v318, *(double *)v70.m128_u64, *(double *)a3.m128_u64);
    if ( v90 )
    {
      v97 = &s1;
      if ( v90[173] )
        v97 = (const char *)v90[172];
      sub_33500((__int64)"Reading symbols from \"%s\"", v97);
      sub_55A10(a1, (__int64)v90, &v318, *(double *)v70.m128_u64, *(double *)a3.m128_u64);
    }
    v98 = *(_DWORD *)(a1 + 576);
    if ( v98 == 3 )
    {
      v99 = "";
      v100 = "checksum error";
      goto LABEL_81;
    }
    if ( v98 > 3 )
    {
      v99 = " (no symbols recovered)";
      v100 = "bad ELF headers";
      if ( v98 != 4 )
        goto LABEL_82;
LABEL_81:
      sub_F630(
        (__int64)".gnu_debugdata: %s%s",
        (__int64)v100,
        (__int64)v99,
        v92,
        v93,
        v94,
        v70,
        a3,
        a4,
        a5,
        v95,
        v96,
        a8,
        a9,
        v298);
      goto LABEL_82;
    }
    v99 = " (no symbols recovered)";
    if ( v98 == 1 )
    {
      v100 = "out of memory";
      goto LABEL_81;
    }
    v100 = "decode error";
    if ( v98 == 2 )
      goto LABEL_81;
LABEL_82:
    v306 = (__int64 **)(a1 + 232);
    sub_2E260((__int64 *)(a1 + 232), *(double *)v70.m128_u64, *(double *)a3.m128_u64);
    sub_33500((__int64)"Loading symbols", v100);
    sub_50F30(a1, (__int64)v342, *(double *)v70.m128_u64, a3, a4, a5, v101, v102, a8, a9);
    if ( v90 )
    {
      v105 = &s1;
      if ( v90[173] )
        v105 = (const char *)v90[172];
      sub_33500((__int64)"Loading symbols from \"%s\"", v105);
      sub_50F30(a1, (__int64)v90, *(double *)v70.m128_u64, a3, a4, a5, v106, v107, a8, a9);
      close_linput(v90[59]);
      v108 = v90[172];
      if ( v108 )
      {
        v90[173] = 0;
        qfree(v108);
      }
      v109 = v90[169];
      if ( v109 )
      {
        v90[170] = 0;
        qfree(v109);
      }
      v110 = v90[166];
      if ( v110 )
      {
        v90[167] = 0;
        qfree(v110);
      }
      sub_3F920(v90 + 78);
      v111 = v90[75];
      if ( v111 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 8LL))(v111);
      v112 = v90[72];
      if ( v112 )
      {
        v90[73] = 0;
        qfree(v112);
      }
      v113 = v90[36];
      if ( v113 )
      {
        v114 = v90[37];
        if ( v114 )
        {
          v315 = v91;
          for ( i = 0; i != v114; ++i )
          {
            v116 = (__int64 *)(v113 + 96 * i);
            v117 = v116[3];
            if ( v117 )
            {
              v116[4] = 0;
              qfree(v117);
            }
            v118 = *v116;
            if ( *v116 )
            {
              v116[1] = 0;
              qfree(v118);
            }
            v113 = v315[36];
          }
          v91 = v315;
        }
        v91[37] = 0;
        qfree(v113);
      }
      v119 = v91[14];
      if ( v119 )
      {
        v91[15] = 0;
        qfree(v119);
      }
      v120 = v91[4];
      if ( v120 )
      {
        v91[5] = 0;
        qfree(v120);
      }
      operator delete(v91, 0x578u);
    }
    callui(24, 10, 0, &callui, v103, v104, v298, src, v300, v301);
    sub_50FD0((_QWORD *)a1, v342, 3, *(double *)v70.m128_u64, *(double *)a3.m128_u64);
    named_type_tid = a1 + 16;
    v125 = 0;
    v27 = a1 + 176;
    do
    {
      v126 = sub_41FE0((_QWORD *)named_type_tid, (__int64)v342, v121, v122, v123, v124, v297, (int)src, v300);
      if ( v125 < v126 )
        v125 = v126;
      named_type_tid += 40LL;
    }
    while ( v27 != named_type_tid );
    v127 = sub_2E270((__int64)v306);
    if ( v127 == -1 || v125 >= v127 )
    {
      if ( v125 )
      {
        v127 = v125;
        goto LABEL_116;
      }
    }
    else
    {
LABEL_116:
      *(_QWORD *)(a1 + 512) = v127;
    }
    if ( !*(_BYTE *)(a1 + 528) || (unsigned __int8)is_debugger_on(v306, v342, v128, v129, v130, v131) )
      goto LABEL_145;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 16LL))(*(_QWORD *)(a1 + 240)) )
    {
      sub_BFC0((__int64)"Relocations for this machine are not implemented yet. Continuing...");
      goto LABEL_145;
    }
    a4 = (__m128)(unsigned __int64)v342;
    v70 = (__m128)_mm_loadl_epi64(&n);
    v333 = &v331;
    v334 = &v331;
    v338 = &v336;
    v339 = &v336;
    *(__m128i *)dest = _mm_unpacklo_epi64((__m128i)v70, (__m128i)(unsigned __int64)v342);
    v70.m128_u64[0] = 0;
    dest[4] = (void *)a1;
    v331 = 0;
    v332 = nullptr;
    v335 = 0;
    v336 = 0;
    v337 = nullptr;
    v340 = 0;
    v341 = v302;
    *(_OWORD *)&dest[2] = 0;
    name_ea = get_name_ea(-1, "_GLOBAL_OFFSET_TABLE_");
    v133 = nullptr;
    if ( name_ea != -1 )
      v133 = (unsigned __int64 *)name_ea;
    v315 = v133;
    if ( v350 && v347 && v361 == 1 )
      dest[2] = v133;
    sub_EAA0((__int64)"Processing relocations...\n");
    named_type_tid = (unsigned __int64)dest;
    v134 = v342;
    sub_4E210(a1, (__int64)v342, n.m128i_i64[0], (__int64)dest, 0.0, *(double *)a3.m128_u64);
    sub_2E8D0(v306, v342[0].m128i_i8, v135, v136, v137);
    if ( v350 && v347 && v361 == 1 || !v349[7] )
      goto LABEL_403;
    v138 = *(_WORD **)(a1 + 240);
    v139 = v138[173];
    if ( (v139 & 0x40) == 0 || v361 != 3 )
      goto LABEL_364;
    if ( !v350 )
    {
      sub_30AC0();
      goto LABEL_592;
    }
    v134 = (__m128i *)v347;
    if ( v349[7] < v347 )
    {
      v140 = *(__int64 (**)())(*(_QWORD *)v138 + 32LL);
      if ( v140 != sub_D0C0 )
      {
        v134 = (__m128i *)(v346 + ((unsigned __int64)v349[7] << 6));
        if ( ((unsigned __int8 (__fastcall *)(_WORD *, __m128i *, void **))v140)(v138, v134, dest) )
          sub_EAA0((__int64)"Created got offsets\n");
LABEL_364:
        v141 = v349[12];
        if ( !v349[12] )
          goto LABEL_365;
        if ( !v350 )
          goto LABEL_601;
        v138 = *(_WORD **)(a1 + 240);
        v134 = (__m128i *)v347;
LABEL_133:
        if ( v141 >= (unsigned __int64)v134 )
          goto LABEL_366;
        n.m128i_i64[0] = v346 + (v141 << 6);
        v134 = (__m128i *)n.m128i_i64[0];
        if ( !(*(unsigned __int8 (__fastcall **)(_WORD *, __int64, _QWORD))(*(_QWORD *)v138 + 40LL))(
                v138,
                n.m128i_i64[0],
                0) )
        {
LABEL_365:
          v138 = *(_WORD **)(a1 + 240);
LABEL_366:
          v139 = v138[173];
          goto LABEL_367;
        }
        sub_EAA0((__int64)"Patching PLT...\n");
        v27 = v358 & (*(_QWORD *)(n.m128i_i64[0] + 16) + *(_QWORD *)(a1 + 328));
        if ( v358 == v27 )
          v27 = -1;
        if ( !v349[8] )
          goto LABEL_142;
        if ( v350 )
        {
          v138 = *(_WORD **)(a1 + 240);
          if ( v349[8] >= v347 )
          {
LABEL_143:
            v139 = v138[173];
            goto LABEL_368;
          }
          v134 = (__m128i *)n.m128i_i64[0];
          if ( !(*(unsigned __int8 (__fastcall **)(_WORD *, __int64, unsigned __int64))(*(_QWORD *)v138 + 40LL))(
                  v138,
                  n.m128i_i64[0],
                  v346 + ((unsigned __int64)v349[8] << 6)) )
            sub_BFC0((__int64)"Non standard PLT structure. Patched partialy");
LABEL_142:
          v138 = *(_WORD **)(a1 + 240);
          goto LABEL_143;
        }
LABEL_592:
        sub_30AC0();
LABEL_593:
        sub_30AC0();
LABEL_594:
        sub_30AC0();
        goto LABEL_595;
      }
    }
    v141 = v349[12];
    if ( v349[12] )
      goto LABEL_133;
LABEL_367:
    v27 = 0;
LABEL_368:
    if ( (v139 & 4) != 0 )
    {
      v244 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v138 + 48LL))(v138);
      if ( v315 )
      {
        if ( v244 )
        {
          v245 = segtype(v315);
          n.m128i_i64[0] = 0;
          if ( v245 == 10 )
          {
            n.m128i_i32[0] = v349[8];
            dword = get_dword(v315, v134, v246, v247, v248);
            v289 = v358 & (*(_QWORD *)(a1 + 328) + dword);
            v290 = -1;
            if ( v358 != v289 )
              v290 = v289;
            v315 = (unsigned __int64 *)v290;
            v291 = (unsigned __int64 *)getseg(v290);
            if ( !v349[7] )
              goto LABEL_583;
            if ( !v350 )
              goto LABEL_596;
            if ( v349[7] < v347
              && (v292 = v346 + ((unsigned __int64)v349[7] << 6), v291)
              && (n.m128i_i32[0]
               && (v300 = v346 + ((unsigned __int64)v349[7] << 6),
                   v304 = v291,
                   v312 = *v291,
                   v295 = sub_3BD50((__int64)v345, n.m128i_u32[0]),
                   v291 = v304,
                   v292 = v300,
                   *(_QWORD *)(v295 + 16) == v312)
               || (v293 = *(_QWORD *)(v292 + 16) + *(_QWORD *)(a1 + 328), v293 >= *v291)
               && v291[1] >= *(_QWORD *)(v292 + 32) + v293) )
            {
              n.m128i_i64[0] = (__int64)v315;
            }
            else
            {
LABEL_583:
              sub_BFC0((__int64)"%s is not in .got[.plt] section", "_GLOBAL_OFFSET_TABLE_");
              n.m128i_i64[0] = 0;
            }
          }
          *(_BYTE *)(a1 + 529) = 0;
          dest[2] = v315;
          v249 = get_first_seg();
          v315 = nullptr;
          next_seg = v249;
          v251 = 0;
          while ( next_seg )
          {
            v253 = *(_QWORD *)next_seg;
            if ( *(_BYTE *)(next_seg + 184) == 2
              && (v27 != v253 || (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 347LL) & 0x40) == 0) )
            {
              if ( !v251 )
              {
                v311 = next_seg;
                sub_EAA0((__int64)"Searching GOT loading...");
                next_seg = v311;
              }
              v309 = (__int64 *)next_seg;
              v252 = (*(__int64 (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 240) + 56LL))(
                       *(_QWORD *)(a1 + 240),
                       next_seg,
                       dest);
              v315 = (unsigned __int64 *)((char *)v315 + v252);
              v251 = 1;
              v253 = *v309;
            }
            next_seg = get_next_seg(v253);
          }
          if ( v251 )
          {
            v287 = (__int64)v315;
            sub_EAA0((__int64)" %zu items from %zu Ok\n", (size_t)v315, 0);
            if ( v287 )
            {
              if ( n.m128i_i64[0] )
                set_name(n.m128i_i64[0], "$_GLOBAL_OFFSET_TABLE_", 33);
            }
          }
        }
      }
    }
LABEL_403:
    sub_32250(v337);
    sub_32420(v332);
LABEL_145:
    if ( v391.m128i_i64[0] > 0 )
    {
      if ( v392.m128i_i64[0] )
      {
        v142 = v391.m128i_i64[1] + v372;
        v307 = v391.m128i_i64[1] + v372;
        v143 = ((unsigned __int8)get_byte(v391.m128i_i64[1] + v372) == 0) + v142;
        named_type_tid = v358 & (v143 + v392.m128i_i64[0]);
        v315 = (unsigned __int64 *)v143;
        if ( v143 < named_type_tid )
        {
          for ( n.m128i_i8[0] = 0; ; n.m128i_i8[0] = strlit )
          {
            v150 = (__int64)v315;
            if ( !(unsigned __int8)is_loaded(v315) )
              break;
            max_strlit_length = get_max_strlit_length(v150, 0, 0);
            v145 = max_strlit_length;
            if ( !max_strlit_length )
              break;
            v315 = (unsigned __int64 *)v150;
            v146 = max_strlit_length + v150;
            if ( (unsigned __int8)get_byte(v146 - 1) )
              break;
            v147 = named_type_tid < v146;
            v148 = (__int64)v315;
            if ( v147 )
              v145 = named_type_tid - (_QWORD)v315;
            strlit = create_strlit(v315, v145, 0);
            if ( !strlit )
              break;
            v315 = (unsigned __int64 *)(v145 + v148);
            if ( v145 + v148 >= named_type_tid )
              goto LABEL_345;
          }
          if ( !n.m128i_i8[0] )
            goto LABEL_158;
LABEL_345:
          sub_E890(v307, 1u, (__int64)"ELF String Table");
        }
      }
    }
LABEL_158:
    sub_47E80(a1, (__int64)v342, v393);
    sub_4E7C0(a1, (__int64)v342, v394, 0, "REL");
    sub_4E7C0(a1, (__int64)v342, v395, 1, "RELA");
    sub_4E7C0(a1, (__int64)v342, v396, v405 == 7, "JMPREL");
    sub_32CB0((__int64)v342, v397);
    sub_32E70((__int64)v342, v398);
    sub_33170((__int64)v342, v399, "Pre-initialization");
    sub_33170((__int64)v342, v400, "Initialization");
    sub_33170((__int64)v342, v401, "Termination");
    if ( !*(_QWORD *)&v389[8] )
      goto LABEL_159;
    if ( !*(_QWORD *)&v389[16] )
      goto LABEL_159;
    named_type_tid = *(_QWORD *)&v389[24];
    v215 = *(_QWORD *)&v389[16] + v372;
    v297 = *(_QWORD *)&v389[16] + v372;
    if ( !getseg(*(_QWORD *)&v389[16] + v372) )
      goto LABEL_159;
    v216 = v373;
    v217 = (-(__int64)(v373 == 0) & 0xFFFFFFFFFFFFFFF8LL) + 16;
    v303 = named_type_tid / v217;
    if ( v303 <= 0 )
      goto LABEL_159;
    v315 = (unsigned __int64 *)v215;
    v218 = 0;
    while ( 2 )
    {
      v226 = "struct Elf32_Dyn{  __int32 d_tag;  union  {    unsigned __int32 d_val;    unsigned __int32 d_ptr;  } d_un;};";
      v227 = "Elf32_Dyn";
      if ( v216 )
      {
        v226 = "struct Elf64_Dyn{  unsigned __int64 d_tag;  unsigned __int64 d_un;};";
        v227 = "Elf64_Dyn";
      }
      h2ti(0, 0, v226, 1024, 0, 0, sub_EAA0, 0, 0);
      named_type_tid = get_named_type_tid(v227);
      if ( named_type_tid != -1 && (unsigned __int8)is_loaded(v315) )
      {
        v228 = 4;
        flags = get_flags_ex(v315, 4);
        if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x60000000 || get_strid(v315) != named_type_tid )
        {
          v228 = 1610612736;
          create_data(v315, 1610612736, v217, named_type_tid);
        }
        if ( v373 )
        {
          named_type_tid = get_qword(v315);
          v222 = (__int64)v315;
          if ( !v373 )
            goto LABEL_315;
        }
        else
        {
          named_type_tid = (unsigned int)get_dword(v315, v228, v230, v231, v232);
          v222 = (__int64)v315;
          if ( !v373 )
          {
LABEL_315:
            qword = get_dword(v222 + 4, v228, v219, v220, v221);
            goto LABEL_294;
          }
        }
        qword = get_qword(v222 + 8);
LABEL_294:
        v308 = qword;
        v70.m128_u64[0] = 0;
        v224 = sub_3E4E0((__int64)v342, named_type_tid);
        v326 = 0;
        v325 = nullptr;
        if ( v224 )
        {
          src = v224;
          n.m128i_i64[0] = strlen(v224);
          v300 = n.m128i_i64[0] + 1;
          v325 = (unsigned __int64 *)qvector_reserve(&v325, 0, n.m128i_i64[0] + 1, 1);
          *(_QWORD *)&v326 = v300;
          memmove(v325, src, n.m128i_u64[0]);
          *((_BYTE *)v325 + n.m128i_i64[0]) = 0;
        }
        sub_46280((__int64)dest, (__int64)v342, named_type_tid, v308);
        v225 = &s1;
        if ( dest[1] )
          v225 = (const char *)dest[0];
        sub_2BDC0((__int64 *)&v325, (__int64)" %s", v225);
        if ( (unsigned __int64)v326 > 1 )
          set_cmt(v315, v325, 0);
        if ( !named_type_tid )
        {
          if ( dest[0] )
          {
            dest[1] = nullptr;
            qfree(dest[0]);
          }
          if ( v325 )
          {
            *(_QWORD *)&v326 = 0;
            qfree(v325);
          }
          break;
        }
        if ( dest[0] )
        {
          dest[1] = nullptr;
          qfree(dest[0]);
        }
        if ( v325 )
        {
          *(_QWORD *)&v326 = 0;
          qfree(v325);
        }
        v315 = (unsigned __int64 *)((char *)v315 + v217);
        if ( v303 == ++v218 )
          goto LABEL_421;
        v216 = v373;
        continue;
      }
      break;
    }
    if ( !v218 )
      goto LABEL_159;
LABEL_421:
    sub_E890(v297, 1u, (__int64)"ELF Dynamic Information", *(double *)v70.m128_u64);
LABEL_159:
    if ( v361 == 1 )
      goto LABEL_168;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) )
    {
      v151 = 8;
      v152 = v349[7];
      if ( v349[7] )
        goto LABEL_162;
LABEL_336:
      v214 = (unsigned int)v349[v151];
      if ( (_DWORD)v214 )
      {
        if ( v350 )
        {
          v153 = v347;
          goto LABEL_283;
        }
        sub_30AC0();
LABEL_601:
        sub_30AC0();
      }
      goto LABEL_168;
    }
    v151 = 7;
    v152 = v349[8];
    if ( !v349[8] )
      goto LABEL_336;
LABEL_162:
    if ( !v350 )
      goto LABEL_605;
    v153 = v347;
    if ( v152 < v347 )
    {
      v154 = v346 + (v152 << 6);
      if ( *(_QWORD *)(v154 + 32) )
        goto LABEL_165;
    }
    v214 = (unsigned int)v349[v151];
    if ( !(_DWORD)v214 )
      goto LABEL_168;
LABEL_283:
    if ( v214 < v153 )
    {
      v154 = v346 + (v214 << 6);
      if ( *(_QWORD *)(v154 + 32) )
      {
LABEL_165:
        v155 = v358 & *(_QWORD *)(v154 + 16);
        if ( v358 == v155 )
          v155 = -1;
        sub_2B0D0((__int64)v342, v155);
      }
    }
LABEL_168:
    v27 = (__int64)&v374;
    sub_2B300(a1, (__int64)v342, v402, &v374);
    sub_2B660(a1, (__int64)v342, v403, (__int64)&v374);
    sub_2B9E0(a1, (__int64)v342, v404, &v374);
    sub_2C2E0(a1, (__int64)v342, (__int64)v314);
    sub_29760(a1, (__int64)v342);
    if ( *(_QWORD *)(a1 + 216) )
    {
      if ( !*(_QWORD *)(a1 + 224) )
        *(_QWORD *)(a1 + 224) = *(_QWORD *)(a1 + 208);
LABEL_171:
      v156 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 168LL))(*(_QWORD *)(a1 + 240));
      add_entry(v156, v156, ".init_proc", 1, 0);
      v157 = *(_QWORD *)(a1 + 224);
      if ( !v157 )
      {
        v158 = *(_QWORD *)(a1 + 200);
        if ( !v158 )
          goto LABEL_173;
LABEL_255:
        auto_mark_range(v158, v158 + 1, 20);
        v159 = *(_QWORD *)(a1 + 208);
        if ( v159 )
          goto LABEL_256;
        goto LABEL_174;
      }
    }
    else
    {
      v207 = *(_QWORD *)(a1 + 200);
      v157 = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a1 + 216) = v207;
      if ( v157 )
      {
        if ( v207 )
          goto LABEL_171;
      }
      else
      {
        v208 = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 224) = v208;
        v157 = v208;
        if ( v207 )
          goto LABEL_171;
        if ( !v208 )
          goto LABEL_174;
      }
    }
    v206 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 240) + 168LL))(*(_QWORD *)(a1 + 240), v157);
    add_entry(v206, v206, ".term_proc", 1, 0);
    v158 = *(_QWORD *)(a1 + 200);
    if ( v158 )
      goto LABEL_255;
LABEL_173:
    v159 = *(_QWORD *)(a1 + 208);
    if ( v159 )
LABEL_256:
      auto_mark_range(v159, v159 + 1, 20);
LABEL_174:
    if ( (!v350 || !v347 || v361 != 1) && v362 )
    {
      named_type_tid = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 240) + 168LL))(
                         *(_QWORD *)(a1 + 240),
                         v362 + v305);
      v160 = getseg(named_type_tid + *(_QWORD *)(a1 + 328));
      if ( v160 )
      {
        setinf(14, *(_QWORD *)(v160 + 48), v161, v162, v163, v164);
        setinf(15, named_type_tid, v165, v166, v167, v168);
      }
      else if ( v361 == 2 )
      {
        sub_BFC0((__int64)"Illegal program entry point (%a)", *(double *)v70.m128_u64);
      }
    }
    if ( (~(unsigned __int8)*(_WORD *)(*(_QWORD *)(a1 + 240) + 344LL) & 3) == 0 )
      break;
    v169 = *(unsigned int *)(a1 + 192);
    if ( !(_DWORD)v169 )
      goto LABEL_187;
    if ( *(_BYTE *)(v406 + v169) )
    {
      sub_EAA0((__int64)"Section \".ctor\" overlaps and might be corrupt. constructors will not be renamed.\n");
      goto LABEL_187;
    }
    if ( !v350 )
      goto LABEL_594;
    if ( v169 >= v347 )
      v170 = 0;
    else
      v170 = v346 + (v169 << 6);
    sub_42940((_QWORD *)a1, (__int64)v342, v170, 99);
LABEL_187:
    v171 = *(unsigned int *)(a1 + 196);
    if ( (_DWORD)v171 )
    {
      if ( *(_BYTE *)(v406 + v171) )
      {
        sub_EAA0((__int64)"Section \".dtor\" overlaps and might be corrupt. destructors will not be renamed.\n");
        break;
      }
      if ( v350 )
      {
        if ( v171 >= v347 )
          v172 = 0;
        else
          v172 = v346 + (v171 << 6);
        sub_42940((_QWORD *)a1, (__int64)v342, v172, 100);
        break;
      }
LABEL_595:
      sub_30AC0();
LABEL_596:
      sub_30AC0();
LABEL_597:
      dest[0] = (void *)qvector_reserve(dest, dest[0], 4, 1);
LABEL_570:
      dest[1] = &byte_4;
      memmove(dest[0], (const void *)named_type_tid, 3u);
      *((_BYTE *)dest[0] + 3) = 0;
LABEL_356:
      if ( (v27 & 4) != 0 )
      {
        v271 = (char *)dest[1];
        if ( dest[1] )
        {
          v272 = (char *)dest[1] + 4;
          v273 = (char *)dest[1] + 5;
          v271 = (char *)dest[1] - 1;
        }
        else
        {
          v273 = &byte_6;
          v272 = &byte_5;
        }
        v274 = dest[0];
        if ( dest[2] < v273 )
        {
          dest[0] = (void *)qvector_reserve(dest, dest[0], v273, 1);
          v274 = dest[0];
        }
        dest[1] = v273;
        v272[(_QWORD)v274] = 0;
        v275 = &v271[(unsigned __int64)dest[0]];
        *(_DWORD *)v275 = 1768973101;
        v275[4] = 99;
      }
      v242 = (char *)dest[1];
      v29 = (unsigned __int64 *)dest[0];
      if ( !dest[1] )
        goto LABEL_17;
      if ( (unsigned __int64)dest[1] - 1 > 2 )
      {
        if ( *(_BYTE *)dest[0] == 110 && *((_BYTE *)dest[0] + 1) == 51 && *((_BYTE *)dest[0] + 2) == 50
          || (v315 = (unsigned __int64 *)dest[0], v243 = strcmp((const char *)dest[0], "o64"), v29 = v315, !v243) )
        {
LABEL_361:
          v327 = 0;
          set_compiler(&v327, 4, v29);
          goto LABEL_15;
        }
LABEL_384:
        v327 = 0;
        set_compiler(&v327, 4, v29);
LABEL_16:
        v29 = (unsigned __int64 *)dest[0];
LABEL_17:
        if ( v29 )
        {
          dest[1] = nullptr;
          qfree(v29);
        }
        continue;
      }
      v315 = (unsigned __int64 *)dest[0];
      v294 = strcmp((const char *)dest[0], "o64");
      v29 = v315;
      if ( v294 )
      {
        if ( v242 != (_BYTE *)&dword_0 + 1 )
          goto LABEL_384;
        goto LABEL_17;
      }
      if ( v242 != (_BYTE *)&dword_0 + 1 )
        goto LABEL_361;
LABEL_15:
      setinf_flag(3, 4096, 1);
      goto LABEL_16;
    }
    break;
  }
  if ( !v349[7] )
    goto LABEL_198;
  if ( !v350 )
  {
LABEL_606:
    v296 = (struct _Unwind_Exception *)sub_30AC0();
    for ( j = (_QWORD **)v337; j; j = v10 )
    {
      sub_32250(j[3]);
      v10 = (_QWORD **)j[2];
      operator delete(j, 0x30u);
    }
    for ( k = (_QWORD **)v332; k; k = v18 )
    {
      sub_32420(k[3]);
      v18 = (_QWORD **)k[2];
      operator delete(k, 0x38u);
    }
    if ( *((_QWORD *)&v327 + 1) )
    {
      v11 = v328;
      for ( m = 0; v11 != m; ++m )
      {
        v13 = *((_QWORD *)&v327 + 1) + 56 * m;
        v14 = *(_QWORD *)(v13 + 24);
        v15 = (__int64 *)v13;
        if ( v14 )
        {
          *(_QWORD *)(v13 + 32) = 0;
          qfree(v14);
        }
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v16);
        }
      }
      *(_QWORD *)&v328 = 0;
      qfree(*((_QWORD *)&v327 + 1));
    }
    if ( v323 )
    {
      *(_QWORD *)&v324 = 0;
      qfree(v323);
    }
    if ( v321 )
    {
      *(_QWORD *)&v322 = 0;
      qfree(v321);
    }
    sub_44AF0(v342);
    _Unwind_Resume(v296);
  }
  if ( v349[7] < v347 )
  {
    if ( *(_BYTE *)(v406 + v349[7]) )
      sub_EAA0((__int64)"GOT section overlaps and might be corrupt. GOT entries will not be renamed.\n");
    else
      sub_42940((_QWORD *)a1, (__int64)v342, v346 + ((unsigned __int64)v349[7] << 6), 0);
  }
LABEL_198:
  sub_42810((_QWORD *)a1);
  if ( n.m128i_i16[7] == 15 )
  {
    if ( !v373 )
      add_til("hpux", 1);
  }
  else if ( (n.m128i_i16[7] & 0xFFEF) == 2 )
  {
    add_til("sparc", 1);
  }
  v173 = *(_QWORD *)(a1 + 240);
  v174 = *(unsigned __int8 (**)(void))(*(_QWORD *)v173 + 104LL);
  if ( (char *)v174 != (char *)sub_D120 )
  {
    if ( !v174() )
      sub_EB70((__int64)"Processor-specific post-processing failure");
    v173 = *(_QWORD *)(a1 + 240);
  }
  if ( v173 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v173 + 8LL))(v173);
  v175 = "__libc_start_main";
  *(_QWORD *)(a1 + 240) = 0;
  v176 = get_name_ea(-1, "__libc_start_main");
  if ( v176 != -1 )
  {
    v175 = (const char *)v176;
    apply_cdecl(
      0,
      v176,
      "int __libc_start_main(  int (*main)(int, char **, char **),  int argc,  char **ubp_av,  void (*init)(void),  void "
      "(*fini)(void),  void (*rtld_fini)(void),  void (*stack_end));",
      2);
  }
  if ( getinf(18, v175, v177, v178, v179, v180) == -1 )
  {
    v175 = (const char *)get_name_ea(-1, "main.main");
    setinf(18, v175, v235, v236, v237, v238);
  }
  if ( (getinf(11, v175, v181, v182, v183, v184) & 1) != 0 )
  {
    plugin = find_plugin("eh_parse", 1);
    run_plugin(plugin, 0);
  }
  v186 = *((_QWORD *)&v327 + 1);
  if ( *((_QWORD *)&v327 + 1) )
  {
    v187 = v328;
    if ( (_QWORD)v328 )
    {
      v188 = 0;
      v189 = 0;
      do
      {
        v190 = (__int64 *)(v186 + v188);
        v191 = *(_QWORD *)(v186 + v188 + 24);
        if ( v191 )
        {
          v190[4] = 0;
          qfree(v191);
        }
        v192 = *v190;
        if ( *v190 )
        {
          v190[1] = 0;
          qfree(v192);
        }
        ++v189;
        v186 = *((_QWORD *)&v327 + 1);
        v188 += 56;
      }
      while ( v187 != v189 );
    }
    *(_QWORD *)&v328 = 0;
    qfree(v186);
  }
  if ( v323 )
  {
    *(_QWORD *)&v324 = 0;
    qfree(v323);
  }
  if ( v321 )
  {
    *(_QWORD *)&v322 = 0;
    qfree(v321);
  }
  if ( v410 )
  {
    *(_QWORD *)&v411 = 0;
    qfree(v410);
  }
  if ( v408 )
  {
    *(_QWORD *)&v409 = 0;
    qfree(v408);
  }
  if ( v406 )
  {
    *(_QWORD *)&v407 = 0;
    qfree(v406);
  }
  sub_3F920(&v374);
  if ( v371 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v371 + 8LL))(v371);
  if ( v369 )
  {
    v370 = 0;
    qfree(v369);
  }
  v193 = v351;
  if ( v351 )
  {
    v194 = v352;
    if ( v352 )
    {
      v195 = 0;
      do
      {
        v196 = (__int64 *)(v193 + 96 * v195);
        v197 = v196[3];
        if ( v197 )
        {
          v196[4] = 0;
          qfree(v197);
        }
        v198 = *v196;
        if ( *v196 )
        {
          v196[1] = 0;
          qfree(v198);
        }
        v193 = v351;
        ++v195;
      }
      while ( v194 != v195 );
    }
    v352 = 0;
    qfree(v193);
  }
  if ( v346 )
  {
    v347 = 0;
    qfree(v346);
  }
  if ( v343 )
  {
    v344 = 0;
    qfree(v343);
  }
  return v412 - __readfsqword(0x28u);
}
