__int64 __fastcall sub_1346110(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  const char **v15; // rax
  size_t v16; // rsi
  const char *v17; // rbp
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  char v21; // dl
  unsigned __int16 v22; // ax
  char v23; // dl
  bool v24; // zf
  char v25; // dl
  char v26; // dl
  unsigned __int16 v27; // ax
  _BYTE *v28; // rsi
  __int64 v29; // rdx
  _BYTE *v30; // rsi
  __int64 v31; // rdx
  _BYTE *v32; // rsi
  __int64 v33; // rdx
  char v34; // al
  __int64 v35; // rax
  size_t v36; // rax
  unsigned __int64 v37; // rdx
  const void *v38; // rbp
  size_t v39; // rbx
  char **v40; // rbx
  char **v41; // r13
  const char *v42; // rbp
  size_t v43; // rdx
  _BYTE *v44; // rax
  void **v45; // rbp
  __int64 v46; // rcx
  _QWORD *v47; // r12
  __int64 v48; // rbx
  void *v49; // r15
  unsigned __int64 v50; // rbp
  size_t v51; // rdx
  signed __int64 v52; // rax
  __m128i *v53; // r15
  void *v54; // rax
  __m128i *v55; // rax
  size_t v56; // rax
  __int64 v57; // rax
  void *v58; // rdx
  __int64 v59; // rdi
  char **v60; // rbp
  __int64 v61; // rbx
  __int64 v62; // r14
  unsigned __int32 v63; // ebp
  __int64 v64; // rdx
  const char **v65; // rax
  char *v66; // r15
  _QWORD *v67; // r15
  char *v68; // rdi
  __int64 v69; // rbx
  unsigned __int64 v70; // r15
  void *v71; // rdi
  void *v72; // rax
  void *v73; // rax
  const void *v74; // r12
  void *v75; // rbp
  unsigned int v76; // r14d
  char *v77; // rax
  char *v78; // rbx
  unsigned __int64 v79; // rcx
  __int64 v80; // rax
  unsigned __int64 v81; // r12
  unsigned __int64 v82; // r14
  _QWORD *v83; // rbx
  _QWORD *v84; // rbx
  __int64 v85; // r13
  char v86; // r12
  char **v87; // rax
  char *v88; // rsi
  __int64 v89; // rdx
  _QWORD *v90; // r12
  __int64 v91; // r13
  unsigned __int64 v92; // rax
  __int64 v93; // rdx
  __int64 *v94; // rbx
  __int64 *v95; // rbp
  __int64 v96; // r15
  __m256i *p_ptr; // r13
  __int64 v98; // rsi
  unsigned __int64 v99; // rbx
  size_t v100; // r12
  unsigned __int32 v101; // r15d
  char **v102; // rax
  char *v103; // r13
  __int64 v104; // rdx
  _QWORD *v105; // r13
  unsigned __int64 v106; // rbx
  size_t v107; // r12
  unsigned __int32 v108; // r15d
  char **v109; // rax
  char *v110; // r13
  __int64 v111; // rdx
  _QWORD *v112; // r13
  __m128i v113; // xmm5
  _QWORD *v114; // rbx
  __int64 v115; // r14
  char **v116; // rax
  char *v117; // r14
  size_t v118; // rax
  _QWORD *v119; // r14
  __int64 v120; // r15
  __int64 v121; // rbx
  __int64 v122; // r15
  unsigned __int32 v123; // ebp
  size_t v124; // r12
  size_t v125; // rax
  _QWORD *v126; // r12
  __int64 *v127; // rbx
  __int64 v128; // r8
  __int64 v129; // r9
  size_t *v130; // rbx
  char *v131; // rsi
  char **v132; // r14
  unsigned __int64 v133; // rdi
  char *v134; // rax
  char *v135; // rax
  size_t v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rbx
  __int64 *v139; // r12
  __int64 v140; // rbp
  __int64 v141; // rcx
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // r15
  int v145; // eax
  int v146; // esi
  __int64 v147; // r8
  const void *v148; // r8
  unsigned int v149; // r9d
  int v150; // r10d
  void *v151; // rax
  void *v152; // rax
  char *v153; // rdi
  __int64 v154; // rdx
  __int64 v155; // rbx
  char *v156; // r15
  unsigned __int32 v157; // ebp
  size_t v158; // r12
  size_t v159; // rax
  char *v160; // r12
  __int64 v161; // rbx
  __int64 v162; // r15
  unsigned __int32 v163; // ebp
  size_t v164; // r12
  size_t v165; // rax
  _QWORD *v166; // r12
  const char *v167; // rdx
  size_t v168; // rax
  const char *v169; // r13
  size_t v170; // rax
  const char *v171; // r13
  size_t v172; // rax
  __int64 v173; // rbx
  char *v174; // r15
  unsigned __int32 v175; // ebp
  size_t v176; // r12
  size_t v177; // rax
  char *v178; // r12
  __int64 v179; // rbx
  char *v180; // r15
  unsigned __int32 v181; // ebp
  size_t v182; // r12
  size_t v183; // rax
  char *v184; // r12
  __int64 v185; // rbx
  __int64 v186; // r15
  unsigned __int32 v187; // ebp
  size_t v188; // r12
  size_t v189; // rax
  _QWORD *v190; // r12
  __m128i v191; // xmm6
  _QWORD *v192; // rbx
  __int64 v193; // r15
  _BOOL4 v194; // ebp
  const char *v195; // r15
  int v196; // ebp
  void *v197; // rax
  _QWORD *v198; // rbp
  __int64 v199; // r15
  char *v200; // rbx
  char *v201; // r15
  unsigned __int32 v202; // ebp
  size_t v203; // r12
  size_t v204; // rax
  char *v205; // r12
  __int64 v206; // rbp
  __m128i v207; // xmm7
  char *v208; // r13
  __int64 v209; // rbx
  __int8 v210; // r12
  _BYTE *v211; // r15
  void *v212; // rax
  __m128i *v213; // rbx
  __int64 v214; // r15
  __m128i v215; // xmm5
  __int64 v216; // rbp
  char *v217; // r13
  __int64 v218; // rdx
  const char **v219; // rax
  char *v220; // rbx
  __int64 v221; // r14
  const char *v223; // r14
  size_t v224; // rax
  char *v225; // r12
  __int64 v226; // r13
  const char **v227; // rax
  __int64 *v228; // rbx
  __int64 v229; // r15
  __m128 *v230; // r14
  __int64 v231; // rsi
  char **v232; // rax
  char *v233; // r14
  unsigned __int64 v234; // r15
  size_t v235; // rax
  __m128i *v236; // rax
  void *v237; // rdi
  char *v238; // r13
  size_t v239; // r14
  size_t v240; // rax
  __m128i *v241; // rax
  __int64 v242; // rbp
  int v243; // eax
  __int64 v244; // rdx
  int v245; // esi
  int v246; // eax
  __int64 v247; // rcx
  void *v248; // rcx
  size_t v249; // rbx
  size_t v250; // r12
  void *v251; // rax
  char *v252; // rdi
  size_t *v253; // rbp
  __int64 v254; // rbx
  unsigned __int64 v255; // r12
  unsigned __int64 v256; // rsi
  unsigned __int64 v257; // rbx
  unsigned __int64 v258; // rdi
  const void *v259; // rax
  void *v260; // rax
  size_t v261; // rdx
  void *v262; // rdi
  void *v263; // rdi
  unsigned int v264; // eax
  _BYTE *v265; // rsi
  __int64 v266; // rdx
  __int64 v267; // rdi
  __int64 v268; // rdx
  __int64 v269; // rdi
  __int64 v270; // rbx
  unsigned __int32 v273; // [rsp+20h] [rbp-288h]
  __int64 v274; // [rsp+20h] [rbp-288h]
  bool v275; // [rsp+20h] [rbp-288h]
  void *s2; // [rsp+30h] [rbp-278h] BYREF
  size_t n; // [rsp+38h] [rbp-270h]
  char **v278; // [rsp+40h] [rbp-268h]
  __int64 m128i_i64; // [rsp+48h] [rbp-260h]
  void **v280; // [rsp+50h] [rbp-258h]
  signed __int64 v281; // [rsp+58h] [rbp-250h]
  unsigned __int64 v282; // [rsp+60h] [rbp-248h]
  __int64 v283; // [rsp+68h] [rbp-240h]
  int v284; // [rsp+74h] [rbp-234h]
  __m128 *v285; // [rsp+78h] [rbp-230h]
  __m128i v286; // [rsp+80h] [rbp-228h] BYREF
  __int64 v287; // [rsp+90h] [rbp-218h]
  _QWORD v288[4]; // [rsp+A0h] [rbp-208h] BYREF
  __int16 v289; // [rsp+C0h] [rbp-1E8h]
  const char *v290; // [rsp+D0h] [rbp-1D8h] BYREF
  size_t v291; // [rsp+D8h] [rbp-1D0h]
  __int16 v292; // [rsp+F0h] [rbp-1B8h]
  __m128 v293; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v294; // [rsp+110h] [rbp-198h]
  __int64 v295; // [rsp+118h] [rbp-190h]
  __int16 v296; // [rsp+120h] [rbp-188h]
  void *src[2]; // [rsp+130h] [rbp-178h] BYREF
  __m128i v298; // [rsp+140h] [rbp-168h] BYREF
  __int16 v299; // [rsp+150h] [rbp-158h]
  size_t v300[2]; // [rsp+160h] [rbp-148h] BYREF
  __m128i v301; // [rsp+170h] [rbp-138h] BYREF
  __m256i ptr; // [rsp+190h] [rbp-118h] BYREF
  __int16 v303; // [rsp+1B0h] [rbp-F8h]
  void *v304; // [rsp+1D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1D8h] [rbp-D0h] BYREF
  __int64 v306; // [rsp+1E8h] [rbp-C0h] BYREF
  char v307; // [rsp+1F0h] [rbp-B8h]

  v5 = *(_DWORD *)(a3 + 212);
  v6 = *(_BYTE **)(a1 + 144);
  v283 = a3;
  v7 = *(_QWORD *)(a1 + 152);
  v284 = v5;
  v300[0] = (size_t)&v301;
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
  v300[1] = 0;
  v301.m128i_i8[0] = 0;
  sub_12FAA20(&ptr, v6, (__int64)&v6[v7]);
  v304 = &si128.m128i_u64[1];
  sub_12FAA20(&v304, (_BYTE *)v300[0], v300[0]);
  sub_A0AAD0(a1 + 144, &v304);
  if ( v304 != &si128.m128i_u64[1] )
    operator delete(v304);
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
    operator delete((void *)ptr.m256i_i64[0]);
  if ( (__m128i *)v300[0] != &v301 )
    operator delete((void *)v300[0]);
  sub_1302A80((__m128i *)&v304, 0x3C7u, a2);
  if ( v307 )
  {
    src[0] = &v298;
    sub_12FAA20(src, v304, (__int64)v304 + si128.m128i_i64[0]);
    v300[0] = (size_t)&v301;
    sub_12FAA20(v300, *(_BYTE **)(a1 + 144), *(_QWORD *)(a1 + 144) + *(_QWORD *)(a1 + 152));
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
    sub_12FAA20(&ptr, (_BYTE *)src[0], (__int64)src[0] + (unsigned __int64)src[1]);
    sub_A0AAD0(a1 + 144, &ptr);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
      operator delete((void *)ptr.m256i_i64[0]);
    if ( (__m128i *)v300[0] != &v301 )
      operator delete((void *)v300[0]);
    if ( src[0] != &v298 )
      operator delete(src[0]);
    if ( v307 && v304 != &si128.m128i_u64[1] )
      operator delete(v304);
  }
  LOWORD(v304) = 1;
  *(_BYTE *)(a1 + 280) &= ~0x10u;
  HIDWORD(v304) = 1285;
  sub_12FBBD0((char *)&v304, 0x650u, a2);
  *(_BYTE *)(a1 + 280) &= ~0x10u;
  LOWORD(v304) = 256;
  HIDWORD(v304) = 1616;
  v8 = sub_12FBBD0((char *)&v304, 0x505u, a2);
  if ( HIBYTE(v8) )
    *(_BYTE *)(a1 + 280) = *(_BYTE *)(a1 + 280) & 0xEF | (16 * (v8 & 1));
  v9 = v283;
  *(_DWORD *)(a1 + 284) = 604800;
  v10 = sub_1302610(0x3C0u, a2, v9);
  if ( BYTE4(v10) )
    *(_DWORD *)(a1 + 284) = v10;
  v11 = v283;
  *(_DWORD *)(a1 + 288) = 2678400;
  v12 = sub_1302610(0x3BFu, a2, v11);
  if ( BYTE4(v12) )
    *(_DWORD *)(a1 + 288) = v12;
  *(_QWORD *)(a1 + 296) = 0;
  v13 = sub_13021E0(a2, 0x1D9u);
  v14 = v13;
  if ( v13 )
  {
    v15 = *(const char ***)(v13 + 48);
    v16 = 0;
    v17 = *v15;
    if ( *v15 )
      v16 = j__strlen(*v15);
    if ( (unsigned __int8)sub_2247970(v17, v16, 0, &v304) )
    {
      sub_FC70B0((__int64)&v304, v283, 0, 382);
      sub_21B5FF0(&ptr, v14, a2);
      sub_AEC220((unsigned __int8 **)&v304, ptr.m256i_i64[0], ptr.m256i_i64[1]);
      sub_12FA2D0((unsigned __int8 **)&v304, **(_QWORD **)(v14 + 48));
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
        operator delete((void *)ptr.m256i_i64[0]);
      sub_AEA040((__int64)&v304);
    }
    else
    {
      *(_QWORD *)(a1 + 296) = v304;
    }
  }
  *(_BYTE *)(a1 + 624) &= ~0x20u;
  if ( sub_13021E0(a2, 0x3C9u) )
    *(_BYTE *)(a1 + 624) |= 0x20u;
  *(_BYTE *)(a1 + 625) |= 8u;
  if ( sub_13021E0(a2, 0x3B8u) )
    *(_BYTE *)(a1 + 625) &= ~8u;
  LOWORD(v304) = 256;
  *(_BYTE *)(a1 + 624) |= 0x80u;
  HIDWORD(v304) = 955;
  v18 = sub_12FBBD0((char *)&v304, 0x4C6u, a2);
  if ( HIBYTE(v18) )
    *(_BYTE *)(a1 + 624) = *(_BYTE *)(a1 + 624) & 0x7F | ((_BYTE)v18 << 7);
  LOWORD(v304) = 1;
  *(_BYTE *)(a1 + 624) &= ~0x40u;
  HIDWORD(v304) = 1229;
  v19 = sub_12FBBD0((char *)&v304, 0x3CAu, a2);
  if ( HIBYTE(v19) )
    *(_BYTE *)(a1 + 624) = *(_BYTE *)(a1 + 624) & 0xBF | ((v19 & 1) << 6);
  *(_BYTE *)(a1 + 625) &= ~0x10u;
  LOWORD(v304) = 1;
  HIDWORD(v304) = 1227;
  sub_12FBBD0((char *)&v304, 0x3C3u, a2);
  *(_BYTE *)(a1 + 625) &= ~0x10u;
  LOWORD(v304) = 256;
  HIDWORD(v304) = 963;
  v20 = sub_12FBBD0((char *)&v304, 0x4CBu, a2);
  if ( HIBYTE(v20) )
  {
    v21 = (16 * (v20 & 1)) | *(_BYTE *)(a1 + 625) & 0xEF;
    *(_BYTE *)(a1 + 625) = v21;
  }
  else
  {
    v21 = *(_BYTE *)(a1 + 625);
  }
  *(_BYTE *)(a1 + 625) = v21 & 0xDF;
  LOWORD(v304) = 1;
  HIDWORD(v304) = 1228;
  sub_12FBBD0((char *)&v304, 0x3C4u, a2);
  *(_BYTE *)(a1 + 625) &= ~0x20u;
  LOWORD(v304) = 256;
  HIDWORD(v304) = 964;
  v22 = sub_12FBBD0((char *)&v304, 0x4CCu, a2);
  if ( HIBYTE(v22) )
  {
    v23 = (32 * (v22 & 1)) | *(_BYTE *)(a1 + 625) & 0xDF;
    *(_BYTE *)(a1 + 625) = v23;
  }
  else
  {
    v23 = *(_BYTE *)(a1 + 625);
  }
  *(_BYTE *)(a1 + 625) = v23 | 0x80;
  v24 = sub_13021E0(a2, 0x4C8u) == 0;
  v25 = *(_BYTE *)(a1 + 625);
  if ( !v24 )
  {
    v25 &= ~0x80u;
    *(_BYTE *)(a1 + 625) = v25;
  }
  *(_BYTE *)(a1 + 625) = v25 & 0xFE;
  v24 = sub_13021E0(a2, 0x782u) == 0;
  v26 = *(_BYTE *)(a1 + 625);
  if ( !v24 )
  {
    v26 |= 1u;
    *(_BYTE *)(a1 + 625) = v26;
  }
  *(_BYTE *)(a1 + 625) = v26 & 0xFD;
  if ( sub_13021E0(a2, 0x314u) )
    *(_BYTE *)(a1 + 625) |= 2u;
  *(_BYTE *)(a1 + 280) &= ~2u;
  if ( sub_13021E0(a2, 0x34Eu) )
    *(_BYTE *)(a1 + 280) |= 2u;
  *(_BYTE *)(a1 + 626) |= 0x10u;
  LOWORD(v304) = 1;
  HIDWORD(v304) = 1218;
  sub_12FBBD0((char *)&v304, 0x3B3u, a2);
  *(_BYTE *)(a1 + 626) |= 0x10u;
  LOWORD(v304) = 256;
  HIDWORD(v304) = 947;
  v27 = sub_12FBBD0((char *)&v304, 0x4C2u, a2);
  if ( HIBYTE(v27) )
    *(_BYTE *)(a1 + 626) = *(_BYTE *)(a1 + 626) & 0xEF | (16 * (v27 & 1));
  v28 = *(_BYTE **)a1;
  v29 = *(_QWORD *)(a1 + 8);
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
  sub_12FAA20(&ptr, v28, (__int64)&v28[v29]);
  sub_12FB750(&v304, "/");
  sub_A0AAD0(a1, &v304);
  if ( v304 != &si128.m128i_u64[1] )
    operator delete(v304);
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
    operator delete((void *)ptr.m256i_i64[0]);
  sub_1302A80((__m128i *)&v304, 0x878u, a2);
  if ( v307 )
  {
    src[0] = &v298;
    sub_12FAA20(src, v304, (__int64)v304 + si128.m128i_i64[0]);
    v265 = *(_BYTE **)a1;
    v266 = *(_QWORD *)(a1 + 8);
    v300[0] = (size_t)&v301;
    sub_12FAA20(v300, v265, (__int64)&v265[v266]);
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
    sub_12FAA20(&ptr, (_BYTE *)src[0], (__int64)src[0] + (unsigned __int64)src[1]);
    sub_A0AAD0(a1, &ptr);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
      operator delete((void *)ptr.m256i_i64[0]);
    if ( (__m128i *)v300[0] != &v301 )
      operator delete((void *)v300[0]);
    if ( src[0] != &v298 )
      operator delete(src[0]);
    if ( v307 && v304 != &si128.m128i_u64[1] )
      operator delete(v304);
  }
  *(_BYTE *)(a1 + 624) |= 1u;
  if ( sub_13021E0(a2, 0xBD9u) )
    *(_BYTE *)(a1 + 624) &= ~1u;
  *(_BYTE *)(a1 + 624) |= 4u;
  if ( sub_13021E0(a2, 0xBECu) )
    *(_BYTE *)(a1 + 624) &= ~4u;
  v300[1] = 0;
  v301.m128i_i8[0] = 0;
  v30 = *(_BYTE **)(a1 + 80);
  v31 = *(_QWORD *)(a1 + 88);
  v300[0] = (size_t)&v301;
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
  sub_12FAA20(&ptr, v30, (__int64)&v30[v31]);
  v304 = &si128.m128i_u64[1];
  sub_12FAA20(&v304, (_BYTE *)v300[0], v300[0] + v300[1]);
  sub_A0AAD0(a1 + 80, &v304);
  if ( v304 != &si128.m128i_u64[1] )
    operator delete(v304);
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
    operator delete((void *)ptr.m256i_i64[0]);
  if ( (__m128i *)v300[0] != &v301 )
    operator delete((void *)v300[0]);
  sub_1302A80((__m128i *)&v304, 0xC91u, a2);
  if ( v307 )
  {
    src[0] = &v298;
    sub_12FAA20(src, v304, (__int64)v304 + si128.m128i_i64[0]);
    v300[0] = (size_t)&v301;
    sub_12FAA20(v300, *(_BYTE **)(a1 + 80), *(_QWORD *)(a1 + 80) + *(_QWORD *)(a1 + 88));
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
    sub_12FAA20(&ptr, (_BYTE *)src[0], (__int64)src[0] + (unsigned __int64)src[1]);
    sub_A0AAD0(a1 + 80, &ptr);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
      operator delete((void *)ptr.m256i_i64[0]);
    if ( (__m128i *)v300[0] != &v301 )
      operator delete((void *)v300[0]);
    if ( src[0] != &v298 )
      operator delete(src[0]);
    if ( v307 && v304 != &si128.m128i_u64[1] )
      operator delete(v304);
  }
  *(_BYTE *)(a1 + 624) &= ~0x10u;
  if ( sub_13021E0(a2, 0xD45u) )
    *(_BYTE *)(a1 + 624) |= 0x10u;
  *(_BYTE *)(a1 + 280) &= ~4u;
  if ( sub_13021E0(a2, 0x3ACu) )
    *(_BYTE *)(a1 + 280) |= 4u;
  *(_BYTE *)(a1 + 280) &= ~8u;
  if ( sub_13021E0(a2, 0x3A6u) )
    *(_BYTE *)(a1 + 280) |= 8u;
  v32 = *(_BYTE **)(a1 + 248);
  v33 = *(_QWORD *)(a1 + 256);
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
  sub_12FAA20(&ptr, v32, (__int64)&v32[v33]);
  sub_12FB750(&v304, "raw");
  sub_A0AAD0(a1 + 248, &v304);
  if ( v304 != &si128.m128i_u64[1] )
    operator delete(v304);
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
    operator delete((void *)ptr.m256i_i64[0]);
  sub_1302A80((__m128i *)&v304, 0x3A8u, a2);
  if ( v307 )
  {
    src[0] = &v298;
    sub_12FAA20(src, v304, (__int64)v304 + si128.m128i_i64[0]);
    v300[0] = (size_t)&v301;
    sub_12FAA20(v300, *(_BYTE **)(a1 + 248), *(_QWORD *)(a1 + 248) + *(_QWORD *)(a1 + 256));
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
    sub_12FAA20(&ptr, (_BYTE *)src[0], (__int64)src[0] + (unsigned __int64)src[1]);
    sub_A0AAD0(a1 + 248, &ptr);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
      operator delete((void *)ptr.m256i_i64[0]);
    if ( (__m128i *)v300[0] != &v301 )
      operator delete((void *)v300[0]);
    if ( src[0] != &v298 )
      operator delete(src[0]);
    if ( v307 && v304 != &si128.m128i_u64[1] )
      operator delete(v304);
  }
  *(_BYTE *)(a1 + 624) |= 2u;
  if ( sub_13021E0(a2, 0xBF1u) )
    *(_BYTE *)(a1 + 624) &= ~2u;
  *(_BYTE *)(a1 + 280) &= ~1u;
  if ( sub_13021E0(a2, 0x26Fu) )
    *(_BYTE *)(a1 + 280) |= 1u;
  *(_BYTE *)(a1 + 626) &= ~1u;
  if ( sub_13021E0(a2, 0x3BCu) )
  {
    v34 = *(_BYTE *)(a1 + 626) | 1;
    *(_BYTE *)(a1 + 626) = v34;
  }
  else
  {
    v34 = *(_BYTE *)(a1 + 626);
  }
  *(_BYTE *)(a1 + 626) = v34 & 0xFB;
  if ( sub_13021E0(a2, 0x3C5u) )
    *(_BYTE *)(a1 + 626) |= 4u;
  v35 = sub_10DCD30(a2, 0xCEAu);
  if ( v35 )
    *(_BYTE *)(a1 + 624) = (8 * (strcmp(**(const char ***)(v35 + 48), "libc++") == 0)) | *(_BYTE *)(a1 + 624) & 0xF7;
  v36 = j__strlen(&byte_22F0C30);
  v38 = (const void *)sub_21B7BC0(a2, 948, &byte_22F0C30, v36);
  v39 = v37;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v304 = &v306;
  if ( v37 > 0x80 )
  {
    sub_2236E10(&v304, &v306, v37, 1);
    v68 = (char *)v304 + si128.m128i_i64[0];
  }
  else
  {
    if ( !v37 )
    {
      si128.m128i_i64[0] = 0;
      goto LABEL_81;
    }
    v68 = (char *)&v306;
  }
  memcpy(v68, v38, v39);
  v24 = si128.m128i_i64[0] + v39 == 0;
  v69 = si128.m128i_i64[0] + v39;
  si128.m128i_i64[0] = v69;
  if ( !v24 )
  {
    ptr.m256i_i64[1] = v69;
    v303 = 261;
    ptr.m256i_i64[0] = (__int64)v304;
    if ( !(unsigned __int8)sub_228B020(&ptr, 0) )
    {
      if ( *(_QWORD *)(a4 + 8) )
      {
        ptr.m256i_i64[0] = a4;
        v303 = 260;
        sub_228E8C0(&ptr, &v304);
      }
      else
      {
        sub_228EC80(&v304);
      }
    }
  }
LABEL_81:
  sub_228F0B0(&v304, 0, 0);
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
  sub_12FAAE0(&ptr, v304, (__int64)v304 + si128.m128i_i64[0]);
  sub_A0AAD0(a1 + 112, &ptr);
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
    operator delete((void *)ptr.m256i_i64[0]);
  sub_10DC500((__int64)&ptr, a2, 0x3A7u);
  v41 = (char **)ptr.m256i_i64[1];
  v40 = (char **)ptr.m256i_i64[0];
  v273 = ptr.m256i_u32[4];
  v278 = (char **)ptr.m256i_i64[3];
  v281 = (signed __int64)&v293;
  while ( v278 != v40 )
  {
LABEL_85:
    v42 = **((const char ***)*v40 + 6);
    v290 = v42;
    if ( !v42 )
      goto LABEL_115;
    v43 = strlen(v42);
    v291 = v43;
    if ( !v43 )
      goto LABEL_115;
    v44 = memchr(v42, 61, v43);
    if ( !v44 || v44 - v42 == -1 )
      goto LABEL_115;
    LOBYTE(v300[0]) = 61;
    v45 = src;
    sub_12FA230((_QWORD *)v281, (__int64 *)&v290, (__int64)v300, 1);
    v300[0] = (size_t)&v301;
    sub_12FAAE0(v300, (_BYTE *)v294, v294 + v295);
    src[0] = &v298;
    sub_12FAAE0(src, v293.m128_u64[0], v293.m128_u64[0] + v293.m128_u64[1]);
    v46 = *(_QWORD *)(a1 + 192);
    v47 = (_QWORD *)(a1 + 184);
    n = a1 + 184;
    if ( !v46 )
      goto LABEL_102;
    m128i_i64 = (__int64)v40;
    v48 = v46;
    v49 = src[1];
    v280 = src;
    s2 = src[0];
    do
    {
      while ( 1 )
      {
        v50 = *(_QWORD *)(v48 + 40);
        v51 = (size_t)v49;
        if ( v50 <= (unsigned __int64)v49 )
          v51 = *(_QWORD *)(v48 + 40);
        if ( v51 )
        {
          LODWORD(v52) = memcmp(*(const void **)(v48 + 32), s2, v51);
          if ( (_DWORD)v52 )
            goto LABEL_98;
        }
        v52 = v50 - (_QWORD)v49;
        if ( (__int64)(v50 - (_QWORD)v49) > 0x7FFFFFFF )
          break;
        if ( v52 >= (__int64)0xFFFFFFFF80000000LL )
        {
LABEL_98:
          if ( (int)v52 >= 0 )
            break;
        }
        v48 = *(_QWORD *)(v48 + 24);
        if ( !v48 )
          goto LABEL_100;
      }
      v47 = (_QWORD *)v48;
      v48 = *(_QWORD *)(v48 + 16);
    }
    while ( v48 );
LABEL_100:
    v40 = (char **)m128i_i64;
    v45 = v280;
    if ( (_QWORD *)n == v47 || sub_9C4B50((__int64)v280, (__int64)(v47 + 4)) < 0 )
    {
LABEL_102:
      v53 = (__m128i *)operator new(0x60u);
      s2 = &v53[2];
      m128i_i64 = (__int64)v53[3].m128i_i64;
      v53[2].m128i_i64[0] = (__int64)v53[3].m128i_i64;
      if ( src[0] == v45 + 2 )
      {
        v53[3] = _mm_load_si128(&v298);
      }
      else
      {
        v53[2].m128i_i64[0] = (__int64)src[0];
        v53[3].m128i_i64[0] = v298.m128i_i64[0];
      }
      v54 = src[1];
      src[1] = nullptr;
      v298.m128i_i8[0] = 0;
      v53[2].m128i_i64[1] = (__int64)v54;
      src[0] = v45 + 2;
      v55 = (__m128i *)v300[0];
      v53[4].m128i_i64[0] = (__int64)v53[5].m128i_i64;
      if ( v55 == &v301 )
      {
        v53[5] = _mm_load_si128(&v301);
      }
      else
      {
        v53[4].m128i_i64[0] = (__int64)v55;
        v53[5].m128i_i64[0] = v301.m128i_i64[0];
      }
      v56 = v300[1];
      s2 = &v53[5];
      v300[1] = 0;
      v53[4].m128i_i64[1] = v56;
      v300[0] = (size_t)&v301;
      v301.m128i_i8[0] = 0;
      v57 = sub_12EF180((_QWORD *)(a1 + 176), v47, (const void **)&v53[2]);
      if ( v58 )
      {
        if ( v57 || (void *)n == v58 )
        {
          v59 = 1;
        }
        else
        {
          s2 = v58;
          v264 = sub_9C4B50((__int64)v53[2].m128i_i64, (__int64)v58 + 32);
          v58 = s2;
          v59 = v264 >> 31;
        }
        std::_Rb_tree_insert_and_rebalance(v59, v53, v58, n);
        ++*(_QWORD *)(a1 + 216);
      }
      else
      {
        v262 = (void *)v53[4].m128i_i64[0];
        if ( s2 != v262 )
          operator delete(v262);
        v263 = (void *)v53[2].m128i_i64[0];
        if ( (void *)m128i_i64 != v263 )
          operator delete(v263);
        operator delete(v53);
      }
    }
    else
    {
      sub_A0AAD0((__int64)(v47 + 8), v300);
    }
    if ( src[0] != v45 + 2 )
      operator delete(src[0]);
    if ( (__m128i *)v300[0] != &v301 )
      operator delete((void *)v300[0]);
LABEL_115:
    v60 = v40 + 1;
    if ( v40 + 1 == v41 )
    {
LABEL_120:
      v40 = v41;
      if ( v278 == v41 )
        break;
      goto LABEL_85;
    }
    if ( v273 )
    {
      while ( !*v60 || !(unsigned __int8)sub_21B9810(*v60, v273) )
      {
        if ( ++v60 == v41 )
          goto LABEL_120;
      }
      v40 = v60;
    }
    else
    {
      v40 = &v60[((unsigned __int64)((char *)(v41 - 2) - (char *)v40) >> 3) + 1];
    }
  }
  sub_10DC500((__int64)&ptr, a2, 0x651u);
  v61 = ptr.m256i_i64[1];
  v62 = ptr.m256i_i64[0];
  v63 = ptr.m256i_u32[4];
  s2 = (void *)ptr.m256i_i64[3];
  n = ptr.m256i_i64[1] - 16;
  if ( ptr.m256i_i64[3] != ptr.m256i_i64[0] )
  {
    while ( 1 )
    {
      v64 = 0;
      v65 = *(const char ***)(*(_QWORD *)v62 + 48LL);
      v66 = (char *)*v65;
      if ( *v65 )
        v64 = (__int64)&v66[strlen(*v65)];
      v300[0] = (size_t)&v301;
      sub_12FAAE0(v300, v66, v64);
      sub_A82C60(a1 + 224, (__m128i *)v300);
      if ( (__m128i *)v300[0] != &v301 )
        operator delete((void *)v300[0]);
      v67 = (_QWORD *)(v62 + 8);
      if ( v62 + 8 == v61 )
        break;
      if ( v63 )
      {
        while ( !*v67 || !(unsigned __int8)sub_21B9810(*v67, v63) )
        {
          if ( (_QWORD *)v61 == ++v67 )
            goto LABEL_131;
        }
        v62 = (__int64)v67;
        if ( s2 == v67 )
          goto LABEL_146;
      }
      else
      {
        v67 += ((n - v62) >> 3) + 1;
LABEL_131:
        if ( s2 == v67 )
          goto LABEL_146;
        v62 = (__int64)v67;
      }
    }
    v67 = (_QWORD *)v61;
    goto LABEL_131;
  }
LABEL_146:
  sub_10DC500((__int64)&ptr, a2, 0x3BDu);
  v274 = ptr.m256i_i64[1];
  v70 = ptr.m256i_i64[0];
  LODWORD(s2) = ptr.m256i_i32[4];
  m128i_i64 = ptr.m256i_i64[3];
  v280 = src;
LABEL_147:
  if ( m128i_i64 != v70 )
  {
    while ( 1 )
    {
      v71 = **(void ***)(*(_QWORD *)v70 + 48LL);
      v72 = nullptr;
      src[0] = v71;
      if ( v71 )
        v72 = (void *)strlen((const char *)v71);
      src[1] = v72;
      LOBYTE(v300[0]) = 61;
      v73 = (void *)sub_2246AB0(v280, v300, 1, 0);
      v74 = src[0];
      v75 = src[1];
      if ( v73 != (void *)-1LL )
      {
        if ( src[1] <= v73 )
          v73 = src[1];
        v75 = v73;
      }
      v76 = sub_2248890(src[0], v75);
      v77 = (char *)operator new[]((unsigned __int64)v75);
      v300[1] = __PAIR64__(v76, (unsigned int)v75);
      v78 = v77;
      v300[0] = (size_t)v77;
      memcpy(v77, v74, (size_t)v75);
      if ( *(_DWORD *)(a1 + 312) )
        break;
      v79 = *(_QWORD *)(a1 + 328);
      v281 = *(unsigned int *)(a1 + 336);
      v282 = v79;
      v278 = (char **)(v79 + 16 * v281);
      v80 = (16 * v281) >> 4;
      if ( (16 * v281) >> 6 )
      {
        n = v79 + ((16 * v281) >> 6 << 6);
        v81 = v79;
        while ( 1 )
        {
          if ( (_DWORD)v75 == *(_DWORD *)(v81 + 8)
            && (!(_DWORD)v75 || !memcmp(*(const void **)v81, v78, (unsigned int)v75)) )
          {
            goto LABEL_170;
          }
          v82 = v81 + 16;
          if ( (_DWORD)v75 == *(_DWORD *)(v81 + 24)
            && (!(_DWORD)v75 || !memcmp(*(const void **)(v81 + 16), v78, (unsigned int)v75)) )
          {
            break;
          }
          v82 = v81 + 32;
          if ( (_DWORD)v75 == *(_DWORD *)(v81 + 40)
            && (!(_DWORD)v75 || !memcmp(*(const void **)(v81 + 32), v78, (unsigned int)v75)) )
          {
            break;
          }
          v82 = v81 + 48;
          if ( (_DWORD)v75 == *(_DWORD *)(v81 + 56)
            && (!(_DWORD)v75 || !memcmp(*(const void **)(v81 + 48), v78, (unsigned int)v75)) )
          {
            break;
          }
          v81 += 64LL;
          if ( n == v81 )
          {
            v80 = (__int64)((__int64)v278 - v81) >> 4;
            goto LABEL_272;
          }
        }
        v81 = v82;
        goto LABEL_170;
      }
      v81 = v79;
LABEL_272:
      if ( v80 != 2 )
      {
        if ( v80 != 3 )
        {
          if ( v80 != 1 )
            goto LABEL_275;
LABEL_526:
          if ( (_DWORD)v75 == *(_DWORD *)(v81 + 8)
            && (!(_DWORD)v75 || !memcmp(*(const void **)v81, v78, (unsigned int)v75)) )
          {
            goto LABEL_170;
          }
LABEL_275:
          v130 = v300;
          v131 = (char *)(v281 + 1);
          if ( v281 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 340) )
          {
            v267 = a1 + 328;
            if ( v282 > (unsigned __int64)v300 || v278 <= (char **)v300 )
            {
              sub_12DE810(v267, (__int64)v131);
              v130 = v300;
              v278 = (char **)(*(_QWORD *)(a1 + 328) + 16LL * *(unsigned int *)(a1 + 336));
            }
            else
            {
              sub_12DE810(v267, (__int64)v131);
              v268 = *(_QWORD *)(a1 + 328);
              v130 = (size_t *)((char *)v300 + v268 - v282);
              v278 = (char **)(v268 + 16LL * *(unsigned int *)(a1 + 336));
            }
          }
          v132 = v278;
          v133 = *((unsigned int *)v130 + 2);
          *((_DWORD *)v278 + 3) = *((_DWORD *)v130 + 3);
          v134 = (char *)*v130;
          *((_DWORD *)v132 + 2) = v133;
          if ( v134 == (char *)-8192LL || v134 == (char *)-4096LL )
          {
            *v278 = v134;
          }
          else
          {
            v135 = (char *)operator new[](v133);
            v136 = *((unsigned int *)v132 + 2);
            *v132 = v135;
            memcpy(v135, (const void *)*v130, v136);
          }
          LODWORD(n) = *(_DWORD *)(a1 + 336);
          v137 = (unsigned int)(n + 1);
          *(_DWORD *)(a1 + 336) = v137;
          if ( (unsigned int)v137 > 0x10 )
          {
            v138 = *(_QWORD *)(a1 + 328);
            v139 = (__int64 *)(a1 + 304);
            v282 = v70;
            v140 = v138 + 16 * v137;
            v285 = &v293;
            while ( 2 )
            {
              while ( (unsigned __int8)sub_1337DD0(v139, v138, (__int64 *)&v290) )
              {
LABEL_281:
                v138 += 16;
                if ( v140 == v138 )
                  goto LABEL_295;
              }
              v143 = *(unsigned int *)(a1 + 320);
              v144 = (__int64)v290;
              v145 = *(_DWORD *)(a1 + 312) + 1;
              v146 = 2 * v143;
              v147 = (unsigned int)(4 * v145);
              v293.m128_u64[0] = (unsigned __int64)v290;
              if ( (unsigned int)v147 < 3 * (int)v143 )
              {
                if ( (int)v143 - *(_DWORD *)(a1 + 316) - v145 > (unsigned int)v143 >> 3 )
                  goto LABEL_285;
                v146 = v143;
              }
              sub_1345C70(v139, v146, v143, v141, v147, v142);
              sub_1337DD0(v139, v138, (__int64 *)v285);
              v144 = v293.m128_u64[0];
              v145 = *(_DWORD *)(a1 + 312) + 1;
LABEL_285:
              *(_DWORD *)(a1 + 312) = v145;
              if ( *(_DWORD *)(v144 + 12)
                || *(_QWORD *)v144 != -4096 && (*(_QWORD *)v144 == -8192 || *(_DWORD *)(v144 + 8)) )
              {
                --*(_DWORD *)(a1 + 316);
              }
              v148 = *(const void **)v138;
              v149 = *(_DWORD *)(v138 + 8);
              v150 = *(_DWORD *)(v138 + 12);
              if ( *(_QWORD *)v138 != -4096 && v148 != (const void *)-8192LL )
              {
                LODWORD(v281) = *(_DWORD *)(v138 + 12);
                LODWORD(v278) = v149;
                n = v149;
                v151 = (void *)operator new[](v149);
                v152 = memcpy(v151, *(const void **)v138, n);
                v150 = v281;
                v149 = (unsigned int)v278;
                v148 = v152;
              }
              v153 = *(char **)v144;
              *(_DWORD *)(v144 + 8) = v149;
              *(_QWORD *)v144 = v148;
              *(_DWORD *)(v144 + 12) = v150;
              if ( v153 + 0x2000 == nullptr || v153 + 4096 == nullptr || !v153 )
                goto LABEL_281;
              operator delete[](v153);
              v138 += 16;
              if ( v140 == v138 )
              {
LABEL_295:
                v70 = v282;
                v78 = (char *)v300[0];
                goto LABEL_171;
              }
              continue;
            }
          }
LABEL_269:
          v78 = (char *)v300[0];
          goto LABEL_171;
        }
        if ( (_DWORD)v75 == *(_DWORD *)(v81 + 8)
          && (!(_DWORD)v75 || !memcmp(*(const void **)v81, v78, (unsigned int)v75)) )
        {
          goto LABEL_170;
        }
        v81 += 16LL;
      }
      if ( (_DWORD)v75 != *(_DWORD *)(v81 + 8) || (_DWORD)v75 && memcmp(*(const void **)v81, v78, (unsigned int)v75) )
      {
        v81 += 16LL;
        goto LABEL_526;
      }
LABEL_170:
      if ( v278 == (char **)v81 )
        goto LABEL_275;
LABEL_171:
      if ( v78 + 0x2000 != nullptr && v78 + 4096 != nullptr && v78 )
        operator delete[](v78);
      v83 = (_QWORD *)(v70 + 8);
      if ( v70 + 8 != v274 )
      {
        if ( (_DWORD)s2 )
        {
          while ( !*v83 || !(unsigned __int8)sub_21B9810(*v83, (unsigned int)s2) )
          {
            if ( (_QWORD *)v274 == ++v83 )
              goto LABEL_179;
          }
          v70 = (unsigned __int64)v83;
        }
        else
        {
          v70 = (unsigned __int64)&v83[((v274 - 16 - v70) >> 3) + 1];
        }
        goto LABEL_147;
      }
LABEL_179:
      v70 = v274;
      if ( m128i_i64 == v274 )
        goto LABEL_180;
    }
    v127 = (__int64 *)(a1 + 304);
    if ( (unsigned __int8)sub_1337DD0((__int64 *)(a1 + 304), (__int64)v300, (__int64 *)&v290) )
      goto LABEL_269;
    v242 = (__int64)v290;
    v243 = *(_DWORD *)(a1 + 312);
    v244 = *(unsigned int *)(a1 + 320);
    v293.m128_u64[0] = (unsigned __int64)v290;
    LODWORD(n) = v243;
    v245 = 2 * v244;
    v246 = v243 + 1;
    v247 = (unsigned int)(3 * v244);
    if ( 4 * v246 < (unsigned int)v247 )
    {
      v247 = (unsigned int)(v244 - *(_DWORD *)(a1 + 316) - v246);
      if ( (unsigned int)v247 > (unsigned int)v244 >> 3 )
        goto LABEL_493;
      v245 = v244;
    }
    sub_1345C70(v127, v245, v244, v247, v128, v129);
    sub_1337DD0(v127, (__int64)v300, (__int64 *)&v293);
    v242 = v293.m128_u64[0];
    LODWORD(n) = *(_DWORD *)(a1 + 312);
    v246 = n + 1;
LABEL_493:
    *(_DWORD *)(a1 + 312) = v246;
    if ( *(_DWORD *)(v242 + 12) || *(_QWORD *)v242 != -4096 && (*(_QWORD *)v242 == -8192 || *(_DWORD *)(v242 + 8)) )
      --*(_DWORD *)(a1 + 316);
    v248 = (void *)v300[0];
    v249 = v300[1];
    if ( v300[0] != -4096 && v300[0] != -8192 )
    {
      v250 = LODWORD(v300[1]);
      v251 = (void *)operator new[](LODWORD(v300[1]));
      v248 = memcpy(v251, (const void *)v300[0], v250);
    }
    v252 = *(char **)v242;
    *(_QWORD *)(v242 + 8) = v249;
    *(_QWORD *)v242 = v248;
    if ( v252 + 4096 != nullptr && v252 + 0x2000 != nullptr && v252 )
      operator delete[](v252);
    v253 = v300;
    v254 = *(unsigned int *)(a1 + 336);
    v255 = *(_QWORD *)(a1 + 328);
    v256 = v254 + 1;
    v257 = v255 + 16 * v254;
    if ( v256 > *(unsigned int *)(a1 + 340) )
    {
      v269 = a1 + 328;
      if ( v255 > (unsigned __int64)v300 || v257 <= (unsigned __int64)v300 )
      {
        sub_12DE810(v269, v256);
        v253 = v300;
        v257 = *(_QWORD *)(a1 + 328) + 16LL * *(unsigned int *)(a1 + 336);
      }
      else
      {
        sub_12DE810(v269, v256);
        v270 = *(_QWORD *)(a1 + 328);
        v253 = (size_t *)((char *)v300 + v270 - v255);
        v257 = 16LL * *(unsigned int *)(a1 + 336) + v270;
      }
    }
    v258 = *((unsigned int *)v253 + 2);
    *(_DWORD *)(v257 + 12) = *((_DWORD *)v253 + 3);
    v259 = (const void *)*v253;
    *(_DWORD *)(v257 + 8) = v258;
    if ( v259 == (const void *)-4096LL || v259 == (const void *)-8192LL )
    {
      *(_QWORD *)v257 = v259;
    }
    else
    {
      v260 = (void *)operator new[](v258);
      v261 = *(unsigned int *)(v257 + 8);
      *(_QWORD *)v257 = v260;
      memcpy(v260, (const void *)*v253, v261);
    }
    ++*(_DWORD *)(a1 + 336);
    goto LABEL_269;
  }
