unsigned __int64 __fastcall sub_9EEBC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r13
  int v12; // r14d
  unsigned __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  void **v22; // r15
  unsigned __int64 v23; // rbx
  void **v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r8
  __m128i *v31; // rax
  __int64 v32; // r8
  __m128i *v33; // rdx
  __int64 v34; // rcx
  signed __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  _WORD *v39; // rdx
  _WORD *v40; // rax
  int v41; // ebp
  int v42; // ebx
  _WORD *v43; // r13
  int v44; // r15d
  __int64 v45; // r14
  unsigned int *v46; // rbx
  unsigned __int64 v47; // rbx
  _OWORD *v48; // rdi
  char *v49; // rbx
  __int64 v50; // rax
  char *v51; // rsi
  unsigned __int64 *p_src; // rbx
  __int64 v53; // r9
  char *v54; // rsi
  unsigned __int64 v55; // rdi
  __m128i v56; // xmm0
  __int64 v57; // rdx
  char *v58; // rdi
  char *v59; // rsi
  char v60; // r10
  char v61; // r10
  char v62; // r10
  char v63; // r10
  char v64; // r10
  char v65; // r10
  char v66; // r10
  char v67; // r10
  char v68; // r10
  char v69; // r10
  char v70; // r10
  char v71; // r10
  char v72; // r10
  char v73; // r10
  char v74; // dl
  _BYTE *v75; // rsi
  __int64 v76; // rcx
  unsigned __int64 *v77; // rdx
  _BYTE *v78; // r11
  char v79; // di
  unsigned __int64 v80; // rbx
  unsigned __int64 v81; // rax
  char *v82; // r11
  unsigned __int64 *v83; // rdx
  char v84; // di
  char v85; // r10
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rax
  __int64 v89; // r10
  unsigned __int64 v90; // rsi
  unsigned __int64 v91; // r9
  char *v92; // r11
  __int64 v93; // rdi
  __int64 v94; // rsi
  char *v95; // r10
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // rsi
  unsigned int *v98; // r12
  unsigned __int64 v99; // rcx
  unsigned int v100; // edx
  int v101; // r14d
  __int64 v102; // r15
  unsigned __int64 v103; // rcx
  unsigned int *v104; // rbx
  __int64 v105; // r15
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  __int64 v108; // r15
  _OWORD *v109; // rdi
  _BYTE *v110; // rax
  size_t v111; // rdx
  const __m128i *v112; // rax
  const __m128i *v113; // rsi
  __m128i v114; // xmm0
  __m128i v115; // xmm3
  char *v116; // rax
  __int8 *v117; // rsi
  __int8 v118; // cl
  char v119; // cl
  char v120; // cl
  char v121; // cl
  char v122; // cl
  char v123; // cl
  char v124; // cl
  char v125; // cl
  char v126; // cl
  char v127; // cl
  char v128; // cl
  char v129; // cl
  char v130; // cl
  char v131; // cl
  char v132; // dl
  size_t v133; // rax
  char v134; // cl
  size_t v135; // r10
  unsigned __int64 v136; // rax
  char v137; // r12
  void *v138; // rdi
  __m128i *v139; // rcx
  __m128i *v140; // rax
  __int8 v141; // di
  __int8 v142; // si
  __int64 v143; // r11
  _QWORD *v144; // rsi
  _QWORD *v145; // rax
  unsigned __int64 v146; // [rsp+8h] [rbp-1F0h]
  int v147; // [rsp+8h] [rbp-1F0h]
  __int64 v148; // [rsp+18h] [rbp-1E0h]
  char v149; // [rsp+18h] [rbp-1E0h]
  size_t v150; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v151; // [rsp+28h] [rbp-1D0h]
  __int64 v152; // [rsp+38h] [rbp-1C0h]
  int v153; // [rsp+38h] [rbp-1C0h]
  __int64 v154; // [rsp+40h] [rbp-1B8h]
  __int64 v155; // [rsp+40h] [rbp-1B8h]
  char v156; // [rsp+48h] [rbp-1B0h]
  int v157; // [rsp+58h] [rbp-1A0h]
  __int64 v158; // [rsp+60h] [rbp-198h]
  __int64 v159; // [rsp+68h] [rbp-190h]
  unsigned __int64 v160; // [rsp+78h] [rbp-180h] BYREF
  unsigned int v161; // [rsp+80h] [rbp-178h]
  void *ptr; // [rsp+88h] [rbp-170h] BYREF
  __int64 v163; // [rsp+90h] [rbp-168h]
  _BYTE v164[24]; // [rsp+98h] [rbp-160h] BYREF
  unsigned int v165; // [rsp+B0h] [rbp-148h]
  __int128 v166; // [rsp+B8h] [rbp-140h] BYREF
  _BYTE dest[24]; // [rsp+C8h] [rbp-130h] BYREF
  __int64 v168; // [rsp+E0h] [rbp-118h] BYREF
  void *v169; // [rsp+E8h] [rbp-110h] BYREF
  __int64 v170; // [rsp+F0h] [rbp-108h]
  _BYTE v171[24]; // [rsp+F8h] [rbp-100h] BYREF
  unsigned int v172; // [rsp+110h] [rbp-E8h]
  void *v173; // [rsp+118h] [rbp-E0h] BYREF
  __int64 v174; // [rsp+120h] [rbp-D8h]
  void *v175[3]; // [rsp+128h] [rbp-D0h] BYREF
  unsigned __int64 src; // [rsp+140h] [rbp-B8h] BYREF
  _OWORD src_8[2]; // [rsp+148h] [rbp-B0h] BYREF
  __int128 v178; // [rsp+168h] [rbp-90h]
  __int64 v179; // [rsp+178h] [rbp-80h]
  __int128 v180; // [rsp+180h] [rbp-78h] BYREF
  __int128 v181; // [rsp+190h] [rbp-68h]
  __int128 v182; // [rsp+1A0h] [rbp-58h]
  __m128i si128; // [rsp+1B0h] [rbp-48h]

  v9 = *(_QWORD *)(a1 + 136);
  if ( !v9 || !*(_QWORD *)(a1 + 80) )
    return v151;
  v10 = a8;
  ptr = v164;
  v11 = a8 + 16 * a9;
  v163 = 0x200000000LL;
  v161 = a7;
  if ( a8 == v11 )
  {
    v165 = a7;
    v12 = 0;
    *(_QWORD *)&v166 = dest;
    *((_QWORD *)&v166 + 1) = 0x200000000LL;
    goto LABEL_14;
  }
  do
  {
    v13 = sub_9E6AE0(a1, *(unsigned __int8 **)v10, *(_QWORD *)(v10 + 8));
    if ( !v14 )
      goto LABEL_10;
    v15 = (unsigned int)v163;
    v16 = (unsigned int)v163 + 1LL;
    if ( v16 > HIDWORD(v163) )
    {
      v146 = v13;
      sub_22134E0(&ptr, v164, v16, 8);
      v15 = (unsigned int)v163;
      v13 = v146;
    }
    *((_QWORD *)ptr + v15) = v13;
    v10 += 16;
    v12 = v163 + 1;
    LODWORD(v163) = v163 + 1;
  }
  while ( v11 != v10 );
  v9 = *(_QWORD *)(a1 + 136);
  *((_QWORD *)&src_8[0] + 1) = 0x200000000LL;
  LODWORD(src) = v161;
  *(_QWORD *)&src_8[0] = &src_8[1];
  if ( !v12 )
  {
    v165 = v161;
    *(_QWORD *)&v166 = dest;
    *((_QWORD *)&v166 + 1) = 0x200000000LL;
LABEL_14:
    v18 = v165;
    goto LABEL_15;
  }
  sub_9EEAD0((__int64 *)src_8, (__int64 *)&ptr);
  v12 = DWORD2(src_8[0]);
  v48 = *(_OWORD **)&src_8[0];
  v165 = src;
  *(_QWORD *)&v166 = dest;
  *((_QWORD *)&v166 + 1) = 0x200000000LL;
  if ( DWORD2(src_8[0]) )
  {
    if ( *(_OWORD **)&src_8[0] != &src_8[1] )
    {
      v172 = src;
      v166 = src_8[0];
      v173 = v175;
      v174 = 0x200000000LL;
      goto LABEL_47;
    }
    v110 = dest;
    v111 = 8LL * DWORD2(src_8[0]);
    if ( DWORD2(src_8[0]) <= 2uLL
      || (sub_22134E0(&v166, dest, DWORD2(src_8[0]), 8),
          v110 = (_BYTE *)v166,
          v48 = *(_OWORD **)&src_8[0],
          (v111 = 8LL * DWORD2(src_8[0])) != 0) )
    {
      memcpy(v110, v48, v111);
      v48 = *(_OWORD **)&src_8[0];
    }
    DWORD2(v166) = v12;
    DWORD2(src_8[0]) = 0;
  }
  if ( v48 == &src_8[1] )
    goto LABEL_14;
  free(v48);
  v18 = v165;
  v12 = DWORD2(v166);
