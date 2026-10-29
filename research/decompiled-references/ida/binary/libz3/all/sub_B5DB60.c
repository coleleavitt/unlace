__m128i *__fastcall sub_B5DB60(__m128i *a1, __int64 *a2, unsigned int *a3, __int64 a4, int a5)
{
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r12
  int v25; // r8d
  __int64 v26; // r11
  __int64 v27; // r12
  __m128 *v28; // rdx
  int v29; // ecx
  __int64 v30; // r8
  unsigned __int64 *v31; // rsi
  __int64 *v32; // rax
  __int64 *v33; // rdi
  __m128 *v34; // r9
  __int64 v35; // rdx
  unsigned __int64 *v36; // rax
  unsigned __int64 *v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  void *v40; // rdi
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rdi
  __int64 v45; // rax
  void *v46; // r13
  int v47; // r8d
  int v48; // r9d
  unsigned __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // r8d
  int v53; // r9d
  unsigned int *v54; // r12
  _DWORD *v55; // r13
  int v56; // eax
  __int64 v57; // r14
  bool v58; // zf
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned int v67; // r14d
  __int64 v68; // rax
  unsigned int *v69; // rsi
  __int64 v70; // rdi
  double v71; // xmm0_8
  __int64 v73; // rax
  _OWORD *v74; // rax
  int v75; // r10d
  _OWORD *v76; // rcx
  _OWORD *v77; // rdx
  double *v78; // rcx
  double *v79; // r9
  __int64 *v80; // rax
  const double *v81; // rbx
  size_t v82; // r14
  __int64 v83; // rdx
  __m128 *v84; // rdi
  __m128 *v85; // rdx
  __int64 v86; // r15
  __int64 v87; // rax
  __int64 v88; // rdi
  _DWORD *v89; // rdx
  unsigned int v90; // eax
  unsigned int v91; // ecx
  __int64 v92; // rsi
  unsigned int v93; // eax
  _QWORD *v94; // rsi
  unsigned int v95; // eax
  unsigned int v96; // edi
  unsigned int v97; // ecx
  unsigned int *v98; // rax
  unsigned int v99; // edi
  unsigned int v100; // ecx
  unsigned int *v101; // rax
  unsigned int v102; // edi
  unsigned int v103; // eax
  unsigned int *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r15
  __int64 v107; // rax
  _QWORD *v108; // rax
  char **exception; // rbx
  int v110; // [rsp-8h] [rbp-E8h]
  int v111; // [rsp-8h] [rbp-E8h]
  int v112; // [rsp+0h] [rbp-E0h]
  int v113; // [rsp+0h] [rbp-E0h]
  int v114; // [rsp+0h] [rbp-E0h]
  int v115; // [rsp+8h] [rbp-D8h]
  int v116; // [rsp+8h] [rbp-D8h]
  int v117; // [rsp+8h] [rbp-D8h]
  int v118; // [rsp+10h] [rbp-D0h]
  int v119; // [rsp+10h] [rbp-D0h]
  int v120; // [rsp+10h] [rbp-D0h]
  int v121; // [rsp+18h] [rbp-C8h]
  int v122; // [rsp+18h] [rbp-C8h]
  int v123; // [rsp+18h] [rbp-C8h]
  int v124; // [rsp+20h] [rbp-C0h]
  int v125; // [rsp+20h] [rbp-C0h]
  int v126; // [rsp+20h] [rbp-C0h]
  int v127; // [rsp+28h] [rbp-B8h]
  int v128; // [rsp+28h] [rbp-B8h]
  char v129; // [rsp+28h] [rbp-B8h]
  __int64 v130; // [rsp+28h] [rbp-B8h]
  char v131; // [rsp+30h] [rbp-B0h]
  char v132; // [rsp+30h] [rbp-B0h]
  int v133; // [rsp+30h] [rbp-B0h]
  int v134; // [rsp+30h] [rbp-B0h]
  __int64 v135; // [rsp+30h] [rbp-B0h]
  size_t v136; // [rsp+30h] [rbp-B0h]
  __int64 v137; // [rsp+30h] [rbp-B0h]
  __int64 v138; // [rsp+30h] [rbp-B0h]
  __int64 v139; // [rsp+38h] [rbp-A8h]
  int v140; // [rsp+38h] [rbp-A8h]
  __int64 v141; // [rsp+38h] [rbp-A8h]
  __int64 v142; // [rsp+38h] [rbp-A8h]
  int v143; // [rsp+40h] [rbp-A0h]
  int v144; // [rsp+40h] [rbp-A0h]
  __int64 v145; // [rsp+40h] [rbp-A0h]
  __int64 v146; // [rsp+40h] [rbp-A0h]
  void *v147; // [rsp+48h] [rbp-98h]
  int v148[2]; // [rsp+48h] [rbp-98h]
  void *v149; // [rsp+48h] [rbp-98h]
  int v150; // [rsp+48h] [rbp-98h]
  int v151[2]; // [rsp+48h] [rbp-98h]
  int v152[2]; // [rsp+48h] [rbp-98h]
  __m128i *v153; // [rsp+50h] [rbp-90h]
  int v154; // [rsp+50h] [rbp-90h]
  int v155; // [rsp+58h] [rbp-88h]
  int v156; // [rsp+58h] [rbp-88h]
  int v157[2]; // [rsp+58h] [rbp-88h]
  unsigned int v158; // [rsp+58h] [rbp-88h]
  int v159; // [rsp+60h] [rbp-80h]
  int v160; // [rsp+60h] [rbp-80h]
  int v161[2]; // [rsp+60h] [rbp-80h]
  int v162[2]; // [rsp+60h] [rbp-80h]
  unsigned int v163; // [rsp+60h] [rbp-80h]
  int v164; // [rsp+60h] [rbp-80h]
  int v165[2]; // [rsp+68h] [rbp-78h]
  _DWORD *v166; // [rsp+68h] [rbp-78h]
  int v167[2]; // [rsp+68h] [rbp-78h]
  void *v168; // [rsp+68h] [rbp-78h]
  int v169[2]; // [rsp+70h] [rbp-70h] BYREF
  int v170[2]; // [rsp+78h] [rbp-68h] BYREF
  int v171[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 v172; // [rsp+88h] [rbp-58h]
  int v173[2]; // [rsp+90h] [rbp-50h] BYREF
  _DWORD *v174; // [rsp+98h] [rbp-48h]
  __int64 v175; // [rsp+A0h] [rbp-40h] BYREF
  void *v176; // [rsp+A8h] [rbp-38h]
  int v177; // [rsp+B0h] [rbp-30h]
  __int64 v178; // [rsp+B8h] [rbp-28h]

  v6 = a2;
  v153 = a1;
  v139 = a4;
  v143 = a5;
  v7 = sub_15D1F10(a4);
  v8 = (__int64 *)a2[27];
  v9 = v7;
  v10 = *((unsigned int *)a2 + 56);
  v11 = *(_DWORD *)(v9 + 12);
  v12 = v10 - 1;
  v10 *= 24;
  v13 = (__int64 *)((char *)v8 + v10);
  v14 = 24LL * (v11 & v12);
  v15 = &v8[(unsigned __int64)v14 / 8];
  if ( v14 != v10 )
  {
    for ( i = &v8[(unsigned __int64)v14 / 8]; v13 != i; i += 3 )
    {
      v17 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v11 && v9 == v17 )
        {
LABEL_30:
          *(_QWORD *)v157 = i[1];
          *(_QWORD *)v161 = i[2];
          goto LABEL_31;
        }
      }
      else if ( !v17 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v15 != v8; v8 += 3 )
  {
    v73 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v73 + 12) == v11 && v9 == v73 )
      {
        i = v8;
        goto LABEL_30;
      }
    }
    else if ( !v73 )
    {
      break;
    }
  }
