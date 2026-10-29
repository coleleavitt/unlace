void __fastcall sub_1F932B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  volatile signed __int32 *v8; // rax
  __m128i si128; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  volatile signed __int32 *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  volatile signed __int32 *v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  volatile signed __int32 *v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rax
  volatile signed __int32 *v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  volatile signed __int32 *v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rax
  volatile signed __int32 *v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rax
  volatile signed __int32 *v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rax
  volatile signed __int32 *v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rax
  volatile signed __int32 *v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rax
  volatile signed __int32 *v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rax
  volatile signed __int32 *v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rax
  volatile signed __int32 *v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rax
  unsigned __int64 v73; // r13
  __int64 v74; // r10
  __int64 v75; // r8
  int v76; // r9d
  int v77; // ecx
  __int64 *v78; // rsi
  __int64 *v79; // rdx
  int v80; // eax
  __int64 v81; // rdx
  int v82; // ecx
  int v83; // ecx
  __int64 v84; // rbp
  unsigned __int64 v85; // r12
  __int64 **v86; // rbp
  __int64 *v87; // rax
  __m128i v88; // xmm0
  __int64 v89; // r13
  __int64 v90; // rbp
  unsigned int v91; // r14d
  __int64 v92; // r9
  int v93; // r11d
  int v94; // esi
  void *v95; // r12
  __int64 v96; // rdx
  __int64 v97; // rdi
  __int64 v98; // rax
  __int64 v99; // r9
  unsigned __int64 v100; // r8
  __int64 v101; // r12
  __int64 v102; // rbp
  __int64 v103; // r14
  __int64 v104; // r13
  __int64 v105; // rbx
  unsigned int v106; // ebp
  __int64 v107; // rdx
  __int64 v108; // rdi
  char v109; // al
  _QWORD *v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdi
  __int64 v113; // r14
  __int64 v114; // r13
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rbp
  unsigned __int64 *v119; // rbx
  unsigned int v120; // r12d
  __int64 v121; // r9
  unsigned __int64 v122; // r8
  __int64 v123; // r13
  __int64 v124; // rax
  __int64 v125; // rdx
  size_t **v126; // rbp
  __int64 v127; // r13
  size_t *v128; // r8
  size_t i; // rax
  unsigned __int64 v130; // rax
  size_t v131; // r14
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // r12
  __int64 v136; // rbp
  __int64 v137; // r14
  __int64 v138; // r13
  __int64 v139; // rbx
  unsigned int v140; // ebp
  __int64 v141; // rdx
  __int64 v142; // rdi
  __int64 *v143; // rbp
  __int64 *v144; // r12
  __int64 *v145; // r14
  unsigned int v146; // r13d
  __int64 *v147; // r12
  __int64 v148; // rbp
  __int64 v149; // rsi
  unsigned int v150; // eax
  __int64 v151; // rdi
  __int64 v152; // rbp
  __int64 v153; // r12
  __int64 v154; // r14
  __int64 v155; // r13
  __int64 v156; // rbx
  unsigned int v157; // ebp
  __int64 v158; // rdi
  __int64 v159; // r9
  __int64 *v160; // r12
  __int64 *v161; // rdx
  __int64 *v162; // r13
  __int64 v163; // rcx
  void *v164; // rdi
  void **v165; // rbx
  unsigned __int64 v166; // rbp
  void *v167; // rdi
  __int64 *v168; // rdi
  _BYTE *v169; // rsi
  __int64 v170; // rdx
  __int64 *v171; // r8
  __int64 v172; // r9
  __int64 v173; // rdi
  __int64 v174; // rdi
  int v175; // eax
  int v176; // r11d
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rbp
  __int64 *v180; // r12
  __int64 v181; // rsi
  int v182; // eax
  __int64 v183; // rdi
  int v184; // ecx
  unsigned int v185; // eax
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 *v188; // r12
  __int64 *v189; // rbp
  __int64 v190; // rsi
  unsigned int v191; // eax
  __int64 *v192; // r12
  __int64 *v193; // rbp
  __int64 v194; // rsi
  unsigned int v195; // eax
  __int64 *v196; // r12
  __int64 *v197; // rbp
  __int64 v198; // rsi
  unsigned int v199; // eax
  __int64 v200; // rcx
  _DWORD *v201; // rdx
  int v202; // eax
  int v203; // esi
  __int64 v204; // r8
  bool v205; // zf
  __int64 v206; // rax
  __m128i v207; // xmm0
  int v208; // edx
  __int64 v209; // r9
  __m128i v210; // [rsp+8h] [rbp-410h] BYREF
  size_t *v211; // [rsp+18h] [rbp-400h]
  void **v212; // [rsp+20h] [rbp-3F8h]
  __int64 v213; // [rsp+28h] [rbp-3F0h]
  __int64 v214; // [rsp+30h] [rbp-3E8h]
  __int64 v215; // [rsp+38h] [rbp-3E0h]
  __int64 v216; // [rsp+40h] [rbp-3D8h]
  __int64 v217; // [rsp+48h] [rbp-3D0h]
  __int64 v218; // [rsp+50h] [rbp-3C8h]
  __int64 v219; // [rsp+58h] [rbp-3C0h]
  __int64 v220; // [rsp+60h] [rbp-3B8h]
  __int64 v221; // [rsp+68h] [rbp-3B0h]
  __int64 v222; // [rsp+70h] [rbp-3A8h]
  unsigned int v223; // [rsp+78h] [rbp-3A0h]
  unsigned int v224; // [rsp+7Ch] [rbp-39Ch]
  int v225; // [rsp+80h] [rbp-398h]
  int v226; // [rsp+84h] [rbp-394h]
  __int32 v227; // [rsp+88h] [rbp-390h]
  __int32 v228; // [rsp+8Ch] [rbp-38Ch]
  unsigned __int64 *v229; // [rsp+90h] [rbp-388h]
  int v230; // [rsp+98h] [rbp-380h]
  unsigned int v231; // [rsp+9Ch] [rbp-37Ch]
  unsigned int v232; // [rsp+A0h] [rbp-378h]
  unsigned int v233; // [rsp+A4h] [rbp-374h]
  __int64 v234; // [rsp+A8h] [rbp-370h]
  __int64 v235; // [rsp+B0h] [rbp-368h]
  unsigned int v236; // [rsp+B8h] [rbp-360h]
  unsigned int v237; // [rsp+BCh] [rbp-35Ch]
  unsigned int v238; // [rsp+C0h] [rbp-358h]
  unsigned int v239; // [rsp+C4h] [rbp-354h]
  __int64 v240; // [rsp+C8h] [rbp-350h]
  __m128i v241; // [rsp+D0h] [rbp-348h] BYREF
  __m128i *v242; // [rsp+E0h] [rbp-338h] BYREF
  __int64 v243; // [rsp+E8h] [rbp-330h]
  __m128i v244; // [rsp+F0h] [rbp-328h] BYREF
  _QWORD v245[2]; // [rsp+100h] [rbp-318h] BYREF
  __m128i v246; // [rsp+110h] [rbp-308h] BYREF
  __int64 v247; // [rsp+120h] [rbp-2F8h]
  void *v248; // [rsp+130h] [rbp-2E8h] BYREF
  __int64 v249; // [rsp+138h] [rbp-2E0h]
  void *v250[2]; // [rsp+140h] [rbp-2D8h]
  __m128 v251; // [rsp+150h] [rbp-2C8h]
  __int64 *v252; // [rsp+160h] [rbp-2B8h]
  __int64 *v253; // [rsp+168h] [rbp-2B0h]
  _QWORD *v254; // [rsp+170h] [rbp-2A8h]
  __int64 **v255; // [rsp+178h] [rbp-2A0h]
  void *v256; // [rsp+180h] [rbp-298h] BYREF
  __int64 v257; // [rsp+188h] [rbp-290h]
  __m128i v258; // [rsp+190h] [rbp-288h]
  void *v259; // [rsp+1A0h] [rbp-278h]
  _BYTE v260[24]; // [rsp+1A8h] [rbp-270h]
  __int64 v261; // [rsp+1C0h] [rbp-258h]
  char v262; // [rsp+1C8h] [rbp-250h]
  __m256i ptr; // [rsp+1D0h] [rbp-248h] BYREF
  void *v264; // [rsp+1F0h] [rbp-228h] BYREF
  __int64 v265; // [rsp+1F8h] [rbp-220h]
  __m128i v266; // [rsp+200h] [rbp-218h] BYREF
  __int64 v267; // [rsp+210h] [rbp-208h]
  __int64 v268; // [rsp+218h] [rbp-200h]
  _BOOL8 v269; // [rsp+220h] [rbp-1F8h]
  _BOOL8 v270; // [rsp+228h] [rbp-1F0h]
  _BOOL8 v271; // [rsp+230h] [rbp-1E8h]
  _BOOL8 v272; // [rsp+238h] [rbp-1E0h]
  _BOOL8 v273; // [rsp+240h] [rbp-1D8h]
  __int64 v274; // [rsp+248h] [rbp-1D0h]

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 16);
  v240 = a2;
  v222 = a3;
  sub_A25970(v5, 0xDu, 5u);
  sub_1F6B880(&v241);
  sub_A1FE00(v241.m128i_i64[0], 1, 1);
  sub_A1FE00(v241.m128i_i64[0], 6, 4);
  sub_A1FE00(v241.m128i_i64[0], 6, 4);
  sub_A1FE00(v241.m128i_i64[0], 4, 2);
  sub_A1FE00(v241.m128i_i64[0], 8, 4);
  sub_A1FE00(v241.m128i_i64[0], 4, 4);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v7;
  v224 = sub_A22F90(v6, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v8 = (volatile signed __int32 *)v241.m128i_i64[1];
  si128 = _mm_load_si128((const __m128i *)&ptr);
  v10 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = si128;
  if ( v8 )
  {
    sub_4343A0(v8);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v10 = v241.m128i_i64[0];
  }
  sub_A1FE00(v10, 2, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v11 = *(_QWORD *)(v4 + 16);
  v12 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v12;
  v237 = sub_A22F90(v11, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v13 = (volatile signed __int32 *)v241.m128i_i64[1];
  v14 = _mm_load_si128((const __m128i *)&ptr);
  v15 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v14;
  if ( v13 )
  {
    sub_4343A0(v13);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v15 = v241.m128i_i64[0];
  }
  sub_A1FE00(v15, 3, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v16 = *(_QWORD *)(v4 + 16);
  v17 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v17;
  v225 = sub_A22F90(v16, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v18 = (volatile signed __int32 *)v241.m128i_i64[1];
  v19 = _mm_load_si128((const __m128i *)&ptr);
  v20 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v19;
  if ( v18 )
  {
    sub_4343A0(v18);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v20 = v241.m128i_i64[0];
  }
  sub_A1FE00(v20, 4, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v21 = *(_QWORD *)(v4 + 16);
  v22 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v22;
  v223 = sub_A22F90(v21, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v23 = (volatile signed __int32 *)v241.m128i_i64[1];
  v24 = _mm_load_si128((const __m128i *)&ptr);
  v25 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v24;
  if ( v23 )
  {
    sub_4343A0(v23);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v25 = v241.m128i_i64[0];
  }
  sub_A1FE00(v25, 5, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v26 = *(_QWORD *)(v4 + 16);
  v27 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v27;
  v239 = sub_A22F90(v26, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v28 = (volatile signed __int32 *)v241.m128i_i64[1];
  v29 = _mm_load_si128((const __m128i *)&ptr);
  v30 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v29;
  if ( v28 )
  {
    sub_4343A0(v28);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v30 = v241.m128i_i64[0];
  }
  sub_A1FE00(v30, 8, 1);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v31 = *(_QWORD *)(v4 + 16);
  v32 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v32;
  v231 = sub_A22F90(v31, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v33 = (volatile signed __int32 *)v241.m128i_i64[1];
  v34 = _mm_load_si128((const __m128i *)&ptr);
  v35 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v34;
  if ( v33 )
  {
    sub_4343A0(v33);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v35 = v241.m128i_i64[0];
  }
  sub_A1FE00(v35, 9, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v36 = *(_QWORD *)(v4 + 16);
  v37 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v37;
  v226 = sub_A22F90(v36, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v38 = (volatile signed __int32 *)v241.m128i_i64[1];
  v39 = _mm_load_si128((const __m128i *)&ptr);
  v40 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v39;
  if ( v38 )
  {
    sub_4343A0(v38);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v40 = v241.m128i_i64[0];
  }
  sub_A1FE00(v40, 14, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v41 = *(_QWORD *)(v4 + 16);
  v42 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v42;
  v227 = sub_A22F90(v41, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v43 = (volatile signed __int32 *)v241.m128i_i64[1];
  v44 = _mm_load_si128((const __m128i *)&ptr);
  v45 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v44;
  if ( v43 )
  {
    sub_4343A0(v43);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v45 = v241.m128i_i64[0];
  }
  sub_A1FE00(v45, 13, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v46 = *(_QWORD *)(v4 + 16);
  v47 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v47;
  v228 = sub_A22F90(v46, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v48 = (volatile signed __int32 *)v241.m128i_i64[1];
  v49 = _mm_load_si128((const __m128i *)&ptr);
  v50 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v49;
  if ( v48 )
  {
    sub_4343A0(v48);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v50 = v241.m128i_i64[0];
  }
  sub_A1FE00(v50, 15, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v51 = *(_QWORD *)(v4 + 16);
  v52 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v52;
  v230 = sub_A22F90(v51, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v53 = (volatile signed __int32 *)v241.m128i_i64[1];
  v54 = _mm_load_si128((const __m128i *)&ptr);
  v55 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v54;
  if ( v53 )
  {
    sub_4343A0(v53);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v55 = v241.m128i_i64[0];
  }
  sub_A1FE00(v55, 10, 1);
  sub_A1FE00(v241.m128i_i64[0], 1, 2);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v56 = *(_QWORD *)(v4 + 16);
  v57 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v57;
  v232 = sub_A22F90(v56, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v58 = (volatile signed __int32 *)v241.m128i_i64[1];
  v59 = _mm_load_si128((const __m128i *)&ptr);
  v60 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v59;
  if ( v58 )
  {
    sub_4343A0(v58);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v60 = v241.m128i_i64[0];
  }
  sub_A1FE00(v60, 11, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v61 = *(_QWORD *)(v4 + 16);
  v62 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v62;
  v233 = sub_A22F90(v61, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v63 = (volatile signed __int32 *)v241.m128i_i64[1];
  v64 = _mm_load_si128((const __m128i *)&ptr);
  v65 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v64;
  if ( v63 )
  {
    sub_4343A0(v63);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v65 = v241.m128i_i64[0];
  }
  sub_A1FE00(v65, 12, 1);
  sub_A1FE00(v241.m128i_i64[0], 6, 4);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v66 = *(_QWORD *)(v4 + 16);
  v67 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v67;
  v236 = sub_A22F90(v66, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  sub_1F6B880(&ptr);
  v68 = (volatile signed __int32 *)v241.m128i_i64[1];
  v69 = _mm_load_si128((const __m128i *)&ptr);
  v70 = ptr.m256i_i64[0];
  *(_OWORD *)ptr.m256i_i8 = 0;
  v241 = v69;
  if ( v68 )
  {
    sub_4343A0(v68);
    if ( ptr.m256i_i64[1] )
      sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
    v70 = v241.m128i_i64[0];
  }
  sub_A1FE00(v70, 17, 1);
  sub_A1FE00(v241.m128i_i64[0], 0, 10);
  v71 = *(_QWORD *)(v4 + 16);
  v72 = v241.m128i_i64[1];
  ptr.m256i_i64[0] = v241.m128i_i64[0];
  v241 = 0;
  ptr.m256i_i64[1] = v72;
  v238 = sub_A22F90(v71, ptr.m256i_i64);
  if ( ptr.m256i_i64[1] )
    sub_4343A0((volatile signed __int32 *)ptr.m256i_i64[1]);
  v73 = 1;
  v74 = *(_QWORD *)(v240 + 264);
  v75 = *(_QWORD *)(v240 + 256);
  if ( v75 != v74 )
  {
    v76 = 0;
    do
    {
      v77 = 1;
      v78 = *(__int64 **)(*(_QWORD *)v75 + 264LL);
      v79 = *(__int64 **)(*(_QWORD *)v75 + 256LL);
      if ( v78 != v79 )
      {
        do
        {
          v80 = sub_1F6A0E0(*v79);
          v79 = (__int64 *)(v81 + 8);
          v83 = v80 + v82;
        }
        while ( v78 != v79 );
        v77 = v83 + 1;
      }
      v75 += 8;
      v76 += v77;
    }
    while ( v74 != v75 );
    v73 = (unsigned int)(v76 + 1);
  }
  v84 = *(_QWORD *)(v4 + 16);
  v85 = (unsigned int)(*(_DWORD *)(v4 + 1080) - 1);
  sub_A1FEC0(v84, 3u, *(_DWORD *)(v84 + 56));
  sub_1F6E7D0(v84, 0);
  sub_1F6E7D0(v84, 2u);
  sub_1F6EF10(v84, v73);
  sub_1F6EF10(v84, v85);
  v248 = nullptr;
  v250[0] = nullptr;
  v250[1] = nullptr;
  v251 = 0u;
  v252 = nullptr;
  v253 = nullptr;
  v254 = nullptr;
  v255 = nullptr;
  v249 = 8;
  v248 = (void *)operator new(0x40u);
  v86 = (__int64 **)((char *)v248 + 8 * ((unsigned __int64)(v249 - 1) >> 1));
  v87 = (__int64 *)operator new(0x200u);
  v251.m128_u64[1] = (unsigned __int64)v86;
  v210.m128i_i64[0] = (__int64)v87;
  v88 = _mm_loadl_epi64(&v210);
  v251.m128_u64[0] = (unsigned __int64)(v87 + 64);
  v254 = v87 + 64;
  v212 = &v256;
  *v87 = v240;
  *v86 = v87;
  v255 = v86;
  v253 = v87;
  *(__m128i *)v250 = _mm_unpacklo_epi64(v88, v88);
  v252 = v87 + 1;
  v229 = &ptr.m256i_u64[3];
  v214 = v3;
  do
  {
    v89 = *v87;
    if ( v87 == (__int64 *)(v251.m128_u64[0] - 8) )
    {
      operator delete(v250[1]);
      v210.m128i_i64[0] = *(_QWORD *)(v251.m128_u64[1] + 8);
      v207 = _mm_loadl_epi64(&v210);
      *(__m128i *)v250 = _mm_unpacklo_epi64(v207, v207);
      v210.m128i_i64[0] = v251.m128_u64[1] + 8;
      v251 = _mm_loadh_ps((const double *)v210.m128i_i64);
    }
    else
    {
      v250[0] = v87 + 1;
    }
    v90 = 0;
    v91 = sub_1F82A80(v4, v89);
    if ( !*(_QWORD *)(v89 + 40) )
      goto LABEL_94;
    v242 = *(__m128i **)(v89 + 40);
    v210.m128i_i64[0] = (__int64)&v242;
    if ( (unsigned __int8)sub_1F72DF0((__int64 *)(v4 + 3096), (__int64 *)&v242, v212) )
    {
      v90 = *((unsigned int *)v256 + 2);
      goto LABEL_94;
    }
    v200 = *(unsigned int *)(v4 + 3112);
    v201 = v256;
    v202 = *(_DWORD *)(v4 + 3104) + 1;
    v203 = 2 * v200;
    v204 = (unsigned int)(4 * v202);
    ptr.m256i_i64[0] = (__int64)v256;
    if ( (unsigned int)v204 >= 3 * (int)v200 )
      goto LABEL_214;
    if ( (int)v200 - *(_DWORD *)(v4 + 3108) - v202 <= (unsigned int)v200 >> 3 )
    {
      v203 = v200;
LABEL_214:
      sub_1F82880((__int64 *)(v4 + 3096), v203, (__int64)v256, v200, v204, v92);
      sub_1F72DF0((__int64 *)(v4 + 3096), (__int64 *)v210.m128i_i64[0], &ptr);
      v201 = (_DWORD *)ptr.m256i_i64[0];
      v202 = *(_DWORD *)(v4 + 3104) + 1;
    }
    v205 = *(_QWORD *)v201 == -4096;
    *(_DWORD *)(v4 + 3104) = v202;
    if ( !v205 )
      --*(_DWORD *)(v4 + 3108);
    v206 = (__int64)v242;
    v90 = 0;
    v201[2] = 0;
    *(_QWORD *)v201 = v206;
LABEL_94:
    v93 = *(_DWORD *)(v89 + 32);
    if ( v93 )
    {
      v175 = sub_1F6E410((_QWORD *)v4, v93 & 0x7FFFFFFF);
      v93 = v176 - v175;
    }
    v94 = 0;
    v95 = (void *)sub_1F6E500(v4, v93);
    if ( (*(_BYTE *)(v89 + 905) & 1) != 0 )
      v94 = sub_13FA250(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 104LL) + 632LL, v89);
    v96 = (int)sub_1F6E390((_QWORD *)v4, v94);
    memset(v229, 0, 0x68u);
    ptr.m256i_i64[2] = v90;
    v97 = *(_QWORD *)(v4 + 16);
    ptr.m256i_i64[0] = 1;
    ptr.m256i_i64[1] = v91;
    v98 = *(unsigned int *)(v89 + 36);
    v264 = v95;
    v265 = v96;
    ptr.m256i_i64[3] = v98;
    v266.m128i_i64[0] = (*(_BYTE *)(v89 + 904) & 0x10) != 0;
    v266.m128i_i64[1] = (*(_BYTE *)(v89 + 904) & 0x20) != 0;
    v267 = (*(_BYTE *)(v89 + 904) & 0x40) != 0;
    v268 = *(_BYTE *)(v89 + 904) >> 7;
    v269 = (*(_BYTE *)(v89 + 905) & 2) != 0;
    v270 = (*(_BYTE *)(v89 + 905) & 4) != 0;
    v271 = (*(_BYTE *)(v89 + 905) & 8) != 0;
    v272 = (*(_BYTE *)(v89 + 905) & 0x10) != 0;
    v273 = (*(_BYTE *)(v89 + 905) & 0x40) != 0;
    v274 = *(_BYTE *)(v89 + 905) >> 7;
    v99 = *(_QWORD *)(v89 + 8);
    v100 = *(_QWORD *)v89;
    v213 &= 0xFFFFFF00FFFFFFFFLL;
    sub_1F76680(v97, v224, (unsigned __int8 *)&ptr, 16, v100, v99);
    v101 = *(_QWORD *)(v89 + 800);
    v102 = v101 + 40LL * *(unsigned int *)(v89 + 808);
    if ( v101 != v102 )
    {
      v210.m128i_i64[0] = v89;
      v103 = v4;
      v104 = v219;
      v105 = v102;
      v106 = v231;
      do
      {
        v107 = *(unsigned __int8 *)(v101 + 32);
        v108 = *(_QWORD *)(v103 + 16);
        v101 += 40;
        ptr.m256i_i64[0] = 8;
        ptr.m256i_i64[1] = v107;
        v104 &= 0xFFFFFF00FFFFFFFFLL;
        sub_1F759B0(v108, v106, (unsigned __int8 *)&ptr, 2, *(_QWORD *)(v101 - 40), *(_QWORD *)(v101 - 32), v104);
      }
      while ( v105 != v101 );
      v219 = v104;
      v89 = v210.m128i_i64[0];
      v4 = v103;
    }
    v109 = *(_BYTE *)(v89 + 96);
    if ( v109 == 1 )
    {
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
      sub_1F6D4C0(&ptr, *(_BYTE **)(v89 + 128), *(_QWORD *)(v89 + 128) + *(_QWORD *)(v89 + 136));
      v264 = &v266;
      sub_1F6D4C0(&v264, *(_BYTE **)(v89 + 160), *(_QWORD *)(v89 + 160) + *(_QWORD *)(v89 + 168));
      v110 = (_QWORD *)ptr.m256i_i64[0];
      v267 = *(_QWORD *)(v89 + 88);
      v256 = v212 + 2;
      if ( (unsigned __int64 *)ptr.m256i_i64[0] == &ptr.m256i_u64[2] )
      {
        v110 = v212 + 2;
        v258 = _mm_load_si128((const __m128i *)&ptr.m256i_u64[2]);
      }
      else
      {
        v256 = (void *)ptr.m256i_i64[0];
        v258.m128i_i64[0] = ptr.m256i_i64[2];
      }
      v111 = ptr.m256i_i64[1];
      ptr.m256i_i64[1] = 0;
      ptr.m256i_i8[16] = 0;
      v257 = v111;
      v259 = v212 + 6;
      if ( v264 == &v266 )
      {
        *(__m128i *)&v260[8] = _mm_load_si128(&v266);
      }
      else
      {
        v259 = v264;
        *(_QWORD *)&v260[8] = v266.m128i_i64[0];
      }
      v112 = *(_QWORD *)(v4 + 16);
      v262 = 1;
      v221 &= 0xFFFFFF00FFFFFFFFLL;
      *(_QWORD *)v260 = v265;
      ptr.m256i_i64[0] = 2;
      v261 = v267;
      sub_1F76000(v112, v237, (unsigned __int8 *)&ptr, 1, (unsigned __int64)v110, v111);
LABEL_108:
      if ( !v262 )
        goto LABEL_109;
      goto LABEL_172;
    }
    v262 = 0;
    if ( v109 != 2 )
      goto LABEL_108;
    v242 = &v244;
    v169 = *(_BYTE **)(v89 + 128);
    v170 = *(_QWORD *)(v89 + 136);
    v210.m128i_i64[0] = (__int64)&v242;
    sub_1F6D4C0(&v242, v169, (__int64)&v169[v170]);
    v245[0] = &v246;
    sub_1F6D4C0(v245, *(_BYTE **)(v89 + 160), *(_QWORD *)(v89 + 160) + *(_QWORD *)(v89 + 168));
    v171 = (__int64 *)v242;
    v247 = *(_QWORD *)(v89 + 88);
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
    if ( v242 == &v244 )
    {
      v171 = &ptr.m256i_i64[2];
      *(__m128i *)&ptr.m256i_u64[2] = _mm_load_si128(&v244);
    }
    else
    {
      ptr.m256i_i64[0] = (__int64)v242;
      ptr.m256i_i64[2] = v244.m128i_i64[0];
    }
    v172 = v243;
    v244.m128i_i8[0] = 0;
    v264 = &v266;
    ptr.m256i_i64[1] = v243;
    v243 = 0;
    if ( v245[0] == v210.m128i_i64[0] + 48 )
    {
      v266 = _mm_load_si128(&v246);
    }
    else
    {
      v264 = (void *)v245[0];
      v266.m128i_i64[0] = v246.m128i_i64[0];
    }
    v173 = *(_QWORD *)(v4 + 16);
    LOBYTE(v268) = 1;
    v235 &= 0xFFFFFF00FFFFFFFFLL;
    v265 = v245[1];
    v242 = (__m128i *)&byte_5;
    v267 = v247;
    sub_1F76000(v173, v239, (unsigned __int8 *)v210.m128i_i64[0], 1, (unsigned __int64)v171, v172);
    if ( !(_BYTE)v268 )
      goto LABEL_108;
    if ( v264 != &v266 )
      operator delete(v264);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] == &ptr.m256i_u64[2] )
      goto LABEL_108;
    operator delete((void *)ptr.m256i_i64[0]);
    if ( !v262 )
      goto LABEL_109;
LABEL_172:
    if ( v259 != v212 + 6 )
      operator delete(v259);
    if ( v256 != v212 + 2 )
      operator delete(v256);
LABEL_109:
    v113 = v214;
    v257 = 0xE00000000LL;
    *(__int64 *)((char *)v258.m128i_i64 + 4) = 0xD00000001LL;
    v259 = (void *)0xF00000002LL;
    *(_QWORD *)&v260[4] = 0x900000003LL;
    LODWORD(v256) = 3;
    HIDWORD(v256) = v225;
    v258.m128i_i32[0] = v227;
    *(_DWORD *)&v260[16] = 4;
    v258.m128i_i32[3] = v228;
    v210.m128i_i64[1] = v89;
    v114 = v4;
    *(_DWORD *)v260 = v230;
    *(_DWORD *)&v260[12] = v226;
    v210.m128i_i64[0] = (__int64)v212;
    v211 = (size_t *)((char *)v212 + 60);
    do
    {
      v115 = *(int *)(v210.m128i_i64[0] + 8);
      ptr.m256i_i64[0] = *(unsigned int *)v210.m128i_i64[0];
      v116 = v210.m128i_i64[1] + 4 * v115;
      v117 = 72LL * *(unsigned int *)(v116 + 420);
      v118 = *(_QWORD *)(v210.m128i_i64[1] + 448) + 72LL * *(unsigned int *)(v116 + 424);
      if ( v118 != v117 + *(_QWORD *)(v210.m128i_i64[1] + 448) )
      {
        v119 = (unsigned __int64 *)(v117 + *(_QWORD *)(v210.m128i_i64[1] + 448));
        v120 = *(_DWORD *)(v210.m128i_i64[0] + 4);
        do
        {
          v121 = v119[1];
          v122 = *v119;
          v119 += 9;
          v113 &= 0xFFFFFF00FFFFFFFFLL;
          sub_1F76000(*(_QWORD *)(v114 + 16), v120, (unsigned __int8 *)&ptr, 1, v122, v121);
        }
        while ( (unsigned __int64 *)v118 != v119 );
      }
      v210.m128i_i64[0] += 12;
    }
    while ( v211 != (size_t *)v210.m128i_i64[0] );
    v4 = v114;
    v123 = v210.m128i_i64[1];
    v214 = v113;
    v242 = (__m128i *)&byte_4;
    v124 = sub_FF2A40(v210.m128i_i64[1], *(_QWORD *)(*(_QWORD *)(v4 + 40) + 80LL));
    v210.m128i_i64[1] = v124 + 8 * v125;
    if ( v124 != v210.m128i_i64[1] )
    {
      v126 = (size_t **)v124;
      v220 = v123;
      v210.m128i_i64[0] = (__int64)&v242;
      v127 = v218;
      while ( 1 )
      {
        v128 = *v126;
        for ( i = (*v126)[1]; i; i = *(_QWORD *)(v130 + 8) )
        {
          if ( (i & 4) == 0 )
            break;
          v130 = i & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v130 )
            break;
          v128 = (size_t *)v130;
        }
        v131 = *v128;
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
        *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        if ( v131 > 0x80 )
          break;
        if ( v131 )
        {
          v168 = &ptr.m256i_i64[3];
          goto LABEL_160;
        }
LABEL_122:
        ptr.m256i_i64[1] = v131;
        sub_1F6E1D0((_QWORD *)v4, (__int64)&ptr);
        v127 &= 0xFFFFFF00FFFFFFFFLL;
        sub_1F76000(
          *(_QWORD *)(v4 + 16),
          v223,
          (unsigned __int8 *)v210.m128i_i64[0],
          1,
          ptr.m256i_u64[0],
          ptr.m256i_i64[1]);
        if ( (unsigned __int64 *)ptr.m256i_i64[0] == &ptr.m256i_u64[3] )
        {
          if ( (size_t **)v210.m128i_i64[1] == ++v126 )
          {
LABEL_124:
            v218 = v127;
            v123 = v220;
            goto LABEL_125;
          }
        }
        else
        {
          free((void *)ptr.m256i_i64[0]);
          if ( (size_t **)v210.m128i_i64[1] == ++v126 )
            goto LABEL_124;
        }
      }
      v211 = v128;
      sub_2236E10(&ptr, &ptr.m256i_u64[3], v131, 1);
      v128 = v211;
      v168 = (__int64 *)(ptr.m256i_i64[0] + ptr.m256i_i64[1]);
LABEL_160:
      memcpy(v168, v128 + 4, v131);
      v131 += ptr.m256i_u64[1];
      goto LABEL_122;
    }
LABEL_125:
    v132 = *(unsigned int *)(v123 + 952);
    if ( (_DWORD)v132 )
    {
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
      v196 = *(__int64 **)(v123 + 944);
      ptr.m256i_i64[1] = 0x4000000000LL;
      v197 = &v196[v132];
      do
      {
        v198 = *v196++;
        v199 = sub_1F82A80(v4, v198);
        sub_9B9C90((__int64)&ptr, v199);
      }
      while ( v197 != v196 );
      sub_1F6EB90(*(_QWORD *)(v4 + 16), 6u, (__int64)&ptr);
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
        free((void *)ptr.m256i_i64[0]);
    }
    v133 = *(unsigned int *)(v123 + 1008);
    if ( (_DWORD)v133 )
    {
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
      v192 = *(__int64 **)(v123 + 1000);
      ptr.m256i_i64[1] = 0x4000000000LL;
      v193 = &v192[v133];
      do
      {
        v194 = *v192++;
        v195 = sub_1F82A80(v4, v194);
        sub_9B9C90((__int64)&ptr, v195);
      }
      while ( v193 != v192 );
      sub_1F6EB90(*(_QWORD *)(v4 + 16), 0x12u, (__int64)&ptr);
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
        free((void *)ptr.m256i_i64[0]);
    }
    v134 = *(unsigned int *)(v123 + 1040);
    if ( (_DWORD)v134 )
    {
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
      v188 = *(__int64 **)(v123 + 1032);
      ptr.m256i_i64[1] = 0x4000000000LL;
      v189 = &v188[v134];
      do
      {
        v190 = *v188++;
        v191 = sub_1F82A80(v4, v190 & 0xFFFFFFFFFFFFFFF8LL);
        sub_9B9C90((__int64)&ptr, v191);
        sub_9B9C90((__int64)&ptr, (*(v188 - 1) >> 2) & 1);
      }
      while ( v189 != v188 );
      sub_1F6EB90(*(_QWORD *)(v4 + 16), 7u, (__int64)&ptr);
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
        free((void *)ptr.m256i_i64[0]);
    }
    v135 = *(_QWORD *)(v123 + 1600);
    v136 = v135 + 40LL * *(unsigned int *)(v123 + 1608);
    if ( v135 != v136 )
    {
      v210.m128i_i64[0] = v123;
      v137 = v4;
      v138 = v217;
      v139 = v136;
      v140 = v232;
      do
      {
        v141 = *(unsigned __int8 *)(v135 + 32);
        v142 = *(_QWORD *)(v137 + 16);
        v135 += 40;
        ptr.m256i_i64[0] = 10;
        ptr.m256i_i64[1] = v141;
        v138 &= 0xFFFFFF00FFFFFFFFLL;
        sub_1F759B0(v142, v140, (unsigned __int8 *)&ptr, 2, *(_QWORD *)(v135 - 40), *(_QWORD *)(v135 - 32), v138);
      }
      while ( v139 != v135 );
      v217 = v138;
      v123 = v210.m128i_i64[0];
      v4 = v137;
    }
    v143 = *(__int64 **)(v123 + 1760);
    v144 = *(__int64 **)(v123 + 1752);
    if ( v143 != v144 )
    {
      v210.m128i_i64[0] = v123;
      v145 = v144;
      v146 = v236;
      v147 = v143;
      v148 = v216;
      do
      {
        v149 = *v145;
        v145 += 5;
        *(_OWORD *)ptr.m256i_i8 = 0xCu;
        v150 = sub_1F82A80(v4, v149);
        v151 = *(_QWORD *)(v4 + 16);
        ptr.m256i_i64[1] = v150;
        v148 &= 0xFFFFFF00FFFFFFFFLL;
        sub_1F759B0(v151, v146, (unsigned __int8 *)&ptr, 2, *(v145 - 4), *(v145 - 3), v148);
      }
      while ( v147 != v145 );
      v216 = v148;
      v123 = v210.m128i_i64[0];
    }
    v152 = *(_QWORD *)(v123 + 1712);
    v153 = *(_QWORD *)(v123 + 1704);
    if ( v152 != v153 )
    {
      v210.m128i_i64[0] = v123;
      v154 = v4;
      v155 = v215;
      v156 = v152;
      v157 = v233;
      do
      {
        v158 = *(_QWORD *)(v154 + 16);
        v153 += 32;
        ptr.m256i_i64[0] = 11;
        v155 &= 0xFFFFFF00FFFFFFFFLL;
        sub_1F76000(v158, v157, (unsigned __int8 *)&ptr, 1, *(_QWORD *)(v153 - 32), *(_QWORD *)(v153 - 24));
      }
      while ( v156 != v153 );
      v215 = v155;
      v123 = v210.m128i_i64[0];
      v4 = v154;
    }
    if ( v222 )
    {
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
      ptr.m256i_i64[1] = 0x4000000000LL;
      v177 = sub_A842A0(v222, v123);
      v179 = v177 + 8 * v178;
      v180 = (__int64 *)v177;
      if ( v177 == v179 )
      {
LABEL_182:
        if ( ptr.m256i_i32[2] )
          sub_1F6EB90(*(_QWORD *)(v4 + 16), 0x10u, (__int64)&ptr);
        if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
          free((void *)ptr.m256i_i64[0]);
        goto LABEL_141;
      }
      while ( 2 )
      {
        v181 = *v180;
        if ( *(char *)(*v180 + 29) < 0 )
        {
LABEL_180:
          v187 = sub_1F92240(v4, v181);
          sub_9B9C90((__int64)&ptr, v187);
        }
        else
        {
          v182 = *(_DWORD *)(v4 + 440);
          v183 = *(_QWORD *)(v4 + 424);
          if ( v182 )
          {
            v184 = v182 - 1;
            v185 = (v182 - 1) & (((unsigned int)v181 >> 9) ^ ((unsigned int)v181 >> 4));
            v186 = *(_QWORD *)(v183 + 16LL * v185);
            if ( v181 == v186 )
              goto LABEL_180;
            if ( v186 != -4096 )
            {
              v208 = 1;
              do
              {
                v185 = v184 & (v208 + v185);
                v209 = *(_QWORD *)(v183 + 16LL * v185);
                if ( v181 == v209 )
                  goto LABEL_180;
                ++v208;
              }
              while ( v209 != -4096 );
            }
          }
        }
        if ( (__int64 *)v179 == ++v180 )
          goto LABEL_182;
        continue;
      }
    }
LABEL_141:
    v159 = *(_QWORD *)(v123 + 200);
    if ( v159 )
    {
      v234 &= 0xFFFFFF00FFFFFFFFLL;
      v174 = *(_QWORD *)(v4 + 16);
      ptr.m256i_i64[0] = 17;
      sub_1F76000(v174, v238, (unsigned __int8 *)&ptr, 1, *(_QWORD *)(v123 + 192), v159);
    }
    v160 = *(__int64 **)(v123 + 256);
    v161 = v252;
    if ( *(__int64 **)(v123 + 264) != v160 )
    {
      v162 = *(__int64 **)(v123 + 264);
      do
      {
        while ( 1 )
        {
          v163 = *v160;
          ptr.m256i_i64[0] = *v160;
          if ( v161 == v254 - 1 )
            break;
          *v161 = v163;
          ++v160;
          v252 = ++v161;
          if ( v162 == v160 )
            goto LABEL_148;
        }
        ++v160;
        sub_1F786C0((__int64)&v248, ptr.m256i_i64);
        v161 = v252;
      }
      while ( v162 != v160 );
    }
LABEL_148:
    v87 = (__int64 *)v250[0];
  }
  while ( v250[0] != v161 );
  sub_A25550(*(_QWORD *)(v4 + 16));
  v164 = v248;
  if ( v248 )
  {
    v165 = (void **)v251.m128_u64[1];
    v166 = (unsigned __int64)(v255 + 1);
    if ( (unsigned __int64)(v255 + 1) > v251.m128_u64[1] )
    {
      do
      {
        v167 = *v165++;
        operator delete(v167);
      }
      while ( v166 > (unsigned __int64)v165 );
      v164 = v248;
    }
    operator delete(v164);
  }
  if ( v241.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v241.m128i_i64[1]);
}
