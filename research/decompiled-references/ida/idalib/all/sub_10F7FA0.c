__int64 __fastcall sub_10F7FA0(
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
  unsigned __int32 v81; // r8d
  __m128i *v82; // r13
  __m128i *v83; // r12
  unsigned __int64 v84; // rdx
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
  _QWORD *v106; // rbp
  __int64 v107; // r14
  __m128i *v108; // r12
  _QWORD *v109; // r13
  unsigned __int64 v110; // rbp
  size_t v111; // rbx
  size_t v112; // rdx
  signed __int64 v113; // rax
  __m128i *v114; // r10
  size_t v115; // r14
  size_t v116; // rdx
  int v117; // eax
  const char *v118; // rsi
  void *v119; // rax
  bool v120; // zf
  void *v121; // rax
  _QWORD *v122; // rdi
  __int64 v123; // rax
  _QWORD *v124; // rdx
  _QWORD *v125; // r9
  __int64 v126; // rdi
  const char *v127; // rax
  const __m128i *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rax
  __m128i v131; // xmm6
  __m128i v132; // xmm7
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // r12
  __int64 v136; // r14
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // r12
  __int64 v140; // r14
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // r12
  __int64 v144; // r14
  unsigned __int64 v145; // rax
  _QWORD *v146; // rdi
  _QWORD *v147; // rdi
  unsigned __int64 v148; // rax
  size_t v149; // r14
  const void *v150; // rsi
  size_t v151; // rdx
  unsigned int v152; // eax
  __int64 v153; // r14
  __int64 v154; // r14
  char v155; // r14
  unsigned __int8 *v156; // rax
  __int32 v157; // edx
  void *v158; // r12
  size_t v159; // r14
  int v160; // r13d
  unsigned int v161; // r14d
  __int64 v162; // rax
  __int64 v163; // rbx
  __int64 v164; // rax
  __int64 v165; // rax
  _BYTE *v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rax
  char *v169; // rsi
  __int64 v170; // rdi
  __int64 v171; // rbx
  __int64 v172; // r14
  __int64 v173; // rbp
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rbx
  __int64 v177; // rax
  char *v178; // r14
  __int64 *v179; // rbx
  __int64 v180; // rbp
  int v181; // edx
  __int64 v182; // rax
  unsigned __int64 v183; // rdx
  __int64 v184; // r15
  __int64 v185; // rcx
  void *v186; // r11
  signed __int64 v187; // rax
  __int64 v188; // r15
  unsigned __int64 v189; // rdx
  __int64 v190; // rax
  int v191; // r10d
  const void *v192; // r15
  __int64 v193; // rcx
  signed __int64 v194; // rax
  __int64 v195; // rbp
  unsigned __int64 v196; // rdx
  __int64 v197; // rax
  __int64 v198; // r12
  __int64 v199; // r14
  char v200; // r13
  __int64 v201; // rdi
  __int64 v202; // rax
  const void **v203; // r13
  const void *v204; // r8
  signed __int64 v205; // r12
  __int64 v206; // r14
  unsigned int v207; // r14d
  unsigned int v208; // r14d
  __int64 v209; // rax
  char *v210; // rsi
  __int64 v211; // rdi
  __int64 v212; // rbx
  __int64 v213; // r14
  __int64 v214; // rbp
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // r14
  char *v219; // r14
  size_t v220; // rax
  _BYTE *v221; // r14
  size_t v222; // rcx
  __int64 v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rdi
  __int64 v226; // rax
  __int64 v227; // r14
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // r12
  __int64 v237; // rax
  __int64 v238; // rax
  const void **v239; // r13
  const void *v240; // r8
  signed __int64 v241; // r12
  __int64 v242; // r14
  unsigned int v243; // r14d
  unsigned int v244; // r14d
  __int64 v245; // rax
  size_t v246; // rcx
  char *v247; // r14
  size_t v248; // rax
  size_t v249; // rcx
  _BYTE *v250; // rax
  __int64 v251; // rdx
  _BYTE *v252; // r14
  __int64 v254; // [rsp+0h] [rbp-6A8h]
  __int64 v255; // [rsp+0h] [rbp-6A8h]
  int v258; // [rsp+20h] [rbp-688h]
  unsigned __int64 v259; // [rsp+28h] [rbp-680h]
  __int64 *v260; // [rsp+28h] [rbp-680h]
  const void **v261; // [rsp+28h] [rbp-680h]
  const void **v262; // [rsp+28h] [rbp-680h]
  const void **v263; // [rsp+28h] [rbp-680h]
  char v264; // [rsp+30h] [rbp-678h]
  int v265; // [rsp+50h] [rbp-658h]
  __int64 *v266; // [rsp+50h] [rbp-658h]
  _QWORD *v267; // [rsp+50h] [rbp-658h]
  bool v268; // [rsp+58h] [rbp-650h]
  const void *v269; // [rsp+58h] [rbp-650h]
  __int64 v270; // [rsp+58h] [rbp-650h]
  const void *v271; // [rsp+58h] [rbp-650h]
  const void *v272; // [rsp+58h] [rbp-650h]
  int v273; // [rsp+60h] [rbp-648h]
  unsigned __int64 v274; // [rsp+60h] [rbp-648h]
  __int64 *v275; // [rsp+60h] [rbp-648h]
  __int64 v276; // [rsp+60h] [rbp-648h]
  __int64 v277; // [rsp+60h] [rbp-648h]
  __int64 v278; // [rsp+60h] [rbp-648h]
  _QWORD *v279; // [rsp+60h] [rbp-648h]
  unsigned __int64 v280; // [rsp+60h] [rbp-648h]
  __int64 *v281; // [rsp+68h] [rbp-640h]
  __m128i *v282; // [rsp+68h] [rbp-640h]
  size_t v283; // [rsp+68h] [rbp-640h]
  __int64 v284; // [rsp+68h] [rbp-640h]
  signed __int64 v285; // [rsp+68h] [rbp-640h]
  void *v286; // [rsp+68h] [rbp-640h]
  __int64 *v287; // [rsp+70h] [rbp-638h]
  __int64 v288; // [rsp+70h] [rbp-638h]
  char *v289; // [rsp+78h] [rbp-630h]
  char *v290; // [rsp+78h] [rbp-630h]
  char *v291; // [rsp+78h] [rbp-630h]
  __int64 *v292; // [rsp+88h] [rbp-620h]
  __int64 v293; // [rsp+C0h] [rbp-5E8h]
  __int64 v294; // [rsp+C8h] [rbp-5E0h]
  __int64 v295; // [rsp+E0h] [rbp-5C8h]
  unsigned __int8 v296; // [rsp+ECh] [rbp-5BCh] BYREF
  __m128i *v297; // [rsp+F8h] [rbp-5B0h] BYREF
  _QWORD v298[4]; // [rsp+100h] [rbp-5A8h] BYREF
  __m128i v299; // [rsp+120h] [rbp-588h] BYREF
  __int64 v300; // [rsp+130h] [rbp-578h] BYREF
  __int64 *v301; // [rsp+140h] [rbp-568h] BYREF
  __int64 v302; // [rsp+148h] [rbp-560h]
  _BYTE v303[32]; // [rsp+150h] [rbp-558h] BYREF
  void *v304; // [rsp+170h] [rbp-538h] BYREF
  __int64 v305; // [rsp+178h] [rbp-530h]
  _BYTE v306[32]; // [rsp+180h] [rbp-528h] BYREF
  __m128i s; // [rsp+1A0h] [rbp-508h] BYREF
  __m128i v308; // [rsp+1B0h] [rbp-4F8h] BYREF
  char *v309; // [rsp+1C0h] [rbp-4E8h]
  _QWORD v310[4]; // [rsp+1D0h] [rbp-4D8h] BYREF
  __int16 v311; // [rsp+1F0h] [rbp-4B8h]
  __m128i v312; // [rsp+200h] [rbp-4A8h] BYREF
  _WORD v313[16]; // [rsp+210h] [rbp-498h] BYREF
  void *s2; // [rsp+230h] [rbp-478h] BYREF
  size_t n; // [rsp+238h] [rbp-470h]
  __m128i v316; // [rsp+240h] [rbp-468h] BYREF
  __int16 v317; // [rsp+250h] [rbp-458h]
  __m128i v318; // [rsp+260h] [rbp-448h] BYREF
  __m128i v319; // [rsp+270h] [rbp-438h] BYREF
  char *v320; // [rsp+280h] [rbp-428h]
  void *v321; // [rsp+290h] [rbp-418h] BYREF
  __int64 v322; // [rsp+298h] [rbp-410h]
  _BYTE v323[16]; // [rsp+2A0h] [rbp-408h] BYREF
  __m128i v324; // [rsp+2B0h] [rbp-3F8h]
  __int64 v325; // [rsp+2C0h] [rbp-3E8h]
  void *v326; // [rsp+2D0h] [rbp-3D8h] BYREF
  void *v327[2]; // [rsp+2D8h] [rbp-3D0h] BYREF
  __m128i v328[8]; // [rsp+2E8h] [rbp-3C0h] BYREF
  _BYTE v329[160]; // [rsp+370h] [rbp-338h] BYREF
  void *src; // [rsp+410h] [rbp-298h] BYREF
  __int64 v331; // [rsp+418h] [rbp-290h]
  _BYTE v332[160]; // [rsp+420h] [rbp-288h] BYREF
  void *p_ptr; // [rsp+4C0h] [rbp-1E8h] BYREF
  void *v334; // [rsp+4C8h] [rbp-1E0h]
  unsigned __int8 *v335; // [rsp+4D0h] [rbp-1D8h] BYREF
  __m128i v336; // [rsp+4D8h] [rbp-1D0h] BYREF
  __int64 v337; // [rsp+4E8h] [rbp-1C0h]
  char *v338; // [rsp+4F0h] [rbp-1B8h]
  __m128i ptr; // [rsp+570h] [rbp-138h] BYREF
  __m128i v340; // [rsp+580h] [rbp-128h] BYREF
  __m128i v341; // [rsp+590h] [rbp-118h] BYREF
  __int64 v342; // [rsp+5A0h] [rbp-108h]

  v14 = a1;
  v296 = a6;
  sub_2233820(v298);
  v16 = a12;
  v298[0] = &off_2BEB1D8;
  v298[2] = "Building compilation jobs";
  src = v332;
  v331 = 0x400000000LL;
  v17 = *(_DWORD *)(a4 + 8);
  v264 = a12 != 0;
  if ( v17 == 2 )
  {
    sub_10D5E20((size_t)a3, a5, a7, a8, 0);
    if ( sub_10D22D0(a4, 0) || !sub_10D22A0(a4) )
    {
      ptr.m128i_i64[1] = 0x400000000LL;
      ptr.m128i_i64[0] = (__int64)&v340;
      p_ptr = &ptr;
      v334 = a3;
      v335 = &v296;
      v336.m128i_i64[0] = (__int64)&a10;
      v336.m128i_i64[1] = (__int64)a11;
      v337 = a2;
      *(_QWORD *)v329 = &sub_10FB210;
      *(_QWORD *)&v329[8] = &p_ptr;
      sub_10D20F0(a4, (__int64)v329);
      v18 = ptr.m128i_i32[2];
      *(_QWORD *)(v14 + 8) = 0x400000000LL;
      *(_QWORD *)v14 = v14 + 16;
      if ( v18 )
        sub_10E1770((char ***)v14, (char ***)&ptr);
      v19 = (__int64 *)ptr.m128i_i64[0];
      if ( (__m128i *)ptr.m128i_i64[0] == &v340 )
        goto LABEL_7;
      goto LABEL_6;
    }
    ptr.m128i_i64[0] = (__int64)&src;
    v340.m128i_i64[0] = (__int64)&a10;
    ptr.m128i_i64[1] = (__int64)a3;
    v334 = &ptr;
    v340.m128i_i64[1] = (__int64)a11;
    v341.m128i_i64[0] = a2;
    p_ptr = &sub_10FB0C0;
    sub_10D2200(a4, v264, (__int64)&p_ptr);
    if ( a12 )
      v21 = sub_10D2310(a4);
    else
      v21 = sub_10D22B0(a4);
    v22 = (void *)sub_10D22B0(a4);
    sub_10E2760(&ptr, (__int64)a5, a7, (size_t)a8, a12);
    p_ptr = v22;
    v334 = &v336;
    if ( (__m128i *)ptr.m128i_i64[0] == &v340 )
    {
      v336 = _mm_load_si128(&v340);
    }
    else
    {
      v334 = (void *)ptr.m128i_i64[0];
      v336.m128i_i64[0] = v340.m128i_i64[0];
    }
    v335 = (unsigned __int8 *)ptr.m128i_i64[1];
    v23 = sub_10E1500((__int64)a11, (unsigned __int64 *)&p_ptr);
    if ( (_QWORD *)v23 != a11 + 1 )
    {
      ptr.m128i_i64[1] = 0x400000000LL;
      v24 = *(_DWORD *)(v23 + 80);
      ptr.m128i_i64[0] = (__int64)&v340;
      if ( v24 )
        sub_10E1640(ptr.m128i_i64, (__int64 *)(v23 + 72));
      sub_10E18F0((__int64)&ptr, src, (_BYTE *)src + 40 * (unsigned int)v331);
      v25 = ptr.m128i_i32[2];
      *(_QWORD *)a1 = a1 + 16;
      *(_QWORD *)(a1 + 8) = 0x400000000LL;
      if ( v25 )
        sub_10E1770((char ***)a1, (char ***)&ptr);
      if ( (__m128i *)ptr.m128i_i64[0] != &v340 )
        free((void *)ptr.m128i_i64[0]);
      if ( v334 != &v336 )
        operator delete(v334);
      goto LABEL_7;
    }
    if ( v334 != &v336 )
      operator delete(v334);
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
    if ( (unsigned __int8)sub_21B9810(v26, 70) )
    {
      v29 = *(_DWORD *)(a4 + 12);
      v30 = **(_QWORD **)(v26 + 48);
      v340.m128i_i64[0] = a4;
      ptr.m128i_i32[2] = 1;
      v340.m128i_i32[2] = v29;
      v341.m128i_i64[0] = v30;
      ptr.m128i_i64[0] = v30;
    }
    else
    {
      v28 = *(_DWORD *)(a4 + 12);
      v340.m128i_i64[0] = a4;
      ptr.m128i_i32[2] = 2;
      v340.m128i_i32[2] = v28;
      v341.m128i_i64[0] = (__int64)&byte_22F0C30;
      ptr.m128i_i64[0] = v26;
    }
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    sub_10E18F0(a1, &ptr, &v341.m128i_i8[8]);
    goto LABEL_7;
  }
  if ( v17 == 1 )
  {
    v31 = *(_QWORD *)(a4 + 88);
    v32 = *(_QWORD *)(a4 + 96);
    if ( v32 )
    {
      sub_10E2B00(
        (__int64)&ptr,
        a2,
        *(const char **)(a2 + 944),
        *(_QWORD *)(a2 + 952),
        a3[5].m128i_i64[0],
        v16,
        v31,
        *(_QWORD *)(a4 + 96));
      LODWORD(v33) = (unsigned int)sub_10F6CA0(a2, a3[5].m128i_i64[0], (__int64)&ptr);
      if ( (__m128i *)ptr.m128i_i64[0] != &v340 )
      {
        v258 = v33;
        operator delete((void *)ptr.m128i_i64[0]);
        LODWORD(v33) = v258;
      }
    }
    else
    {
      v33 = a3->m128i_i64[1];
    }
    sub_10FAD90(a1, a2, (_DWORD)a3, **(_QWORD **)(a4 + 16), v33, v296, v31, v32, a9, a10, (__int64)a11, a12);
    goto LABEL_7;
  }
  v301 = (__int64 *)v303;
  v302 = 0x300000000LL;
  if ( *(_DWORD *)(a4 + 24) )
    sub_10D2D90((void **)&v301, (char **)(a4 + 16));
  v268 = 0;
  v304 = v306;
  v305 = 0x300000000LL;
  if ( *(_DWORD *)(a2 + 24) == 2 )
    v268 = *(_DWORD *)(a2 + 40) == 0;
  v259 = a4;
  v34 = 1;
  v35 = &v340;
  v273 = *(_DWORD *)(a2 + 20);
  v36 = *(_DWORD *)(a4 + 64);
  ptr.m128i_i64[0] = (__int64)&v340;
  v37 = a4;
  v265 = v36;
  v340.m128i_i64[1] = (__int64)&v341.m128i_i64[1];
  v341.m128i_i64[0] = 0x300000000LL;
  v340.m128i_i64[0] = a4;
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
          if ( v265 )
          {
            if ( !sub_10D22D0(v44, 1) )
              goto LABEL_62;
            v49 = sub_10D2310(v44);
            if ( !*(_BYTE *)(v49 + 56) )
              goto LABEL_62;
          }
          else if ( !sub_10D22A0(v44) || (v49 = sub_10D22B0(v44), !*(_BYTE *)(v49 + 56)) )
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
            v284 = v49;
            sub_2237220(v46 + 8, v46 + 24, v50 + 1, 8);
            v50 = *((unsigned int *)v46 + 4);
            v49 = v284;
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
      sub_10D9270((__int64)&ptr, v38);
      v35 = (__m128i *)ptr.m128i_i64[0];
      v39 = ptr.m128i_u32[2];
    }
  }
  v53 = v259;
  v54 = v34 - 1;
  v52 = v54;
  v55 = ptr.m128i_i64[0] + 48LL * v54;
  v56 = *(void **)(v55 + 8);
  ptr.m128i_i32[2] = v54;
  if ( v56 == (void *)(v55 + 24) )
  {
    v260 = (__int64 *)ptr.m128i_i64[0];
    if ( v54 <= 2 )
      goto LABEL_72;
LABEL_69:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a5 + 184LL))(a5) )
    {
      if ( !v273
        && !sub_10DCD30(a3[5].m128i_i64[0], 0xD3Au)
        && !sub_10DCD30(a3[5].m128i_i64[0], 0x1C7u)
        && !sub_10DCD30(a3[5].m128i_i64[0], 0x1C8u) )
      {
        v197 = sub_10DCD30(a3[5].m128i_i64[0], 0x226u);
        if ( !v197 )
        {
          v198 = v260[6];
          v199 = v260[12];
          if ( *(_DWORD *)(*v260 + 8) == 9 )
            v197 = *v260;
          if ( *(_DWORD *)(v198 + 8) == 8 && *(_DWORD *)(v199 + 8) == 7 )
          {
            if ( v197 )
            {
              v288 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a5 + 104LL))(a5, v260[12]);
              if ( v288 )
              {
                v200 = sub_12CCCB0(*(unsigned int *)(*v260 + 12));
                if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v288 + 24LL))(v288)
                  || v200 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v288 + 32LL))(v288) )
                {
                  if ( v268 )
                  {
                    v201 = v288;
                    if ( v288 == (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a5 + 104LL))(a5, v198) )
                      goto LABEL_71;
                  }
                  else
                  {
                    v201 = v288;
                  }
                  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v201 + 16LL))(v201) )
                  {
                    sub_10D2D90((void **)&v301, (char **)(v199 + 16));
                    v202 = (unsigned int)v305;
                    v203 = (const void **)(v260 + 1);
                    v262 = (const void **)(v260 + 19);
                    do
                    {
                      while ( 1 )
                      {
                        v204 = *v203;
                        v205 = 8LL * *((unsigned int *)v203 + 2);
                        v206 = v205 >> 3;
                        if ( (v205 >> 3) + v202 > (unsigned __int64)HIDWORD(v305) )
                        {
                          v271 = *v203;
                          sub_2237220(&v304, v306, v206 + v202, 8);
                          v202 = (unsigned int)v305;
                          v204 = v271;
                        }
                        if ( !v205 )
                          break;
                        v203 += 6;
                        memcpy((char *)v304 + 8 * v202, v204, v205);
                        v207 = v305 + v206;
                        v202 = v207;
                        LODWORD(v305) = v207;
                        if ( v203 == v262 )
                          goto LABEL_98;
                      }
                      v208 = v202 + v206;
                      v203 += 6;
                      v202 = v208;
                      LODWORD(v305) = v208;
                    }
                    while ( v262 != v203 );
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
    v260 = (__int64 *)ptr.m128i_i64[0];
    v54 = ptr.m128i_u32[2];
    goto LABEL_72;
  }
  free(v56);
  v54 = ptr.m128i_u32[2];
  v260 = (__int64 *)ptr.m128i_i64[0];
  if ( ptr.m128i_i32[2] > 2u )
    goto LABEL_69;
  v52 = ptr.m128i_u32[2];