LABEL_180:
  v275 = 1;
  if ( !sub_10DCD30(a2, 0xCF4u) )
    v275 = sub_10DCD30(a2, 0x878u) != 0;
  sub_10DF020((__int64)v300, a2, 0x87Fu, 0x7BCu);
  v287 = v301.m128i_i64[0];
  v286 = _mm_load_si128((const __m128i *)v300);
  v278 = (char **)v301.m128i_i64[1];
LABEL_183:
  v84 = (_QWORD *)v286.m128i_i64[0];
  if ( v278 != (char **)v286.m128i_i64[0] )
  {
    s2 = v288;
    n = a1 + 32;
    while ( 1 )
    {
      v85 = *v84;
      v86 = sub_21B9810(*v84, 1980);
      v87 = *(char ***)(v85 + 48);
      v88 = *v87;
      if ( v86 == 1 || !v275 )
        break;
      if ( *v88 != 61 )
      {
        src[0] = &v298;
        goto LABEL_189;
      }
      v299 = 257;
      *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
      v167 = *v87;
      v168 = 0;
      v296 = 257;
      if ( v167 )
      {
        m128i_i64 = (__int64)v167;
        v168 = j__strlen(v167);
        v167 = (const char *)m128i_i64;
        if ( v168 )
        {
          --v168;
          v167 = (const char *)(m128i_i64 + 1);
        }
      }
      v291 = v168;
      v292 = 261;
      v290 = v167;
      v289 = 260;
      v288[0] = a1;
      sub_228A3B0(&ptr, s2, &v290, &v293, src);
      src[0] = &v298;
      sub_12FAAE0(src, ptr.m256i_i64[0], ptr.m256i_i64[0] + ptr.m256i_i64[1]);
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
        free((void *)ptr.m256i_i64[0]);
LABEL_191:
      v293.m128_i32[0] = 1;
      LOBYTE(v288[0]) = v86;
      *(_OWORD *)ptr.m256i_i8 = *(_OWORD *)src;
      LOBYTE(v290) = 1;
      sub_1301D70((char **)n, (__m128i *)&ptr, (__int64 *)&v293, s2, &v290);
      if ( src[0] != &v298 )
        operator delete(src[0]);
      v90 = v84 + 1;
      v84 = (_QWORD *)v286.m128i_i64[1];
      for ( v286.m128i_i64[0] = (__int64)v90; v90 != (_QWORD *)v286.m128i_i64[1]; v286.m128i_i64[0] = (__int64)v90 )
      {
        v91 = *v90;
        if ( *v90 )
        {
          if ( (_DWORD)v287
            && ((unsigned __int8)sub_21B9810(*v90, (unsigned int)v287)
             || HIDWORD(v287) && (unsigned __int8)sub_21B9810(v91, HIDWORD(v287))) )
          {
            goto LABEL_183;
          }
        }
        ++v90;
      }
      if ( v278 == (char **)v286.m128i_i64[1] )
        goto LABEL_201;
    }
    src[0] = &v298;
    if ( v88 )
    {
LABEL_189:
      m128i_i64 = (__int64)v88;
      v89 = (__int64)&v88[strlen(v88)];
    }
    else
    {
      v89 = -1;
    }
    sub_12FAAE0(src, v88, v89);
    goto LABEL_191;
  }
