__int64 __fastcall sub_10D4260(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int8 a6,
        _BYTE *a7,
        void *a8,
        unsigned __int8 a9,
        __int64 a10,
        _QWORD *a11,
        unsigned int a12)
{
  __int64 v14; // rbp
  __int64 v16; // r9
  int v17; // eax
  __int32 v18; // edi
  __int64 *v19; // rdi
  __int64 v21; // r12
  void *v22; // rbx
  __int64 v23; // rax
  int v24; // esi
  __int32 v25; // ecx
  __int64 v26; // r12
  __int64 v27; // rax
  __int32 v28; // eax
  __int32 v29; // ecx
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // r8
  unsigned __int32 v34; // r14d
  __m128i *v35; // rcx
  int v36; // eax
  __int64 v37; // r12
  unsigned __int64 v38; // rbx
  unsigned __int32 v39; // esi
  __m128i *v40; // rdx
  __m128i *v41; // rax
  __int8 *v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int8 *v46; // r13
  __int64 *v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // ecx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rbx
  unsigned int v54; // r14d
  __int64 v55; // rax
  void *v56; // rdi
  __int64 v57; // rax
  __int64 *v58; // r13
  __int64 v59; // rdx
  __int64 v60; // r12
  __int64 v61; // r14
  char v62; // r12
  __int64 v63; // rax
  const void **v64; // r13
  const void *v65; // r8
  signed __int64 v66; // r12
  __int64 v67; // r14
  unsigned int v68; // r14d
  __int64 v69; // r13
  __m128i *v70; // r12
  unsigned __int64 *v71; // rdi
  __int64 *v72; // rbx
  __int64 v73; // rdi
  __int64 *v74; // r14
  unsigned __int8 **v75; // rdi
  char *v76; // r12
  _BOOL4 v77; // r9d
  char **v78; // rcx
  __int64 v79; // rsi
  char *i; // rdx
  unsigned int v81; // r8d
  __m128i *v82; // r13
  __m128i *v83; // r12
  __int64 v84; // rdx
  __m128i *v85; // rsi
  void *v86; // rdi
  int v87; // edx
  __int64 *v88; // r12
  __int64 v89; // rdx
  char v90; // al
  unsigned __int8 *v91; // rax
  __int32 v92; // edx
  __int64 v93; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // rcx
  __m128i *v96; // rdx
  __m128i *v97; // rax
  _BYTE *v98; // rdx
  size_t v99; // rcx
  int v100; // r8d
  __int64 v101; // rsi
  __m128i v102; // xmm3
  __m128i v103; // xmm4
  __m128i *v104; // r10
  void *v105; // r15
  __int64 v106; // rbp
  __int64 v107; // r14
  __m128i *v108; // r12
  __int64 v109; // r13
  unsigned __int64 v110; // rbp
  size_t v111; // rbx
  size_t v112; // rdx
  signed __int64 v113; // rax
  __m128i *v114; // r10
  size_t v115; // r14
  size_t v116; // rdx
  int v117; // eax
  _QWORD *v118; // rsi
  void *v119; // rax
  bool v120; // zf
  void *v121; // rax
  _QWORD *v122; // rdi
  __int64 v123; // rax
  _QWORD *v124; // rdx
  const __m128i **v125; // rax
  const __m128i *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rax
  __m128i v129; // xmm6
  __m128i v130; // xmm7
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // r12
  __int64 v134; // r14
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // r12
  __int64 v138; // r14
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // r12
  __int64 v142; // r14
  unsigned __int64 v143; // rax
  void *v144; // rdi
  void *v145; // rdi
  unsigned __int64 v146; // rax
  const void *v147; // rsi
  size_t v148; // rdx
  __int64 v149; // r14
  char v150; // r14
  unsigned __int8 *v151; // rax
  __int32 v152; // edx
  void *v153; // r12
  size_t v154; // r14
  int v155; // r13d
  unsigned int v156; // r14d
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // rax
  __int64 v160; // rax
  _BYTE *v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rax
  char *v164; // rsi
  __int64 v165; // rdi
  __int64 v166; // rbx
  __int64 v167; // r14
  __int64 v168; // rbp
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rbx
  __int64 v172; // rax
  char *v173; // r14
  __int64 *v174; // rbx
  __int64 v175; // rbp
  int v176; // edx
  __int64 v177; // rax
  unsigned __int64 v178; // rdx
  __int64 v179; // r15
  __int64 v180; // rcx
  void *v181; // r11
  signed __int64 v182; // rax
  __int64 v183; // r15
  unsigned __int64 v184; // rdx
  __int64 v185; // rax
  int v186; // r10d
  const void *v187; // r15
  __int64 v188; // rcx
  signed __int64 v189; // rax
  __int64 v190; // rbp
  unsigned __int64 v191; // rdx
  __int64 v192; // rax
  __int64 v193; // r12
  __int64 v194; // r14
  char v195; // r13
  __int64 v196; // rdi
  __int64 v197; // rax
  const void **v198; // r13
  const void *v199; // r8
  signed __int64 v200; // r12
  __int64 v201; // r14
  unsigned int v202; // r14d
  unsigned int v203; // r14d
  __int64 v204; // rax
  char *v205; // rsi
  __int64 v206; // rdi
  __int64 v207; // rbx
  __int64 v208; // r14
  __int64 v209; // rbp
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // r14
  char *v214; // r14
  size_t v215; // rax
  _BYTE *v216; // r14
  size_t v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rdx
  __int64 v220; // rdi
  __int64 v221; // rax
  __int64 v222; // r14
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __int64 v231; // r12
  __int64 v232; // rax
  __int64 v233; // rax
  const void **v234; // r13
  const void *v235; // r8
  signed __int64 v236; // r12
  __int64 v237; // r14
  unsigned int v238; // r14d
  unsigned int v239; // r14d
  __int64 v240; // rax
  size_t v241; // rcx
  char *v242; // r14
  size_t v243; // rax
  size_t v244; // rcx
  _BYTE *v245; // rax
  __int64 v246; // rdx
  _BYTE *v247; // r14
  __int64 v249; // [rsp+0h] [rbp-6A8h]
  __int64 v250; // [rsp+0h] [rbp-6A8h]
  int v253; // [rsp+20h] [rbp-688h]
  unsigned __int64 v254; // [rsp+28h] [rbp-680h]
  __int64 *v255; // [rsp+28h] [rbp-680h]
  const void **v256; // [rsp+28h] [rbp-680h]
  const void **v257; // [rsp+28h] [rbp-680h]
  const void **v258; // [rsp+28h] [rbp-680h]
  char v259; // [rsp+30h] [rbp-678h]
  int v260; // [rsp+50h] [rbp-658h]
  __int64 *v261; // [rsp+50h] [rbp-658h]
  _QWORD *v262; // [rsp+50h] [rbp-658h]
  bool v263; // [rsp+58h] [rbp-650h]
  const void *v264; // [rsp+58h] [rbp-650h]
  __int64 v265; // [rsp+58h] [rbp-650h]
  const void *v266; // [rsp+58h] [rbp-650h]
  const void *v267; // [rsp+58h] [rbp-650h]
  int v268; // [rsp+60h] [rbp-648h]
  unsigned __int64 v269; // [rsp+60h] [rbp-648h]
  __int64 *v270; // [rsp+60h] [rbp-648h]
  __int64 v271; // [rsp+60h] [rbp-648h]
  __int64 v272; // [rsp+60h] [rbp-648h]
  __int64 v273; // [rsp+60h] [rbp-648h]
  unsigned __int64 v274; // [rsp+60h] [rbp-648h]
  __int64 *v275; // [rsp+68h] [rbp-640h]
  __m128i *v276; // [rsp+68h] [rbp-640h]
  __int64 v277; // [rsp+68h] [rbp-640h]
  signed __int64 v278; // [rsp+68h] [rbp-640h]
  void *v279; // [rsp+68h] [rbp-640h]
  __int64 *v280; // [rsp+70h] [rbp-638h]
  __int64 v281; // [rsp+70h] [rbp-638h]
  char *v282; // [rsp+78h] [rbp-630h]
  char *v283; // [rsp+78h] [rbp-630h]
  char *v284; // [rsp+78h] [rbp-630h]
  __int64 *v285; // [rsp+88h] [rbp-620h]
  __int64 v286; // [rsp+C0h] [rbp-5E8h]
  __int64 v287; // [rsp+C8h] [rbp-5E0h]
  __int64 v288; // [rsp+E0h] [rbp-5C8h]
  unsigned __int8 v289; // [rsp+ECh] [rbp-5BCh] BYREF
  __m128i *v290; // [rsp+F8h] [rbp-5B0h] BYREF
  _QWORD v291[4]; // [rsp+100h] [rbp-5A8h] BYREF
  __m128i v292; // [rsp+120h] [rbp-588h] BYREF
  __int64 v293; // [rsp+130h] [rbp-578h] BYREF
  __int64 *v294; // [rsp+140h] [rbp-568h] BYREF
  __int64 v295; // [rsp+148h] [rbp-560h]
  _BYTE v296[32]; // [rsp+150h] [rbp-558h] BYREF
  void *v297; // [rsp+170h] [rbp-538h] BYREF
  __int64 v298; // [rsp+178h] [rbp-530h]
  _BYTE v299[32]; // [rsp+180h] [rbp-528h] BYREF
  __m128i s; // [rsp+1A0h] [rbp-508h] BYREF
  __m128i v301; // [rsp+1B0h] [rbp-4F8h] BYREF
  char *v302; // [rsp+1C0h] [rbp-4E8h]
  _QWORD v303[4]; // [rsp+1D0h] [rbp-4D8h] BYREF
  __int16 v304; // [rsp+1F0h] [rbp-4B8h]
  __m128i v305; // [rsp+200h] [rbp-4A8h] BYREF
  _WORD v306[16]; // [rsp+210h] [rbp-498h] BYREF
  void *s2; // [rsp+230h] [rbp-478h] BYREF
  size_t n; // [rsp+238h] [rbp-470h]
  __m128i v309; // [rsp+240h] [rbp-468h] BYREF
  __int16 v310; // [rsp+250h] [rbp-458h]
  __m128i v311; // [rsp+260h] [rbp-448h] BYREF
  __m128i v312; // [rsp+270h] [rbp-438h] BYREF
  char *v313; // [rsp+280h] [rbp-428h]
  void *v314; // [rsp+290h] [rbp-418h] BYREF
  __int64 v315; // [rsp+298h] [rbp-410h]
  _BYTE v316[16]; // [rsp+2A0h] [rbp-408h] BYREF
  __m128i v317; // [rsp+2B0h] [rbp-3F8h]
  __int64 v318; // [rsp+2C0h] [rbp-3E8h]
  void *v319; // [rsp+2D0h] [rbp-3D8h] BYREF
  void *v320[2]; // [rsp+2D8h] [rbp-3D0h] BYREF
  __m128i v321[8]; // [rsp+2E8h] [rbp-3C0h] BYREF
  _BYTE v322[160]; // [rsp+370h] [rbp-338h] BYREF
  void *src; // [rsp+410h] [rbp-298h] BYREF
  __int64 v324; // [rsp+418h] [rbp-290h]
  _BYTE v325[160]; // [rsp+420h] [rbp-288h] BYREF
  void *p_ptr; // [rsp+4C0h] [rbp-1E8h] BYREF
  void *v327; // [rsp+4C8h] [rbp-1E0h]
  unsigned __int8 *v328; // [rsp+4D0h] [rbp-1D8h] BYREF
  __m128i v329; // [rsp+4D8h] [rbp-1D0h] BYREF
  __int64 v330; // [rsp+4E8h] [rbp-1C0h]
  char *v331; // [rsp+4F0h] [rbp-1B8h]
  __m128i ptr; // [rsp+570h] [rbp-138h] BYREF
  __m128i v333; // [rsp+580h] [rbp-128h] BYREF
  __m128i v334; // [rsp+590h] [rbp-118h] BYREF
  __int64 v335; // [rsp+5A0h] [rbp-108h]

  v14 = a1;
  v289 = a6;
  sub_220FAE0(v291);
  v16 = a12;
  v291[0] = &off_2BC1238;
  v291[2] = "Building compilation jobs";
  src = v325;
  v324 = 0x400000000LL;
  v17 = *(_DWORD *)(a4 + 8);
  v259 = a12 != 0;
  if ( v17 == 2 )
  {
    sub_10B20E0((size_t)a3, a5, a7, a8, 0);
    if ( sub_10AE590(a4, 0) || !sub_10AE560(a4) )
    {
      ptr.m128i_i64[1] = 0x400000000LL;
      ptr.m128i_i64[0] = (__int64)&v333;
      p_ptr = &ptr;
      v327 = a3;
      v328 = &v289;
      v329.m128i_i64[0] = (__int64)&a10;
      v329.m128i_i64[1] = (__int64)a11;
      v330 = a2;
      *(_QWORD *)v322 = &sub_10D74D0;
      *(_QWORD *)&v322[8] = &p_ptr;
      sub_10AE3B0(a4, (__int64)v322);
      v18 = ptr.m128i_i32[2];
      *(_QWORD *)(v14 + 8) = 0x400000000LL;
      *(_QWORD *)v14 = v14 + 16;
      if ( v18 )
        sub_10BDA30((char ***)v14, (char ***)&ptr);
      v19 = (__int64 *)ptr.m128i_i64[0];
      if ( (__m128i *)ptr.m128i_i64[0] == &v333 )
        goto LABEL_7;
      goto LABEL_6;
    }
    ptr.m128i_i64[0] = (__int64)&src;
    v333.m128i_i64[0] = (__int64)&a10;
    ptr.m128i_i64[1] = (__int64)a3;
    v327 = &ptr;
    v333.m128i_i64[1] = (__int64)a11;
    v334.m128i_i64[0] = a2;
    p_ptr = &sub_10D7380;
    sub_10AE4C0(a4, v259, (__int64)&p_ptr);
    if ( a12 )
      v21 = sub_10AE5D0(a4);
    else
      v21 = sub_10AE570(a4);
    v22 = (void *)sub_10AE570(a4);
    sub_10BEA20(&ptr, (__int64)a5, a7, (size_t)a8, a12);
    p_ptr = v22;
    v327 = &v329;
    if ( (__m128i *)ptr.m128i_i64[0] == &v333 )
    {
      v329 = _mm_load_si128(&v333);
    }
    else
    {
      v327 = (void *)ptr.m128i_i64[0];
      v329.m128i_i64[0] = v333.m128i_i64[0];
    }
    v328 = (unsigned __int8 *)ptr.m128i_i64[1];
    v23 = sub_10BD7C0((__int64)a11, (unsigned __int64 *)&p_ptr);
    if ( (_QWORD *)v23 != a11 + 1 )
    {
      ptr.m128i_i64[1] = 0x400000000LL;
      v24 = *(_DWORD *)(v23 + 80);
      ptr.m128i_i64[0] = (__int64)&v333;
      if ( v24 )
        sub_10BD900(ptr.m128i_i64, (__int64 *)(v23 + 72));
      sub_10BDBB0((__int64)&ptr, src, (_BYTE *)src + 40 * (unsigned int)v324);
      v25 = ptr.m128i_i32[2];
      *(_QWORD *)a1 = a1 + 16;
      *(_QWORD *)(a1 + 8) = 0x400000000LL;
      if ( v25 )
        sub_10BDA30((char ***)a1, (char ***)&ptr);
      if ( (__m128i *)ptr.m128i_i64[0] != &v333 )
        free((void *)ptr.m128i_i64[0]);
      if ( v327 != &v329 )
        operator delete(v327);
      goto LABEL_7;
    }
    if ( v327 != &v329 )
      operator delete(v327);
    v17 = *(_DWORD *)(v21 + 8);
    a4 = v21;
  }
  if ( !v17 )
  {
    v26 = *(_QWORD *)(a4 + 88);
    v27 = *(_QWORD *)(v26 + 16);
    if ( !v27 )
      v27 = *(_QWORD *)(a4 + 88);
    *(_BYTE *)(v27 + 44) |= 1u;
    if ( (unsigned __int8)sub_2195AD0(v26, 70) )
    {
      v29 = *(_DWORD *)(a4 + 12);
      v30 = **(_QWORD **)(v26 + 48);
      v333.m128i_i64[0] = a4;
      ptr.m128i_i32[2] = 1;
      v333.m128i_i32[2] = v29;
      v334.m128i_i64[0] = v30;
      ptr.m128i_i64[0] = v30;
    }
    else
    {
      v28 = *(_DWORD *)(a4 + 12);
      v333.m128i_i64[0] = a4;
      ptr.m128i_i32[2] = 2;
      v333.m128i_i32[2] = v28;
      v334.m128i_i64[0] = (__int64)&byte_22CD811;
      ptr.m128i_i64[0] = v26;
    }
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    sub_10BDBB0(a1, &ptr, &v334.m128i_i8[8]);
    goto LABEL_7;
  }
  if ( v17 == 1 )
  {
    v31 = *(_QWORD *)(a4 + 88);
    v32 = *(_QWORD *)(a4 + 96);
    if ( v32 )
    {
      sub_10BEDC0(
        (__int64)&ptr,
        a2,
        *(const char **)(a2 + 944),
        *(_QWORD *)(a2 + 952),
        a3[5].m128i_i64[0],
        v16,
        v31,
        *(_QWORD *)(a4 + 96));
      LODWORD(v33) = (unsigned int)sub_10D2F60(a2, a3[5].m128i_i64[0], (__int64)&ptr);
      if ( (__m128i *)ptr.m128i_i64[0] != &v333 )
      {
        v253 = v33;
        operator delete((void *)ptr.m128i_i64[0]);
        LODWORD(v33) = v253;
      }
    }
    else
    {
      v33 = a3->m128i_i64[1];
    }
    sub_10D7050(a1, a2, (_DWORD)a3, **(_QWORD **)(a4 + 16), v33, v289, v31, v32, a9, a10, (__int64)a11, a12);
    goto LABEL_7;
  }
  v294 = (__int64 *)v296;
  v295 = 0x300000000LL;
  if ( *(_DWORD *)(a4 + 24) )
    sub_10AF050((void **)&v294, (char **)(a4 + 16));
  v263 = 0;
  v297 = v299;
  v298 = 0x300000000LL;
  if ( *(_DWORD *)(a2 + 24) == 2 )
    v263 = *(_DWORD *)(a2 + 40) == 0;
  v254 = a4;
  v34 = 1;
  v35 = &v333;
  v268 = *(_DWORD *)(a2 + 20);
  v36 = *(_DWORD *)(a4 + 64);
  ptr.m128i_i64[0] = (__int64)&v333;
  v37 = a4;
  v260 = v36;
  v333.m128i_i64[1] = (__int64)&v334.m128i_i64[1];
  v334.m128i_i64[0] = 0x300000000LL;
  v333.m128i_i64[0] = a4;
  v38 = 2;
  v39 = 1;
  ptr.m128i_i64[1] = 0x500000001LL;
  while ( 1 )
  {
    v40 = &v35[3 * v38];
    v41 = &v35[3 * v39];
    if ( v41 != v40 )
    {
      do
      {
        v42 = &v41[1].m128i_i8[8];
        v41 += 3;
        v41[-3] = 0;
        v41[-2] = 0;
        v41[-1] = 0;
        v41[-3].m128i_i64[1] = (__int64)v42;
        v41[-2].m128i_i32[1] = 3;
      }
      while ( v40 != v41 );
      v35 = (__m128i *)ptr.m128i_i64[0];
    }
    v44 = 0;
    ptr.m128i_i32[2] = ++v34;
    v43 = v34;
    v45 = 48LL * v34 - 48;
    v46 = &v35->m128i_i8[v45];
    if ( *(_DWORD *)(v37 + 24) == 1 )
    {
      v47 = *(__int64 **)(v37 + 16);
      v44 = *v47;
      if ( *(_BYTE *)(*v47 + 56) )
      {
        v48 = *(_DWORD *)(v44 + 8);
        if ( v48 == 2 )
        {
          if ( v260 )
          {
            if ( !sub_10AE590(v44, 1) )
              goto LABEL_62;
            v49 = sub_10AE5D0(v44);
            if ( !*(_BYTE *)(v49 + 56) )
              goto LABEL_62;
          }
          else if ( !sub_10AE560(v44) || (v49 = sub_10AE570(v44), !*(_BYTE *)(v49 + 56)) )
          {
LABEL_62:
            v43 = ptr.m128i_u32[2];
            v44 = 0;
            v34 = ptr.m128i_u32[2];
            v45 = 48LL * ptr.m128i_u32[2] - 48;
            goto LABEL_57;
          }
          v50 = *((unsigned int *)v46 + 4);
          if ( v50 + 1 > (unsigned __int64)*((unsigned int *)v46 + 5) )
          {
            v277 = v49;
            sub_22134E0(v46 + 8, v46 + 24, v50 + 1, 8);
            v50 = *((unsigned int *)v46 + 4);
            v49 = v277;
          }
          *(_QWORD *)(*((_QWORD *)v46 + 1) + 8 * v50) = v44;
          v51 = *(_DWORD *)(v49 + 8);
          ++*((_DWORD *)v46 + 4);
          v43 = ptr.m128i_u32[2];
          v34 = ptr.m128i_u32[2];
          if ( (unsigned int)(v51 - 3) <= 0x13 )
            v44 = v49;
          else
            v44 = 0;
          v45 = 48LL * ptr.m128i_u32[2] - 48;
        }
        else if ( (unsigned int)(v48 - 3) >= 0x14 )
        {
          v44 = 0;
        }
      }
      else
      {
        v44 = 0;
      }
    }
LABEL_57:
    *(_QWORD *)v46 = v44;
    v35 = (__m128i *)ptr.m128i_i64[0];
    v37 = *(_QWORD *)(ptr.m128i_i64[0] + v45);
    if ( !v37 )
      break;
    v38 = v43 + 1;
    v39 = v34;
    if ( v38 > ptr.m128i_u32[3] )
    {
      sub_10B5530((__int64)&ptr, v38);
      v35 = (__m128i *)ptr.m128i_i64[0];
      v39 = ptr.m128i_u32[2];
    }
  }
  v53 = v254;
  v54 = v34 - 1;
  v52 = v54;
  v55 = ptr.m128i_i64[0] + 48LL * v54;
  v56 = *(void **)(v55 + 8);
  ptr.m128i_i32[2] = v54;
  if ( v56 == (void *)(v55 + 24) )
  {
    v255 = (__int64 *)ptr.m128i_i64[0];
    if ( v54 <= 2 )
      goto LABEL_72;
LABEL_69:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a5 + 184LL))(a5) )
    {
      if ( !v268
        && !sub_10B8FF0(a3[5].m128i_i64[0], 0xD3Au)
        && !sub_10B8FF0(a3[5].m128i_i64[0], 0x1C7u)
        && !sub_10B8FF0(a3[5].m128i_i64[0], 0x1C8u) )
      {
        v192 = sub_10B8FF0(a3[5].m128i_i64[0], 0x226u);
        if ( !v192 )
        {
          v193 = v255[6];
          v194 = v255[12];
          if ( *(_DWORD *)(*v255 + 8) == 9 )
            v192 = *v255;
          if ( *(_DWORD *)(v193 + 8) == 8 && *(_DWORD *)(v194 + 8) == 7 )
          {
            if ( v192 )
            {
              v281 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a5 + 104LL))(a5, v255[12]);
              if ( v281 )
              {
                v195 = sub_12A8F70(*(unsigned int *)(*v255 + 12));
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v281 + 24LL))(v281)
                  || v195 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v281 + 32LL))(v281) )
                {
                  if ( v263 )
                  {
                    v196 = v281;
                    if ( v281 == (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a5 + 104LL))(a5, v193) )
                      goto LABEL_71;
                  }
                  else
                  {
                    v196 = v281;
                  }
                  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196) )
                  {
                    sub_10AF050((void **)&v294, (char **)(v194 + 16));
                    v197 = (unsigned int)v298;
                    v198 = (const void **)(v255 + 1);
                    v257 = (const void **)(v255 + 19);
                    do
                    {
                      while ( 1 )
                      {
                        v199 = *v198;
                        v200 = 8LL * *((unsigned int *)v198 + 2);
                        v201 = v200 >> 3;
                        if ( (v200 >> 3) + v197 > (unsigned __int64)HIDWORD(v298) )
                        {
                          v266 = *v198;
                          sub_22134E0(&v297, v299, v201 + v197, 8);
                          v197 = (unsigned int)v298;
                          v199 = v266;
                        }
                        if ( !v200 )
                          break;
                        v198 += 6;
                        memcpy((char *)v297 + 8 * v197, v199, v200);
                        v202 = v298 + v201;
                        v197 = v202;
                        LODWORD(v298) = v202;
                        if ( v198 == v257 )
                          goto LABEL_98;
                      }
                      v203 = v197 + v201;
                      v198 += 6;
                      v197 = v203;
                      LODWORD(v298) = v203;
                    }
                    while ( v257 != v198 );
                    goto LABEL_98;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_71:
    v52 = ptr.m128i_u32[2];
    v255 = (__int64 *)ptr.m128i_i64[0];
    v54 = ptr.m128i_u32[2];
    goto LABEL_72;
  }
  free(v56);
  v54 = ptr.m128i_u32[2];
  v255 = (__int64 *)ptr.m128i_i64[0];
  if ( ptr.m128i_i32[2] > 2u )
    goto LABEL_69;
  v52 = ptr.m128i_u32[2];
