__int64 __fastcall sub_115D790(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  double *v8; // r15
  double v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  double *v13; // r15
  double v14; // r13
  __int64 v15; // r14
  int v16; // eax
  int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  double *v20; // r15
  double v21; // r13
  __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r15
  double v26; // r13
  __int64 v27; // r14
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // r15
  _QWORD *v31; // r13
  __int64 v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // r15
  _QWORD *v36; // r13
  __int64 v37; // r14
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // r13
  _QWORD *v41; // r14
  __int64 v42; // r15
  char *v43; // rsi
  char *v44; // rsi
  char *v45; // rsi
  char *v46; // rsi
  char *v47; // rsi
  char *v48; // rsi
  char *v49; // rsi
  char *v50; // rsi
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // r13
  _QWORD *v54; // r14
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // r13
  _QWORD *v58; // r14
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // r13
  _QWORD *v62; // r14
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // r13
  _QWORD *v66; // r14
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // r13
  _QWORD *v70; // r14
  char *v71; // rsi
  char *v72; // rsi
  char *v73; // rax
  char *v74; // rsi
  char *v75; // rax
  _QWORD *v76; // rax
  __int64 result; // rax
  __int64 v78; // r14
  __int64 v79; // rax
  double *v80; // r15
  const char *v81; // rax
  __int64 v82; // r14
  __int64 v83; // rax
  double *v84; // r15
  const char *v85; // rax
  __int64 v86; // r14
  __int64 v87; // rax
  double *v88; // r15
  const char *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // rax
  _QWORD *v95; // r15
  const char *v96; // rax
  __int64 v97; // r14
  __int64 v98; // rax
  _QWORD *v99; // r15
  const char *v100; // rax
  __int64 v101; // r14
  __int64 v102; // rax
  _QWORD *v103; // r15
  const char *v104; // rax
  __int64 v105; // r15
  __int64 v106; // rax
  _QWORD *v107; // r13
  __int64 v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // [rsp+8h] [rbp-70h] BYREF
  double v111; // [rsp+10h] [rbp-68h] BYREF
  bool v112; // [rsp+1Eh] [rbp-5Ah]
  bool v113; // [rsp+1Fh] [rbp-59h]
  __m128 v114; // [rsp+20h] [rbp-58h] BYREF
  __int64 v115; // [rsp+30h] [rbp-48h]

  v110 = a2;
  if ( (unsigned int)sub_115CDF0(a1, a3) == 1 )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+soft-float";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  v114.m128_u64[0] = 0xA2E00000955LL;
  v6 = sub_21B6DA0(a3, &v114, 2);
  v7 = *(_QWORD *)(a3 + 8);
  v115 = 0xA2E00000955LL;
  v8 = (double *)(v7 + 8LL * (unsigned int)v6);
  *(_QWORD *)&v9 = v7 + 8 * HIDWORD(v6);
  v111 = v9;
  v114 = _mm_loadh_ps(&v111);
  if ( v8 != *(double **)&v9 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
      {
        if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v8, 2389) || (unsigned __int8)sub_21B9810(v10, 2606) )
          break;
      }
      v114.m128_u64[0] = (unsigned __int64)++v8;
      if ( *(double **)&v9 == v8 )
        goto LABEL_8;
    }
    v111 = v9;
    v115 = 0xA2E00000955LL;
    v114 = _mm_loadh_ps(&v111);
    if ( *(double **)&v9 != v8 )
    {
      do
      {
        v82 = *(_QWORD *)v8;
        v83 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
        if ( !v83 )
          v83 = *(_QWORD *)v8;
        v84 = v8 + 1;
        *(_BYTE *)(v83 + 44) |= 1u;
        v114.m128_u64[0] = (unsigned __int64)v84;
        if ( v84 == *(double **)&v9 )
          break;
        while ( 1 )
        {
          if ( *(_QWORD *)v84 )
          {
            v111 = *v84;
            if ( (unsigned __int8)sub_21B9810(*(_QWORD *)&v111, 2389)
              || (unsigned __int8)sub_21B9810(*(_QWORD *)&v111, 2606) )
            {
              break;
            }
          }
          v114.m128_u64[0] = (unsigned __int64)++v84;
          if ( *(double **)&v9 == v84 )
            goto LABEL_142;
        }
        v8 = (double *)v114.m128_u64[0];
      }
      while ( *(_QWORD *)&v9 != v114.m128_u64[0] );
LABEL_142:
      if ( (unsigned __int8)sub_21B9810(v82, 2389) )
        v85 = "+fsmuld";
      else
        v85 = "-fsmuld";
      v114.m128_u64[0] = (unsigned __int64)v85;
      v114.m128_u64[1] = 7;
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_8:
  v114.m128_u64[0] = 0xA7800000AF5LL;
  v11 = sub_21B6DA0(a3, &v114, 2);
  v12 = *(_QWORD *)(a3 + 8);
  v115 = 0xA7800000AF5LL;
  v13 = (double *)(v12 + 8LL * (unsigned int)v11);
  *(_QWORD *)&v14 = v12 + 8 * HIDWORD(v11);
  v111 = v14;
  v114 = _mm_loadh_ps(&v111);
  if ( v13 != *(double **)&v14 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
      {
        if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v13, 2805) || (unsigned __int8)sub_21B9810(v15, 2680) )
          break;
      }
      v114.m128_u64[0] = (unsigned __int64)++v13;
      if ( *(double **)&v14 == v13 )
        goto LABEL_13;
    }
    v111 = v14;
    v115 = 0xA7800000AF5LL;
    v114 = _mm_loadh_ps(&v111);
    if ( *(double **)&v14 != v13 )
    {
      do
      {
        v86 = *(_QWORD *)v13;
        v87 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
        if ( !v87 )
          v87 = *(_QWORD *)v13;
        v88 = v13 + 1;
        *(_BYTE *)(v87 + 44) |= 1u;
        v114.m128_u64[0] = (unsigned __int64)v88;
        if ( v88 == *(double **)&v14 )
          break;
        while ( 1 )
        {
          if ( *(_QWORD *)v88 )
          {
            v111 = *v88;
            if ( (unsigned __int8)sub_21B9810(*(_QWORD *)&v111, 2805)
              || (unsigned __int8)sub_21B9810(*(_QWORD *)&v111, 2680) )
            {
              break;
            }
          }
          v114.m128_u64[0] = (unsigned __int64)++v88;
          if ( *(double **)&v14 == v88 )
            goto LABEL_155;
        }
        v13 = (double *)v114.m128_u64[0];
      }
      while ( *(_QWORD *)&v14 != v114.m128_u64[0] );
LABEL_155:
      if ( (unsigned __int8)sub_21B9810(v86, 2805) )
        v89 = "+popc";
      else
        v89 = "-popc";
      v114.m128_u64[0] = (unsigned __int64)v89;
      v114.m128_u64[1] = 5;
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_13:
  v16 = *((_DWORD *)v110 + 8);
  v17 = *((_DWORD *)v110 + 11);
  LODWORD(v110) = v17;
  if ( v16 == 30 )
  {
    v112 = 0;
    v113 = v17 == 12 || (v17 & 0xFFFFFFFB) == 3;
  }
  else
  {
    v113 = 0;
    v112 = (_DWORD)v110 == 13 && v16 == 29;
  }
  v114.m128_u64[0] = 0xAC500000B8ALL;
  v18 = sub_21B6DA0(a3, &v114, 2);
  v19 = *(_QWORD *)(a3 + 8);
  v115 = 0xAC500000B8ALL;
  v20 = (double *)(v19 + 8LL * (unsigned int)v18);
  *(_QWORD *)&v21 = v19 + 8 * HIDWORD(v18);
  v111 = v21;
  v114 = _mm_loadh_ps(&v111);
  if ( v20 != *(double **)&v21 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)v20;
      if ( *(_QWORD *)v20 )
      {
        if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v20, 2954) || (unsigned __int8)sub_21B9810(v22, 2757) )
          break;
      }
      v114.m128_u64[0] = (unsigned __int64)++v20;
      if ( *(double **)&v21 == v20 )
        goto LABEL_20;
    }
    v111 = v21;
    v115 = 0xAC500000B8ALL;
    v114 = _mm_loadh_ps(&v111);
    if ( *(double **)&v21 != v20 )
    {
      do
      {
        v78 = *(_QWORD *)v20;
        v79 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
        if ( !v79 )
          v79 = *(_QWORD *)v20;
        v80 = v20 + 1;
        *(_BYTE *)(v79 + 44) |= 1u;
        v114.m128_u64[0] = (unsigned __int64)v80;
        if ( v80 == *(double **)&v21 )
          break;
        while ( 1 )
        {
          if ( *(_QWORD *)v80 )
          {
            v111 = *v80;
            if ( (unsigned __int8)sub_21B9810(*(_QWORD *)&v111, 2954)
              || (unsigned __int8)sub_21B9810(*(_QWORD *)&v111, 2757) )
            {
              break;
            }
          }
          v114.m128_u64[0] = (unsigned __int64)++v80;
          if ( *(double **)&v21 == v80 )
            goto LABEL_129;
        }
        v20 = (double *)v114.m128_u64[0];
      }
      while ( *(_QWORD *)&v21 != v114.m128_u64[0] );
LABEL_129:
      if ( !(unsigned __int8)sub_21B9810(v78, 2954) )
      {
        v81 = "-vis";
        goto LABEL_131;
      }
LABEL_130:
      v81 = "+vis";
LABEL_131:
      v114.m128_u64[0] = (unsigned __int64)v81;
      v114.m128_u64[1] = 4;
      sub_11394A0(a4, (__int64 *)&v114);
      goto LABEL_21;
    }
  }