LABEL_201:
  ptr.m256i_i64[0] = 0x87D00000876LL;
  ptr.m256i_i32[2] = 2172;
  v92 = sub_21B6DA0(a2, &ptr, 3);
  v93 = *(_QWORD *)(a2 + 8);
  ptr.m256i_i64[2] = 0x87D00000876LL;
  ptr.m256i_i32[6] = 2172;
  v94 = (__int64 *)(v93 + 8LL * (unsigned int)v92);
  v95 = (__int64 *)(v93 + 8 * HIDWORD(v92));
  s2 = v95;
  *(__m128 *)ptr.m256i_i8 = _mm_loadh_ps((const double *)&s2);
  if ( v94 != v95 )
  {
    while ( 1 )
    {
      v96 = *v94;
      p_ptr = &ptr;
      if ( *v94 )
        break;
LABEL_206:
      ptr.m256i_i64[0] = (__int64)++v94;
      if ( v95 == v94 )
        goto LABEL_207;
    }
    while ( 1 )
    {
      v98 = p_ptr->m256i_u32[4];
      if ( !(_DWORD)v98 )
        goto LABEL_206;
      if ( (unsigned __int8)sub_21B9810(v96, v98) )
        break;
      p_ptr = (__m256i *)((char *)p_ptr + 4);
      if ( (__m256i *)((char *)&ptr.m256i_u64[1] + 4) == p_ptr )
        goto LABEL_206;
    }
    s2 = v95;
    v294 = 0x87D00000876LL;
    LODWORD(v295) = 2172;
    v293 = _mm_loadh_ps((const double *)&s2);
    if ( v94 != v95 )
    {
      n = 0;
      v225 = (char *)&byte_22F0C30;
      while ( 1 )
      {
        v226 = *v94;
        if ( (unsigned __int8)sub_21B9810(*v94, 2166) )
        {
          n = 0;
          v227 = *(const char ***)(v226 + 48);
          v225 = (char *)*v227;
          if ( *v227 )
            n = strlen(*v227);
        }
        else
        {
          v24 = (unsigned __int8)sub_21B9810(v226, 2173) == 0;
          v232 = *(char ***)(v226 + 48);
          if ( v24 )
          {
            v238 = *v232;
            if ( v225 )
            {
              v300[0] = (size_t)&v301;
              sub_12FAAE0(v300, v225, (__int64)&v225[n]);
              v239 = 0x7FFFFFFFFFFFFFFFLL - v300[1];
            }
            else
            {
              v300[1] = 0;
              v239 = 0x7FFFFFFFFFFFFFFFLL;
              v301.m128i_i8[0] = 0;
              v300[0] = (size_t)&v301;
            }
            v240 = j__strlen(v238);
            if ( v240 > v239 )
LABEL_603:
              std::__throw_length_error("basic_string::append");
            v241 = (__m128i *)sub_9EE560(v300, v238, v240);
            ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
            if ( (__m128i *)v241->m128i_i64[0] == &v241[1] )
            {
              *(__m128i *)&ptr.m256i_u64[2] = _mm_loadu_si128(v241 + 1);
            }
            else
            {
              ptr.m256i_i64[0] = v241->m128i_i64[0];
              ptr.m256i_i64[2] = v241[1].m128i_i64[0];
            }
            ptr.m256i_i64[1] = v241->m128i_i64[1];
            v241->m128i_i64[0] = (__int64)v241[1].m128i_i64;
            v241->m128i_i64[1] = 0;
            v241[1].m128i_i8[0] = 0;
            LODWORD(v290) = 1;
            *(_OWORD *)src = *(_OWORD *)ptr.m256i_i8;
            v286.m128i_i8[0] = 0;
            LOBYTE(v288[0]) = 1;
            sub_1301D70((char **)(a1 + 32), (__m128i *)src, (__int64 *)&v290, &v286, v288);
            if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
              operator delete((void *)ptr.m256i_i64[0]);
            v237 = (void *)v300[0];
            if ( (__m128i *)v300[0] == &v301 )
              goto LABEL_462;
          }
          else
          {
            v233 = *v232;
            src[0] = &v298;
            if ( v225 )
            {
              sub_12FAAE0(src, v225, (__int64)&v225[n]);
              v234 = 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)src[1];
            }
            else
            {
              src[1] = nullptr;
              v234 = 0x7FFFFFFFFFFFFFFFLL;
              v298.m128i_i8[0] = 0;
            }
            v235 = j__strlen(v233);
            if ( v235 > v234 )
              goto LABEL_603;
            v236 = (__m128i *)sub_9EE560(src, v233, v235);
            ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
            if ( (__m128i *)v236->m128i_i64[0] == &v236[1] )
            {
              *(__m128i *)&ptr.m256i_u64[2] = _mm_loadu_si128(v236 + 1);
            }
            else
            {
              ptr.m256i_i64[0] = v236->m128i_i64[0];
              ptr.m256i_i64[2] = v236[1].m128i_i64[0];
            }
            ptr.m256i_i64[1] = v236->m128i_i64[1];
            v236->m128i_i64[0] = (__int64)v236[1].m128i_i64;
            v236->m128i_i64[1] = 0;
            v236[1].m128i_i8[0] = 0;
            LODWORD(v290) = 8;
            *(_OWORD *)v300 = *(_OWORD *)ptr.m256i_i8;
            v286.m128i_i8[0] = 0;
            LOBYTE(v288[0]) = 1;
            sub_1301D70((char **)(a1 + 32), (__m128i *)v300, (__int64 *)&v290, &v286, v288);
            if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
              operator delete((void *)ptr.m256i_i64[0]);
            v237 = src[0];
            if ( src[0] == &v298 )
              goto LABEL_462;
          }
          operator delete(v237);
        }
LABEL_462:
        v228 = v94 + 1;
        v293.m128_u64[0] = (unsigned __int64)v228;
        if ( v228 != v95 )
        {
          s2 = v225;
          while ( 1 )
          {
            v229 = *v228;
            v230 = &v293;
            if ( *v228 )
              break;
LABEL_468:
            v293.m128_u64[0] = (unsigned __int64)++v228;
            if ( v95 == v228 )
              goto LABEL_207;
          }
          while ( 1 )
          {
            v231 = v230[1].m128_u32[0];
            if ( !(_DWORD)v231 )
              goto LABEL_468;
            if ( (unsigned __int8)sub_21B9810(v229, v231) )
              break;
            v230 = (__m128 *)((char *)v230 + 4);
            if ( &v293.m128_u32[3] == (unsigned __int32 *)v230 )
              goto LABEL_468;
          }
          v94 = (__int64 *)v293.m128_u64[0];
          v225 = (char *)s2;
          if ( v95 != (__int64 *)v293.m128_u64[0] )
            continue;
        }
        break;
      }
    }
  }
