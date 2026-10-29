void __fastcall sub_65C9F0(__int64 *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 *v6; // r14
  unsigned __int64 v7; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // al
  __int64 v13; // r12
  __int64 v14; // rax
  __m128i v15; // xmm7
  __m128i *v16; // r12
  __m128 v17; // xmm4
  char *v18; // r15
  __m128i *v19; // rax
  __int64 v20; // rsi
  __m128 v21; // xmm0
  __m128i *v22; // rdx
  __int64 v23; // xmm3_8
  __int64 m128i_i64; // r8
  __int64 v25; // rcx
  __m128i v26; // xmm6
  __m128i v27; // xmm7
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // esi
  char v31; // al
  __m128i *v32; // r15
  __int128 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rbp
  __m128i v36; // xmm4
  int v37; // eax
  unsigned int *v38; // r14
  unsigned __int64 v39; // rax
  __int64 *v40; // rcx
  __m128i v41; // xmm1
  __int64 *v42; // rcx
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // r13
  __m128 v47; // xmm6
  __m128i v48; // kr00_16
  __m128i v49; // xmm1
  __int64 *v50; // rcx
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  void **v54; // rdi
  __m128i v55; // xmm7
  __int64 *v56; // rcx
  __m128i v57; // xmm0
  __m128 v58; // xmm6
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 *v64; // rax
  __int64 *v65; // rax
  __m128i v66; // xmm3
  __int16 v67; // ax
  __m128 v68; // xmm3
  __m128i v69; // xmm0
  unsigned __int64 v70; // xmm6_8
  __int64 v71; // r14
  __m128i v72; // xmm0
  unsigned __int64 v73; // rbp
  __int64 v74; // rax
  __int64 v75; // r13
  __int64 v76; // rax
  __m128i v77; // xmm0
  __int64 v78; // rax
  _BYTE *v79; // rdi
  size_t v80; // r12
  _BYTE *v81; // r15
  __int64 v82; // rax
  __m128i *v83; // rbx
  __int128 v84; // rax
  __int64 v85; // r14
  __int64 v86; // r15
  unsigned __int64 v87; // rsi
  __int64 *v88; // rcx
  __int64 *v89; // rbx
  __int64 *v90; // rdx
  __int64 v91; // rax
  _BYTE *v92; // rax
  void *v93; // rbp
  void **v94; // r13
  __int64 *v95; // r14
  void **v96; // rbx
  void **v97; // rdi
  void *v98; // rbp
  void **v99; // r13
  __int64 *v100; // r14
  void **v101; // rbx
  void **v102; // rdi
  __int64 *v103; // rcx
  __m128i *v104; // rcx
  void (__fastcall ***v105)(_QWORD); // rdi
  void (__fastcall **v106)(_QWORD); // rax
  __int64 v107; // rdi
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // rbp
  __m128i v111; // xmm7
  __m128i v112; // xmm0
  __m128i v113; // xmm0
  __int64 v114; // rdx
  __int64 v115; // rbx
  __m128i v116; // xmm6
  __int64 v117; // rdx
  __int64 v118; // r14
  __m128i v119; // xmm0
  __int64 v120; // r15
  __m128i v121; // xmm0
  __m128i v122; // xmm0
  char v123; // bl
  __m128i v124; // xmm3
  __m128i *v125; // rsi
  __m128i v126; // xmm0
  __m128i v127; // xmm0
  __m128i v128; // xmm0
  void (__fastcall ***v129)(_QWORD); // rdi
  __int64 v130; // rdi
  __int64 v131; // rax
  __m128i v132; // xmm6
  __m128i v133; // xmm0
  __int64 v134; // rax
  __int64 *v135; // rbx
  unsigned __int64 v136; // rdi
  char *v137; // rdx
  char *v138; // rbx
  unsigned int v139; // eax
  unsigned int v140; // edx
  __int64 v141; // rax
  __m128 v142; // [rsp+90h] [rbp-858h] BYREF
  __m128 *v143; // [rsp+A0h] [rbp-848h]
  __m128i *v144; // [rsp+A8h] [rbp-840h]
  __m128i v145; // [rsp+B0h] [rbp-838h] BYREF
  __m128 v146; // [rsp+C0h] [rbp-828h] BYREF
  __m128i *v147; // [rsp+D0h] [rbp-818h]
  __m128i *v148; // [rsp+D8h] [rbp-810h]
  __m128i *v149; // [rsp+E0h] [rbp-808h]
  __int64 *v150; // [rsp+E8h] [rbp-800h]
  __int64 *v151; // [rsp+F0h] [rbp-7F8h]
  unsigned __int64 v152; // [rsp+F8h] [rbp-7F0h]
  _BYTE *v153; // [rsp+100h] [rbp-7E8h]
  __int64 v154; // [rsp+108h] [rbp-7E0h]
  __m128i v155; // [rsp+110h] [rbp-7D8h] BYREF
  char *v156; // [rsp+120h] [rbp-7C8h]
  char v157; // [rsp+12Fh] [rbp-7B9h]
  __int64 *v158; // [rsp+130h] [rbp-7B8h]
  unsigned __int64 v159; // [rsp+138h] [rbp-7B0h]
  void **p_ptr; // [rsp+140h] [rbp-7A8h]
  __int64 *v161; // [rsp+148h] [rbp-7A0h]
  __int64 *v162; // [rsp+150h] [rbp-798h]
  __int64 v163; // [rsp+158h] [rbp-790h]
  __int64 *v164; // [rsp+160h] [rbp-788h]
  void **v165; // [rsp+168h] [rbp-780h]
  _BYTE *v166; // [rsp+170h] [rbp-778h]
  _BYTE *v167; // [rsp+178h] [rbp-770h]
  _BYTE *v168; // [rsp+180h] [rbp-768h]
  __int64 *v169; // [rsp+188h] [rbp-760h]
  __int64 *v170; // [rsp+190h] [rbp-758h]
  __int64 *v171; // [rsp+198h] [rbp-750h]
  __m128i v172; // [rsp+1A0h] [rbp-748h]
  __m128i v173; // [rsp+1B0h] [rbp-738h] BYREF
  __int64 v174; // [rsp+1C0h] [rbp-728h]
  __int64 v175; // [rsp+1C8h] [rbp-720h]
  __int64 v176; // [rsp+1D0h] [rbp-718h]
  __int64 v177; // [rsp+1D8h] [rbp-710h]
  __int64 v178; // [rsp+1E0h] [rbp-708h]
  __int64 v179; // [rsp+1E8h] [rbp-700h]
  __int64 v180; // [rsp+1F0h] [rbp-6F8h] BYREF
  __int64 *v181; // [rsp+1F8h] [rbp-6F0h]
  __int64 *v182; // [rsp+200h] [rbp-6E8h]
  __m128i v183; // [rsp+210h] [rbp-6D8h] BYREF
  __m128i *v184; // [rsp+220h] [rbp-6C8h]
  __m128i v185; // [rsp+230h] [rbp-6B8h] BYREF
  __m128i *v186; // [rsp+240h] [rbp-6A8h]
  _BYTE v187[32]; // [rsp+250h] [rbp-698h] BYREF
  __int64 v188; // [rsp+270h] [rbp-678h] BYREF
  char v189; // [rsp+280h] [rbp-668h]
  _BYTE v190[32]; // [rsp+290h] [rbp-658h] BYREF
  _BYTE v191[32]; // [rsp+2B0h] [rbp-638h] BYREF
  _BYTE v192[32]; // [rsp+2D0h] [rbp-618h] BYREF
  _QWORD v193[4]; // [rsp+2F0h] [rbp-5F8h] BYREF
  __m128i v194; // [rsp+310h] [rbp-5D8h] BYREF
  __int64 v195; // [rsp+320h] [rbp-5C8h]
  _BYTE v196[32]; // [rsp+330h] [rbp-5B8h] BYREF
  _BYTE v197[32]; // [rsp+350h] [rbp-598h] BYREF
  __int64 v198[4]; // [rsp+370h] [rbp-578h] BYREF
  _BYTE v199[32]; // [rsp+390h] [rbp-558h] BYREF
  void *v200; // [rsp+3B0h] [rbp-538h] BYREF
  void **v201; // [rsp+3B8h] [rbp-530h]
  __int64 v202; // [rsp+3C0h] [rbp-528h]
  void *v203; // [rsp+3D0h] [rbp-518h] BYREF
  void **v204; // [rsp+3D8h] [rbp-510h]
  __int64 v205; // [rsp+3E0h] [rbp-508h]
  void *v206; // [rsp+3F0h] [rbp-4F8h] BYREF
  __int64 v207; // [rsp+3F8h] [rbp-4F0h]
  __int128 v208; // [rsp+400h] [rbp-4E8h] BYREF
  __int64 v209; // [rsp+410h] [rbp-4D8h]
  __int64 v210; // [rsp+418h] [rbp-4D0h]
  __int64 v211; // [rsp+420h] [rbp-4C8h]
  __m128i v212; // [rsp+430h] [rbp-4B8h] BYREF
  __m128i v213; // [rsp+440h] [rbp-4A8h] BYREF
  __m128i v214; // [rsp+450h] [rbp-498h] BYREF
  __int64 v215; // [rsp+460h] [rbp-488h]
  void *ptr; // [rsp+470h] [rbp-478h] BYREF
  __int64 v217; // [rsp+478h] [rbp-470h]
  _BYTE v218[32]; // [rsp+488h] [rbp-460h] BYREF
  __m128i v219; // [rsp+4A8h] [rbp-440h] BYREF
  __m128i v220; // [rsp+4B8h] [rbp-430h] BYREF
  __m128i v221; // [rsp+4C8h] [rbp-420h] BYREF
  __int16 v222; // [rsp+4D8h] [rbp-410h]
  char v223; // [rsp+4DAh] [rbp-40Eh]
  void *v224; // [rsp+4E0h] [rbp-408h] BYREF
  __m128i v225; // [rsp+4E8h] [rbp-400h]
  _BYTE v226[32]; // [rsp+4F8h] [rbp-3F0h] BYREF
  __m128i v227; // [rsp+518h] [rbp-3D0h] BYREF
  __m128i v228; // [rsp+528h] [rbp-3C0h] BYREF
  __m128i v229; // [rsp+538h] [rbp-3B0h] BYREF
  __int16 v230; // [rsp+548h] [rbp-3A0h]
  char v231; // [rsp+54Ah] [rbp-39Eh]
  _BYTE v232[24]; // [rsp+550h] [rbp-398h] BYREF
  _BYTE v233[32]; // [rsp+568h] [rbp-380h] BYREF
  __m128i v234; // [rsp+588h] [rbp-360h] BYREF
  __m128i v235; // [rsp+598h] [rbp-350h] BYREF
  __m128i v236; // [rsp+5A8h] [rbp-340h] BYREF
  __int16 v237; // [rsp+5B8h] [rbp-330h]
  char v238; // [rsp+5BAh] [rbp-32Eh]
  _BYTE v239[24]; // [rsp+5C0h] [rbp-328h] BYREF
  _BYTE v240[32]; // [rsp+5D8h] [rbp-310h] BYREF
  __m128i v241; // [rsp+5F8h] [rbp-2F0h] BYREF
  __m128i v242; // [rsp+608h] [rbp-2E0h] BYREF
  __m128i v243; // [rsp+618h] [rbp-2D0h] BYREF
  __int16 v244; // [rsp+628h] [rbp-2C0h]
  char v245; // [rsp+62Ah] [rbp-2BEh]
  void *v246; // [rsp+630h] [rbp-2B8h] BYREF
  __m128i si128; // [rsp+638h] [rbp-2B0h]
  _BYTE v248[136]; // [rsp+648h] [rbp-2A0h] BYREF
  __m128 v249; // [rsp+6D0h] [rbp-218h] BYREF
  __m128i *v250; // [rsp+6E0h] [rbp-208h]
  char v251[8]; // [rsp+730h] [rbp-1B8h] BYREF
  int v252; // [rsp+738h] [rbp-1B0h]
  __m128i v253; // [rsp+7C0h] [rbp-128h] BYREF
  __int64 v254[10]; // [rsp+7D0h] [rbp-118h] BYREF
  _BYTE *v255; // [rsp+820h] [rbp-C8h] BYREF
  __int64 v256; // [rsp+828h] [rbp-C0h]
  _BYTE v257[184]; // [rsp+830h] [rbp-B8h] BYREF

  v6 = (__int64 *)&byte_3B9466E;
  v7 = 0;
  v10 = *(_QWORD *)(a2 + 40);
  if ( (v10 & 7) == 0 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v7 = v11;
    if ( v11 )
    {
      v38 = *(unsigned int **)(v11 + 16);
      v7 = *v38;
      v6 = (__int64 *)(v38 + 4);
    }
  }
  v153 = v248;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v246 = v248;
  sub_11240B0(a2, &v246);
  sub_CAE550(&v180, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
  v12 = sub_790090(a2);
  v184 = nullptr;
  LOBYTE(v156) = v12;
  v13 = sub_63DC30(a1, a2);
  if ( v13 )
  {
    v14 = sub_6BB140(*a1, a2);
    v143 = &v249;
    sub_AA92F0(&v249, v13, *(_QWORD *)(*a1 + 2152), v14);
    v15 = _mm_load_si128((const __m128i *)&v249);
    v254[0] = 0;
    v184 = v250;
    v145 = v15;
    v250 = nullptr;
    v253 = 0;
    v249 = 0;
    sub_646A80(v253.m128i_i64);
    sub_646A80((__int64 *)&v249);
  }
  else
  {
    v143 = &v249;
    v145 = 0;
  }
  v149 = (__m128i *)v239;
  sub_FD5520(v239, a2);
  v16 = *(__m128i **)&v239[16];
  v142 = (__m128)_mm_load_si128((const __m128i *)v239);
  v18 = (char *)_mm_movehl_ps(v17, v142).m128_u64[0];
  v250 = *(__m128i **)&v239[16];
  v249 = v142;
  memset(v239, 0, sizeof(v239));
  v144 = (__m128i *)v142.m128_u64[0];
  if ( (char *)v142.m128_u64[0] == v18 )
  {
    v16 = nullptr;
    v19 = nullptr;
    v18 = nullptr;
    v142 = 0;
  }
  else
  {
    v253 = 0;
    v249 = 0;
    v254[0] = 0;
    v250 = nullptr;
    sub_6441A0(v253.m128i_i64);
    v19 = v144;
  }
  v144 = v19;
  sub_6441A0((__int64 *)v143);
  v20 = *(_QWORD *)(a2 + 48);
  v150 = (__int64 *)v232;
  sub_FD18C0(v232, v20);
  v21 = (__m128)_mm_load_si128((const __m128i *)v232);
  v22 = *(__m128i **)&v232[16];
  memset(v232, 0, sizeof(v232));
  v23 = _mm_movehl_ps(a6, v21).m128_u64[0];
  m128i_i64 = v21.m128_u64[0];
  v25 = v23;
  v250 = v22;
  v249 = v21;
  if ( v23 == v21.m128_u64[0] )
  {
    v147 = &v253;
    v148 = &v185;
  }
  else if ( v18 == (char *)v144 )
  {
    v132 = _mm_load_si128((const __m128i *)&v142);
    v146 = v21;
    v254[0] = (__int64)v16;
    v147 = &v253;
    v144 = v22;
    v250 = nullptr;
    v253 = v132;
    v249 = 0;
    sub_6441A0(v253.m128i_i64);
    v133 = _mm_load_si128((const __m128i *)&v146);
    v16 = v144;
    v148 = &v185;
    v142 = (__m128)v133;
  }
  else
  {
    if ( *((_DWORD *)v18 - 12) == 10 && *(_DWORD *)(v21.m128_u64[0] + 32) == 10 )
    {
      v146.m128_u64[0] = v23;
      v144 = (__m128i *)(v18 - 80);
      v147 = (__m128i *)v21.m128_u64[0];
      std::string::reserve();
      if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *((_QWORD *)v18 - 9)) < *(_QWORD *)(v21.m128_u64[0] + 8) )
        std::__throw_length_error("basic_string::append");
      v144 = v147;
      v147 = (__m128i *)v146.m128_u64[0];
      std::string::_M_append();
      v25 = v146.m128_u64[0];
      m128i_i64 = (__int64)v144[5].m128i_i64;
    }
    v26 = _mm_load_si128((const __m128i *)&v142);
    v186 = v16;
    v148 = &v185;
    v185 = v26;
    sub_641BC0(v185.m128i_i64, v18, m128i_i64, v25);
    v27 = _mm_load_si128(&v185);
    v16 = v186;
    v147 = &v253;
    v142 = (__m128)v27;
  }
  sub_6441A0((__int64 *)v143);
  sub_6441A0(v150);
  sub_6441A0(v149->m128i_i64);
  v146.m128_u64[0] = (unsigned __int64)v187;
  sub_FCD270(v187, a2);
  v28 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v28 = *(_QWORD *)v28;
  v29 = *a1;
  v30 = *(_DWORD *)(a2 + 24);
  v31 = *(_BYTE *)(v28 + 8) & 0x7F;
  v144 = (__m128i *)a1[1];
  if ( v31 != 57 )
  {
    v157 = 0;
    if ( v30 )
    {
      v37 = sub_CAE830(*(_QWORD *)(v29 + 2152));
      v157 = v37 != 3 && v37 != 0;
    }
    sub_648F60((__int64)v143, (_QWORD *)a2);
    p_ptr = &ptr;
    sub_766420(&ptr, a2);
    sub_63E5A0((__int64)&v212, (__int64)a1, a2);
    v32 = v144;
    v152 = v7;
    v151 = v6;
    *(_QWORD *)&v33 = sub_FC8E80(v144, v246, si128.m128i_i64[0]);
    v34 = *((_QWORD *)&v33 + 1);
    v35 = v33;
    v253 = (__m128i)v33;
    v254[0] = 0;
    sub_64F120((__int64)&v194, (__int64)v32[10].m128i_i64, v147, v254);
    v163 = v194.m128i_i64[0];
    if ( v254[0] )
      (**(void (__fastcall ***)(__int64))v254[0])(v254[0]);
    if ( !(_BYTE)v195 )
      goto LABEL_20;
    v39 = sub_63DDF0((__int64)v144, 632, 4);
    v253.m128i_i64[0] = (__int64)v254;
    v40 = (__int64 *)v39;
    v154 = 0x100000000LL;
    v253.m128i_i64[1] = 0x100000000LL;
    if ( v249.m128_i32[2] )
    {
      v155.m128i_i64[0] = v39;
      sub_649B50((__int64)v147, (__int64)v143);
      v40 = (__int64 *)v155.m128i_i64[0];
    }
    v255 = v257;
    v256 = v154;
    if ( v252 )
    {
      v155.m128i_i64[0] = (__int64)v40;
      sub_64AB70((__int64)&v255, (__int64)v251);
      v40 = (__int64 *)v155.m128i_i64[0];
    }
    v162 = v40;
    v158 = (__int64 *)v196;
    sub_644390((__int64)v196, (__int64 *)v146.m128_u64[0]);
    v41 = _mm_load_si128((const __m128i *)&v142);
    v161 = (__int64 *)v197;
    v186 = v16;
    v185 = v41;
    sub_644390((__int64)v197, v148->m128i_i64);
    v165 = &v224;
    v42 = v162;
    v167 = v226;
    v224 = v226;
    v155 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v225 = v155;
    if ( v217 )
    {
      sub_63DE60((__int64)v165, (unsigned __int8 **)p_ptr);
      v42 = v162;
    }
    p_ptr = (void **)v42;
    v43 = _mm_loadu_si128(&v219);
    v230 = v222;
    v227 = v43;
    v44 = _mm_loadu_si128(&v220);
    v231 = v223;
    v228 = v44;
    v229 = _mm_loadu_si128(&v221);
    v175 = sub_FC8E80(v144, v151, v152);
    v46 = v45;
    v47 = _mm_loadh_ps((const double *)&v180);
    v48 = v212;
    v174 = v213.m128i_i64[0];
    v173 = (__m128i)v47;
    v172.m128i_i64[1] = v213.m128i_i64[1];
    v171 = (__int64 *)v214.m128i_i64[1];
    v172.m128i_i64[0] = v214.m128i_i64[0];
    v169 = v181;
    v170 = v182;
    v162 = (__int64 *)v199;
    sub_644390((__int64)v199, v158);
    v151 = v198;
    sub_644390((__int64)v198, v161);
    v49 = _mm_load_si128(&v155);
    v168 = v233;
    v50 = (__int64 *)p_ptr;
    *(_QWORD *)v232 = v233;
    *(__m128i *)&v232[8] = v49;
    if ( v225.m128i_i64[0] )
    {
      sub_63DE60((__int64)v150, (unsigned __int8 **)v165);
      v50 = (__int64 *)p_ptr;
    }
    v176 = (__int64)v50;
    v51 = _mm_loadu_si128(&v227);
    v237 = v230;
    v234 = v51;
    v52 = _mm_loadu_si128(&v228);
    v238 = v231;
    p_ptr = (void **)&v208;
    v206 = &v208;
    v235 = v52;
    v53 = _mm_loadu_si128(&v229);
    v165 = &v203;
    v236 = v53;
    strcpy((char *)&v208, "public");
    v207 = 6;
    sub_644390((__int64)&v203, v162);
    v54 = &v200;
    v164 = (__int64 *)&v200;
    sub_644390((__int64)&v200, v151);
    v55 = _mm_load_si128(&v155);
    v166 = v240;
    v56 = (__int64 *)v176;
    *(_QWORD *)v239 = v240;
    *(__m128i *)&v239[8] = v55;
    if ( *(_QWORD *)&v232[8] )
    {
      v54 = (void **)v149;
      sub_63DE60((__int64)v149, (unsigned __int8 **)v150);
      v56 = (__int64 *)v176;
    }
    v57 = _mm_loadu_si128(&v234);
    v58 = (__m128)_mm_load_si128(&v173);
    v244 = v237;
    v241 = v57;
    v59 = _mm_loadu_si128(&v235);
    v245 = v238;
    v242 = v59;
    v243 = _mm_loadu_si128(&v236);
    *v56 = (__int64)&off_49F4B08;
    v60 = v175;
    v56[1] = v35;
    v56[3] = v60;
    v61 = v174;
    v56[2] = v34;
    v56[7] = v61;
    v62 = v172.m128i_i64[1];
    v56[4] = v46;
    v56[8] = v62;
    v63 = v172.m128i_i64[0];
    v56[5] = v48.m128i_i64[0];
    v56[9] = v63;
    v64 = v171;
    v56[6] = v48.m128i_i64[1];
    v56[10] = (__int64)v64;
    v65 = v169;
    *(__m128 *)(v56 + 11) = v58;
    v56[13] = (__int64)v65;
    v56[14] = (__int64)v170;
    v66 = _mm_load_si128(&v155);
    v56[15] = (__int64)(v56 + 18);
    *((__m128i *)v56 + 8) = v66;
    if ( *(_QWORD *)&v239[8] )
    {
      v54 = (void **)(v56 + 15);
      v150 = v56;
      sub_63DE60((__int64)(v56 + 15), (unsigned __int8 **)v149);
      v56 = v150;
    }
    v67 = v244;
    v68 = (__m128)_mm_load_si128(&v145);
    *((__m128i *)v56 + 11) = _mm_loadu_si128(&v241);
    v69 = _mm_loadu_si128(&v242);
    *((_WORD *)v56 + 112) = v67;
    v70 = _mm_movehl_ps(v58, v68).m128_u64[0];
    LOBYTE(v67) = v245;
    v71 = v68.m128_u64[0];
    *((__m128i *)v56 + 12) = v69;
    v72 = _mm_loadu_si128(&v243);
    *((_BYTE *)v56 + 226) = v67;
    LOBYTE(v67) = (_BYTE)v156;
    *((__m128i *)v56 + 13) = v72;
    *((_BYTE *)v56 + 232) = v67;
    v56[32] = 0;
    *((_OWORD *)v56 + 15) = 0;
    v73 = v70 - v68.m128_u64[0];
    if ( v70 == v68.m128_u64[0] )
    {
      v75 = 0;
    }
    else
    {
      if ( v73 > 0x7FFFFFFFFFFFFFD0LL )
        sub_555886(v54);
      v149 = (__m128i *)v56;
      v74 = operator new(v70 - v68.m128_u64[0]);
      v56 = (__int64 *)v149;
      v75 = v74;
    }
    v56[32] = v75 + v73;
    *((__m128i *)v56 + 15) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v75, (__m128i)(unsigned __int64)v75);
    if ( v70 == v68.m128_u64[0] )
    {
LABEL_62:
      v149 = (__m128i *)v56;
      sub_644390((__int64)(v56 + 33), v164);
      v87 = (unsigned __int64)v165;
      sub_644390((__int64)v149[18].m128i_i64, (__int64 *)v165);
      v88 = (__int64 *)v149;
      v89 = (__int64 *)p_ptr;
      v90 = v149[21].m128i_i64;
      v149[19].m128i_i8[8] = v157;
      v88[40] = (__int64)v90;
      if ( v206 == v89 )
      {
        v91 = v207;
        v87 = v207 + 1;
        if ( (unsigned int)(v207 + 1) >= 8 )
        {
          *v90 = v208;
          v135 = (__int64 *)p_ptr;
          *(__int64 *)((char *)v90 + (unsigned int)v87 - 8) = *(__int64 *)((char *)p_ptr + (unsigned int)v87 - 8);
          v136 = (unsigned __int64)(v90 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v137 = (char *)v90 - v136;
          v138 = (char *)((char *)v135 - v137);
          if ( (((_DWORD)v87 + (_DWORD)v137) & 0xFFFFFFF8) >= 8 )
          {
            v139 = (v87 + (_DWORD)v137) & 0xFFFFFFF8;
            v140 = 0;
            do
            {
              v87 = v140;
              v140 += 8;
              *(_QWORD *)(v136 + v87) = *(_QWORD *)&v138[v87];
            }
            while ( v140 < v139 );
          }
          v91 = v207;
        }
        else if ( (v87 & 4) != 0 )
        {
          *(_DWORD *)v90 = v208;
          v141 = (unsigned int)v87;
          v87 = *(unsigned int *)((char *)p_ptr + (unsigned int)v87 - 4);
          *(_DWORD *)((char *)v90 + v141 - 4) = v87;
          v91 = v207;
        }
        else if ( (_DWORD)v207 != -1 )
        {
          *(_BYTE *)v90 = v208;
          v91 = v207;
          if ( (v87 & 2) != 0 )
          {
            v134 = (unsigned int)v87;
            v87 = *(unsigned __int16 *)((char *)p_ptr + (unsigned int)v87 - 2);
            *(_WORD *)((char *)v90 + v134 - 2) = v87;
            v91 = v207;
          }
        }
      }
      else
      {
        v88[40] = (__int64)v206;
        v88[42] = v208;
        v91 = v207;
      }
      v88[41] = v91;
      v207 = 0;
      v206 = p_ptr;
      LOBYTE(v208) = 0;
      v88[44] = 0x1300000013LL;
      v92 = v166;
      v88[45] = 0;
      if ( *(_BYTE **)v239 != v92 )
      {
        v149 = (__m128i *)v88;
        free(*(void **)v239);
        v88 = (__int64 *)v149;
      }
      v93 = v200;
      v94 = v201;
      v95 = v88;
      v96 = (void **)v200;
      if ( v201 != v200 )
      {
        do
        {
          v97 = (void **)v96[5];
          if ( v97 != v96 + 7 )
          {
            v87 = (unsigned __int64)v96[7] + 1;
            operator delete(v97, v87);
          }
          if ( *v96 != v96 + 2 )
          {
            v87 = (unsigned __int64)v96[2] + 1;
            operator delete(*v96, v87);
          }
          v96 += 10;
        }
        while ( v94 != v96 );
        v88 = v95;
      }
      if ( v93 )
      {
        v149 = (__m128i *)v88;
        v87 = v202 - (_QWORD)v93;
        operator delete(v93, v202 - (_QWORD)v93);
        v88 = (__int64 *)v149;
      }
      v98 = v203;
      v99 = v204;
      v100 = v88;
      v101 = (void **)v203;
      if ( v204 != v203 )
      {
        do
        {
          v102 = (void **)v101[5];
          if ( v102 != v101 + 7 )
          {
            v87 = (unsigned __int64)v101[7] + 1;
            operator delete(v102, v87);
          }
          if ( *v101 != v101 + 2 )
          {
            v87 = (unsigned __int64)v101[2] + 1;
            operator delete(*v101, v87);
          }
          v101 += 10;
        }
        while ( v99 != v101 );
        v88 = v100;
      }
      if ( v98 )
      {
        v149 = (__m128i *)v88;
        v87 = v205 - (_QWORD)v98;
        operator delete(v98, v205 - (_QWORD)v98);
        v88 = (__int64 *)v149;
      }
      if ( v206 != p_ptr )
      {
        v149 = (__m128i *)v88;
        v87 = v208 + 1;
        operator delete(v206, v208 + 1);
        v88 = (__int64 *)v149;
      }
      *((_DWORD *)v88 + 92) = 19;
      *(_OWORD *)(v88 + 47) = 0;
      *v88 = (__int64)&off_4992FF0;
      if ( *(_BYTE **)v232 != v168 )
      {
        v149 = (__m128i *)v88;
        free(*(void **)v232);
        v88 = (__int64 *)v149;
      }
      v149 = (__m128i *)v88;
      sub_6441A0(v151);
      sub_6441A0(v162);
      v103 = (__int64 *)v149;
      v149->m128i_i64[0] = (__int64)&off_49F4B78;
      v103[49] = (__int64)(v103 + 51);
      v103[50] = v154;
      if ( v253.m128i_i32[2] )
      {
        v87 = (unsigned __int64)v147;
        sub_64A2B0((__int64)(v103 + 49), (__int64)v147);
        v103 = (__int64 *)v149;
      }
      v103[61] = (__int64)(v103 + 63);
      v103[62] = v154;
      if ( (_DWORD)v256 )
      {
        v87 = (unsigned __int64)&v255;
        v149 = (__m128i *)v103;
        sub_64B430((__int64)(v103 + 61), (__int64 *)&v255);
        v103 = (__int64 *)v149;
      }
      if ( v224 != v167 )
      {
        v149 = (__m128i *)v103;
        free(v224);
        v103 = (__int64 *)v149;
      }
      v149 = (__m128i *)v103;
      sub_6441A0(v161);
      sub_6441A0(v158);
      sub_6469C0((__int64)&v255);
      sub_646940((__int64)v147);
      v104 = v149;
      v105 = *(void (__fastcall ****)(_QWORD))(v163 + 16);
      *(_QWORD *)(v163 + 16) = v149;
      if ( v105 )
      {
        v106 = *v105;
        v147 = v104;
        (*v106)(v105);
        v104 = v147;
      }
      v107 = v104[5].m128i_i64[1];
      if ( v107
        && (unsigned int)(*(_DWORD *)(v107 + 356) - 2) <= 0x13
        && (v147 = v104, v108 = sub_FC8C50(v107, v87), v104 = v147, v108) )
      {
        sub_FC8D50(v108, v147);
      }
      else
      {
        sub_64B900((__int64)&v144[11].m128i_i64[1], (__int64)v104);
      }
LABEL_20:
      if ( ptr != v218 )
        free(ptr);
      sub_6469C0((__int64)v251);
      sub_646940((__int64)v143);
      goto LABEL_23;
    }
    v149 = v16;
    v150 = v56;
    while ( 1 )
    {
      v79 = (_BYTE *)(v75 + 16);
      *(_QWORD *)v75 = v75 + 16;
      v80 = *(_QWORD *)(v71 + 8);
      v81 = *(_BYTE **)v71;
      v193[0] = v80;
      if ( v80 > 0xF )
        break;
      if ( v80 == 1 )
      {
        *(_BYTE *)(v75 + 16) = *v81;
        goto LABEL_45;
      }
      if ( v80 )
        goto LABEL_48;
LABEL_45:
      *(_QWORD *)(v75 + 8) = v80;
      v71 += 80;
      v75 += 80;
      v79[v80] = 0;
      v76 = *(_QWORD *)(v71 - 32);
      *(__m128i *)(v75 - 48) = _mm_loadu_si128((const __m128i *)(v71 - 48));
      v77 = _mm_loadu_si128((const __m128i *)(v71 - 24));
      *(_QWORD *)(v75 - 32) = v76;
      v78 = *(_QWORD *)(v71 - 8);
      *(__m128i *)(v75 - 24) = v77;
      *(_QWORD *)(v75 - 8) = v78;
      if ( v70 == v71 )
      {
        v56 = v150;
        v16 = v149;
        v150[31] = v75;
        goto LABEL_62;
      }
    }
    v82 = std::string::_M_create();
    *(_QWORD *)v75 = v82;
    v79 = (_BYTE *)v82;
    *(_QWORD *)(v75 + 16) = v193[0];
LABEL_48:
    memcpy(v79, v81, v80);
    v80 = v193[0];
    v79 = *(_BYTE **)v75;
    goto LABEL_45;
  }
  v157 = sub_63DE20(v29, v30);
  sub_648F60((__int64)v143, (_QWORD *)a2);
  v151 = v198;
  sub_643500(v198, a2);
  p_ptr = &ptr;
  sub_766420(&ptr, a2);
  sub_63E5A0((__int64)&v206, (__int64)a1, a2);
  v83 = v144;
  v158 = v6;
  v159 = v7;
  *(_QWORD *)&v84 = sub_FC8E80(v144, v246, si128.m128i_i64[0]);
  v85 = *((_QWORD *)&v84 + 1);
  v86 = v84;
  v253 = (__m128i)v84;
  v254[0] = 0;
  sub_64F120((__int64)&v188, (__int64)v83[10].m128i_i64, v147, v254);
  v163 = v188;
  if ( v254[0] )
    (**(void (__fastcall ***)(__int64))v254[0])(v254[0]);
  v156 = v251;
  if ( v189 )
  {
    v109 = sub_63DDF0((__int64)v144, 632, 4);
    v253.m128i_i64[0] = (__int64)v254;
    v110 = v109;
    v154 = 0x100000000LL;
    v253.m128i_i64[1] = 0x100000000LL;
    if ( v249.m128_i32[2] )
      sub_649B50((__int64)v147, (__int64)v143);
    v255 = v257;
    v256 = v154;
    v156 = v251;
    if ( v252 )
      sub_64AB70((__int64)&v255, (__int64)v251);
    v162 = (__int64 *)v199;
    std::string::basic_string();
    v169 = (__int64 *)v190;
    sub_644390((__int64)v190, (__int64 *)v146.m128_u64[0]);
    v111 = _mm_load_si128((const __m128i *)&v142);
    v170 = (__int64 *)v191;
    v186 = v16;
    v185 = v111;
    sub_644390((__int64)v191, v148->m128i_i64);
    v165 = &v224;
    v167 = v226;
    v224 = v226;
    v155 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v225 = v155;
    if ( v217 )
      sub_63DE60((__int64)v165, (unsigned __int8 **)p_ptr);
    v112 = _mm_loadu_si128(&v219);
    v230 = v222;
    v227 = v112;
    v113 = _mm_loadu_si128(&v220);
    v231 = v223;
    v228 = v113;
    v229 = _mm_loadu_si128(&v221);
    v178 = sub_FC8E80(v144, v158, v159);
    v115 = v114;
    v161 = (__int64 *)v206;
    v166 = (_BYTE *)v207;
    v172 = (__m128i)v208;
    v176 = v209;
    v173.m128i_i64[0] = v210;
    v174 = v211;
    v175 = v180;
    v158 = v181;
    v177 = (__int64)v182;
    v164 = (__int64 *)&v200;
    std::string::basic_string();
    v171 = v193;
    sub_644390((__int64)v193, v169);
    p_ptr = (void **)v192;
    sub_644390((__int64)v192, v170);
    v116 = _mm_load_si128(&v155);
    v168 = v233;
    *(_QWORD *)v232 = v233;
    *(__m128i *)&v232[8] = v116;
    if ( v225.m128i_i64[0] )
      sub_63DE60((__int64)v150, (unsigned __int8 **)v165);
    v179 = v115;
    v117 = v85;
    v118 = v86;
    v119 = _mm_loadu_si128(&v227);
    v120 = v117;
    v237 = v230;
    v234 = v119;
    v121 = _mm_loadu_si128(&v228);
    v238 = v231;
    v235 = v121;
    v122 = _mm_loadu_si128(&v229);
    v212.m128i_i64[0] = (__int64)v161;
    v236 = v122;
    v212.m128i_i64[1] = (__int64)v166;
    v213 = v172;
    v214.m128i_i64[0] = v176;
    v214.m128i_i64[1] = v173.m128i_i64[0];
    v215 = v174;
    v194.m128i_i64[0] = v175;
    v194.m128i_i64[1] = (__int64)v158;
    v195 = v177;
    v165 = &v203;
    std::string::basic_string();
    v123 = v157;
    v158 = (__int64 *)v196;
    sub_644390((__int64)v196, v171);
    v161 = (__int64 *)v197;
    sub_644390((__int64)v197, (__int64 *)p_ptr);
    v124 = _mm_load_si128(&v155);
    v166 = v240;
    *(_QWORD *)v239 = v240;
    *(__m128i *)&v239[8] = v124;
    if ( *(_QWORD *)&v232[8] )
      sub_63DE60((__int64)v149, (unsigned __int8 **)v150);
    v125 = (__m128i *)(&word_10 + 1);
    v126 = _mm_loadu_si128(&v234);
    v183 = _mm_load_si128(&v145);
    v241 = v126;
    v127 = _mm_loadu_si128(&v235);
    v244 = v237;
    v242 = v127;
    v128 = _mm_loadu_si128(&v236);
    v245 = v238;
    v243 = v128;
    sub_644570(
      v110,
      0x11u,
      v118,
      v120,
      v178,
      v179,
      (__int128)_mm_load_si128(&v212),
      (__int128)_mm_load_si128(&v213),
      (__int128)_mm_load_si128(&v214),
      v215,
      (__int128)_mm_load_si128(&v194),
      v195,
      (__int64)v149,
      17,
      v183.m128i_i64,
      v161,
      v158,
      v123,
      (char **)v165);
    if ( *(_BYTE **)v239 != v166 )
      free(*(void **)v239);
    sub_6441A0(v161);
    sub_6441A0(v158);
    std::string::_M_dispose();
    *(_DWORD *)(v110 + 368) = 17;
    *(_OWORD *)(v110 + 376) = 0;
    *(_QWORD *)v110 = &off_4993108;
    if ( *(_BYTE **)v232 != v168 )
      free(*(void **)v232);
    sub_6441A0((__int64 *)p_ptr);
    sub_6441A0(v171);
    std::string::_M_dispose();
    *(_QWORD *)v110 = &off_49F4C50;
    *(_QWORD *)(v110 + 392) = v110 + 408;
    *(_QWORD *)(v110 + 400) = v154;
    if ( v253.m128i_i32[2] )
    {
      v125 = v147;
      sub_64A2B0(v110 + 392, (__int64)v147);
    }
    *(_QWORD *)(v110 + 488) = v110 + 504;
    *(_QWORD *)(v110 + 496) = v154;
    if ( (_DWORD)v256 )
    {
      v125 = (__m128i *)&v255;
      sub_64B430(v110 + 488, (__int64 *)&v255);
    }
    if ( v224 != v167 )
      free(v224);
    sub_6441A0(v170);
    sub_6441A0(v169);
    std::string::_M_dispose();
    sub_6469C0((__int64)&v255);
    sub_646940((__int64)v147);
    v129 = *(void (__fastcall ****)(_QWORD))(v163 + 16);
    *(_QWORD *)(v163 + 16) = v110;
    if ( v129 )
      (**v129)(v129);
    v130 = *(_QWORD *)(v110 + 88);
    if ( v130 && (unsigned int)(*(_DWORD *)(v130 + 356) - 2) <= 0x13 && (v131 = sub_FC8C50(v130, v125)) != 0 )
      sub_FC8D50(v131, v110);
    else
      sub_64B900((__int64)&v144[11].m128i_i64[1], v110);
  }
  if ( ptr != v218 )
    free(ptr);
  std::string::_M_dispose();
  sub_6469C0((__int64)v156);
  sub_646940((__int64)v143);
LABEL_23:
  sub_6441A0((__int64 *)v146.m128_u64[0]);
  v36 = _mm_load_si128((const __m128i *)&v142);
  v186 = v16;
  v185 = v36;
  sub_6441A0(v148->m128i_i64);
  v183 = _mm_load_si128(&v145);
  sub_646A80(v183.m128i_i64);
  if ( v246 != v153 )
    free(v246);
}

