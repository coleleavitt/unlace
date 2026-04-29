__int64 __fastcall sub_3FD40(__int64 a1, __int64 *a2, __int64 *a3, double a4, __m128i a5, __m128i a6, __m128i a7)
{
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // r13
  char *v12; // r12
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rdi
  __m128i v17; // xmm0
  const __m128i *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 k; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  __int64 v41; // rbp
  __int64 i; // r15
  __int64 v43; // r13
  __int64 v44; // rsi
  bool v45; // al
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // r12
  const __m128i *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __m128i v52; // xmm0
  bool v53; // cf
  char *v54; // r14
  char *v55; // rbx
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int8 v59; // dl
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // r13
  const __m128i *v65; // rdi
  __int64 v66; // rdx
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // rbp
  __int64 v70; // rbx
  __int64 v71; // r14
  __int64 v72; // rbx
  __int64 v73; // r15
  __int64 v74; // rax
  unsigned __int64 v75; // rbx
  __int64 v76; // r13
  __int64 v77; // r12
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // r10
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // r10
  __int64 v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rbp
  __int64 v87; // rax
  __int64 v88; // r12
  __int64 v89; // rbp
  __int64 v90; // rbx
  __m128i v91; // xmm0
  int v92; // eax
  __int64 v93; // rax
  __m128i v94; // xmm0
  __int64 v95; // rdi
  __m128i v96; // xmm0
  __m128i v97; // xmm1
  __int64 v98; // rax
  const __m128i *v99; // rax
  __m128i v100; // xmm1
  __m128i v101; // xmm0
  __int64 v102; // rax
  __m128i v103; // xmm0
  __int64 v104; // rbp
  __int64 v105; // rbx
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r12
  const __m128i *v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __m128i v115; // xmm0
  char v116; // [rsp+0h] [rbp-2B0h]
  __int64 j; // [rsp+0h] [rbp-2B0h]
  __int64 v118; // [rsp+8h] [rbp-2A8h]
  __int64 v119; // [rsp+8h] [rbp-2A8h]
  __int64 v120; // [rsp+8h] [rbp-2A8h]
  __int64 v121; // [rsp+8h] [rbp-2A8h]
  __int64 v122; // [rsp+10h] [rbp-2A0h]
  __int64 v123; // [rsp+18h] [rbp-298h]
  __int64 v125; // [rsp+38h] [rbp-278h]
  __int64 v126; // [rsp+40h] [rbp-270h]
  char *v127; // [rsp+48h] [rbp-268h]
  __int64 v128; // [rsp+50h] [rbp-260h]
  __int64 v129; // [rsp+58h] [rbp-258h] BYREF
  __m128i v130; // [rsp+60h] [rbp-250h] BYREF
  char v131; // [rsp+70h] [rbp-240h]
  char v132; // [rsp+78h] [rbp-238h]
  __int64 v133; // [rsp+80h] [rbp-230h]
  const __m128i *v134; // [rsp+88h] [rbp-228h] BYREF
  __m128i v135; // [rsp+90h] [rbp-220h] BYREF
  const __m128i *v136; // [rsp+A0h] [rbp-210h] BYREF
  __m128i v137; // [rsp+A8h] [rbp-208h] BYREF
  const __m128i *v138; // [rsp+B8h] [rbp-1F8h] BYREF
  __m128i v139; // [rsp+C0h] [rbp-1F0h] BYREF
  char v140; // [rsp+D0h] [rbp-1E0h]
  __m128i v141; // [rsp+D8h] [rbp-1D8h] BYREF
  __m128i v142; // [rsp+E8h] [rbp-1C8h] BYREF
  _BYTE v143[12]; // [rsp+F8h] [rbp-1B8h]
  __int64 v144; // [rsp+108h] [rbp-1A8h] BYREF
  __int8 v145; // [rsp+110h] [rbp-1A0h]
  __int64 v146; // [rsp+114h] [rbp-19Ch]
  __m128i v147; // [rsp+120h] [rbp-190h] BYREF
  __m128i v148; // [rsp+130h] [rbp-180h] BYREF
  __m128i v149; // [rsp+140h] [rbp-170h] BYREF
  __int64 v150; // [rsp+150h] [rbp-160h]
  __m128i v151; // [rsp+158h] [rbp-158h] BYREF
  char *v152; // [rsp+168h] [rbp-148h]
  __m128i v153; // [rsp+170h] [rbp-140h] BYREF
  __int64 v154; // [rsp+180h] [rbp-130h]
  __int64 v155; // [rsp+188h] [rbp-128h]
  __m128i v156; // [rsp+190h] [rbp-120h] BYREF
  __int64 v157; // [rsp+1A0h] [rbp-110h]
  __m128i v158; // [rsp+1A8h] [rbp-108h] BYREF
  __int64 v159; // [rsp+1B8h] [rbp-F8h]
  __m128i v160; // [rsp+1C0h] [rbp-F0h] BYREF
  __m128i v161; // [rsp+1D0h] [rbp-E0h] BYREF
  __m128i v162; // [rsp+1E0h] [rbp-D0h] BYREF
  __m128i v163; // [rsp+1F0h] [rbp-C0h] BYREF
  __int64 v164; // [rsp+200h] [rbp-B0h]
  __m128i v165; // [rsp+208h] [rbp-A8h] BYREF
  char *v166; // [rsp+218h] [rbp-98h]
  __m128i v167; // [rsp+220h] [rbp-90h] BYREF
  __int64 v168; // [rsp+230h] [rbp-80h]
  __int64 v169; // [rsp+238h] [rbp-78h]
  __m128i v170; // [rsp+240h] [rbp-70h] BYREF
  __int64 v171; // [rsp+250h] [rbp-60h]
  __m128i v172; // [rsp+258h] [rbp-58h] BYREF
  char v173; // [rsp+268h] [rbp-48h]
  unsigned __int64 v174; // [rsp+270h] [rbp-40h]

  v174 = __readfsqword(0x28u);
  v140 = 0;
  v134 = nullptr;
  v136 = nullptr;
  v138 = nullptr;
  v141.m128i_i32[0] = 0;
  v142.m128i_i8[0] = 0;
  v9 = a3[2];
  v142.m128i_i32[2] = 0;
  v143[0] = 0;
  v133 = v9;
  *(_QWORD *)&v143[4] = 0;
  v132 = 4;
  v135 = 0;
  v137 = 0;
  v139 = 0;
  v144 = v9;
  v154 = v9;
  v145 = 0;
  BYTE4(v146) = 0;
  v147.m128i_i8[8] = 0;
  v148.m128i_i8[8] = 0;
  v149.m128i_i8[8] = 0;
  BYTE4(v150) = 0;
  v151.m128i_i8[8] = 0;
  v152 = nullptr;
  v155 = 0;
  v157 = 0;
  v153 = 0;
  v156 = 0;
  v158 = 0;
  sub_3DB00(
    (__int64)&v129,
    a3,
    (__int64)&v144,
    0.0,
    *(double *)a5.m128i_i64,
    *(double *)a6.m128i_i64,
    *(double *)a7.m128i_i64);
  if ( v131 || (sub_3FA70((__int64)&v129, (__int64)a3, (__int64)&v144, 0.0, a5, a6, a7), v131) )
  {
    v10 = _mm_loadu_si128(&v130);
    v173 = 1;
    v159 = v129;
    v160 = v10;
    if ( v157 )
      qfree(v157);
    v11 = v155;
    v12 = v152;
    v116 = v173;
    if ( v155 )
    {
      v13 = v156.m128i_i64[0];
      v14 = v155;
      v15 = 0;
      if ( v156.m128i_i64[0] )
      {
        do
        {
          v16 = *(_QWORD *)(v14 + 40);
          if ( v16 )
          {
            *(_QWORD *)(v14 + 48) = 0;
            qfree(v16);
          }
          ++v15;
          v14 += 64;
        }
        while ( v13 != v15 );
      }
      qfree(v11);
    }
    if ( v12 )
      qfree(v12);
    if ( v116 )
    {
      v17 = _mm_loadu_si128(&v160);
      *(_QWORD *)a1 = v159;
      *(_BYTE *)(a1 + 144) = 1;
      *(__m128i *)(a1 + 8) = v17;
      goto LABEL_15;
    }
  }
  else
  {
    v28 = _mm_loadu_si128(&v147);
    v159 = v144;
    v161 = v28;
    v29 = _mm_loadu_si128(&v148);
    v160.m128i_i8[0] = v145;
    v162 = v29;
    v30 = _mm_loadu_si128(&v149);
    *(__int64 *)((char *)v160.m128i_i64 + 4) = v146;
    v163 = v30;
    v31 = _mm_load_si128(&v151);
    v164 = v150;
    v165 = v31;
    v32 = _mm_loadu_si128(&v153);
    v166 = v152;
    v167 = v32;
    v33 = _mm_loadu_si128(&v156);
    v168 = v154;
    v170 = v33;
    v34 = _mm_load_si128(&v158);
    v169 = v155;
    v172 = v34;
    v171 = v157;
  }
  v35 = _mm_loadu_si128(&v161);
  v146 = *(__int64 *)((char *)v160.m128i_i64 + 4);
  v147 = v35;
  v127 = v166;
  v148 = _mm_loadu_si128(&v162);
  v36 = _mm_loadu_si128(&v163);
  v152 = v166;
  v149 = v36;
  v37 = _mm_load_si128(&v165);
  v144 = v159;
  v151 = v37;
  v38 = _mm_loadu_si128(&v167);
  v150 = v164;
  v125 = v169;
  v155 = v169;
  v118 = v38.m128i_i64[0];
  v153 = v38;
  v39 = _mm_loadu_si128(&v170);
  v145 = v160.m128i_i8[0];
  v128 = v39.m128i_i64[0];
  v156 = v39;
  v154 = v168;
  v126 = v171;
  v157 = v171;
  v40 = _mm_load_si128(&v172);
  v143[0] = v160.m128i_i8[0];
  v158 = v40;
  if ( v160.m128i_i8[8] )
    *(_DWORD *)&v143[4] = v146;
  if ( BYTE4(v150) )
    *(_DWORD *)&v143[8] = v150;
  v41 = v171 + 16 * v40.m128i_i64[0];
  for ( i = v171; v41 != i; v140 |= v45 )
  {
    v47 = v139.m128i_i64[1];
    v46 = v139.m128i_i64[0];
    if ( v139.m128i_i64[1] >= (unsigned __int64)(v139.m128i_i64[0] + 1) )
    {
      v43 = (__int64)v138;
    }
    else
    {
      v43 = qvector_reserve(&v138, 0, v139.m128i_i64[0] + 1, 16);
      v48 = v139.m128i_i64[1];
      v139.m128i_i64[1] = v47;
      v49 = v138;
      v50 = v139.m128i_i64[0] - 1;
      if ( v139.m128i_i64[0] - 1 >= 0 )
      {
        v51 = v43;
        do
        {
          v52 = _mm_loadu_si128(v49);
          v51 += 16;
          ++v49;
          *(__m128i *)(v51 - 16) = v52;
          v53 = v50-- == 0;
        }
        while ( !v53 );
        v49 = v138;
      }
      qfree(v49);
      v138 = (const __m128i *)v43;
      v46 = v139.m128i_i64[0];
      v139.m128i_i64[1] = v48;
    }
    v44 = v43 + 16 * v46;
    *(_QWORD *)v44 = -1;
    *(_DWORD *)(v44 + 8) = -2;
    ++v139.m128i_i64[0];
    *(_QWORD *)v44 = *(_QWORD *)i;
    *(_DWORD *)(v44 + 8) = *(_DWORD *)(i + 8);
    v45 = sub_3D7C0(a2, (__int64 *)v44);
    i += 16;
  }
  v54 = v127;
  v55 = &v127[40 * v118];
  if ( v55 != v127 )
  {
    do
    {
      v62 = v135.m128i_i64[1];
      v61 = v135.m128i_i64[0];
      if ( v135.m128i_i64[1] >= (unsigned __int64)(v135.m128i_i64[0] + 1) )
      {
        v56 = (__int64)v134;
      }
      else
      {
        v63 = qvector_reserve(&v134, 0, v135.m128i_i64[0] + 1, 32);
        v64 = v135.m128i_i64[1];
        v56 = v63;
        v135.m128i_i64[1] = v62;
        v65 = v134;
        v66 = v135.m128i_i64[0] - 1;
        if ( v135.m128i_i64[0] - 1 >= 0 )
        {
          do
          {
            v67 = _mm_loadu_si128(v65);
            v63 += 32;
            v65 += 2;
            *(__m128i *)(v63 - 32) = v67;
            *(__m128i *)(v63 - 16) = _mm_loadu_si128(v65 - 1);
            v53 = v66-- == 0;
          }
          while ( !v53 );
          v65 = v134;
        }
        qfree(v65);
        v134 = (const __m128i *)v56;
        v61 = v135.m128i_i64[0];
        v135.m128i_i64[1] = v64;
      }
      v57 = v56 + 32 * v61;
      *(_QWORD *)(v57 + 4) = 0xFFFFFFFEFFFFFFFELL;
      *(_BYTE *)v57 = 0;
      *(_QWORD *)(v57 + 16) = -1;
      *(_BYTE *)(v57 + 28) = 0;
      ++v135.m128i_i64[0];
      *(_DWORD *)(v57 + 4) = *((_DWORD *)v54 + 1);
      *(_DWORD *)(v57 + 8) = *((_DWORD *)v54 + 2);
      v58 = -1;
      if ( v54[24] )
        v58 = *((_QWORD *)v54 + 2);
      *(_QWORD *)(v57 + 16) = v58;
      v59 = *v54;
      if ( *v54 == 2 )
      {
        *(_BYTE *)v57 = 2;
      }
      else if ( v59 > 2u )
      {
        if ( v59 == 3 )
          *(_BYTE *)v57 = 3;
      }
      else
      {
        *(_BYTE *)v57 = v59 != 0;
      }
      v60 = *((_QWORD *)v54 + 4);
      v54 += 40;
      *(_QWORD *)(v57 + 24) = v60;
    }
    while ( v55 != v54 );
  }
  v122 = v125;
  v123 = v125 + (v128 << 6);
  if ( v123 != v125 )
  {
    do
    {
      v69 = v137.m128i_i64[1];
      v68 = v137.m128i_i64[0];
      if ( v137.m128i_i64[1] < (unsigned __int64)(v137.m128i_i64[0] + 1) )
      {
        v109 = qvector_reserve(&v136, 0, v137.m128i_i64[0] + 1, 40);
        v110 = v137.m128i_i64[1];
        v70 = v109;
        v137.m128i_i64[1] = v69;
        v111 = v136;
        v112 = v137.m128i_i64[0] - 1;
        if ( v137.m128i_i64[0] - 1 >= 0 )
        {
          do
          {
            v113 = v111->m128i_i64[0];
            v109 += 40;
            v111 = (const __m128i *)((char *)v111 + 40);
            *(_QWORD *)(v109 - 40) = v113;
            *(_DWORD *)(v109 - 32) = v111[-2].m128i_i32[0];
            v114 = v111[-2].m128i_i64[1];
            v115 = _mm_loadu_si128(v111 - 1);
            v111[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v109 - 24) = v114;
            *(__m128i *)(v109 - 16) = v115;
            v111[-1] = 0;
            v53 = v112-- == 0;
          }
          while ( !v53 );
          v111 = v136;
        }
        qfree(v111);
        v136 = (const __m128i *)v70;
        v68 = v137.m128i_i64[0];
        v137.m128i_i64[1] = v110;
      }
      else
      {
        v70 = (__int64)v136;
      }
      v71 = v70 + 40 * v68;
      *(_DWORD *)(v71 + 8) = -3;
      *(_QWORD *)v71 = 0xFFFFFFFEFFFFFFFFLL;
      *(_QWORD *)(v71 + 16) = 0;
      *(_OWORD *)(v71 + 24) = 0;
      ++v137.m128i_i64[0];
      *(_DWORD *)v71 = *(_DWORD *)(v122 + 8);
      *(_DWORD *)(v71 + 4) = *(_DWORD *)(v122 + 12);
      *(_DWORD *)(v71 + 8) = *(_DWORD *)(v122 + 16);
      v72 = 80LL * *(_QWORD *)(v122 + 48);
      v73 = *(_QWORD *)(v122 + 40);
      for ( j = v73 + v72; j != v73; v73 += 80 )
      {
        v74 = *(_QWORD *)(v71 + 24);
        v75 = *(_QWORD *)(v71 + 32);
        if ( v75 < v74 + 1 )
        {
          v76 = qvector_reserve(v71 + 16, 0, v74 + 1, 72);
          v86 = *(_QWORD *)(v71 + 24);
          v87 = *(_QWORD *)(v71 + 32);
          *(_QWORD *)(v71 + 32) = v75;
          v88 = *(_QWORD *)(v71 + 16);
          v119 = v87;
          v89 = v86 - 1;
          if ( v89 >= 0 )
          {
            v90 = v76;
            do
            {
              v91 = _mm_loadu_si128((const __m128i *)(v88 + 8));
              *(_BYTE *)v90 = *(_BYTE *)v88;
              v92 = *(_DWORD *)(v88 + 24);
              *(__m128i *)(v90 + 8) = v91;
              *(_DWORD *)(v90 + 24) = v92;
              *(_BYTE *)(v90 + 28) = *(_BYTE *)(v88 + 28);
              v93 = *(_QWORD *)(v88 + 32);
              *(_QWORD *)(v88 + 32) = 0;
              v94 = _mm_loadu_si128((const __m128i *)(v88 + 40));
              *(_QWORD *)(v90 + 32) = v93;
              *(__m128i *)(v90 + 40) = v94;
              LODWORD(v93) = *(_DWORD *)(v88 + 56);
              *(_QWORD *)(v88 + 48) = 0;
              *(_DWORD *)(v90 + 56) = v93;
              *(_DWORD *)(v90 + 60) = *(_DWORD *)(v88 + 60);
              *(_BYTE *)(v90 + 64) = *(_BYTE *)(v88 + 64);
              v95 = *(_QWORD *)(v88 + 32);
              if ( v95 )
              {
                *(_QWORD *)(v88 + 40) = 0;
                qfree(v95);
              }
              v88 += 72;
              v90 += 72;
              v53 = v89-- == 0;
            }
            while ( !v53 );
            v88 = *(_QWORD *)(v71 + 16);
          }
          qfree(v88);
          *(_QWORD *)(v71 + 16) = v76;
          *(_QWORD *)(v71 + 32) = v119;
          v74 = *(_QWORD *)(v71 + 24);
        }
        else
        {
          v76 = *(_QWORD *)(v71 + 16);
        }
        v77 = v76 + 72 * v74;
        *(_BYTE *)v77 = -1;
        *(_BYTE *)(v77 + 64) = 0;
        *(_OWORD *)(v77 + 8) = -1;
        *(_DWORD *)(v77 + 24) = 0;
        *(_BYTE *)(v77 + 28) = 1;
        *(_QWORD *)(v77 + 32) = 0;
        *(_QWORD *)(v77 + 56) = 0;
        *(_OWORD *)(v77 + 40) = 0;
        ++*(_QWORD *)(v71 + 24);
        *(_BYTE *)v77 = 4;
        *(_QWORD *)(v77 + 8) = *(_QWORD *)(v73 + 48);
        *(_BYTE *)(v77 + 64) = *(_BYTE *)(v73 + 8);
        v78 = -1;
        if ( *(_BYTE *)(v73 + 32) )
          v78 = *(_QWORD *)(v73 + 24);
        *(_QWORD *)(v77 + 16) = v78;
        v79 = 0;
        if ( *(_BYTE *)(v73 + 44) )
          v79 = *(_DWORD *)(v73 + 40);
        *(_DWORD *)(v77 + 24) = v79;
        if ( (*(_BYTE *)(v73 + 8) & 0x30) != 0 )
        {
          *(_BYTE *)(v77 + 28) = 0;
          v80 = *(_QWORD *)(v73 + 64);
          if ( v80 != -1 )
          {
            v81 = *(_QWORD *)(v77 + 40);
            v82 = *(_QWORD *)(v77 + 32);
            if ( *(_QWORD *)(v77 + 48) < (unsigned __int64)(v81 + 1) )
            {
              v120 = *(_QWORD *)(v73 + 64);
              v107 = qvector_reserve(v77 + 32, v82, v81 + 1, 8);
              *(_QWORD *)(v77 + 32) = v107;
              v82 = v107;
              v80 = v120;
              v81 = *(_QWORD *)(v77 + 40);
            }
            *(_QWORD *)(v82 + 8 * v81) = v80;
            ++*(_QWORD *)(v77 + 40);
          }
          v83 = *(_QWORD *)(v73 + 72);
          if ( v83 != -1 )
          {
            v84 = *(_QWORD *)(v77 + 40);
            v85 = *(_QWORD *)(v77 + 32);
            if ( *(_QWORD *)(v77 + 48) < (unsigned __int64)(v84 + 1) )
            {
              v121 = *(_QWORD *)(v73 + 72);
              v108 = qvector_reserve(v77 + 32, v85, v84 + 1, 8);
              *(_QWORD *)(v77 + 32) = v108;
              v85 = v108;
              v83 = v121;
              v84 = *(_QWORD *)(v77 + 40);
            }
            *(_QWORD *)(v85 + 8 * v84) = v83;
            ++*(_QWORD *)(v77 + 40);
          }
        }
        else
        {
          *(_BYTE *)(v77 + 28) = 1;
        }
        if ( *(_BYTE *)(v73 + 16) )
          *(_DWORD *)(v77 + 56) = *(_DWORD *)(v73 + 12);
      }
      v122 += 64;
    }
    while ( v123 != v122 );
  }
  v96 = _mm_loadu_si128(&v135);
  v97 = _mm_load_si128(&v137);
  *(_BYTE *)a1 = v132;
  v98 = v133;
  *(__m128i *)(a1 + 24) = v96;
  *(_QWORD *)(a1 + 8) = v98;
  v135 = 0;
  *(_QWORD *)(a1 + 16) = v134;
  v99 = v136;
  *(__m128i *)(a1 + 48) = v97;
  v100 = _mm_loadu_si128(&v139);
  *(_QWORD *)(a1 + 40) = v99;
  v137 = 0;
  *(_QWORD *)(a1 + 64) = v138;
  v139 = 0;
  v101 = _mm_load_si128(&v141);
  *(_BYTE *)(a1 + 88) = v140;
  v102 = *(_QWORD *)v143;
  *(__m128i *)(a1 + 96) = v101;
  v103 = _mm_load_si128(&v142);
  *(_QWORD *)(a1 + 128) = v102;
  LODWORD(v102) = *(_DWORD *)&v143[8];
  v134 = nullptr;
  v136 = nullptr;
  v138 = nullptr;
  *(__m128i *)(a1 + 72) = v100;
  *(__m128i *)(a1 + 112) = v103;
  *(_DWORD *)(a1 + 136) = v102;
  *(_BYTE *)(a1 + 144) = 0;
  if ( v126 )
    qfree(v126);
  if ( v125 )
  {
    v104 = 0;
    v105 = v125;
    if ( v128 )
    {
      do
      {
        v106 = *(_QWORD *)(v105 + 40);
        if ( v106 )
        {
          *(_QWORD *)(v105 + 48) = 0;
          qfree(v106);
        }
        ++v104;
        v105 += 64;
      }
      while ( v104 != v128 );
    }
    qfree(v125);
  }
  if ( v127 )
    qfree(v127);
LABEL_15:
  if ( v138 )
  {
    v139.m128i_i64[0] = 0;
    qfree(v138);
  }
  v18 = v136;
  if ( v136 )
  {
    v19 = v137.m128i_i64[0];
    if ( v137.m128i_i64[0] )
    {
      v20 = 0;
      do
      {
        v21 = &v18->m128i_i64[5 * v20];
        v22 = v21[2];
        if ( v22 )
        {
          v23 = v21[3];
          if ( v23 )
          {
            for ( k = 0; k != v23; ++k )
            {
              v25 = v22 + 72 * k;
              v26 = *(_QWORD *)(v25 + 32);
              if ( v26 )
              {
                *(_QWORD *)(v25 + 40) = 0;
                qfree(v26);
                v22 = v21[2];
              }
            }
          }
          v21[3] = 0;
          qfree(v22);
          v18 = v136;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    v137.m128i_i64[0] = 0;
    qfree(v18);
  }
  if ( v134 )
  {
    v135.m128i_i64[0] = 0;
    qfree(v134);
  }
  return a1;
}
