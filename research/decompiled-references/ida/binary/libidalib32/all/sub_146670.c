unsigned __int64 __fastcall sub_146670(__int64 a1, char *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  char *v6; // r15
  __int64 *v7; // r12
  const char *v8; // r14
  const char *v9; // rbp
  char *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  __m128i v14; // xmm1
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __m128 v19; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // rax
  char *v23; // r14
  const char *v24; // rdi
  const char *v25; // rbp
  const char *v26; // rsi
  const char *v27; // r13
  __int64 v28; // r12
  __m128i v29; // xmm5
  __m128 v30; // xmm3
  int v31; // ebp
  __int64 v32; // rax
  __m128i v33; // xmm0
  const char *v34; // rdi
  __int64 v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm7
  __int64 v38; // rdi
  __m128i v39; // xmm2
  __int64 v40; // rax
  __int64 v41; // r12
  char *v42; // rbx
  __int64 v43; // r13
  __int64 v44; // r15
  __m128i v45; // xmm1
  __m128i v46; // xmm0
  int v47; // r14d
  char *v48; // rdx
  __m128i v49; // xmm2
  char *v50; // rdx
  __m128i v51; // xmm2
  char *v52; // rcx
  int v53; // edx
  __int64 v54; // r15
  const char *v56; // rsi
  __int64 v57; // rcx
  char *v58; // r8
  _OWORD *v59; // rbp
  __int64 v60; // rdx
  __m128i v61; // xmm1
  __int32 v62; // eax
  int v63; // eax
  __int64 v64; // rcx
  __m128i v65; // xmm1
  __int64 v66; // rdx
  __m128i v67; // xmm1
  int v68; // eax
  char *v69; // r8
  __int64 *v70; // rax
  const char *v71; // r13
  __m128i v72; // xmm1
  __int64 v73; // rax
  __int64 v74; // r13
  __m128i v75; // xmm0
  __int64 v76; // rcx
  __m128i v77; // xmm1
  __int64 v78; // rdi
  __m128i v79; // xmm1
  __int32 v80; // eax
  char *v81; // rax
  __int64 *v82; // rcx
  __int64 v83; // r12
  __m128i v84; // xmm1
  __int64 v85; // rcx
  char *v86; // rax
  __int64 v87; // r12
  __m128i v88; // xmm0
  __int64 v89; // rcx
  char *v90; // rdx
  char *v91; // rax
  __m128i v92; // xmm1
  __int64 v93; // rdi
  char *v94; // rax
  __m128i v95; // xmm1
  __int32 v96; // ecx
  __m128 v97; // xmm0
  __int64 v98; // rdx
  __m128i v99; // xmm1
  __int64 v100; // rax
  __m128i v101; // xmm0
  __int64 v102; // rax
  __m128i v103; // xmm1
  __int64 v104; // rcx
  __int64 v105; // rax
  char *v106; // rdx
  __int64 v107; // rbp
  __m128i v108; // xmm1
  __int64 *v109; // rax
  char *v110; // rcx
  __int64 v111; // rbp
  __m128i v112; // xmm0
  __m128i *v113; // rcx
  char *v114; // rdx
  char *v115; // rax
  __m128i v116; // xmm1
  __int64 v117; // rdi
  char *v118; // rax
  __m128i v119; // xmm1
  int v120; // ecx
  __int64 v121; // rax
  const char *v122; // rbp
  __m128i si128; // xmm1
  const char **v124; // rax
  __int64 v125; // rbp
  __m128i v126; // xmm0
  __m128i *v127; // rdx
  __m128i v128; // xmm1
  __int64 v129; // rdi
  int v130; // eax
  __m128i v131; // xmm1
  __int64 v132; // rax
  char *s2[2]; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v134; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v135; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v136; // [rsp+30h] [rbp-C8h] BYREF
  __int64 *v137; // [rsp+40h] [rbp-B8h]
  char *v138; // [rsp+48h] [rbp-B0h]
  __int64 v139; // [rsp+50h] [rbp-A8h]
  __int64 v140; // [rsp+58h] [rbp-A0h]
  char *v141[2]; // [rsp+60h] [rbp-98h] BYREF
  __m128i v142; // [rsp+70h] [rbp-88h] BYREF
  __int64 v143; // [rsp+80h] [rbp-78h] BYREF
  __m128i v144; // [rsp+88h] [rbp-70h]
  __int64 v145; // [rsp+98h] [rbp-60h]
  __m128i v146; // [rsp+A0h] [rbp-58h]
  int v147; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v148; // [rsp+B8h] [rbp-40h]

  v137 = (__int64 *)a1;
  v148 = __readfsqword(0x28u);
  v4 = (__int64)&a2[-a1];
  if ( v4 <= 896 )
    return v148 - __readfsqword(0x28u);
  v139 = a3;
  v138 = a2;
  if ( !a3 )
  {
LABEL_34:
    v41 = (__int64)v137;
    s2[0] = v138;
    sub_146360((__int64)v137, (unsigned __int64)v138, (unsigned __int64)v138);
    if ( (__int64)&s2[0][-v41] > 56 )
    {
      v42 = s2[0];
      v137 = &v143;
      do
      {
        v43 = *((_QWORD *)v42 - 7);
        v44 = *((_QWORD *)v42 - 4);
        v42 -= 56;
        v45 = _mm_loadu_si128((const __m128i *)(v42 + 8));
        v46 = _mm_loadu_si128((const __m128i *)v42 + 2);
        *(_QWORD *)v42 = 0;
        *(_OWORD *)(v42 + 8) = 0;
        v47 = *((_DWORD *)v42 + 12);
        *((_OWORD *)v42 + 2) = 0;
        *((_QWORD *)v42 + 3) = 0;
        v48 = *(char **)v41;
        v49 = _mm_loadu_si128((const __m128i *)(v41 + 8));
        *(_QWORD *)v41 = 0;
        *(_OWORD *)(v41 + 8) = 0;
        if ( *(_QWORD *)v42 )
        {
          *((_QWORD *)v42 + 1) = 0;
          s2[0] = v48;
          v136 = v46;
          v135 = v45;
          v134 = v49;
          qfree();
          v46 = _mm_load_si128(&v136);
          v45 = _mm_load_si128(&v135);
          v49 = _mm_load_si128(&v134);
          v48 = s2[0];
        }
        *(_QWORD *)v42 = v48;
        *(__m128i *)(v42 + 8) = v49;
        v50 = *(char **)(v41 + 24);
        v51 = _mm_loadu_si128((const __m128i *)(v41 + 32));
        *(_QWORD *)(v41 + 24) = 0;
        *(_OWORD *)(v41 + 32) = 0;
        if ( *((_QWORD *)v42 + 3) )
        {
          *((_QWORD *)v42 + 4) = 0;
          s2[0] = v50;
          v136 = v51;
          v135 = v46;
          v134 = v45;
          qfree();
          v51 = _mm_load_si128(&v136);
          v46 = _mm_load_si128(&v135);
          v45 = _mm_load_si128(&v134);
          v50 = s2[0];
        }
        *((_QWORD *)v42 + 3) = v50;
        v52 = (char *)v137;
        v147 = v47;
        *((__m128i *)v42 + 2) = v51;
        v53 = *(_DWORD *)(v41 + 48);
        v145 = v44;
        *((_DWORD *)v42 + 12) = v53;
        v143 = v43;
        v144 = v45;
        v146 = v46;
        sub_145430(v41, 0, (char *)(0x6DB6DB6DB6DB6DB7LL * ((__int64)&v42[-v41] >> 3)), v52);
        v54 = v143;
        if ( v145 )
          qfree();
        if ( v54 )
          qfree();
      }
      while ( (__int64)&v42[-v41] > 56 );
    }
    return v148 - __readfsqword(0x28u);
  }
  while ( 2 )
  {
    --v139;
    v5 = v137[8];
    v6 = (char *)(v137 + 7);
    v7 = &v137[7 * ((0x6DB6DB6DB6DB6DB7LL * (v4 >> 3)) >> 1)];
    if ( v7[1] )
    {
      v8 = (const char *)*v7;
      v9 = s1;
      if ( !v5 )
        goto LABEL_6;
    }
    else
    {
      v8 = s1;
      if ( !v5 )
      {
        v9 = s1;
        v8 = s1;
        if ( !*((_QWORD *)v138 - 6) )
        {
          v8 = s1;
          v56 = s1;
          v57 = *v137;
          v58 = (char *)(v137 + 1);
          v59 = v137 + 4;
          v60 = v137[3];
          v135 = _mm_loadu_si128((const __m128i *)(v137 + 1));
          v61 = _mm_loadu_si128((const __m128i *)v137 + 2);
          v62 = *((_DWORD *)v137 + 12);
          v140 = v57;
          v134.m128i_i64[0] = v60;
          v136.m128i_i32[0] = v62;
          *(__m128i *)s2 = v61;
          goto LABEL_52;
        }
        goto LABEL_50;
      }
    }
    v9 = (const char *)v137[7];
LABEL_6:
    v10 = (char *)s1;
    if ( strcmp(v9, v8) < 0 )
    {
      if ( *((_QWORD *)v138 - 6) )
        v10 = *((char **)v138 - 7);
      s2[0] = v10;
      v11 = strcmp(v8, v10);
      v12 = *v137;
      v13 = v137[3];
      v135 = _mm_loadu_si128((const __m128i *)(v137 + 1));
      v14 = _mm_loadu_si128((const __m128i *)v137 + 2);
      v15 = *((_DWORD *)v137 + 12);
      v136.m128i_i64[0] = v12;
      LODWORD(v140) = v15;
      v134 = v14;
      if ( v11 < 0 )
      {
        v121 = (__int64)v137;
        *v137 = 0;
        *(_QWORD *)(v121 + 24) = 0;
        *(_OWORD *)(v121 + 8) = 0;
        *(_OWORD *)(v121 + 32) = 0;
        v122 = (const char *)*v7;
        si128 = _mm_loadu_si128((const __m128i *)(v7 + 1));
        *v7 = 0;
        *(_OWORD *)(v7 + 1) = 0;
        if ( *(_QWORD *)v121 )
        {
          *(_QWORD *)(v121 + 8) = 0;
          *(__m128i *)s2 = si128;
          qfree();
          si128 = _mm_load_si128((const __m128i *)s2);
        }
        v124 = (const char **)v137;
        *(__m128i *)(v137 + 1) = si128;
        *v124 = v122;
        v125 = v7[3];
        v7[3] = 0;
        v126 = _mm_loadu_si128((const __m128i *)v7 + 2);
        *((_OWORD *)v7 + 2) = 0;
        if ( v124[3] )
        {
          v124[4] = nullptr;
          *(__m128i *)s2 = v126;
          qfree();
          v126 = _mm_load_si128((const __m128i *)s2);
        }
        v127 = (__m128i *)v137;
        v137[3] = v125;
        v127[2] = v126;
        v127[3].m128i_i32[0] = *((_DWORD *)v7 + 12);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
        }
        v128 = _mm_load_si128(&v135);
        v129 = v7[3];
        *v7 = v136.m128i_i64[0];
        *(__m128i *)(v7 + 1) = v128;
        if ( v129 )
        {
          v7[4] = 0;
          qfree();
        }
        v130 = v140;
        v131 = _mm_load_si128(&v134);
        v7[3] = v13;
        *((_DWORD *)v7 + 12) = v130;
        v132 = (__int64)v137;
        *((__m128i *)v7 + 2) = v131;
        v5 = *(_QWORD *)(v132 + 8);
      }
      else if ( strcmp(v9, s2[0]) < 0 )
      {
        v105 = (__int64)v137;
        v106 = v138;
        *v137 = 0;
        *(_QWORD *)(v105 + 24) = 0;
        *(_OWORD *)(v105 + 8) = 0;
        *(_OWORD *)(v105 + 32) = 0;
        v107 = *((_QWORD *)v106 - 7);
        v108 = _mm_loadu_si128((const __m128i *)v106 - 3);
        *((_QWORD *)v106 - 7) = 0;
        *((_OWORD *)v106 - 3) = 0;
        if ( *(_QWORD *)v105 )
        {
          *(_QWORD *)(v105 + 8) = 0;
          *(__m128i *)s2 = v108;
          qfree();
          v108 = _mm_load_si128((const __m128i *)s2);
        }
        v109 = v137;
        v110 = v138;
        *(__m128i *)(v137 + 1) = v108;
        *v109 = v107;
        v111 = *((_QWORD *)v110 - 4);
        v112 = _mm_loadu_si128((const __m128i *)(v110 - 24));
        *((_QWORD *)v110 - 4) = 0;
        *(_OWORD *)(v110 - 24) = 0;
        if ( v109[3] )
        {
          v109[4] = 0;
          *(__m128i *)s2 = v112;
          qfree();
          v112 = _mm_load_si128((const __m128i *)s2);
        }
        v113 = (__m128i *)v137;
        v114 = v138;
        v137[3] = v111;
        v113[2] = v112;
        v113[3].m128i_i32[0] = *((_DWORD *)v114 - 2);
        if ( *((_QWORD *)v114 - 7) )
        {
          *((_QWORD *)v114 - 6) = 0;
          qfree();
        }
        v115 = v138;
        v116 = _mm_load_si128(&v135);
        v117 = *((_QWORD *)v138 - 4);
        *((_QWORD *)v138 - 7) = v136.m128i_i64[0];
        *((__m128i *)v115 - 3) = v116;
        if ( v117 )
        {
          *((_QWORD *)v115 - 3) = 0;
          qfree();
        }
        v118 = v138;
        v119 = _mm_load_si128(&v134);
        v120 = v140;
        *((_QWORD *)v138 - 4) = v13;
        *((_DWORD *)v118 - 2) = v120;
        *(__m128i *)(v118 - 24) = v119;
        v5 = v137[1];
      }
      else
      {
        v16 = (__int64)v137;
        v17 = v136.m128i_i64[0];
        v18 = v137[7];
        v19 = _mm_loadh_ps((const double *)v137 + 9);
        *((__m128i *)v137 + 4) = _mm_load_si128(&v135);
        *(__m128 *)(v16 + 8) = v19;
        v20 = _mm_load_si128(&v134);
        v21 = _mm_loadu_si128((const __m128i *)(v16 + 88));
        *(_QWORD *)v16 = v18;
        v22 = *(_QWORD *)(v16 + 80);
        *(_QWORD *)(v16 + 56) = v17;
        *(_QWORD *)(v16 + 24) = v22;
        LODWORD(v22) = *(_DWORD *)(v16 + 104);
        *(_QWORD *)(v16 + 80) = v13;
        *(_DWORD *)(v16 + 48) = v22;
        *(__m128i *)(v16 + 32) = v21;
        *(__m128i *)(v16 + 88) = v20;
        *(_DWORD *)(v16 + 104) = v140;
      }
      goto LABEL_12;
    }
    if ( *((_QWORD *)v138 - 6) )
LABEL_50:
      v10 = *((char **)v138 - 7);
    v141[0] = v10;
    v63 = strcmp(v9, v10);
    v64 = (__int64)v137;
    v56 = v141[0];
    v65 = _mm_loadu_si128((const __m128i *)(v137 + 1));
    v58 = (char *)(v137 + 1);
    v59 = v137 + 4;
    v140 = *v137;
    v66 = v137[3];
    v135 = v65;
    v67 = _mm_loadu_si128((const __m128i *)v137 + 2);
    v134.m128i_i64[0] = v66;
    LODWORD(v66) = *((_DWORD *)v137 + 12);
    *(__m128i *)s2 = v67;
    v136.m128i_i32[0] = v66;
    if ( v63 >= 0 )
    {
LABEL_52:
      v141[0] = v58;
      v68 = strcmp(v8, v56);
      v69 = v141[0];
      if ( v68 < 0 )
      {
        v81 = v138;
        v82 = v137;
        *v137 = 0;
        *(_OWORD *)v69 = 0;
        v82[3] = 0;
        *v59 = 0;
        v83 = *((_QWORD *)v81 - 7);
        v84 = _mm_loadu_si128((const __m128i *)v81 - 3);
        *((_QWORD *)v81 - 7) = 0;
        *((_OWORD *)v81 - 3) = 0;
        if ( *v82 )
        {
          v82[1] = 0;
          v142 = v84;
          qfree();
          v84 = _mm_load_si128(&v142);
          v69 = v141[0];
        }
        v85 = (__int64)v137;
        v86 = v138;
        *v137 = v83;
        *(__m128i *)v69 = v84;
        v87 = *((_QWORD *)v86 - 4);
        v88 = _mm_loadu_si128((const __m128i *)(v86 - 24));
        *((_QWORD *)v86 - 4) = 0;
        *(_OWORD *)(v86 - 24) = 0;
        if ( *(_QWORD *)(v85 + 24) )
        {
          *(_QWORD *)(v85 + 32) = 0;
          *(__m128i *)v141 = v88;
          qfree();
          v88 = _mm_load_si128((const __m128i *)v141);
        }
        v89 = (__int64)v137;
        v90 = v138;
        v137[3] = v87;
        *v59 = v88;
        *(_DWORD *)(v89 + 48) = *((_DWORD *)v90 - 2);
        if ( *((_QWORD *)v90 - 7) )
        {
          *((_QWORD *)v90 - 6) = 0;
          qfree();
        }
        v91 = v138;
        v92 = _mm_load_si128(&v135);
        v93 = *((_QWORD *)v138 - 4);
        *((_QWORD *)v138 - 7) = v140;
        *((__m128i *)v91 - 3) = v92;
        if ( v93 )
        {
          *((_QWORD *)v91 - 3) = 0;
          qfree();
        }
        v94 = v138;
        v95 = _mm_load_si128((const __m128i *)s2);
        v96 = v136.m128i_i32[0];
        *((_QWORD *)v138 - 4) = v134.m128i_i64[0];
        *((_DWORD *)v94 - 2) = v96;
        *(__m128i *)(v94 - 24) = v95;
        v5 = v137[1];
      }
      else
      {
        v70 = v137;
        *v137 = 0;
        *(_OWORD *)v69 = 0;
        v70[3] = 0;
        *v59 = 0;
        v71 = (const char *)*v7;
        v72 = _mm_loadu_si128((const __m128i *)(v7 + 1));
        *v7 = 0;
        *(_OWORD *)(v7 + 1) = 0;
        if ( *v70 )
        {
          v70[1] = 0;
          v142.m128i_i64[0] = (__int64)v69;
          *(__m128i *)v141 = v72;
          qfree();
          v69 = (char *)v142.m128i_i64[0];
          v72 = _mm_load_si128((const __m128i *)v141);
        }
        v73 = (__int64)v137;
        *v137 = (__int64)v71;
        *(__m128i *)v69 = v72;
        v74 = v7[3];
        v75 = _mm_loadu_si128((const __m128i *)v7 + 2);
        v7[3] = 0;
        *((_OWORD *)v7 + 2) = 0;
        if ( *(_QWORD *)(v73 + 24) )
        {
          *(_QWORD *)(v73 + 32) = 0;
          *(__m128i *)v141 = v75;
          qfree();
          v75 = _mm_load_si128((const __m128i *)v141);
        }
        v76 = (__int64)v137;
        v137[3] = v74;
        *v59 = v75;
        *(_DWORD *)(v76 + 48) = *((_DWORD *)v7 + 12);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
        }
        v77 = _mm_load_si128(&v135);
        v78 = v7[3];
        *v7 = v140;
        *(__m128i *)(v7 + 1) = v77;
        if ( v78 )
        {
          v7[4] = 0;
          qfree();
        }
        v79 = _mm_load_si128((const __m128i *)s2);
        v7[3] = v134.m128i_i64[0];
        v80 = v136.m128i_i32[0];
        *((__m128i *)v7 + 2) = v79;
        *((_DWORD *)v7 + 12) = v80;
        v5 = v137[1];
      }
      goto LABEL_12;
    }
    v97 = _mm_loadh_ps((const double *)v137 + 9);
    v98 = v140;
    v99 = _mm_load_si128(&v135);
    *v137 = v137[7];
    v100 = *(_QWORD *)(v64 + 80);
    *(__m128 *)(v64 + 8) = v97;
    v101 = _mm_loadu_si128((const __m128i *)(v64 + 88));
    *(_QWORD *)(v64 + 24) = v100;
    LODWORD(v100) = *(_DWORD *)(v64 + 104);
    *(_QWORD *)(v64 + 56) = v98;
    LODWORD(v98) = v136.m128i_i32[0];
    *(_DWORD *)(v64 + 48) = v100;
    v102 = v64;
    *(__m128i *)(v64 + 64) = v99;
    v103 = _mm_load_si128((const __m128i *)s2);
    *(__m128i *)(v64 + 32) = v101;
    v104 = v134.m128i_i64[0];
    *(_DWORD *)(v102 + 104) = v98;
    *(_QWORD *)(v102 + 80) = v104;
    *(__m128i *)(v102 + 88) = v103;
