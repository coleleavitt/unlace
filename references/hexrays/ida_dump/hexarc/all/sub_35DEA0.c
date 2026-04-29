unsigned __int64 __fastcall sub_35DEA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // r12
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  const __m128i *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i *v13; // rsi
  unsigned __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 j; // rdx
  unsigned __int64 k; // rax
  __m128i *v20; // rbp
  const __m128i *v21; // rdi
  bool v22; // zf
  __int64 v23; // rdi
  __int64 v24; // rbp
  __int64 kk; // rbx
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 mm; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  __m128i v35; // xmm1
  __int64 v36; // rax
  __m128i v37; // xmm3
  __m128i v38; // xmm0
  __m128 v39; // xmm2
  int v40; // r15d
  __int64 v41; // r14
  __m128i v42; // xmm3
  int v43; // ebp
  __m128i v44; // xmm3
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128 v47; // xmm2
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  unsigned __int64 v51; // r14
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 nn; // rdx
  __int64 *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // r8
  __int64 i1; // rcx
  __int64 *v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 i2; // r14
  __int64 *v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 i3; // r14
  __int64 *v72; // rax
  __int64 v73; // rdi
  __int64 v75; // rbx
  __int64 v76; // r14
  int v77; // eax
  int v78; // ecx
  __m128i v79; // xmm3
  __m128i v80; // xmm0
  __m128 v81; // xmm1
  __int64 v82; // rdx
  __m128i v83; // xmm3
  int v84; // eax
  __m128i v85; // xmm2
  __m128i v86; // xmm3
  __m128i v87; // xmm0
  __m128i v88; // xmm0
  __m128i v89; // xmm0
  unsigned __int64 v90; // r15
  __int64 v91; // rsi
  __int64 v92; // r9
  __int64 m; // rdx
  __int64 *v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // r9
  __int64 n; // rcx
  __int64 *v100; // rdx
  __int64 v101; // rdi
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 ii; // rax
  __int64 *v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 jj; // rdx
  __int64 *v111; // rax
  __int64 v112; // rcx
  __m128i v113; // [rsp+0h] [rbp-178h] BYREF
  __int64 v114; // [rsp+10h] [rbp-168h]
  __m128 *v115; // [rsp+18h] [rbp-160h]
  __m128i v116; // [rsp+20h] [rbp-158h] BYREF
  __m128i v117; // [rsp+30h] [rbp-148h] BYREF
  __int64 v118; // [rsp+40h] [rbp-138h]
  __int64 v119; // [rsp+48h] [rbp-130h]
  __m128i v120; // [rsp+50h] [rbp-128h]
  __m128i v121; // [rsp+60h] [rbp-118h]
  __m128i v122; // [rsp+70h] [rbp-108h] BYREF
  __m128i v123; // [rsp+80h] [rbp-F8h] BYREF
  __m128i v124; // [rsp+90h] [rbp-E8h] BYREF
  int v125; // [rsp+A0h] [rbp-D8h]
  int v126; // [rsp+A4h] [rbp-D4h]
  __int64 v127; // [rsp+A8h] [rbp-D0h]
  int v128; // [rsp+B0h] [rbp-C8h]
  int v129; // [rsp+B8h] [rbp-C0h]
  __m128 v130; // [rsp+C0h] [rbp-B8h] BYREF
  __m128i v131; // [rsp+D0h] [rbp-A8h]
  __m128i v132; // [rsp+E0h] [rbp-98h]
  __m128i v133; // [rsp+F0h] [rbp-88h]
  __m128i v134; // [rsp+100h] [rbp-78h]
  __m128i v135; // [rsp+110h] [rbp-68h]
  int v136; // [rsp+120h] [rbp-58h]
  int v137; // [rsp+124h] [rbp-54h]
  __int64 v138; // [rsp+128h] [rbp-50h]
  __int64 v139; // [rsp+130h] [rbp-48h]
  unsigned __int64 v140; // [rsp+138h] [rbp-40h]

  v140 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( a2 - a1 <= 1920 )
    return v140 - __readfsqword(0x28u);
  for ( i = a2; ; i = (__int64)v10 )
  {
    v7 = 0xEEEEEEEEEEEEEEEFLL * (v3 >> 3);
    v8 = v7 >> 1;
    if ( !a3 )
      break;
    v9 = *(_QWORD *)(i - 16);
    --a3;
    v10 = (const __m128i *)(a1 + 120);
    v11 = 15 * v8;
    v12 = *(_QWORD *)(a1 + 224);
    v13 = (__m128i *)(a1 + 8 * v11);
    v14 = v13[6].m128i_u64[1];
    if ( v14 >= v12 )
    {
      if ( v9 < v12 )
      {
LABEL_20:
        sub_35DA90((const __m128i *)a1, (__m128i *)(a1 + 120));
        goto LABEL_8;
      }
      if ( v9 >= v14 )
      {
LABEL_19:
        sub_35DA90((const __m128i *)a1, v13);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v9 < v14 )
        goto LABEL_19;
      if ( v9 >= v12 )
        goto LABEL_20;
    }
    sub_35DA90((const __m128i *)a1, (__m128i *)(i - 120));
LABEL_8:
    for ( j = i; ; j = (__int64)v20 )
    {
      for ( k = *(_QWORD *)(a1 + 104); k < v10[6].m128i_i64[1]; v10 = (const __m128i *)((char *)v10 + 120) )
        ;
      v20 = (__m128i *)(j - 120);
      if ( *(_QWORD *)(j - 16) < k )
      {
        do
          v20 = (__m128i *)((char *)v20 - 120);
        while ( v20[6].m128i_i64[1] < k );
      }
      if ( v10 >= v20 )
        break;
      v21 = v10;
      v10 = (const __m128i *)((char *)v10 + 120);
      sub_35DA90(v21, v20);
    }
    sub_35DEA0(
      (_DWORD)v10,
      i,
      a3,
      v15,
      v16,
      v17,
      v113.m128i_i32[0],
      v113.m128i_i32[2],
      v114,
      (_DWORD)v115,
      v116.m128i_i32[0],
      v116.m128i_i32[2],
      v117.m128i_i32[0],
      v117.m128i_i8[8],
      v118,
      v119,
      v120.m128i_i32[0],
      v120.m128i_i32[2],
      v121.m128i_i32[0],
      v121.m128i_i32[2],
      v122.m128i_i32[0],
      v122.m128i_i32[2],
      v123.m128i_i32[0],
      v123.m128i_i32[2],
      v124.m128i_i32[0],
      v124.m128i_i32[2],
      v125,
      v127,
      v128,
      v129,
      v130.m128_i32[0],
      v130.m128_i32[2],
      v131.m128i_i32[0],
      v131.m128i_i32[2],
      v132.m128i_i32[0],
      v132.m128i_i32[2],
      v133.m128i_i32[0],
      v133.m128i_i32[2],
      v134.m128i_i32[0],
      v134.m128i_i32[2],
      v135.m128i_i32[0],
      v135.m128i_i32[2],
      v136,
      v138,
      v139);
    v3 = (__int64)v10->m128i_i64 - a1;
    if ( (__int64)v10->m128i_i64 - a1 <= 1920 )
      return v140 - __readfsqword(0x28u);
  }
  v113.m128i_i64[0] = v8 - 1;
  v75 = a1 + 120 * v8;
  v115 = &v130;
  while ( 1 )
  {
    v76 = *(_QWORD *)(v75 - 120);
    v118 = v76;
    if ( v76 )
      ++*(_DWORD *)(v76 + 104);
    v77 = *(_DWORD *)(v75 - 24);
    v78 = *(_DWORD *)(v75 - 20);
    v79 = _mm_loadu_si128((const __m128i *)(v75 - 72));
    v80 = _mm_loadu_si128((const __m128i *)(v75 - 88));
    v81 = _mm_loadh_ps((const double *)(v75 - 112));
    *(_QWORD *)(v75 - 112) = 0;
    v82 = *(_QWORD *)(v75 - 16);
    v125 = v77;
    v122 = v79;
    v83 = _mm_loadu_si128((const __m128i *)(v75 - 56));
    v84 = *(_DWORD *)(v75 - 8);
    v85 = _mm_loadu_si128((const __m128i *)(v75 - 104));
    v126 = v78;
    v123 = v83;
    v86 = _mm_loadu_si128((const __m128i *)(v75 - 40));
    v127 = v82;
    v128 = v84;
    *(_OWORD *)(v75 - 104) = 0;
    v121 = v80;
    v124 = v86;
    if ( v76 )
      ++*(_DWORD *)(v76 + 104);
    v132 = v80;
    v87 = _mm_load_si128(&v122);
    v137 = v78;
    v133 = v87;
    v88 = _mm_load_si128(&v123);
    v136 = v125;
    v134 = v88;
    v89 = _mm_load_si128(&v124);
    v138 = v82;
    v119 = 0;
    LODWORD(v139) = v84;
    v120 = 0;
    v131 = v85;
    v135 = v89;
    v130 = v81;
    sub_357700(a1, v113.m128i_i64[0], v7, (__int64)v115);
    v90 = v130.m128_u64[0];
    if ( v130.m128_u64[1] )
      qfree(v130.m128_u64[1]);
    if ( v90 )
    {
      v22 = (*(_DWORD *)(v90 + 104))-- == 1;
      if ( v22 )
      {
        sub_2515F0((__int64 *)v90);
        v91 = *(_QWORD *)(v90 + 184);
        if ( v91 )
        {
          v92 = *(_QWORD *)(v90 + 192);
          if ( v92 )
          {
            for ( m = 0; m != v92; ++m )
            {
              v94 = (__int64 *)(v91 + 24 * m);
              v95 = *v94;
              if ( *v94 )
              {
                v94[1] = 0;
                v117.m128i_i64[0] = m;
                v116.m128i_i64[0] = v92;
                qfree(v95);
                m = v117.m128i_i64[0];
                v92 = v116.m128i_i64[0];
                v91 = *(_QWORD *)(v90 + 184);
              }
            }
          }
          *(_QWORD *)(v90 + 192) = 0;
          qfree(v91);
        }
        v96 = *(_QWORD *)(v90 + 160);
        if ( v96 )
        {
          *(_QWORD *)(v90 + 168) = 0;
          qfree(v96);
        }
        v97 = *(_QWORD *)(v90 + 128);
        if ( v97 )
        {
          v98 = *(_QWORD *)(v90 + 136);
          if ( v98 )
          {
            for ( n = 0; n != v98; ++n )
            {
              v100 = (__int64 *)(v97 + 32 * n);
              v101 = *v100;
              if ( *v100 )
              {
                v100[1] = 0;
                v117.m128i_i64[0] = n;
                v116.m128i_i64[0] = v98;
                qfree(v101);
                n = v117.m128i_i64[0];
                v98 = v116.m128i_i64[0];
                v97 = *(_QWORD *)(v90 + 128);
              }
            }
          }
          *(_QWORD *)(v90 + 136) = 0;
          qfree(v97);
        }
        sub_24DCD0(v90 + 16);
        j__qfree(v90);
      }
    }
    if ( !v113.m128i_i64[0] )
      break;
    --v113.m128i_i64[0];
    if ( v76 )
    {
      v22 = (*(_DWORD *)(v76 + 104))-- == 1;
      if ( v22 )
      {
        sub_2515F0((__int64 *)v76);
        v102 = *(_QWORD *)(v76 + 184);
        if ( v102 )
        {
          v103 = *(_QWORD *)(v76 + 192);
          if ( v103 )
          {
            for ( ii = 0; ii != v103; ++ii )
            {
              v105 = (__int64 *)(v102 + 24 * ii);
              v106 = *v105;
              if ( *v105 )
              {
                v105[1] = 0;
                v117.m128i_i64[0] = ii;
                v116.m128i_i64[0] = v103;
                qfree(v106);
                ii = v117.m128i_i64[0];
                v102 = *(_QWORD *)(v76 + 184);
              }
            }
          }
          *(_QWORD *)(v76 + 192) = 0;
          qfree(v102);
        }
        v107 = *(_QWORD *)(v76 + 160);
        if ( v107 )
        {
          *(_QWORD *)(v76 + 168) = 0;
          qfree(v107);
        }
        v108 = *(_QWORD *)(v76 + 128);
        if ( v108 )
        {
          v109 = *(_QWORD *)(v76 + 136);
          if ( v109 )
          {
            for ( jj = 0; jj != v109; ++jj )
            {
              v111 = (__int64 *)(v108 + 32 * jj);
              v112 = *v111;
              if ( *v111 )
              {
                v111[1] = 0;
                v117.m128i_i64[0] = v109;
                v116.m128i_i64[0] = jj;
                qfree(v112);
                jj = v116.m128i_i64[0];
                v108 = *(_QWORD *)(v76 + 128);
              }
            }
          }
          *(_QWORD *)(v76 + 136) = 0;
          qfree(v108);
        }
        sub_24DCD0(v76 + 16);
        j__qfree(v76);
      }
    }
    v75 -= 120;
  }
  if ( v76 )
  {
    v22 = (*(_DWORD *)(v76 + 104))-- == 1;
    if ( v22 )
    {
      sub_2515F0((__int64 *)v76);
      v23 = *(_QWORD *)(v76 + 184);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v76 + 192);
        if ( v24 )
        {
          for ( kk = 0; kk != v24; ++kk )
          {
            v26 = (__int64 *)(v23 + 24 * kk);
            v27 = *v26;
            if ( *v26 )
            {
              v26[1] = 0;
              qfree(v27);
              v23 = *(_QWORD *)(v76 + 184);
            }
          }
        }
        *(_QWORD *)(v76 + 192) = 0;
        qfree(v23);
      }
      v28 = *(_QWORD *)(v76 + 160);
      if ( v28 )
      {
        *(_QWORD *)(v76 + 168) = 0;
        qfree(v28);
      }
      v29 = *(_QWORD *)(v76 + 128);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v76 + 136);
        if ( v30 )
        {
          for ( mm = 0; mm != v30; ++mm )
          {
            v32 = (__int64 *)(v29 + 32 * mm);
            v33 = *v32;
            if ( *v32 )
            {
              v32[1] = 0;
              qfree(v33);
              v29 = *(_QWORD *)(v76 + 128);
            }
          }
        }
        *(_QWORD *)(v76 + 136) = 0;
        qfree(v29);
      }
      sub_24DCD0(v76 + 16);
      j__qfree(v76);
    }
  }
  while ( i - a1 > 120 )
  {
    v34 = *(_QWORD *)(i - 120);
    i -= 120;
    v118 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 104);
    v35 = _mm_loadu_si128((const __m128i *)(i + 16));
    v36 = *(_QWORD *)(i + 8);
    *(_OWORD *)(i + 16) = 0;
    v37 = _mm_loadu_si128((const __m128i *)(i + 48));
    v38 = _mm_loadu_si128((const __m128i *)(i + 32));
    v39 = _mm_loadh_ps((const double *)(i + 8));
    v119 = v36;
    v40 = *(_DWORD *)(i + 100);
    v122 = v37;
    LODWORD(v36) = *(_DWORD *)(i + 96);
    v41 = *(_QWORD *)(i + 104);
    v42 = _mm_loadu_si128((const __m128i *)(i + 64));
    v43 = *(_DWORD *)(i + 112);
    *(_QWORD *)(i + 8) = 0;
    v125 = v36;
    v123 = v42;
    v44 = _mm_loadu_si128((const __m128i *)(i + 80));
    v126 = v40;
    v127 = v41;
    v128 = v43;
    v117 = (__m128i)v39;
    v120 = v35;
    v116 = v35;
    v121 = v38;
    v113 = v38;
    v124 = v44;
    sub_356CC0(i, (const __m128i *)a1);
    v45 = _mm_load_si128(&v113);
    v46 = _mm_load_si128(&v116);
    v47 = (__m128)_mm_load_si128(&v117);
    if ( v34 )
      ++*(_DWORD *)(v34 + 104);
    LODWORD(v139) = v43;
    v120 = 0;
    v132 = v45;
    v48 = _mm_load_si128(&v122);
    v137 = v40;
    v136 = v125;
    v133 = v48;
    v49 = _mm_load_si128(&v123);
    v119 = 0;
    v134 = v49;
    v50 = _mm_load_si128(&v124);
    v138 = v41;
    v131 = v46;
    v135 = v50;
    v130 = v47;
    sub_357700(a1, 0, 0xEEEEEEEEEEEEEEEFLL * ((i - a1) >> 3), (__int64)v115);
    v51 = v130.m128_u64[0];
    if ( v130.m128_u64[1] )
      qfree(v130.m128_u64[1]);
    if ( v51 )
    {
      v22 = (*(_DWORD *)(v51 + 104))-- == 1;
      if ( v22 )
      {
        sub_2515F0((__int64 *)v51);
        v52 = *(_QWORD *)(v51 + 184);
        if ( v52 )
        {
          v53 = *(_QWORD *)(v51 + 192);
          if ( v53 )
          {
            for ( nn = 0; nn != v53; ++nn )
            {
              v55 = (__int64 *)(v52 + 24 * nn);
              v56 = *v55;
              if ( *v55 )
              {
                v55[1] = 0;
                v116.m128i_i64[0] = nn;
                v113.m128i_i64[0] = v53;
                qfree(v56);
                v52 = *(_QWORD *)(v51 + 184);
                nn = v116.m128i_i64[0];
                v53 = v113.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v51 + 192) = 0;
          qfree(v52);
        }
        v57 = *(_QWORD *)(v51 + 160);
        if ( v57 )
        {
          *(_QWORD *)(v51 + 168) = 0;
          qfree(v57);
        }
        v58 = *(_QWORD *)(v51 + 128);
        if ( v58 )
        {
          v59 = *(_QWORD *)(v51 + 136);
          if ( v59 )
          {
            for ( i1 = 0; i1 != v59; ++i1 )
            {
              v61 = (__int64 *)(v58 + 32 * i1);
              v62 = *v61;
              if ( *v61 )
              {
                v61[1] = 0;
                v116.m128i_i64[0] = i1;
                v113.m128i_i64[0] = v59;
                qfree(v62);
                v58 = *(_QWORD *)(v51 + 128);
                i1 = v116.m128i_i64[0];
                v59 = v113.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v51 + 136) = 0;
          qfree(v58);
        }
        sub_24DCD0(v51 + 16);
        j__qfree(v51);
      }
    }
    if ( v34 )
    {
      v22 = (*(_DWORD *)(v34 + 104))-- == 1;
      if ( v22 )
      {
        sub_2515F0((__int64 *)v34);
        v63 = *(_QWORD *)(v34 + 184);
        if ( v63 )
        {
          v64 = *(_QWORD *)(v34 + 192);
          if ( v64 )
          {
            for ( i2 = 0; i2 != v64; ++i2 )
            {
              v66 = (__int64 *)(v63 + 24 * i2);
              v67 = *v66;
              if ( *v66 )
              {
                v66[1] = 0;
                v113.m128i_i64[0] = v64;
                qfree(v67);
                v63 = *(_QWORD *)(v34 + 184);
                v64 = v113.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v34 + 192) = 0;
          qfree(v63);
        }
        v68 = *(_QWORD *)(v34 + 160);
        if ( v68 )
        {
          *(_QWORD *)(v34 + 168) = 0;
          qfree(v68);
        }
        v69 = *(_QWORD *)(v34 + 128);
        if ( v69 )
        {
          v70 = *(_QWORD *)(v34 + 136);
          if ( v70 )
          {
            for ( i3 = 0; i3 != v70; ++i3 )
            {
              v72 = (__int64 *)(v69 + 32 * i3);
              v73 = *v72;
              if ( *v72 )
              {
                v72[1] = 0;
                v113.m128i_i64[0] = v70;
                qfree(v73);
                v69 = *(_QWORD *)(v34 + 128);
                v70 = v113.m128i_i64[0];
              }
            }
          }
          *(_QWORD *)(v34 + 136) = 0;
          qfree(v69);
        }
        sub_24DCD0(v34 + 16);
        j__qfree(v34);
      }
    }
  }
  return v140 - __readfsqword(0x28u);
}