LABEL_72:
  if ( v54 > 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a5 + 184LL))(a5) )
    {
      if ( !v268
        && !sub_10B8FF0(a3[5].m128i_i64[0], 0xD3Au)
        && !sub_10B8FF0(a3[5].m128i_i64[0], 0x1C7u)
        && !sub_10B8FF0(a3[5].m128i_i64[0], 0x1C8u)
        && !sub_10B8FF0(a3[5].m128i_i64[0], 0x226u)
        && *(_DWORD *)(*v255 + 8) == 9 )
      {
        v231 = v255[6];
        if ( *(_DWORD *)(v231 + 8) == 8 )
        {
          v232 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a5 + 104LL))(a5, v255[6]);
          v281 = v232;
          if ( v232 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v232 + 16LL))(v232) )
            {
              sub_10AF050((void **)&v294, (char **)(v231 + 16));
              v233 = (unsigned int)v298;
              v234 = (const void **)(v255 + 1);
              v258 = (const void **)(v255 + 13);
              do
              {
                while ( 1 )
                {
                  v235 = *v234;
                  v236 = 8LL * *((unsigned int *)v234 + 2);
                  v237 = v236 >> 3;
                  if ( (v236 >> 3) + v233 > (unsigned __int64)HIDWORD(v298) )
                  {
                    v267 = *v234;
                    sub_22134E0(&v297, v299, v237 + v233, 8);
                    v233 = (unsigned int)v298;
                    v235 = v267;
                  }
                  if ( !v236 )
                    break;
                  v234 += 6;
                  memcpy((char *)v297 + 8 * v233, v235, v236);
                  v238 = v298 + v237;
                  v233 = v238;
                  LODWORD(v298) = v238;
                  if ( v234 == v258 )
                    goto LABEL_98;
                }
                v239 = v233 + v237;
                v234 += 6;
                v233 = v239;
                LODWORD(v298) = v239;
              }
              while ( v258 != v234 );
              goto LABEL_98;
            }
          }
        }
      }
    }
    v52 = ptr.m128i_u32[2];
    v255 = (__int64 *)ptr.m128i_i64[0];
  }
  if ( v52 <= 1 )
    goto LABEL_239;
  if ( *(_DWORD *)(*v255 + 8) != 8 )
    goto LABEL_239;
  v282 = (char *)v255[6];
  if ( *((_DWORD *)v282 + 2) != 7 )
    goto LABEL_239;
  v280 = &v255[6 * v52];
  v57 = (__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)(48 * v52) >> 4)) >> 2;
  if ( !v57 )
  {
    v58 = v255;
LABEL_228:
    v143 = 0xAAAAAAAAAAAAAAABLL * (((char *)v280 - (char *)v58) >> 4);
    if ( v143 != 2 )
    {
      if ( v143 != 3 )
      {
        if ( v143 != 1 )
          goto LABEL_87;
        goto LABEL_231;
      }
      if ( !(unsigned __int8)sub_10B4A70(*v58) )
        goto LABEL_85;
      v58 += 6;
    }
    if ( !(unsigned __int8)sub_10B4A70(*v58) )
      goto LABEL_85;
    v58 += 6;
LABEL_231:
    if ( !(unsigned __int8)sub_10B4A70(*v58) )
      goto LABEL_85;
    goto LABEL_87;
  }
  v58 = v255;
  v275 = &v255[24 * v57];
  while ( 1 )
  {
    v59 = *(_QWORD *)(*v58 + 16);
    v60 = v59 + 8LL * *(unsigned int *)(*v58 + 24);
    if ( v59 != v60 )
      break;
LABEL_212:
    v131 = v58[6];
    v132 = *(_QWORD *)(v131 + 16);
    v133 = v132 + 8LL * *(unsigned int *)(v131 + 24);
    v134 = v132;
    if ( v132 != v133 )
    {
      while ( (unsigned __int8)sub_12A8F70(*(unsigned int *)(*(_QWORD *)v134 + 12LL)) )
      {
        v134 += 8;
        if ( v133 == v134 )
          goto LABEL_217;
      }
      v58 += 6;
      goto LABEL_85;
    }
LABEL_217:
    v135 = v58[12];
    v136 = *(_QWORD *)(v135 + 16);
    v137 = v136 + 8LL * *(unsigned int *)(v135 + 24);
    v138 = v136;
    if ( v136 != v137 )
    {
      while ( (unsigned __int8)sub_12A8F70(*(unsigned int *)(*(_QWORD *)v138 + 12LL)) )
      {
        v138 += 8;
        if ( v137 == v138 )
          goto LABEL_222;
      }
      v58 += 12;
      goto LABEL_85;
    }
LABEL_222:
    v139 = v58[18];
    v140 = *(_QWORD *)(v139 + 16);
    v141 = v140 + 8LL * *(unsigned int *)(v139 + 24);
    v142 = v140;
    if ( v140 != v141 )
    {
      while ( (unsigned __int8)sub_12A8F70(*(unsigned int *)(*(_QWORD *)v142 + 12LL)) )
      {
        v142 += 8;
        if ( v141 == v142 )
          goto LABEL_227;
      }
      v58 += 18;
      goto LABEL_85;
    }
LABEL_227:
    v58 += 24;
    if ( v275 == v58 )
      goto LABEL_228;
  }
  v61 = *(_QWORD *)(*v58 + 16);
  while ( (unsigned __int8)sub_12A8F70(*(unsigned int *)(*(_QWORD *)v61 + 12LL)) )
  {
    v61 += 8;
    if ( v60 == v61 )
      goto LABEL_212;
  }
