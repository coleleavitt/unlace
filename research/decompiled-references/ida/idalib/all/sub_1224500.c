__int64 __fastcall sub_1224500(__int64 a1, _DWORD *a2, void *a3, char *a4, char *a5, int a6)
{
  __m128i *v6; // r13
  int v9; // eax
  __int64 *v10; // r14
  char v11; // bl
  __m128i v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i *v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rdi
  unsigned int v18; // ebp
  __int64 v19; // r15
  size_t v20; // rax
  size_t v21; // rax
  __int64 v22; // r12
  size_t v23; // rax
  __int64 v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  __int64 v27; // r12
  size_t v28; // rax
  __int64 v29; // rax
  size_t v30; // rax
  size_t v31; // rax
  __int64 v32; // r12
  size_t v33; // rax
  __int64 v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  __int64 v37; // r12
  size_t v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 *v41; // rax
  size_t v42; // rax
  size_t v43; // rdx
  void *v44; // r9
  size_t v45; // r12
  char v46; // bl
  char v47; // bp
  size_t v48; // rax
  size_t v49; // rax
  char *v50; // r15
  signed __int64 v51; // rbp
  char *v52; // r10
  int v53; // r9d
  void **v54; // rax
  _QWORD *v55; // rbp
  size_t v56; // rax
  __int64 v57; // rbp
  size_t v58; // rax
  __int64 v59; // rbp
  size_t v60; // rax
  __int64 v61; // rax
  size_t v62; // rax
  void **v63; // rbp
  size_t v64; // rax
  _QWORD *v65; // rbp
  size_t v66; // rax
  __int64 v67; // rbp
  size_t v68; // rax
  __int64 v69; // rbp
  size_t v70; // rax
  __int64 v71; // rax
  size_t v72; // rax
  void **v73; // rbp
  size_t v74; // rax
  _QWORD *v75; // rbp
  size_t v76; // rax
  __int64 v77; // rbp
  size_t v78; // rax
  __int64 v79; // rbp
  size_t v80; // rax
  __int64 v81; // rax
  size_t v82; // rax
  void **v83; // rbp
  size_t v84; // rax
  _QWORD *v85; // rbp
  size_t v86; // rax
  __int64 v87; // rbp
  size_t v88; // rax
  __int64 v89; // rdi
  const char *v90; // rbp
  __int64 v91; // rax
  int v92; // eax
  bool v93; // r12
  char v94; // al
  __int64 v95; // rdx
  __int64 v96; // r8
  unsigned int v97; // r9d
  char v98; // al
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  unsigned int v102; // r9d
  char v103; // al
  size_t v104; // rax
  __int64 v105; // rbp
  size_t v106; // rax
  unsigned __int8 v107; // cl
  __int64 v108; // rbp
  size_t v109; // rax
  size_t v110; // rbp
  char v111; // al
  size_t v112; // rbp
  char v113; // al
  size_t v114; // rbp
  char v115; // al
  char v116; // bl
  __int64 v117; // r12
  char *v118; // rbx
  __int64 v120; // rax
  __int64 v121; // r14
  size_t v122; // rax
  __int64 v123; // r8
  __int64 v124; // r9
  int v125; // edx
  size_t v126; // rax
  size_t v127; // rax
  __int64 v128; // r12
  size_t v129; // rax
  __int64 v130; // rax
  size_t v131; // rax
  size_t v132; // rax
  __int64 v133; // r12
  size_t v134; // rax
  __int64 v135; // rax
  size_t v136; // rax
  size_t v137; // rax
  __int64 v138; // r12
  size_t v139; // rax
  __int64 v140; // rax
  size_t v141; // rax
  size_t v142; // rax
  __int64 v143; // r12
  size_t v144; // rax
  __int64 v145; // rax
  size_t v146; // rax
  size_t v147; // rax
  __int64 v148; // r12
  size_t v149; // rax
  __int64 v150; // rax
  size_t v151; // rax
  size_t v152; // rax
  __int64 v153; // r12
  size_t v154; // rax
  __int64 v155; // rax
  __int64 *v156; // rax
  __int64 *v157; // rax
  void **v158; // r12
  int v159; // r12d
  char *v160; // rax
  size_t v161; // rdx
  size_t v162; // rbp
  size_t v163; // rax
  size_t v164; // rax
  size_t v165; // rbx
  char v166; // di
  size_t v167; // rbx
  char v168; // di
  size_t v169; // rbx
  char v170; // di
  size_t v171; // rbx
  char v172; // di
  size_t v173; // rbx
  size_t v174; // rbx
  char v175; // di
  int v176; // eax
  int v177; // eax
  int v178; // eax
  int v179; // eax
  int v180; // eax
  __int64 *v181; // r15
  size_t v182; // rax
  __int64 v183; // rbx
  size_t v184; // rax
  size_t v185; // rax
  __int64 v186; // rax
  size_t v187; // rax
  size_t v188; // rax
  __int64 v189; // rax
  size_t v190; // r12
  char v191; // al
  char v192; // al
  void *v193; // r9
  int v194; // eax
  char **v195; // r12
  __int128 *v196; // rcx
  char *v197; // rbx
  char *v198; // r15
  char *v199; // r13
  char *v200; // rbp
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rax
  __int64 v205; // rbx
  __int64 v206; // rax
  __int64 v207; // r15
  char *v208; // r13
  _DWORD *v209; // rbx
  void *v210; // rbp
  __int64 *v211; // rax
  __m128i *v212; // r12
  char *v213; // rax
  size_t v214; // rdx
  __m128i *v215; // r12
  unsigned int v216; // eax
  __int64 v217; // rdx
  __int64 v218; // r9
  __int64 *v219; // rcx
  char *v220; // r13
  void *v221; // r8
  char v222; // di
  int v223; // eax
  size_t v224; // r13
  void *v225; // rbp
  size_t v226; // rbx
  char *v227; // r8
  __int64 v228; // r9
  size_t v229; // rax
  char v230; // di
  int v231; // eax
  void *v232; // r13
  unsigned int v233; // eax
  int v234; // eax
  __int64 v235; // rax
  unsigned int v236; // r8d
  void **v237; // rcx
  _QWORD *v238; // r13
  unsigned int v239; // eax
  __int64 v240; // rbp
  __int64 v241; // rbx
  void *v242; // rdi
  __int64 v243; // rbx
  __int64 v244; // rbp
  char *v245; // rax
  _QWORD *v246; // rdi
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  char v250; // al
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  char v255; // al
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r8
  char v259; // r9
  char v260; // al
  size_t v261; // rax
  char *v262; // rbx
  unsigned int v263; // eax
  size_t v264; // rax
  size_t v265; // rax
  char v266; // zf
  __int64 *v267; // rbx
  size_t v268; // rax
  __int64 v269; // r9
  _QWORD *v270; // r15
  _QWORD *v271; // r12
  size_t v272; // rax
  size_t v273; // rbx
  _BYTE *v274; // rbp
  size_t v275; // rax
  __int64 *v276; // rbp
  __int64 v277; // rbx
  _BYTE *v278; // rcx
  __int64 v279; // r8
  _BYTE *v280; // rsi
  __int64 v281; // rdx
  __m128i *v282; // rax
  unsigned __int64 v283; // r13
  char *v284; // rbx
  size_t v285; // rax
  size_t v286; // r14
  char *v287; // rax
  char v288; // bl
  __int64 v289; // rbx
  __m128i v290; // kr00_16
  unsigned int v291; // eax
  unsigned int v292; // eax
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  unsigned int v296; // r13d
  __int64 *v297; // r12
  void *v298; // rdi
  size_t v299; // rax
  __int64 v300; // rbx
  size_t v301; // rax
  size_t v302; // rax
  __int64 v303; // rax
  _QWORD *v304; // rcx
  unsigned int v305; // eax
  _BYTE *v306; // r15
  void *v307; // r14
  char v308; // al
  size_t v309; // rax
  __int64 v310; // rbx
  size_t v311; // rax
  size_t v312; // rax
  __int64 *v313; // rbx
  __int64 *v314; // rax
  char v315; // bl
  __int64 v316; // r12
  __int64 v317; // rbx
  __m128i v318; // kr10_16
  __int64 v319; // r15
  size_t v320; // rbp
  void *v321; // rdi
  __int64 v322; // rbp
  __int64 v323; // r12
  char *v324; // rax
  _QWORD *v325; // rdi
  char v326; // al
  char v327; // al
  size_t v328; // rax
  __int64 v329; // rbp
  size_t v330; // rax
  __int64 v331; // rbp
  size_t v332; // rax
  size_t v333; // rax
  __int64 *v338; // [rsp+18h] [rbp-DA8h]
  __int64 v339; // [rsp+18h] [rbp-DA8h]
  unsigned int v340; // [rsp+18h] [rbp-DA8h]
  unsigned int v341; // [rsp+18h] [rbp-DA8h]
  unsigned int v342; // [rsp+18h] [rbp-DA8h]
  char v343; // [rsp+18h] [rbp-DA8h]
  char *v344; // [rsp+18h] [rbp-DA8h]
  int v345; // [rsp+18h] [rbp-DA8h]
  int s1; // [rsp+20h] [rbp-DA0h]
  __int64 *s1a; // [rsp+20h] [rbp-DA0h]
  char *s1b; // [rsp+20h] [rbp-DA0h]
  void *s1c; // [rsp+20h] [rbp-DA0h]
  char s1d; // [rsp+20h] [rbp-DA0h]
  int v351; // [rsp+30h] [rbp-D90h]
  __int64 v352; // [rsp+30h] [rbp-D90h]
  void *s2; // [rsp+38h] [rbp-D88h] BYREF
  void **v354; // [rsp+40h] [rbp-D80h]
  char *v355; // [rsp+48h] [rbp-D78h]
  __int64 *v356; // [rsp+50h] [rbp-D70h]
  __m128i *v357; // [rsp+58h] [rbp-D68h]
  size_t n; // [rsp+60h] [rbp-D60h]
  void *v359; // [rsp+68h] [rbp-D58h]
  void ***v360; // [rsp+70h] [rbp-D50h]
  __m128i **v361; // [rsp+78h] [rbp-D48h]
  __m128i *v362; // [rsp+80h] [rbp-D40h]
  __int64 *v363; // [rsp+88h] [rbp-D38h]
  char v364; // [rsp+97h] [rbp-D29h]
  __int64 v365; // [rsp+98h] [rbp-D28h]
  __int64 *v366; // [rsp+A0h] [rbp-D20h]
  _BYTE *v367; // [rsp+A8h] [rbp-D18h]
  __int64 v368; // [rsp+B0h] [rbp-D10h]
  __int64 *v369; // [rsp+B8h] [rbp-D08h]
  __int64 v370; // [rsp+C0h] [rbp-D00h]
  char **v371; // [rsp+C8h] [rbp-CF8h]
  __m128i *v372; // [rsp+D0h] [rbp-CF0h]
  char *v373; // [rsp+D8h] [rbp-CE8h] BYREF
  char v374; // [rsp+E0h] [rbp-CE0h]
  char *v375; // [rsp+E8h] [rbp-CD8h] BYREF
  char v376; // [rsp+F0h] [rbp-CD0h]
  __int128 v377; // [rsp+F8h] [rbp-CC8h] BYREF
  __int64 v378; // [rsp+108h] [rbp-CB8h]
  void *v379[2]; // [rsp+118h] [rbp-CA8h] BYREF
  __int64 v380; // [rsp+128h] [rbp-C98h] BYREF
  void *ptr; // [rsp+138h] [rbp-C88h] BYREF
  __m128i si128; // [rsp+140h] [rbp-C80h] BYREF
  void *v383[2]; // [rsp+158h] [rbp-C68h] BYREF
  __int64 v384; // [rsp+168h] [rbp-C58h]
  _QWORD v385[6]; // [rsp+178h] [rbp-C48h] BYREF
  __int128 v386; // [rsp+1A8h] [rbp-C18h] BYREF
  char *v387; // [rsp+1B8h] [rbp-C08h]
  char *v388; // [rsp+1C0h] [rbp-C00h]
  __int16 v389; // [rsp+1C8h] [rbp-BF8h]
  void *v390[4]; // [rsp+228h] [rbp-B98h] BYREF
  __int16 v391; // [rsp+248h] [rbp-B78h]
  __m128i v392; // [rsp+2A8h] [rbp-B18h] BYREF
  const char *v393; // [rsp+2B8h] [rbp-B08h]
  size_t v394; // [rsp+2C0h] [rbp-B00h]
  __int64 v395; // [rsp+2C8h] [rbp-AF8h]
  __m128i src; // [rsp+328h] [rbp-A98h] BYREF
  _WORD v397[56]; // [rsp+338h] [rbp-A88h] BYREF
  void *v398[2]; // [rsp+3A8h] [rbp-A18h] BYREF
  _QWORD v399[22]; // [rsp+3B8h] [rbp-A08h] BYREF
  char *s[2]; // [rsp+468h] [rbp-958h] BYREF
  __m128 v401; // [rsp+478h] [rbp-948h]
  __int64 v402; // [rsp+488h] [rbp-938h]
  char *v403; // [rsp+528h] [rbp-898h] BYREF
  __int64 v404; // [rsp+530h] [rbp-890h]
  char *v405; // [rsp+538h] [rbp-888h]
  __int64 v406; // [rsp+540h] [rbp-880h]
  const char *v407; // [rsp+548h] [rbp-878h]
  __int64 v408; // [rsp+550h] [rbp-870h]
  char *v409; // [rsp+558h] [rbp-868h]
  __int64 v410; // [rsp+560h] [rbp-860h]
  const char *v411; // [rsp+568h] [rbp-858h]
  __int64 v412; // [rsp+570h] [rbp-850h]
  char *v413; // [rsp+578h] [rbp-848h]
  __int64 v414; // [rsp+580h] [rbp-840h]
  const char *v415; // [rsp+588h] [rbp-838h]
  __int64 v416; // [rsp+590h] [rbp-830h]
  char *v417; // [rsp+598h] [rbp-828h]
  __int64 v418; // [rsp+5A0h] [rbp-820h]
  const char *v419; // [rsp+5A8h] [rbp-818h]
  __int64 v420; // [rsp+5B0h] [rbp-810h]
  const char *v421; // [rsp+5B8h] [rbp-808h]
  __int64 v422; // [rsp+5C0h] [rbp-800h]
  const char *v423; // [rsp+5C8h] [rbp-7F8h]
  __int64 v424; // [rsp+5D0h] [rbp-7F0h]
  const char *v425; // [rsp+5D8h] [rbp-7E8h]
  __int64 v426; // [rsp+5E0h] [rbp-7E0h]
  const char *v427; // [rsp+5E8h] [rbp-7D8h]
  __int64 v428; // [rsp+5F0h] [rbp-7D0h]
  const char *v429; // [rsp+5F8h] [rbp-7C8h]
  __int64 v430; // [rsp+600h] [rbp-7C0h]
  _BYTE v431[112]; // [rsp+608h] [rbp-7B8h] BYREF
  __m128i v432; // [rsp+678h] [rbp-748h] BYREF
  __int64 v433; // [rsp+688h] [rbp-738h]
  void *v434[2]; // [rsp+7C8h] [rbp-5F8h] BYREF
  void *v435; // [rsp+7D8h] [rbp-5E8h] BYREF
  size_t v436; // [rsp+7E0h] [rbp-5E0h]
  __int16 v437; // [rsp+7E8h] [rbp-5D8h]
  __int128 v438; // [rsp+828h] [rbp-598h]
  __int64 v439; // [rsp+838h] [rbp-588h]
  __int64 v440; // [rsp+840h] [rbp-580h] BYREF
  __int64 *v441; // [rsp+860h] [rbp-560h]
  __int64 v442; // [rsp+868h] [rbp-558h]
  __m128i v443; // [rsp+870h] [rbp-550h] BYREF
  char v444; // [rsp+880h] [rbp-540h]
  __int64 v445; // [rsp+8B8h] [rbp-508h] BYREF
  __int64 v446; // [rsp+930h] [rbp-490h] BYREF
  __int64 v447; // [rsp+9A8h] [rbp-418h] BYREF
  __int64 v448; // [rsp+A20h] [rbp-3A0h] BYREF
  __m128i v449; // [rsp+A98h] [rbp-328h] BYREF
  __int64 v450; // [rsp+AA8h] [rbp-318h]
  char *v451; // [rsp+AB0h] [rbp-310h]
  __int64 v452; // [rsp+AB8h] [rbp-308h]
  char v453; // [rsp+AC0h] [rbp-300h] BYREF
  _QWORD *v454; // [rsp+AF8h] [rbp-2C8h]
  __int64 v455; // [rsp+B00h] [rbp-2C0h]
  _QWORD v456[28]; // [rsp+B08h] [rbp-2B8h] BYREF
  char *v457; // [rsp+BE8h] [rbp-1D8h] BYREF
  __int64 v458; // [rsp+BF0h] [rbp-1D0h]
  _BYTE v459[192]; // [rsp+BF8h] [rbp-1C8h] BYREF
  _BYTE v460[192]; // [rsp+CB8h] [rbp-108h] BYREF
  unsigned __int8 v461; // [rsp+D78h] [rbp-48h]

  v6 = (__m128i *)a1;
  v9 = a2[8];
  v449 = 0;
  v451 = &v453;
  v454 = v456;
  v450 = 0;
  v452 = 0x100000000LL;
  v455 = 0x100000000LL;
  v456[22] = 0;
  v456[26] = 0;
  v457 = v459;
  v458 = 0x100000000LL;
  v461 = 0;
  if ( (v9 == 35 || v9 == 1) && a2[12] == 17 )
  {
    v10 = (__int64 *)v434;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
    v338 = *(__int64 **)(a1 + 64);
    v393 = "/crtbegin.o";
    v392.m128i_i64[0] = (__int64)a4;
    v392.m128i_i64[1] = (__int64)a5;
    v395 = v19;
    v394 = j__strlen("/crtbegin.o");
    v20 = j__strlen("/armv7-a");
    sub_111A340((__int64)v434, "/armv7-a", v20);
    v21 = j__strlen("-march=armv7-a");
    v22 = sub_1117D00((__int64)v434, (__int64)"-march=armv7-a", v21, 0);
    v23 = j__strlen("-mthumb");
    v24 = sub_1117D00(v22, (__int64)"-mthumb", v23, 1u);
    sub_117F2D0((__int64)&src, v24);
    sub_117F230((__int64)v434);
    v25 = j__strlen("/thumb");
    sub_111A340((__int64)v434, "/thumb", v25);
    v26 = j__strlen("-march=armv7-a");
    v27 = sub_1117D00((__int64)v434, (__int64)"-march=armv7-a", v26, 1u);
    v28 = j__strlen("-mthumb");
    v29 = sub_1117D00(v27, (__int64)"-mthumb", v28, 0);
    sub_117F2D0((__int64)v398, v29);
    sub_117F230((__int64)v434);
    v30 = j__strlen("/armv7-a/thumb");
    sub_111A340((__int64)v434, "/armv7-a/thumb", v30);
    v31 = j__strlen("-march=armv7-a");
    v32 = sub_1117D00((__int64)v434, (__int64)"-march=armv7-a", v31, 0);
    v33 = j__strlen("-mthumb");
    v34 = sub_1117D00(v32, (__int64)"-mthumb", v33, 0);
    v357 = (__m128i *)s;
    sub_117F2D0((__int64)s, v34);
    sub_117F230((__int64)v434);
    v35 = j__strlen(&byte_22F0C30);
    sub_111A340((__int64)v434, &byte_22F0C30, v35);
    v36 = j__strlen("-march=armv7-a");
    v37 = sub_1117D00((__int64)v434, (__int64)"-march=armv7-a", v36, 1u);
    v38 = j__strlen("-mthumb");
    v39 = sub_1117D00(v37, (__int64)"-mthumb", v38, 1u);
    sub_117F2D0((__int64)&v403, v39);
    sub_117F230((__int64)v434);
    memset(v390, 0, 24);
    v40 = sub_111C6F0((__int64 *)v390, (__int64)v398, (__int64)&src, (__int64)s, (__int64)&v403);
    sub_11187A0((__int64)v434, v40);
    v41 = sub_110E920((__int64 *)v434, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)&v392);
    sub_121C060((__int64)&v432, (__int64)v41);
    sub_117EEA0((__int64 *)v434);
    sub_1216C70((__int64 *)v390);
    v435 = nullptr;
    *(_OWORD *)v434 = 0;
    v42 = j__strlen(&byte_22F0C30);
    v44 = (void *)sub_21B7BC0(a3, 2260, &byte_22F0C30, v42);
    v45 = v43;
    s1 = a2[8];
    v351 = a2[9];
    if ( s1 == 35 )
    {
      if ( (unsigned int)sub_229CB60(v44, v43) == 7 )
      {
        v46 = 1;
        v47 = 1;
        goto LABEL_21;
      }
LABEL_20:
      v46 = 1;
      v47 = 0;
LABEL_21:
      v48 = j__strlen("-march=armv7-a");
      sub_11C67F0(v47, "-march=armv7-a", v48, (__int64)v434);
      v49 = j__strlen("-mthumb");
      sub_11C67F0(v46, "-mthumb", v49, (__int64)v434);
      if ( (unsigned __int8)sub_1110810((__int64)&v432, v338, (__int64)v434, (__int64 *)&v457, 0) )
        sub_11809E0(&v449, v432.m128i_i64);
      sub_9B4A30((void ***)v434);
      sub_117EEA0(v432.m128i_i64);
      sub_117F230((__int64)&v403);
      sub_117F230((__int64)v357);
      sub_117F230((__int64)v398);
      sub_117F230((__int64)&src);
      goto LABEL_7;
    }
    s2 = v44;
    v192 = sub_21B7850(a3, 2906, 2739, 0);
    v193 = s2;
    v46 = v192;
    if ( v192 )
    {
      if ( s1 != 1 )
        goto LABEL_20;
    }
    else
    {
      v46 = 0;
      v47 = 0;
      if ( s1 != 1 )
        goto LABEL_21;
      v194 = sub_229C520(s2, v45);
      v193 = s2;
      v46 = v194 == 2;
    }
    s1c = v193;
    if ( (unsigned int)sub_229CB60(v193, v45) == 7 )
    {
      v47 = 1;
    }
    else
    {
      v47 = 0;
      if ( j__strlen(&byte_22F0C30) == v45 && (!v45 || !memcmp(s1c, &byte_22F0C30, v45)) )
        v47 = v351 == 22;
    }
    goto LABEL_21;
  }
  if ( v9 == 10 )
  {
    v10 = (__int64 *)v434;
    sub_121C270(*(__int64 **)(a1 + 64), (__int64)a2, (__int64)a4, (__int64)a5, (__int64)a3, &v449);
    goto LABEL_7;
  }
  if ( (unsigned int)(v9 - 16) <= 3 )
  {
    if ( (unsigned __int8)sub_121D260(*(_QWORD *)(a1 + 64), a2, (__int64)a4, (__int64)a5, (__int64)a3, v449.m128i_i64) )
      goto LABEL_6;
LABEL_41:
    v18 = 0;
    goto LABEL_42;
  }
  if ( (unsigned int)(v9 - 27) > 1 )
  {
    if ( v9 == 20 )
    {
      v181 = *(__int64 **)(a1 + 64);
      v10 = (__int64 *)v434;
      v182 = j__strlen("/crtbegin.o");
      v183 = v181[1];
      v401.m128_u64[0] = (unsigned __int64)"/crtbegin.o";
      s[0] = a4;
      s[1] = a5;
      v402 = v183;
      v401.m128_u64[1] = v182;
      v184 = j__strlen("/430");
      sub_111A340((__int64)v434, "/430", v184);
      v185 = j__strlen("-exceptions");
      v186 = sub_1117D00((__int64)v434, (__int64)"-exceptions", v185, 1u);
      sub_117F2D0((__int64)&v403, v186);
      sub_117F230((__int64)v434);
      v187 = j__strlen("/430/exceptions");
      sub_111A340((__int64)v434, "/430/exceptions", v187);
      v188 = j__strlen("-exceptions");
      v189 = sub_1117D00((__int64)v434, (__int64)"-exceptions", v188, 0);
      sub_117F2D0((__int64)&v432, v189);
      sub_117F230((__int64)v434);
      sub_1117D20((__int64)v434, (__int64)&v403);
      sub_110E210((char **)&v449, (__int64)v434);
      sub_110AEF0((__int64)v434);
      sub_1117D20((__int64)v434, (__int64)&v432);
      sub_110E210((char **)&v449, (__int64)v434);
      sub_110AEF0((__int64)v434);
      sub_110E920(v449.m128i_i64, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)s);
      v435 = nullptr;
      *(_OWORD *)v434 = 0;
      v190 = j__strlen("-exceptions");
      v191 = sub_21B7850(a3, 663, 1121, 0);
      sub_11C67F0(v191, "-exceptions", v190, (__int64)v434);
      sub_1110810((__int64)&v449, v181, (__int64)v434, (__int64 *)&v457, 0);
      sub_9B4A30((void ***)v434);
      sub_117F230((__int64)&v432);
      sub_117F230((__int64)&v403);
      goto LABEL_7;
    }
    if ( v9 == 7 )
    {
LABEL_6:
      v10 = (__int64 *)v434;
      goto LABEL_7;
    }
    v50 = "/64";
    v51 = 3;
    s1a = *(__int64 **)(a1 + 64);
    sub_111A340((__int64)&src, nullptr, 0);
    v52 = a4;
    v53 = a6;
    if ( a2[11] == 13 )
    {
      v263 = a2[8];
      if ( v263 >= 0x1D )
      {
        if ( v263 <= 0x1E )
        {
          v50 = "/sparcv9";
          v333 = j__strlen("/sparcv9");
          v53 = a6;
          v52 = a4;
          v51 = v333;
        }
        else if ( v263 - 37 <= 1 )
        {
          v50 = "/amd64";
          v264 = j__strlen("/amd64");
          v52 = a4;
          v53 = a6;
          v51 = v264;
        }
      }
    }
    v10 = (__int64 *)v434;
    LODWORD(s2) = v53;
    v352 = (__int64)v52;
    sub_111A340((__int64)v434, nullptr, 0);
    v54 = sub_1119DD0(v434, v50, v51);
    v55 = sub_111A170(v54, v50, v51);
    v56 = j__strlen("-m32");
    v57 = sub_1117D00((__int64)v55, (__int64)"-m32", v56, 1u);
    v58 = j__strlen("-m64");
    v59 = sub_1117D00(v57, (__int64)"-m64", v58, 0);
    v60 = j__strlen("-mx32");
    v61 = sub_1117D00(v59, (__int64)"-mx32", v60, 1u);
    sub_1117D20((__int64)v398, v61);
    sub_117F230((__int64)v434);
    sub_111A340((__int64)v434, nullptr, 0);
    v62 = j__strlen("/32");
    v63 = sub_1119DD0(v434, "/32", v62);
    v64 = j__strlen("/32");
    v65 = sub_111A170(v63, "/32", v64);
    v66 = j__strlen("-m32");
    v67 = sub_1117D00((__int64)v65, (__int64)"-m32", v66, 0);
    v68 = j__strlen("-m64");
    v69 = sub_1117D00(v67, (__int64)"-m64", v68, 1u);
    v70 = j__strlen("-mx32");
    v71 = sub_1117D00(v69, (__int64)"-mx32", v70, 1u);
    v357 = (__m128i *)s;
    sub_1117D20((__int64)s, v71);
    sub_117F230((__int64)v434);
    sub_111A340((__int64)v434, nullptr, 0);
    v72 = j__strlen("/x32");
    v73 = sub_1119DD0(v434, "/x32", v72);
    v74 = j__strlen("/x32");
    v75 = sub_111A170(v73, "/x32", v74);
    v76 = j__strlen("-m32");
    v77 = sub_1117D00((__int64)v75, (__int64)"-m32", v76, 1u);
    v78 = j__strlen("-m64");
    v79 = sub_1117D00(v77, (__int64)"-m64", v78, 1u);
    v80 = j__strlen("-mx32");
    v81 = sub_1117D00(v79, (__int64)"-mx32", v80, 0);
    sub_1117D20((__int64)&v403, v81);
    sub_117F230((__int64)v434);
    sub_111A340((__int64)v434, nullptr, 0);
    v82 = j__strlen("/sparcv8plus");
    v83 = sub_1119DD0(v434, "/sparcv8plus", v82);
    v84 = j__strlen("/sparcv8plus");
    v85 = sub_111A170(v83, "/sparcv8plus", v84);
    v86 = j__strlen("-m32");
    v87 = sub_1117D00((__int64)v85, (__int64)"-m32", v86, 0);
    v88 = j__strlen("-m64");
    v89 = v87;
    v90 = "/libgcc.a";
    v91 = sub_1117D00(v89, (__int64)"-m64", v88, 1u);
    sub_1117D20((__int64)&v432, v91);
    sub_117F230((__int64)v434);
    if ( a2[11] != 26 )
      v90 = "/crtbegin.o";
    v339 = s1a[1];
    v392.m128i_i64[1] = (__int64)a5;
    v394 = j__strlen(v90);
    v92 = a2[12];
    v392.m128i_i64[0] = v352;
    v393 = v90;
    v395 = v339;
    v93 = v92 == 12 || v92 == 25;
    v94 = sub_22B7EC0(a2);
    v97 = (unsigned int)s2;
    v361 = (__m128i **)&v392;
    if ( v94 )
    {
      sub_1213E90(&v392, (__int64)v357, v95, (__int64)&v392, v96, (unsigned int)s2);
      v97 = (unsigned int)s2;
    }
    v340 = v97;
    v98 = sub_22B7EC0(a2);
    v102 = v340;
    if ( v98 )
    {
      v103 = sub_1213E90((__m128i *)v361, (__int64)&v432, v99, v100, v101, v340);
      v102 = v340;
      if ( !v103 )
        goto LABEL_33;
    }
    v341 = v102;
    if ( (unsigned __int8)sub_22B7EA0(a2) )
    {
      if ( v93 )
      {
        if ( !(unsigned __int8)sub_1213E90((__m128i *)v361, (__int64)&v403, v247, v248, v249, v341) )
          goto LABEL_33;
        sub_22B7EA0(a2);
        LODWORD(v254) = v341;
LABEL_165:
        v342 = v254;
        v255 = sub_22B7EA0(a2);
        v259 = v342;
        if ( !v255 || (v260 = sub_1213E90((__m128i *)v361, (__int64)&v432, v256, v257, v258, v342), v259 = v342, v260) )
        {
          v343 = v259;
          if ( (unsigned __int8)sub_22B7EC0(a2) )
          {
            if ( !v343 )
              goto LABEL_169;
          }
          else
          {
            if ( v93 )
            {
              if ( !v343 )
              {
                v328 = j__strlen("-m32");
                v329 = sub_1117D00((__int64)&src, (__int64)"-m32", v328, 1u);
                v330 = j__strlen("-m64");
                v331 = sub_1117D00(v329, (__int64)"-m64", v330, 1u);
                v332 = j__strlen("-mx32");
                sub_1117D00(v331, (__int64)"-mx32", v332, 0);
                goto LABEL_35;
              }
              goto LABEL_33;
            }
            if ( v343 )
            {
LABEL_169:
              v261 = j__strlen("-m32");
              v105 = sub_1117D00((__int64)&src, (__int64)"-m32", v261, 0);
              v106 = j__strlen("-m64");
              v107 = 1;
              goto LABEL_34;
            }
          }
        }
LABEL_33:
        v104 = j__strlen("-m32");
        v105 = sub_1117D00((__int64)&src, (__int64)"-m32", v104, 1u);
        v106 = j__strlen("-m64");
        v107 = 0;
LABEL_34:
        v108 = sub_1117D00(v105, (__int64)"-m64", v106, v107);
        v109 = j__strlen("-mx32");
        sub_1117D00(v108, (__int64)"-mx32", v109, 1u);
LABEL_35:
        sub_1117D20((__int64)v434, (__int64)&src);
        sub_110E210((char **)&v449, (__int64)v434);
        sub_110E210((char **)&v449, (__int64)v398);
        sub_110E210((char **)&v449, (__int64)v357);
        sub_110E210((char **)&v449, (__int64)&v403);
        sub_110E210((char **)&v449, (__int64)&v432);
        sub_110E920(v449.m128i_i64, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)v361);
        memset(v390, 0, 24);
        v110 = j__strlen("-m64");
        v111 = sub_22B7EA0(a2);
        sub_11C67F0((v93 | v111 ^ 1) ^ 1, "-m64", v110, (__int64)v390);
        v112 = j__strlen("-m32");
        v113 = sub_22B7EC0(a2);
        sub_11C67F0(v113, "-m32", v112, (__int64)v390);
        v114 = j__strlen("-mx32");
        v115 = sub_22B7EA0(a2);
        sub_11C67F0(v115 & v93, "-mx32", v114, (__int64)v390);
        v116 = sub_1110810((__int64)&v449, s1a, (__int64)v390, (__int64 *)&v457, 0);
        if ( v116
          && ((unsigned __int8)sub_1111EF0((__int64)&v457[192 * (unsigned int)v458 - 192], (__int64)v398)
           || (unsigned __int8)sub_1111EF0((__int64)&v457[192 * (unsigned int)v458 - 192], (__int64)v357)
           || (unsigned __int8)sub_1111EF0((__int64)&v457[192 * (unsigned int)v458 - 192], (__int64)&v403)
           || (unsigned __int8)sub_1111EF0((__int64)&v457[192 * (unsigned int)v458 - 192], (__int64)&v432)) )
        {
          if ( v461 )
          {
            v116 = v461;
            sub_12198E0((__int64)v460, (__int64)v434);
          }
          else
          {
            sub_110AD80((__int64)v460, (__int64)v434);
            v461 = 1;
          }
        }
        sub_9B4A30((void ***)v390);
        sub_110AEF0((__int64)v434);
        sub_110AEF0((__int64)&v432);
        sub_110AEF0((__int64)&v403);
        sub_110AEF0((__int64)v357);
        sub_110AEF0((__int64)v398);
        sub_117F230((__int64)&src);
        if ( v116 )
          goto LABEL_7;
        goto LABEL_41;
      }
      v250 = sub_22B7EA0(a2);
      v254 = v341;
      if ( !v250 )
        goto LABEL_165;
    }
    else
    {
      v326 = sub_22B7EA0(a2);
      v254 = v341;
      if ( !v326 || v93 )
        goto LABEL_165;
    }
    v345 = v254;
    v327 = sub_1213E90((__m128i *)v361, (__int64)v398, v251, v252, v253, v254);
    LODWORD(v254) = v345;
    if ( !v327 )
      goto LABEL_169;
    goto LABEL_165;
  }
  v121 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  v366 = *(__int64 **)(a1 + 64);
  v122 = j__strlen("/crtbegin.o");
  v125 = a2[11];
  v385[1] = a5;
  v385[0] = a4;
  v385[2] = "/crtbegin.o";
  v385[3] = v122;
  v385[4] = v121;
  if ( v125 )
  {
    v10 = (__int64 *)v434;
    v126 = j__strlen("lib32/ilp32");
    sub_111A340((__int64)v434, "lib32/ilp32", v126);
    v127 = j__strlen("-m32");
    v128 = sub_1117D00((__int64)v434, (__int64)"-m32", v127, 0);
    v129 = j__strlen("-mabi=ilp32");
    v130 = sub_1117D00(v128, (__int64)"-mabi=ilp32", v129, 0);
    v363 = (__int64 *)&v386;
    sub_117F2D0((__int64)&v386, v130);
    sub_117F230((__int64)v434);
    v131 = j__strlen("lib32/ilp32f");
    sub_111A340((__int64)v434, "lib32/ilp32f", v131);
    v132 = j__strlen("-m32");
    v133 = sub_1117D00((__int64)v434, (__int64)"-m32", v132, 0);
    v134 = j__strlen("-mabi=ilp32f");
    v135 = sub_1117D00(v133, (__int64)"-mabi=ilp32f", v134, 0);
    sub_117F2D0((__int64)v390, v135);
    sub_117F230((__int64)v434);
    v136 = j__strlen("lib32/ilp32d");
    sub_111A340((__int64)v434, "lib32/ilp32d", v136);
    v137 = j__strlen("-m32");
    v138 = sub_1117D00((__int64)v434, (__int64)"-m32", v137, 0);
    v139 = j__strlen("-mabi=ilp32d");
    v140 = sub_1117D00(v138, (__int64)"-mabi=ilp32d", v139, 0);
    v361 = (__m128i **)&v392;
    sub_117F2D0((__int64)&v392, v140);
    sub_117F230((__int64)v434);
    v141 = j__strlen("lib64/lp64");
    sub_111A340((__int64)v434, "lib64/lp64", v141);
    v142 = j__strlen("-m64");
    v143 = sub_1117D00((__int64)v434, (__int64)"-m64", v142, 0);
    v144 = j__strlen("-mabi=lp64");
    v145 = sub_1117D00(v143, (__int64)"-mabi=lp64", v144, 0);
    sub_117F2D0((__int64)&src, v145);
    sub_117F230((__int64)v434);
    v146 = j__strlen("lib64/lp64f");
    sub_111A340((__int64)v434, "lib64/lp64f", v146);
    v147 = j__strlen("-m64");
    v148 = sub_1117D00((__int64)v434, (__int64)"-m64", v147, 0);
    v149 = j__strlen("-mabi=lp64f");
    v150 = sub_1117D00(v148, (__int64)"-mabi=lp64f", v149, 0);
    sub_117F2D0((__int64)v398, v150);
    sub_117F230((__int64)v434);
    v151 = j__strlen("lib64/lp64d");
    sub_111A340((__int64)v434, "lib64/lp64d", v151);
    v152 = j__strlen("-m64");
    v153 = sub_1117D00((__int64)v434, (__int64)"-m64", v152, 0);
    v154 = j__strlen("-mabi=lp64d");
    v155 = sub_1117D00(v153, (__int64)"-mabi=lp64d", v154, 0);
    v357 = (__m128i *)s;
    sub_117F2D0((__int64)s, v155);
    sub_117F230((__int64)v434);
    *(_OWORD *)v383 = 0;
    v384 = 0;
    sub_117F2D0((__int64)v434, (__int64)&v386);
    sub_117F2D0((__int64)&v440, (__int64)v390);
    sub_117F2D0((__int64)&v445, (__int64)&v392);
    sub_117F2D0((__int64)&v446, (__int64)&src);
    sub_117F2D0((__int64)&v447, (__int64)v398);
    sub_117F2D0((__int64)&v448, (__int64)s);
    v356 = (__int64 *)v383;
    v156 = sub_111A650((__int64 *)v383, (char **)v434, 6);
    sub_11187A0((__int64)&v432, v156);
    v157 = sub_110E920(v432.m128i_i64, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40, (__int64)v385);
    sub_121C060((__int64)&v403, (__int64)v157);
    v158 = (void **)&v449;
    sub_117EEA0(v432.m128i_i64);
    do
    {
      v158 -= 15;
      sub_117F230((__int64)v158);
    }
    while ( v158 != v434 );
    sub_1216C70(v356);
    v159 = a2[8];
    *(_OWORD *)v434 = 0;
    v435 = nullptr;
    v160 = sub_115A2B0((__int64)a3, a2);
    v162 = v161;
    s1b = v160;
    v163 = j__strlen("-m32");
    sub_11C67F0(v159 != 28, "-m32", v163, (__int64)v434);
    v164 = j__strlen("-m64");
    sub_11C67F0(v159 == 28, "-m64", v164, (__int64)v434);
    v165 = j__strlen("-mabi=ilp32");
    if ( j__strlen("ilp32") == v162 )
    {
      if ( v162 )
      {
        v176 = memcmp(s1b, "ilp32", v162);
        sub_11C67F0(v176 == 0, "-mabi=ilp32", v165, (__int64)v434);
        v167 = j__strlen("-mabi=ilp32f");
        if ( v162 == j__strlen("ilp32f") )
          goto LABEL_81;
        goto LABEL_155;
      }
      v166 = 1;
    }
    else
    {
      v166 = 0;
    }
    sub_11C67F0(v166, "-mabi=ilp32", v165, (__int64)v434);
    v167 = j__strlen("-mabi=ilp32f");
    if ( v162 == j__strlen("ilp32f") )
    {
      v168 = 1;
      if ( !v162 )
        goto LABEL_68;
LABEL_81:
      v177 = memcmp(s1b, "ilp32f", v162);
      sub_11C67F0(v177 == 0, "-mabi=ilp32f", v167, (__int64)v434);
      v169 = j__strlen("-mabi=ilp32d");
      if ( v162 == j__strlen("ilp32d") )
        goto LABEL_82;
      goto LABEL_161;
    }
LABEL_155:
    v168 = 0;
LABEL_68:
    sub_11C67F0(v168, "-mabi=ilp32f", v167, (__int64)v434);
    v169 = j__strlen("-mabi=ilp32d");
    if ( v162 == j__strlen("ilp32d") )
    {
      v170 = 1;
      if ( !v162 )
        goto LABEL_70;
LABEL_82:
      v178 = memcmp(s1b, "ilp32d", v162);
      sub_11C67F0(v178 == 0, "-mabi=ilp32d", v169, (__int64)v434);
      v171 = j__strlen("-mabi=lp64");
      if ( v162 == j__strlen("lp64") )
        goto LABEL_83;
      goto LABEL_160;
    }
LABEL_161:
    v170 = 0;
LABEL_70:
    sub_11C67F0(v170, "-mabi=ilp32d", v169, (__int64)v434);
    v171 = j__strlen("-mabi=lp64");
    if ( v162 == j__strlen("lp64") )
    {
      v172 = 1;
      if ( !v162 )
        goto LABEL_72;
LABEL_83:
      v179 = memcmp(s1b, "lp64", v162);
      sub_11C67F0(v179 == 0, "-mabi=lp64", v171, (__int64)v434);
      v173 = j__strlen("-mabi=lp64f");
      if ( v162 == j__strlen("lp64f") )
      {
LABEL_84:
        v180 = memcmp(s1b, "lp64f", v162);
        sub_11C67F0(v180 == 0, "-mabi=lp64f", v173, (__int64)v434);
        v174 = j__strlen("-mabi=lp64d");
        if ( v162 != j__strlen("lp64d") )
          goto LABEL_156;
LABEL_85:
        v175 = memcmp(s1b, "lp64d", v162) == 0;
        goto LABEL_86;
      }
LABEL_157:
      sub_11C67F0(0, "-mabi=lp64f", v173, (__int64)v434);
      v174 = j__strlen("-mabi=lp64d");
      if ( v162 != j__strlen("lp64d") )
        goto LABEL_156;
      if ( !v162 )
        goto LABEL_75;
      goto LABEL_85;
    }
LABEL_160:
    v172 = 0;
LABEL_72:
    sub_11C67F0(v172, "-mabi=lp64", v171, (__int64)v434);
    v173 = j__strlen("-mabi=lp64f");
    if ( v162 == j__strlen("lp64f") )
    {
      if ( !v162 )
      {
        sub_11C67F0(1, "-mabi=lp64f", v173, (__int64)v434);
        v174 = j__strlen("-mabi=lp64d");
        if ( !j__strlen("lp64d") )
        {
LABEL_75:
          v175 = 1;
LABEL_86:
          sub_11C67F0(v175, "-mabi=lp64d", v174, (__int64)v434);
          if ( (unsigned __int8)sub_1110810((__int64)&v403, v366, (__int64)v434, (__int64 *)&v457, 0) )
            sub_11809E0(&v449, (__int64 *)&v403);
          sub_9B4A30((void ***)v434);
          sub_117EEA0((__int64 *)&v403);
          sub_117F230((__int64)v357);
          sub_117F230((__int64)v398);
          sub_117F230((__int64)&src);
          sub_117F230((__int64)v361);
          sub_117F230((__int64)v390);
          sub_117F230((__int64)v363);
          goto LABEL_7;
        }
LABEL_156:
        v175 = 0;
        goto LABEL_86;
      }
      goto LABEL_84;
    }
    goto LABEL_157;
  }
  v404 = 5;
  v403 = (char *)"rv32i";
  v405 = "ilp32";
  v195 = &v403;
  v10 = (__int64 *)v434;
  v409 = "ilp32";
  v413 = "ilp32";
  v417 = "ilp32";
  v419 = "rv32imafc";
  v421 = "ilp32f";
  v423 = "rv64imac";
  v425 = "lp64";
  v427 = "rv64imafdc";
  v429 = "lp64d";
  v407 = "rv32im";
  v411 = "rv32iac";
  v415 = "rv32imac";
  v406 = 5;
  v408 = 6;
  v410 = 5;
  v412 = 7;
  v414 = 5;
  v416 = 8;
  v418 = 5;
  v420 = 9;
  v422 = 6;
  v424 = 8;
  v426 = 4;
  v428 = 10;
  v430 = 5;
  v377 = 0;
  v378 = 0;
  v357 = (__m128i *)s;
  v361 = (__m128i **)&v392;
  v356 = (__int64 *)v383;
  v360 = (void ***)v379;
  v363 = (__int64 *)&v386;
  v196 = &v377;
  v369 = (__int64 *)&v377;
  s2 = &v380;
  v354 = (void **)&v403;
  v355 = (char *)a1;
  n = (size_t)a2;
  v359 = a3;
  do
  {
    while ( 1 )
    {
      v197 = v195[1];
      v198 = *v195;
      v199 = v195[2];
      v200 = v195[3];
      src.m128i_i64[0] = (__int64)"/";
      v397[8] = 259;
      LOWORD(v395) = 261;
      LOWORD(v402) = 261;
      v392.m128i_i64[1] = (__int64)v197;
      s[0] = v199;
      s[1] = v200;
      v392.m128i_i64[0] = (__int64)v198;
      sub_A41580((__m128i *)v398, (const __m128i *)v361, &src, (__int64)v196, v123, v124);
      sub_A41580(&v432, (const __m128i *)v398, v357, v201, v202, v203);
      sub_2253560(v356, &v432);
      sub_111A340((__int64)v434, (_BYTE *)v383[0], (__int64)v383[1]);
      v391 = 1283;
      v390[0] = (void *)"-march=";
      v390[3] = v197;
      v390[2] = v198;
      sub_2253560(&ptr, v390);
      v204 = sub_1117D00((__int64)v434, (__int64)ptr, si128.m128i_i64[0], 0);
      v387 = v199;
      v205 = v204;
      v388 = v200;
      v389 = 1283;
      *(_QWORD *)&v386 = "-mabi=";
      sub_2253560(v360, v363);
      v206 = sub_1117D00(v205, (__int64)v379[0], (__int64)v379[1], 0);
      if ( *((_QWORD *)&v377 + 1) == v378 )
      {
        sub_1217BC0((__int64)v369, *((const __m128i **)&v377 + 1), v206);
      }
      else
      {
        sub_117F2D0(*((__int64 *)&v377 + 1), v206);
        *((_QWORD *)&v377 + 1) += 120LL;
      }
      if ( v379[0] != s2 )
        operator delete(v379[0]);
      if ( ptr != &si128.m128i_u64[1] )
        operator delete(ptr);
      sub_117F230((__int64)v434);
      if ( v383[0] == v356 + 2 )
        break;
      operator delete(v383[0]);
      v195 += 4;
      if ( v195 == (char **)v431 )
        goto LABEL_110;
    }
    v195 += 4;
  }
  while ( v431 != (_BYTE *)v195 );
