__int64 __fastcall sub_1BDBDD0(_QWORD *a1, __int64 a2, __int64 a3, char a4, int a5, char a6)
{
  unsigned int v10; // r9d
  _QWORD *v12; // r15
  _QWORD *v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r11
  bool v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // r11
  char *v24; // r10
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdi
  bool v39; // al
  char v40; // dl
  _QWORD *v41; // rax
  _QWORD *v42; // rdi
  bool v43; // cc
  char v44; // dl
  __m128 v45; // xmm0
  unsigned __int8 v46; // al
  __int64 v47; // rsi
  int v48; // r8d
  int v49; // ecx
  int v50; // eax
  unsigned __int16 v51; // r9
  int v52; // edi
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  __m128i *v55; // rcx
  unsigned __int64 v56; // rdx
  bool v57; // al
  char v58; // al
  bool v59; // r14
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  char v65; // r9
  __int64 *v66; // r14
  __int64 **v67; // rax
  __int64 *v68; // r15
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r10
  __int64 **v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 *v80; // rbp
  unsigned __int64 v81; // r13
  __int64 *v82; // rax
  __int64 *v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rbp
  int v86; // r13d
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  bool v111; // al
  void *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rax
  _QWORD *v123; // rdx
  bool v124; // al
  bool v125; // al
  char v126; // al
  char v127; // al
  bool v128; // al
  unsigned __int64 v129; // rax
  __int64 *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 *v133; // rax
  __int64 *v134; // rax
  unsigned __int64 v135; // rax
  __int64 *v136; // rax
  __int64 *v137; // rax
  __int64 v138; // rdx
  int v139; // eax
  unsigned __int64 v140; // r8
  unsigned __int64 v141; // rax
  char v142; // al
  char v143; // al
  char v144; // al
  unsigned __int64 v145; // rdx
  char v146; // al
  char v147; // al
  unsigned __int64 v148; // [rsp-8h] [rbp-240h]
  __int64 v149; // [rsp+8h] [rbp-230h] BYREF
  char *v150; // [rsp+10h] [rbp-228h]
  char *v151; // [rsp+18h] [rbp-220h]
  __int64 v152; // [rsp+20h] [rbp-218h]
  __int64 v153; // [rsp+28h] [rbp-210h]
  __int64 v154; // [rsp+30h] [rbp-208h]
  void **p_ptr; // [rsp+38h] [rbp-200h]
  __int64 v156; // [rsp+40h] [rbp-1F8h]
  _BYTE v157[4]; // [rsp+48h] [rbp-1F0h] BYREF
  char v158; // [rsp+4Ch] [rbp-1ECh] BYREF
  _QWORD *v159; // [rsp+50h] [rbp-1E8h] BYREF
  _QWORD *v160[3]; // [rsp+58h] [rbp-1E0h] BYREF
  __m128 v161; // [rsp+70h] [rbp-1C8h]
  _QWORD **v162; // [rsp+80h] [rbp-1B8h]
  __m128 v163; // [rsp+90h] [rbp-1A8h] BYREF
  _QWORD **v164; // [rsp+A0h] [rbp-198h]
  _QWORD *v165; // [rsp+A8h] [rbp-190h]
  _QWORD v166[6]; // [rsp+B0h] [rbp-188h] BYREF
  void *v167[2]; // [rsp+E0h] [rbp-158h] BYREF
  char v168; // [rsp+F0h] [rbp-148h] BYREF
  void *ptr; // [rsp+170h] [rbp-C8h] BYREF
  __int64 v170; // [rsp+178h] [rbp-C0h]
  __int64 v171; // [rsp+180h] [rbp-B8h] BYREF
  int v172; // [rsp+188h] [rbp-B0h]

  v158 = a4;
  v157[0] = a6;
  if ( (unsigned __int8)sub_B81C90(a2) || (unsigned __int8)sub_B7E110(a2) )
    return 0;
  v12 = (_QWORD *)sub_B77A30(a3);
  v13 = (_QWORD *)sub_B77A30(a2);
  if ( (v12 == nullptr) != (v13 == nullptr) )
    return 1;
  v14 = *(_QWORD *)&byte_8[*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v14 | (unsigned __int8)*(_QWORD *)(a3 + 48)) & 7;
  v16 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  v17 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 25 )
    return 0;
  v18 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) == 25 )
    return 0;
  if ( v15 != (v16 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v16 | (unsigned __int8)*(_QWORD *)(a2 + 48)) & 7)
    && (unsigned __int8)BYTE3(*(_QWORD *)(v18 + 16)) >> 7 != (unsigned __int8)BYTE3(*(_QWORD *)(v17 + 16)) >> 7 )
  {
    return 1;
  }
  v150 = *(char **)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v149 = v18;
  v19 = sub_B750C0(a2);
  v23 = (_QWORD *)v149;
  v24 = v150;
  if ( v19 || (v128 = sub_B750C0(a3), v23 = (_QWORD *)v149, v24 = v150, v128) )
  {
    v25 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v25 = *(_QWORD *)(v25 + 8);
    v26 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v26 = (_QWORD *)v26[1];
    v151 = v24;
    v150 = (char *)v23;
    v149 = (__int64)v26;
    if ( !v26 )
      return 1;
    v152 = sub_B91570(v25, a2, (__int64)v26, v20, v21, v22);
    v30 = sub_B91570(v149, a2, v149, v27, v28, v29);
    v23 = v150;
    v24 = v151;
    if ( v152 != v30 )
      return 1;
  }
  if ( v13 )
  {
    v31 = v12[7];
    v32 = v13[7];
    v152 = (__int64)v24;
    v151 = (char *)v23;
    ptr = v13;
    v170 = 0;
    v171 = 0;
    v172 = 0;
    LOBYTE(v150) = sub_1CD38B0((_DWORD)a1, (unsigned int)&ptr, v32, (_DWORD)v12, v31, 0, 0, 0);
    v149 = sub_17A1840(a2, (__int64)&ptr, v33, v34);
    v37 = sub_17A1840(a3, (__int64)&ptr, v35, v36);
    v38 = v13[7];
    v153 = v37;
    v154 = *(_QWORD *)&byte_8[v149 & 0xFFFFFFFFFFFFFFF0LL];
    p_ptr = *(void ***)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL];
    v39 = sub_BBDA40(v38);
    v23 = v151;
    v24 = (char *)v152;
    if ( !v39 )
    {
      v39 = sub_BBDA40(v12[7]);
      v24 = (char *)v152;
      v23 = v151;
    }
    if ( !v158 )
    {
      if ( ((unsigned __int64)p_ptr & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)p_ptr | (unsigned __int8)v153) & 7) != (v154 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v154 | (unsigned __int8)v149) & 7) )
        return 1;
      goto LABEL_22;
    }
    if ( v39 )
    {
LABEL_22:
      if ( (unsigned __int8)v150 == 1 )
        goto LABEL_23;
      return 1;
    }
  }
  else
  {
    v13 = (_QWORD *)a2;
    v12 = (_QWORD *)a3;
  }