LABEL_85:
  if ( v268 && v280 != v58 )
  {
LABEL_239:
    sub_10AF050((void **)&v294, (char **)(v53 + 16));
    v281 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a5 + 104LL))(a5, v53);
    if ( !v281 )
      goto LABEL_99;
    goto LABEL_98;
  }
LABEL_87:
  v281 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*a5 + 104LL))(a5, v282);
  if ( !v281 )
    goto LABEL_239;
  v62 = sub_12A8F70(*(unsigned int *)(*v255 + 12));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v281 + 24LL))(v281)
    && (!v62 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v281 + 32LL))(v281)) )
  {
    goto LABEL_239;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v281 + 32LL))(v281) && v263 )
    goto LABEL_239;
  sub_10AF050((void **)&v294, (char **)v282 + 2);
  v63 = (unsigned int)v298;
  v64 = (const void **)(v255 + 1);
  v256 = (const void **)(v255 + 13);
  do
  {
    while ( 1 )
    {
      v65 = *v64;
      v66 = 8LL * *((unsigned int *)v64 + 2);
      v67 = v66 >> 3;
      if ( (v66 >> 3) + v63 > (unsigned __int64)HIDWORD(v298) )
      {
        v264 = *v64;
        sub_22134E0(&v297, v299, v67 + v63, 8);
        v63 = (unsigned int)v298;
        v65 = v264;
      }
      if ( !v66 )
        break;
      v64 += 6;
      memcpy((char *)v297 + 8 * v63, v65, v66);
      v68 = v298 + v67;
      v63 = v68;
      LODWORD(v298) = v68;
      if ( v64 == v256 )
        goto LABEL_98;
    }
    v156 = v63 + v67;
    v64 += 6;
    v63 = v156;
    LODWORD(v298) = v156;
  }
  while ( v256 != v64 );