LABEL_110:
  v207 = (__int64)v354;
  *(_OWORD *)v398 = 0;
  v208 = v355;
  v209 = (_DWORD *)n;
  v399[0] = 0;
  v210 = v359;
  v211 = sub_111A650(
           (__int64 *)v398,
           (char **)v377,
           0xEEEEEEEEEEEEEEEFLL * ((__int64)(*((_QWORD *)&v377 + 1) - v377) >> 3));
  sub_11187A0((__int64)v434, v211);
  v212 = (__m128i *)sub_110E920(
                      (__int64 *)v434,
                      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1213F40,
                      (__int64)v385);
  s2 = sub_12181E0;
  v401 = _mm_loadh_ps((const double *)&s2);
  sub_1216720(v212 + 19, v357);
  sub_121C060((__int64)&v432, (__int64)v212);
  if ( v401.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v401.m128_u64[0])(v357, v357, 3);
  sub_117EEA0((__int64 *)v434);
  sub_1216C70((__int64 *)v398);
  *(_OWORD *)v379 = 0;
  v380 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  ptr = nullptr;
  v213 = sub_115A2B0((__int64)v210, v209);
  n = v214;
  v359 = v213;
  sub_11598D0(v361, (__int64)v210, v209);
  v362 = (__m128i *)v208;
  v215 = v357;
  do
  {
    v224 = *(_QWORD *)(v207 + 8);
    v225 = *(void **)(v207 + 16);
    v226 = *(_QWORD *)(v207 + 24);
    s2 = *(void **)v207;
    v437 = 1283;
    v434[0] = (void *)"-march=";
    v435 = s2;
    v436 = v224;
    sub_2253560(v215, v434);
    v227 = s[0];
    v228 = 0;
    if ( s[0] )
    {
      v354 = (void **)s[0];
      v229 = j__strlen(s[0]);
      v227 = (char *)v354;
      v228 = v229;
    }
    v230 = 0;
    if ( v392.m128i_i64[1] == v224 )
    {
      v230 = 1;
      if ( v224 )
      {
        v355 = v227;
        v354 = (void **)v228;
        v231 = memcmp((const void *)v392.m128i_i64[0], s2, v224);
        v227 = v355;
        v228 = (__int64)v354;
        v230 = v231 == 0;
      }
    }
    sub_11C67F0(v230, v227, v228, (__int64)v360);
    if ( (__m128i *)s[0] != &v215[1] )
      operator delete(s[0]);
    sub_105CB60((__int64 **)v434, (__int64 *)ptr + si128.m128i_u32[0], 1);
    v232 = v434[0];
    v233 = sub_2244B30(v225, v226);
    v234 = sub_2244E60(&ptr, v225, v226, v233);
    if ( v234 == -1 )
      sub_105CB60((__int64 **)v434, (__int64 *)ptr + si128.m128i_u32[0], 1);
    else
      sub_105CB60((__int64 **)v434, (__int64 *)ptr + v234, 1);
    if ( v232 == v434[0] )
    {
      v216 = sub_2244B30(v225, v226);
      v217 = (unsigned int)sub_2244CB0(&ptr, v225, v226, v216);
      v219 = (__int64 *)((char *)ptr + 8 * v217);
      if ( *v219 )
      {
        if ( *v219 != -8 )
        {
          sub_A45C10((__int64 **)v434, v219, 0);
LABEL_118:
          v437 = 1283;
          v434[0] = "-mabi=";
          v435 = v225;
          v436 = v226;
          sub_2253560(v215, v434);
          v220 = s[0];
          v221 = nullptr;
          if ( s[0] )
            v221 = (void *)j__strlen(s[0]);
          v222 = 0;
          if ( n == v226 )
          {
            v222 = 1;
            if ( n )
            {
              s2 = v221;
              v223 = memcmp(v359, v225, n);
              v221 = s2;
              v222 = v223 == 0;
            }
          }
          sub_11C67F0(v222, v220, (__int64)v221, (__int64)v360);
          if ( (__m128i *)s[0] != &v215[1] )
            operator delete(s[0]);
          goto LABEL_125;
        }
        --si128.m128i_i32[2];
      }
      v354 = (void **)((char *)ptr + 8 * v217);
      LODWORD(s2) = v217;
      v235 = sub_22300B0(v226 + 9, 8, v217, v219, v217, v218);
      v236 = (unsigned int)s2;
      v237 = v354;
      v238 = (_QWORD *)v235;
      if ( v226 )
      {
        memcpy((void *)(v235 + 8), v225, v226);
        v237 = v354;
        v236 = (unsigned int)s2;
      }
      *((_BYTE *)v238 + v226 + 8) = 0;
      *v238 = v226;
      *v237 = v238;
      ++si128.m128i_i32[1];
      v239 = sub_22450D0(&ptr, v236);
      sub_A45C10((__int64 **)v434, (__int64 *)ptr + v239, 0);
      goto LABEL_118;
    }
LABEL_125:
    v207 += 32;
  }
  while ( v431 != (_BYTE *)v207 );
  v6 = v362;
  v240 = v392.m128i_i64[1];
  v241 = v392.m128i_i64[0];
  if ( (unsigned __int8)sub_1110810((__int64)&v432, v366, (__int64)v360, (__int64 *)&v457, 0) )
    goto LABEL_143;
  *(_OWORD *)v383 = 0;
  v384 = 0;
  v386 = 0;
  v387 = nullptr;
  v371 = &v373;
  sub_22AE720(&v373, v241, v240, 1, 0);
  v262 = v373;
  if ( (v374 & 1) != 0 )
  {
    v373 = nullptr;
    if ( v262 )
    {
      s[0] = v262;
      sub_A05760(v434, v357);
      if ( s[0] )
        (*(void (__fastcall **)(char *))(*(_QWORD *)s[0] + 8LL))(s[0]);
      sub_10A71B0((__int64)v371);
      sub_1216C70(v363);
      sub_9B4A30((void ***)v356);
      goto LABEL_144;
    }
  }
  v265 = j__strlen("-m32");
  v266 = *(_DWORD *)v262 == 32;
  v267 = v356;
  sub_11C67F0(v266, "-m32", v265, (__int64)v356);
  v268 = j__strlen("-m64");
  sub_11C67F0(*(_DWORD *)v373 == 64, "-m64", v268, (__int64)v267);
  v270 = v379[1];
  v271 = v379[0];
  if ( v379[0] != v379[1] )
  {
    do
    {
      v273 = v271[1];
      v274 = (_BYTE *)*v271;
      v275 = j__strlen("!march=");
      if ( v273 < v275 )
      {
        v272 = j__strlen("-march=");
        if ( v273 < v272 )
        {
          if ( v274 )
          {
LABEL_192:
            v434[0] = &v435;
            sub_1213C40(v434, v274, (__int64)&v274[v273]);
          }
          else
          {
            v434[0] = &v435;
            v434[1] = nullptr;
            LOBYTE(v435) = 0;
          }
          sub_A82C60((__int64)v356, (__m128i *)v434);
          if ( v434[0] != &v435 )
            operator delete(v434[0]);
          goto LABEL_187;
        }
      }
      else
      {
        if ( !v275 || !memcmp(v274, "!march=", v275) )
          goto LABEL_187;
        v272 = j__strlen("-march=");
        if ( v273 < v272 )
          goto LABEL_192;
      }
      if ( v272 && memcmp(v274, "-march=", v272) )
        goto LABEL_192;
LABEL_187:
      v271 += 4;
    }
    while ( v270 != v271 );
  }
  v390[0] = nullptr;
  n = (size_t)&v375;
  *(__m128i *)&v390[1] = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  v370 = v432.m128i_i64[1];
  v365 = v432.m128i_i64[0];
  if ( v432.m128i_i64[0] == v432.m128i_i64[1] )
    goto LABEL_237;
  v372 = v6;
  v276 = (__int64 *)v357;
  v354 = v434;
  while ( 2 )
  {
    v277 = v365;
    v278 = *(_BYTE **)(v365 + 32);
    v279 = *(_QWORD *)(v365 + 40);
    v280 = *(_BYTE **)v365;
    v367 = *(_BYTE **)(v365 + 64);
    v281 = *(_QWORD *)(v365 + 8);
    v368 = *(_QWORD *)(v365 + 72);
    sub_1119D30((__int64)v354, v280, v281, v278, v279, v269, v367, v368);
    v282 = *(__m128i **)(v277 + 96);
    v362 = *(__m128i **)(v277 + 104);
    if ( v282 == v362 )
    {
LABEL_233:
      if ( *((char **)&v386 + 1) == v387 )
      {
        sub_1217BC0((__int64)v363, *((const __m128i **)&v386 + 1), (__int64)v354);
      }
      else
      {
        sub_117F2D0(*((__int64 *)&v386 + 1), (__int64)v354);
        *((_QWORD *)&v386 + 1) += 120LL;
      }
      goto LABEL_235;
    }
    s2 = v282;
    v364 = 0;
    while ( 2 )
    {
      v283 = *((_QWORD *)s2 + 1);
      v284 = *(char **)s2;
      v285 = j__strlen("-march=");
      v286 = v285;
      if ( v283 < v285 || v285 && memcmp(v284, "-march=", v285) )
      {
        sub_1117D00((__int64)v354, (__int64)v284, v283, 0);
        goto LABEL_202;
      }
      sub_22AE720(n, &v284[v286], v283 - v286, 1, 0);
      v287 = v375;
      v288 = v376 & 1;
      if ( (v376 & 1) != 0 )
      {
        v375 = nullptr;
        if ( v287 )
        {
          v398[0] = v287;
          sub_A05760(v276, (_QWORD **)v398);
          if ( v398[0] )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v398[0] + 8LL))(v398[0]);
          sub_10A71B0(n);
          v364 = v288;
          goto LABEL_202;
        }
      }
      v289 = *((_QWORD *)v287 + 6);
      v355 = v287 + 32;
      if ( (char *)v289 == v287 + 32 )
        goto LABEL_219;
      while ( 2 )
      {
        while ( 2 )
        {
          src.m128i_i64[0] = (__int64)v397;
          sub_1213B80(&src, *(_BYTE **)(v289 + 32), *(_QWORD *)(v289 + 32) + *(_QWORD *)(v289 + 40));
          s[0] = "-";
          LOWORD(v402) = 1283;
          v401 = (__m128)src;
          sub_2253560(v398, v276);
          sub_1117D00((__int64)v354, (__int64)v398[0], (__int64)v398[1], 0);
          if ( v398[0] != v399 )
            operator delete(v398[0]);
          v290 = src;
          v291 = sub_2244B30(src.m128i_i64[0], src.m128i_i64[1]);
          v292 = sub_2244CB0(v390, v290.m128i_i64[0], v290.m128i_i64[1], v291);
          v296 = v292;
          v297 = (__int64 *)((char *)v390[0] + 8 * v292);
          if ( *v297 )
          {
            if ( *v297 != -8 )
            {
              sub_A45C10((__int64 **)v276, v297, 0);
LABEL_216:
              v298 = (void *)src.m128i_i64[0];
              if ( (_WORD *)src.m128i_i64[0] == v397 )
                break;
              goto LABEL_217;
            }
            --LODWORD(v390[2]);
          }
          v303 = sub_22300B0(v290.m128i_i64[1] + 9, 8, v292, v293, v294, v295);
          v304 = (_QWORD *)v303;
          if ( v290.m128i_i64[1] )
          {
            v359 = (void *)v303;
            memcpy((void *)(v303 + 8), (const void *)v290.m128i_i64[0], v290.m128i_u64[1]);
            v304 = v359;
          }
          *((_BYTE *)v304 + v290.m128i_i64[1] + 8) = 0;
          *v304 = v290.m128i_i64[1];
          *v297 = (__int64)v304;
          ++HIDWORD(v390[1]);
          v305 = sub_22450D0(v390, v296);
          sub_A45C10((__int64 **)v276, (__int64 *)v390[0] + v305, 0);
          s[0] = "-";
          LOWORD(v402) = 1283;
          v401 = (__m128)src;
          sub_2253560(v398, v276);
          v306 = v398[0];
          v307 = v398[1];
          v308 = sub_22A9F40(v373, src.m128i_i64[0], src.m128i_i64[1]);
          sub_11C67F0(v308, v306, (__int64)v307, (__int64)v356);
          if ( v398[0] == v399 )
            goto LABEL_216;
          operator delete(v398[0]);
          v298 = (void *)src.m128i_i64[0];
          if ( (_WORD *)src.m128i_i64[0] != v397 )
          {
LABEL_217:
            operator delete(v298);
            v289 = std::_Rb_tree_increment(v289);
            if ( (char *)v289 == v355 )
              goto LABEL_218;
            continue;
          }
          break;
        }
        v289 = std::_Rb_tree_increment(v289);
        if ( v355 != (char *)v289 )
          continue;
        break;
      }
