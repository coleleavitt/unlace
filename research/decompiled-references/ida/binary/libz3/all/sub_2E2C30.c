__int64 __fastcall sub_2E2C30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  const int *v9; // rsi
  _BYTE *v10; // rcx
  char *v11; // rbx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rax
  const int *v18; // rsi
  _BYTE *v19; // rax
  unsigned int v20; // esi
  char *v21; // rbp
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rdi
  _BYTE **v28; // rsi
  _BYTE *v29; // rcx
  __int64 v30; // rax
  int v31; // r15d
  void *v32; // rdi
  __int64 v33; // r14
  int v34; // eax
  void *v35; // rbx
  unsigned int v36; // ebx
  _QWORD *v37; // rax
  __m128i v38; // xmm1
  _QWORD *v39; // rbx
  __int64 v40; // r14
  __int64 v41; // rbp
  int v42; // eax
  __int64 v43; // rax
  void *v44; // r13
  __int64 v45; // rbp
  _BYTE **v46; // rsi
  _BYTE *v47; // rcx
  _BYTE **v48; // rsi
  _BYTE *v49; // rcx
  const int *v50; // rsi
  _BYTE *v51; // rcx
  const int *v52; // rdi
  unsigned int v53; // edx
  __int64 v54; // rax
  void *v55; // r14
  __int64 v56; // r13
  int v57; // eax
  int v58; // eax
  void *v59; // rbx
  _QWORD *v60; // rbx
  __int64 v61; // rdx
  void **v62; // rax
  void *v63; // rdx
  __m128i v64; // xmm0
  char v65; // cl
  void *v66; // rdx
  void *v67; // rdx
  void *v68; // rbx
  __int64 v69; // rbp
  __int64 v70; // rax
  __int64 v71; // rbx
  void *v72; // r14
  __int64 v73; // rsi
  void *v74; // rbx
  void *v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rbp
  void *v79; // r13
  __int64 v80; // rsi
  void *v81; // rbx
  unsigned int v83; // r15d
  unsigned int v84; // eax
  unsigned int v85; // r15d
  size_t v86; // rdi
  unsigned int *v87; // rsi
  _QWORD *v88; // r14
  __int64 v89; // rax
  _DWORD *v90; // rdx
  __int64 v91; // rdi
  _QWORD *v92; // rax
  _QWORD *v93; // rdi
  __int64 v94; // rcx
  char v95; // r8
  __int64 v96; // rcx
  char v97; // r8
  __m128i v98; // xmm0
  char v99; // r8
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rax
  _QWORD *v103; // rbp
  unsigned int *v104; // r15
  void *v105; // rbx
  __int64 v106; // r13
  __int64 v107; // rdx
  __int64 v108; // rbx
  void *v109; // rbp
  __int64 v110; // rsi
  void *v111; // rbx
  _QWORD *v112; // rsi
  _QWORD *v113; // rax
  char **exception; // rbp
  int v115; // [rsp+0h] [rbp-1B8h]
  unsigned int *v116; // [rsp+8h] [rbp-1B0h]
  int v117; // [rsp+10h] [rbp-1A8h]
  int v118[2]; // [rsp+10h] [rbp-1A8h]
  void *v119; // [rsp+18h] [rbp-1A0h]
  __int64 *v120; // [rsp+18h] [rbp-1A0h]
  int v121; // [rsp+20h] [rbp-198h]
  int *v122; // [rsp+20h] [rbp-198h]
  int v123; // [rsp+28h] [rbp-190h]
  unsigned int v124; // [rsp+28h] [rbp-190h]
  _QWORD *v125; // [rsp+28h] [rbp-190h]
  int v126; // [rsp+30h] [rbp-188h]
  int *v127; // [rsp+30h] [rbp-188h]
  int v128; // [rsp+38h] [rbp-180h]
  _DWORD *v129; // [rsp+38h] [rbp-180h]
  int v130; // [rsp+40h] [rbp-178h]
  unsigned int v131; // [rsp+44h] [rbp-174h]
  int v132; // [rsp+48h] [rbp-170h]
  int v133; // [rsp+50h] [rbp-168h]
  int v134[2]; // [rsp+58h] [rbp-160h] BYREF
  __int64 v135; // [rsp+60h] [rbp-158h] BYREF
  int v136[2]; // [rsp+68h] [rbp-150h]
  int v137[2]; // [rsp+70h] [rbp-148h] BYREF
  int v138[2]; // [rsp+78h] [rbp-140h]
  __int64 v139; // [rsp+80h] [rbp-138h] BYREF
  __int64 v140; // [rsp+88h] [rbp-130h]
  __int64 v141; // [rsp+90h] [rbp-128h] BYREF
  __int64 v142; // [rsp+98h] [rbp-120h]
  void *v143; // [rsp+A0h] [rbp-118h] BYREF
  char *v144; // [rsp+A8h] [rbp-110h]
  __int64 v145; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v146; // [rsp+B8h] [rbp-100h]
  void *v147[2]; // [rsp+C0h] [rbp-F8h] BYREF
  _QWORD v148[2]; // [rsp+D0h] [rbp-E8h] BYREF
  void *v149[2]; // [rsp+E0h] [rbp-D8h] BYREF
  _QWORD v150[2]; // [rsp+F0h] [rbp-C8h] BYREF
  void *v151[2]; // [rsp+100h] [rbp-B8h] BYREF
  _QWORD v152[2]; // [rsp+110h] [rbp-A8h] BYREF
  void *v153; // [rsp+120h] [rbp-98h] BYREF
  char *v154; // [rsp+128h] [rbp-90h]
  __int64 v155; // [rsp+130h] [rbp-88h] BYREF
  void *v156; // [rsp+138h] [rbp-80h]
  __int64 v157; // [rsp+140h] [rbp-78h] BYREF
  __m128i v158; // [rsp+148h] [rbp-70h] BYREF
  int v159; // [rsp+158h] [rbp-60h]
  __int64 v160; // [rsp+160h] [rbp-58h] BYREF
  void *v161; // [rsp+168h] [rbp-50h]
  __int64 v162; // [rsp+170h] [rbp-48h] BYREF
  void *v163; // [rsp+178h] [rbp-40h]

  v6 = a1[2];
  v7 = *((_DWORD *)a1 + 6);
  v116 = (unsigned int *)a1;
  if ( v6 && (v8 = v7 + 1, (unsigned int)v8 < *(_DWORD *)(v6 - 4)) )
    v9 = (const int *)(v6 + 56 * v8 + 8);
  else
    v9 = &qword_18D6CD0;
  v10 = *(_BYTE **)v9;
  if ( *(_QWORD *)v9 )
  {
    if ( (*(_QWORD *)v9 & 7LL) == 1 )
    {
      sub_180CE20(
        (int)&v153,
        (int)v9,
        v7,
        (int)v10,
        a5,
        a6,
        v115,
        a1,
        v117,
        (__int64)v119,
        v121,
        v123,
        v126,
        v128,
        v130,
        v132,
        v133,
        v134[0],
        v135,
        v136[0],
        v137[0],
        v138[0],
        v139,
        v140,
        v141,
        v142,
        (int)v143,
        v144,
        v145,
        v146);
      if ( v154 == (_BYTE *)&dword_0 + 1 && *(_BYTE *)v153 == 58 )
      {
        if ( v153 != &v155 )
          operator delete(v153, v155 + 1);
        v7 = v116[6];
        v6 = *((_QWORD *)v116 + 2);
LABEL_44:
        if ( v6 && v7 < *(_DWORD *)(v6 - 4) )
          v11 = *(char **)(v6 + 56LL * v7 + 8);
        else
          v11 = nullptr;
        v116[6] = v7 + 2;
        if ( (unsigned int)sub_180B130() <= 9 )
          goto LABEL_8;
        goto LABEL_48;
      }
      if ( v153 != &v155 )
        operator delete(v153, v155 + 1);
    }
    else if ( *v10 == 58 && !v10[1] )
    {
      goto LABEL_44;
    }
  }
  v11 = nullptr;
  if ( (unsigned int)sub_180B130() <= 9 )
    goto LABEL_8;
