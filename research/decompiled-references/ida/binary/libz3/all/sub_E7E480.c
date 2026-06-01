__int64 __fastcall sub_E7E480(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // r14d
  __int64 v5; // r13
  bool v6; // zf
  __int64 v7; // rax
  int v8; // r9d
  __int64 *v9; // rbx
  __int64 *i; // r15
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // eax
  _QWORD *v22; // r14
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // rbx
  _QWORD *v31; // rdi
  __int64 v32; // r10
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rax
  _QWORD *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rcx
  _QWORD *v42; // rdx
  _QWORD *v43; // rbx
  __int64 v44; // rsi
  int v45; // eax
  _QWORD *v46; // rdi
  __int64 v47; // rax
  _DWORD *v48; // rax
  unsigned int v49; // eax
  unsigned int v50; // r10d
  size_t v51; // rsi
  unsigned int v52; // r14d
  unsigned int *v53; // rax
  __int64 v54; // rdx
  _DWORD *v55; // rcx
  __int64 v56; // rsi
  _QWORD *v57; // rdi
  _QWORD *v58; // rax
  unsigned int v59; // ecx
  size_t v60; // rsi
  unsigned int v61; // r14d
  unsigned int *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // r14
  int v66; // edx
  _QWORD *v67; // r15
  int v68; // eax
  __int64 v69; // r13
  _QWORD *v70; // r15
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rcx
  _QWORD *v74; // rdx
  _QWORD *v75; // rbx
  __int64 v76; // rsi
  int v77; // eax
  _QWORD *v78; // rdi
  __int64 v79; // rax
  _DWORD *v80; // rax
  unsigned int v81; // eax
  unsigned int v82; // r10d
  size_t v83; // rsi
  unsigned int v84; // r14d
  unsigned int *v85; // rax
  __int64 v86; // rdx
  _DWORD *v87; // rcx
  __int64 v88; // rsi
  _QWORD *v89; // rdi
  _QWORD *v90; // rax
  unsigned int v91; // ecx
  size_t v92; // rsi
  unsigned int v93; // r14d
  unsigned int *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rbx
  __int64 v97; // r14
  int v98; // edx
  _QWORD *v99; // r15
  __int64 v100; // rbx
  char *v101; // rbx
  char *v102; // r14
  __int64 v103; // rsi
  __int64 v104; // rdi
  int *v105; // rbx
  int *v106; // r14
  __int64 v107; // rsi
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  char *v111; // rax
  int *v112; // rdi
  unsigned __int64 v113; // rax
  __int64 v114; // rcx
  char *v115; // rax
  char *v116; // rdi
  unsigned __int64 v117; // rax
  __int64 v118; // rcx
  unsigned __int64 v119; // rax
  __int64 v120; // rsi
  unsigned __int64 v121; // rax
  __int64 v122; // rsi
  _DWORD *v123; // rax
  int v124; // eax
  __int64 j; // r10
  _DWORD *v126; // rax
  char **exception; // r14
  char **v128; // r14
  char **v129; // r14
  char **v130; // r14
  __int64 v131; // [rsp+0h] [rbp-340h]
  __int64 v132; // [rsp+8h] [rbp-338h]
  __int64 v133; // [rsp+8h] [rbp-338h]
  __int64 *v134; // [rsp+18h] [rbp-328h]
  int *v135; // [rsp+20h] [rbp-320h]
  void *v136; // [rsp+28h] [rbp-318h]
  __int64 v137; // [rsp+28h] [rbp-318h]
  void *v138; // [rsp+30h] [rbp-310h]
  void *v139; // [rsp+38h] [rbp-308h]
  int v140; // [rsp+40h] [rbp-300h]
  __int64 v141; // [rsp+40h] [rbp-300h]
  __int64 v142; // [rsp+40h] [rbp-300h]
  int v143; // [rsp+48h] [rbp-2F8h]
  __int64 v144; // [rsp+48h] [rbp-2F8h]
  __int64 v145; // [rsp+48h] [rbp-2F8h]
  __int64 v146; // [rsp+48h] [rbp-2F8h]
  __int64 v147; // [rsp+50h] [rbp-2F0h]
  __int64 v148; // [rsp+50h] [rbp-2F0h]
  _QWORD *v149; // [rsp+58h] [rbp-2E8h]
  __int64 v150; // [rsp+58h] [rbp-2E8h]
  int v151[2]; // [rsp+60h] [rbp-2E0h]
  __int64 *v152; // [rsp+60h] [rbp-2E0h]
  int v153; // [rsp+68h] [rbp-2D8h]
  __int64 v154; // [rsp+68h] [rbp-2D8h]
  _DWORD *v155; // [rsp+70h] [rbp-2D0h]
  __int64 *v156; // [rsp+78h] [rbp-2C8h]
  int v157[2]; // [rsp+78h] [rbp-2C8h]
  int v158; // [rsp+78h] [rbp-2C8h]
  int v159; // [rsp+78h] [rbp-2C8h]
  int v160; // [rsp+78h] [rbp-2C8h]
  int v161; // [rsp+78h] [rbp-2C8h]
  int v162; // [rsp+80h] [rbp-2C0h]
  __int64 v163; // [rsp+88h] [rbp-2B8h] BYREF
  int v164[2]; // [rsp+90h] [rbp-2B0h] BYREF
  __int64 v165; // [rsp+98h] [rbp-2A8h]
  __int64 v166; // [rsp+A0h] [rbp-2A0h] BYREF
  __int64 v167; // [rsp+A8h] [rbp-298h]
  __int64 v168; // [rsp+B0h] [rbp-290h] BYREF
  __int64 v169; // [rsp+B8h] [rbp-288h]
  __int64 v170; // [rsp+C0h] [rbp-280h] BYREF
  __int64 v171; // [rsp+C8h] [rbp-278h]
  __int64 v172; // [rsp+D0h] [rbp-270h] BYREF
  int v173; // [rsp+D8h] [rbp-268h]
  int v174; // [rsp+E0h] [rbp-260h]
  int v175; // [rsp+E8h] [rbp-258h]
  __int64 v176; // [rsp+F0h] [rbp-250h]
  void *v177; // [rsp+F8h] [rbp-248h]
  __int64 v178; // [rsp+100h] [rbp-240h]
  int v179; // [rsp+108h] [rbp-238h] BYREF
  int v180; // [rsp+110h] [rbp-230h]
  int v181; // [rsp+118h] [rbp-228h]
  int v182; // [rsp+120h] [rbp-220h]
  int v183; // [rsp+128h] [rbp-218h]
  int v184; // [rsp+130h] [rbp-210h]
  int v185; // [rsp+138h] [rbp-208h]
  int v186; // [rsp+140h] [rbp-200h]
  int v187; // [rsp+148h] [rbp-1F8h]
  int v188; // [rsp+150h] [rbp-1F0h]
  char v189; // [rsp+158h] [rbp-1E8h]
  __int64 v190; // [rsp+190h] [rbp-1B0h] BYREF
  void *ptr; // [rsp+198h] [rbp-1A8h]
  __int64 v192; // [rsp+1A0h] [rbp-1A0h]
  _BYTE v193[136]; // [rsp+1A8h] [rbp-198h] BYREF
  int v194[2]; // [rsp+230h] [rbp-110h] BYREF
  int v195; // [rsp+238h] [rbp-108h]
  __int16 v196; // [rsp+23Ch] [rbp-104h]
  int v197; // [rsp+24Ch] [rbp-F4h]
  __int128 v198; // [rsp+258h] [rbp-E8h]
  __int128 v199; // [rsp+268h] [rbp-D8h]
  char *v200; // [rsp+278h] [rbp-C8h]
  __int64 v201; // [rsp+280h] [rbp-C0h]
  char v202; // [rsp+288h] [rbp-B8h] BYREF

  v3 = 1;
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_WORD *)(a2 + 4) == 2;
  v155 = (_DWORD *)a2;
  v134 = a3;
  v163 = v5;
  v156 = &v163;
  if ( !v6 )
    goto LABEL_2;
  v3 = *(_DWORD *)(a2 + 16);
  if ( !v3 )
  {
    v3 = 1;
    if ( *(_WORD *)(v5 + 4) )
      goto LABEL_2;
    v123 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
    if ( !v123 || *v123 || v123[1] != 6 )
      goto LABEL_2;
LABEL_207:
    v3 = *(_DWORD *)(v5 + 24);
    v156 = (__int64 *)(v5 + 32);
    goto LABEL_2;
  }
  if ( v3 != 1 )
  {
    v3 = 1;
    goto LABEL_2;
  }
  if ( !*(_WORD *)(v5 + 4) )
  {
    v126 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
    if ( v126 )
    {
      if ( !*v126 && v126[1] == 5 )
        goto LABEL_207;
    }
  }
