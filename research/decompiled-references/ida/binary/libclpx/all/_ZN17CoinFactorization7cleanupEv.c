__int64 __fastcall CoinFactorization::cleanup(CoinFactorization *this)
{
  _DWORD *v2; // rax
  __int64 v3; // r14
  CoinArrayWithLength *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r15
  CoinArrayWithLength *v7; // rdi
  int *v8; // rbp
  int v9; // eax
  int v10; // esi
  __int64 v11; // rsi
  int *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rax
  int i; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // esi
  int *v22; // rdx
  __int64 v23; // rdi
  int v24; // ecx
  __int64 v25; // r12
  std::ostream *v26; // rbp
  __int64 v27; // rbx
  int v28; // eax
  int v29; // r8d
  __int64 v30; // rsi
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // r11
  int v34; // eax
  int v35; // r8d
  int j; // edi
  __int64 v37; // rdx
  int *v38; // rcx
  int *v39; // rsi
  int *v40; // rdx
  int v41; // r10d
  int v42; // r9d
  int v43; // eax
  std::ostream *v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  __m128i si128; // xmm2
  unsigned int v48; // r9d
  __int64 v49; // r11
  __m128i v50; // xmm1
  __int64 v51; // rdx
  _DWORD *v52; // r14
  __int64 v53; // r12
  int v54; // esi
  int v55; // edi
  __int64 v56; // rdx
  int v57; // r10d
  __int64 v58; // rax
  unsigned int v59; // ecx
  int v60; // r8d
  unsigned int v61; // ebx
  __m128i *v62; // rdx
  unsigned int v63; // eax
  __m128i v64; // xmm0
  unsigned int v65; // ecx
  unsigned int v66; // edx
  int v67; // eax
  int v68; // esi
  unsigned int v69; // ecx
  int v70; // edx
  __int64 v71; // r11
  __int64 v72; // rdx
  _DWORD *v73; // r15
  __int64 v74; // r14
  int v75; // edx
  __int64 v76; // r9
  unsigned __int64 v77; // r10
  int v78; // edx
  int v79; // edi
  __int64 k; // xmm0_8
  __int64 v81; // rax
  __int64 *v82; // rcx
  int *v83; // rsi
  int *v84; // rax
  int v85; // r8d
  __int64 v86; // xmm1_8
  int v87; // edx
  int v88; // esi
  __int64 v89; // rcx
  __int64 v90; // rdx
  _DWORD *v91; // r8
  __int64 v92; // rdx
  int v93; // edi
  bool v94; // zf
  __int64 v95; // rcx
  _DWORD *v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rax
  int v99; // edi
  bool v100; // cc
  std::ostream *v101; // rsi
  std::ostream *v102; // rax
  int v103; // eax
  __int64 v104; // r8
  unsigned __int64 v105; // rcx
  _DWORD *v106; // r9
  __int64 v107; // r8
  __int64 v108; // r10
  int v109; // eax
  int v110; // edx
  int v111; // esi
  int *v112; // rdx
  __int64 v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rax
  int v116; // eax
  int v117; // esi
  __int64 v118; // rdx
  __int64 v119; // r11
  __int64 v120; // rdi
  __int64 v121; // r15
  __int64 v122; // rax
  int v123; // ecx
  int v124; // esi
  _DWORD *v125; // rcx
  __int64 m; // r10
  int v127; // eax
  double v128; // xmm1_8
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r9
  __int64 v132; // rsi
  double v133; // xmm0_8
  _DWORD *v134; // rdi
  int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rdi
  _DWORD *v138; // rsi
  __int64 v139; // rax
  int v140; // ecx
  __int64 v141; // r10
  __int64 v142; // rdi
  int v143; // ebp
  int v144; // ecx
  unsigned int v145; // edx
  __int64 v146; // rax
  __int64 v147; // rsi
  __int64 v148; // r9
  int v149; // edx
  int v150; // r12d
  int v151; // ebx
  int *v152; // rax
  unsigned __int64 v153; // rcx
  __int64 v154; // rdx
  int v155; // eax
  CoinArrayWithLength *v156; // rdi
  int v157; // ecx
  int v158; // ebp
  int v159; // eax
  int v160; // edx
  int v161; // ecx
  int v162; // eax
  int v163; // ebx
  int v164; // eax
  int v165; // esi
  __int64 v166; // rdx
  int v167; // esi
  int v168; // eax
  int v169; // eax
  _DWORD *v170; // rcx
  _OWORD *v171; // rdx
  __int64 v172; // rax
  int v173; // edx
  int v174; // esi
  int v175; // edx
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rax
  __int64 result; // rax
  double v180; // xmm0_8
  __int64 v181; // rdi
  _OWORD *v182; // rax
  __int64 v183; // rax
  char v184; // si
  std::ostream *v185; // rax
  __int64 v186; // rcx
  _OWORD *v187; // rax
  _DWORD *v188; // rax
  int v189; // eax
  __int64 v190; // rdx
  std::ostream *v191; // rax
  _BYTE *v192; // rbx
  char v193; // si
  std::ostream *v194; // rax
  __int64 (__fastcall *v195)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v196)(__int64, unsigned int); // rax
  _DWORD *v197; // [rsp+8h] [rbp-80h]
  __int64 v198; // [rsp+10h] [rbp-78h]
  std::ostream *v199; // [rsp+18h] [rbp-70h]
  std::ostream *v200; // [rsp+18h] [rbp-70h]
  std::ostream *v201; // [rsp+18h] [rbp-70h]
  int v202; // [rsp+20h] [rbp-68h]
  __int64 v203; // [rsp+20h] [rbp-68h]
  __int64 v204; // [rsp+20h] [rbp-68h]
  __int64 v205; // [rsp+20h] [rbp-68h]
  int *v206; // [rsp+28h] [rbp-60h]
  int v207; // [rsp+34h] [rbp-54h]
  int v208; // [rsp+34h] [rbp-54h]
  __int64 v209; // [rsp+38h] [rbp-50h]
  __int64 v210; // [rsp+40h] [rbp-48h]
  CoinArrayWithLength *v211; // [rsp+48h] [rbp-40h]

  CoinFactorization::getColumnSpace(this, 0, 0x3FFFFFFF);
  v211 = (CoinFactorization *)((char *)this + 256);
  CoinArrayWithLength::swap((CoinFactorization *)((char *)this + 232), (CoinFactorization *)((char *)this + 256));
  v2 = *((_DWORD **)this + 81);
  if ( *((int *)this + 164) <= -2 )
    v2 = nullptr;
  v197 = v2;
  v202 = v2[*((int *)this + 13)];
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 448));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 472));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 304));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 328));
  v3 = *((_QWORD *)this + 26);
  v4 = (CoinFactorization *)((char *)this + 400);
  v5 = *((_QWORD *)this + 29);
  v6 = *((_QWORD *)this + 32);
  v7 = (CoinFactorization *)((char *)this + 104);
  if ( *((int *)this + 54) <= -2 )
    v3 = 0;
  if ( *((int *)this + 60) <= -2 )
    v5 = 0;
  v198 = v5;
  if ( *((int *)this + 66) <= -2 )
    v6 = 0;
  CoinArrayWithLength::swap(v7, v4);
  v8 = *((int **)this + 13);
  if ( *((int *)this + 28) <= -2 )
    v8 = nullptr;
  v8[*((int *)this + 8)] = 0;
  v206 = v8;
  v9 = *((_DWORD *)this + 10) + 1;
  v10 = 4 * v9;
  if ( v9 < 0 )
    v10 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 128), v10);
  v11 = *((_QWORD *)this + 16);
  if ( *((int *)this + 34) <= -2 )
    v11 = 0;
  if ( *((int *)this + 8) > 0 )
  {
    v12 = v8;
    v13 = 0;
    do
    {
      v14 = *v12++;
      *(_DWORD *)(v11 + 4 * v14) = v13++;
    }
    while ( *((_DWORD *)this + 8) > v13 );
  }
  v15 = *((_DWORD *)this + 11);
  *((_DWORD *)this + 18) = 0;
  if ( v15 > 0 )
  {
    v16 = 1;
    for ( i = 0; ; i = *((_DWORD *)this + 18) )
    {
      v18 = *(_DWORD *)(v198 + 4 * v16 - 4);
      *((_DWORD *)this + 18) = v18 + i;
      v197[v16 - 1] -= v18;
      v19 = v16++;
      if ( *((_DWORD *)this + 11) <= v19 )
        break;
    }
  }
  v20 = *((_DWORD *)this + 10) + 1;
  v21 = 4 * v20;
  if ( v20 < 0 )
    v21 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 152), v21);
  v22 = *((int **)this + 10);
  v23 = *((_QWORD *)this + 19);
  v24 = *((_DWORD *)this + 128);
  v25 = *((_QWORD *)this + 78);
  if ( *((int *)this + 22) <= -2 )
    v22 = nullptr;
  v26 = *((std::ostream **)this + 63);
  v199 = v26;
  v27 = *((_QWORD *)this + 75);
  if ( *((int *)this + 40) <= -2 )
    v23 = 0;
  if ( v24 < -1 )
    v26 = nullptr;
  if ( *((int *)this + 158) <= -2 )
    v25 = 0;
  if ( *((int *)this + 152) <= -2 )
    v27 = 0;
  if ( *((int *)this + 11) <= 0 )
  {
    v207 = 0;
  }
  else
  {
    v28 = 0;
    v29 = 0;
    do
    {
      v30 = *v22;
      *(_DWORD *)(v23 + 4 * v30) = v28;
      if ( (int)v30 >= 0 )
      {
        v31 = -1;
        if ( (_DWORD)v30 != v29 )
          v31 = v29;
        ++v29;
        *(_DWORD *)(v6 + 4 * v30) = v31;
      }
      v32 = *((_DWORD *)this + 11);
      ++v28;
      ++v22;
    }
    while ( v32 > v28 );
    v207 = v29;
    if ( v32 > 0 )
    {
      v33 = 1;
      do
      {
        v34 = *(_DWORD *)(v6 + 4 * v33 - 4);
        v35 = *(_DWORD *)(v198 + 4 * v33 - 4);
        *(_DWORD *)(v6 + 4 * v33 - 4) = -1;
        for ( j = v197[v33 - 1]; v34 >= 0; v35 = v42 )
        {
          v37 = 4LL * v34;
          v38 = (int *)(v6 + v37);
          v39 = (int *)(v198 + v37);
          v40 = &v197[(unsigned __int64)v37 / 4];
          v41 = *v40;
          v34 = *v38;
          v42 = *v39;
          *v39 = v35;
          *v38 = -1;
          *v40 = j;
          j = v41;
        }
        v43 = v33++;
      }
      while ( *((_DWORD *)this + 11) > v43 );
    }
    v24 = *((_DWORD *)this + 128);
  }
  v44 = nullptr;
  if ( v24 > -2 )
    v44 = v199;
  v200 = v44;
  if ( v202 )
  {
    v189 = v202;
    if ( v202 / 8 > 0 )
    {
      v190 = (unsigned int)(v202 / 8 - 1);
      v191 = v200;
      do
      {
        *(_OWORD *)v191 = -1;
        v191 = (std::ostream *)((char *)v191 + 32);
        *((_OWORD *)v191 - 1) = -1;
      }
      while ( (std::ostream *)((char *)v200 + 32 * v190 + 32) != v191 );
      v200 = (std::ostream *)((char *)v200 + 32 * (int)v190 + 32);
      v189 = v202;
    }
    switch ( v189 % 8 )
    {
      case 1:
        goto LABEL_218;
      case 2:
        goto LABEL_217;
      case 3:
        goto LABEL_216;
      case 4:
        goto LABEL_215;
      case 5:
        goto LABEL_214;
      case 6:
        goto LABEL_213;
      case 7:
        *((_DWORD *)v200 + 6) = -1;
LABEL_213:
        *((_DWORD *)v200 + 5) = -1;
LABEL_214:
        *((_DWORD *)v200 + 4) = -1;
LABEL_215:
        *((_DWORD *)v200 + 3) = -1;
LABEL_216:
        *((_DWORD *)v200 + 2) = -1;
LABEL_217:
        *((_DWORD *)v200 + 1) = -1;
LABEL_218:
        *(_DWORD *)v200 = -1;
        break;
      default:
        break;
    }
  }
  v45 = *((int *)this + 144);
  v46 = *((_DWORD *)this + 8);
  if ( (int)v45 >= v46 )
  {
LABEL_79:
    if ( (_DWORD)v45 )
      goto LABEL_193;
    if ( v46 > 0 )
      goto LABEL_81;
LABEL_206:
    v88 = 0;
    goto LABEL_83;
  }
  v203 = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
  v48 = 0;
  v49 = (int)v45 + 1;
  v210 = v3;
  v209 = v27;
  v50 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  v51 = v45 - v49;
  v52 = &v197[v51];
  v53 = v51 * 4 + v198;
  do
  {
    v54 = v52[v49];
    v55 = v54 + *(_DWORD *)(v53 + 4 * v49);
    if ( v54 >= v55 )
      goto LABEL_68;
    v56 = v54;
    v57 = *(_DWORD *)(v53 + 4 * v49);
    v58 = -(int)(((unsigned __int64)v26 + 4 * v54) >> 2) & 3;
    if ( (unsigned int)(v57 - 1) <= 5 )
    {
      v65 = v48;
    }
    else
    {
      if ( (_DWORD)v58 )
      {
        *((_DWORD *)v26 + v54) = v48;
        v59 = v48 + 1;
        v60 = v54 + 1;
        if ( (_DWORD)v58 != 1 )
        {
          *((_DWORD *)v26 + v60) = v59;
          v60 = v54 + 2;
          v59 = v48 + 2;
          if ( (_DWORD)v58 != 2 )
          {
            v59 = v48 + 3;
            *((_DWORD *)v26 + v60) = v48 + 2;
            v60 = v54 + 3;
          }
        }
      }
      else
      {
        v60 = v52[v49];
        v59 = v48;
      }
      v61 = v57 - v58;
      v62 = (__m128i *)((char *)v26 + 4 * v54 + 4 * v58);
      v63 = 0;
      v64 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v59), 0), si128);
      do
      {
        ++v63;
        ++v62;
        v62[-1] = v64;
        v64 = _mm_add_epi32(v64, v50);
      }
      while ( v63 < v61 >> 2 );
      v54 = (v61 & 0xFFFFFFFC) + v60;
      v65 = (v61 & 0xFFFFFFFC) + v59;
      v56 = v54;
      if ( (v61 & 0xFFFFFFFC) == v61 )
        goto LABEL_67;
    }
    *((_DWORD *)v26 + v56) = v65;
    if ( v55 > v54 + 1 )
    {
      *((_DWORD *)v26 + v54 + 1) = v65 + 1;
      if ( v55 > v54 + 2 )
      {
        *((_DWORD *)v26 + v54 + 2) = v65 + 2;
        if ( v55 > v54 + 3 )
        {
          v66 = v65 + 4;
          *((_DWORD *)v26 + v54 + 3) = v65 + 3;
          v67 = v54 + 4;
          if ( v55 > v54 + 4 )
          {
            v68 = v54 + 5;
            v69 = v65 + 5;
            *((_DWORD *)v26 + v67) = v66;
            if ( v55 > v68 )
              *((_DWORD *)v26 + v68) = v69;
          }
        }
      }
    }
