__int64 __fastcall sub_3E8E80(_DWORD *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  char **exception; // r15
  char **v5; // r12
  __m128i v7; // xmm1
  void (***v8)(void); // rdi
  bool v9; // zf
  unsigned int *v10; // r15
  unsigned int *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned int *v14; // r15
  unsigned int *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  _QWORD *v18; // r15
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  void (***v23)(void); // rdi
  __int64 *v24; // rax
  __int64 *v25; // r12
  void *v26; // rsi
  __int64 v27; // rdi
  void *v28; // rsi
  __int64 v29; // rdi
  unsigned int *v30; // r12
  unsigned int *v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned int *v34; // r12
  unsigned int *v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdi
  _DWORD *v38; // rbx
  void *v39; // rsi
  __int64 v40; // rdi
  _QWORD *v41; // rax
  void *v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 result; // rax
  void (__fastcall ***v46)(_QWORD); // rbx
  __int64 v47; // r15
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  unsigned int *v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // r15d
  __int64 v54; // r12
  unsigned int v55; // edx
  unsigned int *v56; // rcx
  unsigned int v57; // r15d
  __int64 v58; // r12
  unsigned int v59; // edx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r14
  void *v63; // rdx
  _DWORD *v64; // rbx
  __m128i v65; // xmm0
  __int64 v66; // rsi
  __int64 v67; // rdi
  int v68; // eax
  _QWORD *v69; // rax
  unsigned int *v70; // rbx
  int v71; // eax
  __int64 v72; // r14
  char v73; // r15
  unsigned int v74; // ebx
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // r13
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r12
  unsigned __int64 v81; // r13
  __int64 v82; // rsi
  __int64 v83; // rdi
  unsigned int v84; // r15d
  __int64 v85; // rbx
  size_t v86; // r14
  _QWORD *v87; // rax
  __m128i v88; // xmm3
  _QWORD *v89; // r15
  _QWORD *v90; // r12
  __int64 v91; // rbx
  __int64 v92; // rax
  _QWORD *v93; // r14
  _QWORD *v94; // r13
  char v95; // al
  char v96; // dl
  char v97; // al
  int i; // eax
  __int64 v99; // rcx
  _QWORD *v100; // r9
  unsigned int v101; // r15d
  char *v102; // rbx
  unsigned int *v103; // r14
  _QWORD *v104; // r13
  __int64 *v105; // r12
  __int64 v106; // r10
  __int64 v107; // rdi
  unsigned int v108; // esi
  __int64 v109; // rdx
  unsigned __int64 v110; // rax
  unsigned int v111; // ecx
  unsigned int v112; // r11d
  __int64 v113; // rbx
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // rax
  __m128i v116; // xmm0
  __int64 v117; // r15
  _QWORD *v118; // rax
  _DWORD *v119; // r12
  _QWORD *v120; // rbx
  void *v121; // rdi
  __int64 v122; // r15
  unsigned int v123; // eax
  unsigned int v124; // r12d
  char *v125; // rsi
  __int64 v126; // r13
  __int64 v127; // rax
  void *v128; // r15
  void *v129; // rsi
  _QWORD *v130; // rdi
  _DWORD *v131; // r15
  _DWORD *v132; // rax
  __int64 v133; // rsi
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // rdi
  __int64 v137; // rsi
  __int64 v138; // rdi
  __int64 *v139; // rbx
  unsigned __int64 v140; // r15
  __int64 v141; // rsi
  __int64 v142; // rdi
  __int64 v143; // rsi
  __int64 v144; // rdi
  _DWORD *v145; // rsi
  __int64 v146; // rdi
  _QWORD *v147; // rdx
  _QWORD *v148; // rdx
  unsigned int *v149; // rbx
  unsigned int v150; // r14d
  __int64 v151; // r12
  unsigned int v152; // eax
  __int64 v153; // rcx
  int v154; // eax
  unsigned int *v155; // rcx
  __int64 v156; // r13
  __int64 v157; // rax
  unsigned int v158; // ecx
  unsigned int *v159; // r12
  __int64 v160; // r14
  __int64 v161; // rax
  __int64 v162; // rax
  int v163; // edx
  __int8 v164; // dl
  __int64 v165; // rcx
  __int64 v166; // rsi
  __int64 v167; // rdi
  unsigned int v168; // r13d
  size_t v169; // rsi
  unsigned int *v170; // rax
  __int64 v171; // rdx
  unsigned int j; // r14d
  __int64 v173; // rax
  unsigned int *v174; // rax
  int v175; // edx
  __int64 v176; // rax
  unsigned int v177; // ecx
  __int64 v178; // r9
  __int64 (__fastcall **v179)(); // rsi
  _QWORD *v180; // rdi
  __int64 v181; // rsi
  void *v182; // rdi
  void *v183; // rsi
  _QWORD *v184; // rdi
  void *v185; // rsi
  void *v186; // rdi
  __int64 v187; // rsi
  int *v188; // rdi
  _QWORD *v189; // rax
  void *v190; // r14
  int v191; // edi
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // r13
  unsigned int *v195; // rax
  int v196; // edx
  __int64 v197; // rcx
  _QWORD *v198; // rax
  _BOOL8 v199; // rcx
  __int64 v200; // r12
  _DWORD *v201; // r13
  __int64 v202; // r15
  bool v203; // al
  unsigned int v204; // r13d
  unsigned int v205; // edx
  unsigned int *v206; // rax
  __int64 v207; // rax
  char v208; // r12
  __int64 v209; // r13
  int v210; // eax
  _DWORD *v211; // rax
  void *v212; // rdi
  _QWORD *v213; // rax
  void *v214; // [rsp+0h] [rbp-4A0h]
  unsigned int v217; // [rsp+24h] [rbp-47Ch]
  unsigned int *v218; // [rsp+28h] [rbp-478h]
  char *ptr; // [rsp+38h] [rbp-468h]
  unsigned int *v221; // [rsp+48h] [rbp-458h]
  __int64 v222; // [rsp+50h] [rbp-450h]
  unsigned int *v223; // [rsp+58h] [rbp-448h]
  unsigned int v224; // [rsp+70h] [rbp-430h]
  __int8 v225; // [rsp+77h] [rbp-429h]
  __int64 v226; // [rsp+88h] [rbp-418h]
  __int64 v227; // [rsp+90h] [rbp-410h]
  __int64 v228; // [rsp+90h] [rbp-410h]
  __int64 v229; // [rsp+A0h] [rbp-400h]
  __int64 v230; // [rsp+A8h] [rbp-3F8h]
  int v231; // [rsp+A8h] [rbp-3F8h]
  __int64 v232; // [rsp+A8h] [rbp-3F8h]
  __int8 v233; // [rsp+A8h] [rbp-3F8h]
  __int64 v234; // [rsp+A8h] [rbp-3F8h]
  int v235; // [rsp+A8h] [rbp-3F8h]
  _QWORD *v236; // [rsp+B0h] [rbp-3F0h]
  __int64 v237; // [rsp+B0h] [rbp-3F0h]
  __int64 v238; // [rsp+C0h] [rbp-3E0h]
  char v239; // [rsp+C8h] [rbp-3D8h]
  __int64 v240; // [rsp+C8h] [rbp-3D8h]
  _QWORD *v241; // [rsp+C8h] [rbp-3D8h]
  __int64 v242; // [rsp+C8h] [rbp-3D8h]
  __m128i v243; // [rsp+D0h] [rbp-3D0h] BYREF
  unsigned int *v244; // [rsp+E8h] [rbp-3B8h] BYREF
  unsigned int *v245; // [rsp+F0h] [rbp-3B0h] BYREF
  __int64 v246; // [rsp+F8h] [rbp-3A8h] BYREF
  __int64 v247; // [rsp+100h] [rbp-3A0h] BYREF
  unsigned int *v248; // [rsp+108h] [rbp-398h] BYREF
  __int64 v249; // [rsp+110h] [rbp-390h] BYREF
  unsigned int *v250; // [rsp+118h] [rbp-388h] BYREF
  __int64 v251; // [rsp+120h] [rbp-380h] BYREF
  _QWORD *v252; // [rsp+128h] [rbp-378h]
  __int64 v253; // [rsp+130h] [rbp-370h] BYREF
  unsigned int *v254; // [rsp+138h] [rbp-368h] BYREF
  __int64 v255; // [rsp+140h] [rbp-360h] BYREF
  unsigned int *v256; // [rsp+148h] [rbp-358h] BYREF
  __int64 v257; // [rsp+150h] [rbp-350h] BYREF
  __int64 v258; // [rsp+158h] [rbp-348h]
  __int64 v259; // [rsp+160h] [rbp-340h] BYREF
  __int64 v260; // [rsp+168h] [rbp-338h]
  __int64 v261; // [rsp+170h] [rbp-330h] BYREF
  _DWORD *v262; // [rsp+178h] [rbp-328h]
  __int64 v263; // [rsp+180h] [rbp-320h]
  __int64 v264; // [rsp+188h] [rbp-318h]
  __int64 v265; // [rsp+190h] [rbp-310h]
  __int64 v266; // [rsp+1A0h] [rbp-300h]
  _QWORD *v267; // [rsp+1A8h] [rbp-2F8h]
  __int64 v268; // [rsp+1B0h] [rbp-2F0h]
  __int64 v269; // [rsp+1B8h] [rbp-2E8h]
  __int64 v270; // [rsp+1C0h] [rbp-2E0h]
  __int64 v271; // [rsp+1C8h] [rbp-2D8h]
  __int64 v272; // [rsp+1D0h] [rbp-2D0h]
  __int64 v273; // [rsp+1D8h] [rbp-2C8h]
  __m128i v274; // [rsp+1F0h] [rbp-2B0h] BYREF
  int *v275; // [rsp+200h] [rbp-2A0h] BYREF
  void *v276[2]; // [rsp+208h] [rbp-298h] BYREF
  __int64 (__fastcall **v277)(); // [rsp+218h] [rbp-288h]
  void *v278; // [rsp+220h] [rbp-280h] BYREF
  __int64 v279; // [rsp+228h] [rbp-278h]
  void *v280; // [rsp+230h] [rbp-270h]
  _QWORD *v281; // [rsp+238h] [rbp-268h]
  __int64 v282; // [rsp+240h] [rbp-260h]
  void *v283; // [rsp+248h] [rbp-258h]
  __int64 (__fastcall **v284)(); // [rsp+250h] [rbp-250h]
  _QWORD *v285; // [rsp+258h] [rbp-248h]
  __int64 v286; // [rsp+260h] [rbp-240h] BYREF
  void *v287; // [rsp+268h] [rbp-238h]
  __int64 v288; // [rsp+278h] [rbp-228h]
  void *v289; // [rsp+280h] [rbp-220h]
  __int64 v290[2]; // [rsp+288h] [rbp-218h] BYREF
  char v291; // [rsp+298h] [rbp-208h]
  __m128i v292; // [rsp+2A0h] [rbp-200h] BYREF
  int v293[2]; // [rsp+2B0h] [rbp-1F0h]
  void *v294[2]; // [rsp+2B8h] [rbp-1E8h]
  __int64 v295; // [rsp+2C8h] [rbp-1D8h]
  _QWORD v296[3]; // [rsp+2D0h] [rbp-1D0h] BYREF
  void *v297; // [rsp+2E8h] [rbp-1B8h]
  __int64 v298; // [rsp+2F8h] [rbp-1A8h]
  void *v299[2]; // [rsp+300h] [rbp-1A0h]
  __m128i v300; // [rsp+310h] [rbp-190h] BYREF
  __int64 v301; // [rsp+320h] [rbp-180h]
  __int64 v302; // [rsp+328h] [rbp-178h]
  __int64 v303; // [rsp+330h] [rbp-170h]
  __int64 v304; // [rsp+338h] [rbp-168h]
  __int64 v305; // [rsp+340h] [rbp-160h]
  __int64 v306; // [rsp+348h] [rbp-158h]
  __int64 v307; // [rsp+350h] [rbp-150h]
  __int64 v308; // [rsp+358h] [rbp-148h]
  __int64 v309; // [rsp+360h] [rbp-140h]
  __int64 *v310; // [rsp+368h] [rbp-138h]
  __int64 v311; // [rsp+370h] [rbp-130h]
  __int64 v312; // [rsp+378h] [rbp-128h]
  __int64 v313; // [rsp+380h] [rbp-120h]
  int v314; // [rsp+388h] [rbp-118h]
  __int64 v315; // [rsp+390h] [rbp-110h]
  __int64 v316; // [rsp+398h] [rbp-108h] BYREF
  _QWORD v317[14]; // [rsp+3A0h] [rbp-100h] BYREF
  int v318; // [rsp+410h] [rbp-90h]
  __int64 v319; // [rsp+418h] [rbp-88h]
  __int64 v320; // [rsp+420h] [rbp-80h] BYREF
  __int64 v321; // [rsp+428h] [rbp-78h] BYREF
  unsigned int *v322; // [rsp+430h] [rbp-70h] BYREF
  __int64 v323; // [rsp+438h] [rbp-68h] BYREF
  unsigned int *v324; // [rsp+440h] [rbp-60h] BYREF
  __int64 v325; // [rsp+448h] [rbp-58h] BYREF
  _QWORD *v326; // [rsp+450h] [rbp-50h]
  __int64 v327; // [rsp+458h] [rbp-48h] BYREF
  char v328[64]; // [rsp+460h] [rbp-40h] BYREF

  v292.m128i_i64[0] = *a2;
  v243 = _mm_unpacklo_epi64((__m128i)v292.m128i_u64[0], (__m128i)v292.m128i_u64[0]);
  sub_1684300(&v292.m128i_u64[1], v292.m128i_i64[0]);
  v7 = _mm_load_si128(&v243);
  *(_OWORD *)v294 = 0;
  *(_OWORD *)v299 = 0;
  v295 = v292.m128i_i64[0];
  v296[0] = &off_1C62200;
  v310 = &v316;
  v296[2] = 0;
  v297 = nullptr;
  v298 = 0;
  v301 = v292.m128i_i64[0];
  v302 = 0;
  v303 = v292.m128i_i64[0];
  v304 = 0;
  v305 = 0;
  v306 = 0;
  v307 = 0;
  v308 = v292.m128i_i64[0];
  v309 = 0;
  v311 = 1;
  v312 = 0;
  v313 = 0;
  v315 = 0;
  v316 = 0;
  v317[0] = v292.m128i_i64[0];
  v317[1] = v292.m128i_i64[0];
  v317[2] = 0;
  v317[3] = v292.m128i_i64[0];
  memset(&v317[4], 0, 32);
  v300 = v7;
  v314 = 1065353216;
  v317[8] = v292.m128i_i64[0];
  v317[9] = 0;
  v317[10] = &v320;
  v317[11] = 1;
  v317[12] = 0;
  v317[13] = 0;
  v319 = 0;
  v320 = 0;
  v321 = v292.m128i_i64[0];
  v322 = nullptr;
  v323 = v292.m128i_i64[0];
  v324 = nullptr;
  v325 = v292.m128i_i64[0];
  v326 = nullptr;
  v327 = v292.m128i_i64[0];
  v318 = 1065353216;
  sub_1684300(v328, v292.m128i_i64[0]);
  v8 = (void (***)(void))v294[0];
  if ( v294[0] )
  {
    v243.m128i_i32[0] = *((_DWORD *)v294[0] + 4);
    v9 = v243.m128i_i32[0] == 1;
    *((_DWORD *)v294[0] + 4) = v243.m128i_i32[0] - 1;
    if ( v9 )
    {
      (**v8)();
      sub_186B220(v8);
    }
  }
  v294[0] = nullptr;
  sub_3E5D00((__int64)v294[1], v295);
  v294[1] = nullptr;
  sub_15D08E0(v296);
  sub_3E5D20((__int64)v299[1], v300.m128i_i64[0]);
  v299[1] = nullptr;
  sub_14E9CE0(&v300.m128i_u64[1]);
  sub_14E9CE0(v317);
  v10 = v322;
  if ( v322 )
  {
    v11 = &v322[2 * *(v322 - 1)];
    if ( v322 >= v11 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 )
        {
          v13 = v321;
          v9 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v9 )
            break;
        }
        v10 += 2;
        if ( v10 >= v11 )
          goto LABEL_11;
      }
      sub_15D7BC0(v13, v12);
      v10 += 2;
    }
    while ( v10 < v11 );