LABEL_8:
  v18 = *(__int64 **)(*(_QWORD *)(v9 + 24) + 8LL);
  if ( *((_BYTE *)v18 + 8) != 1 )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v19 = *v18;
  v20 = v6[2];
  *(_QWORD *)v171 = v9;
  v21 = sub_15D2CD0(v20, 5, 1, 0, 0);
  v22 = *v6;
  v169[0] = v19;
  v172 = v21;
  sub_180C5A0(v173, "");
  sub_180C5A0(v170, "to-index");
  v156 = sub_15E3D10(
           v22,
           (int)v170,
           (int)v173,
           2,
           (int)v171,
           v19,
           1,
           v110,
           v112,
           v115,
           v118,
           v121,
           v124,
           v127,
           v131,
           v139,
           v143,
           (int)v170,
           (int)v153,
           v155,
           v159,
           v19,
           v19,
           v170[0],
           v171[0],
           v172,
           v173[0],
           (int)v174,
           v175,
           v176,
           v177,
           v178);
  *(_QWORD *)v165 = *v6;
  LODWORD(v22) = sub_15D2CD0(v6[2], 5, 1, 0, 0);
  sub_180C5A0(v173, "");
  sub_180C5A0(*(_QWORD *)v148, "from-index");
  v23 = sub_15E3D10(
          v165[0],
          v148[0],
          (int)v173,
          1,
          (int)v169,
          v22,
          1,
          v111,
          v113,
          v116,
          v119,
          v122,
          v125,
          v128,
          v132,
          v140,
          v144,
          v148[0],
          v154,
          v156,
          v160,
          v165[0],
          v169[0],
          v170[0],
          v171[0],
          v172,
          v173[0],
          (int)v174,
          v175,
          v176,
          v177,
          v178);
  v24 = *((unsigned int *)v6 + 56);
  *(_QWORD *)v161 = v23;
  if ( 3 * (int)v24 < (unsigned int)(4 * (*((_DWORD *)v6 + 57) + *((_DWORD *)v6 + 58))) )
  {
    v124 = 2 * v24;
    v136 = 24LL * (unsigned int)(2 * v24);
    LOBYTE(v127) = v136;
    v74 = (_OWORD *)sub_186B270(v136);
    v75 = 2 * v24;
    v26 = v136;
    *(_QWORD *)v167 = v74;
    if ( 2 * (_DWORD)v24 )
    {
      v76 = v74;
      v77 = &v74[3 * (v24 & 0x7FFFFFFF)];
      do
      {
        *v74 = 0;
        v74 += 3;
        *(v74 - 2) = 0;
        *(v74 - 1) = 0;
      }
      while ( v74 != v77 );
      *(_QWORD *)v167 = v76;
    }
    v78 = (double *)v6[27];
    v25 = v75 - 1;
    v79 = &v78[3 * *((unsigned int *)v6 + 56)];
    v27 = *(_QWORD *)v167 + v136;
    if ( v78 != v79 )
    {
      v80 = v6;
      v81 = (const double *)v6[27];
      v82 = v136;
      do
      {
        while ( *(_QWORD *)v81 <= 1u )
        {
          v81 += 3;
          if ( v79 == v81 )
            goto LABEL_94;
        }
        v83 = 24LL * (*(_DWORD *)(*(_QWORD *)v81 + 12LL) & (unsigned int)v25);
        v84 = (__m128 *)(*(_QWORD *)v167 + v83);
        if ( v83 == v82 )
        {
LABEL_130:
          if ( v84 == *(__m128 **)v167 )
          {
LABEL_135:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v85 = *(__m128 **)v167;
          while ( v85->m128_u64[0] )
          {
            v85 = (__m128 *)((char *)v85 + 24);
            if ( v84 == v85 )
              goto LABEL_135;
          }
        }
        else
        {
          v137 = *(_QWORD *)v167 + v83;
          v85 = (__m128 *)(*(_QWORD *)v167 + v83);
          while ( v85->m128_u64[0] )
          {
            v85 = (__m128 *)((char *)v85 + 24);
            if ( (__m128 *)v27 == v85 )
            {
              v84 = (__m128 *)v137;
              goto LABEL_130;
            }
          }
        }
        v81 += 3;
        *v85 = _mm_loadh_ps(v81 - 2);
        *(double *)v85[1].m128_u64 = *(v81 - 1);
      }
      while ( v79 != v81 );
LABEL_94:
      v79 = (double *)v80[27];
      v6 = v80;
    }
    if ( v79 )
    {
      v124 = v75;
      v127 = v75 - 1;
      v138 = v26;
      sub_186B220(v79);
      v75 = v124;
      v25 = v127;
      v26 = v138;
    }
    *((_DWORD *)v6 + 56) = v75;
    *((_DWORD *)v6 + 58) = 0;
    v6[27] = *(_QWORD *)v167;
    v28 = *(__m128 **)v167;
  }
  else
  {
    v25 = v24 - 1;
    v26 = 24 * v24;
    v27 = v6[27] + 24 * v24;
    v28 = (__m128 *)v6[27];
  }
  v29 = *(_DWORD *)(v9 + 12);
  v30 = v29 & (unsigned int)v25;
  v31 = (unsigned __int64 *)v28 + 3 * v30;
  if ( v26 == 24 * v30 )
  {
    v33 = nullptr;
    v36 = (unsigned __int64 *)v28;
LABEL_20:
    if ( v31 == v36 )
    {
LABEL_28:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v37 = v36;
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = *v37;
        if ( *v37 > 1 )
          break;
        if ( !v38 )
        {
          v32 = (__int64 *)v37;
          goto LABEL_101;
        }
        v33 = (__int64 *)v37;
        v37 += 3;
        if ( v31 == v37 )
          goto LABEL_28;
      }
      if ( *(_DWORD *)(v38 + 12) == v29 && v9 == v38 )
        break;
      v37 += 3;
      if ( v31 == v37 )
        goto LABEL_28;
    }
    v32 = (__int64 *)v37;
LABEL_137:
    *v32 = v9;
    v32[1] = *(_QWORD *)v157;
    v32[2] = *(_QWORD *)v161;
  }
  else
  {
    v32 = (__int64 *)v28 + 3 * v30;
    v33 = nullptr;
    v34 = v28;
    while ( 1 )
    {
      while ( 1 )
      {
        v35 = *v32;
        if ( (unsigned __int64)*v32 <= 1 )
          break;
        if ( *(_DWORD *)(v35 + 12) == v29 && v9 == v35 )
          goto LABEL_137;
        v32 += 3;
        if ( (__int64 *)v27 == v32 )
        {
LABEL_19:
          v36 = (unsigned __int64 *)v34;
          goto LABEL_20;
        }
      }
      if ( !v35 )
        break;
      v33 = v32;
      v32 += 3;
      if ( (__int64 *)v27 == v32 )
        goto LABEL_19;
    }
LABEL_101:
    if ( v33 )
      --*((_DWORD *)v6 + 58);
    else
      v33 = v32;
    *v33 = v9;
    v33[1] = *(_QWORD *)v157;
    v33[2] = *(_QWORD *)v161;
    ++*((_DWORD *)v6 + 57);
  }
  if ( *(_QWORD *)v157 )
    ++*(_DWORD *)(*(_QWORD *)v157 + 8LL);
  v89 = (_DWORD *)v6[20];
  if ( v89 )
  {
    v90 = *(v89 - 1);
    v91 = *(v89 - 2);
    if ( v90 == v91 )
    {
      v102 = (3 * v91 + 1) >> 1;
      v103 = 8 * v102 + 8;
      if ( 8 * v91 + 8 >= v103 || v91 >= v102 )
        goto LABEL_142;
      v104 = (unsigned int *)sub_186B300(v89 - 2, v103);
      v105 = v104[1];
      v89 = v104 + 2;
      *v104 = v102;
      v6[20] = (__int64)(v104 + 2);
      LODWORD(v104) = v105;
      v94 = &v89[2 * v105];
      v91 = v102;
      v93 = (_DWORD)v104 + 1;
    }
    else
    {
      v92 = v90;
      v93 = v90 + 1;
      v94 = &v89[2 * v92];
    }
    *v94 = *(_QWORD *)v157;
    *(v89 - 1) = v93;
    if ( !*(_QWORD *)v161 )
      goto LABEL_111;
  }
  else
  {
    v108 = (_QWORD *)sub_186B270(0x18u);
    v89 = v108 + 1;
    v108[1] = *(_QWORD *)v157;
    *v108 = 0x100000002LL;
    v93 = 1;
    v6[20] = (__int64)v89;
    if ( !*(_QWORD *)v161 )
      goto LABEL_112;
  }
  ++*(_DWORD *)(*(_QWORD *)v161 + 8LL);
  v93 = *(v89 - 1);
  v91 = *(v89 - 2);
