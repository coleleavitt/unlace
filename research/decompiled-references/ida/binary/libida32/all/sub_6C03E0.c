__int64 __fastcall sub_6C03E0(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 si128,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rbp
  size_t v13; // r12
  void *v14; // rax
  void *v15; // rax
  void *v16; // r14
  const char *v17; // rdx
  unsigned __int8 v18; // r13
  signed __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // r12
  __int64 v24; // rsi
  int v25; // r12d
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  char v29; // r13
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rdx
  __int32 v33; // r14d
  bool v34; // al
  __int64 v35; // rdx
  char *v36; // rsi
  char *v37; // rbp
  __int64 v38; // r9
  unsigned __int64 v39; // r9
  size_t v40; // r13
  unsigned int *v41; // r14
  void *v42; // rdx
  void *v43; // rax
  __int64 v44; // r14
  void *v45; // rax
  void *v46; // rdi
  __int64 v47; // rax
  void *v48; // r12
  __m128i v49; // xmm0
  void *v50; // rdi
  void *v51; // rdi
  unsigned __int64 v52; // rax
  unsigned __int8 v53; // r13
  const char *v54; // rcx
  __int64 v55; // rbp
  __int64 v56; // r12
  void **v57; // rbx
  void *v58; // rdi
  char *v59; // rdi
  __int64 v60; // r13
  __int64 v61; // r12
  __int64 v62; // rbp
  char *v63; // rbx
  void *v64; // rdi
  void *v65; // rdi
  void *v67; // r12
  int v68; // edx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // r12
  char *v73; // rdx
  char *v74; // rbp
  unsigned int v75; // eax
  size_t v76; // r13
  char *v77; // rax
  const char *v78; // rdx
  void *v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rbp
  char *v82; // rdx
  __int64 v83; // rax
  char *v84; // r12
  __int64 v85; // rbp
  char *v86; // r14
  __int64 v87; // rbx
  char *v88; // rbp
  __int64 v89; // rdx
  __m128i v90; // xmm0
  __int64 v91; // rdx
  __m128i v92; // xmm0
  __int64 v93; // rdx
  void *v94; // rdi
  void *v95; // rdi
  void *v97; // rdi
  void *v98; // r8
  size_t v99; // rdx
  const char *v100; // rdx
  _QWORD *v101; // r12
  char v102; // al
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rax
  int v106; // edx
  char *v107; // r8
  const char *v108; // rcx
  __int64 v109; // rdx
  const char *v110; // rcx
  char *v111; // rdx
  double v112; // xmm4_8
  double v113; // xmm5_8
  unsigned __int64 v114; // r14
  __int64 v115; // rdi
  unsigned __int64 v116; // rdx
  __int64 v117; // r15
  _BYTE *v118; // rsi
  const char *v119; // r8
  const char *v120; // rcx
  char *v121; // rdx
  __int64 v122; // r15
  __int64 v123; // r14
  char *v124; // rax
  void *v125; // rdi
  const char **v126; // r15
  const char *v127; // rcx
  __int64 v128; // rax
  unsigned __int64 v129; // r14
  unsigned __int64 v130; // rax
  __int64 v131; // rsi
  unsigned __int64 v132; // rdi
  __int64 v133; // rdx
  unsigned __int64 v134; // rax
  void *v135; // rax
  void *v136; // rdx
  void *v137; // rax
  __m128i v138; // [rsp+0h] [rbp-208h] BYREF
  __m128i v139; // [rsp+10h] [rbp-1F8h] BYREF
  void *v140; // [rsp+20h] [rbp-1E8h]
  unsigned __int8 v141; // [rsp+2Fh] [rbp-1D9h]
  unsigned __int64 v142; // [rsp+30h] [rbp-1D8h]
  __int64 *v143; // [rsp+38h] [rbp-1D0h]
  void *v144; // [rsp+40h] [rbp-1C8h]
  __int64 v145; // [rsp+48h] [rbp-1C0h]
  __int64 v146; // [rsp+58h] [rbp-1B0h] BYREF
  void *v147; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned __int64 v148; // [rsp+68h] [rbp-1A0h]
  void *v149; // [rsp+80h] [rbp-188h] BYREF
  __int128 v150; // [rsp+88h] [rbp-180h]
  void *src; // [rsp+A0h] [rbp-168h] BYREF
  size_t n[2]; // [rsp+A8h] [rbp-160h]
  void *v153; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v154; // [rsp+C8h] [rbp-140h]
  char *v155; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v156; // [rsp+E8h] [rbp-120h]
  __int64 v157; // [rsp+F0h] [rbp-118h]
  void *v158; // [rsp+100h] [rbp-108h] BYREF
  unsigned __int64 v159; // [rsp+108h] [rbp-100h]
  unsigned __int64 v160; // [rsp+110h] [rbp-F8h]
  void *v161; // [rsp+120h] [rbp-E8h] BYREF
  __m128i v162; // [rsp+128h] [rbp-E0h] BYREF
  __int64 v163; // [rsp+138h] [rbp-D0h]
  int v164; // [rsp+140h] [rbp-C8h]
  void *v165; // [rsp+150h] [rbp-B8h] BYREF
  __m128i v166; // [rsp+158h] [rbp-B0h] BYREF
  void *v167; // [rsp+168h] [rbp-A0h]
  __int128 v168; // [rsp+170h] [rbp-98h]
  int v169; // [rsp+180h] [rbp-88h]
  char v170; // [rsp+184h] [rbp-84h]
  void *ptr; // [rsp+190h] [rbp-78h] BYREF
  size_t v172[2]; // [rsp+198h] [rbp-70h]
  _BYTE v173[32]; // [rsp+1A8h] [rbp-60h] BYREF
  unsigned __int64 v174; // [rsp+1C8h] [rbp-40h]

  v11 = a1;
  v143 = a2;
  v174 = __readfsqword(0x28u);
  v12 = a3;
  sub_6B7750((__int64)&v147, (__int64)a1, a3, 1);
  v149 = nullptr;
  v150 = 0;
  if ( v148 <= 1 && (unsigned __int8)sub_6B86A0(a1, (__int64 *)&v149, v12) )
  {
    if ( v143 )
    {
      v78 = haystack;
      if ( (_QWORD)v150 )
        v78 = (const char *)v149;
      sub_6BC100((__int64)a1, v143, v78);
    }
LABEL_129:
    v141 = 1;
    goto LABEL_88;
  }
  v141 = sub_6D3B90(a1, v12);
  if ( v141 )
  {
    if ( v143 )
    {
      sub_6B7B10((__int64)&v165, (__int64)a1, v12, 1);
      v100 = haystack;
      if ( v166.m128i_i64[0] )
        v100 = (const char *)v165;
      sub_6BC100((__int64)a1, v143, v100);
      if ( v165 )
      {
        v166.m128i_i64[0] = 0;
        qfree(v165);
      }
    }
    goto LABEL_129;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v148 > 1 )
  {
    sub_6B7B10((__int64)&v165, (__int64)a1, v12, 1);
    v67 = v165;
    a5 = _mm_loadu_si128(&v166);
    v165 = nullptr;
    v166 = 0;
    if ( src )
    {
      v138 = a5;
      n[0] = 0;
      qfree(src);
      a5 = _mm_load_si128(&v138);
      src = v67;
      *(__m128i *)n = a5;
      if ( v165 )
      {
        v166.m128i_i64[0] = 0;
        qfree(v165);
      }
    }
    else
    {
      src = v67;
      *(__m128i *)n = a5;
    }
  }
  sub_6B7070((__int64)&v153, (__int64)a1, v12);
  if ( (*(_WORD *)(v12 + 74) & 0x7F80) != 0 || (unsigned __int8)(*(_QWORD *)(v12 + 72) >> 31) || (v13 = n[0], n[0] <= 1) )
  {
LABEL_13:
    v19 = *(_QWORD *)(v12 + 128);
    v165 = nullptr;
    v167 = nullptr;
    v169 = 0;
    v170 = 0x80;
    v166 = 0;
    v168 = 0;
    if ( !v19 )
      goto LABEL_23;
    v20 = v19 >> 2;
    if ( (v19 & 4) != 0 )
    {
      if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_23;
      if ( (v20 & 1) != 0 )
      {
        ptr = *(void **)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        v19 = sub_6B4E70(&ptr);
      }
      v101 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
      v102 = sub_F41500(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
      v103 = a1[6];
      v169 |= v102 == 0 ? 64 : 128;
      v104 = *v101;
      v105 = sub_A73FE0(v103, *v101) >> 3;
      if ( (unsigned int)v105 <= 8 && ((unsigned int)v105 & ((_DWORD)v105 - 1)) == 0 )
      {
        LOBYTE(v106) = 0;
        if ( (_DWORD)v105 )
          v106 = log2ceil((int)v105, v104, 0) + 1;
        goto LABEL_156;
      }
LABEL_168:
      v110 = haystack;
      if ( v148 )
        v110 = (const char *)v147;
      sub_6BB730(v11, v12, (__int64)"Unsupported enum %s base type", v110);
      goto LABEL_73;
    }
    if ( (unsigned __int64)v19 <= 7 )
      goto LABEL_23;
    if ( (v20 & 1) != 0 )
    {
      ptr = *(void **)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      v21 = sub_6B4E70(&ptr);
      v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v21 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      v22 = v21;
    }
    if ( v22 <= 0xF )
      goto LABEL_23;
    v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)sub_F41500(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL)) )
      goto LABEL_20;
    sub_B5AB30(v12);
    v128 = sub_B5AB30(v12);
    if ( !v128 )
      v128 = v12;
    v129 = sub_B6AC30(v128 + 64);
    if ( !v129 )
    {
LABEL_20:
      v24 = *v23;
      v25 = sub_A73FE0(v11[6], *v23) >> 3;
      if ( v25 < (unsigned __int8)getinf(61) )
        v25 = (unsigned __int8)getinf(61);
      if ( (unsigned __int8)getinf(61) == v25 )
      {
LABEL_23:
        v157 = 0;
        if ( (*(_BYTE *)(v12 + 29) & 1) != 0 )
        {
          v155 = nullptr;
          v156 = 0;
          sub_6B47A0((__int64)v11, (__int64)&v155, v12);
          v145 = v156;
          v144 = v155;
          if ( &v155[24 * v156] != v155 )
          {
            v139.m128i_i64[0] = (__int64)&v155[24 * v156];
            v126 = (const char **)v144;
            v138.m128i_i64[0] = (__int64)&v165;
            do
            {
              v161 = nullptr;
              v163 = 1;
              v164 = -1;
              if ( (unsigned __int8)sub_6B8B10((__int64)v11, (__int64)&v161, (__int64)v126, 0x2Du) )
              {
                enum_type_data_t__set_value_repr(v138.m128i_i64[0], &v161);
              }
              else
              {
                v127 = haystack;
                if ( v126[1] )
                  v127 = *v126;
                sub_6C0320(v11, v12, (__int64)"Misplaced annotation: %s", v127);
              }
              v126 += 3;
            }
            while ( (const char **)v139.m128i_i64[0] != v126 );
LABEL_26:
            sub_B5AB30(v12);
            v26 = sub_B5AB30(v12);
            if ( !v26 )
              v26 = v12;
            v27 = sub_B6AC30(v26 + 64);
            if ( !v27 )
              goto LABEL_63;
            while ( (*(_BYTE *)(v27 + 28) & 0x7F) != 0x21 )
            {
              v28 = *(_QWORD *)(v27 + 8);
              v27 = v28 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v28 <= 7 )
                goto LABEL_63;
            }
            v142 = v12;
LABEL_33:
            v29 = *(_BYTE *)(v27 + 80);
            v30 = *(_QWORD *)(v27 + 56);
            v31 = *(unsigned int *)(v27 + 64);
            if ( (unsigned __int64)(v31 + 63) <= 0x7F )
            {
              LODWORD(v159) = *(_DWORD *)(v27 + 64);
              v158 = (void *)v30;
              BYTE4(v159) = v29;
              if ( !v29 )
              {
                v32 = 1LL << ((unsigned __int8)v31 - 1);
                goto LABEL_98;
              }
            }
            else
            {
              sub_21E18D0(&v161, (unsigned int)v31, (unsigned __int64)(v31 + 63) >> 6, *(_QWORD *)(v27 + 56));
              LODWORD(v31) = v162.m128i_i32[0];
              v30 = (__int64)v161;
              BYTE4(v159) = v29;
              LODWORD(v159) = v162.m128i_i32[0];
              v158 = v161;
              if ( !v29 )
              {
                v32 = 1LL << (v162.m128i_i8[0] - 1);
                if ( v162.m128i_i32[0] > 0x40u )
                {
                  v33 = v162.m128i_i32[0] + 1;
                  if ( (*((_QWORD *)v161 + ((unsigned int)(v162.m128i_i32[0] - 1) >> 6)) & v32) != 0 )
                    v34 = v33 - (unsigned int)sub_21E2AC0(&v158) <= 0x40;
                  else
                    v34 = v33 - (unsigned int)sub_21E2A40(&v158) <= 0x40;
                  goto LABEL_38;
                }
LABEL_98:
                if ( (v30 & v32) != 0 )
                {
                  if ( !(_DWORD)v31 )
                    goto LABEL_39;
                  v68 = 64;
                  v69 = ~(v30 << (64 - (unsigned __int8)v31));
                  if ( v69 )
                  {
                    _BitScanReverse64(&v70, v69);
                    v68 = v70 ^ 0x3F;
                  }
                  if ( (unsigned int)(v31 + 1 - v68) <= 0x40 )
                    goto LABEL_39;
                  goto LABEL_103;
                }
                if ( !v30 )
                  goto LABEL_39;
                v34 = v30 >= 0;
LABEL_38:
                if ( v34 )
                {
LABEL_39:
                  v139.m128i_i8[0] = 1;
LABEL_40:
                  v35 = v166.m128i_i64[0];
                  v36 = (char *)v165;
                  if ( v166.m128i_i64[1] < (unsigned __int64)(v166.m128i_i64[0] + 1) )
                  {
                    v77 = (char *)qvector_reserve(v138.m128i_i64[0], v165, v166.m128i_i64[0] + 1, 56);
                    v35 = v166.m128i_i64[0];
                    v165 = v77;
                    v36 = v77;
                  }
                  v37 = &v36[56 * v35];
                  *(_QWORD *)v37 = 0;
                  *((_QWORD *)v37 + 3) = 0;
                  *(_OWORD *)(v37 + 8) = 0;
                  *((_OWORD *)v37 + 2) = 0;
                  ++v166.m128i_i64[0];
                  v38 = *(_QWORD *)(v27 + 40);
                  if ( (v38 & 7) != 0 )
                  {
                    v44 = 0;
                    v40 = 0;
                    v42 = nullptr;
                  }
                  else
                  {
                    v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
                    v40 = v39;
                    if ( v39 )
                    {
                      v41 = *(unsigned int **)(v39 + 16);
                      v42 = nullptr;
                      v40 = *v41;
                      v43 = v41 + 4;
                      v44 = 0;
                      v140 = v43;
                      if ( v40 )
                      {
                        v162 = 0;
                        v161 = nullptr;
                        v45 = (void *)qvector_reserve(&v161, 0, v40 + 1, 1);
                        v162.m128i_i64[0] = v40 + 1;
                        v161 = v45;
                        memmove(v45, v140, v40);
                        *((_BYTE *)v161 + v40) = 0;
                        v42 = v161;
                        v44 = v162.m128i_i64[1];
                        v40 = v162.m128i_i64[0];
                      }
                    }
                    else
                    {
                      v44 = 0;
                      v42 = nullptr;
                    }
                  }
                  v161 = nullptr;
                  v162 = 0;
                  v46 = *(void **)v37;
                  if ( *(_QWORD *)v37 )
                  {
                    *((_QWORD *)v37 + 1) = 0;
                    v140 = v42;
                    qfree(v46);
                    v42 = v140;
                  }
                  *(_QWORD *)v37 = v42;
                  *((_QWORD *)v37 + 1) = v40;
                  *((_QWORD *)v37 + 2) = v44;
                  if ( v161 )
                  {
                    v162.m128i_i64[0] = 0;
                    qfree(v161);
                  }
                  if ( v139.m128i_i8[0] )
                  {
                    if ( (unsigned int)v159 > 0x40 )
                    {
                      v47 = *(_QWORD *)v158;
                    }
                    else
                    {
                      v47 = 0;
                      if ( (_DWORD)v159 )
                        v47 = (__int64)((_QWORD)v158 << (64 - (unsigned __int8)v159)) >> (64 - (unsigned __int8)v159);
                    }
                  }
                  else
                  {
                    v47 = (__int64)v158;
                    if ( (unsigned int)v159 > 0x40 )
                      v47 = *(_QWORD *)v158;
                  }
                  *((_QWORD *)v37 + 6) = v47;
                  sub_6B7070((__int64)&v161, (__int64)v11, v27);
                  a5.m128i_i64[0] = 0;
                  v48 = v161;
                  v49 = _mm_loadu_si128(&v162);
                  v161 = nullptr;
                  v162 = 0;
                  v50 = *((void **)v37 + 3);
                  if ( v50 )
                  {
                    *((_QWORD *)v37 + 4) = 0;
                    v139 = v49;
                    qfree(v50);
                    v51 = v161;
                    *((_QWORD *)v37 + 3) = v48;
                    *((__m128i *)v37 + 2) = _mm_load_si128(&v139);
                    if ( v51 )
                    {
                      v162.m128i_i64[0] = 0;
                      qfree(v51);
                    }
                  }
                  else
                  {
                    *((_QWORD *)v37 + 3) = v48;
                    *((__m128i *)v37 + 2) = v49;
                  }
                  goto LABEL_57;
                }
LABEL_103:
                v71 = v11[75];
                v72 = v11[76];
                if ( v72 < v71 + 1 )
                {
                  v80 = qvector_reserve(v11 + 74, 0, v71 + 1, 64);
                  v81 = v11[75];
                  v82 = (char *)v80;
                  v83 = v11[76];
                  v11[76] = v72;
                  v84 = (char *)v11[74];
                  v139.m128i_i64[0] = v83;
                  v85 = v81 - 1;
                  if ( v85 >= 0 )
                  {
                    v140 = v11;
                    v86 = v82;
                    v87 = v85;
                    v88 = v82;
                    do
                    {
                      v89 = *(_QWORD *)v84;
                      v90 = _mm_loadu_si128((const __m128i *)(v84 + 8));
                      a6 = 0.0;
                      *(_QWORD *)v84 = 0;
                      *(_OWORD *)(v84 + 8) = 0;
                      *(_QWORD *)v86 = v89;
                      *(__m128i *)(v86 + 8) = v90;
                      v91 = *((_QWORD *)v84 + 3);
                      v92 = _mm_loadu_si128((const __m128i *)v84 + 2);
                      *((_QWORD *)v84 + 3) = 0;
                      *((_QWORD *)v86 + 3) = v91;
                      *((__m128i *)v86 + 2) = v92;
                      v93 = *((_QWORD *)v84 + 6);
                      *((_QWORD *)v84 + 5) = 0;
                      *((_QWORD *)v86 + 6) = v93;
                      *((_QWORD *)v86 + 7) = *((_QWORD *)v84 + 7);
                      v94 = *((void **)v84 + 3);
                      if ( v94 )
                      {
                        *((_QWORD *)v84 + 4) = 0;
                        qfree(v94);
                      }
                      v95 = *(void **)v84;
                      if ( *(_QWORD *)v84 )
                      {
                        *((_QWORD *)v84 + 1) = 0;
                        qfree(v95);
                      }
                      v84 += 64;
                      v86 += 64;
                    }
                    while ( v87-- != 0 );
                    v11 = v140;
                    v82 = v88;
                    v84 = *((char **)v140 + 74);
                  }
                  v140 = v82;
                  qfree(v84);
                  v73 = (char *)v140;
                  v11[76] = v139.m128i_i64[0];
                  v71 = v11[75];
                  v11[74] = v73;
                }
                else
                {
                  v73 = (char *)v11[74];
                }
                v74 = &v73[64 * v71];
                *(_QWORD *)v74 = 0;
                *((_QWORD *)v74 + 6) = -1;
                *((_QWORD *)v74 + 3) = 0;
                *((_QWORD *)v74 + 7) = 4;
                *(_OWORD *)(v74 + 8) = 0;
                *((_OWORD *)v74 + 2) = 0;
                ++v11[75];
                *((_DWORD *)v74 + 14) = 3;
                v75 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 16LL))(v27);
                if ( v75 )
                {
                  sub_FFEBC0(&v161, *(_QWORD *)(v11[6] + 2312LL), v75, 1);
                  v79 = v161;
                  if ( v161 )
                  {
                    *((_QWORD *)v74 + 6) = *(__int64 *)((char *)v162.m128i_i64 + 4);
                    sub_6B40D0((__int64 *)v74 + 3, v79);
                  }
                }
                si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384050);
                ptr = v173;
                *(__m128 *)v172 = si128;
                sub_21E7D50((unsigned int)&v158, (unsigned int)&ptr, 10, BYTE4(v159) ^ 1, 0, 1, 0);
                v76 = v172[0];
                if ( v172[0] )
                {
                  v97 = nullptr;
                  v161 = nullptr;
                  v98 = ptr;
                  v162 = 0;
                  v99 = v172[0] + 1;
                  if ( v172[0] != -1 )
                  {
                    v140 = ptr;
                    v139.m128i_i64[0] = v172[0] + 1;
                    v135 = (void *)qvector_reserve(&v161, 0, v99, 1);
                    v98 = v140;
                    v99 = v139.m128i_i64[0];
                    v161 = v135;
                    v97 = v135;
                  }
                  v162.m128i_i64[0] = v99;
                  memmove(v97, v98, v76);
                  *((_BYTE *)v161 + v76) = 0;
                }
                else
                {
                  v161 = nullptr;
                  v162 = 0;
                }
                sub_3573A0((char **)v74);
                if ( v161 )
                {
                  v162.m128i_i64[0] = 0;
                  qfree(v161);
                }
                if ( ptr != v173 )
                  free(ptr);
LABEL_57:
                if ( (unsigned int)v159 > 0x40 && v158 )
                  operator delete[](v158);
                while ( 1 )
                {
                  v52 = *(_QWORD *)(v27 + 8);
                  v27 = v52 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v52 <= 7 )
                    break;
                  if ( (*(_BYTE *)(v27 + 28) & 0x7F) == 0x21 )
                    goto LABEL_33;
                }
                v12 = v142;
LABEL_63:
                v146 = 0;
                v53 = create_tinfo(&v146, 45, 45, v138.m128i_i64[0]);
                if ( !v53 )
                {
                  v54 = haystack;
                  if ( v148 )
                    v54 = (const char *)v147;
                  sub_6BB730(v11, v12, (__int64)"Could not create tinfo for %s", v54);
                  goto LABEL_67;
                }
                if ( (unsigned __int8)sub_B54810(v12) )
                  set_tinfo_property4(&v146, 18, 2, 0, 0, 0);
                if ( v148 <= 1 )
                {
                  if ( !(unsigned __int8)sub_6BE860(v11, &src, (__int64)&v146, 1, nullptr, v12) )
                  {
LABEL_67:
                    clear_tinfo_t(&v146);
                    if ( v144 )
                    {
                      v55 = 0;
                      v56 = v145;
                      v57 = (void **)v144;
                      if ( v145 )
                      {
                        do
                        {
                          v58 = *v57;
                          if ( *v57 )
                          {
                            v57[1] = nullptr;
                            qfree(v58);
                          }
                          ++v55;
                          v57 += 3;
                        }
                        while ( v55 != v56 );
                      }
                      qfree(v144);
                    }
LABEL_73:
                    if ( v167 )
                    {
                      *(_QWORD *)&v168 = 0;
                      qfree(v167);
                    }
                    v59 = (char *)v165;
                    if ( v165 )
                    {
                      v60 = v166.m128i_i64[0];
                      if ( v166.m128i_i64[0] )
                      {
                        v61 = 0;
                        v62 = 0;
                        do
                        {
                          v63 = &v59[v61];
                          v64 = *(void **)&v59[v61 + 24];
                          if ( v64 )
                          {
                            *((_QWORD *)v63 + 4) = 0;
                            qfree(v64);
                          }
                          v65 = *(void **)v63;
                          if ( *(_QWORD *)v63 )
                          {
                            *((_QWORD *)v63 + 1) = 0;
                            qfree(v65);
                          }
                          ++v62;
                          v59 = (char *)v165;
                          v61 += 56;
                        }
                        while ( v60 != v62 );
                      }
                      v166.m128i_i64[0] = 0;
                      qfree(v59);
                    }
                    goto LABEL_84;
                  }
                  v111 = (char *)haystack;
                  if ( n[0] )
                    v111 = (char *)src;
                  sub_6B80F0(v11, v12, v111);
                  v138.m128i_i64[0] = (__int64)&v158;
                  sub_6B75D0((__int64 *)&v158, (__int64)v11, v12);
                  v114 = v159;
                  v115 = v138.m128i_i64[0];
                  if ( v159 )
                  {
                    v116 = v159 + 1;
                    v117 = v159;
                    v114 = v159 - 1;
                  }
                  else
                  {
                    v117 = 1;
                    v116 = 2;
                  }
                  v118 = v158;
                  if ( v160 < v116 )
                  {
                    v138.m128i_i64[0] = v116;
                    v137 = (void *)qvector_reserve(v115, v158, v116, 1);
                    v116 = v138.m128i_i64[0];
                    v158 = v137;
                    v118 = v137;
                  }
                  v159 = v116;
                  v119 = haystack;
                  v118[v114] = 36;
                  *((_BYTE *)v158 + v117) = 0;
                  v161 = nullptr;
                  v162 = 0;
                  if ( n[0] )
                    v119 = (const char *)src;
                  v120 = haystack;
                  if ( v159 )
                    v120 = (const char *)v158;
                  sub_6BC380(
                    (__int64)v11,
                    &v146,
                    (__int64 *)&v161,
                    v120,
                    v119,
                    0.0,
                    *(double *)a5.m128i_i64,
                    a6,
                    *(double *)si128.m128_u64,
                    v112,
                    v113,
                    a10,
                    a11);
                  v121 = (char *)v161;
                  if ( v161 )
                  {
                    v122 = v162.m128i_i64[0];
                    if ( v162.m128i_i64[0] )
                    {
                      v123 = 0;
                      do
                      {
                        v124 = &v121[24 * v123];
                        v125 = *(void **)v124;
                        if ( *(_QWORD *)v124 )
                        {
                          *((_QWORD *)v124 + 1) = 0;
                          qfree(v125);
                          v121 = (char *)v161;
                        }
                        ++v123;
                      }
                      while ( v122 != v123 );
                    }
                    v162.m128i_i64[0] = 0;
                    qfree(v121);
                  }
                  if ( v158 )
                  {
                    v159 = 0;
                    qfree(v158);
                  }
                }
                v107 = (char *)haystack;
                if ( v154 )
                  v107 = (char *)v153;
                v108 = haystack;
                if ( n[0] )
                  v108 = (const char *)src;
                sub_6BED00((__int64)v11, &v146, 1, v108, v107, v12, 0);
                if ( v143 )
                {
                  v109 = v146;
                  v146 = *v143;
                  *v143 = v109;
                }
                v141 = v53;
                goto LABEL_67;
              }
              if ( v162.m128i_i32[0] > 0x40u && (unsigned int)v31 - (unsigned int)sub_21E2A40(&v158) > 0x40 )
                goto LABEL_103;
            }
            v139.m128i_i8[0] = 0;
            goto LABEL_40;
          }
        }
        else
        {
          v145 = 0;
          v144 = nullptr;
        }
        v138.m128i_i64[0] = (__int64)&v165;
        goto LABEL_26;
      }
      if ( v25 <= 8 && (v25 & (v25 - 1)) == 0 )
      {
        LOBYTE(v106) = 0;
        if ( v25 )
          v106 = log2ceil(v25, v24, 0) + 1;
LABEL_156:
        v170 = v106 | v170 & 0xF8;
        goto LABEL_23;
      }
      goto LABEL_168;
    }
    while ( (*(_BYTE *)(v129 + 28) & 0x7F) != 0x21 )
    {
      v130 = *(_QWORD *)(v129 + 8);
      v129 = v130 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v130 <= 7 )
        goto LABEL_20;
    }