LABEL_2:
  v7 = *(_QWORD *)a1;
  v190 = 0;
  v196 = 0;
  *(_QWORD *)v194 = v7;
  v200 = &v202;
  v195 = 256;
  v201 = 0x1000000000LL;
  v135 = v194;
  v197 = 0;
  v198 = 0;
  v199 = 0;
  sub_14DC230(v194, &v190);
  sub_18572D0(&v190);
  v9 = *(__int64 **)(a1 + 720);
  for ( i = &v9[*(unsigned int *)(a1 + 728)]; v9 < i; ++v9 )
  {
    while ( 1 )
    {
      v11 = *v9;
      if ( *v9 )
      {
        v12 = *(_QWORD *)(a1 + 712);
        v6 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v6 )
          break;
      }
      if ( ++v9 >= i )
        goto LABEL_8;
    }
    sub_15D7BC0(v12, v11);
  }
LABEL_8:
  v13 = 0;
  *(_DWORD *)(a1 + 728) = 0;
  v149 = (_QWORD *)(a1 + 736);
  v14 = 4LL * v3;
  if ( !v3 )
    goto LABEL_211;
  do
  {
    while ( 1 )
    {
      v15 = *(unsigned int *)(*(_QWORD *)(a1 + 680) + v13);
      if ( (_DWORD)v15 == -1 || !*(_QWORD *)(*(_QWORD *)(a1 + 672) + 8 * v15) )
        break;
      v13 += 4LL;
      if ( v14 == v13 )
        goto LABEL_18;
    }
    v16 = v156[v13 / 4];
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = *(_DWORD *)(a1 + 728);
    v18 = *(_DWORD *)(a1 + 732);
    if ( v17 >= v18 )
    {
      *(_QWORD *)v151 = v14;
      v30 = 2 * v18;
      v153 = v16;
      v19 = sub_186B270(8 * v30);
      v17 = *(_DWORD *)(a1 + 728);
      v31 = *(_QWORD **)(a1 + 720);
      v14 = *(_QWORD *)v151;
      if ( v17 )
      {
        if ( v17 - 1 <= 2 || (_QWORD *)v19 == v31 + 1 )
        {
          v8 = (int)v156;
          for ( j = 0; j != v17; ++j )
            *(_QWORD *)(v19 + j * 8) = v31[j];
        }
        else
        {
          v32 = 0;
          do
          {
            *(__m128i *)(v19 + v32 * 8) = _mm_loadu_si128((const __m128i *)&v31[v32]);
            v32 += 2;
          }
          while ( 2LL * (v17 >> 1) != v32 );
          if ( (v17 & 1) != 0 )
            *(_QWORD *)(v19 + 8LL * (v17 & 0xFFFFFFFE)) = v31[v17 & 0xFFFFFFFE];
        }
      }
      if ( v31 != v149 && v31 )
      {
        v147 = v19;
        v153 = v16;
        sub_186B220(v31);
        v17 = *(_DWORD *)(a1 + 728);
        v19 = v147;
        v14 = *(_QWORD *)v151;
      }
      *(_QWORD *)(a1 + 720) = v19;
      *(_DWORD *)(a1 + 732) = v30;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 720);
    }
    v13 += 4LL;
    *(_QWORD *)(v19 + 8LL * v17) = v16;
    *(_DWORD *)(a1 + 728) = v17 + 1;
  }
  while ( v14 != v13 );
