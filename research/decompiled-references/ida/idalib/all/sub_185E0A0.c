unsigned __int64 __fastcall sub_185E0A0(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _DWORD *v13; // r15
  int v14; // eax
  __int64 v15; // rsi
  char *v16; // rax
  char *v17; // rdx
  char *v18; // rax
  char *v19; // rcx
  __int64 v20; // rax
  char *v21; // rax
  char *v22; // rdx
  char *v23; // rax
  char *v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  _BYTE *v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r13
  char v34; // bp
  unsigned __int64 v35; // rax
  char *v36; // rbp
  char *v37; // r12
  _BYTE *i; // rax
  __int64 v39; // rsi
  unsigned int v40; // ecx
  __int64 v41; // rdi
  __int64 *v42; // rbp
  __int64 *v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v46; // r13
  _QWORD *v47; // rbp
  _QWORD *v48; // rdi
  _QWORD *v49; // r14
  _QWORD *v50; // r12
  char *v51; // rdi
  __int64 v52; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  size_t v56; // r13
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  size_t v60; // r13
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // r12
  __int64 v66; // rdx
  __int64 v67; // r12
  char v68; // al
  __int64 *v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // rax
  int v74; // r9d
  int v75; // r9d
  unsigned int v76; // edx
  unsigned int v77; // ecx
  __int64 v78; // rax
  unsigned __int64 v79; // rdi
  char v80; // al
  _QWORD *v81; // r10
  unsigned __int64 v82; // rcx
  __int64 v83; // rsi
  char v84; // al
  char v85; // bp
  unsigned __int64 v86; // rdi
  __int64 *v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // r13
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  int v96; // edx
  char v97; // bp
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // r13
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  _QWORD *v108; // [rsp+8h] [rbp-2060h]
  size_t v109; // [rsp+18h] [rbp-2050h]
  __int64 v110; // [rsp+20h] [rbp-2048h]
  __int64 v111; // [rsp+20h] [rbp-2048h]
  __int64 v112; // [rsp+28h] [rbp-2040h]
  char v113; // [rsp+37h] [rbp-2031h] BYREF
  __int64 *v114; // [rsp+38h] [rbp-2030h] BYREF
  _BYTE *v115; // [rsp+40h] [rbp-2028h] BYREF
  unsigned __int64 v116; // [rsp+48h] [rbp-2020h]
  void *v117; // [rsp+60h] [rbp-2008h] BYREF
  unsigned __int64 v118; // [rsp+68h] [rbp-2000h] BYREF
  unsigned __int64 v119[32]; // [rsp+70h] [rbp-1FF8h] BYREF
  _BYTE *v120; // [rsp+170h] [rbp-1EF8h] BYREF
  __int64 v121; // [rsp+178h] [rbp-1EF0h]
  _BYTE v122[2688]; // [rsp+180h] [rbp-1EE8h] BYREF
  void *v123; // [rsp+C00h] [rbp-1468h] BYREF
  __int64 v124; // [rsp+C08h] [rbp-1460h]
  int v125; // [rsp+C10h] [rbp-1458h]
  char v126; // [rsp+C14h] [rbp-1454h]
  _QWORD v127[17]; // [rsp+C18h] [rbp-1450h] BYREF
  int v128; // [rsp+CA0h] [rbp-13C8h]
  __int64 v129; // [rsp+CA8h] [rbp-13C0h]
  __int64 v130; // [rsp+CB0h] [rbp-13B8h]
  void *ptr; // [rsp+CB8h] [rbp-13B0h]
  __int64 v132; // [rsp+CC0h] [rbp-13A8h]
  _BYTE v133[32]; // [rsp+CC8h] [rbp-13A0h] BYREF
  __int64 *v134; // [rsp+CE8h] [rbp-1380h]
  __int64 v135; // [rsp+CF0h] [rbp-1378h]
  _QWORD v136[2]; // [rsp+CF8h] [rbp-1370h] BYREF
  int v137; // [rsp+D08h] [rbp-1360h]
  int v138; // [rsp+D0Ch] [rbp-135Ch]
  unsigned int v139; // [rsp+D10h] [rbp-1358h]
  int v140; // [rsp+D14h] [rbp-1354h]
  bool v141; // [rsp+D18h] [rbp-1350h]
  int v142; // [rsp+D1Ch] [rbp-134Ch]
  int v143; // [rsp+2020h] [rbp-48h]

  v13 = (_DWORD *)a1[2];
  v121 = 0x1000000000LL;
  v14 = v13[6];
  v120 = v122;
  v123 = v127;
  ptr = v133;
  v141 = a5 == 0;
  v132 = 0x400000000LL;
  v134 = v136;
  v137 = v14;
  v140 = v14;
  v124 = 16;
  v125 = 0;
  v126 = 1;
  v127[16] = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v135 = 0;
  v136[0] = 0;
  v136[1] = 1;
  v138 = 1;
  v139 = a2;
  v142 = 0;
  v143 = 0;
  v15 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 32LL))(v13);
  v16 = (char *)sub_1703870((__int64)&v123, v15);
  if ( v126 )
    v17 = (char *)v123 + 8 * HIDWORD(v124);
  else
    v17 = (char *)v123 + 8 * (unsigned int)v124;
  if ( v16 != v17 && *(_QWORD *)v16 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v18 = v16 + 8;
    do
    {
      v19 = v18;
      if ( v17 == v18 )
        break;
      v18 += 8;
    }
    while ( *(_QWORD *)v19 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v20 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 32LL))(v13);
  v21 = (char *)sub_1703870((__int64)&v123, v20 | 1);
  if ( v126 )
    v22 = (char *)v123 + 8 * HIDWORD(v124);
  else
    v22 = (char *)v123 + 8 * (unsigned int)v124;
  if ( v21 != v22 && *(_QWORD *)v21 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v23 = v21 + 8;
    do
    {
      v24 = v23;
      if ( v22 == v23 )
        break;
      v23 += 8;
    }
    while ( *(_QWORD *)v24 >= 0xFFFFFFFFFFFFFFFELL );
  }
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v26 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(v25 + 17) & 4) != 0 )
  {
    if ( (unsigned __int8)v26 > 0x2Au )
      goto LABEL_17;
    v54 = 0x4040600007CLL;
    if ( !_bittest64(&v54, v26) && (_BYTE)v26 != 33 )
      goto LABEL_17;
  }
  else if ( (unsigned __int8)(v26 - 47) <= 1u )
  {
LABEL_17:
    sub_1BFF680(*a1, (unsigned int)&v120, a2, (_DWORD)a1 + 32, a3, a4, 1);
    goto LABEL_18;
  }
  sub_1BFBE60(*a1, a2, *(unsigned int *)(a1[2] + 24), a3, a4, &v120);
