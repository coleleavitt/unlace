char *__fastcall sub_61DC10(
        __int64 a1,
        char *a2,
        __int64 a3,
        const char *a4,
        _BYTE *a5,
        _BYTE *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14)
{
  __m128i v14; // xmm0
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // rbp
  char *v20; // r13
  char *v21; // r14
  char *v22; // rsi
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r14
  char *v26; // rax
  __int64 v27; // r15
  __int64 v28; // r9
  __int64 v29; // rdx
  char *v30; // rdi
  double v31; // xmm4_8
  double v32; // xmm5_8
  _QWORD *v33; // rax
  _QWORD *v34; // r12
  size_t v35; // rax
  __int64 v36; // rbx
  size_t v37; // r13
  char *v38; // rax
  char *v39; // r14
  _QWORD *v40; // rbx
  __int64 v41; // r15
  const char *v42; // r13
  _QWORD *v43; // rbp
  _QWORD *v44; // r12
  const char *v45; // rbx
  _QWORD *v46; // r13
  const char *v47; // rsi
  const char *v48; // rdi
  int v49; // eax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // r12
  const char *v54; // rdi
  const char *v55; // rsi
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rbx
  size_t v59; // rax
  __int64 v60; // r12
  size_t v61; // r13
  char *v62; // rax
  char *v63; // r14
  _QWORD *v64; // r12
  __int64 v65; // r15
  const char *v66; // rax
  _QWORD *v67; // r13
  _QWORD *v68; // rbx
  _QWORD *v69; // r12
  const char *v70; // rsi
  const char *v71; // rdi
  int v72; // eax
  _QWORD *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  _QWORD *v77; // rbx
  __int64 v78; // r13
  size_t v79; // rax
  size_t v80; // r15
  size_t v81; // r8
  __int64 v82; // rdx
  _QWORD *v83; // rbx
  const char *v84; // rdi
  const char *v85; // rsi
  _QWORD *v86; // r12
  char *v87; // [rsp+0h] [rbp-C0h]
  _QWORD *v88; // [rsp+8h] [rbp-B8h]
  const char *v89; // [rsp+8h] [rbp-B8h]
  __int64 v90; // [rsp+8h] [rbp-B8h]
  __int64 v91; // [rsp+8h] [rbp-B8h]
  _QWORD *v93; // [rsp+18h] [rbp-A8h]
  _QWORD *v94; // [rsp+18h] [rbp-A8h]
  __int64 v95; // [rsp+18h] [rbp-A8h]
  size_t v96; // [rsp+18h] [rbp-A8h]
  _QWORD *v97; // [rsp+20h] [rbp-A0h]
  _QWORD *v98; // [rsp+20h] [rbp-A0h]
  _QWORD *v99; // [rsp+28h] [rbp-98h]
  _QWORD *v100; // [rsp+28h] [rbp-98h]
  _QWORD *v102; // [rsp+30h] [rbp-90h]
  _QWORD *v105; // [rsp+40h] [rbp-80h]
  char *s; // [rsp+48h] [rbp-78h] BYREF
  __m128i v107; // [rsp+50h] [rbp-70h]
  char *s2; // [rsp+68h] [rbp-58h] BYREF
  __m128i v109; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v110; // [rsp+80h] [rbp-40h]

  v14.m128i_i64[0] = 0;
  v110 = __readfsqword(0x28u);
  v107 = 0;
  s = nullptr;
  if ( !a4 )
  {
    s2 = nullptr;
    v109 = 0;
    goto LABEL_93;
  }
  v17 = strlen(a4);
  v18 = v17 + 1;
  v19 = v17;
  s = (char *)qvector_reserve(&s, 0, v17 + 1, 1);
  v107.m128i_i64[0] = v18;
  memmove(s, a4, v19);
  v14.m128i_i64[0] = 0;
  s[v19] = 0;
  s2 = nullptr;
  v109 = 0;
  if ( !v107.m128i_i64[0] )
  {
LABEL_93:
    v87 = nullptr;
    v20 = (char *)haystack;
    goto LABEL_4;
  }
  v20 = s;
  v87 = strchr(s, 92);
LABEL_4:
  v21 = v20;
  v22 = nullptr;
  while ( v87 )
  {
    if ( v87 != v21 )
    {
      v27 = v109.m128i_i64[0];
      v28 = v87 - v21;
      if ( v109.m128i_i64[0] )
      {
        v27 = v109.m128i_i64[0] - 1;
        v28 = v87 - v21 + v109.m128i_i64[0] - 1;
      }
      v29 = v28 + 1;
      if ( v109.m128i_i64[1] < (unsigned __int64)(v28 + 1) )
      {
        v95 = v28;
        v90 = v28 + 1;
        s2 = (char *)qvector_reserve(&s2, v22, v29, 1);
        v28 = v95;
        v22 = s2;
        v29 = v90;
      }
      v109.m128i_i64[0] = v29;
      v22[v28] = 0;
      memmove(&s2[v27], v21, v87 - v21);
      v22 = s2;
    }
    v25 = v109.m128i_i64[0];
    if ( v109.m128i_i64[0] )
    {
      v23 = v109.m128i_i64[0] + 1;
      v24 = v109.m128i_i64[0];
      v25 = v109.m128i_i64[0] - 1;
      if ( v109.m128i_i64[1] >= (unsigned __int64)(v109.m128i_i64[0] + 1) )
        goto LABEL_6;
    }
    else
    {
      v23 = 2;
      v24 = 1;
      if ( v109.m128i_i64[1] >= 2uLL )
        goto LABEL_6;
    }
    s2 = (char *)qvector_reserve(&s2, v22, v23, 1);
    v22 = s2;
LABEL_6:
    v109.m128i_i64[0] = v23;
    v22[v24] = 0;
    s2[v25] = 47;
    v21 = v87 + 1;
    v26 = strchr(v87 + 1, 92);
    v22 = s2;
    v87 = v26;
  }
  if ( v21 == v20 )
  {
    v30 = v22;
  }
  else
  {
    if ( *v21 && v21 )
    {
      v78 = v109.m128i_i64[0];
      v79 = strlen(v21);
      v80 = v79;
      v81 = v79;
      if ( v78 )
      {
        --v78;
        v81 = v79 + v78;
      }
      v82 = v81 + 1;
      if ( v109.m128i_i64[1] < v81 + 1 )
      {
        v96 = v81;
        v91 = v81 + 1;
        s2 = (char *)qvector_reserve(&s2, v22, v82, 1);
        v81 = v96;
        v22 = s2;
        v82 = v91;
      }
      v109.m128i_i64[0] = v82;
      v22[v81] = 0;
      memmove(&s2[v78], v21, v80);
      v22 = s2;
    }
    v30 = s;
    s = v22;
    v14 = _mm_loadu_si128(&v109);
    s2 = v30;
    v109.m128i_i64[1] = v107.m128i_i64[1];
    v107 = v14;
  }
  if ( v30 )
  {
    v109.m128i_i64[0] = 0;
    qfree(v30);
  }
  if ( v107.m128i_i64[0] <= 1uLL )
    sub_61B920(a2, a3, a5, *(double *)v14.m128i_i64, a8, a9, a10, a11, a12, a13, a14, a6, 0);
  else
    sub_61B920(a2, a3, s, *(double *)v14.m128i_i64, a8, a9, a10, a11, a12, a13, a14, a5, a6, 0);
  v33 = *(_QWORD **)(a1 + 32);
  v88 = v33 + 4;
  v99 = &v33[9 * *(_QWORD *)(a1 + 40)];
  if ( v33 == v99 )
    goto LABEL_55;
  while ( 1 )
  {
    v34 = v88;
    v14.m128i_i64[0] = 0;
    s2 = nullptr;
    v109 = 0;
    v97 = v88 - 4;
    if ( !a2 )
      break;
    v35 = strlen(a2);
    v36 = v35 + 1;
    v37 = v35;
    v38 = (char *)qvector_reserve(&s2, 0, v35 + 1, 1);
    v109.m128i_i64[0] = v36;
    s2 = v38;
    memmove(v38, a2, v37);
    s2[v37] = 0;
    v39 = s2;
    v40 = (_QWORD *)v88[1];
    if ( v40 )
      goto LABEL_28;
    if ( !s2 )
      goto LABEL_53;
    v109.m128i_i64[0] = 0;
    qfree(s2);
    v56 = v88;
LABEL_54:
    v88 += 9;
    if ( v99 == v56 + 5 )
      goto LABEL_55;
  }
  while ( 1 )
  {
    v40 = (_QWORD *)v34[1];
    if ( v40 )
      break;
    v34 = v88 + 9;
    if ( v99 == v88 + 5 )
      goto LABEL_55;
    v97 = v88 + 5;
    v14.m128i_i64[0] = 0;
    s2 = nullptr;
    v88 += 9;
    v109 = 0;
  }
  v39 = nullptr;
LABEL_28:
  v41 = v109.m128i_i64[0];
  v42 = haystack;
  v93 = v34;
  v43 = v34;
  v44 = v40;
  if ( v109.m128i_i64[0] )
    v42 = v39;
  v45 = v42;
  while ( 2 )
  {
    v51 = v44[5];
    if ( v41 )
    {
      v46 = v44;
      v47 = v39;
      v48 = haystack;
      if ( !v51 )
        goto LABEL_33;
      goto LABEL_32;
    }
    if ( v51 )
    {
LABEL_40:
      v46 = v44;
LABEL_32:
      v48 = (const char *)v44[4];
      v47 = v45;
LABEL_33:
      v49 = strcmp(v48, v47);
      v50 = (_QWORD *)v44[2];
      v44 = (_QWORD *)v44[3];
      if ( v49 >= 0 )
      {
        v43 = v46;
        v44 = v50;
      }
      if ( !v44 )
      {
        v53 = v93;
        goto LABEL_46;
      }
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v52 = v44[2];
    if ( !v52 )
      break;
    v43 = v44;
    v44 = (_QWORD *)v44[2];
    if ( *(_QWORD *)(v52 + 40) )
      goto LABEL_40;
  }
  v77 = v44;
  v53 = v93;
  v43 = v77;
LABEL_46:
  if ( v53 == v43 )
    goto LABEL_51;
  if ( v43[5] )
  {
    v54 = haystack;
    v55 = (const char *)v43[4];
    if ( v41 )
      v54 = v39;
LABEL_50:
    if ( strcmp(v54, v55) < 0 )
    {
LABEL_51:
      if ( v39 )
      {
        v109.m128i_i64[0] = 0;
        qfree(v39);
      }
LABEL_53:
      v56 = v88;
      goto LABEL_54;
    }
  }
  else if ( v41 )
  {
    v54 = v39;
    v55 = haystack;
    goto LABEL_50;
  }
  if ( v39 )
  {
    v109.m128i_i64[0] = 0;
    qfree(v39);
  }
  if ( v97 )
  {
LABEL_76:
    s2 = nullptr;
    v109 = 0;
    sub_35A790(&s2);
    qstrncpy(a2, s2, a3);
    if ( s2 )
    {
      v109.m128i_i64[0] = 0;
      qfree(s2);
    }
    v87 = a2;
    goto LABEL_79;
  }
LABEL_55:
  if ( v107.m128i_i64[0] <= 1uLL )
    sub_61B920(a2, a3, a6, *(double *)v14.m128i_i64, a8, a9, a10, v31, v32, a13, a14, 0);
  else
    sub_61B920(a2, a3, s, *(double *)v14.m128i_i64, a8, a9, a10, v31, v32, a13, a14, a6, 0);
  v57 = *(_QWORD **)(a1 + 32);
  v105 = &v57[9 * *(_QWORD *)(a1 + 40)];
  v94 = v57 + 4;
  if ( v57 == v105 )
    goto LABEL_79;
  while ( 2 )
  {
    v58 = v94;
    s2 = nullptr;
    v109 = 0;
    v98 = v94 - 4;
    if ( a2 )
    {
      v59 = strlen(a2);
      v60 = v59 + 1;
      v61 = v59;
      v62 = (char *)qvector_reserve(&s2, 0, v59 + 1, 1);
      v109.m128i_i64[0] = v60;
      s2 = v62;
      memmove(v62, a2, v61);
      s2[v61] = 0;
      v63 = s2;
      v64 = (_QWORD *)v94[1];
      v100 = v94;
      if ( !v64 )
        goto LABEL_106;
    }
    else
    {
      while ( 1 )
      {
        v64 = (_QWORD *)v58[1];
        if ( v64 )
          break;
        v58 = v94 + 9;
        if ( v105 == v94 + 5 )
          goto LABEL_79;
        v98 = v94 + 5;
        s2 = nullptr;
        v94 += 9;
        v109 = 0;
      }
      v100 = v94;
      v63 = nullptr;
    }
    v65 = v109.m128i_i64[0];
    v66 = haystack;
    v102 = v58;
    v67 = v58;
    v68 = v64;
    if ( v109.m128i_i64[0] )
      v66 = v63;
    v89 = v66;
    while ( 2 )
    {
      v74 = v68[5];
      if ( v65 )
      {
        if ( !v74 )
        {
          v69 = v68;
          v70 = v63;
          v71 = haystack;
          goto LABEL_65;
        }
LABEL_72:
        v71 = (const char *)v68[4];
        v70 = v89;
        v69 = v68;
LABEL_65:
        v72 = strcmp(v71, v70);
        v73 = (_QWORD *)v68[2];
        v68 = (_QWORD *)v68[3];
        if ( v72 >= 0 )
        {
          v67 = v69;
          v68 = v73;
        }
        if ( !v68 )
        {
          v83 = v102;
          goto LABEL_101;
        }
        continue;
      }
      break;
    }
    if ( v74 )
      goto LABEL_72;
    while ( 1 )
    {
      v75 = v68[2];
      if ( !v75 )
        break;
      v67 = v68;
      v68 = (_QWORD *)v68[2];
      if ( *(_QWORD *)(v75 + 40) )
        goto LABEL_72;
    }
    v86 = v68;
    v83 = v102;
    v67 = v86;
LABEL_101:
    if ( v83 == v67 )
      goto LABEL_106;
    if ( v67[5] )
    {
      v84 = haystack;
      v85 = (const char *)v67[4];
      if ( v65 )
        v84 = v63;
LABEL_105:
      if ( strcmp(v84, v85) < 0 )
      {
LABEL_106:
        if ( v63 )
        {
          v109.m128i_i64[0] = 0;
          qfree(v63);
        }
        v94 += 9;
        if ( v105 == v100 + 5 )
          goto LABEL_79;
        continue;
      }
    }
    else if ( v65 )
    {
      v84 = v63;
      v85 = haystack;
      goto LABEL_105;
    }
    break;
  }
  if ( v63 )
  {
    v109.m128i_i64[0] = 0;
    qfree(v63);
  }
  if ( v98 )
    goto LABEL_76;
LABEL_79:
  if ( s )
  {
    v107.m128i_i64[0] = 0;
    qfree(s);
  }
  return v87;
}
