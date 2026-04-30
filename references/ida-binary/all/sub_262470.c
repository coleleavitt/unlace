unsigned __int64 __fastcall sub_262470(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v8; // rbx
  const char *v9; // rcx
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // r9
  __m128i v15; // xmm3
  __int64 v16; // rdi
  __m128i v17; // xmm2
  __int64 v18; // rcx
  __int64 v19; // r10
  __int16 v20; // dx
  unsigned __int64 v21; // rsi
  __m128i v22; // xmm3
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // r10
  __m128i v26; // xmm3
  unsigned __int64 v27; // rdi
  const char *v28; // rsi
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // r14
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  __int64 v34; // r13
  __m128i v35; // xmm5
  __m128i v36; // xmm0
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rdi
  __int64 v40; // rcx
  __m128i v41; // xmm0
  __int64 v42; // rdi
  __m128i v43; // xmm1
  __int64 v44; // rdi
  __m128i v45; // xmm2
  __int64 v46; // rdi
  __int64 v47; // rax
  __m128i v48; // xmm5
  unsigned __int64 v49; // rcx
  const char *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r12
  __int64 v56; // rbp
  __m128i v57; // xmm7
  __m128i v58; // xmm3
  __m128i v59; // xmm7
  __int64 v60; // r14
  __int16 v61; // r13
  __m128i v62; // xmm0
  __int64 v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // rdi
  __int64 v66; // rax
  __m128i v67; // xmm0
  __int64 v68; // rdi
  __m128i v69; // xmm3
  __int64 v70; // rax
  __m128i v71; // xmm7
  __m128i v72; // xmm2
  __int64 v73; // rcx
  __int64 v74; // rbp
  __m128i v76; // xmm2
  __int64 v77; // rax
  __m128i v78; // xmm3
  __int64 v79; // r13
  __m128i v80; // xmm1
  __int16 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rcx
  __m128i v84; // xmm2
  __int64 v85; // rdi
  __int64 v86; // rcx
  __m128i v87; // xmm0
  __int64 v88; // rdi
  __int64 v89; // rdi
  __m128i v90; // xmm1
  __int64 v91; // rdi
  __int64 v92; // rax
  __m128i v93; // xmm7
  __int64 v94; // rax
  const char *v95; // rdi
  __m128i v96; // xmm3
  __int64 v97; // rax
  __m128i v98; // xmm7
  __int64 v99; // r13
  __m128i v100; // xmm1
  __int64 v101; // rbp
  __int16 v102; // r14
  __int64 v103; // rdx
  __m128i v104; // xmm2
  __int64 v105; // rdi
  __int64 v106; // rdx
  __m128i v107; // xmm0
  __int64 v108; // rdi
  __int64 v109; // rdi
  __m128i v110; // xmm1
  __int64 v111; // rdi
  __int64 v112; // rax
  __m128i v113; // xmm1
  __int64 v114; // rax
  __m128i v115; // xmm3
  __m128i v116; // xmm7
  __int64 v117; // r13
  __m128i v118; // xmm1
  __int16 v119; // r14
  __int64 v120; // rax
  __int64 v121; // rcx
  __m128i v122; // xmm2
  __int64 v123; // rdi
  __int64 v124; // rcx
  __m128i v125; // xmm0
  __int64 v126; // rdi
  __int64 v127; // rdi
  __m128i v128; // xmm1
  __int64 v129; // rdi
  __int64 v130; // rax
  __m128i v131; // xmm1
  __int64 v132; // rax
  __m128i v133; // xmm3
  __int64 v134; // rax
  __m128i v135; // xmm7
  __int64 v136; // r13
  __m128i v137; // xmm1
  __int64 v138; // rdx
  __m128i v139; // xmm2
  __int64 v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // rdi
  __int64 v143; // rdi
  __m128i v144; // xmm1
  __m128i v145; // [rsp+0h] [rbp-118h] BYREF
  __m128i v146; // [rsp+10h] [rbp-108h] BYREF
  __m128i v147; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v148; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v149; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v150; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v151; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v152; // [rsp+78h] [rbp-A0h]
  __m128i v153; // [rsp+80h] [rbp-98h] BYREF
  __int64 v154; // [rsp+90h] [rbp-88h]
  __m128i v155; // [rsp+98h] [rbp-80h]
  __int64 v156; // [rsp+A8h] [rbp-70h]
  __m128i v157; // [rsp+B0h] [rbp-68h]
  __int64 v158; // [rsp+C0h] [rbp-58h]
  __int16 v159; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v160; // [rsp+D8h] [rbp-40h]

  v152 = a3;
  v160 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1280 )
  {
    v8 = a2;
    while ( v152 )
    {
      v9 = *(const char **)(a1 + 80);
      --v152;
      v10 = a1 + 80;
      v11 = a1 + 80 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v6 >> 4)) >> 1);
      v12 = *(const char **)v11;
      if ( *(_QWORD *)v11 < (unsigned __int64)v9 )
      {
        v13 = *(const char **)(v8 - 80);
        if ( v13 < v9 )
          goto LABEL_80;
LABEL_5:
        if ( v9 == v13 && *(_QWORD *)(a1 + 88) >= *(_QWORD *)(v8 - 72) )
        {
LABEL_80:
          if ( v13 < v12 || v12 == v13 && *(_QWORD *)(v11 + 8) >= *(_QWORD *)(v8 - 72) )
          {
LABEL_45:
            v76 = _mm_loadu_si128((const __m128i *)(a1 + 48));
            v77 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 40) = 0;
            *(_OWORD *)(a1 + 48) = 0;
            v78 = _mm_loadu_si128((const __m128i *)(a1 + 24));
            v79 = *(_QWORD *)(a1 + 16);
            *(_OWORD *)(a1 + 24) = 0;
            v80 = _mm_loadu_si128((const __m128i *)a1);
            v81 = *(_WORD *)(a1 + 72);
            *(_QWORD *)(a1 + 16) = 0;
            v147 = v76;
            v145.m128i_i64[0] = v77;
            v82 = *(_QWORD *)(a1 + 64);
            *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v11);
            v83 = *(_QWORD *)(v11 + 16);
            v84 = _mm_loadu_si128((const __m128i *)(v11 + 24));
            *(_QWORD *)(v11 + 16) = 0;
            *(_OWORD *)(v11 + 24) = 0;
            v85 = *(_QWORD *)(a1 + 16);
            v146.m128i_i64[0] = v82;
            v148 = v78;
            if ( v85 )
            {
              *(_QWORD *)(a1 + 24) = 0;
              v149.m128i_i64[0] = v83;
              v151 = v80;
              v150 = v84;
              qfree(v85, v12);
              v80 = _mm_load_si128(&v151);
              v84 = _mm_load_si128(&v150);
              v83 = v149.m128i_i64[0];
            }
            *(__m128i *)(a1 + 24) = v84;
            *(_QWORD *)(a1 + 16) = v83;
            v86 = *(_QWORD *)(v11 + 40);
            v87 = _mm_loadu_si128((const __m128i *)(v11 + 48));
            *(_QWORD *)(v11 + 40) = 0;
            *(_OWORD *)(v11 + 48) = 0;
            v88 = *(_QWORD *)(a1 + 40);
            if ( v88 )
            {
              *(_QWORD *)(a1 + 48) = 0;
              v149.m128i_i64[0] = v86;
              v151 = v80;
              v150 = v87;
              qfree(v88, v12);
              v80 = _mm_load_si128(&v151);
              v87 = _mm_load_si128(&v150);
              v86 = v149.m128i_i64[0];
            }
            *(_QWORD *)(a1 + 40) = v86;
            *(__m128i *)(a1 + 48) = v87;
            *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 64);
            *(_BYTE *)(a1 + 72) = *(_BYTE *)(v11 + 72);
            *(_BYTE *)(a1 + 73) = *(_BYTE *)(v11 + 73);
            v89 = *(_QWORD *)(v11 + 16);
            *(__m128i *)v11 = v80;
            if ( v89 )
            {
              *(_QWORD *)(v11 + 24) = 0;
              *(double *)v87.m128i_i64 = qfree(v89, v12);
            }
            v90 = _mm_load_si128(&v148);
            v91 = *(_QWORD *)(v11 + 40);
            *(_QWORD *)(v11 + 16) = v79;
            *(__m128i *)(v11 + 24) = v90;
            if ( v91 )
            {
              *(_QWORD *)(v11 + 48) = 0;
              qfree(v91, v12, *(double *)v87.m128i_i64);
            }
            v92 = v145.m128i_i64[0];
            v93 = _mm_load_si128(&v147);
            *(_WORD *)(v11 + 72) = v81;
            *(_QWORD *)(v11 + 40) = v92;
            v94 = v146.m128i_i64[0];
            *(__m128i *)(v11 + 48) = v93;
            *(_QWORD *)(v11 + 64) = v94;
            v21 = *(_QWORD *)(a1 + 80);
            goto LABEL_7;
          }
          v133 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          v134 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = 0;
          *(_OWORD *)(a1 + 24) = 0;
          v135 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          v136 = *(_QWORD *)(a1 + 16);
          *(_OWORD *)(a1 + 48) = 0;
          v137 = _mm_loadu_si128((const __m128i *)a1);
          v101 = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 16) = 0;
          v102 = *(_WORD *)(a1 + 72);
          v145.m128i_i64[0] = v134;
          *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(v8 - 80));
          v138 = *(_QWORD *)(v8 - 64);
          v139 = _mm_loadu_si128((const __m128i *)(v8 - 56));
          *(_QWORD *)(v8 - 64) = 0;
          *(_OWORD *)(v8 - 56) = 0;
          v140 = *(_QWORD *)(a1 + 16);
          v147 = v133;
          v146 = v135;
          if ( v140 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            v148.m128i_i64[0] = v138;
            v150 = v139;
            v149 = v137;
            qfree(v140, v12);
            v139 = _mm_load_si128(&v150);
            v137 = _mm_load_si128(&v149);
            v138 = v148.m128i_i64[0];
          }
          *(__m128i *)(a1 + 24) = v139;
          *(_QWORD *)(a1 + 16) = v138;
          v141 = *(_QWORD *)(v8 - 40);
          v107 = _mm_loadu_si128((const __m128i *)(v8 - 32));
          *(_QWORD *)(v8 - 40) = 0;
          *(_OWORD *)(v8 - 32) = 0;
          v142 = *(_QWORD *)(a1 + 40);
          if ( v142 )
          {
            *(_QWORD *)(a1 + 48) = 0;
            v148.m128i_i64[0] = v141;
            v150 = v137;
            v149 = v107;
            qfree(v142, v12);
            v137 = _mm_load_si128(&v150);
            v107 = _mm_load_si128(&v149);
            v141 = v148.m128i_i64[0];
          }
          *(_QWORD *)(a1 + 40) = v141;
          *(__m128i *)(a1 + 48) = v107;
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(v8 - 16);
          *(_BYTE *)(a1 + 72) = *(_BYTE *)(v8 - 8);
          *(_BYTE *)(a1 + 73) = *(_BYTE *)(v8 - 7);
          v143 = *(_QWORD *)(v8 - 64);
          *(__m128i *)(v8 - 80) = v137;
          if ( v143 )
          {
            *(_QWORD *)(v8 - 56) = 0;
            *(double *)v107.m128i_i64 = qfree(v143, v12);
          }
          v144 = _mm_load_si128(&v147);
          v111 = *(_QWORD *)(v8 - 40);
          *(_QWORD *)(v8 - 64) = v136;
          *(__m128i *)(v8 - 56) = v144;
          if ( v111 )
          {
LABEL_65:
            *(_QWORD *)(v8 - 32) = 0;
            qfree(v111, v12, *(double *)v107.m128i_i64);
          }
