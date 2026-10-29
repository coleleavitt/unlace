__int64 __fastcall sub_19BF700(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __m128 a5, __m128 a6)
{
  unsigned int v7; // ebp
  __int64 v9; // rax
  bool v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  char v17; // r13
  void *v18; // rax
  int v19; // edx
  bool v20; // al
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r9d
  __int64 v31; // rdx
  void *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r12
  unsigned int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int8 *v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // rdi
  unsigned int v53; // eax
  signed __int64 v54; // r12
  signed __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // r9
  __int64 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 (__fastcall **v71)(); // rdi
  unsigned int v72; // edx
  unsigned __int8 *v73; // rsi
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // r12
  __int64 *v80; // r13
  unsigned __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdx
  int v84; // esi
  bool v85; // zf
  __int64 v86; // rax
  unsigned __int64 v87; // rdx
  __int64 *v88; // r12
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r13
  __int64 v96; // rax
  __int64 v97; // r15
  __int64 v98; // rdi
  __int64 (__fastcall *v99)(__int64); // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // r13d
  unsigned int v103; // r14d
  unsigned int v104; // eax
  int v105; // r10d
  unsigned __int64 v106; // r11
  int v107; // r11d
  __int64 v108; // rax
  __int64 v109; // r13
  unsigned __int64 v110; // rdx
  int v111; // esi
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // r8
  __int64 v116; // r9
  void *v117; // rax
  _QWORD *v118; // rax
  bool v119; // [rsp+8h] [rbp-1A0h]
  unsigned __int8 v120; // [rsp+8h] [rbp-1A0h]
  int v121; // [rsp+10h] [rbp-198h]
  bool v122; // [rsp+10h] [rbp-198h]
  __int64 *v123; // [rsp+10h] [rbp-198h]
  __int64 v124; // [rsp+18h] [rbp-190h]
  __int64 v125; // [rsp+30h] [rbp-178h]
  unsigned __int64 v126; // [rsp+38h] [rbp-170h] BYREF
  __int64 v127; // [rsp+48h] [rbp-160h] BYREF
  __int64 v128; // [rsp+50h] [rbp-158h] BYREF
  __int64 v129; // [rsp+58h] [rbp-150h] BYREF
  __m128 v130; // [rsp+60h] [rbp-148h] BYREF
  __int64 v131; // [rsp+70h] [rbp-138h] BYREF
  __int64 v132; // [rsp+78h] [rbp-130h]
  unsigned int v133; // [rsp+80h] [rbp-128h]
  void *ptr; // [rsp+90h] [rbp-118h] BYREF
  __int64 v135; // [rsp+98h] [rbp-110h]
  _BYTE v136[16]; // [rsp+A0h] [rbp-108h] BYREF
  void *v137[2]; // [rsp+B0h] [rbp-F8h] BYREF
  int v138; // [rsp+C0h] [rbp-E8h]
  char v139; // [rsp+C4h] [rbp-E4h]
  __int64 v140; // [rsp+C8h] [rbp-E0h] BYREF
  __int64 (__fastcall **v141)(); // [rsp+E0h] [rbp-C8h] BYREF
  unsigned __int64 v142; // [rsp+E8h] [rbp-C0h]
  void **v143; // [rsp+F0h] [rbp-B8h]
  __int64 *v144; // [rsp+F8h] [rbp-B0h] BYREF
  unsigned __int8 *v145; // [rsp+100h] [rbp-A8h] BYREF
  _BYTE v146[88]; // [rsp+108h] [rbp-A0h] BYREF
  unsigned int v147; // [rsp+160h] [rbp-48h]
  char v148; // [rsp+164h] [rbp-44h]

  v7 = a2;
  v126 = a4;
  v127 = a3;
  v9 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) != 42 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) != 42 || (v9 = sub_F63050(v9, a2, v31, a4)) == 0 )
    {
      if ( !sub_F65EB0(&v127) )
      {
        v17 = 0;
        v32 = (void *)sub_EEC8C0(v126, a2, *(double *)a5.m128_u64);
        v19 = 5181;
        v137[0] = v32;
        goto LABEL_7;
      }
LABEL_26:
      sub_168B9F0((__int64)&v141, a1 + 1, a2, 0x155Fu, 0);
      LODWORD(ptr) = 0;
      v51 = sub_1587D10((__int64)&v141, (int *)&ptr);
      v137[0] = (void *)sub_EEC8C0(v126, (__int64)&ptr, *(double *)a5.m128_u64);
      sub_1587DB0(v51, (__int64 *)v137);
      sub_15F7200(&v141);
      return 1;
    }
  }
  v127 = *(_QWORD *)(v9 + 32);
  if ( sub_F65EB0(&v127) )
    goto LABEL_26;
  v10 = sub_F65EB0(&v127);
  if ( v10 )
  {
    v119 = v10;
    sub_168B9F0((__int64)&v141, a1 + 1, a2, 0x1560u, 0);
    LODWORD(ptr) = 2;
    v63 = sub_1587D10((__int64)&v141, (int *)&ptr);
    v137[0] = (void *)sub_EEC8C0(v126, (__int64)&ptr, *(double *)a5.m128_u64);
    sub_1587DB0(v63, (__int64 *)v137);
    sub_15F7200(&v141);
    return v119;
  }
  v15 = *(_QWORD *)(v127 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v17 = 1;
    goto LABEL_12;
  }
  v17 = 1;
  v18 = (void *)sub_EEC8C0(v126, a2, *(double *)a5.m128_u64);
  v19 = 5182;
  v137[0] = v18;