LABEL_18:
  v20 = *(_DWORD *)(a1 + 728);
  if ( v20 == v3 )
  {
LABEL_211:
    ++v155[2];
    sub_E65BC0(*v134, v134[1]);
    *v134 = (__int64)v155;
    return sub_39A7A0((__int64)v194);
  }
  *(_QWORD *)v164 = 0;
  v165 = *(_QWORD *)a1;
  v21 = v155[4];
  if ( !v21 )
  {
    if ( (_BYTE)v195 )
      v124 = sub_14E0E20(
               (int)v194,
               v20,
               *(_QWORD *)(a1 + 720),
               (int)v164,
               v14,
               v8,
               v131,
               v132,
               (int)&v190,
               (int)v134,
               (int)v194,
               v136);
    else
      v124 = sub_14E03D0(
               (int)v194,
               v131,
               v132,
               (int)&v190,
               (int)v134,
               (int)v194,
               (int)v136,
               (int)v138,
               v139,
               v140,
               v143,
               v147,
               (int)v149,
               v151[0],
               v153,
               (int)v155,
               (int)v156,
               v162,
               v163,
               v164[0],
               v165,
               v166,
               v167,
               v168,
               v169,
               v170,
               v171,
               v172,
               v173,
               v174,
               v175,
               v176,
               (int)v177,
               v178,
               v179,
               v180,
               v181,
               v182,
               v183,
               v184,
               v185,
               v186,
               v187,
               v188,
               v189);
    if ( v124 == 5 )
      goto LABEL_58;
    goto LABEL_198;
  }
  if ( v21 == 1 )
  {
    v33 = *(_QWORD *)(a1 + 720);
    if ( HIBYTE(v195) )
    {
      sub_14E1930((int)v194, v131, v132, (int)&v190, (__int64)v134, (__int64)v194, (__int64)v136, v138, (int)v139);
    }
    else
    {
      if ( (_BYTE)v195 )
        v34 = sub_14DD000(v194, v20, v33, v164);
      else
        v34 = sub_14DC740(
                (int)v194,
                v20,
                v33,
                (int)v164,
                v14,
                v8,
                v131,
                v132,
                (int)&v190,
                (int)v134,
                (int)v194,
                v136,
                (int)v138,
                (int)v139,
                v140,
                v143,
                v147,
                (int)v149,
                v151[0],
                v153,
                (int)v155,
                (int)v156,
                v162,
                v163,
                v164[0],
                v165,
                v166,
                v167,
                v168,
                v169,
                v170,
                v171,
                v172,
                v173,
                v174,
                v175,
                v176,
                (int)v177,
                v178,
                v179,
                v180,
                v181,
                v182,
                v183,
                v184,
                v185,
                v186,
                v187);
      if ( v34 == 5 )
      {
LABEL_58:
        v35 = sub_15E1AF0(v194[0]);
        v5 = v35;
        if ( v35 )
          ++*(_DWORD *)(v35 + 8);
        sub_E65BC0(*(__int64 *)v164, v165);
        goto LABEL_23;
      }
    }
LABEL_198:
    v5 = *(_QWORD *)v164;
    goto LABEL_24;
  }
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
LABEL_23:
  *(_QWORD *)v164 = v5;
