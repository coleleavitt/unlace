unsigned __int64 __fastcall sub_3C2D40(__int64 a1, char *a2, __int64 a3)
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
  __int64 v14; // rcx
  const char *v15; // rsi
  __m128i v16; // xmm1
  char v17; // r14
  __int64 v18; // rdx
  __m128i v19; // xmm1
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128 v26; // xmm0
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm1
  char *v31; // r14
  const char *v32; // rdi
  const char *v33; // rbp
  const char *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  const char *v39; // r13
  __int64 v40; // r12
  __m128i v41; // xmm5
  __m128 v42; // xmm3
  char v43; // bp
  __int64 v44; // rax
  __m128i v45; // xmm0
  const char *v46; // rdi
  __int64 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // rdi
  const char *v50; // rdi
  __m128i v51; // xmm7
  __int64 v52; // rdi
  __m128i v53; // xmm2
  __int64 v54; // rax
  __int64 v55; // r12
  const char *v56; // rsi
  char *v57; // rbx
  __int64 v58; // r13
  __int64 v59; // r15
  __m128i v60; // xmm1
  __m128i v61; // xmm0
  char v62; // r14
  char *v63; // rdx
  __m128i v64; // xmm2
  __int64 v65; // rdi
  char *v66; // rdx
  __m128i v67; // xmm2
  __int64 v68; // rdi
  char *v69; // rcx
  char v70; // dl
  const char *v72; // rsi
  __int64 v73; // rcx
  char *v74; // r8
  _OWORD *v75; // rbp
  __int64 v76; // rdx
  __m128i v77; // xmm1
  char v78; // al
  int v79; // eax
  __int64 v80; // rcx
  __m128i v81; // xmm1
  __int64 v82; // rdx
  __m128i v83; // xmm1
  int v84; // eax
  char *v85; // r8
  __int64 *v86; // rax
  const char *v87; // r13
  __m128i v88; // xmm1
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // r13
  __m128i v92; // xmm0
  __int64 v93; // rdi
  __int64 v94; // rcx
  const char *v95; // rdi
  __m128i v96; // xmm1
  __int64 v97; // rdi
  __m128i v98; // xmm1
  char v99; // al
  char *v100; // rax
  __int64 *v101; // rcx
  __int64 v102; // r12
  __m128i v103; // xmm1
  __int64 v104; // rdi
  __int64 v105; // rcx
  char *v106; // rax
  __int64 v107; // r12
  __m128i v108; // xmm0
  __int64 v109; // rdi
  __int64 v110; // rcx
  char *v111; // rdx
  __int64 v112; // rdi
  char *v113; // rax
  __m128i v114; // xmm1
  __int64 v115; // rdi
  char *v116; // rax
  __m128i v117; // xmm1
  char v118; // cl
  __m128 v119; // xmm0
  __int64 v120; // rdx
  __m128i v121; // xmm1
  __int64 v122; // rax
  __m128i v123; // xmm0
  __int64 v124; // rax
  __m128i v125; // xmm1
  __int64 v126; // rcx
  __int64 v127; // rax
  char *v128; // rdx
  __int64 v129; // rbp
  __m128i v130; // xmm1
  __int64 v131; // rdi
  __int64 *v132; // rax
  char *v133; // rcx
  __int64 v134; // rbp
  __m128i v135; // xmm0
  __int64 v136; // rdi
  __m128i *v137; // rcx
  char *v138; // rdx
  __int64 v139; // rdi
  char *v140; // rax
  __m128i v141; // xmm1
  __int64 v142; // rdi
  char *v143; // rax
  __m128i v144; // xmm1
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
  __int64 v157; // rax
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
  char v174; // [rsp+B0h] [rbp-48h]
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
    v55 = (__int64)v164;
    v56 = v165;
    s2[0] = v165;
    sub_3C2A40((__int64)v164, (unsigned __int64)v165, (unsigned __int64)v165);
    if ( (__int64)&s2[0][-v55] > 56 )
    {
      v164 = &v170;
      v57 = s2[0];
      do
      {
        v58 = *((_QWORD *)v57 - 7);
        v59 = *((_QWORD *)v57 - 4);
        v57 -= 56;
        *(_QWORD *)v57 = 0;
        v60 = _mm_loadu_si128((const __m128i *)(v57 + 8));
        v61 = _mm_loadu_si128((const __m128i *)v57 + 2);
        *(_OWORD *)(v57 + 8) = 0;
        v62 = v57[48];
        *((_OWORD *)v57 + 2) = 0;
        *((_QWORD *)v57 + 3) = 0;
        v63 = *(char **)v55;
        v64 = _mm_loadu_si128((const __m128i *)(v55 + 8));
        *(_QWORD *)v55 = 0;
        *(_OWORD *)(v55 + 8) = 0;
        v65 = *(_QWORD *)v57;
        if ( *(_QWORD *)v57 )
        {
          *((_QWORD *)v57 + 1) = 0;
          s2[0] = v63;
          v163 = v61;
          v162 = v60;
          v161 = v64;
          qfree(v65, v56);
          v61 = _mm_load_si128(&v163);
          v60 = _mm_load_si128(&v162);
          v64 = _mm_load_si128(&v161);
          v63 = s2[0];
        }
        *(_QWORD *)v57 = v63;
        *(__m128i *)(v57 + 8) = v64;
        v66 = *(char **)(v55 + 24);
        v67 = _mm_loadu_si128((const __m128i *)(v55 + 32));
        *(_QWORD *)(v55 + 24) = 0;
        *(_OWORD *)(v55 + 32) = 0;
        v68 = *((_QWORD *)v57 + 3);
        if ( v68 )
        {
          *((_QWORD *)v57 + 4) = 0;
          s2[0] = v66;
          v163 = v67;
          v162 = v61;
          v161 = v60;
          qfree(v68, v56);
          v67 = _mm_load_si128(&v163);
          v61 = _mm_load_si128(&v162);
          v60 = _mm_load_si128(&v161);
          v66 = s2[0];
        }
        *((_QWORD *)v57 + 3) = v66;
        v69 = (char *)v164;
        v56 = nullptr;
        v174 = v62;
        *((__m128i *)v57 + 2) = v67;
        v70 = *(_BYTE *)(v55 + 48);
        v170 = v58;
        v57[48] = v70;
        v172 = v59;
        v171 = v60;
        v173 = v61;
        sub_3B6440(v55, 0, (char *)(0x6DB6DB6DB6DB6DB7LL * ((__int64)&v57[-v55] >> 3)), v69);
        if ( v172 )
          qfree(v172, nullptr);
        if ( v170 )
          qfree(v170, nullptr);
      }
      while ( (__int64)&v57[-v55] > 56 );
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
          v72 = &s1;
          v73 = *v164;
          v74 = (char *)(v164 + 1);
          v75 = v164 + 4;
          v76 = v164[3];
          v163 = _mm_loadu_si128((const __m128i *)(v164 + 1));
          v77 = _mm_loadu_si128((const __m128i *)v164 + 2);
          v78 = *((_BYTE *)v164 + 48);
          v167 = v73;
          v162.m128i_i64[0] = v76;
          LOBYTE(s2[0]) = v78;
          v161 = v77;
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
      v14 = (__int64)v164;
      v15 = s2[0];
      v16 = _mm_loadu_si128((const __m128i *)(v164 + 1));
      v17 = *((_BYTE *)v164 + 48);
      v163.m128i_i64[0] = *v164;
      v18 = v164[3];
      v162 = v16;
      v19 = _mm_loadu_si128((const __m128i *)v164 + 2);
      v167 = v18;
      v161 = v19;
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
          qfree(v148, v15, v18, v14, v12, v13, *(_OWORD *)&si128, *(_OWORD *)&v161, *(_OWORD *)&v162);
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
          qfree(v152, v15);
          v151 = _mm_load_si128((const __m128i *)s2);
        }
        v153 = (__m128i *)v164;
        v164[3] = v150;
        v153[2] = v151;
        v153[3].m128i_i8[0] = *((_BYTE *)v7 + 48);
        v154 = (const char *)*v7;
        if ( *v7 )
        {
          v7[1] = 0;
          *(double *)v151.m128i_i64 = qfree(v154, v15);
        }
        v155 = _mm_load_si128(&v162);
        v156 = v7[3];
        *v7 = v163.m128i_i64[0];
        *(__m128i *)(v7 + 1) = v155;
        if ( v156 )
        {
          v7[4] = 0;
          qfree(v156, v15, *(double *)v151.m128i_i64);
        }
        v157 = v167;
        v158 = _mm_load_si128(&v161);
        *((_BYTE *)v7 + 48) = v17;
        v7[3] = v157;
        v159 = (__int64)v164;
        *((__m128i *)v7 + 2) = v158;
        v5 = *(_QWORD *)(v159 + 8);
      }
      else if ( strcmp(v9, s2[0]) < 0 )
      {
        v127 = (__int64)v164;
        v128 = v165;
        *v164 = 0;
        *(_QWORD *)(v127 + 24) = 0;
        *(_OWORD *)(v127 + 8) = 0;
        *(_OWORD *)(v127 + 32) = 0;
        v129 = *((_QWORD *)v128 - 7);
        v130 = _mm_loadu_si128((const __m128i *)v128 - 3);
        *((_QWORD *)v128 - 7) = 0;
        *((_OWORD *)v128 - 3) = 0;
        v131 = *(_QWORD *)v127;
        if ( *(_QWORD *)v127 )
        {
          *(_QWORD *)(v127 + 8) = 0;
          qfree(v131, v15, v128, v20, v21, v22, *(_OWORD *)&v130, *(_OWORD *)&v161, *(_OWORD *)&v162);
          v130 = _mm_load_si128((const __m128i *)s2);
        }
        v132 = v164;
        v133 = v165;
        *(__m128i *)(v164 + 1) = v130;
        *v132 = v129;
        v134 = *((_QWORD *)v133 - 4);
        v135 = _mm_loadu_si128((const __m128i *)(v133 - 24));
        *((_QWORD *)v133 - 4) = 0;
        *(_OWORD *)(v133 - 24) = 0;
        v136 = v132[3];
        if ( v136 )
        {
          v132[4] = 0;
          *(__m128i *)s2 = v135;
          qfree(v136, v15);
          v135 = _mm_load_si128((const __m128i *)s2);
        }
        v137 = (__m128i *)v164;
        v138 = v165;
        v164[3] = v134;
        v137[2] = v135;
        v137[3].m128i_i8[0] = *(v138 - 8);
        v139 = *((_QWORD *)v138 - 7);
        if ( v139 )
        {
          *((_QWORD *)v138 - 6) = 0;
          *(double *)v135.m128i_i64 = qfree(v139, v15);
        }
        v140 = v165;
        v141 = _mm_load_si128(&v162);
        v142 = *((_QWORD *)v165 - 4);
        *((_QWORD *)v165 - 7) = v163.m128i_i64[0];
        *((__m128i *)v140 - 3) = v141;
        if ( v142 )
        {
          *((_QWORD *)v140 - 3) = 0;
          qfree(v142, v15, *(double *)v135.m128i_i64);
        }
        v143 = v165;
        v144 = _mm_load_si128(&v161);
        *((_QWORD *)v165 - 4) = v167;
        *(v143 - 8) = v17;
        *(__m128i *)(v143 - 24) = v144;
        v5 = v164[1];
      }
      else
      {
        v23 = (__int64)v164;
        v24 = _mm_load_si128(&v162);
        v25 = v164[7];
        v26 = _mm_loadh_ps((const double *)v164 + 9);
        v164[7] = v163.m128i_i64[0];
        v27 = v167;
        *(__m128 *)(v23 + 8) = v26;
        v28 = _mm_loadu_si128((const __m128i *)(v23 + 88));
        *(_QWORD *)v23 = v25;
        v29 = *(_QWORD *)(v23 + 80);
        *(__m128i *)(v23 + 64) = v24;
        v30 = _mm_load_si128(&v161);
        *(_QWORD *)(v23 + 24) = v29;
        LOBYTE(v29) = *(_BYTE *)(v23 + 104);
        *(_QWORD *)(v23 + 80) = v27;
        *(_BYTE *)(v23 + 48) = v29;
        *(_BYTE *)(v23 + 104) = v17;
        *(__m128i *)(v23 + 32) = v28;
        *(__m128i *)(v23 + 88) = v30;
      }
      goto LABEL_12;
    }
    if ( *((_QWORD *)v165 - 6) )