LABEL_218:
      v287 = v375;
LABEL_219:
      if ( *(_DWORD *)v287 == 32 )
      {
        v309 = j__strlen("-m32");
        v310 = (__int64)v354;
        sub_1117D00((__int64)v354, (__int64)"-m32", v309, 0);
        v311 = j__strlen("-m64");
        sub_1117D00(v310, (__int64)"-m64", v311, 1u);
      }
      else
      {
        v299 = j__strlen("-m32");
        v300 = (__int64)v354;
        sub_1117D00((__int64)v354, (__int64)"-m32", v299, 1u);
        v301 = j__strlen("-m64");
        sub_1117D00(v300, (__int64)"-m64", v301, 0);
      }
      v302 = j__strlen("a");
      if ( !(unsigned __int8)sub_22A9F40(v375, "a", v302) )
      {
        v312 = j__strlen("-a");
        sub_1117D00((__int64)v354, (__int64)"-a", v312, 1u);
      }
      sub_10A71B0(n);
LABEL_202:
      s2 = (char *)s2 + 32;
      if ( v362 != s2 )
        continue;
      break;
    }
    if ( !v364 )
      goto LABEL_233;
LABEL_235:
    sub_117F230((__int64)v354);
    v365 += 192;
    if ( v370 != v365 )
      continue;
    break;
  }
  v6 = v372;
  v10 = (__int64 *)v354;
