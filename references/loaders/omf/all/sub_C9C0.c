unsigned __int64 __fastcall sub_C9C0(__int64 a1, __int16 a2, const char *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *exception; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  __int64 eah; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 *v24; // r12
  const char *v25; // rdx
  __int64 v26; // rcx
  const char *v27; // rdx
  __int64 v28; // rcx
  double v29; // xmm0_8
  __int64 v30; // rsi
  __int64 v31; // rdx
  _BOOL8 v32; // rcx
  __int64 v33; // rdx
  _BOOL8 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int128 v39; // rax
  char v40; // al
  char v41; // dl
  int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  const char *v46; // r9
  __int64 v47; // r14
  int v48; // ebx
  unsigned int v49; // eax
  char v50; // al
  const char *v51; // r9
  const char *v52; // rbx
  _BOOL8 v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // ebx
  unsigned __int64 v56; // rax
  unsigned __int16 v57; // r13
  __int64 v58; // rdx
  _BOOL8 v59; // rcx
  __int64 v60; // rdx
  _BOOL8 v61; // rcx
  char v62; // r8
  __int64 v63; // r9
  __int64 v64; // r10
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rax
  unsigned __int8 v68; // bl
  int i; // ebx
  __int64 v70; // r15
  __int64 v71; // rdx
  _BOOL8 v72; // rcx
  unsigned __int64 k; // rbx
  __int64 v74; // rcx
  __int64 v75; // rcx
  unsigned int v76; // r13d
  int *v77; // rax
  int *v78; // rdi
  __int64 v79; // r8
  int v80; // eax
  __int64 v81; // r13
  char v82; // al
  __int64 v83; // r14
  __int64 v84; // r15
  __int64 v85; // rbx
  __int64 v86; // r10
  int v87; // r11d
  unsigned int v88; // r8d
  int v89; // r13d
  unsigned int v90; // r13d
  __int64 v91; // rcx
  char v92; // al
  __int64 v93; // rsi
  const char *v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned int v97; // ebx
  __int64 first_seg; // rax
  __int64 *v99; // r14
  char v100; // al
  char v101; // al
  __int64 v102; // rdi
  __int64 flags; // rax
  unsigned __int64 max_strlit_length; // rax
  __int64 v105; // r13
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r10
  const char *v110; // rsi
  __int64 v111; // r10
  __int64 v112; // rax
  __int64 v113; // rdx
  char v114; // al
  double v115; // xmm0_8
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rax
  double v119; // xmm0_8
  __int64 v120; // rbx
  unsigned int v121; // r14d
  __int64 v122; // rax
  __int64 that; // rax
  __int64 v125; // rbx
  char v126; // al
  int v127; // eax
  unsigned __int64 v128; // rsi
  int *v129; // rax
  int *v130; // rdi
  __int64 v131; // r8
  __int64 v132; // rdx
  __int64 v133; // r15
  unsigned int v134; // ebx
  __int64 v135; // rdx
  _BOOL8 v136; // rcx
  unsigned __int64 v137; // rcx
  __int64 v138; // rsi
  unsigned __int64 v139; // rax
  unsigned int v140; // edx
  unsigned __int64 v141; // rcx
  __int64 v142; // rbx
  __int64 v143; // r14
  __int64 v144; // rdi
  __int64 v145; // rbx
  __int64 v146; // r14
  __int64 *v147; // rax
  __int64 v148; // rdi
  char v149; // al
  unsigned __int8 v150; // di
  double v151; // xmm0_8
  __int64 v152; // rdx
  _BOOL8 v153; // rcx
  unsigned __int64 v154; // rdi
  int *v155; // rax
  int *v156; // r8
  __int64 v157; // rsi
  __int64 v158; // rdx
  __int64 v159; // rbx
  unsigned __int64 v160; // rax
  __int64 v161; // r9
  unsigned __int64 v162; // rsi
  __int64 v163; // rdx
  unsigned int v164; // esi
  unsigned int v165; // edx
  unsigned __int8 v166; // r15
  __int64 v167; // rdx
  _BOOL8 v168; // rcx
  unsigned __int16 v169; // ax
  char *v170; // rsi
  __int64 v171; // rdx
  _BOOL8 v172; // rcx
  __int64 v173; // rbx
  unsigned __int64 v174; // rcx
  __int64 v175; // rsi
  unsigned __int64 v176; // rax
  unsigned int v177; // edx
  unsigned __int64 v178; // rcx
  __int64 v179; // rdx
  _BOOL8 v180; // rcx
  unsigned __int16 v181; // ax
  size_t v182; // r13
  size_t v183; // rbx
  char *v184; // r15
  __int64 name_ea; // rbx
  __int64 v186; // rcx
  __int64 v187; // r8
  unsigned __int64 v188; // rax
  __int64 v189; // r9
  unsigned __int64 v190; // rdi
  _BOOL8 v191; // rdx
  __int64 v192; // rdx
  __int64 v193; // rdi
  unsigned int v194; // edx
  int *v195; // rax
  int *v196; // rdi
  __int64 v197; // r8
  __int64 v198; // rdx
  const char *v199; // rax
  char *v200; // r15
  char v201; // dl
  const char *v202; // rax
  char v203; // dl
  const char *v204; // rax
  char v205; // dl
  const char *v206; // rax
  char *v207; // rcx
  char v208; // dl
  __int64 v209; // rax
  unsigned __int64 v210; // r13
  const char *v211; // rax
  char v212; // dl
  __int64 v213; // r9
  char v214; // al
  __int64 v215; // rax
  char *v216; // rcx
  __int64 v217; // rax
  __int64 v218; // rbx
  char *v219; // r12
  __int64 v220; // rsi
  char *v221; // rcx
  const char *v222; // rcx
  __int64 v223; // rdx
  __int64 v224; // rsi
  char v225; // r8
  __int64 v226; // rax
  const char *v227; // r13
  char **v228; // r15
  const char *v229; // rsi
  __int64 v230; // rax
  __int64 v231; // rax
  __int64 v232; // rax
  unsigned __int8 v233; // al
  unsigned __int64 v234; // r13
  __int64 v235; // rdx
  _BOOL8 v236; // rcx
  unsigned __int16 v237; // ax
  const char *v238; // rdi
  __int64 v239; // r13
  size_t v240; // r14
  void *v241; // rax
  size_t v242; // r14
  void *v243; // rax
  unsigned __int8 v244; // al
  __int64 v245; // rax
  __int64 v246; // r15
  __int64 v247; // r13
  __int64 v248; // r14
  __int64 v249; // r12
  __int64 v250; // rax
  __m128i v251; // xmm0
  __int64 v252; // rdi
  bool v253; // cf
  __int128 v254; // kr20_16
  __int64 v255; // r13
  __int64 v256; // r14
  __int64 v257; // r12
  __int64 v258; // rax
  __m128i v259; // xmm0
  __m128i v260; // xmm0
  __int64 v261; // rax
  __int64 v262; // rdi
  __int128 v263; // kr30_16
  __int64 v264; // r13
  __int64 v265; // r14
  __int64 v266; // r14
  __int64 v267; // rax
  __m128i v268; // xmm0
  __m128i v269; // xmm0
  __int64 v270; // rax
  __int64 v271; // rdi
  __int64 v272; // rax
  __int64 v273; // r13
  __int64 v274; // r14
  __int64 v275; // r12
  __int64 v276; // r14
  __int64 v277; // r15
  __int64 v278; // rax
  __m128i v279; // xmm0
  __int64 v280; // rdi
  __int64 ph; // [rsp+8h] [rbp-1238h]
  __int64 v282; // [rsp+10h] [rbp-1230h]
  __int64 *v283; // [rsp+18h] [rbp-1228h]
  char v284; // [rsp+18h] [rbp-1228h]
  char v285; // [rsp+18h] [rbp-1228h]
  __int64 v286; // [rsp+20h] [rbp-1220h]
  __int64 v287; // [rsp+20h] [rbp-1220h]
  int v288; // [rsp+20h] [rbp-1220h]
  unsigned int v289; // [rsp+20h] [rbp-1220h]
  unsigned __int16 v290; // [rsp+28h] [rbp-1218h]
  __int64 v291; // [rsp+28h] [rbp-1218h]
  __int64 v292; // [rsp+28h] [rbp-1218h]
  __int64 v293; // [rsp+28h] [rbp-1218h]
  __int64 v294; // [rsp+28h] [rbp-1218h]
  __int64 v295; // [rsp+28h] [rbp-1218h]
  __int64 v296; // [rsp+28h] [rbp-1218h]
  __int64 v297; // [rsp+28h] [rbp-1218h]
  __int64 v298; // [rsp+28h] [rbp-1218h]
  __int64 v299; // [rsp+28h] [rbp-1218h]
  __int64 v300; // [rsp+28h] [rbp-1218h]
  __int64 v301; // [rsp+30h] [rbp-1210h]
  const char *v302; // [rsp+38h] [rbp-1208h]
  __int64 v303; // [rsp+38h] [rbp-1208h]
  __int64 v304; // [rsp+38h] [rbp-1208h]
  __int64 v305; // [rsp+38h] [rbp-1208h]
  char *s1; // [rsp+48h] [rbp-11F8h]
  char *s1a; // [rsp+48h] [rbp-11F8h]
  unsigned __int8 s1b; // [rsp+48h] [rbp-11F8h]
  char *s1c; // [rsp+48h] [rbp-11F8h]
  char *s1d; // [rsp+48h] [rbp-11F8h]
  int s1e; // [rsp+48h] [rbp-11F8h]
  int s1f; // [rsp+48h] [rbp-11F8h]
  __int64 v314; // [rsp+58h] [rbp-11E8h] BYREF
  __int64 v315; // [rsp+60h] [rbp-11E0h] BYREF
  __int64 v316; // [rsp+68h] [rbp-11D8h] BYREF
  __int64 v317; // [rsp+70h] [rbp-11D0h] BYREF
  __int64 v318; // [rsp+78h] [rbp-11C8h] BYREF
  __int128 v319; // [rsp+80h] [rbp-11C0h] BYREF
  void *j; // [rsp+90h] [rbp-11B0h] BYREF
  size_t v321[2]; // [rsp+98h] [rbp-11A8h]
  char v322; // [rsp+A8h] [rbp-1198h]
  __int64 v323; // [rsp+B0h] [rbp-1190h] BYREF
  __int128 v324; // [rsp+B8h] [rbp-1188h]
  const char *v325; // [rsp+C8h] [rbp-1178h] BYREF
  __int128 v326; // [rsp+D0h] [rbp-1170h]
  unsigned __int64 v327; // [rsp+E0h] [rbp-1160h]
  int v328; // [rsp+E8h] [rbp-1158h]
  char v329; // [rsp+ECh] [rbp-1154h]
  void *src; // [rsp+F0h] [rbp-1150h] BYREF
  size_t n[2]; // [rsp+F8h] [rbp-1148h]
  __int128 v332; // [rsp+108h] [rbp-1138h]
  __m128i v333[2]; // [rsp+118h] [rbp-1128h] BYREF
  __int128 v334; // [rsp+140h] [rbp-1100h] BYREF
  __int128 v335; // [rsp+150h] [rbp-10F0h]
  __int64 v336; // [rsp+160h] [rbp-10E0h]
  __int64 v337; // [rsp+168h] [rbp-10D8h]
  __int64 selector; // [rsp+170h] [rbp-10D0h]
  __int128 v339; // [rsp+178h] [rbp-10C8h]
  __int128 v340; // [rsp+188h] [rbp-10B8h]
  __int128 v341; // [rsp+198h] [rbp-10A8h]
  __int128 v342; // [rsp+1A8h] [rbp-1098h]
  __int128 v343; // [rsp+1B8h] [rbp-1088h]
  __int128 v344; // [rsp+1C8h] [rbp-1078h]
  __int128 v345; // [rsp+1D8h] [rbp-1068h]
  __int128 v346; // [rsp+1E8h] [rbp-1058h]
  unsigned __int64 v347; // [rsp+1F8h] [rbp-1048h]
  char v348[1024]; // [rsp+200h] [rbp-1040h] BYREF
  char v349[1023]; // [rsp+600h] [rbp-C40h] BYREF
  char v350; // [rsp+9FFh] [rbp-841h] BYREF
  char v351[2047]; // [rsp+A00h] [rbp-840h] BYREF
  char v352; // [rsp+11FFh] [rbp-41h] BYREF
  _BYTE v353[8]; // [rsp+1200h] [rbp-40h] BYREF
  unsigned __int64 v354; // [rsp+1208h] [rbp-38h]

  v354 = __readfsqword(0x28u);
  ph = get_ph();
  eah = get_eah();
  word_145B0 = a2;
  v301 = eah;
  set_processor_type("metapc", 1);
  v323 = 0;
  v325 = nullptr;
  v327 = 0;
  v328 = 0;
  v329 = 0;
  v324 = 0;
  v326 = 0;
  byte_145C0 = strcmp(a3, "Object Module Format (OMF/IBM)") != 0;
  if ( (word_145B0 & 0x10) != 0 )
    dword_14370 |= 0x10u;
  qword_14410 = -1;
  word_143AA = 0;
  word_143A8 = 0;
  v19 = xmmword_14578;
  qword_14400 = -1;
  qword_145B8 = -1;
  dword_145C8 = 0;
  qword_14518 = 1;
  dword_144F0 = 1;
  dword_144E0 = 1;
  qword_144D0 = 1;
  qword_144B8 = 1;
  dword_144B0 = 1;
  if ( (_QWORD)xmmword_14578 )
  {
    if ( (_QWORD)xmmword_14578 != 1 )
      *(_QWORD *)&xmmword_14578 = 1;
  }
  else
  {
    v224 = qword_14570;
    if ( !*((_QWORD *)&xmmword_14578 + 1) )
    {
      qword_14570 = qvector_reserve(&qword_14570, qword_14570, 1, 38);
      v224 = qword_14570;
      v19 = xmmword_14578;
    }
    memset((void *)(v224 + 38 * v19), 0, 38 * (1 - v19));
    *(_QWORD *)&xmmword_14578 = 1;
  }
  if ( (_QWORD)xmmword_14598 != 1 )
  {
    v322 = 0;
    j = nullptr;
    *(_OWORD *)v321 = 0;
    if ( (unsigned __int64)xmmword_14598 > 1 )
    {
      v145 = 1;
      v146 = xmmword_14598;
      do
      {
        v147 = (__int64 *)(qword_14590 + 32 * v145);
        v148 = *v147;
        if ( *v147 )
        {
          v147[1] = 0;
          qfree(v148);
        }
        ++v145;
      }
      while ( v146 != v145 );
      *(_QWORD *)&xmmword_14598 = 1;
    }
    else
    {
      v20 = qword_14590;
      if ( (unsigned __int64)&j < qword_14590
        || (unsigned __int64)&j >= qword_14590 + 32LL * *((_QWORD *)&xmmword_14598 + 1) )
      {
        if ( *((_QWORD *)&xmmword_14598 + 1) )
          goto LABEL_10;
        v245 = qvector_reserve(&qword_14590, 0, 1, 32);
        v246 = *((_QWORD *)&xmmword_14598 + 1);
        v20 = v245;
        *((_QWORD *)&xmmword_14598 + 1) = 0;
        v247 = qword_14590;
        v248 = xmmword_14598 - 1;
        if ( (__int64)xmmword_14598 - 1 >= 0 )
        {
          v249 = v245;
          do
          {
            v250 = *(_QWORD *)v247;
            v251 = _mm_loadu_si128((const __m128i *)(v247 + 8));
            *(_QWORD *)v247 = 0;
            *(_QWORD *)(v247 + 16) = 0;
            *(_QWORD *)v249 = v250;
            *(__m128i *)(v249 + 8) = v251;
            *(_BYTE *)(v249 + 24) = *(_BYTE *)(v247 + 24);
            v252 = *(_QWORD *)v247;
            if ( *(_QWORD *)v247 )
            {
              *(_QWORD *)(v247 + 8) = 0;
              qfree(v252);
            }
            v247 += 32;
            v249 += 32;
            v253 = v248-- == 0;
          }
          while ( !v253 );
          v247 = qword_14590;
        }
        qfree(v247);
        qword_14590 = v20;
        *((_QWORD *)&xmmword_14598 + 1) = v246;
        if ( !(_QWORD)xmmword_14598 )
        {
LABEL_10:
          *(_QWORD *)v20 = 0;
          *(_OWORD *)(v20 + 8) = 0;
          if ( v321[0] )
          {
            v242 = v321[0];
            v243 = (void *)qalloc_or_throw(v321[0]);
            *(_QWORD *)v20 = v243;
            *(_QWORD *)(v20 + 16) = v242;
            memcpy(v243, j, v242);
            *(_QWORD *)(v20 + 8) = v242;
          }
          *(_BYTE *)(v20 + 24) = v322;
        }
        goto LABEL_13;
      }
      if ( !*((_QWORD *)&xmmword_14598 + 1) )
      {
        v20 = qvector_reserve(&qword_14590, 0, 1, 32);
        v272 = *((_QWORD *)&xmmword_14598 + 1);
        *((_QWORD *)&xmmword_14598 + 1) = 0;
        v273 = qword_14590;
        v274 = v272;
        v275 = xmmword_14598 - 1;
        if ( (__int64)xmmword_14598 - 1 >= 0 )
        {
          v276 = v20;
          v277 = v272;
          do
          {
            v278 = *(_QWORD *)v273;
            v279 = _mm_loadu_si128((const __m128i *)(v273 + 8));
            *(_QWORD *)v273 = 0;
            *(_QWORD *)(v273 + 16) = 0;
            *(_QWORD *)v276 = v278;
            *(__m128i *)(v276 + 8) = v279;
            *(_BYTE *)(v276 + 24) = *(_BYTE *)(v273 + 24);
            v280 = *(_QWORD *)v273;
            if ( *(_QWORD *)v273 )
            {
              *(_QWORD *)(v273 + 8) = 0;
              qfree(v280);
            }
            v273 += 32;
            v276 += 32;
            v253 = v275-- == 0;
          }
          while ( !v253 );
          v273 = qword_14590;
          v274 = v277;
        }
        qfree(v273);
        qword_14590 = v20;
        *((_QWORD *)&xmmword_14598 + 1) = v274;
        if ( (_QWORD)xmmword_14598 )
        {
LABEL_13:
          *(_QWORD *)&xmmword_14598 = 1;
          goto LABEL_14;
        }
      }
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      *(_BYTE *)(v20 + 24) = 0;
      *(_QWORD *)&xmmword_14598 = 1;
    }
  }
LABEL_14:
  if ( (_QWORD)xmmword_14508 != 1 )
  {
    src = nullptr;
    memset(v333, 0, 19);
    v332 = 0;
    *(_OWORD *)n = 0;
    if ( (unsigned __int64)xmmword_14508 > 1 )
    {
      v142 = 59;
      v143 = 59 * xmmword_14508;
      do
      {
        v144 = *(_QWORD *)(v142 + qword_14500);
        if ( v144 )
        {
          *(_QWORD *)(v142 + qword_14500 + 8) = 0;
          qfree(v144);
        }
        v142 += 59;
      }
      while ( v143 != v142 );
      *(_QWORD *)&xmmword_14508 = 1;
      goto LABEL_22;
    }
    v21 = qword_14500;
    if ( (unsigned __int64)&src < qword_14500
      || (unsigned __int64)&src >= qword_14500 + 59LL * *((_QWORD *)&xmmword_14508 + 1) )
    {
      if ( *((_QWORD *)&xmmword_14508 + 1) )
        goto LABEL_18;
      v21 = qvector_reserve(&qword_14500, 0, 1, 59);
      v254 = xmmword_14508;
      *((_QWORD *)&xmmword_14508 + 1) = 0;
      v255 = qword_14500;
      v256 = *((_QWORD *)&v254 + 1);
      if ( (__int64)xmmword_14508 - 1 >= 0 )
      {
        v257 = v21;
        do
        {
          v258 = *(_QWORD *)v255;
          v259 = _mm_loadu_si128((const __m128i *)(v255 + 8));
          *(_QWORD *)v255 = 0;
          *(_QWORD *)(v255 + 16) = 0;
          *(_QWORD *)v257 = v258;
          *(__m128i *)(v257 + 8) = v259;
          v260 = _mm_loadu_si128((const __m128i *)(v255 + 40));
          *(_QWORD *)(v257 + 24) = *(_QWORD *)(v255 + 24);
          v261 = *(_QWORD *)(v255 + 32);
          *(__m128i *)(v257 + 40) = v260;
          *(_QWORD *)(v257 + 32) = v261;
          *(_BYTE *)(v257 + 56) = *(_BYTE *)(v255 + 56);
          *(_WORD *)(v257 + 57) = *(_WORD *)(v255 + 57);
          v262 = *(_QWORD *)v255;
          if ( *(_QWORD *)v255 )
          {
            *(_QWORD *)(v255 + 8) = 0;
            qfree(v262);
          }
          v257 += 59;
          v255 += 59;
        }
        while ( v257 != v21 + 59LL * (_QWORD)v254 );
        v255 = qword_14500;
        v256 = *((_QWORD *)&v254 + 1);
      }
      qfree(v255);
      qword_14500 = v21;
      *((_QWORD *)&xmmword_14508 + 1) = v256;
      if ( !(_QWORD)xmmword_14508 )
      {
LABEL_18:
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        if ( n[0] )
        {
          v240 = n[0];
          v241 = (void *)qalloc_or_throw(n[0]);
          *(_QWORD *)v21 = v241;
          *(_QWORD *)(v21 + 16) = v240;
          memcpy(v241, src, v240);
          *(_QWORD *)(v21 + 8) = v240;
        }
        v22 = _mm_loadu_si128(v333);
        *(_QWORD *)(v21 + 24) = v332;
        v23 = *((_QWORD *)&v332 + 1);
        *(__m128i *)(v21 + 40) = v22;
        *(_QWORD *)(v21 + 32) = v23;
        *(_BYTE *)(v21 + 56) = v333[1].m128i_i8[0];
        *(_WORD *)(v21 + 57) = *(__int16 *)((char *)v333[1].m128i_i16 + 1);
      }
    }
    else
    {
      if ( *((_QWORD *)&xmmword_14508 + 1) )
        goto LABEL_430;
      v21 = qvector_reserve(&qword_14500, 0, 1, 59);
      v263 = xmmword_14508;
      *((_QWORD *)&xmmword_14508 + 1) = 0;
      v264 = qword_14500;
      v265 = *((_QWORD *)&v263 + 1);
      if ( (__int64)xmmword_14508 - 1 >= 0 )
      {
        v266 = v21;
        do
        {
          v267 = *(_QWORD *)v264;
          v268 = _mm_loadu_si128((const __m128i *)(v264 + 8));
          *(_QWORD *)v264 = 0;
          *(_QWORD *)(v264 + 16) = 0;
          *(_QWORD *)v266 = v267;
          *(__m128i *)(v266 + 8) = v268;
          v269 = _mm_loadu_si128((const __m128i *)(v264 + 40));
          *(_QWORD *)(v266 + 24) = *(_QWORD *)(v264 + 24);
          v270 = *(_QWORD *)(v264 + 32);
          *(__m128i *)(v266 + 40) = v269;
          *(_QWORD *)(v266 + 32) = v270;
          *(_BYTE *)(v266 + 56) = *(_BYTE *)(v264 + 56);
          *(_WORD *)(v266 + 57) = *(_WORD *)(v264 + 57);
          v271 = *(_QWORD *)v264;
          if ( *(_QWORD *)v264 )
          {
            *(_QWORD *)(v264 + 8) = 0;
            qfree(v271);
          }
          v266 += 59;
          v264 += 59;
        }
        while ( v266 != v21 + 59LL * (_QWORD)v263 );
        v264 = qword_14500;
        v265 = *((_QWORD *)&v263 + 1);
      }
      qfree(v264);
      qword_14500 = v21;
      *((_QWORD *)&xmmword_14508 + 1) = v265;
      if ( !(_QWORD)xmmword_14508 )
      {
LABEL_430:
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 24) = 0;
        *(_QWORD *)(v21 + 32) = 0;
        *(_WORD *)(v21 + 56) = 0;
        *(_BYTE *)(v21 + 58) = 0;
        *(_QWORD *)&xmmword_14508 = 1;
        *(_OWORD *)(v21 + 40) = 0;
        goto LABEL_22;
      }
    }
    *(_QWORD *)&xmmword_14508 = 1;
  }
