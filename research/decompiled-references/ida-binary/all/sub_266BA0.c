unsigned __int64 __fastcall sub_266BA0(__int64 a1, char **a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  const char *v10; // r12
  int v11; // eax
  unsigned __int8 v12; // al
  unsigned __int8 v13; // si
  const char *v14; // rsi
  const char *v15; // rdi
  char *v16; // r8
  unsigned int v17; // eax
  const char *v18; // r8
  unsigned __int8 v19; // al
  unsigned __int8 v20; // si
  const char *v21; // rsi
  const char *v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // eax
  const char *v25; // rsi
  int v26; // eax
  unsigned __int8 v27; // al
  __m128i v28; // xmm1
  __int16 v29; // ax
  char *v30; // r12
  __int64 v31; // r14
  __m128i v32; // xmm1
  __int64 v33; // rax
  __m128i v34; // xmm1
  char *v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rdi
  char *v39; // rdi
  __m128i v40; // xmm1
  __int64 v41; // rdi
  __m128i si128; // xmm1
  __m128i v43; // xmm1
  char *v44; // rax
  char **v45; // rcx
  char *v46; // r12
  __m128i v47; // xmm1
  char v48; // r13
  char v49; // r14
  __int64 v50; // rax
  __m128i v51; // xmm1
  char *v52; // rdi
  char **v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdi
  char **v56; // rax
  __int64 v57; // rdi
  char **v58; // rax
  __m128i v59; // xmm1
  __int64 v60; // rdi
  char **v61; // rax
  __m128i v62; // xmm1
  char **v63; // r13
  const char *v64; // r12
  const char *v65; // rdi
  int v66; // eax
  unsigned __int8 v67; // al
  unsigned __int8 v68; // si
  const char *v69; // rsi
  const char *v70; // rdi
  char *v71; // rsi
  int v72; // eax
  unsigned __int8 v73; // al
  const char *v74; // rdi
  __int16 v75; // ax
  __m128i v76; // xmm5
  const char *v77; // r14
  __m128 v78; // xmm3
  char *v79; // r12
  __m128i v80; // xmm0
  __int64 v81; // rax
  const char *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rdi
  __m128i v86; // xmm7
  char *v87; // rdi
  __m128i v88; // xmm2
  char *v89; // r8
  char *v90; // rsi
  int v91; // eax
  const char *v92; // r8
  bool v93; // sf
  int v94; // eax
  const char *v95; // rdi
  int v96; // eax
  int v97; // eax
  unsigned __int8 v98; // dl
  unsigned __int8 v99; // al
  __m128i v100; // xmm1
  __int64 v101; // rdi
  __int16 v102; // dx
  __int64 v103; // rax
  __m128 v104; // xmm2
  __int64 v105; // rdi
  __m128i v106; // xmm2
  __m128i v107; // xmm1
  char *v108; // rax
  char **v109; // rdx
  char *v110; // r12
  __m128i v111; // xmm1
  char v112; // r13
  char v113; // r14
  __int64 v114; // rax
  __m128i v115; // xmm1
  char *v116; // rdi
  char **v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rdi
  char **v120; // rax
  __int64 v121; // rdi
  __m128i v122; // xmm1
  const char *v123; // r14
  __int64 v124; // rbp
  char v125; // cl
  char *v126; // rsi
  char v127; // dl
  char *v128; // rax
  __m128i v129; // xmm1
  __m128i v130; // xmm0
  const char *v131; // rsi
  char **v132; // rax
  char *v133; // r13
  char *v134; // rbp
  __m128i v135; // xmm1
  __m128i v136; // xmm0
  char v137; // r12
  char v138; // r14
  char *v139; // rcx
  __m128i v140; // xmm2
  char *v141; // rdi
  char **v142; // rax
  char *v143; // rcx
  __m128i v144; // xmm2
  char *v145; // rdi
  char **v146; // rax
  char **v147; // rbp
  __int64 v148; // rbp
  __m128i v150; // xmm1
  __int16 v151; // ax
  char *v152; // r12
  __int64 v153; // r14
  __m128i v154; // xmm1
  __int64 v155; // rax
  __m128i v156; // xmm1
  char *v157; // rdi
  __int64 v158; // rax
  __int64 v159; // rdi
  char *v160; // rdi
  __m128i v161; // xmm1
  __int64 v162; // rdi
  __m128i v163; // xmm1
  char *s2; // [rsp+8h] [rbp-D0h]
  __int16 s2a; // [rsp+8h] [rbp-D0h]
  char *s2b; // [rsp+8h] [rbp-D0h]
  __int16 s2c; // [rsp+8h] [rbp-D0h]
  char *s2e; // [rsp+8h] [rbp-D0h]
  __int16 s2d; // [rsp+8h] [rbp-D0h]
  char *v170[2]; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v171; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v172; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v173; // [rsp+40h] [rbp-98h] BYREF
  char **v174; // [rsp+50h] [rbp-88h]
  __int64 v175; // [rsp+58h] [rbp-80h]
  char *v176; // [rsp+60h] [rbp-78h] BYREF
  __m128i v177; // [rsp+68h] [rbp-70h]
  char v178; // [rsp+78h] [rbp-60h]
  char v179; // [rsp+79h] [rbp-5Fh]
  char *v180; // [rsp+80h] [rbp-58h]
  __m128i v181; // [rsp+88h] [rbp-50h]
  unsigned __int64 v182; // [rsp+98h] [rbp-40h]

  v174 = a2;
  v175 = a3;
  v182 = __readfsqword(0x28u);
  v3 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 <= 896 )
    return v182 - __readfsqword(0x28u);
  while ( 2 )
  {
    v5 = 0x6DB6DB6DB6DB6DB7LL * (v3 >> 3);
    v6 = v5 >> 1;
    if ( !v175 )
    {
      v123 = (const char *)(v6 - 1);
      v124 = a1 + 56 * v6;
      while ( 1 )
      {
        v125 = *(_BYTE *)(v124 - 32);
        v126 = *(char **)(v124 - 56);
        v127 = *(_BYTE *)(v124 - 31);
        v128 = *(char **)(v124 - 24);
        *(_QWORD *)(v124 - 56) = 0;
        v129 = _mm_loadu_si128((const __m128i *)(v124 - 48));
        v130 = _mm_loadu_si128((const __m128i *)(v124 - 16));
        v178 = v125;
        *(_QWORD *)(v124 - 24) = 0;
        v176 = v126;
        v131 = v123;
        v179 = v127;
        *(_OWORD *)(v124 - 48) = 0;
        *(_OWORD *)(v124 - 16) = 0;
        v180 = v128;
        v177 = v129;
        v181 = v130;
        sub_265600(a1, (__int64)v123, v5, (__int64)&v176);
        if ( v180 )
          *(double *)v130.m128i_i64 = qfree(v180, v123);
        if ( v176 )
          qfree(v176, v123, *(double *)v130.m128i_i64);
        v124 -= 56;
        if ( !v123 )
          break;
        --v123;
      }
      if ( (__int64)v174 - a1 > 56 )
      {
        do
        {
          v174 -= 7;
          v132 = v174;
          v133 = *v174;
          v134 = v174[4];
          *v174 = nullptr;
          v132[4] = nullptr;
          v135 = _mm_loadu_si128((const __m128i *)(v132 + 1));
          v136 = _mm_loadu_si128((const __m128i *)(v132 + 5));
          *(_OWORD *)(v132 + 1) = 0;
          v137 = *((_BYTE *)v132 + 24);
          *(_OWORD *)(v132 + 5) = 0;
          v138 = *((_BYTE *)v132 + 25);
          v139 = *(char **)a1;
          v140 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          *(_QWORD *)a1 = 0;
          *(_OWORD *)(a1 + 8) = 0;
          v141 = *v132;
          if ( *v132 )
          {
            v132[1] = nullptr;
            v170[0] = v139;
            v173 = v136;
            v172 = v135;
            v171 = v140;
            qfree(v141, v131);
            v136 = _mm_load_si128(&v173);
            v135 = _mm_load_si128(&v172);
            v140 = _mm_load_si128(&v171);
            v139 = v170[0];
          }
          v142 = v174;
          *v174 = v139;
          *(__m128i *)(v142 + 1) = v140;
          *((_BYTE *)v142 + 24) = *(_BYTE *)(a1 + 24);
          *((_BYTE *)v142 + 25) = *(_BYTE *)(a1 + 25);
          v143 = *(char **)(a1 + 32);
          v144 = _mm_loadu_si128((const __m128i *)(a1 + 40));
          *(_QWORD *)(a1 + 32) = 0;
          *(_OWORD *)(a1 + 40) = 0;
          v145 = v142[4];
          if ( v145 )
          {
            v142[5] = nullptr;
            v170[0] = v143;
            v173 = v144;
            v172 = v136;
            v171 = v135;
            qfree(v145, v131);
            v144 = _mm_load_si128(&v173);
            v136 = _mm_load_si128(&v172);
            v135 = _mm_load_si128(&v171);
            v143 = v170[0];
          }
          v146 = v174;
          v131 = nullptr;
          v176 = v133;
          v180 = v134;
          v147 = v174;
          v174[4] = v143;
          v148 = (__int64)v147 - a1;
          *(__m128i *)(v146 + 5) = v144;
          v178 = v137;
          v179 = v138;
          v177 = v135;
          v181 = v136;
          sub_265600(a1, 0, 0x6DB6DB6DB6DB6DB7LL * (v148 >> 3), (__int64)&v176);
          if ( v180 )
            qfree(v180, nullptr);
          if ( v176 )
            qfree(v176, nullptr);
        }
        while ( v148 > 56 );
      }
      return v182 - __readfsqword(0x28u);
    }
    --v175;
    v7 = *(_QWORD *)(a1 + 64);
    v8 = a1 + 56;
    v9 = a1 + 56 * v6;
    if ( *(_QWORD *)(v9 + 8) )
    {
      v10 = &s1;
      s2 = *(char **)v9;
      if ( !v7 )
        goto LABEL_6;
      goto LABEL_5;
    }
    s2 = (char *)&s1;
    if ( v7 )
    {
LABEL_5:
      v10 = *(const char **)(a1 + 56);
LABEL_6:
      v11 = strcmp(v10, s2);
      if ( v11 )
        goto LABEL_14;
      goto LABEL_7;
    }
    v10 = &s1;
LABEL_7:
    v12 = *(_BYTE *)(a1 + 80);
    v13 = *(_BYTE *)(v9 + 24);
    if ( v12 < v13 )
      goto LABEL_91;
    if ( v13 < v12 )
      goto LABEL_15;
    v14 = &s1;
    if ( *(_QWORD *)(v9 + 40) )
      v14 = *(const char **)(v9 + 32);
    v15 = &s1;
    if ( *(_QWORD *)(a1 + 96) )
      v15 = *(const char **)(a1 + 88);
    v11 = strcmp(v15, v14);
LABEL_14:
    if ( v11 >= 0 )
    {
LABEL_15:
      v16 = (char *)&s1;
      if ( *(v174 - 6) )
        v16 = *(v174 - 7);
      v170[0] = v16;
      v17 = strcmp(v10, v16);
      v18 = v170[0];
      if ( v17 )
      {
        v24 = v17 >> 31;
LABEL_23:
        if ( !(_BYTE)v24 )
        {
          v25 = v18;
          v26 = strcmp(s2, v18);
          if ( v26 )
            goto LABEL_30;
          v25 = (const char *)*(unsigned __int8 *)(v9 + 24);
          v27 = *((_BYTE *)v174 - 32);
          if ( (unsigned __int8)v25 < v27 )
            goto LABEL_40;
          if ( v27 < (unsigned __int8)v25 )
          {
LABEL_31:
            v28 = _mm_loadu_si128((const __m128i *)(a1 + 8));
            v29 = *(_WORD *)(a1 + 24);
            *(_OWORD *)(a1 + 8) = 0;
            v30 = *(char **)a1;
            v31 = *(_QWORD *)(a1 + 32);
            v171 = v28;
            v32 = _mm_loadu_si128((const __m128i *)(a1 + 40));
            *(_QWORD *)a1 = 0;
            *(_QWORD *)(a1 + 32) = 0;
            *(_OWORD *)(a1 + 40) = 0;
            s2a = v29;
            v33 = *(_QWORD *)v9;
            *(__m128i *)v170 = v32;
            v34 = _mm_loadu_si128((const __m128i *)(v9 + 8));
            *(_QWORD *)v9 = 0;
            *(_OWORD *)(v9 + 8) = 0;
            v35 = *(char **)a1;
            if ( *(_QWORD *)a1 )
            {
              *(_QWORD *)(a1 + 8) = 0;
              v173.m128i_i64[0] = v33;
              v172 = v34;
              qfree(v35, v25);
              v33 = v173.m128i_i64[0];
              v34 = _mm_load_si128(&v172);
            }
            *(__m128i *)(a1 + 8) = v34;
            *(_QWORD *)a1 = v33;
            *(_BYTE *)(a1 + 24) = *(_BYTE *)(v9 + 24);
            *(_BYTE *)(a1 + 25) = *(_BYTE *)(v9 + 25);
            v36 = *(_QWORD *)(v9 + 32);
            v37 = _mm_loadu_si128((const __m128i *)(v9 + 40));
            *(_QWORD *)(v9 + 32) = 0;
            *(_OWORD *)(v9 + 40) = 0;
            v38 = *(_QWORD *)(a1 + 32);
            if ( v38 )
            {
              *(_QWORD *)(a1 + 40) = 0;
              v173.m128i_i64[0] = v36;
              v172 = v37;
              qfree(v38, v25);
              v36 = v173.m128i_i64[0];
              v37 = _mm_load_si128(&v172);
            }
            *(_QWORD *)(a1 + 32) = v36;
            *(__m128i *)(a1 + 40) = v37;
            v39 = *(char **)v9;
            if ( *(_QWORD *)v9 )
            {
              *(_QWORD *)(v9 + 8) = 0;
              *(double *)v37.m128i_i64 = qfree(v39, v25);
            }
            v40 = _mm_load_si128(&v171);
            *(_QWORD *)v9 = v30;
            v41 = *(_QWORD *)(v9 + 32);
            *(_WORD *)(v9 + 24) = s2a;
            *(__m128i *)(v9 + 8) = v40;
            if ( v41 )
            {
              *(_QWORD *)(v9 + 40) = 0;
              *(double *)v37.m128i_i64 = qfree(v41, v25, *(double *)v37.m128i_i64);
            }
            si128 = _mm_load_si128((const __m128i *)v170);
            *(_QWORD *)(v9 + 32) = v31;
            *(__m128i *)(v9 + 40) = si128;
            v7 = *(_QWORD *)(a1 + 8);
            goto LABEL_49;
          }
          goto LABEL_27;
        }
LABEL_107:
        v100 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        v101 = *(_QWORD *)(a1 + 56);
        v102 = *(_WORD *)(a1 + 24);
        v103 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = *(_QWORD *)a1;
        *(_QWORD *)a1 = v101;
        LOWORD(v101) = *(_WORD *)(a1 + 80);
        v104 = _mm_loadh_ps((const double *)(a1 + 72));
        v37 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        *(_WORD *)(a1 + 80) = v102;
        *(_WORD *)(a1 + 24) = v101;
        v105 = *(_QWORD *)(a1 + 88);
        *(__m128 *)(a1 + 8) = v104;
        v106 = _mm_loadu_si128((const __m128i *)(a1 + 96));
        *(_QWORD *)(a1 + 32) = v105;
        *(_QWORD *)(a1 + 88) = v103;
        *(__m128i *)(a1 + 40) = v106;
        *(__m128i *)(a1 + 64) = v100;
        *(__m128i *)(a1 + 96) = v37;
        goto LABEL_49;
      }
      v19 = *(_BYTE *)(a1 + 80);
      v20 = *((_BYTE *)v174 - 32);
      if ( v19 < v20 )
        goto LABEL_107;
      if ( v20 < v19 )
      {
        v25 = v170[0];
        v26 = strcmp(s2, v170[0]);
        if ( v26 )
          goto LABEL_30;
        v25 = (const char *)*(unsigned __int8 *)(v9 + 24);
        if ( (_BYTE)v25 )
          goto LABEL_31;
LABEL_27:
        v25 = &s1;
        if ( *(v174 - 2) )
        {
          v25 = *(v174 - 3);
          if ( !*(_QWORD *)(v9 + 40) )
            goto LABEL_29;
        }
        else if ( !*(_QWORD *)(v9 + 40) )
        {
LABEL_29:
          v26 = strcmp(&s1, v25);
          goto LABEL_30;
        }
        v26 = strcmp(*(const char **)(v9 + 32), v25);
LABEL_30:
        if ( v26 >= 0 )
          goto LABEL_31;
LABEL_40:
        v43 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        v44 = *(char **)(a1 + 32);
        *(_QWORD *)(a1 + 32) = 0;
        v45 = v174;
        *(_OWORD *)(a1 + 8) = 0;
        v46 = *(char **)a1;
        *(__m128i *)v170 = v43;
        v47 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        v48 = *(_BYTE *)(a1 + 24);
        *(_QWORD *)a1 = 0;
        v49 = *(_BYTE *)(a1 + 25);
        *(_OWORD *)(a1 + 40) = 0;
        s2b = v44;
        v50 = (__int64)*(v45 - 7);
        v171 = v47;
        v51 = _mm_loadu_si128((const __m128i *)v45 - 3);
        *(v45 - 7) = nullptr;
        *((_OWORD *)v45 - 3) = 0;
        v52 = *(char **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          v173.m128i_i64[0] = v50;
          v172 = v51;
          qfree(v52, v25);
          v50 = v173.m128i_i64[0];
          v51 = _mm_load_si128(&v172);
        }
        v53 = v174;
        *(__m128i *)(a1 + 8) = v51;
        *(_QWORD *)a1 = v50;
        *(_BYTE *)(a1 + 24) = *((_BYTE *)v53 - 32);
        *(_BYTE *)(a1 + 25) = *((_BYTE *)v53 - 31);
        v54 = (__int64)*(v53 - 3);
        v37 = _mm_loadu_si128((const __m128i *)v53 - 1);
        *(v53 - 3) = nullptr;
        *((_OWORD *)v53 - 1) = 0;
        v55 = *(_QWORD *)(a1 + 32);
        if ( v55 )
        {
          *(_QWORD *)(a1 + 40) = 0;
          v172.m128i_i64[0] = v54;
          v173 = v37;
          qfree(v55, v25);
          v37 = _mm_load_si128(&v173);
          v54 = v172.m128i_i64[0];
        }
        *(_QWORD *)(a1 + 32) = v54;
        v56 = v174;
        *(__m128i *)(a1 + 40) = v37;
        v57 = (__int64)*(v56 - 7);
        if ( v57 )
        {
          *(v56 - 6) = nullptr;
          *(double *)v37.m128i_i64 = qfree(v57, v25);
        }
        v58 = v174;
        v59 = _mm_load_si128((const __m128i *)v170);
        v60 = (__int64)*(v174 - 3);
        *(v174 - 7) = v46;
        *((_BYTE *)v58 - 32) = v48;
        *((_BYTE *)v58 - 31) = v49;
        *((__m128i *)v58 - 3) = v59;
        if ( !v60 )
          goto LABEL_48;
        goto LABEL_47;
      }
      v21 = &s1;
      if ( *(v174 - 2) )
      {
        v21 = *(v174 - 3);
        v22 = &s1;
        if ( !*(_QWORD *)(a1 + 96) )
          goto LABEL_22;
      }
      else
      {
        v22 = &s1;
        if ( !*(_QWORD *)(a1 + 96) )
        {
LABEL_22:
          v23 = strcmp(v22, v21);
          v18 = v170[0];
          v24 = v23 >> 31;
          goto LABEL_23;
        }
      }
      v22 = *(const char **)(a1 + 88);
      goto LABEL_22;
    }
LABEL_91:
    v89 = (char *)&s1;
    if ( *(v174 - 6) )
      v89 = *(v174 - 7);
    v90 = v89;
    v170[0] = v89;
    v91 = strcmp(s2, v89);
    v92 = v170[0];
    v93 = v91 < 0;
    if ( v91 )
    {
LABEL_99:
      if ( !v93 )
      {
        v25 = v92;
        v97 = strcmp(v10, v92);
        if ( v97 )
          goto LABEL_106;
        v98 = *(_BYTE *)(a1 + 80);
        v99 = *((_BYTE *)v174 - 32);
        if ( v98 < v99 )
          goto LABEL_108;
        if ( v99 < v98 )
          goto LABEL_107;
        goto LABEL_103;
      }
LABEL_137:
      v150 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v151 = *(_WORD *)(a1 + 24);
      *(_OWORD *)(a1 + 8) = 0;
      v152 = *(char **)a1;
      v153 = *(_QWORD *)(a1 + 32);
      *(__m128i *)v170 = v150;
      v154 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_OWORD *)(a1 + 40) = 0;
      s2d = v151;
      v155 = *(_QWORD *)v9;
      v171 = v154;
      v156 = _mm_loadu_si128((const __m128i *)(v9 + 8));
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      v157 = *(char **)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v172.m128i_i64[0] = v155;
        v173 = v156;
        qfree(v157, v90);
        v156 = _mm_load_si128(&v173);
        v155 = v172.m128i_i64[0];
      }
      *(__m128i *)(a1 + 8) = v156;
      *(_QWORD *)a1 = v155;
      *(_BYTE *)(a1 + 24) = *(_BYTE *)(v9 + 24);
      *(_BYTE *)(a1 + 25) = *(_BYTE *)(v9 + 25);
      v158 = *(_QWORD *)(v9 + 32);
      v37 = _mm_loadu_si128((const __m128i *)(v9 + 40));
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 40) = 0;
      v159 = *(_QWORD *)(a1 + 32);
      if ( v159 )
      {
        *(_QWORD *)(a1 + 40) = 0;
        v172.m128i_i64[0] = v158;
        v173 = v37;
        qfree(v159, v90);
        v37 = _mm_load_si128(&v173);
        v158 = v172.m128i_i64[0];
      }
      *(_QWORD *)(a1 + 32) = v158;
      *(__m128i *)(a1 + 40) = v37;
      v160 = *(char **)v9;
      if ( *(_QWORD *)v9 )
      {
        *(_QWORD *)(v9 + 8) = 0;
        *(double *)v37.m128i_i64 = qfree(v160, v90);
      }
      v161 = _mm_load_si128((const __m128i *)v170);
      *(_QWORD *)v9 = v152;
      v162 = *(_QWORD *)(v9 + 32);
      *(_WORD *)(v9 + 24) = s2d;
      *(__m128i *)(v9 + 8) = v161;
      if ( v162 )
      {
        *(_QWORD *)(v9 + 40) = 0;
        *(double *)v37.m128i_i64 = qfree(v162, v90, *(double *)v37.m128i_i64);
      }
      v163 = _mm_load_si128(&v171);
      *(_QWORD *)(v9 + 32) = v153;
      *(__m128i *)(v9 + 40) = v163;
      v7 = *(_QWORD *)(a1 + 8);
      goto LABEL_49;
    }
    v94 = *(unsigned __int8 *)(v9 + 24);
    v90 = (char *)*((unsigned __int8 *)v174 - 32);
    if ( (unsigned __int8)v94 < (unsigned __int8)v90 )
      goto LABEL_137;
    if ( (unsigned __int8)v90 >= (unsigned __int8)v94 )
    {
      v90 = (char *)&s1;
      if ( *(v174 - 2) )
      {
        v90 = *(v174 - 3);
        v95 = &s1;
        if ( !*(_QWORD *)(v9 + 40) )
          goto LABEL_98;
      }
      else
      {
        v95 = &s1;
        if ( !*(_QWORD *)(v9 + 40) )
        {
LABEL_98:
          s2e = v170[0];
          v96 = strcmp(v95, v90);
          v92 = s2e;
          v93 = v96 < 0;
          goto LABEL_99;
        }
      }
      v95 = *(const char **)(v9 + 32);
      goto LABEL_98;
    }
    v25 = v170[0];
    v97 = strcmp(v10, v170[0]);
    if ( v97 )
      goto LABEL_106;
    if ( *(_BYTE *)(a1 + 80) )
      goto LABEL_107;
