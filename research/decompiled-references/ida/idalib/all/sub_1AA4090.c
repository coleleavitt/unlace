__int64 __fastcall sub_1AA4090(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int a5,
        _QWORD *a6,
        __m128 a7,
        __m128 a8,
        int a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r15
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // eax
  void *v35; // rdi
  _DWORD *v36; // rdi
  __int64 v37; // r14
  _WORD *v38; // rax
  _QWORD *v39; // r15
  __int64 v40; // r12
  __int16 v41; // ax
  unsigned __int8 v42; // al
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rbp
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int8 v51; // r12
  _DWORD *v52; // r13
  int v53; // r12d
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rax
  unsigned int v66; // edx
  char v67; // cl
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r12d
  unsigned int v73; // eax
  __int64 v74; // r12
  __int64 v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned int v82; // eax
  __int64 v83; // r12
  unsigned int v84; // eax
  unsigned __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned __int64 v90; // rax
  unsigned int v91; // ebx
  unsigned __int64 v92; // rax
  unsigned int v93; // eax
  unsigned __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  unsigned __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  unsigned int v102; // eax
  __int64 v103; // r12
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  void *v108; // rax
  _QWORD *v109; // rax
  unsigned int v110; // eax
  bool v113; // [rsp+20h] [rbp-1D8h]
  __int64 v114; // [rsp+28h] [rbp-1D0h]
  __int64 v115; // [rsp+28h] [rbp-1D0h]
  __int64 v116; // [rsp+30h] [rbp-1C8h]
  char v117; // [rsp+30h] [rbp-1C8h]
  char v118; // [rsp+30h] [rbp-1C8h]
  __int64 v119; // [rsp+38h] [rbp-1C0h]
  __int64 v120; // [rsp+38h] [rbp-1C0h]
  unsigned int v121; // [rsp+40h] [rbp-1B8h]
  __int64 v122; // [rsp+40h] [rbp-1B8h]
  _QWORD *v123; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v124; // [rsp+58h] [rbp-1A0h] BYREF
  void *v125; // [rsp+60h] [rbp-198h] BYREF
  unsigned int v126; // [rsp+68h] [rbp-190h]
  char v127; // [rsp+6Ch] [rbp-18Ch]
  void *v128[2]; // [rsp+70h] [rbp-188h] BYREF
  __int64 v129; // [rsp+80h] [rbp-178h]
  void *v130; // [rsp+90h] [rbp-168h] BYREF
  unsigned int v131; // [rsp+98h] [rbp-160h]
  char v132; // [rsp+9Ch] [rbp-15Ch]
  char v133; // [rsp+A0h] [rbp-158h]
  void *v134; // [rsp+B0h] [rbp-148h] BYREF
  unsigned int v135; // [rsp+B8h] [rbp-140h]
  char v136; // [rsp+BCh] [rbp-13Ch]
  char v137; // [rsp+C0h] [rbp-138h]
  void *v138; // [rsp+D0h] [rbp-128h] BYREF
  unsigned int v139; // [rsp+D8h] [rbp-120h]
  char v140; // [rsp+DCh] [rbp-11Ch]
  __int64 v141; // [rsp+E0h] [rbp-118h] BYREF
  void *v142; // [rsp+F0h] [rbp-108h] BYREF
  unsigned int v143; // [rsp+F8h] [rbp-100h]
  char v144; // [rsp+FCh] [rbp-FCh]
  _BYTE v145[16]; // [rsp+100h] [rbp-F8h] BYREF
  void *v146; // [rsp+110h] [rbp-E8h] BYREF
  unsigned int v147; // [rsp+118h] [rbp-E0h]
  _BYTE v148[16]; // [rsp+120h] [rbp-D8h] BYREF
  void *v149; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v150; // [rsp+138h] [rbp-C0h]
  _QWORD **v151; // [rsp+140h] [rbp-B8h] BYREF
  void *v152; // [rsp+148h] [rbp-B0h]
  unsigned __int8 *v153; // [rsp+150h] [rbp-A8h] BYREF
  char v154; // [rsp+1A8h] [rbp-50h]
  unsigned int v155; // [rsp+1B0h] [rbp-48h]
  char v156; // [rsp+1B4h] [rbp-44h]

  v123 = (_QWORD *)a2;
  v16 = (_QWORD *)sub_168B6C0((__int64)a1);
  v17 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 13 )
  {
    v18 = (*(_WORD *)(v17 + 18) >> 3) & 0x1FF;
    if ( v18 > 0x1F1u && v18 != 506 )
    {
      v49 = sub_1907C70(*a1, (_QWORD *)a2, (__m128i)a7, a8, v12, v13, v14, v15);
      if ( v49 == 1 )
        return 1;
      v123 = (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a4 )
  {
    v19 = *(_QWORD *)(a4[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v19 + 16) == 13 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      v60 = sub_1907C70(*a1, a4, (__m128i)a7, a8, v12, v13, v14, v15);
      if ( v60 == 1 )
        return 1;
      a2 = v60 & 0xFFFFFFFFFFFFFFFELL;
      v65 = sub_19146F0(*a1, (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFELL), v61, v62, v63, v64, a7, a8);
      if ( v65 == 1 )
        return 1;
      a4 = (_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a6 )
  {
    v20 = *(_QWORD *)(a6[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FFu) > 0x1F2 )
    {
      v54 = sub_1907C70(*a1, a6, (__m128i)a7, a8, v12, v13, v14, v15);
      if ( v54 == 1 )
        return 1;
      a2 = v54 & 0xFFFFFFFFFFFFFFFELL;
      v59 = sub_19146F0(*a1, (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFELL), v55, v56, v57, v58, a7, a8);
      if ( v59 == 1 )
        return 1;
      a6 = (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  v21 = v123;
  v124 = 0;
  v26 = sub_C03930((unsigned __int64)v123, a2);
  v27 = (__int64 *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_DWORD *)v123 & 0x10000) != 0 )
    goto LABEL_10;
  v43 = *v27;
  v44 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
  {
    v21 = v123;
    v124 = sub_F68450(
             v43,
             a2,
             v44,
             *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7,
             v24);
  }
  else
  {
    v45 = (unsigned int)v44 & 0xFFFFFFFB;
    if ( (v44 & 0xFB) != 2 )
    {
      v75 = (unsigned int)(v44 - 3);
      if ( (unsigned __int8)v75 > 2u )
      {
        v110 = sub_C00A40((unsigned __int64)v123, a2, v75, v45, v24);
        v40 = 1;
        sub_168B9F0((__int64)&v149, a1, v110, 0xB7Au, 0);
        v146 = (void *)sub_EEC8C0((unsigned __int64)v123, (__int64)a1, *(double *)a7.m128_u64);
        sub_1587DB0((__int64)&v149, (__int64 *)&v146);
        sub_15F7200(&v149);
        return v40;
      }
    }
    a2 = *(unsigned __int8 *)(v43 + 16);
    if ( (unsigned __int8)(a2 - 2) > 4u )
    {
      v43 = sub_F63050(*v27, a2, (unsigned int)(a2 - 2), v45);
      v21 = v123;
    }
    v124 = *(_QWORD *)(v43 + 32);
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v124 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    v46 = sub_C00A40((unsigned __int64)v21, a2, v124, v45, v24);
    sub_168B9F0((__int64)&v149, a1, v46, 0xB75u, 0);
    v47 = sub_1605D30((__int64)&v149, &v124);
    v146 = (void *)sub_EEC8C0((unsigned __int64)v123, (__int64)&v124, *(double *)a7.m128_u64);
    sub_1587DB0(v47, (__int64 *)&v146);
    sub_15F7200(&v149);
    return 1;
  }
  v114 = *a1;
  v76 = sub_C00A40((unsigned __int64)v21, a2, v124, v45, v24);
  LODWORD(v150) = 2934;
  v149 = off_2BC64D8;
  v151 = &v123;
  if ( (unsigned __int8)sub_1E63C20(v114, v76, v124, 1, &v149) )
    return 1;
  a2 = (unsigned __int64)v123;
  v77 = *(_QWORD *)(v123[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v77 + 16) != 13 || ((*(_WORD *)(v77 + 18) >> 3) & 0x1FF) != 0x1FA )
  {
    v78 = sub_19179A0(*a1, v123, 1u, v23, v24, v25, a7, a8);
    if ( v78 != 1 )
    {
      v123 = (_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_10;
    }
    return 1;
  }
LABEL_10:
  if ( a4 && (*(_DWORD *)a4 & 0x10000) == 0 )
  {
    v93 = sub_C00A40((unsigned __int64)a4, a2, v22, v23, v24);
    v94 = sub_1AA2500(a1, 20, 51, v93, (__int64)a4);
    if ( v94 <= 1
      || (a2 = v94 & 0xFFFFFFFFFFFFFFFELL,
          v99 = sub_19146F0(*a1, (_QWORD *)(v94 & 0xFFFFFFFFFFFFFFFELL), v95, v96, v97, v98, a7, a8),
          v99 <= 1) )
    {
      a2 = (unsigned __int64)a4;
      a4 = (_QWORD *)sub_1AA0AA0(a1, (unsigned __int64)a4, v16[2340], *(double *)a7.m128_u64);
    }
    else
    {
      a4 = (_QWORD *)(v99 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  if ( a6 )
  {
    if ( (*(_DWORD *)a6 & 0x10000) != 0 )
      goto LABEL_14;
    v84 = sub_C00A40((unsigned __int64)a6, a2, v22, v23, v24);
    v85 = sub_1AA2500(a1, 20, 51, v84, (__int64)a6);
    if ( v85 > 1 )
    {
      v90 = sub_19146F0(*a1, (_QWORD *)(v85 & 0xFFFFFFFFFFFFFFFELL), v86, v87, v88, v89, a7, a8);
      if ( v90 > 1 )
      {
        a6 = (_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_14;
      }
    }
    a6 = (_QWORD *)sub_1AA0AA0(a1, (unsigned __int64)a6, v16[2340], *(double *)a7.m128_u64);
    if ( a6 )
      goto LABEL_14;
  }
  if ( !v27 )
  {
    v113 = 0;
LABEL_147:
    v91 = a3;
    if ( a5 )
      v91 = a5;
    sub_168B9F0((__int64)&v149, a1, v91, 0xB78u, 0);
    if ( v154 )
    {
      sub_AE9DF0(&v153, v113, 2u);
    }
    else if ( v156 )
    {
      v104 = sub_168B9E0(&v149);
      v108 = v151;
      if ( v151 )
      {
        v115 = v104;
        v108 = (void *)((__int64 (__fastcall *)(_QWORD **))(*v151)[4])(v151);
        v104 = v115;
      }
      v146 = v108;
      v109 = sub_1587BC0(v104, (__int64 *)&v146, v104, v105, v106, v107);
      sub_AE9DF0((unsigned __int8 **)(*v109 + 32LL * v155 + 8), v113, 2u);
    }
    sub_15F7200(&v149);
    v92 = sub_18C4330(*a1, v91, 0, nullptr, 0, v16[2340]);
    a6 = (_QWORD *)(v92 & 0xFFFFFFFFFFFFFFFELL);
    if ( v92 <= 1 )
      a6 = nullptr;
LABEL_14:
    v129 = 0;
    *(_OWORD *)v128 = 0;
    if ( !v27 )
      goto LABEL_15;
    goto LABEL_64;
  }
  if ( (*(_BYTE *)(*v27 + 17) & 4) == 0
    && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 2u )
  {
    v113 = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u;
    goto LABEL_147;
  }
  v129 = 0;
  a6 = nullptr;
  *(_OWORD *)v128 = 0;
LABEL_64:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2 <= 1 )
  {
    v50 = sub_A72040(v16, v26);
    if ( !v50 || (unsigned int)*(unsigned __int8 *)(v50 + 16) - 2 > 1 )
      BUG();
    v51 = *(_BYTE *)(v50 + 19);
    v52 = *(_DWORD **)(v50 + 40);
    if ( (v51 & 2) != 0 )
    {
      v53 = v52[2];
      LODWORD(v150) = v53;
      if ( (unsigned int)v53 > 0x40 )
      {
        sub_2205510(&v149);
        v53 = v150;
        v52 = v149;
      }
      else
      {
        v52 = *(_DWORD **)v52;
        v149 = v52;
      }
    }
    else
    {
      v53 = 8 * ((v51 >> 2) & 0x1F);
      LODWORD(v150) = v53;
      if ( v53 > 64 )
      {
        sub_2205470(&v149, v52, 0);
        v53 = v150;
        v52 = v149;
      }
      else
      {
        v149 = v52;
      }
    }
    if ( (_BYTE)v129 )
    {
      LODWORD(v150) = 0;
      if ( LODWORD(v128[1]) > 0x40 && v128[0] )
      {
        operator delete[](v128[0]);
        v128[0] = v52;
        LODWORD(v128[1]) = v53;
        if ( (unsigned int)v150 > 0x40 && v149 )
          operator delete[](v149);
      }
      else
      {
        v128[0] = v52;
        LODWORD(v128[1]) = v53;
      }
    }
    else
    {
      LODWORD(v128[1]) = v53;
      v128[0] = v52;
      BYTE4(v128[1]) = 1;
      LOBYTE(v129) = 1;
    }
  }
LABEL_15:
  if ( a4 && (*(_DWORD *)a4 & 0x8000) == 0 )
  {
    LOWORD(v149) = 0;
    BYTE4(v151) &= ~1u;
    v150 = 0;
    LODWORD(v151) = 0;
    if ( (unsigned __int8)sub_C3F220((unsigned __int64)a4, (__int64)&v149, (__int64)v16, 0, 0, v25) )
    {
      v131 = (unsigned int)v153;
      if ( (unsigned int)v153 > 0x40 )
        sub_2205510(&v130);
      else
        v130 = v152;
      v133 = 1;
      v132 = BYTE4(v153);
    }
    else
    {
      v133 = 0;
    }
    if ( (unsigned int)v151 > 1 )
      sub_A4F8E0((int *)&v151);
  }
  else
  {
    v133 = 0;
  }
  if ( a6 && (*(_DWORD *)a6 & 0x8000) == 0 )
  {
    LOWORD(v149) = 0;
    BYTE4(v151) &= ~1u;
    v150 = 0;
    LODWORD(v151) = 0;
    if ( (unsigned __int8)sub_C3F220((unsigned __int64)a6, (__int64)&v149, (__int64)v16, 0, 0, v25) )
    {
      v135 = (unsigned int)v153;
      if ( (unsigned int)v153 > 0x40 )
        sub_2205510(&v134);
      else
        v134 = v152;
      v137 = 1;
      v136 = BYTE4(v153);
    }
    else
    {
      v137 = 0;
    }
    if ( (unsigned int)v151 > 1 )
      sub_A4F8E0((int *)&v151);
  }
  else
  {
    v137 = 0;
  }
  if ( !v133 )
    goto LABEL_31;
  if ( !v132 )
  {
    v28 = (__int64)v130;
    v29 = v131 - 1;
    if ( v131 > 0x40 )
    {
      v29 = (unsigned int)v29 >> 6;
      v28 = *((_QWORD *)v130 + (unsigned int)v29);
    }
    if ( (v28 & (1LL << ((unsigned __int8)v131 - 1))) != 0 )
    {
      v30 = sub_C00A40((unsigned __int64)a4, v131, v28, v29, v24);
      sub_168B9F0((__int64)&v149, a1, v30, 0xB77u, 0);
      LODWORD(v142) = 0;
      v31 = sub_1587D10((__int64)&v149, (int *)&v142);
      sub_C1DEB0(&v146, (int)&v130, 10, v132 ^ 1, 0, 1u, 0);
      sub_1682AF0(v31, (__int64)&v146);
      if ( v146 != v148 )
        operator delete(v146);
      sub_15F7200(&v149);
      if ( v133 )
        sub_1AA0B10((__int64)&v130);
LABEL_30:
      a4 = (_QWORD *)sub_1AA0AA0(a1, (unsigned __int64)a4, a4[1], 0.0);
      goto LABEL_31;
    }
  }
  if ( (_BYTE)v129 )
  {
    if ( (int)sub_98E2D0((__int64 *)&v130, (__int64 *)v128) >= 0 )
    {
      v102 = sub_C00A40((unsigned __int64)a4, (__int64)v128, v100, v101, v24);
      sub_168B9F0((__int64)&v149, a1, v102, 0xB79u, 0);
      LODWORD(v138) = 0;
      v103 = sub_1587D10((__int64)&v149, (int *)&v138);
      sub_C1DEB0(&v142, (int)&v130, 10, v132 ^ 1, 0, 1u, 0);
      v120 = sub_1682AF0(v103, (__int64)&v142);
      sub_C1DEB0(&v146, (int)v128, 10, BYTE4(v128[1]) ^ 1, 0, 1u, 0);
      sub_1682AF0(v120, (__int64)&v146);
      if ( v146 != v148 )
        operator delete(v146);
      if ( v142 != v145 )
        operator delete(v142);
      sub_15F7200(&v149);
      if ( v133 )
        sub_1AA0B10((__int64)&v130);
      goto LABEL_30;
    }
LABEL_31:
    if ( !v137 )
      goto LABEL_41;
    if ( v136 )
      goto LABEL_136;
    goto LABEL_33;
  }
  if ( !v137 || v136 )
    goto LABEL_43;
LABEL_33:
  v32 = (__int64)v134;
  v33 = v135 - 1;
  if ( v135 > 0x40 )
  {
    v33 = (unsigned int)v33 >> 6;
    v32 = *((_QWORD *)v134 + (unsigned int)v33);
  }
  if ( (v32 & (1LL << ((unsigned __int8)v135 - 1))) != 0 )
  {
    v34 = sub_C00A40((unsigned __int64)a6, v135, v32, v33, v24);
    sub_168B9F0((__int64)&v149, a1, v34, 0xB77u, 0);
    LODWORD(v142) = 1;
    v116 = sub_1587D10((__int64)&v149, (int *)&v142);
    sub_C1DEB0(&v146, (int)&v134, 10, v136 ^ 1, 0, 1u, 0);
    sub_1682AF0(v116, (__int64)&v146);
    v35 = v146;
    if ( v146 == v148 )
    {
LABEL_38:
      sub_15F7200(&v149);
      if ( v137 )
        sub_1AA0B10((__int64)&v134);
      a6 = (_QWORD *)sub_1AA0AA0(a1, (unsigned __int64)a6, a6[1], 0.0);
      goto LABEL_41;
    }
LABEL_37:
    operator delete(v35);
    goto LABEL_38;
  }
LABEL_136:
  if ( !(_BYTE)v129 )
    goto LABEL_43;
  if ( (int)sub_98E2D0((__int64 *)&v134, (__int64 *)v128) > 0 )
  {
    v82 = sub_C00A40((unsigned __int64)a6, (__int64)v128, v79, v80, v81);
    sub_168B9F0((__int64)&v149, a1, v82, 0xB79u, 0);
    LODWORD(v138) = 1;
    v83 = sub_1587D10((__int64)&v149, (int *)&v138);
    sub_C1DEB0(&v142, (int)&v134, 10, v136 ^ 1, 0, 1u, 0);
    v119 = sub_1682AF0(v83, (__int64)&v142);
    sub_C1DEB0(&v146, (int)v128, 10, BYTE4(v128[1]) ^ 1, 0, 1u, 0);
    sub_1682AF0(v119, (__int64)&v146);
    if ( v146 != v148 )
      operator delete(v146);
    v35 = v142;
    if ( v142 == v145 )
      goto LABEL_38;
    goto LABEL_37;
  }
LABEL_41:
  if ( !(_BYTE)v129 || !v133 || !v137 )
    goto LABEL_43;
  v139 = v135;
  if ( v135 > 0x40 )
    sub_2205510(&v138);
  else
    v138 = v134;
  v66 = v131;
  v140 = v136;
  v126 = v131;
  if ( v131 <= 0x40 )
  {
    v125 = v130;
    v67 = v132;
    v127 = v132;
    if ( v136 != v132 )
    {
LABEL_91:
      if ( v139 >= v66 )
        v66 = v139;
      v121 = v66 + 1;
      sub_2206B70(&v146, &v138, v66 + 1);
      sub_2206B70(&v149, &v125, v121);
      sub_22059A0(&v146, &v149);
      v68 = v147;
      v147 = 0;
      v144 = 1;
      v143 = v68;
      v142 = v146;
      if ( (unsigned int)v150 > 0x40 )
      {
        if ( v149 )
        {
          operator delete[](v149);
          if ( v147 > 0x40 )
          {
            if ( v146 )
              operator delete[](v146);
          }
        }
      }
      goto LABEL_98;
    }
    LODWORD(v150) = v131;
    goto LABEL_200;
  }
  sub_2205510(&v125);
  v67 = v132;
  v66 = v126;
  v127 = v132;
  if ( v132 != v140 )
    goto LABEL_91;
  LODWORD(v150) = v126;
  if ( v126 <= 0x40 )
  {
LABEL_200:
    v149 = v125;
    goto LABEL_198;
  }
  v117 = v132;
  sub_2205510(&v149);
  v67 = v117;
LABEL_198:
  v118 = v67;
  sub_22059A0(&v149, &v138);
  v143 = v150;
  v144 = v118;
  v142 = v149;
LABEL_98:
  v72 = sub_98E2D0((__int64 *)&v142, (__int64 *)v128);
  if ( v143 > 0x40 && v142 )
    operator delete[](v142);
  if ( v126 > 0x40 && v125 )
    operator delete[](v125);
  if ( v139 > 0x40 && v138 )
    operator delete[](v138);
  v36 = v123;
  if ( v72 <= 0 )
    goto LABEL_44;
  v73 = sub_C00A40((unsigned __int64)v123, (__int64)v128, v69, v70, v71);
  sub_168B9F0((__int64)&v149, a1, v73, 0xB74u, 0);
  sub_C1DEB0(&v138, (int)&v130, 10, v132 ^ 1, 0, 1u, 0);
  v74 = sub_1682AF0((__int64)&v149, (__int64)&v138);
  sub_C1DEB0(&v142, (int)&v134, 10, v136 ^ 1, 0, 1u, 0);
  v122 = sub_1682AF0(v74, (__int64)&v142);
  sub_C1DEB0(&v146, (int)v128, 10, BYTE4(v128[1]) ^ 1, 0, 1u, 0);
  sub_1682AF0(v122, (__int64)&v146);
  if ( v146 != v148 )
    operator delete(v146);
  if ( v142 != v145 )
    operator delete(v142);
  if ( v138 != &v141 )
    operator delete(v138);
  sub_15F7200(&v149);
  if ( v133 )
  {
    v133 = 0;
    if ( v131 > 0x40 )
    {
      if ( v130 )
        operator delete[](v130);
    }
  }
  a4 = (_QWORD *)sub_1AA0AA0(a1, (unsigned __int64)a4, a4[1], 0.0);
  if ( v137 )
  {
    v137 = 0;
    if ( v135 > 0x40 )
    {
      if ( v134 )
        operator delete[](v134);
    }
  }
  a6 = (_QWORD *)sub_1AA0AA0(a1, (unsigned __int64)a6, a6[1], 0.0);
LABEL_43:
  v36 = v123;
LABEL_44:
  v37 = v16[2438];
  if ( (*v36 & 0x10000) != 0 || a4 && (*(_DWORD *)a4 & 0x8000) != 0 || a6 && (*(_DWORD *)a6 & 0x8000) != 0 )
    v37 = v16[2384];
  v38 = (_WORD *)sub_EEE9A0(72, v16, 8u);
  v39 = v123;
  v40 = (__int64)v38;
  *v38 = *v38 & 0xFE00 | 0x7C;
  if ( unk_2CD7484 )
    sub_EE9B50(124);
  v41 = *(_WORD *)(v40 + 1);
  *(_QWORD *)(v40 + 8) = v37;
  *(_OWORD *)(v40 + 40) = 0;
  *(_QWORD *)(v40 + 24) = v39;
  *(_QWORD *)(v40 + 32) = a4;
  *(_WORD *)(v40 + 1) = v41 & 0xF801 | 2;
  *(_DWORD *)(v40 + 16) = 1;
  *(_DWORD *)(v40 + 56) = a5;
  *(_DWORD *)(v40 + 60) = 0;
  *(_DWORD *)(v40 + 64) = a9;
  *(_QWORD *)(v40 + 40) = a6;
  v42 = sub_B63B30(v40);
  *(_BYTE *)(v40 + 1) = (v42 << 6) | *(_BYTE *)(v40 + 1) & 0x3F;
  *(_BYTE *)(v40 + 2) = *(_BYTE *)(v40 + 2) & 0xF8 | (v42 >> 2) & 7;
  sub_98E4B0((__int64)&v134);
  sub_98E4B0((__int64)&v130);
  sub_98E4B0((__int64)v128);
  return v40;
}
