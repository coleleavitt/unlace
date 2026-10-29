__int64 __fastcall sub_B5C700(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // r12
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  void *v17; // r14
  unsigned int *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r13d
  __int64 v23; // r14
  unsigned int *v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // ebp
  unsigned __int64 v27; // xmm0_8
  __int64 v28; // rax
  __int64 v29; // r13
  void *v30; // r14
  int v31; // eax
  _OWORD *v32; // rax
  unsigned int v33; // ecx
  __m128i v34; // xmm0
  unsigned int **v35; // rbp
  int v36; // r8d
  __int64 v37; // r11
  unsigned int **v38; // r12
  unsigned int v39; // ecx
  __int64 v40; // r8
  unsigned int **v41; // rsi
  unsigned int **v42; // rax
  unsigned int **v43; // rdi
  unsigned int *v44; // rdx
  unsigned int *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // r10d
  int v49; // edx
  __int64 v50; // r12
  unsigned int v51; // r14d
  __int64 v52; // r8
  __int64 v53; // r13
  int v54; // ecx
  __int64 v55; // r14
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rax
  void *v61; // rbp
  void *v62; // r12
  __int64 v63; // rdi
  _QWORD *v64; // rbx
  __int64 v65; // r14
  __int64 v66; // r13
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  _QWORD *v69; // r12
  unsigned int v70; // eax
  __int64 v71; // rcx
  __int64 result; // rax
  _QWORD *v73; // rcx
  unsigned int v74; // ebx
  size_t v75; // rsi
  unsigned int *v76; // rax
  __int64 v77; // rcx
  _DWORD *v78; // r13
  _DWORD *v79; // r12
  __int64 v80; // r14
  _DWORD *v81; // rsi
  __int64 v82; // rdi
  unsigned __int64 v83; // xmm0_8
  __int64 v84; // rbp
  __int64 v85; // rax
  unsigned int v86; // r10d
  __int64 v87; // rdx
  char *v88; // rbp
  __int64 v89; // rax
  char *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rax
  int v95; // esi
  int v96; // edx
  __int64 v97; // rsi
  __int64 v98; // rdx
  char v99; // di
  char v100; // di
  __int64 v101; // rsi
  __int64 v102; // rdx
  char v103; // di
  char v104; // di
  char *v105; // rbp
  char *v106; // rbx
  void *v107; // r12
  char *v108; // rsi
  __m128i *v109; // rax
  int v110; // r9d
  __m128i *v111; // rcx
  const __m128i *v112; // r14
  __m128i *v113; // r10
  __m128i *v114; // r12
  const __m128i *v115; // rbp
  __int64 v116; // rax
  __m128i *v117; // rdx
  __m128i *v118; // rax
  __int64 v119; // r12
  __int64 v120; // rax
  __int64 v121; // rdi
  int v122; // eax
  int v123; // edx
  __int64 v124; // rax
  char v125; // cl
  __int64 v126; // rax
  char v127; // cl
  __int64 v128; // r12
  __int64 v129; // rax
  __int64 v130; // rbp
  __int64 v131; // rax
  __int64 v132; // rdi
  int v133; // edx
  int v134; // ecx
  __int64 v135; // rdx
  char v136; // si
  __int64 v137; // rdx
  char v138; // si
  _QWORD *v139; // rax
  int v140; // eax
  int v141; // edx
  __int64 v142; // rax
  char v143; // cl
  __int64 v144; // rax
  char v145; // cl
  __int64 v146; // rbp
  __int64 v147; // rax
  char **exception; // rbx
  char v149; // [rsp+0h] [rbp-D8h]
  __int64 v150; // [rsp+10h] [rbp-C8h]
  __int64 v151; // [rsp+18h] [rbp-C0h]
  __int64 v152; // [rsp+20h] [rbp-B8h]
  unsigned int v153; // [rsp+20h] [rbp-B8h]
  size_t v154; // [rsp+20h] [rbp-B8h]
  int v155; // [rsp+20h] [rbp-B8h]
  __int64 v156; // [rsp+28h] [rbp-B0h]
  __int64 v157; // [rsp+28h] [rbp-B0h]
  __int64 v158; // [rsp+28h] [rbp-B0h]
  int v159; // [rsp+28h] [rbp-B0h]
  size_t v160; // [rsp+28h] [rbp-B0h]
  size_t v161; // [rsp+30h] [rbp-A8h]
  char *v162; // [rsp+30h] [rbp-A8h]
  unsigned int v163; // [rsp+30h] [rbp-A8h]
  int v164; // [rsp+30h] [rbp-A8h]
  unsigned int v165; // [rsp+38h] [rbp-A0h]
  __int64 v166; // [rsp+38h] [rbp-A0h]
  unsigned int *v167; // [rsp+40h] [rbp-98h]
  unsigned int v168; // [rsp+4Ch] [rbp-8Ch]
  __int64 v169; // [rsp+50h] [rbp-88h] BYREF
  __int64 v170; // [rsp+58h] [rbp-80h]
  __int64 v171; // [rsp+60h] [rbp-78h] BYREF
  __int64 v172; // [rsp+68h] [rbp-70h]
  __int64 v173; // [rsp+70h] [rbp-68h] BYREF
  __int64 v174; // [rsp+78h] [rbp-60h] BYREF
  __int64 v175; // [rsp+80h] [rbp-58h] BYREF
  __int64 v176; // [rsp+88h] [rbp-50h] BYREF
  __int64 v177; // [rsp+90h] [rbp-48h]

  v3 = a1;
  v4 = *(_QWORD *)a1;
  if ( a2 )
    ++a2[2];
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL);
  v6 = *(_QWORD *)(v5 + 8656);
  if ( !v6 || (v7 = *a2, (unsigned int)v7 >= *(_DWORD *)(v6 - 4)) || !*(_QWORD *)(v6 + 8 * v7) )
  {
    sub_B6F780(v5);
    v5 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  }
  v8 = sub_B645B0(v5, a2);
  v9 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 7488) + 48LL))(
    *(_QWORD *)(v9 + 7488),
    *(_QWORD *)(*(_QWORD *)(v9 + 8840) + 8LL * (v8 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 7488) + 64LL))(*(_QWORD *)(v9 + 7488));
  v10 = a2[2]-- == 1;
  if ( v10 )
    sub_15D7BC0(v4, a2);
  v11 = *((_QWORD *)a2 + 4);
  v173 = 0;
  v174 = 0;
  v150 = v11;
  v12 = *((_QWORD *)a2 + 5);
  v175 = 1;
  v151 = v12;
  v176 = 0;
  sub_182CBA0(qword_1C7F2C0, &v175);
  v16 = *((_QWORD *)v3 + 3);
  BYTE4(v175) &= ~1u;
  LODWORD(v175) = 1;
  if ( !v16 )
  {
    sub_16669E0(v3 + 4);
    v16 = *((_QWORD *)v3 + 3);
  }
  sub_166A700(v16, (unsigned int)&v173, 1, v13, v14, v15);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v173);
  sub_182CBA0(v17, &v175);
  v18 = (unsigned int *)sub_15E1B70(*((_QWORD *)v3 + 2));
  v152 = *(_QWORD *)v3;
  if ( v18 )
    ++v18[2];
  v19 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  v20 = *(_QWORD *)(v19 + 8656);
  if ( !v20 || (v21 = *v18, (unsigned int)v21 >= *(_DWORD *)(v20 - 4)) || !*(_QWORD *)(v20 + 8 * v21) )
  {
    sub_B6F780(v19);
    v19 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  }
  v22 = sub_B645B0(v19, v18);
  v23 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  v24 = *(unsigned int **)(*(_QWORD *)(v23 + 8840) + 8LL * (v22 >> 1));
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v23 + 7488) + 48LL))(*(_QWORD *)(v23 + 7488), v24);
  v25 = *(_QWORD *)(v23 + 7488);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 64LL))(v25);
  v10 = v18[2]-- == 1;
  if ( v10 )
  {
    v25 = v152;
    v24 = v18;
    sub_15D7BC0(v152, v18);
  }
  v26 = v8 ^ 1;
  v27 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v22)).m128i_u64[0];
  v173 = v27;
  if ( (unsigned int)sub_180B130(v25) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)&v27) )
    {
      sub_186A4C0(*(double *)&v27);
      v119 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      v120 = sub_180B150(v25, v24);
      v121 = sub_AA55A0(v119, v120, 2, (unsigned int *)&v173);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v121, "\n");
    }
    else
    {
      v128 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      v129 = sub_180B150(v25, v24);
      sub_AA55A0(v128, v129, 2, (unsigned int *)&v173);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_B69FE0(
    *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL),
    *(_DWORD *)(*((_QWORD *)v3 + 1) + 8LL),
    2,
    (unsigned int)&v173,
    0,
    0,
    1);
  if ( *(_DWORD *)(*(_QWORD *)(sub_15D1F10(v150) + 24) + 24LL) == 2 )
  {
    v78 = *(_DWORD **)(*(_QWORD *)v3 + 864LL);
    v79 = (_DWORD *)sub_BDD510(*((_QWORD *)v3 + 1), v150);
    v156 = *(_QWORD *)v3;
    if ( v79 )
      ++v79[2];
    if ( v78 )
      ++v78[2];
    v153 = sub_966380(*((_QWORD *)v3 + 1), v79, v78);
    v80 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    v81 = *(_DWORD **)(*(_QWORD *)(v80 + 8840) + 8LL * (v153 >> 1));
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(v80 + 7488) + 48LL))(*(_QWORD *)(v80 + 7488), v81);
    v82 = *(_QWORD *)(v80 + 7488);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 64LL))(v82);
    v83 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v153)).m128i_u64[0];
    if ( v78 )
    {
      v10 = v78[2]-- == 1;
      if ( v10 )
      {
        v82 = v156;
        v81 = v78;
        sub_15D7BC0(v156, v78);
      }
    }
    if ( v79 )
    {
      v10 = v79[2]-- == 1;
      if ( v10 )
      {
        v82 = v156;
        v81 = v79;
        sub_15D7BC0(v156, v79);
      }
    }
    v173 = v83;
    if ( (unsigned int)sub_180B130(v82) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)&v83) )
      {
        sub_186A4C0(*(double *)&v83);
        v130 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        v131 = sub_180B150(v82, v81);
        v132 = sub_AA55A0(v130, v131, 2, (unsigned int *)&v173);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v132, "\n");
      }
      else
      {
        v146 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        v147 = sub_180B150(v82, v81);
        sub_AA55A0(v146, v147, 2, (unsigned int *)&v173);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    sub_B69FE0(
      *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL),
      *(_DWORD *)(*((_QWORD *)v3 + 1) + 8LL),
      2,
      (unsigned int)&v173,
      0,
      0,
      1);
  }
  else
  {
    sub_1875640("correct handling of finite domains is TBD", v149);
  }
  v28 = sub_186B270(0x40u);
  *(_OWORD *)v28 = 0;
  v29 = v28;
  *(_BYTE *)v28 = 1;
  *(_OWORD *)(v28 + 16) = 0;
  *(_OWORD *)(v28 + 32) = 0;
  *(_BYTE *)(v28 + 24) = 1;
  *(_OWORD *)(v28 + 48) = 0;
  v30 = qword_1C7F2C0;
  if ( (qword_1C7F260 & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v28 + 8, &qword_1C7F260);
    if ( (qword_1C7F270 & 0x100000000LL) == 0 )
      goto LABEL_22;
LABEL_126:
    sub_182C690(v30, v29 + 24, &qword_1C7F270);
    goto LABEL_23;
  }
  *(_DWORD *)(v28 + 8) = qword_1C7F260;
  if ( (qword_1C7F270 & 0x100000000LL) != 0 )
    goto LABEL_126;
