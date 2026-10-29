_QWORD *__fastcall sub_446E00(_QWORD *a1, unsigned __int8 **a2, __int64 a3, double a4)
{
  unsigned __int8 *v4; // r13
  unsigned __int8 *v5; // rbx
  void *v7; // rax
  size_t v8; // r14
  size_t v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int8 *v16; // rcx
  unsigned __int8 *i; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rbx
  __m128 v21; // xmm3
  __int64 v22; // rbx
  size_t v23; // rbp
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  double v26; // xmm0_8
  double v27; // xmm0_8
  double v28; // xmm1_8
  double v29; // xmm0_8
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  double v32; // xmm4_8
  __m128 v33; // xmm2
  __m128d v34; // xmm1
  __m128d v35; // xmm0
  double v36; // xmm1_8
  unsigned __int64 v37; // rbx
  __m128 v38; // xmm2
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __m128 v41; // xmm3
  double v42; // xmm0_8
  double v43; // xmm0_8
  double v44; // xmm1_8
  double v45; // xmm0_8
  unsigned __int8 *v46; // rax
  __int64 v47; // rbp
  double v48; // xmm6_8
  size_t v49; // rbp
  __int128 v50; // xmm7
  __m128 v51; // xmm3
  __m128d v52; // xmm1
  __m128d v53; // xmm0
  bool v54; // zf
  double v56; // xmm1_8
  unsigned __int64 v57; // rax
  __m128 v58; // xmm2
  __m128 v59; // xmm3
  __m128d v60; // xmm0
  __m128d v61; // xmm1
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // rbx
  void *v64; // rbp
  char *v65; // rax
  char *v66; // rcx
  signed __int64 v67; // r10
  char *v68; // rdx
  char *v69; // rbx
  char *v70; // r12
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r11
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rax
  char *v78; // rcx
  __m128d *v79; // r12
  char *v80; // rsi
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  bool v83; // cf
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  char *v88; // rcx
  char *v89; // rdx
  __int64 v90; // rax
  const __m128i *v91; // rdx
  __m128d *v92; // rax
  char *v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rsi
  unsigned __int64 v96; // rax
  __m128d *v97; // rax
  __m128d *v98; // r8
  const __m128i *v99; // rdx
  __m128d *v100; // r12
  _BYTE *v101; // rax
  void *v102; // rdi
  double v103; // xmm0_8
  double v104; // xmm1_8
  double v105; // xmm0_8
  unsigned __int8 v106; // al
  double v107; // [rsp+8h] [rbp-300h]
  double v108; // [rsp+8h] [rbp-300h]
  char *v109; // [rsp+8h] [rbp-300h]
  size_t v110; // [rsp+8h] [rbp-300h]
  double v111; // [rsp+10h] [rbp-2F8h]
  char *v112; // [rsp+10h] [rbp-2F8h]
  char *v113; // [rsp+10h] [rbp-2F8h]
  unsigned __int64 v115; // [rsp+28h] [rbp-2E0h] BYREF
  void *v116; // [rsp+30h] [rbp-2D8h]
  signed __int64 *v117; // [rsp+38h] [rbp-2D0h]
  double v118; // [rsp+40h] [rbp-2C8h]
  unsigned __int64 v119; // [rsp+48h] [rbp-2C0h]
  char *v120; // [rsp+50h] [rbp-2B8h]
  unsigned __int64 v121; // [rsp+58h] [rbp-2B0h] BYREF
  const __m128i *v122; // [rsp+60h] [rbp-2A8h]
  __int64 v123; // [rsp+68h] [rbp-2A0h]
  size_t n; // [rsp+70h] [rbp-298h]
  void *v125; // [rsp+78h] [rbp-290h]
  char *v126; // [rsp+80h] [rbp-288h]
  signed __int64 v127; // [rsp+88h] [rbp-280h]
  char *v128; // [rsp+90h] [rbp-278h]
  void *v129; // [rsp+98h] [rbp-270h]
  double v130; // [rsp+A0h] [rbp-268h]
  unsigned __int64 v131; // [rsp+A8h] [rbp-260h]
  _QWORD v132[4]; // [rsp+F0h] [rbp-218h] BYREF
  __m128i v133; // [rsp+110h] [rbp-1F8h] BYREF
  unsigned __int64 v134; // [rsp+120h] [rbp-1E8h]
  __m128i v135; // [rsp+130h] [rbp-1D8h] BYREF
  __int64 v136; // [rsp+140h] [rbp-1C8h]
  __m128 v137; // [rsp+150h] [rbp-1B8h] BYREF
  __int64 v138; // [rsp+160h] [rbp-1A8h]
  signed __int64 v139; // [rsp+170h] [rbp-198h] BYREF
  __int128 v140; // [rsp+178h] [rbp-190h]
  size_t v141; // [rsp+188h] [rbp-180h]
  size_t v142; // [rsp+190h] [rbp-178h]
  __int64 v143; // [rsp+198h] [rbp-170h]
  __int64 v144; // [rsp+1A0h] [rbp-168h]
  size_t v145; // [rsp+1A8h] [rbp-160h]
  _QWORD *v146; // [rsp+1B0h] [rbp-158h]
  _BYTE v147[264]; // [rsp+1C0h] [rbp-148h] BYREF
  unsigned __int64 v148; // [rsp+2C8h] [rbp-40h]

  v4 = *a2;
  v118 = a4;
  v148 = __readfsqword(0x28u);
  v5 = a2[1];
  v140 = 0;
  v141 = 0;
  n = v5 - v4;
  v139 = v5 - v4;
  if ( v5 - v4 < 0 )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  if ( v5 == v4 )
  {
    v142 = 0;
    v144 = 256;
    v145 = 0;
    v129 = nullptr;
    goto LABEL_80;
  }
  v7 = (void *)operator new(n);
  v8 = (size_t)v7 + n;
  v129 = v7;
  *(_QWORD *)&v140 = v7;
  v141 = (size_t)v7 + n;
  v9 = (n >> 6) + ((n & 0x3F) != 0);
  if ( n == 1 )
  {
    v106 = *v4;
    *((_QWORD *)&v140 + 1) = v8;
    v142 = 1;
    *(_BYTE *)v129 = v106;
    v144 = 256;
    v145 = v9;
    goto LABEL_5;
  }
  memmove(v7, v4, n);
  *((_QWORD *)&v140 + 1) = v8;
  v142 = (n >> 6) + ((n & 0x3F) != 0);
  v144 = 256;
  v145 = v142;
  if ( !v9 )
  {
LABEL_80:
    v9 = 0;
    v11 = nullptr;
    goto LABEL_9;
  }
LABEL_5:
  if ( v9 << 8 >> 60 )
    __cxa_throw_bad_array_new_length();
  v10 = (_QWORD *)operator new[](v9 << 11);
  v11 = v10;
  if ( v9 << 8 && v9 << 11 )
    memset(v10, 0, v9 << 11);
LABEL_9:
  v12 = 1;
  v13 = 0;
  if ( v5 != v4 )
  {
    do
    {
      v14 = v4[v13];
      v15 = v13++;
      v11[(v15 >> 6) + v9 * v14] |= v12;
      v12 = __ROL8__(v12, 1);
    }
    while ( v13 != v5 - v4 );
  }
  memset(v147, 0, 0x100u);
  v16 = a2[1];
  for ( i = *a2; i != v16; v147[v18] = 1 )
    v18 = *i++;
  v19 = (unsigned __int64)a2[2];
  v20 = *(_QWORD *)(a3 + 16);
  *a1 = 0;
  a1[1] = 0;
  a1[3] = 0;
  v121 = v20;
  a1[2] = v19;
  a1[4] = v19;
  if ( v19 >= v20 )
  {
LABEL_14:
    if ( v19 > 1 )
    {
      v21 = (__m128)0x3FF0000000000000uLL;
      v22 = 1;
      v23 = n + 1;
      while ( 1 )
      {
        v30 = *(_QWORD *)a3;
        v31 = *(_QWORD *)a3 + v22;
        if ( !v147[*(unsigned __int8 *)(v31 - 1)] )
          goto LABEL_27;
        v136 = v22;
        v135 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)(unsigned __int64)v31);
        v32 = fmin(*(double *)v21.m128_u64 - v118 / 100.0 + 0.00001, *(double *)v21.m128_u64);
        v33 = 0;
        if ( (v23 & 0x8000000000000000LL) != 0LL )
          *(double *)v33.m128_u64 = (double)(int)(v23 & 1 | (v23 >> 1)) + (double)(int)(v23 & 1 | (v23 >> 1));
        else
          *(double *)v33.m128_u64 = (double)(int)v23;
        *(_QWORD *)&v34.m128d_f64[1] = v21.m128_u64[1];
        v34.m128d_f64[0] = v32 * *(double *)v33.m128_u64;
        if ( fabs(v32 * *(double *)v33.m128_u64) < 4.503599627370496e15 )
        {
          v35.m128d_f64[0] = (double)(int)v34.m128d_f64[0];
          *(_QWORD *)&v34.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v35.m128d_f64[0]
                                         + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v34, v35).m128d_f64[0] & v21.m128_u64[0]))
                                       | *(_QWORD *)&v34.m128d_f64[0] & 0x8000000000000000LL;
        }
        v146 = v11;
        v143 = 0;
        if ( *(double *)v33.m128_u64 < 9.223372036854776e18 )
        {
          if ( v34.m128d_f64[0] >= 9.223372036854776e18 )
            goto LABEL_35;
        }
        else if ( v34.m128d_f64[0] >= 9.223372036854776e18 )
        {
LABEL_35:
          v34.m128d_f64[0] = v34.m128d_f64[0] - 9.223372036854776e18;
          v24 = (unsigned int)(int)v34.m128d_f64[0] ^ 0x8000000000000000LL;
          goto LABEL_18;
        }
        v24 = (unsigned int)(int)v34.m128d_f64[0];