LABEL_11:
    v10 = v322;
    if ( v322 )
LABEL_12:
      *(v10 - 1) = 0;
  }
  v14 = v324;
  if ( v324 )
  {
    v15 = &v324[2 * *(v324 - 1)];
    if ( v324 >= v15 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)v14;
        if ( *(_QWORD *)v14 )
        {
          v17 = v323;
          v9 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v9 )
            break;
        }
        v14 += 2;
        if ( v14 >= v15 )
          goto LABEL_20;
      }
      sub_15D7BC0(v17, v16);
      v14 += 2;
    }
    while ( v14 < v15 );
LABEL_20:
    v14 = v324;
    if ( v324 )
LABEL_21:
      *(v14 - 1) = 0;
  }
  v18 = v326;
  if ( v326 )
  {
    v19 = (unsigned __int64)&v326[*((unsigned int *)v326 - 1)];
    if ( (unsigned __int64)v326 >= v19 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = v325;
          v9 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( (unsigned __int64)++v18 >= v19 )
          goto LABEL_29;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( (unsigned __int64)v18 < v19 );
LABEL_29:
    v18 = v326;
    if ( v326 )
LABEL_30:
      *((_DWORD *)v18 - 1) = 0;
  }
  v22 = v292.m128i_i64[0];
  ++a1[4];
  v247 = v22;
  v23 = (void (***)(void))v294[0];
  if ( v294[0] )
  {
    v243.m128i_i32[0] = *((_DWORD *)v294[0] + 4);
    v9 = v243.m128i_i32[0] == 1;
    *((_DWORD *)v294[0] + 4) = v243.m128i_i32[0] - 1;
    if ( v9 )
    {
      (**v23)();
      sub_186B220(v23);
    }
  }
  v294[0] = a1;
  v218 = nullptr;
  v24 = (__int64 *)a2[1];
  v25 = v24;
  if ( !v24 )
    goto LABEL_74;
  v217 = 0;
  do
  {
    if ( v217 >= *((_DWORD *)v24 - 1) )
    {
      v81 = (unsigned __int64)&v24[*((unsigned int *)v24 - 1)];
      if ( (unsigned __int64)v24 < v81 )
      {
        do
        {
          while ( 1 )
          {
            v82 = *v25;
            if ( *v25 )
            {
              v83 = *a2;
              v9 = (*(_DWORD *)(v82 + 8))-- == 1;
              if ( v9 )
                break;
            }
            if ( (unsigned __int64)++v25 >= v81 )
              goto LABEL_159;
          }
          sub_15D7BC0(v83, v82);
          ++v25;
        }
        while ( (unsigned __int64)v25 < v81 );
LABEL_159:
        v24 = (__int64 *)a2[1];
      }
      if ( v24 )
        *((_DWORD *)v24 - 1) = 0;
      break;
    }
    v26 = v294[1];
    if ( v294[1] )
    {
      v27 = v295;
      v9 = (*((_DWORD *)v294[1] + 2))-- == 1;
      if ( v9 )
        sub_15D7BC0(v27, v26);
    }
    v294[1] = nullptr;
    sub_15D08E0(v296);
    v28 = v299[1];
    if ( v299[1] )
    {
      v29 = v300.m128i_i64[0];
      v9 = (*((_DWORD *)v299[1] + 2))-- == 1;
      if ( v9 )
        sub_15D7BC0(v29, v28);
    }
    v299[1] = nullptr;
    sub_14E9CE0(&v300.m128i_u64[1]);
    sub_14E9CE0(v317);
    v30 = v322;
    if ( v322 )
    {
      v31 = &v322[2 * *(v322 - 1)];
      if ( v322 >= v31 )
        goto LABEL_51;
      do
      {
        while ( 1 )
        {
          v32 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 )
          {
            v33 = v321;
            v9 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v9 )
              break;
          }
          v30 += 2;
          if ( v30 >= v31 )
            goto LABEL_50;
        }
        sub_15D7BC0(v33, v32);
        v30 += 2;
      }
      while ( v30 < v31 );
LABEL_50:
      v30 = v322;
      if ( v322 )
LABEL_51:
        *(v30 - 1) = 0;
    }
    v34 = v324;
    if ( v324 )
    {
      v35 = &v324[2 * *(v324 - 1)];
      if ( v324 >= v35 )
        goto LABEL_60;
      do
      {
        while ( 1 )
        {
          v36 = *(_QWORD *)v34;
          if ( *(_QWORD *)v34 )
          {
            v37 = v323;
            v9 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v9 )
              break;
          }
          v34 += 2;
          if ( v34 >= v35 )
            goto LABEL_59;
        }
        sub_15D7BC0(v37, v36);
        v34 += 2;
      }
      while ( v34 < v35 );
