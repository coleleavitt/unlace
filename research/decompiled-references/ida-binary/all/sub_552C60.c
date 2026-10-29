unsigned __int64 __fastcall sub_552C60(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v5; // r13
  __int64 v6; // rax
  size_t v7; // r12
  char v8; // al
  size_t v9; // r12
  size_t v10; // r12
  __m128i v11; // xmm0
  __int64 v12; // rax
  size_t v13; // r12
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  char **v17; // r15
  __int64 v18; // r14
  size_t v19; // rax
  size_t v20; // r13
  const char *v21; // r12
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // r13
  __int64 v30; // r15
  bool v31; // cc
  __int64 v32; // r12
  size_t v33; // r14
  __int64 v34; // rax
  const char *v35; // rsi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  __m128i v38; // xmm0
  char *v39; // rax
  __m128i si128; // xmm0
  __int64 v41; // rax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // r8
  __int64 v44; // rdi
  unsigned __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // r12
  __int64 v49; // rax
  __m128i v50; // xmm0
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // r9
  __int64 v53; // rax
  unsigned __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rax
  char *v60; // rsi
  __int64 v61; // rax
  size_t v62; // r14
  size_t v63; // r14
  __m128i *v64; // rsi
  __m128i v65; // xmm0
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // r9
  unsigned __int32 v69; // r14d
  __int64 v70; // rax
  unsigned __int64 v71; // rsi
  __int64 v72; // rax
  __int32 v73; // ecx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // rax
  __m128i v79; // xmm0
  __int64 v80; // rax
  unsigned __int64 v81; // r8
  unsigned __int64 v82; // r9
  __int64 v83; // rax
  unsigned __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // r12
  __int64 v89; // rax
  __int64 v90; // rax
  __m128i v91; // xmm0
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // r12
  _BYTE *v101; // rax
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  unsigned __int64 v105; // r9
  unsigned __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rsi
  __int64 v110; // r12
  __int64 v111; // rax
  __int64 v112; // rax
  __m128i v113; // xmm0
  unsigned __int64 v114; // rdi
  unsigned __int64 v115; // rdx
  __int64 v116; // rax
  unsigned __int64 v117; // r9
  unsigned __int64 v118; // rsi
  unsigned __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 v122; // r12
  _DWORD *v123; // rax
  unsigned __int64 v124; // rcx
  __int64 v125; // rax
  unsigned __int64 v126; // r9
  unsigned __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rsi
  __int64 v131; // rax
  __int64 v132; // rsi
  __int64 v133; // r12
  __int64 v134; // rax
  __m128i v135; // xmm0
  __int64 v136; // rax
  __int64 v137; // rsi
  __int64 v138; // rcx
  __int64 v139; // r12
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rsi
  __int64 v143; // r12
  __int64 v144; // rax
  __m128i v145; // xmm0
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r12
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rsi
  void *v154; // rsi
  __int64 v155; // rax
  char *v156; // rcx
  __m128i v157; // xmm0
  __m128i v158; // xmm1
  char *v159; // rax
  char *v160; // rdi
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  void *v167; // rax
  void *v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  void *v172; // rax
  const void *v173; // rsi
  void *v174; // rax
  const void *v175; // rsi
  void *v176; // rax
  const void *v177; // rsi
  __int64 v178; // rax
  void *v179; // rax
  const void *v180; // rsi
  void *v181; // rax
  const void *v182; // rsi
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rax
  const char *v189; // rsi
  const __m128i *v190; // rdi
  __int64 v191; // rax
  __int64 v192; // rcx
  __m128i v193; // xmm0
  bool v194; // cf
  __int64 v195; // rsi
  __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // r14
  const __m128i *v199; // rdi
  __int64 v200; // rax
  __int64 v201; // rdx
  __m128i v202; // xmm0
  __int64 v203; // rax
  __int64 v204; // rcx
  const __m128i *v205; // rdi
  __int64 v206; // rax
  unsigned __int64 v207; // rdx
  __m128i v208; // xmm0
  __int64 v209; // rcx
  __int64 v210; // rax
  const char *v211; // rsi
  const __m128i *v212; // rdi
  __int64 v213; // rax
  __int64 v214; // rdx
  __m128i v215; // xmm0
  unsigned __int64 v216; // rsi
  __int64 v217; // rdx
  __int64 v218; // rax
  const char *v219; // rsi
  const __m128i *v220; // rdi
  __int64 v221; // rax
  __int64 v222; // rcx
  __m128i v223; // xmm0
  __int64 v224; // rsi
  __int64 v225; // rcx
  __int64 v226; // rax
  const char *v227; // rsi
  const __m128i *v228; // rdi
  __int64 v229; // rax
  __int64 v230; // rdx
  __m128i v231; // xmm0
  __int64 v232; // rsi
  __int64 v233; // r8
  __int64 v234; // rax
  __int64 v235; // rcx
  const __m128i *v236; // rdi
  __int64 v237; // rax
  __int64 v238; // rdx
  __m128i v239; // xmm0
  __int64 v240; // rcx
  void *v241; // rax
  const void *v242; // rsi
  __int64 v243; // rcx
  __int64 v244; // rax
  const char *v245; // rsi
  const __m128i *v246; // rdi
  __int64 v247; // rax
  __int64 v248; // rdx
  __m128i v249; // xmm0
  __int64 v250; // rsi
  __int64 v251; // rdx
  __int64 v252; // rax
  const char *v253; // rsi
  const __m128i *v254; // rdi
  __int64 v255; // rax
  __int64 v256; // rcx
  __m128i v257; // xmm0
  __int64 v258; // rsi
  __int64 v259; // rcx
  __int64 v260; // rax
  const char *v261; // rsi
  const __m128i *v262; // rdi
  __int64 v263; // rax
  __int64 v264; // rdx
  __m128i v265; // xmm0
  const char *v266; // rsi
  __int64 v267; // rcx
  __int64 v268; // rax
  const char *v269; // rsi
  const __m128i *v270; // rdi
  __int64 v271; // rax
  __int64 v272; // rdx
  __m128i v273; // xmm0
  __int64 v274; // rsi
  __int64 v275; // rax
  __int64 v276; // rcx
  const __m128i *v277; // rdi
  __int64 v278; // rax
  unsigned __int64 v279; // rdx
  __m128i v280; // xmm0
  __int64 v281; // rdx
  __int64 v282; // rax
  const char *v283; // rsi
  const __m128i *v284; // rdi
  __int64 v285; // rax
  __int64 v286; // rcx
  __m128i v287; // xmm0
  __int64 v288; // rsi
  __int64 v289; // r8
  __int64 v290; // rax
  __int64 v291; // rcx
  const __m128i *v292; // rdi
  __int64 v293; // rax
  __int64 v294; // rdx
  __m128i v295; // xmm0
  __int64 v296; // rcx
  __int64 v297; // rax
  __int64 v298; // rax
  __int64 v299; // rcx
  const __m128i *v300; // rdi
  __int64 v301; // rax
  unsigned __int64 v302; // rdx
  __m128i v303; // xmm0
  __int64 v304; // rax
  __int64 v305; // rax
  __int64 v306; // rax
  __int64 v307; // rcx
  const __m128i *v308; // rdi
  __int64 v309; // rax
  unsigned __int64 v310; // rdx
  __m128i v311; // xmm1
  __int64 v312; // [rsp+0h] [rbp-130h]
  char *v313; // [rsp+0h] [rbp-130h]
  unsigned __int64 v314; // [rsp+0h] [rbp-130h]
  __int64 v315; // [rsp+0h] [rbp-130h]
  unsigned __int64 v316; // [rsp+0h] [rbp-130h]
  __int64 v317; // [rsp+0h] [rbp-130h]
  unsigned __int64 v318; // [rsp+0h] [rbp-130h]
  __int64 v319; // [rsp+0h] [rbp-130h]
  unsigned __int64 v320; // [rsp+0h] [rbp-130h]
  __int64 v321; // [rsp+0h] [rbp-130h]
  unsigned __int64 v322; // [rsp+0h] [rbp-130h]
  __int64 v323; // [rsp+0h] [rbp-130h]
  unsigned __int64 v324; // [rsp+0h] [rbp-130h]
  __int64 v325; // [rsp+0h] [rbp-130h]
  __m128i v326; // [rsp+8h] [rbp-128h] BYREF
  __int64 v327; // [rsp+18h] [rbp-118h]
  __int64 v328; // [rsp+20h] [rbp-110h]
  __int64 v329; // [rsp+28h] [rbp-108h]
  __int64 v330; // [rsp+30h] [rbp-100h]
  __int64 v331; // [rsp+38h] [rbp-F8h]
  __m128i *v332; // [rsp+40h] [rbp-F0h]
  unsigned __int64 v333; // [rsp+48h] [rbp-E8h]
  const char *v334; // [rsp+50h] [rbp-E0h]
  __m128i v335; // [rsp+58h] [rbp-D8h] BYREF
  __m128i v336; // [rsp+68h] [rbp-C8h] BYREF
  __m128i v337; // [rsp+78h] [rbp-B8h] BYREF
  __m128i v338; // [rsp+88h] [rbp-A8h] BYREF
  __m128i v339; // [rsp+98h] [rbp-98h] BYREF
  __m128i v340; // [rsp+A8h] [rbp-88h] BYREF
  __m128i v341; // [rsp+B8h] [rbp-78h] BYREF
  char *n; // [rsp+D8h] [rbp-58h] BYREF
  __m128i n_8; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v344; // [rsp+F0h] [rbp-40h]

  v344 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &forms::abstract_form_desc_t___vtable;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v176 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)(a1 + 144) = v176;
    v177 = *(const void **)a2;
    *(_QWORD *)(a1 + 160) = v5;
    memcpy(v176, v177, v5);
    *(_QWORD *)(a1 + 152) = v5;
  }
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_550E90(a1 + 176, 2, -1);
  sub_550E90(a1 + 176, 4, -1);
  *(_QWORD *)a1 = &liblicui::license_dialog_t___vtable;
  *(_QWORD *)(a1 + 256) = get_license_manager();
  *(_WORD *)(a1 + 264) = 256;
  *(_BYTE *)(a1 + 266) = 1;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  v328 = a1 + 264;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  v331 = a1 + 296;
  v6 = qvector_reserve(a1 + 296, 0, 10, 1);
  *(_QWORD *)(a1 + 296) = v6;
  *(_QWORD *)(a1 + 304) = 10;
  *(_QWORD *)v6 = 0x736F686C61636F6CLL;
  *(_BYTE *)(v6 + 8) = 116;
  *(_BYTE *)(*(_QWORD *)(a1 + 296) + 9LL) = 0;
  *(_QWORD *)(a1 + 320) = 65434;
  *(_QWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  v329 = a1 + 352;
  sub_552010(a1 + 352, (const char *)a1, 0);
  *(_QWORD *)(a1 + 600) = 0;
  *(_OWORD *)(a1 + 608) = 0;
  v330 = a1 + 624;
  sub_552010(a1 + 624, (const char *)a1, 1);
  *(_QWORD *)(a1 + 872) = 0;
  *(_OWORD *)(a1 + 880) = 0;
  v7 = *(_QWORD *)(a3 + 8);
  v326.m128i_i64[0] = a1 + 872;
  if ( v7 )
  {
    v174 = (void *)qalloc_or_throw(v7);
    *(_QWORD *)(a1 + 872) = v174;
    v175 = *(const void **)a3;
    *(_QWORD *)(a1 + 888) = v7;
    memcpy(v174, v175, v7);
    *(_QWORD *)(a1 + 880) = v7;
  }
  *(_WORD *)(a1 + 896) = *(_WORD *)(a3 + 24);
  *(_BYTE *)(a1 + 898) = *(_BYTE *)(a3 + 26);
  v8 = *(_BYTE *)(a3 + 32);
  *(_QWORD *)(a1 + 912) = 0;
  *(_BYTE *)(a1 + 904) = v8;
  *(_OWORD *)(a1 + 920) = 0;
  v9 = *(_QWORD *)(a3 + 48);
  if ( v9 )
  {
    v172 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 48));
    *(_QWORD *)(a1 + 912) = v172;
    v173 = *(const void **)(a3 + 40);
    *(_QWORD *)(a1 + 928) = v9;
    memcpy(v172, v173, v9);
    *(_QWORD *)(a1 + 920) = v9;
  }
  *(_QWORD *)(a1 + 936) = 0;
  *(_OWORD *)(a1 + 944) = 0;
  v10 = *(_QWORD *)(a3 + 72);
  if ( v10 )
  {
    v181 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 72));
    *(_QWORD *)(a1 + 936) = v181;
    v182 = *(const void **)(a3 + 64);
    *(_QWORD *)(a1 + 952) = v10;
    memcpy(v181, v182, v10);
    *(_QWORD *)(a1 + 944) = v10;
  }
  v11 = _mm_loadu_si128((const __m128i *)(a3 + 88));
  v12 = *(_QWORD *)(a3 + 104);
  *(_QWORD *)(a1 + 984) = 0;
  *(__m128i *)(a1 + 960) = v11;
  *(_QWORD *)(a1 + 976) = v12;
  *(_OWORD *)(a1 + 992) = 0;
  v13 = *(_QWORD *)(a3 + 120);
  if ( v13 )
  {
    v179 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 120));
    *(_QWORD *)(a1 + 984) = v179;
    v180 = *(const void **)(a3 + 112);
    *(_QWORD *)(a1 + 1000) = v13;
    memcpy(v179, v180, v13);
    *(_QWORD *)(a1 + 992) = v13;
  }
  v14 = *(_QWORD *)(a1 + 248);
  *(_WORD *)(a1 + 1040) = 0;
  v15 = *(_QWORD *)(a1 + 232);
  v312 = a1 + 232;
  v16 = *(_QWORD *)(a1 + 240);
  *(_WORD *)(a1 + 1008) = 0;
  *(_BYTE *)(a1 + 1042) = 1;
  *(_QWORD *)(a1 + 1016) = 0;
  *(_BYTE *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_OWORD *)(a1 + 1024) = 0;
  *(_OWORD *)(a1 + 1064) = 0;
  *(_OWORD *)(a1 + 1088) = 0;
  if ( v14 < v16 + 2 )
  {
    v178 = qvector_reserve(v312, v15, v16 + 2, 24);
    *(_QWORD *)(a1 + 232) = v178;
    v15 = v178;
    v14 = *(_QWORD *)(a1 + 248);
    v16 = *(_QWORD *)(a1 + 240);
  }
  v17 = off_8C5290;
  while ( 1 )
  {
    v21 = *v17;
    if ( v14 < v16 + 1 )
    {
      v22 = qvector_reserve(v312, v15, v16 + 1, 24);
      *(_QWORD *)(a1 + 232) = v22;
      v15 = v22;
      v16 = *(_QWORD *)(a1 + 240);
    }
    v18 = v15 + 24 * v16;
    *(_QWORD *)v18 = 0;
    *(_OWORD *)(v18 + 8) = 0;
    ++*(_QWORD *)(a1 + 240);
    if ( v21 )
    {
      v19 = strlen(v21);
      v20 = v19;
      if ( v19 )
        break;
    }
    ++v17;
    *(_QWORD *)(v18 + 8) = 0;
    if ( &off_8C52A0 == (_UNKNOWN **)v17 )
      goto LABEL_23;
LABEL_17:
    v16 = *(_QWORD *)(a1 + 240);
    v14 = *(_QWORD *)(a1 + 248);
    v15 = *(_QWORD *)(a1 + 232);
  }
  v23 = *(void **)v18;
  v24 = v19 + 1;
  if ( *(_QWORD *)(v18 + 16) < v19 + 1 )
  {
    v154 = *(void **)v18;
    v326.m128i_i64[1] = v19 + 1;
    v155 = qvector_reserve(v18, v154, v24, 1);
    *(_QWORD *)v18 = v155;
    v24 = v326.m128i_i64[1];
    v23 = (void *)v155;
  }
  *(_QWORD *)(v18 + 8) = v24;
  ++v17;
  memmove(v23, v21, v20);
  *(_BYTE *)(*(_QWORD *)v18 + v20) = 0;
  if ( &off_8C52A0 != (_UNKNOWN **)v17 )
    goto LABEL_17;
