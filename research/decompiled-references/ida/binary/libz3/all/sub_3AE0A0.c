__int64 __fastcall sub_3AE0A0(__int64 a1)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 *v16; // rax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r12
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // r12
  void *v24; // r13
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r13
  bool v30; // zf
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // r12
  __int64 v39; // rbp
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 *v44; // rcx
  unsigned int v45; // ebp
  __int64 i; // rax
  __int64 v47; // r13
  __int64 v48; // r15
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // r15
  __int64 v59; // rbp
  int v60; // eax
  _QWORD *v61; // rdx
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 *v65; // r12
  __int64 v66; // rbp
  __int64 v67; // rbp
  __int64 *v68; // rdi
  __int64 v69; // rax
  unsigned int v70; // r12d
  void *v71; // r13
  __int64 v72; // r12
  void *v73; // r13
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // rbp
  __int64 v77; // rax
  __int64 v78; // r13
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // r13
  __int64 v84; // r15
  __int64 v85; // r15
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // r15
  __int64 *v90; // r13
  __int64 v91; // rsi
  unsigned int v92; // r13d
  size_t v93; // rsi
  unsigned int *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r13
  int v97; // r15d
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rbp
  __int64 v101; // rax
  int v102; // r12d
  __int64 v103; // r13
  __int64 v104; // rbx
  __int64 v105; // rsi
  void *v106; // rbx
  _QWORD *v107; // rbx
  __int64 v108; // rax
  _QWORD *v109; // rbp
  void *v110; // rdi
  _QWORD *v111; // rbp
  __int64 v112; // rax
  __int64 v113; // rbx
  void *v114; // rdi
  _QWORD *v115; // rbx
  __int64 v116; // rax
  _QWORD *v117; // rbp
  void *v118; // rdi
  _QWORD *v119; // rbx
  __int64 v120; // rax
  _QWORD *v121; // rbp
  void *v122; // rdi
  unsigned int v124; // r9d
  size_t v125; // rdi
  __int64 v126; // rax
  _QWORD *v127; // rdi
  int v128; // r9d
  _DWORD *v129; // rsi
  __int64 v130; // r8
  unsigned __int64 v131; // rax
  __int64 v132; // r8
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // rax
  __int64 v141; // r14
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  char **v144; // r12
  char **exception; // rbx
  int v146; // [rsp+0h] [rbp-628h]
  __int64 v147; // [rsp+0h] [rbp-628h]
  int v148; // [rsp+0h] [rbp-628h]
  __int64 *v149; // [rsp+8h] [rbp-620h]
  __int64 *v150; // [rsp+8h] [rbp-620h]
  int v151; // [rsp+10h] [rbp-618h]
  int v152; // [rsp+10h] [rbp-618h]
  void *v153; // [rsp+10h] [rbp-618h]
  void *v154; // [rsp+10h] [rbp-618h]
  void *v155; // [rsp+10h] [rbp-618h]
  int v156; // [rsp+10h] [rbp-618h]
  void *v157; // [rsp+10h] [rbp-618h]
  __int64 *v158; // [rsp+10h] [rbp-618h]
  void *v159; // [rsp+18h] [rbp-610h]
  void *v160; // [rsp+18h] [rbp-610h]
  int v161; // [rsp+20h] [rbp-608h]
  __int64 v162; // [rsp+20h] [rbp-608h]
  __int64 v163; // [rsp+20h] [rbp-608h]
  int v164; // [rsp+20h] [rbp-608h]
  __int64 v165; // [rsp+20h] [rbp-608h]
  int v166; // [rsp+28h] [rbp-600h]
  int v167; // [rsp+28h] [rbp-600h]
  int v168; // [rsp+30h] [rbp-5F8h]
  __int64 v169; // [rsp+30h] [rbp-5F8h]
  int v170; // [rsp+30h] [rbp-5F8h]
  int v171; // [rsp+38h] [rbp-5F0h]
  unsigned __int64 v172; // [rsp+38h] [rbp-5F0h]
  int v173; // [rsp+38h] [rbp-5F0h]
  __int64 v174; // [rsp+40h] [rbp-5E8h]
  __int64 v175; // [rsp+40h] [rbp-5E8h]
  __int64 v176; // [rsp+40h] [rbp-5E8h]
  void *v177; // [rsp+48h] [rbp-5E0h]
  __int64 *v178; // [rsp+48h] [rbp-5E0h]
  void *v179; // [rsp+48h] [rbp-5E0h]
  void *v180; // [rsp+48h] [rbp-5E0h]
  __int64 *v181; // [rsp+50h] [rbp-5D8h]
  int v182; // [rsp+50h] [rbp-5D8h]
  int v183; // [rsp+50h] [rbp-5D8h]
  int v184[2]; // [rsp+58h] [rbp-5D0h]
  int v185[2]; // [rsp+58h] [rbp-5D0h]
  int v186[2]; // [rsp+60h] [rbp-5C8h]
  __int64 v187; // [rsp+68h] [rbp-5C0h]
  __int64 *v188; // [rsp+70h] [rbp-5B8h]
  __int64 v189; // [rsp+78h] [rbp-5B0h]
  char v190[8]; // [rsp+80h] [rbp-5A8h]
  __int64 v191; // [rsp+88h] [rbp-5A0h]
  __int64 v192; // [rsp+90h] [rbp-598h]
  __int64 v193; // [rsp+A0h] [rbp-588h]
  __m128 v194; // [rsp+A8h] [rbp-580h]
  char v195; // [rsp+C4h] [rbp-564h] BYREF
  char v196[8]; // [rsp+C8h] [rbp-560h] BYREF
  int v197[2]; // [rsp+D0h] [rbp-558h] BYREF
  int v198[2]; // [rsp+D8h] [rbp-550h] BYREF
  __m128 v199; // [rsp+E0h] [rbp-548h] BYREF
  __m128i v200; // [rsp+F0h] [rbp-538h] BYREF
  __int64 v201; // [rsp+100h] [rbp-528h] BYREF
  __int64 v202; // [rsp+108h] [rbp-520h]
  __int64 v203; // [rsp+110h] [rbp-518h] BYREF
  __int64 v204; // [rsp+118h] [rbp-510h]
  __int64 v205; // [rsp+120h] [rbp-508h] BYREF
  __int64 v206; // [rsp+128h] [rbp-500h]
  __int64 v207; // [rsp+130h] [rbp-4F8h] BYREF
  __int64 v208; // [rsp+138h] [rbp-4F0h]
  int v209[2]; // [rsp+140h] [rbp-4E8h] BYREF
  __int64 v210; // [rsp+148h] [rbp-4E0h]
  __int64 v211[2]; // [rsp+150h] [rbp-4D8h] BYREF
  __int64 v212[2]; // [rsp+160h] [rbp-4C8h] BYREF
  _QWORD v213[2]; // [rsp+170h] [rbp-4B8h] BYREF
  _QWORD v214[2]; // [rsp+180h] [rbp-4A8h] BYREF
  char v215[8]; // [rsp+190h] [rbp-498h] BYREF
  void *v216; // [rsp+198h] [rbp-490h]
  void *ptr; // [rsp+1A0h] [rbp-488h]
  int v218[4]; // [rsp+1B0h] [rbp-478h] BYREF
  __m128i v219; // [rsp+1D0h] [rbp-458h] BYREF
  __int64 v220; // [rsp+1E0h] [rbp-448h] BYREF
  _QWORD v221[47]; // [rsp+1E8h] [rbp-440h] BYREF
  int v222[4]; // [rsp+360h] [rbp-2C8h] BYREF
  __int64 v223; // [rsp+370h] [rbp-2B8h]
  _BYTE v224[424]; // [rsp+378h] [rbp-2B0h] BYREF
  char v225[8]; // [rsp+520h] [rbp-108h] BYREF
  __int64 v226; // [rsp+528h] [rbp-100h]
  __int64 v227; // [rsp+540h] [rbp-E8h]
  __int64 v228; // [rsp+548h] [rbp-E0h] BYREF
  __int64 v229; // [rsp+558h] [rbp-D0h]
  __int64 v230; // [rsp+560h] [rbp-C8h]
  _QWORD *v231; // [rsp+568h] [rbp-C0h]
  __int64 v232; // [rsp+578h] [rbp-B0h] BYREF
  _QWORD *v233; // [rsp+588h] [rbp-A0h]
  __int64 v234; // [rsp+5A0h] [rbp-88h]
  __int128 v235; // [rsp+5B0h] [rbp-78h]
  int v236; // [rsp+5C0h] [rbp-68h]
  _QWORD *v237; // [rsp+5C8h] [rbp-60h]
  int v238; // [rsp+5D0h] [rbp-58h]
  char v239; // [rsp+5D8h] [rbp-50h]
  __int16 v240; // [rsp+5E0h] [rbp-48h]

  v187 = *(_QWORD *)(*(_QWORD *)a1 + 48LL) + 656LL;
  sub_39B440(&v199, a1, *(_QWORD *)(*(_QWORD *)a1 + 320LL));
  *(_QWORD *)v196 = 0;
  v200.m128i_i64[0] = 0;
  v194 = v199;
  v200.m128i_i64[1] = *(_QWORD *)(a1 + 8);
  v189 = v200.m128i_i64[1];
  v2 = _mm_loadl_epi64((const __m128i *)*(_QWORD *)(*(_QWORD *)a1 + 48LL));
  v223 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  *(__m128i *)v222 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)(v223 + 656));
  sub_5C8F60(v224, v223, 40000);
  sub_FA3A80(v225, *(_QWORD *)v222);
  v235 = 0;
  v234 = *(_QWORD *)v222;
  v3 = *(_QWORD *)a1;
  v236 = 1;
  v4 = *(_QWORD **)(v3 + 64);
  v239 = 0;
  v237 = nullptr;
  v238 = 1;
  v240 = 256;
  v213[0] = 0;
  v213[1] = 0;
  v214[0] = 1;
  v214[1] = 0;
  sub_39A840(v4, v196);
  v174 = *(_QWORD *)(*(_QWORD *)a1 + 320LL);
  sub_1624F90(v215, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 8);
  sub_39A880(&v219, a1);
  v6 = v219.m128i_i64[1];
  v7 = v219.m128i_i64[0];
  sub_180C5A0(v218, "T");
  v11 = sub_39A690(
          v5,
          (__int64)v218,
          v7,
          v8,
          v9,
          v10,
          v146,
          (int)&v219,
          v151,
          (int)v218,
          v161,
          (char)v196,
          v168,
          v171,
          v174,
          v177);
  v192 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  sub_399430(v7, v6);
  sub_1374250(v149, *(_QWORD *)v196, v192);
  v169 = a1 + 16;
  v193 = v219.m128i_i64[0];
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 16, v219.m128i_i32[0], (unsigned int)v213, (unsigned int)&v195, v12, v13) )
  {
    sub_1872CE0("");
    sub_1873130(114, 262);
  }
  v14 = sub_182D020(qword_1C7F2C0, v213);
  v201 = 0;
  v172 = v14;
  v202 = v187;
  v203 = 0;
  v204 = v187;
  *(_QWORD *)v186 = 0;
  v162 = 0;
  v188 = &v205;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v206 = 0;
    v205 = v15;
    v184[0] = v172;
    v16 = (__int64 *)sub_63BA90(*(_QWORD *)a1 + 72LL, v175);
    v19 = *v16;
    v181 = v16;
    v20 = 0;
    if ( !*v16 )
      goto LABEL_24;
    if ( v172 > 0x7FFFFFFE )
    {
      if ( !*(_DWORD *)(v19 - 4) )
      {
LABEL_23:
        v19 = 0;
        goto LABEL_24;
      }
      while ( 1 )
      {
        v69 = *(_QWORD *)(a1 + 8);
        v70 = *(_DWORD *)(a1 + 40);
        v219 = 0u;
        v156 = v69;
        v220 = 1;
        v221[0] = 0;
        v71 = qword_1C7F2C0;
        sub_182C550(qword_1C7F2C0, v149);
        sub_182CBA0(v71, &v220);
        BYTE4(v220) &= ~1u;
        LODWORD(v220) = 1;
        v72 = sub_1674520(v169, v149, v70);
        v73 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v149);
        sub_182CBA0(v73, &v220);
        if ( v72 )
          ++*(_DWORD *)(v72 + 8);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v149);
        sub_39A600((__int64)&v220, *(const char **)(v175 + 16));
        std::__ostream_insert<char,std::char_traits<char>>();
        *(_QWORD *)v190 = v20;
        std::ostream::_M_insert<unsigned long>();
        std::stringbuf::str(v159, v221);
        sub_180C5A0(v212, *(_QWORD *)v218);
        sub_233E40((__int64)v159);
        v74 = *(_QWORD *)(a1 + 8);
        v180 = *(void **)(v74 + 840);
        v75 = sub_1674700(v169, *(unsigned int *)(a1 + 40));
        v76 = v75;
        if ( v75 )
          ++*(_DWORD *)(v75 + 8);
        *(_QWORD *)v218 = v75;
        v77 = sub_15E3510(v74, v212, 1, v159, v180, 0);
        v78 = v77;
        if ( v77 )
          ++*(_DWORD *)(v77 + 8);
        if ( v76 )
        {
          v30 = (*(_DWORD *)(v76 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v74, v76);
        }
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
        v219.m128i_i64[0] = v72;
        v81 = sub_15DC610(
                v156,
                v78,
                1,
                (int)v149,
                v79,
                v80,
                v147,
                (int)v149,
                v156,
                (int)v159,
                v162,
                v166,
                v169,
                v172,
                v175,
                v180);
        v34 = v81;
        if ( v81 )
          ++*(_DWORD *)(v81 + 8);
        sub_399450(v165, v189);
        sub_3993F0(v78, v74);
        sub_399450(v72, (__int64)v157);
        v82 = *(_QWORD *)(a1 + 8);
        sub_39A950((__int64)v149, a1, v166, v34, v184[0]);
        v83 = v219.m128i_i64[0];
        v84 = *(_QWORD *)(v82 + 856);
        sub_399450(v219.m128i_i64[0], v219.m128i_i64[1]);
        v38 = *v181;
        if ( v83 == v84 )
          break;
        ++v20;
        if ( !v38 )
        {
LABEL_86:
          v162 = v34;
          v19 = 0;
          goto LABEL_24;
        }
        v162 = v34;
        if ( v20 >= *(_DWORD *)(v38 - 4) )
          goto LABEL_23;
      }
    }
    else
    {
      if ( !*(_DWORD *)(v19 - 4) )
        goto LABEL_23;
      while ( 1 )
      {
        v21 = *(_QWORD *)(a1 + 8);
        v22 = *(_DWORD *)(a1 + 40);
        v219.m128i_i64[1] = 0;
        v219.m128i_i8[4] &= 0xFCu;
        v152 = v21;
        v220 = 1;
        v221[0] = 0;
        v219.m128i_i32[0] = v172;
        sub_182CBA0(qword_1C7F2C0, &v220);
        LODWORD(v220) = 1;
        BYTE4(v220) &= ~1u;
        v23 = sub_1674520(v169, v149, v22);
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v149);
        sub_182CBA0(v24, &v220);
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v149);
        sub_39A600((__int64)&v220, *(const char **)(v175 + 16));
        std::__ostream_insert<char,std::char_traits<char>>();
        *(_QWORD *)v190 = v20;
        std::ostream::_M_insert<unsigned long>();
        std::stringbuf::str(v159, v221);
        sub_180C5A0(v212, *(_QWORD *)v218);
        sub_233E40((__int64)v159);
        v25 = *(_QWORD *)(a1 + 8);
        v179 = *(void **)(v25 + 840);
        v26 = sub_1674700(v169, *(unsigned int *)(a1 + 40));
        v27 = v26;
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        *(_QWORD *)v218 = v26;
        v28 = sub_15E3510(v25, v212, 1, v159, v179, 0);
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        if ( v27 )
        {
          v30 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v25, v27);
        }
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
        v219.m128i_i64[0] = v23;
        v33 = sub_15DC610(
                v152,
                v29,
                1,
                (int)v149,
                v31,
                v32,
                v147,
                (int)v149,
                v152,
                (int)v159,
                v162,
                v166,
                v169,
                v172,
                v175,
                v179);
        v34 = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        sub_399450(v163, v189);
        sub_3993F0(v29, v25);
        sub_399450(v23, (__int64)v153);
        v35 = *(_QWORD *)(a1 + 8);
        sub_39A950((__int64)v149, a1, v166, v34, v184[0]);
        v36 = v219.m128i_i64[0];
        v37 = *(_QWORD *)(v35 + 856);
        sub_399450(v219.m128i_i64[0], v219.m128i_i64[1]);
        v38 = *v181;
        if ( v36 == v37 )
          break;
        ++v20;
        if ( !v38 )
          goto LABEL_86;
        v162 = v34;
        if ( v20 >= *(_DWORD *)(v38 - 4) )
          goto LABEL_23;
      }
    }
    v162 = v34;
    v19 = *(_QWORD *)(v38 + 8LL * *(_QWORD *)v190);