LABEL_237:
  v313 = (__int64 *)v357;
  *(_OWORD *)s = 0;
  v401.m128_u64[0] = 0;
  v314 = sub_111A650(
           v357->m128i_i64,
           (char **)v386,
           0xEEEEEEEEEEEEEEEFLL * ((__int64)(*((_QWORD *)&v386 + 1) - v386) >> 3));
  sub_11187A0((__int64)v10, v314);
  sub_1216C70(v313);
  v315 = sub_1110810((__int64)v10, v366, (__int64)v356, (__int64 *)&v457, 0);
  if ( v315 )
  {
    v316 = 192LL * (unsigned int)v458;
    v344 = &v457[v316];
    if ( v457 == &v457[v316] )
    {
LABEL_245:
      v315 = 0;
    }
    else
    {
      s1d = v315;
      v317 = (__int64)v457;
      v318 = v432;
      while ( 1 )
      {
        v319 = v318.m128i_i64[0];
        if ( v318.m128i_i64[0] != v318.m128i_i64[1] )
          break;
LABEL_244:
        v317 += 192;
        if ( v344 == (char *)v317 )
          goto LABEL_245;
      }
      v320 = *(_QWORD *)(v317 + 8);
      while ( *(_QWORD *)(v319 + 8) != v320 || sub_9B48C0(*(const void **)v319, *(const void **)v317, v320) )
      {
        v319 += 192;
        if ( v318.m128i_i64[1] == v319 )
          goto LABEL_244;
      }
      v315 = s1d;
    }
  }
  sub_117EEA0(v10);
  if ( HIDWORD(v390[1]) )
  {
    v321 = v390[0];
    if ( LODWORD(v390[1]) )
    {
      v322 = 0;
      v323 = 8LL * (unsigned int)(LODWORD(v390[1]) - 1) + 8;
      v324 = (char *)v390[0];
      do
      {
        v325 = *(_QWORD **)&v324[v322];
        if ( v325 && v325 != (_QWORD *)-8LL )
        {
          operator delete(v325, *v325 + 9LL, 8);
          v324 = (char *)v390[0];
        }
        v322 += 8;
      }
      while ( v322 != v323 );
      v321 = v324;
    }
  }
  else
  {
    v321 = v390[0];
  }
  free(v321);
  sub_10A71B0((__int64)v371);
  sub_1216C70(v363);
  sub_9B4A30((void ***)v356);
  if ( v315 )
