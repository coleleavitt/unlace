void __fastcall sub_2238710(__int64 a1, __m128i *a2, __m128i *a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __m128i *v5; // r13
  __m128i *p_src; // r12
  void *v7; // r15
  __m128i *v8; // rbx
  void *v9; // rbp
  bool v10; // cf
  unsigned int v11; // eax
  void *v12; // r9
  bool v13; // cf
  unsigned int v14; // eax
  void *v15; // rbp
  bool v16; // cf
  unsigned int v17; // eax
  char *v18; // r10
  __m128i v19; // xmm4
  __int64 v20; // rax
  size_t v21; // rax
  __m128i v22; // xmm5
  char *v23; // rdx
  void *v24; // rax
  __int64 v25; // rax
  _BYTE *v26; // rax
  __m128i *v27; // rdi
  void *v28; // rax
  __int64 v29; // rcx
  bool v30; // cf
  unsigned int v31; // eax
  void *v32; // r15
  bool v33; // cf
  unsigned int v34; // eax
  __m128i v35; // xmm7
  __int64 v36; // rax
  size_t v37; // rax
  __m128i *v38; // rbx
  __m128i *v39; // rax
  __m128i *v40; // rax
  __m128i *v41; // rax
  void *v42; // rdx
  unsigned __int64 v43; // rax
  _BYTE *v44; // r10
  _BYTE *v45; // r9
  size_t v46; // rdx
  const void *v47; // rsi
  const void *v48; // rdi
  unsigned int v49; // eax
  __m128i *v50; // r12
  char *v51; // rbx
  __m128i *v52; // rbx
  __m128i *v53; // r12
  __m128i *v54; // r13
  __m128i v55; // xmm5
  __m128i *v56; // rax
  size_t v57; // rax
  __m128i v58; // xmm6
  void *v59; // rax
  _BYTE *v60; // rax
  __m128i v61; // xmm7
  __int64 v62; // rbp
  __int64 v63; // rbp
  __m128i v64; // xmm3
  __int64 v65; // rax
  size_t v66; // rax
  __m128i *v67; // rbp
  __m128i *v68; // rax
  __m128i *v69; // rax
  void *v70; // rax
  signed __int64 v71; // rax
  __m128i v72; // xmm1
  __int64 v73; // rax
  size_t v74; // rax
  __m128i *v75; // rbx
  __m128i *v76; // rax
  __m128i *v77; // rax
  void *v78; // r10
  __m128i *v79; // r15
  unsigned __int64 v80; // rbp
  __int64 v81; // r13
  void *v82; // rcx
  __m128i *v83; // rbx
  bool v84; // cf
  unsigned int v85; // r14d
  __m128i *v86; // r15
  void *v87; // r12
  unsigned int v88; // eax
  unsigned __int64 v89; // rax
  __m128i *v90; // rbx
  __m128i v91; // xmm1
  void *v92; // rax
  size_t v93; // rax
  _BYTE *v94; // rbx
  __m128i v95; // xmm3
  __int64 v96; // rax
  _BYTE *v97; // rax
  __m128i *v98; // rax
  _BYTE *v99; // rdi
  __m128 v100; // xmm0
  __int64 v101; // rdx
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // r14
  void *v104; // r8
  size_t v105; // rdx
  const void *v106; // rsi
  const void *v107; // rdi
  int v108; // eax
  __m128i v109; // xmm6
  __int64 v110; // rax
  size_t v111; // rax
  __m128i *v112; // rax
  __m128i *v113; // rax
  size_t v114; // rdx
  char *v115; // r10
  __m128i v116; // xmm2
  __int64 v117; // rax
  size_t v118; // rax
  __m128i v119; // xmm3
  char *v120; // rdx
  void *v121; // rax
  __int64 v122; // rax
  _BYTE *v123; // rax
  size_t v124; // rdx
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rbp
  void *v127; // r10
  size_t v128; // rdx
  const void *v129; // rsi
  const void *v130; // rdi
  unsigned int v131; // eax
  unsigned __int64 v132; // rax
  size_t v133; // r15
  size_t v134; // rdx
  const void *v135; // rsi
  const void *v136; // rdi
  signed __int64 v137; // rax
  size_t v138; // rdx
  size_t v139; // rdx
  size_t v140; // r14
  size_t v141; // rbx
  size_t v142; // rdx
  unsigned int v143; // eax
  __int64 v144; // r14
  size_t v145; // rbp
  __int64 v146; // r13
  const __m128i *v147; // rbx
  __m128i *v148; // r15
  __int64 v149; // rcx
  size_t v150; // rsi
  __m128i v151; // xmm0
  __m128i *v152; // rdx
  __m128i v153; // xmm7
  __int64 v154; // r14
  unsigned __int64 v155; // rax
  unsigned __int64 v156; // rbp
  void *v157; // r9
  size_t v158; // rdx
  const void *v159; // rsi
  const void *v160; // rdi
  unsigned int v161; // eax
  size_t v162; // rdx
  unsigned __int64 v163; // rax
  size_t v164; // rbx
  size_t v165; // rdx
  const void *v166; // rsi
  const void *v167; // rdi
  size_t v168; // rdx
  __int64 v169; // rax
  size_t v170; // rdx
  size_t v171; // rdx
  size_t v172; // rdx
  size_t v173; // rdx
  __int64 v174; // r10
  __int64 v175; // rbp
  void *v176; // [rsp+8h] [rbp-D0h]
  void *dest; // [rsp+10h] [rbp-C8h] BYREF
  __m128i *v178; // [rsp+18h] [rbp-C0h]
  const __m128i *v179; // [rsp+20h] [rbp-B8h]
  void *v180; // [rsp+28h] [rbp-B0h]
  void *v181; // [rsp+30h] [rbp-A8h]
  __m128i *v182; // [rsp+38h] [rbp-A0h]
  __m128i v183; // [rsp+40h] [rbp-98h] BYREF
  void *v184; // [rsp+50h] [rbp-88h]
  size_t v185; // [rsp+58h] [rbp-80h]
  __m128i v186; // [rsp+60h] [rbp-78h] BYREF
  __m128i v187; // [rsp+70h] [rbp-68h] BYREF
  void *v188; // [rsp+80h] [rbp-58h]
  size_t n; // [rsp+88h] [rbp-50h]
  __m128i src; // [rsp+90h] [rbp-48h] BYREF

  v3 = (__int64)a2->m128i_i64 - a1;
  v178 = a3;
  if ( (__int64)a2->m128i_i64 - a1 <= 768 )
    return;
  v4 = a1;
  v5 = a2;
  if ( !a3 )
  {
    v90 = a2;
    v179 = &v187;
    v176 = (void *)(a1 + 32);
    goto LABEL_164;
  }
  v176 = (void *)(a1 + 32);
  p_src = &src;
  v179 = &v187;
  v181 = (void *)(a1 + 80);
  do
  {
    v7 = *(void **)(v4 + 48);
    v178 = (__m128i *)((char *)v178 - 1);
    v8 = (__m128i *)(v4 + 48 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v3 >> 4)) >> 1));
    v9 = (void *)v8->m128i_i64[0];
    v10 = (unsigned __int64)v7 < v8->m128i_i64[0];
    if ( v7 == (void *)v8->m128i_i64[0]
      && (v43 = v8->m128i_u64[1], v10 = *(_QWORD *)(v4 + 56) < v43, *(_QWORD *)(v4 + 56) == v43) )
    {
      v44 = *(_BYTE **)(v4 + 72);
      v45 = (_BYTE *)v8[1].m128i_i64[1];
      v46 = (size_t)v45;
      if ( v44 <= v45 )
        v46 = *(_QWORD *)(v4 + 72);
      if ( v46
        && (v47 = (const void *)v8[1].m128i_i64[0],
            v48 = *(const void **)(v4 + 64),
            v180 = *(void **)(v4 + 72),
            dest = v45,
            v49 = memcmp(v48, v47, v46),
            v45 = dest,
            v44 = v180,
            v49) )
      {
        v11 = v49 >> 31;
      }
      else
      {
        v174 = v44 - v45;
        if ( v174 > 0x7FFFFFFF )
        {
          v12 = (void *)v5[-3].m128i_i64[0];
          goto LABEL_23;
        }
        if ( v174 < (__int64)0xFFFFFFFF80000000LL )
        {
          v12 = (void *)v5[-3].m128i_i64[0];
LABEL_7:
          v13 = v9 < v12;
          if ( v9 != v12 || (v125 = v5[-3].m128i_u64[1], v13 = v8->m128i_i64[1] < v125, v8->m128i_i64[1] != v125) )
          {
            LOBYTE(v14) = v13;
LABEL_9:
            v15 = *(void **)(v4 + 16);
            if ( !(_BYTE)v14 )
              goto LABEL_10;
LABEL_108:
            v109 = _mm_loadu_si128((const __m128i *)v4);
            v188 = p_src;
            v187 = v109;
            if ( v15 == v176 )
            {
              src = _mm_loadu_si128((const __m128i *)(v4 + 32));
            }
            else
            {
              v110 = *(_QWORD *)(v4 + 32);
              v188 = v15;
              src.m128i_i64[0] = v110;
            }
            v111 = *(_QWORD *)(v4 + 24);
            *(_BYTE *)(v4 + 32) = 0;
            v67 = v8 + 2;
            *(_QWORD *)(v4 + 24) = 0;
            n = v111;
            *(_QWORD *)(v4 + 16) = v176;
            *(__m128i *)v4 = _mm_loadu_si128(v8);
            v112 = (__m128i *)v8[1].m128i_i64[0];
            if ( v112 == &v8[2] )
            {
              v173 = v8[1].m128i_u64[1];
              if ( v173 )
              {
                if ( v173 == 1 )
                  *(_BYTE *)(v4 + 32) = v8[2].m128i_i8[0];
                else
                  memcpy(v176, &v8[2], v173);
                v173 = v8[1].m128i_u64[1];
              }
              *(_QWORD *)(v4 + 24) = v173;
              *((_BYTE *)v176 + v173) = 0;
              v113 = (__m128i *)v8[1].m128i_i64[0];
            }
            else
            {
              *(_QWORD *)(v4 + 16) = v112;
              *(_QWORD *)(v4 + 24) = v8[1].m128i_i64[1];
              *(_QWORD *)(v4 + 32) = v8[2].m128i_i64[0];
              v113 = v8 + 2;
              v8[1].m128i_i64[0] = (__int64)v67;
            }
            v8[1].m128i_i64[1] = 0;
            v113->m128i_i8[0] = 0;
            v27 = (__m128i *)v8[1].m128i_i64[0];
            *v8 = _mm_load_si128(&v187);
            v70 = v188;
            if ( v188 == p_src )
              goto LABEL_113;
            goto LABEL_63;
          }
          v126 = v8[1].m128i_u64[1];
          v127 = (void *)v5[-2].m128i_i64[1];
          v128 = (size_t)v127;
          if ( v126 <= (unsigned __int64)v127 )
            v128 = v8[1].m128i_u64[1];
          if ( v128 )
          {
            v129 = (const void *)v5[-2].m128i_i64[0];
            v130 = (const void *)v8[1].m128i_i64[0];
            v180 = v12;
            dest = v127;
            v131 = memcmp(v130, v129, v128);
            v127 = dest;
            v12 = v180;
            if ( v131 )
            {
              v14 = v131 >> 31;
              goto LABEL_9;
            }
          }
          v175 = v126 - (_QWORD)v127;
          if ( v175 <= 0x7FFFFFFF )
          {
            if ( v175 >= (__int64)0xFFFFFFFF80000000LL )
            {
              LOBYTE(v14) = (int)v175 < 0;
              goto LABEL_9;
            }
            v15 = *(void **)(v4 + 16);
            goto LABEL_108;
          }
          v15 = *(void **)(v4 + 16);
LABEL_10:
          v16 = v7 < v12;
          if ( v7 == v12
            && (v163 = v5[-3].m128i_u64[1], v16 = *(_QWORD *)(v4 + 56) < v163, *(_QWORD *)(v4 + 56) == v163) )
          {
            v18 = *(char **)(v4 + 72);
            v164 = v5[-2].m128i_u64[1];
            v165 = v164;
            if ( (unsigned __int64)v18 <= v164 )
              v165 = *(_QWORD *)(v4 + 72);
            if ( !v165
              || (v166 = (const void *)v5[-2].m128i_i64[0],
                  v167 = *(const void **)(v4 + 64),
                  dest = *(void **)(v4 + 72),
                  LODWORD(v71) = memcmp(v167, v166, v165),
                  v18 = (char *)dest,
                  !(_DWORD)v71) )
            {
              v71 = (signed __int64)&v18[-v164];
              if ( (__int64)&v18[-v164] > 0x7FFFFFFF )
                goto LABEL_14;
              if ( v71 < (__int64)0xFFFFFFFF80000000LL )
                goto LABEL_68;
            }
            v17 = (unsigned int)v71 >> 31;
          }
          else
          {
            LOBYTE(v17) = v16;
          }
          if ( !(_BYTE)v17 )
          {
            v18 = *(char **)(v4 + 72);
LABEL_14:
            v19 = _mm_loadu_si128((const __m128i *)v4);
            v188 = p_src;
            v187 = v19;
            if ( v176 == v15 )
            {
              src = _mm_loadu_si128((const __m128i *)(v4 + 32));
            }
            else
            {
              v20 = *(_QWORD *)(v4 + 32);
              v188 = v15;
              src.m128i_i64[0] = v20;
            }
            v21 = *(_QWORD *)(v4 + 24);
            v22 = _mm_loadu_si128((const __m128i *)(v4 + 48));
            *(_BYTE *)(v4 + 32) = 0;
            v23 = v18;
            *(_QWORD *)(v4 + 24) = 0;
            n = v21;
            *(__m128i *)v4 = v22;
            *(_QWORD *)(v4 + 16) = v176;
            v24 = *(void **)(v4 + 64);
            if ( v24 == v181 )
            {
              if ( v18 )
              {
                if ( v18 == (_BYTE *)&dword_0 + 1 )
                {
                  *(_BYTE *)(v4 + 32) = *(_BYTE *)(v4 + 80);
                }
                else
                {
                  memcpy(v176, v181, (size_t)v18);
                  v23 = *(char **)(v4 + 72);
                }
              }
              *(_QWORD *)(v4 + 24) = v23;
              v23[(_QWORD)v176] = 0;
              v26 = *(_BYTE **)(v4 + 64);
            }
            else
            {
              *(_QWORD *)(v4 + 16) = v24;
              v25 = *(_QWORD *)(v4 + 80);
              *(_QWORD *)(v4 + 24) = v18;
              *(_QWORD *)(v4 + 32) = v25;
              v26 = v181;
              *(_QWORD *)(v4 + 64) = v181;
            }
            *(_QWORD *)(v4 + 72) = 0;
            *v26 = 0;
            v27 = *(__m128i **)(v4 + 64);
            *(__m128i *)(v4 + 48) = _mm_load_si128(&v187);
            v28 = v188;
            if ( v188 == p_src )
              goto LABEL_124;
            goto LABEL_19;
          }
LABEL_68:
          v72 = _mm_loadu_si128((const __m128i *)v4);
          v188 = p_src;
          v187 = v72;
          if ( v176 == v15 )
          {
            src = _mm_loadu_si128((const __m128i *)(v4 + 32));
          }
          else
          {
            v73 = *(_QWORD *)(v4 + 32);
            v188 = v15;
            src.m128i_i64[0] = v73;
          }
          v74 = *(_QWORD *)(v4 + 24);
          *(_BYTE *)(v4 + 32) = 0;
          v75 = v5 - 1;
          *(_QWORD *)(v4 + 24) = 0;
          n = v74;
          *(_QWORD *)(v4 + 16) = v176;
          *(__m128i *)v4 = _mm_loadu_si128(v5 - 3);
          v76 = (__m128i *)v5[-2].m128i_i64[0];
          if ( v76 == &v5[-1] )
          {
            v172 = v5[-2].m128i_u64[1];
            if ( v172 )
            {
              if ( v172 == 1 )
                *(_BYTE *)(v4 + 32) = v5[-1].m128i_i8[0];
              else
                memcpy(v176, &v5[-1], v172);
              v172 = v5[-2].m128i_u64[1];
            }
            *(_QWORD *)(v4 + 24) = v172;
            *((_BYTE *)v176 + v172) = 0;
            v77 = (__m128i *)v5[-2].m128i_i64[0];
          }
          else
          {
            *(_QWORD *)(v4 + 16) = v76;
            *(_QWORD *)(v4 + 24) = v5[-2].m128i_i64[1];
            *(_QWORD *)(v4 + 32) = v5[-1].m128i_i64[0];
            v77 = v5 - 1;
            v5[-2].m128i_i64[0] = (__int64)v75;
          }
          v5[-2].m128i_i64[1] = 0;
          v77->m128i_i8[0] = 0;
          v41 = (__m128i *)v188;
          v27 = (__m128i *)v5[-2].m128i_i64[0];
          v5[-3] = _mm_load_si128(&v187);
          if ( v41 == p_src )
            goto LABEL_187;
          v42 = (void *)src.m128i_i64[0];
          if ( v27 == v75 )
            goto LABEL_35;
          goto LABEL_74;
        }
        LOBYTE(v11) = (int)v174 < 0;
      }
    }
    else
    {
      LOBYTE(v11) = v10;
    }
    v12 = (void *)v5[-3].m128i_i64[0];
    if ( (_BYTE)v11 )
      goto LABEL_7;