LABEL_103:
    v25 = &s1;
    if ( *(v174 - 2) )
    {
      v25 = *(v174 - 3);
      if ( !*(_QWORD *)(a1 + 96) )
        goto LABEL_105;
    }
    else if ( !*(_QWORD *)(a1 + 96) )
    {
LABEL_105:
      v97 = strcmp(&s1, v25);
      goto LABEL_106;
    }
    v97 = strcmp(*(const char **)(a1 + 88), v25);
LABEL_106:
    if ( v97 >= 0 )
      goto LABEL_107;
LABEL_108:
    v107 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v108 = *(char **)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0;
    v109 = v174;
    *(_OWORD *)(a1 + 8) = 0;
    v110 = *(char **)a1;
    *(__m128i *)v170 = v107;
    v111 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    v112 = *(_BYTE *)(a1 + 24);
    *(_QWORD *)a1 = 0;
    v113 = *(_BYTE *)(a1 + 25);
    *(_OWORD *)(a1 + 40) = 0;
    s2b = v108;
    v114 = (__int64)*(v109 - 7);
    v171 = v111;
    v115 = _mm_loadu_si128((const __m128i *)v109 - 3);
    *(v109 - 7) = nullptr;
    *((_OWORD *)v109 - 3) = 0;
    v116 = *(char **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v172.m128i_i64[0] = v114;
      v173 = v115;
      qfree(v116, v25);
      v115 = _mm_load_si128(&v173);
      v114 = v172.m128i_i64[0];
    }
    v117 = v174;
    *(__m128i *)(a1 + 8) = v115;
    *(_QWORD *)a1 = v114;
    *(_BYTE *)(a1 + 24) = *((_BYTE *)v117 - 32);
    *(_BYTE *)(a1 + 25) = *((_BYTE *)v117 - 31);
    v118 = (__int64)*(v117 - 3);
    v37 = _mm_loadu_si128((const __m128i *)v117 - 1);
    *(v117 - 3) = nullptr;
    *((_OWORD *)v117 - 1) = 0;
    v119 = *(_QWORD *)(a1 + 32);
    if ( v119 )
    {
      *(_QWORD *)(a1 + 40) = 0;
      v172.m128i_i64[0] = v118;
      v173 = v37;
      qfree(v119, v25);
      v37 = _mm_load_si128(&v173);
      v118 = v172.m128i_i64[0];
    }
    *(_QWORD *)(a1 + 32) = v118;
    v120 = v174;
    *(__m128i *)(a1 + 40) = v37;
    v121 = (__int64)*(v120 - 7);
    if ( v121 )
    {
      *(v120 - 6) = nullptr;
      *(double *)v37.m128i_i64 = qfree(v121, v25);
    }
    v58 = v174;
    v122 = _mm_load_si128((const __m128i *)v170);
    v60 = (__int64)*(v174 - 3);
    *(v174 - 7) = v110;
    *((_BYTE *)v58 - 32) = v112;
    *((_BYTE *)v58 - 31) = v113;
    *((__m128i *)v58 - 3) = v122;
    if ( !v60 )
      goto LABEL_48;