LABEL_207:
  sub_10DC500((__int64)v300, a2, 0x853u);
  v99 = v300[0];
  v100 = v300[1];
  v101 = v301.m128i_i32[0];
  m128i_i64 = v301.m128i_i64[1];
LABEL_208:
  if ( m128i_i64 != v99 )
  {
    n = (size_t)&v290;
    s2 = v288;
    v278 = (char **)(a1 + 32);
    while ( 1 )
    {
      v102 = *(char ***)(*(_QWORD *)v99 + 48LL);
      v103 = *v102;
      if ( !v275 )
        break;
      if ( *v103 != 61 )
      {
        src[0] = &v298;
        goto LABEL_213;
      }
      v289 = 257;
      *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
      v171 = *v102;
      v172 = 0;
      v292 = 257;
      if ( v171 )
      {
        v172 = j__strlen(v171);
        if ( v172 )
        {
          --v172;
          ++v171;
        }
      }
      v293.m128_u64[0] = (unsigned __int64)v171;
      v293.m128_u64[1] = v172;
      v299 = 260;
      v296 = 261;
      src[0] = (void *)a1;
      sub_228A3B0(&ptr, src, &v293, n, s2);
      src[0] = &v298;
      sub_12FAAE0(src, ptr.m256i_i64[0], ptr.m256i_i64[0] + ptr.m256i_i64[1]);
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
        free((void *)ptr.m256i_i64[0]);
LABEL_215:
      v293.m128_i32[0] = 8;
      LOBYTE(v288[0]) = 0;
      *(_OWORD *)ptr.m256i_i8 = *(_OWORD *)src;
      LOBYTE(v290) = 1;
      sub_1301D70(v278, (__m128i *)&ptr, (__int64 *)&v293, s2, (_BYTE *)n);
      if ( src[0] != &v298 )
        operator delete(src[0]);
      v105 = (_QWORD *)(v99 + 8);
      if ( v99 + 8 == v100 )
      {
LABEL_222:
        v99 = v100;
      }
      else
      {
        if ( v101 )
        {
          while ( !*v105 || !(unsigned __int8)sub_21B9810(*v105, v101) )
          {
            if ( ++v105 == (_QWORD *)v100 )
              goto LABEL_222;
          }
          v99 = (unsigned __int64)v105;
          goto LABEL_208;
        }
        v99 = (unsigned __int64)&v105[((v100 - 16 - v99) >> 3) + 1];
      }
      if ( m128i_i64 == v99 )
        goto LABEL_224;
    }
    src[0] = &v298;
    if ( v103 )
LABEL_213:
      v104 = (__int64)&v103[strlen(v103)];
    else
      v104 = -1;
    sub_12FAAE0(src, v103, v104);
    goto LABEL_215;
  }