LABEL_23:
    v30 = v7 < v12;
    if ( v7 == v12 && (v132 = v5[-3].m128i_u64[1], v30 = *(_QWORD *)(v4 + 56) < v132, *(_QWORD *)(v4 + 56) == v132) )
    {
      v115 = *(char **)(v4 + 72);
      v133 = v5[-2].m128i_u64[1];
      v134 = v133;
      if ( (unsigned __int64)v115 <= v133 )
        v134 = *(_QWORD *)(v4 + 72);
      if ( !v134
        || (v135 = (const void *)v5[-2].m128i_i64[0],
            v136 = *(const void **)(v4 + 64),
            v180 = *(void **)(v4 + 72),
            dest = v12,
            LODWORD(v137) = memcmp(v136, v135, v134),
            v12 = dest,
            v115 = (char *)v180,
            !(_DWORD)v137) )
      {
        v137 = (signed __int64)&v115[-v133];
        if ( (__int64)&v115[-v133] > 0x7FFFFFFF )
        {
          v32 = *(void **)(v4 + 16);
          goto LABEL_26;
        }
        if ( v137 < (__int64)0xFFFFFFFF80000000LL )
        {
          v32 = *(void **)(v4 + 16);
          goto LABEL_119;
        }
      }
      v31 = (unsigned int)v137 >> 31;
    }
    else
    {
      LOBYTE(v31) = v30;
    }
    v32 = *(void **)(v4 + 16);
    if ( (_BYTE)v31 )
    {
      v115 = *(char **)(v4 + 72);
LABEL_119:
      v116 = _mm_loadu_si128((const __m128i *)v4);
      v188 = p_src;
      v187 = v116;
      if ( v176 == v32 )
      {
        src = _mm_loadu_si128((const __m128i *)(v4 + 32));
      }
      else
      {
        v117 = *(_QWORD *)(v4 + 32);
        v188 = v32;
        src.m128i_i64[0] = v117;
      }
      v118 = *(_QWORD *)(v4 + 24);
      v119 = _mm_loadu_si128((const __m128i *)(v4 + 48));
      *(_BYTE *)(v4 + 32) = 0;
      v120 = v115;
      *(_QWORD *)(v4 + 24) = 0;
      n = v118;
      *(__m128i *)v4 = v119;
      *(_QWORD *)(v4 + 16) = v176;
      v121 = *(void **)(v4 + 64);
      if ( v121 == v181 )
      {
        if ( v115 )
        {
          if ( v115 == (_BYTE *)&dword_0 + 1 )
          {
            *(_BYTE *)(v4 + 32) = *(_BYTE *)(v4 + 80);
          }
          else
          {
            memcpy(v176, v181, (size_t)v115);
            v120 = *(char **)(v4 + 72);
          }
        }
        *(_QWORD *)(v4 + 24) = v120;
        v120[(_QWORD)v176] = 0;
        v123 = *(_BYTE **)(v4 + 64);
      }
      else
      {
        *(_QWORD *)(v4 + 16) = v121;
        v122 = *(_QWORD *)(v4 + 80);
        *(_QWORD *)(v4 + 24) = v115;
        *(_QWORD *)(v4 + 32) = v122;
        v123 = v181;
        *(_QWORD *)(v4 + 64) = v181;
      }
      *(_QWORD *)(v4 + 72) = 0;
      *v123 = 0;
      v27 = *(__m128i **)(v4 + 64);
      *(__m128i *)(v4 + 48) = _mm_load_si128(&v187);
      v28 = v188;
      if ( v188 == p_src )
      {
LABEL_124:
        v124 = n;
        if ( n )
        {
          if ( n == 1 )
            v27->m128i_i8[0] = src.m128i_i8[0];
          else
            memcpy(v27, p_src, n);
          v124 = n;
          v27 = *(__m128i **)(v4 + 64);
        }
        *(_QWORD *)(v4 + 72) = v124;
        v27->m128i_i8[v124] = 0;
        v27 = (__m128i *)v188;
        goto LABEL_76;
      }
LABEL_19:
      if ( v27 == v181 )
      {
        dest = (void *)src.m128i_i64[0];
        *(_QWORD *)(v4 + 64) = v28;
        *(__m128 *)(v4 + 72) = _mm_loadh_ps((const double *)&dest);
      }
      else
      {
        dest = (void *)src.m128i_i64[0];
        v29 = *(_QWORD *)(v4 + 80);
        *(_QWORD *)(v4 + 64) = v28;
        *(__m128 *)(v4 + 72) = _mm_loadh_ps((const double *)&dest);
        if ( v27 )
          goto LABEL_75;
      }
      goto LABEL_36;
    }