LABEL_23:
  v40 = *(_BYTE *)(a3 + 28);
  v41 = nullptr;
  v42 = nullptr;
  v149 = (__int64)&v159;
  v160[1] = a1;
  v43 = (v40 & 0x7Fu) - 35 <= 3;
  v44 = *(_BYTE *)(a2 + 28);
  v165 = a1;
  if ( v43 )
    v42 = (_QWORD *)a3;
  v161 = _mm_loadh_ps((const double *)&v149);
  v149 = (__int64)&v159;
  v159 = v42;
  if ( (v44 & 0x7Fu) - 35 <= 3 )
    v41 = (_QWORD *)a2;
  v160[2] = v160;
  v162 = v160;
  v45 = _mm_loadh_ps((const double *)&v149);
  v164 = v160;
  v166[3] = v160;
  v160[0] = v41;
  v163 = v45;
  v166[0] = a1;
  v166[1] = v157;
  v166[2] = &v159;
  v166[4] = &v158;
  if ( v42 )
  {
    v150 = v24;
    v149 = (__int64)v23;
    v46 = sub_B981D0(v42, (__int64)v157);
    v23 = (_QWORD *)v149;
    v24 = v150;
    v47 = v46;
    v41 = v160[0];
    v48 = v47;
  }
  else
  {
    v48 = 0;
    v47 = 0;
  }
  if ( v41 )
  {
    LODWORD(v152) = v48;
    v151 = v24;
    v150 = (char *)v23;
    LODWORD(v149) = v47;
    LOBYTE(v50) = sub_B981D0(v41, v47);
    LODWORD(v47) = v149;
    v23 = v150;
    v49 = (unsigned __int8)v50;
    v24 = v151;
    v48 = v152;
    v50 = (unsigned __int8)v50;
  }
  else
  {
    v50 = 0;
    v49 = 0;
  }
  v51 = *((_WORD *)v23 + 11);
  v52 = *((unsigned __int16 *)v24 + 11);
  if ( v52 - v48 != v51 - v50 )
    return 1;
  v53 = (unsigned __int16)v52 - (__int64)(int)v47;
  v54 = (__int64)&v24[8 * (int)v47 + 48];
  LOBYTE(v10) = sub_1BD3E10(
                  (__int64)a1,
                  (__int64 *)v54,
                  v53,
                  (unsigned __int64)&v23[v49 + 6],
                  v51 - (__int64)v49,
                  nullptr,
                  0);
  v56 = v148;
  if ( !(_BYTE)v10 )
    return 1;
  if ( v159 )
  {
    if ( !v160[0] )
    {
      if ( v157[0] )
        goto LABEL_40;
      goto LABEL_148;
    }
    LOBYTE(v149) = v10;
    v57 = sub_B979F0(v159);
    LOBYTE(v10) = v149;
    if ( !v57 )
    {
      v111 = sub_B979F0(v160[0]);
      LOBYTE(v10) = v149;
      LOBYTE(v150) = v111;
      if ( !v111 )
      {
        LOBYTE(v153) = v149;
        v151 = (char *)v160[0];
        v149 = (__int64)v159;
        v167[0] = (void *)sub_B987D0(v160[0], v54);
        v112 = (void *)sub_B987D0((_QWORD *)v149, v54);
        LOBYTE(v10) = v153;
        ptr = v112;
        v152 = *(_QWORD *)(v149 + 48);
        v115 = *(_QWORD *)(v152 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v115 + 16) != 26 )
        {
          v116 = *(_QWORD *)(v152 & 0xFFFFFFFFFFFFFFF0LL);
          LOBYTE(v152) = v153;
          v115 = sub_F63050(v116, v54, v113, v114);
          LOBYTE(v10) = v152;
        }
        LOBYTE(v152) = 0;
        if ( (*(_BYTE *)(v115 + 18) & 0x18) == 0 )
        {
          LOBYTE(v153) = v10;
          v147 = sub_B981D0((_QWORD *)v149, v54);
          LOBYTE(v10) = v153;
          LOBYTE(v152) = v147 ^ 1;
        }
        v149 = *((_QWORD *)v151 + 6);
        v117 = *(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v117 + 16) != 26 )
        {
          v118 = *(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL);
          LOBYTE(v149) = v10;
          v117 = sub_F63050(v118, v54, v113, v114);
          LOBYTE(v10) = v149;
        }
        if ( (*(_BYTE *)(v117 + 18) & 0x18) == 0 )
        {
          LOBYTE(v149) = v10;
          v146 = sub_B981D0(v151, v54);
          LOBYTE(v10) = v149;
          LOBYTE(v150) = v146 ^ 1;
        }
        v119 = (unsigned __int8)v152;
        v55 = (__m128i *)&v163;
        if ( (_BYTE)v150 == (_BYTE)v152
          || (LOBYTE(v150) = v10,
              v149 = sub_C1BEF0((__int64)v167, (unsigned __int8)v152, v113, (__int64)&v163),
              v122 = sub_C1BEF0((__int64)&ptr, v119, v120, v121),
              v123 = (_QWORD *)v149,
              v54 = v122,
              v149 = (__int64)&v163,
              v124 = sub_1BCC530((__int64)&v163, v122, (__int64)v123, (__int64)&v163),
              v55 = (__m128i *)v149,
              LOBYTE(v10) = (_BYTE)v150,
              !v124) )
        {
          v54 = (__int64)ptr;
          LOBYTE(v149) = v10;
          v125 = sub_1BCC530((__int64)v55, (__int64)ptr, (__int64)v167[0], (__int64)v55);
          LOBYTE(v10) = v149;
          if ( !v125 )
          {
            if ( (unsigned __int8)sub_1BDBCD0((__int64)v166, v54, v56, (__int64)v55) )
              return 1;
            if ( !v157[0] )
              return 1;
            v126 = sub_B981D0(v160[0], v54);
            LOBYTE(v10) = v149;
            if ( !v126 )
            {
              v127 = sub_B981D0(v159, v54);
              LOBYTE(v10) = v149;
              if ( !v127 )
                return 1;
            }
          }
        }
      }
    }
  }
  if ( v157[0] )
    goto LABEL_37;