LABEL_98:
  if ( sub_10B8FF0(a3[5].m128i_i64[0], 0xBC2u)
    || sub_10B8FF0(a3[5].m128i_i64[0], 0xD0Au)
    || v268
    || sub_10B8FF0(a3[5].m128i_i64[0], 0xC96u)
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v281 + 40LL))(v281) )
  {
    goto LABEL_99;
  }
  v319 = &v320[1];
  v320[0] = (void *)0x300000000LL;
  *(_QWORD *)&v322[8] = 0x300000000LL;
  *(_QWORD *)v322 = &v322[16];
  if ( v294 == &v294[(unsigned int)v295] )
    goto LABEL_322;
  v274 = v53;
  v173 = (char *)&v294[(unsigned int)v295];
  v174 = v294;
  v265 = v14;
  while ( 2 )
  {
    v175 = *v174;
    p_ptr = &v328;
    v328 = (unsigned __int8 *)v175;
    v120 = *(_BYTE *)(v175 + 56) == 0;
    v179 = v175;
    v327 = (void *)0x300000001LL;
    if ( v120 )
      goto LABEL_301;
    v176 = *(_DWORD *)(v175 + 8);
    if ( v176 == 2 )
    {
      if ( v260 )
      {
        if ( !sub_10AE590(v175, 1) )
          goto LABEL_301;
        v175 = sub_10AE5D0(v175);
        if ( !*(_BYTE *)(v175 + 56) )
          goto LABEL_301;
      }
      else
      {
        if ( !sub_10AE560(v175) )
          goto LABEL_301;
        v175 = sub_10AE570(v175);
        if ( !*(_BYTE *)(v175 + 56) )
          goto LABEL_301;
      }
      sub_10B8770((__int64)&v319, v179);
      v176 = *(_DWORD *)(v175 + 8);
      if ( (unsigned int)(v176 - 3) <= 0x13 )
        goto LABEL_308;
      goto LABEL_301;
    }
    if ( (unsigned int)(v176 - 3) <= 0x13 )
    {
LABEL_308:
      if ( v176 == 3 )
      {
        v180 = (unsigned int)v298;
        v181 = v319;
        v182 = 8LL * LODWORD(v320[0]);
        v183 = v182 >> 3;
        v184 = (v182 >> 3) + (unsigned int)v298;
        if ( v184 > HIDWORD(v298) )
        {
          v284 = (char *)(8LL * LODWORD(v320[0]));
          v279 = v319;
          sub_22134E0(&v297, v299, v184, 8);
          v182 = (signed __int64)v284;
          v181 = v279;
          v180 = (unsigned int)v298;
        }
        if ( v182 )
        {
          memcpy((char *)v297 + 8 * v180, v181, v182);
          LODWORD(v180) = v298;
        }
        v185 = *(unsigned int *)(v175 + 24);
        v186 = v183 + v180;
        v187 = *(const void **)(v175 + 16);
        v188 = *(unsigned int *)&v322[8];
        LODWORD(v298) = v186;
        v189 = 8 * v185;
        v190 = v189 >> 3;
        v191 = (v189 >> 3) + *(unsigned int *)&v322[8];
        if ( v191 > *(unsigned int *)&v322[12] )
        {
          v278 = v189;
          sub_22134E0(v322, &v322[16], v191, 8);
          v188 = *(unsigned int *)&v322[8];
          v189 = v278;
        }
        if ( v189 )
        {
          memcpy((void *)(*(_QWORD *)v322 + 8 * v188), v187, v189);
          LODWORD(v188) = *(_DWORD *)&v322[8];
        }
        *(_DWORD *)&v322[8] = v190 + v188;
        goto LABEL_304;
      }
    }
LABEL_301:
    v177 = *(unsigned int *)&v322[8];
    v178 = *(unsigned int *)&v322[8] + 1LL;
    if ( v178 > *(unsigned int *)&v322[12] )
    {
      sub_22134E0(v322, &v322[16], v178, 8);
      v177 = *(unsigned int *)&v322[8];
    }
    *(_QWORD *)(*(_QWORD *)v322 + 8 * v177) = v179;
    ++*(_DWORD *)&v322[8];
LABEL_304:
    if ( v173 != (char *)++v174 )
      continue;
    break;
  }
  v14 = v265;
  v53 = v274;