LABEL_59:
      v34 = v324;
      if ( v324 )
LABEL_60:
        *(v34 - 1) = 0;
    }
    v38 = *(_DWORD **)(a2[1] + 8LL * v217);
    if ( v38 )
      ++v38[2];
    v39 = v294[1];
    if ( v294[1] )
    {
      v40 = v295;
      v9 = (*((_DWORD *)v294[1] + 2))-- == 1;
      if ( v9 )
        sub_15D7BC0(v40, v39);
    }
    v294[1] = v38;
    v41 = *(_QWORD **)(sub_15D1F10(v38) + 24);
    if ( !v41 || *v41 != v292.m128i_u32[2] )
    {
      v42 = v294[1];
      if ( v294[1] )
        ++*((_DWORD *)v294[1] + 2);
      v43 = *(_QWORD *)(a4 + 8);
      if ( !v43 || (v44 = *(_DWORD *)(v43 - 4), v44 == *(_DWORD *)(v43 - 8)) )
      {
        sub_3A6B20((unsigned int **)(a4 + 8));
        v43 = *(_QWORD *)(a4 + 8);
        v44 = *(_DWORD *)(v43 - 4);
      }
      *(_QWORD *)(v43 + 8LL * v44) = v42;
      *(_DWORD *)(v43 - 4) = v44 + 1;
      goto LABEL_73;
    }
    v249 = v292.m128i_i64[0];
    v47 = *a3;
    if ( *(_WORD *)(*a3 + 4) )
    {
LABEL_82:
      v221 = nullptr;
      goto LABEL_83;
    }
    v275 = nullptr;
    v276[0] = nullptr;
    v277 = nullptr;
    v274.m128i_i64[0] = (__int64)&off_1C62200;
    v278 = nullptr;
    v69 = (_QWORD *)sub_186B270(0x18u);
    v69[1] = v47;
    v70 = (unsigned int *)(v69 + 1);
    v221 = nullptr;
    *v69 = 0x100000002LL;
    v71 = 1;
    do
    {
      v72 = *(_QWORD *)&v70[2 * (v71 - 1)];
      v73 = sub_15D37A0(&v274, v72);
      if ( v73 )
      {
        --*(v70 - 1);
        goto LABEL_131;
      }
      v207 = *(unsigned int *)(v72 + 24);
      v208 = 1;
      v243.m128i_i64[0] = v72 + 32;
      v207 *= 8;
      v242 = v72 + 32 + v207;
      if ( !v207 )
      {
        --*(v70 - 1);
        if ( *(_WORD *)(v72 + 4) || (v211 = *(_DWORD **)(*(_QWORD *)(v72 + 16) + 24LL)) == nullptr )
        {
LABEL_396:
          sub_15D0A90(&v274, v72, 1);
          goto LABEL_131;
        }
        if ( v292.m128i_i32[2] != *v211 )
        {
LABEL_384:
          if ( !*v211 && v211[1] == 2 )
          {
            v212 = *(void **)(v72 + 32);
            if ( *(void **)(v72 + 40) == v294[1]
              || v212 == v294[1]
              || (v213 = *(_QWORD **)(sub_15D1F10(v212) + 24)) != nullptr
              && *v213 == v292.m128i_u32[2]
              && (unsigned __int8)sub_15D37A0(v296, v72) )
            {
              v261 = v72;
              ++*(_DWORD *)(v72 + 8);
              v250 = v221;
              sub_3E6950(&v250, &v261);
              v221 = v250;
            }
          }
          goto LABEL_374;
        }
LABEL_394:
        if ( v211[1] )
          goto LABEL_384;
        if ( *(void **)(v72 + 32) != v294[1] )
          goto LABEL_396;
        goto LABEL_373;
      }
      do
      {
        v209 = *(_QWORD *)v243.m128i_i64[0];
        if ( !*(_WORD *)(*(_QWORD *)v243.m128i_i64[0] + 4LL) )
        {
          if ( (unsigned __int8)sub_15D37A0(&v274, *(_QWORD *)v243.m128i_i64[0]) )
          {
            if ( !v73 )
              v73 = sub_15D37A0(v296, v209);
          }
          else
          {
            if ( !v70 || (v210 = *(v70 - 1), v210 == *(v70 - 2)) )
            {
              v245 = v70;
              sub_3A6B20(&v245);
              v70 = v245;
              v210 = *(v245 - 1);
            }
            v208 = 0;
            *(_QWORD *)&v70[2 * v210] = v209;
            *(v70 - 1) = v210 + 1;
          }
        }
        v243.m128i_i64[0] += 8;
      }
      while ( v242 != v243.m128i_i64[0] );
      if ( v208 )
      {
        --*(v70 - 1);
        if ( *(_WORD *)(v72 + 4) || (v211 = *(_DWORD **)(*(_QWORD *)(v72 + 16) + 24LL)) == nullptr )
        {
          if ( !v73 )
            goto LABEL_396;
        }
        else if ( v292.m128i_i32[2] == *v211 )
        {
          if ( v211[1] == 1 || !v73 )
            goto LABEL_394;
        }
        else if ( !v73 )
        {
          goto LABEL_384;
        }
LABEL_373:
        sub_15D0A90(v296, v72, 1);
        if ( !*(_WORD *)(v72 + 4) )
        {
          v211 = *(_DWORD **)(*(_QWORD *)(v72 + 16) + 24LL);
          if ( v211 )
            goto LABEL_384;
        }
LABEL_374:
        sub_15D0A90(&v274, v72, 1);
      }
      if ( !v70 )
        goto LABEL_133;
LABEL_131:
      v71 = *(v70 - 1);
    }
    while ( v71 );
    sub_186B220(v70 - 2);