LABEL_50:
      v10 = *((char **)v165 - 7);
    v168[0] = v10;
    v79 = strcmp(v9, v10);
    v80 = (__int64)v164;
    v72 = v168[0];
    v81 = _mm_loadu_si128((const __m128i *)(v164 + 1));
    v74 = (char *)(v164 + 1);
    v75 = v164 + 4;
    v167 = *v164;
    v82 = v164[3];
    v163 = v81;
    v83 = _mm_loadu_si128((const __m128i *)v164 + 2);
    v162.m128i_i64[0] = v82;
    LOBYTE(v82) = *((_BYTE *)v164 + 48);
    v161 = v83;
    LOBYTE(s2[0]) = v82;
    if ( v79 >= 0 )
    {
LABEL_52:
      v168[0] = v74;
      v84 = strcmp(v8, v72);
      v85 = v168[0];
      if ( v84 < 0 )
      {
        v100 = v165;
        v101 = v164;
        *v164 = 0;
        *(_OWORD *)v85 = 0;
        v101[3] = 0;
        *v75 = 0;
        v102 = *((_QWORD *)v100 - 7);
        v103 = _mm_loadu_si128((const __m128i *)v100 - 3);
        *((_QWORD *)v100 - 7) = 0;
        *((_OWORD *)v100 - 3) = 0;
        v104 = *v101;
        if ( *v101 )
        {
          v101[1] = 0;
          v169 = v103;
          qfree(v104, v72);
          v103 = _mm_load_si128(&v169);
          v85 = v168[0];
        }
        v105 = (__int64)v164;
        v106 = v165;
        *v164 = v102;
        *(__m128i *)v85 = v103;
        v107 = *((_QWORD *)v106 - 4);
        v108 = _mm_loadu_si128((const __m128i *)(v106 - 24));
        *((_QWORD *)v106 - 4) = 0;
        *(_OWORD *)(v106 - 24) = 0;
        v109 = *(_QWORD *)(v105 + 24);
        if ( v109 )
        {
          *(_QWORD *)(v105 + 32) = 0;
          *(__m128i *)v168 = v108;
          qfree(v109, v72);
          v108 = _mm_load_si128((const __m128i *)v168);
        }
        v110 = (__int64)v164;
        v111 = v165;
        v164[3] = v107;
        *v75 = v108;
        *(_BYTE *)(v110 + 48) = *(v111 - 8);
        v112 = *((_QWORD *)v111 - 7);
        if ( v112 )
        {
          *((_QWORD *)v111 - 6) = 0;
          *(double *)v108.m128i_i64 = qfree(v112, v72);
        }
        v113 = v165;
        v114 = _mm_load_si128(&v163);
        v115 = *((_QWORD *)v165 - 4);
        *((_QWORD *)v165 - 7) = v167;
        *((__m128i *)v113 - 3) = v114;
        if ( v115 )
        {
          *((_QWORD *)v113 - 3) = 0;
          qfree(v115, v72, *(double *)v108.m128i_i64);
        }
        v116 = v165;
        v117 = _mm_load_si128(&v161);
        v118 = (char)s2[0];
        *((_QWORD *)v165 - 4) = v162.m128i_i64[0];
        *(v116 - 8) = v118;
        *(__m128i *)(v116 - 24) = v117;
        v5 = v164[1];
      }
      else
      {
        v86 = v164;
        *v164 = 0;
        *(_OWORD *)v85 = 0;
        v86[3] = 0;
        *v75 = 0;
        v87 = (const char *)*v7;
        v88 = _mm_loadu_si128((const __m128i *)(v7 + 1));
        *v7 = 0;
        *(_OWORD *)(v7 + 1) = 0;
        v89 = *v86;
        if ( *v86 )
        {
          v86[1] = 0;
          v169.m128i_i64[0] = (__int64)v85;
          *(__m128i *)v168 = v88;
          qfree(v89, v72);
          v85 = (char *)v169.m128i_i64[0];
          v88 = _mm_load_si128((const __m128i *)v168);
        }
        v90 = (__int64)v164;
        *v164 = (__int64)v87;
        *(__m128i *)v85 = v88;
        v91 = v7[3];
        v92 = _mm_loadu_si128((const __m128i *)v7 + 2);
        v7[3] = 0;
        *((_OWORD *)v7 + 2) = 0;
        v93 = *(_QWORD *)(v90 + 24);
        if ( v93 )
        {
          *(_QWORD *)(v90 + 32) = 0;
          *(__m128i *)v168 = v92;
          qfree(v93, v72);
          v92 = _mm_load_si128((const __m128i *)v168);
        }
        v94 = (__int64)v164;
        v164[3] = v91;
        *v75 = v92;
        *(_BYTE *)(v94 + 48) = *((_BYTE *)v7 + 48);
        v95 = (const char *)*v7;
        if ( *v7 )
        {
          v7[1] = 0;
          *(double *)v92.m128i_i64 = qfree(v95, v72);
        }
        v96 = _mm_load_si128(&v163);
        v97 = v7[3];
        *v7 = v167;
        *(__m128i *)(v7 + 1) = v96;
        if ( v97 )
        {
          v7[4] = 0;
          qfree(v97, v72, *(double *)v92.m128i_i64);
        }
        v98 = _mm_load_si128(&v161);
        v7[3] = v162.m128i_i64[0];
        v99 = (char)s2[0];
        *((__m128i *)v7 + 2) = v98;
        *((_BYTE *)v7 + 48) = v99;
        v5 = v164[1];
      }
      goto LABEL_12;
    }
    v119 = _mm_loadh_ps((const double *)v164 + 9);
    v120 = v167;
    v121 = _mm_load_si128(&v163);
    *v164 = v164[7];
    v122 = *(_QWORD *)(v80 + 80);
    *(__m128 *)(v80 + 8) = v119;
    v123 = _mm_loadu_si128((const __m128i *)(v80 + 88));
    *(_QWORD *)(v80 + 24) = v122;
    LOBYTE(v122) = *(_BYTE *)(v80 + 104);
    *(_QWORD *)(v80 + 56) = v120;
    LOBYTE(v120) = s2[0];
    *(_BYTE *)(v80 + 48) = v122;
    v124 = v80;
    *(__m128i *)(v80 + 64) = v121;
    v125 = _mm_load_si128(&v161);
    *(__m128i *)(v80 + 32) = v123;
    v126 = v162.m128i_i64[0];
    *(_BYTE *)(v124 + 104) = v120;
    *(_QWORD *)(v124 + 80) = v126;
    *(__m128i *)(v124 + 88) = v125;