LABEL_67:
    v46 = *((_DWORD *)this + 8);
    v48 += v57;
LABEL_68:
    v70 = v49++;
  }
  while ( v70 < v46 );
  v45 = *((int *)this + 144);
  v25 = v203;
  v27 = v209;
  v3 = v210;
  if ( (int)v45 < v46 )
  {
    v204 = v6;
    v71 = (int)v45 + 1;
    v72 = v45 - v71;
    v73 = &v197[v72];
    v74 = v72 * 4 + v198;
    do
    {
      v75 = v73[v71];
      if ( v75 < v75 + *(_DWORD *)(v74 + 4 * v71) )
      {
        v76 = 4LL * v75;
        v77 = 4 * (v75 + (unsigned __int64)(unsigned int)(*(_DWORD *)(v74 + 4 * v71) - 1) + 1);
        do
        {
          v78 = *(_DWORD *)((char *)v26 + v76);
          v79 = *(_DWORD *)(v25 + v76);
          for ( k = *(_QWORD *)(v209 + 2 * v76); v78 != -1; k = v86 )
          {
            v81 = 4LL * v78;
            v82 = (__int64 *)(v209 + 8LL * v78);
            v83 = (int *)((char *)v26 + v81);
            v84 = (int *)(v25 + v81);
            v85 = *v84;
            v86 = *v82;
            v78 = *v83;
            *v83 = -1;
            *v84 = v79;
            *v82 = k;
            v79 = v85;
          }
          v76 += 4;
        }
        while ( v77 != v76 );
        v46 = *((_DWORD *)this + 8);
      }
      v87 = v71++;
    }
    while ( v87 < v46 );
    v45 = *((int *)this + 144);
    v3 = v210;
    v6 = v204;
    goto LABEL_79;
  }
  v88 = 0;
  if ( (_DWORD)v45 )
  {
LABEL_193:
    if ( (int)v45 / 8 <= 0 )
    {
      v188 = v197;
    }
    else
    {
      v186 = (unsigned int)((int)v45 / 8 - 1);
      v187 = v197;
      do
      {
        *v187 = 0;
        v187 += 2;
        *(v187 - 1) = 0;
      }
      while ( &v197[8 * v186 + 8] != (_DWORD *)v187 );
      v188 = &v197[8 * (int)v186 + 8];
    }
    switch ( (int)v45 % 8 )
    {
      case 1:
        goto LABEL_204;
      case 2:
        goto LABEL_203;
      case 3:
        goto LABEL_202;
      case 4:
        goto LABEL_201;
      case 5:
        goto LABEL_200;
      case 6:
        goto LABEL_199;
      case 7:
        v188[6] = 0;
LABEL_199:
        v188[5] = 0;
LABEL_200:
        v188[4] = 0;
LABEL_201:
        v188[3] = 0;
LABEL_202:
        v188[2] = 0;
LABEL_203:
        v188[1] = 0;
LABEL_204:
        *v188 = 0;
        break;
      default:
        break;
    }
    v45 = *((int *)this + 144);
    v46 = *((_DWORD *)this + 8);
    if ( (int)v45 >= v46 )
      goto LABEL_206;
LABEL_81:
    v88 = 0;
    v89 = (int)v45 + 1;
    v90 = v45 - v89;
    v91 = &v197[v90];
    v92 = v198 + v90 * 4;
    do
    {
      v91[v89] = v88;
      v46 = *((_DWORD *)this + 8);
      v93 = v89;
      v88 += *(_DWORD *)(v92 + 4 * v89++);
    }
    while ( v46 > v93 );
  }