LABEL_66:
          v112 = v145.m128i_i64[0];
          v113 = _mm_load_si128(&v146);
          *(_QWORD *)(v8 - 16) = v101;
          *(_WORD *)(v8 - 8) = v102;
          *(_QWORD *)(v8 - 40) = v112;
          *(__m128i *)(v8 - 32) = v113;
          v21 = *(_QWORD *)(a1 + 80);
          goto LABEL_7;
        }
        goto LABEL_6;
      }
      if ( v9 == v12 )
      {
        if ( *(_QWORD *)(a1 + 88) >= *(_QWORD *)(v11 + 8) )
        {
          v13 = *(const char **)(v8 - 80);
          if ( v13 < v9 )
            goto LABEL_45;
          goto LABEL_5;
        }
        v95 = *(const char **)(v8 - 80);
        if ( v95 < v9 )
          goto LABEL_6;
      }
      else
      {
        v95 = *(const char **)(v8 - 80);
        if ( v95 < v12 )
        {
          if ( v95 < v9 )
            goto LABEL_6;
          goto LABEL_56;
        }
      }
      if ( v12 != v95 || *(_QWORD *)(v11 + 8) < *(_QWORD *)(v8 - 72) )
      {
        v114 = *(_QWORD *)(a1 + 40);
        v115 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v116 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v117 = *(_QWORD *)(a1 + 16);
        *(_OWORD *)(a1 + 48) = 0;
        v118 = _mm_loadu_si128((const __m128i *)a1);
        v119 = *(_WORD *)(a1 + 72);
        *(_QWORD *)(a1 + 16) = 0;
        v145.m128i_i64[0] = v114;
        v120 = *(_QWORD *)(a1 + 64);
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v11);
        v121 = *(_QWORD *)(v11 + 16);
        v122 = _mm_loadu_si128((const __m128i *)(v11 + 24));
        *(_QWORD *)(v11 + 16) = 0;
        *(_OWORD *)(v11 + 24) = 0;
        v123 = *(_QWORD *)(a1 + 16);
        v146.m128i_i64[0] = v120;
        v147 = v115;
        v148 = v116;
        if ( v123 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v149.m128i_i64[0] = v121;
          v151 = v122;
          v150 = v118;
          qfree(v123, v12);
          v122 = _mm_load_si128(&v151);
          v118 = _mm_load_si128(&v150);
          v121 = v149.m128i_i64[0];
        }
        *(__m128i *)(a1 + 24) = v122;
        *(_QWORD *)(a1 + 16) = v121;
        v124 = *(_QWORD *)(v11 + 40);
        v125 = _mm_loadu_si128((const __m128i *)(v11 + 48));
        *(_QWORD *)(v11 + 40) = 0;
        *(_OWORD *)(v11 + 48) = 0;
        v126 = *(_QWORD *)(a1 + 40);
        if ( v126 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v149.m128i_i64[0] = v124;
          v151 = v125;
          v150 = v118;
          qfree(v126, v12);
          v125 = _mm_load_si128(&v151);
          v118 = _mm_load_si128(&v150);
          v124 = v149.m128i_i64[0];
        }
        *(_QWORD *)(a1 + 40) = v124;
        *(__m128i *)(a1 + 48) = v125;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 64);
        *(_BYTE *)(a1 + 72) = *(_BYTE *)(v11 + 72);
        *(_BYTE *)(a1 + 73) = *(_BYTE *)(v11 + 73);
        v127 = *(_QWORD *)(v11 + 16);
        *(__m128i *)v11 = v118;
        if ( v127 )
        {
          *(_QWORD *)(v11 + 24) = 0;
          *(double *)v125.m128i_i64 = qfree(v127, v12);
        }
        v128 = _mm_load_si128(&v147);
        v129 = *(_QWORD *)(v11 + 40);
        *(_QWORD *)(v11 + 16) = v117;
        *(__m128i *)(v11 + 24) = v128;
        if ( v129 )
        {
          *(_QWORD *)(v11 + 48) = 0;
          qfree(v129, v12, *(double *)v125.m128i_i64);
        }
        v130 = v145.m128i_i64[0];
        v131 = _mm_load_si128(&v148);
        *(_WORD *)(v11 + 72) = v119;
        *(_QWORD *)(v11 + 40) = v130;
        v132 = v146.m128i_i64[0];
        *(__m128i *)(v11 + 48) = v131;
        *(_QWORD *)(v11 + 64) = v132;
        v21 = *(_QWORD *)(a1 + 80);
        goto LABEL_7;
      }