LABEL_18:
        v111 = v32;
        v115 = v33.m128_u64[0];
        v107 = v118 / 100.0;
        v25 = sub_446AE0((__int64)&v139, &v135, v24, 9.223372036854776e18, v34.m128d_f64[0], v33, v21);
        v26 = 0.0;
        v21 = (__m128)0x3FF0000000000000uLL;
        if ( v23 )
        {
          if ( (v25 & 0x8000000000000000LL) != 0LL )
            v27 = (double)(int)(v25 & 1 | (v25 >> 1)) + (double)(int)(v25 & 1 | (v25 >> 1));
          else
            v27 = (double)(int)v25;
          v26 = v27 / *(double *)&v115;
        }
        v28 = 0.0;
        if ( v111 >= v26 )
          v28 = 1.0 - v26;
        v29 = *(double *)a1;
        if ( v28 < v107 )
        {
          if ( v29 < 0.0 )
          {
            a1[3] = 0;
            a1[4] = v22;
            *a1 = 0;
            v118 = 0.0;
          }
          goto LABEL_27;
        }
        v36 = v28 * 100.0;
        if ( v36 <= v29 )
        {
LABEL_27:
          ++v22;
          ++v23;
          if ( v19 == v22 )
            break;
        }
        else
        {
          a1[3] = 0;
          a1[4] = v22;
          *(double *)a1 = v36;
          if ( v36 == 100.0 )
            goto LABEL_69;
          ++v22;
          v118 = v36;
          ++v23;
          if ( v19 == v22 )
            break;
        }
      }
    }
    v37 = v121 - v19;
    if ( v121 < v19 )
      goto LABEL_69;
    v38 = (__m128)0x3FF0000000000000uLL;
    while ( 1 )
    {
      v46 = (unsigned __int8 *)(v37 + *(_QWORD *)a3);
      if ( !v147[*v46] )
        goto LABEL_52;
      v47 = *(_QWORD *)(a3 + 8);
      v137 = _mm_loadh_ps((const double *)(a3 + 8));
      v138 = v47 - (_QWORD)v46;
      v48 = fmin(*(double *)v38.m128_u64 - v118 / 100.0 + 0.00001, *(double *)v38.m128_u64);
      v49 = n + v47 - (_QWORD)v46;
      v50 = 0;
      if ( (v49 & 0x8000000000000000LL) != 0LL )
        *(double *)&v50 = (double)(int)(v49 & 1 | (v49 >> 1)) + (double)(int)(v49 & 1 | (v49 >> 1));
      else
        *(double *)&v50 = (double)(int)v49;
      *(_QWORD *)&v52.m128d_f64[1] = v38.m128_u64[1];
      v51 = (__m128)0x7FFFFFFFFFFFFFFFuLL;
      v52.m128d_f64[0] = v48 * *(double *)&v50;
      if ( fabs(v48 * *(double *)&v50) < 4.503599627370496e15 )
      {
        v51 = (__m128)_mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, v52);
        v53.m128d_f64[0] = (double)(int)v52.m128d_f64[0];
        *(_QWORD *)&v52.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         v53.m128d_f64[0]
                                       + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v52, v53).m128d_f64[0] & v38.m128_u64[0]))
                                     | v51.m128_u64[0];
      }
      v146 = v11;
      v143 = 0;
      if ( *(double *)&v50 < 9.223372036854776e18 )
      {
        if ( v52.m128d_f64[0] < 9.223372036854776e18 )
          goto LABEL_42;
      }
      else
      {
        v51.m128_u64[1] = *((_QWORD *)&v50 + 1);
        *(double *)v51.m128_u64 = *(double *)&v50 - 9.223372036854776e18;
        if ( v52.m128d_f64[0] < 9.223372036854776e18 )
        {
LABEL_42:
          v39 = (unsigned int)(int)v52.m128d_f64[0];
          goto LABEL_43;
        }
      }
      v52.m128d_f64[0] = v52.m128d_f64[0] - 9.223372036854776e18;
      v39 = (unsigned int)(int)v52.m128d_f64[0] ^ 0x8000000000000000LL;