LABEL_12:
    v23 = v138;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v5 )
        {
          v24 = s1;
          v25 = (const char *)*v137;
          if ( !*((_QWORD *)v6 + 1) )
            goto LABEL_14;
          goto LABEL_18;
        }
        v25 = s1;
        if ( !*((_QWORD *)v6 + 1) )
          break;
LABEL_18:
        v24 = *(const char **)v6;
LABEL_14:
        if ( strcmp(v24, v25) >= 0 )
          goto LABEL_19;
        v6 += 56;
      }
      do
      {
LABEL_19:
        v23 -= 56;
        v26 = s1;
        if ( *((_QWORD *)v23 + 1) )
          v26 = *(const char **)v23;
      }
      while ( strcmp(v25, v26) < 0 );
      if ( v6 >= v23 )
        break;
      v27 = *(const char **)v6;
      v28 = *((_QWORD *)v6 + 3);
      *(_QWORD *)v6 = 0;
      v29 = _mm_loadu_si128((const __m128i *)v6 + 2);
      v30 = _mm_loadh_ps((const double *)v6 + 2);
      *((_QWORD *)v6 + 3) = 0;
      v31 = *((_DWORD *)v6 + 12);
      *(_OWORD *)(v6 + 8) = 0;
      *((_OWORD *)v6 + 2) = 0;
      v32 = *(_QWORD *)v23;
      v33 = _mm_loadu_si128((const __m128i *)(v23 + 8));
      *(_QWORD *)v23 = 0;
      *(_OWORD *)(v23 + 8) = 0;
      v34 = *(const char **)v6;
      *(__m128 *)s2 = v30;
      v134 = v29;
      if ( v34 )
      {
        *((_QWORD *)v6 + 1) = 0;
        v135.m128i_i64[0] = v32;
        v136 = v33;
        qfree();
        v33 = _mm_load_si128(&v136);
        v32 = v135.m128i_i64[0];
      }
      *(_QWORD *)v6 = v32;
      *(__m128i *)(v6 + 8) = v33;
      v35 = *((_QWORD *)v23 + 3);
      v36 = _mm_loadu_si128((const __m128i *)v23 + 2);
      *((_QWORD *)v23 + 3) = 0;
      *((_OWORD *)v23 + 2) = 0;
      if ( *((_QWORD *)v6 + 3) )
      {
        *((_QWORD *)v6 + 4) = 0;
        v136.m128i_i64[0] = v35;
        v135 = v36;
        qfree();
        v35 = v136.m128i_i64[0];
        v36 = _mm_load_si128(&v135);
      }
      *((_QWORD *)v6 + 3) = v35;
      *((__m128i *)v6 + 2) = v36;
      *((_DWORD *)v6 + 12) = *((_DWORD *)v23 + 12);
      if ( *(_QWORD *)v23 )
      {
        *((_QWORD *)v23 + 1) = 0;
        qfree();
      }
      v37 = _mm_load_si128((const __m128i *)s2);
      v38 = *((_QWORD *)v23 + 3);
      *(_QWORD *)v23 = v27;
      *(__m128i *)(v23 + 8) = v37;
      if ( v38 )
      {
        *((_QWORD *)v23 + 4) = 0;
        qfree();
      }
      v39 = _mm_load_si128(&v134);
      v40 = (__int64)v137;
      *((_QWORD *)v23 + 3) = v28;
      v6 += 56;
      *((_DWORD *)v23 + 12) = v31;
      *((__m128i *)v23 + 2) = v39;
      v5 = *(_QWORD *)(v40 + 8);
    }
    sub_146670(v6, v138, v139);
    v4 = v6 - (char *)v137;
    if ( v6 - (char *)v137 > 896 )
    {
      v138 = v6;
      if ( !v139 )
        goto LABEL_34;
      continue;
    }
    return v148 - __readfsqword(0x28u);
  }
}