LABEL_56:
      if ( v9 != v95 || *(_QWORD *)(a1 + 88) < *(_QWORD *)(v8 - 72) )
      {
        v96 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        v97 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v98 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v99 = *(_QWORD *)(a1 + 16);
        *(_OWORD *)(a1 + 48) = 0;
        v100 = _mm_loadu_si128((const __m128i *)a1);
        v101 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 16) = 0;
        v102 = *(_WORD *)(a1 + 72);
        v145.m128i_i64[0] = v97;
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(v8 - 80));
        v103 = *(_QWORD *)(v8 - 64);
        v104 = _mm_loadu_si128((const __m128i *)(v8 - 56));
        *(_QWORD *)(v8 - 64) = 0;
        *(_OWORD *)(v8 - 56) = 0;
        v105 = *(_QWORD *)(a1 + 16);
        v147 = v96;
        v146 = v98;
        if ( v105 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v148.m128i_i64[0] = v103;
          v150 = v100;
          v149 = v104;
          qfree(v105, v12);
          v100 = _mm_load_si128(&v150);
          v104 = _mm_load_si128(&v149);
          v103 = v148.m128i_i64[0];
        }
        *(__m128i *)(a1 + 24) = v104;
        *(_QWORD *)(a1 + 16) = v103;
        v106 = *(_QWORD *)(v8 - 40);
        v107 = _mm_loadu_si128((const __m128i *)(v8 - 32));
        *(_QWORD *)(v8 - 40) = 0;
        *(_OWORD *)(v8 - 32) = 0;
        v108 = *(_QWORD *)(a1 + 40);
        if ( v108 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v148.m128i_i64[0] = v106;
          v150 = v100;
          v149 = v107;
          qfree(v108, v12);
          v100 = _mm_load_si128(&v150);
          v107 = _mm_load_si128(&v149);
          v106 = v148.m128i_i64[0];
        }
        *(_QWORD *)(a1 + 40) = v106;
        *(__m128i *)(a1 + 48) = v107;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(v8 - 16);
        *(_BYTE *)(a1 + 72) = *(_BYTE *)(v8 - 8);
        *(_BYTE *)(a1 + 73) = *(_BYTE *)(v8 - 7);
        v109 = *(_QWORD *)(v8 - 64);
        *(__m128i *)(v8 - 80) = v100;
        if ( v109 )
        {
          *(_QWORD *)(v8 - 56) = 0;
          *(double *)v107.m128i_i64 = qfree(v109, v12);
        }
        v110 = _mm_load_si128(&v147);
        v111 = *(_QWORD *)(v8 - 40);
        *(_QWORD *)(v8 - 64) = v99;
        *(__m128i *)(v8 - 56) = v110;
        if ( v111 )
          goto LABEL_65;
        goto LABEL_66;
      }