LABEL_43:
      v115 = *(unsigned __int64 *)&v50;
      v108 = v118 / 100.0;
      v40 = sub_446AE0((__int64)&v139, (const __m128i *)&v137, v39, 9.223372036854776e18, v52.m128d_f64[0], v38, v51);
      v38 = (__m128)0x3FF0000000000000uLL;
      v41 = _mm_loadh_ps((const double *)&v121);
      v42 = 0.0;
      if ( v49 )
      {
        if ( (v40 & 0x8000000000000000LL) != 0LL )
          v43 = (double)(int)(v40 & 1 | (v40 >> 1)) + (double)(int)(v40 & 1 | (v40 >> 1));
        else
          v43 = (double)(int)v40;
        v42 = v43 / *(double *)&v115;
      }
      v44 = 0.0;
      if ( v48 >= v42 )
        v44 = 1.0 - v42;
      v45 = *(double *)a1;
      if ( v44 >= v108 )
      {
        v56 = v44 * 100.0;
        if ( v56 > v45 )
        {
          *(double *)a1 = v56;
          *(__m128 *)(a1 + 3) = v41;
          if ( v56 == 100.0 )
            goto LABEL_69;
          v118 = v56;
        }
      }
      else if ( v45 < 0.0 )
      {
        *a1 = 0;
        *(__m128 *)(a1 + 3) = v41;
        v118 = 0.0;
      }