LABEL_26:
    v33 = v9 < v12;
    if ( v9 != v12 || (v155 = v5[-3].m128i_u64[1], v33 = v8->m128i_i64[1] < v155, v8->m128i_i64[1] != v155) )
    {
      LOBYTE(v34) = v33;
      goto LABEL_28;
    }
    v156 = v8[1].m128i_u64[1];
    v157 = (void *)v5[-2].m128i_i64[1];
    v158 = (size_t)v157;
    if ( v156 <= (unsigned __int64)v157 )
      v158 = v8[1].m128i_u64[1];
    if ( v158 )
    {
      v159 = (const void *)v5[-2].m128i_i64[0];
      v160 = (const void *)v8[1].m128i_i64[0];
      dest = (void *)v5[-2].m128i_i64[1];
      v161 = memcmp(v160, v159, v158);
      v157 = dest;
      if ( v161 )
      {
        v34 = v161 >> 31;
        goto LABEL_28;
      }
    }
    v63 = v156 - (_QWORD)v157;
    if ( v63 <= 0x7FFFFFFF )
    {
      if ( v63 >= (__int64)0xFFFFFFFF80000000LL )
      {
        LOBYTE(v34) = (int)v63 < 0;
LABEL_28:
        if ( (_BYTE)v34 )
          goto LABEL_29;
        goto LABEL_58;
      }
LABEL_29:
      v35 = _mm_loadu_si128((const __m128i *)v4);
      v188 = p_src;
      v187 = v35;
      if ( v176 == v32 )
      {
        src = _mm_loadu_si128((const __m128i *)(v4 + 32));
      }
      else
      {
        v36 = *(_QWORD *)(v4 + 32);
        v188 = v32;
        src.m128i_i64[0] = v36;
      }
      v37 = *(_QWORD *)(v4 + 24);
      *(_BYTE *)(v4 + 32) = 0;
      v38 = v5 - 1;
      *(_QWORD *)(v4 + 24) = 0;
      n = v37;
      *(_QWORD *)(v4 + 16) = v176;
      *(__m128i *)v4 = _mm_loadu_si128(v5 - 3);
      v39 = (__m128i *)v5[-2].m128i_i64[0];
      if ( v39 == &v5[-1] )
      {
        v170 = v5[-2].m128i_u64[1];
        if ( v170 )
        {
          if ( v170 == 1 )
            *(_BYTE *)(v4 + 32) = v5[-1].m128i_i8[0];
          else
            memcpy(v176, &v5[-1], v170);
          v170 = v5[-2].m128i_u64[1];
        }
        *(_QWORD *)(v4 + 24) = v170;
        *((_BYTE *)v176 + v170) = 0;
        v40 = (__m128i *)v5[-2].m128i_i64[0];
      }
      else
      {
        *(_QWORD *)(v4 + 16) = v39;
        *(_QWORD *)(v4 + 24) = v5[-2].m128i_i64[1];
        *(_QWORD *)(v4 + 32) = v5[-1].m128i_i64[0];
        v40 = v5 - 1;
        v5[-2].m128i_i64[0] = (__int64)v38;
      }
      v5[-2].m128i_i64[1] = 0;
      v40->m128i_i8[0] = 0;
      v41 = (__m128i *)v188;
      v27 = (__m128i *)v5[-2].m128i_i64[0];
      v5[-3] = _mm_load_si128(&v187);
      if ( v41 == p_src )
      {
LABEL_187:
        v162 = n;
        if ( n )
        {
          if ( n == 1 )
            v27->m128i_i8[0] = src.m128i_i8[0];
          else
            memcpy(v27, p_src, n);
          v162 = n;
          v27 = (__m128i *)v5[-2].m128i_i64[0];
        }
        v5[-2].m128i_i64[1] = v162;
        v27->m128i_i8[v162] = 0;
        v27 = (__m128i *)v188;
        goto LABEL_76;
      }
      v42 = (void *)src.m128i_i64[0];
      if ( v27 == v38 )
      {
LABEL_35:
        dest = v42;
        v5[-2].m128i_i64[0] = (__int64)v41;
        *(__m128 *)((char *)&v5[-2] + 8) = _mm_loadh_ps((const double *)&dest);
        goto LABEL_36;
      }
LABEL_74:
      dest = v42;
      v29 = v5[-1].m128i_i64[0];
      v5[-2].m128i_i64[0] = (__int64)v41;
      *(__m128 *)((char *)&v5[-2] + 8) = _mm_loadh_ps((const double *)&dest);
      if ( v27 )
      {
LABEL_75:
        v188 = v27;
        src.m128i_i64[0] = v29;
        goto LABEL_76;
      }
      goto LABEL_36;
    }