LABEL_133:
    v274.m128i_i64[0] = (__int64)&off_1C62200;
    if ( v278 )
      sub_186B220(v278);
    if ( v276[0] )
      sub_186B220(v276[0]);
    if ( !v221 )
      goto LABEL_82;
    v74 = 0;
    v223 = nullptr;
    while ( 2 )
    {
      if ( v74 < *(v221 - 1) )
      {
        v77 = *(_QWORD *)&v221[2 * v74];
        v274.m128i_i64[0] = 0;
        v78 = *(_QWORD *)(v77 + 32);
        v79 = *(_QWORD *)(v77 + 40);
        v274.m128i_i64[1] = v292.m128i_i64[0];
        sub_3FBAE0(&v327, v294[0], v77, v78, v79, &v274);
        v80 = v274.m128i_i64[0];
        if ( v274.m128i_i64[0] )
        {
          if ( *(_QWORD *)(v292.m128i_i64[0] + 864) == v274.m128i_i64[0] )
            goto LABEL_152;
        }
        else
        {
          v80 = *(_QWORD *)(v292.m128i_i64[0] + 856);
          if ( v80 )
            ++*(_DWORD *)(v80 + 8);
          sub_3E5D20(0, v274.m128i_i64[1]);
          v274.m128i_i64[0] = v80;
          if ( *(_QWORD *)(v292.m128i_i64[0] + 864) == v80 )
          {
LABEL_152:
            sub_14EA0D0(v317, v77, v80);
            v80 = v274.m128i_i64[0];
LABEL_143:
            if ( v80 )
            {
              v76 = v274.m128i_i64[1];
              v9 = (*(_DWORD *)(v80 + 8))-- == 1;
              if ( v9 )
                sub_15D7BC0(v76, v80);
            }
            ++v74;
            continue;
          }
        }
        if ( !v223 || (v75 = *(v223 - 1), v75 == *(v223 - 2)) )
        {
          v244 = v223;
          sub_3A6B20(&v244);
          v80 = v274.m128i_i64[0];
          v223 = v244;
          v75 = *(v244 - 1);
        }
        *(_QWORD *)&v223[2 * v75] = v77;
        *(v223 - 1) = v75 + 1;
        goto LABEL_143;
      }
      break;
    }
    if ( !v223 )
      goto LABEL_83;
    v84 = *(v223 - 1);
    v224 = v84;
    if ( !v84 )
      goto LABEL_338;
    v85 = v84;
    v86 = 4LL * v84 + 8;
    v87 = (_QWORD *)sub_186B270(v86);
    v88 = _mm_cvtsi32_si128(v84);
    v89 = v87 + 1;
    v90 = v87;
    *v87 = _mm_shuffle_epi32(v88, 224).m128i_u64[0];
    v91 = 4 * v85;
    ptr = (char *)v87;
    memset(v87 + 1, 0, v86 - 8);
    v243.m128i_i64[0] = 0;
    while ( 2 )
    {
      v92 = *(_QWORD *)((char *)v223 + 2 * v243.m128i_i64[0]);
      v93 = *(_QWORD **)(v92 + 32);
      v94 = *(_QWORD **)(v92 + 40);
      if ( v93 == v294[1] )
      {
        if ( v94 != v93 && !(unsigned __int8)sub_15D37A0(v296, *(_QWORD *)(v92 + 40)) )
          goto LABEL_343;
        goto LABEL_174;
      }
      v95 = sub_15D37A0(v296, *(_QWORD *)(v92 + 32));
      v96 = v95;
      if ( v94 == v294[1] || (v239 = v95, v97 = sub_15D37A0(v296, v94), v96 = v239, v97) )
      {
        if ( !v96 )
          goto LABEL_173;
        goto LABEL_174;
      }
      if ( !v239 )
        goto LABEL_173;
LABEL_343:
      v94 = v93;
LABEL_173:
      if ( v94 )
      {
        for ( i = 1; !*((_WORD *)v94 + 2); ++i )
        {
          v147 = *(_QWORD **)(v94[2] + 24LL);
          if ( !v147 )
            break;
          if ( *v147 != v292.m128i_u32[2] )
            break;
          v94 = (_QWORD *)v94[4];
        }
      }
      else
      {
LABEL_174:
        i = 0;
      }
      v99 = v243.m128i_i64[0];
      *(_DWORD *)&ptr[v243.m128i_i64[0] + 8] = i;
      v243.m128i_i64[0] = v99 + 4;
      if ( v91 != v99 + 4 )
        continue;
      break;
    }
    if ( v224 != 1 )
    {
      v100 = v89;
      v101 = 1;
      v102 = ptr + 4;
      v103 = v223;
      v104 = v90;
      v105 = (__int64 *)(v223 + 2);
      v243.m128i_i32[0] = v224;
      do
      {
        v106 = *v105;
        v107 = v292.m128i_i64[0];
        if ( *v105 )
          ++*(_DWORD *)(v106 + 8);
        v108 = *((_DWORD *)v102 + 2);
        LODWORD(v109) = v101;
        v110 = 0;
        while ( 1 )
        {
          v111 = *(_DWORD *)((char *)v104 + v110 * 2 + 8);
          v112 = v109;
          v109 = (unsigned int)(v109 - 1);
          if ( v108 >= v111 )
            break;
          v105[v110 / 2] = *(_QWORD *)&v103[v110];
          *(_DWORD *)&v102[v110 * 2 + 8] = v111;
          v110 -= 2LL;
          if ( !(_DWORD)v109 )
            goto LABEL_183;
        }
        if ( v112 < v101 )
        {
          v109 = v112;
LABEL_183:
          *(_QWORD *)&v223[2 * v109] = v106;
          *((_DWORD *)v100 + v109) = v108;
        }
        if ( v106 )
        {
          v9 = (*(_DWORD *)(v106 + 8))-- == 1;
          if ( v9 )
          {
            v241 = v100;
            sub_15D7BC0(v107, v106);
            v100 = v241;
          }
        }
        ++v101;
        ++v105;
        v103 += 2;
        v102 += 4;
        v104 = (_QWORD *)((char *)v104 + 4);
      }
      while ( v243.m128i_i32[0] != v101 );
    }
    v222 = 0;
    v214 = v299[1];
    if ( v299[1] )
      goto LABEL_337;
    while ( 2 )
    {
      v113 = *(_QWORD *)&v223[2 * v222];
      sub_14EA0D0(&v300.m128i_u64[1], v113, *(_QWORD *)(v292.m128i_i64[0] + 856));
      v114 = *(_QWORD *)(v113 + 32);
      v115 = *(_QWORD *)(v113 + 40);
      v236 = (_QWORD *)v292.m128i_i64[0];
      v275 = (int *)v292.m128i_i64[0];
      v116 = _mm_unpacklo_epi64((__m128i)v115, (__m128i)v292.m128i_u64[0]);
      v274 = _mm_unpacklo_epi64((__m128i)v292.m128i_u64[0], (__m128i)v114);
      if ( v114 )
        ++*(_DWORD *)(v114 + 8);
      *(__m128i *)v276 = v116;
      if ( v115 )
        ++*(_DWORD *)(v115 + 8);
      LODWORD(v277) = 0;
      v279 = 0;
      v278 = v236;
      v280 = nullptr;
      v281 = v236;
      v282 = 0;
      v283 = v236;
      v284 = nullptr;
      v285 = v236;
      sub_1684300(&v286, v236);
      v117 = sub_15D1F10(v274.m128i_i64[1]);
      v118 = (_QWORD *)sub_186B270(0x18u);
      v118[1] = v117;
      v119 = v118;
      v120 = v118 + 1;
      v121 = v276[0];
      *v118 = 0x100000002LL;
      v122 = sub_15D1F10(v121);
      v123 = v119[1];
      if ( v123 == *v119 )
      {
        v204 = (3 * v123 + 1) >> 1;
        v205 = 8 * v204 + 8;
        if ( 8 * v123 + 8 >= v205 || v123 >= v204 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v261, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v261);
          sub_233E40((__int64)&v261);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v206 = (unsigned int *)sub_186B300(v119, v205);
        *v206 = v204;
        v120 = v206 + 2;
        v123 = v206[1];
      }
      v124 = v123 + 1;
      v120[v123] = v122;
      v125 = s;
      *((_DWORD *)v120 - 1) = v123 + 1;
      v126 = v236[105];
      sub_180C5A0(&v261, v125);
      v127 = sub_15E3510(v236, &v261, v124, v120, v126, 0);
      v128 = (void *)v127;
      if ( v127 )
        ++*(_DWORD *)(v127 + 8);
      v129 = v280;
      if ( v280 )
      {
        v130 = v281;
        v9 = (*((_DWORD *)v280 + 2))-- == 1;
        if ( v9 )
          sub_15D7BC0(v130, v129);
      }
      v280 = v128;
      sub_186B220(v120 - 1);
      v251 = 0;
      v252 = v236;
      sub_3E69A0((const double *)v274.m128i_i64, &v251);
      v238 = v251;
      v237 = (__int64)v252;
      sub_3ED220(&v274);
LABEL_200:
      sub_3E6180(&v261, v238, v292.m128i_i64[0]);
      v131 = v262;
      v229 = v292.m128i_i64[0];
      if ( v262 )
        ++v262[2];
      v240 = v264;
      if ( v264 )
        ++*(_DWORD *)(v264 + 8);
      if ( (unsigned __int8)sub_15D37A0(v296, v131) )
      {
        v132 = (_DWORD *)v240;
        v240 = (__int64)v131;
        v131 = v132;
      }
      v225 = sub_15D37A0(v296, v240);
      if ( v225 )
      {
        v148 = v267;
        v149 = nullptr;
        v150 = 0;
        v253 = v292.m128i_i64[0];
        if ( !v267 )
        {
          v255 = v292.m128i_i64[0];
          v156 = *(_QWORD *)(v240 + 40);
          v227 = *(_QWORD *)(v240 + 32);
LABEL_324:
          if ( v156 )
            ++*(_DWORD *)(v156 + 8);
          v159 = nullptr;
          v149 = nullptr;
LABEL_327:
          v254 = v149;
          sub_23A6F0(&v254);
          v149 = v254;
          v158 = *(v254 - 1);
          goto LABEL_294;
        }
        while ( v150 < *((_DWORD *)v148 - 1) )
        {
          v151 = v148[v150];
          if ( v151 )
            ++*(_DWORD *)(v151 + 8);
          if ( v149 )
          {
            v152 = *(v149 - 1);
            if ( v152 == *(v149 - 2) )
            {
              v168 = (3 * v152 + 1) >> 1;
              v169 = 8 * v168 + 8;
              if ( 8 * v152 + 8 >= (unsigned int)v169 || v152 >= v168 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v274.m128i_i64, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, &v274);
                sub_233E40((__int64)&v274);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v170 = (unsigned int *)sub_186B300(v149 - 2, v169);
              v171 = v170[1];
              v149 = v170 + 2;
              *v170 = v168;
              LODWORD(v170) = v171;
              v155 = &v149[2 * v171];
              v148 = v267;
              v154 = (_DWORD)v170 + 1;
            }
            else
            {
              v153 = v152;
              v154 = v152 + 1;
              v155 = &v149[2 * v153];
            }
          }
          else
          {
            v198 = (_QWORD *)sub_186B270(0x18u);
            v155 = (unsigned int *)(v198 + 1);
            v148 = v267;
            *v198 = 2;
            v149 = (unsigned int *)(v198 + 1);
            v154 = 1;
          }
          *(_QWORD *)v155 = v151;
          *(v149 - 1) = v154;
          ++v150;
          if ( !v148 )
          {
            v156 = *(_QWORD *)(v240 + 40);
            v227 = *(_QWORD *)(v240 + 32);
            v157 = v292.m128i_i64[0];
            v255 = v292.m128i_i64[0];
            goto LABEL_251;
          }
        }
        v156 = *(_QWORD *)(v240 + 40);
        v227 = *(_QWORD *)(v240 + 32);
        v157 = v292.m128i_i64[0];
        v255 = v292.m128i_i64[0];
        if ( !v149 )
          goto LABEL_324;
LABEL_251:
        v158 = *(v149 - 1);
        if ( !v158 )
        {
          v159 = nullptr;
          if ( !v156 )
            goto LABEL_293;
          goto LABEL_291;
        }
        v258 = v157;
        v257 = 0;
        sub_3FA320(&v327, v294[0], v156, &v257, 1);
        v159 = nullptr;
        v160 = 0;
        if ( !*(v149 - 1) )
        {
          sub_3E5D20(v257, v258);
LABEL_351:
          v159 = nullptr;
          if ( !v156 )
            goto LABEL_292;
LABEL_291:
          ++*(_DWORD *)(v156 + 8);
          goto LABEL_292;
        }
        while ( 1 )
        {
          if ( *(_QWORD *)&v149[2 * v160] == v156 )
          {
LABEL_268:
            sub_3E5D20(v257, v258);
LABEL_269:
            sub_3E6600((__int64)&v274, v227, (__int64)v131, *(v149 - 1), v149, v292.m128i_i64[0]);
            v251 = v238;
            v252 = (_QWORD *)v237;
            sub_3E69A0((const double *)v274.m128i_i64, &v251);
            v238 = v251;
            v237 = (__int64)v252;
            sub_3ED220(&v274);
            goto LABEL_270;
          }
          v274.m128i_i64[0] = 0;
          v230 = *(_QWORD *)&v149[2 * v160];
          v226 = v292.m128i_i64[0];
          v274.m128i_i64[1] = v292.m128i_i64[0];
          v161 = sub_15E1B70(v292.m128i_i32[0]);
          v243.m128i_i64[0] = v161;
          if ( v161 )
            ++*(_DWORD *)(v161 + 8);
          sub_3FA320(&v327, v294[0], v230, &v274, 1);
          if ( v257 == v274.m128i_i64[0] )
            break;
          v162 = sub_15E1A70(v292.m128i_i32[0]);
          if ( v162 )
            ++*(_DWORD *)(v162 + 8);
          if ( !v159 || (v163 = *(v159 - 1), v163 == *(v159 - 2)) )
          {
            v232 = v162;
            v256 = v159;
            sub_23A6F0(&v256);
            v159 = v256;
            v162 = v232;
            v163 = *(v256 - 1);
          }
          *(_QWORD *)&v159[2 * v163] = v162;
          *(v159 - 1) = v163 + 1;
          v164 = 0;
          if ( v243.m128i_i64[0] )
            goto LABEL_262;
LABEL_264:
          v166 = v274.m128i_i64[0];
          if ( v274.m128i_i64[0]
            && (v167 = v274.m128i_i64[1],
                v9 = *(_DWORD *)(v274.m128i_i64[0] + 8) == 1,
                --*(_DWORD *)(v274.m128i_i64[0] + 8),
                v9) )
          {
            v243.m128i_i8[0] = v164;
            sub_15D7BC0(v167, v166);
            v164 = v243.m128i_i8[0];
            if ( (int)v160 + 1 >= *(v149 - 1) )
            {
LABEL_280:
              v243.m128i_i8[0] = v164;
              sub_3E5D20(v257, v258);
              if ( v243.m128i_i8[0] )
                goto LABEL_269;
              if ( !v159 )
                goto LABEL_351;
              for ( j = 0; j < *(v159 - 1); ++j )
              {
                v173 = *(_QWORD *)&v159[2 * j];
                v243.m128i_i64[0] = v173;
                if ( v173 )
                  ++*(_DWORD *)(v173 + 8);
                v174 = v324;
                if ( !v324 || (v175 = *(v324 - 1), v175 == *(v324 - 2)) )
                {
                  sub_23A6F0(&v324);
                  v174 = v324;
                  v175 = *(v324 - 1);
                }
                *(_QWORD *)&v174[2 * v175] = v243.m128i_i64[0];
                *(v174 - 1) = v175 + 1;
              }
              if ( v156 )
                goto LABEL_291;
LABEL_292:
              v158 = *(v149 - 1);
LABEL_293:
              if ( v158 == *(v149 - 2) )
                goto LABEL_327;
LABEL_294:
              v176 = v158;
              v177 = v158 + 1;
              *(_QWORD *)&v149[2 * v176] = v156;
              v178 = v292.m128i_i64[0];
              *(v149 - 1) = v177;
              sub_3E6600((__int64)&v274, v227, (__int64)v131, v177, v149, v178);
              v251 = v238;
              v252 = (_QWORD *)v237;
              sub_3E69A0((const double *)v274.m128i_i64, &v251);
              v179 = v284;
              v238 = v251;
              v237 = (__int64)v252;
              if ( v284 )
              {
                v180 = v285;
                v9 = (*((_DWORD *)v284 + 2))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v180, v179);
              }
              v181 = v282;
              if ( v282 )
              {
                v182 = v283;
                v9 = (*(_DWORD *)(v282 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v182, v181);
              }
              v183 = v280;
              if ( v280 )
              {
                v184 = v281;
                v9 = (*((_DWORD *)v280 + 2))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v184, v183);
              }
              sub_2334C0((__int64 *)&v278);
              v185 = v276[0];
              if ( v276[0] )
              {
                v186 = v276[1];
                v9 = (*((_DWORD *)v276[0] + 2))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v186, v185);
              }
              v187 = v274.m128i_i64[1];
              if ( v274.m128i_i64[1] )
              {
                v188 = v275;
                v9 = (*(_DWORD *)(v274.m128i_i64[1] + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v188, v187);
              }
              v189 = (_QWORD *)sub_186B270(0x18u);
              v189[1] = v131;
              v190 = v189;
              v189[2] = v156;
              v191 = v293[0];
              *v189 = 0x200000002LL;
              v228 = v292.m128i_i64[0];
              v192 = sub_15DCAD0(v191, (int)v189 + 8, 0);
              v243.m128i_i64[0] = v192;
              if ( v192 )
                ++*(_DWORD *)(v192 + 8);
              v234 = v292.m128i_i64[0];
              v193 = sub_15E1B70(v292.m128i_i32[0]);
              v194 = v193;
              if ( v193 )
                *(_DWORD *)(v193 + 8) += 2;
              v195 = v322;
              if ( !v322 || (v196 = *(v322 - 1), v196 == *(v322 - 2)) )
              {
                sub_23A6F0(&v322);
                v195 = v322;
                v196 = *(v322 - 1);
              }
              *(_QWORD *)&v195[2 * v196] = v194;
              *(v195 - 1) = v196 + 1;
              if ( v194 )
              {
                v9 = (*(_DWORD *)(v194 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v234, v194);
              }
              v197 = v243.m128i_i64[0];
              if ( v243.m128i_i64[0] )
              {
                v235 = *(_DWORD *)(v243.m128i_i64[0] + 8);
                *(_DWORD *)(v243.m128i_i64[0] + 8) = v235 - 1;
                if ( v235 == 1 )
                  sub_15D7BC0(v228, v197);
              }
              sub_186B220(v190);
LABEL_270:
              v256 = v159;
              sub_2334C0(&v255);
              v254 = v149;
              sub_2334C0(&v253);
              if ( !v131 )
                goto LABEL_212;
              v9 = v131[2]-- == 1;
              if ( v9 )
                sub_15D7BC0(v229, v131);
              if ( v240 )
              {
LABEL_212:
                v243.m128i_i32[0] = *(_DWORD *)(v240 + 8);
                v9 = v243.m128i_i32[0] == 1;
                *(_DWORD *)(v240 + 8) = v243.m128i_i32[0] - 1;
                if ( v9 )
                  sub_15D7BC0(v229, v240);
              }
              v133 = v272;
              if ( v272 )
              {
                v134 = v273;
                v9 = (*(_DWORD *)(v272 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v134, v133);
              }
              v135 = v270;
              if ( v270 )
              {
                v136 = v271;
                v9 = (*(_DWORD *)(v270 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v136, v135);
              }
              v137 = v268;
              if ( v268 )
              {
                v138 = v269;
                v9 = (*(_DWORD *)(v268 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v138, v137);
              }
              v139 = v267;
              if ( v267 )
              {
                if ( v267 >= &v267[*((unsigned int *)v267 - 1)] )
                  goto LABEL_231;
                v140 = (unsigned __int64)&v267[*((unsigned int *)v267 - 1)];
                do
                {
                  while ( 1 )
                  {
                    v141 = *v139;
                    if ( *v139 )
                    {
                      v142 = v266;
                      v9 = (*(_DWORD *)(v141 + 8))-- == 1;
                      if ( v9 )
                        break;
                    }
                    if ( (unsigned __int64)++v139 >= v140 )
                      goto LABEL_230;
                  }
                  sub_15D7BC0(v142, v141);
                  ++v139;
                }
                while ( (unsigned __int64)v139 < v140 );
LABEL_230:
                v139 = v267;
                if ( v267 )
LABEL_231:
                  sub_186B220(v139 - 1);
              }
              v143 = v264;
              if ( v264 )
              {
                v144 = v265;
                v9 = (*(_DWORD *)(v264 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v144, v143);
              }
              v145 = v262;
              if ( v262 )
              {
                v146 = v263;
                v9 = v262[2]-- == 1;
                if ( v9 )
                  sub_15D7BC0(v146, v145);
              }
              goto LABEL_200;
            }
          }
          else if ( (int)v160 + 1 >= *(v149 - 1) )
          {
            goto LABEL_280;
          }
          ++v160;
          if ( v164 )
            goto LABEL_268;
        }
        v246 = v243.m128i_i64[0];
        if ( !v243.m128i_i64[0] )
        {
          sub_3E6950(&v324, &v246);
          v164 = v225;
          goto LABEL_264;
        }
        ++*(_DWORD *)(v243.m128i_i64[0] + 8);
        sub_3E6950(&v324, &v246);
        v164 = v225;
LABEL_262:
        v165 = v243.m128i_i64[0];
        v231 = *(_DWORD *)(v243.m128i_i64[0] + 8);
        *(_DWORD *)(v243.m128i_i64[0] + 8) = v231 - 1;
        if ( v231 == 1 )
        {
          v233 = v164;
          sub_15D7BC0(v226, v165);
          v164 = v233;
        }
        goto LABEL_264;
      }
      if ( v131 == (_DWORD *)v240 )
      {
        sub_3E5D20((__int64)v131, v229);
        sub_3E5D20((__int64)v131, v229);
        sub_3ED220(&v261);
      }
      else
      {
        if ( (void *)v240 != v294[1] && v131 != v294[1] )
        {
          sub_1872CE0("");
          sub_1873130(114, 1515);
        }
        sub_3E5D20((__int64)v131, v229);
        sub_3E5D20(v240, v229);
        sub_3ED220(&v261);
        v251 = v238;
        v252 = (_QWORD *)v237;
        sub_3F67C0(&v292, &v251);
        v259 = 0;
        v237 = (__int64)v252;
        v238 = v251;
        v199 = *(void **)(v251 + 40) != v294[1];
        v260 = v292.m128i_i64[0];
        sub_3F20D0(&v292, v251, &v259, v199);
        v200 = v260;
        v201 = *(_DWORD **)(v259 + 40);
        v202 = v259;
        if ( v201 )
          ++v201[2];
        sub_3E5D20((__int64)v299[1], v300.m128i_i64[0]);
        v299[1] = v201;
        sub_3E5D00(v202, v200);
      }
      sub_3E5D00(v238, v237);
      v203 = (int)v222++ + 1 < v224;
      if ( v203 && v299[1] == nullptr )
        continue;
      break;
    }
LABEL_337:
    sub_186B220(ptr);
LABEL_338:
    sub_186B220(v223 - 2);
LABEL_83:
    v250 = v221;
    sub_2334C0(&v249);
    v274.m128i_i64[0] = 0;
    sub_14B7810((int)&v261, v292.m128i_i32[0], (int)&v274, v48, v49, v50, v214);
    sub_18572D0(&v274);
    sub_14B9B80(&v261, a3);
    v51 = v324;
    v274.m128i_i64[0] = v292.m128i_i64[0];
    v52 = 0;
    if ( v324 )
    {
      v53 = 0;
      do
      {
        if ( v53 >= *(v51 - 1) )
          break;
        v54 = *(_QWORD *)&v51[2 * v53];
        if ( v54 )
          ++*(_DWORD *)(v54 + 8);
        if ( v52 )
        {
          v55 = *(_DWORD *)(v52 - 4);
          if ( v55 != *(_DWORD *)(v52 - 8) )
            continue;
        }
        v274.m128i_i64[1] = v52;
        sub_23A6F0((unsigned int **)&v274.m128i_i64[1]);
        v52 = v274.m128i_i64[1];
        v51 = v324;
        v55 = *(_DWORD *)(v274.m128i_i64[1] - 4);
        *(_QWORD *)(v52 + 8LL * v55) = v54;
        *(_DWORD *)(v52 - 4) = v55 + 1;
        ++v53;
      }
      while ( v51 );
    }
    v56 = v322;
    if ( v322 )
    {
      v57 = 0;
      do
      {
        if ( v57 >= *(v56 - 1) )
          break;
        v58 = *(_QWORD *)&v56[2 * v57];
        if ( v58 )
          ++*(_DWORD *)(v58 + 8);
        if ( v52 )
        {
          v59 = *(_DWORD *)(v52 - 4);
          if ( v59 != *(_DWORD *)(v52 - 8) )
            continue;
        }
        v274.m128i_i64[1] = v52;
        sub_23A6F0((unsigned int **)&v274.m128i_i64[1]);
        v52 = v274.m128i_i64[1];
        v56 = v322;
        v59 = *(_DWORD *)(v274.m128i_i64[1] - 4);
        *(_QWORD *)(v52 + 8LL * v59) = v58;
        *(_DWORD *)(v52 - 4) = v59 + 1;
        ++v57;
      }
      while ( v56 );
    }
    v60 = *a3;
    v257 = v60;
    if ( v60 )
      ++*(_DWORD *)(v60 + 8);
    v274.m128i_i64[1] = v52;
    sub_3E6950((unsigned int **)&v274.m128i_i64[1], &v257);
    v61 = sub_15E1AF0(v292.m128i_i32[0]);
    v62 = v61;
    if ( v61 )
      ++*(_DWORD *)(v61 + 8);
    sub_3E5D20(*a3, a3[1]);
    v63 = v299[1];
    *a3 = v62;
    if ( v63 )
    {
      sub_14EA0D0(&v300.m128i_u64[1], v294[1], v63);
      sub_14EA2A0(&v300.m128i_u64[1], *a3, a3);
    }
    else
    {
      sub_14EA2A0(&v300.m128i_u64[1], v62, a3);
      sub_14EA2A0(v317, *a3, a3);
    }
    sub_14B9B80(&v261, a3);
    sub_2334C0(v274.m128i_i64);
    sub_14B63F0(&v261);
    v64 = v294[1];
    v65 = _mm_loadl_epi64(&v292);
    v274 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v294[1], v65);
    if ( v294[1] )
      ++*((_DWORD *)v294[1] + 2);
    v276[0] = v64;
    v275 = &off_1C4E7B8;
    v276[1] = &v275;
    v279 = 0;
    v280 = nullptr;
    v277 = &off_1C62200;
    v282 = 0;
    v283 = nullptr;
    v284 = &off_1C62200;
    v286 = 0;
    v287 = nullptr;
    v288 = 0;
    v289 = nullptr;
    v290[1] = 0;
    v291 = 1;
    v290[0] = v65.m128i_i64[0];
    if ( v299[1] )
    {
      if ( !(unsigned __int8)sub_168D740(&v276[1], v299[1]) )
        goto LABEL_109;
      v64 = v294[1];
    }
    if ( v64 )
      ++v64[2];
    if ( !v218 || (v68 = *(v218 - 1), v68 == *(v218 - 2)) )
    {
      v248 = v218;
      sub_3A6B20(&v248);
      v218 = v248;
      v68 = *(v248 - 1);
    }
    *(_QWORD *)&v218[2 * v68] = v64;
    *(v218 - 1) = v68 + 1;
LABEL_109:
    sub_2334C0(v290);
    v284 = &off_1C62200;
    if ( v289 )
      sub_186B220(v289);
    if ( v287 )
      sub_186B220(v287);
    v277 = &off_1C62200;
    if ( v283 )
      sub_186B220(v283);
    if ( v280 )
      sub_186B220(v280);
    v66 = v274.m128i_i64[0];
    if ( v274.m128i_i64[0] )
    {
      v67 = v274.m128i_i64[1];
      v9 = (*(_DWORD *)(v274.m128i_i64[0] + 8))-- == 1;
      if ( v9 )
        sub_15D7BC0(v67, v66);
    }
LABEL_73:
    ++v217;
    v24 = (__int64 *)a2[1];
    v25 = v24;
  }
  while ( v24 );
LABEL_74:
  v248 = v218;
  sub_3EE030(a2, &v247);
  sub_3EE030(a4, &v325);
  sub_2B4F40(&v247);
  sub_2B4F40(&v325);
  sub_2334C0(&v323);
  sub_2334C0(&v321);
  sub_268600((__int64)v317);
  sub_268600((__int64)&v300.m128i_i64[1]);
  sub_3E5D20((__int64)v299[1], v300.m128i_i64[0]);
  v296[0] = &off_1C62200;
  if ( v299[0] )
    sub_186B220(v299[0]);
  if ( v297 )
    sub_186B220(v297);
  result = sub_3E5D00((__int64)v294[1], v295);
  v46 = (void (__fastcall ***)(_QWORD))v294[0];
  if ( v294[0] )
  {
    v9 = (*((_DWORD *)v294[0] + 4))-- == 1;
    if ( v9 )
    {
      (**v46)(v46);
      return sub_186B220(v46);
    }
  }
  return result;
}