LABEL_83:
  v94 = (*((_BYTE *)this + 496) & 8) == 0;
  *((_DWORD *)this + 146) = v88;
  if ( !v94 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    if ( *((_DWORD *)this + 216) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    v183 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    if ( v183 )
    {
      if ( *(_BYTE *)(v183 + 56) )
      {
        v184 = *(_BYTE *)(v183 + 67);
      }
      else
      {
        v205 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
        std::ctype<char>::_M_widen_init();
        v184 = 10;
        v195 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v205 + 48LL);
        if ( v195 != std::ctype<char>::do_widen )
          v184 = v195(v205, 10u);
      }
      v185 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v184);
      std::ostream::flush(v185);
      v88 = *((_DWORD *)this + 146);
      v46 = *((_DWORD *)this + 8);
      goto LABEL_84;
    }
    goto LABEL_237;
  }
LABEL_84:
  v95 = *((_QWORD *)this + 44);
  *((_DWORD *)this + 18) += *((_DWORD *)this + 176) + *((_DWORD *)this + 216) * *((_DWORD *)this + 216);
  v96 = *((_DWORD **)this + 47);
  if ( *((int *)this + 90) <= -2 )
    v95 = 0;
  if ( *((int *)this + 96) <= -2 )
    v96 = nullptr;
  if ( 10 * v46 < v88 || v46 <= 199 )
  {
    CoinArrayWithLength::conditionalDelete(v211);
  }
  else
  {
    v97 = *((int *)this + 11);
    if ( (int)v97 > 0 )
    {
      v98 = 1;
      do
      {
        v99 = v98;
        v96[v98 - 1] = v98 - 2;
        *(_DWORD *)(v95 + 4 * v98 - 4) = v98;
        *(_DWORD *)(v6 + 4 * v98 - 4) = 0;
        v97 = *((int *)this + 11);
        ++v98;
      }
      while ( (int)v97 > v99 );
    }
    *(_DWORD *)(v95 + 4 * v97 - 4) = *((_DWORD *)this + 13);
    v96[*((int *)this + 13)] = *((_DWORD *)this + 11) - 1;
    *(_DWORD *)(v95 + 4LL * *((int *)this + 13)) = 0;
    *v96 = *((_DWORD *)this + 13);
  }
  v100 = *((_DWORD *)this + 140) <= -2;
  v101 = *((std::ostream **)this + 69);
  *((_DWORD *)this + 174) = *((_DWORD *)this + 15);
  v102 = nullptr;
  if ( !v100 )
    v102 = v101;
  *((_DWORD *)this + 145) = v207;
  *((_DWORD *)this + 14) = v207;
  v201 = v102;
  v103 = *((_DWORD *)this + 144);
  if ( v103 < v207 )
  {
    v104 = v103;
    v105 = 0;
    v106 = &v197[v104];
    v107 = v198 + v104 * 4;
    v108 = 4LL * (unsigned int)(v207 + ~v103) + 4;
    do
    {
      v109 = v106[v105 / 4];
      v110 = *(_DWORD *)(v107 + v105);
      *((_DWORD *)this + 18) += v110;
      v111 = v110 + v109;
      if ( v109 < v110 + v109 )
      {
        v112 = (int *)(v25 + 4LL * v109);
        v113 = v25 + 4 + 4 * ((unsigned int)(v111 - v109 - 1) + (__int64)v109);
        do
        {
          v114 = *v112++;
          v115 = v206[v114];
          *(v112 - 1) = v115;
          ++*(_DWORD *)(v3 + 4 * v115);
        }
        while ( (int *)v113 != v112 );
      }
      v105 += 4LL;
    }
    while ( v108 != v105 );
  }
  v116 = *((_DWORD *)this + 148) + 4;
  v117 = 4 * v116;
  if ( v116 < 0 )
    v117 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 672), v117);
  v118 = *((int *)this + 8);
  v119 = *((_QWORD *)this + 23);
  v120 = *((_QWORD *)this + 84);
  if ( *((int *)this + 170) <= -2 )
    v120 = 0;
  v121 = v120;
  if ( *((int *)this + 48) <= -2 )
    v119 = 0;
  if ( (int)v118 <= 0 )
  {
    v208 = 0;
  }
  else
  {
    v122 = 1;
    v123 = 0;
    do
    {
      *(_DWORD *)(v119 + 4 * v122 - 4) = v123;
      v118 = *((int *)this + 8);
      v124 = v122;
      v123 += *(_DWORD *)(v3 + 4 * v122++ - 4);
    }
    while ( (int)v118 > v124 );
    v208 = v123;
  }
  v125 = *((_DWORD **)this + 26);
  if ( *((int *)this + 54) <= -2 )
    v125 = nullptr;
  if ( (_DWORD)v118 )
  {
    if ( (int)v118 / 8 > 0 )
    {
      v181 = (unsigned int)((int)v118 / 8 - 1);
      v182 = v125;
      do
      {
        *v182 = 0;
        v182 += 2;
        *(v182 - 1) = 0;
      }
      while ( &v125[8 * v181 + 8] != (_DWORD *)v182 );
      v125 += 8 * (int)v181 + 8;
    }
    switch ( (int)v118 % 8 )
    {
      case 1:
        goto LABEL_184;
      case 2:
        goto LABEL_183;
      case 3:
        goto LABEL_182;
      case 4:
        goto LABEL_181;
      case 5:
        goto LABEL_180;
      case 6:
        goto LABEL_179;
      case 7:
        v125[6] = 0;
LABEL_179:
        v125[5] = 0;
LABEL_180:
        v125[4] = 0;
LABEL_181:
        v125[3] = 0;
LABEL_182:
        v125[2] = 0;
LABEL_183:
        v125[1] = 0;
LABEL_184:
        *v125 = 0;
        break;
      default:
        break;
    }
    v118 = *((int *)this + 8);
  }
  for ( m = *((int *)this + 144); (int)m < (int)v118; ++m )
  {
    v127 = v197[m];
    v128 = *((double *)v201 + m);
    if ( v127 < v127 + *(_DWORD *)(v198 + 4 * m) )
    {
      v129 = v127;
      v130 = v127 + 1LL;
      v131 = v130 + (unsigned int)(*(_DWORD *)(v198 + 4 * m) - 1);
      while ( 1 )
      {
        v132 = *(int *)(v25 + 4 * v129);
        v133 = *(double *)(v27 + 8 * v129) * v128;
        v134 = (_DWORD *)(v3 + 4 * v132);
        v135 = (*v134)++;
        v136 = *(_DWORD *)(v119 + 4 * v132) + v135;
        *((_DWORD *)v26 + v136) = m;
        *(_DWORD *)(v121 + 4 * v136) = v129;
        *(double *)(v27 + 8 * v129) = v133;
        v129 = v130;
        if ( v131 == v130 )
          break;
        ++v130;
      }
      v118 = *((int *)this + 8);
    }
  }
  v137 = *((_QWORD *)this + 50);
  v138 = *((_DWORD **)this + 53);
  if ( *((int *)this + 102) <= -2 )
    v137 = 0;
  if ( *((int *)this + 108) <= -2 )
    v138 = nullptr;
  if ( (int)v118 > 0 )
  {
    v139 = 1;
    do
    {
      v140 = v139;
      v138[v139 - 1] = v139 - 2;
      *(_DWORD *)(v137 + 4 * v139 - 4) = v139;
      ++v139;
      v118 = *((int *)this + 8);
    }
    while ( (int)v118 > v140 );
  }
  v141 = *((_QWORD *)this + 92);
  *(_DWORD *)(v137 + 4 * v118 - 4) = *((_DWORD *)this + 10);
  v138[*((int *)this + 10)] = *((_DWORD *)this + 8) - 1;
  *(_DWORD *)(v137 + 4LL * *((int *)this + 10)) = 0;
  v142 = *((_QWORD *)this + 95);
  *v138 = *((_DWORD *)this + 10);
  *(_DWORD *)(v119 + 4LL * *((int *)this + 10)) = v208;
  v143 = *((_DWORD *)this + 8);
  v144 = *((_DWORD *)this + 18);
  if ( *((int *)this + 192) <= -2 )
    v142 = 0;
  if ( *((int *)this + 186) <= -2 )
    v141 = 0;
  v145 = v143 - 1;
  if ( v143 - 1 >= 0 )
  {
    v146 = (int)v145;
    v147 = (int)v145 - 1LL;
    v148 = v147 - v145;
    while ( 1 )
    {
      v149 = *(_DWORD *)(v142 + 4 * v146 + 4);
      v150 = *(_DWORD *)(v142 + 4 * v146);
      v151 = v146;
      v144 += v149 - v150;
      *((_DWORD *)this + 18) = v144;
      if ( v150 >= v149 )
      {
        v146 = v147;
        if ( v148 == v147 )
          break;
      }
      else
      {
        v152 = (int *)(v141 + 4LL * v150);
        v153 = v141 + 4 + 4 * (v150 + (unsigned __int64)(unsigned int)(v149 - 1 - v150));
        do
        {
          v154 = *v152++;
          *(v152 - 1) = v206[v154];
        }
        while ( (int *)v153 != v152 );
        v144 = *((_DWORD *)this + 18);
        v143 = v151;
        v146 = v147;
        if ( v148 == v147 )
          break;
      }
      --v147;
    }
  }
  *((_DWORD *)this + 174) -= v143;
  *((_DWORD *)this + 175) = v143;
  *((_DWORD *)this + 19) = v144;
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 528));
  v155 = *((_DWORD *)this + 176);
  v156 = (CoinFactorization *)((char *)this + 816);
  v157 = *((_DWORD *)this + 8);
  v158 = *((_DWORD *)this + 177) - v155;
  v159 = (v157 + *((_DWORD *)this + 147) + v155 - 1) / v157;
  v160 = *((_DWORD *)this + 16);
  v161 = 2 * v157;
  v162 = v160 * 2 * v159;
  if ( v161 >= v162 )
    v162 = v161;
  v163 = v162;
  if ( *((int *)this + 66) >= -1 && *((_QWORD *)this + 32) )
  {
    v158 /= 2;
    v164 = v160 + *((_DWORD *)this + 13) + 2;
    v165 = 4 * v164;
    if ( v164 < 0 )
      v165 = -1;
    CoinArrayWithLength::conditionalNew(v156, v165);
    v166 = *((_QWORD *)this + 102);
    if ( *((int *)this + 206) <= -2 )
      v166 = 0;
    v167 = *((_DWORD *)this + 13) + 1;
    if ( *((_DWORD *)this + 13) != -1 )
    {
      v168 = *((_DWORD *)this + 13) + 8;
      if ( v167 >= 0 )
        v168 = *((_DWORD *)this + 13) + 1;
      v169 = v168 >> 3;
      v170 = (_DWORD *)(v166 + 4LL * *((int *)this + 16) + 4);
      if ( v169 > 0 )
      {
        v171 = (_OWORD *)(v166 + 4LL * *((int *)this + 16) + 4);
        v172 = (unsigned int)(v169 - 1);
        do
        {
          *v171 = 0;
          v171 += 2;
          *(v171 - 1) = 0;
        }
        while ( v171 != (_OWORD *)&v170[8 * v172 + 8] );
        v170 += 8 * (int)v172 + 8;
      }
      switch ( v167 % 8 )
      {
        case 1:
          goto LABEL_229;
        case 2:
          goto LABEL_228;
        case 3:
          goto LABEL_227;
        case 4:
          goto LABEL_226;
        case 5:
          goto LABEL_225;
        case 6:
          goto LABEL_224;
        case 7:
          v170[6] = 0;
LABEL_224:
          v170[5] = 0;
LABEL_225:
          v170[4] = 0;
LABEL_226:
          v170[3] = 0;
LABEL_227:
          v170[2] = 0;
LABEL_228:
          v170[1] = 0;
LABEL_229:
          *v170 = 0;
          break;
        default:
          break;
      }
    }
  }
  else
  {
    v173 = v160 + 1;
    v174 = 4 * v173;
    if ( v173 < 0 )
      v174 = -1;
    CoinArrayWithLength::conditionalNew(v156, v174);
  }
  v175 = *((_DWORD *)this + 180);
  v176 = *((_QWORD *)this + 89);
  *((_DWORD *)this + 198) = 0;
  *((_DWORD *)this + 199) = v158;
  v100 = v175 <= -2;
  v177 = *((int *)this + 176);
  if ( v100 )
    v176 = 0;
  v100 = *((_DWORD *)this + 186) <= -2;
  *((_QWORD *)this + 100) = v176 + 8 * v177;
  v178 = *((_QWORD *)this + 92);
  if ( v100 )
    v178 = 0;
  result = v178 + 4 * v177;
  *((_QWORD *)this + 101) = result;
  if ( v158 >= v163 )
    goto LABEL_170;
  if ( (*((_BYTE *)this + 496) & 4) == 0 )
    goto LABEL_168;
  std::__ostream_insert<char,std::char_traits<char>>();
  v192 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v192 )
LABEL_237:
    std::__throw_bad_cast();
  if ( v192[56] )
  {
    v193 = v192[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v193 = 10;
    v196 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v192 + 48LL);
    if ( v196 != std::ctype<char>::do_widen )
      v193 = v196((__int64)v192, 10u);
  }
  v194 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v193);
  result = std::ostream::flush(v194);
LABEL_168:
  v180 = *((double *)this + 2);
  if ( v180 == 0.0 )
  {
    result = 0x3FF199999999999ALL;
    *((_QWORD *)this + 2) = 0x3FF199999999999ALL;
  }
  else
  {
    *((double *)this + 2) = v180 * 1.1;
  }
LABEL_170:
  *((_DWORD *)this + 197) = 0;
  return result;
}