LABEL_6:
      v14 = *(_QWORD *)(a1 + 16);
      v15 = _mm_loadu_si128((const __m128i *)(a1 + 80));
      v16 = *(_QWORD *)(a1 + 40);
      v17 = _mm_loadu_si128((const __m128i *)a1);
      v18 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 96);
      v19 = *(_QWORD *)(a1 + 120);
      v20 = *(_WORD *)(a1 + 72);
      *(_QWORD *)(a1 + 96) = v14;
      v21 = *(_QWORD *)a1;
      *(__m128i *)a1 = v15;
      v22 = _mm_loadu_si128((const __m128i *)(a1 + 104));
      v23 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      v24 = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)(a1 + 40) = v19;
      v25 = *(_QWORD *)(a1 + 144);
      *(__m128i *)(a1 + 24) = v22;
      v26 = _mm_loadu_si128((const __m128i *)(a1 + 128));
      *(_QWORD *)(a1 + 120) = v16;
      *(_QWORD *)(a1 + 64) = v25;
      LOWORD(v25) = *(_WORD *)(a1 + 152);
      *(_QWORD *)(a1 + 144) = v18;
      *(_WORD *)(a1 + 72) = v25;
      *(_WORD *)(a1 + 152) = v20;
      *(__m128i *)(a1 + 48) = v26;
      *(__m128i *)(a1 + 80) = v17;
      *(__m128i *)(a1 + 104) = v23;
      *(__m128i *)(a1 + 128) = v24;