LABEL_22:
  v24 = &v323;
  netnode_check(&qword_14520, 0, 0, 1);
  netnode_check(&qword_144F8, 0, 0, 1);
  netnode_check(&qword_144E8, 0, 0, 1);
  netnode_check(&qword_144D8, 0, 0, 1);
  netnode_check(&qword_143B0, 0, 0, 1);
  netnode_check(&qword_144A8, 0, 0, 1);
  netnode_check(&qword_144C8, 0, 0, 1);
  netnode_check(&qword_144C0, 0, 0, 1);
  setinf_flag(3, 2, 0);
  setinf(19, "%s: the input file is bad (file position %08llX)", v25, v26);
  v29 = setinf(20, "%s: the input file is bad (file position %08llX)", v27, v28);
  qword_145D0 = getinf(19, v29);
  qword_145A8 = qlsize(a1);
  qlseek(a1, 0, 0);
LABEL_23:
  while ( 1 )
  {
    v30 = (__int64)&v323;
    if ( !(unsigned int)sub_5CE0(a1, (__int64)&v323, 4, &qword_145E0) )
      break;
    ++dword_145C4;
    switch ( BYTE2(v328) )
    {
      case 0x80:
      case 0x82:
        if ( !(_QWORD)v324 )
        {
          *(_QWORD *)&v326 = 0;
LABEL_66:
          v52 = ::src;
          goto LABEL_67;
        }
        v233 = sub_5EE0((__int64)&v323, 0);
        sub_73D0((__int64)&v323, (__int64)&v325, v233);
        if ( !(_QWORD)v326 )
          goto LABEL_66;
        v52 = v325;
LABEL_67:
        v29 = 0.0;
        src = nullptr;
        *(_OWORD *)n = 0;
        if ( !(unsigned __int8)is_valid_utf8(v52) && (unsigned __int8)idb_utf8(&src, v52, 0xFFFFFFFFLL, 0) && n[0] > 1 )
          v52 = (const char *)src;
        sub_4EF0(qword_145D0, 1u, (__int64)"Module name      : %s", v52);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        break;
      case 0x88:
        sub_B460(&v323);
        continue;
      case 0x8A:
      case 0x8B:
        goto LABEL_26;
      case 0x8C:
        sub_AA70((__int64)&v323, 0);
        continue;
      case 0x90:
      case 0x91:
        sub_7B30((__int64)&v323, 0, v31, v32);
        continue;
      case 0x92:
      case 0xB6:
      case 0xB7:
        sub_7B30((__int64)&v323, 1, v31, v32);
        continue;
      case 0x96:
        sub_82B0((__int64)&v323, 0);
        continue;
      case 0x98:
      case 0x99:
        s1b = sub_5EE0((__int64)&v323, -1);
        if ( dword_145C8 || (v328 & 0x10000) != 0 )
        {
          sub_5890((__int64)&v323, -1, 4);
          v54 = v323;
          v55 = *(_DWORD *)(v323 + v327);
          v56 = v327 + 4;
        }
        else
        {
          sub_5890((__int64)&v323, -1, 2);
          v54 = v323;
          v55 = *(unsigned __int16 *)(v323 + v327);
          v56 = v327 + 2;
        }
        v327 = v56;
        if ( !v55 && (s1b & 2) != 0 )
          v55 = (v328 & 0x10000) == 0 ? 0x10000 : -1;
        v57 = sub_6A10((__int64)&v323, -1, v54, v53);
        v290 = sub_6A10((__int64)&v323, -1, v58, v59);
        v286 = (unsigned __int16)sub_6A10((__int64)&v323, -1, v60, v61);
        if ( dword_145C8 )
        {
          s1b |= 1u;
LABEL_80:
          setinf_flag(3, 4, 0);
          setinf_flag(3, 2, 1);
          goto LABEL_81;
        }
        if ( (s1b & 1) != 0 )
          goto LABEL_80;
LABEL_81:
        v62 = s1b >> 5;
        if ( s1b >> 5 )
        {
          v225 = 0;
          v303 = v57;
          if ( v57 )
          {
            if ( v57 < (unsigned __int64)xmmword_14598 )
            {
              v226 = qword_14590 + 32LL * v57;
              if ( *(_QWORD *)(v226 + 8) )
              {
                v227 = *(const char **)v226;
                if ( **(_BYTE **)v226 )
                {
                  v228 = off_13CC0;
                  v229 = "$$SYMBOLS";
                  do
                  {
                    if ( !strcmp(v227, v229) )
                    {
                      v225 = 2;
                      goto LABEL_399;
                    }
                    v229 = v228[1];
                    ++v228;
                  }
                  while ( v229 );
                  v225 = 0;
                }
              }
            }
          }
LABEL_399:
          v284 = v225;
          sub_4680(xmmword_14578);
          v64 = v290;
          v62 = v284;
          v63 = 0;
        }
        else
        {
          v303 = 0;
          v63 = v55;
          v55 = v290;
          v64 = 0;
        }
        v65 = xmmword_14578;
        v66 = qword_14570;
        if ( *((_QWORD *)&xmmword_14578 + 1) < (unsigned __int64)(xmmword_14578 + 1) )
        {
          v282 = v63;
          v285 = v62;
          v300 = v64;
          v66 = qvector_reserve(&qword_14570, qword_14570, xmmword_14578 + 1, 38);
          v63 = v282;
          v62 = v285;
          qword_14570 = v66;
          v64 = v300;
          v65 = xmmword_14578;
        }
        v67 = v66 + 38 * v65;
        *(_QWORD *)v67 = v303;
        *(_DWORD *)(v67 + 32) = v55;
        *(_QWORD *)(v67 + 8) = v64;
        *(_QWORD *)(v67 + 16) = v286;
        *(_QWORD *)&xmmword_14578 = xmmword_14578 + 1;
        *(_QWORD *)(v67 + 24) = v63;
        *(_BYTE *)(v67 + 36) = s1b;
        *(_BYTE *)(v67 + 37) = v62;
        continue;
      case 0x9A:
        v68 = qword_14518;
        v315 = (unsigned __int16)sub_6A10((__int64)&v323, (__int64)&v323, v31, v32);
        netnode_supset(qword_14520, -1, &v315, 8, v68);
        if ( v327 >= (unsigned __int64)v324 )
        {
          v230 = 0;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            if ( (unsigned __int8)sub_5EE0((__int64)&v323, -1) != 0xFF )
            {
              sub_5080((__int64)"Bad input file: illegal GRPDEF record at %08llX", qword_145E0);
              goto LABEL_23;
            }
            v70 = (unsigned __int16)sub_6A10((__int64)&v323, -1, v71, v72);
            v316 = dword_144B0;
            netnode_supset(qword_144A8, v70, &v316, 8, 65);
            v317 = v70;
            netnode_supset(qword_14520, i, &v317, 8, (unsigned __int8)qword_14518);
            if ( v327 >= (unsigned __int64)v324 )
              break;
          }
          v230 = i + 1;
        }
        v314 = v230;
        netnode_supset(qword_14520, -2, &v314, 8, (unsigned __int8)qword_14518);
        ++qword_14518;
        ++dword_144B0;
        continue;
      case 0xB0:
        sub_7DC0(&v323, 0);
        continue;
      case 0xB4:
        sub_AA70((__int64)&v323, 1);
        continue;
      case 0xB8:
        sub_7DC0(&v323, 1);
        continue;
      case 0xBC:
        while ( v327 < (unsigned __int64)v324 )
        {
          v234 = (unsigned __int16)sub_6A10((__int64)&v323, v30, v31, v32);
          v237 = sub_6A10((__int64)&v323, v30, v235, v236);
          v238 = "";
          if ( (_WORD)v234 )
          {
            if ( v234 < (unsigned __int64)xmmword_14598 )
            {
              v238 = ::src;
              v239 = qword_14590 + 32 * v234;
              if ( *(_QWORD *)(v239 + 8) )
                v238 = *(const char **)v239;
            }
          }
          v30 = v237;
          sub_A940(v238, v237, 0);
        }
        continue;
      case 0xCA:
        sub_82B0((__int64)&v323, 1);
        continue;
      default:
        continue;
    }
  }
