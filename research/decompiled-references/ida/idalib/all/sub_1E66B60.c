unsigned __int64 __fastcall sub_1E66B60(
        __m128 *a1,
        __int64 a2,
        signed int a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  __int64 *v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int8 v41; // r10
  __int64 v42; // rax
  _BYTE *v43; // rax
  _QWORD *v44; // rbp
  __int64 v45; // rsi
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int8 v51; // r10
  _BYTE *v52; // rax
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rbp
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rax
  char v64; // dl
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rdi
  __int64 v68; // rdx
  char v69; // al
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  unsigned __int8 v73; // dl
  char v74; // al
  unsigned __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned __int8 v80; // r10
  __int64 v81; // rdi
  unsigned __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 *v84; // r15
  unsigned int v85; // eax
  __int64 v86; // r13
  void *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  char v92; // al
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r12
  void *v99; // rax
  _QWORD *v100; // rax
  void **p_ptr; // rsi
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdi
  unsigned int v108; // edx
  unsigned __int64 v109; // rcx
  int v110; // ecx
  int v111; // eax
  int v112; // eax
  unsigned int v113; // edx
  unsigned int v114; // eax
  __m128i si128; // xmm0
  __int64 v116; // r13
  unsigned __int8 v117; // al
  unsigned __int64 v118; // rax
  __int64 v119; // rdx
  char v120; // dl
  unsigned int v121; // eax
  __int64 v122; // rax
  unsigned int v123; // eax
  __int8 v124; // dl
  unsigned __int64 v125; // rsi
  char v126; // si
  unsigned __int64 v127; // rdx
  unsigned __int8 v128; // [rsp+8h] [rbp-160h]
  unsigned __int64 v129; // [rsp+8h] [rbp-160h]
  unsigned __int8 v130; // [rsp+8h] [rbp-160h]
  unsigned __int8 v131; // [rsp+8h] [rbp-160h]
  unsigned __int8 v132; // [rsp+8h] [rbp-160h]
  unsigned __int8 v133; // [rsp+8h] [rbp-160h]
  unsigned __int8 v134; // [rsp+8h] [rbp-160h]
  __int64 v135; // [rsp+8h] [rbp-160h]
  unsigned int v136; // [rsp+10h] [rbp-158h]
  int v137; // [rsp+10h] [rbp-158h]
  unsigned int v138; // [rsp+10h] [rbp-158h]
  __int64 v139; // [rsp+10h] [rbp-158h]
  unsigned int v140; // [rsp+10h] [rbp-158h]
  __int64 v141; // [rsp+10h] [rbp-158h]
  unsigned __int8 v142; // [rsp+18h] [rbp-150h]
  unsigned __int8 v143; // [rsp+18h] [rbp-150h]
  unsigned __int8 v144; // [rsp+18h] [rbp-150h]
  __int64 v145; // [rsp+18h] [rbp-150h]
  __int64 v146; // [rsp+18h] [rbp-150h]
  unsigned __int8 v147; // [rsp+27h] [rbp-141h]
  unsigned __int64 v148; // [rsp+28h] [rbp-140h] BYREF
  void *v149; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v150; // [rsp+38h] [rbp-130h]
  char v151; // [rsp+3Ch] [rbp-12Ch]
  __int64 v152[2]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v153[16]; // [rsp+50h] [rbp-118h] BYREF
  void *ptr; // [rsp+60h] [rbp-108h] BYREF
  __m128i v155; // [rsp+68h] [rbp-100h] BYREF
  _BYTE v156[40]; // [rsp+78h] [rbp-F0h] BYREF
  void *v157; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v158; // [rsp+A8h] [rbp-C0h]
  unsigned int v159; // [rsp+ACh] [rbp-BCh]
  void *v160; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v161; // [rsp+C0h] [rbp-A8h] BYREF
  char v162; // [rsp+118h] [rbp-50h]
  unsigned int v163; // [rsp+120h] [rbp-48h]
  char v164; // [rsp+124h] [rbp-44h]

  v14 = a1[14].m128_u64[1];
  v148 = a2;
  if ( (*(_BYTE *)(v14 + 1) & 8) == 0 )
  {
    if ( !sub_F65EB0(&v148) )
    {
      a2 = a6;
      v158 = 3070;
      v157 = off_2BC6A30;
      if ( (unsigned __int8)sub_1E63C20((__int64)a1, a6, v148, nullptr, (__int64)&v157, v28) )
        return 0;
    }
LABEL_16:
    v25 = (__int64 *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
    v24 = *(_QWORD *)(a1[15].m128_u64[1] + 17448);
    v26 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_17;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (unsigned int)(v16 - 43) <= 1 )
  {
    v17 = &a1->m128_i64[1];
    v18 = 3929;
    goto LABEL_4;
  }
  if ( (_BYTE)v16 == 13 )
  {
    if ( ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) != 0x1B3 )
      goto LABEL_10;
LABEL_27:
    sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, 0xBFEu, 0);
    LODWORD(ptr) = 0;
    v35 = sub_1587D10((__int64)&v157, (int *)&ptr);
    sub_1605D30(v35, (__int64 *)&v148);
LABEL_6:
    sub_15F7200(&v157);
    return 0;
  }
  if ( (_BYTE)v16 == 5 )
    goto LABEL_27;