LABEL_58:
    v64 = _mm_loadu_si128((const __m128i *)v4);
    v188 = p_src;
    v187 = v64;
    if ( v176 == v32 )
    {
      src = _mm_loadu_si128((const __m128i *)(v4 + 32));
    }
    else
    {
      v65 = *(_QWORD *)(v4 + 32);
      v188 = v32;
      src.m128i_i64[0] = v65;
    }
    v66 = *(_QWORD *)(v4 + 24);
    *(_BYTE *)(v4 + 32) = 0;
    v67 = v8 + 2;
    *(_QWORD *)(v4 + 24) = 0;
    n = v66;
    *(_QWORD *)(v4 + 16) = v176;
    *(__m128i *)v4 = _mm_loadu_si128(v8);
    v68 = (__m128i *)v8[1].m128i_i64[0];
    if ( v68 == &v8[2] )
    {
      v171 = v8[1].m128i_u64[1];
      if ( v171 )
      {
        if ( v171 == 1 )
          *(_BYTE *)(v4 + 32) = v8[2].m128i_i8[0];
        else
          memcpy(v176, &v8[2], v171);
        v171 = v8[1].m128i_u64[1];
      }
      *(_QWORD *)(v4 + 24) = v171;
      *((_BYTE *)v176 + v171) = 0;
      v69 = (__m128i *)v8[1].m128i_i64[0];
    }
    else
    {
      *(_QWORD *)(v4 + 16) = v68;
      *(_QWORD *)(v4 + 24) = v8[1].m128i_i64[1];
      *(_QWORD *)(v4 + 32) = v8[2].m128i_i64[0];
      v69 = v8 + 2;
      v8[1].m128i_i64[0] = (__int64)v67;
    }
    v8[1].m128i_i64[1] = 0;
    v69->m128i_i8[0] = 0;
    v27 = (__m128i *)v8[1].m128i_i64[0];
    *v8 = _mm_load_si128(&v187);
    v70 = v188;
    if ( v188 == p_src )
    {
LABEL_113:
      v114 = n;
      if ( n )
      {
        if ( n == 1 )
          v27->m128i_i8[0] = src.m128i_i8[0];
        else
          memcpy(v27, p_src, n);
        v114 = n;
        v27 = (__m128i *)v8[1].m128i_i64[0];
      }
      v8[1].m128i_i64[1] = v114;
      v27->m128i_i8[v114] = 0;
      v27 = (__m128i *)v188;
      goto LABEL_76;
    }