LABEL_72:
  if ( v54 > 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a5 + 184LL))(a5) )
    {
      if ( !v273
        && !sub_10DCD30(a3[5].m128i_i64[0], 0xD3Au)
        && !sub_10DCD30(a3[5].m128i_i64[0], 0x1C7u)
        && !sub_10DCD30(a3[5].m128i_i64[0], 0x1C8u)
        && !sub_10DCD30(a3[5].m128i_i64[0], 0x226u)
        && *(_DWORD *)(*v260 + 8) == 9 )
      {
        v236 = v260[6];
        if ( *(_DWORD *)(v236 + 8) == 8 )
        {
          v237 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a5 + 104LL))(a5, v260[6]);
          v288 = v237;
          if ( v237 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v237 + 16LL))(v237) )
            {
              sub_10D2D90((void **)&v301, (char **)(v236 + 16));
              v238 = (unsigned int)v305;
              v239 = (const void **)(v260 + 1);
              v263 = (const void **)(v260 + 13);
              do
              {
                while ( 1 )
                {
                  v240 = *v239;
                  v241 = 8LL * *((unsigned int *)v239 + 2);
                  v242 = v241 >> 3;
                  if ( (v241 >> 3) + v238 > (unsigned __int64)HIDWORD(v305) )
                  {
                    v272 = *v239;
                    sub_2237220(&v304, v306, v242 + v238, 8);
                    v238 = (unsigned int)v305;
                    v240 = v272;
                  }
                  if ( !v241 )
                    break;
                  v239 += 6;
                  memcpy((char *)v304 + 8 * v238, v240, v241);
                  v243 = v305 + v242;
                  v238 = v243;
                  LODWORD(v305) = v243;
                  if ( v239 == v263 )
                    goto LABEL_98;
                }
                v244 = v238 + v242;
                v239 += 6;
                v238 = v244;
                LODWORD(v305) = v244;
              }
              while ( v263 != v239 );
              goto LABEL_98;
            }
          }
        }
      }
    }
    v52 = ptr.m128i_u32[2];
    v260 = (__int64 *)ptr.m128i_i64[0];
  }
  if ( v52 <= 1 )
    goto LABEL_239;
  if ( *(_DWORD *)(*v260 + 8) != 8 )
    goto LABEL_239;
  v289 = (char *)v260[6];
  if ( *((_DWORD *)v289 + 2) != 7 )
    goto LABEL_239;
  v287 = &v260[6 * v52];
  v57 = (__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)(48 * v52) >> 4)) >> 2;
  if ( !v57 )
  {
    v58 = v260;
LABEL_228:
    v145 = 0xAAAAAAAAAAAAAAABLL * (((char *)v287 - (char *)v58) >> 4);
    if ( v145 != 2 )
    {
      if ( v145 != 3 )
      {
        if ( v145 != 1 )
          goto LABEL_87;
        goto LABEL_231;
      }
      if ( !(unsigned __int8)sub_10D87B0(*v58) )
        goto LABEL_85;
      v58 += 6;
    }
    if ( !(unsigned __int8)sub_10D87B0(*v58) )
      goto LABEL_85;
    v58 += 6;
LABEL_231:
    if ( !(unsigned __int8)sub_10D87B0(*v58) )
      goto LABEL_85;
    goto LABEL_87;
  }
  v58 = v260;
  v281 = &v260[24 * v57];
  while ( 1 )
  {
    v59 = *(_QWORD *)(*v58 + 16);
    v60 = v59 + 8LL * *(unsigned int *)(*v58 + 24);
    if ( v59 != v60 )
      break;
LABEL_212:
    v133 = v58[6];
    v134 = *(_QWORD *)(v133 + 16);
    v135 = v134 + 8LL * *(unsigned int *)(v133 + 24);
    v136 = v134;
    if ( v134 != v135 )
    {
      while ( (unsigned __int8)sub_12CCCB0(*(unsigned int *)(*(_QWORD *)v136 + 12LL)) )
      {
        v136 += 8;
        if ( v135 == v136 )
          goto LABEL_217;
      }
      v58 += 6;
      goto LABEL_85;
    }
LABEL_217:
    v137 = v58[12];
    v138 = *(_QWORD *)(v137 + 16);
    v139 = v138 + 8LL * *(unsigned int *)(v137 + 24);
    v140 = v138;
    if ( v138 != v139 )
    {
      while ( (unsigned __int8)sub_12CCCB0(*(unsigned int *)(*(_QWORD *)v140 + 12LL)) )
      {
        v140 += 8;
        if ( v139 == v140 )
          goto LABEL_222;
      }
      v58 += 12;
      goto LABEL_85;
    }
LABEL_222:
    v141 = v58[18];
    v142 = *(_QWORD *)(v141 + 16);
    v143 = v142 + 8LL * *(unsigned int *)(v141 + 24);
    v144 = v142;
    if ( v142 != v143 )
    {
      while ( (unsigned __int8)sub_12CCCB0(*(unsigned int *)(*(_QWORD *)v144 + 12LL)) )
      {
        v144 += 8;
        if ( v143 == v144 )
          goto LABEL_227;
      }
      v58 += 18;
      goto LABEL_85;
    }
LABEL_227:
    v58 += 24;
    if ( v281 == v58 )
      goto LABEL_228;
  }
  v61 = *(_QWORD *)(*v58 + 16);
  while ( (unsigned __int8)sub_12CCCB0(*(unsigned int *)(*(_QWORD *)v61 + 12LL)) )
  {
    v61 += 8;
    if ( v60 == v61 )
      goto LABEL_212;
  }