LABEL_52:
      if ( v121 == ++v37 )
        goto LABEL_69;
    }
  }
  v57 = 2 * v19;
  if ( (v19 & 0x4000000000000000LL) != 0 )
    v130 = (double)(int)(v57 >> 1) + (double)(int)(v57 >> 1);
  else
    v130 = (double)(int)v57;
  v58 = (__m128)0x7FFFFFFFFFFFFFFFuLL;
  v60 = (__m128d)*(unsigned __int64 *)&v130;
  v59 = (__m128)0x4330000000000000uLL;
  v60.m128d_f64[0] = v130 * fmin(1.0 - v118 / 100.0 + 0.00001, 1.0);
  if ( fabs(v60.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v58 = (__m128)_mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, v60);
    v61.m128d_f64[0] = (double)(int)v60.m128d_f64[0];
    v59 = (__m128)_mm_and_pd(_mm_cmpgt_sd(v60, v61), (__m128d)0x3FF0000000000000uLL);
    *(_QWORD *)&v60.m128d_f64[0] = COERCE_UNSIGNED_INT64(v61.m128d_f64[0] + *(double *)v59.m128_u64) | v58.m128_u64[0];
  }
  if ( v60.m128d_f64[0] >= 9.223372036854776e18 )
  {
    v60.m128d_f64[0] = v60.m128d_f64[0] - 9.223372036854776e18;
    v62 = (unsigned int)(int)v60.m128d_f64[0] ^ 0x8000000000000000LL;
  }
  else
  {
    v62 = (unsigned int)(int)v60.m128d_f64[0];
  }
  v63 = v121 - v19;
  if ( (v121 - v19) >> 60 )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  v115 = v62;
  v131 = 8 * v63;
  v64 = (void *)operator new(8 * v63);
  memset(v64, 255, 8 * v63);
  v65 = (char *)operator new(0x10u);
  v66 = nullptr;
  v125 = v65;
  v67 = v115;
  v68 = nullptr;
  *(_QWORD *)v65 = 0;
  *((_QWORD *)v65 + 1) = v63 - 1;
  v109 = v65 + 16;
  v128 = v65 + 16;
  v123 = -1;
  v122 = (const __m128i *)v132;