LABEL_26:
  if ( byte_145B2 )
  {
    v29 = 0.0;
    v319 = 0;
    LOBYTE(v319) = byte_145B2;
    set_compiler(&v319, 2, 0);
  }
  qlseek(a1, 0, 0);
  while ( (unsigned int)sub_5CE0(a1, (__int64)&v323, 2, &qword_145E0) )
  {
    if ( BYTE2(v328) > 0xA3u )
    {
      if ( (unsigned __int8)(BYTE2(v328) + 62) <= 1u )
        sub_ABA0((__int64)&v323, 1, (__int64)&src);
    }
    else if ( BYTE2(v328) > 0x9Fu )
    {
      sub_6F20((__int64)&v323, &v323, v33, v34);
    }
    else if ( BYTE2(v328) > 0x8Bu )
    {
      if ( (unsigned __int8)(BYTE2(v328) + 100) <= 1u )
        sub_6BE0((__int64)&v323, (void (__fastcall *)(__int64 *))sub_6210);
    }
    else if ( BYTE2(v328) > 0x89u )
    {
      break;
    }
  }
  *(_QWORD *)&v319 = -1;
  v35 = 1;
  for ( j = (void *)-1LL; v35 < qword_14518; qword_145B8 = selector )
  {
    while ( 1 )
    {
      v36 = netnode_altval(qword_14520, -1, (unsigned __int8)v35);
      s1 = "";
      if ( v36 )
      {
        if ( v36 < (unsigned __int64)xmmword_14598 )
        {
          v37 = qword_14590 + 32 * v36;
          s1 = (char *)::src;
          if ( *(_QWORD *)(v37 + 8) )
            s1 = *(char **)v37;
        }
      }
      if ( !strcasecmp(s1, "flat") )
      {
        setinf_flag(3, 4, 0);
        setinf_flag(3, 2, 1);
      }
      v334 = 0;
      v335 = 0;
      v29 = NAN;
      v347 = -4294967290LL;
      v336 = 0;
      selector = 0;
      v337 = 263;
      v339 = -1;
      v340 = -1;
      v341 = -1;
      v342 = -1;
      v343 = -1;
      v344 = -1;
      v345 = -1;
      v346 = -1;
      v38 = getinf(20, NAN);
      *(_QWORD *)&v39 = find_free_chunk(v38, 1, 15);
      *((_QWORD *)&v39 + 1) = v39 + 1;
      v334 = v39;
      selector = allocate_selector((unsigned __int64)v39 >> 4);
      v40 = getinf(3, NAN);
      v41 = 0;
      v42 = v40 & 6;
      if ( v42 )
        v41 = (v42 != 2) + 1;
      BYTE3(v337) = v41;
      add_segm_ex(&v334, s1, 0, dword_14370 | 1u);
      create_data(v334, 0, 1, -1);
      v318 = v334;
      netnode_supset(qword_14520, -3, &v318, 8, (unsigned __int8)v35);
      if ( qword_145B8 == -1 && !strcasecmp(s1, "DGROUP") )
        break;
      if ( ++v35 >= qword_14518 )
        goto LABEL_48;
    }
    ++v35;
  }