LABEL_85:
  if ( v273 && v287 != v58 )
  {
LABEL_239:
    sub_10D2D90((void **)&v301, (char **)(v53 + 16));
    v288 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a5 + 104LL))(a5, v53);
    if ( !v288 )
      goto LABEL_99;
    goto LABEL_98;
  }
LABEL_87:
  v288 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*a5 + 104LL))(a5, v289);
  if ( !v288 )
    goto LABEL_239;
  v62 = sub_12CCCB0(*(unsigned int *)(*v260 + 12));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v288 + 24LL))(v288)
    && (!v62 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v288 + 32LL))(v288)) )
  {
    goto LABEL_239;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v288 + 32LL))(v288) && v268 )
    goto LABEL_239;
  sub_10D2D90((void **)&v301, (char **)v289 + 2);
  v63 = (unsigned int)v305;
  v64 = (const void **)(v260 + 1);
  v261 = (const void **)(v260 + 13);
  do
  {
    while ( 1 )
    {
      v65 = *v64;
      v66 = 8LL * *((unsigned int *)v64 + 2);
      v67 = v66 >> 3;
      if ( (v66 >> 3) + v63 > (unsigned __int64)HIDWORD(v305) )
      {
        v269 = *v64;
        sub_2237220(&v304, v306, v67 + v63, 8);
        v63 = (unsigned int)v305;
        v65 = v269;
      }
      if ( !v66 )
        break;
      v64 += 6;
      memcpy((char *)v304 + 8 * v63, v65, v66);
      v68 = v305 + v67;
      v63 = v68;
      LODWORD(v305) = v68;
      if ( v64 == v261 )
        goto LABEL_98;
    }
    v161 = v63 + v67;
    v64 += 6;
    v63 = v161;
    LODWORD(v305) = v161;
  }
  while ( v261 != v64 );