LABEL_15:
  v172 = v18;
  v19 = 0;
  v173 = v175;
  v174 = 0x200000000LL;
  if ( v12 )
  {
LABEL_47:
    sub_9EEAD0((__int64 *)&v173, (__int64 *)&v166);
    v18 = v172;
    v19 = (unsigned int)v174;
  }
  src = v19;
  v20 = 0x9DDFEA08EB382D69LL
      * ((0x9DDFEA08EB382D69LL * (8 * v18 - 0xAE502812AA7333LL))
       ^ ((0x9DDFEA08EB382D69LL * (8 * v18 - 0xAE502812AA7333LL)) >> 47));
  v160 = 0x9DDFEA08EB382D69LL * ((v20 >> 47) ^ v20);
  v21 = sub_9E70E0(&v160, &src);
  v22 = (void **)v173;
  v23 = v21;
  v160 = v21;
  v24 = (void **)((char *)v173 + 8 * (unsigned int)v174);
  if ( v173 == v24 )
    goto LABEL_27;
  v152 = v9;
  do
  {
    while ( 1 )
    {
      v30 = (unsigned __int64)*v22;
      src = v23;
      memset(src_8, 0, sizeof(src_8));
      v178 = 0;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D10);
      v168 = 0;
      v31 = sub_9E8760((__m128i *)&src, &v168, src_8, (unsigned __int64)&v180, v30 >> 33);
      v32 = v168;
      v33 = v31;
      v34 = (char *)v31 - (char *)&src;
      v35 = (char *)v31 - (char *)&src;
      if ( v168 )
      {
        if ( v31 != (__m128i *)&v180 && v31 != (__m128i *)&src )
        {
          v49 = (char *)((char *)&v180 - (char *)v31);
          v50 = 64;
          v51 = v49;
          p_src = &src;
          if ( (char *)v34 == v51 )
          {
            v112 = v33;
            if ( (v33 >= (__m128i *)((char *)src_8 + 8) || &src >= (unsigned __int64 *)&v33[1])
              && (unsigned __int64)v33->m128i_u64 + ~(unsigned __int64)&src > 0xE )
            {
              v113 = (const __m128i *)&src;
              do
              {
                v114 = _mm_load_si128(v113);
                v115 = _mm_loadu_si128(v112++);
                ++v113;
                v113[-1] = v115;
                v112[-1] = v114;
              }
              while ( v112 != (const __m128i *)&v33->m128i_i8[v34 & 0xFFFFFFFFFFFFFFF0LL] );
              v116 = (char *)&src + (v34 & 0xFFFFFFFFFFFFFFF0LL);
              v117 = &v33->m128i_i8[v34 & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v34 & 0xFFFFFFFFFFFFFFF0LL) != v34 )
              {
                v118 = *v116;
                *v116 = *v117;
                *v117 = v118;
                if ( v33 != (__m128i *)(v116 + 1) )
                {
                  v119 = v116[1];
                  v116[1] = v117[1];
                  v117[1] = v119;
                  if ( v33 != (__m128i *)(v116 + 2) )
                  {
                    v120 = v116[2];
                    v116[2] = v117[2];
                    v117[2] = v120;
                    if ( v33 != (__m128i *)(v116 + 3) )
                    {
                      v121 = v116[3];
                      v116[3] = v117[3];
                      v117[3] = v121;
                      if ( v33 != (__m128i *)(v116 + 4) )
                      {
                        v122 = v116[4];
                        v116[4] = v117[4];
                        v117[4] = v122;
                        if ( v33 != (__m128i *)(v116 + 5) )
                        {
                          v123 = v116[5];
                          v116[5] = v117[5];
                          v117[5] = v123;
                          if ( v33 != (__m128i *)(v116 + 6) )
                          {
                            v124 = v116[6];
                            v116[6] = v117[6];
                            v117[6] = v124;
                            if ( v33 != (__m128i *)(v116 + 7) )
                            {
                              v125 = v116[7];
                              v116[7] = v117[7];
                              v117[7] = v125;
                              if ( v33 != (__m128i *)(v116 + 8) )
                              {
                                v126 = v116[8];
                                v116[8] = v117[8];
                                v117[8] = v126;
                                if ( v33 != (__m128i *)(v116 + 9) )
                                {
                                  v127 = v116[9];
                                  v116[9] = v117[9];
                                  v117[9] = v127;
                                  if ( v33 != (__m128i *)(v116 + 10) )
                                  {
                                    v128 = v116[10];
                                    v116[10] = v117[10];
                                    v117[10] = v128;
                                    if ( v33 != (__m128i *)(v116 + 11) )
                                    {
                                      v129 = v116[11];
                                      v116[11] = v117[11];
                                      v117[11] = v129;
                                      if ( v33 != (__m128i *)(v116 + 12) )
                                      {
                                        v130 = v116[12];
                                        v116[12] = v117[12];
                                        v117[12] = v130;
                                        if ( v33 != (__m128i *)(v116 + 13) )
                                        {
                                          v131 = v116[13];
                                          v116[13] = v117[13];
                                          v117[13] = v131;
                                          if ( v33 != (__m128i *)(v116 + 14) )
                                          {
                                            v132 = v116[14];
                                            v116[14] = v117[14];
                                            v117[14] = v132;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v139 = v33;
              v140 = (__m128i *)&src;
              do
              {
                v141 = v139->m128i_i8[0];
                v142 = v140->m128i_i8[0];
                v140 = (__m128i *)((char *)v140 + 1);
                v139 = (__m128i *)((char *)v139 + 1);
                v140[-1].m128i_i8[15] = v141;
                v139[-1].m128i_i8[15] = v142;
              }
              while ( v33 != v140 );
            }
          }
          else
          {
            v53 = 64 - v34;
            if ( v34 >= 64 - v34 )
            {
              while ( v53 != 1 )
              {
                v75 = (char *)p_src + v50;
                p_src = (unsigned __int64 *)((char *)p_src + v50 - v53);
                if ( v34 > 0 )
                {
                  v76 = -v34;
                  v77 = p_src;
                  v78 = &v75[v76];
                  do
                  {
                    v77 = (unsigned __int64 *)((char *)v77 - 1);
                    --v75;
                    v79 = *(_BYTE *)v77;
                    *(_BYTE *)v77 = *v75;
                    *v75 = v79;
                  }
                  while ( v75 != v78 );
                  p_src = (unsigned __int64 *)((char *)p_src + v76);
                }
                v34 = v50 % v53;
                if ( !(v50 % v53) )
                  goto LABEL_84;
LABEL_77:
                v50 = v53;
                v53 -= v34;
                if ( v34 < v53 )
                  goto LABEL_52;
              }
              v154 = v32;
              v149 = *((_BYTE *)p_src + v50 - 1);
              memmove((char *)p_src + 1, p_src, v50 - 1);
              v32 = v154;
              *(_BYTE *)p_src = v149;
            }
            else
            {
LABEL_52:
              if ( v34 == 1 )
              {
                v133 = v50 - 1;
                v134 = *(_BYTE *)p_src;
                v135 = v133;
                if ( v133 )
                {
                  v156 = *(_BYTE *)p_src;
                  v155 = v32;
                  v150 = v133;
                  memmove(p_src, (char *)p_src + 1, v133);
                  v134 = v156;
                  v32 = v155;
                  v135 = v150;
                }
                *((_BYTE *)p_src + v135) = v134;
              }
              else
              {
                v54 = (char *)p_src + v34;
                if ( v53 > 0 )
                {
                  if ( (v34 + 16 <= 0 || v54 >= (char *)p_src + 16) && (unsigned __int64)(v53 - 1) > 0xE )
                  {
                    v55 = 0;
                    do
                    {
                      v56 = _mm_loadu_si128((const __m128i *)&p_src[v55 / 8]);
                      *(__m128i *)&p_src[v55 / 8] = _mm_loadu_si128((const __m128i *)&v54[v55]);
                      *(__m128i *)&v54[v55] = v56;
                      v55 += 16LL;
                    }
                    while ( v55 != (v53 & 0xFFFFFFFFFFFFFFF0LL) );
                    v57 = v53 & 0x7FFFFFFFFFFFFFF0LL;
                    v58 = (char *)p_src + (v53 & 0xFFFFFFFFFFFFFFF0LL);
                    v59 = &v54[v53 & 0xFFFFFFFFFFFFFFF0LL];
                    if ( (v53 & 0xFFFFFFFFFFFFFFF0LL) != v53 )
                    {
                      v60 = *v58;
                      *v58 = *v59;
                      *v59 = v60;
                      if ( v53 > v57 + 1 )
                      {
                        v61 = v58[1];
                        v58[1] = v59[1];
                        v59[1] = v61;
                        if ( v53 > v57 + 2 )
                        {
                          v62 = v58[2];
                          v58[2] = v59[2];
                          v59[2] = v62;
                          if ( v53 > v57 + 3 )
                          {
                            v63 = v58[3];
                            v58[3] = v59[3];
                            v59[3] = v63;
                            if ( v53 > v57 + 4 )
                            {
                              v64 = v58[4];
                              v58[4] = v59[4];
                              v59[4] = v64;
                              if ( v53 > v57 + 5 )
                              {
                                v65 = v58[5];
                                v58[5] = v59[5];
                                v59[5] = v65;
                                if ( v53 > v57 + 6 )
                                {
                                  v66 = v58[6];
                                  v58[6] = v59[6];
                                  v59[6] = v66;
                                  if ( v53 > v57 + 7 )
                                  {
                                    v67 = v58[7];
                                    v58[7] = v59[7];
                                    v59[7] = v67;
                                    if ( v53 > v57 + 8 )
                                    {
                                      v68 = v58[8];
                                      v58[8] = v59[8];
                                      v59[8] = v68;
                                      if ( v53 > v57 + 9 )
                                      {
                                        v69 = v58[9];
                                        v58[9] = v59[9];
                                        v59[9] = v69;
                                        if ( v53 > v57 + 10 )
                                        {
                                          v70 = v58[10];
                                          v58[10] = v59[10];
                                          v59[10] = v70;
                                          if ( v53 > v57 + 11 )
                                          {
                                            v71 = v58[11];
                                            v58[11] = v59[11];
                                            v59[11] = v71;
                                            if ( v53 > v57 + 12 )
                                            {
                                              v72 = v58[12];
                                              v58[12] = v59[12];
                                              v59[12] = v72;
                                              if ( v53 > v57 + 13 )
                                              {
                                                v73 = v58[13];
                                                v58[13] = v59[13];
                                                v59[13] = v73;
                                                if ( v53 > v57 + 14 )
                                                {
                                                  v74 = v58[14];
                                                  v58[14] = v59[14];
                                                  v59[14] = v74;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v82 = &v54[v53];
                    v83 = p_src;
                    do
                    {
                      v84 = *(_BYTE *)v83;
                      v85 = *v54++;
                      v83 = (unsigned __int64 *)((char *)v83 + 1);
                      *((_BYTE *)v83 - 1) = v85;
                      *(v54 - 1) = v84;
                    }
                    while ( v54 != v82 );
                  }
                  p_src = (unsigned __int64 *)((char *)p_src + v53);
                }
                if ( v50 % v34 )
                {
                  v53 = v34;
                  v34 -= v50 % v34;
                  goto LABEL_77;
                }
              }
            }
          }
        }
LABEL_84:
        v148 = v32;
        sub_9931E0((unsigned __int64 *)&v180, &src);
        v80 = v180
            - 0x622015F714C7D297LL
            * (((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v182))
                ^ si128.m128i_i64[0]
                ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v182)) >> 47))) >> 47)
             ^ (0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v182))
               ^ si128.m128i_i64[0]
               ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v182)) >> 47))))
            - 0x4B6D499041670D8DLL * ((v35 + v148) ^ ((unsigned __int64)(v35 + v148) >> 47));
        v81 = 0x9DDFEA08EB382D69LL
            * (v80
             ^ (v181
              - 0x4B6D499041670D8DLL * (*((_QWORD *)&v180 + 1) ^ (*((_QWORD *)&v180 + 1) >> 47))
              - 0x622015F714C7D297LL
              * (((0x9DDFEA08EB382D69LL
                 * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v182 + 1) ^ *((_QWORD *)&v181 + 1)))
                  ^ *((_QWORD *)&v182 + 1)
                  ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v182 + 1) ^ *((_QWORD *)&v181 + 1))) >> 47))) >> 47)
               ^ (0x9DDFEA08EB382D69LL
                * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v182 + 1) ^ *((_QWORD *)&v181 + 1)))
                 ^ *((_QWORD *)&v182 + 1)
                 ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v182 + 1) ^ *((_QWORD *)&v181 + 1))) >> 47))))));
        v28 = v81 ^ v80;
        v27 = v81 >> 47;
        goto LABEL_19;
      }
      if ( (unsigned __int64)(v34 - 4) <= 4 )
      {
        v25 = *(unsigned int *)((char *)&v175[2] + v34 + 4) ^ si128.m128i_i64[1];
        v26 = 0x9DDFEA08EB382D69LL * (v25 ^ (v34 + 8LL * (unsigned int)src));
        v27 = v26 ^ v25;
        v28 = v26 >> 47;
LABEL_19:
        v29 = v27 ^ v28;
        goto LABEL_20;
      }
      if ( (unsigned __int64)(v34 - 9) <= 7 )
        break;
      if ( (unsigned __int64)(v34 - 17) > 0xF )
      {
        if ( (unsigned __int64)v34 <= 0x20 )
        {
          v23 = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
          if ( v34 )
          {
            v136 = (0xC949D7C7509E6557LL * ((unsigned int)v34 + 4 * *((unsigned __int8 *)&v175[2] + v34 + 7)))
                 ^ (0x9AE16A3B2F90404FLL
                  * ((unsigned __int8)src + (*((unsigned __int8 *)&src + ((unsigned __int64)v34 >> 1)) << 8)))
                 ^ si128.m128i_i64[1];
            v23 = 0x9AE16A3B2F90404FLL * (v136 ^ (v136 >> 47));
          }
        }
        else
        {
          v89 = *(__int64 *)((char *)&v175[1] + v34);
          v90 = src - 0x3C5A37A36834CED9LL * (v34 + v89);
          v91 = v90 + *(_QWORD *)&src_8[0] + *((_QWORD *)&src_8[0] + 1);
          v92 = *(char **)((char *)&v175[-1] + v34) + *((_QWORD *)&src_8[0] + 1);
          v93 = *(__int64 *)((char *)&v175[2] + v34);
          v94 = __ROR8__(v91, 31)
              + __ROL8__(*(_QWORD *)&src_8[1] + v90, 12)
              + __ROR8__(v90 + *(_QWORD *)&src_8[0], 7)
              + __ROL8__(v90, 27);
          v95 = *(char **)((char *)v175 + v34) + (_QWORD)v92 + v89;
          v96 = 0x9AE16A3B2F90404FLL
              * (__ROR8__(v95, 31)
               + __ROR8__(*(char **)((char *)v175 + v34) + (_QWORD)v92, 7)
               + *(_QWORD *)&src_8[1]
               + __ROL8__(v92, 27)
               + __ROL8__(&v92[v93], 12)
               + v91);
          v97 = ((0xC3A5C85C97CB3127LL
                * (((v96 - 0x3C5A37A36834CED9LL * (_QWORD)&v95[v93 + v94]) >> 47)
                 ^ (v96 - 0x3C5A37A36834CED9LL * (_QWORD)&v95[v93 + v94])))
               ^ si128.m128i_i64[1])
              + v94;
          v23 = 0x9AE16A3B2F90404FLL * (v97 ^ (v97 >> 47));
        }
        goto LABEL_21;
      }
      v86 = 0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)&v175[2] + v34);
      v87 = v34
          + si128.m128i_i64[1]
          - 0x4B6D499041670D8DLL * src
          + __ROR8__(*(_QWORD *)&src_8[0] ^ 0xC949D7C7509E6557LL, 20)
          - v86;
      v88 = 0x9DDFEA08EB382D69LL
          * (v87
           ^ (0xC3A5C85C97CB3127LL * *(_QWORD *)((char *)&v175[1] + v34)
            + __ROL8__(0xB492B66FBE98F273LL * src - *(_QWORD *)&src_8[0], 21)
            + __ROR8__(v86 ^ si128.m128i_i64[1], 30)));
      v29 = v88 ^ v87 ^ (v88 >> 47);