LABEL_322:
  sub_10AF050((void **)&v294, (char **)v322);
  if ( *(_BYTE **)v322 != &v322[16] )
    free(*(void **)v322);
  if ( v319 != &v320[1] )
    free(v319);
LABEL_99:
  v69 = ptr.m128i_i64[0];
  v70 = (__m128i *)(ptr.m128i_i64[0] + 48LL * ptr.m128i_u32[2]);
  if ( (__m128i *)ptr.m128i_i64[0] != v70 )
  {
    do
    {
      while ( 1 )
      {
        v70 -= 3;
        v71 = (unsigned __int64 *)v70->m128i_i64[1];
        if ( v71 == &v70[1].m128i_u64[1] )
          break;
        free(v71);
        if ( (__m128i *)v69 == v70 )
          goto LABEL_102;
      }
    }
    while ( (__m128i *)v69 != v70 );
LABEL_102:
    v70 = (__m128i *)ptr.m128i_i64[0];
  }
  if ( v70 != &v333 )
    free(v70);
  v286 = v14 + 16;
  if ( !v281 )
  {
    *(_QWORD *)v14 = v14 + 16;
    ptr.m128i_i32[2] = 0;
    *(_QWORD *)(v14 + 8) = 0x400000000LL;
    v333.m128i_i64[0] = 0;
    v333.m128i_i32[2] = 67;
    v334.m128i_i64[0] = 0;
    sub_10BDBB0(v14, &ptr, &v334.m128i_i8[8]);
    goto LABEL_196;
  }
  v261 = (__int64 *)((char *)v297 + 8 * (unsigned int)v298);
  if ( v297 != v261 )
  {
    v269 = v53;
    v72 = (__int64 *)v297;
    do
    {
      v73 = *v72;
      ptr.m128i_i64[0] = (__int64)&src;
      ++v72;
      v333.m128i_i64[0] = (__int64)&a10;
      ptr.m128i_i64[1] = (__int64)a3;
      v334.m128i_i64[0] = a2;
      v333.m128i_i64[1] = (__int64)a11;
      p_ptr = &sub_10D7230;
      v327 = &ptr;
      sub_10AE4C0(v73, v259, (__int64)&p_ptr);
    }
    while ( v261 != v72 );
    v53 = v269;
  }
  v74 = v294;
  v75 = &v328;
  v327 = (void *)0x400000000LL;
  p_ptr = &v328;
  v76 = (char *)&v294[(unsigned int)v295];
  if ( v294 == (__int64 *)v76 )
  {
    v78 = (char **)&v328;
    v79 = 0;
    v283 = v331;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v77 = 0;
        if ( v289 )
          v77 = (unsigned int)(*(_DWORD *)(v53 + 8) - 13) <= 2;
        sub_10D7050(
          (unsigned int)&ptr,
          a2,
          (_DWORD)a3,
          *v74,
          (_DWORD)a5,
          v77,
          (__int64)a7,
          (__int64)a8,
          a9,
          a10,
          (__int64)a11,
          *(_DWORD *)(v53 + 64));
        sub_10BDBB0((__int64)&p_ptr, ptr.m128i_i64[0], (_BYTE *)(ptr.m128i_i64[0] + 40LL * ptr.m128i_u32[2]));
        if ( (__m128i *)ptr.m128i_i64[0] == &v333 )
          break;
        free((void *)ptr.m128i_i64[0]);
        if ( v76 == (char *)++v74 )
          goto LABEL_115;
      }
      ++v74;
    }
    while ( v76 != (char *)v74 );