LABEL_48:
  netnode_check(&v319, 0, 0, 1);
  netnode_check(&j, 0, 0, 1);
  if ( dword_144F0 != 1 )
  {
    v336 = 0;
    v334 = 0;
    v335 = 0;
    v29 = NAN;
    v347 = 0xFFFFFFFF00000000LL;
    v43 = dword_144F0;
    v337 = 0;
    selector = 0;
    v339 = -1;
    v340 = -1;
    v341 = -1;
    v342 = -1;
    v343 = -1;
    v344 = -1;
    v345 = -1;
    v346 = -1;
    v44 = getinf(20, NAN);
    *(_QWORD *)&v334 = find_free_chunk(v44, v43, 15);
    *((_QWORD *)&v334 + 1) = v334 + dword_144F0;
    selector = allocate_selector((unsigned __int64)v334 >> 4);
    LOBYTE(v347) = 1;
    LOWORD(v337) = 513;
    add_segm_ex(&v334, "IMPDEFS", 0, dword_14370 | 1u);
    s1a = (_BYTE *)(&dword_0 + 1);
    if ( dword_144F0 > 1 )
    {
      do
      {
        v47 = (__int64)&s1a[v334];
        v48 = netnode_altval(qword_144F8, s1a, 65);
        v348[0] = 0;
        v349[0] = 0;
        netnode_supstr(qword_144F8, s1a, v348, 1024, 50);
        netnode_supstr(qword_144F8, s1a, v349, 1024, 49);
        v29 = 0.0;
        src = nullptr;
        *(_OWORD *)n = 0;
        v49 = getinf(37, 0.0);
        if ( (int)demangle_name(&src, v349, v49, 2) > 0 )
          sub_4EF0(v47, 1u, (__int64)"Demangled form: %s", (const char *)src);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        v50 = netnode_charval(qword_144F8, s1a, 68);
        v51 = " ; DATA";
        if ( v50 != 68 )
          v51 = "";
        if ( v48 )
        {
          sub_4EF0(v47, 1u, (__int64)"%-40s = %s.%u%s", v349, v348, v48, v51);
        }
        else
        {
          v302 = v51;
          v45 = netnode_supstr(qword_144F8, s1a, v351, 1024, 51);
          v46 = v302;
          if ( v45 < 0 )
          {
            qstrncpy(v351, v349, 1024);
            v46 = v302;
          }
          sub_4EF0(v47, 1u, (__int64)"%-40s = %s.%s%s", v349, v348, v351, v46);
        }
        create_data(v47, 0, 1, -1);
        ++s1a;
      }
      while ( dword_144F0 > (int)s1a );
    }
  }
  for ( k = 0; k < (unsigned __int64)xmmword_14578; ++k )
    sub_9D00(k, v319, (__int64)j, v29);
  sub_9D00(-1, v319, (__int64)j, v29);
  sub_9D00(-2, v319, (__int64)j, v29);
  sub_9D00(-3, v319, (__int64)j, v29);
  sub_9D00(-4, v319, (__int64)j, v29);
  s1c = (_BYTE *)(&dword_0 + 1);
  if ( (unsigned __int64)qword_144D0 > 1 )
  {
    do
    {
      v351[0] = 0;
      netnode_supstr(qword_144D8, s1c, v351, 1024, 49);
      sub_4D20(v351);
      if ( netnode_supval(qword_144D8, s1c, &src, 37, 50) <= 0 )
        sub_52E0("add_pubdefs");
      if ( n[0] )
      {
        v77 = (int *)qword_14550;
        if ( qword_14550 )
        {
          v78 = &dword_14548;
          do
          {
            while ( 1 )
            {
              v79 = *((_QWORD *)v77 + 2);
              v75 = *((_QWORD *)v77 + 3);
              if ( *((_QWORD *)v77 + 4) < n[0] )
                break;
              v78 = v77;
              v77 = *((int **)v77 + 2);
              if ( !v79 )
                goto LABEL_117;
            }
            v77 = *((int **)v77 + 3);
          }
          while ( v75 );
LABEL_117:
          v80 = -1;
          if ( v78 != &dword_14548 && n[0] >= *((_QWORD *)v78 + 4) )
            v80 = v78[10];
        }
        else
        {
          v80 = -1;
        }
        v81 = (unsigned int)(v80 + DWORD2(v332));
        v82 = segtype(v81, DWORD2(v332), n[0], v75);
        if ( !(unsigned __int8)add_entry(v81, v81, v351, v82 == 2, 0) )
          rename_entry(v81, v351, 0);
        if ( BYTE12(v332) )
          make_name_non_public(v81);
        else
          make_name_public(v81);
        if ( (_QWORD)v332 )
          sub_4EF0(v81, 1u, (__int64)"Type idx: %zu", (size_t)v332);
        goto LABEL_106;
      }
      v76 = 16 * LODWORD(n[1]) + DWORD2(v332);
      if ( BYTE12(v332) )
      {
        sub_4E30(qword_145D0, 1u, (__int64)"  %-12s = %u", v351, v76);
        v74 = v332;
        if ( (_QWORD)v332 )
          goto LABEL_111;
      }
      else
      {
        sub_4E30(qword_145D0, 1u, (__int64)"  %-12s = %u\n  public %-24s ; Absolute external value", v351, v76, v351);
        v74 = v332;
        if ( (_QWORD)v332 )
LABEL_111:
          sub_4EF0(v76, 1u, (__int64)"Type idx: %zu", v74);
      }
LABEL_106:
      ++s1c;
    }
    while ( (unsigned __int64)s1c < qword_144D0 );
  }
  netnode_kill(&qword_144D8);
  v83 = 0;
  if ( dword_144B0 > 0 )
  {
    while ( 1 )
    {
      v304 = netnode_altval(v319, v83, 65);
      if ( v304 != -1 && (unsigned __int64)xmmword_14508 > 1 )
        break;
LABEL_150:
      if ( dword_144B0 <= (int)++v83 )
        goto LABEL_151;
    }
    s1d = (_BYTE *)(&dword_0 + 1);
    v84 = 59;
    while ( 1 )
    {
      v85 = v84 + qword_14500;
      if ( (unsigned __int8)(*(_BYTE *)(v84 + qword_14500 + 56) - 1) > 0x5Eu
        && netnode_altval(qword_144A8, *(_QWORD *)(v85 + 48), 65) == v83 )
      {
        break;
      }
LABEL_131:
      ++s1d;
      v84 += 59;
      if ( (unsigned __int64)s1d >= (unsigned __int64)xmmword_14508 )
        goto LABEL_150;
    }
    v86 = sub_5380((int)s1d);
    v87 = 1;
    v88 = -*(_DWORD *)(v85 + 32);
    if ( *(int *)(v85 + 32) > 0 )
      v88 = *(_DWORD *)(v85 + 32);
    v89 = -(*(_DWORD *)(v85 + 36) + 1);
    if ( *(_DWORD *)(v85 + 36) + 1 > 0 )
      v89 = *(_DWORD *)(v85 + 36) + 1;
    v90 = v88 + v89;
    if ( v90 < *(_DWORD *)(v85 + 28) * *(_DWORD *)(v85 + 24) )
      v90 = *(_DWORD *)(v85 + 28) * *(_DWORD *)(v85 + 24);
    if ( v86 != -1 )
      goto LABEL_141;
    v109 = v88;
    if ( v88 )
    {
      v289 = v88;
      v298 = v88;
      create_data(v304, 0, v88, -1);
      v88 = v289;
      v109 = v298;
    }
    v110 = ::src;
    v292 = *(_QWORD *)(v301 + 16);
    v111 = v292 & (v304 + v109);
    v112 = v90;
    v90 -= v88;
    v304 = v292 & (v304 + v112);
    if ( *(_QWORD *)(v85 + 8) )
      v110 = *(const char **)v85;
    v113 = 257;
    if ( *(_BYTE *)(v85 + 58) )
      v113 = 769;
    v293 = v111;
    v114 = set_name(v111, v110, v113);
    v86 = v293;
    if ( !v114 )
    {
      set_name(v293, v110, 6144);
      v86 = v293;
      if ( *(_BYTE *)(v85 + 58) )
      {
        append_cmt(v293, "local", 0);
        v86 = v293;
      }
    }
    v87 = 0;
    if ( v90 == 1 )
    {
      v294 = v86;
      v287 = v86 + 1;
      auto_mark_range(v86, v86 + 1, 20);
      auto_mark_range(v294, v287, 30);
      v91 = *(_QWORD *)(v85 + 40);
      v86 = v294;
      v87 = 0;
      if ( v91 )
      {
LABEL_187:
        v288 = v87;
        v295 = v86;
        sub_4EF0(v304, 1u, (__int64)"Type idx: %zu", v91);
        v92 = *(_BYTE *)(v85 + 56);
        v87 = v288;
        v86 = v295;
        if ( v92 == 97 )
        {
LABEL_188:
          v296 = v86;
          sub_4EF0(
            v86,
            1u,
            (__int64)"Far data, %u elements %u bytes each",
            *(_DWORD *)(v85 + 24),
            *(_DWORD *)(v85 + 28));
          v86 = v296;
          switch ( *(_DWORD *)(v85 + 28) )
          {
            case 1:
              create_data(v296, 0, *(unsigned int *)(v85 + 24), -1);
              break;
            case 2:
              create_data(v296, 0x10000000, *(unsigned int *)(v85 + 24), -1);
              break;
            case 4:
              create_data(v296, 0x20000000, *(unsigned int *)(v85 + 24), -1);
              break;
            case 8:
              create_data(v296, 805306368, *(unsigned int *)(v85 + 24), -1);
              break;
            case 0xA:
              create_data(v296, 0x40000000, *(unsigned int *)(v85 + 24), -1);
              break;
            default:
              goto LABEL_190;
          }
          goto LABEL_131;
        }
        goto LABEL_143;
      }
    }
    else
    {
LABEL_141:
      v91 = *(_QWORD *)(v85 + 40);
      if ( v91 )
        goto LABEL_187;
    }
    v92 = *(_BYTE *)(v85 + 56);
    if ( v92 == 97 )
      goto LABEL_188;
LABEL_143:
    if ( v92 == 98 )
    {
      v297 = v86;
      sub_4EF0(v86, 1u, (__int64)"Near data, %u bytes", *(_DWORD *)(v85 + 24));
      create_data(v297, 0, *(unsigned int *)(v85 + 24), -1);
    }
    else if ( !v92 && !v87 )
    {
      if ( v90 > 1 )
      {
LABEL_190:
        create_data(v86, 0, v90, -1);
      }
      else
      {
        v93 = 203;
        if ( *(_BYTE *)(v85 + 57) )
          v93 = 195;
        v291 = v86;
        put_byte(v86, v93);
        create_insn(v291, 0);
      }
    }
    goto LABEL_131;
  }