LABEL_10:
  a2 = a6;
  v158 = 3080;
  v157 = off_2BC6500;
  if ( (unsigned __int8)sub_1866EA0(
                          a1,
                          a6,
                          v148,
                          (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD, unsigned __int64))&v157) )
    return 0;
  v24 = *(_QWORD *)(a1[15].m128_u64[1] + 17448);
  v25 = (__int64 *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
  v26 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_DWORD *)(v24 + 340) == 10 )
  {
    if ( *(_BYTE *)(v26 + 16) == 33 )
      goto LABEL_187;
    v71 = *(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v71 + 16) != 33 )
      goto LABEL_17;
    v26 = sub_F63050(v26, a2, v25, v71);
    if ( v26 )
    {
LABEL_187:
      if ( !sub_E917A0(*(_QWORD *)(v26 + 40), a2, (__int64)v25, v21, v22, v23) )
      {
        a2 = a6;
        sub_1E63330((__int64)a1, a6, v148, (__int64 *)((char *)&dword_0 + 1), 0, v27);
      }
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( (unsigned int)(*(_DWORD *)(v24 + 248) - 55) <= 1
    && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v26 + 16) - 2) <= 4u )
    {
      v157 = *(void **)(v26 + 32);
      if ( sub_F65EB0(&v157) )
      {
        sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, 0x155Eu, 0);
        sub_15F7200(&v157);
        return 0;
      }
      v25 = (__int64 *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v26 = *v25;
  }
  if ( sub_F582C0(v26) && !sub_F65EB0(&v148) )
  {
    sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, 0xBFEu, 0);
    LODWORD(ptr) = 1;
    v53 = sub_1587D10((__int64)&v157, (int *)&ptr);
    sub_1605D30(v53, (__int64 *)&v148);
    sub_15F7200(&v157);
    return 0;
  }
  v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v33 = *(unsigned __int8 *)(v32 + 16);
  v34 = (unsigned int)(v33 - 25);
  if ( (unsigned int)v34 <= 1 )
  {
    v17 = &a1->m128_i64[1];
    v18 = 3928;
LABEL_4:
    sub_168B9F0((__int64)&v157, v17, a6, v18, 0);
    sub_1E5EB90(&ptr, a9);
    v19 = sub_1682AF0((__int64)&v157, (__int64)&ptr);
    sub_1605D30(v19, (__int64 *)&v148);
    if ( ptr != &v155.m128i_u64[1] )
      operator delete(ptr);
    goto LABEL_6;
  }
  if ( (_BYTE)v33 == 48 )
  {
    if ( *((char *)sub_F60F10(v32, a2, v29, v34, v30, v31) + 74) < 0 )
    {
      sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, 0x15B4u, 0);
      sub_1605D30((__int64)&v157, (__int64 *)&v148);
      sub_15F7200(&v157);
    }
  }
  else if ( (unsigned int)(v33 - 35) <= 1 )
  {
    sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, 0x10F4u, 0);
    sub_1605D30((__int64)&v157, (__int64 *)&v148);
    sub_15F7200(&v157);
    return 0;
  }
  v36 = v148;
  v41 = sub_1E66970((__int64)a1, v148, a6);
  if ( !v41 )
    return 0;
  if ( !a4 )
    goto LABEL_70;
  v42 = *(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v42 + 16) == 13 && ((*(_WORD *)(v42 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v36 = a4;
    v130 = v41;
    v56 = sub_1907C70((__int64)a1, (_QWORD *)a4, (__m128i)a7, a8, v37, v38, v39, v40);
    if ( v56 == 1 )
      return 0;
    v41 = v130;
    a4 = v56 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v56 & 0xFFFFFFFFFFFFFFFELL) == 0 )
    {
LABEL_70:
      v43 = (_BYTE *)a1[14].m128_u64[1];
      a4 = 0;
      goto LABEL_38;
    }
  }
  if ( (*(_BYTE *)(a4 + 1) & 6) == 0 )
  {
    v43 = (_BYTE *)a1[14].m128_u64[1];
    if ( (v43[1] & 0x10) != 0 )
      goto LABEL_38;
LABEL_37:
    if ( (*(_DWORD *)a4 & 0x10000) != 0 )
      goto LABEL_38;
    v132 = v41;
    if ( sub_F61920(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL), v36, v37, v38, v39, v40) )
    {
      v43 = (_BYTE *)a1[14].m128_u64[1];
      v41 = v132;
      goto LABEL_38;
    }
    v54 = sub_EEB7E0(a4, v36, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)&v157, &a1->m128_i64[1], v54, 0xC0Fu, 0);
    v152[0] = *(_QWORD *)(a4 + 8);
    v55 = sub_162B6D0((__int64)&v157, v152);
    ptr = (void *)sub_EEC8C0(a4, (__int64)v152, *(double *)a7.m128_u64);
    sub_1587DB0(v55, (__int64 *)&ptr);
    sub_15F7200(&v157);
    return 0;
  }
  v36 = a4;
  v131 = v41;
  v70 = sub_19146F0((__int64)a1, (_QWORD *)a4, v37, v38, v39, v40, a7, a8);
  if ( v70 == 1 )
    return 0;
  v41 = v131;
  a4 = v70 & 0xFFFFFFFFFFFFFFFELL;
  v43 = (_BYTE *)a1[14].m128_u64[1];
  if ( (v43[1] & 0x10) == 0 && a4 )
    goto LABEL_37;
