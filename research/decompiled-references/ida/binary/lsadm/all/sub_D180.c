unsigned __int64 __fastcall sub_D180(int a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int32 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  const char **v17; // r13
  size_t v18; // r12
  const char **v19; // r14
  size_t v20; // rax
  _BYTE *v21; // rax
  void *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // r13
  bool v30; // zf
  size_t v31; // r14
  size_t v32; // r14
  size_t v33; // r9
  size_t v34; // r10
  size_t v35; // rdx
  const char *v36; // r15
  size_t v37; // rax
  size_t v38; // r14
  size_t v39; // r8
  __int64 v40; // r9
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  const char *v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rax
  const char *v51; // r14
  size_t v52; // rax
  size_t v53; // r15
  size_t v54; // r13
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  void *v59; // r13
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __int64 v62; // rax
  void *v63; // rdi
  __int64 v64; // rax
  _DWORD *v65; // rax
  size_t v66; // r13
  size_t v67; // r13
  size_t v68; // r12
  size_t v69; // r12
  __int64 v70; // r15
  _BYTE *v71; // rsi
  const char *v72; // r13
  size_t v73; // rax
  size_t v74; // r15
  size_t v75; // r12
  __int8 *v76; // r12
  __int8 v77; // al
  __int8 v78; // r8
  size_t v79; // r13
  size_t v80; // r15
  _BYTE *v81; // rsi
  void *v82; // r13
  __int64 v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  __int64 v90; // rax
  void *v91; // rdi
  void *v92; // r12
  __int64 v93; // rax
  __int64 v94; // rsi
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rdi
  __m128i v97; // xmm0
  __int64 v98; // rax
  unsigned __int64 v99; // r12
  size_t v100; // r15
  void *v101; // r13
  __int64 v102; // rdx
  __int64 v103; // rsi
  __int64 v104; // rax
  void *v105; // rdi
  __int64 v106; // rdx
  __int64 v107; // r13
  size_t v108; // r15
  size_t v109; // r8
  __int64 v110; // r9
  _BYTE *v111; // rsi
  size_t v112; // r13
  size_t v113; // r12
  _BYTE *v114; // rsi
  size_t v115; // r12
  size_t v116; // r15
  size_t v117; // r13
  _BYTE *v118; // rsi
  char *v119; // r12
  __int64 v120; // r15
  size_t v121; // r12
  _BYTE *v122; // rsi
  char *v123; // r13
  __m128i v124; // xmm0
  __m128i v125; // xmm1
  __int64 v126; // rax
  void *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __m128i v131; // xmm0
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  size_t v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __m128i v139; // xmm0
  __m128i v140; // xmm1
  __int64 v141; // rax
  void *v142; // rdi
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __m128i v147; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v148; // [rsp+10h] [rbp-98h] BYREF
  size_t v149; // [rsp+20h] [rbp-88h]
  size_t v150; // [rsp+28h] [rbp-80h]
  void *v151; // [rsp+30h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-70h]
  void *v153; // [rsp+50h] [rbp-58h] BYREF
  size_t v154[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v155; // [rsp+68h] [rbp-40h]

  v147.m128i_i32[2] = a6;
  v155 = __readfsqword(0x28u);
  if ( (a6 & 1) != 0 )
  {
    if ( *(_QWORD *)(a4 + 8) <= 1u )
    {
      v51 = (const char *)a3[1];
      v153 = nullptr;
      *(_OWORD *)v154 = 0;
      if ( v51 )
      {
        v52 = strlen(v51);
        v53 = v52 + 1;
        v54 = v52;
        v147.m128i_i64[0] = (__int64)&v153;
        v153 = (void *)sub_29E60(&v153, 0, v52 + 1, 1);
        v154[0] = v53;
        memmove(v153, v51, v54);
        *((_BYTE *)v153 + v54) = 0;
      }
      else
      {
        v147.m128i_i64[0] = (__int64)&v153;
      }
      v55 = a2[1];
      v56 = *a2;
      v57 = a2[2];
      v58 = v55 + 1;
      if ( v147.m128i_i64[0] < (unsigned __int64)*a2 || v147.m128i_i64[0] >= v56 + 24 * v57 )
      {
        if ( v57 < v58 )
        {
          v138 = sub_29E60(a2, v56, v55 + 1, 24);
          *a2 = v138;
          v56 = v138;
          v55 = a2[1];
        }
        v131 = _mm_loadu_si128((const __m128i *)v154);
        v132 = v56 + 24 * v55;
        *(_QWORD *)v132 = v153;
        *(__m128i *)(v132 + 8) = v131;
        v12 = a2[1] + 1;
        a2[1] = v12;
      }
      else
      {
        v59 = v153;
        v60 = _mm_loadl_epi64((const __m128i *)v154);
        v153 = nullptr;
        v61 = _mm_loadl_epi64((const __m128i *)&v154[1]);
        *(_OWORD *)v154 = 0;
        if ( v57 < v58 )
        {
          v148.m128i_i64[0] = v61.m128i_i64[0];
          v147.m128i_i64[0] = v60.m128i_i64[0];
          v144 = sub_29E60(a2, v56, v55 + 1, 24);
          *a2 = v144;
          v56 = v144;
          v55 = a2[1];
          v61 = _mm_loadl_epi64(&v148);
          v60 = _mm_loadl_epi64(&v147);
        }
        v62 = v56 + 24 * v55;
        *(_QWORD *)v62 = v59;
        *(__m128i *)(v62 + 8) = _mm_unpacklo_epi64(v60, v61);
        v63 = v153;
        v12 = a2[1] + 1;
        a2[1] = v12;
        if ( v63 )
        {
          v154[0] = 0;
          j__free(v63);
          v12 = a2[1];
          v13 = *a2;
          v14 = v12 + 1;
          if ( a2[2] >= (unsigned __int64)(v12 + 1) )
            goto LABEL_7;
          goto LABEL_52;
        }
      }
    }
    else
    {
      v9 = a2[1];
      v10 = *a2;
      if ( a2[2] < (unsigned __int64)(v9 + 1) )
      {
        v128 = sub_29E60(a2, v10, v9 + 1, 24);
        v9 = a2[1];
        *a2 = v128;
        v10 = v128;
      }
      v11 = v10 + 24 * v9;
      *(_QWORD *)v11 = 0;
      *(_OWORD *)(v11 + 8) = 0;
      ++a2[1];
      sub_CF40((char **)v11);
      v12 = a2[1];
    }
    v13 = *a2;
    v14 = v12 + 1;
    if ( a2[2] >= (unsigned __int64)(v12 + 1) )
    {
LABEL_7:
      v15 = v13 + 24 * v12;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      ++a2[1];
      goto LABEL_8;
    }
LABEL_52:
    v64 = sub_29E60(a2, v13, v14, 24);
    v12 = a2[1];
    *a2 = v64;
    v13 = v64;
    goto LABEL_7;
  }
LABEL_8:
  if ( (v147.m128i_i8[8] & 2) == 0 )
    goto LABEL_9;
  *(_OWORD *)n = 0;
  v151 = nullptr;
  v65 = (_DWORD *)sub_29E60(&v151, 0, 8, 1);
  v151 = v65;
  n[0] = 8;
  *v65 = 1734439765;
  *(_DWORD *)((char *)v65 + 3) = 540697959;
  *((_BYTE *)v151 + 7) = 0;
  v66 = *(_QWORD *)(a5 + 8);
  if ( v66 <= 1 )
  {
    if ( !a3[7] )
      goto LABEL_55;
LABEL_113:
    v115 = n[0];
    if ( n[0] )
    {
      v116 = n[0] + 8;
      v117 = n[0] + 9;
      v115 = n[0] - 1;
    }
    else
    {
      v117 = 10;
      v116 = 9;
    }
    v118 = v151;
    if ( n[1] < v117 )
    {
      v151 = (void *)sub_29E60(&v151, v151, v117, 1);
      v118 = v151;
    }
    n[0] = v117;
    v118[v116] = 0;
    v119 = (char *)v151 + v115;
    *(_QWORD *)v119 = 0x534E4F4954504F5BLL;
    v119[8] = 93;
    v67 = n[0];
    v68 = n[0];
    if ( !a3[5] )
      goto LABEL_56;
LABEL_118:
    if ( v67 )
    {
      v120 = v67 + 8;
      v121 = v67 + 9;
      --v67;
    }
    else
    {
      v121 = 10;
      v120 = 9;
    }
    v122 = v151;
    if ( n[1] < v121 )
    {
      v151 = (void *)sub_29E60(&v151, v151, v121, 1);
      v122 = v151;
    }
    n[0] = v121;
    v122[v120] = 0;
    v123 = (char *)v151 + v67;
    *(_QWORD *)v123 = 0x444E414D4D4F433CLL;
    v123[8] = 62;
    v68 = n[0];
    v82 = nullptr;
    if ( !n[0] )
      goto LABEL_79;
LABEL_123:
    v82 = (void *)sub_29E10(v68);
    memcpy(v82, v151, v68);
    goto LABEL_79;
  }
  v108 = n[0];
  v109 = v66 - 1;
  v110 = v66 - 1;
  if ( n[0] )
  {
    v108 = n[0] - 1;
    v110 = v109 + n[0] - 1;
    v66 += n[0] - 1;
  }
  v111 = v151;
  if ( n[1] < v66 )
  {
    v148.m128i_i64[0] = v109;
    v147.m128i_i64[0] = v110;
    v151 = (void *)sub_29E60(&v151, v151, v66, 1);
    v109 = v148.m128i_i64[0];
    v111 = v151;
    v110 = v147.m128i_i64[0];
  }
  n[0] = v66;
  v112 = 2;
  v111[v110] = 0;
  memcpy((char *)v151 + v108, *(const void **)a5, v109);
  v113 = n[0];
  if ( n[0] )
  {
    v112 = n[0] + 1;
    v113 = n[0] - 1;
  }
  v114 = v151;
  if ( n[1] < v112 )
  {
    v151 = (void *)sub_29E60(&v151, v151, v112, 1);
    v114 = v151;
  }
  n[0] = v112;
  v114[v113] = 32;
  *((_BYTE *)v151 + v113 + 1) = 0;
  if ( a3[7] )
    goto LABEL_113;
LABEL_55:
  v67 = n[0];
  v68 = n[0];
  if ( a3[5] )
    goto LABEL_118;
LABEL_56:
  if ( !a3[3] )
    goto LABEL_78;
  if ( v67 )
  {
    v69 = v67 + 1;
    v70 = v67--;
  }
  else
  {
    v69 = 2;
    v70 = 1;
  }
  v71 = v151;
  if ( n[1] < v69 )
  {
    v151 = (void *)sub_29E60(&v151, v151, v69, 1);
    v71 = v151;
  }
  n[0] = v69;
  v71[v70] = 0;
  *((_BYTE *)v151 + v67) = 32;
  v72 = (const char *)a3[3];
  v153 = nullptr;
  *(_OWORD *)v154 = 0;
  if ( !v72 )
    goto LABEL_77;
  v73 = strlen(v72);
  v74 = v73 + 1;
  v75 = v73;
  v153 = (void *)sub_29E60(&v153, 0, v73 + 1, 1);
  v154[0] = v74;
  memmove(v153, v72, v75);
  *((_BYTE *)v153 + v75) = 0;
  v76 = (__int8 *)v153;
  if ( !v154[0] )
    goto LABEL_75;
  v77 = *(_BYTE *)v153;
  if ( !*(_BYTE *)v153 )
    goto LABEL_75;
  do
  {
    if ( v77 == 34 )
    {
      v78 = *++v76;
      if ( v78 == 34 )
        goto LABEL_70;
      if ( !v78 )
        break;
    }
    v78 = *v76;
LABEL_70:
    v79 = n[0];
    v80 = 2;
    if ( n[0] )
    {
      v80 = n[0] + 1;
      v79 = n[0] - 1;
    }
    v81 = v151;
    if ( n[1] < v80 )
    {
      v147.m128i_i8[0] = v78;
      v151 = (void *)sub_29E60(&v151, v151, v80, 1);
      v78 = v147.m128i_i8[0];
      v81 = v151;
    }
    n[0] = v80;
    ++v76;
    v81[v79] = v78;
    *((_BYTE *)v151 + v79 + 1) = 0;
    v77 = *v76;
  }
  while ( *v76 );
  v76 = (__int8 *)v153;
LABEL_75:
  if ( v76 )
  {
    v154[0] = 0;
    j__free(v76);
  }
LABEL_77:
  v68 = n[0];
LABEL_78:
  v82 = nullptr;
  if ( v68 )
    goto LABEL_123;
LABEL_79:
  v83 = a2[1];
  v84 = *a2;
  if ( a2[2] < (unsigned __int64)(v83 + 1) )
  {
    v134 = sub_29E60(a2, v84, v83 + 1, 24);
    *a2 = v134;
    v83 = a2[1];
    v84 = v134;
  }
  v85 = v84 + 24 * v83;
  *(_QWORD *)v85 = v82;
  *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64((__m128i)v68, (__m128i)v68);
  v86 = a2[1];
  v87 = *a2;
  v88 = v86 + 1;
  v89 = v86 + 2;
  a2[1] = v88;
  if ( a2[2] < v89 )
  {
    v133 = sub_29E60(a2, v87, v89, 24);
    *a2 = v133;
    v88 = a2[1];
    v87 = v133;
  }
  v90 = v87 + 24 * v88;
  *(_QWORD *)v90 = 0;
  v91 = v151;
  *(_OWORD *)(v90 + 8) = 0;
  ++a2[1];
  if ( v91 )
  {
    n[0] = 0;
    j__free(v91);
  }
LABEL_9:
  if ( (v147.m128i_i8[8] & 4) != 0 )
  {
    v16 = a3[5];
    if ( v16 )
    {
      v17 = (const char **)a3[4];
      v18 = 0;
      v19 = &v17[8 * v16];
      do
      {
        v20 = strlen(*v17);
        if ( v18 < v20 )
          v18 = v20;
        v17 += 8;
      }
      while ( v17 != v19 );
      v147.m128i_i64[0] = (__int64)&v153;
      v153 = nullptr;
      *(_OWORD *)v154 = 0;
      v21 = (_BYTE *)sub_29E60(&v153, 0, 10, 1);
      v153 = v21;
      v154[0] = 10;
      *(_QWORD *)v21 = 0x53444E414D4D4F43LL;
      v21[8] = 58;
      v22 = v153;
      *((_BYTE *)v153 + 9) = 0;
      v23 = a2[1];
      v24 = *a2;
      v25 = a2[2];
      v26 = v23 + 1;
      if ( (unsigned __int64)&v153 < *a2 || v147.m128i_i64[0] >= v24 + 24 * v25 )
      {
        if ( v25 < v26 )
        {
          v137 = sub_29E60(a2, v24, v23 + 1, 24);
          *a2 = v137;
          v24 = v137;
          v22 = v153;
          v23 = a2[1];
        }
        v27 = _mm_loadu_si128((const __m128i *)v154);
        v28 = v24 + 24 * v23;
        *(_QWORD *)v28 = v22;
        *(__m128i *)(v28 + 8) = v27;
        ++a2[1];
      }
      else
      {
        v124 = _mm_loadl_epi64((const __m128i *)v154);
        v125 = _mm_loadl_epi64((const __m128i *)&v154[1]);
        v153 = nullptr;
        *(_OWORD *)v154 = 0;
        if ( v25 < v26 )
        {
          v148.m128i_i64[1] = v125.m128i_i64[0];
          v148.m128i_i64[0] = v124.m128i_i64[0];
          v143 = sub_29E60(a2, v24, v23 + 1, 24);
          *a2 = v143;
          v24 = v143;
          v125 = _mm_loadl_epi64((const __m128i *)&v148.m128i_u64[1]);
          v23 = a2[1];
          v124 = _mm_loadl_epi64(&v148);
        }
        v126 = v24 + 24 * v23;
        *(_QWORD *)v126 = v22;
        *(__m128i *)(v126 + 8) = _mm_unpacklo_epi64(v124, v125);
        v127 = v153;
        ++a2[1];
        if ( v127 )
        {
          v154[0] = 0;
          j__free(v127);
        }
      }
      v29 = 0;
      v30 = a3[5] == 0;
      v149 = v18 + 2;
      if ( v30 )
      {
LABEL_38:
        v47 = a2[1];
        v48 = *a2;
        if ( a2[2] < (unsigned __int64)(v47 + 1) )
        {
          v135 = sub_29E60(a2, v48, v47 + 1, 24);
          v47 = a2[1];
          *a2 = v135;
          v48 = v135;
        }
        v49 = v48 + 24 * v47;
        *(_QWORD *)v49 = 0;
        *(_OWORD *)(v49 + 8) = 0;
        ++a2[1];
        goto LABEL_41;
      }
      while ( 2 )
      {
        v46 = *(const char **)(a3[4] + (v29 << 6));
        *(_OWORD *)v154 = 0;
        v153 = nullptr;
        if ( !v46 )
        {
          v34 = v149;
          v35 = v18 + 3;
          v32 = 0;
          v33 = v149;
          goto LABEL_36;
        }
        v148.m128i_i64[1] = (__int64)v46;
        v31 = strlen(v46);
        v148.m128i_i64[0] = v31 + 1;
        v153 = (void *)sub_29E60(v147.m128i_i64[0], 0, v31 + 1, 1);
        v154[0] = v148.m128i_i64[0];
        memmove(v153, (const void *)v148.m128i_i64[1], v31);
        *((_BYTE *)v153 + v31) = 0;
        if ( v154[0] )
        {
          v32 = v154[0] - 1;
          v33 = v18 - (v154[0] - 1) + 2;
          v34 = v18 + 2;
          v35 = v18 + 3;
          if ( v154[0] >= v18 + 3 )
            goto LABEL_23;
          v136 = v154[1];
        }
        else
        {
          v33 = v18 + 2;
          v136 = v154[1];
          v35 = v18 + 3;
          v32 = 0;
          v34 = v18 + 2;
        }
        v46 = (const char *)v153;
        if ( v136 < v35 )
        {
LABEL_36:
          v150 = v34;
          v148.m128i_i64[1] = v33;
          v148.m128i_i64[0] = v35;
          v153 = (void *)sub_29E60(v147.m128i_i64[0], v46, v35, 1);
          v34 = v150;
          v46 = (const char *)v153;
          v33 = v148.m128i_u64[1];
          v35 = v148.m128i_i64[0];
        }
        v154[0] = v35;
        v46[v34] = 0;
LABEL_23:
        memset((char *)v153 + v32, 32, v33);
        v36 = *(const char **)(a3[4] + (v29 << 6) + 8);
        if ( v36 )
        {
          v37 = strlen(v36);
          v38 = v154[0];
          v39 = v37;
          v40 = v37;
          if ( v154[0] )
          {
            v38 = v154[0] - 1;
            v40 = v37 + v154[0] - 1;
          }
          v41 = v153;
          v42 = v40 + 1;
          if ( v154[1] < v40 + 1 )
          {
            v150 = v37;
            v148.m128i_i64[1] = v40;
            v148.m128i_i64[0] = v40 + 1;
            v153 = (void *)sub_29E60(v147.m128i_i64[0], v153, v42, 1);
            v39 = v150;
            v41 = v153;
            v40 = v148.m128i_i64[1];
            v42 = v148.m128i_i64[0];
          }
          v154[0] = v42;
          v41[v40] = 0;
          memmove((char *)v153 + v38, v36, v39);
        }
        v43 = a2[1];
        v44 = *a2;
        if ( a2[2] < (unsigned __int64)(v43 + 1) )
        {
          v129 = sub_29E60(a2, v44, v43 + 1, 24);
          *a2 = v129;
          v43 = a2[1];
          v44 = v129;
        }
        v45 = v44 + 24 * v43;
        *(_QWORD *)v45 = 0;
        *(_OWORD *)(v45 + 8) = 0;
        ++a2[1];
        sub_CF40((char **)v45);
        if ( v153 )
        {
          v154[0] = 0;
          j__free(v153);
        }
        if ( (unsigned __int64)++v29 >= a3[5] )
          goto LABEL_38;
        continue;
      }
    }
  }
LABEL_41:
  if ( (v147.m128i_i8[8] & 8) != 0 && a3[7] )
  {
    v147.m128i_i64[0] = (__int64)&v153;
    v153 = nullptr;
    *(_OWORD *)v154 = 0;
    v153 = (void *)sub_29E60(&v153, 0, 9, 1);
    v154[0] = 9;
    strcpy((char *)v153, "OPTIONS:");
    v92 = v153;
    v93 = a2[1];
    v94 = *a2;
    v95 = a2[2];
    v96 = v93 + 1;
    if ( (unsigned __int64)&v153 >= *a2 && v147.m128i_i64[0] < v94 + 24 * v95 )
    {
      v139 = _mm_loadl_epi64((const __m128i *)v154);
      v140 = _mm_loadl_epi64((const __m128i *)&v154[1]);
      v153 = nullptr;
      *(_OWORD *)v154 = 0;
      if ( v95 < v96 )
      {
        v148.m128i_i64[0] = v140.m128i_i64[0];
        v147.m128i_i64[1] = v139.m128i_i64[0];
        v146 = sub_29E60(a2, v94, v93 + 1, 24);
        *a2 = v146;
        v94 = v146;
        v140 = _mm_loadl_epi64(&v148);
        v93 = a2[1];
        v139 = _mm_loadl_epi64((const __m128i *)&v147.m128i_u64[1]);
      }
      v141 = v94 + 24 * v93;
      *(_QWORD *)v141 = v92;
      *(__m128i *)(v141 + 8) = _mm_unpacklo_epi64(v139, v140);
      v142 = v153;
      ++a2[1];
      if ( v142 )
      {
        v154[0] = 0;
        j__free(v142);
      }
    }
    else
    {
      if ( v95 < v96 )
      {
        v145 = sub_29E60(a2, v94, v93 + 1, 24);
        *a2 = v145;
        v94 = v145;
        v92 = v153;
        v93 = a2[1];
      }
      v97 = _mm_loadu_si128((const __m128i *)v154);
      v98 = v94 + 24 * v93;
      *(_QWORD *)v98 = v92;
      *(__m128i *)(v98 + 8) = v97;
      ++a2[1];
    }
    if ( a3[7] )
    {
      v99 = 0;
      do
      {
        v106 = a3[6];
        v153 = nullptr;
        *(_OWORD *)v154 = 0;
        v107 = v106 + 40 * v99;
        if ( *(_BYTE *)v107 )
        {
          sub_CF40((char **)v147.m128i_i64[0]);
        }
        else
        {
          v153 = (void *)sub_29E60(v147.m128i_i64[0], 0, 9, 1);
          v154[0] = 9;
          strcpy((char *)v153, "        ");
        }
        if ( *(_QWORD *)(v107 + 8) )
          sub_D0C0((__int64 *)v147.m128i_i64[0]);
        sub_D0C0((__int64 *)v147.m128i_i64[0]);
        v100 = v154[0];
        v101 = nullptr;
        if ( v154[0] )
        {
          v101 = (void *)sub_29E10(v154[0]);
          memcpy(v101, v153, v100);
        }
        v102 = a2[1];
        v103 = *a2;
        if ( a2[2] < (unsigned __int64)(v102 + 1) )
        {
          v130 = sub_29E60(a2, v103, v102 + 1, 24);
          *a2 = v130;
          v102 = a2[1];
          v103 = v130;
        }
        v104 = v103 + 24 * v102;
        *(_QWORD *)v104 = v101;
        *(__m128i *)(v104 + 8) = _mm_unpacklo_epi64((__m128i)v100, (__m128i)v100);
        v105 = v153;
        ++a2[1];
        if ( v105 )
        {
          v154[0] = 0;
          j__free(v105);
        }
        ++v99;
      }
      while ( v99 < a3[7] );
    }
  }
  return v155 - __readfsqword(0x28u);
}