LABEL_24:
    sub_3A1040(a1, v19, v20, v188, v17, v18);
    v39 = *(_QWORD *)a1;
    sub_62A000(*(_QWORD *)(*(_QWORD *)a1 + 352LL), v19);
    v40 = *(_QWORD **)(v39 + 360);
    if ( v40 )
    {
      v41 = *((_DWORD *)v40 - 1);
      if ( v41 == *((_DWORD *)v40 - 2) )
      {
        v92 = (3 * v41 + 1) >> 1;
        v93 = 8 * v92 + 8;
        if ( 8 * v41 + 8 >= (unsigned int)v93 || v41 >= v92 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_399470(v149, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v149);
          sub_233E40((__int64)v149);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v94 = (unsigned int *)sub_186B300(v40 - 1, v93);
        v95 = v94[1];
        v40 = v94 + 2;
        *(_QWORD *)(v39 + 360) = v94 + 2;
        *v94 = v92;
        LODWORD(v94) = v95;
        v44 = &v40[v95];
        v43 = (_DWORD)v94 + 1;
      }
      else
      {
        v42 = v41;
        v43 = v41 + 1;
        v44 = &v40[v42];
      }
    }
    else
    {
      v142 = (_QWORD *)sub_186B270(0x18u);
      v40 = v142 + 1;
      *v142 = 2;
      v43 = 1;
      *(_QWORD *)(v39 + 360) = v40;
      v44 = v40;
    }
    *v44 = v19;
    v45 = 0;
    *((_DWORD *)v40 - 1) = v43;
    for ( i = v206; v206; i = v206 )
    {
      if ( v45 >= *(_DWORD *)(i - 4) )
        break;
      v47 = 8LL * v45;
      sub_39A950((__int64)v149, a1, v166, *(_QWORD *)(i + v47), v20);
      v48 = v219.m128i_i64[0];
      v49 = (__int64 *)(v47 + v206);
      v50 = *(_QWORD *)(v47 + v206);
      if ( v219.m128i_i64[0] )
      {
        ++*(_DWORD *)(v219.m128i_i64[0] + 8);
        v51 = v205;
        if ( v50 )
        {
          v30 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v30 )
          {
            v158 = v49;
            sub_15D7BC0(v51, v50);
            v49 = v158;
          }
        }
        *v49 = v48;
      }
      else
      {
        v85 = *(_QWORD *)(a1 + 8);
        v86 = sub_15D1F10(v50);
        v87 = sub_15DB5C0(v85, v45, v86);
        v88 = v205;
        v89 = v87;
        v90 = (__int64 *)(v206 + v47);
        if ( v87 )
          ++*(_DWORD *)(v87 + 8);
        v91 = *v90;
        if ( *v90 )
        {
          v30 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v30 )
            sub_15D7BC0(v88, v91);
        }
        *v90 = v89;
      }
      ++v45;
      sub_399450(v219.m128i_i64[0], v219.m128i_i64[1]);
    }
    v52 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)v197 = 0;
    *(_QWORD *)v198 = 0;
    v207 = 0;
    v208 = v52;
    *(_QWORD *)v209 = 0;
    v210 = v52;
    sub_62E310(v187, v19, &v207);
    if ( v19 )
      sub_62A000(v204, v19);
    if ( v203 )
      sub_62A410(v204, v203);
    v203 = v19;
    v53 = v206 ? *(unsigned int *)(v206 - 4) : 0LL;
    sub_62CA20(v187, &v203, v53);
    v154 = *(void **)(a1 + 8);
    if ( !*(_QWORD *)v186 )
      break;
    if ( !(unsigned __int8)sub_6008C0(v222, *(_QWORD *)v186, 0, v203) )
    {
      sub_1872CE0("");
      sub_1873130(114, 308);
    }
    sub_5FEED0(v211, v222, *(_QWORD *)v186, 1);
    sub_5FEED0(v212, v222, v203, 0);
    sub_647C70(
      (_DWORD)v188,
      (unsigned int)v212,
      v54,
      v55,
      v56,
      v57,
      v147,
      (_DWORD)v149,
      (_DWORD)v154,
      (__int64)v159,
      v162,
      v166,
      v169,
      v172);
    sub_5FF6F0(v222, *(_QWORD *)v186, 0, v203, &v201);
    sub_62E310(v187, v201, v209);
    v58 = *(_QWORD *)(a1 + 8);
    v59 = *(_QWORD *)(v19 + 48);
    v60 = *(_DWORD *)(v58 + 712);
    *(_DWORD *)(v58 + 712) = 1;
    v182 = v60;
    if ( v59 )
    {
      ++*(_DWORD *)(v59 + 8);
      sub_399410(0, (__int64)v155);
    }
    else
    {
      sub_399410(0, (__int64)v155);
      v136 = sub_15DE060(*(_QWORD *)(a1 + 8), v207, v133, v134, v135);
      if ( v136 )
        ++*(_DWORD *)(v136 + 8);
      *(_QWORD *)v184 = v136;
      sub_399410(0, (__int64)v155);
      v59 = *(_QWORD *)v184;
    }
    v61 = *(_QWORD **)v197;
    *(__m128i *)v218 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v200), (__m128i)(unsigned __int64)v59);
    if ( *(_QWORD *)v197 )
    {
      v62 = *(unsigned int *)(*(_QWORD *)v197 - 4LL);
      if ( (_DWORD)v62 == *(_DWORD *)(*(_QWORD *)v197 - 8LL) )
      {
        v124 = (unsigned int)(3 * v62 + 1) >> 1;
        v125 = 8 * v124 + 8;
        if ( 8 * (int)v62 + 8 >= (unsigned int)v125 || (unsigned int)v62 >= v124 )
        {
          v144 = (char **)__cxa_allocate_exception(0x28u);
          sub_399470(v150, "Overflow encountered when expanding vector");
          *v144 = (char *)off_1C63128;
          sub_2333C0(v144 + 1, v150);
          sub_233E40((__int64)v150);
          __cxa_throw(v144, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v184[0] = (unsigned int)(3 * v62 + 1) >> 1;
        v126 = sub_186B270(v125);
        v127 = *(_QWORD **)v197;
        v128 = v184[0];
        v129 = (_DWORD *)v126;
        v61 = (_QWORD *)(v126 + 8);
        if ( *(_QWORD *)v197 )
        {
          v130 = *(unsigned int *)(*(_QWORD *)v197 - 4LL);
          *(_DWORD *)(v126 + 4) = v130;
          v131 = 0;
          v132 = 8 * v130;
          if ( v132 )
          {
            do
            {
              *(_QWORD *)&v129[v131 / 4 + 2] = v127[v131 / 8];
              v131 += 8LL;
            }
            while ( v132 != v131 );
          }
          v191 = (__int64)v129;
          *(_DWORD *)v190 = v184[0];
          *(_QWORD *)v184 = v61;
          sub_186B220(v127 - 1);
          v61 = *(_QWORD **)v184;
          v128 = *(_DWORD *)v190;
          v63 = (_QWORD *)(*(_QWORD *)v184 + 8LL * (unsigned int)v129[1]);
        }
        else
        {
          *(_DWORD *)(v126 + 4) = 0;
          v63 = (_QWORD *)(v126 + 8);
        }
        *(_QWORD *)v197 = v61;
        *v129 = v128;
      }
      else
      {
        v63 = (_QWORD *)(*(_QWORD *)v197 + 8 * v62);
      }
    }
    else
    {
      v143 = (_QWORD *)sub_186B270(0x18u);
      v61 = v143 + 1;
      *v143 = 2;
      *(_QWORD *)v197 = v143 + 1;
      v63 = v143 + 1;
    }
    *v63 = 0x100000000LL;
    ++*((_DWORD *)v61 - 1);
    sub_399980((__int64 *)v198, v211);
    sub_399980((__int64 *)v198, v188);
    v64 = sub_15E9440(
            *(_QWORD *)(a1 + 8),
            2,
            (int)v160,
            v209[0],
            (int)v197,
            (int)v198,
            v148,
            (__int64)v150,
            (int)v155,
            v160,
            v164,
            v167,
            v170,
            v173,
            (int)v222,
            (__int64)v211,
            v182,
            v184[0],
            v186[0],
            v187,
            (__int64)v188,
            v189,
            v190[0],
            v191,
            v192);
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    *(_QWORD *)v185 = v64;
    sub_399410(v200.m128i_i64[0], v200.m128i_i64[1]);
    v200.m128i_i64[0] = *(_QWORD *)v185;
    if ( v201 != *(_QWORD *)v186 )
    {
      sub_62A410(v187, *(_QWORD *)v186);
      *(_QWORD *)v186 = v201;
      if ( v201 )
        sub_62A000(v187, v201);
    }
    *(_DWORD *)(v58 + 712) = v183;
    sub_2334C0(v212);
    sub_2334C0(v178);
    if ( !v172 )
      goto LABEL_100;
LABEL_55:
    v175 = *(_QWORD *)((*(_QWORD *)(v19 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
    sub_399410(v59, (__int64)v154);
    sub_399450(*(__int64 *)v209, v210);
    sub_399450(v207, v208);
    v65 = *(__int64 **)v198;
    if ( *(_QWORD *)v198 )
    {
      v66 = *(unsigned int *)(*(_QWORD *)v198 - 4LL);
      if ( (_DWORD)v66 )
      {
        v67 = *(_QWORD *)v198 + 16 * v66;
        do
        {
          v68 = v65;
          v65 += 2;
          sub_2334C0(v68);
        }
        while ( v65 != (__int64 *)v67 );
        v65 = *(__int64 **)v198;
      }
      sub_186B220(v65 - 1);
    }
    if ( *(_QWORD *)v197 )
      sub_186B220((void *)(*(_QWORD *)v197 - 8LL));
    sub_2334C0(v188);
    --v172;
  }
  sub_62E310(v187, v19, v209);
  v96 = *(_QWORD *)(a1 + 8);
  v59 = *(_QWORD *)(v19 + 48);
  v97 = *(_DWORD *)(v96 + 712);
  *(_DWORD *)(v96 + 712) = 1;
  if ( v59 )
  {
    ++*(_DWORD *)(v59 + 8);
    sub_399410(0, (__int64)v154);
  }
  else
  {
    sub_399410(0, (__int64)v154);
    v140 = sub_15DE060(*(_QWORD *)(a1 + 8), v207, v137, v138, v139);
    v141 = v140;
    if ( v140 )
      ++*(_DWORD *)(v140 + 8);
    sub_399410(0, (__int64)v154);
    v59 = v141;
  }
  if ( v206 && *(_DWORD *)(v206 - 4) )
  {
    sub_399980((__int64 *)v198, v188);
    v98 = *(_QWORD *)(a1 + 8);
    v219.m128i_i64[0] = v59;
    v99 = sub_15E9440(
            v98,
            1,
            (int)v149,
            v209[0],
            (int)v197,
            (int)v198,
            v147,
            (__int64)v149,
            (int)v154,
            v159,
            v162,
            v166,
            v169,
            v172,
            v175,
            (__int64)v178,
            (int)v181,
            v184[0],
            0,
            v187,
            (__int64)v188,
            v189,
            v190[0],
            v191,
            v192);
    if ( v99 )
      ++*(_DWORD *)(v99 + 8);
    v176 = v99;
    sub_399410(v200.m128i_i64[0], v200.m128i_i64[1]);
    v200.m128i_i64[0] = v176;
  }
  else if ( v200.m128i_i64[0] != v59 )
  {
    sub_399410(v200.m128i_i64[0], v200.m128i_i64[1]);
    v200.m128i_i64[0] = v59;
    if ( v59 )
      ++*(_DWORD *)(v59 + 8);
  }
  *(_QWORD *)v186 = v203;
  if ( v203 )
    sub_62A000(v187, v203);
  *(_DWORD *)(v96 + 712) = v97;
  if ( v172 )
    goto LABEL_55;
LABEL_100:
  sub_399410(v59, (__int64)v154);
  sub_399450(*(__int64 *)v209, v210);
  sub_399450(v207, v208);
  sub_2D1E00((__int64 **)v198);
  if ( *(_QWORD *)v197 )
    sub_186B220((void *)(*(_QWORD *)v197 - 8LL));
  sub_2334C0(v188);
  v100 = *(_QWORD *)(a1 + 8);
  v101 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v102 = *(_DWORD *)(v100 + 712);
  *(_DWORD *)(v100 + 712) = 1;
  sub_132F9B0(v100, *(_QWORD *)(v101 + 2960), &v200);
  v103 = v200.m128i_i64[0];
  v104 = *(_QWORD *)a1;
  if ( v200.m128i_i64[0] )
    ++*(_DWORD *)(v200.m128i_i64[0] + 8);
  sub_399450(*(_QWORD *)(v104 + 336), *(_QWORD *)(v104 + 344));
  v105 = v203;
  *(_QWORD *)(v104 + 336) = v103;
  *(_DWORD *)(v100 + 712) = v102;
  if ( v105 )
    sub_62A410(v204, v105);
  if ( v201 )
    sub_62A410(v202, v201);
  if ( *(_QWORD *)v186 )
    sub_62A410(v187, *(_QWORD *)v186);
  if ( ptr )
    sub_186B220(ptr);
  if ( v216 )
    sub_186B220(v216);
  v106 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v213);
  sub_182CBA0(v106, v214);
  v107 = v237;
  if ( v237 )
  {
    v108 = *((unsigned int *)v237 - 1);
    if ( (_DWORD)v108 )
    {
      v109 = &v237[v108];
      do
      {
        while ( *v107 )
        {
          v110 = (void *)(*v107++ - 8LL);
          sub_186B220(v110);
          if ( v107 == v109 )
          {
            v107 = v237;
            goto LABEL_120;
          }
        }
        ++v107;
      }
      while ( v107 != v109 );
      v107 = v237;
    }
LABEL_120:
    sub_186B220(v107 - 1);
  }
  v111 = *((_QWORD **)&v235 + 1);
  if ( *((_QWORD *)&v235 + 1) )
  {
    v112 = *(unsigned int *)(*((_QWORD *)&v235 + 1) - 4LL);
    if ( (_DWORD)v112 )
    {
      v113 = *((_QWORD *)&v235 + 1) + 8 * v112;
      do
      {
        while ( *v111 )
        {
          v114 = (void *)(*v111++ - 8LL);
          sub_186B220(v114);
          if ( (_QWORD *)v113 == v111 )
          {
            v111 = *((_QWORD **)&v235 + 1);
            goto LABEL_127;
          }
        }
        ++v111;
      }
      while ( v111 != (_QWORD *)v113 );
      v111 = *((_QWORD **)&v235 + 1);
    }
LABEL_127:
    sub_186B220(v111 - 1);
  }
  if ( (_QWORD)v235 )
    sub_186B220((void *)(v235 - 8));
  v115 = v233;
  if ( v233 )
  {
    v116 = *((unsigned int *)v233 - 1);
    if ( (_DWORD)v116 )
    {
      v117 = &v233[v116];
      do
      {
        while ( *v115 )
        {
          v118 = (void *)(*v115++ - 8LL);
          sub_186B220(v118);
          if ( v115 == v117 )
          {
            v115 = v233;
            goto LABEL_136;
          }
        }
        ++v115;
      }
      while ( v115 != v117 );
      v115 = v233;
    }
LABEL_136:
    sub_186B220(v115 - 1);
  }
  sub_2334C0(&v232);
  v119 = v231;
  if ( v231 )
  {
    v120 = *((unsigned int *)v231 - 1);
    if ( (_DWORD)v120 )
    {
      v121 = &v231[v120];
      do
      {
        while ( *v119 )
        {
          v122 = (void *)(*v119++ - 8LL);
          sub_186B220(v122);
          if ( v119 == v121 )
          {
            v119 = v231;
            goto LABEL_143;
          }
        }
        ++v119;
      }
      while ( v119 != v121 );
      v119 = v231;
    }
LABEL_143:
    sub_186B220(v119 - 1);
  }
  if ( v230 )
    sub_186B220((void *)(v230 - 8));
  if ( v229 )
    sub_186B220((void *)(v229 - 8));
  sub_2334C0(&v228);
  if ( v227 )
    sub_186B220((void *)(v227 - 8));
  if ( v226 )
    sub_186B220((void *)(v226 - 8));
  sub_5C8660(v224);
  sub_399410(v200.m128i_i64[0], v200.m128i_i64[1]);
  sub_3993C0(*(void (****)(void))v196);
  sub_399450(v193, v189);
  sub_399450(v162, v189);
  sub_399450(v192, v189);
  return sub_3993F0(v194.m128_i64[0], v194.m128_i64[1]);
}