LABEL_98:
  if ( sub_10DCD30(a3[5].m128i_i64[0], 0xBC2u)
    || sub_10DCD30(a3[5].m128i_i64[0], 0xD0Au)
    || v273
    || sub_10DCD30(a3[5].m128i_i64[0], 0xC96u)
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v288 + 40LL))(v288) )
  {
    goto LABEL_99;
  }
  v326 = &v327[1];
  v327[0] = (void *)0x300000000LL;
  *(_QWORD *)&v329[8] = 0x300000000LL;
  *(_QWORD *)v329 = &v329[16];
  if ( v301 == &v301[(unsigned int)v302] )
    goto LABEL_326;
  v280 = v53;
  v178 = (char *)&v301[(unsigned int)v302];
  v179 = v301;
  v270 = v14;
  while ( 2 )
  {
    v180 = *v179;
    p_ptr = &v335;
    v335 = (unsigned __int8 *)v180;
    v120 = *(_BYTE *)(v180 + 56) == 0;
    v184 = v180;
    v334 = (void *)0x300000001LL;
    if ( v120 )
      goto LABEL_305;
    v181 = *(_DWORD *)(v180 + 8);
    if ( v181 == 2 )
    {
      if ( v265 )
      {
        if ( !sub_10D22D0(v180, 1) )
          goto LABEL_305;
        v180 = sub_10D2310(v180);
        if ( !*(_BYTE *)(v180 + 56) )
          goto LABEL_305;
      }
      else
      {
        if ( !sub_10D22A0(v180) )
          goto LABEL_305;
        v180 = sub_10D22B0(v180);
        if ( !*(_BYTE *)(v180 + 56) )
          goto LABEL_305;
      }
      sub_10DC4B0((__int64)&v326, v184);
      v181 = *(_DWORD *)(v180 + 8);
      if ( (unsigned int)(v181 - 3) <= 0x13 )
        goto LABEL_312;
      goto LABEL_305;
    }
    if ( (unsigned int)(v181 - 3) <= 0x13 )
    {
LABEL_312:
      if ( v181 == 3 )
      {
        v185 = (unsigned int)v305;
        v186 = v326;
        v187 = 8LL * LODWORD(v327[0]);
        v188 = v187 >> 3;
        v189 = (v187 >> 3) + (unsigned int)v305;
        if ( v189 > HIDWORD(v305) )
        {
          v291 = (char *)(8LL * LODWORD(v327[0]));
          v286 = v326;
          sub_2237220(&v304, v306, v189, 8);
          v187 = (signed __int64)v291;
          v186 = v286;
          v185 = (unsigned int)v305;
        }
        if ( v187 )
        {
          memcpy((char *)v304 + 8 * v185, v186, v187);
          LODWORD(v185) = v305;
        }
        v190 = *(unsigned int *)(v180 + 24);
        v191 = v188 + v185;
        v192 = *(const void **)(v180 + 16);
        v193 = *(unsigned int *)&v329[8];
        LODWORD(v305) = v191;
        v194 = 8 * v190;
        v195 = v194 >> 3;
        v196 = (v194 >> 3) + *(unsigned int *)&v329[8];
        if ( v196 > *(unsigned int *)&v329[12] )
        {
          v285 = v194;
          sub_2237220(v329, &v329[16], v196, 8);
          v193 = *(unsigned int *)&v329[8];
          v194 = v285;
        }
        if ( v194 )
        {
          memcpy((void *)(*(_QWORD *)v329 + 8 * v193), v192, v194);
          LODWORD(v193) = *(_DWORD *)&v329[8];
        }
        *(_DWORD *)&v329[8] = v195 + v193;
        goto LABEL_308;
      }
    }
LABEL_305:
    v182 = *(unsigned int *)&v329[8];
    v183 = *(unsigned int *)&v329[8] + 1LL;
    if ( v183 > *(unsigned int *)&v329[12] )
    {
      sub_2237220(v329, &v329[16], v183, 8);
      v182 = *(unsigned int *)&v329[8];
    }
    *(_QWORD *)(*(_QWORD *)v329 + 8 * v182) = v184;
    ++*(_DWORD *)&v329[8];
LABEL_308:
    if ( v178 != (char *)++v179 )
      continue;
    break;
  }
  v14 = v270;
  v53 = v280;