LABEL_148:
  LOBYTE(v149) = v10;
  v139 = sub_B77D20(a2);
  LOBYTE(v10) = v149;
  if ( v139 == 2 )
    goto LABEL_37;
  v56 = *(_QWORD *)(a2 + 56);
  v55 = (__m128i *)((*(__int64 *)(a3 + 56) >> 2) & 1);
  if ( (v56 & 4) == 0 )
  {
    if ( !v55 )
      goto LABEL_37;
    v140 = 0;
    v54 = 0;
    goto LABEL_152;
  }
  v145 = v56 & 0xFFFFFFFFFFFFFFF8LL;
  v140 = *(_QWORD *)(v145 + 40);
  v54 = *(unsigned int *)(v145 + 48);
  if ( v55 )
  {
LABEL_152:
    v141 = *(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    v56 = *(_QWORD *)(v141 + 40);
    v55 = (__m128i *)(v141 + 40);
    goto LABEL_153;
  }
  v56 = 0;
  v55 = &xmmword_23DED40;
LABEL_153:
  if ( (v140 == 0) != (v56 == 0) || v55->m128i_i32[2] != (_DWORD)v54 )
    return 1;
  if ( v140 )
  {
    v54 = (__int64)v12;
    ptr = v13;
    v170 = 0;
    v171 = 0;
    v172 = 0;
    v142 = sub_1743870((__int64)a1, v12, v56, &ptr, v140);
    v10 = (unsigned __int8)v149;
    if ( !v142 )
      return v10;
  }
LABEL_37:
  if ( v160[0] )
  {
    if ( v159 )
    {
      LOBYTE(v149) = v10;
      v58 = sub_B98200(v159, v54);
      LOBYTE(v10) = v149;
      if ( v58 )
      {
        v143 = sub_B98200(v160[0], v54);
        LOBYTE(v10) = v149;
        if ( v143 )
        {
          v144 = sub_1BDBCD0((__int64)v166, v54, v56, (__int64)v55);
          LOBYTE(v10) = v149;
          if ( v144 )
            return 1;
        }
      }
    }
  }
LABEL_40:
  LOBYTE(v149) = v10;
  v59 = sub_1BCA460(a2, v54, v56, (__int64)v55);
  if ( v59 != sub_1BCA460(a3, v54, v60, v61) )
    return 1;
  v65 = v149;
  v66 = nullptr;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v67 = (__int64 **)sub_B8C3D0(a2, v54, v62, v63, v64, (unsigned __int8)v149);
    v65 = v149;
    v66 = *v67;
  }
  LOBYTE(v149) = v65;
  v68 = nullptr;
  v69 = (_QWORD *)sub_9C88C0(a2);
  v73 = (unsigned __int8)v149;
  v74 = (__int64)v69;
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    LOBYTE(v150) = v149;
    v149 = (__int64)v69;
    v75 = (__int64 **)sub_B8C3D0(a3, v54, v70, v71, v72, v73);
    LOBYTE(v73) = (_BYTE)v150;
    v74 = v149;
    v68 = *v75;
  }
  v156 = v74;
  LOBYTE(v151) = v73;
  v76 = sub_9C88C0(a3);
  v152 = a2;
  v153 = a3;
  v149 = (__int64)v167;
  v80 = (__int64 *)v76;
  v150 = &v168;
  p_ptr = &ptr;
  LODWORD(v154) = a5;
  v81 = v156;
  while ( 1 )
  {
    if ( (unsigned __int64)v66 >= v81 )
    {
      if ( v66 != (__int64 *)v81 )
      {
        v129 = v81;
        if ( *(_WORD *)(*(_QWORD *)v81 + 36LL) == 206 )
          goto LABEL_101;
        while ( 1 )
        {
          v129 += 8LL;
          if ( v66 == (__int64 *)v129 )
            break;
          if ( *(_WORD *)(*(_QWORD *)v129 + 36LL) == 206 )
            goto LABEL_130;
        }
      }
    }
    else
    {
      v82 = v66;
      while ( *(_WORD *)(*v82 + 36) != 206 )
      {
        if ( (__int64 *)v81 == ++v82 )
          goto LABEL_50;
      }
      if ( (__int64 *)v81 != v82 )
      {
LABEL_137:
        v136 = v66;
        while ( *(_WORD *)(*v136 + 36) != 206 )
        {
          if ( (__int64 *)v81 == ++v136 )
            return (unsigned __int8)v151;
        }
        if ( (__int64 *)v81 == v136 )
          return (unsigned __int8)v151;
        goto LABEL_101;
      }
    }
LABEL_50:
    if ( v80 <= v68 )
      break;
    v83 = v68;
    while ( *(_WORD *)(*v83 + 36) != 206 )
    {
      if ( v80 == ++v83 )
        goto LABEL_54;
    }
    if ( v80 == v83 )
      goto LABEL_54;
LABEL_127:
    if ( (unsigned __int64)v66 < v81 )
      goto LABEL_137;
    if ( v66 == (__int64 *)v81 )
      return (unsigned __int8)v151;
    if ( *(_WORD *)(*(_QWORD *)v81 + 36LL) != 206 )
    {
LABEL_130:
      v135 = v81;
      do
      {
        v135 += 8LL;
        if ( v66 == (__int64 *)v135 )
          return (unsigned __int8)v151;
      }
      while ( *(_WORD *)(*(_QWORD *)v135 + 36LL) != 206 );
    }
LABEL_101:
    if ( v80 <= v68 )
    {
      if ( v80 == v68 )
        return (unsigned __int8)v151;
      v134 = v80;
      if ( *(_WORD *)(*v80 + 36) == 206 )
        goto LABEL_107;
      while ( 1 )
      {
        if ( ++v134 == v68 )
          return (unsigned __int8)v151;
        if ( *(_WORD *)(*v134 + 36) == 206 )
          goto LABEL_107;
      }
    }
    v130 = v68;
    while ( *(_WORD *)(*v130 + 36) != 206 )
    {
      if ( v80 == ++v130 )
        return (unsigned __int8)v151;
    }
    if ( v80 == v130 )
      return (unsigned __int8)v151;
LABEL_107:
    v167[1] = (void *)0x2000000000LL;
    v167[0] = v150;
    ptr = &v171;
    v131 = *v66;
    v170 = 0x2000000000LL;
    if ( *(_WORD *)(v131 + 36) != 206 )
    {
      do
        v131 = *++v66;
      while ( *(_WORD *)(*v66 + 36) != 206 );
    }
    sub_F1A490(*(_QWORD *)(v131 + 40), v149, a1[31], 1, 0);
    v132 = *v68;
    if ( *(_WORD *)(*v68 + 36) != 206 )
    {
      v133 = v68 + 1;
      do
      {
        v132 = *v133;
        v68 = v133++;
      }
      while ( *(_WORD *)(v132 + 36) != 206 );
    }
    sub_F1A490(*(_QWORD *)(v132 + 40), (__int64)&ptr, a1[31], 1, 0);
    if ( !(unsigned __int8)sub_2222ED0(v149, &ptr) )
    {
      v10 = (unsigned __int8)v151;
      if ( ptr != p_ptr + 2 )
      {
        LOBYTE(v150) = (_BYTE)v151;
        free(ptr);
        v10 = (unsigned __int8)v150;
      }
      if ( v167[0] != (void *)(v149 + 16) )
      {
        LOBYTE(v149) = v10;
        free(v167[0]);
        return (unsigned __int8)v149;
      }
      return v10;
    }
    if ( ptr != &v171 )
      free(ptr);
    if ( v167[0] != v150 )
      free(v167[0]);
    ++v66;
    ++v68;
  }
  if ( v80 == v68 )
    goto LABEL_54;
  if ( *(_WORD *)(*v80 + 36) == 206 )
    goto LABEL_127;
  v137 = v80 + 1;
  while ( v68 != v137 )
  {
    v138 = *v137++;
    if ( *(_WORD *)(v138 + 36) == 206 )
      goto LABEL_127;
  }