LABEL_48:
  if ( (unsigned __int8)sub_186A530() )
  {
    sub_186A4C0();
    v45 = sub_180B150();
    if ( ((unsigned __int8)v11 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v11 )
        strlen(v11);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v45, "\n");
  }
  else
  {
    sub_180B150();
    if ( ((unsigned __int8)v11 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v11 )
        strlen(v11);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
  }
LABEL_8:
  v135 = 0;
  v122 = v137;
  *(_QWORD *)v136 = 0;
  *(_QWORD *)v137 = 1;
  *(_QWORD *)v138 = 0;
  sub_182CBA0(qword_1C7F2C0, v137);
  LOBYTE(v137[1]) &= ~1u;
  v137[0] = 1;
  v15 = v116[6];
  v16 = *((_QWORD *)v116 + 2);
  v17 = v15 + 1;
  if ( v16 && (unsigned int)v17 < *(_DWORD *)(v16 - 4) )
  {
    v12 = 7 * v17;
    v18 = (const int *)(v16 + 56 * v17 + 8);
  }
  else
  {
    v18 = &qword_18D6CD0;
  }
  v19 = *(_BYTE **)v18;
  if ( !*(_QWORD *)v18 )
    goto LABEL_18;
  v12 = *(_QWORD *)v18 & 7LL;
  if ( v12 == 1 )
  {
    sub_180CE20(
      (int)&v143,
      (int)v18,
      v16,
      1,
      v13,
      v14,
      v115,
      v116,
      v117,
      (__int64)&v135,
      (int)v137,
      v123,
      v126,
      v128,
      v130,
      v132,
      v133,
      v134[0],
      v135,
      v136[0],
      v137[0],
      v138[0],
      v139,
      v140,
      v141,
      v142,
      (int)v143,
      v144,
      v145,
      v146);
    if ( v144 != (_BYTE *)&dword_0 + 1 || *(_BYTE *)v143 != 61 )
    {
      if ( v143 != &v145 )
        operator delete(v143, v145 + 1);
      goto LABEL_18;
    }
    if ( v143 != &v145 )
      operator delete(v143, v145 + 1);
    v15 = v116[6];
    v16 = *((_QWORD *)v116 + 2);
  }
  else if ( *v19 != 61 || v19[1] )
  {
LABEL_18:
    v21 = nullptr;
    v120 = &v135;
    goto LABEL_19;
  }
  v12 = v15 + 2;
  if ( !v16 )
    goto LABEL_18;
  v20 = *(_DWORD *)(v16 - 4);
  if ( (unsigned int)v12 >= v20 || !*(_BYTE *)(v16 + 56 * v12) )
    goto LABEL_18;
  if ( v15 + 3 >= v20 )
    v52 = &qword_18D6CD0;
  else
    LODWORD(v52) = v16 + 56 * (v15 + 3) + 8;
  if ( !(unsigned __int8)sub_2DD1C0((int)v52, "->") )
    goto LABEL_18;
  v53 = v116[6];
  v54 = *((_QWORD *)v116 + 2);
  if ( v54 && v53 < *(_DWORD *)(v54 - 4) )
    v21 = *(char **)(v54 + 56LL * v53 + 8);
  else
    v21 = nullptr;
  v12 = v53 + 2;
  v55 = qword_1C7F2C0;
  v16 = 7 * v12;
  v56 = v54 + 56 * v12;
  if ( (*(_BYTE *)(v56 + 20) & 1) != 0 )
  {
    v120 = &v135;
    sub_182C690(qword_1C7F2C0, &v135, v56 + 16);
  }
  else
  {
    v57 = *(_DWORD *)(v56 + 16);
    BYTE4(v135) &= ~1u;
    LODWORD(v135) = v57;
    v120 = &v135;
  }
  if ( (*(_BYTE *)(v56 + 36) & 1) != 0 )
  {
    sub_182C690(v55, v122, v56 + 32);
  }
  else
  {
    v58 = *(_DWORD *)(v56 + 32);
    LOBYTE(v137[1]) &= ~1u;
    v137[0] = v58;
  }
  v116[6] += 4;
LABEL_19:
  *(_QWORD *)v134 = 0;
  v127 = v134;
  sub_2DD960((__int64)v116, (int **)v134, v16, v12, v13, v14);
  v24 = *((_QWORD *)v116 + 2);
  *(_QWORD *)v118 = *(_QWORD *)v134;
  v25 = v116[6];
  if ( !v24 )
    goto LABEL_80;
  v26 = *(_DWORD *)(v24 - 4);
  if ( v25 >= v26 )
    goto LABEL_68;
  v27 = v25;
  v28 = (_BYTE **)(v24 + 56LL * v25 + 8);
  v29 = *v28;
  if ( *v28 )
  {
    if ( ((unsigned __int64)*v28 & 7) == 1 )
    {
      sub_180CE20(
        (int)v147,
        (int)v28,
        v24,
        (int)v29,
        v22,
        v23,
        v115,
        v116,
        v134[0],
        (__int64)&v135,
        (int)v122,
        v123,
        (int)v134,
        v128,
        v130,
        v132,
        v133,
        v134[0],
        v135,
        v136[0],
        v137[0],
        v138[0],
        v139,
        v140,
        v141,
        v142,
        (int)v143,
        v144,
        v145,
        v146);
      if ( v147[1] == (char *)&dword_0 + 2 && *(_WORD *)v147[0] == 15676 )
      {
        if ( v147[0] != v148 )
          operator delete(v147[0], v148[0] + 1LL);
        goto LABEL_166;
      }
      if ( v147[0] != v148 )
        operator delete(v147[0], v148[0] + 1LL);
      v25 = v116[6];
      v24 = *((_QWORD *)v116 + 2);
    }
    else if ( *v29 == 60 && v29[1] == 61 && !v29[2] )
    {
      goto LABEL_26;
    }
    if ( !v24 )
      goto LABEL_80;
    if ( v25 >= *(_DWORD *)(v24 - 4) )
    {
      v50 = &qword_18D6CD0;
      goto LABEL_153;
    }
    v27 = v25;
  }
  v46 = (_BYTE **)(v24 + 56 * v27 + 8);
  v47 = *v46;
  if ( *v46 )
  {
    if ( ((unsigned __int64)*v46 & 7) != 1 )
    {
      if ( *v47 != 61 || v47[1] != 60 || v47[2] )
      {
LABEL_66:
        if ( !v24 )
          goto LABEL_80;
        v26 = *(_DWORD *)(v24 - 4);
LABEL_68:
        if ( v25 >= v26 )
        {
          v50 = &qword_18D6CD0;
          goto LABEL_153;
        }
        v27 = v25;
        goto LABEL_70;
      }
LABEL_26:
      v30 = v25 + 1;
      v31 = 0;
      v116[6] = v30;
      goto LABEL_27;
    }
    sub_180CE20(
      (int)v149,
      (int)v46,
      v24,
      (int)v47,
      v22,
      v23,
      v115,
      v116,
      v118[0],
      (__int64)v120,
      (int)v122,
      v123,
      (int)v127,
      v128,
      v130,
      v132,
      v133,
      v134[0],
      v135,
      v136[0],
      v137[0],
      v138[0],
      v139,
      v140,
      v141,
      v142,
      (int)v143,
      v144,
      v145,
      v146);
    if ( v149[1] != (char *)&dword_0 + 2 || *(_WORD *)v149[0] != 15421 )
    {
      if ( v149[0] != v150 )
        operator delete(v149[0], v150[0] + 1LL);
      v25 = v116[6];
      v24 = *((_QWORD *)v116 + 2);
      goto LABEL_66;
    }
    if ( v149[0] != v150 )
      operator delete(v149[0], v150[0] + 1LL);
LABEL_166:
    v25 = v116[6];
    v24 = *((_QWORD *)v116 + 2);
    goto LABEL_26;
  }
LABEL_70:
  v48 = (_BYTE **)(v24 + 56 * v27 + 8);
  v49 = *v48;
  if ( !*v48 )
    goto LABEL_76;
  if ( ((unsigned __int64)*v48 & 7) == 1 )
  {
    sub_180CE20(
      (int)v151,
      (int)v48,
      v24,
      (int)v49,
      v22,
      v23,
      v115,
      v116,
      v118[0],
      (__int64)v120,
      (int)v122,
      v123,
      (int)v127,
      v128,
      v130,
      v132,
      v133,
      v134[0],
      v135,
      v136[0],
      v137[0],
      v138[0],
      v139,
      v140,
      v141,
      v142,
      (int)v143,
      v144,
      v145,
      v146);
    if ( v151[1] == (char *)&dword_0 + 2 && *(_WORD *)v151[0] == 15678 )
    {
      if ( v151[0] != v152 )
        operator delete(v151[0], v152[0] + 1LL);
      goto LABEL_200;
    }
    if ( v151[0] != v152 )
      operator delete(v151[0], v152[0] + 1LL);
    v25 = v116[6];
    v24 = *((_QWORD *)v116 + 2);
  }
  else if ( *v49 == 62 && v49[1] == 61 && !v49[2] )
  {
    goto LABEL_176;
  }
  if ( v24 )
  {
    v27 = v25;
    if ( v25 < *(_DWORD *)(v24 - 4) )
    {
LABEL_76:
      v50 = (const int *)(v24 + 56 * v27 + 8);
      v51 = *(_BYTE **)v50;
      goto LABEL_77;
    }
  }
  v50 = &qword_18D6CD0;
LABEL_153:
  v51 = nullptr;
LABEL_77:
  if ( v51 )
  {
    if ( ((unsigned __int8)v51 & 7) != 1 )
    {
      if ( *v51 != 61 || v51[1] != 62 || v51[2] )
        goto LABEL_80;
LABEL_176:
      v30 = v25 + 1;
      v31 = 1;
      v116[6] = v30;
      goto LABEL_27;
    }
    sub_180CE20(
      (int)&v153,
      (int)v50,
      v24,
      (int)v51,
      v22,
      v23,
      v115,
      v116,
      v118[0],
      (__int64)v120,
      (int)v122,
      v123,
      (int)v127,
      v128,
      v130,
      v132,
      v133,
      v134[0],
      v135,
      v136[0],
      v137[0],
      v138[0],
      v139,
      v140,
      v141,
      v142,
      (int)v143,
      v144,
      v145,
      v146);
    if ( v154 != (_BYTE *)&dword_0 + 2 || *(_WORD *)v153 != 15933 )
    {
      if ( v153 != &v155 )
        operator delete(v153, v155 + 1);
      goto LABEL_80;
    }
    if ( v153 != &v155 )
      operator delete(v153, v155 + 1);
LABEL_200:
    v25 = v116[6];
    v24 = *((_QWORD *)v116 + 2);
    goto LABEL_176;
  }
LABEL_80:
  if ( !(unsigned __int8)sub_2DD2C0(v116, "=") )
    sub_2E2A00((__int64)v116);
  v31 = 2;
  v30 = v116[6];
  v24 = *((_QWORD *)v116 + 2);
LABEL_27:
  v32 = qword_1C7F2C0;
  v139 = 0;
  v140 = 0;
  v141 = 1;
  v33 = v24 + 56 * v30;
  v142 = 0;
  if ( (*(_BYTE *)(v33 + 20) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v139, v33 + 16);
    if ( (*(_BYTE *)(v33 + 36) & 1) == 0 )
      goto LABEL_29;
  }
  else
  {
    LODWORD(v139) = *(_DWORD *)(v33 + 16);
    if ( (*(_BYTE *)(v33 + 36) & 1) == 0 )
    {
LABEL_29:
      v34 = *(_DWORD *)(v33 + 32);
      BYTE4(v141) &= ~1u;
      LODWORD(v141) = v34;
      goto LABEL_30;
    }
  }
  sub_182C690(v32, &v141, v33 + 32);
LABEL_30:
  v153 = v11;
  v154 = v21;
  v35 = qword_1C7F2C0;
  ++v116[6];
  v155 = 0;
  v156 = nullptr;
  v157 = 1;
  v158.m128i_i64[0] = 0;
  if ( (v135 & 0x100000000LL) != 0 )
    sub_182C690(v35, &v155, v120);
  else
    LODWORD(v155) = v135;
  if ( (v137[1] & 1) != 0 )
  {
    sub_182C690(v35, &v157, v122);
  }
  else
  {
    BYTE4(v157) &= ~1u;
    LODWORD(v157) = v137[0];
  }
  v158.m128i_i64[1] = 0;
  if ( *(_QWORD *)v118 )
  {
    v36 = *(_DWORD *)(*(_QWORD *)v118 - 4LL);
    v124 = *(_DWORD *)(*(_QWORD *)v118 - 8LL);
    v37 = (_QWORD *)sub_186B270(40LL * v124 + 8);
    v38 = _mm_cvtsi32_si128(v36);
    v39 = v37 + 1;
    v158.m128i_i64[1] = (__int64)(v37 + 1);
    *v37 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v124), v38).m128i_u64[0];
    v40 = *(_QWORD *)v118 + 40LL * *(unsigned int *)(*(_QWORD *)v118 - 4LL);
    if ( *(_QWORD *)v118 != v40 )
    {
      v41 = *(_QWORD *)v118;
      do
      {
        *((_BYTE *)v39 + 4) &= 0xFCu;
        v44 = qword_1C7F2C0;
        *((_BYTE *)v39 + 20) &= 0xFCu;
        *(_DWORD *)v39 = 0;
        v39[1] = 0;
        *((_DWORD *)v39 + 4) = 1;
        v39[3] = 0;
        if ( (*(_BYTE *)(v41 + 4) & 1) != 0 )
        {
          sub_182C690(v44, v39, v41);
          if ( (*(_BYTE *)(v41 + 20) & 1) != 0 )
          {
LABEL_42:
            sub_182C690(v44, v39 + 2, v41 + 16);
            goto LABEL_39;
          }
        }
        else
        {
          *(_DWORD *)v39 = *(_DWORD *)v41;
          if ( (*(_BYTE *)(v41 + 20) & 1) != 0 )
            goto LABEL_42;
        }
        v42 = *(_DWORD *)(v41 + 16);
        *((_BYTE *)v39 + 20) &= ~1u;
        *((_DWORD *)v39 + 4) = v42;
LABEL_39:
        v43 = *(_QWORD *)(v41 + 32);
        v41 += 40;
        v39 += 5;
        *(v39 - 1) = v43;
      }
      while ( v40 != v41 );
    }
  }
  v159 = v31;
  v59 = qword_1C7F2C0;
  v160 = 0;
  v161 = nullptr;
  v162 = 1;
  v163 = nullptr;
  if ( (v139 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v160, &v139);
  else
    LODWORD(v160) = v139;
  if ( (v141 & 0x100000000LL) == 0 )
  {
    BYTE4(v162) &= ~1u;
    LODWORD(v162) = v141;
    v60 = *((_QWORD **)v116 + 8);
    if ( v60 )
      goto LABEL_106;
LABEL_138:
    v113 = (_QWORD *)sub_186B270(0xC8u);
    v60 = v113 + 1;
    *v113 = 2;
    *((_QWORD *)v116 + 8) = v113 + 1;
    v62 = (void **)(v113 + 1);
    goto LABEL_108;
  }
  sub_182C690(v59, &v162, &v141);
  v60 = *((_QWORD **)v116 + 8);
  if ( !v60 )
    goto LABEL_138;
LABEL_106:
  v61 = *((unsigned int *)v60 - 1);
  if ( (_DWORD)v61 == *((_DWORD *)v60 - 2) )
  {
    v83 = 3 * v61 + 1;
    v84 = v83 & 0xFFFFFFFE;
    v85 = v83 >> 1;
    v86 = 32 * (v84 + v85) + 8;
    if ( 96 * (int)v61 + 8 >= (unsigned int)v86 || (unsigned int)v61 >= v85 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v151, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v151);
      sub_233E40((__int64)v151);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v87 = (unsigned int *)sub_186B270(v86);
    v60 = v87 + 2;
    v88 = *((_QWORD **)v116 + 8);
    if ( v88 )
    {
      v89 = *((unsigned int *)v88 - 1);
      v90 = v87 + 2;
      v91 = 3 * v89;
      v87[1] = v89;
      v92 = v88;
      v93 = &v88[4 * v91];
      if ( v93 != v88 )
      {
        do
        {
          v94 = *v92;
          v95 = *((_BYTE *)v90 + 20);
          v92 += 12;
          v90 += 24;
          *((_QWORD *)v90 - 12) = v94;
          *((_QWORD *)v90 - 11) = *(v92 - 11);
          *(v90 - 20) = *((_DWORD *)v92 - 20);
          *((_BYTE *)v90 - 76) = v95 & 0xFC | *((_BYTE *)v92 - 76) & 3;
          v96 = *(v92 - 9);
          *(v92 - 9) = 0;
          v97 = *((_BYTE *)v90 - 60);
          *((_QWORD *)v90 - 9) = v96;
          LODWORD(v96) = *((_DWORD *)v92 - 16);
          v98 = _mm_loadu_si128((const __m128i *)(v92 - 7));
          *(v92 - 7) = 0;
          *(v90 - 16) = v96;
          LOBYTE(v96) = *((_BYTE *)v92 - 60);
          *(__m128i *)(v90 - 14) = v98;
          LOBYTE(v96) = v97 & 0xFC | v96 & 3;
          v99 = *((_BYTE *)v90 - 28);
          *((_BYTE *)v90 - 60) = v96;
          LODWORD(v96) = *((_DWORD *)v92 - 10);
          *(v92 - 6) = 0;
          *(v90 - 10) = v96;
          *(v90 - 8) = *((_DWORD *)v92 - 8);
          *((_BYTE *)v90 - 28) = v99 & 0xFC | *((_BYTE *)v92 - 28) & 3;
          v100 = *(v92 - 3);
          *(v92 - 3) = 0;
          *((_QWORD *)v90 - 3) = v100;
          *(v90 - 4) = *((_DWORD *)v92 - 4);
          *((_BYTE *)v90 - 12) = *(_BYTE *)(v90 - 3) & 0xFC | *((_BYTE *)v92 - 12) & 3;
          v101 = *(v92 - 1);
          *(v92 - 1) = 0;
          *((_QWORD *)v90 - 1) = v101;
        }
        while ( v93 != v92 );
      }
      v102 = *((unsigned int *)v88 - 1);
      if ( (_DWORD)v102 )
      {
        v129 = v87 + 2;
        v131 = v85;
        v103 = &v88[12 * v102];
        v104 = v87;
        do
        {
          v105 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v88 + 8);
          sub_182CBA0(v105, v88 + 10);
          v106 = v88[6];
          if ( v106 )
          {
            v107 = *(unsigned int *)(v106 - 4);
            if ( (_DWORD)v107 )
            {
              v125 = v103;
              v108 = v106 + 40 * v107;
              do
              {
                v109 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v106);
                v110 = v106 + 16;
                v106 += 40;
                sub_182CBA0(v109, v110);
              }
              while ( v106 != v108 );
              v103 = v125;
              v106 = v88[6];
            }
            sub_186B220((void *)(v106 - 8));
          }
          v111 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v88 + 2);
          v112 = v88 + 4;
          v88 += 12;
          sub_182CBA0(v111, v112);
        }
        while ( v88 != v103 );
        v87 = v104;
        v60 = v129;
        v85 = v131;
        v88 = *((_QWORD **)v116 + 8);
      }
      sub_186B220(v88 - 1);
      v62 = (void **)&v60[12 * v87[1]];
    }
    else
    {
      v87[1] = 0;
      v62 = (void **)(v87 + 2);
    }
    *v87 = v85;
    *((_QWORD *)v116 + 8) = v60;
  }
  else
  {
    v62 = (void **)&v60[12 * v61];
  }