LABEL_143:
    sub_11809E0(&v449, v432.m128i_i64);
LABEL_144:
  if ( (__m128i **)v392.m128i_i64[0] != v361 + 2 )
    operator delete((void *)v392.m128i_i64[0]);
  v242 = ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v243 = 0;
    v244 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    v245 = (char *)ptr;
    do
    {
      v246 = *(_QWORD **)&v245[v243];
      if ( v246 && v246 != (_QWORD *)-8LL )
      {
        operator delete(v246, *v246 + 9LL, 8);
        v245 = (char *)ptr;
      }
      v243 += 8;
    }
    while ( v244 != v243 );
    v242 = v245;
  }
  free(v242);
  sub_9B4A30(v360);
  sub_117EEA0(v432.m128i_i64);
  sub_1216C70(v369);
LABEL_7:
  sub_11809E0(v6 + 45, v449.m128i_i64);
  if ( (_DWORD)v458 )
  {
    v11 = 0;
    sub_110AD80((__int64)v10, (__int64)&v457[192 * (unsigned int)v458 - 192]);
  }
  else
  {
    LOBYTE(v405) = 0;
    *(_OWORD *)s = 0;
    v401.m128_u64[0] = 0;
    v11 = 1;
    sub_110B910((__int64)v10, nullptr, 0, 0, 0, (__int64 *)s, nullptr, 0, nullptr, 0, v403, v404, 0);
  }
  sub_A0AAD0((__int64)&v6[8].m128i_i64[1], v10);
  sub_A0AAD0((__int64)&v6[10].m128i_i64[1], v10 + 4);
  sub_A0AAD0((__int64)&v6[12].m128i_i64[1], v10 + 8);
  v12 = _mm_loadu_si128((__m128i *)((char *)v6 + 232));
  v433 = v6[15].m128i_i64[1];
  v432 = v12;
  v6[14].m128i_i64[1] = v438;
  v13 = *((_QWORD *)&v438 + 1);
  v438 = 0;
  v6[15].m128i_i64[0] = v13;
  v14 = v439;
  v439 = 0;
  v6[15].m128i_i64[1] = v14;
  sub_9B4A30((void ***)&v432);
  sub_A0AAD0((__int64)v6[16].m128i_i64, v10 + 15);
  if ( v6[20].m128i_i8[0] )
  {
    if ( v444 )
    {
      sub_A0AAD0((__int64)v6[18].m128i_i64, v10 + 19);
    }
    else
    {
      v15 = (__m128i *)v6[18].m128i_i64[0];
      v6[20].m128i_i8[0] = 0;
      if ( v15 != &v6[19] )
        operator delete(v15);
    }
LABEL_13:
    sub_110AEF0((__int64)v10);
    if ( !v11 )
      goto LABEL_14;
LABEL_54:
    sub_9B4A30((void ***)s);
    goto LABEL_14;
  }
  if ( !v444 )
    goto LABEL_13;
  v6[18].m128i_i64[0] = (__int64)v6[19].m128i_i64;
  if ( v441 == v10 + 21 )
  {
    v6[19] = _mm_loadu_si128(&v443);
  }
  else
  {
    v6[18].m128i_i64[0] = (__int64)v441;
    v6[19].m128i_i64[0] = v443.m128i_i64[0];
  }
  v120 = v442;
  v6[20].m128i_i8[0] = 1;
  v442 = 0;
  v6[18].m128i_i64[1] = v120;
  v441 = v10 + 21;
  v443.m128i_i8[0] = 0;
  sub_110AEF0((__int64)v10);
  if ( v11 )
    goto LABEL_54;
LABEL_14:
  v16 = v6[32].m128i_u8[8];
  v17 = (__int64)&v6[20].m128i_i64[1];
  v18 = v461;
  if ( (_BYTE)v16 )
  {
    if ( v461 )
    {
      sub_12198E0(v17, (__int64)v460);
    }
    else
    {
      v6[32].m128i_i8[8] = 0;
      v18 = v16;
      sub_110AEF0(v17);
    }
    goto LABEL_42;
  }
  if ( !v461 )
  {
    v18 = 1;
    goto LABEL_44;
  }
  sub_110AD80(v17, (__int64)v460);
  v6[32].m128i_i8[8] = 1;
LABEL_42:
  if ( v461 )
    sub_110AEF0((__int64)v460);
LABEL_44:
  v117 = (__int64)v457;
  v118 = &v457[192 * (unsigned int)v458];
  if ( v457 != v118 )
  {
    do
    {
      v118 -= 192;
      sub_110AEF0((__int64)v118);
    }
    while ( (char *)v117 != v118 );
    v118 = v457;
  }
  if ( v118 != v459 )
    free(v118);
  sub_117EEA0(v449.m128i_i64);
  return v18;
}