LABEL_7:
      v27 = v8;
      while ( 1 )
      {
        v49 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= v21 )
        {
          while ( v21 < v49 || *(_QWORD *)(v10 + 8) < *(_QWORD *)(a1 + 8) )
          {
            v21 = *(_QWORD *)(v10 + 80);
            v10 += 80LL;
            if ( v49 < v21 )
            {
              v28 = *(const char **)(v27 - 80);
              v29 = v27 - 80;
              if ( (unsigned __int64)v28 >= v49 )
                goto LABEL_24;
              goto LABEL_9;
            }
          }
        }
        v28 = *(const char **)(v27 - 80);
        v29 = v27 - 80;
        if ( (unsigned __int64)v28 >= v49 )
        {
LABEL_24:
          while ( v49 < (unsigned __int64)v28 || *(_QWORD *)(a1 + 8) < *(_QWORD *)(v29 + 8) )
          {
            v28 = *(const char **)(v29 - 80);
            v29 -= 80LL;
            if ( (unsigned __int64)v28 < v49 )
            {
              if ( v10 < v29 )
                goto LABEL_10;
              goto LABEL_28;
            }
          }
        }
LABEL_9:
        if ( v10 >= v29 )
          break;
LABEL_10:
        v30 = *(_QWORD *)(v10 + 64);
        v31 = *(_QWORD *)(v10 + 16);
        *(_QWORD *)(v10 + 16) = 0;
        v32 = _mm_loadu_si128((const __m128i *)(v10 + 24));
        v33 = _mm_loadu_si128((const __m128i *)(v10 + 48));
        *(_OWORD *)(v10 + 24) = 0;
        v34 = *(_QWORD *)(v10 + 40);
        v35 = _mm_loadu_si128((const __m128i *)v10);
        *(_OWORD *)(v10 + 48) = 0;
        *(_QWORD *)(v10 + 40) = 0;
        v36 = _mm_loadu_si128((const __m128i *)v29);
        v148.m128i_i64[0] = v30;
        LOWORD(v30) = *(_WORD *)(v10 + 72);
        *(__m128i *)v10 = v36;
        v37 = *(_QWORD *)(v29 + 16);
        v38 = _mm_loadu_si128((const __m128i *)(v29 + 24));
        *(_QWORD *)(v29 + 16) = 0;
        *(_OWORD *)(v29 + 24) = 0;
        v39 = *(_QWORD *)(v10 + 16);
        v145.m128i_i16[0] = v30;
        v147 = v35;
        v149 = v32;
        v146 = v33;
        if ( v39 )
        {
          *(_QWORD *)(v10 + 24) = 0;
          v150.m128i_i64[0] = v37;
          v151 = v38;
          qfree(v39, v28);
          v38 = _mm_load_si128(&v151);
          v37 = v150.m128i_i64[0];
        }
        *(_QWORD *)(v10 + 16) = v37;
        *(__m128i *)(v10 + 24) = v38;
        v40 = *(_QWORD *)(v29 + 40);
        v41 = _mm_loadu_si128((const __m128i *)(v29 + 48));
        *(_QWORD *)(v29 + 40) = 0;
        *(_OWORD *)(v29 + 48) = 0;
        v42 = *(_QWORD *)(v10 + 40);
        if ( v42 )
        {
          *(_QWORD *)(v10 + 48) = 0;
          v151.m128i_i64[0] = v40;
          v150 = v41;
          qfree(v42, v28);
          v40 = v151.m128i_i64[0];
          v41 = _mm_load_si128(&v150);
        }
        *(_QWORD *)(v10 + 40) = v40;
        v43 = _mm_load_si128(&v147);
        *(__m128i *)(v10 + 48) = v41;
        *(_QWORD *)(v10 + 64) = *(_QWORD *)(v29 + 64);
        *(_BYTE *)(v10 + 72) = *(_BYTE *)(v29 + 72);
        *(_BYTE *)(v10 + 73) = *(_BYTE *)(v29 + 73);
        v44 = *(_QWORD *)(v29 + 16);
        *(__m128i *)v29 = v43;
        if ( v44 )
        {
          *(_QWORD *)(v29 + 24) = 0;
          *(double *)v41.m128i_i64 = qfree(v44, v28);
        }
        v45 = _mm_load_si128(&v149);
        v46 = *(_QWORD *)(v29 + 40);
        *(_QWORD *)(v29 + 16) = v31;
        *(__m128i *)(v29 + 24) = v45;
        if ( v46 )
        {
          *(_QWORD *)(v29 + 48) = 0;
          qfree(v46, v28, *(double *)v41.m128i_i64);
        }
        v47 = v148.m128i_i64[0];
        *(_QWORD *)(v29 + 40) = v34;
        v27 = v29;
        v10 += 80LL;
        v48 = _mm_load_si128(&v146);
        *(_QWORD *)(v29 + 64) = v47;
        LOWORD(v47) = v145.m128i_i16[0];
        *(__m128i *)(v29 + 48) = v48;
        *(_WORD *)(v29 + 72) = v47;
        v21 = *(_QWORD *)v10;
      }