LABEL_20:
  if ( v113 )
    goto LABEL_130;
LABEL_21:
  v114.m128_u64[0] = 0xAC300000B88LL;
  v23 = sub_21B6DA0(a3, &v114, 2);
  v24 = *(_QWORD *)(a3 + 8);
  v115 = 0xAC300000B88LL;
  v25 = (_QWORD *)(v24 + 8LL * (unsigned int)v23);
  *(_QWORD *)&v26 = v24 + 8 * HIDWORD(v23);
  v111 = v26;
  v114 = _mm_loadh_ps(&v111);
  if ( v25 == *(_QWORD **)&v26 )
    goto LABEL_26;
  while ( 1 )
  {
    v27 = *v25;
    if ( *v25 )
    {
      if ( (unsigned __int8)sub_21B9810(*v25, 2952) || (unsigned __int8)sub_21B9810(v27, 2755) )
        break;
    }
    v114.m128_u64[0] = (unsigned __int64)++v25;
    if ( *(_QWORD **)&v26 == v25 )
      goto LABEL_26;
  }
  v111 = v26;
  v115 = 0xAC300000B88LL;
  v114 = _mm_loadh_ps(&v111);
  if ( *(_QWORD **)&v26 == v25 )
  {
LABEL_26:
    if ( (_DWORD)v110 != 13 )
      goto LABEL_27;
    goto LABEL_264;
  }
  do
  {
    v93 = *v25;
    v94 = *(_QWORD *)(*v25 + 16LL);
    if ( !v94 )
      v94 = *v25;
    v95 = v25 + 1;
    *(_BYTE *)(v94 + 44) |= 1u;
    v114.m128_u64[0] = (unsigned __int64)v95;
    if ( v95 == *(_QWORD **)&v26 )
      break;
    while ( 1 )
    {
      if ( *v95 )
      {
        v110 = (_QWORD *)*v95;
        if ( (unsigned __int8)sub_21B9810(v110, 2952) || (unsigned __int8)sub_21B9810(v110, 2755) )
          break;
      }
      v114.m128_u64[0] = (unsigned __int64)++v95;
      if ( *(_QWORD **)&v26 == v95 )
        goto LABEL_201;
    }
    v25 = (_QWORD *)v114.m128_u64[0];
  }
  while ( *(_QWORD *)&v26 != v114.m128_u64[0] );
