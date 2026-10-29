__int64 __fastcall sub_158E1C0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v9; // r14
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 *v18; // rsi
  __int64 v19; // r8
  unsigned __int64 v20; // r14
  _QWORD *v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // r15
  const char **v24; // r14
  unsigned __int64 v25; // rax
  unsigned int *v26; // rdx
  size_t v27; // rax
  const char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  __int64 v35; // rax
  _QWORD *v36; // rax
  char v37; // dl
  __int64 v38; // r14
  size_t v39; // rax
  __int64 v40; // r12
  __int64 v41; // r14
  unsigned __int64 v42; // rax
  __m128i *v43; // rax
  unsigned __int64 v44; // rax
  __m128i *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 v52; // rax
  __m128i *v53; // rax
  bool v54; // r12
  char *v55; // rbp
  unsigned __int64 v56; // r12
  unsigned __int8 *v57; // r15
  __int64 v58; // rcx
  unsigned __int8 *v59; // rsi
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r14
  _BYTE *v63; // rax
  _BYTE *v64; // rsi
  signed __int64 v65; // r8
  char *v66; // r13
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r13
  __int64 v72; // rax
  _QWORD *v73; // rax
  int v74; // esi
  int v75; // r8d
  __int64 v76; // r9
  size_t v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r13
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r13
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r12
  __int64 v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // r12
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  int v107; // eax
  __int64 v108; // rax
  __int64 v109; // rsi
  unsigned __int8 *v110; // r14
  unsigned __int8 *v111; // rdi
  __int64 v112; // r14
  unsigned __int8 *v113; // rdi
  __int32 v114; // eax
  __int64 v115; // r14
  unsigned __int8 *v116; // rdi
  __int32 v117; // edx
  __int64 v118; // rcx
  size_t v119; // rax
  signed __int64 v121; // [rsp+10h] [rbp-1D8h]
  signed __int64 v122; // [rsp+10h] [rbp-1D8h]
  __int32 v123; // [rsp+10h] [rbp-1D8h]
  __int32 v124; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 src; // [rsp+18h] [rbp-1D0h]
  void *srca; // [rsp+18h] [rbp-1D0h]
  _BYTE *srcb; // [rsp+18h] [rbp-1D0h]
  unsigned int v129; // [rsp+28h] [rbp-1C0h]
  int v130; // [rsp+2Ch] [rbp-1BCh]
  char v131; // [rsp+3Bh] [rbp-1ADh] BYREF
  unsigned int v132; // [rsp+3Ch] [rbp-1ACh] BYREF
  void *v133[2]; // [rsp+40h] [rbp-1A8h] BYREF
  const char **v134; // [rsp+50h] [rbp-198h]
  _QWORD v135[2]; // [rsp+60h] [rbp-188h] BYREF
  __m128i v136; // [rsp+70h] [rbp-178h] BYREF
  __m128i v137; // [rsp+80h] [rbp-168h] BYREF
  __int64 v138; // [rsp+90h] [rbp-158h] BYREF
  __m128i v139; // [rsp+A0h] [rbp-148h] BYREF
  _BYTE v140[16]; // [rsp+B0h] [rbp-138h] BYREF
  __m128i v141; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v142; // [rsp+D0h] [rbp-118h] BYREF
  __m128i v143; // [rsp+E0h] [rbp-108h] BYREF
  __m128i v144; // [rsp+F0h] [rbp-F8h] BYREF
  __m128i v145; // [rsp+100h] [rbp-E8h] BYREF
  __m128i v146; // [rsp+110h] [rbp-D8h] BYREF
  __m128 v147; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v148; // [rsp+130h] [rbp-B8h]
  unsigned __int8 *v149; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v150; // [rsp+148h] [rbp-A0h]
  char v151; // [rsp+198h] [rbp-50h]
  unsigned int v152; // [rsp+1A0h] [rbp-48h]
  char v153; // [rsp+1A4h] [rbp-44h]

  sub_168B9F0(&v147, *(_QWORD *)(a1 + 8) + 8LL, *(unsigned int *)(a2 + 24), 7505, 0);
  if ( v151 )
  {
    sub_157E260(&v149, a2);
    v37 = v151;
  }
  else
  {
    if ( !v153 )
    {
      v9 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 42;
      goto LABEL_4;
    }
    v34 = sub_168B9E0(&v147);
    v35 = v148;
    if ( v148 )
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
    v145.m128i_i64[0] = v35;
    v36 = sub_1587BC0(v34, v145.m128i_i64, v30, v31, v32, v33);
    sub_157E260((unsigned __int8 **)(*v36 + 32LL * v152 + 8), a2);
    v37 = v151;
  }
  v9 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42;
  if ( v37 )
  {
    sub_157E4A0(
      &v149,
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL)
               + 16LL) != 42);
    goto LABEL_5;
  }