LABEL_28:
      sub_262470(v10, v8, v152);
      v6 = v10 - a1;
      if ( (__int64)(v10 - a1) <= 1280 )
        return v160 - __readfsqword(0x28u);
      v8 = v10;
    }
    v50 = (const char *)v8;
    sub_262100(a1, (const char *)v8, v8, a4, a5, a6);
    if ( (__int64)(v8 - a1) > 80 )
    {
      v148.m128i_i64[0] = (__int64)&v153;
      do
      {
        v55 = *(_QWORD *)(v8 - 64);
        v56 = *(_QWORD *)(v8 - 40);
        v8 -= 80LL;
        v57 = _mm_loadu_si128((const __m128i *)v8);
        *(_QWORD *)(v8 + 16) = 0;
        *(_QWORD *)(v8 + 40) = 0;
        v58 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        v147 = v57;
        v59 = _mm_loadu_si128((const __m128i *)(v8 + 48));
        v60 = *(_QWORD *)(v8 + 64);
        *(_OWORD *)(v8 + 24) = 0;
        v61 = *(_WORD *)(v8 + 72);
        *(_OWORD *)(v8 + 48) = 0;
        v62 = _mm_loadu_si128((const __m128i *)a1);
        v146 = v58;
        *(__m128i *)v8 = v62;
        v63 = *(_QWORD *)(a1 + 16);
        v64 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v65 = *(_QWORD *)(v8 + 16);
        v145 = v59;
        if ( v65 )
        {
          *(_QWORD *)(v8 + 24) = 0;
          v149.m128i_i64[0] = v63;
          v150 = v64;
          qfree(v65, v50, v51, v52, v53, v54, *(_OWORD *)&v145, *(_OWORD *)&v146, *(_OWORD *)&v147);
          v64 = _mm_load_si128(&v150);
          v63 = v149.m128i_i64[0];
        }
        *(_QWORD *)(v8 + 16) = v63;
        *(__m128i *)(v8 + 24) = v64;
        v66 = *(_QWORD *)(a1 + 40);
        v67 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 48) = 0;
        v68 = *(_QWORD *)(v8 + 40);
        if ( v68 )
        {
          *(_QWORD *)(v8 + 48) = 0;
          v149.m128i_i64[0] = v66;
          v150 = v67;
          qfree(v68, v50);
          v67 = _mm_load_si128(&v150);
          v66 = v149.m128i_i64[0];
        }
        *(_QWORD *)(v8 + 40) = v66;
        v69 = _mm_load_si128(&v147);
        v50 = nullptr;
        *(__m128i *)(v8 + 48) = v67;
        v70 = *(_QWORD *)(a1 + 64);
        v71 = _mm_load_si128(&v146);
        v159 = v61;
        v72 = _mm_load_si128(&v145);
        *(_QWORD *)(v8 + 64) = v70;
        LOBYTE(v70) = *(_BYTE *)(a1 + 72);
        v73 = v148.m128i_i64[0];
        v156 = v56;
        *(_BYTE *)(v8 + 72) = v70;
        LOBYTE(v70) = *(_BYTE *)(a1 + 73);
        v158 = v60;
        *(_BYTE *)(v8 + 73) = v70;
        v154 = v55;
        v153 = v69;
        v155 = v71;
        v157 = v72;
        sub_22A780(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v8 - a1) >> 4), v73);
        v74 = v154;
        if ( v156 )
          *(double *)v67.m128i_i64 = qfree(v156, nullptr);
        if ( v74 )
          qfree(v74, nullptr, *(double *)v67.m128i_i64);
      }
      while ( (__int64)(v8 - a1) > 80 );
    }
  }
  return v160 - __readfsqword(0x28u);
}