LABEL_63:
    if ( v27 == v67 )
    {
      dest = (void *)src.m128i_i64[0];
      v8[1].m128i_i64[0] = (__int64)v70;
      *(__m128 *)((char *)&v8[1] + 8) = _mm_loadh_ps((const double *)&dest);
    }
    else
    {
      dest = (void *)src.m128i_i64[0];
      v29 = v8[2].m128i_i64[0];
      v8[1].m128i_i64[0] = (__int64)v70;
      *(__m128 *)((char *)&v8[1] + 8) = _mm_loadh_ps((const double *)&dest);
      if ( v27 )
        goto LABEL_75;
    }
LABEL_36:
    v188 = p_src;
    v27 = p_src;
LABEL_76:
    n = 0;
    v27->m128i_i8[0] = 0;
    if ( v188 != p_src )
      operator delete(v188);
    v78 = *(void **)v4;
    v79 = (__m128i *)v181;
    v80 = (unsigned __int64)v5;
    v182 = v5;
    v81 = v4;
    v82 = v78;
    v83 = (__m128i *)((char *)v181 - 32);
    v84 = *((_QWORD *)v181 - 4) < (unsigned __int64)v78;
    if ( *((void **)v181 - 4) != v78 )
    {
LABEL_79:
      LOBYTE(v85) = v84;
      goto LABEL_80;
    }
    while ( 1 )
    {
      v102 = *(_QWORD *)(v81 + 8);
      v84 = v79[-2].m128i_i64[1] < v102;
      if ( v79[-2].m128i_i64[1] != v102 )
        goto LABEL_79;
      v103 = v79[-1].m128i_u64[1];
      v104 = *(void **)(v81 + 24);
      v105 = (size_t)v104;
      if ( v103 <= (unsigned __int64)v104 )
        v105 = v79[-1].m128i_u64[1];
      if ( v105 )
      {
        v106 = *(const void **)(v81 + 16);
        v107 = (const void *)v79[-1].m128i_i64[0];
        v180 = v82;
        dest = v104;
        v108 = memcmp(v107, v106, v105);
        v104 = dest;
        v82 = v180;
        if ( v108 )
        {
          LOBYTE(v85) = v108 < 0;
          goto LABEL_80;
        }
      }
      v154 = v103 - (_QWORD)v104;
      if ( v154 > 0x7FFFFFFF )
        break;
      if ( v154 >= (__int64)0xFFFFFFFF80000000LL )
      {
        v85 = (unsigned int)v154 >> 31;
LABEL_80:
        if ( !(_BYTE)v85 )
          break;
      }
LABEL_100:
      v79 += 3;
      v83 = v79 - 2;
      v84 = v79[-2].m128i_i64[0] < (unsigned __int64)v82;
      if ( (void *)v79[-2].m128i_i64[0] != v82 )
        goto LABEL_79;
    }
    dest = v79;
    v80 -= 48LL;
    v86 = v83;
    v180 = p_src;
    v87 = v82;
    while ( 1 )
    {
      if ( *(void **)v80 != v87 )
      {
        LOBYTE(v88) = *(_QWORD *)v80 > (unsigned __int64)v87;
        goto LABEL_83;
      }
      v89 = *(_QWORD *)(v80 + 8);
      if ( *(_QWORD *)(v81 + 8) == v89 )
        break;
      if ( *(_QWORD *)(v81 + 8) >= v89 )
        goto LABEL_88;
LABEL_84:
      v80 -= 48LL;
    }
    v140 = *(_QWORD *)(v81 + 24);
    v141 = *(_QWORD *)(v80 + 24);
    v142 = v141;
    if ( v140 <= v141 )
      v142 = *(_QWORD *)(v81 + 24);
    if ( v142 )
    {
      v143 = memcmp(*(const void **)(v81 + 16), *(const void **)(v80 + 16), v142);
      if ( v143 )
      {
        v88 = v143 >> 31;
LABEL_83:
        if ( !(_BYTE)v88 )
          goto LABEL_88;
        goto LABEL_84;
      }
    }
    v144 = v140 - v141;
    if ( v144 <= 0x7FFFFFFF )
    {
      if ( v144 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_84;
      v88 = (unsigned int)v144 >> 31;
      goto LABEL_83;
    }
LABEL_88:
    v90 = v86;
    p_src = (__m128i *)v180;
    v79 = (__m128i *)dest;
    if ( v80 > (unsigned __int64)v90 )
    {
      v91 = _mm_loadu_si128((const __m128i *)dest - 2);
      v92 = *((void **)dest - 2);
      v188 = v180;
      v187 = v91;
      if ( dest == v92 )
      {
        src = _mm_loadu_si128((const __m128i *)dest);
      }
      else
      {
        v188 = v92;
        src.m128i_i64[0] = *(_QWORD *)dest;
      }
      v93 = *((_QWORD *)dest - 1);
      *((_QWORD *)dest - 2) = dest;
      v94 = (_BYTE *)(v80 + 32);
      v79->m128i_i8[0] = 0;
      v95 = _mm_loadu_si128((const __m128i *)v80);
      n = v93;
      v79[-1].m128i_i64[1] = 0;
      v79[-2] = v95;
      v96 = *(_QWORD *)(v80 + 16);
      if ( v96 == v80 + 32 )
      {
        v139 = *(_QWORD *)(v80 + 24);
        if ( v139 )
        {
          if ( v139 == 1 )
            v79->m128i_i8[0] = *(_BYTE *)(v80 + 32);
          else
            memcpy(v79, (const void *)(v80 + 32), v139);
          v139 = *(_QWORD *)(v80 + 24);
        }
        v79[-1].m128i_i64[1] = v139;
        v79->m128i_i8[v139] = 0;
        v97 = *(_BYTE **)(v80 + 16);
      }
      else
      {
        v79[-1].m128i_i64[0] = v96;
        v79[-1].m128i_i64[1] = *(_QWORD *)(v80 + 24);
        v79->m128i_i64[0] = *(_QWORD *)(v80 + 32);
        v97 = (_BYTE *)(v80 + 32);
        *(_QWORD *)(v80 + 16) = v94;
      }
      *(_QWORD *)(v80 + 24) = 0;
      *v97 = 0;
      v98 = (__m128i *)v188;
      v99 = *(_BYTE **)(v80 + 16);
      *(__m128i *)v80 = _mm_load_si128(&v187);
      if ( v98 == p_src )
      {
        v138 = n;
        if ( n )
        {
          if ( n == 1 )
            *v99 = src.m128i_i8[0];
          else
            memcpy(v99, p_src, n);
          v138 = n;
          v99 = *(_BYTE **)(v80 + 16);
        }
        *(_QWORD *)(v80 + 24) = v138;
        v99[v138] = 0;
        v99 = v188;
        goto LABEL_97;
      }
      dest = (void *)src.m128i_i64[0];
      if ( v99 == v94 )
      {
        *(_QWORD *)(v80 + 16) = v98;
        *(__m128 *)(v80 + 24) = _mm_loadh_ps((const double *)&dest);
      }
      else
      {
        v100 = _mm_loadh_ps((const double *)&dest);
        v101 = *(_QWORD *)(v80 + 32);
        *(_QWORD *)(v80 + 16) = v98;
        *(__m128 *)(v80 + 24) = v100;
        if ( v99 )
        {
          v188 = v99;
          src.m128i_i64[0] = v101;
LABEL_97:
          n = 0;
          *v99 = 0;
          if ( v188 != p_src )
            operator delete(v188);
          v82 = *(void **)v81;
          goto LABEL_100;
        }
      }
      v188 = p_src;
      v99 = p_src;
      goto LABEL_97;
    }
    v4 = v81;
    v3 = (__int64)v90->m128i_i64 - v81;
    sub_2238710(v90, v182, v178);
    if ( (__int64)v90->m128i_i64 - v81 <= 768 )
      return;
    v5 = v90;
  }
  while ( v178 );
