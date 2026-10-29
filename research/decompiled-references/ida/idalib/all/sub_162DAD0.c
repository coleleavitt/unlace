__int64 __fastcall sub_162DAD0(__int64 *a1, int a2, __int64 a3, unsigned int a4, __m128 a5, double a6)
{
  unsigned int v6; // ebx
  _QWORD *v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 *v25; // rsi
  unsigned __int8 **v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  char v34; // al
  unsigned __int64 v35; // r8
  unsigned int v36; // edi
  char v37; // al
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  char v40; // cl
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int8 **v43; // r15
  __int64 v44; // rbx
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  char v50; // cl
  __int64 v51; // rdx
  __int64 *v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbp
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 *v61; // rcx
  __int64 *v62; // rsi
  __int64 *v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rdx
  char v71; // al
  bool v72; // al
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  bool v79; // sf
  char v80; // al
  __int64 v81; // r13
  unsigned __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  char v87; // cl
  __int64 v88; // rdx
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  char v91; // cl
  __int64 v92; // rbp
  __int64 v93; // rax
  unsigned __int8 **v94; // rbx
  unsigned __int8 **v95; // rdi
  __int64 v96; // rdx
  unsigned __int64 v97; // rdx
  __int64 v98; // rdx
  unsigned __int8 **v99; // r14
  __int64 v100; // rax
  __int64 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 *v105; // rcx
  __int64 *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rsi
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 *v113; // rcx
  __int64 *v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rsi
  _QWORD *v117; // rax
  __int64 *v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rax
  __int64 v123; // rcx
  _QWORD *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rbx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rax
  _QWORD *v131; // rax
  unsigned __int8 *v132; // rbx
  unsigned __int8 *v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rbx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  _QWORD *v141; // rax
  __int64 v142; // r12
  unsigned __int8 *v143; // rbx
  _BYTE *v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rdx
  int v147; // eax
  __int64 v148; // rdx
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // r12
  __int64 v152; // r14
  __int64 v153; // r12
  void *v154; // rdi
  __int64 v155; // rax
  __int64 v156; // r14
  __int64 v157; // r15
  __int64 v158; // r14
  void *v159; // rdi
  __int64 v160; // [rsp+8h] [rbp-120h] BYREF
  __int64 v161; // [rsp+10h] [rbp-118h]
  unsigned __int8 **v162; // [rsp+18h] [rbp-110h] BYREF
  unsigned int v163; // [rsp+24h] [rbp-104h]
  __int64 *v164; // [rsp+28h] [rbp-100h]
  __int64 *v165; // [rsp+30h] [rbp-F8h]
  __int64 *v166; // [rsp+38h] [rbp-F0h]
  int v167; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v168; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v169; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v170; // [rsp+58h] [rbp-D0h] BYREF
  __m128 v171; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v172; // [rsp+70h] [rbp-B8h]
  int v173; // [rsp+78h] [rbp-B0h]
  unsigned __int8 *v174; // [rsp+80h] [rbp-A8h]
  __int64 v175; // [rsp+88h] [rbp-A0h]
  char v176; // [rsp+D8h] [rbp-50h]
  unsigned int v177; // [rsp+E0h] [rbp-48h]
  char v178; // [rsp+E4h] [rbp-44h]

  v163 = a4;
  LOBYTE(v6) = (unsigned int)(a2 - 11912) <= 1 || (unsigned int)(a2 - 5904) <= 1;
  if ( (_BYTE)v6 )
  {
    v9 = (_QWORD *)sub_168B6C0(a1);
    v10 = sub_BFD550(*(_QWORD *)(a3 + 32));
    if ( (unsigned __int8)sub_16EC930(*a1, a3, 1) )
      return 1;
    v161 = 0;
  }
  else
  {
    v9 = (_QWORD *)sub_168B6C0(a1);
    v10 = sub_BFD550(*(_QWORD *)(a3 + 32));
    v6 = sub_16EC930(*a1, a3, 2);
    if ( (_BYTE)v6 )
      return 1;
    v161 = 8;
  }
  v11 = *(_QWORD *)(v161 + a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
  v12 = sub_19179A0(*a1, v11, 1);
  if ( v12 == 1 )
    return 1;
  v15 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v16 = *(_QWORD *)(*(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 42 )
  {
    v47 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v47 + 16) != 42 || (v16 = sub_F63050(v16, v11, v47, v13)) == 0 )
    {
      if ( (*(_QWORD *)v10 & 0x80000LL) != 0 )
      {
        v48 = *(_QWORD *)(v10 + 32);
        if ( v48 )
        {
          v160 = *(_QWORD *)(v10 + 40);
          a5 = _mm_loadh_ps((const double *)&v160);
          v171 = a5;
          v49 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v49 )
          {
            v171.m128_u64[0] = v49;
            v50 = 0;
            while ( (*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v50 = 1;
              v49 = *(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v50 )
              v171.m128_u64[0] = v49;
          }
          v162 = (unsigned __int8 **)&v171;
          v51 = (unsigned int)sub_E90530((__int64 *)&v171);
        }
        else
        {
          v51 = 0;
          v162 = (unsigned __int8 **)&v171;
        }
      }
      else
      {
        v51 = *(unsigned int *)(v10 + 4);
        v162 = (unsigned __int8 **)&v171;
      }
      v52 = a1;
      sub_168B9F0(v162, a1, v51, 3122, 0);
      v53 = *(_QWORD *)(v15 + 8);
      if ( v176 )
      {
        v52 = *(__int64 **)(v15 + 8);
        sub_AE9DF0(v162 + 4, (__int64)v52, 8u);
        v164 = &v170;
      }
      else
      {
        v164 = &v170;
        if ( !v178 )
        {
LABEL_118:
          v93 = sub_EEC8C0(v15, (__int64)v52, *(double *)a5.m128_u64);
          v94 = v162;
          v170 = v93;
          sub_1587DB0((__int64)v162, v164);
          v95 = v94;
          v6 = 1;
          sub_15F7200(v95);
          return v6;
        }
        v56 = sub_168B9E0(v162);
        v59 = v172;
        if ( v172 )
          v59 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v172 + 32LL))(v172);
        v170 = v59;
        v164 = &v170;
        v60 = sub_1587BC0(v56, &v170, v54, v55, v57, v58);
        v52 = (__int64 *)v53;
        sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v177 + 8), v53, 8u);
      }
      if ( v176 )
      {
        v52 = nullptr;
        sub_AE9DF0(v162 + 4, 0, 2u);
      }
      else if ( v178 )
      {
        v127 = sub_168B9E0(v162);
        v130 = v172;
        if ( v172 )
          v130 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v172 + 32LL))(v172);
        v170 = v130;
        v131 = sub_1587BC0(v127, v164, v125, v126, v128, v129);
        v52 = nullptr;
        sub_AE9DF0((unsigned __int8 **)(*v131 + 32LL * v177 + 8), 0, 2u);
      }
      goto LABEL_118;
    }
  }
  v17 = *(_QWORD *)(v16 + 32);
  v168 = v17;
  v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_QWORD *)(v18 + 8) & 7LL;
  if ( v19 | (*(__int64 *)(v18 + 8) >> 3) & 1 )
    v20 = sub_F64F00(v17, v18, v19, v19 | (*(__int64 *)(v18 + 8) >> 3) & 1, v14) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v20 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  v162 = (unsigned __int8 **)v20;
  v21 = v20 | 4;
  if ( (_BYTE)v6 )
    v21 = v20 | 5;
  v160 = v21;
  v22 = sub_168B6C0(a1);
  v24 = 0;
  v25 = (__int64 *)v162;
  v26 = (unsigned __int8 **)v22;
  v27 = *(_QWORD *)&byte_8[v168 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v27 & 8) != 0 )
    v24 = *(__int64 *)((char *)&qword_18 + (v27 & 0xFFFFFFFFFFFFFFF0LL));
  v28 = v24 | ((unsigned __int8)v27 | (unsigned __int8)v168) & 7;
  v29 = *((_QWORD *)*v162 + 1) & 7LL;
  if ( v29 | (*((__int64 *)*v162 + 1) >> 3) & 1 )
  {
    v165 = (__int64 *)v28;
    v164 = (__int64 *)v162;
    v162 = v26;
    v46 = sub_F64F00(v160, (__int64)v25, v29, v28, v23);
    v28 = (unsigned __int64)v165;
    v25 = v164;
    v30 = v46 & 0xFFFFFFFFFFFFFFF0LL;
    v26 = v162;
  }
  else
  {
    v30 = (unsigned __int64)*v162 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v31 + 16) == 13 && ((*(_WORD *)(v31 + 18) >> 3) & 0x1FF) == 0x1B3 )
    v28 &= ~8uLL;
  v32 = v25[1];
  v33 = 0;
  if ( (v32 & 8) != 0 )
    v33 = *(__int64 *)((char *)&qword_18 + (v32 & 0xFFFFFFFFFFFFFFF0LL));
  v34 = v160 | v32;
  v35 = v33 | v34 & 7;
  v36 = ((unsigned int)v33 | v34 & 7) >> 9;
  if ( (unsigned int)v28 >> 9 != v36
    && (v164 = (__int64 *)(v33 | v34 & 7),
        v162 = (unsigned __int8 **)v28,
        v37 = sub_F56A30(v36, (unsigned int)v28 >> 9, (__int64)v26),
        v28 = (unsigned __int64)v162,
        v35 = (unsigned __int64)v164,
        !v37)
    || ((v35 >> 4) & 3) != ((v28 >> 4) & 3) && (v35 & 0x30) != 0 && (v28 & 0x30) != 0
    || HIDWORD(v28) != HIDWORD(v35)
    || ((v35 >> 6) & 7) != ((v28 >> 6) & 7)
    || ((unsigned __int8)v28 & (unsigned __int8)~(_BYTE)v35 & 7) != 0
    || (v28 & 8) != 0 && (v35 & 8) == 0 )
  {
    if ( (*(_QWORD *)v10 & 0x80000LL) != 0 )
    {
      v38 = *(_QWORD *)(v10 + 32);
      if ( v38 )
      {
        v162 = *(unsigned __int8 ***)(v10 + 40);
        a5 = _mm_loadh_ps((const double *)&v162);
        v171 = a5;
        v39 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v39 )
        {
          v171.m128_u64[0] = v39;
          v40 = 0;
          while ( (*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v40 = 1;
            v39 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v40 )
            v171.m128_u64[0] = v39;
        }
        v162 = (unsigned __int8 **)&v171;
        v41 = (unsigned int)sub_E90530((__int64 *)&v171);
      }
      else
      {
        v41 = 0;
        v162 = (unsigned __int8 **)&v171;
      }
    }
    else
    {
      v41 = *(unsigned int *)(v10 + 4);
      v162 = (unsigned __int8 **)&v171;
    }
    sub_168B9F0(v162, a1, v41, 5699, 0);
    v61 = *(__int64 **)(v15 + 8);
    if ( v176 )
    {
      sub_AE9DF0(v162 + 4, *(_QWORD *)(v15 + 8), 8u);
      v164 = &v170;
    }
    else
    {
      v164 = &v170;
      if ( v178 )
      {
        v164 = v61;
        v110 = sub_168B9E0(v162);
        v113 = v164;
        v114 = (__int64 *)v110;
        v115 = v172;
        if ( v172 )
        {
          v116 = *(_QWORD *)v172;
          v165 = v164;
          v164 = v114;
          v115 = (*(__int64 (__fastcall **)(unsigned __int64))(v116 + 32))(v172);
          v113 = v165;
          v114 = v164;
        }
        v170 = v115;
        v165 = v113;
        v164 = &v170;
        v117 = sub_1587BC0((__int64)v114, &v170, (__int64)v114, (__int64)v113, v111, v112);
        sub_AE9DF0((unsigned __int8 **)(*v117 + 32LL * v177 + 8), (__int64)v165, 8u);
      }
    }
    v62 = (__int64 *)v160;
    v63 = (__int64 *)sub_A70010((__int64)v9, v160);
    if ( v176 )
    {
      v62 = v63;
      sub_AE9DF0(v162 + 4, (__int64)v63, 8u);
    }
    else
    {
      if ( !v178 )
      {
LABEL_68:
        v170 = sub_EEC8C0(v15, (__int64)v62, *(double *)a5.m128_u64);
        sub_1587DB0((__int64)v162, v164);
        sub_15F7200(v162);
        LODWORD(v162) = 1;
        goto LABEL_69;
      }
      v165 = v63;
      v102 = sub_168B9E0(v162);
      v105 = v165;
      v106 = (__int64 *)v102;
      v107 = v172;
      if ( v172 )
      {
        v108 = *(_QWORD *)v172;
        v166 = v165;
        v165 = v106;
        v107 = (*(__int64 (__fastcall **)(unsigned __int64))(v108 + 32))(v172);
        v105 = v166;
        v106 = v165;
      }
      v165 = v105;
      v170 = v107;
      v109 = sub_1587BC0((__int64)v106, v164, (__int64)v106, (__int64)v105, v103, v104);
      v62 = v165;
      sub_AE9DF0((unsigned __int8 **)(*v109 + 32LL * v177 + 8), (__int64)v165, 8u);
    }
    if ( v176 )
    {
      v62 = (_QWORD *)(&dword_0 + 1);
      sub_AE9DF0(v162 + 4, 1, 2u);
    }
    else if ( v178 )
    {
      v118 = (__int64 *)sub_168B9E0(v162);
      v122 = v172;
      if ( v172 )
      {
        v123 = *(_QWORD *)v172;
        v165 = v118;
        v122 = (*(__int64 (__fastcall **)(unsigned __int64))(v123 + 32))(v172);
        v118 = v165;
      }
      v170 = v122;
      v124 = sub_1587BC0((__int64)v118, v164, (__int64)v118, v119, v120, v121);
      v62 = (_QWORD *)(&dword_0 + 1);
      sub_AE9DF0((unsigned __int8 **)(*v124 + 32LL * v177 + 8), 1, 2u);
    }
    goto LABEL_68;
  }
  LODWORD(v162) = 5;
