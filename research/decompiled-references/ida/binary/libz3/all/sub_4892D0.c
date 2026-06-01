void __fastcall sub_4892D0(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _DWORD *a9)
{
  char **v9; // rbp
  char **exception; // rbp
  __m128i v14; // xmm0
  bool v15; // r12
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  void *v23; // r12
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  void *v28; // r12
  void *v29; // rdi
  int v30; // eax
  void *v31; // rdi
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rdi
  __int64 v36; // rax
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rdi
  __int64 v47; // rax
  void *v48; // r12
  void *v49; // rbx
  bool v50; // zf
  _QWORD *v51; // rbx
  _QWORD *v52; // r15
  _DWORD *v53; // rax
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rsi
  int v57; // eax
  __int64 *v58; // rsi
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  _QWORD *v69; // rcx
  unsigned int v70; // r8d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rsi
  void *v74; // rbx
  _QWORD *v75; // rbx
  void *v76; // rdi
  __int64 *v77; // rbx
  unsigned __int64 v78; // rbp
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 *v81; // rbx
  unsigned __int64 v82; // rbp
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 *v85; // rbx
  unsigned __int64 v86; // rbp
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // rdx
  __int64 *v92; // r13
  unsigned __int64 v93; // rbx
  __int64 v94; // rsi
  __int64 v95; // rdi
  unsigned int v96; // ecx
  size_t v97; // rsi
  unsigned int *v98; // rax
  char v99; // al
  __int64 v100; // rax
  __int64 v101; // r8
  _DWORD *v102; // rdx
  _DWORD *v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rdi
  _QWORD *v108; // rax
  __int64 v111; // [rsp+28h] [rbp-1D0h]
  _QWORD *v112; // [rsp+28h] [rbp-1D0h]
  unsigned int v113; // [rsp+28h] [rbp-1D0h]
  __int64 v114; // [rsp+28h] [rbp-1D0h]
  __int64 v115; // [rsp+28h] [rbp-1D0h]
  void *v116; // [rsp+30h] [rbp-1C8h]
  void *v117; // [rsp+30h] [rbp-1C8h]
  unsigned int v118; // [rsp+30h] [rbp-1C8h]
  _BOOL4 v120; // [rsp+4Ch] [rbp-1ACh]
  __int8 *v121; // [rsp+68h] [rbp-190h]
  __int64 v122; // [rsp+70h] [rbp-188h]
  void *v123; // [rsp+78h] [rbp-180h]
  void *v124; // [rsp+78h] [rbp-180h]
  __int64 v125; // [rsp+78h] [rbp-180h]
  void *v126; // [rsp+80h] [rbp-178h]
  void *v127; // [rsp+80h] [rbp-178h]
  void *v128; // [rsp+80h] [rbp-178h]
  void *v129; // [rsp+80h] [rbp-178h]
  void *v130; // [rsp+80h] [rbp-178h]
  void *v131; // [rsp+80h] [rbp-178h]
  __int64 v132; // [rsp+88h] [rbp-170h]
  _QWORD v133[2]; // [rsp+90h] [rbp-168h] BYREF
  _QWORD v134[2]; // [rsp+A0h] [rbp-158h] BYREF
  int v135; // [rsp+B0h] [rbp-148h] BYREF
  char v136; // [rsp+B4h] [rbp-144h]
  __int64 v137; // [rsp+B8h] [rbp-140h]
  int v138; // [rsp+C0h] [rbp-138h] BYREF
  char v139; // [rsp+C4h] [rbp-134h]
  __int64 v140; // [rsp+C8h] [rbp-130h]
  __int64 v141; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v142; // [rsp+D8h] [rbp-120h]
  __int64 v143; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v144; // [rsp+E8h] [rbp-110h]
  int v145[2]; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v146; // [rsp+F8h] [rbp-100h]
  __int64 v147; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v148; // [rsp+108h] [rbp-F0h]
  __int64 v149; // [rsp+110h] [rbp-E8h] BYREF
  unsigned __int64 v150; // [rsp+118h] [rbp-E0h]
  __int64 v151; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v152; // [rsp+128h] [rbp-D0h]
  __m128i v153; // [rsp+130h] [rbp-C8h] BYREF
  __int64 *v154; // [rsp+140h] [rbp-B8h]
  __int64 v155; // [rsp+148h] [rbp-B0h]
  __int64 *v156; // [rsp+150h] [rbp-A8h]
  __int64 v157; // [rsp+158h] [rbp-A0h]
  __int64 v158; // [rsp+160h] [rbp-98h]
  __int64 v159; // [rsp+168h] [rbp-90h]
  __int64 v160; // [rsp+170h] [rbp-88h]
  __int64 *v161; // [rsp+178h] [rbp-80h]
  void *s; // [rsp+180h] [rbp-78h]
  __int64 v163; // [rsp+188h] [rbp-70h]
  void *v164; // [rsp+190h] [rbp-68h]
  __int64 v165; // [rsp+198h] [rbp-60h]
  int v166; // [rsp+1A0h] [rbp-58h]
  __int64 v167; // [rsp+1A8h] [rbp-50h]
  _QWORD v168[9]; // [rsp+1B0h] [rbp-48h] BYREF

  v14 = _mm_loadl_epi64(a1 + 1);
  v154 = nullptr;
  v156 = nullptr;
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v161 = nullptr;
  s = v168;
  v163 = 1;
  v164 = nullptr;
  v153 = _mm_unpacklo_epi64(v14, v14);
  v155 = v14.m128i_i64[0];
  v160 = v14.m128i_i64[0];
  v165 = 0;
  v166 = 1065353216;
  v167 = 0;
  v168[0] = 0;
  sub_14EA0D0(&v153, a3, a4);
  v133[0] = 0;
  v133[1] = 0;
  v134[0] = 1;
  v134[1] = 0;
  v121 = &a1[1].m128i_i8[8];
  if ( !(unsigned __int8)sub_1666AE0(&a1[1].m128i_u64[1], a3, v133, &v149) )
    goto LABEL_50;
  v15 = (v134[0] & 0x100000000LL) == 0;
  if ( (v134[0] & 0x100000000LL) == 0 )
    v15 = LODWORD(v134[0]) == 1;
  v16 = a1[1].m128i_i64[0];
  v150 = 0;
  v151 = 1;
  v132 = v16;
  v149 = 0xFFFFFFFFLL;
  v152 = 0;
  sub_182CBA0(qword_1C7F2C0, &v151);
  v20 = a1[2].m128i_i64[0];
  BYTE4(v151) &= ~1u;
  LODWORD(v151) = 1;
  if ( !v20 )
  {
    sub_16669E0(v121);
    v20 = a1[2].m128i_i64[0];
  }
  v120 = v15;
  v21 = sub_166A700(v20, (unsigned int)&v149, v15, v17, v18, v19);
  v22 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v149);
  sub_182CBA0(v23, &v151);
  v141 = 1;
  v142 = 0;
  v143 = 1;
  v144 = 0;
  sub_182CBA0(qword_1C7F2C0, &v143);
  v27 = a1[2].m128i_i64[0];
  BYTE4(v143) &= ~1u;
  LODWORD(v143) = 1;
  if ( !v27 )
  {
    sub_16669E0(v121);
    v27 = a1[2].m128i_i64[0];
  }
  sub_166A700(v27, (unsigned int)&v141, v120, v24, v25, v26);
  v122 = sub_15E1B70(a1[1].m128i_i64[1]);
  *(_QWORD *)v145 = 1;
  v146 = 0;
  v147 = 1;
  v148 = 0;
  sub_182CBA0(qword_1C7F2C0, &v147);
  BYTE4(v147) &= ~1u;
  v28 = qword_1C7F2C0;
  LODWORD(v147) = 1;
  v149 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  if ( (v133[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v149, v133);
    if ( (v134[0] & 0x100000000LL) == 0 )
    {
LABEL_12:
      BYTE4(v151) &= ~1u;
      v29 = qword_1C7F2C0;
      LODWORD(v151) = v134[0];
      v30 = v145[0];
      if ( v145[0] )
        goto LABEL_13;
LABEL_146:
      if ( (v149 & 0x100000000LL) != 0 )
        sub_182C690(v29, &v149, &v149);
      else
        BYTE4(v149) &= ~1u;
      if ( (v151 & 0x100000000LL) != 0 )
        sub_182C690(v29, &v151, &v151);
      else
        BYTE4(v151) &= ~1u;
      goto LABEL_16;
    }
  }
  else
  {
    LODWORD(v149) = v133[0];
    if ( (v134[0] & 0x100000000LL) == 0 )
      goto LABEL_12;
  }
  sub_182C690(v28, &v151, v134);
  v30 = v145[0];
  v29 = qword_1C7F2C0;
  if ( !v145[0] )
    goto LABEL_146;
LABEL_13:
  if ( (_DWORD)v149 )
  {
    if ( (v151 & 0x100000000LL) != 0 || (_DWORD)v151 != 1 || (v147 & 0x100000000LL) != 0 || (_DWORD)v147 != 1 )
    {
      sub_1851D20(v29, &v149, v145, &v149);
    }
    else
    {
      sub_1831A80(v29, &v149, v145, &v149);
      sub_182CBA0(v29, &v151);
      BYTE4(v151) &= ~1u;
      LODWORD(v151) = 1;
    }
  }
  else
  {
    if ( (v145[1] & 1) != 0 )
    {
      sub_182C690(v29, &v149, v145);
    }
    else
    {
      BYTE4(v149) &= ~1u;
      LODWORD(v149) = v30;
    }
    if ( (v147 & 0x100000000LL) != 0 )
    {
      sub_182C690(v29, &v151, &v147);
    }
    else
    {
      BYTE4(v151) &= ~1u;
      LODWORD(v151) = v147;
    }
  }
LABEL_16:
  v136 &= 0xFCu;
  v31 = qword_1C7F2C0;
  v139 &= 0xFCu;
  v135 = 0;
  v137 = 0;
  v138 = 1;
  v140 = 0;
  if ( (v149 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v135, &v149);
  else
    v135 = v149;
  if ( (v151 & 0x100000000LL) != 0 )
  {
    sub_182C690(v31, &v138, &v151);
  }
  else
  {
    v139 &= ~1u;
    v138 = v151;
  }
  v116 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v149);
  sub_182CBA0(v116, &v151);
  v117 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v145);
  sub_182CBA0(v117, &v147);
  v35 = a1[2].m128i_i64[0];
  if ( !v35 )
  {
    sub_16669E0(v121);
    v35 = a1[2].m128i_i64[0];
  }
  v36 = sub_166A700(v35, (unsigned int)&v135, v120, v32, v33, v34);
  sub_14EA0D0(&v153, v36, v122);
  v123 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v135);
  sub_182CBA0(v123, &v138);
  v124 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v141);
  sub_182CBA0(v124, &v143);
  sub_15E1B70(a1[1].m128i_i64[1]);
  v125 = sub_15E1B70(a1[1].m128i_i64[1]);
  *(_QWORD *)v145 = 0xFFFFFFFFLL;
  v146 = 0;
  v147 = 1;
  v148 = 0;
  sub_182CBA0(qword_1C7F2C0, &v147);
  BYTE4(v147) &= ~1u;
  v37 = qword_1C7F2C0;
  LODWORD(v147) = 1;
  v149 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  if ( (v145[1] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v149, v145);
  else
    LODWORD(v149) = v145[0];
  if ( (v147 & 0x100000000LL) != 0 )
  {
    sub_182C690(v37, &v151, &v147);
  }
  else
  {
    BYTE4(v151) &= ~1u;
    LODWORD(v151) = v147;
  }
  v38 = qword_1C7F2C0;
  if ( (v151 & 0x100000000LL) != 0 || (_DWORD)v151 != 1 || (v134[0] & 0x100000000LL) != 0 || LODWORD(v134[0]) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, &v149, v133);
  }
  else
  {
    sub_1831650(qword_1C7F2C0, &v149, v133);
    sub_182CBA0(v38, &v151);
    BYTE4(v151) &= ~1u;
    LODWORD(v151) = 1;
  }
  v136 &= 0xFCu;
  v39 = qword_1C7F2C0;
  v139 &= 0xFCu;
  v135 = 0;
  v137 = 0;
  v138 = 1;
  v140 = 0;
  if ( (v149 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v135, &v149);
  else
    v135 = v149;
  if ( (v151 & 0x100000000LL) != 0 )
  {
    sub_182C690(v39, &v138, &v151);
  }
  else
  {
    v139 &= ~1u;
    v138 = v151;
  }
  v126 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v149);
  sub_182CBA0(v126, &v151);
  v127 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v145);
  sub_182CBA0(v127, &v147);
  *(_QWORD *)v145 = 0xFFFFFFFFLL;
  v146 = 0;
  v147 = 1;
  v148 = 0;
  sub_182CBA0(qword_1C7F2C0, &v147);
  BYTE4(v147) &= ~1u;
  v40 = qword_1C7F2C0;
  LODWORD(v147) = 1;
  v149 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  if ( (v136 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v149, &v135);
  else
    LODWORD(v149) = v135;
  if ( (v139 & 1) != 0 )
  {
    sub_182C690(v40, &v151, &v138);
  }
  else
  {
    BYTE4(v151) &= ~1u;
    LODWORD(v151) = v138;
  }
  v41 = qword_1C7F2C0;
  if ( v145[0] )
  {
    if ( (_DWORD)v149 )
    {
      if ( (v151 & 0x100000000LL) != 0 || (_DWORD)v151 != 1 || (v147 & 0x100000000LL) != 0 || (_DWORD)v147 != 1 )
      {
        sub_1851D20(qword_1C7F2C0, &v149, v145, &v149);
      }
      else
      {
        sub_1831A80(qword_1C7F2C0, &v149, v145, &v149);
        sub_182CBA0(v41, &v151);
        BYTE4(v151) &= ~1u;
        LODWORD(v151) = 1;
      }
    }
    else
    {
      if ( (v145[1] & 1) != 0 )
      {
        v131 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v149, v145);
        v41 = v131;
      }
      else
      {
        BYTE4(v149) &= ~1u;
        LODWORD(v149) = v145[0];
      }
      if ( (v147 & 0x100000000LL) != 0 )
      {
        sub_182C690(v41, &v151, &v147);
      }
      else
      {
        BYTE4(v151) &= ~1u;
        LODWORD(v151) = v147;
      }
    }
  }
  else
  {
    if ( (v149 & 0x100000000LL) != 0 )
    {
      v130 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v149, &v149);
      v41 = v130;
    }
    else
    {
      BYTE4(v149) &= ~1u;
    }
    if ( (v151 & 0x100000000LL) != 0 )
      sub_182C690(v41, &v151, &v151);
    else
      BYTE4(v151) &= ~1u;
  }
  BYTE4(v141) &= 0xFCu;
  v42 = qword_1C7F2C0;
  BYTE4(v143) &= 0xFCu;
  LODWORD(v141) = 0;
  v142 = 0;
  LODWORD(v143) = 1;
  v144 = 0;
  if ( (v149 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v141, &v149);
  else
    LODWORD(v141) = v149;
  if ( (v151 & 0x100000000LL) != 0 )
  {
    sub_182C690(v42, &v143, &v151);
  }
  else
  {
    BYTE4(v143) &= ~1u;
    LODWORD(v143) = v151;
  }
  v128 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v149);
  sub_182CBA0(v128, &v151);
  v129 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v145);
  sub_182CBA0(v129, &v147);
  v46 = a1[2].m128i_i64[0];
  if ( !v46 )
  {
    sub_16669E0(v121);
    v46 = a1[2].m128i_i64[0];
  }
  v47 = sub_166A700(v46, (unsigned int)&v141, v120, v43, v44, v45);
  sub_14EA0D0(&v153, v47, v125);
  v48 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v141);
  sub_182CBA0(v48, &v143);
  v49 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v135);
  sub_182CBA0(v49, &v138);
  if ( v22 )
  {
    v50 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v50 )
      sub_15D7BC0(v132, v22);
  }