LABEL_18:
  v27 = (_BYTE *)*a1;
  v28 = sub_1BF27B0(&v120, *a1, *(unsigned int *)(a1[2] + 24), &v114);
  if ( v28 == 1 )
  {
    if ( a2 == 34 )
    {
      v72 = *(_QWORD *)(*a1 + 248);
      v73 = sub_C1D490(a1[2], (__int64)v27, v29, v30);
      if ( sub_B61960((__int64 *)(v72 + 22888), v73) )
      {
        LODWORD(v35) = sub_185E0A0((_DWORD)a1, 30, a3, a4, (unsigned int)&v120, v74, a7, a8, a9);
        LOWORD(v117) = v35;
        v33 = (unsigned __int64)(int)v35 >> 16;
        BYTE2(v117) = BYTE2(v35);
        if ( BYTE2(v35) > 2u )
          LOBYTE(v33) = 2;
        if ( (_BYTE)v35 )
        {
          v34 = BYTE1(v35);
          LOBYTE(v35) = 1;
        }
        else
        {
          v96 = a3;
          v97 = BYTE1(v35);
          LODWORD(v35) = sub_185E0A0((_DWORD)a1, 16, v96, a4, (unsigned int)&v120, v75, a7, a8, a9);
          v34 = BYTE1(v35) & v97;
          if ( (unsigned __int8)v33 > BYTE2(v35) )
            LOBYTE(v33) = BYTE2(v35);
        }
        goto LABEL_24;
      }
    }
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), a9, 0x1702u, 0);
      v57 = sub_1795A40((__int64)&v117, a1 + 2);
      LOBYTE(v115) = a2 - 30 <= 1;
      v58 = sub_1588420(v57, (unsigned __int8 *)&v115);
      v59 = sub_1852E60(v58, (int *)&a7);
      sub_17BA610(v59, &a8);
      sub_15F7200(&v117);
      if ( a5 )
      {
        v109 = j__strlen(&byte_22F0C30);
        sub_1C00200(
          (unsigned int)&v117,
          a5,
          *a1,
          0,
          a3,
          a4,
          *(_DWORD *)(a1[2] + 24),
          (__int64)sub_1837230,
          (__int64)&v115);
        sub_1C007F0(a5, *a1, a3, a4, (_DWORD)v117, v118, (__int64)&byte_22F0C30, v109, 0);
        if ( v117 != v119 )
          free(v117);
        sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), a9, 0x1703u, 0);
        LODWORD(v115) = a2 != 30;
        sub_1587D10((__int64)&v117, (int *)&v115);
        sub_15F7200(&v117);
      }
      v60 = j__strlen(&byte_22F0C30);
      sub_1C00200(
        (unsigned int)&v117,
        (unsigned int)&v120,
        *a1,
        0,
        a3,
        a4,
        *(_DWORD *)(a1[2] + 24),
        (__int64)sub_1837230,
        (__int64)&v115);
      sub_1C007F0((unsigned int)&v120, *a1, a3, a4, (_DWORD)v117, v118, (__int64)&byte_22F0C30, v60, 0);
      if ( v117 != v119 )
        free(v117);
    }
    goto LABEL_23;
  }
  if ( v28 )
  {
    if ( v28 != 2 )
    {
      if ( v28 == 3 )
      {
        if ( *((_DWORD *)a1 + 44) == 1 )
        {
          v69 = (__int64 *)(*a1 + 8);
          if ( (unsigned __int8)(*((_BYTE *)a1 + 24) - 3) > 1u || (*((_BYTE *)v114 + 105) & 3) != 0 )
          {
            LOBYTE(v33) = 2;
            sub_168B9F0((__int64)&v117, v69, a9, 0x16FDu, 0);
            v70 = sub_1795A40((__int64)&v117, a1 + 2);
            v71 = sub_1852E60(v70, (int *)&a7);
            sub_17BA610(v71, &a8);
            v34 = 1;
            sub_15F7200(&v117);
            sub_18F5080(*a1, *v114);
            LOBYTE(v35) = 1;
          }
          else
          {
            LOBYTE(v33) = 2;
            sub_168B9F0((__int64)&v117, v69, *(_DWORD *)(*v114 + 24), 0x1706u, 0);
            sub_1795A40((__int64)&v117, a1 + 2);
            v34 = 1;
            sub_15F7200(&v117);
            LOBYTE(v35) = 1;
          }
          goto LABEL_24;
        }
        goto LABEL_23;
      }
LABEL_59:
      LOBYTE(v33) = 2;
      v34 = 1;
      LOBYTE(v35) = 0;
      goto LABEL_24;
    }
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      if ( (unsigned int)sub_B77890(a1[2]) == 34 && a2 != 34 )
        v55 = (a2 != 30) + 1LL;
      else
        v55 = 0;
      v112 = v55;
      v56 = j__strlen(&byte_22F0C30);
      v110 = *a1;
      sub_168B9B0((__int64)&v115, *a1 + 8, 5884);
      sub_AE9DF0(&v115, a1[2], 0xAu);
      sub_AE9DF0(&v115, v112, 3u);
      sub_AE9DF0(&v115, (int)a7, 2u);
      sub_AE9DF0(&v115, a8, 0xAu);
      LODWORD(v117) = a9;
      sub_1582CA0((__int64)&v118, &v115);
      sub_1C022A0(
        (unsigned int)&v120,
        (unsigned int)&v117,
        v110,
        2,
        a3,
        a4,
        (__int64)&byte_22F0C30,
        v56,
        0,
        (__int64)sub_16A7620,
        (__int64)&v113);
      if ( v118 && v119[0] )
        sub_1580C40(v119[0], v118);
      if ( v115 && v116 )
        sub_1580C40(v116, (unsigned __int64)v115);
    }