LABEL_47:
    *(v58 - 2) = nullptr;
    *(double *)v37.m128i_i64 = qfree(v60, v25, *(double *)v37.m128i_i64);
LABEL_48:
    v61 = v174;
    v62 = _mm_load_si128(&v171);
    *(v174 - 3) = s2b;
    *((__m128i *)v61 - 1) = v62;
    v7 = *(_QWORD *)(a1 + 8);
LABEL_49:
    v63 = v174;
    while ( 1 )
    {
LABEL_62:
      if ( !v7 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v8 + 8) )
          {
            v64 = &s1;
            goto LABEL_51;
          }
          v67 = *(_BYTE *)(v8 + 24);
          v68 = *(_BYTE *)(a1 + 24);
          if ( v67 >= v68 )
            break;
          v8 += 56LL;
        }
        v64 = &s1;
LABEL_54:
        if ( v68 < v67 )
          goto LABEL_65;
        v69 = &s1;
        if ( *(_QWORD *)(a1 + 40) )
          v69 = *(const char **)(a1 + 32);
        v70 = &s1;
        if ( *(_QWORD *)(v8 + 40) )
          v70 = *(const char **)(v8 + 32);
        v66 = strcmp(v70, v69);
        goto LABEL_60;
      }
      v64 = *(const char **)a1;
      v65 = &s1;
      if ( *(_QWORD *)(v8 + 8) )