LABEL_23:
  v25 = *(__int64 **)(a1 + 176);
  v26 = &v25[*(_QWORD *)(a1 + 184)];
  if ( v25 == v26 )
  {
LABEL_106:
    v27 = 0;
  }
  else
  {
    while ( 1 )
    {
      v27 = *v25;
      if ( *(_DWORD *)(*v25 + 132) == 2 )
        break;
      if ( v26 == ++v25 )
        goto LABEL_106;
    }
  }
  *(_DWORD *)(v27 + 12) = 9;
  sub_552320(v328, v326.m128i_i64[0]);
  v28 = operator new(0x28u);
  *(_QWORD *)(v28 + 8) = 0;
  *(_DWORD *)(v28 + 32) = 2;
  *(_OWORD *)(v28 + 16) = 0;
  *(_QWORD *)v28 = &forms::vlayout_t___vtable;
  *(_QWORD *)(a1 + 104) = v28;
  v29 = operator new(0x90u);
  *(_QWORD *)(v29 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(v29 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v29 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v29 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v29 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v29 + 48) = 0;
  *(_QWORD *)(v29 + 56) = 0;
  *(_QWORD *)(v29 + 80) = 0;
  *(_QWORD *)(v29 + 104) = 0;
  *(_QWORD *)v29 = &forms::container_t___vtable;
  *(_DWORD *)(v29 + 112) = 0;
  *(_QWORD *)(v29 + 120) = 0;
  *(_OWORD *)(v29 + 64) = 0;
  *(_OWORD *)(v29 + 88) = 0;
  *(_OWORD *)(v29 + 128) = 0;
  v30 = operator new(0x50u);
  *(_QWORD *)(v30 + 8) = 0;
  v31 = *(_QWORD *)(a1 + 992) <= 1u;
  *(_DWORD *)(v30 + 32) = 3;
  *(_OWORD *)(v30 + 16) = 0;
  *(_QWORD *)v30 = &forms::glayout_t___vtable;
  *(_QWORD *)(v30 + 36) = 0xFFFFFFFFLL;
  *(_QWORD *)(v30 + 44) = 0xFFFFFFFFLL;
  *(_QWORD *)(v30 + 56) = 0;
  *(_QWORD *)(v29 + 104) = v30;
  *(_OWORD *)(v30 + 64) = 0;
  if ( v31 )
  {
    v326.m128i_i32[0] = 0;
  }
  else
  {
    v32 = operator new(0x88u);
    *(_QWORD *)(v32 + 8) = 0xFFFFFFFF00000002LL;
    *(_QWORD *)(v32 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v32 + 24) = 0xFFFFFFFFLL;
    v33 = *(_QWORD *)(a1 + 992);
    *(_QWORD *)(v32 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v32 + 40) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v32 + 48) = 0;
    *(_QWORD *)(v32 + 56) = 0;
    *(_QWORD *)(v32 + 80) = 0;
    *(_QWORD *)v32 = &forms::label_t___vtable;
    *(_QWORD *)(v32 + 104) = 0;
    *(_OWORD *)(v32 + 64) = 0;
    *(_OWORD *)(v32 + 88) = 0;
    *(_OWORD *)(v32 + 112) = 0;
    if ( v33 )
    {
      v241 = (void *)qalloc_or_throw(v33);
      *(_QWORD *)(v32 + 104) = v241;
      v242 = *(const void **)(a1 + 984);
      *(_QWORD *)(v32 + 120) = v33;
      memcpy(v241, v242, v33);
      *(_QWORD *)(v32 + 112) = v33;
    }
    *(_BYTE *)(v32 + 128) = 0;
    *(_DWORD *)(v32 + 32) = 1;
    n = nullptr;
    n_8 = 0;
    n = (char *)qvector_reserve(&n, 0, 5, 1);
    n_8.m128i_i64[0] = 5;
    strcpy(n, "hint");
    v34 = *(_QWORD *)(v32 + 88);
    v35 = *(const char **)(v32 + 80);
    v36 = *(_QWORD *)(v32 + 96);
    v37 = v34 + 1;
    if ( &n < (char **)v35 || &n >= (char **)&v35[24 * v36] )
    {
      if ( v36 < v37 )
      {
        v304 = qvector_reserve(v32 + 80, v35, v34 + 1, 24);
        *(_QWORD *)(v32 + 80) = v304;
        v35 = (const char *)v304;
        v34 = *(_QWORD *)(v32 + 88);
      }
      v38 = _mm_loadu_si128(&n_8);
      v39 = (char *)&v35[24 * v34];
      *(_QWORD *)v39 = n;
      *(__m128i *)(v39 + 8) = v38;
      ++*(_QWORD *)(v32 + 88);
    }
    else
    {
      v156 = n;
      v157 = _mm_loadl_epi64(&n_8);
      n = nullptr;
      v158 = _mm_loadl_epi64((const __m128i *)&n_8.m128i_u64[1]);
      n_8 = 0;
      v313 = v156;
      if ( v36 < v37 )
      {
        v326.m128i_i64[1] = v158.m128i_i64[0];
        v326.m128i_i64[0] = v157.m128i_i64[0];
        v305 = qvector_reserve(v32 + 80, v35, v34 + 1, 24);
        *(_QWORD *)(v32 + 80) = v305;
        v35 = (const char *)v305;
        v158 = _mm_loadl_epi64((const __m128i *)&v326.m128i_u64[1]);
        v34 = *(_QWORD *)(v32 + 88);
        v157 = _mm_loadl_epi64(&v326);
      }
      v159 = (char *)&v35[24 * v34];
      *(_QWORD *)v159 = v313;
      *(__m128i *)(v159 + 8) = _mm_unpacklo_epi64(v157, v158);
      v160 = n;
      ++*(_QWORD *)(v32 + 88);
      if ( v160 )
      {
        n_8.m128i_i64[0] = 0;
        qfree(v160, v35);
      }
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DDE60);
    v41 = *(_QWORD *)(v30 + 64);
    *(_DWORD *)(v32 + 32) = 3;
    v42 = *(_QWORD *)(v30 + 56);
    v43 = *(_QWORD *)(v30 + 72);
    v44 = v30 + 56;
    v335 = si128;
    v45 = v41 + 1;
    if ( (unsigned __int64)&v335 >= v42 && (unsigned __int64)&v335 < v42 + 16 * v43 )
    {
      if ( v43 < v45 )
      {
        v324 = v43;
        v42 = qvector_reserve(v44, 0, v41 + 1, 16);
        v306 = *(_QWORD *)(v30 + 64);
        v307 = *(_QWORD *)(v30 + 72);
        v308 = *(const __m128i **)(v30 + 56);
        *(_QWORD *)(v30 + 72) = v324;
        v309 = v306 - 1;
        if ( v309 >= 0 )
        {
          v310 = v42;
          do
          {
            v311 = _mm_loadu_si128(v308);
            v310 += 16LL;
            ++v308;
            *(__m128i *)(v310 - 16) = v311;
            v194 = v309-- == 0;
          }
          while ( !v194 );
          v308 = *(const __m128i **)(v30 + 56);
        }
        v325 = v307;
        qfree(v308, nullptr);
        v41 = *(_QWORD *)(v30 + 64);
        *(_QWORD *)(v30 + 56) = v42;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DDE60);
        *(_QWORD *)(v30 + 72) = v325;
      }
      *(__m128i *)(v42 + 16 * v41) = si128;
    }
    else
    {
      if ( v43 < v45 )
      {
        v322 = v43;
        v42 = qvector_reserve(v44, 0, v41 + 1, 16);
        v298 = *(_QWORD *)(v30 + 64);
        v299 = *(_QWORD *)(v30 + 72);
        v300 = *(const __m128i **)(v30 + 56);
        *(_QWORD *)(v30 + 72) = v322;
        v301 = v298 - 1;
        if ( v301 >= 0 )
        {
          v302 = v42;
          do
          {
            v303 = _mm_loadu_si128(v300);
            v302 += 16LL;
            ++v300;
            *(__m128i *)(v302 - 16) = v303;
            v194 = v301-- == 0;
          }
          while ( !v194 );
          v300 = *(const __m128i **)(v30 + 56);
        }
        v323 = v299;
        qfree(v300, nullptr);
        v41 = *(_QWORD *)(v30 + 64);
        *(_QWORD *)(v30 + 56) = v42;
        *(_QWORD *)(v30 + 72) = v323;
      }
      *(__m128i *)(v42 + 16 * v41) = _mm_load_si128(&v335);
    }
    v46 = *(_QWORD *)(v30 + 16);
    ++*(_QWORD *)(v30 + 64);
    v47 = *(_QWORD *)(v30 + 8);
    if ( *(_QWORD *)(v30 + 24) < (unsigned __int64)(v46 + 1) )
    {
      v297 = qvector_reserve(v30 + 8, v47, v46 + 1, 8);
      *(_QWORD *)(v30 + 8) = v297;
      v47 = v297;
      v46 = *(_QWORD *)(v30 + 16);
    }
    *(_QWORD *)(v47 + 8 * v46) = v32;
    ++*(_QWORD *)(v30 + 16);
    v326.m128i_i32[0] = 1;
  }
  v48 = operator new(0x88u);
  *(_OWORD *)(v48 + 64) = 0;
  *(_QWORD *)(v48 + 8) = 0x100000006LL;
  *(_QWORD *)(v48 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v48 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v48 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v48 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v48 = &forms::abstract_button_t___vtable;
  *(_QWORD *)(v48 + 48) = 0;
  *(_QWORD *)(v48 + 56) = 0;
  *(_QWORD *)(v48 + 80) = 0;
  *(_QWORD *)(v48 + 104) = a1 + 265;
  *(_QWORD *)(v48 + 112) = 0;
  *(_OWORD *)(v48 + 88) = 0;
  *(_OWORD *)(v48 + 120) = 0;
  v49 = qvector_reserve(v48 + 112, 0, 31, 1);
  v50 = _mm_load_si128((const __m128i *)&xmmword_5DDE70);
  *(_QWORD *)(v48 + 112) = v49;
  *(_QWORD *)(v48 + 120) = 31;
  *(__m128i *)v49 = v50;
  v336.m128i_i32[1] = 0;
  *(__m128i *)(v49 + 14) = _mm_load_si128((const __m128i *)&xmmword_5DDE80);
  *(_BYTE *)(*(_QWORD *)(v48 + 112) + 30LL) = 0;
  v51 = *(_QWORD *)(v30 + 56);
  *(_QWORD *)v48 = &forms::radio_button_t___vtable;
  v52 = *(_QWORD *)(v30 + 72);
  v326.m128i_i64[1] = v30 + 56;
  LODWORD(v49) = v326.m128i_i32[0];
  *(_DWORD *)(v48 + 32) = 1;
  v336.m128i_i32[0] = v49;
  v336.m128i_i64[1] = 0x100000001LL;
  v53 = *(_QWORD *)(v30 + 64);
  v54 = v53 + 1;
  if ( (unsigned __int64)&v336 < v51 || (unsigned __int64)&v336 >= v51 + 16 * v52 )
  {
    if ( v52 < v54 )
    {
      v316 = v52;
      v51 = qvector_reserve(v326.m128i_i64[1], 0, v53 + 1, 16);
      v203 = *(_QWORD *)(v30 + 64);
      v204 = *(_QWORD *)(v30 + 72);
      v205 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v316;
      v206 = v203 - 1;
      if ( v206 >= 0 )
      {
        v207 = v51;
        do
        {
          v208 = _mm_loadu_si128(v205);
          v207 += 16LL;
          ++v205;
          *(__m128i *)(v207 - 16) = v208;
          v194 = v206-- == 0;
        }
        while ( !v194 );
        v205 = *(const __m128i **)(v30 + 56);
      }
      v317 = v204;
      qfree(v205, nullptr);
      v53 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v51;
      *(_QWORD *)(v30 + 72) = v317;
    }
    *(__m128i *)(v51 + 16 * v53) = _mm_load_si128(&v336);
  }
  else
  {
    if ( v52 < v54 )
    {
      v320 = v52;
      v51 = qvector_reserve(v326.m128i_i64[1], 0, v53 + 1, 16);
      v275 = *(_QWORD *)(v30 + 64);
      v276 = *(_QWORD *)(v30 + 72);
      v277 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v320;
      v278 = v275 - 1;
      if ( v278 >= 0 )
      {
        v279 = v51;
        do
        {
          v280 = _mm_loadu_si128(v277);
          v279 += 16LL;
          ++v277;
          *(__m128i *)(v279 - 16) = v280;
          v194 = v278-- == 0;
        }
        while ( !v194 );
        v277 = *(const __m128i **)(v30 + 56);
      }
      v321 = v276;
      qfree(v277, nullptr);
      v53 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v51;
      *(_QWORD *)(v30 + 72) = v321;
    }
    v55 = v51 + 16 * v53;
    *(_DWORD *)v55 = v326.m128i_i32[0];
    *(_QWORD *)(v55 + 4) = 0x100000000LL;
    *(_DWORD *)(v55 + 12) = 1;
  }
  ++*(_QWORD *)(v30 + 64);
  v56 = *(_QWORD *)(v30 + 8);
  v327 = v30 + 8;
  v57 = *(_QWORD *)(v30 + 16);
  if ( *(_QWORD *)(v30 + 24) < (unsigned __int64)(v57 + 1) )
  {
    v183 = qvector_reserve(v327, v56, v57 + 1, 8);
    *(_QWORD *)(v30 + 8) = v183;
    v56 = v183;
    v57 = *(_QWORD *)(v30 + 16);
  }
  *(_QWORD *)(v56 + 8 * v57) = v48;
  ++*(_QWORD *)(v30 + 16);
  v58 = operator new(0xC8u);
  n = nullptr;
  n_8 = 0;
  v59 = qvector_reserve(&n, 0, 30, 1);
  n = (char *)v59;
  v60 = nullptr;
  n_8.m128i_i64[0] = 30;
  *(__m128i *)v59 = _mm_load_si128((const __m128i *)&xmmword_5DC2A0);
  *(__m128i *)(v59 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DDE90);
  n[29] = 0;
  v332 = &v341;
  memset(&v341, 0, 24);
  v61 = qvector_reserve(&v341, 0, 32, 1);
  v341.m128i_i64[0] = v61;
  v341.m128i_i64[1] = 32;
  *(__m128i *)v61 = _mm_load_si128((const __m128i *)&xmmword_5DDEA0);
  *(__m128i *)(v61 + 15) = _mm_load_si128((const __m128i *)&xmmword_5DDEB0);
  *(_BYTE *)(v341.m128i_i64[0] + 31) = 0;
  v62 = v341.m128i_u64[1];
  *(_QWORD *)(v58 + 8) = 0x20000000DLL;
  *(_QWORD *)(v58 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v58 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v58 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v58 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v58 = &forms::file_picker_t___vtable;
  *(_QWORD *)(v58 + 48) = 0;
  *(_QWORD *)(v58 + 56) = 0;
  *(_QWORD *)(v58 + 80) = 0;
  *(_QWORD *)(v58 + 104) = 0;
  *(_QWORD *)(v58 + 128) = 0;
  *(_QWORD *)(v58 + 136) = a1 + 272;
  *(_DWORD *)(v58 + 144) = 0;
  *(_QWORD *)(v58 + 152) = 0;
  *(_OWORD *)(v58 + 64) = 0;
  *(_OWORD *)(v58 + 88) = 0;
  *(_OWORD *)(v58 + 112) = 0;
  *(_OWORD *)(v58 + 160) = 0;
  if ( v62 )
  {
    v168 = (void *)qalloc_or_throw(v62);
    *(_QWORD *)(v58 + 152) = v168;
    v60 = (char *)v341.m128i_i64[0];
    *(_QWORD *)(v58 + 168) = v62;
    memcpy(v168, v60, v62);
    *(_QWORD *)(v58 + 160) = v62;
  }
  v63 = n_8.m128i_i64[0];
  *(_QWORD *)(v58 + 176) = 0;
  *(_OWORD *)(v58 + 184) = 0;
  if ( v63 )
  {
    v167 = (void *)qalloc_or_throw(v63);
    *(_QWORD *)(v58 + 176) = v167;
    v60 = n;
    *(_QWORD *)(v58 + 192) = v63;
    memcpy(v167, v60, v63);
    *(_QWORD *)(v58 + 184) = v63;
  }
  if ( v341.m128i_i64[0] )
  {
    v341.m128i_i64[1] = 0;
    qfree(v341.m128i_i64[0], v60);
  }
  if ( n )
  {
    n_8.m128i_i64[0] = 0;
    qfree(n, v60);
  }
  v64 = *(__m128i **)(v58 + 104);
  if ( *(_QWORD *)(v58 + 120) <= 0x11u )
  {
    v169 = qvector_reserve(v58 + 104, v64, 18, 1);
    *(_QWORD *)(v58 + 104) = v169;
    v64 = (__m128i *)v169;
  }
  v65 = _mm_load_si128((const __m128i *)&xmmword_5DDEC0);
  *(_QWORD *)(v58 + 112) = 18;
  v64[1].m128i_i8[0] = 104;
  *v64 = v65;
  v66 = *(_QWORD *)(v58 + 104);
  v337.m128i_i32[1] = 1;
  *(_BYTE *)(v66 + 17) = 0;
  v67 = *(_QWORD *)(v30 + 56);
  v68 = *(_QWORD *)(v30 + 72);
  v337.m128i_i32[0] = v326.m128i_i32[0];
  v69 = v326.m128i_i32[0] + 1;
  v337.m128i_i64[1] = 0x400000001LL;
  v70 = *(_QWORD *)(v30 + 64);
  v71 = v70 + 1;
  if ( (unsigned __int64)&v337 < v67 || (unsigned __int64)&v337 >= v67 + 16 * v68 )
  {
    if ( v68 < v71 )
    {
      v326.m128i_i64[0] = v68;
      v209 = qvector_reserve(v326.m128i_i64[1], 0, v70 + 1, 16);
      v210 = *(_QWORD *)(v30 + 64);
      v211 = *(const char **)(v30 + 72);
      v212 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v213 = v210 - 1;
      if ( v213 >= 0 )
      {
        v214 = v209;
        do
        {
          v215 = _mm_loadu_si128(v212);
          v214 += 16;
          ++v212;
          *(__m128i *)(v214 - 16) = v215;
          v194 = v213-- == 0;
        }
        while ( !v194 );
        v212 = *(const __m128i **)(v30 + 56);
      }
      v333 = (unsigned __int64)v211;
      v326.m128i_i64[0] = v209;
      qfree(v212, v211);
      v67 = v326.m128i_i64[0];
      v216 = v333;
      v70 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v216;
    }
    *(__m128i *)(v67 + 16 * v70) = _mm_load_si128(&v337);
  }
  else
  {
    if ( v68 < v71 )
    {
      v333 = v68;
      v259 = qvector_reserve(v326.m128i_i64[1], 0, v70 + 1, 16);
      v260 = *(_QWORD *)(v30 + 64);
      v261 = *(const char **)(v30 + 72);
      v262 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v333;
      v263 = v260 - 1;
      if ( v263 >= 0 )
      {
        v264 = v259;
        do
        {
          v265 = _mm_loadu_si128(v262);
          v264 += 16;
          ++v262;
          *(__m128i *)(v264 - 16) = v265;
          v194 = v263-- == 0;
        }
        while ( !v194 );
        v262 = *(const __m128i **)(v30 + 56);
      }
      v334 = v261;
      v333 = v259;
      qfree(v262, v261);
      v67 = v333;
      v266 = v334;
      v70 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v333;
      *(_QWORD *)(v30 + 72) = v266;
    }
    v72 = v67 + 16 * v70;
    v73 = v326.m128i_i32[0];
    *(_DWORD *)(v72 + 12) = 4;
    *(_DWORD *)v72 = v73;
    *(_QWORD *)(v72 + 4) = 0x100000001LL;
  }
  v74 = *(_QWORD *)(v30 + 16);
  ++*(_QWORD *)(v30 + 64);
  v75 = *(_QWORD *)(v30 + 8);
  if ( *(_QWORD *)(v30 + 24) < (unsigned __int64)(v74 + 1) )
  {
    v171 = qvector_reserve(v327, v75, v74 + 1, 8);
    *(_QWORD *)(v30 + 8) = v171;
    v75 = v171;
    v74 = *(_QWORD *)(v30 + 16);
  }
  *(_QWORD *)(v75 + 8 * v74) = v58;
  ++*(_QWORD *)(v30 + 16);
  v76 = operator new(0x88u);
  *(_QWORD *)(v76 + 8) = 6;
  *(_QWORD *)(v76 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v76 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v76 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v76 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v76 = &forms::abstract_button_t___vtable;
  v77 = v328;
  *(_QWORD *)(v76 + 48) = 0;
  *(_QWORD *)(v76 + 56) = 0;
  *(_QWORD *)(v76 + 80) = 0;
  *(_QWORD *)(v76 + 104) = v77;
  *(_QWORD *)(v76 + 112) = 0;
  *(_OWORD *)(v76 + 64) = 0;
  *(_OWORD *)(v76 + 88) = 0;
  *(_OWORD *)(v76 + 120) = 0;
  v78 = qvector_reserve(v76 + 112, 0, 29, 1);
  v79 = _mm_load_si128((const __m128i *)&xmmword_5DDED0);
  *(_QWORD *)(v76 + 112) = v78;
  *(_QWORD *)(v76 + 120) = 29;
  *(__m128i *)v78 = v79;
  v338.m128i_i32[0] = v69;
  *(__m128i *)(v78 + 12) = _mm_load_si128((const __m128i *)&xmmword_5DDEE0);
  v80 = *(_QWORD *)(v76 + 112);
  v338.m128i_i32[1] = 0;
  *(_BYTE *)(v80 + 28) = 0;
  v81 = *(_QWORD *)(v30 + 56);
  *(_QWORD *)v76 = &forms::radio_button_t___vtable;
  v82 = *(_QWORD *)(v30 + 72);
  v338.m128i_i64[1] = 0x100000001LL;
  v83 = *(_QWORD *)(v30 + 64);
  *(_DWORD *)(v76 + 32) = 1;
  v84 = v83 + 1;
  if ( (unsigned __int64)&v338 < v81 || (unsigned __int64)&v338 >= v81 + 16 * v82 )
  {
    if ( v82 < v84 )
    {
      v326.m128i_i64[0] = v82;
      v233 = qvector_reserve(v326.m128i_i64[1], 0, v83 + 1, 16);
      v234 = *(_QWORD *)(v30 + 64);
      v235 = *(_QWORD *)(v30 + 72);
      v236 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v237 = v234 - 1;
      if ( v237 >= 0 )
      {
        v238 = v233;
        do
        {
          v239 = _mm_loadu_si128(v236);
          v238 += 16;
          ++v236;
          *(__m128i *)(v238 - 16) = v239;
          v194 = v237-- == 0;
        }
        while ( !v194 );
        v236 = *(const __m128i **)(v30 + 56);
      }
      v328 = v235;
      v326.m128i_i64[0] = v233;
      qfree(v236, nullptr);
      v81 = v326.m128i_i64[0];
      v240 = v328;
      v83 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v240;
    }
    *(__m128i *)(v81 + 16 * v83) = _mm_load_si128(&v338);
  }
  else
  {
    if ( v82 < v84 )
    {
      v326.m128i_i64[0] = v82;
      v289 = qvector_reserve(v326.m128i_i64[1], 0, v83 + 1, 16);
      v290 = *(_QWORD *)(v30 + 64);
      v291 = *(_QWORD *)(v30 + 72);
      v292 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v293 = v290 - 1;
      if ( v293 >= 0 )
      {
        v294 = v289;
        do
        {
          v295 = _mm_loadu_si128(v292);
          v294 += 16;
          ++v292;
          *(__m128i *)(v294 - 16) = v295;
          v194 = v293-- == 0;
        }
        while ( !v194 );
        v292 = *(const __m128i **)(v30 + 56);
      }
      v328 = v291;
      v326.m128i_i64[0] = v289;
      qfree(v292, nullptr);
      v81 = v326.m128i_i64[0];
      v296 = v328;
      v83 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v296;
    }
    v85 = v81 + 16 * v83;
    *(_DWORD *)v85 = v69;
    *(_QWORD *)(v85 + 4) = 0x100000000LL;
    *(_DWORD *)(v85 + 12) = 1;
  }
  v86 = *(_QWORD *)(v30 + 16);
  ++*(_QWORD *)(v30 + 64);
  v87 = *(_QWORD *)(v30 + 8);
  if ( *(_QWORD *)(v30 + 24) < (unsigned __int64)(v86 + 1) )
  {
    v170 = qvector_reserve(v327, v87, v86 + 1, 8);
    *(_QWORD *)(v30 + 8) = v170;
    v87 = v170;
    v86 = *(_QWORD *)(v30 + 16);
  }
  *(_QWORD *)(v87 + 8 * v86) = v76;
  ++*(_QWORD *)(v30 + 16);
  v88 = operator new(0x90u);
  *(_OWORD *)(v88 + 64) = 0;
  *(_QWORD *)(v88 + 8) = 0x300000003LL;
  *(_QWORD *)(v88 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v88 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v88 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v88 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v88 = &forms::text_line_t___vtable;
  v89 = v331;
  *(_QWORD *)(v88 + 48) = 0;
  *(_QWORD *)(v88 + 56) = 0;
  *(_QWORD *)(v88 + 80) = 0;
  *(_QWORD *)(v88 + 104) = 0;
  *(_QWORD *)(v88 + 128) = 0;
  *(_QWORD *)(v88 + 136) = v89;
  *(_OWORD *)(v88 + 88) = 0;
  *(_OWORD *)(v88 + 112) = 0;
  v90 = qvector_reserve(v88 + 104, 0, 20, 1);
  v91 = _mm_load_si128((const __m128i *)&xmmword_5DDEF0);
  *(_QWORD *)(v88 + 104) = v90;
  *(_QWORD *)(v88 + 112) = 20;
  *(__m128i *)v90 = v91;
  *(_DWORD *)(v90 + 15) = 1953722216;
  v92 = *(_QWORD *)(v88 + 104);
  v339.m128i_i32[0] = v69;
  *(_BYTE *)(v92 + 19) = 0;
  v93 = *(_QWORD *)(v30 + 56);
  v339.m128i_i64[1] = 0x100000001LL;
  v94 = *(_QWORD *)(v30 + 64);
  v339.m128i_i32[1] = 1;
  v95 = *(_QWORD *)(v30 + 72);
  v96 = v94 + 1;
  if ( (unsigned __int64)&v339 < v93 || (unsigned __int64)&v339 >= v93 + 16 * v95 )
  {
    if ( v95 < v96 )
    {
      v326.m128i_i64[0] = *(_QWORD *)(v30 + 72);
      v217 = qvector_reserve(v326.m128i_i64[1], 0, v94 + 1, 16);
      v218 = *(_QWORD *)(v30 + 64);
      v219 = *(const char **)(v30 + 72);
      v220 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v221 = v218 - 1;
      if ( v221 >= 0 )
      {
        v222 = v217;
        do
        {
          v223 = _mm_loadu_si128(v220);
          v222 += 16;
          ++v220;
          *(__m128i *)(v222 - 16) = v223;
          v194 = v221-- == 0;
        }
        while ( !v194 );
        v220 = *(const __m128i **)(v30 + 56);
      }
      v328 = (__int64)v219;
      v326.m128i_i64[0] = v217;
      qfree(v220, v219);
      v93 = v326.m128i_i64[0];
      v224 = v328;
      v94 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v224;
    }
    *(__m128i *)(v93 + 16 * v94) = _mm_load_si128(&v339);
  }
  else
  {
    if ( v95 < v96 )
    {
      v326.m128i_i64[0] = *(_QWORD *)(v30 + 72);
      v281 = qvector_reserve(v326.m128i_i64[1], 0, v94 + 1, 16);
      v282 = *(_QWORD *)(v30 + 64);
      v283 = *(const char **)(v30 + 72);
      v284 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v285 = v282 - 1;
      if ( v285 >= 0 )
      {
        v286 = v281;
        do
        {
          v287 = _mm_loadu_si128(v284);
          v286 += 16;
          ++v284;
          *(__m128i *)(v286 - 16) = v287;
          v194 = v285-- == 0;
        }
        while ( !v194 );
        v284 = *(const __m128i **)(v30 + 56);
      }
      v328 = (__int64)v283;
      v326.m128i_i64[0] = v281;
      qfree(v284, v283);
      v93 = v326.m128i_i64[0];
      v288 = v328;
      v94 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v288;
    }
    v97 = v93 + 16 * v94;
    *(_DWORD *)v97 = v69;
    *(_QWORD *)(v97 + 4) = 0x100000001LL;
    *(_DWORD *)(v97 + 12) = 1;
  }
  v98 = *(_QWORD *)(v30 + 16);
  ++*(_QWORD *)(v30 + 64);
  v99 = *(_QWORD *)(v30 + 8);
  if ( *(_QWORD *)(v30 + 24) < (unsigned __int64)(v98 + 1) )
  {
    v166 = qvector_reserve(v327, v99, v98 + 1, 8);
    *(_QWORD *)(v30 + 8) = v166;
    v99 = v166;
    v98 = *(_QWORD *)(v30 + 16);
  }
  *(_QWORD *)(v99 + 8 * v98) = v88;
  ++*(_QWORD *)(v30 + 16);
  v100 = operator new(0x88u);
  *(_OWORD *)(v100 + 64) = 0;
  *(_QWORD *)(v100 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v100 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v100 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v100 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v100 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v100 + 48) = 0;
  *(_QWORD *)(v100 + 56) = 0;
  *(_QWORD *)(v100 + 80) = 0;
  *(_QWORD *)v100 = &forms::label_t___vtable;
  *(_QWORD *)(v100 + 104) = 0;
  *(_OWORD *)(v100 + 88) = 0;
  *(_OWORD *)(v100 + 112) = 0;
  v101 = (_BYTE *)qvector_reserve(v100 + 104, 0, 2, 1);
  *(_QWORD *)(v100 + 104) = v101;
  *(_QWORD *)(v100 + 112) = 2;
  *v101 = 58;
  v102 = *(_QWORD *)(v100 + 104);
  v340.m128i_i32[0] = v69;
  *(_BYTE *)(v102 + 1) = 0;
  v103 = *(_QWORD *)(v30 + 56);
  v340.m128i_i64[1] = 0x100000001LL;
  v104 = *(_QWORD *)(v30 + 64);
  *(_BYTE *)(v100 + 128) = 0;
  v105 = *(_QWORD *)(v30 + 72);
  *(_DWORD *)(v100 + 32) = 1;
  v106 = v104 + 1;
  v340.m128i_i32[1] = 2;
  if ( (unsigned __int64)&v340 < v103 || (unsigned __int64)&v340 >= v103 + 16 * v105 )
  {
    if ( v105 < v106 )
    {
      v326.m128i_i64[0] = v105;
      v225 = qvector_reserve(v326.m128i_i64[1], 0, v104 + 1, 16);
      v226 = *(_QWORD *)(v30 + 64);
      v227 = *(const char **)(v30 + 72);
      v228 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v229 = v226 - 1;
      if ( v229 >= 0 )
      {
        v230 = v225;
        do
        {
          v231 = _mm_loadu_si128(v228);
          v230 += 16;
          ++v228;
          *(__m128i *)(v230 - 16) = v231;
          v194 = v229-- == 0;
        }
        while ( !v194 );
        v228 = *(const __m128i **)(v30 + 56);
      }
      v328 = (__int64)v227;
      v326.m128i_i64[0] = v225;
      qfree(v228, v227);
      v103 = v326.m128i_i64[0];
      v232 = v328;
      v104 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v232;
    }
    *(__m128i *)(v103 + 16 * v104) = _mm_load_si128(&v340);
  }
  else
  {
    if ( v105 < v106 )
    {
      v326.m128i_i64[0] = v105;
      v267 = qvector_reserve(v326.m128i_i64[1], 0, v104 + 1, 16);
      v268 = *(_QWORD *)(v30 + 64);
      v269 = *(const char **)(v30 + 72);
      v270 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v271 = v268 - 1;
      if ( v271 >= 0 )
      {
        v272 = v267;
        do
        {
          v273 = _mm_loadu_si128(v270);
          v272 += 16;
          ++v270;
          *(__m128i *)(v272 - 16) = v273;
          v194 = v271-- == 0;
        }
        while ( !v194 );
        v270 = *(const __m128i **)(v30 + 56);
      }
      v328 = (__int64)v269;
      v326.m128i_i64[0] = v267;
      qfree(v270, v269);
      v103 = v326.m128i_i64[0];
      v274 = v328;
      v104 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v274;
    }
    v107 = v103 + 16 * v104;
    *(_DWORD *)v107 = v69;
    *(_QWORD *)(v107 + 4) = 0x100000002LL;
    *(_DWORD *)(v107 + 12) = 1;
  }
  v108 = *(_QWORD *)(v30 + 16);
  ++*(_QWORD *)(v30 + 64);
  v109 = *(_QWORD *)(v30 + 8);
  if ( *(_QWORD *)(v30 + 24) < (unsigned __int64)(v108 + 1) )
  {
    v165 = qvector_reserve(v327, v109, v108 + 1, 8);
    *(_QWORD *)(v30 + 8) = v165;
    v109 = v165;
    v108 = *(_QWORD *)(v30 + 16);
  }
  *(_QWORD *)(v109 + 8 * v108) = v100;
  ++*(_QWORD *)(v30 + 16);
  v110 = operator new(0xB0u);
  *(_OWORD *)(v110 + 64) = 0;
  *(_QWORD *)(v110 + 8) = 0x400000004LL;
  *(_QWORD *)(v110 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v110 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v110 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v110 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v110 = &forms::number_t___vtable;
  *(_QWORD *)(v110 + 136) = a1 + 320;
  v111 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(v110 + 48) = 0;
  *(_QWORD *)(v110 + 56) = 0;
  *(_QWORD *)(v110 + 80) = 0;
  *(_QWORD *)(v110 + 104) = 0;
  *(_QWORD *)(v110 + 128) = 0;
  *(_QWORD *)(v110 + 144) = 0;
  *(_BYTE *)(v110 + 152) = 1;
  *(_DWORD *)(v110 + 168) = 0;
  *(_QWORD *)(v110 + 160) = v111;
  *(_OWORD *)(v110 + 88) = 0;
  *(_OWORD *)(v110 + 112) = 0;
  v112 = qvector_reserve(v110 + 104, 0, 20, 1);
  v113 = _mm_load_si128((const __m128i *)&xmmword_5DDF00);
  v114 = (unsigned __int64)v332;
  *(_QWORD *)(v110 + 104) = v112;
  *(_QWORD *)(v110 + 112) = 20;
  *(__m128i *)v112 = v113;
  *(_DWORD *)(v112 + 15) = 1953656688;
  *(_BYTE *)(*(_QWORD *)(v110 + 104) + 19LL) = 0;
  v115 = *(_QWORD *)(v30 + 56);
  v341.m128i_i64[1] = 0x100000001LL;
  v116 = *(_QWORD *)(v30 + 64);
  *(_DWORD *)(v110 + 168) |= 1u;
  v117 = *(_QWORD *)(v30 + 72);
  *(_DWORD *)(v110 + 16) = 12;
  v118 = v116 + 1;
  *(_DWORD *)(v110 + 24) = 12;
  *(_DWORD *)(v110 + 32) = 2;
  v341.m128i_i64[0] = v69 | 0x300000000LL;
  if ( v114 < v115 || v114 >= v115 + 16 * v117 )
  {
    if ( v117 < v118 )
    {
      v326.m128i_i64[0] = v117;
      v187 = qvector_reserve(v326.m128i_i64[1], 0, v116 + 1, 16);
      v188 = *(_QWORD *)(v30 + 64);
      v189 = *(const char **)(v30 + 72);
      v190 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v191 = v188 - 1;
      if ( v191 >= 0 )
      {
        v192 = v187;
        do
        {
          v193 = _mm_loadu_si128(v190);
          v192 += 16;
          ++v190;
          *(__m128i *)(v192 - 16) = v193;
          v194 = v191-- == 0;
        }
        while ( !v194 );
        v190 = *(const __m128i **)(v30 + 56);
      }
      v328 = (__int64)v189;
      v326.m128i_i64[0] = v187;
      qfree(v190, v189);
      v115 = v326.m128i_i64[0];
      v195 = v328;
      v116 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v195;
    }
    *(__m128i *)(v115 + 16 * v116) = _mm_load_si128(&v341);
  }
  else
  {
    if ( v117 < v118 )
    {
      v326.m128i_i64[0] = v117;
      v251 = qvector_reserve(v326.m128i_i64[1], 0, v116 + 1, 16);
      v252 = *(_QWORD *)(v30 + 64);
      v253 = *(const char **)(v30 + 72);
      v254 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v326.m128i_i64[0];
      v255 = v252 - 1;
      if ( v255 >= 0 )
      {
        v256 = v251;
        do
        {
          v257 = _mm_loadu_si128(v254);
          v256 += 16;
          ++v254;
          *(__m128i *)(v256 - 16) = v257;
          v194 = v255-- == 0;
        }
        while ( !v194 );
        v254 = *(const __m128i **)(v30 + 56);
      }
      v328 = (__int64)v253;
      v326.m128i_i64[0] = v251;
      qfree(v254, v253);
      v115 = v326.m128i_i64[0];
      v258 = v328;
      v116 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v326.m128i_i64[0];
      *(_QWORD *)(v30 + 72) = v258;
    }
    v119 = v115 + 16 * v116;
    *(_DWORD *)v119 = v69;
    *(_QWORD *)(v119 + 4) = 0x100000003LL;
    *(_DWORD *)(v119 + 12) = 1;
  }
  v120 = *(_QWORD *)(v30 + 16);
  ++*(_QWORD *)(v30 + 64);
  v121 = *(_QWORD *)(v30 + 8);
  if ( *(_QWORD *)(v30 + 24) < (unsigned __int64)(v120 + 1) )
  {
    v161 = qvector_reserve(v327, v121, v120 + 1, 8);
    *(_QWORD *)(v30 + 8) = v161;
    v121 = v161;
    v120 = *(_QWORD *)(v30 + 16);
  }
  *(_QWORD *)(v121 + 8 * v120) = v110;
  ++*(_QWORD *)(v30 + 16);
  v122 = operator new(0x88u);
  *(_OWORD *)(v122 + 64) = 0;
  *(_QWORD *)(v122 + 8) = 0x50000000ALL;
  *(_QWORD *)(v122 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v122 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v122 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v122 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v122 + 48) = 0;
  *(_QWORD *)(v122 + 56) = 0;
  *(_QWORD *)(v122 + 80) = 0;
  *(_QWORD *)v122 = &forms::push_button_t___vtable;
  *(_QWORD *)(v122 + 104) = 0;
  *(_OWORD *)(v122 + 88) = 0;
  *(_OWORD *)(v122 + 112) = 0;
  v123 = (_DWORD *)qvector_reserve(v122 + 104, 0, 8, 1);
  *(_QWORD *)(v122 + 104) = v123;
  *(_QWORD *)(v122 + 112) = 8;
  *v123 = 1852731203;
  *(_DWORD *)((char *)v123 + 3) = 1952671086;
  *(_BYTE *)(*(_QWORD *)(v122 + 104) + 7LL) = 0;
  v124 = *(_QWORD *)(v30 + 56);
  n_8.m128i_i64[0] = 0x100000001LL;
  v125 = *(_QWORD *)(v30 + 64);
  *(_DWORD *)(v122 + 128) = 0;
  v126 = *(_QWORD *)(v30 + 72);
  *(_DWORD *)(v122 + 32) = 1;
  v127 = v125 + 1;
  n = (char *)(v69 | 0x400000000LL);
  if ( (unsigned __int64)&n < v124 || (unsigned __int64)&n >= v124 + 16 * v126 )
  {
    if ( v126 < v127 )
    {
      v314 = v126;
      v196 = qvector_reserve(v326.m128i_i64[1], 0, v127, 16);
      v197 = *(_QWORD *)(v30 + 64);
      v198 = *(_QWORD *)(v30 + 72);
      v199 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v314;
      v200 = v197 - 1;
      if ( v200 >= 0 )
      {
        v201 = v196;
        do
        {
          v202 = _mm_loadu_si128(v199);
          v201 += 16;
          ++v199;
          *(__m128i *)(v201 - 16) = v202;
          v194 = v200-- == 0;
        }
        while ( !v194 );
        v199 = *(const __m128i **)(v30 + 56);
      }
      v315 = v196;
      qfree(v199, nullptr);
      v124 = v315;
      v125 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 72) = v198;
      *(_QWORD *)(v30 + 56) = v315;
    }
    *(__m128i *)(v124 + 16 * v125) = _mm_load_si128((const __m128i *)&n);
  }
  else
  {
    if ( v126 < v127 )
    {
      v318 = v126;
      v243 = qvector_reserve(v326.m128i_i64[1], 0, v127, 16);
      v244 = *(_QWORD *)(v30 + 64);
      v245 = *(const char **)(v30 + 72);
      v246 = *(const __m128i **)(v30 + 56);
      *(_QWORD *)(v30 + 72) = v318;
      v247 = v244 - 1;
      if ( v247 >= 0 )
      {
        v248 = v243;
        do
        {
          v249 = _mm_loadu_si128(v246);
          v248 += 16;
          ++v246;
          *(__m128i *)(v248 - 16) = v249;
          v194 = v247-- == 0;
        }
        while ( !v194 );
        v246 = *(const __m128i **)(v30 + 56);
      }
      v326.m128i_i64[0] = (__int64)v245;
      v319 = v243;
      qfree(v246, v245);
      v124 = v319;
      v250 = v326.m128i_i64[0];
      v125 = *(_QWORD *)(v30 + 64);
      *(_QWORD *)(v30 + 56) = v319;
      *(_QWORD *)(v30 + 72) = v250;
    }
    v128 = v124 + 16 * v125;
    *(_DWORD *)v128 = v69;
    *(_QWORD *)(v128 + 4) = 0x100000004LL;
    *(_DWORD *)(v128 + 12) = 1;
  }
  v129 = *(_QWORD *)(v30 + 16);
  ++*(_QWORD *)(v30 + 64);
  v130 = *(_QWORD *)(v30 + 8);
  if ( *(_QWORD *)(v30 + 24) < (unsigned __int64)(v129 + 1) )
  {
    v164 = qvector_reserve(v327, v130, v129 + 1, 8);
    *(_QWORD *)(v30 + 8) = v164;
    v130 = v164;
    v129 = *(_QWORD *)(v30 + 16);
  }
  *(_QWORD *)(v130 + 8 * v129) = v122;
  v131 = *(_QWORD *)(v28 + 16);
  ++*(_QWORD *)(v30 + 16);
  v132 = *(_QWORD *)(v28 + 8);
  if ( *(_QWORD *)(v28 + 24) < (unsigned __int64)(v131 + 1) )
  {
    v163 = qvector_reserve(v28 + 8, v132, v131 + 1, 8);
    *(_QWORD *)(v28 + 8) = v163;
    v132 = v163;
    v131 = *(_QWORD *)(v28 + 16);
  }
  *(_QWORD *)(v132 + 8 * v131) = v29;
  ++*(_QWORD *)(v28 + 16);
  v133 = operator new(0x88u);
  *(_OWORD *)(v133 + 64) = 0;
  *(_QWORD *)(v133 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v133 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v133 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v133 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v133 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v133 + 48) = 0;
  *(_QWORD *)(v133 + 56) = 0;
  *(_QWORD *)(v133 + 80) = 0;
  *(_QWORD *)v133 = &forms::label_t___vtable;
  *(_QWORD *)(v133 + 104) = 0;
  *(_OWORD *)(v133 + 88) = 0;
  *(_OWORD *)(v133 + 112) = 0;
  v134 = qvector_reserve(v133 + 104, 0, 19, 1);
  v135 = _mm_load_si128((const __m128i *)&xmmword_5DDF10);
  *(_QWORD *)(v133 + 104) = v134;
  *(_QWORD *)(v133 + 112) = 19;
  *(_WORD *)(v134 + 16) = 29541;
  *(__m128i *)v134 = v135;
  *(_BYTE *)(*(_QWORD *)(v133 + 104) + 18LL) = 0;
  v136 = *(_QWORD *)(v28 + 16);
  *(_BYTE *)(v133 + 128) = 0;
  v137 = *(_QWORD *)(v28 + 8);
  *(_DWORD *)(v133 + 32) = 1;
  if ( *(_QWORD *)(v28 + 24) < (unsigned __int64)(v136 + 1) )
  {
    v162 = qvector_reserve(v28 + 8, v137, v136 + 1, 8);
    *(_QWORD *)(v28 + 8) = v162;
    v137 = v162;
    v136 = *(_QWORD *)(v28 + 16);
  }
  *(_QWORD *)(v137 + 8 * v136) = v133;
  ++*(_QWORD *)(v28 + 16);
  v139 = operator new(0x80u);
  *(_QWORD *)(v139 + 8) = 0x600000008LL;
  *(_QWORD *)(v139 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v139 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v139 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v139 + 40) = 0xFFFFFFFF00000000LL;
  v140 = v329;
  *(_QWORD *)(v139 + 48) = 0;
  *(_QWORD *)(v139 + 56) = 0;
  *(_QWORD *)(v139 + 80) = 0;
  *(_QWORD *)v139 = &forms::embedded_chooser_t___vtable;
  *(_QWORD *)(v139 + 104) = v140;
  *(_QWORD *)(v139 + 112) = a1 + 328;
  *(_DWORD *)(v139 + 120) = 0;
  *(_OWORD *)(v139 + 64) = 0;
  *(_OWORD *)(v139 + 88) = 0;
  if ( (*(_BYTE *)(a1 + 364) & 2) == 0 )
  {
    if ( under_debugger )
      goto LABEL_213;
    interr(70107, v137, a1 + 328, v138, 0.0);
LABEL_211:
    if ( !under_debugger )
      interr(70107, v137, v147, v148, 0.0);
LABEL_213:
    BUG();
  }
  v141 = *(_QWORD *)(v28 + 16);
  v142 = *(_QWORD *)(v28 + 8);
  if ( *(_QWORD *)(v28 + 24) < (unsigned __int64)(v141 + 1) )
  {
    v186 = qvector_reserve(v28 + 8, v142, v141 + 1, 8);
    *(_QWORD *)(v28 + 8) = v186;
    v142 = v186;
    v141 = *(_QWORD *)(v28 + 16);
  }
  *(_QWORD *)(v142 + 8 * v141) = v139;
  ++*(_QWORD *)(v28 + 16);
  v143 = operator new(0x88u);
  *(_OWORD *)(v143 + 64) = 0;
  *(_QWORD *)(v143 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v143 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v143 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v143 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v143 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v143 + 48) = 0;
  *(_QWORD *)(v143 + 56) = 0;
  *(_QWORD *)(v143 + 80) = 0;
  *(_QWORD *)v143 = &forms::label_t___vtable;
  *(_QWORD *)(v143 + 104) = 0;
  *(_OWORD *)(v143 + 88) = 0;
  *(_OWORD *)(v143 + 112) = 0;
  v144 = qvector_reserve(v143 + 104, 0, 18, 1);
  v145 = _mm_load_si128((const __m128i *)&xmmword_5DDF20);
  *(_QWORD *)(v143 + 104) = v144;
  *(_QWORD *)(v143 + 112) = 18;
  *(_BYTE *)(v144 + 16) = 115;
  *(__m128i *)v144 = v145;
  *(_BYTE *)(*(_QWORD *)(v143 + 104) + 17LL) = 0;
  v146 = *(_QWORD *)(v28 + 16);
  *(_BYTE *)(v143 + 128) = 0;
  v137 = *(_QWORD *)(v28 + 8);
  *(_DWORD *)(v143 + 32) = 1;
  *(_DWORD *)(v143 + 12) = 7;
  if ( *(_QWORD *)(v28 + 24) < (unsigned __int64)(v146 + 1) )
  {
    v185 = qvector_reserve(v28 + 8, v137, v146 + 1, 8);
    *(_QWORD *)(v28 + 8) = v185;
    v137 = v185;
    v146 = *(_QWORD *)(v28 + 16);
  }
  *(_QWORD *)(v137 + 8 * v146) = v143;
  ++*(_QWORD *)(v28 + 16);
  v149 = operator new(0x80u);
  *(_QWORD *)(v149 + 8) = 0x800000008LL;
  *(_QWORD *)(v149 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v149 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v149 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v149 + 40) = 0xFFFFFFFF00000000LL;
  v150 = v330;
  *(_QWORD *)(v149 + 48) = 0;
  *(_QWORD *)(v149 + 56) = 0;
  *(_QWORD *)(v149 + 80) = 0;
  *(_QWORD *)v149 = &forms::embedded_chooser_t___vtable;
  *(_QWORD *)(v149 + 104) = v150;
  *(_QWORD *)(v149 + 112) = a1 + 600;
  *(_DWORD *)(v149 + 120) = 0;
  *(_OWORD *)(v149 + 64) = 0;
  *(_OWORD *)(v149 + 88) = 0;
  if ( (*(_BYTE *)(a1 + 636) & 2) == 0 )
    goto LABEL_211;
  v151 = *(_QWORD *)(v28 + 16);
  v152 = *(_QWORD *)(v28 + 8);
  if ( *(_QWORD *)(v28 + 24) < (unsigned __int64)(v151 + 1) )
  {
    v184 = qvector_reserve(v28 + 8, v152, v151 + 1, 8);
    *(_QWORD *)(v28 + 8) = v184;
    v152 = v184;
    v151 = *(_QWORD *)(v28 + 16);
  }
  *(_QWORD *)(v152 + 8 * v151) = v149;
  ++*(_QWORD *)(v28 + 16);
  return v344 - __readfsqword(0x28u);
}
