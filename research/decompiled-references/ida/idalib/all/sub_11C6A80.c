char *__fastcall sub_11C6A80(__int64 a1, __int64 a2)
{
  char *v2; // rbp
  __int64 v3; // rax
  int v4; // r12d
  const char **v5; // rax
  unsigned __int64 v6; // rbx
  size_t v7; // r14
  size_t v8; // rax
  unsigned int v9; // eax
  size_t v10; // rax
  unsigned int v11; // eax
  size_t v12; // rax
  unsigned int v13; // eax
  size_t v14; // rax
  unsigned int v15; // eax
  size_t v16; // rax
  unsigned int v17; // eax
  size_t v18; // rax
  unsigned int v19; // eax
  size_t v20; // rax
  unsigned int v21; // eax
  size_t v22; // rax
  unsigned int v23; // eax
  size_t v24; // rax
  unsigned int v25; // eax
  size_t v26; // rax
  unsigned int v27; // eax
  size_t v28; // rax
  unsigned int v29; // eax
  size_t v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rbx
  size_t v33; // rax
  unsigned __int64 v34; // r14
  char *v35; // r15
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned int v38; // eax
  int v39; // eax
  __int64 v40; // rbp
  __int64 v41; // r8
  __int64 v42; // r9
  const char *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  const char *v47; // rax
  const char *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbp
  __m128i *v52; // rax
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rdx
  __m128i *v55; // rbx
  __int64 v56; // rbp
  unsigned int v57; // eax
  int v58; // eax
  __int64 *v59; // rsi
  __int64 v60; // r9
  __m128i *v61; // rax
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // rdx
  size_t v64; // r12
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 *v68; // r8
  __int64 v69; // rax
  char v70; // r12
  size_t v71; // r12
  unsigned int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 *v75; // r8
  __int64 v76; // rax
  char *v77; // rax
  signed __int64 v78; // rdx
  void *v79; // rdi
  __int64 v80; // r12
  __int64 v81; // r13
  char *v82; // rax
  _QWORD *v83; // rdi
  __int64 v84; // rbp
  __m128i *v85; // rax
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rdx
  __m128i *v88; // rbx
  size_t v89; // rbp
  unsigned int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // r9
  __int64 *v93; // r8
  __int64 v94; // rax
  __int64 v95; // r12
  __m128i *v96; // rax
  unsigned __int64 v97; // rbp
  unsigned __int64 v98; // rdx
  __m128i *v99; // rbp
  size_t v100; // r12
  unsigned int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // r9
  __int64 *v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned int v107; // r9d
  __int64 *v108; // r8
  __int64 v109; // rcx
  unsigned int v110; // eax
  __int64 v111; // rax
  unsigned int v112; // ecx
  __int64 *v113; // r8
  __int64 v114; // r12
  unsigned int v115; // eax
  __int64 v116; // rax
  unsigned int v117; // r8d
  __int64 *v118; // rcx
  __int64 v119; // r9
  unsigned int v120; // eax
  __int64 v121; // rax
  unsigned int v122; // r9d
  __int64 *v123; // r8
  __int64 v124; // rcx
  unsigned int v125; // eax
  size_t v127; // [rsp+8h] [rbp-230h]
  __int64 v128; // [rsp+10h] [rbp-228h]
  const char *v129; // [rsp+18h] [rbp-220h]
  __int64 v130; // [rsp+28h] [rbp-210h]
  unsigned __int64 v131; // [rsp+30h] [rbp-208h]
  unsigned int v132; // [rsp+30h] [rbp-208h]
  char v133; // [rsp+3Fh] [rbp-1F9h]
  unsigned int v135; // [rsp+50h] [rbp-1E8h]
  char *v136; // [rsp+50h] [rbp-1E8h]
  char *v137; // [rsp+60h] [rbp-1D8h]
  __int64 v138; // [rsp+60h] [rbp-1D8h]
  void *srcb; // [rsp+68h] [rbp-1D0h]
  __m128i *src; // [rsp+68h] [rbp-1D0h]
  void *srca; // [rsp+68h] [rbp-1D0h]
  __int64 v142; // [rsp+78h] [rbp-1C0h]
  int v143; // [rsp+88h] [rbp-1B0h]
  unsigned int v144; // [rsp+8Ch] [rbp-1ACh]
  unsigned int v145; // [rsp+8Ch] [rbp-1ACh]
  char *v146; // [rsp+90h] [rbp-1A8h]
  char *v147; // [rsp+90h] [rbp-1A8h]
  __int64 v148; // [rsp+98h] [rbp-1A0h]
  __int64 v149; // [rsp+98h] [rbp-1A0h]
  _QWORD v150[5]; // [rsp+A8h] [rbp-190h] BYREF
  void *ptr; // [rsp+D0h] [rbp-168h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-160h]
  __m128i v153; // [rsp+F0h] [rbp-148h] BYREF
  __m128i v154; // [rsp+100h] [rbp-138h] BYREF
  __int16 v155; // [rsp+110h] [rbp-128h]
  __m128i v156; // [rsp+120h] [rbp-118h] BYREF
  __m128i v157; // [rsp+130h] [rbp-108h] BYREF
  __int16 v158; // [rsp+140h] [rbp-F8h]
  __m128i v159; // [rsp+150h] [rbp-E8h] BYREF
  __m128i v160[2]; // [rsp+160h] [rbp-D8h] BYREF
  __m128i v161; // [rsp+180h] [rbp-B8h] BYREF
  __m128i v162; // [rsp+190h] [rbp-A8h] BYREF
  __int16 v163; // [rsp+1A0h] [rbp-98h]
  __m128i n; // [rsp+1B0h] [rbp-88h] BYREF
  __m128i v165; // [rsp+1C0h] [rbp-78h] BYREF
  __int16 v166; // [rsp+1D0h] [rbp-68h]

  v2 = (char *)&byte_22F0C30;
  v150[1] = "!";
  v150[2] = 1;
  v150[3] = &byte_22F0C30;
  v150[4] = 0;
  v3 = sub_10DE660(a2, 0xB0Cu, 0xB0Bu);
  v130 = v3;
  if ( !v3 )
  {
    j__strlen(&byte_22F0C30);
    return v2;
  }
  v4 = *(_DWORD *)(v3 + 56);
  if ( !v4 )
  {
    v2 = "all";
    j__strlen("all");
    return v2;
  }
  if ( v4 != 1 )
    goto LABEL_14;
  v5 = *(const char ***)(v3 + 48);
  v6 = 0;
  v2 = (char *)*v5;
  if ( *v5 )
    v6 = j__strlen(*v5);
  if ( !(unsigned __int8)sub_11BAA70(v2, v6, a1, (_QWORD *)v130, &n) )
  {
    v2 = (char *)&byte_22F0C30;
    j__strlen(&byte_22F0C30);
    return v2;
  }
  v7 = v6;
  if ( n.m128i_i64[0] <= v6 )
    v7 = n.m128i_i64[0];
  if ( j__strlen("all") != v7 )
  {
    if ( j__strlen("none") != v7 )
    {
      if ( j__strlen("default") != v7 )
        goto LABEL_14;
      if ( !v7 )
        return v2;
LABEL_156:
      if ( !memcmp(v2, "default", v7) )
        return v2;
      goto LABEL_14;
    }
    if ( !v7 )
      return v2;
LABEL_154:
    if ( !memcmp(v2, "none", v7) )
      return v2;
    if ( v7 != j__strlen("default") )
      goto LABEL_14;
    goto LABEL_156;
  }
  if ( !v7 || !memcmp(v2, "all", v7) )
    return v2;
  if ( v7 == j__strlen("none") )
    goto LABEL_154;
  if ( j__strlen("default") == v7 )
    goto LABEL_156;
LABEL_14:
  ptr = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v8 = j__strlen("divd");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"divd";
  n.m128i_i64[1] = v8;
  v9 = sub_2244B30("divd", v8);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v9, v165.m128i_i8);
  v10 = j__strlen("divf");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"divf";
  n.m128i_i64[1] = v10;
  v11 = sub_2244B30("divf", v10);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v11, v165.m128i_i8);
  v12 = j__strlen("divh");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"divh";
  n.m128i_i64[1] = v12;
  v13 = sub_2244B30("divh", v12);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v13, v165.m128i_i8);
  v14 = j__strlen("vec-divd");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"vec-divd";
  n.m128i_i64[1] = v14;
  v15 = sub_2244B30("vec-divd", v14);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v15, v165.m128i_i8);
  v16 = j__strlen("vec-divf");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"vec-divf";
  n.m128i_i64[1] = v16;
  v17 = sub_2244B30("vec-divf", v16);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v17, v165.m128i_i8);
  v18 = j__strlen("vec-divh");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"vec-divh";
  n.m128i_i64[1] = v18;
  v19 = sub_2244B30("vec-divh", v18);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v19, v165.m128i_i8);
  v20 = j__strlen("sqrtd");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"sqrtd";
  n.m128i_i64[1] = v20;
  v21 = sub_2244B30("sqrtd", v20);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v21, v165.m128i_i8);
  v22 = j__strlen("sqrtf");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"sqrtf";
  n.m128i_i64[1] = v22;
  v23 = sub_2244B30("sqrtf", v22);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v23, v165.m128i_i8);
  v24 = j__strlen("sqrth");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"sqrth";
  n.m128i_i64[1] = v24;
  v25 = sub_2244B30("sqrth", v24);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v25, v165.m128i_i8);
  v26 = j__strlen("vec-sqrtd");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"vec-sqrtd";
  n.m128i_i64[1] = v26;
  v27 = sub_2244B30("vec-sqrtd", v26);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v27, v165.m128i_i8);
  v28 = j__strlen("vec-sqrtf");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"vec-sqrtf";
  n.m128i_i64[1] = v28;
  v29 = sub_2244B30("vec-sqrtf", v28);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v29, v165.m128i_i8);
  v30 = j__strlen("vec-sqrth");
  v165.m128i_i8[0] = 0;
  n.m128i_i64[0] = (__int64)"vec-sqrth";
  n.m128i_i64[1] = v30;
  v31 = sub_2244B30("vec-sqrth", v30);
  sub_11C6980((__int64)&ptr, (const void *)n.m128i_i64[0], n.m128i_u64[1], v31, v165.m128i_i8);
  v128 = 0;
  v32 = 0;
  v143 = v4 - 1;
  v142 = (unsigned int)(v4 - 1);
  v129 = &byte_22F0C30;
  v127 = 0;
  while ( 1 )
  {
    v50 = *(_QWORD *)(v130 + 48);
    v35 = *(char **)(v50 + 8 * v32);
    if ( v35 )
    {
      v33 = j__strlen(*(const char **)(v50 + 8 * v32));
      v133 = 0;
      v34 = v33;
      if ( v33 && *v35 == 33 )
      {
        v133 = 1;
        v34 = v33 - 1;
        ++v35;
      }
    }
    else
    {
      v34 = 0;
      v133 = 0;
    }
    if ( !(unsigned __int8)sub_11BAA70(v35, v34, a1, (_QWORD *)v130, v150) )
      goto LABEL_82;
    v36 = v34;
    if ( v150[0] <= v34 )
      v36 = v150[0];
    v37 = v36;
    v131 = v36;
    v38 = sub_2244B30(v35, v36);
    v39 = sub_2244E60(&ptr, v35, v37, v38);
    if ( v39 == -1 )
      sub_10298F0((__int64 **)&n, (__int64 *)ptr + si128.m128i_u32[0], 1);
    else
      sub_10298F0((__int64 **)&n, (__int64 *)ptr + v39, 1);
    v40 = n.m128i_i64[0];
    sub_10298F0((__int64 **)&n, (__int64 *)ptr + si128.m128i_u32[0], 1);
    if ( v40 != n.m128i_i64[0] )
      goto LABEL_24;
    if ( v35 )
    {
      v153.m128i_i64[0] = (__int64)&v154;
      sub_11BA8E0(&v153, v35, (__int64)&v35[v131]);
      v51 = v153.m128i_i64[1];
      if ( v153.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_163;
      v52 = (__m128i *)v153.m128i_i64[0];
      v53 = v153.m128i_i64[1] + 1;
      if ( (__m128i *)v153.m128i_i64[0] == &v154 )
        v54 = 15;
      else
        v54 = v154.m128i_i64[0];
      if ( v54 < v53 )
      {
        sub_998B30((__int64)&v153, v153.m128i_u64[1], 0, nullptr, 1u);
        v52 = (__m128i *)v153.m128i_i64[0];
      }
    }
    else
    {
      v154.m128i_i8[0] = 0;
      v51 = 0;
      v53 = 1;
      v52 = &v154;
      v153.m128i_i64[0] = (__int64)&v154;
    }
    v52->m128i_i8[v51] = 102;
    v153.m128i_i64[1] = v53;
    *(_BYTE *)(v153.m128i_i64[0] + v53) = 0;
    v55 = (__m128i *)v153.m128i_i64[0];
    n.m128i_i64[0] = (__int64)&v165;
    if ( (__m128i *)v153.m128i_i64[0] == &v154 )
    {
      v55 = &v165;
      v165 = _mm_load_si128(&v154);
    }
    else
    {
      n.m128i_i64[0] = v153.m128i_i64[0];
      v165.m128i_i64[0] = v154.m128i_i64[0];
    }
    v56 = v153.m128i_i64[1];
    v153.m128i_i64[1] = 0;
    v153.m128i_i64[0] = (__int64)&v154;
    n.m128i_i64[1] = v56;
    v154.m128i_i8[0] = 0;
    v57 = sub_2244B30(v55, v56);
    v58 = sub_2244E60(&ptr, v55, v56, v57);
    if ( v58 == -1 )
      v59 = (__int64 *)((char *)ptr + 8 * si128.m128i_u32[0]);
    else
      v59 = (__int64 *)((char *)ptr + 8 * v58);
    sub_10298F0((__int64 **)&v161, v59, 1);
    v40 = v161.m128i_i64[0];
    if ( (__m128i *)n.m128i_i64[0] != &v165 )
      operator delete((void *)n.m128i_i64[0]);
    if ( (__m128i *)v153.m128i_i64[0] != &v154 )
      operator delete((void *)v153.m128i_i64[0]);
    sub_10298F0((__int64 **)&n, (__int64 *)ptr + si128.m128i_u32[0], 1);
    if ( v40 == n.m128i_i64[0] )
    {
      sub_FC70B0((__int64)&n, a1, 0, 481);
      goto LABEL_81;
    }
    if ( v35 )
    {
      v156.m128i_i64[0] = (__int64)&v157;
      sub_11BA8E0(&v156, v35, (__int64)&v35[v131]);
      v60 = v156.m128i_i64[1];
      if ( v156.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_163;
      v61 = (__m128i *)v156.m128i_i64[0];
      v62 = v156.m128i_i64[1] + 1;
      if ( (__m128i *)v156.m128i_i64[0] == &v157 )
        v63 = 15;
      else
        v63 = v157.m128i_i64[0];
      if ( v62 > v63 )
      {
        srcb = (void *)v156.m128i_i64[1];
        sub_998B30((__int64)&v156, v156.m128i_u64[1], 0, nullptr, 1u);
        v61 = (__m128i *)v156.m128i_i64[0];
        v60 = (__int64)srcb;
      }
    }
    else
    {
      v157.m128i_i8[0] = 0;
      v62 = 1;
      v60 = 0;
      v61 = &v157;
      v156.m128i_i64[0] = (__int64)&v157;
    }
    v61->m128i_i8[v60] = 100;
    v156.m128i_i64[1] = v62;
    *(_BYTE *)(v156.m128i_i64[0] + v62) = 0;
    v159.m128i_i64[0] = (__int64)v160;
    src = (__m128i *)v156.m128i_i64[0];
    if ( (__m128i *)v156.m128i_i64[0] == &v157 )
    {
      v160[0] = _mm_load_si128(&v157);
      src = v160;
    }
    else
    {
      v159.m128i_i64[0] = v156.m128i_i64[0];
      v160[0].m128i_i64[0] = v157.m128i_i64[0];
    }
    v64 = v156.m128i_u64[1];
    v156.m128i_i64[1] = 0;
    v157.m128i_i8[0] = 0;
    v159.m128i_i64[1] = v64;
    v156.m128i_i64[0] = (__int64)&v157;
    v65 = sub_2244B30(src, v64);
    v66 = (unsigned int)sub_2244CB0(&ptr, src, v64, v65);
    v68 = (__int64 *)((char *)ptr + 8 * v66);
    if ( *v68 )
    {
      if ( *v68 != -8 )
      {
        sub_10298F0((__int64 **)&n, v68, 0);
        v69 = n.m128i_i64[0];
        goto LABEL_65;
      }
      --si128.m128i_i32[2];
    }
    v146 = (char *)ptr + 8 * v66;
    v144 = v66;
    v106 = sub_22300B0(v64 + 17, 8, v66, v67, v68, v66);
    v107 = v144;
    v108 = (__int64 *)v146;
    v109 = v106;
    if ( v64 )
    {
      v148 = v106;
      memcpy((void *)(v106 + 16), src, v64);
      v109 = v148;
      v108 = (__int64 *)v146;
      v107 = v144;
    }
    *(_BYTE *)(v109 + v64 + 16) = 0;
    *(_QWORD *)v109 = v64;
    *(_BYTE *)(v109 + 8) = 0;
    *v108 = v109;
    ++si128.m128i_i32[1];
    v110 = sub_22450D0(&ptr, v107);
    sub_10298F0((__int64 **)&n, (__int64 *)ptr + v110, 0);
    v69 = n.m128i_i64[0];
LABEL_65:
    v70 = *(_BYTE *)(*(_QWORD *)v69 + 8LL);
    if ( v70 )
      goto LABEL_75;
    v161.m128i_i64[0] = (__int64)&v162;
    if ( v35 )
    {
      sub_11BA8E0(&v161, v35, (__int64)&v35[v131]);
    }
    else
    {
      v161.m128i_i64[1] = 0;
      v162.m128i_i8[0] = 0;
    }
    sub_11C28A0(&n, &v161, 104);
    v71 = n.m128i_u64[1];
    srca = (void *)n.m128i_i64[0];
    v72 = sub_2244B30(n.m128i_i64[0], n.m128i_i64[1]);
    v73 = (unsigned int)sub_2244CB0(&ptr, srca, v71, v72);
    v75 = (__int64 *)((char *)ptr + 8 * v73);
    if ( !*v75 )
      goto LABEL_140;
    if ( *v75 == -8 )
    {
      --si128.m128i_i32[2];
LABEL_140:
      v147 = (char *)ptr + 8 * v73;
      v145 = v73;
      v121 = sub_22300B0(v71 + 17, 8, v73, v74, v75, v73);
      v122 = v145;
      v123 = (__int64 *)v147;
      v124 = v121;
      if ( v71 )
      {
        v149 = v121;
        memcpy((void *)(v121 + 16), srca, v71);
        v124 = v149;
        v123 = (__int64 *)v147;
        v122 = v145;
      }
      *(_BYTE *)(v124 + v71 + 16) = 0;
      *(_QWORD *)v124 = v71;
      *(_BYTE *)(v124 + 8) = 0;
      *v123 = v124;
      ++si128.m128i_i32[1];
      v125 = sub_22450D0(&ptr, v122);
      sub_10298F0((__int64 **)&v153, (__int64 *)ptr + v125, 0);
      v76 = v153.m128i_i64[0];
      goto LABEL_71;
    }
    sub_10298F0((__int64 **)&v153, v75, 0);
    v76 = v153.m128i_i64[0];
LABEL_71:
    v70 = *(_BYTE *)(*(_QWORD *)v76 + 8LL);
    if ( (__m128i *)n.m128i_i64[0] != &v165 )
      operator delete((void *)n.m128i_i64[0]);
    if ( (__m128i *)v161.m128i_i64[0] != &v162 )
      operator delete((void *)v161.m128i_i64[0]);
LABEL_75:
    if ( (__m128i *)v159.m128i_i64[0] != v160 )
      operator delete((void *)v159.m128i_i64[0]);
    if ( (__m128i *)v156.m128i_i64[0] != &v157 )
      operator delete((void *)v156.m128i_i64[0]);
    if ( v70 )
    {
LABEL_80:
      sub_FC70B0((__int64)&n, a1, 0, 400);
      v77 = (char *)sub_11BA9E0(*(_QWORD *)v130, *(_QWORD **)(v130 + 8));
      sub_AEC220((unsigned __int8 **)&n, v77, v78);
LABEL_81:
      sub_AEC220((unsigned __int8 **)&n, v35, v34);
      sub_AEA040((__int64)&n);
LABEL_82:
      v2 = (char *)&byte_22F0C30;
      j__strlen(&byte_22F0C30);
      goto LABEL_83;
    }
LABEL_24:
    if ( *(_BYTE *)(*(_QWORD *)v40 + 8LL) )
      goto LABEL_80;
    *(_BYTE *)(*(_QWORD *)v40 + 8LL) = 1;
    if ( (v35[v131 - 1] & 0xFD) != 0x64 && v35[v131 - 1] != 104 )
    {
      if ( v35 )
      {
        v159.m128i_i64[0] = (__int64)v160;
        sub_11BA8E0(&v159, v35, (__int64)&v35[v131]);
        v84 = v159.m128i_i64[1];
        if ( v159.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_163;
        v85 = (__m128i *)v159.m128i_i64[0];
        v86 = v159.m128i_i64[1] + 1;
        if ( (__m128i *)v159.m128i_i64[0] == v160 )
          v87 = 15;
        else
          v87 = v160[0].m128i_i64[0];
        if ( v86 > v87 )
        {
          sub_998B30((__int64)&v159, v159.m128i_u64[1], 0, nullptr, 1u);
          v85 = (__m128i *)v159.m128i_i64[0];
        }
      }
      else
      {
        v85 = v160;
        v160[0].m128i_i8[0] = 0;
        v86 = 1;
        v84 = 0;
        v159.m128i_i64[0] = (__int64)v160;
      }
      v85->m128i_i8[v84] = 100;
      v159.m128i_i64[1] = v86;
      *(_BYTE *)(v159.m128i_i64[0] + v86) = 0;
      v88 = (__m128i *)v159.m128i_i64[0];
      n.m128i_i64[0] = (__int64)&v165;
      if ( (__m128i *)v159.m128i_i64[0] == v160 )
      {
        v88 = &v165;
        v165 = _mm_load_si128(v160);
      }
      else
      {
        n.m128i_i64[0] = v159.m128i_i64[0];
        v165.m128i_i64[0] = v160[0].m128i_i64[0];
      }
      v89 = v159.m128i_u64[1];
      v159.m128i_i64[1] = 0;
      v159.m128i_i64[0] = (__int64)v160;
      n.m128i_i64[1] = v89;
      v160[0].m128i_i8[0] = 0;
      v90 = sub_2244B30(v88, v89);
      v91 = (unsigned int)sub_2244CB0(&ptr, v88, v89, v90);
      v93 = (__int64 *)((char *)ptr + 8 * v91);
      if ( *v93 )
      {
        if ( *v93 != -8 )
        {
          sub_10298F0((__int64 **)&v161, v93, 0);
          v94 = v161.m128i_i64[0];
          goto LABEL_103;
        }
        --si128.m128i_i32[2];
      }
      v137 = (char *)ptr + 8 * v91;
      v135 = v91;
      v111 = sub_22300B0(v89 + 17, 8, v91, v91, v93, v92);
      v112 = v135;
      v113 = (__int64 *)v137;
      v114 = v111;
      if ( v89 )
      {
        memcpy((void *)(v111 + 16), v88, v89);
        v113 = (__int64 *)v137;
        v112 = v135;
      }
      *(_BYTE *)(v114 + v89 + 16) = 0;
      *(_QWORD *)v114 = v89;
      *(_BYTE *)(v114 + 8) = 0;
      *v113 = v114;
      ++si128.m128i_i32[1];
      v115 = sub_22450D0(&ptr, v112);
      sub_10298F0((__int64 **)&v161, (__int64 *)ptr + v115, 0);
      v94 = v161.m128i_i64[0];
LABEL_103:
      *(_BYTE *)(*(_QWORD *)v94 + 8LL) = 1;
      if ( (__m128i *)n.m128i_i64[0] != &v165 )
        operator delete((void *)n.m128i_i64[0]);
      if ( (__m128i *)v159.m128i_i64[0] != v160 )
        operator delete((void *)v159.m128i_i64[0]);
      if ( v35 )
      {
        v161.m128i_i64[0] = (__int64)&v162;
        sub_11BA8E0(&v161, v35, (__int64)&v35[v131]);
        v95 = v161.m128i_i64[1];
        if ( v161.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
LABEL_163:
          std::__throw_length_error("basic_string::_M_replace_aux");
        v96 = (__m128i *)v161.m128i_i64[0];
        v97 = v161.m128i_i64[1] + 1;
        if ( (__m128i *)v161.m128i_i64[0] == &v162 )
          v98 = 15;
        else
          v98 = v162.m128i_i64[0];
        if ( v97 > v98 )
        {
          sub_998B30((__int64)&v161, v161.m128i_u64[1], 0, nullptr, 1u);
          v96 = (__m128i *)v161.m128i_i64[0];
        }
      }
      else
      {
        v96 = &v162;
        v162.m128i_i8[0] = 0;
        v97 = 1;
        v95 = 0;
        v161.m128i_i64[0] = (__int64)&v162;
      }
      v96->m128i_i8[v95] = 104;
      v161.m128i_i64[1] = v97;
      *(_BYTE *)(v161.m128i_i64[0] + v97) = 0;
      v99 = (__m128i *)v161.m128i_i64[0];
      n.m128i_i64[0] = (__int64)&v165;
      if ( (__m128i *)v161.m128i_i64[0] == &v162 )
      {
        v99 = &v165;
        v165 = _mm_load_si128(&v162);
      }
      else
      {
        n.m128i_i64[0] = v161.m128i_i64[0];
        v165.m128i_i64[0] = v162.m128i_i64[0];
      }
      v100 = v161.m128i_u64[1];
      v161.m128i_i64[1] = 0;
      v161.m128i_i64[0] = (__int64)&v162;
      n.m128i_i64[1] = v100;
      v162.m128i_i8[0] = 0;
      v101 = sub_2244B30(v99, v100);
      v102 = (unsigned int)sub_2244CB0(&ptr, v99, v100, v101);
      v104 = (__int64 *)((char *)ptr + 8 * v102);
      if ( *v104 )
      {
        if ( *v104 != -8 )
        {
          sub_10298F0((__int64 **)&v159, v104, 0);
          v105 = v159.m128i_i64[0];
LABEL_118:
          *(_BYTE *)(*(_QWORD *)v105 + 8LL) = 1;
          if ( (__m128i *)n.m128i_i64[0] != &v165 )
            operator delete((void *)n.m128i_i64[0]);
          if ( (__m128i *)v161.m128i_i64[0] != &v162 )
            operator delete((void *)v161.m128i_i64[0]);
          goto LABEL_27;
        }
        --si128.m128i_i32[2];
      }
      v136 = (char *)ptr + 8 * v102;
      v132 = v102;
      v116 = sub_22300B0(v100 + 17, 8, v102, v104, v102, v103);
      v117 = v132;
      v118 = (__int64 *)v136;
      v119 = v116;
      if ( v100 )
      {
        v138 = v116;
        memcpy((void *)(v116 + 16), v99, v100);
        v119 = v138;
        v118 = (__int64 *)v136;
        v117 = v132;
      }
      *(_BYTE *)(v119 + v100 + 16) = 0;
      *(_QWORD *)v119 = v100;
      *(_BYTE *)(v119 + 8) = 0;
      *v118 = v119;
      ++si128.m128i_i32[1];
      v120 = sub_22450D0(&ptr, v117);
      sub_10298F0((__int64 **)&v159, (__int64 *)ptr + v120, 0);
      v105 = v159.m128i_i64[0];
      goto LABEL_118;
    }
LABEL_27:
    v161.m128i_i64[1] = v34;
    v158 = 261;
    v43 = "!";
    v155 = 261;
    if ( !v133 )
      v43 = &byte_22F0C30;
    v156.m128i_i64[1] = v133 & 1;
    v163 = 261;
    v156.m128i_i64[0] = (__int64)v43;
    v161.m128i_i64[0] = (__int64)v35;
    v153.m128i_i64[0] = (__int64)v129;
    v153.m128i_i64[1] = v127;
    sub_A41580(&v159, &v153, &v156, 261, v41, v42);
    sub_A41580(&n, &v159, &v161, v44, v45, v46);
    v47 = (const char *)sub_10DA6C0(a2, (__int64)&n);
    v127 = 0;
    v129 = v47;
    if ( v47 )
      v127 = j__strlen(v47);
    if ( v143 != (_DWORD)v128 )
    {
      v166 = 773;
      n.m128i_i64[0] = (__int64)v129;
      n.m128i_i64[1] = v127;
      v165.m128i_i64[0] = (__int64)",";
      v48 = (const char *)sub_10DA6C0(a2, (__int64)&n);
      v127 = 0;
      v129 = v48;
      if ( v48 )
        v127 = j__strlen(v48);
    }
    v49 = v128 + 1;
    if ( v142 == v128 )
      break;
    ++v128;
    v32 = v49;
  }
  v2 = (char *)v129;
LABEL_83:
  v79 = ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v80 = 0;
    v81 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    v82 = (char *)ptr;
    do
    {
      v83 = *(_QWORD **)&v82[v80];
      if ( v83 && v83 != (_QWORD *)-8LL )
      {
        operator delete(v83, *v83 + 17LL, 8);
        v82 = (char *)ptr;
      }
      v80 += 8;
    }
    while ( v80 != v81 );
    v79 = v82;
  }
  free(v79);
  return v2;
}