LABEL_89:
  if ( v125 == v109 )
    goto LABEL_143;
  v112 = v66;
  v69 = (char *)v125;
  v70 = v68;
  v116 = v68;
  v117 = &v139;
  while ( 1 )
  {
    v71 = *(_QWORD *)v69;
    v72 = *((_QWORD *)v69 + 1);
    v73 = *(_QWORD *)a3;
    v74 = v72;
    if ( *((_QWORD *)v64 + *(_QWORD *)v69) != -1 )
      goto LABEL_94;
    v132[0] = v73 + v71;
    v132[1] = v19 + v73 + v71;
    v120 = (char *)v67;
    v119 = v72;
    v115 = v73;
    v132[2] = v19;
    v143 = 0;
    v146 = v11;
    v82 = sub_446AE0((__int64)v117, v122, 0x7FFFFFFFFFFFFFFFuLL, v60.m128d_f64[0], 9.223372036854776e18, v58, v59);
    v67 = (signed __int64)v120;
    v71 = *(_QWORD *)v69;
    v73 = v115;
    v72 = v119;
    v83 = v82 < (unsigned __int64)v120;
    *((_QWORD *)v64 + *(_QWORD *)v69) = v82;
    if ( !v83 )
    {
      v74 = *((_QWORD *)v69 + 1);
      if ( *((_QWORD *)v64 + v74) != -1 )
        goto LABEL_95;
      goto LABEL_107;
    }
    v60 = (__m128d)_mm_unpacklo_epi64((__m128i)v71, (__m128i)(v19 + v71));
    *(__m128d *)(a1 + 3) = v60;
    if ( !v82 )
      break;
    v123 = v82;
    v74 = *((_QWORD *)v69 + 1);
    v67 = v82;
LABEL_94:
    if ( *((_QWORD *)v64 + v74) != -1 )
      goto LABEL_95;
LABEL_107:
    v133.m128i_i64[0] = v72 + v73;
    v115 = v67;
    v133.m128i_i64[1] = v19 + v72 + v73;
    v134 = v19;
    v143 = 0;
    v146 = v11;
    v84 = sub_446AE0((__int64)v117, &v133, 0x7FFFFFFFFFFFFFFFuLL, v60.m128d_f64[0], 9.223372036854776e18, v58, v59);
    v74 = *((_QWORD *)v69 + 1);
    v67 = v115;
    *((_QWORD *)v64 + v74) = v84;
    if ( v84 < v67 )
    {
      v58 = (__m128)(v19 + v74);
      v60 = (__m128d)_mm_unpacklo_epi64((__m128i)v74, (__m128i)v58);
      *(__m128d *)(a1 + 3) = v60;
      if ( !v84 )
        break;
      v123 = v84;
      v67 = v84;
    }
    v71 = *(_QWORD *)v69;
LABEL_95:
    v75 = v74 - v71;
    if ( v74 - v71 == 1 )
      goto LABEL_92;
    v76 = *((_QWORD *)v64 + v74);
    v77 = *((_QWORD *)v64 + v71);
    if ( v76 < v77 )
    {
      if ( (__int64)(v76 - ((v75 - ((v77 - v76) >> 1)) & 0xFFFFFFFFFFFFFFFELL)) < v67 )
        goto LABEL_98;
LABEL_92:
      v69 += 16;
      if ( v109 == v69 )
        goto LABEL_102;
    }
    else
    {
      if ( (__int64)(v77 - ((v75 - ((v76 - v77) >> 1)) & 0xFFFFFFFFFFFFFFFELL)) >= v67 )
        goto LABEL_92;
LABEL_98:
      v78 = (char *)(v75 >> 1);
      v115 = v71 + (v75 >> 1);
      if ( v112 == v70 )
      {
        v94 = (v112 - (_BYTE *)v116) >> 4;
        if ( v94 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v95 = 1;
        if ( v94 )
          v95 = (v112 - (_BYTE *)v116) >> 4;
        v83 = __CFADD__(v95, v94);
        v96 = v95 + v94;
        if ( v83 )
        {
          v119 = 0x7FFFFFFFFFFFFFF0LL;
        }
        else
        {
          if ( v96 > 0x7FFFFFFFFFFFFFFLL )
            v96 = 0x7FFFFFFFFFFFFFFLL;
          v119 = 16 * v96;
        }
        v127 = v112 - (_BYTE *)v116;
        v126 = v78;
        v120 = (char *)v67;
        v97 = (__m128d *)operator new(v119);
        v67 = (signed __int64)v120;
        v98 = v97;
        v78 = v126;
        v60 = (__m128d)_mm_loadh_ps((const double *)&v115);
        *(__m128d *)((char *)v97 + v127) = v60;
        v99 = (const __m128i *)v116;
        if ( v70 == v116 )
        {
          v100 = v97;
        }
        else
        {
          v100 = (__m128d *)((char *)v97 + v70 - (_BYTE *)v116);
          do
          {
            v60 = (__m128d)_mm_loadu_si128(v99);
            ++v97;
            ++v99;
            v97[-1] = v60;
          }
          while ( v100 != v97 );
        }
        v101 = v116;
        v79 = v100 + 1;
        if ( v116 )
        {
          v102 = v116;
          v120 = (char *)v98;
          v116 = v78;
          v115 = v67;
          operator delete(v102, v112 - v101);
          v98 = (__m128d *)v120;
          v78 = (char *)v116;
          v67 = v115;
        }
        v116 = v98;
        v112 = (char *)v98 + v119;
      }
      else
      {
        v79 = (__m128d *)(v70 + 16);
        v60 = (__m128d)_mm_loadh_ps((const double *)&v115);
        v79[-1] = v60;
      }
      v80 = &v78[*(_QWORD *)v69];
      if ( v112 == (char *)v79 )
      {
        v85 = (v112 - (_BYTE *)v116) >> 4;
        if ( v85 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v86 = 1;
        if ( v85 )
          v86 = (v112 - (_BYTE *)v116) >> 4;
        v83 = __CFADD__(v86, v85);
        v87 = v86 + v85;
        if ( v83 )
        {
          *(double *)&v115 = NAN;
        }
        else
        {
          if ( v87 > 0x7FFFFFFFFFFFFFFLL )
            v87 = 0x7FFFFFFFFFFFFFFLL;
          v115 = 16 * v87;
        }
        v126 = (char *)(v112 - (_BYTE *)v116);
        v120 = v80;
        v119 = v67;
        v88 = (char *)operator new(v115);
        v67 = v119;
        v89 = &v126[(_QWORD)v88];
        v90 = *((_QWORD *)v69 + 1);
        *(_QWORD *)v89 = v120;
        *((_QWORD *)v89 + 1) = v90;
        if ( v79 != v116 )
        {
          v91 = (const __m128i *)v116;
          v92 = (__m128d *)v88;
          v93 = &v88[(char *)v79 - (_BYTE *)v116];
          do
          {
            v60 = (__m128d)_mm_loadu_si128(v91);
            ++v92;
            ++v91;
            v92[-1] = v60;
          }
          while ( v92 != (__m128d *)v93 );
          v70 = &v88[(char *)&v79[-1] - (_BYTE *)v116 + 32];
          if ( v116 )
          {
LABEL_124:
            v120 = v88;
            v119 = v67;
            operator delete(v116, v112 - (_BYTE *)v116);
            v88 = v120;
            v67 = v119;
          }
          v116 = v88;
          v112 = &v88[v115];
          goto LABEL_92;
        }
        v70 = v88 + 16;
        goto LABEL_124;
      }
      v81 = *((_QWORD *)v69 + 1);
      *(_QWORD *)&v79->m128d_f64[0] = v80;
      v69 += 16;
      v70 = (char *)&v79[1];
      *((_QWORD *)v70 - 1) = v81;
      if ( v109 == v69 )
      {
LABEL_102:
        v68 = (char *)v125;
        v66 = v128;
        if ( v70 == v116 )
        {
          v66 = v112;
          v68 = v70;
LABEL_143:
          if ( v123 < 0 )
            v103 = (double)(int)(v123 & 1 | ((unsigned __int64)v123 >> 1))
                 + (double)(int)(v123 & 1 | ((unsigned __int64)v123 >> 1));
          else
            v103 = (double)(int)v123;
          v104 = v103 / v130;
          v105 = (1.0 - v103 / v130) * 100.0;
          if ( v105 >= v118 )
          {
            v118 = (1.0 - v104) * 100.0;
            *(double *)a1 = v105;
          }
          if ( v125 )
          {
            v113 = v66;
            v110 = (size_t)v68;
            operator delete(v125, v128 - (_BYTE *)v125);
            v66 = v113;
            v68 = (char *)v110;
          }
          if ( v68 )
            operator delete(v68, v66 - v68);
          if ( v64 )
            operator delete(v64, v131);
          goto LABEL_14;
        }
        v125 = v116;
        v109 = v70;
        v128 = v112;
        goto LABEL_89;
      }
    }
  }
  v54 = v116 == nullptr;
  *a1 = 0x4059000000000000LL;
  if ( !v54 )
    operator delete(v116, v112 - (_BYTE *)v116);
  if ( v125 )
    operator delete(v125, v128 - (_BYTE *)v125);
  if ( v64 )
    operator delete(v64, v131);
LABEL_69:
  if ( v11 )
    operator delete[](v11);
  if ( v129 )
    operator delete(v129, n);
  return a1;
}