LABEL_151:
  netnode_kill(&v319);
  netnode_kill(&j);
  sub_8CE0();
  sub_4E30(qword_145D0, 1u, (__int64)"");
  word_143AA = 0;
  word_143A8 = 0;
  qword_14410 = -1;
  qlseek(a1, 0, 0);
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_152:
      v94 = (const char *)v24;
      v97 = sub_5CE0(a1, (__int64)v24, 2, &qword_145E0);
      if ( !v97 )
      {
LABEL_159:
        sub_7140(0, v94, v95, v96);
        first_seg = get_first_seg();
        goto LABEL_161;
      }
      if ( BYTE2(v328) <= 0xF1u )
        break;
LABEL_216:
      v94 = "HIDECANCEL\nUnknown record type %02X is encountered at file position %08llX, continue?";
      v127 = sub_5150(
               1u,
               (__int64)"HIDECANCEL\nUnknown record type %02X is encountered at file position %08llX, continue?",
               BYTE2(v328),
               qword_145E0);
LABEL_217:
      if ( v127 <= 0 )
        goto LABEL_159;
    }
    if ( BYTE2(v328) > 0xB3u )
      break;
    if ( BYTE2(v328) > 0xA3u )
    {
      v96 = (unsigned int)BYTE2(v328) + 92;
      v95 = 1LL << (BYTE2(v328) + 92);
      if ( (v95 & 0x1051) == 0 )
      {
        BYTE1(v95) &= 0xC0u;
        if ( !BYTE1(v95) )
        {
          if ( BYTE2(v328) == 0xA6 )
            goto LABEL_159;
          goto LABEL_216;
        }
        v128 = (unsigned __int16)sub_6A10((__int64)v24, (__int64)v24, v95, v96);
        v129 = (int *)qword_14550;
        if ( qword_14550 )
        {
          v130 = &dword_14548;
          do
          {
            while ( 1 )
            {
              v131 = *((_QWORD *)v129 + 2);
              v132 = *((_QWORD *)v129 + 3);
              if ( *((_QWORD *)v129 + 4) < v128 )
                break;
              v130 = v129;
              v129 = *((int **)v129 + 2);
              if ( !v131 )
                goto LABEL_224;
            }
            v129 = *((int **)v129 + 3);
          }
          while ( v132 );
LABEL_224:
          v133 = -1;
          if ( v130 != &dword_14548 && v128 >= *((_QWORD *)v130 + 4) )
            v133 = *((_QWORD *)v130 + 5);
        }
        else
        {
          v133 = -1;
        }
        v134 = (unsigned __int8)sub_5EE0((__int64)v24, -1);
        sub_7140(0, (const void *)0xFFFFFFFFFFFFFFFFLL, v135, v136);
        while ( v327 < (unsigned __int64)v324 )
        {
          if ( (v328 & 0x10000) != 0 )
          {
            v137 = v327 + 4;
            if ( (unsigned __int64)v324 < v327 + 4 || v327 >= 0xFFFFFFFFFFFFFFFCLL )
            {
              if ( !v329 )
                sub_5230((__int64)"Too short OMF record", __CFADD__(v327, 4));
              exception = __cxa_allocate_exception(8u);
              *exception = &off_13D38;
              __cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'omf_probing_failure_t,
                (void (*)(void *))sub_4420);
            }
            v138 = *(unsigned int *)(v323 + v327);
            v139 = v327 + 8;
            v327 += 4LL;
            if ( (unsigned __int64)v324 < v139 || v139 < v137 )
            {
              if ( !v329 )
                sub_5230((__int64)"Too short OMF record", v138);
              v6 = __cxa_allocate_exception(8u);
              *v6 = &off_13D38;
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
            }
            v140 = *(_DWORD *)(v323 + v137);
          }
          else
          {
            v141 = v327 + 2;
            if ( (unsigned __int64)v324 < v327 + 2 || v327 >= 0xFFFFFFFFFFFFFFFELL )
            {
              if ( !v329 )
                sub_5230((__int64)"Too short OMF record", __CFADD__(v327, 2));
              v11 = __cxa_allocate_exception(8u);
              *v11 = &off_13D38;
              __cxa_throw(v11, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
            }
            v138 = *(unsigned __int16 *)(v323 + v327);
            v139 = v327 + 4;
            v327 += 2LL;
            if ( (unsigned __int64)v324 < v139 || v139 < v141 )
            {
              if ( !v329 )
                sub_5230((__int64)"Too short OMF record", v138);
              v12 = __cxa_allocate_exception(8u);
              *v12 = &off_13D38;
              __cxa_throw(v12, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
            }
            v140 = *(unsigned __int16 *)(v323 + v141);
          }
          v327 = v139;
          sub_5710(v134, *(_QWORD *)(v301 + 16) & (v133 + v138), v140);
        }
      }
    }
    else if ( BYTE2(v328) <= 0x89u )
    {
      if ( (unsigned __int8)(BYTE2(v328) - 110) > 0x1Au )
        goto LABEL_216;
      if ( ((1LL << (BYTE2(v328) - 110)) & 0x1555555) == 0 )
      {
        if ( BYTE2(v328) != 0x88 )
          goto LABEL_216;
        if ( v327 < (unsigned __int64)v324 )
        {
          sub_5EE0((__int64)v24, -1);
          v126 = sub_5EE0((__int64)v24, -1);
          if ( v126 == -88 )
          {
            sub_58D0("WKEXT", v24);
          }
          else if ( v126 == -87 )
          {
            sub_58D0("LZEXT", v24);
          }
          else if ( v126 == -96 && (unsigned __int8)sub_5EE0((__int64)v24, -1) == 3 )
          {
            sub_5C80(v24);
          }
        }
      }
    }
    else
    {
      v108 = (unsigned __int8)(BYTE2(v328) + 118);
      switch ( BYTE2(v328) )
      {
        case 0x8A:
        case 0x8B:
          v94 = (const char *)-1LL;
          v149 = sub_5EE0((__int64)v24, -1);
          if ( (v149 & 0x20) == 0 && (v149 & 0x40) != 0 )
          {
            src = nullptr;
            v332 = 0u;
            *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_11480);
            v150 = sub_5EE0((__int64)v24, -1);
            if ( !dword_145C8 )
              v97 = BYTE2(v328) & 1;
            sub_6A80(v150, v24, (char *)v97, (__int64)&src);
            sub_8820(v301, (__int64)&src);
            v151 = setinf(14, (const char *)n[1]);
            v94 = (const char *)(*(_QWORD *)(v301 + 16) & (v332 + *((_QWORD *)&v332 + 1)));
            setinf(15, v94, v151);
          }
          goto LABEL_159;
        case 0x8C:
        case 0x8E:
        case 0x90:
        case 0x91:
        case 0x92:
        case 0x96:
        case 0x98:
        case 0x99:
        case 0x9A:
        case 0x9E:
          goto LABEL_152;
        case 0x94:
        case 0x95:
          sub_6A10((__int64)v24, (__int64)v24, v108, v96);
          v154 = (unsigned __int16)sub_6A10((__int64)v24, (__int64)v24, v152, v153);
          v155 = (int *)qword_14550;
          if ( !qword_14550 )
          {
            v159 = -1;
            goto LABEL_273;
          }
          v156 = &dword_14548;
          break;
        case 0x9C:
        case 0x9D:
          sub_6BE0((__int64)v24, (void (__fastcall *)(__int64 *))sub_8980);
          goto LABEL_152;
        case 0xA0:
        case 0xA1:
        case 0xA2:
        case 0xA3:
          sub_7140((__int64)v24, v24, v108, v96);
          goto LABEL_152;
        default:
          goto LABEL_216;
      }
      do
      {
        while ( 1 )
        {
          v157 = *((_QWORD *)v155 + 2);
          v158 = *((_QWORD *)v155 + 3);
          if ( *((_QWORD *)v155 + 4) < v154 )
            break;
          v156 = v155;
          v155 = *((int **)v155 + 2);
          if ( !v157 )
            goto LABEL_270;
        }
        v155 = *((int **)v155 + 3);
      }
      while ( v158 );
LABEL_270:
      v159 = -1;
      if ( v156 != &dword_14548 && v154 >= *((_QWORD *)v156 + 4) )
        v159 = *((_QWORD *)v156 + 5);
LABEL_273:
      v160 = v327;
      v161 = BYTE2(v328) & 1;
      while ( v160 < (unsigned __int64)v324 )
      {
        v162 = v160 + 2;
        if ( (unsigned __int64)v324 < v160 + 2 || v160 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( !v329 )
            sub_5230((__int64)"Too short OMF record", v162, __CFADD__(v160, 2), (_QWORD)v324, v323, v161);
          v14 = __cxa_allocate_exception(8u);
          *v14 = &off_13D38;
          __cxa_throw(v14, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
        }
        v163 = *(unsigned __int16 *)(v323 + v160);
        v327 = v160 + 2;
        if ( dword_145C8 || (_BYTE)v161 )
        {
          v160 += 6LL;
          if ( (unsigned __int64)v324 < v160 || v160 < v162 )
          {
            if ( !v329 )
              sub_5230((__int64)"Too short OMF record", v162, v163, (_QWORD)v324, v323, v161);
            v15 = __cxa_allocate_exception(8u);
            *v15 = &off_13D38;
            __cxa_throw(v15, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
          }
          v164 = *(_DWORD *)(v323 + v162);
        }
        else
        {
          v160 += 4LL;
          if ( (unsigned __int64)v324 < v160 || v160 < v162 )
          {
            if ( !v329 )
              sub_5230((__int64)"Too short OMF record", v162, v163, (_QWORD)v324, v323);
            v13 = __cxa_allocate_exception(8u);
            *v13 = &off_13D38;
            __cxa_throw(v13, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
          }
          v164 = *(unsigned __int16 *)(v323 + v162);
        }
        v327 = v160;
        v165 = word_143A8 + (_DWORD)v163;
        if ( v165 )
        {
          set_source_linnum(*(_QWORD *)(v301 + 16) & (v159 + v164), v165);
          goto LABEL_273;
        }
      }
    }
  }
  v95 = (unsigned __int8)(BYTE2(v328) + 76);
  switch ( BYTE2(v328) )
  {
    case 0xB4:
    case 0xB6:
    case 0xB7:
    case 0xB8:
    case 0xBC:
    case 0xCA:
    case 0xF0:
      goto LABEL_152;
    case 0xBA:
    case 0xBB:
      v94 = "HIDECANCEL\nUnsupported record COMFIX is encountered at file position %08llX, continue?";
      v127 = sub_5150(
               1u,
               (__int64)"HIDECANCEL\nUnsupported record COMFIX is encountered at file position %08llX, continue?",
               qword_145E0);
      goto LABEL_217;
    case 0xC0:
      v94 = "HIDECANCEL\nUnsupported record SELDEF is encountered at file position %08llX, continue?";
      v127 = sub_5150(
               1u,
               (__int64)"HIDECANCEL\nUnsupported record SELDEF is encountered at file position %08llX, continue?",
               qword_145E0);
      goto LABEL_217;
    case 0xC2:
    case 0xC3:
      sub_7140(0, v24, v95, v96);
      sub_ABA0((__int64)v24, 0, (__int64)&src);
      v195 = (int *)qword_14550;
      if ( !qword_14550 )
        goto LABEL_321;
      v196 = &dword_14548;
      do
      {
        while ( 1 )
        {
          v197 = *((_QWORD *)v195 + 2);
          v198 = *((_QWORD *)v195 + 3);
          if ( *((_QWORD *)v195 + 4) < (unsigned __int64)qword_14420 )
            break;
          v196 = v195;
          v195 = *((int **)v195 + 2);
          if ( !v197 )
            goto LABEL_319;
        }
        v195 = *((int **)v195 + 3);
      }
      while ( v198 );
LABEL_319:
      if ( v196 == &dword_14548
        || (unsigned __int64)qword_14420 < *((_QWORD *)v196 + 4)
        || (v223 = *((_QWORD *)v196 + 5), v223 == -1) )
      {
LABEL_321:
        sub_52E0("comdat");
      }
      qword_14410 = *(_QWORD *)(v301 + 16) & (v223 + DWORD2(v332));
      goto LABEL_152;
    case 0xC4:
    case 0xC5:
      sub_5EE0((__int64)v24, -1);
      v181 = sub_6A10((__int64)v24, -1, v179, v180);
      if ( !v181 || v181 >= (unsigned __int64)xmmword_14598 )
      {
        v182 = 1;
        v183 = 0;
        src = nullptr;
        v184 = "";
        *(_OWORD *)n = 0;
LABEL_302:
        src = (void *)qvector_reserve(&src, 0, v182, 1);
        n[0] = v182;
        memmove(src, v184, v183);
        *((_BYTE *)src + v183) = 0;
        goto LABEL_303;
      }
      v231 = qword_14590 + 32LL * v181;
      v184 = (char *)::src;
      if ( *(_QWORD *)(v231 + 8) )
        v184 = *(char **)v231;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v184 )
      {
        v183 = strlen(v184);
        v182 = v183 + 1;
        goto LABEL_302;
      }
LABEL_303:
      validate_name(&src, 6, 1);
      name_ea = get_name_ea(-1, src);
      if ( name_ea == -1 )
        goto LABEL_502;
LABEL_304:
      v186 = v324;
      v187 = v323;
      v94 = (const char *)(unsigned int)word_143A8;
      v188 = v327;
      v189 = BYTE2(v328) & 1;
      while ( v188 < (unsigned __int64)v324 )
      {
        v190 = v188 + 2;
        v191 = __CFADD__(v188, 2);
        if ( (unsigned __int64)v324 < v188 + 2 || v188 >= 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_498;
        v192 = *(unsigned __int16 *)(v323 + v188);
        v327 = v188 + 2;
        if ( (_BYTE)v189 )
        {
          v188 += 6LL;
          if ( v188 < v190 || (unsigned __int64)v324 < v188 )
            goto LABEL_493;
          v193 = *(unsigned int *)(v323 + v190);
        }
        else
        {
          v188 += 4LL;
          if ( v188 < v190 || (unsigned __int64)v324 < v188 )
          {
            if ( !v329 )
              sub_5230((__int64)"Too short OMF record", v94, v192, (_QWORD)v324, v323);
            v10 = __cxa_allocate_exception(8u);
            *v10 = &off_13D38;
            __cxa_throw(v10, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
          }
          v193 = *(unsigned __int16 *)(v323 + v190);
        }
        v327 = v188;
        v194 = (_DWORD)v94 + v192;
        if ( v194 )
        {
          set_source_linnum(*(_QWORD *)(v301 + 16) & (name_ea + v193), v194);
          goto LABEL_304;
        }
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      goto LABEL_152;
    case 0xC6:
      if ( v327 >= (unsigned __int64)v324 )
        goto LABEL_152;
      do
      {
        v199 = "alias <";
        v200 = v349;
        do
        {
          v201 = *v199++;
          *v200 = v201;
          if ( !v201 )
          {
            if ( v200 < v351 )
              goto LABEL_328;
            if ( !under_debugger )
            {
              interr(520, v94);
LABEL_498:
              if ( !v329 )
                sub_5230((__int64)"Too short OMF record", v94, v191, v186, v187, v189);
              v4 = __cxa_allocate_exception(8u);
              *v4 = &off_13D38;
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
            }
LABEL_532:
            BUG();
          }
          ++v200;
        }
        while ( v200 != &v350 );
        v350 = 0;
LABEL_328:
        v202 = sub_7530((__int64)v24, 0xFFFFFFFFFFFFFFFFLL);
        if ( v200 == &v350 )
        {
LABEL_374:
          v350 = 0;
          v200 = &v350;
          goto LABEL_338;
        }
        v94 = &v350;
        while ( 1 )
        {
          v203 = *v202++;
          *v200 = v203;
          if ( !v203 )
            break;
          if ( ++v200 == &v350 )
            goto LABEL_374;
        }
        if ( v200 >= v351 )
        {
          if ( !under_debugger )
          {
            interr(520, &v350);
LABEL_493:
            if ( !v329 )
              sub_5230((__int64)"Too short OMF record", v94, v192, v186, v187);
            v3 = __cxa_allocate_exception(8u);
            *v3 = &off_13D38;
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
          }
          goto LABEL_532;
        }
        if ( v200 == &v350 )
          goto LABEL_374;
        v204 = "> = <";
        while ( 2 )
        {
          v205 = *v204++;
          *v200 = v205;
          if ( !v205 )
          {
            if ( v200 < v351 )
              goto LABEL_338;
            if ( !under_debugger )
            {
              interr(520, &v350);
LABEL_484:
              sub_52E0("nbkpat");
            }
            goto LABEL_532;
          }
          if ( ++v200 != &v350 )
            continue;
          break;
        }
        v200 = &v350;
        v350 = 0;
LABEL_338:
        v206 = sub_7530((__int64)v24, 0xFFFFFFFFFFFFFFFFLL);
        v207 = v200;
        if ( v200 == &v350 )
        {
LABEL_375:
          v350 = 0;
        }
        else
        {
          while ( 1 )
          {
            v208 = *v206++;
            *v207 = v208;
            if ( !v208 )
              break;
            if ( ++v207 == &v350 )
              goto LABEL_375;
          }
        }
        v94 = v200;
        v209 = get_name_ea(-1, v200);
        if ( v209 != -1 )
        {
          v94 = (_BYTE *)(&dword_0 + 1);
          sub_4E30(v209, 1u, (__int64)"%s>", v349);
        }
      }
      while ( v327 < (unsigned __int64)v324 );
      goto LABEL_152;
    case 0xC8:
    case 0xC9:
      v166 = sub_5EE0((__int64)v24, -1);
      v169 = sub_6A10((__int64)v24, -1, v167, v168);
      v170 = "";
      if ( v169 )
      {
        if ( v169 < (unsigned __int64)xmmword_14598 )
        {
          v170 = (char *)::src;
          v232 = qword_14590 + 32LL * v169;
          if ( *(_QWORD *)(v232 + 8) )
            v170 = *(char **)v232;
        }
      }
      v173 = get_name_ea(-1, v170);
      if ( v173 == -1 )
        goto LABEL_484;
      sub_7140(0, v170, v171, v172);
      while ( v327 < (unsigned __int64)v324 )
      {
        if ( (v328 & 0x10000) != 0 )
        {
          v174 = v327 + 4;
          if ( v327 >= 0xFFFFFFFFFFFFFFFCLL || (unsigned __int64)v324 < v174 )
          {
            if ( !v329 )
              sub_5230((__int64)"Too short OMF record", v170, (_QWORD)v324, v174);
            v16 = __cxa_allocate_exception(8u);
            *v16 = &off_13D38;
            __cxa_throw(v16, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
          }
          v175 = *(unsigned int *)(v323 + v327);
          v176 = v327 + 8;
          v327 += 4LL;
          if ( (unsigned __int64)v324 < v176 || v176 < v174 )
          {
            if ( !v329 )
              sub_5230((__int64)"Too short OMF record", v175);
            v7 = __cxa_allocate_exception(8u);
            *v7 = &off_13D38;
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
          }
          v177 = *(_DWORD *)(v323 + v174);
        }
        else
        {
          v178 = v327 + 2;
          if ( (unsigned __int64)v324 < v327 + 2 || v327 >= 0xFFFFFFFFFFFFFFFELL )
          {
            if ( !v329 )
              sub_5230((__int64)"Too short OMF record", __CFADD__(v327, 2));
            v8 = __cxa_allocate_exception(8u);
            *v8 = &off_13D38;
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
          }
          v175 = *(unsigned __int16 *)(v323 + v327);
          v176 = v327 + 4;
          v327 += 2LL;
          if ( (unsigned __int64)v324 < v176 || v176 < v178 )
          {
            if ( !v329 )
              sub_5230((__int64)"Too short OMF record", v175);
            v5 = __cxa_allocate_exception(8u);
            *v5 = &off_13D38;
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
          }
          v177 = *(unsigned __int16 *)(v323 + v178);
        }
        v327 = v176;
        v170 = (char *)(*(_QWORD *)(v301 + 16) & (v173 + v175));
        sub_5710(v166, (__int64)v170, v177);
      }
      goto LABEL_152;
    case 0xCC:
      if ( !(_QWORD)v324 )
      {
        *(_QWORD *)&v326 = 0;
LABEL_372:
        v222 = ::src;
        goto LABEL_373;
      }
      v244 = sub_5EE0((__int64)v24, 0);
      sub_73D0((__int64)v24, (__int64)&v325, v244);
      if ( !(_QWORD)v326 )
        goto LABEL_372;
      v222 = v325;
LABEL_373:
      sub_4EF0(qword_145D0, 1u, (__int64)"Version          : %s", v222);
      goto LABEL_152;
    case 0xCE:
      v210 = (unsigned __int64)v351;
      v299 = qword_145D0;
      v211 = "Vendor info      : ";
      while ( 1 )
      {
        v212 = *v211++;
        *(_BYTE *)v210 = v212;
        if ( !v212 )
          break;
        ++v210;
        if ( v211 == &::src[22] )
        {
          v213 = v324;
          v352 = 0;
          if ( (unsigned __int64)(4 * v324 + 4) > 0x7FF )
          {
            v305 = 511;
            v210 = (unsigned __int64)&v352;
            goto LABEL_352;
          }
          v210 = (unsigned __int64)&v352;
          v214 = 1;
          goto LABEL_416;
        }
      }
      v213 = v324;
      v305 = 511;
      v214 = v210 < (unsigned __int64)v353;
      if ( (unsigned __int64)(4 * v324 + 4) > 0x7FF )
        goto LABEL_351;
LABEL_416:
      v305 = v213;
      v214 &= v213 > 0;
LABEL_351:
      if ( !v214 )
        goto LABEL_356;
LABEL_352:
      s1e = 0;
      v215 = 0;
      do
      {
        v94 = &v353[-v210];
        ++s1e;
        v210 += (int)qsnprintf(v210, &v353[-v210], " %02X", *(unsigned __int8 *)(v323 + v215));
        v215 = s1e;
      }
      while ( s1e < v305 && v210 < (unsigned __int64)v353 );
      v213 = v324;
LABEL_356:
      if ( v213 <= 0 )
        goto LABEL_369;
      if ( v210 >= (unsigned __int64)v353 )
      {
        if ( under_debugger )
          goto LABEL_532;
        interr(518, v94);
LABEL_502:
        sub_52E0("linsym");
      }
      *(_BYTE *)v210 = 32;
      if ( v210 + 1 >= (unsigned __int64)v353
        || (*(_BYTE *)(v210 + 1) = 34, v216 = (char *)(v210 + 2), v210 + 2 >= (unsigned __int64)v353) )
      {
        v352 = 0;
        v216 = &v352;
      }
      v217 = 0;
      v218 = v213;
      s1f = 0;
      v283 = v24;
      v219 = v216;
      do
      {
        v220 = *(unsigned __int8 *)(v323 + v217);
        v105 = v220;
        if ( strchr(asc_10CC4, v220) )
          v105 = 46;
        *v219++ = v105;
        if ( v219 >= v353 )
        {
          v352 = 0;
          v219 = &v352;
        }
        v217 = ++s1f;
      }
      while ( v218 > s1f );
      v221 = v219;
      v24 = v283;
      if ( v221 < v353 )
      {
        *v221 = 34;
        if ( v221 + 1 >= v353 )
          v352 = 0;
LABEL_369:
        sub_4EF0(v299, 1u, (__int64)"%s", v351);
        goto LABEL_152;
      }
      if ( under_debugger )
        goto LABEL_532;
      v107 = interr(518, v220);
LABEL_475:
      v99 = (__int64 *)v107;
      if ( v105 != 1 && (unsigned __int8)is_valid_utf8(v351) )
        sub_4EF0(*v99, 1u, (__int64)"Translation: \"%s\"", v351);
      while ( 1 )
      {
        first_seg = get_next_seg(*v99);
LABEL_161:
        v99 = (__int64 *)first_seg;
        if ( !first_seg )
          break;
        v100 = *(_BYTE *)(first_seg + 184);
        if ( (unsigned __int8)(v100 - 2) <= 1u || !v100 )
        {
          v101 = is_loaded(*v99);
          v102 = *v99;
          if ( !v101 )
          {
            flags = get_flags_ex(v102, 4);
            v102 = *v99;
            if ( (flags & 0x4000) == 0 )
            {
              that = next_that(v102, v99[1], sub_43A0, 0);
              v102 = *v99;
              v125 = that;
              if ( that != -1 )
              {
                *((_WORD *)v99 + 22) |= 3u;
                v99[4] = v102;
                set_segm_start(v102, that, 1);
                v102 = *v99;
                if ( *v99 == qword_145D0 )
                  qword_145D0 = v125;
              }
            }
          }
          if ( (unsigned __int8)is_loaded(v102) && (unsigned __int8)netnode_charval(qword_144A8, *v99, 68) == 85 )
          {
            max_strlit_length = get_max_strlit_length(*v99, 0, 1);
            v105 = max_strlit_length;
            if ( max_strlit_length > 0x3FF )
            {
              v106 = 1023;
              v105 = 1023;
LABEL_170:
              if ( get_bytes(v351, v106, *v99, 0, 0) == v105 )
              {
                v351[v105] = 0;
                v107 = (__int64)v99;
                while ( --v105 )
                {
                  if ( !v351[v105] )
                    goto LABEL_475;
                }
              }
              continue;
            }
            v106 = max_strlit_length;
            if ( max_strlit_length > 1 )
              goto LABEL_170;
          }
        }
      }
      v115 = set_default_dataseg(qword_145B8);
      if ( getinf(14, v115) != -1 )
      {
        v116 = getinf(15, v115);
        v117 = getinf(14, v115);
        v118 = sel2para(v117);
        v119 = setinf(16, (const char *)(v116 + 16 * v118));
        v120 = qword_145B8;
        v121 = *(_DWORD *)(ph + 84);
        v122 = getinf(16, v119);
        split_sreg_range(v122, v121, v120, 4, 1);
      }
      netnode_kill(&qword_14520);
      netnode_kill(&qword_144F8);
      netnode_kill(&qword_144E8);
      netnode_kill(&qword_144D8);
      netnode_kill(&qword_143B0);
      netnode_kill(&qword_144A8);
      netnode_kill(&qword_144C8);
      netnode_kill(&qword_144C0);
      create_filename_cmt();
      if ( v325 )
      {
        *(_QWORD *)&v326 = 0;
        qfree(v325);
      }
      if ( v323 )
      {
        *(_QWORD *)&v324 = 0;
        qfree(v323);
      }
      return v354 - __readfsqword(0x28u);
    case 0xF1:
      goto LABEL_159;
    default:
      goto LABEL_216;
  }
}