LABEL_108:
  *v62 = v153;
  v62[1] = v154;
  *((_DWORD *)v62 + 4) = v155;
  *((_BYTE *)v62 + 20) = BYTE4(v155) & 3 | *((_BYTE *)v62 + 20) & 0xFC;
  v63 = v156;
  v156 = nullptr;
  v62[3] = v63;
  v64 = _mm_loadu_si128(&v158);
  v158.m128i_i64[0] = 0;
  *((_DWORD *)v62 + 8) = v157;
  LOBYTE(v63) = *((_BYTE *)v62 + 36);
  v65 = BYTE4(v157);
  *(__m128i *)(v62 + 5) = v64;
  *((_BYTE *)v62 + 36) = v65 & 3 | (unsigned __int8)v63 & 0xFC;
  v158.m128i_i64[1] = 0;
  *((_DWORD *)v62 + 14) = v159;
  *((_DWORD *)v62 + 16) = v160;
  *((_BYTE *)v62 + 68) = BYTE4(v160) & 3 | *((_BYTE *)v62 + 68) & 0xFC;
  v66 = v161;
  v161 = nullptr;
  v62[9] = v66;
  *((_DWORD *)v62 + 20) = v162;
  *((_BYTE *)v62 + 84) = BYTE4(v162) & 3 | *((_BYTE *)v62 + 84) & 0xFC;
  v67 = v163;
  v163 = nullptr;
  v62[11] = v67;
  ++*((_DWORD *)v60 - 1);
  v68 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v160);
  sub_182CBA0(v68, &v162);
  v69 = v158.m128i_i64[1];
  if ( v158.m128i_i64[1] )
  {
    v70 = *(unsigned int *)(v158.m128i_i64[1] - 4);
    if ( (_DWORD)v70 )
    {
      v71 = v158.m128i_i64[1] + 40 * v70;
      do
      {
        v72 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v69);
        v73 = v69 + 16;
        v69 += 40;
        sub_182CBA0(v72, v73);
      }
      while ( v71 != v69 );
      v69 = v158.m128i_i64[1];
    }
    sub_186B220((void *)(v69 - 8));
  }
  v74 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v155);
  sub_182CBA0(v74, &v157);
  v75 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v139);
  sub_182CBA0(v75, &v141);
  if ( *(_QWORD *)v118 )
  {
    v76 = *(unsigned int *)(*(_QWORD *)v118 - 4LL);
    if ( (_DWORD)v76 )
    {
      v77 = *(_QWORD *)v118;
      v78 = *(_QWORD *)v118 + 40 * v76;
      do
      {
        v79 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v77);
        v80 = v77 + 16;
        v77 += 40;
        sub_182CBA0(v79, v80);
      }
      while ( v78 != v77 );
    }
    sub_186B220((void *)(*(_QWORD *)v118 - 8LL));
  }
  v81 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v120);
  return sub_182CBA0(v81, v122);
}