LABEL_69:
  v64 = sub_A70010((__int64)v9, v160);
  v65 = sub_160A600(*a1, v15, v64, (unsigned int)v162, 0, 0, *(double *)a5.m128_u64, a6, 0);
  if ( v65 == 1 )
    return 1;
  v68 = v161;
  v15 = v65 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v161 + a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32) = v65 & 0xFFFFFFFFFFFFFFFELL;
  v69 = *(_QWORD *)(v168 & 0xFFFFFFFFFFFFFFF0LL);
  v70 = *(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v71 = *(_BYTE *)(v70 + 16);
  if ( v71 != 13 )
  {
    if ( v71 == 47 )
    {
      v160 = *(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v75 = sub_F60F10(v160, v69, v70, v68, v66, v67);
      if ( (*((_BYTE *)v75 + 74) & 1) != 0 || (v75[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v79 = *((char *)sub_F60F10(v160, v69, v160, v76, v77, v78) + 76) < 0;
        v73 = v168;
        if ( !v79 )
          goto LABEL_74;
      }
      else
      {
        v73 = v168;
      }
      v69 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0LL);
      v71 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
    else if ( v71 == 10 )
    {
      goto LABEL_75;
    }
    if ( (v71 & 0xF7) != 0x22 && v71 != 11 )
      goto LABEL_72;
LABEL_75:
    v74 = sub_A97D20((__int64)v9, v69);
    if ( v163 < v74 )
    {
      if ( (*(_QWORD *)v10 & 0x80000LL) != 0 )
      {
        v85 = *(_QWORD *)(v10 + 32);
        if ( v85 )
        {
          v160 = *(_QWORD *)(v10 + 40);
          a5 = _mm_loadh_ps((const double *)&v160);
          v171 = a5;
          v86 = *(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v86 )
          {
            v171.m128_u64[0] = v86;
            v87 = 0;
            while ( (*(_QWORD *)(v86 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v87 = 1;
              v86 = *(_QWORD *)(v86 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v87 )
              v171.m128_u64[0] = v86;
          }
          v162 = (unsigned __int8 **)&v171;
          v88 = (unsigned int)sub_E90530((__int64 *)&v171);
        }
        else
        {
          v88 = 0;
          v162 = (unsigned __int8 **)&v171;
        }
      }
      else
      {
        v88 = *(unsigned int *)(v10 + 4);
        v162 = (unsigned __int8 **)&v171;
      }
      v52 = a1;
      sub_168B9F0(v162, a1, v88, 3126, 0);
      v92 = *(_QWORD *)(v15 + 8);
      if ( v176 )
      {
        v132 = v174;
        if ( !v174 )
        {
          v146 = v175;
          v147 = *(_DWORD *)(v175 + 14976);
          if ( v147 )
          {
            v150 = (unsigned int)(v147 - 1);
            *(_DWORD *)(v175 + 14976) = v150;
            v132 = *(unsigned __int8 **)(v146 + 8 * v150 + 14848);
            v151 = *((unsigned int *)v132 + 134);
            *v132 = 0;
            v152 = *((_QWORD *)v132 + 66);
            *((_DWORD *)v132 + 106) = 0;
            v153 = v152 + (v151 << 6);
            while ( v152 != v153 )
            {
              while ( 1 )
              {
                v153 -= 64;
                v154 = *(void **)(v153 + 24);
                if ( v154 == (void *)(v153 + 40) )
                  break;
                operator delete(v154);
                if ( v152 == v153 )
                  goto LABEL_169;
              }
            }
LABEL_169:
            *((_DWORD *)v132 + 134) = 0;
          }
          else
          {
            v132 = (unsigned __int8 *)operator new(0x3A0u);
            *v132 = 0;
            *((_QWORD *)v132 + 12) = v132 + 112;
            *((_QWORD *)v132 + 16) = v132 + 144;
            *((_QWORD *)v132 + 20) = v132 + 176;
            *((_QWORD *)v132 + 24) = v132 + 208;
            *((_QWORD *)v132 + 28) = v132 + 240;
            *((_QWORD *)v132 + 32) = v132 + 272;
            *((_QWORD *)v132 + 36) = v132 + 304;
            *((_QWORD *)v132 + 40) = v132 + 336;
            *((_QWORD *)v132 + 44) = v132 + 368;
            *((_QWORD *)v132 + 48) = v132 + 400;
            *((_QWORD *)v132 + 52) = v132 + 432;
            *((_QWORD *)v132 + 13) = 0;
            v132[112] = 0;
            *((_QWORD *)v132 + 17) = 0;
            v132[144] = 0;
            *((_QWORD *)v132 + 21) = 0;
            v132[176] = 0;
            *((_QWORD *)v132 + 25) = 0;
            v132[208] = 0;
            *((_QWORD *)v132 + 29) = 0;
            v132[240] = 0;
            *((_QWORD *)v132 + 33) = 0;
            v132[272] = 0;
            *((_QWORD *)v132 + 37) = 0;
            v132[304] = 0;
            *((_QWORD *)v132 + 41) = 0;
            v132[336] = 0;
            *((_QWORD *)v132 + 45) = 0;
            v132[368] = 0;
            *((_QWORD *)v132 + 49) = 0;
            v132[400] = 0;
            *((_QWORD *)v132 + 53) = 0x800000000LL;
            *((_QWORD *)v132 + 66) = v132 + 544;
            *((_QWORD *)v132 + 67) = 0x600000000LL;
          }
          v174 = v132;
        }
        v132[*v132 + 1] = 8;
        v133 = v174;
        v134 = *v174;
        *v174 = v134 + 1;
        *(_QWORD *)&v133[8 * v134 + 16] = v92;
        v164 = &v170;
      }
      else
      {
        v164 = &v170;
        if ( v178 )
        {
          v137 = sub_168B9E0(v162);
          v140 = v172;
          if ( v172 )
            v140 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v172 + 32LL))(v172);
          v170 = v140;
          v52 = &v170;
          v164 = &v170;
          v141 = sub_1587BC0(v137, &v170, v135, v136, v138, v139);
          v142 = *v141 + 32LL * v177;
          v143 = *(unsigned __int8 **)(v142 + 8);
          if ( !v143 )
          {
            v148 = *(_QWORD *)(v142 + 16);
            v149 = *(_DWORD *)(v148 + 14976);
            if ( v149 )
            {
              v155 = (unsigned int)(v149 - 1);
              *(_DWORD *)(v148 + 14976) = v155;
              v143 = *(unsigned __int8 **)(v148 + 8 * v155 + 14848);
              v156 = *((unsigned int *)v143 + 134);
              *v143 = 0;
              v157 = *((_QWORD *)v143 + 66);
              *((_DWORD *)v143 + 106) = 0;
              v158 = v157 + (v156 << 6);
              while ( v157 != v158 )
              {
                while ( 1 )
                {
                  v158 -= 64;
                  v159 = *(void **)(v158 + 24);
                  if ( v159 == (void *)(v158 + 40) )
                    break;
                  operator delete(v159);
                  if ( v157 == v158 )
                    goto LABEL_175;
                }
              }
LABEL_175:
              *((_DWORD *)v143 + 134) = 0;
            }
            else
            {
              v143 = (unsigned __int8 *)operator new(0x3A0u);
              *v143 = 0;
              *((_QWORD *)v143 + 12) = v143 + 112;
              *((_QWORD *)v143 + 16) = v143 + 144;
              *((_QWORD *)v143 + 20) = v143 + 176;
              *((_QWORD *)v143 + 24) = v143 + 208;
              *((_QWORD *)v143 + 28) = v143 + 240;
              *((_QWORD *)v143 + 32) = v143 + 272;
              *((_QWORD *)v143 + 36) = v143 + 304;
              *((_QWORD *)v143 + 40) = v143 + 336;
              *((_QWORD *)v143 + 44) = v143 + 368;
              *((_QWORD *)v143 + 48) = v143 + 400;
              *((_QWORD *)v143 + 52) = v143 + 432;
              *((_QWORD *)v143 + 13) = 0;
              v143[112] = 0;
              *((_QWORD *)v143 + 17) = 0;
              v143[144] = 0;
              *((_QWORD *)v143 + 21) = 0;
              v143[176] = 0;
              *((_QWORD *)v143 + 25) = 0;
              v143[208] = 0;
              *((_QWORD *)v143 + 29) = 0;
              v143[240] = 0;
              *((_QWORD *)v143 + 33) = 0;
              v143[272] = 0;
              *((_QWORD *)v143 + 37) = 0;
              v143[304] = 0;
              *((_QWORD *)v143 + 41) = 0;
              v143[336] = 0;
              *((_QWORD *)v143 + 45) = 0;
              v143[368] = 0;
              *((_QWORD *)v143 + 49) = 0;
              v143[400] = 0;
              *((_QWORD *)v143 + 53) = 0x800000000LL;
              *((_QWORD *)v143 + 66) = v143 + 544;
              *((_QWORD *)v143 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v142 + 8) = v143;
          }
          v143[*v143 + 1] = 8;
          v144 = *(_BYTE **)(v142 + 8);
          v145 = (unsigned __int8)*v144;
          *v144 = v145 + 1;
          *(_QWORD *)&v144[8 * v145 + 16] = v92;
        }
      }
      goto LABEL_118;
    }
    if ( (*(_QWORD *)&byte_8[v168 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
      && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v168 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | *(_QWORD *)&byte_8[v168 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
        & 7)
       - 2 <= 2 )
    {
      if ( (*(_QWORD *)v10 & 0x80000LL) != 0 )
      {
        v89 = *(_QWORD *)(v10 + 32);
        if ( v89 )
        {
          v160 = *(_QWORD *)(v10 + 40);
          a5 = _mm_loadh_ps((const double *)&v160);
          v171 = a5;
          v90 = *(_QWORD *)(v89 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v90 )
          {
            v171.m128_u64[0] = v90;
            v91 = 0;
            while ( (*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v91 = 1;
              v90 = *(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v91 )
              v171.m128_u64[0] = v90;
          }
          v162 = (unsigned __int8 **)&v171;
          v42 = (unsigned int)sub_E90530((__int64 *)&v171);
        }
        else
        {
          v42 = 0;
          v162 = (unsigned __int8 **)&v171;
        }
      }
      else
      {
        v42 = *(unsigned int *)(v10 + 4);
        v162 = (unsigned __int8 **)&v171;
      }
      v43 = v162;
      sub_168B9F0(v162, a1, v42, 3014, 0);
      v44 = sub_1605D30((__int64)v43, &v168);
      v170 = sub_EEC8C0(v15, (__int64)&v168, *(double *)a5.m128_u64);
      sub_1587DB0(v44, &v170);
      sub_15F7200(v43);
    }
    else
    {
      if ( (_BYTE)v6 )
      {
        v6 = 0;
        *(_QWORD *)(a3 + 8) = v168;
        return v6;
      }
      v80 = *(_BYTE *)(a3 + 2);
      v171.m128_u64[1] = 0;
      v173 = 0;
      v171.m128_i32[0] = 1;
      v81 = *(_QWORD *)(a3 + 8 * (((v80 & 8) != 0) + 1LL) + 32);
      v82 = sub_A73320(v9, v168);
      v83 = *a1;
      v172 = v82;
      v174 = nullptr;
      v84 = sub_1A24E20(v83, &v171, 0, v81, 0, 0);
      if ( v84 != 1 )
      {
        *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32) = v84 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(a3 + 8) = v9[2340];
        return v6;
      }
    }
    return 1;
  }
  if ( (((*(_WORD *)(v70 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
    goto LABEL_75;
LABEL_72:
  v72 = sub_F58060(v69);
  if ( v72 )
  {
    v73 = v168;
LABEL_74:
    v69 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_75;
  }
  if ( (*(_QWORD *)v10 & 0x80000LL) != 0 )
  {
    v96 = *(_QWORD *)(v10 + 32);
    if ( v96 )
    {
      v160 = *(_QWORD *)(v10 + 40);
      a5 = _mm_loadh_ps((const double *)&v160);
      v171 = a5;
      v97 = *(_QWORD *)(v96 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v97 )
      {
        v171.m128_u64[0] = v97;
        while ( (*(_QWORD *)(v97 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v72 = 1;
          v97 = *(_QWORD *)(v97 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v72 )
          v171.m128_u64[0] = v97;
      }
      v162 = (unsigned __int8 **)&v171;
      v98 = (unsigned int)sub_E90530((__int64 *)&v171);
    }
    else
    {
      v98 = 0;
      v162 = (unsigned __int8 **)&v171;
    }
  }
  else
  {
    v98 = *(unsigned int *)(v10 + 4);
    v162 = (unsigned __int8 **)&v171;
  }
  v99 = v162;
  sub_168B9F0(v162, a1, v98, 3123, 0);
  v169 = *(_QWORD *)(v15 + 8);
  v100 = sub_162B6D0((__int64)v99, &v169);
  v167 = 0;
  v101 = sub_1587D10(v100, &v167);
  v6 = 1;
  v170 = sub_EEC8C0(v15, (__int64)&v167, *(double *)a5.m128_u64);
  sub_1587DB0(v101, &v170);
  sub_15F7200(v99);
  return v6;
}