LABEL_38:
  if ( (v43[47] & 0x20) != 0 )
  {
    v136 = 4710;
    v44 = (_QWORD *)a1[15].m128_u64[1];
    goto LABEL_40;
  }
  if ( (*v43 & 1) != 0 )
  {
    v44 = (_QWORD *)a1[15].m128_u64[1];
    v41 = 0;
    v136 = 7561;
    goto LABEL_40;
  }
  sub_1DBADC0((__int64)a1);
  v41 = v73;
  if ( v73 )
  {
    v44 = (_QWORD *)a1[15].m128_u64[1];
    v136 = 5451;
    goto LABEL_40;
  }
  v90 = a1[14].m128_i64[1];
  if ( !*(_DWORD *)(v90 + 64) )
  {
LABEL_126:
    v91 = a1[15].m128_i64[1];
    v92 = *(_BYTE *)(v90 + 1);
    v136 = 5725;
    v44 = (_QWORD *)v91;
    if ( (v92 & 8) == 0 )
      goto LABEL_40;
    if ( (v92 & 0x10) == 0 )
      goto LABEL_128;
    if ( !a4 )
      goto LABEL_128;
    v145 = a1[15].m128_i64[1];
    v139 = v90;
    v134 = v41;
    v118 = sub_BFBAE0(a4);
    v41 = v134;
    v90 = v139;
    v91 = v145;
    if ( !v118 || (*(_WORD *)v118 & 0x1FF) != 0x80 )
      goto LABEL_128;
    v119 = v145;
    v147 = v134;
    v146 = v118;
    v135 = v91;
    sub_C3EB00((__int64)&ptr, *(_QWORD *)(v118 + 32), v119, nullptr, v91, v118);
    sub_C3EB00((__int64)&v157, *(_QWORD *)(v146 + 40), v135, nullptr, v135, v146);
    if ( v155.m128i_i8[8] && (_BYTE)v160 )
    {
      v124 = v155.m128i_i8[4];
      if ( !v155.m128i_i8[4] )
      {
        v125 = (unsigned __int64)ptr;
        if ( v155.m128i_i32[0] > 0x40u )
          v125 = *((_QWORD *)ptr + ((unsigned int)(v155.m128i_i32[0] - 1) >> 6));
        v126 = (v125 & (1LL << (v155.m128i_i8[0] - 1))) != 0;
        if ( (_BYTE)v159 )
        {
LABEL_179:
          if ( v126 != v124 )
          {
            sub_98E4B0((__int64)&v157);
            sub_98E4B0((__int64)&ptr);
            v41 = v147;
            v44 = (_QWORD *)a1[15].m128_u64[1];
            if ( (*(_BYTE *)(a1[14].m128_u64[1] + 4) & 4) != 0 )
              v136 = 5728;
            else
              v136 = 5729;
            goto LABEL_40;
          }
          goto LABEL_162;
        }
LABEL_176:
        v127 = (unsigned __int64)v157;
        if ( v158 > 0x40 )
          v127 = *((_QWORD *)v157 + ((v158 - 1) >> 6));
        v124 = (v127 & (1LL << ((unsigned __int8)v158 - 1))) != 0;
        goto LABEL_179;
      }
      v126 = 0;
      if ( !(_BYTE)v159 )
        goto LABEL_176;
    }
LABEL_162:
    sub_98E4B0((__int64)&v157);
    sub_98E4B0((__int64)&ptr);
    v90 = a1[14].m128_i64[1];
    v91 = a1[15].m128_i64[1];
    v41 = v147;
LABEL_128:
    v44 = (_QWORD *)v91;
    v136 = 5727 - ((*(_BYTE *)(v90 + 4) & 4) == 0);
    goto LABEL_40;
  }
  v117 = sub_1AF2E40(a1[47].m128_i64[1], v36, v90, v72);
  v41 = 0;
  if ( !v117 )
  {
    v90 = a1[14].m128_i64[1];
    goto LABEL_126;
  }
  v44 = (_QWORD *)a1[15].m128_u64[1];
  v41 = v117;
  v136 = 4713;