LABEL_23:
    LOBYTE(v33) = 2;
    v34 = 1;
    LOBYTE(v35) = 1;
LABEL_24:
    LOBYTE(v117) = v35;
    BYTE1(v117) = v34;
    BYTE2(v117) = v33;
    goto LABEL_25;
  }
  if ( (unsigned __int8)(*((_BYTE *)a1 + 24) - 3) <= 1u && (*((_BYTE *)v114 + 105) & 3) == 0 )
  {
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      if ( *v114 )
      {
        v76 = *(_DWORD *)(*v114 + 24);
        v77 = 5894;
      }
      else
      {
        v77 = 5895;
        v76 = *(_DWORD *)((*(_QWORD *)(v114[6] + 144) & 0xFFFFFFFFFFFFFFF8LL) + 24);
      }
      sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), v76, v77, 0);
      sub_1795A40((__int64)&v117, a1 + 2);
      sub_15F7200(&v117);
    }
    goto LABEL_75;
  }
  v65 = sub_F63270(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          (__int64)v27,
          v29,
          v30,
          v31,
          v32);
  if ( v65 && (v114[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v78 = *(_QWORD *)((v114[1] & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v79 = v78 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v78 & 4) != 0 )
      v79 = *(_QWORD *)v79;
    v80 = *(_BYTE *)(v79 + 8) & 0x7F;
    if ( v80 == 62 )
      v80 = *(_BYTE *)(sub_B8EAA0(v79) + 8) & 0x7F;
    if ( ((v80 + 70) & 0x7Fu) <= 3 )
    {
      v81 = (_QWORD *)*a1;
      if ( (_DWORD)a7 == 1 )
      {
        v82 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
      }
      else
      {
        v95 = sub_A7A9D0(v81[31], a1[1], v61, v62, v63, v64);
        v81 = (_QWORD *)*a1;
        v82 = v95;
      }
      v83 = (__int64)(v81 + 1);
      v111 = v82;
      v108 = v81;
      if ( *((_DWORD *)a1 + 44) == 1 )
      {
        sub_168B9B0((__int64)&v115, v83, 5889);
        sub_AE9DF0(&v115, a1[2], 0xAu);
        sub_AE9DF0(&v115, (int)a7, 2u);
        sub_AE9DF0(&v115, a8, 0xAu);
        sub_1582CA0((__int64)&v117, &v115);
        v85 = sub_165FA10(v108, (__int64)v65, v114[1], v111, a9, (__int64)&v117);
        if ( v117 && v118 )
          sub_1580C40(v118, (unsigned __int64)v117);
        v27 = v115;
        if ( v115 )
        {
          v86 = v116;
          if ( v116 )
            goto LABEL_118;
        }
      }
      else
      {
        sub_168B9B0((__int64)&v117, v83, 0);
        v84 = sub_165FA10(v108, (__int64)v65, v114[1], v111, a9, (__int64)&v117);
        v27 = v117;
        v85 = v84;
        if ( v117 )
        {
          v86 = v118;
          if ( v118 )
LABEL_118:
            sub_1580C40(v86, (unsigned __int64)v27);
        }
      }
      if ( !v85 )
        goto LABEL_75;
    }
  }
  v66 = 0;
  if ( a2 == 34 )
    LOBYTE(v66) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1D490(a1[2], (__int64)v27, 0, v62)
                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                   + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL) == 16;
  v67 = *v114;
  if ( *v114 )
  {
    v68 = *(_BYTE *)(v67 + 84) & 3;
    if ( *((_DWORD *)a1 + 44) != 2 || v68 )
    {
      v34 = v68 != 0;
      if ( !(_BYTE)v66 )
      {
        LOBYTE(v33) = 2;
        LOBYTE(v35) = 0;
        goto LABEL_24;
      }
      v88 = sub_C1D490(*v114, (__int64)v27, v66, v62);
      v89 = sub_F57E80(*(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL));
      v92 = *a1;
      if ( v89 && (*(_QWORD *)(v89 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v89 + 17) & 4) == 0 )
      {
        v27 = (_BYTE *)v67;
        if ( (unsigned __int8)sub_1D3EC30(v92, v67, *(unsigned int *)(a1[2] + 24), 0) )
        {
          if ( !*((_DWORD *)a1 + 44) )
          {
            sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), *(_DWORD *)(a1[2] + 24), 0xE31u, 0);
            v98 = sub_1852E60((__int64)&v117, (int *)&a7);
            sub_17BA610(v98, &a8);
            sub_15F7200(&v117);
            sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), a9, 0x1700u, 0);
            v99 = sub_1852E60((__int64)&v117, (int *)&a7);
            sub_17BA610(v99, &a8);
            sub_15F7200(&v117);
            sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), *(_DWORD *)(v67 + 24), 0x16FFu, 0);
            v100 = sub_1852E60((__int64)&v117, (int *)&a7);
            sub_17BA610(v100, &a8);
            sub_15F7200(&v117);
          }
          goto LABEL_75;
        }
        v92 = *a1;
      }
      v93 = *(_QWORD *)(v92 + 248);
      v94 = sub_183A880(v67, (__int64)v27, v90, v91);
      v35 = sub_B61960((__int64 *)(v93 + 22888), v94);
      if ( v35 )
      {
        LOBYTE(v33) = *(_BYTE *)(v35 + 112);
        LOBYTE(v35) = 0;
        goto LABEL_24;
      }
      if ( *((_DWORD *)a1 + 44) == 1 )
      {
        sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), a9, 0x16FEu, 0);
        v101 = sub_1852E60((__int64)&v117, (int *)&a7);
        v102 = sub_17BA610(v101, &a8);
        v115 = (_BYTE *)(sub_183A880(v67, (__int64)&a8, v103, v104) & 0xFFFFFFFFFFFFFFF8LL);
        sub_162B6D0(v102, (__int64 *)&v115);
        sub_15F7200(&v117);
        sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), *(_DWORD *)(v67 + 24), 0x16FFu, 0);
        v105 = sub_1852E60((__int64)&v117, (int *)&a7);
        sub_17BA610(v105, &a8);
        sub_15F7200(&v117);
      }
    }
    else
    {
      v87 = (__int64 *)(*a1 + 8);
      if ( (_DWORD)a7 )
      {
        sub_168B9F0((__int64)&v117, v87, a9, 0x1704u, 0);
        v106 = sub_1852E60((__int64)&v117, (int *)&a7);
        sub_17BA610(v106, &a8);
        sub_15F7200(&v117);
        v87 = (__int64 *)(*a1 + 8);
      }
      sub_168B9F0((__int64)&v117, v87, *(_DWORD *)(v67 + 24), 0x1705u, 0);
      sub_15F7200(&v117);
    }
  }
  else
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v114[2] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
    {
      if ( (_BYTE)v66 )
      {
        v34 = 1;
        LOBYTE(v33) = sub_B5FF90(v114[2], (__int64)v27, v66, v62, v63);
        LOBYTE(v35) = 0;
        goto LABEL_24;
      }
      goto LABEL_59;
    }
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), *(_DWORD *)(a1[2] + 24), 0x170Au, 0);
      sub_1795A40((__int64)&v117, a1 + 2);
      sub_15F7200(&v117);
      sub_168B9F0((__int64)&v117, (__int64 *)(*a1 + 8), *(_DWORD *)(a8 + 24), 0x67u, 0);
      sub_15F7200(&v117);
    }
  }