LABEL_326:
  sub_10D2D90((void **)&v301, (char **)v329);
  if ( *(_BYTE **)v329 != &v329[16] )
    free(*(void **)v329);
  if ( v326 != &v327[1] )
    free(v326);
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
  if ( v70 != &v340 )
    free(v70);
  v293 = v14 + 16;
  if ( !v288 )
  {
    *(_QWORD *)v14 = v14 + 16;
    ptr.m128i_i32[2] = 0;
    *(_QWORD *)(v14 + 8) = 0x400000000LL;
    v340.m128i_i64[0] = 0;
    v340.m128i_i32[2] = 67;
    v341.m128i_i64[0] = 0;
    sub_10E18F0(v14, &ptr, &v341.m128i_i8[8]);
    goto LABEL_196;
  }
  v266 = (__int64 *)((char *)v304 + 8 * (unsigned int)v305);
  if ( v304 != v266 )
  {
    v274 = v53;
    v72 = (__int64 *)v304;
    do
    {
      v73 = *v72;
      ptr.m128i_i64[0] = (__int64)&src;
      ++v72;
      v340.m128i_i64[0] = (__int64)&a10;
      ptr.m128i_i64[1] = (__int64)a3;
      v341.m128i_i64[0] = a2;
      v340.m128i_i64[1] = (__int64)a11;
      p_ptr = &sub_10FAF70;
      v334 = &ptr;
      sub_10D2200(v73, v264, (__int64)&p_ptr);
    }
    while ( v266 != v72 );
    v53 = v274;
  }
  v74 = v301;
  v75 = &v335;
  v334 = (void *)0x400000000LL;
  p_ptr = &v335;
  v76 = (char *)&v301[(unsigned int)v302];
  if ( v301 == (__int64 *)v76 )
  {
    v78 = (char **)&v335;
    v79 = 0;
    v290 = v338;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v77 = 0;
        if ( v296 )
          v77 = (unsigned int)(*(_DWORD *)(v53 + 8) - 13) <= 2;
        sub_10FAD90(
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
        sub_10E18F0((__int64)&p_ptr, ptr.m128i_i64[0], (_BYTE *)(ptr.m128i_i64[0] + 40LL * ptr.m128i_u32[2]));
        if ( (__m128i *)ptr.m128i_i64[0] == &v340 )
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
    v79 = (unsigned int)v334;
    v290 = *((char **)p_ptr + 4);
    v75 = (unsigned __int8 **)((char *)p_ptr + 40 * (unsigned int)v334);
    if ( v75 != p_ptr && *((_DWORD *)p_ptr + 2) != 1 )
    {
      for ( i = (char *)p_ptr; i + 40 != (char *)v75; i += 40 )
      {
        if ( *((_DWORD *)i + 12) == 1 )
        {
          v290 = *((char **)i + 9);
          break;
        }
      }
    }
  }
  if ( *(_DWORD *)(v53 + 12) == 61 )
    v290 = *v78;
  if ( (_DWORD)v331 )
  {
    v158 = src;
    v159 = 40LL * (unsigned int)v331;
    v160 = v331;
    if ( (unsigned __int64)(unsigned int)v331 + v79 > HIDWORD(v334) )
    {
      sub_2237220(&p_ptr, &v335, (unsigned int)v331 + v79, 40);
      v75 = (unsigned __int8 **)((char *)p_ptr + 40 * (unsigned int)v334);
    }
    memcpy(v75, v158, v159);
    LODWORD(v334) = v160 + (_DWORD)v334;
  }
  v81 = *(_DWORD *)(v53 + 64);
  v321 = v323;
  v82 = (__m128i *)v329;
  v324 = 0;
  v325 = 0;
  v83 = *(__m128i **)(v288 + 24);
  v322 = 0;
  v323[0] = 0;
  v84 = sub_10D5E20((size_t)a3, a5, a7, a8, v81);
  v294 = v84;
  if ( (_DWORD)v334 == 1 )
    (*(void (__fastcall **)(_BYTE *, __m128i *, unsigned __int64, _QWORD))(v83->m128i_i64[0] + 528))(
      v329,
      v83,
      v84,
      *((unsigned int *)p_ptr + 6));
  else
    (*(void (__fastcall **)(_BYTE *, __m128i *, unsigned __int64, _QWORD))(v83->m128i_i64[0] + 528))(v329, v83, v84, 0);
  sub_22B9ED0(&ptr, v329);
  sub_A0AAD0((__int64)&v321, &ptr);
  v324 = _mm_load_si128(&v341);
  v325 = v342;
  if ( (__m128i *)ptr.m128i_i64[0] != &v340 )
    operator delete((void *)ptr.m128i_i64[0]);
  if ( *(_BYTE **)v329 != &v329[16] )
    operator delete(*(void **)v329);
  sub_10DB210(&ptr, (__int64)&v321);
  v85 = v83;
  sub_10DA960(&v297, v83, &ptr);
  v86 = (void *)ptr.m128i_i64[0];
  if ( (__m128i *)ptr.m128i_i64[0] != &v340 )
    operator delete((void *)ptr.m128i_i64[0]);
  v87 = *(_DWORD *)(v53 + 8);
  s.m128i_i32[2] = 0;
  ptr.m128i_i64[0] = (__int64)&v340;
  v308.m128i_i64[0] = 0;
  v308.m128i_i32[2] = 67;
  v309 = nullptr;
  ptr.m128i_i64[1] = 0x400000000LL;
  if ( v87 == 17 )
  {
    v88 = *(__int64 **)(v53 + 88);
    v89 = 4LL * *(unsigned int *)(v53 + 96);
    v292 = &v88[v89];
    if ( &v88[v89] != v88 )
    {
      v267 = a11 + 1;
      v295 = v14;
      while ( 1 )
      {
        sub_22BC1E0(v82, *(_QWORD *)(*v88 + 16), *(_QWORD *)(*v88 + 24), 0);
        sub_10D3C60(&v312, *((_DWORD *)v88 + 6), *(__int8 **)v329, *(size_t *)&v329[8], 1);
        if ( *(__m128i **)v329 != &v82[1] )
          operator delete(*(void **)v329);
        v90 = 1;
        if ( !a9 )
          v90 = *((_DWORD *)v88 + 6) == 8;
        v91 = sub_10F1380(
                a2,
                a3->m128i_i64,
                v53,
                v290,
                (_BYTE *)v88[1],
                v88[2],
                (__m128i)0LL,
                0,
                v90,
                v312.m128i_i64[0],
                v312.m128i_i64[1]);
        v92 = *(_DWORD *)(v53 + 12);
        v318.m128i_i32[2] = 1;
        v318.m128i_i64[0] = (__int64)v91;
        v93 = ptr.m128i_u32[2];
        v319.m128i_i32[2] = v92;
        v94 = ptr.m128i_u32[2] + 1LL;
        v319.m128i_i64[0] = v53;
        v320 = v290;
        if ( v94 > ptr.m128i_u32[3] )
        {
          v154 = ptr.m128i_i64[0];
          if ( ptr.m128i_i64[0] > (unsigned __int64)&v318
            || (unsigned __int64)&v318 >= ptr.m128i_i64[0] + 40 * (unsigned __int64)ptr.m128i_u32[2] )
          {
            sub_2237220(&ptr, &v340, v94, 40);
            v95 = ptr.m128i_i64[0];
            v93 = ptr.m128i_u32[2];
            v96 = &v318;
          }
          else
          {
            sub_2237220(&ptr, &v340, v94, 40);
            v95 = ptr.m128i_i64[0];
            v93 = ptr.m128i_u32[2];
            v96 = (__m128i *)((char *)&v318 + ptr.m128i_i64[0] - v154);
          }
        }
        else
        {
          v95 = ptr.m128i_i64[0];
          v96 = &v318;
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
        v102 = _mm_load_si128(&v318);
        v103 = _mm_load_si128(&v319);
        *(_QWORD *)&v329[32] = v320;
        *(__m128i *)v329 = v102;
        *(__m128i *)&v329[16] = v103;
        sub_10E2760(&s2, v101, v98, v99, v100);
        v326 = (void *)v53;
        v104 = (__m128i *)s2;
        v327[0] = v328;
        if ( s2 == &v316 )
        {
          v104 = v328;
          v328[0] = _mm_load_si128(&v316);
        }
        else
        {
          v327[0] = s2;
          v328[0].m128i_i64[0] = v316.m128i_i64[0];
        }
        v105 = (void *)n;
        v316.m128i_i8[0] = 0;
        n = 0;
        v106 = v267;
        s2 = &v316;
        v327[1] = v105;
        v107 = a11[2];
        if ( !v107 )
          goto LABEL_169;
        v275 = v88;
        v108 = v104;
        v282 = v82;
        v109 = v267;
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
          v109 = (_QWORD *)v107;
          v107 = *(_QWORD *)(v107 + 16);
        }
        while ( v107 );
LABEL_158:
        v114 = v108;
        v53 = v110;
        v88 = v275;
        v106 = v109;
        v82 = v282;
        if ( v106 == v267 || v53 < v106[4] )
          goto LABEL_169;
        if ( v53 == v106[4] )
        {
          v115 = v106[6];
          v116 = v115;
          if ( (unsigned __int64)v105 <= v115 )
            v116 = (size_t)v105;
          if ( v116 && (v117 = memcmp(v114, (const void *)v106[5], v116)) != 0 )
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
            v118 = (const char *)v106;
            v106 = (_QWORD *)operator new(0xF8u);
            v106[4] = v326;
            v119 = v327[0];
            v120 = v327[0] == v328;
            v106[5] = v106 + 7;
            if ( v120 )
            {
              *(__m128i *)(v106 + 7) = _mm_loadu_si128(v328);
            }
            else
            {
              v106[5] = v119;
              v106[7] = v328[0].m128i_i64[0];
            }
            v121 = v327[1];
            v122 = a11;
            v106[9] = v106 + 11;
            v106[6] = v121;
            v327[0] = v328;
            v327[1] = nullptr;
            v106[10] = 0x400000000LL;
            v328[0].m128i_i8[0] = 0;
            v123 = sub_10F09A0(v122, v118, (__int64)(v106 + 4));
            v125 = v124;
            if ( v124 )
            {
              v126 = 1;
              if ( !v123 && v267 != v124 )
              {
                v148 = v124[4];
                if ( v106[4] >= v148 )
                {
                  v126 = 0;
                  if ( v106[4] == v148 )
                  {
                    v149 = v106[6];
                    v279 = v124;
                    v150 = (const void *)v124[5];
                    v151 = v124[6];
                    v283 = v151;
                    if ( v149 <= v151 )
                      v151 = v106[6];
                    v152 = sub_9B48C0((const void *)v106[5], v150, v151);
                    v125 = v279;
                    v126 = v152;
                    if ( v152 )
                    {
LABEL_253:
                      v126 = (unsigned int)v126 >> 31;
                    }
                    else
                    {
                      v153 = v149 - v283;
                      if ( v153 <= 0x7FFFFFFF )
                      {
                        if ( v153 >= (__int64)0xFFFFFFFF80000000LL )
                        {
                          LODWORD(v126) = v153;
                          goto LABEL_253;
                        }
                        v126 = 1;
                      }
                    }
                  }
                }
              }
              std::_Rb_tree_insert_and_rebalance(v126, v106, v125, v267);
              ++a11[5];
            }
            else
            {
              v146 = (_QWORD *)v106[9];
              if ( v106 + 11 != v146 )
              {
                v276 = v123;
                free(v146);
                v123 = v276;
              }
              v147 = (_QWORD *)v106[5];
              if ( v106 + 7 != v147 )
              {
                v277 = v123;
                operator delete(v147);
                v123 = v277;
              }
              v278 = v123;
              operator delete(v106);
              v106 = (_QWORD *)v278;
            }
          }
        }
        *((_DWORD *)v106 + 20) = 0;
        sub_10E18F0((__int64)(v106 + 9), v82, &v82[2].m128i_i8[8]);
        if ( v327[0] != v328 )
          operator delete(v327[0]);
        if ( s2 != &v316 )
          operator delete(s2);
        if ( (_WORD *)v312.m128i_i64[0] != v313 )
        {
          operator delete((void *)v312.m128i_i64[0]);
          v88 += 4;
          if ( v292 == v88 )
            goto LABEL_181;
          continue;
        }
        v88 += 4;
        if ( v292 == v88 )
        {
LABEL_181:
          v14 = v295;
          break;
        }
      }
    }
    sub_10E2760(&v326, (__int64)a5, a7, (size_t)a8, a12);
    *(_QWORD *)v329 = v53;
    *(_QWORD *)&v329[8] = (char *)v82 + 24;
    if ( v326 == &v327[1] )
    {
      *(__m128i *)&v329[24] = _mm_load_si128((const __m128i *)&v327[1]);
    }
    else
    {
      *(_QWORD *)&v329[8] = v326;
      *(void **)&v329[24] = v327[1];
    }
    v85 = v82;
    *(void **)&v329[16] = v327[0];
    v127 = sub_10F0C80(a11, (unsigned __int64 *)v82);
    v86 = *(void **)&v329[8];
    v128 = *(const __m128i **)v127;
    s = _mm_loadu_si128(v128);
    v308 = _mm_loadu_si128(v128 + 1);
    v309 = (char *)v128[2].m128i_i64[0];
    if ( *(__m128i **)&v329[8] != (__m128i *)&v82[1].m128i_u64[1] )
LABEL_185:
      operator delete(v86);
LABEL_186:
    if ( (*(_BYTE *)(a2 + 872) & 1) != 0 )
      goto LABEL_187;
LABEL_188:
    v129 = a10;
    v130 = *(_QWORD *)v288;
    if ( ptr.m128i_i32[2] )
    {
      (*(void (__fastcall **)(__int64, __m128i *, unsigned __int64, __m128i *, void **, __int64, __int64))(v130 + 80))(
        v288,
        a3,
        v53,
        &ptr,
        &p_ptr,
        v294,
        a10);
      goto LABEL_190;
    }
LABEL_270:
    (*(void (__fastcall **)(__int64, __m128i *, unsigned __int64, __m128i *, void **, __int64, __int64))(v130 + 72))(
      v288,
      a3,
      v53,
      &s,
      &p_ptr,
      v294,
      v129);
    goto LABEL_190;
  }
  if ( *(_DWORD *)(v53 + 12) != 67 )
  {
    v155 = 1;
    if ( v87 != 18 )
    {
      v155 = 0;
      if ( *(_DWORD *)(v53 + 60) )
        v155 = v296 ^ 1;
    }
    sub_22BC1E0(v329, v321, v322, 0);
    sub_10D3C60(&v299, *(_DWORD *)(v53 + 64), *(__int8 **)v329, *(size_t *)&v329[8], v155);
    if ( *(_BYTE **)v329 != &v329[16] )
      operator delete(*(void **)v329);
    v85 = a3;
    v156 = sub_10F1380(
             a2,
             a3->m128i_i64,
             v53,
             v290,
             a7,
             (__int64)a8,
             (__m128i)0LL,
             v296,
             a9,
             v299.m128i_i64[0],
             v299.m128i_i64[1]);
    v157 = *(_DWORD *)(v53 + 12);
    v308.m128i_i64[0] = v53;
    s.m128i_i64[0] = (__int64)v156;
    s.m128i_i32[2] = 1;
    v308.m128i_i32[2] = v157;
    v309 = v290;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v288 + 32LL))(v288) )
    {
      if ( !v299.m128i_i64[1] )
      {
        v85 = (__m128i *)(elf_gnu_hash_indexes + 1190);
        v217 = sub_10DE660(v294, 0x74Eu, 0x74Du);
        v218 = v217;
        if ( v217 )
        {
          v326 = v328;
          *(__m128i *)v327 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          if ( (unsigned __int8)sub_21B9810(v217, 1869) )
          {
            v219 = **(char ***)(v218 + 48);
            v220 = 0;
            if ( v219 )
              v220 = j__strlen(v219);
            v327[0] = nullptr;
            sub_A1FE50(&v326, v219, &v219[v220]);
            *(_WORD *)&v329[32] = 261;
            *(_QWORD *)v329 = v326;
            *(void **)&v329[8] = v327[0];
            if ( !(unsigned int)sub_228B230(v329, &v318) && v318.m128i_i8[0] )
            {
              v221 = (_BYTE *)s.m128i_i64[0];
              v222 = 0;
              if ( s.m128i_i64[0] )
                v222 = j__strlen((const char *)s.m128i_i64[0]);
              *(_QWORD *)v329 = &v329[24];
              *(__m128i *)&v329[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
              sub_A1FE50(v329, v221, &v221[v222]);
              LOWORD(v320) = 259;
              v318.m128i_i64[0] = (__int64)"json";
              sub_228A730(v329, &v318, 0);
              LOWORD(v320) = 257;
              v317 = 257;
              v313[8] = 257;
              v223 = sub_228AA60(*(_QWORD *)v329, *(_QWORD *)&v329[8], 0);
              v310[1] = v224;
              v311 = 261;
              v310[0] = v223;
              sub_228A3B0(&v326, v310, &v312, &s2, &v318);
              if ( *(_BYTE **)v329 != &v329[24] )
                free(*(void **)v329);
            }
          }
          else
          {
            v245 = sub_10DF140(v294, 0x132u);
            v246 = 0;
            if ( v245 )
            {
              v247 = **(char ***)(v245 + 48);
              v248 = 0;
              if ( v247 )
                v248 = j__strlen(v247);
              v327[0] = nullptr;
              sub_A1FE50(&v326, v247, &v247[v248]);
              v249 = 0;
              if ( v290 )
                v249 = j__strlen(v290);
              v250 = (_BYTE *)sub_228AA60(v290, v249, 0);
              sub_A1FE50(&v326, v250, &v250[v251]);
            }
            else
            {
              v252 = (_BYTE *)s.m128i_i64[0];
              if ( s.m128i_i64[0] )
                v246 = j__strlen((const char *)s.m128i_i64[0]);
              v327[0] = nullptr;
              sub_A1FE50(&v326, v252, &v252[v246]);
            }
            *(_QWORD *)v329 = "json";
            *(_WORD *)&v329[32] = 259;
            sub_228A730(&v326, v329, 0);
          }
          *(_WORD *)&v329[32] = 261;
          v225 = a3[5].m128i_i64[0];
          *(_QWORD *)v329 = v326;
          *(void **)&v329[8] = v327[0];
          v226 = sub_10DA6C0(v225, (__int64)v329);
          *(_QWORD *)v329 = v53;
          v227 = v226;
          v85 = (__m128i *)v329;
          *sub_10F1110((__int64)&a3[27].m128i_i64[1], (__int64 *)v329, v228, v229, v230, v231) = v226;
          *(_QWORD *)v329 = v53;
          *sub_10F1110((__int64)&a3[24].m128i_i64[1], (__int64 *)v329, v232, v233, v234, v235) = v227;
          if ( v326 != v328 )
            free(v326);
        }
      }
    }
    v86 = (void *)v299.m128i_i64[0];
    if ( (__int64 *)v299.m128i_i64[0] != &v300 )
      goto LABEL_185;
    goto LABEL_186;
  }
  v308.m128i_i64[0] = v53;
  v309 = v290;
  if ( (*(_BYTE *)(a2 + 872) & 1) == 0 )
  {
    v129 = a10;
    v130 = *(_QWORD *)v288;
    goto LABEL_270;
  }