LABEL_4:
  if ( v153 )
  {
    v46 = sub_168B9E0(&v147);
    v50 = v148;
    if ( v148 )
    {
      srca = (void *)v46;
      v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
      v46 = (__int64)srca;
    }
    v145.m128i_i64[0] = v50;
    v51 = sub_1587BC0(v46, v145.m128i_i64, v46, v47, v48, v49);
    sub_157E4A0((unsigned __int8 **)(*v51 + 32LL * v152 + 8), v9);
  }
LABEL_5:
  v145.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  sub_1587DB0((__int64)&v147, v145.m128i_i64);
  sub_15F7200(&v147);
  result = a4;
  if ( !*(_DWORD *)(a4 + 8) )
    return result;
  v11 = *a3;
  v131 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v11 + 16))(a3, a2, &v131);
  v132 = 0;
  v13 = v12;
  v14 = *(unsigned int *)(a6 + 16);
  src = v15;
  v16 = *(_QWORD *)a6;
  if ( !(_DWORD)v14 )
    goto LABEL_115;
  v17 = (v14 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v18 = (__int64 *)(v16 + 16LL * v17);
  v19 = *v18;
  if ( *v18 != a2 )
  {
    v74 = 1;
    if ( v19 != -4096 )
    {
      do
      {
        v75 = v74 + 1;
        v17 = (v14 - 1) & (v74 + v17);
        v18 = (__int64 *)(v16 + 16LL * v17);
        v76 = *v18;
        if ( *v18 == a2 )
          goto LABEL_8;
        v74 = v75;
      }
      while ( v76 != -4096 );
    }
LABEL_115:
    sub_9EF000(&v147, (_QWORD *)(v16 + 16LL * (unsigned int)v14), (_QWORD *)(v16 + 16LL * (unsigned int)v14), a6, 1);
    v20 = v147.m128_u64[0];
    goto LABEL_9;
  }
LABEL_8:
  sub_9EF000(&v147, v18, (_QWORD *)(16 * v14 + v16), a6, 1);
  v20 = v147.m128_u64[0];
LABEL_9:
  v21 = (_QWORD *)(*(_QWORD *)a6 + 16LL * *(unsigned int *)(a6 + 16));
  sub_9EF000(&v147, v21, v21, a6, 1);
  if ( v20 != v147.m128_u64[0] )
  {
    v22 = *(_DWORD *)(v20 + 8);
    if ( v22 == 1 )
    {
      v132 = 0;
    }
    else if ( v22 == 3 )
    {
      v132 = 1;
    }
  }
  sub_168B9F0(&v147, *(_QWORD *)(a1 + 8) + 8LL, *(unsigned int *)(a2 + 24), 6444 - (unsigned int)(v131 == 0), 0);
  if ( v151 )
  {
    sub_157E260(&v149, a2);
  }
  else if ( v153 )
  {
    v103 = sub_168B9E0(&v147);
    v104 = v148;
    if ( v148 )
      v104 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
    v145.m128i_i64[0] = v104;
    v105 = sub_1587BC0(v103, v145.m128i_i64, v99, v100, v101, v102);
    sub_157E260((unsigned __int8 **)(*v105 + 32LL * v152 + 8), a2);
  }
  sub_1588370((__int64)&v147, &v132);
  if ( src <= 1 )
  {
    v143.m128i_i64[0] = (__int64)&v144;
    v77 = j__strlen(&byte_22F0C30);
    sub_1580B80(&v143, &byte_22F0C30, (__int64)(&byte_22F0C30 + v77));
    goto LABEL_74;
  }
  v134 = nullptr;
  *(_OWORD *)v133 = 0;
  v23 = v13 + 8 * src;
  if ( v13 == v23 )
  {
    v135[0] = &v136;
    v119 = j__strlen(&byte_22F0C30);
    sub_1580B80(v135, &byte_22F0C30, (__int64)(&byte_22F0C30 + v119));
    v129 = -2;
    v130 = 0;
    goto LABEL_37;
  }
  v24 = nullptr;
  do
  {
    while ( 1 )
    {
      if ( *(_QWORD *)v13 == a2 )
        goto LABEL_22;
      v29 = *(_QWORD *)(*(_QWORD *)v13 + 40LL);
      if ( (v29 & 7) != 0 || (v25 = v29 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v27 = j__strlen(&byte_22F0C30);
        v28 = &byte_22F0C30;
      }
      else
      {
        v26 = *(unsigned int **)(v25 + 16);
        v27 = *v26;
        v28 = (const char *)(v26 + 4);
      }
      v145.m128i_i64[0] = (__int64)v28;
      v145.m128i_i64[1] = v27;
      if ( v134 == v24 )
        break;
      *v24 = v28;
      v24 += 2;
      *(v24 - 1) = (const char *)v27;
      v133[1] = v24;
LABEL_22:
      v13 += 8;
      if ( v23 == v13 )
        goto LABEL_34;
    }
    v13 += 8;
    sub_1075D80((__int64)v133, (char *)v24, &v145);
    v24 = (const char **)v133[1];
  }
  while ( v23 != v13 );
LABEL_34:
  v38 = (char *)v24 - (char *)v133[0];
  if ( v38 == 16 )
  {
    sub_1582B20(&v143, *(_BYTE **)v133[0], *((_QWORD *)v133[0] + 1));
  }
  else if ( v38 == 32 )
  {
    sub_1582B20(&v137, *((_BYTE **)v133[0] + 2), *((_QWORD *)v133[0] + 3));
    sub_1582B20(&v139, *(_BYTE **)v133[0], *((_QWORD *)v133[0] + 1));
    v52 = j__strlen(" and ");
    if ( v52 > 0x7FFFFFFFFFFFFFFFLL - v139.m128i_i64[1] )
      goto LABEL_157;
    v53 = (__m128i *)sub_9EE560(&v139, " and ", v52);
    v145.m128i_i64[0] = (__int64)&v146;
    if ( (__m128i *)v53->m128i_i64[0] == &v53[1] )
    {
      v146 = _mm_loadu_si128(v53 + 1);
    }
    else
    {
      v145.m128i_i64[0] = v53->m128i_i64[0];
      v146.m128i_i64[0] = v53[1].m128i_i64[0];
    }
    v145.m128i_i64[1] = v53->m128i_i64[1];
    v53->m128i_i64[0] = (__int64)v53[1].m128i_i64;
    v53->m128i_i64[1] = 0;
    v53[1].m128i_i8[0] = 0;
    sub_1054B10(&v143, &v145, &v137);
    if ( (__m128i *)v145.m128i_i64[0] != &v146 )
      operator delete((void *)v145.m128i_i64[0]);
    if ( (_BYTE *)v139.m128i_i64[0] != v140 )
      operator delete((void *)v139.m128i_i64[0]);
    if ( (__int64 *)v137.m128i_i64[0] != &v138 )
      operator delete((void *)v137.m128i_i64[0]);
  }
  else
  {
    v130 = v38 >> 4;
    v129 = v130 - 2;
    v135[0] = &v136;
    v39 = j__strlen(&byte_22F0C30);
    sub_1580B80(v135, &byte_22F0C30, (__int64)(&byte_22F0C30 + v39));
    if ( v130 != 2 )
    {
LABEL_37:
      v40 = 0;
      v41 = 16 * (v129 - 1 + 1LL);
      while ( 1 )
      {
        sub_1582B20(&v143, *(_BYTE **)((char *)v133[0] + v40), *(_QWORD *)((char *)v133[0] + v40 + 8));
        v42 = j__strlen(", ");
        if ( v42 > 0x7FFFFFFFFFFFFFFFLL - v143.m128i_i64[1] )
          goto LABEL_157;
        v43 = (__m128i *)sub_9EE560(&v143, ", ", v42);
        v145.m128i_i64[0] = (__int64)&v146;
        if ( (__m128i *)v43->m128i_i64[0] == &v43[1] )
        {
          v146 = _mm_loadu_si128(v43 + 1);
        }
        else
        {
          v145.m128i_i64[0] = v43->m128i_i64[0];
          v146.m128i_i64[0] = v43[1].m128i_i64[0];
        }
        v145.m128i_i64[1] = v43->m128i_i64[1];
        v43->m128i_i64[0] = (__int64)v43[1].m128i_i64;
        v43->m128i_i64[1] = 0;
        v43[1].m128i_i8[0] = 0;
        sub_9EE560(v135, v145.m128i_i64[0], v145.m128i_u64[1]);
        if ( (__m128i *)v145.m128i_i64[0] != &v146 )
          operator delete((void *)v145.m128i_i64[0]);
        if ( (__m128i *)v143.m128i_i64[0] == &v144 )
        {
          v40 += 16;
          if ( v41 == v40 )
            goto LABEL_45;
        }
        else
        {
          operator delete((void *)v143.m128i_i64[0]);
          v40 += 16;
          if ( v40 == v41 )
            goto LABEL_45;
        }
      }
    }
    v130 = 2;
LABEL_45:
    sub_1582B20(
      &v141,
      *((_BYTE **)v133[0] + 2 * (unsigned int)(v130 - 1)),
      *((_QWORD *)v133[0] + 2 * (unsigned int)(v130 - 1) + 1));
    sub_1582B20(&v145, *((_BYTE **)v133[0] + 2 * v129), *((_QWORD *)v133[0] + 2 * v129 + 1));
    v44 = j__strlen(", and ");
    if ( v44 > 0x7FFFFFFFFFFFFFFFLL - v145.m128i_i64[1] )
LABEL_157:
      std::__throw_length_error("basic_string::append");
    v45 = (__m128i *)sub_9EE560(&v145, ", and ", v44);
    v143.m128i_i64[0] = (__int64)&v144;
    if ( (__m128i *)v45->m128i_i64[0] == &v45[1] )
    {
      v144 = _mm_loadu_si128(v45 + 1);
    }
    else
    {
      v143.m128i_i64[0] = v45->m128i_i64[0];
      v144.m128i_i64[0] = v45[1].m128i_i64[0];
    }
    v143.m128i_i64[1] = v45->m128i_i64[1];
    v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
    v45->m128i_i64[1] = 0;
    v45[1].m128i_i8[0] = 0;
    sub_1054B10(&v139, &v143, &v141);
    sub_9EE560(v135, v139.m128i_i64[0], v139.m128i_u64[1]);
    if ( (_BYTE *)v139.m128i_i64[0] != v140 )
      operator delete((void *)v139.m128i_i64[0]);
    if ( (__m128i *)v143.m128i_i64[0] != &v144 )
      operator delete((void *)v143.m128i_i64[0]);
    if ( (__m128i *)v145.m128i_i64[0] != &v146 )
      operator delete((void *)v145.m128i_i64[0]);
    if ( (__int64 *)v141.m128i_i64[0] != &v142 )
      operator delete((void *)v141.m128i_i64[0]);
    v143.m128i_i64[0] = (__int64)&v144;
    if ( (__m128i *)v135[0] == &v136 )
    {
      v144 = _mm_load_si128(&v136);
    }
    else
    {
      v143.m128i_i64[0] = v135[0];
      v144.m128i_i64[0] = v136.m128i_i64[0];
    }
    v143.m128i_i64[1] = v135[1];
  }
  if ( v133[0] )
    operator delete(v133[0]);
LABEL_74:
  v54 = src > 1;
  if ( v151 )
  {
    sub_AEC220(&v149, v143.m128i_i64[0], v143.m128i_i64[1]);
    if ( !v151 )
      goto LABEL_120;
LABEL_110:
    sub_157E4A0(&v149, v54);
    if ( !v151 )
      goto LABEL_124;
    goto LABEL_111;
  }
  if ( !v153 )
    goto LABEL_76;
  v82 = sub_168B9E0(&v147);
  v83 = v148;
  if ( v148 )
    v83 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
  v145.m128i_i64[0] = v83;
  v84 = sub_1587BC0(v82, v145.m128i_i64, v78, v79, v80, v81);
  sub_AEC220((unsigned __int8 **)(*v84 + 32LL * v152 + 8), v143.m128i_i64[0], v143.m128i_i64[1]);
  if ( v151 )
    goto LABEL_110;
LABEL_120:
  if ( !v153 )
    goto LABEL_76;
  v89 = sub_168B9E0(&v147);
  v90 = v148;
  if ( v148 )
    v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
  v145.m128i_i64[0] = v90;
  v91 = sub_1587BC0(v89, v145.m128i_i64, v85, v86, v87, v88);
  sub_157E4A0((unsigned __int8 **)(*v91 + 32LL * v152 + 8), v54);
  if ( v151 )
  {
LABEL_111:
    sub_157E260(&v149, a5);
    goto LABEL_76;
  }
LABEL_124:
  if ( v153 )
  {
    v96 = sub_168B9E0(&v147);
    v97 = v148;
    if ( v148 )
      v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
    v145.m128i_i64[0] = v97;
    v98 = sub_1587BC0(v96, v145.m128i_i64, v92, v93, v94, v95);
    sub_157E260((unsigned __int8 **)(*v98 + 32LL * v152 + 8), a5);
  }
LABEL_76:
  if ( (__m128i *)v143.m128i_i64[0] != &v144 )
    operator delete((void *)v143.m128i_i64[0]);
  v55 = *(char **)a4;
  v56 = *(_QWORD *)a4 + ((unsigned __int64)*(unsigned int *)(a4 + 8) << 6);
  if ( *(_QWORD *)a4 != v56 )
  {
    while ( 1 )
    {
      v66 = v55;
      if ( !v151 )
      {
        if ( v153 )
        {
          v71 = sub_168B9E0(&v147);
          v72 = v148;
          if ( v148 )
            v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 32LL))(v148);
          v145.m128i_i64[0] = v72;
          v73 = sub_1587BC0(v71, v145.m128i_i64, v67, v68, v69, v70);
          if ( *(_DWORD *)v55 )
          {
            if ( *((_DWORD *)v55 + 1) )
              sub_1585F70((__int64 *)(*v73 + 32LL * v152 + 8), (unsigned __int64)v55);
          }
        }
        goto LABEL_91;
      }
      if ( *(_DWORD *)v55 && *((_DWORD *)v55 + 1) )
        break;
LABEL_91:
      v55 += 64;
      if ( (char *)v56 == v55 )
        return sub_15F7200(&v147);
    }
    v57 = v149;
    if ( v149 )
    {
      v58 = *((unsigned int *)v149 + 134);
      v59 = *((unsigned __int8 **)v149 + 66);
      v60 = *((unsigned int *)v149 + 135);
      v61 = v58 + 1;
      v62 = (unsigned __int64)&v59[64 * v58];
    }
    else
    {
      v106 = v150;
      v107 = *(_DWORD *)(v150 + 14976);
      if ( v107 )
      {
        v108 = (unsigned int)(v107 - 1);
        *(_DWORD *)(v150 + 14976) = v108;
        v57 = *(unsigned __int8 **)(v106 + 8 * v108 + 14848);
        v109 = *((unsigned int *)v57 + 134);
        *v57 = 0;
        v110 = *((unsigned __int8 **)v57 + 66);
        *((_DWORD *)v57 + 106) = 0;
        v59 = &v110[64 * v109];
        if ( v110 != v59 )
        {
          do
          {
            while ( 1 )
            {
              v59 -= 64;
              v111 = *((unsigned __int8 **)v59 + 3);
              if ( v111 == v59 + 40 )
                break;
              operator delete(v111);
              if ( v110 == v59 )
                goto LABEL_135;
            }
          }
          while ( v110 != v59 );
LABEL_135:
          v59 = *((unsigned __int8 **)v57 + 66);
        }
        *((_DWORD *)v57 + 134) = 0;
        v60 = *((unsigned int *)v57 + 135);
      }
      else
      {
        v57 = (unsigned __int8 *)operator new(0x3A0u);
        *v57 = 0;
        *((_QWORD *)v57 + 12) = v57 + 112;
        v59 = v57 + 544;
        *((_QWORD *)v57 + 16) = v57 + 144;
        *((_QWORD *)v57 + 20) = v57 + 176;
        *((_QWORD *)v57 + 24) = v57 + 208;
        *((_QWORD *)v57 + 28) = v57 + 240;
        *((_QWORD *)v57 + 32) = v57 + 272;
        *((_QWORD *)v57 + 36) = v57 + 304;
        *((_QWORD *)v57 + 40) = v57 + 336;
        *((_QWORD *)v57 + 44) = v57 + 368;
        *((_QWORD *)v57 + 48) = v57 + 400;
        *((_QWORD *)v57 + 52) = v57 + 432;
        *((_QWORD *)v57 + 13) = 0;
        v57[112] = 0;
        *((_QWORD *)v57 + 17) = 0;
        v57[144] = 0;
        *((_QWORD *)v57 + 21) = 0;
        v57[176] = 0;
        *((_QWORD *)v57 + 25) = 0;
        v57[208] = 0;
        *((_QWORD *)v57 + 29) = 0;
        v57[240] = 0;
        *((_QWORD *)v57 + 33) = 0;
        v57[272] = 0;
        *((_QWORD *)v57 + 37) = 0;
        v57[304] = 0;
        *((_QWORD *)v57 + 41) = 0;
        v57[336] = 0;
        *((_QWORD *)v57 + 45) = 0;
        v57[368] = 0;
        *((_QWORD *)v57 + 49) = 0;
        v57[400] = 0;
        *((_QWORD *)v57 + 53) = 0x800000000LL;
        *((_QWORD *)v57 + 66) = v57 + 544;
        *((_QWORD *)v57 + 67) = 0x600000000LL;
        v60 = 6;
      }
      v149 = v57;
      v62 = (unsigned __int64)v59;
      v61 = 1;
    }
    if ( v61 > v60 )
    {
      if ( v59 > (unsigned __int8 *)v55 || v62 <= (unsigned __int64)v55 )
      {
        v115 = sub_2237400(v57 + 528, v57 + 544, v61, 64, &v145);
        sub_9EF810((__int64 *)v57 + 66, v115);
        v116 = *((unsigned __int8 **)v57 + 66);
        v117 = v145.m128i_i32[0];
        if ( v116 == v57 + 544 )
        {
          v118 = *((unsigned int *)v57 + 134);
          *((_QWORD *)v57 + 66) = v115;
          *((_DWORD *)v57 + 135) = v117;
        }
        else
        {
          v124 = v145.m128i_i32[0];
          free(v116);
          v118 = *((unsigned int *)v57 + 134);
          *((_QWORD *)v57 + 66) = v115;
          *((_DWORD *)v57 + 135) = v124;
        }
        v62 = (v118 << 6) + v115;
      }
      else
      {
        v112 = sub_2237400(v57 + 528, v57 + 544, v61, 64, &v145);
        sub_9EF810((__int64 *)v57 + 66, v112);
        v113 = *((unsigned __int8 **)v57 + 66);
        v114 = v145.m128i_i32[0];
        if ( v113 == v57 + 544 )
        {
          *((_QWORD *)v57 + 66) = v112;
          *((_DWORD *)v57 + 135) = v114;
        }
        else
        {
          v123 = v145.m128i_i32[0];
          free(v113);
          *((_QWORD *)v57 + 66) = v112;
          *((_DWORD *)v57 + 135) = v123;
        }
        v66 = (char *)(v112 + v55 - (char *)v59);
        v62 = ((unsigned __int64)*((unsigned int *)v57 + 134) << 6) + v112;
      }
    }
    *(_QWORD *)v62 = *(_QWORD *)v66;
    *(_DWORD *)(v62 + 8) = *((_DWORD *)v66 + 2);
    *(_QWORD *)(v62 + 12) = *(_QWORD *)(v66 + 12);
    *(_DWORD *)(v62 + 20) = *((_DWORD *)v66 + 5);
    v63 = (_BYTE *)(v62 + 40);
    *(_QWORD *)(v62 + 24) = v62 + 40;
    v64 = *((_BYTE **)v66 + 3);
    v65 = *((_QWORD *)v66 + 4);
    if ( &v64[v65] && !v64 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v65 > 0xF )
    {
      if ( v65 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      srcb = *((_BYTE **)v66 + 3);
      v121 = *((_QWORD *)v66 + 4);
      v63 = (_BYTE *)operator new(v65 + 1);
      v65 = v121;
      v64 = srcb;
      *(_QWORD *)(v62 + 24) = v63;
      *(_QWORD *)(v62 + 40) = v121;
    }
    else
    {
      if ( v65 == 1 )
      {
        *(_BYTE *)(v62 + 40) = *v64;
LABEL_90:
        *(_QWORD *)(v62 + 32) = v65;
        v63[v65] = 0;
        *(_BYTE *)(v62 + 56) = v66[56];
        ++*((_DWORD *)v57 + 134);
        goto LABEL_91;
      }
      if ( !v65 )
        goto LABEL_90;
    }
    v122 = v65;
    memcpy(v63, v64, v65);
    v63 = *(_BYTE **)(v62 + 24);
    v65 = v122;
    goto LABEL_90;
  }
  return sub_15F7200(&v147);
}
