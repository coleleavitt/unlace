void __fastcall sub_667A20(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const char *v6; // r13
  unsigned __int64 v7; // rax
  unsigned int *v8; // r13
  unsigned __int64 v9; // rsi
  __m128i *v10; // rbp
  __int64 v11; // rax
  __m128i v12; // kr00_16
  __int16 v13; // ax
  int v14; // esi
  __int64 v15; // rdi
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  void *v19; // r13
  void *v20; // rdx
  void *v21; // r12
  unsigned __int8 *v22; // rdi
  void **v23; // r13
  void **v24; // r12
  void **v25; // rdi
  void **v26; // r13
  void **v27; // r12
  void **v28; // rdi
  __int64 *v29; // r12
  unsigned __int64 v30; // rax
  int v31; // eax
  _QWORD *v32; // rdi
  __int64 v33; // rax
  void *v34; // r13
  void *v35; // rdx
  void *v36; // r12
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128 v44; // xmm2
  void *v45; // rdx
  __int128 v46; // kr10_16
  __int128 v47; // kr20_16
  void **v48; // rcx
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __int64 *v51; // rdi
  void **v52; // rcx
  void **v53; // rdx
  __m128i v54; // xmm0
  __m128i v55; // xmm7
  __m128i v56; // xmm0
  __int64 v57; // rax
  void *v58; // rax
  __m128i v59; // xmm4
  bool v60; // zf
  __int64 v61; // rax
  __int16 v62; // ax
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __int64 v65; // r13
  __int64 v66; // rax
  __m128i *v67; // r12
  __int64 v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // rax
  __int64 m128i_i64; // rdi
  char *v72; // r13
  __int8 *v73; // r14
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rcx
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  __m128 v80; // xmm3
  void *v81; // rdx
  void **v82; // rcx
  __m128i v83; // xmm0
  __m128i v84; // xmm0
  void **v85; // rcx
  __m128i v86; // xmm0
  __m128i v87; // xmm4
  __m128i v88; // xmm0
  __int64 v89; // rax
  void *v90; // rax
  __m128i v91; // xmm5
  __int64 v92; // rax
  __m128i v93; // xmm0
  char v94; // al
  __m128i v95; // xmm0
  char v96; // al
  __m128i v97; // xmm0
  __int64 v98; // rax
  __int64 *v99; // r12
  void **v100; // r13
  __int64 *v101; // rdx
  __int64 *v102; // rdi
  __int64 v103; // rdx
  __m128i v104; // xmm0
  __int64 v105; // rdx
  __int64 v106; // rsi
  void **v107; // rcx
  char *v108; // rax
  _QWORD *v109; // rdx
  __int64 v110; // rax
  void **v111; // rcx
  _BYTE *v112; // rdi
  _QWORD *v113; // rcx
  __int64 v114; // rcx
  void (__fastcall ***v115)(_QWORD); // rdi
  __int64 v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rsi
  void **v119; // rcx
  char *v120; // rax
  _QWORD *v121; // rdx
  __int64 v122; // rax
  _BYTE *v123; // rdi
  _BYTE *v124; // rax
  void **v125; // rcx
  _BYTE *v126; // rdi
  _QWORD *v127; // rcx
  __int64 v128; // rcx
  void (__fastcall ***v129)(_QWORD); // rdi
  __int64 v130; // rdi
  __int64 v131; // rax
  unsigned __int64 v132; // rdi
  char *v133; // rdx
  char *v134; // r10
  unsigned int v135; // eax
  __int64 v136; // rdx
  unsigned __int64 v137; // rdi
  char *v138; // rdx
  char *v139; // r11
  unsigned int v140; // eax
  __int64 v141; // rdx
  __int64 *v142; // [rsp+8h] [rbp-8E0h]
  int v143; // [rsp+30h] [rbp-8B8h]
  void **v144; // [rsp+30h] [rbp-8B8h]
  _QWORD *v145; // [rsp+30h] [rbp-8B8h]
  __int64 v146; // [rsp+30h] [rbp-8B8h]
  __int64 v147; // [rsp+30h] [rbp-8B8h]
  void **v148; // [rsp+30h] [rbp-8B8h]
  _QWORD *v149; // [rsp+30h] [rbp-8B8h]
  __int64 v150; // [rsp+30h] [rbp-8B8h]
  __int64 v151; // [rsp+30h] [rbp-8B8h]
  const char *v152; // [rsp+60h] [rbp-888h]
  const char *v153; // [rsp+60h] [rbp-888h]
  unsigned __int64 v154; // [rsp+68h] [rbp-880h]
  unsigned __int64 v155; // [rsp+68h] [rbp-880h]
  bool v156; // [rsp+70h] [rbp-878h]
  void **v157; // [rsp+70h] [rbp-878h]
  void **v158; // [rsp+70h] [rbp-878h]
  char v159; // [rsp+7Fh] [rbp-869h]
  char v160; // [rsp+7Fh] [rbp-869h]
  __int64 v161; // [rsp+80h] [rbp-868h]
  __int64 v162; // [rsp+80h] [rbp-868h]
  unsigned __int64 v163; // [rsp+A0h] [rbp-848h]
  unsigned __int64 v164; // [rsp+A0h] [rbp-848h]
  void **v165; // [rsp+A8h] [rbp-840h]
  void **v166; // [rsp+A8h] [rbp-840h]
  void **v167; // [rsp+B8h] [rbp-830h]
  __m128i *v168; // [rsp+B8h] [rbp-830h]
  __int128 v169; // [rsp+B8h] [rbp-830h]
  void **v170; // [rsp+B8h] [rbp-830h]
  __m128i *v171; // [rsp+B8h] [rbp-830h]
  void **v172; // [rsp+B8h] [rbp-830h]
  void **v173; // [rsp+B8h] [rbp-830h]
  void **v174; // [rsp+B8h] [rbp-830h]
  void **v175; // [rsp+B8h] [rbp-830h]
  void **v176; // [rsp+C0h] [rbp-828h]
  _QWORD *v177; // [rsp+C8h] [rbp-820h]
  __int128 v178; // [rsp+C8h] [rbp-820h]
  void *v179; // [rsp+D8h] [rbp-810h]
  __int128 v180; // [rsp+D8h] [rbp-810h]
  void *v181; // [rsp+E0h] [rbp-808h]
  void *v182; // [rsp+E8h] [rbp-800h]
  void *v183; // [rsp+E8h] [rbp-800h]
  __m128i v184; // [rsp+F0h] [rbp-7F8h] BYREF
  __m128i v185; // [rsp+100h] [rbp-7E8h] BYREF
  __int64 v186; // [rsp+110h] [rbp-7D8h]
  void *v187; // [rsp+118h] [rbp-7D0h]
  void **v188; // [rsp+120h] [rbp-7C8h]
  void *v189; // [rsp+128h] [rbp-7C0h]
  void *v190; // [rsp+130h] [rbp-7B8h]
  void *v191; // [rsp+138h] [rbp-7B0h]
  void *v192; // [rsp+140h] [rbp-7A8h]
  _BYTE *v193; // [rsp+148h] [rbp-7A0h]
  _BYTE *v194; // [rsp+150h] [rbp-798h]
  _BYTE *v195; // [rsp+158h] [rbp-790h]
  unsigned __int8 **v196; // [rsp+160h] [rbp-788h]
  void **v197; // [rsp+168h] [rbp-780h]
  __int64 v198; // [rsp+170h] [rbp-778h] BYREF
  void *v199; // [rsp+178h] [rbp-770h]
  __int64 v200; // [rsp+180h] [rbp-768h]
  void *v201; // [rsp+190h] [rbp-758h] BYREF
  void **v202; // [rsp+198h] [rbp-750h]
  __int64 v203; // [rsp+1A0h] [rbp-748h]
  void *v204; // [rsp+1B0h] [rbp-738h] BYREF
  void **v205; // [rsp+1B8h] [rbp-730h]
  __int64 v206; // [rsp+1C0h] [rbp-728h]
  __int64 v207; // [rsp+1D0h] [rbp-718h] BYREF
  char v208; // [rsp+1E0h] [rbp-708h]
  __int64 v209[4]; // [rsp+1F0h] [rbp-6F8h] BYREF
  __int64 v210[4]; // [rsp+210h] [rbp-6D8h] BYREF
  __int64 v211[4]; // [rsp+230h] [rbp-6B8h] BYREF
  __int64 v212[4]; // [rsp+250h] [rbp-698h] BYREF
  __int64 v213[4]; // [rsp+270h] [rbp-678h] BYREF
  __int64 v214[4]; // [rsp+290h] [rbp-658h] BYREF
  __int64 v215; // [rsp+2B0h] [rbp-638h] BYREF
  char v216; // [rsp+2C0h] [rbp-628h]
  __int64 v217[4]; // [rsp+2D0h] [rbp-618h] BYREF
  __int64 v218[4]; // [rsp+2F0h] [rbp-5F8h] BYREF
  __int64 v219[4]; // [rsp+310h] [rbp-5D8h] BYREF
  __int64 v220[4]; // [rsp+330h] [rbp-5B8h] BYREF
  __int64 v221[4]; // [rsp+350h] [rbp-598h] BYREF
  __int64 v222[4]; // [rsp+370h] [rbp-578h] BYREF
  void *v223; // [rsp+390h] [rbp-558h] BYREF
  void *v224; // [rsp+398h] [rbp-550h]
  __int64 v225; // [rsp+3A0h] [rbp-548h] BYREF
  void *v226; // [rsp+3B0h] [rbp-538h] BYREF
  void *v227; // [rsp+3B8h] [rbp-530h]
  __int64 v228; // [rsp+3C0h] [rbp-528h] BYREF
  void *v229; // [rsp+3D0h] [rbp-518h]
  __int64 v230; // [rsp+3D8h] [rbp-510h]
  char v231[16]; // [rsp+3E0h] [rbp-508h] BYREF
  void *v232; // [rsp+3F0h] [rbp-4F8h]
  __int64 v233; // [rsp+3F8h] [rbp-4F0h]
  char v234[16]; // [rsp+400h] [rbp-4E8h] BYREF
  __int128 v235; // [rsp+410h] [rbp-4D8h] BYREF
  __int128 v236; // [rsp+420h] [rbp-4C8h]
  __int128 v237; // [rsp+430h] [rbp-4B8h]
  __int64 v238; // [rsp+440h] [rbp-4A8h]
  __int128 v239; // [rsp+450h] [rbp-498h] BYREF
  __int128 v240; // [rsp+460h] [rbp-488h]
  __int128 v241; // [rsp+470h] [rbp-478h]
  __int64 v242; // [rsp+480h] [rbp-468h]
  unsigned __int8 *v243[3]; // [rsp+490h] [rbp-458h] BYREF
  char v244; // [rsp+4A8h] [rbp-440h] BYREF
  __m128i v245; // [rsp+4C8h] [rbp-420h] BYREF
  __m128i v246; // [rsp+4D8h] [rbp-410h] BYREF
  __m128i v247; // [rsp+4E8h] [rbp-400h] BYREF
  __int16 v248; // [rsp+4F8h] [rbp-3F0h]
  char v249; // [rsp+4FAh] [rbp-3EEh]
  void *ptr[3]; // [rsp+500h] [rbp-3E8h] BYREF
  char v251; // [rsp+518h] [rbp-3D0h] BYREF
  __m128i v252; // [rsp+538h] [rbp-3B0h] BYREF
  __m128i v253; // [rsp+548h] [rbp-3A0h] BYREF
  __m128i v254; // [rsp+558h] [rbp-390h] BYREF
  __int16 v255; // [rsp+568h] [rbp-380h]
  char v256; // [rsp+56Ah] [rbp-37Eh]
  void *v257; // [rsp+570h] [rbp-378h] BYREF
  __m128i v258; // [rsp+578h] [rbp-370h]
  _BYTE v259[32]; // [rsp+588h] [rbp-360h] BYREF
  __m128i v260; // [rsp+5A8h] [rbp-340h] BYREF
  __m128i v261; // [rsp+5B8h] [rbp-330h] BYREF
  __m128i v262; // [rsp+5C8h] [rbp-320h] BYREF
  __int16 v263; // [rsp+5D8h] [rbp-310h]
  char v264; // [rsp+5DAh] [rbp-30Eh]
  void *v265; // [rsp+5E0h] [rbp-308h] BYREF
  __m128i v266; // [rsp+5E8h] [rbp-300h]
  _BYTE v267[32]; // [rsp+5F8h] [rbp-2F0h] BYREF
  __m128i v268; // [rsp+618h] [rbp-2D0h] BYREF
  __m128i v269; // [rsp+628h] [rbp-2C0h] BYREF
  __m128i v270; // [rsp+638h] [rbp-2B0h] BYREF
  __int16 v271; // [rsp+648h] [rbp-2A0h]
  char v272; // [rsp+64Ah] [rbp-29Eh]
  void *v273; // [rsp+650h] [rbp-298h] BYREF
  __m128i v274; // [rsp+658h] [rbp-290h]
  _BYTE v275[32]; // [rsp+668h] [rbp-280h] BYREF
  __m128i v276; // [rsp+688h] [rbp-260h] BYREF
  __m128i v277; // [rsp+698h] [rbp-250h] BYREF
  __m128i v278; // [rsp+6A8h] [rbp-240h] BYREF
  __int16 v279; // [rsp+6B8h] [rbp-230h]
  char v280; // [rsp+6BAh] [rbp-22Eh]
  void *v281; // [rsp+6C0h] [rbp-228h] BYREF
  __m128i v282; // [rsp+6C8h] [rbp-220h]
  _BYTE v283[32]; // [rsp+6D8h] [rbp-210h] BYREF
  __m128i v284; // [rsp+6F8h] [rbp-1F0h] BYREF
  __m128i v285; // [rsp+708h] [rbp-1E0h] BYREF
  __m128i v286; // [rsp+718h] [rbp-1D0h] BYREF
  __int16 v287; // [rsp+728h] [rbp-1C0h]
  char v288; // [rsp+72Ah] [rbp-1BEh]
  void *v289; // [rsp+730h] [rbp-1B8h] BYREF
  __m128i v290; // [rsp+738h] [rbp-1B0h]
  _BYTE v291[32]; // [rsp+748h] [rbp-1A0h] BYREF
  __m128i v292; // [rsp+768h] [rbp-180h] BYREF
  __m128i v293; // [rsp+778h] [rbp-170h] BYREF
  __m128i v294; // [rsp+788h] [rbp-160h] BYREF
  __int16 v295; // [rsp+798h] [rbp-150h]
  char v296; // [rsp+79Ah] [rbp-14Eh]
  void *v297; // [rsp+7A0h] [rbp-148h] BYREF
  __m128i v298; // [rsp+7A8h] [rbp-140h] BYREF
  _BYTE v299[32]; // [rsp+7B8h] [rbp-130h] BYREF
  __m128i v300; // [rsp+7D8h] [rbp-110h] BYREF
  __m128i v301; // [rsp+7E8h] [rbp-100h] BYREF
  __m128i v302; // [rsp+7F8h] [rbp-F0h] BYREF
  __int16 v303; // [rsp+808h] [rbp-E0h]
  char v304; // [rsp+80Ah] [rbp-DEh]
  void *v305; // [rsp+810h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+818h] [rbp-D0h]
  _BYTE v307[192]; // [rsp+828h] [rbp-C0h] BYREF

  if ( !a2 )
    return;
  v2 = a2;
LABEL_3:
  v4 = *(_QWORD *)(v2 + 40);
  v5 = 0;
  v6 = &byte_3B9466E;
  if ( (v4 & 7) == 0 )
  {
    v7 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v5 = v7;
    if ( v7 )
    {
      v8 = *(unsigned int **)(v7 + 16);
      v5 = *v8;
      v6 = (const char *)(v8 + 4);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v305 = v307;
  sub_11240B0(v2, &v305);
  sub_CAE550(&v198, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(v2 + 24), 1);
  v9 = v2;
  v10 = (__m128i *)sub_6B37C0(*a1);
  if ( v10
    || (*(_BYTE *)(v2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v37 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (v9 = v37) != 0)
    && (v38 = *(_BYTE *)(v37 + 74), (v38 & 4) != 0)
    && (v38 & 1) != 0
    && (v10 = (__m128i *)sub_6B37C0(*a1)) != nullptr
    || (v9 = v2, (v10 = (__m128i *)sub_6F4910(*a1, v2, 0)) != nullptr) )
  {
    v11 = sub_6BB140(*a1, v9);
    sub_AA92F0(&v297, v10, *(_QWORD *)(*a1 + 2152LL), v11);
    v10 = (__m128i *)v297;
    v12 = v298;
  }
  else
  {
    v12 = 0u;
  }
  sub_FD8000(&v201, v2);
  sub_FCD270(&v204, v2);
  v297 = *(void **)(v2 + 80);
  sub_C87500(&v223, &v297);
  v297 = *(void **)(v2 + 88);
  sub_C87500(&v226, &v297);
  v13 = *(_WORD *)(v2 + 72);
  v156 = 0;
  v14 = *(_DWORD *)(v2 + 24);
  v15 = *(_QWORD *)(*a1 + 2152LL);
  v143 = v13 & 1;
  v142 = (__int64 *)a1[1];
  if ( (v13 & 0x4000) == 0 )
  {
    if ( v14 )
    {
      v31 = sub_CAE830(v15);
      v156 = v31 != 3 && v31 != 0;
    }
    v160 = *(_BYTE *)(v2 + 76) & 3;
    sub_766420(v243, v2);
    v32 = (_QWORD *)(*(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
      v32 = (_QWORD *)*v32;
    if ( v32 && (v33 = sub_79A2E0(v32)) != 0 && (*(_BYTE *)(v33 + 28) & 0x7F) != 0 )
    {
      sub_63E460((__int64)&v235, (__int64)a1, v33);
    }
    else
    {
      v238 = 0;
      v235 = 0;
      v236 = 0;
      v237 = 0;
    }
    v153 = v6;
    v155 = v5;
    v297 = (void *)sub_FC8E80(v142, v305, si128.m128i_i64[0]);
    v34 = v297;
    v36 = v35;
    v298 = (__m128i)(unsigned __int64)v35;
    sub_64F120((__int64)&v215, (__int64)(v142 + 20), (__m128i *)&v297, &v298.m128i_i64[1]);
    v162 = v215;
    if ( v298.m128i_i64[1] )
      (**(void (__fastcall ***)(__int64))v298.m128i_i64[1])(v298.m128i_i64[1]);
    if ( v216 )
    {
      v75 = *v142;
      v142[10] += 416;
      v76 = (v75 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v142[1] >= v76 + 416 && v75 )
        *v142 = v76 + 416;
      else
        v76 = sub_63DCB0((__int64)v142, 416, 4);
      v164 = v76;
      v189 = v226;
      v190 = v227;
      v191 = v223;
      v192 = v224;
      sub_644390((__int64)v217, (__int64 *)&v204);
      sub_644390((__int64)v218, (__int64 *)&v201);
      v77 = v164;
      v195 = v283;
      v281 = v283;
      v282 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( v243[1] )
      {
        sub_63DE60((__int64)&v281, v243);
        v77 = v164;
      }
      v166 = (void **)v77;
      v78 = _mm_loadu_si128(&v245);
      v287 = v248;
      v284 = v78;
      v79 = _mm_loadu_si128(&v246);
      v288 = v249;
      v285 = v79;
      v286 = _mm_loadu_si128(&v247);
      v186 = sub_FC8E80(v142, v153, v155);
      v80 = _mm_loadh_ps((const double *)&v198);
      v187 = v81;
      v169 = v235;
      v185 = (__m128i)v80;
      v178 = v236;
      v180 = v237;
      v183 = v199;
      v184.m128i_i64[0] = v200;
      sub_644390((__int64)v220, v217);
      sub_644390((__int64)v219, v218);
      v196 = (unsigned __int8 **)&v289;
      v82 = v166;
      v193 = v291;
      v289 = v291;
      v290 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( v282.m128i_i64[0] )
      {
        sub_63DE60((__int64)v196, (unsigned __int8 **)&v281);
        v82 = v166;
      }
      v188 = v82;
      v83 = _mm_loadu_si128(&v284);
      v295 = v287;
      v292 = v83;
      v84 = _mm_loadu_si128(&v285);
      v296 = v288;
      v232 = v234;
      v293 = v84;
      v294 = _mm_loadu_si128(&v286);
      strcpy(v234, "public");
      v233 = 6;
      sub_644390((__int64)v222, v220);
      v51 = v221;
      sub_644390((__int64)v221, v219);
      v194 = v299;
      v85 = v188;
      v297 = v299;
      v298 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( v290.m128i_i64[0] )
      {
        v51 = (__int64 *)&v297;
        sub_63DE60((__int64)&v297, v196);
        v85 = v188;
      }
      v86 = _mm_loadu_si128(&v292);
      v87 = _mm_load_si128(&v185);
      v303 = v295;
      v300 = v86;
      v88 = _mm_loadu_si128(&v293);
      v304 = v296;
      v301 = v88;
      v302 = _mm_loadu_si128(&v294);
      *v85 = &off_49F4B08;
      v89 = v186;
      v85[1] = v34;
      v85[3] = (void *)v89;
      v90 = v187;
      v85[2] = v36;
      v85[4] = v90;
      *(__m128i *)(v85 + 11) = v87;
      *(_OWORD *)(v85 + 5) = v169;
      *(_OWORD *)(v85 + 7) = v178;
      *(_OWORD *)(v85 + 9) = v180;
      v91 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      v85[13] = v183;
      v92 = v184.m128i_i64[0];
      *((__m128i *)v85 + 8) = v91;
      v85[14] = (void *)v92;
      v85[15] = v85 + 18;
      if ( v298.m128i_i64[0] )
      {
        v51 = (__int64 *)(v85 + 15);
        v174 = v85;
        sub_63DE60((__int64)(v85 + 15), (unsigned __int8 **)&v297);
        v85 = v174;
      }
      v93 = _mm_loadu_si128(&v300);
      *((_WORD *)v85 + 112) = v303;
      v94 = v304;
      *((__m128i *)v85 + 11) = v93;
      v95 = _mm_loadu_si128(&v301);
      *((_BYTE *)v85 + 226) = v94;
      v96 = *((_BYTE *)v85 + 232);
      *((__m128i *)v85 + 12) = v95;
      v97 = _mm_loadu_si128(&v302);
      v85[32] = nullptr;
      *((__m128i *)v85 + 13) = v97;
      *((_BYTE *)v85 + 232) = v96 & 0xC0 | 0x11;
      *((_OWORD *)v85 + 15) = 0;
      v65 = v12.m128i_i64[0] - (_QWORD)v10;
      if ( (__m128i *)v12.m128i_i64[0] == v10 )
      {
        v99 = nullptr;
      }
      else
      {
        if ( (unsigned __int64)v65 > 0x7FFFFFFFFFFFFFD0LL )
          goto LABEL_167;
        v170 = v85;
        v98 = operator new(v12.m128i_i64[0] - (_QWORD)v10);
        v85 = v170;
        v99 = (__int64 *)v98;
      }
      v85[32] = (char *)v99 + v65;
      *((__m128i *)v85 + 15) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v99, (__m128i)(unsigned __int64)v99);
      if ( (__m128i *)v12.m128i_i64[0] != v10 )
      {
        v171 = v10;
        v100 = v85;
        do
        {
          v101 = v99 + 2;
          v102 = v99;
          v10 += 5;
          v99 += 10;
          *(v99 - 10) = (__int64)v101;
          sub_63E170(v102, (_BYTE *)v10[-5].m128i_i64[0], v10[-5].m128i_i64[0] + v10[-5].m128i_i64[1]);
          v103 = v10[-2].m128i_i64[0];
          *((__m128i *)v99 - 3) = _mm_loadu_si128(v10 - 3);
          v104 = _mm_loadu_si128((__m128i *)((char *)v10 - 24));
          *(v99 - 4) = v103;
          v105 = v10[-1].m128i_i64[1];
          *(__m128i *)(v99 - 3) = v104;
          *(v99 - 1) = v105;
        }
        while ( (__m128i *)v12.m128i_i64[0] != v10 );
        v100[31] = v99;
        v10 = v171;
        v85 = v100;
      }
      v172 = v85;
      sub_644390((__int64)(v85 + 33), v221);
      sub_644390((__int64)(v172 + 36), v222);
      v106 = (__int64)v234;
      v107 = v172;
      *((_BYTE *)v172 + 312) = v156;
      v108 = (char *)v232;
      v109 = v172 + 42;
      v172[40] = v172 + 42;
      if ( v108 == v234 )
      {
        v110 = v233;
        v106 = v233 + 1;
        if ( (unsigned int)(v233 + 1) >= 8 )
        {
          *v109 = *(_QWORD *)v234;
          *(_QWORD *)((char *)v109 + (unsigned int)v106 - 8) = *(_QWORD *)&v234[(unsigned int)v106 - 8];
          v137 = (unsigned __int64)(v172 + 43) & 0xFFFFFFFFFFFFFFF8LL;
          v138 = (char *)v109 - v137;
          v139 = (char *)(v234 - v138);
          v106 = ((_DWORD)v138 + (_DWORD)v106) & 0xFFFFFFF8;
          if ( (unsigned int)v106 >= 8 )
          {
            v106 = (unsigned int)v106 & 0xFFFFFFF8;
            v140 = 0;
            do
            {
              v141 = v140;
              v140 += 8;
              *(_QWORD *)(v137 + v141) = *(_QWORD *)&v139[v141];
            }
            while ( v140 < (unsigned int)v106 );
          }
          v110 = v233;
        }
        else if ( (v106 & 4) != 0 )
        {
          v106 = (unsigned int)v106;
          *(_DWORD *)v109 = *(_DWORD *)v234;
          *(_DWORD *)((char *)v109 + (unsigned int)v106 - 4) = *(_DWORD *)&v234[(unsigned int)v106 - 4];
          v110 = v233;
        }
        else if ( (_DWORD)v233 != -1 )
        {
          *(_BYTE *)v109 = v234[0];
          v110 = v233;
          if ( (v106 & 2) != 0 )
          {
            v106 = (unsigned int)v106;
            *(_WORD *)((char *)v109 + (unsigned int)v106 - 2) = *(_WORD *)&v234[(unsigned int)v106 - 2];
            v110 = v233;
          }
        }
      }
      else
      {
        v172[40] = v108;
        v172[42] = *(void **)v234;
        v110 = v233;
      }
      v172[41] = (void *)v110;
      v172[45] = nullptr;
      v232 = v234;
      v233 = 0;
      v172[44] = (void *)0x2200000022LL;
      v234[0] = 0;
      if ( v297 != v194 )
      {
        free(v297);
        v107 = v172;
      }
      v157 = v107;
      sub_6441A0(v221);
      sub_6441A0(v222);
      v111 = v157;
      if ( v232 != v234 )
      {
        v106 = *(_QWORD *)v234 + 1LL;
        operator delete(v232, *(_QWORD *)v234 + 1LL);
        v111 = v157;
      }
      *v111 = &off_49F4C98;
      v112 = v289;
      *((_BYTE *)v111 + 408) = v160 == 2;
      *((_DWORD *)v111 + 92) = v143;
      v111[47] = v191;
      v111[48] = v192;
      v111[49] = v189;
      v111[50] = v190;
      if ( v112 != v193 )
      {
        v144 = v111;
        free(v112);
        v111 = v144;
      }
      v145 = v111;
      sub_6441A0(v219);
      sub_6441A0(v220);
      v113 = v145;
      *v145 = &off_49931F8;
      if ( v281 != v195 )
      {
        free(v281);
        v113 = v145;
      }
      v146 = (__int64)v113;
      sub_6441A0(v218);
      sub_6441A0(v217);
      v114 = v146;
      v115 = *(void (__fastcall ****)(_QWORD))(v162 + 16);
      *(_QWORD *)(v162 + 16) = v146;
      if ( v115 )
      {
        (**v115)(v115);
        v114 = v146;
      }
      v116 = *(_QWORD *)(v114 + 88);
      if ( v116
        && (unsigned int)(*(_DWORD *)(v116 + 356) - 2) <= 0x13
        && (v147 = v114, v117 = sub_FC8C50(v116, v106), v114 = v147, v117) )
      {
        sub_FC8D50(v117, v147);
      }
      else
      {
        sub_64B900((__int64)(v142 + 23), v114);
      }
    }
    v22 = v243[0];
    if ( (char *)v243[0] != &v244 )
      goto LABEL_21;
    goto LABEL_22;
  }
  if ( v14 )
  {
    v16 = sub_CAE830(v15);
    v156 = v16 != 3 && v16 != 0;
  }
  v159 = *(_BYTE *)(v2 + 76) & 3;
  sub_766420(ptr, v2);
  v17 = (_QWORD *)(*(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
    v17 = (_QWORD *)*v17;
  if ( v17 && (v18 = sub_79A2E0(v17)) != 0 && (*(_BYTE *)(v18 + 28) & 0x7F) != 0 )
  {
    sub_63E460((__int64)&v239, (__int64)a1, v18);
  }
  else
  {
    v242 = 0;
    v239 = 0;
    v240 = 0;
    v241 = 0;
  }
  v152 = v6;
  v154 = v5;
  v297 = (void *)sub_FC8E80(v142, v305, si128.m128i_i64[0]);
  v19 = v297;
  v21 = v20;
  v298 = (__m128i)(unsigned __int64)v20;
  sub_64F120((__int64)&v207, (__int64)(v142 + 20), (__m128i *)&v297, &v298.m128i_i64[1]);
  v161 = v207;
  if ( v298.m128i_i64[1] )
    (**(void (__fastcall ***)(__int64))v298.m128i_i64[1])(v298.m128i_i64[1]);
  if ( !v208 )
    goto LABEL_20;
  v39 = *v142;
  v142[10] += 416;
  v40 = (v39 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v142[1] >= v40 + 416 && v39 )
    *v142 = v40 + 416;
  else
    v40 = sub_63DCB0((__int64)v142, 416, 4);
  v163 = v40;
  v189 = v226;
  v190 = v227;
  v191 = v223;
  v192 = v224;
  sub_644390((__int64)v209, (__int64 *)&v204);
  sub_644390((__int64)v210, (__int64 *)&v201);
  v41 = v163;
  v193 = v259;
  v257 = v259;
  v258 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( ptr[1] )
  {
    sub_63DE60((__int64)&v257, (unsigned __int8 **)ptr);
    v41 = v163;
  }
  v165 = (void **)v41;
  v42 = _mm_loadu_si128(&v252);
  v263 = v255;
  v260 = v42;
  v43 = _mm_loadu_si128(&v253);
  v264 = v256;
  v261 = v43;
  v262 = _mm_loadu_si128(&v254);
  v186 = sub_FC8E80(v142, v152, v154);
  v44 = _mm_loadh_ps((const double *)&v198);
  v187 = v45;
  v182 = (void *)v239;
  v184 = (__m128i)v44;
  v179 = *((void **)&v239 + 1);
  v46 = v240;
  v47 = v241;
  v181 = v199;
  v185.m128i_i64[0] = v200;
  sub_644390((__int64)v212, v209);
  sub_644390((__int64)v211, v210);
  v196 = (unsigned __int8 **)&v265;
  v48 = v165;
  v194 = v267;
  v265 = v267;
  v266 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( v258.m128i_i64[0] )
  {
    sub_63DE60((__int64)v196, (unsigned __int8 **)&v257);
    v48 = v165;
  }
  v188 = v48;
  v49 = _mm_loadu_si128(&v260);
  v271 = v263;
  v268 = v49;
  v50 = _mm_loadu_si128(&v261);
  v272 = v264;
  v229 = v231;
  v269 = v50;
  v270 = _mm_loadu_si128(&v262);
  strcpy(v231, "public");
  v230 = 6;
  sub_644390((__int64)v214, v212);
  v51 = v213;
  sub_644390((__int64)v213, v211);
  v195 = v275;
  v52 = v188;
  v53 = &v273;
  v273 = v275;
  v274 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( v266.m128i_i64[0] )
  {
    v51 = (__int64 *)&v273;
    v197 = v188;
    v188 = &v273;
    sub_63DE60((__int64)&v273, v196);
    v52 = v197;
    v53 = v188;
  }
  v54 = _mm_loadu_si128(&v268);
  v55 = _mm_load_si128(&v184);
  v279 = v271;
  v276 = v54;
  v56 = _mm_loadu_si128(&v269);
  v280 = v272;
  v277 = v56;
  v278 = _mm_loadu_si128(&v270);
  *v52 = &off_49F4B08;
  v57 = v186;
  v52[1] = v19;
  v52[3] = (void *)v57;
  v58 = v187;
  v52[2] = v21;
  v52[4] = v58;
  *(__m128i *)(v52 + 11) = v55;
  v52[5] = v182;
  v52[6] = v179;
  *(_OWORD *)(v52 + 7) = v46;
  *(_OWORD *)(v52 + 9) = v47;
  v59 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v60 = v274.m128i_i64[0] == 0;
  v52[13] = v181;
  v61 = v185.m128i_i64[0];
  *((__m128i *)v52 + 8) = v59;
  v52[14] = (void *)v61;
  v52[15] = v52 + 18;
  if ( !v60 )
  {
    v51 = (__int64 *)(v52 + 15);
    v175 = v52;
    sub_63DE60((__int64)(v52 + 15), (unsigned __int8 **)v53);
    v52 = v175;
  }
  v62 = v279;
  v63 = _mm_loadu_si128(&v276);
  v52[32] = nullptr;
  *((_WORD *)v52 + 112) = v62;
  LOBYTE(v62) = v280;
  *((__m128i *)v52 + 11) = v63;
  v64 = _mm_loadu_si128(&v277);
  *((_BYTE *)v52 + 226) = v62;
  LOBYTE(v62) = *((_BYTE *)v52 + 232);
  *((__m128i *)v52 + 12) = v64;
  *((__m128i *)v52 + 13) = _mm_loadu_si128(&v278);
  *((_BYTE *)v52 + 232) = v62 & 0xC0 | 0x11;
  *((_OWORD *)v52 + 15) = 0;
  v65 = v12.m128i_i64[0] - (_QWORD)v10;
  if ( (__m128i *)v12.m128i_i64[0] == v10 )
  {
    v67 = nullptr;
    goto LABEL_89;
  }
  if ( (unsigned __int64)v65 > 0x7FFFFFFFFFFFFFD0LL )
  {
LABEL_167:
    if ( v65 < 0 )
      sub_555886(v51);
    std::__throw_bad_alloc();
  }
  v167 = v52;
  v66 = operator new(v12.m128i_i64[0] - (_QWORD)v10);
  v52 = v167;
  v67 = (__m128i *)v66;
LABEL_89:
  v52[32] = &v67->m128i_i8[v65];
  *((__m128i *)v52 + 15) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v67, (__m128i)(unsigned __int64)v67);
  if ( (__m128i *)v12.m128i_i64[0] == v10 )
    goto LABEL_134;
  v168 = v10;
  v176 = v52;
  v177 = a1;
  do
  {
    m128i_i64 = (__int64)v67[1].m128i_i64;
    v67->m128i_i64[0] = (__int64)v67[1].m128i_i64;
    v72 = (char *)v10->m128i_i64[1];
    v73 = (__int8 *)v10->m128i_i64[0];
    v297 = v72;
    if ( (unsigned __int64)v72 > 0xF )
    {
      v74 = std::string::_M_create();
      v67->m128i_i64[0] = v74;
      m128i_i64 = v74;
      v67[1].m128i_i64[0] = (__int64)v297;
LABEL_96:
      memcpy((void *)m128i_i64, v73, (size_t)v72);
      v72 = (char *)v297;
      m128i_i64 = v67->m128i_i64[0];
      goto LABEL_93;
    }
    if ( v72 != (_BYTE *)&dword_0 + 1 )
    {
      if ( !v72 )
        goto LABEL_93;
      goto LABEL_96;
    }
    v67[1].m128i_i8[0] = *v73;
LABEL_93:
    v67->m128i_i64[1] = (__int64)v72;
    v10 += 5;
    v67 += 5;
    v72[m128i_i64] = 0;
    v68 = v10[-2].m128i_i64[0];
    v67[-3] = _mm_loadu_si128(v10 - 3);
    v69 = _mm_loadu_si128((__m128i *)((char *)v10 - 24));
    v67[-2].m128i_i64[0] = v68;
    v70 = v10[-1].m128i_i64[1];
    *(__m128i *)((char *)v67 - 24) = v69;
    v67[-1].m128i_i64[1] = v70;
  }
  while ( (__m128i *)v12.m128i_i64[0] != v10 );
  v52 = v176;
  v10 = v168;
  a1 = v177;
  v176[31] = v67;
LABEL_134:
  v173 = v52;
  sub_644390((__int64)(v52 + 33), v213);
  sub_644390((__int64)(v173 + 36), v214);
  v118 = (__int64)v231;
  v119 = v173;
  *((_BYTE *)v173 + 312) = v156;
  v120 = (char *)v229;
  v121 = v173 + 42;
  v173[40] = v173 + 42;
  if ( v120 == v231 )
  {
    v122 = v230;
    v118 = v230 + 1;
    if ( (unsigned int)(v230 + 1) >= 8 )
    {
      *v121 = *(_QWORD *)v231;
      *(_QWORD *)((char *)v121 + (unsigned int)v118 - 8) = *(_QWORD *)&v231[(unsigned int)v118 - 8];
      v132 = (unsigned __int64)(v173 + 43) & 0xFFFFFFFFFFFFFFF8LL;
      v133 = (char *)v121 - v132;
      v134 = (char *)(v231 - v133);
      v118 = ((_DWORD)v133 + (_DWORD)v118) & 0xFFFFFFF8;
      if ( (unsigned int)v118 >= 8 )
      {
        v118 = (unsigned int)v118 & 0xFFFFFFF8;
        v135 = 0;
        do
        {
          v136 = v135;
          v135 += 8;
          *(_QWORD *)(v132 + v136) = *(_QWORD *)&v134[v136];
        }
        while ( v135 < (unsigned int)v118 );
      }
      v122 = v230;
    }
    else if ( (v118 & 4) != 0 )
    {
      v118 = (unsigned int)v118;
      *(_DWORD *)v121 = *(_DWORD *)v231;
      *(_DWORD *)((char *)v121 + (unsigned int)v118 - 4) = *(_DWORD *)&v231[(unsigned int)v118 - 4];
      v122 = v230;
    }
    else if ( (_DWORD)v230 != -1 )
    {
      *(_BYTE *)v121 = v231[0];
      v122 = v230;
      if ( (v118 & 2) != 0 )
      {
        v118 = (unsigned int)v118;
        *(_WORD *)((char *)v121 + (unsigned int)v118 - 2) = *(_WORD *)&v231[(unsigned int)v118 - 2];
        v122 = v230;
      }
    }
  }
  else
  {
    v173[40] = v120;
    v173[42] = *(void **)v231;
    v122 = v230;
  }
  v173[41] = (void *)v122;
  v123 = v273;
  v230 = 0;
  v229 = v231;
  v231[0] = 0;
  v173[44] = (void *)0x2300000023LL;
  v124 = v195;
  v173[45] = nullptr;
  if ( v123 != v124 )
  {
    free(v123);
    v119 = v173;
  }
  v158 = v119;
  sub_6441A0(v213);
  sub_6441A0(v214);
  v125 = v158;
  if ( v229 != v231 )
  {
    v118 = *(_QWORD *)v231 + 1LL;
    operator delete(v229, *(_QWORD *)v231 + 1LL);
    v125 = v158;
  }
  *v125 = &off_49F4C98;
  v126 = v265;
  *((_BYTE *)v125 + 408) = v159 == 2;
  *((_DWORD *)v125 + 92) = v143;
  v125[47] = v191;
  v125[48] = v192;
  v125[49] = v189;
  v125[50] = v190;
  if ( v126 != v194 )
  {
    v148 = v125;
    free(v126);
    v125 = v148;
  }
  v149 = v125;
  sub_6441A0(v211);
  sub_6441A0(v212);
  v127 = v149;
  *v149 = &off_4993220;
  if ( v257 != v193 )
  {
    free(v257);
    v127 = v149;
  }
  v150 = (__int64)v127;
  sub_6441A0(v210);
  sub_6441A0(v209);
  v128 = v150;
  v129 = *(void (__fastcall ****)(_QWORD))(v161 + 16);
  *(_QWORD *)(v161 + 16) = v150;
  if ( v129 )
  {
    (**v129)(v129);
    v128 = v150;
  }
  v130 = *(_QWORD *)(v128 + 88);
  if ( v130
    && (unsigned int)(*(_DWORD *)(v130 + 356) - 2) <= 0x13
    && (v151 = v128, v131 = sub_FC8C50(v130, v118), v128 = v151, v131) )
  {
    sub_FC8D50(v131, v151);
  }
  else
  {
    sub_64B900((__int64)(v142 + 23), v128);
  }
LABEL_20:
  v22 = (unsigned __int8 *)ptr[0];
  if ( ptr[0] != &v251 )
LABEL_21:
    free(v22);
LABEL_22:
  if ( v226 != &v228 )
    operator delete(v226, v228 + 1);
  if ( v223 != &v225 )
    operator delete(v223, v225 + 1);
  v23 = v205;
  v24 = (void **)v204;
  if ( v205 != v204 )
  {
    do
    {
      v25 = (void **)v24[5];
      if ( v25 != v24 + 7 )
        operator delete(v25, (unsigned __int64)v24[7] + 1);
      if ( *v24 != v24 + 2 )
        operator delete(*v24, (unsigned __int64)v24[2] + 1);
      v24 += 10;
    }
    while ( v23 != v24 );
    v24 = (void **)v204;
  }
  if ( v24 )
    operator delete(v24, v206 - (_QWORD)v24);
  v26 = v202;
  v27 = (void **)v201;
  if ( v202 != v201 )
  {
    do
    {
      v28 = (void **)v27[5];
      if ( v28 != v27 + 7 )
        operator delete(v28, (unsigned __int64)v27[7] + 1);
      if ( *v27 != v27 + 2 )
        operator delete(*v27, (unsigned __int64)v27[2] + 1);
      v27 += 10;
    }
    while ( v26 != v27 );
    v27 = (void **)v201;
  }
  if ( v27 )
    operator delete(v27, v203 - (_QWORD)v27);
  v29 = (__int64 *)v10;
  if ( (__m128i *)v12.m128i_i64[0] != v10 )
  {
    do
    {
      if ( (__int64 *)*v29 != v29 + 2 )
        operator delete((void *)*v29, v29[2] + 1);
      v29 += 10;
    }
    while ( (__int64 *)v12.m128i_i64[0] != v29 );
  }
  if ( v10 )
    operator delete(v10, v12.m128i_i64[1] - (_QWORD)v10);
  if ( v305 != v307 )
    free(v305);
  while ( 1 )
  {
    v30 = *(_QWORD *)(v2 + 8);
    v2 = v30 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v30 <= 7 )
      break;
    if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x49 )
      goto LABEL_3;
  }
}

