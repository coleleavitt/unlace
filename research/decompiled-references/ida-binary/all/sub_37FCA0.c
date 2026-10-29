unsigned __int64 __fastcall sub_37FCA0(__int64 a1, char *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  char *v6; // r15
  __int64 *v7; // r12
  const char *v8; // r14
  const char *v9; // rbp
  char *v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r14
  __m128i v17; // xmm1
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __m128 v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __int64 v28; // rax
  char *v29; // r14
  const char *v30; // rdi
  const char *v31; // rbp
  const char *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  const char *v37; // r13
  __int64 v38; // r12
  __m128i v39; // xmm5
  __m128 v40; // xmm3
  int v41; // ebp
  __int64 v42; // rax
  __m128i v43; // xmm0
  const char *v44; // rdi
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rdi
  const char *v48; // rdi
  __m128i v49; // xmm7
  __int64 v50; // rdi
  __m128i v51; // xmm2
  __int64 v52; // rax
  __int64 v53; // r12
  const char *v54; // rsi
  char *v55; // rbx
  __int64 v56; // r13
  __int64 v57; // r15
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  int v60; // r14d
  char *v61; // rdx
  __m128i v62; // xmm2
  __int64 v63; // rdi
  char *v64; // rdx
  __m128i v65; // xmm2
  __int64 v66; // rdi
  char *v67; // rcx
  int v68; // edx
  __int64 v69; // r15
  const char *v71; // rsi
  __int64 v72; // rcx
  char *v73; // r8
  _OWORD *v74; // rbp
  __int64 v75; // rdx
  __m128i v76; // xmm1
  __int32 v77; // eax
  int v78; // eax
  __int64 v79; // rcx
  __m128i v80; // xmm1
  __int64 v81; // rdx
  __m128i v82; // xmm1
  int v83; // eax
  char *v84; // r8
  __int64 *v85; // rax
  const char *v86; // r13
  __m128i v87; // xmm1
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // r13
  __m128i v91; // xmm0
  __int64 v92; // rdi
  __int64 v93; // rcx
  const char *v94; // rdi
  __m128i v95; // xmm1
  __int64 v96; // rdi
  __m128i v97; // xmm1
  __int32 v98; // eax
  char *v99; // rax
  __int64 *v100; // rcx
  __int64 v101; // r12
  __m128i v102; // xmm1
  __int64 v103; // rdi
  __int64 v104; // rcx
  char *v105; // rax
  __int64 v106; // r12
  __m128i v107; // xmm0
  __int64 v108; // rdi
  __int64 v109; // rcx
  char *v110; // rdx
  __int64 v111; // rdi
  char *v112; // rax
  __m128i v113; // xmm1
  __int64 v114; // rdi
  char *v115; // rax
  __m128i v116; // xmm1
  __int32 v117; // ecx
  __m128 v118; // xmm0
  __int64 v119; // rdx
  __m128i v120; // xmm1
  __int64 v121; // rax
  __m128i v122; // xmm0
  __int64 v123; // rax
  __m128i v124; // xmm1
  __int64 v125; // rcx
  __int64 v126; // rax
  char *v127; // rdx
  __int64 v128; // rbp
  __m128i v129; // xmm1
  __int64 v130; // rdi
  __int64 *v131; // rax
  char *v132; // rcx
  __int64 v133; // rbp
  __m128i v134; // xmm0
  __int64 v135; // rdi
  __m128i *v136; // rcx
  char *v137; // rdx
  __int64 v138; // rdi
  char *v139; // rax
  __m128i v140; // xmm1
  __int64 v141; // rdi
  char *v142; // rax
  __m128i v143; // xmm1
  int v144; // ecx
  __int64 v145; // rax
  const char *v146; // rbp
  __m128i si128; // xmm1
  __int64 v148; // rdi
  const char **v149; // rax
  __int64 v150; // rbp
  __m128i v151; // xmm0
  const char *v152; // rdi
  __m128i *v153; // rdx
  const char *v154; // rdi
  __m128i v155; // xmm1
  __int64 v156; // rdi
  int v157; // eax
  __m128i v158; // xmm1
  __int64 v159; // rax
  char *s2[2]; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v161; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v162; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v163; // [rsp+30h] [rbp-C8h] BYREF
  __int64 *v164; // [rsp+40h] [rbp-B8h]
  char *v165; // [rsp+48h] [rbp-B0h]
  __int64 v166; // [rsp+50h] [rbp-A8h]
  __int64 v167; // [rsp+58h] [rbp-A0h]
  char *v168[2]; // [rsp+60h] [rbp-98h] BYREF
  __m128i v169; // [rsp+70h] [rbp-88h] BYREF
  __int64 v170; // [rsp+80h] [rbp-78h] BYREF
  __m128i v171; // [rsp+88h] [rbp-70h]
  __int64 v172; // [rsp+98h] [rbp-60h]
  __m128i v173; // [rsp+A0h] [rbp-58h]
  int v174; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v175; // [rsp+B8h] [rbp-40h]

  v164 = (__int64 *)a1;
  v175 = __readfsqword(0x28u);
  v4 = (__int64)&a2[-a1];
  if ( v4 <= 896 )
    return v175 - __readfsqword(0x28u);
  v166 = a3;
  v165 = a2;
  if ( !a3 )
  {
LABEL_34:
    v53 = (__int64)v164;
    v54 = v165;
    s2[0] = v165;
    sub_37F990((__int64)v164, (unsigned __int64)v165, (unsigned __int64)v165);
    if ( (__int64)&s2[0][-v53] > 56 )
    {
      v55 = s2[0];
      v164 = &v170;
      do
      {
        v56 = *((_QWORD *)v55 - 7);
        v57 = *((_QWORD *)v55 - 4);
        v55 -= 56;
        v58 = _mm_loadu_si128((const __m128i *)(v55 + 8));
        v59 = _mm_loadu_si128((const __m128i *)v55 + 2);
        *(_QWORD *)v55 = 0;
        *(_OWORD *)(v55 + 8) = 0;
        v60 = *((_DWORD *)v55 + 12);
        *((_OWORD *)v55 + 2) = 0;
        *((_QWORD *)v55 + 3) = 0;
        v61 = *(char **)v53;
        v62 = _mm_loadu_si128((const __m128i *)(v53 + 8));
        *(_QWORD *)v53 = 0;
        *(_OWORD *)(v53 + 8) = 0;
        v63 = *(_QWORD *)v55;
        if ( *(_QWORD *)v55 )
        {
          *((_QWORD *)v55 + 1) = 0;
          s2[0] = v61;
          v163 = v59;
          v162 = v58;
          v161 = v62;
          qfree(v63, v54);
          v59 = _mm_load_si128(&v163);
          v58 = _mm_load_si128(&v162);
          v62 = _mm_load_si128(&v161);
          v61 = s2[0];
        }
        *(_QWORD *)v55 = v61;
        *(__m128i *)(v55 + 8) = v62;
        v64 = *(char **)(v53 + 24);
        v65 = _mm_loadu_si128((const __m128i *)(v53 + 32));
        *(_QWORD *)(v53 + 24) = 0;
        *(_OWORD *)(v53 + 32) = 0;
        v66 = *((_QWORD *)v55 + 3);
        if ( v66 )
        {
          *((_QWORD *)v55 + 4) = 0;
          s2[0] = v64;
          v163 = v65;
          v162 = v59;
          v161 = v58;
          qfree(v66, v54);
          v65 = _mm_load_si128(&v163);
          v59 = _mm_load_si128(&v162);
          v58 = _mm_load_si128(&v161);
          v64 = s2[0];
        }
        *((_QWORD *)v55 + 3) = v64;
        v67 = (char *)v164;
        v54 = nullptr;
        v174 = v60;
        *((__m128i *)v55 + 2) = v65;
        v68 = *(_DWORD *)(v53 + 48);
        v172 = v57;
        *((_DWORD *)v55 + 12) = v68;
        v170 = v56;
        v171 = v58;
        v173 = v59;
        sub_37EA60(v53, 0, (char *)(0x6DB6DB6DB6DB6DB7LL * ((__int64)&v55[-v53] >> 3)), v67);
        v69 = v170;
        if ( v172 )
          qfree(v172, nullptr);
        if ( v69 )
          qfree(v69, nullptr);
      }
      while ( (__int64)&v55[-v53] > 56 );
    }
    return v175 - __readfsqword(0x28u);
  }
  while ( 2 )
  {
    --v166;
    v5 = v164[8];
    v6 = (char *)(v164 + 7);
    v7 = &v164[7 * ((0x6DB6DB6DB6DB6DB7LL * (v4 >> 3)) >> 1)];
    if ( v7[1] )
    {
      v8 = (const char *)*v7;
      v9 = &s1;
      if ( !v5 )
        goto LABEL_6;
    }
    else
    {
      v8 = &s1;
      if ( !v5 )
      {
        v9 = &s1;
        v8 = &s1;
        if ( !*((_QWORD *)v165 - 6) )
        {
          v8 = &s1;
          v71 = &s1;
          v72 = *v164;
          v73 = (char *)(v164 + 1);
          v74 = v164 + 4;
          v75 = v164[3];
          v162 = _mm_loadu_si128((const __m128i *)(v164 + 1));
          v76 = _mm_loadu_si128((const __m128i *)v164 + 2);
          v77 = *((_DWORD *)v164 + 12);
          v167 = v72;
          v161.m128i_i64[0] = v75;
          v163.m128i_i32[0] = v77;
          *(__m128i *)s2 = v76;
          goto LABEL_52;
        }
        goto LABEL_50;
      }
    }
    v9 = (const char *)v164[7];
LABEL_6:
    v10 = (char *)&s1;
    if ( strcmp(v9, v8) < 0 )
    {
      if ( *((_QWORD *)v165 - 6) )
        v10 = *((char **)v165 - 7);
      s2[0] = v10;
      v11 = strcmp(v8, v10);
      v14 = s2[0];
      v15 = *v164;
      v16 = v164[3];
      v162 = _mm_loadu_si128((const __m128i *)(v164 + 1));
      v17 = _mm_loadu_si128((const __m128i *)v164 + 2);
      v18 = *((unsigned int *)v164 + 12);
      v163.m128i_i64[0] = v15;
      LODWORD(v167) = v18;
      v161 = v17;
      if ( v11 < 0 )
      {
        v145 = (__int64)v164;
        *v164 = 0;
        *(_QWORD *)(v145 + 24) = 0;
        *(_OWORD *)(v145 + 8) = 0;
        *(_OWORD *)(v145 + 32) = 0;
        v146 = (const char *)*v7;
        si128 = _mm_loadu_si128((const __m128i *)(v7 + 1));
        *v7 = 0;
        *(_OWORD *)(v7 + 1) = 0;
        v148 = *(_QWORD *)v145;
        if ( *(_QWORD *)v145 )
        {
          *(_QWORD *)(v145 + 8) = 0;
          qfree(v148, v14, v15, v18, v12, v13, *(_OWORD *)&si128, *(_OWORD *)&v161, *(_OWORD *)&v162);
          si128 = _mm_load_si128((const __m128i *)s2);
        }
        v149 = (const char **)v164;
        *(__m128i *)(v164 + 1) = si128;
        *v149 = v146;
        v150 = v7[3];
        v7[3] = 0;
        v151 = _mm_loadu_si128((const __m128i *)v7 + 2);
        *((_OWORD *)v7 + 2) = 0;
        v152 = v149[3];
        if ( v152 )
        {
          v149[4] = nullptr;
          *(__m128i *)s2 = v151;
          qfree(v152, v14);
          v151 = _mm_load_si128((const __m128i *)s2);
        }
        v153 = (__m128i *)v164;
        v164[3] = v150;
        v153[2] = v151;
        v153[3].m128i_i32[0] = *((_DWORD *)v7 + 12);
        v154 = (const char *)*v7;
        if ( *v7 )
        {
          v7[1] = 0;
          *(double *)v151.m128i_i64 = qfree(v154, v14);
        }
        v155 = _mm_load_si128(&v162);
        v156 = v7[3];
        *v7 = v163.m128i_i64[0];
        *(__m128i *)(v7 + 1) = v155;
        if ( v156 )
        {
          v7[4] = 0;
          qfree(v156, v14, *(double *)v151.m128i_i64);
        }
        v157 = v167;
        v158 = _mm_load_si128(&v161);
        v7[3] = v16;
        *((_DWORD *)v7 + 12) = v157;
        v159 = (__int64)v164;
        *((__m128i *)v7 + 2) = v158;
        v5 = *(_QWORD *)(v159 + 8);
      }
      else if ( strcmp(v9, s2[0]) < 0 )
      {
        v126 = (__int64)v164;
        v127 = v165;
        *v164 = 0;
        *(_QWORD *)(v126 + 24) = 0;
        *(_OWORD *)(v126 + 8) = 0;
        *(_OWORD *)(v126 + 32) = 0;
        v128 = *((_QWORD *)v127 - 7);
        v129 = _mm_loadu_si128((const __m128i *)v127 - 3);
        *((_QWORD *)v127 - 7) = 0;
        *((_OWORD *)v127 - 3) = 0;
        v130 = *(_QWORD *)v126;
        if ( *(_QWORD *)v126 )
        {
          *(_QWORD *)(v126 + 8) = 0;
          qfree(v130, v14, v127, v19, v20, v21, *(_OWORD *)&v129, *(_OWORD *)&v161, *(_OWORD *)&v162);
          v129 = _mm_load_si128((const __m128i *)s2);
        }
        v131 = v164;
        v132 = v165;
        *(__m128i *)(v164 + 1) = v129;
        *v131 = v128;
        v133 = *((_QWORD *)v132 - 4);
        v134 = _mm_loadu_si128((const __m128i *)(v132 - 24));
        *((_QWORD *)v132 - 4) = 0;
        *(_OWORD *)(v132 - 24) = 0;
        v135 = v131[3];
        if ( v135 )
        {
          v131[4] = 0;
          *(__m128i *)s2 = v134;
          qfree(v135, v14);
          v134 = _mm_load_si128((const __m128i *)s2);
        }
        v136 = (__m128i *)v164;
        v137 = v165;
        v164[3] = v133;
        v136[2] = v134;
        v136[3].m128i_i32[0] = *((_DWORD *)v137 - 2);
        v138 = *((_QWORD *)v137 - 7);
        if ( v138 )
        {
          *((_QWORD *)v137 - 6) = 0;
          *(double *)v134.m128i_i64 = qfree(v138, v14);
        }
        v139 = v165;
        v140 = _mm_load_si128(&v162);
        v141 = *((_QWORD *)v165 - 4);
        *((_QWORD *)v165 - 7) = v163.m128i_i64[0];
        *((__m128i *)v139 - 3) = v140;
        if ( v141 )
        {
          *((_QWORD *)v139 - 3) = 0;
          qfree(v141, v14, *(double *)v134.m128i_i64);
        }
        v142 = v165;
        v143 = _mm_load_si128(&v161);
        v144 = v167;
        *((_QWORD *)v165 - 4) = v16;
        *((_DWORD *)v142 - 2) = v144;
        *(__m128i *)(v142 - 24) = v143;
        v5 = v164[1];
      }
      else
      {
        v22 = (__int64)v164;
        v23 = v163.m128i_i64[0];
        v24 = v164[7];
        v25 = _mm_loadh_ps((const double *)v164 + 9);
        *((__m128i *)v164 + 4) = _mm_load_si128(&v162);
        *(__m128 *)(v22 + 8) = v25;
        v26 = _mm_load_si128(&v161);
        v27 = _mm_loadu_si128((const __m128i *)(v22 + 88));
        *(_QWORD *)v22 = v24;
        v28 = *(_QWORD *)(v22 + 80);
        *(_QWORD *)(v22 + 56) = v23;
        *(_QWORD *)(v22 + 24) = v28;
        LODWORD(v28) = *(_DWORD *)(v22 + 104);
        *(_QWORD *)(v22 + 80) = v16;
        *(_DWORD *)(v22 + 48) = v28;
        *(__m128i *)(v22 + 32) = v27;
        *(__m128i *)(v22 + 88) = v26;
        *(_DWORD *)(v22 + 104) = v167;
      }
      goto LABEL_12;
    }
    if ( *((_QWORD *)v165 - 6) )
LABEL_50:
      v10 = *((char **)v165 - 7);
    v168[0] = v10;
    v78 = strcmp(v9, v10);
    v79 = (__int64)v164;
    v71 = v168[0];
    v80 = _mm_loadu_si128((const __m128i *)(v164 + 1));
    v73 = (char *)(v164 + 1);
    v74 = v164 + 4;
    v167 = *v164;
    v81 = v164[3];
    v162 = v80;
    v82 = _mm_loadu_si128((const __m128i *)v164 + 2);
    v161.m128i_i64[0] = v81;
    LODWORD(v81) = *((_DWORD *)v164 + 12);
    *(__m128i *)s2 = v82;
    v163.m128i_i32[0] = v81;
    if ( v78 >= 0 )
    {
LABEL_52:
      v168[0] = v73;
      v83 = strcmp(v8, v71);
      v84 = v168[0];
      if ( v83 < 0 )
      {
        v99 = v165;
        v100 = v164;
        *v164 = 0;
        *(_OWORD *)v84 = 0;
        v100[3] = 0;
        *v74 = 0;
        v101 = *((_QWORD *)v99 - 7);
        v102 = _mm_loadu_si128((const __m128i *)v99 - 3);
        *((_QWORD *)v99 - 7) = 0;
        *((_OWORD *)v99 - 3) = 0;
        v103 = *v100;
        if ( *v100 )
        {
          v100[1] = 0;
          v169 = v102;
          qfree(v103, v71);
          v102 = _mm_load_si128(&v169);
          v84 = v168[0];
        }
        v104 = (__int64)v164;
        v105 = v165;
        *v164 = v101;
        *(__m128i *)v84 = v102;
        v106 = *((_QWORD *)v105 - 4);
        v107 = _mm_loadu_si128((const __m128i *)(v105 - 24));
        *((_QWORD *)v105 - 4) = 0;
        *(_OWORD *)(v105 - 24) = 0;
        v108 = *(_QWORD *)(v104 + 24);
        if ( v108 )
        {
          *(_QWORD *)(v104 + 32) = 0;
          *(__m128i *)v168 = v107;
          qfree(v108, v71);
          v107 = _mm_load_si128((const __m128i *)v168);
        }
        v109 = (__int64)v164;
        v110 = v165;
        v164[3] = v106;
        *v74 = v107;
        *(_DWORD *)(v109 + 48) = *((_DWORD *)v110 - 2);
        v111 = *((_QWORD *)v110 - 7);
        if ( v111 )
        {
          *((_QWORD *)v110 - 6) = 0;
          *(double *)v107.m128i_i64 = qfree(v111, v71);
        }
        v112 = v165;
        v113 = _mm_load_si128(&v162);
        v114 = *((_QWORD *)v165 - 4);
        *((_QWORD *)v165 - 7) = v167;
        *((__m128i *)v112 - 3) = v113;
        if ( v114 )
        {
          *((_QWORD *)v112 - 3) = 0;
          qfree(v114, v71, *(double *)v107.m128i_i64);
        }
        v115 = v165;
        v116 = _mm_load_si128((const __m128i *)s2);
        v117 = v163.m128i_i32[0];
        *((_QWORD *)v165 - 4) = v161.m128i_i64[0];
        *((_DWORD *)v115 - 2) = v117;
        *(__m128i *)(v115 - 24) = v116;
        v5 = v164[1];
      }
      else
      {
        v85 = v164;
        *v164 = 0;
        *(_OWORD *)v84 = 0;
        v85[3] = 0;
        *v74 = 0;
        v86 = (const char *)*v7;
        v87 = _mm_loadu_si128((const __m128i *)(v7 + 1));
        *v7 = 0;
        *(_OWORD *)(v7 + 1) = 0;
        v88 = *v85;
        if ( *v85 )
        {
          v85[1] = 0;
          v169.m128i_i64[0] = (__int64)v84;
          *(__m128i *)v168 = v87;
          qfree(v88, v71);
          v84 = (char *)v169.m128i_i64[0];
          v87 = _mm_load_si128((const __m128i *)v168);
        }
        v89 = (__int64)v164;
        *v164 = (__int64)v86;
        *(__m128i *)v84 = v87;
        v90 = v7[3];
        v91 = _mm_loadu_si128((const __m128i *)v7 + 2);
        v7[3] = 0;
        *((_OWORD *)v7 + 2) = 0;
        v92 = *(_QWORD *)(v89 + 24);
        if ( v92 )
        {
          *(_QWORD *)(v89 + 32) = 0;
          *(__m128i *)v168 = v91;
          qfree(v92, v71);
          v91 = _mm_load_si128((const __m128i *)v168);
        }
        v93 = (__int64)v164;
        v164[3] = v90;
        *v74 = v91;
        *(_DWORD *)(v93 + 48) = *((_DWORD *)v7 + 12);
        v94 = (const char *)*v7;
        if ( *v7 )
        {
          v7[1] = 0;
          *(double *)v91.m128i_i64 = qfree(v94, v71);
        }
        v95 = _mm_load_si128(&v162);
        v96 = v7[3];
        *v7 = v167;
        *(__m128i *)(v7 + 1) = v95;
        if ( v96 )
        {
          v7[4] = 0;
          qfree(v96, v71, *(double *)v91.m128i_i64);
        }
        v97 = _mm_load_si128((const __m128i *)s2);
        v7[3] = v161.m128i_i64[0];
        v98 = v163.m128i_i32[0];
        *((__m128i *)v7 + 2) = v97;
        *((_DWORD *)v7 + 12) = v98;
        v5 = v164[1];
      }
      goto LABEL_12;
    }
    v118 = _mm_loadh_ps((const double *)v164 + 9);
    v119 = v167;
    v120 = _mm_load_si128(&v162);
    *v164 = v164[7];
    v121 = *(_QWORD *)(v79 + 80);
    *(__m128 *)(v79 + 8) = v118;
    v122 = _mm_loadu_si128((const __m128i *)(v79 + 88));
    *(_QWORD *)(v79 + 24) = v121;
    LODWORD(v121) = *(_DWORD *)(v79 + 104);
    *(_QWORD *)(v79 + 56) = v119;
    LODWORD(v119) = v163.m128i_i32[0];
    *(_DWORD *)(v79 + 48) = v121;
    v123 = v79;
    *(__m128i *)(v79 + 64) = v120;
    v124 = _mm_load_si128((const __m128i *)s2);
    *(__m128i *)(v79 + 32) = v122;
    v125 = v161.m128i_i64[0];
    *(_DWORD *)(v123 + 104) = v119;
    *(_QWORD *)(v123 + 80) = v125;
    *(__m128i *)(v123 + 88) = v124;
LABEL_12:
    v29 = v165;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v5 )
        {
          v30 = &s1;
          v31 = (const char *)*v164;
          if ( !*((_QWORD *)v6 + 1) )
            goto LABEL_14;
          goto LABEL_18;
        }
        v31 = &s1;
        if ( !*((_QWORD *)v6 + 1) )
          break;
LABEL_18:
        v30 = *(const char **)v6;
LABEL_14:
        if ( strcmp(v30, v31) >= 0 )
          goto LABEL_19;
        v6 += 56;
      }
      do
      {
LABEL_19:
        v29 -= 56;
        v32 = &s1;
        if ( *((_QWORD *)v29 + 1) )
          v32 = *(const char **)v29;
      }
      while ( strcmp(v31, v32) < 0 );
      if ( v6 >= v29 )
        break;
      v37 = *(const char **)v6;
      v38 = *((_QWORD *)v6 + 3);
      *(_QWORD *)v6 = 0;
      v39 = _mm_loadu_si128((const __m128i *)v6 + 2);
      v40 = _mm_loadh_ps((const double *)v6 + 2);
      *((_QWORD *)v6 + 3) = 0;
      v41 = *((_DWORD *)v6 + 12);
      *(_OWORD *)(v6 + 8) = 0;
      *((_OWORD *)v6 + 2) = 0;
      v42 = *(_QWORD *)v29;
      v43 = _mm_loadu_si128((const __m128i *)(v29 + 8));
      *(_QWORD *)v29 = 0;
      *(_OWORD *)(v29 + 8) = 0;
      v44 = *(const char **)v6;
      *(__m128 *)s2 = v40;
      v161 = v39;
      if ( v44 )
      {
        *((_QWORD *)v6 + 1) = 0;
        v162.m128i_i64[0] = v42;
        v163 = v43;
        qfree(v44, v32, v33, v34, v35, v36, s2[0], s2[1], *(_OWORD *)&v161);
        v43 = _mm_load_si128(&v163);
        v42 = v162.m128i_i64[0];
      }
      *(_QWORD *)v6 = v42;
      *(__m128i *)(v6 + 8) = v43;
      v45 = *((_QWORD *)v29 + 3);
      v46 = _mm_loadu_si128((const __m128i *)v29 + 2);
      *((_QWORD *)v29 + 3) = 0;
      *((_OWORD *)v29 + 2) = 0;
      v47 = *((_QWORD *)v6 + 3);
      if ( v47 )
      {
        *((_QWORD *)v6 + 4) = 0;
        v163.m128i_i64[0] = v45;
        v162 = v46;
        qfree(v47, v32);
        v45 = v163.m128i_i64[0];
        v46 = _mm_load_si128(&v162);
      }
      *((_QWORD *)v6 + 3) = v45;
      *((__m128i *)v6 + 2) = v46;
      *((_DWORD *)v6 + 12) = *((_DWORD *)v29 + 12);
      v48 = *(const char **)v29;
      if ( *(_QWORD *)v29 )
      {
        *((_QWORD *)v29 + 1) = 0;
        *(double *)v46.m128i_i64 = qfree(v48, v32);
      }
      v49 = _mm_load_si128((const __m128i *)s2);
      v50 = *((_QWORD *)v29 + 3);
      *(_QWORD *)v29 = v37;
      *(__m128i *)(v29 + 8) = v49;
      if ( v50 )
      {
        *((_QWORD *)v29 + 4) = 0;
        qfree(v50, v32, *(double *)v46.m128i_i64);
      }
      v51 = _mm_load_si128(&v161);
      v52 = (__int64)v164;
      *((_QWORD *)v29 + 3) = v38;
      v6 += 56;
      *((_DWORD *)v29 + 12) = v41;
      *((__m128i *)v29 + 2) = v51;
      v5 = *(_QWORD *)(v52 + 8);
    }
    sub_37FCA0(v6, v165, v166);
    v4 = v6 - (char *)v164;
    if ( v6 - (char *)v164 > 896 )
    {
      v165 = v6;
      if ( !v166 )
        goto LABEL_34;
      continue;
    }
    return v175 - __readfsqword(0x28u);
  }
}