LABEL_224:
  sub_10DC500((__int64)v300, a2, 0x877u);
  v106 = v300[0];
  v107 = v300[1];
  v108 = v301.m128i_i32[0];
  m128i_i64 = v301.m128i_i64[1];
LABEL_225:
  if ( m128i_i64 != v106 )
  {
    n = (size_t)&v290;
    s2 = v288;
    v278 = (char **)(a1 + 32);
    while ( 1 )
    {
      v109 = *(char ***)(*(_QWORD *)v106 + 48LL);
      v110 = *v109;
      if ( !v275 )
        break;
      if ( *v110 != 61 )
      {
        src[0] = &v298;
        goto LABEL_230;
      }
      v289 = 257;
      *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
      v169 = *v109;
      v170 = 0;
      v292 = 257;
      if ( v169 )
      {
        v170 = j__strlen(v169);
        if ( v170 )
        {
          --v170;
          ++v169;
        }
      }
      v293.m128_u64[0] = (unsigned __int64)v169;
      v296 = 261;
      v293.m128_u64[1] = v170;
      v299 = 260;
      src[0] = (void *)a1;
      sub_228A3B0(&ptr, src, &v293, n, s2);
      src[0] = &v298;
      sub_12FAAE0(src, ptr.m256i_i64[0], ptr.m256i_i64[0] + ptr.m256i_i64[1]);
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
        free((void *)ptr.m256i_i64[0]);
LABEL_232:
      v293.m128_i32[0] = 0;
      LOBYTE(v288[0]) = 0;
      *(_OWORD *)ptr.m256i_i8 = *(_OWORD *)src;
      LOBYTE(v290) = 1;
      sub_1301D70(v278, (__m128i *)&ptr, (__int64 *)&v293, s2, (_BYTE *)n);
      if ( src[0] != &v298 )
        operator delete(src[0]);
      v112 = (_QWORD *)(v106 + 8);
      if ( v106 + 8 == v107 )
      {
LABEL_239:
        v106 = v107;
      }
      else
      {
        if ( v108 )
        {
          while ( !*v112 || !(unsigned __int8)sub_21B9810(*v112, v108) )
          {
            if ( (_QWORD *)v107 == ++v112 )
              goto LABEL_239;
          }
          v106 = (unsigned __int64)v112;
          goto LABEL_225;
        }
        v106 = (unsigned __int64)&v112[((v107 - 16 - v106) >> 3) + 1];
      }
      if ( m128i_i64 == v106 )
        goto LABEL_241;
    }
    src[0] = &v298;
    if ( v110 )
LABEL_230:
      v111 = (__int64)&v110[strlen(v110)];
    else
      v111 = -1;
    sub_12FAAE0(src, v110, v111);
    goto LABEL_232;
  }