LABEL_164:
  dest = v90;
  v145 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 4);
  v178 = &v183;
  v146 = (__int64)(v145 - 2) >> 1;
  v147 = (const __m128i *)(v4 + 48 * v146 + 32);
  v148 = (__m128i *)&v179[2];
  while ( 1 )
  {
    v151 = _mm_loadu_si128(v147 - 2);
    v152 = (__m128i *)v147[-1].m128i_i64[0];
    v184 = &v186;
    v183 = v151;
    if ( v152 == v147 )
    {
      v153 = _mm_loadu_si128(v147);
      v150 = v147[-1].m128i_u64[1];
      v147->m128i_i8[0] = 0;
      v147[-1].m128i_i64[1] = 0;
      v188 = v148;
      v186 = v153;
      v187 = v151;
    }
    else
    {
      v149 = v147->m128i_i64[0];
      v150 = v147[-1].m128i_u64[1];
      v184 = v152;
      v147[-1].m128i_i64[0] = (__int64)v147;
      v186.m128i_i64[0] = v149;
      v147[-1].m128i_i64[1] = 0;
      v147->m128i_i8[0] = 0;
      v187 = v151;
      v188 = v148;
      if ( v152 != &v186 )
      {
        v188 = v152;
        src.m128i_i64[0] = v149;
        goto LABEL_167;
      }
    }
    src = _mm_load_si128(&v186);
LABEL_167:
    v184 = &v186;
    n = v150;
    v185 = 0;
    v186.m128i_i8[0] = 0;
    sub_2237FF0(v4, v146, v145, v179);
    if ( v188 != v148 )
      operator delete(v188);
    if ( !v146 )
      break;
    --v146;
    if ( v184 != &v186 )
      operator delete(v184);
    v147 -= 3;
  }
  v50 = v178;
  v51 = (char *)dest;
  if ( v184 != &v178[2] )
    operator delete(v184);
  v52 = (__m128i *)(v51 - 16);
  v53 = v50 + 2;
  v54 = (__m128i *)&v179[2];
  do
  {
    while ( 1 )
    {
      v55 = _mm_loadu_si128(v52 - 2);
      v56 = (__m128i *)v52[-1].m128i_i64[0];
      v184 = v53;
      v183 = v55;
      if ( v56 == v52 )
      {
        v186 = _mm_loadu_si128(v52);
      }
      else
      {
        v184 = v56;
        v186.m128i_i64[0] = v52->m128i_i64[0];
      }
      v57 = v52[-1].m128i_u64[1];
      v52[-1].m128i_i64[0] = (__int64)v52;
      v52->m128i_i8[0] = 0;
      v58 = _mm_loadu_si128((const __m128i *)v4);
      v185 = v57;
      v52[-1].m128i_i64[1] = 0;
      v52[-2] = v58;
      v59 = *(void **)(v4 + 16);
      if ( v59 == v176 )
      {
        v168 = *(_QWORD *)(v4 + 24);
        if ( v168 )
        {
          if ( v168 == 1 )
            v52->m128i_i8[0] = *(_BYTE *)(v4 + 32);
          else
            memcpy(v52, v176, v168);
          v168 = *(_QWORD *)(v4 + 24);
        }
        v169 = v52[-1].m128i_i64[0];
        v52[-1].m128i_i64[1] = v168;
        *(_BYTE *)(v169 + v168) = 0;
        v60 = *(_BYTE **)(v4 + 16);
      }
      else
      {
        v52[-1].m128i_i64[0] = (__int64)v59;
        v52[-1].m128i_i64[1] = *(_QWORD *)(v4 + 24);
        v52->m128i_i64[0] = *(_QWORD *)(v4 + 32);
        v60 = v176;
        *(_QWORD *)(v4 + 16) = v176;
      }
      *(_QWORD *)(v4 + 24) = 0;
      *v60 = 0;
      v61 = _mm_load_si128(&v183);
      v188 = v54;
      v187 = v61;
      if ( v184 == v53 )
      {
        src = _mm_load_si128(&v186);
      }
      else
      {
        v188 = v184;
        src.m128i_i64[0] = v186.m128i_i64[0];
      }
      v62 = (__int64)v52[-2].m128i_i64 - v4;
      v184 = v53;
      n = v185;
      v186.m128i_i8[0] = 0;
      v185 = 0;
      sub_2237FF0(v4, 0, 0xAAAAAAAAAAAAAAABLL * (v62 >> 4), v179);
      if ( v188 != v54 )
        operator delete(v188);
      if ( v184 == v53 )
        break;
      operator delete(v184);
      v52 -= 3;
      if ( v62 <= 48 )
        return;
    }
    v52 -= 3;
  }
  while ( v62 > 48 );
}