LABEL_12:
    v31 = v165;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v5 )
        {
          v32 = &s1;
          v33 = (const char *)*v164;
          if ( !*((_QWORD *)v6 + 1) )
            goto LABEL_14;
          goto LABEL_18;
        }
        v33 = &s1;
        if ( !*((_QWORD *)v6 + 1) )
          break;
LABEL_18:
        v32 = *(const char **)v6;
LABEL_14:
        if ( strcmp(v32, v33) >= 0 )
          goto LABEL_19;
        v6 += 56;
      }
      do
      {
LABEL_19:
        v31 -= 56;
        v34 = &s1;
        if ( *((_QWORD *)v31 + 1) )
          v34 = *(const char **)v31;
      }
      while ( strcmp(v33, v34) < 0 );
      if ( v6 >= v31 )
        break;
      v39 = *(const char **)v6;
      v40 = *((_QWORD *)v6 + 3);
      v41 = _mm_loadu_si128((const __m128i *)v6 + 2);
      v42 = _mm_loadh_ps((const double *)v6 + 2);
      *((_OWORD *)v6 + 2) = 0;
      v43 = v6[48];
      *(_QWORD *)v6 = 0;
      *((_QWORD *)v6 + 3) = 0;
      *(_OWORD *)(v6 + 8) = 0;
      v44 = *(_QWORD *)v31;
      v45 = _mm_loadu_si128((const __m128i *)(v31 + 8));
      *(_QWORD *)v31 = 0;
      *(_OWORD *)(v31 + 8) = 0;
      v46 = *(const char **)v6;
      v161 = (__m128i)v42;
      *(__m128i *)s2 = v41;
      if ( v46 )
      {
        *((_QWORD *)v6 + 1) = 0;
        v162.m128i_i64[0] = v44;
        v163 = v45;
        qfree(v46, v34, v35, v36, v37, v38, s2[0], s2[1], *(_OWORD *)&v161);
        v45 = _mm_load_si128(&v163);
        v44 = v162.m128i_i64[0];
      }
      *(_QWORD *)v6 = v44;
      *(__m128i *)(v6 + 8) = v45;
      v47 = *((_QWORD *)v31 + 3);
      v48 = _mm_loadu_si128((const __m128i *)v31 + 2);
      *((_QWORD *)v31 + 3) = 0;
      *((_OWORD *)v31 + 2) = 0;
      v49 = *((_QWORD *)v6 + 3);
      if ( v49 )
      {
        *((_QWORD *)v6 + 4) = 0;
        v163.m128i_i64[0] = v47;
        v162 = v48;
        qfree(v49, v34);
        v47 = v163.m128i_i64[0];
        v48 = _mm_load_si128(&v162);
      }
      *((_QWORD *)v6 + 3) = v47;
      *((__m128i *)v6 + 2) = v48;
      v6[48] = v31[48];
      v50 = *(const char **)v31;
      if ( *(_QWORD *)v31 )
      {
        *((_QWORD *)v31 + 1) = 0;
        *(double *)v48.m128i_i64 = qfree(v50, v34);
      }
      v51 = _mm_load_si128(&v161);
      v52 = *((_QWORD *)v31 + 3);
      *(_QWORD *)v31 = v39;
      *(__m128i *)(v31 + 8) = v51;
      if ( v52 )
      {
        *((_QWORD *)v31 + 4) = 0;
        qfree(v52, v34, *(double *)v48.m128i_i64);
      }
      v53 = _mm_load_si128((const __m128i *)s2);
      v54 = (__int64)v164;
      *((_QWORD *)v31 + 3) = v40;
      v6 += 56;
      v31[48] = v43;
      *((__m128i *)v31 + 2) = v53;
      v5 = *(_QWORD *)(v54 + 8);
    }
    sub_3C2D40(v6, v165, v166);
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