LABEL_187:
  if ( (*(_BYTE *)(a2 + 920) & 2) != 0 )
    goto LABEL_188;
  v162 = sub_227D6D0(v86, v85);
  v163 = sub_995540(v162, "# \"");
  v164 = *(_QWORD *)(v288 + 24);
  *(_QWORD *)v329 = v82 + 1;
  sub_10D8CD0(v82, *(_BYTE **)(v164 + 16), *(_QWORD *)(v164 + 16) + *(_QWORD *)(v164 + 24));
  v165 = sub_227BF10(v163, *(_QWORD *)v329, *(_QWORD *)&v329[8]);
  v166 = *(_BYTE **)(v165 + 32);
  if ( (unsigned __int64)v166 >= *(_QWORD *)(v165 + 24) )
  {
    v165 = sub_227BA10(v165, 34);
  }
  else
  {
    *(_QWORD *)(v165 + 32) = v166 + 1;
    *v166 = 34;
  }
  v167 = sub_995540(v165, " - \"");
  v168 = sub_995540(v167, *(const char **)(v288 + 8));
  v169 = "\", inputs: [";
  sub_995540(v168, "\", inputs: [");
  v170 = *(_QWORD *)v329;
  if ( *(__m128i **)v329 != &v82[1] )
    operator delete(*(void **)v329);
  if ( (_DWORD)v334 )
  {
    v254 = v14;
    v171 = 0;
    v172 = 8 * (5LL * (unsigned int)((_DWORD)v334 - 1) + 5);
    while ( 1 )
    {
      v173 = sub_227D6D0(v170, v169);
      sub_10E2920(v82, (__int64)p_ptr + v171);
      v169 = *(char **)v329;
      sub_227BF10(v173, *(_QWORD *)v329, *(_QWORD *)&v329[8]);
      v170 = *(_QWORD *)v329;
      if ( *(__m128i **)v329 == &v82[1] )
      {
        v171 += 40;
        if ( v172 == v171 )
        {
LABEL_291:
          v14 = v254;
          break;
        }
      }
      else
      {
        operator delete(*(void **)v329);
        v171 += 40;
        if ( v172 == v171 )
          goto LABEL_291;
      }
      v174 = sub_227D6D0(v170, v169);
      v169 = ", ";
      v170 = v174;
      sub_995540(v174, ", ");
    }
  }
  if ( !ptr.m128i_i32[2] )
  {
    v175 = sub_227D6D0(v170, v169);
    v176 = sub_995540(v175, "], output: ");
    sub_10E2920(v82, (__int64)&s);
    v177 = sub_227BF10(v176, *(_QWORD *)v329, *(_QWORD *)&v329[8]);
    sub_995540(v177, "\n");
    if ( *(__m128i **)v329 != &v82[1] )
      operator delete(*(void **)v329);
    goto LABEL_190;
  }
  v209 = sub_227D6D0(v170, v169);
  v210 = "], outputs: [";
  v211 = v209;
  sub_995540(v209, "], outputs: [");
  if ( !ptr.m128i_i32[2] )
    goto LABEL_363;
  v255 = v14;
  v212 = 0;
  v213 = 8 * (5LL * (unsigned int)(ptr.m128i_i32[2] - 1) + 5);
  while ( 2 )
  {
    v214 = sub_227D6D0(v211, v210);
    sub_10E2920(v82, v212 + ptr.m128i_i64[0]);
    v210 = *(char **)v329;
    sub_227BF10(v214, *(_QWORD *)v329, *(_QWORD *)&v329[8]);
    v211 = *(_QWORD *)v329;
    if ( *(__m128i **)v329 != &v82[1] )
    {
      operator delete(*(void **)v329);
      v212 += 40;
      if ( v213 == v212 )
        break;
      goto LABEL_360;
    }
    v212 += 40;
    if ( v213 != v212 )
    {
LABEL_360:
      v215 = sub_227D6D0(v211, v210);
      v210 = ", ";
      v211 = v215;
      sub_995540(v215, ", ");
      continue;
    }
    break;
  }
  v14 = v255;
LABEL_363:
  v216 = sub_227D6D0(v211, v210);
  sub_995540(v216, "] \n");
LABEL_190:
  v131 = _mm_load_si128(&s);
  v132 = _mm_load_si128(&v308);
  *(_QWORD *)&v329[32] = v309;
  *(__m128i *)v329 = v131;
  *(_QWORD *)v14 = v293;
  *(_QWORD *)(v14 + 8) = 0x400000000LL;
  *(__m128i *)&v329[16] = v132;
  sub_10E18F0(v14, v82, &v82[2].m128i_i8[8]);
  if ( (__m128i *)ptr.m128i_i64[0] != &v340 )
    free((void *)ptr.m128i_i64[0]);
  sub_10DAB00(&v297);
  if ( v321 != v323 )
    operator delete(v321);
  if ( p_ptr != &v335 )
    free(p_ptr);
LABEL_196:
  if ( v304 != v306 )
    free(v304);
  v19 = v301;
  if ( v301 != (__int64 *)v303 )
LABEL_6:
    free(v19);
LABEL_7:
  if ( src != v332 )
    free(src);
  v298[0] = &off_2BEB1D8;
  sub_22338A0(v298);
  return v14;
}