LABEL_24:
  v22 = *(_QWORD **)(a1 + 632);
  v154 = a1 + 80;
  if ( v22 )
    v23 = *((_DWORD *)v22 - 1);
  else
    v23 = 0;
  v144 = *(_QWORD *)(a1 + 88);
  sub_1584740(a1 + 80);
  v24 = *(_QWORD *)(a1 + 240);
  if ( v24 )
    *(_DWORD *)(v24 - 4) = 0;
  v25 = *(_QWORD *)(a1 + 608);
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  v150 = a1 + 248;
  sub_1584740(a1 + 248);
  v148 = a1 + 408;
  sub_1584740(a1 + 408);
  v26 = *(_QWORD *)(a1 + 240);
  if ( v26 )
    *(_DWORD *)(v26 - 4) = 0;
  v27 = *(_QWORD *)(a1 + 608);
  if ( v27 )
    *(_DWORD *)(v27 - 4) = 0;
  if ( v23 )
  {
    *(_QWORD *)v157 = &v22[v23];
    while ( 1 )
    {
      if ( !v26 || (v29 = *(_DWORD *)(v26 - 4), v29 == *(_DWORD *)(v26 - 8)) )
      {
        sub_23A6F0((unsigned int **)(a1 + 240));
        v26 = *(_QWORD *)(a1 + 240);
        v27 = *(_QWORD *)(a1 + 608);
        v29 = *(_DWORD *)(v26 - 4);
      }
      *(_QWORD *)(v26 + 8LL * v29) = *v22;
      *(_DWORD *)(v26 - 4) = v29 + 1;
      if ( !v27 || (v28 = *(unsigned int *)(v27 - 4), (_DWORD)v28 == *(_DWORD *)(v27 - 8)) )
      {
        sub_2FD3F0((unsigned int **)(a1 + 608));
        v27 = *(_QWORD *)(a1 + 608);
        v28 = *(unsigned int *)(v27 - 4);
      }
      ++v22;
      *(_DWORD *)(v27 + 4 * v28) = v23;
      ++*(_DWORD *)(v27 - 4);
      if ( v22 == *(_QWORD **)v157 )
        break;
      v26 = *(_QWORD *)(a1 + 240);
    }
  }
  v152 = (__int64 *)(a1 + 576);
  v166 = 0;
  v167 = v144;
  sub_E7C780(v154, v5, &v166, (__int64 *)(a1 + 576));
  v36 = 0;
  v137 = v166;
  v177 = &v179;
  v133 = v167;
  v37 = *(_QWORD *)a1;
  v178 = 0x1000000000LL;
  v176 = v37;
  v190 = v37;
  ptr = v193;
  v192 = 0x1000000000LL;
  if ( v155[18] )
  {
    while ( 1 )
    {
      v38 = *(_QWORD **)(a1 + 632);
      if ( v38 )
        v158 = *((_DWORD *)v38 - 1);
      else
        v158 = 0;
      v141 = *(_QWORD *)&v155[4 * (unsigned int)v155[5] + 20 + 2 * v36];
      v145 = *(_QWORD *)(a1 + 88);
      sub_1584740(v154);
      v39 = *(_QWORD *)(a1 + 240);
      if ( v39 )
        *(_DWORD *)(v39 - 4) = 0;
      v40 = *(_QWORD *)(a1 + 608);
      if ( v40 )
        *(_DWORD *)(v40 - 4) = 0;
      sub_1584740(v150);
      sub_1584740(v148);
      v41 = *(_QWORD **)(a1 + 240);
      if ( v41 )
        *((_DWORD *)v41 - 1) = 0;
      v42 = *(_QWORD **)(a1 + 608);
      if ( v42 )
        *((_DWORD *)v42 - 1) = 0;
      if ( v158 )
        break;
LABEL_90:
      v168 = 0;
      v169 = v145;
      sub_E7C780(v154, v141, &v168, v152);
      v64 = v168;
      v65 = v169;
      if ( v168 )
        ++*(_DWORD *)(v168 + 8);
      v66 = v178;
      if ( (unsigned int)v178 >= HIDWORD(v178) )
      {
        v160 = 2 * HIDWORD(v178);
        v111 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v178)));
        v66 = v178;
        v112 = (int *)v177;
        v67 = v111;
        if ( (_DWORD)v178 )
        {
          if ( (unsigned int)(v178 - 1) <= 2 || v111 == (char *)v177 + 8 )
          {
            v119 = 0;
            v120 = 8LL * (unsigned int)v178;
            do
            {
              v67[v119 / 8] = *(_QWORD *)&v112[v119 / 4];
              v119 += 8LL;
            }
            while ( v120 != v119 );
          }
          else
          {
            v113 = 0;
            v114 = 16LL * ((unsigned int)v178 >> 1);
            do
            {
              *(__m128i *)&v67[v113 / 8] = _mm_loadu_si128((const __m128i *)&v112[v113 / 4]);
              v113 += 16LL;
            }
            while ( v113 != v114 );
            if ( (v66 & 1) != 0 )
              v67[v66 & 0xFFFFFFFE] = *(_QWORD *)&v112[2 * (v66 & 0xFFFFFFFE)];
          }
        }
        if ( v112 != &v179 && v112 )
        {
          sub_186B220(v112);
          v66 = v178;
        }
        v177 = v67;
        HIDWORD(v178) = v160;
      }
      else
      {
        v67 = v177;
      }
      v67[v66] = v64;
      LODWORD(v178) = v66 + 1;
      if ( v64 )
      {
        v6 = (*(_DWORD *)(v64 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v65, v64);
      }
      if ( (unsigned int)++v36 >= v155[18] )
        goto LABEL_98;
    }
    v43 = &v38[v158];
    while ( v41 )
    {
      v49 = *((_DWORD *)v41 - 1);
      if ( v49 != *((_DWORD *)v41 - 2) )
      {
        v44 = v49;
        v45 = v49 + 1;
        v46 = &v41[v44];
        goto LABEL_76;
      }
      v50 = (3 * v49 + 1) >> 1;
      v51 = 8 * v50 + 8;
      v52 = v50;
      if ( 8 * v49 + 8 >= (unsigned int)v51 || v49 >= v50 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_E65BE0(&v172, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v172);
        sub_233E40((__int64)&v172);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v41 - 1, v51);
      v54 = v53[1];
      v55 = v53 + 2;
      v56 = *v38;
      *v53 = v52;
      *(_QWORD *)(a1 + 240) = v53 + 2;
      LODWORD(v53) = v54;
      v57 = &v55[2 * v54];
      v42 = *(_QWORD **)(a1 + 608);
      *v57 = v56;
      *(v55 - 1) = (_DWORD)v53 + 1;
      if ( !v42 )
      {
LABEL_86:
        v58 = (_QWORD *)sub_186B270(0x10u);
        v42 = v58 + 1;
        *(_QWORD *)(a1 + 608) = v58 + 1;
        *v58 = 2;
        v48 = v58 + 1;
        goto LABEL_79;
      }
LABEL_77:
      v47 = *((unsigned int *)v42 - 1);
      if ( (_DWORD)v47 == *((_DWORD *)v42 - 2) )
      {
        v59 = (unsigned int)(3 * v47 + 1) >> 1;
        v60 = 4 * v59 + 8;
        v61 = v59;
        if ( 4 * (int)v47 + 8 >= (unsigned int)v60 || (unsigned int)v47 >= v59 )
        {
          v128 = (char **)__cxa_allocate_exception(0x28u);
          sub_E65BE0(&v172, "Overflow encountered when expanding vector");
          *v128 = (char *)off_1C63128;
          sub_2333C0(v128 + 1, &v172);
          sub_233E40((__int64)&v172);
          __cxa_throw(v128, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v62 = (unsigned int *)sub_186B300(v42 - 1, v60);
        v42 = v62 + 2;
        *v62 = v61;
        v63 = v62[1];
        *(_QWORD *)(a1 + 608) = v42;
        v48 = (_DWORD *)v42 + v63;
      }
      else
      {
        v48 = (_DWORD *)v42 + v47;
      }
LABEL_79:
      ++v38;
      *v48 = v158;
      ++*((_DWORD *)v42 - 1);
      if ( v38 == v43 )
        goto LABEL_90;
      v41 = *(_QWORD **)(a1 + 240);
    }
    v110 = (_QWORD *)sub_186B270(0x18u);
    v41 = v110 + 1;
    v42 = *(_QWORD **)(a1 + 608);
    *(_QWORD *)(a1 + 240) = v110 + 1;
    v46 = v110 + 1;
    *v110 = 2;
    v45 = 1;
LABEL_76:
    *v46 = *v38;
    *((_DWORD *)v41 - 1) = v45;
    if ( !v42 )
      goto LABEL_86;
    goto LABEL_77;
  }
LABEL_98:
  v68 = (int)v155;
  v69 = 0;
  if ( v155[19] )
  {
    while ( 1 )
    {
      v70 = *(_QWORD **)(a1 + 632);
      if ( v70 )
        v159 = *((_DWORD *)v70 - 1);
      else
        v159 = 0;
      v142 = *(_QWORD *)&v155[4 * (unsigned int)v155[5] + 20 + 2 * v69];
      v146 = *(_QWORD *)(a1 + 88);
      sub_1584740(v154);
      v71 = *(_QWORD *)(a1 + 240);
      if ( v71 )
        *(_DWORD *)(v71 - 4) = 0;
      v72 = *(_QWORD *)(a1 + 608);
      if ( v72 )
        *(_DWORD *)(v72 - 4) = 0;
      sub_1584740(v150);
      sub_1584740(v148);
      v73 = *(_QWORD **)(a1 + 240);
      if ( v73 )
        *((_DWORD *)v73 - 1) = 0;
      v74 = *(_QWORD **)(a1 + 608);
      if ( v74 )
        *((_DWORD *)v74 - 1) = 0;
      if ( v159 )
        break;
LABEL_126:
      v170 = 0;
      v171 = v146;
      sub_E7C780(v154, v142, &v170, v152);
      v96 = v170;
      v97 = v171;
      if ( v170 )
        ++*(_DWORD *)(v170 + 8);
      v98 = v192;
      if ( (unsigned int)v192 >= HIDWORD(v192) )
      {
        v161 = 2 * HIDWORD(v192);
        v115 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v192)));
        v98 = v192;
        v116 = (char *)ptr;
        v99 = v115;
        if ( (_DWORD)v192 )
        {
          if ( (unsigned int)(v192 - 1) <= 2 || v115 == (char *)ptr + 8 )
          {
            v121 = 0;
            v122 = 8LL * (unsigned int)v192;
            do
            {
              v99[v121 / 8] = *(_QWORD *)&v116[v121];
              v121 += 8LL;
            }
            while ( v121 != v122 );
          }
          else
          {
            v117 = 0;
            v118 = 16LL * ((unsigned int)v192 >> 1);
            do
            {
              *(__m128i *)&v99[v117 / 8] = _mm_loadu_si128((const __m128i *)&v116[v117]);
              v117 += 16LL;
            }
            while ( v117 != v118 );
            if ( (v98 & 1) != 0 )
              v99[v98 & 0xFFFFFFFE] = *(_QWORD *)&v116[8 * (v98 & 0xFFFFFFFE)];
          }
        }
        if ( v116 != v193 && v116 )
        {
          sub_186B220(v116);
          v98 = v192;
        }
        ptr = v99;
        HIDWORD(v192) = v161;
      }
      else
      {
        v99 = ptr;
      }
      v99[v98] = v96;
      LODWORD(v192) = v98 + 1;
      if ( v96 )
      {
        v6 = (*(_DWORD *)(v96 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v97, v96);
      }
      v68 = (int)v155;
      if ( (unsigned int)++v69 >= v155[19] )
        goto LABEL_134;
    }
    v75 = &v70[v159];
    while ( v73 )
    {
      v81 = *((_DWORD *)v73 - 1);
      if ( v81 != *((_DWORD *)v73 - 2) )
      {
        v76 = v81;
        v77 = v81 + 1;
        v78 = &v73[v76];
        goto LABEL_112;
      }
      v82 = (3 * v81 + 1) >> 1;
      v83 = 8 * v82 + 8;
      v84 = v82;
      if ( 8 * v81 + 8 >= (unsigned int)v83 || v81 >= v82 )
      {
        v129 = (char **)__cxa_allocate_exception(0x28u);
        sub_E65BE0(&v172, "Overflow encountered when expanding vector");
        *v129 = (char *)off_1C63128;
        sub_2333C0(v129 + 1, &v172);
        sub_233E40((__int64)&v172);
        __cxa_throw(v129, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v85 = (unsigned int *)sub_186B300(v73 - 1, v83);
      v86 = v85[1];
      v87 = v85 + 2;
      v88 = *v70;
      *v85 = v84;
      *(_QWORD *)(a1 + 240) = v85 + 2;
      LODWORD(v85) = v86;
      v89 = &v87[2 * v86];
      v74 = *(_QWORD **)(a1 + 608);
      *v89 = v88;
      *(v87 - 1) = (_DWORD)v85 + 1;
      if ( !v74 )
      {
LABEL_122:
        v90 = (_QWORD *)sub_186B270(0x10u);
        v74 = v90 + 1;
        *(_QWORD *)(a1 + 608) = v90 + 1;
        *v90 = 2;
        v80 = v90 + 1;
        goto LABEL_115;
      }
LABEL_113:
      v79 = *((unsigned int *)v74 - 1);
      if ( (_DWORD)v79 == *((_DWORD *)v74 - 2) )
      {
        v91 = (unsigned int)(3 * v79 + 1) >> 1;
        v92 = 4 * v91 + 8;
        v93 = v91;
        if ( 4 * (int)v79 + 8 >= (unsigned int)v92 || (unsigned int)v79 >= v91 )
        {
          v130 = (char **)__cxa_allocate_exception(0x28u);
          sub_E65BE0(&v172, "Overflow encountered when expanding vector");
          *v130 = (char *)off_1C63128;
          sub_2333C0(v130 + 1, &v172);
          sub_233E40((__int64)&v172);
          __cxa_throw(v130, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v94 = (unsigned int *)sub_186B300(v74 - 1, v92);
        v74 = v94 + 2;
        *v94 = v93;
        v95 = v94[1];
        *(_QWORD *)(a1 + 608) = v74;
        v80 = (_DWORD *)v74 + v95;
      }
      else
      {
        v80 = (_DWORD *)v74 + v79;
      }
LABEL_115:
      ++v70;
      *v80 = v159;
      ++*((_DWORD *)v74 - 1);
      if ( v70 == v75 )
        goto LABEL_126;
      v73 = *(_QWORD **)(a1 + 240);
    }
    v109 = (_QWORD *)sub_186B270(0x18u);
    v73 = v109 + 1;
    v74 = *(_QWORD **)(a1 + 608);
    *(_QWORD *)(a1 + 240) = v109 + 1;
    v78 = v109 + 1;
    *v109 = 2;
    v77 = 1;
LABEL_112:
    *v78 = *v70;
    *((_DWORD *)v73 - 1) = v77;
    if ( !v74 )
      goto LABEL_122;
    goto LABEL_113;
  }
LABEL_134:
  v100 = sub_15DBA30(*(_QWORD *)a1, v68, v178, (_DWORD)v177, v192, (_DWORD)ptr, v137);
  if ( v100 )
    ++*(_DWORD *)(v100 + 8);
  sub_E65BC0(*v134, v134[1]);
  *v134 = v100;
  v101 = (char *)ptr;
  if ( ptr < (char *)ptr + 8 * (unsigned int)v192 )
  {
    v102 = (char *)ptr + 8 * (unsigned int)v192;
    do
    {
      while ( 1 )
      {
        v103 = *(_QWORD *)v101;
        if ( *(_QWORD *)v101 )
        {
          v104 = v190;
          v6 = (*(_DWORD *)(v103 + 8))-- == 1;
          if ( v6 )
            break;
        }
        v101 += 8;
        if ( v101 >= v102 )
          goto LABEL_142;
      }
      sub_15D7BC0(v104, v103);
      v101 += 8;
    }
    while ( v101 < v102 );
LABEL_142:
    v101 = (char *)ptr;
  }
  if ( v101 != v193 && v101 )
    sub_186B220(v101);
  v105 = (int *)v177;
  if ( v177 < (char *)v177 + 8 * (unsigned int)v178 )
  {
    v106 = (int *)((char *)v177 + 8 * (unsigned int)v178);
    do
    {
      while ( 1 )
      {
        v107 = *(_QWORD *)v105;
        if ( *(_QWORD *)v105 )
        {
          v6 = (*(_DWORD *)(v107 + 8))-- == 1;
          if ( v6 )
            break;
        }
        v105 += 2;
        if ( v105 >= v106 )
          goto LABEL_152;
      }
      sub_15D7BC0(v176, v107);
      v105 += 2;
    }
    while ( v105 < v106 );
LABEL_152:
    v105 = (int *)v177;
  }
  if ( v105 != &v179 )
  {
    if ( v105 )
      sub_186B220(v105);
  }
  sub_E65BC0(v137, v133);
  sub_E65BC0(*(__int64 *)v164, v165);
  return sub_39A7A0((__int64)v135);
}