LABEL_20:
      v23 = 0x9DDFEA08EB382D69LL * (((0x9DDFEA08EB382D69LL * v29) >> 47) ^ (0x9DDFEA08EB382D69LL * v29));
LABEL_21:
      ++v22;
      v160 = v23;
      if ( v24 == v22 )
        goto LABEL_26;
    }
    v36 = *(__int64 *)((char *)&v175[2] + v34);
    ++v22;
    v37 = __ROR8__(v34 + v36, v34);
    v23 = v36
        ^ (0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v37 ^ src ^ si128.m128i_i64[1]))
            ^ v37
            ^ ((0x9DDFEA08EB382D69LL * (v37 ^ src ^ si128.m128i_i64[1])) >> 47)))
          ^ ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v37 ^ src ^ si128.m128i_i64[1]))
             ^ v37
             ^ ((0x9DDFEA08EB382D69LL * (v37 ^ src ^ si128.m128i_i64[1])) >> 47))) >> 47)));
    v160 = v23;
  }
  while ( v24 != v22 );
LABEL_26:
  v9 = v152;
  v22 = (void **)v173;
LABEL_27:
  if ( v22 != v175 )
    free(v22);
  v38 = *(unsigned int *)(*(_QWORD *)(v9 + 8) + 4LL * ((unsigned int)v23 & (*(_DWORD *)v9 - 1)));
  if ( !(_DWORD)v38
    || (v39 = (_WORD *)(*(_QWORD *)(v9 + 16) + v38), v40 = v39 + 1, v153 = (unsigned __int16)*v39, !*v39) )
  {
LABEL_35:
    src = 0;
    memset((char *)src_8 + 8, 0, 24);
    *(_QWORD *)&src_8[0] = &src_8[1];
    HIDWORD(src_8[0]) = 2;
    *(_QWORD *)&v178 = 0;
    DWORD2(v178) = 0;
    v179 = 0;
    goto LABEL_36;
  }
  v147 = v23;
  v159 = v9;
  v41 = 0;
  while ( 2 )
  {
    v42 = (unsigned __int16)v40[3];
    v43 = v40 + 4;
    v44 = (unsigned __int16)v40[2];
    v45 = (unsigned int)(v42 + v44);
    if ( v147 != *(_DWORD *)v40 )
    {
      v40 = (_WORD *)((char *)v43 + v45);
      goto LABEL_34;
    }
    v98 = (unsigned int *)(v40 + 5);
    v174 = 0x200000000LL;
    v173 = v175;
    v99 = ((unsigned __int64)(unsigned __int16)v44 - 2) >> 2;
    v158 = (unsigned __int16)v44;
    v172 = (unsigned __int16)v40[4];
    v100 = v99;
    if ( (_DWORD)v99 )
    {
      v157 = v42 + v44;
      v101 = v42;
      v102 = (__int64)&v40[2 * (unsigned int)(v99 - 1) + 7];
      v103 = 2;
      v100 = 0;
      v104 = (unsigned int *)v102;
      while ( 1 )
      {
        v105 = *v98;
        v106 = v100;
        ++v98;
        v107 = v100 + 1LL;
        v108 = v105 << 33;
        if ( v107 > v103 )
        {
          sub_22134E0(&v173, v175, v107, 8);
          *((_QWORD *)v173 + (unsigned int)v174) = v108;
        }
        else
        {
          *((_QWORD *)v173 + v106) = v108;
        }
        v100 = v174 + 1;
        LODWORD(v174) = v174 + 1;
        if ( v98 == v104 )
          break;
        v103 = HIDWORD(v174);
      }
      v42 = v101;
      LODWORD(v45) = v157;
    }
    LODWORD(v168) = v165;
    v169 = v171;
    v170 = 0x200000000LL;
    if ( DWORD2(v166) )
    {
      sub_9EEAD0((__int64 *)&v169, (__int64 *)&v166);
      v100 = v174;
    }
    v109 = &src_8[1];
    LODWORD(src) = v172;
    *(_QWORD *)&src_8[0] = &src_8[1];
    *((_QWORD *)&src_8[0] + 1) = 0x200000000LL;
    if ( v100 )
    {
      sub_9EEAD0((__int64 *)src_8, (__int64 *)&v173);
      if ( (_DWORD)src == (_DWORD)v168 )
      {
        v109 = *(_OWORD **)&src_8[0];
        if ( (_DWORD)v170 == DWORD2(src_8[0]) )
        {
          v143 = *(_QWORD *)&src_8[0] + 8LL * DWORD2(src_8[0]);
          v144 = v169;
          if ( v143 == *(_QWORD *)&src_8[0] )
            goto LABEL_155;
          if ( **(_QWORD **)&src_8[0] >> 33 == *(_QWORD *)v169 >> 33 )
          {
            v145 = *(_QWORD **)&src_8[0];
            do
            {
              ++v145;
              ++v144;
              if ( (_QWORD *)v143 == v145 )
                goto LABEL_155;
            }
            while ( *v145 >> 33 == *v144 >> 33 );
          }
        }
        v137 = 0;
      }
      else
      {
        v109 = *(_OWORD **)&src_8[0];
        v137 = 0;
      }
LABEL_143:
      if ( v109 != &src_8[1] )
        free(v109);
      v138 = v169;
      if ( v169 != v171 )
        goto LABEL_146;
    }
    else
    {
      if ( v172 != (_DWORD)v168 )
      {
        if ( v169 != v171 )
          free(v169);
        goto LABEL_105;
      }
      if ( !(_DWORD)v170 )
      {
LABEL_155:
        v137 = 1;
        goto LABEL_143;
      }
      v138 = v169;
      v137 = 0;
      if ( v169 == v171 )
      {
LABEL_105:
        v40 = (_WORD *)((char *)v43 + (unsigned int)v45);
        if ( v173 != v175 )
        {
          free(v173);
          v40 = (_WORD *)((char *)v43 + (unsigned int)v45);
        }
LABEL_34:
        if ( v153 == ++v41 )
          goto LABEL_35;
        continue;
      }
LABEL_146:
      free(v138);
    }
    break;
  }
  if ( !v137 )
    goto LABEL_105;
  LODWORD(v168) = v172;
  v169 = v171;
  v170 = 0x200000000LL;
  if ( (_DWORD)v174 )
  {
    sub_9EEAD0((__int64 *)&v169, (__int64 *)&v173);
    *((_QWORD *)&src_8[0] + 1) = 0x200000000LL;
    LODWORD(src) = v168;
    *(_QWORD *)&src_8[0] = &src_8[1];
    if ( (_DWORD)v170 )
      sub_9EEAD0((__int64 *)src_8, (__int64 *)&v169);
  }
  else
  {
    LODWORD(src) = v172;
    *(_QWORD *)&src_8[0] = &src_8[1];
    *((_QWORD *)&src_8[0] + 1) = 0x200000000LL;
  }
  *(_QWORD *)&v178 = (char *)v43 + v158;
  DWORD2(v178) = v42;
  v179 = v159 + 24;
  if ( v169 != v171 )
    free(v169);
  if ( v173 != v175 )
    free(v173);
LABEL_36:
  if ( (_BYTE *)v166 != dest )
    free((void *)v166);
  v46 = (unsigned int *)v178;
  if ( (_QWORD)v178 )
  {
    v172 = src;
    v173 = v175;
    v174 = 0x200000000LL;
    if ( DWORD2(src_8[0]) )
    {
      sub_9EEAD0((__int64 *)&v173, (__int64 *)src_8);
      v47 = (unsigned __int64)*v46 << 33;
      if ( v173 != v175 )
        free(v173);
    }
    else
    {
      v47 = (unsigned __int64)*(unsigned int *)v178 << 33;
    }
    v151 = v47;
  }
  if ( *(_OWORD **)&src_8[0] != &src_8[1] )
    free(*(void **)&src_8[0]);
LABEL_10:
  if ( ptr != v164 )
    free(ptr);
  return v151;
}