LABEL_40:
  v128 = v41;
  v45 = *(_QWORD *)(sub_A63CE0(v44) & 0xFFFFFFFFFFFFFFF0LL);
  v46 = sub_A97D20((__int64)v44, v45);
  v51 = v128;
  v150 = v46;
  if ( v46 > 0x40 )
  {
    v45 = 0;
    sub_2205470(&v149, 0, 0);
    v51 = v128;
  }
  else
  {
    v149 = nullptr;
  }
  v151 = 1;
  if ( !a4 )
  {
    if ( a3 != 2 )
    {
      v148 = sub_A71E50(a1[15].m128_i64[1], v148, a3, a5);
      goto LABEL_45;
    }
    v133 = v51;
    sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, v136, 0);
    sub_15F7200(&v157);
    if ( !v133 )
    {
      v148 = sub_A71A40((_QWORD *)a1[15].m128_u64[1], v148, 0, 2u, a5);
      goto LABEL_45;
    }
    goto LABEL_115;
  }
  if ( ((*(_DWORD *)a4 >> 14) & 0xC) != 0 )
  {
    v148 = sub_A71B90(a1[15].m128_i64[1], v148, a4, a3, a5);
    goto LABEL_45;
  }
  if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x20) != 0
    && (v51
     || (v74 = sub_F61920(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL), v45, v47, v48, v49, v50),
         v51 = 0,
         !v74)) )
  {
    v143 = v51;
    v93 = sub_A63CE0((_QWORD *)a1[15].m128_u64[1]);
    v75 = sub_1C0AEA0(a1, (__int64 *)a4, v93, (__int64)&v149, 4u, a7, a8);
    v80 = v143;
  }
  else
  {
    v157 = off_2BE4470;
    LOBYTE(v158) = 0;
    v159 = v136;
    LOWORD(v160) = v51;
    v142 = v51;
    v75 = sub_1914D50((__int64 *)a1, a4, (__int64)&v149, (_BOOL4 *)&v157, 0, a7, a8);
    if ( BYTE1(v160) )
      goto LABEL_134;
    v80 = v142;
  }
  if ( v75 != 1 )
  {
    if ( v75 )
    {
      v81 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v81 + 17) & 4) == 0 )
      {
        v144 = v80;
        if ( !sub_F62670(v81, nullptr, v76, v77, v78, v79) && !sub_F58240(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, v136, 0);
          sub_15F7200(&v157);
          if ( !v144 )
            goto LABEL_134;
          goto LABEL_115;
        }
      }
      if ( v151 )
        goto LABEL_138;
      v82 = (unsigned __int64)v149;
      v83 = 1LL << ((unsigned __int8)v150 - 1);
      if ( v150 > 0x40 )
        v82 = *((_QWORD *)v149 + ((v150 - 1) >> 6));
      if ( (v82 & v83) == 0 )
      {
LABEL_138:
        v158 = 64;
        p_ptr = &v157;
        LOBYTE(v159) = 0;
        v157 = nullptr;
        v102 = sub_98E2D0((__int64 *)&v149, (__int64 *)&v157);
        if ( v158 > 0x40 && v157 )
        {
          v137 = v102;
          operator delete[](v157);
          v102 = v137;
        }
        if ( !v102 && !sub_F65EB0(&v148) )
        {
          sub_1DBADC0((__int64)a1);
          v140 = v120 == 0 ? 5712 : 5324;
          v121 = sub_EEB7E0(a4, (__int64)&a1->m128_i64[1], *(double *)a7.m128_u64);
          sub_168B9F0((__int64)&v157, &a1->m128_i64[1], v121, v140, 0);
          LODWORD(v152[0]) = 0;
          v141 = sub_1587D10((__int64)&v157, (int *)v152);
          p_ptr = &ptr;
          ptr = (void *)sub_EEC8C0(a4, (__int64)v152, *(double *)a7.m128_u64);
          sub_1587DB0(v141, (__int64 *)&ptr);
          sub_15F7200(&v157);
        }
        v107 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v107 + 17) & 0xC) != 0
          || (p_ptr = nullptr, sub_F62670(v107, nullptr, v103, v104, v105, v106))
          || (v122 = sub_F57E80(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL))) != 0
          && (*(_QWORD *)(v122 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
          && (*(_BYTE *)(v122 + 17) & 4) == 0 )
        {
          v108 = v150;
          if ( v150 > 0x40 )
          {
            v138 = v150;
            v112 = sub_2206780(&v149);
            v108 = v138;
          }
          else
          {
            _BitScanReverse64(&v109, (unsigned __int64)v149);
            v110 = v109 ^ 0x3F;
            v111 = 64;
            if ( v149 )
              v111 = v110;
            v112 = v150 + v111 - 64;
          }
          v113 = v108 - v112;
        }
        else
        {
          p_ptr = (void **)v148;
          v113 = sub_F56CB0((_QWORD *)a1[15].m128_u64[1], v148, (__int64)&v149);
        }
        if ( (unsigned int)sub_F56FC0((_QWORD *)a1[15].m128_u64[1]) >= v113 )
        {
          v148 = sub_A70F70(a1[15].m128_i64[1], v148, (__int64)&v149, (_DWORD *)a4, a3, a5);
LABEL_45:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 6 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(a1[15].m128_u64[1] + 17448) + 274LL) )
            {
              v88 = a1[2].m128_u32[2];
              if ( !(_DWORD)v88 || (v89 = *(_QWORD *)(a1[2].m128_u64[0] + 8 * v88 - 8)) == 0 || *(_DWORD *)(v89 + 32) )
              {
LABEL_51:
                v52 = (_BYTE *)a1[14].m128_u64[1];
                goto LABEL_52;
              }
              *(_DWORD *)(v89 + 32) = a6;
            }
            else
            {
              v57 = a1[14].m128_u64[1];
              if ( (*(_BYTE *)(v57 + 60) & 0x10) != 0 && (*(_BYTE *)(v57 + 89) & 4) != 0 )
              {
                sub_1606D30((__int64)&v157, a1, a6, 3570, 0);
                v61 = a1[41].m128_i64[1];
                v62 = 0;
                v63 = *(_QWORD *)(*(_QWORD *)v61 + 544LL);
                v64 = *(_BYTE *)(v63 + 8);
                v65 = v63 - 72;
                if ( (v64 & 0x7Fu) - 34 < 6 )
                  v62 = v65;
                v66 = sub_178EA20(v61, v62, nullptr, v58, v59, v60);
              }
              else
              {
                sub_1606D30((__int64)&v157, a1, a6, 5452, 0);
                v66 = 0;
              }
              LODWORD(ptr) = v66;
              sub_1587D10((__int64)&v157, (int *)&ptr);
              sub_15F7200(&v157);
            }
            v52 = (_BYTE *)a1[14].m128_u64[1];
            if ( (*v52 & 1) != 0
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) == 6 )
            {
              goto LABEL_52;
            }
          }
          else
          {
            v52 = (_BYTE *)a1[14].m128_u64[1];
            if ( (*v52 & 1) != 0 )
              goto LABEL_52;
          }
          if ( a3 | a5 )
          {
            sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, (v52[1] & 8) == 0 ? 5511 : 3378, 0);
            if ( v162 )
            {
              sub_1E5E160(&v161, a3);
            }
            else if ( v164 )
            {
              v98 = sub_168B9E0(&v157);
              v99 = v160;
              if ( v160 )
                v99 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v160 + 32LL))(v160);
              ptr = v99;
              v100 = sub_1587BC0(v98, (__int64 *)&ptr, v94, v95, v96, v97);
              sub_1E5E160((unsigned __int8 **)(*v100 + 32LL * v163 + 8), a3);
            }
            sub_15F7200(&v157);
            goto LABEL_51;
          }