LABEL_241:
  sub_10DF020((__int64)v300, a2, 0x87Au, 0x87Eu);
  v113 = _mm_load_si128((const __m128i *)v300);
  v287 = v301.m128i_i64[0];
  v286 = v113;
  n = v301.m128i_u64[1];
LABEL_242:
  v114 = (_QWORD *)v286.m128i_i64[0];
  if ( v286.m128i_i64[0] != n )
  {
    s2 = (void *)(a1 + 32);
    do
    {
      v115 = *v114;
      v24 = (unsigned __int8)sub_21B9810(*v114, 2174) == 0;
      v116 = *(char ***)(v115 + 48);
      v117 = *v116;
      if ( !v24 )
      {
        v118 = 0;
        if ( v117 )
          v118 = strlen(v117);
        ptr.m256i_i64[0] = (__int64)v117;
        ptr.m256i_i64[1] = v118;
        LODWORD(src[0]) = 2;
        LOBYTE(v290) = 0;
        v293.m128_i8[0] = 0;
        sub_1301D70((char **)s2, (__m128i *)&ptr, (__int64 *)src, &v290, &v293);
        goto LABEL_248;
      }
      if ( v275 )
      {
        if ( *v117 == 61 )
        {
          v289 = 257;
          *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
          ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
          v223 = *v116;
          v224 = 0;
          v292 = 257;
          if ( v223 )
          {
            v224 = j__strlen(v223);
            if ( v224 )
            {
              --v224;
              ++v223;
            }
          }
          v293.m128_u64[0] = (unsigned __int64)v223;
          v293.m128_u64[1] = v224;
          v296 = 261;
          v299 = 260;
          src[0] = (void *)a1;
          sub_228A3B0(&ptr, src, &v293, &v290, v288);
          src[0] = &v298;
          sub_12FAAE0(src, ptr.m256i_i64[0], ptr.m256i_i64[0] + ptr.m256i_i64[1]);
          if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
            free((void *)ptr.m256i_i64[0]);
          goto LABEL_302;
        }
        src[0] = &v298;
      }
      else
      {
        src[0] = &v298;
        if ( !v117 )
        {
          v154 = -1;
          goto LABEL_301;
        }
      }
      v154 = (__int64)&v117[strlen(v117)];
LABEL_301:
      sub_12FAAE0(src, v117, v154);
LABEL_302:
      LOBYTE(v288[0]) = 0;
      v293.m128_i32[0] = 2;
      *(_OWORD *)ptr.m256i_i8 = *(_OWORD *)src;
      LOBYTE(v290) = 1;
      sub_1301D70((char **)s2, (__m128i *)&ptr, (__int64 *)&v293, v288, &v290);
      if ( src[0] != &v298 )
        operator delete(src[0]);
LABEL_248:
      v119 = v114 + 1;
      v114 = (_QWORD *)v286.m128i_i64[1];
      for ( v286.m128i_i64[0] = (__int64)v119; v119 != v114; v286.m128i_i64[0] = (__int64)v119 )
      {
        v120 = *v119;
        if ( *v119 )
        {
          if ( (_DWORD)v287
            && ((unsigned __int8)sub_21B9810(*v119, (unsigned int)v287)
             || HIDWORD(v287) && (unsigned __int8)sub_21B9810(v120, HIDWORD(v287))) )
          {
            goto LABEL_242;
          }
        }
        ++v119;
      }
    }
    while ( (_QWORD *)n != v114 );
  }
  sub_10DC500((__int64)&ptr, a2, 0x855u);
  v121 = ptr.m256i_i64[1];
  v122 = ptr.m256i_i64[0];
  v123 = ptr.m256i_u32[4];
  s2 = (void *)ptr.m256i_i64[3];
  n = (size_t)src;
  if ( ptr.m256i_i64[3] == ptr.m256i_i64[0] )
    goto LABEL_311;
  while ( 2 )
  {
    v278 = (char **)(v121 - 16);
    while ( 2 )
    {
      v124 = **(_QWORD **)(*(_QWORD *)v122 + 48LL);
      v125 = 0;
      if ( v124 )
        v125 = strlen(**(const char ***)(*(_QWORD *)v122 + 48LL));
      v300[0] = v124;
      v126 = (_QWORD *)(v122 + 8);
      v300[1] = v125;
      LODWORD(src[0]) = 2;
      LOBYTE(v290) = 1;
      v293.m128_i8[0] = 1;
      sub_1301D70((char **)(a1 + 32), (__m128i *)v300, (__int64 *)n, &v290, &v293);
      if ( v122 + 8 == v121 )
      {
        v126 = (_QWORD *)v121;
LABEL_265:
        if ( s2 == v126 )
          goto LABEL_311;
        v122 = (__int64)v126;
        continue;
      }
      break;
    }
    if ( !v123 )
    {
      v126 += (((unsigned __int64)v278 - v122) >> 3) + 1;
      goto LABEL_265;
    }
    while ( !*v126 || !(unsigned __int8)sub_21B9810(*v126, v123) )
    {
      if ( (_QWORD *)v121 == ++v126 )
        goto LABEL_265;
    }
    v122 = (__int64)v126;
    if ( s2 != v126 )
      continue;
    break;
  }