LABEL_111:
  if ( v91 == v93 )
  {
    v99 = (3 * v93 + 1) >> 1;
    v100 = 8 * v99 + 8;
    if ( 8 * v93 + 8 >= v100 || v93 >= v99 )
      goto LABEL_142;
    v101 = (unsigned int *)sub_186B300(v89 - 2, v100);
    v89 = v101 + 2;
    *v101 = v99;
    v93 = v101[1];
    v6[20] = (__int64)v89;
  }
LABEL_112:
  *(_QWORD *)&v89[2 * v93] = *(_QWORD *)v161;
  *(v89 - 1) = v93 + 1;
  ++*(_DWORD *)(v9 + 8);
  v95 = *(v89 - 1);
  if ( v95 == *(v89 - 2) )
  {
    v96 = (3 * v95 + 1) >> 1;
    v97 = 8 * v96 + 8;
    if ( 8 * v95 + 8 < v97 && v95 < v96 )
    {
      v98 = (unsigned int *)sub_186B300(v89 - 2, v97);
      v89 = v98 + 2;
      *v98 = v96;
      v95 = v98[1];
      v6[20] = (__int64)v89;
      goto LABEL_113;
    }
LABEL_142:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)v173, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v173);
    sub_233E40((__int64)v173);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_113:
  *(_QWORD *)&v89[2 * v95] = v9;
  *(v89 - 1) = v95 + 1;