LABEL_52:
          if ( (v52[47] & 0x20) != 0
            && ((ptr = (void *)sub_A71450(a1[15].m128_i64[1], v148),
                 v67 = *(_QWORD *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFF0LL),
                 v68 = *(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                 v69 = *(_BYTE *)(v68 + 16),
                 v69 == 11)
             || v69 == 41
             || v69 == 13 && ((*(_WORD *)(v68 + 18) >> 3) & 0x1FF) == 0x1EC
             || sub_E3A850(v67)) )
          {
            sub_168B9F0((__int64)&v157, &a1->m128_i64[1], a6, 0x1256u, 0);
            sub_1605D30((__int64)&v157, (__int64 *)&ptr);
            sub_15F7200(&v157);
            result = 0;
          }
          else
          {
            result = v148;
          }
          goto LABEL_54;
        }
        v114 = sub_EEB7E0(a4, (__int64)p_ptr, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&v157, &a1->m128_i64[1], v114, 0xC15u, 0);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        v155 = si128;
        ptr = v156;
        sub_220BA90((unsigned int)&v149, (unsigned int)&ptr, 10, (unsigned __int8)v151 ^ 1, 0, 1, 0);
        v152[0] = (__int64)v153;
        sub_1E5E4B0(v152, ptr, (__int64)ptr + v155.m128i_i64[0]);
        if ( ptr != v156 )
          free(ptr);
        v116 = sub_1682AF0((__int64)&v157, (__int64)v152);
        ptr = (void *)sub_EEC8C0(a4, (__int64)v152, *(double *)si128.m128i_i64);
        sub_1587DB0(v116, (__int64 *)&ptr);
        v87 = (void *)v152[0];
        if ( (_BYTE *)v152[0] == v153 )
          goto LABEL_114;
      }
      else
      {
        v84 = &a1->m128_i64[1];
        if ( !a9 )
        {
          v123 = sub_EEB7E0(a4, v83, *(double *)a7.m128_u64);
          sub_168B9F0((__int64)&v157, v84, v123, 0x14B3u, 0);
          ptr = (void *)sub_EEC8C0(a4, (__int64)v84, *(double *)a7.m128_u64);
          sub_1587DB0((__int64)&v157, (__int64 *)&ptr);
          sub_15F7200(&v157);
          result = 0;
          goto LABEL_54;
        }
        v85 = sub_EEB7E0(a4, v83, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&v157, v84, v85, 0xDF9u, 0);
        sub_1E5EB90(&ptr, a9);
        v86 = sub_1682AF0((__int64)&v157, (__int64)&ptr);
        v152[0] = sub_EEC8C0(a4, (__int64)&ptr, *(double *)a7.m128_u64);
        sub_1587DB0(v86, v152);
        v87 = ptr;
        if ( ptr == &v155.m128i_u64[1] )
          goto LABEL_114;
      }
      operator delete(v87);
LABEL_114:
      sub_15F7200(&v157);
      goto LABEL_115;
    }
LABEL_134:
    v148 = sub_A71A40((_QWORD *)a1[15].m128_u64[1], v148, a4, a3, a5);
    goto LABEL_45;
  }
LABEL_115:
  result = 0;
LABEL_54:
  if ( v150 > 0x40 && v149 )
  {
    v129 = result;
    operator delete[](v149);
    return v129;
  }
  return result;
}