LABEL_311:
  sub_10DC500((__int64)&ptr, a2, 0x854u);
  v155 = ptr.m256i_i64[1];
  v156 = (char *)ptr.m256i_i64[0];
  v157 = ptr.m256i_u32[4];
  s2 = (void *)ptr.m256i_i64[3];
  n = (size_t)src;
LABEL_312:
  if ( s2 != v156 )
  {
    v278 = (char **)(v155 - 16);
    do
    {
      v158 = **(_QWORD **)(*(_QWORD *)v156 + 48LL);
      v159 = 0;
      if ( v158 )
        v159 = strlen(**(const char ***)(*(_QWORD *)v156 + 48LL));
      v300[0] = v158;
      v160 = v156 + 8;
      v300[1] = v159;
      LODWORD(src[0]) = 2;
      LOBYTE(v290) = 1;
      v293.m128_i8[0] = 0;
      sub_1301D70((char **)(a1 + 32), (__m128i *)v300, (__int64 *)n, &v290, &v293);
      if ( v156 + 8 == (char *)v155 )
      {
LABEL_321:
        v156 = (char *)v155;
      }
      else
      {
        if ( v157 )
        {
          while ( !*(_QWORD *)v160 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v160, v157) )
          {
            v160 += 8;
            if ( (char *)v155 == v160 )
              goto LABEL_321;
          }
          v156 = v160;
          goto LABEL_312;
        }
        v156 = &v160[8 * ((unsigned __int64)((char *)v278 - v156) >> 3) + 8];
      }
    }
    while ( s2 != v156 );
  }
  sub_10DC500((__int64)&ptr, a2, 0xA7u);
  v161 = ptr.m256i_i64[1];
  v162 = ptr.m256i_i64[0];
  v163 = ptr.m256i_u32[4];
  s2 = (void *)ptr.m256i_i64[3];
  n = (size_t)src;
  if ( ptr.m256i_i64[3] == ptr.m256i_i64[0] )
    goto LABEL_354;
  while ( 2 )
  {
    v278 = (char **)(v161 - 16);
    while ( 2 )
    {
      v164 = **(_QWORD **)(*(_QWORD *)v162 + 48LL);
      v165 = 0;
      if ( v164 )
        v165 = strlen(**(const char ***)(*(_QWORD *)v162 + 48LL));
      v300[0] = v164;
      v166 = (_QWORD *)(v162 + 8);
      v300[1] = v165;
      LODWORD(src[0]) = 4;
      LOBYTE(v290) = 0;
      v293.m128_i8[0] = 1;
      sub_1301D70((char **)(a1 + 32), (__m128i *)v300, (__int64 *)n, &v290, &v293);
      if ( v162 + 8 == v161 )
      {
        v166 = (_QWORD *)v161;
LABEL_332:
        if ( s2 == v166 )
          goto LABEL_354;
        v162 = (__int64)v166;
        continue;
      }
      break;
    }
    if ( !v163 )
    {
      v166 += (((unsigned __int64)v278 - v162) >> 3) + 1;
      goto LABEL_332;
    }
    while ( !*v166 || !(unsigned __int8)sub_21B9810(*v166, v163) )
    {
      if ( (_QWORD *)v161 == ++v166 )
        goto LABEL_332;
    }
    v162 = (__int64)v166;
    if ( s2 != v166 )
      continue;
    break;
  }
LABEL_354:
  sub_10DC500((__int64)&ptr, a2, 0xF6u);
  v173 = ptr.m256i_i64[1];
  v174 = (char *)ptr.m256i_i64[0];
  v175 = ptr.m256i_u32[4];
  s2 = (void *)ptr.m256i_i64[3];
  n = (size_t)src;
LABEL_355:
  if ( s2 != v174 )
  {
    v278 = (char **)(v173 - 16);
    do
    {
      v176 = **(_QWORD **)(*(_QWORD *)v174 + 48LL);
      v177 = 0;
      if ( v176 )
        v177 = strlen(**(const char ***)(*(_QWORD *)v174 + 48LL));
      v300[0] = v176;
      v178 = v174 + 8;
      v300[1] = v177;
      LODWORD(src[0]) = 5;
      LOBYTE(v290) = 0;
      v293.m128_i8[0] = 1;
      sub_1301D70((char **)(a1 + 32), (__m128i *)v300, (__int64 *)n, &v290, &v293);
      if ( v174 + 8 == (char *)v173 )
      {
LABEL_364:
        v174 = (char *)v173;
      }
      else
      {
        if ( v175 )
        {
          while ( !*(_QWORD *)v178 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v178, v175) )
          {
            v178 += 8;
            if ( (char *)v173 == v178 )
              goto LABEL_364;
          }
          v174 = v178;
          goto LABEL_355;
        }
        v174 = &v178[8 * ((unsigned __int64)((char *)v278 - v174) >> 3) + 8];
      }
    }
    while ( s2 != v174 );
  }
  sub_10DC500((__int64)&ptr, a2, 0xBFDu);
  v179 = ptr.m256i_i64[1];
  v180 = (char *)ptr.m256i_i64[0];
  v181 = ptr.m256i_u32[4];
  s2 = (void *)ptr.m256i_i64[3];
  n = (size_t)src;