LABEL_75:
  BYTE2(v117) = 2;
  LOWORD(v117) = 257;
LABEL_25:
  sub_1BD27A0(&v120);
  v36 = (char *)ptr;
  v37 = (char *)ptr + 8 * (unsigned int)v132;
  if ( ptr != v37 )
  {
    for ( i = ptr; ; i = ptr )
    {
      v39 = 0x40000000000LL;
      v40 = (unsigned int)((v36 - i) >> 3) >> 7;
      if ( v40 <= 0x1D )
        v39 = 4096LL << v40;
      v41 = *(_QWORD *)v36;
      v36 += 8;
      operator delete(v41, v39, 16);
      if ( v37 == v36 )
        break;
    }
  }
  v42 = v134;
  v43 = &v134[2 * (unsigned int)v135];
  if ( v134 != v43 )
  {
    do
    {
      v44 = v42[1];
      v45 = *v42;
      v42 += 2;
      operator delete(v45, v44, 16);
    }
    while ( v43 != v42 );
    v43 = v134;
  }
  if ( v43 != v136 )
    free(v43);
  if ( ptr != v133 )
    free(ptr);
  if ( !v126 )
    free(v123);
  v46 = v120;
  v47 = &v120[168 * (unsigned int)v121];
  if ( v120 != (_BYTE *)v47 )
  {
    do
    {
      while ( 1 )
      {
        v47 -= 21;
        v48 = (_QWORD *)v47[8];
        v49 = (_QWORD *)v47[9];
        v50 = v48;
        if ( v49 != v48 )
        {
          do
          {
            while ( 1 )
            {
              v51 = (char *)v50[3];
              if ( v51 == (char *)(v50 + 5) )
                break;
              operator delete(v51);
              v50 += 8;
              if ( v49 == v50 )
                goto LABEL_44;
            }
            v50 += 8;
          }
          while ( v49 != v50 );
LABEL_44:
          v48 = (_QWORD *)v47[8];
        }
        if ( !v48 )
          break;
        operator delete(v48);
        if ( v46 == v47 )
          goto LABEL_47;
      }
    }
    while ( v46 != v47 );
LABEL_47:
    v47 = v120;
  }
  if ( v47 != (_QWORD *)v122 )
    free(v47);
  v52 = (unsigned __int8)v117;
  BYTE1(v52) = BYTE1(v117);
  return ((unsigned __int64)BYTE2(v117) << 16) | v52;
}