LABEL_51:
        v65 = *(const char **)v8;
      v66 = strcmp(v65, v64);
      if ( !v66 )
      {
        v67 = *(_BYTE *)(v8 + 24);
        v68 = *(_BYTE *)(a1 + 24);
        if ( v67 < v68 )
          goto LABEL_61;
        goto LABEL_54;
      }
LABEL_60:
      if ( v66 >= 0 )
        break;
LABEL_61:
      v8 += 56LL;
    }
    while ( 1 )
    {
LABEL_65:
      v63 -= 7;
      v71 = (char *)&s1;
      if ( v63[1] )
        v71 = *v63;
      v72 = strcmp(v64, v71);
      if ( v72 )
        goto LABEL_75;
      v73 = *(_BYTE *)(a1 + 24);
      v71 = (char *)*((unsigned __int8 *)v63 + 24);
      if ( v73 >= (unsigned __int8)v71 )
      {
        if ( (unsigned __int8)v71 < v73 )
          break;
        v71 = (char *)&s1;
        if ( v63[5] )
          v71 = v63[4];
        v74 = &s1;
        if ( *(_QWORD *)(a1 + 40) )
          v74 = *(const char **)(a1 + 32);
        v72 = strcmp(v74, v71);
LABEL_75:
        if ( v72 >= 0 )
          break;
      }
    }
    if ( v8 < (unsigned __int64)v63 )
    {
      v75 = *(_WORD *)(v8 + 24);
      v76 = _mm_loadu_si128((const __m128i *)(v8 + 40));
      v77 = *(const char **)v8;
      *(_OWORD *)(v8 + 40) = 0;
      *(_QWORD *)v8 = 0;
      v78 = _mm_loadh_ps((const double *)(v8 + 16));
      v79 = *(char **)(v8 + 32);
      *(_OWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 32) = 0;
      v80 = _mm_loadu_si128((const __m128i *)(v63 + 1));
      s2c = v75;
      v81 = (__int64)*v63;
      *(_OWORD *)(v63 + 1) = 0;
      *v63 = nullptr;
      v82 = *(const char **)v8;
      *(__m128 *)v170 = v78;
      v171 = v76;
      if ( v82 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        v172.m128i_i64[0] = v81;
        v173 = v80;
        qfree(v82, v71);
        v80 = _mm_load_si128(&v173);
        v81 = v172.m128i_i64[0];
      }
      *(_QWORD *)v8 = v81;
      *(__m128i *)(v8 + 8) = v80;
      *(_BYTE *)(v8 + 24) = *((_BYTE *)v63 + 24);
      *(_BYTE *)(v8 + 25) = *((_BYTE *)v63 + 25);
      v83 = (__int64)v63[4];
      v37 = _mm_loadu_si128((const __m128i *)(v63 + 5));
      v63[4] = nullptr;
      *(_OWORD *)(v63 + 5) = 0;
      v84 = *(_QWORD *)(v8 + 32);
      if ( v84 )
      {
        *(_QWORD *)(v8 + 40) = 0;
        v172.m128i_i64[0] = v83;
        v173 = v37;
        qfree(v84, v71);
        v37 = _mm_load_si128(&v173);
        v83 = v172.m128i_i64[0];
      }
      *(_QWORD *)(v8 + 32) = v83;
      *(__m128i *)(v8 + 40) = v37;
      v85 = (__int64)*v63;
      if ( *v63 )
      {
        v63[1] = nullptr;
        *(double *)v37.m128i_i64 = qfree(v85, v71);
      }
      v86 = _mm_load_si128((const __m128i *)v170);
      *v63 = (char *)v77;
      v87 = v63[4];
      *((_WORD *)v63 + 12) = s2c;
      *(__m128i *)(v63 + 1) = v86;
      if ( v87 )
      {
        v63[5] = nullptr;
        *(double *)v37.m128i_i64 = qfree(v87, v71, *(double *)v37.m128i_i64);
      }
      v88 = _mm_load_si128(&v171);
      v63[4] = v79;
      v8 += 56LL;
      *(__m128i *)(v63 + 5) = v88;
      v7 = *(_QWORD *)(a1 + 8);
      goto LABEL_62;
    }
    sub_266BA0(v8, v174, v175, *(double *)v37.m128i_i64);
    v3 = v8 - a1;
    if ( (__int64)(v8 - a1) > 896 )
    {
      v174 = (char **)v8;
      continue;
    }
    return v182 - __readfsqword(0x28u);
  }
}