LABEL_50:
  v51 = (_QWORD *)a1[5].m128i_i64[0];
  *a7 = 0;
  *a8 = 0;
  if ( v51 )
  {
    v52 = &v51[*((unsigned int *)v51 - 1)];
    if ( v52 != v51 )
    {
      while ( 1 )
      {
        v62 = *v51;
        v63 = a1[1].m128i_i64[0];
        *(_QWORD *)v145 = 0;
        v146 = v63;
        sub_14EA2A0(&v153, v62, v145);
        v64 = *(_QWORD *)v145;
        if ( v62 == *(_QWORD *)v145 )
        {
          if ( v62 )
            ++*(_DWORD *)(v62 + 8);
          v65 = *(_QWORD **)(a5 + 8);
          if ( v65 )
          {
            v66 = *((_DWORD *)v65 - 1);
            if ( v66 == *((_DWORD *)v65 - 2) )
            {
              v96 = (3 * v66 + 1) >> 1;
              v97 = 8 * v96 + 8;
              if ( 8 * v66 + 8 >= (unsigned int)v97 || v66 >= v96 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v149, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v149);
                sub_233E40((__int64)&v149);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v113 = (3 * v66 + 1) >> 1;
              v98 = (unsigned int *)sub_186B300(v65 - 1, v97);
              v65 = v98 + 2;
              *(_QWORD *)(a5 + 8) = v98 + 2;
              *v98 = v113;
              LODWORD(v98) = v98[1];
              v69 = &v65[(unsigned int)v98];
              v68 = (_DWORD)v98 + 1;
            }
            else
            {
              v67 = v66;
              v68 = v66 + 1;
              v69 = &v65[v67];
            }
          }
          else
          {
            v108 = (_QWORD *)sub_186B270(0x18u);
            v65 = v108 + 1;
            *v108 = 2;
            v69 = v108 + 1;
            *(_QWORD *)(a5 + 8) = v108 + 1;
            v68 = 1;
          }
          *v69 = v62;
          v60 = *(_QWORD *)v145;
          *((_DWORD *)v65 - 1) = v68;
          goto LABEL_63;
        }
        if ( *(_WORD *)(*(_QWORD *)v145 + 4LL) )
          goto LABEL_56;
        v53 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v145 + 16LL) + 24LL);
        if ( !v53 )
          goto LABEL_56;
        if ( *v53 )
          goto LABEL_56;
        if ( v53[1] != 2 )
          goto LABEL_56;
        if ( *(_DWORD *)(*(_QWORD *)v145 + 24LL) != 2 )
          goto LABEL_56;
        v100 = *(_QWORD *)(*(_QWORD *)v145 + 32LL);
        v101 = *(_QWORD *)(*(_QWORD *)v145 + 40LL);
        if ( a4 != v100 && a4 != v101 )
          goto LABEL_56;
        if ( *(_WORD *)(v100 + 4)
          || (v102 = *(_DWORD **)(*(_QWORD *)(v100 + 16) + 24LL)) == nullptr
          || *v102 != 5
          || v102[1] )
        {
          if ( *(_WORD *)(v101 + 4) )
            goto LABEL_56;
          v103 = *(_DWORD **)(*(_QWORD *)(v101 + 16) + 24LL);
          if ( !v103 || *v103 != 5 || v103[1] )
            goto LABEL_56;
        }
        v105 = sub_15E1B70(a1[1].m128i_i64[1]);
        v64 = v105;
        if ( v105 )
        {
          v106 = *(_QWORD *)v145;
          ++*(_DWORD *)(v105 + 8);
          if ( !v106 || (v107 = v146, v50 = *(_DWORD *)(v106 + 8) == 1, --*(_DWORD *)(v106 + 8), !v50) )
          {
            *(_QWORD *)v145 = v105;
LABEL_56:
            ++*(_DWORD *)(v64 + 8);
            goto LABEL_57;
          }
        }
        else
        {
          v106 = *(_QWORD *)v145;
          if ( !*(_QWORD *)v145
            || (v107 = v146, v50 = *(_DWORD *)(*(_QWORD *)v145 + 8LL) == 1, --*(_DWORD *)(*(_QWORD *)v145 + 8LL), !v50) )
          {
            *(_QWORD *)v145 = 0;
            v64 = 0;
            goto LABEL_57;
          }
        }
        v115 = v105;
        sub_15D7BC0(v107, v106);
        v64 = v115;
        *(_QWORD *)v145 = v115;
        if ( v115 )
          goto LABEL_56;
        v64 = 0;
LABEL_57:
        v54 = *(_QWORD **)(a6 + 8);
        if ( v54 )
        {
          v55 = *((_DWORD *)v54 - 1);
          if ( v55 == *((_DWORD *)v54 - 2) )
          {
            v70 = (3 * v55 + 1) >> 1;
            v71 = 8 * v70 + 8;
            if ( 8 * v55 + 8 >= (unsigned int)v71 || v55 >= v70 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v149, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, &v149);
              sub_233E40((__int64)&v149);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v118 = (3 * v55 + 1) >> 1;
            v111 = v64;
            v72 = (unsigned int *)sub_186B300(v54 - 1, v71);
            v73 = v72[1];
            v54 = v72 + 2;
            *(_QWORD *)(a6 + 8) = v72 + 2;
            v64 = v111;
            *v72 = v118;
            LODWORD(v72) = v73;
            v58 = &v54[v73];
            v57 = (_DWORD)v72 + 1;
          }
          else
          {
            v56 = v55;
            v57 = v55 + 1;
            v58 = &v54[v56];
          }
        }
        else
        {
          v114 = v64;
          v104 = (_QWORD *)sub_186B270(0x18u);
          v54 = v104 + 1;
          *v104 = 2;
          v64 = v114;
          v57 = 1;
          *(_QWORD *)(a6 + 8) = v54;
          v58 = v54;
        }
        *v58 = v64;
        v59 = a1[1].m128i_i64[0];
        *((_DWORD *)v54 - 1) = v57;
        if ( !(unsigned __int8)sub_3D9B00(v145[0], v59) )
          goto LABEL_206;
        v89 = a1[1].m128i_i64[0];
        v150 = 0;
        v149 = v89;
        sub_15EEF60(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 24LL));
        sub_4870C0((__int64)a1, &v149, (__int64 *)v145, a9);
        v90 = v150;
        if ( !v150 )
          goto LABEL_206;
        v91 = *(unsigned int *)(v150 - 4);
        if ( v150 >= v150 + 8 * v91 )
          goto LABEL_123;
        v112 = v51;
        v92 = (__int64 *)v150;
        v93 = v150 + 8 * v91;
        do
        {
          while ( 1 )
          {
            v94 = *v92;
            if ( *v92 )
            {
              v95 = v149;
              v50 = (*(_DWORD *)(v94 + 8))-- == 1;
              if ( v50 )
                break;
            }
            if ( (unsigned __int64)++v92 >= v93 )
              goto LABEL_122;
          }
          sub_15D7BC0(v95, v94);
          ++v92;
        }
        while ( (unsigned __int64)v92 < v93 );