LABEL_210:
    v131 = *(unsigned int *)(v129 + 64);
    if ( (unsigned __int64)(v131 + 63) <= 0x7F )
    {
      v132 = *(_QWORD *)(v129 + 56);
      v133 = 1LL << ((unsigned __int8)v131 - 1);
    }
    else
    {
      sub_21E18D0(&v161, v131, (unsigned __int64)(v131 + 63) >> 6, *(_QWORD *)(v129 + 56));
      v132 = (unsigned __int64)v161;
      v133 = 1LL << (v162.m128i_i8[0] - 1);
      if ( v162.m128i_i32[0] > 0x40u )
      {
        if ( (*((_QWORD *)v161 + ((unsigned int)(v162.m128i_i32[0] - 1) >> 6)) & v133) == 0 )
        {
          if ( v161 )
            operator delete[](v161);
LABEL_216:
          while ( 1 )
          {
            v134 = *(_QWORD *)(v129 + 8);
            v129 = v134 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v134 <= 7 )
              goto LABEL_20;
            if ( (*(_BYTE *)(v129 + 28) & 0x7F) == 0x21 )
              goto LABEL_210;
          }
        }
        if ( v161 )
          operator delete[](v161);
LABEL_220:
        v169 |= 0x40u;
        goto LABEL_20;
      }
    }
    if ( (v133 & v132) == 0 )
      goto LABEL_216;
    goto LABEL_220;
  }
  v14 = (void *)qalloc_or_throw(n[0], (const char *)a1);
  v166.m128i_i64[1] = v13;
  v15 = memcpy(v14, src, v13);
  v166.m128i_i64[0] = v13;
  v165 = v15;
  sub_6B9AB0((__int64)a1, (__int64)&v165);
  v16 = v165;
  v17 = haystack;
  v161 = nullptr;
  if ( v166.m128i_i64[0] )
    v17 = (const char *)v165;
  v18 = sub_6BC100((__int64)a1, (__int64 *)&v161, v17);
  if ( !v18 || (get_tinfo_property(v161, 2) & 0x3F) != 0x2D || get_tinfo_property(v161, 5) )
  {
    clear_tinfo_t(&v161);
    if ( v16 )
      qfree(v16);
    goto LABEL_13;
  }
  if ( v143 )
  {
    v136 = v161;
    v161 = (void *)*v143;
    *v143 = (__int64)v136;
  }
  clear_tinfo_t(&v161);
  if ( v16 )
    qfree(v16);
  v141 = v18;
LABEL_84:
  if ( v153 )
  {
    v154 = 0;
    qfree(v153);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
LABEL_88:
  if ( v149 )
  {
    *(_QWORD *)&v150 = 0;
    qfree(v149);
  }
  if ( v147 )
  {
    v148 = 0;
    qfree(v147);
  }
  return v141;
}