LABEL_31:
  v39 = *v6;
  *(_QWORD *)v173 = 0;
  v174 = nullptr;
  v133 = v39;
  v175 = 1;
  v40 = qword_1C7F2C0;
  v176 = nullptr;
  if ( v143 < 0 )
  {
    v168 = qword_1C7F2C0;
    sub_1830C40(qword_1C7F2C0, v173, (unsigned int)v143);
    v40 = v168;
  }
  else
  {
    v173[0] = v143;
  }
  sub_182CBA0(v40, &v175);
  v44 = v6[3];
  BYTE4(v175) &= ~1u;
  LODWORD(v175) = 1;
  if ( !v44 )
  {
    sub_16669E0(v6 + 2);
    v44 = v6[3];
  }
  v45 = sub_166A700(v44, (unsigned int)v173, 1, v41, v42, v43);
  v46 = qword_1C7F2C0;
  v166 = (_DWORD *)v45;
  sub_182CBA0(qword_1C7F2C0, v173);
  sub_182CBA0(v46, &v175);
  if ( v166 )
    ++v166[2];
  v49 = *v6;
  *(_QWORD *)v173 = v139;
  v174 = v166;
  v50 = sub_15DC610(v49, v157[0], 2, (int)v173, v47, v48, v112, v115, v118, v121, v124, v127, v133, v139, v143, v147);
  *v153 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)v49);
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  v145 = *v6;
  v51 = sub_15E1B70(v6[2]);
  v54 = (unsigned int *)v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v141 = *v6;
  *(_QWORD *)v170 = v153->m128i_i64[0];
  v55 = (_DWORD *)sub_15DC610(
                    v141,
                    v161[0],
                    1,
                    (int)v170,
                    v52,
                    v53,
                    v114,
                    v117,
                    v120,
                    v123,
                    v126,
                    v129,
                    v134,
                    v141,
                    v145,
                    v149);
  *(_QWORD *)v162 = *v6;
  if ( v55 )
  {
    v56 = v55[2] + 1;
    v55[2] = v56;
    if ( v166 )
    {
      ++v166[2];
      v56 = v55[2];
    }
    v55[2] = v56 + 1;
  }
  else if ( v166 )
  {
    ++v166[2];
  }
  v158 = sub_966380(v6[1], v166, v55);
  v57 = *(_QWORD *)(v6[1] + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v57 + 7488) + 48LL))(
    *(_QWORD *)(v57 + 7488),
    *(_QWORD *)(*(_QWORD *)(v57 + 8840) + 8LL * (v158 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v57 + 7488) + 64LL))(*(_QWORD *)(v57 + 7488));
  if ( v55 )
  {
    v58 = v55[2]-- == 1;
    if ( v58 )
      sub_15D7BC0(*(_QWORD *)v162, v55);
  }
  if ( v166 )
  {
    v150 = v166[2];
    v166[2] = v150 - 1;
    if ( v150 == 1 )
      sub_15D7BC0(*(_QWORD *)v162, v166);
  }
  *(_QWORD *)v151 = *v6;
  if ( v54 )
    ++v54[2];
  v59 = *(_QWORD *)(v6[1] + 16);
  v60 = *(_QWORD *)(v59 + 8656);
  if ( !v60 || (v61 = *v54, (unsigned int)v61 >= *(_DWORD *)(v60 - 4)) || !*(_QWORD *)(v60 + 8 * v61) )
  {
    sub_B6F780(v59);
    v59 = *(_QWORD *)(v6[1] + 16);
  }
  v163 = sub_B645B0(v59, v54);
  v62 = *(_QWORD *)(v6[1] + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v62 + 7488) + 48LL))(
    *(_QWORD *)(v62 + 7488),
    *(_QWORD *)(*(_QWORD *)(v62 + 8840) + 8LL * (v163 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v62 + 7488) + 64LL))(*(_QWORD *)(v62 + 7488));
  v58 = v54[2]-- == 1;
  if ( v58 )
    sub_15D7BC0(*(_QWORD *)v151, v54);
  v130 = *v6;
  v63 = v6[1];
  ++a3[2];
  v64 = *(_QWORD *)(v63 + 16);
  v65 = *(_QWORD *)(v64 + 8656);
  if ( !v65 || (v66 = *a3, (unsigned int)v66 >= *(_DWORD *)(v65 - 4)) || !*(_QWORD *)(v65 + 8 * v66) )
  {
    sub_B6F780(v64);
    v64 = *(_QWORD *)(v6[1] + 16);
  }
  v67 = sub_B645B0(v64, a3);
  v68 = *(_QWORD *)(v6[1] + 16);
  *(_QWORD *)v152 = v68;
  v69 = *(unsigned int **)(*(_QWORD *)(v68 + 8840) + 8LL * (v67 >> 1));
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v68 + 7488) + 48LL))(*(_QWORD *)(v68 + 7488), v69);
  v70 = *(_QWORD *)(*(_QWORD *)v152 + 7488LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 64LL))(v70);
  v58 = a3[2]-- == 1;
  if ( v58 )
  {
    v70 = v130;
    v69 = a3;
    sub_15D7BC0(v130, a3);
  }
  *(_QWORD *)&v71 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v67 ^ 1), _mm_cvtsi32_si128(v163)).m128i_u64[0];
  LODWORD(v172) = v158;
  *(double *)v171 = v71;
  if ( (unsigned int)sub_180B130(v70) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(v71) )
    {
      sub_186A4C0(v71);
      v86 = *(_QWORD *)(v6[1] + 16);
      v87 = sub_180B150(v70, v69);
      v88 = sub_AA55A0(v86, v87, 3, (unsigned int *)v171);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v88, "\n");
    }
    else
    {
      v106 = *(_QWORD *)(v6[1] + 16);
      v107 = sub_180B150(v70, v69);
      sub_AA55A0(v106, v107, 3, (unsigned int *)v171);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_B69FE0(*(_QWORD *)(v6[1] + 16), *(_DWORD *)(v6[1] + 8), 3, (unsigned int)v171, 0, 0, 1);
  if ( v55 )
  {
    v58 = v55[2]-- == 1;
    if ( v58 )
    {
      sub_15D7BC0(v142, v55);
      v58 = v54[2]-- == 1;
      if ( !v58 )
        goto LABEL_67;
LABEL_80:
      sub_15D7BC0(v146, v54);
      goto LABEL_67;
    }
  }
  v58 = v54[2]-- == 1;
  if ( v58 )
    goto LABEL_80;
LABEL_67:
  if ( v166 )
  {
    v164 = v166[2];
    v166[2] = v164 - 1;
    if ( v164 == 1 )
      sub_15D7BC0(v135, v166);
  }
  return v153;
}

