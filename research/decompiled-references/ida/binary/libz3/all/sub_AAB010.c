void __fastcall sub_AAB010(__int64 a1)
{
  char **v1; // r12
  char **exception; // rax
  char **v3; // rbp
  __int64 v4; // rbx
  __int64 *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  _DWORD **v9; // rax
  __int64 v10; // rbx
  _DWORD **i; // rcx
  bool v12; // dl
  char *v13; // rcx
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  char *v19; // rcx
  __m128i v20; // xmm1
  __int64 v21; // rax
  std::ostream *v22; // rbp
  __int64 v23; // rax
  std::ostream *v24; // rbp
  __int64 v25; // rax
  std::ostream *v26; // rbp
  __int64 v27; // rax
  std::ostream *v28; // rbp
  __int64 v29; // rax
  std::ostream *v30; // rbp
  __int64 v31; // rax
  std::ostream *v32; // rax
  std::ostream *v33; // rax
  _QWORD *v34; // r13
  std::ostream *v35; // rax
  std::ostream *v36; // rax
  _QWORD *v37; // rbx
  std::ostream *v38; // rax
  _QWORD *v39; // rbx
  std::ostream *v40; // rax
  _QWORD *v41; // rbx
  __int64 *v42; // rsi
  std::ostream *v43; // rdi
  __int64 estimated_alloc_size_0; // rax
  char *v45; // rcx
  int v46; // edx
  double v47; // xmm0_8
  double v48; // xmm0_8
  void *v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  std::ios_base *v52; // rdi
  unsigned __int64 v53; // rax
  _QWORD *v54; // r15
  unsigned __int64 v55; // rbx
  unsigned int v56; // edx
  __int64 v57; // rcx
  int v58; // edx
  unsigned __int64 *v59; // rcx
  int v60; // r9d
  int v61; // r10d
  unsigned int v62; // r8d
  __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  unsigned int v66; // ebp
  unsigned int v67; // eax
  unsigned int *v68; // rax
  __int64 v69; // rax
  int v70; // edx
  _QWORD *v71; // rax
  _QWORD *v72; // r9
  _DWORD *v73; // rdi
  int v74; // esi
  _DWORD *v75; // rdx
  __int64 v76; // rcx
  unsigned int v77; // edx
  __int64 v78; // rax
  __int64 *v79; // rax
  __m128i v80; // xmm4
  __int64 v81; // rax
  __int64 *v82; // rax
  __m128i v83; // xmm7
  unsigned __int64 v84; // rbp
  unsigned __int64 v85; // rbx
  unsigned __int64 v86; // rax
  __int64 v87; // rsi
  _QWORD *v88; // rdx
  std::ios_base *v89; // rdi
  std::ios_base *v90; // rdi
  __int64 v91; // rax
  void *v92; // rsi
  __int64 v93; // rdi
  _BYTE *v94; // r14
  size_t v95; // r14
  _QWORD *v96; // rbp
  _BYTE *v97; // rax
  char *v98; // rax
  size_t v99; // r14
  _QWORD *v100; // rbp
  void *v101; // rdi
  _QWORD *v102; // rax
  __int64 j; // rbx
  int v104; // eax
  __int64 v105; // rcx
  unsigned int v106; // eax
  __int64 v107; // rcx
  unsigned int v108; // ebp
  unsigned int v109; // ecx
  unsigned int *v110; // rax
  __int64 v111; // rcx
  _BYTE *v112; // r14
  size_t v113; // r14
  _QWORD *v114; // rbp
  _BYTE *v115; // rax
  char *v116; // rax
  size_t v117; // r14
  _QWORD *v118; // rbp
  __int64 v119; // rdx
  int v120; // ecx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbx
  size_t v124; // r14
  _QWORD *v125; // rax
  size_t v126; // r14
  _QWORD *v127; // rax
  unsigned __int64 v128; // rdi
  _QWORD *v129; // rax
  __int64 v130; // r13
  unsigned __int64 v131; // rdi
  _QWORD *v132; // rax
  __int64 v133; // r13
  unsigned __int64 v134; // rdi
  _QWORD *v135; // rax
  unsigned __int64 v136; // rdi
  _QWORD *v137; // rax
  size_t v138; // r14
  _QWORD *v139; // rax
  size_t v140; // r14
  _QWORD *v141; // rax
  void *v142; // rsi
  _QWORD *v143; // rbp
  unsigned __int64 v144; // rdi
  void *v145; // rsi
  _QWORD *v146; // rbp
  size_t v147; // r13
  unsigned __int64 v148; // rdi
  void *v149; // rsi
  _QWORD *v150; // rbp
  size_t v151; // r13
  unsigned __int64 v152; // rdi
  void *v153; // rsi
  _QWORD *v154; // rbp
  unsigned __int64 v155; // rdi
  __int64 v156; // r14
  unsigned __int64 v157; // r12
  void *v158[2]; // [rsp+0h] [rbp-6B8h] BYREF
  void *v159; // [rsp+10h] [rbp-6A8h]
  __int64 v160; // [rsp+18h] [rbp-6A0h]
  __m128i v161; // [rsp+20h] [rbp-698h] BYREF
  const char *v162; // [rsp+30h] [rbp-688h]
  __int64 v163; // [rsp+38h] [rbp-680h]
  __int64 v164; // [rsp+40h] [rbp-678h]
  __int64 v165; // [rsp+48h] [rbp-670h]
  __int64 v166; // [rsp+50h] [rbp-668h]
  __int64 v167; // [rsp+58h] [rbp-660h]
  __int64 v168; // [rsp+60h] [rbp-658h]
  _QWORD *v169; // [rsp+68h] [rbp-650h]
  __m128i v170; // [rsp+70h] [rbp-648h] BYREF
  std::locale *v171; // [rsp+80h] [rbp-638h]
  std::ios_base *v172; // [rsp+88h] [rbp-630h]
  std::locale *v173; // [rsp+90h] [rbp-628h]
  std::ios_base *v174; // [rsp+98h] [rbp-620h]
  std::locale *v175; // [rsp+A0h] [rbp-618h]
  std::ios_base *v176; // [rsp+A8h] [rbp-610h]
  _QWORD *v177; // [rsp+B0h] [rbp-608h]
  _QWORD *v178; // [rsp+B8h] [rbp-600h]
  __int64 *v179; // [rsp+C0h] [rbp-5F8h]
  char **v180; // [rsp+C8h] [rbp-5F0h]
  char **v181; // [rsp+D0h] [rbp-5E8h]
  _QWORD *v182; // [rsp+D8h] [rbp-5E0h]
  char v183; // [rsp+EBh] [rbp-5CDh]
  char v184; // [rsp+ECh] [rbp-5CCh]
  char v185; // [rsp+EDh] [rbp-5CBh]
  char v186; // [rsp+EEh] [rbp-5CAh]
  char v187; // [rsp+EFh] [rbp-5C9h]
  void *v188; // [rsp+F0h] [rbp-5C8h]
  unsigned __int64 v189; // [rsp+F8h] [rbp-5C0h]
  _QWORD v190[2]; // [rsp+100h] [rbp-5B8h] BYREF
  void *v191; // [rsp+110h] [rbp-5A8h]
  size_t v192; // [rsp+118h] [rbp-5A0h]
  _QWORD dest[2]; // [rsp+120h] [rbp-598h] BYREF
  void *v194; // [rsp+130h] [rbp-588h] BYREF
  size_t v195; // [rsp+138h] [rbp-580h]
  _QWORD v196[2]; // [rsp+140h] [rbp-578h] BYREF
  _OWORD v197[2]; // [rsp+150h] [rbp-568h] BYREF
  int v198; // [rsp+170h] [rbp-548h]
  char *s[2]; // [rsp+180h] [rbp-538h]
  __m128i v200; // [rsp+190h] [rbp-528h]
  __m128i v201; // [rsp+1A0h] [rbp-518h]
  __m128i v202; // [rsp+1B0h] [rbp-508h]
  const char *v203; // [rsp+1C0h] [rbp-4F8h]
  char *v204; // [rsp+1D0h] [rbp-4E8h] BYREF
  __int64 v205; // [rsp+1D8h] [rbp-4E0h]
  __m128i si128; // [rsp+1E0h] [rbp-4D8h] BYREF
  __int128 v207; // [rsp+1F0h] [rbp-4C8h]
  __int128 v208; // [rsp+200h] [rbp-4B8h]
  __int128 v209; // [rsp+210h] [rbp-4A8h]
  char v210[8]; // [rsp+220h] [rbp-498h] BYREF
  int v211; // [rsp+228h] [rbp-490h]
  void *v212; // [rsp+230h] [rbp-488h]
  unsigned __int64 v213; // [rsp+238h] [rbp-480h]
  _QWORD v214[2]; // [rsp+240h] [rbp-478h] BYREF
  _QWORD v215[28]; // [rsp+250h] [rbp-468h] BYREF
  __int16 v216; // [rsp+330h] [rbp-388h]
  __int128 v217; // [rsp+338h] [rbp-380h]
  __int128 v218; // [rsp+348h] [rbp-370h]
  char *v219; // [rsp+360h] [rbp-358h] BYREF
  __int64 v220; // [rsp+368h] [rbp-350h]
  _OWORD v221[2]; // [rsp+370h] [rbp-348h] BYREF
  void *src[2]; // [rsp+390h] [rbp-328h]
  __int128 v223; // [rsp+3A0h] [rbp-318h]
  char v224[8]; // [rsp+3B0h] [rbp-308h] BYREF
  int v225; // [rsp+3B8h] [rbp-300h]
  void *v226; // [rsp+3C0h] [rbp-2F8h]
  size_t v227; // [rsp+3C8h] [rbp-2F0h]
  _QWORD v228[2]; // [rsp+3D0h] [rbp-2E8h] BYREF
  _QWORD v229[28]; // [rsp+3E0h] [rbp-2D8h] BYREF
  __int16 v230; // [rsp+4C0h] [rbp-1F8h]
  __int128 v231; // [rsp+4C8h] [rbp-1F0h]
  __int128 v232; // [rsp+4D8h] [rbp-1E0h]
  __int64 v233; // [rsp+4F0h] [rbp-1C8h] BYREF
  __int64 v234; // [rsp+4F8h] [rbp-1C0h]
  _OWORD v235[2]; // [rsp+500h] [rbp-1B8h] BYREF
  void *v236[2]; // [rsp+520h] [rbp-198h]
  __int128 v237; // [rsp+530h] [rbp-188h]
  char v238[8]; // [rsp+540h] [rbp-178h] BYREF
  int v239; // [rsp+548h] [rbp-170h]
  void *v240; // [rsp+550h] [rbp-168h]
  size_t n; // [rsp+558h] [rbp-160h]
  _QWORD v242[2]; // [rsp+560h] [rbp-158h] BYREF
  _QWORD v243[28]; // [rsp+570h] [rbp-148h] BYREF
  __int16 v244; // [rsp+650h] [rbp-68h]
  __int128 v245; // [rsp+658h] [rbp-60h]
  __int128 v246; // [rsp+668h] [rbp-50h]

  v6 = *(_QWORD **)(a1 + 8856);
  v160 = a1;
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v7 != v6 )
    {
      v8 = 0;
      do
      {
        if ( *v6 )
          v8 += (__int64)(*(unsigned int *)(*v6 - 4LL) - (unsigned __int64)*(unsigned int *)(*v6 - 8LL)) >> 2;
        ++v6;
      }
      while ( v7 != v6 );
    }
  }
  v9 = *(_DWORD ***)(v160 + 8896);
  if ( v9 )
  {
    v10 = 0;
    for ( i = &v9[*((unsigned int *)v9 - 1)]; v9 != i; v10 += v12 )
      v12 = **v9++ == 2;
  }
  v180 = &v204;
  v172 = (std::ios_base *)v215;
  v170.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 64;
  v161 = _mm_unpacklo_epi64(
           (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64),
           (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v215);
  v215[27] = 0;
  v13 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v14 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v217 = 0;
  v215[0] = (char *)&`vtable for'std::ios + 16;
  v216 = 0;
  v218 = 0;
  v15 = *((_QWORD *)v13 - 3);
  v204 = v13;
  *(char **)((char *)&v204 + v15) = v14;
  v205 = 0;
  v164 = (__int64)v14;
  v163 = (__int64)v13;
  std::ios::init();
  v16 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v17 = *(_QWORD *)(v16 - 24);
  si128.m128i_i64[0] = v16;
  v165 = v16;
  v18 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(__int64 *)((char *)si128.m128i_i64 + v17) = v18;
  v166 = v18;
  std::ios::init();
  v19 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v20 = _mm_load_si128(&v161);
  v167 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v21 = *(_QWORD *)(v167 - 24);
  v168 = (__int64)v19;
  *(char **)((char *)&v204 + v21) = v19;
  si128 = v20;
  v207 = 0;
  v204 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v208 = 0;
  v209 = 0;
  v215[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v171 = (std::locale *)v210;
  std::locale::locale((std::locale *)v210);
  v211 = 24;
  LOBYTE(v214[0]) = 0;
  si128.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
  v169 = v214;
  v212 = v214;
  v213 = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)&v207 + *(_QWORD *)(si128.m128i_i64[0] - 24)) = 4;
  v22 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v23 = *(_QWORD *)v22;
  v183 = 32;
  if ( *(_QWORD *)((char *)v22 + *(_QWORD *)(v23 - 24) + 16) )
    v22 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v22, 32);
  *(_QWORD *)((char *)v22 + *(_QWORD *)(*(_QWORD *)v22 - 24LL) + 16) = 6;
  v24 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v25 = *(_QWORD *)v24;
  v184 = 32;
  if ( *(_QWORD *)((char *)v24 + *(_QWORD *)(v25 - 24) + 16) )
    v24 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v24, 32);
  *(_QWORD *)((char *)v24 + *(_QWORD *)(*(_QWORD *)v24 - 24LL) + 16) = 6;
  v26 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v27 = *(_QWORD *)v26;
  v185 = 32;
  if ( *(_QWORD *)((char *)v26 + *(_QWORD *)(v27 - 24) + 16) )
    v26 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v26, 32);
  *(_QWORD *)((char *)v26 + *(_QWORD *)(*(_QWORD *)v26 - 24LL) + 16) = 6;
  v28 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v29 = *(_QWORD *)v28;
  v186 = 32;
  if ( *(_QWORD *)((char *)v28 + *(_QWORD *)(v29 - 24) + 16) )
    v28 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v28, 32);
  *(_QWORD *)((char *)v28 + *(_QWORD *)(*(_QWORD *)v28 - 24LL) + 16) = 5;
  v30 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v31 = *(_QWORD *)v30;
  v187 = 47;
  if ( *(_QWORD *)((char *)v30 + *(_QWORD *)(v31 - 24) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v30, 47);
  v32 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  LOBYTE(v191) = 47;
  if ( *(_QWORD *)((char *)v32 + *(_QWORD *)(*(_QWORD *)v32 - 24LL) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v32, 47);
  v33 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  LOBYTE(v194) = 32;
  v34 = v33;
  if ( *(_QWORD *)((char *)v33 + *(_QWORD *)(*(_QWORD *)v33 - 24LL) + 16) )
    v34 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v33, 32);
  *(_QWORD *)((char *)v34 + *(_QWORD *)(*v34 - 24LL) + 16) = 7;
  v35 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  LOBYTE(v197[0]) = 47;
  if ( *(_QWORD *)((char *)v35 + *(_QWORD *)(*(_QWORD *)v35 - 24LL) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v35, 47);
  v36 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  LOBYTE(s[0]) = 32;
  v37 = v36;
  if ( *(_QWORD *)((char *)v36 + *(_QWORD *)(*(_QWORD *)v36 - 24LL) + 16) )
    v37 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v36, 32);
  *(_QWORD *)((char *)v37 + *(_QWORD *)(*v37 - 24LL) + 16) = 5;
  v38 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  LOBYTE(v219) = 32;
  v39 = v38;
  if ( *(_QWORD *)((char *)v38 + *(_QWORD *)(*(_QWORD *)v38 - 24LL) + 16) )
    v39 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v38, 32);
  *(_QWORD *)((char *)v39 + *(_QWORD *)(*v39 - 24LL) + 16) = 4;
  v40 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  LOBYTE(v233) = 32;
  v41 = v40;
  if ( *(_QWORD *)((char *)v40 + *(_QWORD *)(*(_QWORD *)v40 - 24LL) + 16) )
  {
    v42 = &v233;
    v43 = v40;
    v41 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    v42 = &qword_20;
    v43 = v40;
    std::ostream::put(v40, 32);
  }
  *(_QWORD *)((char *)v41 + *(_QWORD *)(*v41 - 24LL) + 16) = 7;
  estimated_alloc_size_0 = Z3_get_estimated_alloc_size_0(v43, v42);
  v45 = (char *)v41 + *(_QWORD *)(*v41 - 24LL);
  v46 = *((_DWORD *)v45 + 6);
  *((_QWORD *)v45 + 1) = 2;
  *((_DWORD *)v45 + 6) = v46 & 0xFFFFFEFB | 4;
  if ( estimated_alloc_size_0 < 0 )
    v47 = (double)(int)(estimated_alloc_size_0 & 1 | ((unsigned __int64)estimated_alloc_size_0 >> 1))
        + (double)(int)(estimated_alloc_size_0 & 1 | ((unsigned __int64)estimated_alloc_size_0 >> 1));
  else
    v47 = (double)(int)estimated_alloc_size_0;
  v48 = v47 * 0.00000095367431640625;
  std::ostream::_M_insert<double>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v49 = v212;
  if ( (_QWORD)v209 )
  {
    v50 = v208;
    if ( !(_QWORD)v208 || (unsigned __int64)v208 < (unsigned __int64)v209 )
      v50 = v209;
    v213 = v50 - *((_QWORD *)&v208 + 1);
    *((_BYTE *)v212 + v50 - *((_QWORD *)&v208 + 1)) = 0;
    v49 = v212;
    v170.m128i_i64[1] = (__int64)v190;
    v188 = v190;
    if ( v212 != v169 )
      goto LABEL_38;
  }
  else
  {
    v170.m128i_i64[1] = (__int64)v190;
    v188 = v190;
    if ( v212 != v169 )
    {
LABEL_38:
      v188 = v49;
      v190[0] = v214[0];
      v51 = v213;
      goto LABEL_39;
    }
  }
  v51 = v213;
  v72 = v169;
  v73 = (_DWORD *)v170.m128i_i64[1];
  v74 = v213 + 1;
  v75 = v169;
  if ( (unsigned int)(v213 + 1) >= 8 )
  {
    LODWORD(v121) = 0;
    do
    {
      v122 = (unsigned int)v121;
      v123 = v170.m128i_i64[1];
      v121 = (unsigned int)(v121 + 8);
      *(_QWORD *)(v170.m128i_i64[1] + v122) = *(_QWORD *)((char *)v72 + v122);
    }
    while ( (unsigned int)v121 < (v74 & 0xFFFFFFF8) );
    v73 = (_DWORD *)(v123 + v121);
    v75 = (_DWORD *)((char *)v169 + v121);
  }
  v76 = 0;
  if ( (v74 & 4) != 0 )
  {
    *v73 = *v75;
    v76 = 4;
  }
  if ( (v74 & 2) != 0 )
  {
    *(_WORD *)((char *)v73 + v76) = *(_WORD *)((char *)v75 + v76);
    v76 += 2;
  }
  if ( (v74 & 1) != 0 )
    *((_BYTE *)v73 + v76) = *((_BYTE *)v75 + v76);
LABEL_39:
  v189 = v51;
  v52 = (std::ios_base *)&si128.m128i_u64[1];
  LOBYTE(v214[0]) = 0;
  v213 = 0;
  v212 = v169;
  std::stringbuf::_M_sync();
  v53 = v189;
  v54 = nullptr;
  v55 = 0;
  if ( !v189 )
  {
    v119 = *(_QWORD *)(v160 + 9392);
    if ( v119 )
    {
      v60 = *(_DWORD *)(v119 - 4);
      v62 = 0;
      v182 = nullptr;
      v61 = v60;
      goto LABEL_189;
    }
LABEL_218:
    v54 = nullptr;
    v182 = nullptr;
    v77 = *(_DWORD *)(v160 + 32);
    goto LABEL_94;
  }
  do
  {
    if ( v55 < v53 )
    {
      while ( *((_BYTE *)v188 + v55) != 32 )
      {
        if ( ++v55 >= v53 )
          goto LABEL_53;
      }
      while ( v55 < v53 )
      {
        if ( *((_BYTE *)v188 + v55) != 32 )
        {
          if ( v55 < v53 )
          {
            if ( v54 )
            {
              v56 = *((_DWORD *)v54 - 1);
              if ( v56 == *((_DWORD *)v54 - 2) )
              {
                v66 = (3 * v56 + 1) >> 1;
                v67 = 8 * v66 + 8;
                if ( 8 * v56 + 8 >= v67 || v56 >= v66 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  v179 = &v233;
                  v3 = exception;
                  sub_24ABB0(&v233, "Overflow encountered when expanding vector");
                  v4 = (__int64)v179;
                  v5 = v179;
                  *v3 = (char *)off_1C63128;
                  sub_2333C0(v3 + 1, v5);
                  sub_233E40(v4);
                  __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v68 = (unsigned int *)sub_186B300(v54 - 1, v67);
                v54 = v68 + 2;
                *v68 = v66;
                v69 = v68[1];
                v70 = v69;
                v59 = &v54[v69];
                v53 = v189;
                v58 = v70 + 1;
              }
              else
              {
                v57 = v56;
                v58 = v56 + 1;
                v59 = &v54[v57];
              }
            }
            else
            {
              v71 = (_QWORD *)sub_186B270(0x18u);
              v54 = v71 + 1;
              *v71 = 2;
              v58 = 1;
              v53 = v189;
              v59 = v54;
            }
            *v59 = v55;
            *((_DWORD *)v54 - 1) = v58;
          }
          break;
        }
        ++v55;
      }
    }
LABEL_53:
    ++v55;
  }
  while ( v55 < v53 );
  v52 = *(std::ios_base **)(v160 + 9392);
  if ( !v52 )
  {
    if ( v54 )
    {
      v182 = v54;
      v77 = *(_DWORD *)(v160 + 32);
      goto LABEL_94;
    }
    goto LABEL_218;
  }
  v60 = *((_DWORD *)v52 - 1);
  v61 = v60;
  if ( !v54 )
  {
    v182 = nullptr;
    v53 = 0;
    v62 = 0;
    goto LABEL_189;
  }
  v62 = *((_DWORD *)v54 - 1);
  if ( v62 )
  {
    v63 = 0;
    v53 = 0;
    if ( v60 == v62 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v64 = *((_QWORD *)v52 + v63);
          v65 = v54[v63];
          if ( v65 >= v64 )
            break;
          v53 = v64 + v53 - v65;
LABEL_60:
          if ( (unsigned int)++v63 >= v62 )
            goto LABEL_64;
        }
        if ( v64 >= v65 )
          goto LABEL_60;
        ++v63;
        v53 = v65 + v53 - v64;
        if ( (unsigned int)v63 >= v62 )
          goto LABEL_64;
      }
    }
  }
  v53 = 0;
LABEL_64:
  v182 = v54;
LABEL_189:
  v77 = *(_DWORD *)(v160 + 32);
  if ( v61 )
  {
    v120 = *(_DWORD *)(v160 + 9384);
    v87 = (unsigned int)(v120 + 20);
    if ( v77 < (unsigned int)v87 && (v77 < v120 + 6 || v62 == v60 && v53 <= 3) )
      goto LABEL_111;
  }
LABEL_94:
  v198 = -1;
  v181 = &v219;
  *(_DWORD *)(v160 + 9384) = v77;
  v174 = (std::ios_base *)v229;
  v197[0] = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFD), 0);
  v197[1] = _mm_load_si128((const __m128i *)&xmmword_18B67E0);
  *(__m128i *)s = _mm_unpacklo_epi64(
                    _mm_loadl_epi64((const __m128i *)&off_1C56618),
                    (__m128i)(unsigned __int64)":conflicts ");
  v203 = ":memory";
  v200 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C56620), (__m128i)(unsigned __int64)":propagations ");
  v201 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C56628), (__m128i)(unsigned __int64)":lemmas ");
  v202 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C56630), (__m128i)(unsigned __int64)":deletions");
  std::ios_base::ios_base((std::ios_base *)v229);
  v231 = 0;
  v230 = 0;
  v232 = 0;
  v229[0] = (char *)&`vtable for'std::ios + 16;
  v78 = *(_QWORD *)(v163 - 24);
  v229[27] = 0;
  v219 = (char *)v163;
  *(char **)((char *)&v219 + v78) = (char *)v164;
  v220 = 0;
  std::ios::init();
  v158[0] = v221;
  v79 = (__int64 *)((char *)v221 + *(_QWORD *)(v165 - 24));
  *(_QWORD *)&v221[0] = v165;
  *v79 = v166;
  std::ios::init();
  v80 = _mm_load_si128(&v161);
  *(char **)((char *)&v219 + *(_QWORD *)(v167 - 24)) = (char *)v168;
  v221[0] = v80;
  v221[1] = 0;
  v219 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_OWORD *)src = 0;
  v223 = 0;
  v229[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v173 = (std::locale *)v224;
  std::locale::locale((std::locale *)v224);
  v225 = 24;
  LOBYTE(v228[0]) = 0;
  *((_QWORD *)&v221[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v177 = v228;
  v226 = v228;
  v227 = 0;
  std::ios::init();
  v179 = &v233;
  v176 = (std::ios_base *)v243;
  std::ios_base::ios_base((std::ios_base *)v243);
  v245 = 0;
  v244 = 0;
  v246 = 0;
  v243[0] = (char *)&`vtable for'std::ios + 16;
  v81 = *(_QWORD *)(v163 - 24);
  v243[27] = 0;
  v233 = v163;
  *(__int64 *)((char *)&v233 + v81) = v164;
  v234 = 0;
  std::ios::init();
  v159 = v235;
  v82 = (__int64 *)((char *)v235 + *(_QWORD *)(v165 - 24));
  *(_QWORD *)&v235[0] = v165;
  *v82 = v166;
  std::ios::init();
  v48 = 0.0;
  v83 = _mm_load_si128(&v161);
  *(__int64 *)((char *)&v233 + *(_QWORD *)(v167 - 24)) = v168;
  v235[0] = v83;
  v235[1] = 0;
  v233 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_OWORD *)v236 = 0;
  v237 = 0;
  v243[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v175 = (std::locale *)v238;
  std::locale::locale((std::locale *)v238);
  v239 = 24;
  LOBYTE(v242[0]) = 0;
  *((_QWORD *)&v235[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v178 = v242;
  v240 = v242;
  n = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( !v54 || !*((_DWORD *)v54 - 1) )
  {
    v84 = 11;
    v85 = 11;
    if ( v189 <= 0xD )
      goto LABEL_103;
    goto LABEL_98;
  }
  v156 = 0;
  v85 = 11;
  v84 = 11;
  v161.m128i_i64[0] = (__int64)v197;
  do
  {
    v157 = v54[v156] + *(int *)(v161.m128i_i64[0] + 4 * v156);
    if ( (v156 & 1) != 0 )
    {
      if ( v85 >= v157 )
      {
        v157 = v85;
      }
      else
      {
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v85;
        }
        while ( v85 != v157 );
      }
      v162 = s[v156];
      v85 = strlen(v162) + v157;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      if ( v84 >= v157 )
      {
        v157 = v84;
      }
      else
      {
        do
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v84;
        }
        while ( v84 != v157 );
      }
      v162 = s[v156];
      v84 = strlen(v162) + v157;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    ++v156;
  }
  while ( (unsigned int)v156 < *((_DWORD *)v54 - 1) );
  v86 = v189;
  if ( v84 + 2 < v189 )
  {
LABEL_98:
    while ( 1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v86 = v189;
      if ( v84 + 3 >= v189 )
        break;
      ++v84;
    }
  }
  if ( v85 + 2 < v86 )
  {
    while ( 1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v85 + 3 >= v189 )
        break;
      ++v85;
    }
  }
LABEL_103:
  std::__ostream_insert<char,std::char_traits<char>>();
  v87 = (__int64)")\n";
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( (unsigned int)sub_180B130(v159) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(0.0) )
    {
      sub_186A4C0(0.0);
      sub_180B150(v159, ")\n");
      v94 = (_BYTE *)v223;
      v192 = 0;
      v191 = dest;
      LOBYTE(dest[0]) = 0;
      if ( (_QWORD)v223 )
      {
        if ( src[0] >= (void *)v223 )
          v94 = src[0];
        if ( !src[0] )
          v94 = (_BYTE *)v223;
        v95 = v94 - (char *)src[1];
        if ( (v95 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v95 > 0xF )
        {
          if ( v95 > 0x1D )
          {
            v130 = v95;
            v131 = v95 + 1;
            if ( (__int64)(v95 + 1) < 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v130 = 30;
            v131 = 31;
          }
          v158[0] = src[1];
          v132 = (_QWORD *)operator new(v131);
          v96 = v132;
          if ( v158[0] )
            memcpy(v132, v158[0], v95);
          if ( v191 != dest )
            operator delete(v191, dest[0] + 1LL);
          v191 = v96;
          dest[0] = v130;
        }
        else if ( src[1] == dest )
        {
          std::string::_M_replace_cold();
          v96 = v191;
        }
        else
        {
          if ( v95 )
          {
            if ( v95 == 1 )
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            else
              memcpy(dest, src[1], v95);
          }
          v96 = dest;
        }
        v192 = v95;
        *((_BYTE *)v96 + v95) = 0;
LABEL_133:
        std::__ostream_insert<char,std::char_traits<char>>();
        v97 = (_BYTE *)v237;
        v195 = 0;
        v194 = v196;
        LOBYTE(v196[0]) = 0;
        if ( (_QWORD)v237 )
        {
          if ( v236[0] >= (void *)v237 )
            v97 = v236[0];
          if ( !v236[0] )
            v97 = (_BYTE *)v237;
          v98 = (char *)(v97 - (char *)v236[1]);
          v99 = (size_t)v98;
          if ( (__int64)v98 < 0 )
            std::__throw_length_error("basic_string::_M_replace");
          if ( (unsigned __int64)v98 > 0xF )
          {
            if ( (unsigned __int64)v98 > 0x1D )
            {
              v158[0] = v98;
              v128 = (unsigned __int64)(v98 + 1);
              if ( (__int64)(v98 + 1) < 0 )
                std::__throw_bad_alloc();
            }
            else
            {
              v158[0] = &qword_18 + 6;
              v128 = 31;
            }
            v159 = v236[1];
            v129 = (_QWORD *)operator new(v128);
            v100 = v129;
            if ( v159 )
              memcpy(v129, v159, v99);
            if ( v194 != v196 )
              operator delete(v194, v196[0] + 1LL);
            v194 = v100;
            v196[0] = v158[0];
          }
          else if ( v236[1] == v196 )
          {
            std::string::_M_replace_cold();
            v100 = v194;
          }
          else
          {
            if ( v98 )
            {
              if ( v98 == (_BYTE *)&dword_0 + 1 )
                LOBYTE(v196[0]) = *(_BYTE *)v236[1];
              else
                memcpy(v196, v236[1], (size_t)v98);
            }
            v100 = v196;
          }
          v195 = v99;
          *((_BYTE *)v100 + v99) = 0;
          goto LABEL_144;
        }
        v140 = n;
        if ( n > 0xF )
        {
          if ( (n & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          if ( n > 0x1D )
          {
            v158[0] = (void *)n;
            v144 = n + 1;
            if ( (__int64)(n + 1) < 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v158[0] = &qword_18 + 6;
            v144 = 31;
          }
          v143 = (_QWORD *)operator new(v144);
          if ( v194 != v196 )
            operator delete(v194, v196[0] + 1LL);
          v194 = v143;
          v142 = v240;
          v196[0] = v158[0];
        }
        else
        {
          if ( !n )
          {
LABEL_261:
            v141 = v196;
LABEL_262:
            v195 = v140;
            *((_BYTE *)v141 + v140) = 0;
LABEL_144:
            v87 = (__int64)v194;
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v194 != v196 )
            {
              v87 = v196[0] + 1LL;
              operator delete(v194, v196[0] + 1LL);
            }
            v101 = v191;
            if ( v191 != dest )
            {
              v87 = dest[0] + 1LL;
              operator delete(v191, dest[0] + 1LL);
            }
            sub_186A500(v101, v87);
            goto LABEL_104;
          }
          v142 = v240;
          v143 = v196;
          if ( n == 1 )
          {
            LOBYTE(v196[0]) = *(_BYTE *)v240;
            goto LABEL_261;
          }
        }
        memcpy(v143, v142, v140);
        v141 = v194;
        goto LABEL_262;
      }
      v126 = v227;
      if ( v227 > 0xF )
      {
        if ( (v227 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        if ( v227 > 0x1D )
        {
          v147 = v227;
          v148 = v227 + 1;
          if ( (__int64)(v227 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v147 = 30;
          v148 = 31;
        }
        v146 = (_QWORD *)operator new(v148);
        if ( v191 != dest )
          operator delete(v191, dest[0] + 1LL);
        v191 = v146;
        v145 = v226;
        dest[0] = v147;
      }
      else
      {
        if ( !v227 )
        {
LABEL_216:
          v127 = dest;
LABEL_217:
          v192 = v126;
          *((_BYTE *)v127 + v126) = 0;
          goto LABEL_133;
        }
        v145 = v226;
        v146 = dest;
        if ( v227 == 1 )
        {
          LOBYTE(dest[0]) = *(_BYTE *)v226;
          goto LABEL_216;
        }
      }
      memcpy(v146, v145, v126);
      v127 = v191;
      goto LABEL_217;
    }
    sub_180B150(v159, ")\n");
    v112 = (_BYTE *)v223;
    v192 = 0;
    v191 = dest;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v223 )
    {
      if ( src[0] >= (void *)v223 )
        v112 = src[0];
      if ( !src[0] )
        v112 = (_BYTE *)v223;
      v113 = v112 - (char *)src[1];
      if ( (v113 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v113 > 0xF )
      {
        if ( v113 > 0x1D )
        {
          v133 = v113;
          v134 = v113 + 1;
          if ( (__int64)(v113 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v133 = 30;
          v134 = 31;
        }
        v158[0] = src[1];
        v135 = (_QWORD *)operator new(v134);
        v114 = v135;
        if ( v158[0] )
          memcpy(v135, v158[0], v113);
        if ( v191 != dest )
          operator delete(v191, dest[0] + 1LL);
        v191 = v114;
        dest[0] = v133;
      }
      else if ( src[1] == dest )
      {
        std::string::_M_replace_cold();
        v114 = v191;
      }
      else
      {
        if ( v113 )
        {
          if ( v113 == 1 )
            LOBYTE(dest[0]) = *(_BYTE *)src[1];
          else
            memcpy(dest, src[1], v113);
        }
        v114 = dest;
      }
      v192 = v113;
      *((_BYTE *)v114 + v113) = 0;
LABEL_170:
      std::__ostream_insert<char,std::char_traits<char>>();
      v115 = (_BYTE *)v237;
      v195 = 0;
      v194 = v196;
      LOBYTE(v196[0]) = 0;
      if ( (_QWORD)v237 )
      {
        if ( v236[0] >= (void *)v237 )
          v115 = v236[0];
        if ( !v236[0] )
          v115 = (_BYTE *)v237;
        v116 = (char *)(v115 - (char *)v236[1]);
        v117 = (size_t)v116;
        if ( (__int64)v116 < 0 )
          std::__throw_length_error("basic_string::_M_replace");
        if ( (unsigned __int64)v116 > 0xF )
        {
          if ( (unsigned __int64)v116 > 0x1D )
          {
            v158[0] = v116;
            v136 = (unsigned __int64)(v116 + 1);
            if ( (__int64)(v116 + 1) < 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v158[0] = &qword_18 + 6;
            v136 = 31;
          }
          v159 = v236[1];
          v137 = (_QWORD *)operator new(v136);
          v118 = v137;
          if ( v159 )
            memcpy(v137, v159, v117);
          if ( v194 != v196 )
            operator delete(v194, v196[0] + 1LL);
          v194 = v118;
          v196[0] = v158[0];
        }
        else if ( v236[1] == v196 )
        {
          std::string::_M_replace_cold();
          v118 = v194;
        }
        else
        {
          if ( v116 )
          {
            if ( v116 == (_BYTE *)&dword_0 + 1 )
              LOBYTE(v196[0]) = *(_BYTE *)v236[1];
            else
              memcpy(v196, v236[1], (size_t)v116);
          }
          v118 = v196;
        }
        v195 = v117;
        *((_BYTE *)v118 + v117) = 0;
        goto LABEL_181;
      }
      v138 = n;
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        if ( n > 0x1D )
        {
          v158[0] = (void *)n;
          v155 = n + 1;
          if ( (__int64)(n + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v158[0] = &qword_18 + 6;
          v155 = 31;
        }
        v154 = (_QWORD *)operator new(v155);
        if ( v194 != v196 )
          operator delete(v194, v196[0] + 1LL);
        v194 = v154;
        v153 = v240;
        v196[0] = v158[0];
      }
      else
      {
        if ( !n )
        {
LABEL_257:
          v139 = v196;
LABEL_258:
          v195 = v138;
          *((_BYTE *)v139 + v138) = 0;
LABEL_181:
          v87 = (__int64)v194;
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v194 != v196 )
          {
            v87 = v196[0] + 1LL;
            operator delete(v194, v196[0] + 1LL);
          }
          if ( v191 != dest )
          {
            v87 = dest[0] + 1LL;
            operator delete(v191, dest[0] + 1LL);
          }
          goto LABEL_104;
        }
        v153 = v240;
        v154 = v196;
        if ( n == 1 )
        {
          LOBYTE(v196[0]) = *(_BYTE *)v240;
          goto LABEL_257;
        }
      }
      memcpy(v154, v153, v138);
      v139 = v194;
      goto LABEL_258;
    }
    v124 = v227;
    if ( v227 > 0xF )
    {
      if ( (v227 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v227 > 0x1D )
      {
        v151 = v227;
        v152 = v227 + 1;
        if ( (__int64)(v227 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v151 = 30;
        v152 = 31;
      }
      v150 = (_QWORD *)operator new(v152);
      if ( v191 != dest )
        operator delete(v191, dest[0] + 1LL);
      v191 = v150;
      v149 = v226;
      dest[0] = v151;
    }
    else
    {
      if ( !v227 )
      {
LABEL_212:
        v125 = dest;
LABEL_213:
        v192 = v124;
        *((_BYTE *)v125 + v124) = 0;
        goto LABEL_170;
      }
      v149 = v226;
      v150 = dest;
      if ( v227 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v226;
        goto LABEL_212;
      }
    }
    memcpy(v150, v149, v124);
    v125 = v191;
    goto LABEL_213;
  }
LABEL_104:
  v88 = *(_QWORD **)(v160 + 9392);
  if ( v88 )
  {
    *((_DWORD *)v88 - 1) = 0;
    if ( v54 )
    {
      for ( j = 0; (unsigned int)j < *((_DWORD *)v54 - 1); *((_DWORD *)v88 - 1) = v104 )
      {
        v106 = *((_DWORD *)v88 - 1);
        if ( v106 == *((_DWORD *)v88 - 2) )
        {
          v108 = (3 * v106 + 1) >> 1;
          v109 = 8 * v108 + 8;
          if ( 8 * v106 + 8 >= v109 || v106 >= v108 )
          {
            v1 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v194, "Overflow encountered when expanding vector");
            *v1 = (char *)off_1C63128;
            sub_2333C0(v1 + 1, &v194);
            sub_233E40((__int64)&v194);
            __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v110 = (unsigned int *)sub_186B300(v88 - 1, v109);
          v111 = v160;
          v88 = v110 + 2;
          *v110 = v108;
          *(_QWORD *)(v111 + 9392) = v110 + 2;
          LODWORD(v110) = v110[1];
          v87 = (__int64)&v88[(unsigned int)v110];
          v104 = (_DWORD)v110 + 1;
        }
        else
        {
          v107 = v106;
          v104 = v106 + 1;
          v87 = (__int64)&v88[v107];
        }
LABEL_152:
        v105 = v54[j++];
        *(_QWORD *)v87 = v105;
      }
    }
  }
  else if ( v54 && *((_DWORD *)v54 - 1) )
  {
    v102 = (_QWORD *)sub_186B270(0x18u);
    *v102 = 2;
    j = 0;
    v88 = v102 + 1;
    *(_QWORD *)(v160 + 9392) = v102 + 1;
    v87 = (__int64)(v102 + 1);
    v104 = 1;
    goto LABEL_152;
  }
  *(__m128i *)v158 = _mm_unpacklo_epi64(
                       _mm_loadl_epi64(&v170),
                       (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  v233 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v235[0] = *(_OWORD *)v158;
  v243[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v240 != v178 )
  {
    v87 = v242[0] + 1LL;
    operator delete(v240, v242[0] + 1LL);
  }
  *((_QWORD *)&v235[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v175);
  v89 = v176;
  *(__int64 *)((char *)&v233 + *(_QWORD *)(v167 - 24)) = v168;
  *(_QWORD *)&v235[0] = v165;
  *(_QWORD *)((char *)v235 + *(_QWORD *)(v165 - 24)) = v166;
  v233 = v163;
  *(__int64 *)((char *)&v233 + *(_QWORD *)(v163 - 24)) = v164;
  v234 = 0;
  v243[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v89);
  v221[0] = _mm_load_si128((const __m128i *)v158);
  v219 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v229[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v226 != v177 )
  {
    v87 = v228[0] + 1LL;
    operator delete(v226, v228[0] + 1LL);
  }
  *((_QWORD *)&v221[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v173);
  v52 = v174;
  *(char **)((char *)&v219 + *(_QWORD *)(v167 - 24)) = (char *)v168;
  *(_QWORD *)&v221[0] = v165;
  *(_QWORD *)((char *)v221 + *(_QWORD *)(v165 - 24)) = v166;
  v219 = (char *)v163;
  *(char **)((char *)&v219 + *(_QWORD *)(v163 - 24)) = (char *)v164;
  v220 = 0;
  v229[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v52);
LABEL_111:
  if ( (unsigned int)sub_180B130(v52) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(v48) )
    {
      sub_186A4C0(v48);
      v91 = sub_180B150(v52, v87);
      v92 = v188;
      v93 = v91;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v93, v92);
    }
    else
    {
      sub_180B150(v52, v87);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  *(__m128i *)v158 = _mm_unpacklo_epi64(
                       _mm_loadl_epi64(&v170),
                       (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v54 )
    sub_186B220(v54 - 1);
  if ( v188 != (void *)v170.m128i_i64[1] )
    operator delete(v188, v190[0] + 1LL);
  si128 = _mm_load_si128((const __m128i *)v158);
  v204 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v215[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v212 != v169 )
    operator delete(v212, v214[0] + 1LL);
  si128.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v171);
  v90 = v172;
  *(char **)((char *)&v204 + *(_QWORD *)(v167 - 24)) = (char *)v168;
  si128.m128i_i64[0] = v165;
  *(__int64 *)((char *)si128.m128i_i64 + *(_QWORD *)(v165 - 24)) = v166;
  v204 = (char *)v163;
  *(char **)((char *)&v204 + *(_QWORD *)(v163 - 24)) = (char *)v164;
  v205 = 0;
  v215[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v90);
}