LABEL_115:
    v78 = (char **)p_ptr;
    v79 = (unsigned int)v327;
    v283 = *((char **)p_ptr + 4);
    v75 = (unsigned __int8 **)((char *)p_ptr + 40 * (unsigned int)v327);
    if ( v75 != p_ptr && *((_DWORD *)p_ptr + 2) != 1 )
    {
      for ( i = (char *)p_ptr; i + 40 != (char *)v75; i += 40 )
      {
        if ( *((_DWORD *)i + 12) == 1 )
        {
          v283 = *((char **)i + 9);
          break;
        }
      }
    }
  }
  if ( *(_DWORD *)(v53 + 12) == 61 )
    v283 = *v78;
  if ( (_DWORD)v324 )
  {
    v153 = src;
    v154 = 40LL * (unsigned int)v324;
    v155 = v324;
    if ( (unsigned __int64)(unsigned int)v324 + v79 > HIDWORD(v327) )
    {
      sub_22134E0(&p_ptr, &v328, (unsigned int)v324 + v79, 40);
      v75 = (unsigned __int8 **)((char *)p_ptr + 40 * (unsigned int)v327);
    }
    memcpy(v75, v153, v154);
    LODWORD(v327) = v155 + (_DWORD)v327;
  }
  v81 = *(_DWORD *)(v53 + 64);
  v314 = v316;
  v82 = (__m128i *)v322;
  v317 = 0;
  v318 = 0;
  v83 = *(__m128i **)(v281 + 24);
  v315 = 0;
  v316[0] = 0;
  v84 = sub_10B20E0((size_t)a3, a5, a7, a8, v81);
  v287 = v84;
  if ( (_DWORD)v327 == 1 )
    (*(void (__fastcall **)(_BYTE *, __m128i *, __int64, _QWORD))(v83->m128i_i64[0] + 528))(
      v322,
      v83,
      v84,
      *((unsigned int *)p_ptr + 6));
  else
    (*(void (__fastcall **)(_BYTE *, __m128i *, __int64, _QWORD))(v83->m128i_i64[0] + 528))(v322, v83, v84, 0);
  sub_2296190(&ptr, v322);
  sub_9E6D90((__int64)&v314, &ptr);
  v317 = _mm_load_si128(&v334);
  v318 = v335;
  if ( (__m128i *)ptr.m128i_i64[0] != &v333 )
    operator delete((void *)ptr.m128i_i64[0]);
  if ( *(_BYTE **)v322 != &v322[16] )
    operator delete(*(void **)v322);
  sub_10B74D0(&ptr, (__int64)&v314);
  v85 = v83;
  sub_10B6C20(&v290, v83, &ptr);
  v86 = (void *)ptr.m128i_i64[0];
  if ( (__m128i *)ptr.m128i_i64[0] != &v333 )
    operator delete((void *)ptr.m128i_i64[0]);
  v87 = *(_DWORD *)(v53 + 8);
  s.m128i_i32[2] = 0;
  ptr.m128i_i64[0] = (__int64)&v333;
  v301.m128i_i64[0] = 0;
  v301.m128i_i32[2] = 67;
  v302 = nullptr;
  ptr.m128i_i64[1] = 0x400000000LL;
  if ( v87 == 17 )
  {
    v88 = *(__int64 **)(v53 + 88);
    v89 = 4LL * *(unsigned int *)(v53 + 96);
    v285 = &v88[v89];
    if ( &v88[v89] != v88 )
    {
      v262 = a11 + 1;
      v288 = v14;
      while ( 1 )
      {
        sub_22984A0(v82, *(_QWORD *)(*v88 + 16), *(_QWORD *)(*v88 + 24), 0);
        sub_10AFF20(&v305, *((_DWORD *)v88 + 6), *(__int8 **)v322, *(size_t *)&v322[8], 1);
        if ( *(__m128i **)v322 != &v82[1] )
          operator delete(*(void **)v322);
        v90 = 1;
        if ( !a9 )
          v90 = *((_DWORD *)v88 + 6) == 8;
        v91 = sub_10CD640(
                a2,
                a3->m128i_i64,
                v53,
                v283,
                (_BYTE *)v88[1],
                v88[2],
                (__m128i)0LL,
                0,
                v90,
                v305.m128i_i64[0],
                v305.m128i_i64[1]);
        v92 = *(_DWORD *)(v53 + 12);
        v311.m128i_i32[2] = 1;
        v311.m128i_i64[0] = (__int64)v91;
        v93 = ptr.m128i_u32[2];
        v312.m128i_i32[2] = v92;
        v94 = ptr.m128i_u32[2] + 1LL;
        v312.m128i_i64[0] = v53;
        v313 = v283;
        if ( v94 > ptr.m128i_u32[3] )
        {
          v149 = ptr.m128i_i64[0];
          if ( ptr.m128i_i64[0] > (unsigned __int64)&v311
            || (unsigned __int64)&v311 >= ptr.m128i_i64[0] + 40 * (unsigned __int64)ptr.m128i_u32[2] )
          {
            sub_22134E0(&ptr, &v333, v94, 40);
            v95 = ptr.m128i_i64[0];
            v93 = ptr.m128i_u32[2];
            v96 = &v311;
          }
          else
          {
            sub_22134E0(&ptr, &v333, v94, 40);
            v95 = ptr.m128i_i64[0];
            v93 = ptr.m128i_u32[2];
            v96 = (__m128i *)((char *)&v311 + ptr.m128i_i64[0] - v149);
          }
        }
        else
        {
          v95 = ptr.m128i_i64[0];
          v96 = &v311;
        }
        v97 = (__m128i *)(v95 + 40 * v93);
        *v97 = _mm_loadu_si128(v96);
        v97[1] = _mm_loadu_si128(v96 + 1);
        v97[2].m128i_i64[0] = v96[2].m128i_i64[0];
        ++ptr.m128i_i32[2];
        if ( a12 == 8 )
        {
          v100 = *((_DWORD *)v88 + 6);
          v98 = nullptr;
          v99 = 0;
          if ( v100 != 1 )
          {
            v98 = (_BYTE *)v88[1];
            v99 = v88[2];
          }
        }
        else
        {
          v98 = a7;
          v99 = (size_t)a8;
          v100 = *((_DWORD *)v88 + 6);
        }
        v101 = *v88;
        v102 = _mm_load_si128(&v311);
        v103 = _mm_load_si128(&v312);
        *(_QWORD *)&v322[32] = v313;
        *(__m128i *)v322 = v102;
        *(__m128i *)&v322[16] = v103;
        sub_10BEA20(&s2, v101, v98, v99, v100);
        v319 = (void *)v53;
        v104 = (__m128i *)s2;
        v320[0] = v321;
        if ( s2 == &v309 )
        {
          v104 = v321;
          v321[0] = _mm_load_si128(&v309);
        }
        else
        {
          v320[0] = s2;
          v321[0].m128i_i64[0] = v309.m128i_i64[0];
        }
        v105 = (void *)n;
        v309.m128i_i8[0] = 0;
        n = 0;
        v106 = (__int64)v262;
        s2 = &v309;
        v320[1] = v105;
        v107 = a11[2];
        if ( !v107 )
          goto LABEL_169;
        v270 = v88;
        v108 = v104;
        v276 = v82;
        v109 = (__int64)v262;
        v110 = v53;
        do
        {
          while ( 1 )
          {
            if ( v110 <= *(_QWORD *)(v107 + 32) )
            {
              if ( v110 != *(_QWORD *)(v107 + 32) )
                break;
              v111 = *(_QWORD *)(v107 + 48);
              v112 = v111;
              if ( (unsigned __int64)v105 <= v111 )
                v112 = (size_t)v105;
              if ( v112 )
              {
                LODWORD(v113) = memcmp(*(const void **)(v107 + 40), v108, v112);
                if ( (_DWORD)v113 )
                  goto LABEL_153;
              }
              v113 = v111 - (_QWORD)v105;
              if ( (__int64)(v111 - (_QWORD)v105) > 0x7FFFFFFF )
                break;
              if ( v113 >= (__int64)0xFFFFFFFF80000000LL )
              {
LABEL_153:
                if ( (int)v113 >= 0 )
                  break;
              }
            }
            v107 = *(_QWORD *)(v107 + 24);
            if ( !v107 )
              goto LABEL_158;
          }
          v109 = v107;
          v107 = *(_QWORD *)(v107 + 16);
        }
        while ( v107 );
LABEL_158:
        v114 = v108;
        v53 = v110;
        v88 = v270;
        v106 = v109;
        v82 = v276;
        if ( (_QWORD *)v106 == v262 || v53 < *(_QWORD *)(v106 + 32) )
          goto LABEL_169;
        if ( v53 == *(_QWORD *)(v106 + 32) )
        {
          v115 = *(_QWORD *)(v106 + 48);
          v116 = v115;
          if ( (unsigned __int64)v105 <= v115 )
            v116 = (size_t)v105;
          if ( v116 && (v117 = memcmp(v114, *(const void **)(v106 + 40), v116)) != 0 )
          {
LABEL_168:
            if ( v117 < 0 )
              goto LABEL_169;
          }
          else if ( (__int64)((__int64)v105 - v115) <= 0x7FFFFFFF )
          {
            if ( (__int64)((__int64)v105 - v115) >= (__int64)0xFFFFFFFF80000000LL )
            {
              v117 = (_DWORD)v105 - v115;
              goto LABEL_168;
            }
LABEL_169:
            v118 = (_QWORD *)v106;
            v106 = operator new(0xF8u);
            *(_QWORD *)(v106 + 32) = v319;
            v119 = v320[0];
            v120 = v320[0] == v321;
            *(_QWORD *)(v106 + 40) = v106 + 56;
            if ( v120 )
            {
              *(__m128i *)(v106 + 56) = _mm_loadu_si128(v321);
            }
            else
            {
              *(_QWORD *)(v106 + 40) = v119;
              *(_QWORD *)(v106 + 56) = v321[0].m128i_i64[0];
            }
            v121 = v320[1];
            v122 = a11;
            *(_QWORD *)(v106 + 72) = v106 + 88;
            *(_QWORD *)(v106 + 48) = v121;
            v320[0] = v321;
            v320[1] = nullptr;
            *(_QWORD *)(v106 + 80) = 0x400000000LL;
            v321[0].m128i_i8[0] = 0;
            v123 = sub_10CCC60(v122, v118, v106 + 32);
            if ( v124 )
            {
              if ( !v123 && v262 != v124 )
              {
                v146 = v124[4];
                if ( *(_QWORD *)(v106 + 32) >= v146 && *(_QWORD *)(v106 + 32) == v146 )
                {
                  v147 = (const void *)v124[5];
                  v148 = v124[6];
                  if ( *(_QWORD *)(v106 + 48) <= v148 )
                    v148 = *(_QWORD *)(v106 + 48);
                  sub_990B80(*(const void **)(v106 + 40), v147, v148);
                }
              }
              std::_Rb_tree_insert_and_rebalance();
              ++a11[5];
            }
            else
            {
              v144 = *(void **)(v106 + 72);
              if ( (void *)(v106 + 88) != v144 )
              {
                v271 = v123;
                free(v144);
                v123 = v271;
              }
              v145 = *(void **)(v106 + 40);
              if ( (void *)(v106 + 56) != v145 )
              {
                v272 = v123;
                operator delete(v145);
                v123 = v272;
              }
              v273 = v123;
              operator delete((void *)v106);
              v106 = v273;
            }
          }
        }
        *(_DWORD *)(v106 + 80) = 0;
        sub_10BDBB0(v106 + 72, v82, &v82[2].m128i_i8[8]);
        if ( v320[0] != v321 )
          operator delete(v320[0]);
        if ( s2 != &v309 )
          operator delete(s2);
        if ( (_WORD *)v305.m128i_i64[0] != v306 )
        {
          operator delete((void *)v305.m128i_i64[0]);
          v88 += 4;
          if ( v285 == v88 )
            goto LABEL_181;
          continue;
        }
        v88 += 4;
        if ( v285 == v88 )
        {
LABEL_181:
          v14 = v288;
          break;
        }
      }
    }
    sub_10BEA20(&v319, (__int64)a5, a7, (size_t)a8, a12);
    *(_QWORD *)v322 = v53;
    *(_QWORD *)&v322[8] = (char *)v82 + 24;
    if ( v319 == &v320[1] )
    {
      *(__m128i *)&v322[24] = _mm_load_si128((const __m128i *)&v320[1]);
    }
    else
    {
      *(_QWORD *)&v322[8] = v319;
      *(void **)&v322[24] = v320[1];
    }
    v85 = v82;
    *(void **)&v322[16] = v320[0];
    v125 = (const __m128i **)sub_10CCF40(a11, (unsigned __int64 *)v82);
    v86 = *(void **)&v322[8];
    v126 = *v125;
    s = _mm_loadu_si128(v126);
    v301 = _mm_loadu_si128(v126 + 1);
    v302 = (char *)v126[2].m128i_i64[0];
    if ( *(__m128i **)&v322[8] != (__m128i *)&v82[1].m128i_u64[1] )
LABEL_185:
      operator delete(v86);
LABEL_186:
    if ( (*(_BYTE *)(a2 + 872) & 1) != 0 )
      goto LABEL_187;
LABEL_188:
    v127 = a10;
    v128 = *(_QWORD *)v281;
    if ( ptr.m128i_i32[2] )
    {
      (*(void (__fastcall **)(__int64, __m128i *, unsigned __int64, __m128i *, void **, __int64, __int64))(v128 + 80))(
        v281,
        a3,
        v53,
        &ptr,
        &p_ptr,
        v287,
        a10);
      goto LABEL_190;
    }
LABEL_266:
    (*(void (__fastcall **)(__int64, __m128i *, unsigned __int64, __m128i *, void **, __int64, __int64))(v128 + 72))(
      v281,
      a3,
      v53,
      &s,
      &p_ptr,
      v287,
      v127);
    goto LABEL_190;
  }
  if ( *(_DWORD *)(v53 + 12) != 67 )
  {
    v150 = 1;
    if ( v87 != 18 )
    {
      v150 = 0;
      if ( *(_DWORD *)(v53 + 60) )
        v150 = v289 ^ 1;
    }
    sub_22984A0(v322, v314, v315, 0);
    sub_10AFF20(&v292, *(_DWORD *)(v53 + 64), *(__int8 **)v322, *(size_t *)&v322[8], v150);
    if ( *(_BYTE **)v322 != &v322[16] )
      operator delete(*(void **)v322);
    v85 = a3;
    v151 = sub_10CD640(
             a2,
             a3->m128i_i64,
             v53,
             v283,
             a7,
             (__int64)a8,
             (__m128i)0LL,
             v289,
             a9,
             v292.m128i_i64[0],
             v292.m128i_i64[1]);
    v152 = *(_DWORD *)(v53 + 12);
    v301.m128i_i64[0] = v53;
    s.m128i_i64[0] = (__int64)v151;
    s.m128i_i32[2] = 1;
    v301.m128i_i32[2] = v152;
    v302 = v283;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v281 + 32LL))(v281) )
    {
      if ( !v292.m128i_i64[1] )
      {
        v85 = (__m128i *)(elf_gnu_hash_indexes + 1190);
        v212 = sub_10BA920(v287, 0x74Eu, 0x74Du);
        v213 = v212;
        if ( v212 )
        {
          v319 = v321;
          *(__m128i *)v320 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
          if ( (unsigned __int8)sub_2195AD0(v212, 1869) )
          {
            v214 = **(char ***)(v213 + 48);
            v215 = 0;
            if ( v214 )
              v215 = j__strlen(v214);
            v320[0] = nullptr;
            sub_9FC110(&v319, v214, &v214[v215]);
            *(_WORD *)&v322[32] = 261;
            *(_QWORD *)v322 = v319;
            *(void **)&v322[8] = v320[0];
            if ( !(unsigned int)sub_22674F0(v322, &v311) && v311.m128i_i8[0] )
            {
              v216 = (_BYTE *)s.m128i_i64[0];
              v217 = 0;
              if ( s.m128i_i64[0] )
                v217 = j__strlen((const char *)s.m128i_i64[0]);
              *(_QWORD *)v322 = &v322[24];
              *(__m128i *)&v322[8] = _mm_load_si128((const __m128i *)&xmmword_2384D00);
              sub_9FC110(v322, v216, &v216[v217]);
              LOWORD(v313) = 259;
              v311.m128i_i64[0] = (__int64)"json";
              sub_22669F0(v322, &v311, 0);
              LOWORD(v313) = 257;
              v310 = 257;
              v306[8] = 257;
              v218 = sub_2266D20(*(_QWORD *)v322, *(_QWORD *)&v322[8], 0);
              v303[1] = v219;
              v304 = 261;
              v303[0] = v218;
              sub_2266670(&v319, v303, &v305, &s2, &v311);
              if ( *(_BYTE **)v322 != &v322[24] )
                free(*(void **)v322);
            }
          }
          else
          {
            v240 = sub_10BB400(v287, 0x132u);
            v241 = 0;
            if ( v240 )
            {
              v242 = **(char ***)(v240 + 48);
              v243 = 0;
              if ( v242 )
                v243 = j__strlen(v242);
              v320[0] = nullptr;
              sub_9FC110(&v319, v242, &v242[v243]);
              v244 = 0;
              if ( v283 )
                v244 = j__strlen(v283);
              v245 = (_BYTE *)sub_2266D20(v283, v244, 0);
              sub_9FC110(&v319, v245, &v245[v246]);
            }
            else
            {
              v247 = (_BYTE *)s.m128i_i64[0];
              if ( s.m128i_i64[0] )
                v241 = j__strlen((const char *)s.m128i_i64[0]);
              v320[0] = nullptr;
              sub_9FC110(&v319, v247, &v247[v241]);
            }
            *(_QWORD *)v322 = "json";
            *(_WORD *)&v322[32] = 259;
            sub_22669F0(&v319, v322, 0);
          }
          *(_WORD *)&v322[32] = 261;
          v220 = a3[5].m128i_i64[0];
          *(_QWORD *)v322 = v319;
          *(void **)&v322[8] = v320[0];
          v221 = sub_10B6980(v220, (__int64)v322);
          *(_QWORD *)v322 = v53;
          v222 = v221;
          v85 = (__m128i *)v322;
          *sub_10CD3D0((__int64)&a3[27].m128i_i64[1], (__int64 *)v322, v223, v224, v225, v226) = v221;
          *(_QWORD *)v322 = v53;
          *sub_10CD3D0((__int64)&a3[24].m128i_i64[1], (__int64 *)v322, v227, v228, v229, v230) = v222;
          if ( v319 != v321 )
            free(v319);
        }
      }
    }
    v86 = (void *)v292.m128i_i64[0];
    if ( (__int64 *)v292.m128i_i64[0] != &v293 )
      goto LABEL_185;
    goto LABEL_186;
  }
  v301.m128i_i64[0] = v53;
  v302 = v283;
  if ( (*(_BYTE *)(a2 + 872) & 1) == 0 )
  {
    v127 = a10;
    v128 = *(_QWORD *)v281;
    goto LABEL_266;
  }