LABEL_201:
  if ( (unsigned __int8)sub_21B9810(v93, 2952) )
  {
LABEL_264:
    v96 = "+vis2";
    goto LABEL_203;
  }
  v96 = "-vis2";
LABEL_203:
  v114.m128_u64[0] = (unsigned __int64)v96;
  v114.m128_u64[1] = 5;
  sub_11394A0(a4, (__int64 *)&v114);
LABEL_27:
  v114.m128_u64[0] = 0xAC400000B89LL;
  v28 = sub_21B6DA0(a3, &v114, 2);
  v29 = *(_QWORD *)(a3 + 8);
  v115 = 0xAC400000B89LL;
  v30 = (_QWORD *)(v29 + 8LL * (unsigned int)v28);
  v31 = (_QWORD *)(v29 + 8 * HIDWORD(v28));
  v110 = v31;
  v114 = _mm_loadh_ps((const double *)&v110);
  if ( v30 != v31 )
  {
    while ( 1 )
    {
      v32 = *v30;
      if ( *v30 )
      {
        if ( (unsigned __int8)sub_21B9810(*v30, 2953) || (unsigned __int8)sub_21B9810(v32, 2756) )
          break;
      }
      v114.m128_u64[0] = (unsigned __int64)++v30;
      if ( v31 == v30 )
        goto LABEL_32;
    }
    v110 = v31;
    v115 = 0xAC400000B89LL;
    v114 = _mm_loadh_ps((const double *)&v110);
    if ( v31 != v30 )
    {
      do
      {
        v97 = *v30;
        v98 = *(_QWORD *)(*v30 + 16LL);
        if ( !v98 )
          v98 = *v30;
        v99 = v30 + 1;
        *(_BYTE *)(v98 + 44) |= 1u;
        v114.m128_u64[0] = (unsigned __int64)v99;
        if ( v99 == v31 )
          break;
        while ( 1 )
        {
          if ( *v99 )
          {
            v110 = (_QWORD *)*v99;
            if ( (unsigned __int8)sub_21B9810(v110, 2953) || (unsigned __int8)sub_21B9810(v110, 2756) )
              break;
          }
          v114.m128_u64[0] = (unsigned __int64)++v99;
          if ( v31 == v99 )
            goto LABEL_214;
        }
        v30 = (_QWORD *)v114.m128_u64[0];
      }
      while ( (_QWORD *)v114.m128_u64[0] != v31 );
LABEL_214:
      if ( (unsigned __int8)sub_21B9810(v97, 2953) )
        v100 = "+vis3";
      else
        v100 = "-vis3";
      v114.m128_u64[0] = (unsigned __int64)v100;
      v114.m128_u64[1] = 5;
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_32:
  v114.m128_u64[0] = 0xB3B00000963LL;
  v33 = sub_21B6DA0(a3, &v114, 2);
  v34 = *(_QWORD *)(a3 + 8);
  v115 = 0xB3B00000963LL;
  v35 = (_QWORD *)(v34 + 8LL * (unsigned int)v33);
  v36 = (_QWORD *)(v34 + 8 * HIDWORD(v33));
  v110 = v36;
  v114 = _mm_loadh_ps((const double *)&v110);
  if ( v35 != v36 )
  {
    while ( 1 )
    {
      v37 = *v35;
      if ( *v35 )
      {
        if ( (unsigned __int8)sub_21B9810(*v35, 2403) || (unsigned __int8)sub_21B9810(v37, 2875) )
          break;
      }
      v114.m128_u64[0] = (unsigned __int64)++v35;
      if ( v36 == v35 )
        goto LABEL_37;
    }
    v110 = v36;
    v115 = 0xB3B00000963LL;
    v114 = _mm_loadh_ps((const double *)&v110);
    if ( v36 != v35 )
    {
      do
      {
        v101 = *v35;
        v102 = *(_QWORD *)(*v35 + 16LL);
        if ( !v102 )
          v102 = *v35;
        v103 = v35 + 1;
        *(_BYTE *)(v102 + 44) |= 1u;
        v114.m128_u64[0] = (unsigned __int64)v103;
        if ( v103 == v36 )
          break;
        while ( 1 )
        {
          if ( *v103 )
          {
            v110 = (_QWORD *)*v103;
            if ( (unsigned __int8)sub_21B9810(v110, 2403) || (unsigned __int8)sub_21B9810(v110, 2875) )
              break;
          }
          v114.m128_u64[0] = (unsigned __int64)++v103;
          if ( v36 == v103 )
            goto LABEL_227;
        }
        v35 = (_QWORD *)v114.m128_u64[0];
      }
      while ( (_QWORD *)v114.m128_u64[0] != v36 );
LABEL_227:
      if ( (unsigned __int8)sub_21B9810(v101, 2403) )
        v104 = "+hard-quad-float";
      else
        v104 = "-hard-quad-float";
      v114.m128_u64[0] = (unsigned __int64)v104;
      v114.m128_u64[1] = 16;
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_37:
  v114.m128_u64[0] = 0xABE00000B83LL;
  v38 = sub_21B6DA0(a3, &v114, 2);
  v39 = *(_QWORD *)(a3 + 8);
  v115 = 0xABE00000B83LL;
  v40 = (_QWORD *)(v39 + 8LL * (unsigned int)v38);
  v41 = (_QWORD *)(v39 + 8 * HIDWORD(v38));
  v110 = v41;
  v114 = _mm_loadh_ps((const double *)&v110);
  if ( v40 == v41 )
    goto LABEL_42;
  while ( 1 )
  {
    v42 = *v40;
    if ( *v40 )
    {
      if ( (unsigned __int8)sub_21B9810(*v40, 2947) || (unsigned __int8)sub_21B9810(v42, 2750) )
        break;
    }
    v114.m128_u64[0] = (unsigned __int64)++v40;
    if ( v41 == v40 )
      goto LABEL_42;
  }
  v110 = v41;
  v115 = 0xABE00000B83LL;
  v114 = _mm_loadh_ps((const double *)&v110);
  if ( v41 == v40 )
  {
LABEL_42:
    if ( !v112 )
      goto LABEL_43;
    goto LABEL_241;
  }
  do
  {
    v105 = *v40;
    v106 = *(_QWORD *)(*v40 + 16LL);
    if ( !v106 )
      v106 = *v40;
    v107 = v40 + 1;
    *(_BYTE *)(v106 + 44) |= 1u;
    v114.m128_u64[0] = (unsigned __int64)v107;
    if ( v107 == v41 )
      break;
    while ( 1 )
    {
      if ( *v107 )
      {
        v110 = (_QWORD *)*v107;
        if ( (unsigned __int8)sub_21B9810(v110, 2947) || (unsigned __int8)sub_21B9810(v110, 2750) )
          break;
      }
      v114.m128_u64[0] = (unsigned __int64)++v107;
      if ( v41 == v107 )
        goto LABEL_240;
    }
    v40 = (_QWORD *)v114.m128_u64[0];
  }
  while ( (_QWORD *)v114.m128_u64[0] != v41 );
LABEL_240:
  if ( (unsigned __int8)sub_21B9810(v105, 2947) )
  {
LABEL_241:
    v114.m128_u64[1] = 7;
    v114.m128_u64[0] = (unsigned __int64)"+v8plus";
    sub_11394A0(a4, (__int64 *)&v114);
  }
LABEL_43:
  if ( sub_10DCD30(a3, 0x2D0u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-g1";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2D1u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-g2";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2D2u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-g3";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2D3u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-g4";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2D4u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-g5";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2D5u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-g6";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2D6u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-g7";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2E7u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-o0";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2E8u) )
  {
    v43 = *(char **)(a4 + 8);
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-o1";
    if ( v43 == *(char **)(a4 + 16) )
    {
      sub_1075D80(a4, v43, &v114);
    }
    else
    {
      *(_QWORD *)v43 = "+reserve-o1";
      v44 = v43 + 16;
      *((_QWORD *)v44 - 1) = 11;
      *(_QWORD *)(a4 + 8) = v44;
    }
  }
  if ( sub_10DCD30(a3, 0x2E9u) )
  {
    v45 = *(char **)(a4 + 8);
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-o2";
    if ( v45 == *(char **)(a4 + 16) )
    {
      sub_1075D80(a4, v45, &v114);
    }
    else
    {
      *(_QWORD *)v45 = "+reserve-o2";
      v46 = v45 + 16;
      *((_QWORD *)v46 - 1) = 11;
      *(_QWORD *)(a4 + 8) = v46;
    }
  }
  if ( sub_10DCD30(a3, 0x2EAu) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-o3";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2EBu) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-o4";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2ECu) )
  {
    v47 = *(char **)(a4 + 8);
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-o5";
    if ( v47 == *(char **)(a4 + 16) )
    {
      sub_1075D80(a4, v47, &v114);
    }
    else
    {
      *(_QWORD *)v47 = "+reserve-o5";
      v48 = v47 + 16;
      *((_QWORD *)v48 - 1) = 11;
      *(_QWORD *)(a4 + 8) = v48;
    }
  }
  if ( sub_10DCD30(a3, 0x2DDu) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-l0";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2DEu) )
  {
    v49 = *(char **)(a4 + 8);
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-l1";
    if ( v49 == *(char **)(a4 + 16) )
    {
      sub_1075D80(a4, v49, &v114);
    }
    else
    {
      *(_QWORD *)v49 = "+reserve-l1";
      v50 = v49 + 16;
      *((_QWORD *)v50 - 1) = 11;
      *(_QWORD *)(a4 + 8) = v50;
    }
  }
  if ( sub_10DCD30(a3, 0x2DFu) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-l2";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  v114.m128_i32[0] = 736;
  v51 = sub_21B6DA0(a3, &v114, 1);
  v52 = *(_QWORD *)(a3 + 8);
  v53 = (_QWORD *)(v52 + 8LL * (unsigned int)v51);
  v54 = (_QWORD *)(v52 + 8 * HIDWORD(v51));
  if ( v53 != v54 )
  {
    while ( !*v53 || !(unsigned __int8)sub_21B9810(*v53, 736) )
    {
      if ( v54 == ++v53 )
        goto LABEL_83;
    }
    if ( v54 != v53 )
    {
      do
      {
        v108 = *v53;
        if ( *(_QWORD *)(*v53 + 16LL) )
          v108 = *(_QWORD *)(*v53 + 16LL);
        ++v53;
        *(_BYTE *)(v108 + 44) |= 1u;
        if ( v53 == v54 )
          break;
        while ( !*v53 || !(unsigned __int8)sub_21B9810(*v53, 736) )
        {
          if ( v54 == ++v53 )
            goto LABEL_251;
        }
      }
      while ( v53 != v54 );
LABEL_251:
      v114.m128_u64[1] = 11;
      v114.m128_u64[0] = (unsigned __int64)"+reserve-l3";
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_83:
  v114.m128_i32[0] = 737;
  v55 = sub_21B6DA0(a3, &v114, 1);
  v56 = *(_QWORD *)(a3 + 8);
  v57 = (_QWORD *)(v56 + 8LL * (unsigned int)v55);
  v58 = (_QWORD *)(v56 + 8 * HIDWORD(v55));
  if ( v57 != v58 )
  {
    while ( !*v57 || !(unsigned __int8)sub_21B9810(*v57, 737) )
    {
      if ( v58 == ++v57 )
        goto LABEL_87;
    }
    if ( v58 != v57 )
    {
      do
      {
        v109 = *v57;
        if ( *(_QWORD *)(*v57 + 16LL) )
          v109 = *(_QWORD *)(*v57 + 16LL);
        ++v57;
        *(_BYTE *)(v109 + 44) |= 1u;
        if ( v57 == v58 )
          break;
        while ( !*v57 || !(unsigned __int8)sub_21B9810(*v57, 737) )
        {
          if ( v58 == ++v57 )
            goto LABEL_261;
        }
      }
      while ( v57 != v58 );
LABEL_261:
      v114.m128_u64[1] = 11;
      v114.m128_u64[0] = (unsigned __int64)"+reserve-l4";
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_87:
  v114.m128_i32[0] = 738;
  v59 = sub_21B6DA0(a3, &v114, 1);
  v60 = *(_QWORD *)(a3 + 8);
  v61 = (_QWORD *)(v60 + 8LL * (unsigned int)v59);
  v62 = (_QWORD *)(v60 + 8 * HIDWORD(v59));
  if ( v61 != v62 )
  {
    while ( !*v61 || !(unsigned __int8)sub_21B9810(*v61, 738) )
    {
      if ( v62 == ++v61 )
        goto LABEL_91;
    }
    if ( v61 != v62 )
    {
      do
      {
        v91 = *v61;
        if ( *(_QWORD *)(*v61 + 16LL) )
          v91 = *(_QWORD *)(*v61 + 16LL);
        ++v61;
        *(_BYTE *)(v91 + 44) |= 1u;
        if ( v61 == v62 )
          break;
        while ( !*v61 || !(unsigned __int8)sub_21B9810(*v61, 738) )
        {
          if ( v62 == ++v61 )
            goto LABEL_180;
        }
      }
      while ( v61 != v62 );
LABEL_180:
      v114.m128_u64[1] = 11;
      v114.m128_u64[0] = (unsigned __int64)"+reserve-l5";
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_91:
  v114.m128_i32[0] = 739;
  v63 = sub_21B6DA0(a3, &v114, 1);
  v64 = *(_QWORD *)(a3 + 8);
  v65 = (_QWORD *)(v64 + 8LL * (unsigned int)v63);
  v66 = (_QWORD *)(v64 + 8 * HIDWORD(v63));
  if ( v65 != v66 )
  {
    while ( !*v65 || !(unsigned __int8)sub_21B9810(*v65, 739) )
    {
      if ( v66 == ++v65 )
        goto LABEL_95;
    }
    if ( v65 != v66 )
    {
      do
      {
        v92 = *v65;
        if ( *(_QWORD *)(*v65 + 16LL) )
          v92 = *(_QWORD *)(*v65 + 16LL);
        ++v65;
        *(_BYTE *)(v92 + 44) |= 1u;
        if ( v65 == v66 )
          break;
        while ( !*v65 || !(unsigned __int8)sub_21B9810(*v65, 739) )
        {
          if ( v66 == ++v65 )
            goto LABEL_190;
        }
      }
      while ( v65 != v66 );
LABEL_190:
      v114.m128_u64[1] = 11;
      v114.m128_u64[0] = (unsigned __int64)"+reserve-l6";
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_95:
  v114.m128_i32[0] = 740;
  v67 = sub_21B6DA0(a3, &v114, 1);
  v68 = *(_QWORD *)(a3 + 8);
  v69 = (_QWORD *)(v68 + 8LL * (unsigned int)v67);
  v70 = (_QWORD *)(v68 + 8 * HIDWORD(v67));
  if ( v69 != v70 )
  {
    while ( !*v69 || !(unsigned __int8)sub_21B9810(*v69, 740) )
    {
      if ( v70 == ++v69 )
        goto LABEL_99;
    }
    if ( v69 != v70 )
    {
      do
      {
        v90 = *v69;
        if ( *(_QWORD *)(*v69 + 16LL) )
          v90 = *(_QWORD *)(*v69 + 16LL);
        ++v69;
        *(_BYTE *)(v90 + 44) |= 1u;
        if ( v69 == v70 )
          break;
        while ( !*v69 || !(unsigned __int8)sub_21B9810(*v69, 740) )
        {
          if ( v70 == ++v69 )
            goto LABEL_170;
        }
      }
      while ( v69 != v70 );
LABEL_170:
      v114.m128_u64[1] = 11;
      v114.m128_u64[0] = (unsigned __int64)"+reserve-l7";
      sub_11394A0(a4, (__int64 *)&v114);
    }
  }
LABEL_99:
  if ( sub_10DCD30(a3, 0x2D7u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-i0";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2D8u) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-i1";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2D9u) )
  {
    v71 = *(char **)(a4 + 8);
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-i2";
    if ( v71 == *(char **)(a4 + 16) )
    {
      sub_1075D80(a4, v71, &v114);
    }
    else
    {
      *(_QWORD *)v71 = "+reserve-i2";
      v72 = v71 + 16;
      *((_QWORD *)v72 - 1) = 11;
      *(_QWORD *)(a4 + 8) = v72;
    }
  }
  if ( sub_10DCD30(a3, 0x2DAu) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-i3";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2DBu) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-i4";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x2DCu) )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+reserve-i5";
    sub_11394A0(a4, (__int64 *)&v114);
  }
  if ( sub_10DCD30(a3, 0x940u) )
  {
    v73 = *(char **)(a4 + 8);
    v74 = *(char **)(a4 + 16);
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+fix-tn0009";
    if ( v73 == v74 )
    {
      sub_1075D80(a4, v74, &v114);
      v74 = *(char **)(a4 + 16);
      v75 = *(char **)(a4 + 8);
    }
    else
    {
      *(_QWORD *)v73 = "+fix-tn0009";
      v75 = v73 + 16;
      *((_QWORD *)v75 - 1) = 11;
      *(_QWORD *)(a4 + 8) = v75;
    }
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+fix-tn0011";
    if ( v74 == v75 )
    {
      sub_1075D80(a4, v74, &v114);
    }
    else
    {
      *(_QWORD *)v75 = "+fix-tn0011";
      v76 = v75 + 16;
      *(v76 - 1) = 11;
      *(_QWORD *)(a4 + 8) = v76;
    }
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+fix-tn0012";
    sub_11394A0(a4, (__int64 *)&v114);
    v114.m128_u64[0] = (unsigned __int64)"+fix-tn0013";
    v114.m128_u64[1] = 11;
    sub_11394A0(a4, (__int64 *)&v114);
  }
  result = sub_10DCD30(a3, 0x941u);
  if ( result )
  {
    v114.m128_u64[1] = 11;
    v114.m128_u64[0] = (unsigned __int64)"+fix-tn0009";
    sub_11394A0(a4, (__int64 *)&v114);
    v114.m128_u64[0] = (unsigned __int64)"+fix-tn0010";
    v114.m128_u64[1] = 11;
    sub_11394A0(a4, (__int64 *)&v114);
    v114.m128_u64[0] = (unsigned __int64)"+fix-tn0013";
    v114.m128_u64[1] = 11;
    return sub_11394A0(a4, (__int64 *)&v114);
  }
  return result;
}
