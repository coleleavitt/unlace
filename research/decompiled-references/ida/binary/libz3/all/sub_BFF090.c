__int64 __fastcall sub_BFF090(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // rbx
  char **exception; // r12
  char **v6; // r15
  char **v7; // r14
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  __int64 v11; // rax
  _DWORD *v13; // rdx
  void *v16; // rsi
  __int64 v17; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // r8
  __int64 v23; // rdi
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // edi
  int v29; // eax
  int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // r12
  unsigned int v39; // ecx
  char v40; // di
  int v41; // esi
  __m128i v42; // xmm0
  int v43; // eax
  __int64 v44; // rdx
  int v45; // esi
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  _QWORD *v53; // r12
  __int64 v54; // r13
  unsigned __int64 v55; // rax
  __int64 v56; // r13
  _QWORD *v57; // r12
  __int64 v58; // rax
  _QWORD *v59; // rax
  unsigned int v60; // ecx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // r12
  __int64 v64; // rdi
  __int64 v65; // rax
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  __int64 v68; // rbx
  unsigned int v69; // ecx
  int v70; // eax
  __int64 v71; // rbx
  unsigned int i; // r14d
  __int64 v73; // rdx
  unsigned int v74; // eax
  unsigned int v75; // ecx
  size_t v76; // rsi
  unsigned int *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  _QWORD *v82; // r14
  unsigned int v83; // eax
  unsigned int v84; // r9d
  unsigned int v85; // edx
  unsigned int *v86; // rax
  _QWORD *v87; // rbx
  int v88; // eax
  int v89; // r9d
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // r8
  _OWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rdi
  char *v96; // rdi
  const double *v97; // rcx
  int v98; // edi
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // r11
  __int64 v102; // rax
  __m128 v103; // xmm0
  unsigned int v104; // r13d
  unsigned int v105; // edx
  unsigned int *v106; // rdx
  unsigned int v107; // edx
  unsigned int v108; // eax
  unsigned int *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  int v113; // [rsp-8h] [rbp-158h]
  int v114; // [rsp+0h] [rbp-150h]
  int v115; // [rsp+8h] [rbp-148h]
  __int64 v116; // [rsp+8h] [rbp-148h]
  int v117; // [rsp+10h] [rbp-140h]
  unsigned int v118; // [rsp+10h] [rbp-140h]
  __int64 v119; // [rsp+10h] [rbp-140h]
  int v120; // [rsp+18h] [rbp-138h]
  __int64 v121; // [rsp+18h] [rbp-138h]
  __int64 v122; // [rsp+18h] [rbp-138h]
  unsigned int v123; // [rsp+18h] [rbp-138h]
  __int64 v124; // [rsp+18h] [rbp-138h]
  int v125; // [rsp+20h] [rbp-130h]
  int v126; // [rsp+20h] [rbp-130h]
  char *v127; // [rsp+20h] [rbp-130h]
  char v128; // [rsp+28h] [rbp-128h]
  unsigned int v129; // [rsp+28h] [rbp-128h]
  __int64 v130; // [rsp+28h] [rbp-128h]
  unsigned int v131; // [rsp+28h] [rbp-128h]
  int v132; // [rsp+30h] [rbp-120h]
  size_t v133; // [rsp+30h] [rbp-120h]
  __int64 v134; // [rsp+30h] [rbp-120h]
  char *v135; // [rsp+38h] [rbp-118h]
  int v136; // [rsp+40h] [rbp-110h]
  int v137; // [rsp+48h] [rbp-108h]
  __int64 v138; // [rsp+48h] [rbp-108h]
  __int64 v139; // [rsp+50h] [rbp-100h]
  int v140; // [rsp+58h] [rbp-F8h]
  __int64 v141; // [rsp+58h] [rbp-F8h]
  __int64 v142; // [rsp+58h] [rbp-F8h]
  __m128i v143; // [rsp+60h] [rbp-F0h] BYREF
  __int64 v144; // [rsp+78h] [rbp-D8h] BYREF
  __int64 v145; // [rsp+80h] [rbp-D0h] BYREF
  __int64 v146; // [rsp+88h] [rbp-C8h] BYREF
  __m128i v147; // [rsp+90h] [rbp-C0h] BYREF
  __m128 v148; // [rsp+A0h] [rbp-B0h] BYREF
  _QWORD v149[4]; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v150; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v151[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v152; // [rsp+100h] [rbp-50h] BYREF
  _QWORD *v153; // [rsp+108h] [rbp-48h]
  int v154; // [rsp+110h] [rbp-40h]
  __int64 v155; // [rsp+118h] [rbp-38h]

  v8 = 0;
  v9 = *(_QWORD **)(a2 + 8);
  if ( !v9 )
    return v8;
  if ( *((_DWORD *)v9 - 1) != 1 )
    return v8;
  v11 = *v9;
  if ( *(_WORD *)(v11 + 4) )
    return v8;
  v13 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
  if ( !v13 || *v13 != *(_DWORD *)(a1 + 1744) || v13[1] != 10 || *(_DWORD *)(v11 + 24) != 2 )
    return v8;
  v16 = *(void **)(v11 + 40);
  v17 = *(_QWORD *)(v11 + 32);
  v149[0] = 0;
  v137 = (int)v16;
  v149[1] = 0;
  v149[2] = 1;
  v149[3] = 0;
  v143.m128i_i64[1] = (__int64)&v148;
  v135 = (char *)v149;
  v143.m128i_i64[0] = a1 + 1832;
  LOBYTE(v136) = sub_1666AE0(a1 + 1832, v16, v149, &v148);
  v19 = a1 + 1832;
  if ( (_BYTE)v136 )
    LOBYTE(v136) = LODWORD(v149[0]) == 0;
  v143.m128i_i64[0] = *(_QWORD *)(a1 + 24);
  sub_993400(v19, 1u);
  v20 = sub_15E1B70(*(_QWORD *)(a1 + 1832));
  v148 = _mm_loadh_ps((const double *)v143.m128i_i64);
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_14B9B80(a1 + 1192, v143.m128i_i64[1]);
  v21 = sub_15D1F10(**(_QWORD **)(a2 + 8));
  v22 = *(__int64 **)(a3 + 8);
  v23 = *(_QWORD *)(a1 + 1736);
  v139 = *(_QWORD *)(a1 + 24);
  if ( v22 && (v24 = *((_DWORD *)v22 - 1)) != 0 )
  {
    if ( v24 == 1 )
      v25 = *v22;
    else
      v25 = sub_15E1AF0(v23);
  }
  else
  {
    v88 = sub_15D2D60(v23, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v21);
    v25 = sub_15DC610(v23, v88, 0, 0, v113, v89, v114, v115, v117, v120, v125, v128, v132, (int)v149, v136, v16);
  }
  v143.m128i_i64[1] = v25;
  v26 = **(_QWORD **)(a2 + 8);
  if ( v25 )
    *(_DWORD *)(v25 + 8) += 2;
  v27 = *(_QWORD *)(a1 + 4232);
  v28 = *(_DWORD *)(v143.m128i_i64[1] + 12);
  v29 = (*(_DWORD *)(v26 + 12) - v28) ^ (v28 << 8);
  v30 = (v29 - v28 + (v29 ^ ((v28 - v29) << 16))) ^ ((v28 - v29) << 10);
  v31 = 24LL * (v30 & (unsigned int)(*(_DWORD *)(a1 + 4240) - 1));
  v32 = 24LL * *(unsigned int *)(a1 + 4240);
  v33 = v27 + v31;
  v34 = v27 + v32;
  if ( v31 != v32 )
  {
    v35 = v27 + v31;
    do
    {
      v36 = *(_QWORD *)(v35 + 8);
      if ( v36 > 1 )
      {
        if ( *(_DWORD *)v35 == v30 && v143.m128i_i64[1] == v36 && *(_QWORD *)(v35 + 16) == v26 )
        {
LABEL_40:
          v53 = nullptr;
          v54 = 0;
          v8 = 0;
          sub_BF6100(v143.m128i_i64[1], v139);
          v141 = v143.m128i_i64[0];
          goto LABEL_41;
        }
      }
      else if ( !v36 )
      {
        v37 = v143.m128i_i64[1];
        goto LABEL_27;
      }
      v35 += 24;
    }
    while ( v34 != v35 );
  }
  if ( v27 == v33 )
  {
    sub_BF6100(v143.m128i_i64[1], v139);
    goto LABEL_28;
  }
  while ( 1 )
  {
    v55 = *(_QWORD *)(v27 + 8);
    if ( v55 <= 1 )
      break;
    if ( *(_DWORD *)v27 == v30 && v143.m128i_i64[1] == v55 && *(_QWORD *)(v27 + 16) == v26 )
      goto LABEL_40;
LABEL_46:
    v27 += 24;
    if ( v33 == v27 )
      goto LABEL_49;
  }
  if ( v55 )
    goto LABEL_46;
LABEL_49:
  v37 = v143.m128i_i64[1];
LABEL_27:
  sub_BF6100(v37, v139);
LABEL_28:
  ++*(_DWORD *)(v143.m128i_i64[1] + 8);
  v38 = **(_QWORD **)(a2 + 8);
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  v39 = *(_DWORD *)(a1 + 4240);
  ++*(_DWORD *)(v143.m128i_i64[1] + 8);
  v129 = v39;
  v140 = 2 * v39;
  if ( 3 * v39 < 4 * (*(_DWORD *)(a1 + 4244) + *(_DWORD *)(a1 + 4248)) )
  {
    v129 = 2 * v39;
    v40 = 2 * v39;
    v133 = 48LL * v39;
    v91 = sub_186B270(v133);
    v92 = v91;
    if ( v140 )
    {
      v93 = (_OWORD *)(v91 + 8);
      v94 = v92 + v133 + 8;
      if ( (((_BYTE)v92 + 24 * v40 + 8 - (_BYTE)v93) & 8) == 0
        || (*v93 = 0, v93 = (_OWORD *)(v92 + 32), v92 + 32 != v94) )
      {
        v95 = v143.m128i_i64[1];
        do
        {
          *v93 = 0;
          v93 += 3;
          *(_OWORD *)((char *)v93 - 24) = 0;
        }
        while ( v93 != (_OWORD *)v94 );
        v143.m128i_i64[1] = v95;
      }
    }
    v96 = *(char **)(a1 + 4232);
    v97 = (const double *)v96;
    v127 = &v96[24 * *(unsigned int *)(a1 + 4240)];
    if ( v96 != v127 )
    {
      do
      {
        if ( *((_QWORD *)v97 + 1) > 1u )
        {
          v98 = *(_DWORD *)v97;
          v99 = 24LL * (*(_DWORD *)v97 & (unsigned int)(v140 - 1));
          v100 = v92 + v99;
          if ( v133 == v99 )
          {
LABEL_116:
            if ( v92 == v100 )
            {
LABEL_136:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v101 = v143.m128i_i64[1];
            v102 = v92;
            while ( *(_QWORD *)(v102 + 8) )
            {
              v102 += 24;
              if ( v100 == v102 )
                goto LABEL_136;
            }
          }
          else
          {
            v101 = v143.m128i_i64[1];
            v102 = v92 + v99;
            while ( *(_QWORD *)(v102 + 8) )
            {
              v102 += 24;
              if ( v92 + v133 == v102 )
                goto LABEL_116;
            }
          }
          v143.m128i_i64[1] = v101;
          v103 = _mm_loadh_ps(v97 + 2);
          *(_DWORD *)v102 = v98;
          *(__m128 *)(v102 + 8) = v103;
        }
        v97 += 3;
      }
      while ( v127 != (char *)v97 );
      v96 = *(char **)(a1 + 4232);
    }
    if ( v96 )
    {
      v134 = v92;
      sub_186B220(v96);
      v92 = v134;
    }
    *(_QWORD *)(a1 + 4232) = v92;
    *(_DWORD *)(a1 + 4248) = 0;
    *(_DWORD *)(a1 + 4240) = v140;
  }
  v41 = *(_DWORD *)(v143.m128i_i64[1] + 12);
  v42 = _mm_unpacklo_epi64((__m128i)v143.m128i_u64[1], (__m128i)v38);
  v43 = (*(_DWORD *)(v38 + 12) - v41) ^ (v41 << 8);
  v44 = *(_QWORD *)(a1 + 4232);
  v45 = ((v43 ^ ((v41 - v43) << 16)) + v43 - v41) ^ ((v41 - v43) << 10);
  v46 = 24LL * (v45 & (v129 - 1));
  v47 = 24LL * v129;
  v48 = v44 + v46;
  v49 = v44 + v47;
  if ( v46 == v47 )
  {
    v51 = 0;
LABEL_91:
    if ( v44 == v48 )
    {
LABEL_132:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v90 = *(_QWORD *)(v44 + 8);
      if ( v90 > 1 )
      {
        if ( *(_DWORD *)v44 == v45 && v143.m128i_i64[1] == v90 && v38 == *(_QWORD *)(v44 + 16) )
        {
          *(__m128i *)(v44 + 8) = v42;
          goto LABEL_54;
        }
      }
      else
      {
        if ( !v90 )
        {
          if ( v51 )
          {
            --*(_DWORD *)(a1 + 4248);
            v44 = v51;
          }
          *(_DWORD *)v44 = v45;
          *(__m128i *)(v44 + 8) = v42;
          ++*(_DWORD *)(a1 + 4244);
          goto LABEL_54;
        }
        v51 = v44;
      }
      v44 += 24;
      if ( v48 == v44 )
        goto LABEL_132;
    }
  }
  v50 = v44 + v46;
  v51 = 0;
  while ( 2 )
  {
    v52 = *(_QWORD *)(v50 + 8);
    if ( v52 > 1 )
    {
      if ( *(_DWORD *)v50 == v45 && v143.m128i_i64[1] == v52 && v38 == *(_QWORD *)(v50 + 16) )
      {
        *(__m128i *)(v50 + 8) = v42;
        goto LABEL_54;
      }
LABEL_35:
      v50 += 24;
      if ( v49 == v50 )
        goto LABEL_91;
      continue;
    }
    break;
  }
  if ( v52 )
  {
    v51 = v50;
    goto LABEL_35;
  }
  if ( v51 )
  {
    --*(_DWORD *)(a1 + 4248);
    v50 = v51;
  }
  *(_DWORD *)v50 = v45;
  *(__m128i *)(v50 + 8) = v42;
  ++*(_DWORD *)(a1 + 4244);
LABEL_54:
  sub_BF6100(v143.m128i_i64[1], v139);
  v142 = *(_QWORD *)(a1 + 24);
  v56 = **(_QWORD **)(a2 + 8);
  v57 = (_QWORD *)sub_180C100(a1 + 3960, 40);
  *v57 = off_1C57FD0;
  v57[2] = a1 + 4232;
  v57[1] = v142;
  v58 = v143.m128i_i64[1];
  v57[4] = v56;
  v57[3] = v58;
  v59 = *(_QWORD **)(a1 + 3944);
  if ( v59 )
  {
    v60 = *((_DWORD *)v59 - 2);
    if ( *((_DWORD *)v59 - 1) == v60 )
    {
      v104 = (3 * v60 + 1) >> 1;
      v105 = 8 * v104 + 8;
      if ( 8 * v60 + 8 >= v105 || v60 >= v104 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v151, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v151);
        sub_233E40((__int64)v151);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v106 = (unsigned int *)sub_186B300(v59 - 1, v105);
      v59 = v106 + 2;
      *(_QWORD *)(a1 + 3944) = v106 + 2;
      *v106 = v104;
    }
  }
  else
  {
    v111 = (_QWORD *)sub_186B270(0x18u);
    *v111 = 2;
    v59 = v111 + 1;
    *(_QWORD *)(a1 + 3944) = v59;
  }
  v61 = *((unsigned int *)v59 - 1);
  v144 = v17;
  v59[v61] = v57;
  *((_DWORD *)v59 - 1) = v61 + 1;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v146 = 0;
  v145 = v143.m128i_i64[0];
  sub_BF9A70(&v146, &v144);
  v54 = v146;
  v141 = v145;
  if ( (_BYTE)v136 )
  {
    v63 = nullptr;
  }
  else
  {
    sub_1407560((unsigned int)v151, a1 + 1848, a1 + 2136, v17, v137, 0, 0, 0, 1);
    v138 = v151[0];
    v62 = (_QWORD *)sub_186B270(0x18u);
    v63 = v62 + 1;
    v62[1] = v138;
    *v62 = 0x100000002LL;
  }
  v64 = *(_QWORD *)(a1 + 1736);
  v150 = v143.m128i_i64[1];
  v65 = sub_15E1AF0(v64);
  v66 = _mm_loadl_epi64(&v143);
  v151[0] = v65;
  v67 = _mm_unpacklo_epi64(v66, (__m128i)(unsigned __int64)v63);
  if ( v65 )
    ++*(_DWORD *)(v65 + 8);
  v147 = v67;
  sub_BF9A70(&v147.m128i_i64[1], v151);
  v53 = (_QWORD *)v147.m128i_i64[1];
  v143.m128i_i64[0] = v147.m128i_i64[0];
  sub_1407560((unsigned int)&v150, a1 + 1848, a1 + 2144, v17, v148.m128_i32[0], 0, 0, 0, 1);
  v68 = v150;
  if ( v53 )
  {
    v69 = *((_DWORD *)v53 - 2);
    if ( *((_DWORD *)v53 - 1) == v69 )
    {
      v107 = (3 * v69 + 1) >> 1;
      v108 = 8 * v107 + 8;
      if ( 8 * v69 + 8 >= v108 || v69 >= v107 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v151, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v151);
        sub_233E40((__int64)v151);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v131 = (3 * v69 + 1) >> 1;
      v109 = (unsigned int *)sub_186B300(v53 - 1, v108);
      v53 = v109 + 2;
      *v109 = v131;
    }
  }
  else
  {
    v112 = (_QWORD *)sub_186B270(0x18u);
    *v112 = 2;
    v53 = v112 + 1;
  }
  v70 = *((_DWORD *)v53 - 1);
  v53[v70] = v68;
  v71 = 0;
  *((_DWORD *)v53 - 1) = v70 + 1;
  v130 = a1 + 240;
  v126 = *(_DWORD *)(a1 + 564);
  *(_DWORD *)(a1 + 564) = v126 + 1;
  v151[0] = v141;
  if ( v54 )
  {
    for ( i = 0; i < *(_DWORD *)(v54 - 4); ++i )
    {
      v73 = *(_QWORD *)(v54 + 8LL * i);
      if ( v73 )
        ++*(_DWORD *)(v73 + 8);
      if ( v71 )
      {
        v74 = *(_DWORD *)(v71 - 4);
        if ( v74 == *(_DWORD *)(v71 - 8) )
        {
          v75 = (3 * v74 + 1) >> 1;
          v76 = 8 * v75 + 8;
          if ( 8 * v74 + 8 >= (unsigned int)v76 || v74 >= v75 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v150, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v150);
            sub_233E40((__int64)&v150);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v118 = (3 * v74 + 1) >> 1;
          v121 = v73;
          v77 = (unsigned int *)sub_186B300((void *)(v71 - 8), v76);
          v71 = (__int64)(v77 + 2);
          v73 = v121;
          *v77 = v118;
          v74 = v77[1];
        }
      }
      else
      {
        v124 = v73;
        v110 = (_QWORD *)sub_186B270(0x18u);
        *v110 = 2;
        v71 = (__int64)(v110 + 1);
        v74 = 0;
        v73 = v124;
      }
      *(_QWORD *)(v71 + 8LL * v74) = v73;
      *(_DWORD *)(v71 - 4) = v74 + 1;
    }
  }
  v152 = v143.m128i_i64[0];
  if ( *((_DWORD *)v53 - 1) )
  {
    v78 = *v53;
    if ( *v53 )
      ++*(_DWORD *)(v78 + 8);
    v122 = v78;
    v79 = (_QWORD *)sub_186B270(0x18u);
    v80 = v122;
    *v79 = 2;
    v81 = 0;
    v82 = v79 + 1;
    v83 = 0;
    while ( 1 )
    {
      ++v81;
      v82[v83] = v80;
      *((_DWORD *)v82 - 1) = v83 + 1;
      if ( (unsigned int)v81 >= *((_DWORD *)v53 - 1) )
        break;
      v80 = v53[v81];
      if ( v80 )
        ++*(_DWORD *)(v80 + 8);
      v83 = *((_DWORD *)v82 - 1);
      if ( v83 == *((_DWORD *)v82 - 2) )
      {
        v84 = (3 * v83 + 1) >> 1;
        v85 = 8 * v84 + 8;
        if ( 8 * v83 + 8 >= v85 || v83 >= v84 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v150, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, &v150);
          sub_233E40((__int64)&v150);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v116 = v80;
        v119 = v81;
        v123 = (3 * v83 + 1) >> 1;
        v86 = (unsigned int *)sub_186B300(v82 - 1, v85);
        v82 = v86 + 2;
        v81 = v119;
        v80 = v116;
        *v86 = v123;
        v83 = v86[1];
      }
    }
  }
  else
  {
    v82 = nullptr;
  }
  v155 = a4;
  v151[1] = v71;
  v153 = v82;
  v154 = v126;
  sub_BD1D40(v130, (__int64)v151);
  v87 = v153;
  sub_2334C0(&v152);
  v153 = v87;
  v8 = 1;
  sub_2334C0(v151);
LABEL_41:
  sub_BF6100(v143.m128i_i64[1], v139);
  sub_BF6100(v148.m128_i64[0], v148.m128_i64[1]);
  v147.m128i_i64[1] = (__int64)v53;
  v147.m128i_i64[0] = v143.m128i_i64[0];
  sub_2334C0(v147.m128i_i64);
  v146 = v54;
  v145 = v141;
  sub_2334C0(&v145);
  sub_25A130(v135);
  return v8;
}