LABEL_122:
        v90 = v150;
        v51 = v112;
        if ( v150 )
        {
LABEL_123:
          sub_186B220((void *)(v90 - 8));
          if ( *a7 )
            goto LABEL_62;
        }
        else
        {
LABEL_206:
          if ( *a7 )
            goto LABEL_62;
        }
        if ( !(unsigned __int8)sub_485BD0((__int64)a1, a4, *(__int64 *)v145) )
        {
LABEL_62:
          v60 = *(_QWORD *)v145;
          if ( !*a8 )
          {
            v99 = sub_486480((__int64)a1, a4, *(__int64 *)v145);
            v60 = *(_QWORD *)v145;
            if ( v99 )
              *a8 = *(_QWORD *)v145;
          }
          goto LABEL_63;
        }
        v60 = *(_QWORD *)v145;
        *a7 = *(_QWORD *)v145;
LABEL_63:
        if ( v60 && (v61 = v146, v50 = *(_DWORD *)(v60 + 8) == 1, --*(_DWORD *)(v60 + 8), v50) )
        {
          sub_15D7BC0(v61, v60);
          if ( v52 == ++v51 )
            break;
        }
        else if ( v52 == ++v51 )
        {
          break;
        }
      }
    }
  }
  v74 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v133);
  sub_182CBA0(v74, v134);
  v75 = v164;
  if ( v164 )
  {
    do
    {
      v76 = v75;
      v75 = (_QWORD *)*v75;
      operator delete(v76, 0x18u);
    }
    while ( v75 );
  }
  memset(s, 0, 8 * v163);
  v165 = 0;
  v164 = nullptr;
  if ( s != v168 )
    operator delete(s, 8 * v163);
  v77 = v161;
  if ( v161 )
  {
    v78 = (unsigned __int64)&v161[*((unsigned int *)v161 - 1)];
    if ( (unsigned __int64)v161 >= v78 )
      goto LABEL_89;
    do
    {
      while ( 1 )
      {
        v79 = *v77;
        if ( *v77 )
        {
          v80 = v160;
          v50 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v50 )
            break;
        }
        if ( (unsigned __int64)++v77 >= v78 )
          goto LABEL_88;
      }
      sub_15D7BC0(v80, v79);
      ++v77;
    }
    while ( (unsigned __int64)v77 < v78 );
