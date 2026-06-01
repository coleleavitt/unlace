__int64 __fastcall sub_6ED6C0(
        __int64 *a1,
        unsigned int a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 *v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __m128 v21; // xmm0
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rdx
  unsigned int v35; // r14d
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // r14
  __m128 v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rax
  __m128 v48; // xmm0
  __int64 v49; // rax
  __m128 v50; // xmm0
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned int v63; // r14d
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rax
  double v68; // r14
  __m128i v69; // xmm4
  __m128 v70; // xmm0
  __m128 v71; // xmm1
  __int64 v72; // rax
  __int64 v73; // r14
  __m128 v74; // xmm0
  __int64 v75; // rax
  __int64 v76; // rdx
  unsigned int v77; // r14d
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rax
  double v81; // r14
  __m128i v82; // xmm7
  __m128 v83; // xmm0
  __m128 v84; // xmm1
  __int64 v85; // rax
  unsigned __int64 v87; // r15
  __int64 *v88; // r14
  __int64 v89; // rsi
  int v91; // [rsp+0h] [rbp-220h]
  __int64 v92; // [rsp+8h] [rbp-218h]
  __int64 v93; // [rsp+8h] [rbp-218h]
  __m128i *v94; // [rsp+10h] [rbp-210h]
  __int64 v95; // [rsp+18h] [rbp-208h]
  void *ptr; // [rsp+20h] [rbp-200h]
  void *ptra; // [rsp+20h] [rbp-200h]
  __int64 v98; // [rsp+30h] [rbp-1F0h]
  __int64 v99; // [rsp+40h] [rbp-1E0h]
  __int64 v100; // [rsp+50h] [rbp-1D0h]
  int v103; // [rsp+74h] [rbp-1ACh]
  __int64 v104; // [rsp+78h] [rbp-1A8h]
  __m128i v105; // [rsp+80h] [rbp-1A0h] BYREF
  __m128i v106; // [rsp+90h] [rbp-190h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-178h] BYREF
  __int64 v108; // [rsp+B0h] [rbp-170h] BYREF
  __int64 v109; // [rsp+B8h] [rbp-168h] BYREF
  __int64 v110; // [rsp+C0h] [rbp-160h] BYREF
  __int64 v111; // [rsp+C8h] [rbp-158h] BYREF
  __int64 v112; // [rsp+D0h] [rbp-150h] BYREF
  __int64 v113; // [rsp+D8h] [rbp-148h] BYREF
  __int64 v114; // [rsp+E0h] [rbp-140h] BYREF
  __int64 v115; // [rsp+E8h] [rbp-138h] BYREF
  __int64 v116; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v117; // [rsp+F8h] [rbp-128h] BYREF
  __m128i v118; // [rsp+100h] [rbp-120h] BYREF
  __int64 v119; // [rsp+110h] [rbp-110h] BYREF
  __int64 v120; // [rsp+118h] [rbp-108h]
  __m128i v121; // [rsp+120h] [rbp-100h] BYREF
  __int64 v122; // [rsp+130h] [rbp-F0h] BYREF
  unsigned int *v123; // [rsp+138h] [rbp-E8h] BYREF
  __m128i v124; // [rsp+140h] [rbp-E0h] BYREF
  __m128 v125; // [rsp+150h] [rbp-D0h]
  __m128 v126; // [rsp+160h] [rbp-C0h]
  __m128 v127; // [rsp+170h] [rbp-B0h] BYREF
  int v128; // [rsp+180h] [rbp-A0h]
  __m128 v129; // [rsp+188h] [rbp-98h]
  __m128 v130; // [rsp+198h] [rbp-88h]
  __m128 v131; // [rsp+1B0h] [rbp-70h] BYREF
  int v132; // [rsp+1C0h] [rbp-60h]
  __m128 v133; // [rsp+1C8h] [rbp-58h]
  __m128 v134; // [rsp+1D8h] [rbp-48h]

  v92 = a2;
  v103 = *(_DWORD *)(*a4 + 4LL * a2);
  v104 = a1[4];
  v10 = *(__int64 **)(*a3 + 16LL * a2 + 8);
  if ( v10 && (v11 = *((_DWORD *)v10 - 1)) != 0 )
  {
    v105.m128i_i64[0] = *v10;
    if ( v11 == 1 )
    {
      v106.m128i_i64[0] = v104;
    }
    else
    {
      v106.m128i_i64[0] = v10[1];
      if ( v11 != 2 )
        v104 = v10[2];
    }
  }
  else
  {
    v105.m128i_i64[0] = a1[4];
    v106.m128i_i64[0] = v104;
  }
  v12 = *a1;
  v118.m128i_i64[0] = 0;
  v119 = 0;
  v98 = v12;
  v118.m128i_i64[1] = v12;
  v120 = v12;
  v122 = v12;
  v123 = nullptr;
  v13 = sub_6DF7C0((__int64)a1, 4u);
  v14 = sub_6E1C90(a1, v104, v105.m128i_i64[0]);
  LODWORD(v13) = sub_6E1C90(a1, v13, v14);
  v15 = sub_6E1C90(a1, v106.m128i_i64[0], v106.m128i_i64[0]);
  v16 = sub_6E10F0((__int64)a1, v15, v13);
  v100 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = sub_6DF7C0((__int64)a1, 2u);
  v18 = sub_6E1C90(a1, v104, v17);
  v99 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v19 = a1[4];
  if ( v19 == v106.m128i_i64[0] )
  {
    v106.m128i_i64[1] = 0;
    v33 = v98;
    v94 = &v121;
    v43 = 0;
    v95 = 0;
    if ( v106.m128i_i64[0] != v104 )
      goto LABEL_46;
LABEL_118:
    ptra = (void *)v95;
    goto LABEL_113;
  }
  v20 = sub_6E0F30((__int64)a1);
  v21 = _mm_loadh_ps((const double *)a1);
  v127 = v21;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v128 = 0;
  v129 = v21;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v130 = v21;
  if ( v106.m128i_i64[0] )
    ++*(_DWORD *)(v106.m128i_i64[0] + 8);
  v121 = (__m128i)(unsigned __int64)v98;
  v94 = &v121;
  sub_2FCDE0(v121.m128i_i64);
  sub_2FCDE0(&v122);
  ptr = (void *)sub_1434DE0(*a1, 0);
  sub_1694970(&v131, *a1);
  sub_1692DB0(&v131, v104, a1[4], 0, 0);
  (*(void (__fastcall **)(void *, __m128 *))(*(_QWORD *)ptr + 24LL))(ptr, &v131);
  if ( a1[4] == v104 )
  {
    v106.m128i_i64[1] = 0;
    v27 = v98;
  }
  else
  {
    v26 = sub_6E15B0((_DWORD)a1, v104, v22, v23, v24, v25);
    v107 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    sub_6DE920((unsigned int **)&v121.m128i_i64[1], &v107);
    v106.m128i_i64[1] = v121.m128i_i64[1];
    v27 = v121.m128i_i64[0];
  }
  v28 = sub_6E5990((_DWORD)a1, v106.m128i_i32[0], v22, v23, v24, v25);
  v108 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v121.m128i_i64[0] = v27;
  v121.m128i_i64[1] = v106.m128i_i64[1];
  v105.m128i_i64[1] = (__int64)&v121.m128i_i64[1];
  sub_6DE920((unsigned int **)&v121.m128i_i64[1], &v108);
  v106.m128i_i64[1] = v121.m128i_i64[1];
  if ( v121.m128i_i64[1] )
  {
    v29 = *(unsigned int *)(v121.m128i_i64[1] - 4);
    v30 = v121.m128i_i64[1];
  }
  else
  {
    v29 = 0;
    v30 = 0;
  }
  v31 = sub_6E3580(a1, v29, v30);
  v95 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  v32 = *(_QWORD *)(*(_QWORD *)(a5 + 24) + 8 * v92);
  v109 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  sub_6DE920((unsigned int **)v105.m128i_i64[1], &v109);
  v106.m128i_i64[1] = v121.m128i_i64[1];
  v33 = v121.m128i_i64[0];
  v34 = *a3;
  if ( *a3 )
  {
    v35 = 0;
    do
    {
      if ( v35 >= *(_DWORD *)(v34 - 4) )
        break;
      sub_6E7D60(a1, v103, 16LL * v35 + v34, *(_DWORD *)(*a4 + 4LL * v35), (__int64 *)&v127, &v118);
      sub_1435270(
        (_DWORD)ptr,
        v118.m128i_i32[0],
        (unsigned int)&v119,
        v36,
        v37,
        v38,
        v91,
        v92,
        (__int64)v94,
        v95,
        (__int64)ptr);
      v39 = sub_15E1B70(*a1);
      v110 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      v121.m128i_i64[0] = v33;
      v121.m128i_i64[1] = v106.m128i_i64[1];
      sub_6DE920((unsigned int **)v105.m128i_i64[1], &v110);
      v106.m128i_i64[1] = v121.m128i_i64[1];
      v33 = v121.m128i_i64[0];
      v111 = v119;
      if ( v119 )
        ++*(_DWORD *)(v119 + 8);
      sub_6DE920(&v123, &v111);
      ++v35;
      v34 = *a3;
    }
    while ( *a3 );
  }
  if ( v106.m128i_i64[1] )
  {
    v40 = *(unsigned int *)(v106.m128i_i64[1] - 4);
    v41 = v106.m128i_i64[1];
  }
  else
  {
    v40 = 0;
    v41 = 0;
  }
  v42 = sub_6E3580(a1, v40, v41);
  v43 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v44 = a1[4];
  v105.m128i_i64[1] = *a1;
  v45 = _mm_loadh_ps((const double *)&v105.m128i_i64[1]);
  v124 = (__m128i)v45;
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  v125 = v45;
  if ( v106.m128i_i64[0] )
    ++*(_DWORD *)(v106.m128i_i64[0] + 8);
  v126 = v45;
  if ( v105.m128i_i64[0] )
    ++*(_DWORD *)(v105.m128i_i64[0] + 8);
  v46 = sub_6E2170(a1, v103, &v124, (__int64)&v127);
  sub_6E1200(a5, v43, v95, &v122, v46, v104, v106.m128i_i64[0], v105.m128i_i64[0]);
  sub_6DE2A0(v105.m128i_i64[0], v105.m128i_i64[1]);
  sub_6DE2A0(v106.m128i_i64[0], v105.m128i_i64[1]);
  sub_6DE2A0(v44, v105.m128i_i64[1]);
  sub_1695230(&v131);
  (**(void (__fastcall ***)(void *))ptr)(ptr);
  sub_186B220(ptr);
  sub_6DE2A0(v130.m128_i64[0], v130.m128_i64[1]);
  sub_6DE2A0(v129.m128_i64[0], v129.m128_i64[1]);
  sub_6DE2A0(v127.m128_i64[0], v127.m128_i64[1]);
  if ( a1[4] == v104 )
    goto LABEL_118;
LABEL_46:
  v47 = sub_6E0F30((__int64)a1);
  v48 = _mm_loadh_ps((const double *)a1);
  v127 = v48;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  v129 = v48;
  v128 = 1;
  if ( v100 )
    ++*(_DWORD *)(v100 + 8);
  v130 = v48;
  if ( v99 )
    ++*(_DWORD *)(v99 + 8);
  v49 = sub_6E0F30((__int64)a1);
  v50 = _mm_loadh_ps((const double *)a1);
  v131 = v50;
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  v132 = -1;
  v133 = v50;
  if ( v100 )
    ++*(_DWORD *)(v100 + 8);
  v134 = v50;
  if ( v99 )
    ++*(_DWORD *)(v99 + 8);
  v121.m128i_i64[0] = v33;
  v121.m128i_i64[1] = v106.m128i_i64[1];
  sub_2FCDE0(v94->m128i_i64);
  sub_2FCDE0(&v122);
  v55 = sub_6E5990((_DWORD)a1, v104, v51, v52, v53, v54);
  v112 = v55;
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  v105.m128i_i64[1] = (__int64)&v121.m128i_i64[1];
  sub_6DE920((unsigned int **)&v121.m128i_i64[1], &v112);
  v106.m128i_i64[1] = v121.m128i_i64[1];
  v56 = sub_6E0F30((__int64)a1);
  v57 = sub_6E1710((__int64)a1, v56);
  v113 = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  sub_6DE920((unsigned int **)v105.m128i_i64[1], &v113);
  v106.m128i_i64[1] = v121.m128i_i64[1];
  if ( v121.m128i_i64[1] )
  {
    v58 = *(unsigned int *)(v121.m128i_i64[1] - 4);
    v59 = v121.m128i_i64[1];
  }
  else
  {
    v58 = 0;
    v59 = 0;
  }
  v60 = sub_6E3580(a1, v58, v59);
  ptra = (void *)v60;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  sub_6DE2C0(v95, v98);
  v61 = *(_QWORD *)(*(_QWORD *)(a5 + 24) + 8 * v92);
  v114 = v61;
  if ( v61 )
    ++*(_DWORD *)(v61 + 8);
  sub_6DE920((unsigned int **)v105.m128i_i64[1], &v114);
  v106.m128i_i64[1] = v121.m128i_i64[1];
  v33 = v121.m128i_i64[0];
  v62 = *a3;
  if ( *a3 )
  {
    v63 = 0;
    do
    {
      if ( v63 >= *(_DWORD *)(v62 - 4) )
        break;
      sub_6E7D60(a1, v103, 16LL * v63 + v62, *(_DWORD *)(*a4 + 4LL * v63), (__int64 *)&v127, &v118);
      v64 = sub_15E1B70(*a1);
      v115 = v64;
      if ( v64 )
        ++*(_DWORD *)(v64 + 8);
      v121.m128i_i64[0] = v33;
      v121.m128i_i64[1] = v106.m128i_i64[1];
      sub_6DE920((unsigned int **)v105.m128i_i64[1], &v115);
      v106.m128i_i64[1] = v121.m128i_i64[1];
      v33 = v121.m128i_i64[0];
      v116 = v118.m128i_i64[0];
      if ( v118.m128i_i64[0] )
        ++*(_DWORD *)(v118.m128i_i64[0] + 8);
      sub_6DE920(&v123, &v116);
      ++v63;
      v62 = *a3;
    }
    while ( *a3 );
  }
  if ( v106.m128i_i64[1] )
  {
    v65 = *(unsigned int *)(v106.m128i_i64[1] - 4);
    v66 = v106.m128i_i64[1];
  }
  else
  {
    v65 = 0;
    v66 = 0;
  }
  v67 = sub_6E3580(a1, v65, v66);
  v93 = v67;
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  sub_6DE2C0(v43, v98);
  v68 = *(double *)a1;
  v69 = (__m128i)(unsigned __int64)*a1;
  v70 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v105), v69);
  v71 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v106), v69);
  v124 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v104, v69);
  if ( v104 )
    ++*(_DWORD *)(v104 + 8);
  v125 = v71;
  if ( v106.m128i_i64[0] )
    ++*(_DWORD *)(v106.m128i_i64[0] + 8);
  v126 = v70;
  if ( v105.m128i_i64[0] )
    ++*(_DWORD *)(v105.m128i_i64[0] + 8);
  v72 = sub_6E2170(a1, v103, &v124, (__int64)&v127);
  sub_6E1200(a5, v93, (__int64)ptra, &v122, v72, v104, v106.m128i_i64[0], v105.m128i_i64[0]);
  sub_6DE2A0(v105.m128i_i64[0], *(__int64 *)&v68);
  sub_6DE2A0(v106.m128i_i64[0], *(__int64 *)&v68);
  sub_6DE2A0(v104, *(__int64 *)&v68);
  if ( v106.m128i_i64[1] )
  {
    v73 = *(unsigned int *)(v106.m128i_i64[1] - 4);
    if ( (unsigned int)v73 > 3 )
    {
      v87 = v106.m128i_i64[1] + 8 * v73;
      v88 = (__int64 *)(v106.m128i_i64[1] + 24);
      if ( v106.m128i_i64[1] + 24 >= v87 )
        goto LABEL_120;
      do
      {
        while ( 1 )
        {
          v89 = *v88;
          if ( *v88 )
          {
            if ( (*(_DWORD *)(v89 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v88 >= v87 )
            goto LABEL_127;
        }
        sub_15D7BC0(v33, v89);
        ++v88;
      }
      while ( (unsigned __int64)v88 < v87 );
LABEL_127:
      v73 = *(unsigned int *)(v106.m128i_i64[1] - 4);
    }
    if ( (unsigned int)v73 <= 2 )
      goto LABEL_89;
LABEL_120:
    *(_DWORD *)(v106.m128i_i64[1] - 4) = 3;
    goto LABEL_94;
  }
  v73 = 0;
LABEL_89:
  v74 = _mm_loadh_ps((const double *)&v106.m128i_i64[1]);
  while ( 1 )
  {
    a9 = _mm_movehl_ps(a9, v74);
    if ( a9.m128_u64[0] )
    {
      if ( *(_DWORD *)(a9.m128_u64[0] - 8) > 2u )
        break;
    }
    v121 = (__m128i)v74;
    sub_23A6F0((unsigned int **)v105.m128i_i64[1]);
    v74 = (__m128)_mm_load_si128(&v121);
    v106.m128i_i64[1] = v121.m128i_i64[1];
    v33 = v121.m128i_i64[0];
  }
  v75 = v106.m128i_i64[1];
  *(_DWORD *)(v106.m128i_i64[1] - 4) = 3;
  memset((void *)(v75 + 8 * v73), 0, 24 - 8 * v73);
LABEL_94:
  sub_2FCDE0(&v122);
  v76 = *a3;
  if ( !*a3 )
    goto LABEL_103;
  v77 = 0;
  do
  {
    if ( v77 >= *(_DWORD *)(v76 - 4) )
      break;
    sub_6E7D60(a1, v103, 16LL * v77 + v76, *(_DWORD *)(*a4 + 4LL * v77), (__int64 *)&v131, &v118);
    v78 = sub_15E1B70(*a1);
    v117 = v78;
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    v121.m128i_i64[0] = v33;
    v121.m128i_i64[1] = v106.m128i_i64[1];
    sub_6DE920((unsigned int **)v105.m128i_i64[1], &v117);
    v106.m128i_i64[1] = v121.m128i_i64[1];
    v33 = v121.m128i_i64[0];
    v124.m128i_i64[0] = v118.m128i_i64[0];
    if ( v118.m128i_i64[0] )
      ++*(_DWORD *)(v118.m128i_i64[0] + 8);
    sub_6DE920(&v123, &v124);
    ++v77;
    v76 = *a3;
  }
  while ( *a3 );
  v79 = 0;
  if ( v106.m128i_i64[1] )
LABEL_103:
    v79 = *(unsigned int *)(v106.m128i_i64[1] - 4);
  v80 = sub_6E3580(a1, v79, v106.m128i_i64[1]);
  v43 = v80;
  if ( v80 )
    ++*(_DWORD *)(v80 + 8);
  sub_6DE2C0(v93, v98);
  v81 = *(double *)a1;
  v82 = (__m128i)(unsigned __int64)*a1;
  v83 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v105), v82);
  v84 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v106), v82);
  v124 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v104, v82);
  if ( v104 )
    ++*(_DWORD *)(v104 + 8);
  v125 = v84;
  if ( v106.m128i_i64[0] )
    ++*(_DWORD *)(v106.m128i_i64[0] + 8);
  v126 = v83;
  if ( v105.m128i_i64[0] )
    ++*(_DWORD *)(v105.m128i_i64[0] + 8);
  v85 = sub_6E2170(a1, v103, &v124, (__int64)&v131);
  sub_6E1200(a5, v43, (__int64)ptra, &v122, v85, v104, v106.m128i_i64[0], v105.m128i_i64[0]);
  sub_6DE2A0(v105.m128i_i64[0], *(__int64 *)&v81);
  sub_6DE2A0(v106.m128i_i64[0], *(__int64 *)&v81);
  sub_6DE2A0(v104, *(__int64 *)&v81);
  sub_6DE2A0(v134.m128_i64[0], v134.m128_i64[1]);
  sub_6DE2A0(v133.m128_i64[0], v133.m128_i64[1]);
  sub_6DE2A0(v131.m128_i64[0], v131.m128_i64[1]);
  sub_6DE2A0(v130.m128_i64[0], v130.m128_i64[1]);
  sub_6DE2A0(v129.m128_i64[0], v129.m128_i64[1]);
  sub_6DE2A0(v127.m128_i64[0], v127.m128_i64[1]);
LABEL_113:
  sub_2334C0(&v122);
  v121.m128i_i64[0] = v33;
  v121.m128i_i64[1] = v106.m128i_i64[1];
  sub_2334C0(v94->m128i_i64);
  sub_6DE2C0(v43, v98);
  sub_6DE2C0(v119, v120);
  sub_6DE2C0((__int64)ptra, v98);
  sub_6DE2A0(v100, v98);
  sub_6DE2A0(v99, v98);
  return sub_6DE2A0(v118.m128i_i64[0], v118.m128i_i64[1]);
}