LABEL_54:
  v84 = v152;
  v85 = v153;
  if ( (*(_BYTE *)(a1[29] + 60LL) & 0x10) == 0 )
    return 0;
  if ( !(_BYTE)v154 )
    return 0;
  if ( (*(_BYTE *)(v152 + 28) & 0x7F) == 0x24 )
    return 0;
  v86 = sub_178EA20(a1[83], v152, nullptr, v77, v78, v79);
  if ( v86 == (unsigned int)sub_178EA20(a1[83], v85, nullptr, v87, v88, v89) || v86 == 4 )
    return 0;
  if ( !v159 )
    return 1;
  if ( !v160[0] )
    return 1;
  v90 = (*(__int64 (**)(void))(*v159 + 32LL))();
  v94 = *(_QWORD *)(v90 + 80) >> 16;
  if ( (*(_QWORD *)(v90 + 80) & 0x40000LL) == 0 )
  {
    LOBYTE(v94) = WORD1(*(_QWORD *)(v90 + 80)) & 8;
    if ( !(_BYTE)v94 && !(unsigned int)sub_B984E0(v90) )
      return 1;
  }
  if ( (*((_BYTE *)v159 + 84) & 3) == 0 )
    return 1;
  if ( (*((_BYTE *)v160[0] + 84) & 3) != 0 )
    return 1;
  v95 = sub_17A7BA0(v85, v85, v94, v91, v92, v93);
  if ( v95 )
  {
    if ( (*(_BYTE *)(v95 + 38) & 4) == 0 )
      return 1;
  }
  v100 = sub_17A7AE0(v85, v85, v96, v97, v98, v99);
  if ( v100 )
  {
    if ( (*(_BYTE *)(v100 + 38) & 4) == 0 )
      return 1;
  }
  v105 = sub_17A7BA0(v84, v85, v101, v102, v103, v104);
  if ( v105 )
  {
    if ( (*(_BYTE *)(v105 + 38) & 4) == 0 )
      return 1;
  }
  v110 = sub_17A7AE0(v84, v85, v106, v107, v108, v109);
  if ( !v110 )
    return 0;
  return ((*(_BYTE *)(v110 + 38) >> 2) ^ 1) & 1;
}