LABEL_7:
  LODWORD(v142) = v19;
  v143 = v137;
  v141 = off_2BC64B0;
  if ( (unsigned __int8)sub_1E63C20(a1, (unsigned int)a2, v127, 1, &v141) )
    return 1;
  if ( !v17 )
  {
    v20 = sub_F582C0(*(_QWORD *)(v127 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v20 )
    {
      v122 = v20;
      sub_168B9F0((__int64)&v141, a1 + 1, a2, 0x1440u, 0);
      v64 = sub_1605D30((__int64)&v141, &v127);
      v137[0] = (void *)sub_EEC8C0(v126, (__int64)&v127, *(double *)a5.m128_u64);
      sub_1587DB0(v64, (__int64 *)v137);
      sub_15F7200(&v141);
      return v122;
    }
  }
  a2 = (unsigned int)a2;
  LODWORD(v142) = 5180;
  v141 = off_2BC64D8;
  v143 = (void **)&v126;
  if ( (unsigned __int8)sub_1866EA0(
                          a1,
                          a2,
                          a3,
                          (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD, unsigned __int64))&v141) )
    return 1;
  v15 = *(_QWORD *)(v127 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_12:
  v21 = sub_F63270(v15, a2, v11, v12, v13, v14);
  v24 = (__int64)v21;
  if ( !v21 )
    return 0;
  sub_1884910((__int64)a1, a2, v21, 0, v22, v23);
  if ( v17 )
    return 0;
  v33 = *(_QWORD *)(v24 + 104);
  sub_7052B0((__int64 *)(v33 + 96), v33, v25, v26, v27, v28);
  if ( *(char *)(*(_QWORD *)(v24 + 128) + 7LL) >= 0 )
  {
    v33 = v24;
    v38 = sub_1A69EF0(a1, v24);
    if ( v38 )
    {
      v39 = sub_C00A40(v126, v24, v34, v35, v36);
      sub_1910D40((__int64)a1, v39, v38, 1, v40, v41, a5, a6);
      sub_168B9B0((__int64)&v141, (__int64)(a1 + 1), 2947);
      v42 = v127;
      sub_AE9DF0((unsigned __int8 **)&v141, v127, 8u);
      v46 = sub_C00A40(v126, v42, v43, v44, v45);
      sub_16602B0(a1, v46, v38, (__int64)&v141, 0);
      v50 = (unsigned __int8 *)v141;
      if ( v141 && v142 )
        sub_1580C40(v142, (unsigned __int64)v141);
      LODWORD(v141) = sub_C00A40(v126, (__int64)v50, v47, v48, v49);
      v33 = v38;
      if ( (unsigned __int8)sub_18F5260(
                              (__int64)a1,
                              v38,
                              (int *)&v141,
                              1u,
                              0,
                              0,
                              (__m128i)a5,
                              *(double *)a6.m128_u64,
                              0,
                              0,
                              0) )
        return 1;
    }
  }
  v52 = a1[31];
  v53 = *(_DWORD *)(*(_QWORD *)(v52 + 17448) + 340LL);
  if ( v53 != 10 )
  {
LABEL_29:
    if ( v53 <= 9 )
    {
      v33 = v127;
      v54 = sub_A980A0(v52, v127);
      v55 = sub_A98010(a1[31]);
      if ( v55 < v54 )
      {
        v121 = v55;
        sub_168B9F0((__int64)&v141, a1 + 1, v7, 0x1D15u, 0);
        sub_15F7200(&v141);
        sub_168B9F0((__int64)&v141, a1 + 1, v7, 0x1913u, 0);
        v56 = sub_1605D30((__int64)&v141, &v127);
        LODWORD(ptr) = v54;
        v57 = sub_16CF160(v56, (unsigned int *)&ptr);
        v33 = (__int64)v137;
        LODWORD(v137[0]) = v121;
        sub_16CF160(v57, (unsigned int *)v137);
        sub_15F7200(&v141);
      }
    }
    if ( (*(_BYTE *)(a1[29] + 14LL) & 2) != 0 )
    {
      v58 = sub_B97300(v24);
      if ( v58 )
      {
        v61 = *(_QWORD *)(v58 + 48) & 0xFFFFFFFFFFFFFFF0LL;
        v62 = *(_QWORD *)v61;
        if ( (*(_BYTE *)(*(_QWORD *)v61 + 16LL) == 26 || (v62 = sub_199F9B0(v62, v33, v59, v60)) != 0)
          && ((*(_BYTE *)(v62 + 19) >> 1) & 0xFu) - 9 > 1
          && (unsigned int)sub_F63060(v62) )
        {
          sub_168B9F0((__int64)&v141, a1 + 1, v7, 0x143Fu, 0);
          if ( v146[80] )
          {
            sub_AE9DF0(&v145, v24, 0xAu);
          }
          else if ( v148 )
          {
            v114 = sub_168B9E0(&v141);
            v117 = v143;
            if ( v143 )
              v117 = (void *)(*((__int64 (__fastcall **)(void **))*v143 + 4))(v143);
            v137[0] = v117;
            v118 = sub_1587BC0(v114, (__int64 *)v137, v112, v113, v115, v116);
            sub_AE9DF0((unsigned __int8 **)(*v118 + 32LL * v147 + 8), v24, 0xAu);
          }
          sub_15F7200(&v141);
        }
      }
    }
    return 0;
  }
  v128 = v24;
  ptr = v136;
  v135 = 0x200000000LL;
  v137[0] = &v140;
  v144 = (__int64 *)v146;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v137[1] = &dword_0 + 2;
  v138 = 0;
  v139 = 1;
  v141 = nullptr;
  v142 = 0;
  LODWORD(v143) = 0;
  v145 = nullptr;
  v130.m128_u64[0] = 0;
  sub_19A7890(&v131, 0, v34, v35, v36, v37);
  sub_19A4CE0(&v131, &v128, &v130);
  v68 = (__int64 *)v130.m128_u64[0];
  LODWORD(v132) = v132 + 1;
  if ( *(_QWORD *)v130.m128_u64[0] != -4096 )
    --HIDWORD(v132);
  v69 = v128;
  *(_DWORD *)(v130.m128_u64[0] + 8) = 1;
  *v68 = v69;
  v70 = (unsigned int)v143;
  if ( !(_DWORD)v143 )
  {
    v130.m128_u64[0] = 0;
LABEL_112:
    v111 = 2 * (_DWORD)v143;
LABEL_113:
    sub_19BEE20((__int64)&v141, v111, v69, v65, v66, (__int64)v67);
    sub_19A75B0((__int64 *)&v141, &v128, &v130);
    v65 = v128;
    v71 = v141;
    v70 = (unsigned int)v143;
    LODWORD(v69) = v142 + 1;
    v67 = (_QWORD *)v130.m128_u64[0];
    goto LABEL_97;
  }
  v65 = v128;
  v71 = v141;
  v72 = ((_DWORD)v143 - 1) & (((unsigned int)v128 >> 9) ^ ((unsigned int)v128 >> 4));
  v73 = (unsigned __int8 *)&v141[v72];
  v74 = *(_QWORD *)v73;
  if ( *(_QWORD *)v73 == v128 )
  {
LABEL_47:
    sub_19A7A90(&v130, v73, &v141[(unsigned int)v143], (__int64)&v141, 1);
    goto LABEL_48;
  }
  v107 = 1;
  v67 = nullptr;
  if ( v74 != -4096 )
  {
    while ( 1 )
    {
      if ( !v67 && v74 == -8192 )
        v67 = v73;
      v72 = ((_DWORD)v143 - 1) & (v107 + v72);
      v73 = (unsigned __int8 *)&v141[v72];
      v74 = *(_QWORD *)v73;
      if ( v128 == *(_QWORD *)v73 )
        goto LABEL_47;
      if ( v74 == -4096 )
      {
        if ( v67 )
          goto LABEL_95;
        break;
      }
      ++v107;
    }
  }
  v67 = v73;
LABEL_95:
  v130.m128_u64[0] = (unsigned __int64)v67;
  v69 = (unsigned int)(v142 + 1);
  v66 = (unsigned int)(4 * v69);
  if ( (unsigned int)v66 >= 3 * (int)v143 )
    goto LABEL_112;
  v66 = (unsigned int)v143 >> 3;
  if ( (int)v143 - HIDWORD(v142) - (int)v69 <= (unsigned int)v66 )
  {
    v111 = (int)v143;
    goto LABEL_113;
  }
LABEL_97:
  v85 = *v67 == -4096;
  LODWORD(v142) = v69;
  if ( !v85 )
    --HIDWORD(v142);
  *v67 = v65;
  sub_19A7A90(&v130, v67, &v71[v70], (__int64)&v141, 1);
  v108 = (unsigned int)v145;
  v109 = v128;
  v110 = (unsigned int)v145 + 1LL;
  if ( v110 > HIDWORD(v145) )
  {
    sub_2237220(&v144, v146, v110, 8);
    v108 = (unsigned int)v145;
  }
  v144[v108] = v109;
  LODWORD(v145) = (_DWORD)v145 + 1;
LABEL_48:
  sub_19BF080(v128, (__int64)&v131, (__int64)v137, (__int64)&v141, 1, v75);
  v79 = v144;
  v80 = &v144[(unsigned int)v145];
  if ( v144 == v80 )
    goto LABEL_64;
  do
  {
    v83 = *v79;
    v84 = v133;
    v129 = *v79;
    if ( v133 )
    {
      v78 = v133 - 1;
      v77 = v131;
      v76 = (unsigned int)v78 & (((unsigned int)v83 >> 9) ^ ((unsigned int)v83 >> 4));
      v81 = v131 + 16 * v76;
      v82 = *(_QWORD *)v81;
      if ( v83 == *(_QWORD *)v81 )
        goto LABEL_51;
      v105 = 1;
      v106 = 0;
      if ( v82 != -4096 )
      {
        while ( 1 )
        {
          if ( v82 == -8192 && !v106 )
            v106 = v81;
          v76 = (unsigned int)v78 & (v105 + (_DWORD)v76);
          v81 = v131 + 16LL * (unsigned int)v76;
          v82 = *(_QWORD *)v81;
          if ( v83 == *(_QWORD *)v81 )
            break;
          if ( v82 == -4096 )
          {
            if ( v106 )
              v81 = v106;
            goto LABEL_84;
          }
          ++v105;
        }
LABEL_51:
        if ( *(_DWORD *)(v81 + 8) > 1u )
          goto LABEL_52;
        goto LABEL_60;
      }
LABEL_84:
      v130.m128_u64[0] = v81;
      v76 = (unsigned int)(v132 + 1);
      v77 = (unsigned int)(4 * v76);
      if ( (unsigned int)v77 < 3 * v133 )
      {
        v77 = v133 >> 3;
        if ( v133 - HIDWORD(v132) - (unsigned int)v76 > (unsigned int)v77 )
          goto LABEL_57;
        goto LABEL_56;
      }
    }
    else
    {
      v130.m128_u64[0] = 0;
    }
    v84 = 2 * v133;
LABEL_56:
    sub_19A7890(&v131, v84, v83, v76, v77, v78);
    sub_19A4CE0(&v131, &v129, &v130);
    v83 = v129;
    LODWORD(v76) = v132 + 1;
    v81 = v130.m128_u64[0];
LABEL_57:
    v85 = *(_QWORD *)v81 == -4096;
    LODWORD(v132) = v76;
    if ( !v85 )
      --HIDWORD(v132);
    *(_QWORD *)v81 = v83;
    *(_DWORD *)(v81 + 8) = 0;
LABEL_60:
    v86 = (unsigned int)v135;
    v76 = HIDWORD(v135);
    v77 = v129;
    v87 = (unsigned int)v135 + 1LL;
    if ( v87 > HIDWORD(v135) )
    {
      v125 = v129;
      sub_2237220(&ptr, v136, v87, 8);
      v86 = (unsigned int)v135;
      v77 = v125;
    }
    *((_QWORD *)ptr + v86) = v77;
    LODWORD(v135) = v135 + 1;
LABEL_52:
    ++v79;
  }
  while ( v80 != v79 );
  v80 = v144;
LABEL_64:
  if ( v80 != (__int64 *)v146 )
    free(v80);
  operator delete(v141, 8LL * (unsigned int)v143, 8);
  if ( !v139 )
    free(v137[0]);
  v33 = 16LL * v133;
  operator delete(v131, v33, 8);
  v88 = (__int64 *)ptr;
  v123 = (__int64 *)((char *)ptr + 8 * (unsigned int)v135);
  if ( ptr == v123 )
  {
LABEL_88:
    if ( v123 != (__int64 *)v136 )
      free(v123);
    v52 = a1[31];
    v53 = *(_DWORD *)(*(_QWORD *)(v52 + 17448) + 340LL);
    goto LABEL_29;
  }
  v124 = v24;
  while ( 1 )
  {
    v95 = *v88;
    v33 = *v88;
    v96 = sub_1A69F20(a1, *v88, 0);
    v97 = v96;
    if ( v96 )
    {
      v98 = v96;
      v99 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 32LL);
      v89 = v99 == sub_B94CC0 ? sub_B709C0(v98) : v99(v98);
      if ( (*(_BYTE *)(v89 + 82) & 0x40) == 0 )
      {
        v33 = (unsigned int)sub_C00A40(v126, v33, v90, v91, v92);
        sub_1910D40((__int64)a1, v33, v97, 1, v93, v94, a5, a6);
        if ( *(char *)(v97 + 82) >= 0 )
        {
          v33 = v95;
          sub_A681A0(a1[31], v95, v97);
          v102 = sub_B76070(v97, v95, v100, v101);
          if ( v102 != 1 )
            break;
        }
      }
    }
LABEL_73:
    if ( v123 == ++v88 )
    {
      v24 = v124;
      v123 = (__int64 *)ptr;
      goto LABEL_88;
    }
  }
  v103 = 1;
  while ( 1 )
  {
    v33 = v7;
    v104 = sub_190F640((__int64)a1, v7, v97, *(_QWORD *)(*(_QWORD *)(v97 + 120) + 8LL * v103), nullptr, 1, a5);
    if ( (_BYTE)v104 )
      break;
    if ( v102 == ++v103 )
      goto LABEL_73;
  }
  v29 = v104;
  if ( ptr != v136 )
  {
    v120 = v104;
    free(ptr);
    return v120;
  }
  return v29;
}