LABEL_22:
  v31 = qword_1C7F270;
  *(_BYTE *)(v29 + 28) &= ~1u;
  *(_DWORD *)(v29 + 24) = v31;
LABEL_23:
  v32 = (_OWORD *)sub_186B270(0x80u);
  v33 = v3[44];
  v34.m128i_i64[0] = 0;
  *(_QWORD *)(v29 + 40) = v32;
  *v32 = 0;
  v32[1] = 0;
  v32[2] = 0;
  v32[3] = 0;
  v32[4] = 0;
  v32[5] = 0;
  v32[6] = 0;
  v32[7] = 0;
  LODWORD(v32) = 4 * (v3[45] + v3[46]);
  *(_QWORD *)(v29 + 48) = 8;
  *(_DWORD *)(v29 + 56) = 0;
  if ( 3 * v33 < (unsigned int)v32 )
  {
    v159 = 2 * v33;
    v154 = 32LL * v33;
    v109 = (__m128i *)sub_186B270(v154);
    v37 = v154;
    v110 = v159;
    v35 = (unsigned int **)v109;
    v111 = &v109[v154 / 0x10];
    if ( v159 )
    {
      v34.m128i_i64[0] = 0;
      if ( (v154 & 0x10) == 0 || (*v109 = 0, ++v109, v111 != v109) )
      {
        do
        {
          *v109 = 0;
          v109 += 2;
          v109[-1] = 0;
        }
        while ( v111 != v109 );
      }
    }
    v112 = *((const __m128i **)v3 + 21);
    v36 = v159 - 1;
    v38 = (unsigned int **)v111;
    v113 = (__m128i *)&v112[v3[44]];
    if ( v112 != v113 )
    {
      v114 = (__m128i *)v35;
      v115 = &v112[v3[44]];
      do
      {
        while ( v112->m128i_i64[0] <= 1uLL )
        {
          if ( v115 == ++v112 )
            goto LABEL_116;
        }
        v116 = 16LL * (*(_DWORD *)(v112->m128i_i64[0] + 12) & (unsigned int)v36);
        v117 = &v114[(unsigned __int64)v116 / 0x10];
        if ( v154 == v116 )
        {
LABEL_120:
          if ( v114 == v117 )
          {
LABEL_138:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v118 = v114;
          while ( v118->m128i_i64[0] )
          {
            if ( v117 == ++v118 )
              goto LABEL_138;
          }
        }
        else
        {
          v118 = &v114[(unsigned __int64)v116 / 0x10];
          while ( v118->m128i_i64[0] )
          {
            if ( v111 == ++v118 )
              goto LABEL_120;
          }
        }
        v34 = _mm_loadu_si128(v112++);
        *v118 = v34;
      }
      while ( v115 != v112 );
LABEL_116:
      v35 = (unsigned int **)v114;
      v38 = (unsigned int **)v111;
      v113 = *((__m128i **)v3 + 21);
    }
    if ( v113 )
    {
      v164 = v159;
      v160 = v154;
      v155 = v110 - 1;
      sub_186B220(v113);
      v110 = v164;
      v37 = v160;
      v36 = v155;
    }
    *((_QWORD *)v3 + 21) = v35;
    v3[44] = v110;
    v3[46] = 0;
  }
  else
  {
    v35 = *((unsigned int ***)v3 + 21);
    v36 = v33 - 1;
    v37 = 16LL * v33;
    v38 = (unsigned int **)((char *)v35 + v37);
  }
  v39 = a2[3];
  v40 = 16LL * (v39 & v36);
  v41 = &v35[(unsigned __int64)v40 / 8];
  if ( v40 != v37 )
  {
    v42 = &v35[(unsigned __int64)v40 / 8];
    v43 = nullptr;
    while ( 1 )
    {
      v44 = *v42;
      if ( (unsigned __int64)*v42 > 1 )
      {
        if ( v44[3] == v39 && a2 == v44 )
        {
          *v42 = a2;
          v42[1] = (unsigned int *)v29;
          goto LABEL_41;
        }
      }
      else
      {
        if ( !v44 )
        {
          if ( v43 )
            goto LABEL_132;
          v43 = v42;
          goto LABEL_133;
        }
        v43 = v42;
      }
      v42 += 2;
      if ( v42 == v38 )
        goto LABEL_36;
    }
  }
  v43 = nullptr;
  while ( 1 )
  {
LABEL_36:
    if ( v41 == v35 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v45 = *v35;
    if ( (unsigned __int64)*v35 <= 1 )
      break;
    if ( v45[3] == v39 && a2 == v45 )
    {
      *v35 = a2;
      v35[1] = (unsigned int *)v29;
      goto LABEL_41;
    }
LABEL_35:
    v35 += 2;
  }
  if ( v45 )
  {
    v43 = v35;
    goto LABEL_35;
  }
  if ( v43 )
LABEL_132:
    --v3[46];
  else
    v43 = v35;
LABEL_133:
  *v43 = a2;
  v43[1] = (unsigned int *)v29;
  ++v3[45];
LABEL_41:
  v169 = 2;
  v170 = 0;
  v171 = 1;
  v172 = 0;
  sub_182CBA0(qword_1C7F2C0, &v171);
  LODWORD(v176) = 1;
  v46 = v150;
  LODWORD(v171) = 1;
  LODWORD(v174) = 2;
  BYTE4(v171) &= ~1u;
  HIDWORD(v176) = BYTE4(v171) & 2;
  v173 = v150;
  BYTE4(v174) &= 0xFCu;
  v177 = v172;
  v47 = v3[50];
  v175 = 0;
  v48 = 2 * v47;
  v49 = v3[51] + v3[52];
  v170 = 0;
  v172 = 0;
  if ( 3 * (int)v47 < (unsigned int)(4 * v49) )
  {
    v84 = v48;
    v165 = 2 * v47;
    v161 = 40LL * v48;
    v85 = sub_186B270(v161);
    v86 = v165;
    v50 = v85;
    v52 = v161;
    if ( v165 )
    {
      v34.m128i_i64[0] = 0;
      v87 = v85 + 40 * v84;
      do
      {
        *(_OWORD *)(v85 + 24) = 0;
        v85 += 40;
        *(_OWORD *)(v85 - 32) = 0;
        *(_QWORD *)(v85 - 40) = 0;
        *(_BYTE *)(v85 - 28) = 0;
        *(_DWORD *)(v85 - 16) = 1;
        *(_BYTE *)(v85 - 12) = 0;
      }
      while ( v87 != v85 );
    }
    v88 = *((char **)v3 + 24);
    v51 = v165 - 1;
    v53 = v50 + v161;
    v89 = v3[50];
    v90 = &v88[40 * v89];
    if ( v88 != v90 )
    {
      do
      {
        while ( 1 )
        {
          v91 = *(_QWORD *)v88;
          if ( *(_QWORD *)v88 > 1u )
            break;
          v88 += 40;
          if ( v90 == v88 )
            goto LABEL_90;
        }
        v92 = 40LL * (*(_DWORD *)(v91 + 12) & v51);
        v93 = v50 + v92;
        if ( v161 == v92 )
        {
LABEL_98:
          if ( v50 == v93 )
          {
LABEL_139:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v94 = v50;
          while ( *(_QWORD *)v94 )
          {
            v94 += 40;
            if ( v93 == v94 )
              goto LABEL_139;
          }
        }
        else
        {
          v94 = v50 + v92;
          while ( *(_QWORD *)v94 )
          {
            v94 += 40;
            if ( v53 == v94 )
              goto LABEL_98;
          }
        }
        v95 = *((_DWORD *)v88 + 2);
        *(_QWORD *)v94 = v91;
        v88 += 40;
        v96 = *(_DWORD *)(v94 + 8);
        *(_DWORD *)(v94 + 8) = v95;
        v97 = *((_QWORD *)v88 - 3);
        *((_DWORD *)v88 - 8) = v96;
        v98 = *(_QWORD *)(v94 + 16);
        *(_QWORD *)(v94 + 16) = v97;
        v99 = *(v88 - 28);
        *((_QWORD *)v88 - 3) = v98;
        LOBYTE(v98) = *(_BYTE *)(v94 + 12);
        *(_BYTE *)(v94 + 12) = v99 & 2 | v98 & 0xFD;
        LOBYTE(v98) = v98 & 2 | *(v88 - 28) & 0xFD;
        *(v88 - 28) = v98;
        v100 = *(_BYTE *)(v94 + 12);
        *(_BYTE *)(v94 + 12) = v98 & 1 | v100 & 0xFE;
        LODWORD(v97) = *((_DWORD *)v88 - 4);
        *(v88 - 28) = v100 & 1 | *(v88 - 28) & 0xFE;
        LODWORD(v98) = *(_DWORD *)(v94 + 24);
        *(_DWORD *)(v94 + 24) = v97;
        v101 = *((_QWORD *)v88 - 1);
        *((_DWORD *)v88 - 4) = v98;
        v102 = *(_QWORD *)(v94 + 32);
        *(_QWORD *)(v94 + 32) = v101;
        v103 = *(v88 - 12);
        *((_QWORD *)v88 - 1) = v102;
        LOBYTE(v102) = *(_BYTE *)(v94 + 28);
        *(_BYTE *)(v94 + 28) = v103 & 2 | v102 & 0xFD;
        LOBYTE(v102) = v102 & 2 | *(v88 - 12) & 0xFD;
        *(v88 - 12) = v102;
        v104 = *(_BYTE *)(v94 + 28) & 1;
        *(_BYTE *)(v94 + 28) = v102 & 1 | *(_BYTE *)(v94 + 28) & 0xFE;
        *(v88 - 12) = v104 | *(v88 - 12) & 0xFE;
      }
      while ( v90 != v88 );
LABEL_90:
      v89 = v3[50];
      v90 = *((char **)v3 + 24);
    }
    if ( v90 )
    {
      if ( (_DWORD)v89 )
      {
        v157 = v50;
        v162 = v90;
        v166 = v52;
        v105 = &v90[40 * v89];
        v168 = v86;
        v167 = v3;
        v106 = v90;
        do
        {
          v107 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v106 + 8);
          v108 = v106 + 24;
          v106 += 40;
          sub_182CBA0(v107, v108);
        }
        while ( v105 != v106 );
        v50 = v157;
        v90 = v162;
        v52 = v166;
        v3 = v167;
        v86 = v168;
      }
      v163 = v86;
      v158 = v52;
      sub_186B220(v90);
      v52 = v158;
      v86 = v163;
    }
    *((_QWORD *)v3 + 24) = v50;
    v46 = v173;
    v3[50] = v86;
    v3[52] = 0;
  }
  else
  {
    v50 = *((_QWORD *)v3 + 24);
    v51 = v47 - 1;
    v52 = 40 * v47;
    v53 = v50 + 40 * v47;
  }
  v54 = *(_DWORD *)(v46 + 12);
  v55 = v54 & v51;
  v56 = v50 + 40 * v55;
  if ( 40 * v55 != v52 )
  {
    v57 = v50 + 40 * v55;
    v58 = 0;
    while ( 1 )
    {
      v59 = *(_QWORD *)v57;
      if ( *(_QWORD *)v57 > 1u )
      {
        if ( *(_DWORD *)(v59 + 12) == v54 && v59 == v46 )
        {
          v133 = *(_DWORD *)(v57 + 8);
          v134 = v174;
          *(_QWORD *)v57 = v46;
          *(_DWORD *)(v57 + 8) = v134;
          LODWORD(v174) = v133;
          v135 = *(_QWORD *)(v57 + 16);
          *(_QWORD *)(v57 + 16) = v175;
          v175 = v135;
          LOBYTE(v135) = *(_BYTE *)(v57 + 12);
          *(_BYTE *)(v57 + 12) = BYTE4(v174) & 2 | v135 & 0xFD;
          BYTE4(v174) = v135 & 2 | BYTE4(v174) & 0xFD;
          v136 = *(_BYTE *)(v57 + 12);
          *(_BYTE *)(v57 + 12) = BYTE4(v174) & 1 | v136 & 0xFE;
          BYTE4(v174) = v136 & 1 | BYTE4(v174) & 0xFE;
          LODWORD(v135) = *(_DWORD *)(v57 + 24);
          *(_DWORD *)(v57 + 24) = v176;
          LODWORD(v176) = v135;
          v137 = *(_QWORD *)(v57 + 32);
          *(_QWORD *)(v57 + 32) = v177;
          v177 = v137;
          LOBYTE(v137) = *(_BYTE *)(v57 + 28);
          *(_BYTE *)(v57 + 28) = BYTE4(v176) & 2 | v137 & 0xFD;
          BYTE4(v176) = v137 & 2 | BYTE4(v176) & 0xFD;
          v138 = *(_BYTE *)(v57 + 28) & 1;
          *(_BYTE *)(v57 + 28) = BYTE4(v176) & 1 | *(_BYTE *)(v57 + 28) & 0xFE;
          BYTE4(v176) = v138 | BYTE4(v176) & 0xFE;
          goto LABEL_59;
        }
      }
      else
      {
        if ( !v59 )
        {
          if ( v58 )
            goto LABEL_135;
          v58 = v57;
          goto LABEL_136;
        }
        v58 = v57;
      }
      v57 += 40;
      if ( v57 == v53 )
        goto LABEL_54;
    }
  }
  v58 = 0;
LABEL_54:
  while ( 2 )
  {
    if ( v56 == v50 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v60 = *(_QWORD *)v50;
    if ( *(_QWORD *)v50 > 1u )
    {
      if ( *(_DWORD *)(v60 + 12) == v54 && v60 == v46 )
      {
        v140 = *(_DWORD *)(v50 + 8);
        v141 = v174;
        *(_QWORD *)v50 = v46;
        *(_DWORD *)(v50 + 8) = v141;
        LODWORD(v174) = v140;
        v142 = *(_QWORD *)(v50 + 16);
        *(_QWORD *)(v50 + 16) = v175;
        v175 = v142;
        LOBYTE(v141) = *(_BYTE *)(v50 + 12);
        *(_BYTE *)(v50 + 12) = BYTE4(v174) & 2 | v141 & 0xFD;
        BYTE4(v174) = v141 & 2 | BYTE4(v174) & 0xFD;
        v143 = *(_BYTE *)(v50 + 12);
        *(_BYTE *)(v50 + 12) = BYTE4(v174) & 1 | v143 & 0xFE;
        BYTE4(v174) = v143 & 1 | BYTE4(v174) & 0xFE;
        LODWORD(v142) = *(_DWORD *)(v50 + 24);
        *(_DWORD *)(v50 + 24) = v176;
        LODWORD(v176) = v142;
        v144 = *(_QWORD *)(v50 + 32);
        *(_QWORD *)(v50 + 32) = v177;
        v177 = v144;
        LOBYTE(v141) = *(_BYTE *)(v50 + 28);
        *(_BYTE *)(v50 + 28) = BYTE4(v176) & 2 | v141 & 0xFD;
        BYTE4(v176) = v141 & 2 | BYTE4(v176) & 0xFD;
        v145 = *(_BYTE *)(v50 + 28) & 1;
        *(_BYTE *)(v50 + 28) = BYTE4(v176) & 1 | *(_BYTE *)(v50 + 28) & 0xFE;
        BYTE4(v176) = v145 | BYTE4(v176) & 0xFE;
        goto LABEL_59;
      }
      goto LABEL_53;
    }
    if ( v60 )
    {
      v58 = v50;
LABEL_53:
      v50 += 40;
      continue;
    }
    break;
  }
  if ( v58 )
LABEL_135:
    --v3[52];
  else
    v58 = v50;
LABEL_136:
  v122 = *(_DWORD *)(v58 + 8);
  v123 = v174;
  *(_QWORD *)v58 = v46;
  *(_DWORD *)(v58 + 8) = v123;
  LODWORD(v174) = v122;
  v124 = *(_QWORD *)(v58 + 16);
  *(_QWORD *)(v58 + 16) = v175;
  v175 = v124;
  LOBYTE(v123) = *(_BYTE *)(v58 + 12);
  *(_BYTE *)(v58 + 12) = BYTE4(v174) & 2 | v123 & 0xFD;
  BYTE4(v174) = v123 & 2 | BYTE4(v174) & 0xFD;
  v125 = *(_BYTE *)(v58 + 12);
  *(_BYTE *)(v58 + 12) = BYTE4(v174) & 1 | v125 & 0xFE;
  BYTE4(v174) = v125 & 1 | BYTE4(v174) & 0xFE;
  LODWORD(v124) = *(_DWORD *)(v58 + 24);
  *(_DWORD *)(v58 + 24) = v176;
  LODWORD(v176) = v124;
  v126 = *(_QWORD *)(v58 + 32);
  *(_QWORD *)(v58 + 32) = v177;
  v177 = v126;
  LOBYTE(v123) = *(_BYTE *)(v58 + 28);
  *(_BYTE *)(v58 + 28) = BYTE4(v176) & 2 | v123 & 0xFD;
  BYTE4(v176) = v123 & 2 | BYTE4(v176) & 0xFD;
  v127 = *(_BYTE *)(v58 + 28) & 1;
  *(_BYTE *)(v58 + 28) = BYTE4(v176) & 1 | *(_BYTE *)(v58 + 28) & 0xFE;
  LOBYTE(v126) = BYTE4(v176);
  ++v3[51];
  BYTE4(v176) = v127 | v126 & 0xFE;
LABEL_59:
  v61 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v174);
  sub_182CBA0(v61, &v176);
  v62 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v169);
  sub_182CBA0(v62, &v171);
  v63 = (__int64)v3;
  v64 = v3 + 42;
  sub_B59DA0(v63, v150, v151, *(double *)v34.m128i_i64);
  ++a2[2];
  v65 = *(v64 - 21);
  v66 = *(_QWORD *)(*(v64 - 20) + 16LL);
  v67 = (_QWORD *)sub_180C100(v66 + 8400, 32);
  v68 = *(_QWORD **)(v66 + 9456);
  v69 = v67;
  *v67 = off_1C574D8;
  v67[1] = v65;
  v67[2] = v64;
  v67[3] = a2;
  if ( v68 )
  {
    v70 = *((_DWORD *)v68 - 1);
    if ( v70 == *((_DWORD *)v68 - 2) )
    {
      v74 = (3 * v70 + 1) >> 1;
      v75 = 8 * v74 + 8;
      if ( 8 * v70 + 8 >= (unsigned int)v75 || v70 >= v74 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v173, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v173);
        sub_233E40((__int64)&v173);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v76 = (unsigned int *)sub_186B300(v68 - 1, v75);
      v77 = v76[1];
      v68 = v76 + 2;
      *(_QWORD *)(v66 + 9456) = v76 + 2;
      *v76 = v74;
      LODWORD(v76) = v77;
      v73 = &v68[v77];
      result = (unsigned int)((_DWORD)v76 + 1);
    }
    else
    {
      v71 = v70;
      result = v70 + 1;
      v73 = &v68[v71];
    }
  }
  else
  {
    v139 = (_QWORD *)sub_186B270(0x18u);
    v68 = v139 + 1;
    *v139 = 2;
    result = 1;
    *(_QWORD *)(v66 + 9456) = v68;
    v73 = v68;
  }
  *v73 = v69;
  *((_DWORD *)v68 - 1) = result;
  return result;
}