LABEL_187:
  if ( (*(_BYTE *)(a2 + 920) & 2) != 0 )
    goto LABEL_188;
  v157 = sub_2259990(v86, v85);
  v158 = sub_971800(v157, "# \"");
  v159 = *(_QWORD *)(v281 + 24);
  *(_QWORD *)v322 = v82 + 1;
  sub_10B4F90(v82, *(_BYTE **)(v159 + 16), *(_QWORD *)(v159 + 16) + *(_QWORD *)(v159 + 24));
  v160 = sub_22581D0(v158, *(_QWORD *)v322, *(_QWORD *)&v322[8]);
  v161 = *(_BYTE **)(v160 + 32);
  if ( (unsigned __int64)v161 >= *(_QWORD *)(v160 + 24) )
  {
    v160 = sub_2257CD0(v160, 34);
  }
  else
  {
    *(_QWORD *)(v160 + 32) = v161 + 1;
    *v161 = 34;
  }
  v162 = sub_971800(v160, " - \"");
  v163 = sub_971800(v162, *(const char **)(v281 + 8));
  v164 = "\", inputs: [";
  sub_971800(v163, "\", inputs: [");
  v165 = *(_QWORD *)v322;
  if ( *(__m128i **)v322 != &v82[1] )
    operator delete(*(void **)v322);
  if ( (_DWORD)v327 )
  {
    v249 = v14;
    v166 = 0;
    v167 = 8 * (5LL * (unsigned int)((_DWORD)v327 - 1) + 5);
    while ( 1 )
    {
      v168 = sub_2259990(v165, v164);
      sub_10BEBE0(v82, (__int64)p_ptr + v166);
      v164 = *(char **)v322;
      sub_22581D0(v168, *(_QWORD *)v322, *(_QWORD *)&v322[8]);
      v165 = *(_QWORD *)v322;
      if ( *(__m128i **)v322 == &v82[1] )
      {
        v166 += 40;
        if ( v167 == v166 )
        {
LABEL_287:
          v14 = v249;
          break;
        }
      }
      else
      {
        operator delete(*(void **)v322);
        v166 += 40;
        if ( v167 == v166 )
          goto LABEL_287;
      }
      v169 = sub_2259990(v165, v164);
      v164 = ", ";
      v165 = v169;
      sub_971800(v169, ", ");
    }
  }
  if ( !ptr.m128i_i32[2] )
  {
    v170 = sub_2259990(v165, v164);
    v171 = sub_971800(v170, "], output: ");
    sub_10BEBE0(v82, (__int64)&s);
    v172 = sub_22581D0(v171, *(_QWORD *)v322, *(_QWORD *)&v322[8]);
    sub_971800(v172, "\n");
    if ( *(__m128i **)v322 != &v82[1] )
      operator delete(*(void **)v322);
    goto LABEL_190;
  }
  v204 = sub_2259990(v165, v164);
  v205 = "], outputs: [";
  v206 = v204;
  sub_971800(v204, "], outputs: [");
  if ( !ptr.m128i_i32[2] )
    goto LABEL_359;
  v250 = v14;
  v207 = 0;
  v208 = 8 * (5LL * (unsigned int)(ptr.m128i_i32[2] - 1) + 5);
  while ( 2 )
  {
    v209 = sub_2259990(v206, v205);
    sub_10BEBE0(v82, v207 + ptr.m128i_i64[0]);
    v205 = *(char **)v322;
    sub_22581D0(v209, *(_QWORD *)v322, *(_QWORD *)&v322[8]);
    v206 = *(_QWORD *)v322;
    if ( *(__m128i **)v322 != &v82[1] )
    {
      operator delete(*(void **)v322);
      v207 += 40;
      if ( v208 == v207 )
        break;
      goto LABEL_356;
    }
    v207 += 40;
    if ( v208 != v207 )
    {
LABEL_356:
      v210 = sub_2259990(v206, v205);
      v205 = ", ";
      v206 = v210;
      sub_971800(v210, ", ");
      continue;
    }
    break;
  }
  v14 = v250;
LABEL_359:
  v211 = sub_2259990(v206, v205);
  sub_971800(v211, "] \n");
LABEL_190:
  v129 = _mm_load_si128(&s);
  v130 = _mm_load_si128(&v301);
  *(_QWORD *)&v322[32] = v302;
  *(__m128i *)v322 = v129;
  *(_QWORD *)v14 = v286;
  *(_QWORD *)(v14 + 8) = 0x400000000LL;
  *(__m128i *)&v322[16] = v130;
  sub_10BDBB0(v14, v82, &v82[2].m128i_i8[8]);
  if ( (__m128i *)ptr.m128i_i64[0] != &v333 )
    free((void *)ptr.m128i_i64[0]);
  sub_10B6DC0(&v290);
  if ( v314 != v316 )
    operator delete(v314);
  if ( p_ptr != &v328 )
    free(p_ptr);
LABEL_196:
  if ( v297 != v299 )
    free(v297);
  v19 = v294;
  if ( v294 != (__int64 *)v296 )
LABEL_6:
    free(v19);
LABEL_7:
  if ( src != v325 )
    free(src);
  v291[0] = &off_2BC1238;
  sub_220FB60(v291);
  return v14;
}