LABEL_88:
    v77 = v161;
    if ( v161 )
LABEL_89:
      sub_186B220(v77 - 1);
  }
  if ( v159 )
    sub_186B220((void *)(v159 - 8));
  if ( v158 )
    sub_186B220((void *)(v158 - 8));
  if ( v157 )
    sub_186B220((void *)(v157 - 8));
  v81 = v156;
  if ( v156 )
  {
    v82 = (unsigned __int64)&v156[*((unsigned int *)v156 - 1)];
    if ( (unsigned __int64)v156 >= v82 )
      goto LABEL_104;
    do
    {
      while ( 1 )
      {
        v83 = *v81;
        if ( *v81 )
        {
          v84 = v155;
          v50 = (*(_DWORD *)(v83 + 8))-- == 1;
          if ( v50 )
            break;
        }
        if ( (unsigned __int64)++v81 >= v82 )
          goto LABEL_103;
      }
      sub_15D7BC0(v84, v83);
      ++v81;
    }
    while ( (unsigned __int64)v81 < v82 );
LABEL_103:
    v81 = v156;
    if ( v156 )
LABEL_104:
      sub_186B220(v81 - 1);
  }
  v85 = v154;
  if ( v154 )
  {
    v86 = (unsigned __int64)&v154[*((unsigned int *)v154 - 1)];
    if ( (unsigned __int64)v154 >= v86 )
      goto LABEL_113;
    do
    {
      while ( 1 )
      {
        v87 = *v85;
        if ( *v85 )
        {
          v88 = v153.m128i_i64[1];
          v50 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v50 )
            break;
        }
        if ( (unsigned __int64)++v85 >= v86 )
          goto LABEL_112;
      }
      sub_15D7BC0(v88, v87);
      ++v85;
    }
    while ( (unsigned __int64)v85 < v86 );
LABEL_112:
    v85 = v154;
    if ( v154 )
LABEL_113:
      sub_186B220(v85 - 1);
  }
}