LABEL_367:
  if ( s2 != v180 )
  {
    v278 = (char **)(v179 - 16);
    do
    {
      v182 = **(_QWORD **)(*(_QWORD *)v180 + 48LL);
      v183 = 0;
      if ( v182 )
        v183 = strlen(**(const char ***)(*(_QWORD *)v180 + 48LL));
      v300[0] = v182;
      v184 = v180 + 8;
      v300[1] = v183;
      LODWORD(src[0]) = 6;
      LOBYTE(v290) = 0;
      v293.m128_i8[0] = 1;
      sub_1301D70((char **)(a1 + 32), (__m128i *)v300, (__int64 *)n, &v290, &v293);
      if ( v180 + 8 == (char *)v179 )
      {
LABEL_376:
        v180 = (char *)v179;
      }
      else
      {
        if ( v181 )
        {
          while ( !*(_QWORD *)v184 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v184, v181) )
          {
            v184 += 8;
            if ( (char *)v179 == v184 )
              goto LABEL_376;
          }
          v180 = v184;
          goto LABEL_367;
        }
        v180 = &v184[8 * ((unsigned __int64)((char *)v278 - v180) >> 3) + 8];
      }
    }
    while ( s2 != v180 );
  }
  sub_10DC500((__int64)&ptr, a2, 0xBFEu);
  v185 = ptr.m256i_i64[1];
  v186 = ptr.m256i_i64[0];
  v187 = ptr.m256i_u32[4];
  s2 = (void *)ptr.m256i_i64[3];
  n = (size_t)src;
  if ( ptr.m256i_i64[3] == ptr.m256i_i64[0] )
    goto LABEL_391;
  while ( 2 )
  {
    v278 = (char **)(v185 - 16);
    while ( 2 )
    {
      v188 = **(_QWORD **)(*(_QWORD *)v186 + 48LL);
      v189 = 0;
      if ( v188 )
        v189 = strlen(**(const char ***)(*(_QWORD *)v186 + 48LL));
      v300[0] = v188;
      v190 = (_QWORD *)(v186 + 8);
      v300[1] = v189;
      LODWORD(src[0]) = 7;
      LOBYTE(v290) = 0;
      v293.m128_i8[0] = 1;
      sub_1301D70((char **)(a1 + 32), (__m128i *)v300, (__int64 *)n, &v290, &v293);
      if ( v186 + 8 == v185 )
      {
        v190 = (_QWORD *)v185;
LABEL_387:
        if ( s2 == v190 )
          goto LABEL_391;
        v186 = (__int64)v190;
        continue;
      }
      break;
    }
    if ( !v187 )
    {
      v190 += (((unsigned __int64)v278 - v186) >> 3) + 1;
      goto LABEL_387;
    }
    while ( !*v190 || !(unsigned __int8)sub_21B9810(*v190, v187) )
    {
      if ( (_QWORD *)v185 == ++v190 )
        goto LABEL_387;
    }
    v186 = (__int64)v190;
    if ( s2 != v190 )
      continue;
    break;
  }
LABEL_391:
  sub_10DF020((__int64)&ptr, a2, 0x875u, 0x873u);
  v191 = _mm_load_si128((const __m128i *)&ptr);
  v301.m128i_i64[0] = ptr.m256i_i64[2];
  *(__m128i *)v300 = v191;
  s2 = (void *)ptr.m256i_i64[3];
  n = (size_t)src;
  while ( 1 )
  {
    v192 = (_QWORD *)v300[0];
    if ( s2 == (void *)v300[0] )
      break;
    while ( 1 )
    {
      v193 = *v192;
      v194 = (unsigned __int8)sub_21B9810(*v192, 2163) != 0;
      v195 = **(const char ***)(v193 + 48);
      v196 = v194 + 2;
      v197 = nullptr;
      if ( v195 )
        v197 = (void *)strlen(v195);
      v293.m128_i32[0] = v196;
      v198 = v192 + 1;
      src[0] = (void *)v195;
      src[1] = v197;
      LOBYTE(v288[0]) = 0;
      LOBYTE(v290) = 1;
      sub_1301D70((char **)(a1 + 32), (__m128i *)n, (__int64 *)&v293, v288, &v290);
      v192 = (_QWORD *)v300[1];
      v300[0] = (size_t)v198;
      if ( v198 != (_QWORD *)v300[1] )
        break;
LABEL_402:
      if ( s2 == v192 )
        goto LABEL_403;
    }
    while ( 1 )
    {
      v199 = *v198;
      if ( *v198 )
      {
        if ( v301.m128i_i32[0]
          && ((unsigned __int8)sub_21B9810(*v198, v301.m128i_u32[0])
           || v301.m128i_i32[1] && (unsigned __int8)sub_21B9810(v199, v301.m128i_u32[1])) )
        {
          break;
        }
      }
      v300[0] = (size_t)++v198;
      if ( v198 == v192 )
        goto LABEL_402;
    }
  }
LABEL_403:
  sub_10DC500((__int64)&ptr, a2, 0x874u);
  v200 = (char *)ptr.m256i_i64[1];
  v201 = (char *)ptr.m256i_i64[0];
  v202 = ptr.m256i_u32[4];
  s2 = (void *)ptr.m256i_i64[3];
  n = (size_t)src;
LABEL_404:
  if ( s2 != v201 )
  {
    v278 = (char **)(v200 - 16);
    do
    {
      v203 = **(_QWORD **)(*(_QWORD *)v201 + 48LL);
      v204 = 0;
      if ( v203 )
        v204 = strlen(**(const char ***)(*(_QWORD *)v201 + 48LL));
      v300[0] = v203;
      v205 = v201 + 8;
      v300[1] = v204;
      LODWORD(src[0]) = 2;
      LOBYTE(v290) = 1;
      v293.m128_i8[0] = 1;
      sub_1301D70((char **)(a1 + 32), (__m128i *)v300, (__int64 *)n, &v290, &v293);
      if ( v201 + 8 == v200 )
      {
LABEL_413:
        v201 = v200;
      }
      else
      {
        if ( v202 )
        {
          while ( !*(_QWORD *)v205 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v205, v202) )
          {
            v205 += 8;
            if ( v205 == v200 )
              goto LABEL_413;
          }
          v201 = v205;
          goto LABEL_404;
        }
        v201 = &v205[8 * ((unsigned __int64)((char *)v278 - v201) >> 3) + 8];
      }
    }
    while ( s2 != v201 );
  }
  sub_10DF020((__int64)&ptr, a2, 0xCF6u, 0xBD3u);
  v206 = ptr.m256i_i64[3];
  v207 = _mm_load_si128((const __m128i *)&ptr);
  v301.m128i_i64[0] = ptr.m256i_i64[2];
  *(__m128i *)v300 = v207;
LABEL_416:
  v208 = (char *)v300[0];
  while ( (char *)v206 != v208 )
  {
LABEL_418:
    v209 = *(_QWORD *)v208;
    v210 = sub_21B9810(*(_QWORD *)v208, 3318);
    v211 = **(_BYTE ***)(v209 + 48);
    v212 = nullptr;
    if ( v211 )
      v212 = (void *)strlen(**(const char ***)(v209 + 48));
    src[0] = v211;
    v213 = *(__m128i **)(a1 + 64);
    src[1] = v212;
    v293.m128_i8[0] = v210;
    if ( v213 == *(__m128i **)(a1 + 72) )
    {
      sub_130AFE0((void ***)(a1 + 56), v213, (__int64)src, &v293);
    }
    else
    {
      v213->m128i_i64[0] = (__int64)v213[1].m128i_i64;
      sub_12FAAE0(v213, v211, (__int64)v212 + (_QWORD)v211);
      v213[2].m128i_i8[0] = v210;
      *(_QWORD *)(a1 + 64) += 40LL;
    }
    v200 = v208 + 8;
    v208 = (char *)v300[1];
    v300[0] = (size_t)v200;
    if ( v200 != (char *)v300[1] )
    {
      while ( 1 )
      {
        v214 = *(_QWORD *)v200;
        if ( *(_QWORD *)v200 )
        {
          if ( v301.m128i_i32[0]
            && ((unsigned __int8)sub_21B9810(*(_QWORD *)v200, v301.m128i_u32[0])
             || v301.m128i_i32[1] && (unsigned __int8)sub_21B9810(v214, v301.m128i_u32[1])) )
          {
            goto LABEL_416;
          }
        }
        v200 += 8;
        v300[0] = (size_t)v200;
        if ( v200 == v208 )
        {
          if ( (char *)v206 != v208 )
            goto LABEL_418;
          goto LABEL_430;
        }
      }
    }
  }
LABEL_430:
  sub_10DF020((__int64)&ptr, a2, 0x87Bu, 0xD39u);
  v215 = _mm_load_si128((const __m128i *)&ptr);
  v216 = ptr.m256i_i64[3];
  v298.m128i_i64[0] = ptr.m256i_i64[2];
  *(__m128i *)src = v215;
LABEL_431:
  v217 = (char *)src[0];
  while ( (char *)v216 != v217 )
  {
LABEL_433:
    v218 = 0;
    v219 = *(const char ***)(*(_QWORD *)v217 + 48LL);
    v220 = (char *)*v219;
    if ( *v219 )
      v218 = (__int64)&v220[strlen(*v219)];
    v300[0] = (size_t)&v301;
    sub_12FAAE0(v300, v220, v218);
    sub_A82C60(a1 + 600, (__m128i *)v300);
    if ( (__m128i *)v300[0] != &v301 )
      operator delete((void *)v300[0]);
    v200 = v217 + 8;
    v217 = (char *)src[1];
    src[0] = v200;
    if ( v200 != src[1] )
    {
      while ( 1 )
      {
        v221 = *(_QWORD *)v200;
        if ( *(_QWORD *)v200 )
        {
          if ( v298.m128i_i32[0]
            && ((unsigned __int8)sub_21B9810(*(_QWORD *)v200, v298.m128i_u32[0])
             || v298.m128i_i32[1] && (unsigned __int8)sub_21B9810(v221, v298.m128i_u32[1])) )
          {
            goto LABEL_431;
          }
        }
        v200 += 8;
        src[0] = v200;
        if ( v200 == v217 )
        {
          if ( (char *)v216 != v217 )
            goto LABEL_433;
          goto LABEL_445;
        }
      }
    }
  }
LABEL_445:
  LOBYTE(v200) = *(_DWORD *)(v283 + 212) == v284;
  if ( v304 != &v306 )
    free(v304);
  return (unsigned int)v200;
}
