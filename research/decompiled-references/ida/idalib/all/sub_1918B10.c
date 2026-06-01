unsigned __int64 __fastcall sub_1918B10(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        char a9,
        char a10,
        char a11)
{
  unsigned __int8 v12; // r14
  char v13; // r12
  unsigned __int64 v16; // rax
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // r12
  __int64 *v31; // rdx
  unsigned __int8 v32; // r13
  __int64 *v33; // rcx
  __int64 v34; // rsi
  _QWORD *v35; // rdi
  char v36; // r12
  unsigned __int64 v37; // rsi
  char v38; // al
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r12
  bool v45; // al
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r10
  __int64 v49; // r11
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 *v53; // rsi
  __int64 v54; // rax
  bool v55; // al
  __int64 *v56; // r12
  __int64 v57; // r13
  bool v58; // al
  __int64 v59; // rcx
  __int64 v60; // r10
  __int64 v61; // r11
  char v62; // al
  __int64 v63; // rcx
  __int64 v64; // rax
  bool v65; // al
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r11
  __int64 v70; // r10
  __int64 *v71; // rsi
  bool v72; // al
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r10
  __int64 v78; // r11
  char v79; // al
  __int64 v80; // rdi
  char v81; // al
  __int64 *v82; // rsi
  unsigned int v83; // eax
  __int64 v84; // rax
  char v85; // al
  char v86; // al
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r11
  bool v91; // al
  char v92; // al
  unsigned int v93; // ecx
  __int64 v94; // rax
  __int64 v95; // r12
  __int64 v96; // rbp
  __int64 *v97; // rsi
  char v98; // al
  char v99; // al
  char v100; // al
  __int64 v101; // rax
  char v102; // al
  char v103; // al
  unsigned int v104; // [rsp+8h] [rbp-150h]
  __int64 v105; // [rsp+10h] [rbp-148h]
  __int64 v106; // [rsp+10h] [rbp-148h]
  __int64 v107; // [rsp+10h] [rbp-148h]
  __int64 v108; // [rsp+10h] [rbp-148h]
  __int64 v109; // [rsp+10h] [rbp-148h]
  __int64 v110; // [rsp+10h] [rbp-148h]
  __int64 v111; // [rsp+10h] [rbp-148h]
  __int64 v112; // [rsp+10h] [rbp-148h]
  __int64 *v113; // [rsp+10h] [rbp-148h]
  __int64 v114; // [rsp+18h] [rbp-140h]
  __int64 v115; // [rsp+18h] [rbp-140h]
  __int64 v116; // [rsp+18h] [rbp-140h]
  __int64 v117; // [rsp+18h] [rbp-140h]
  __int64 v118; // [rsp+18h] [rbp-140h]
  __int64 v119; // [rsp+18h] [rbp-140h]
  __int64 v120; // [rsp+18h] [rbp-140h]
  __int64 *v121; // [rsp+18h] [rbp-140h]
  __int64 v122; // [rsp+18h] [rbp-140h]
  __int64 v123; // [rsp+28h] [rbp-130h]
  bool v124; // [rsp+28h] [rbp-130h]
  __int64 v125; // [rsp+30h] [rbp-128h]
  __int64 *v126; // [rsp+30h] [rbp-128h]
  __int64 v127; // [rsp+30h] [rbp-128h]
  __int64 v128; // [rsp+30h] [rbp-128h]
  __int64 v129; // [rsp+30h] [rbp-128h]
  __int64 v130; // [rsp+38h] [rbp-120h]
  unsigned __int64 v131; // [rsp+38h] [rbp-120h]
  __int64 v132; // [rsp+38h] [rbp-120h]
  __int64 v133; // [rsp+38h] [rbp-120h]
  __int64 v134; // [rsp+40h] [rbp-118h]
  __int64 v135; // [rsp+40h] [rbp-118h]
  __int64 *v136; // [rsp+48h] [rbp-110h]
  __int64 v137; // [rsp+48h] [rbp-110h]
  __int64 v138; // [rsp+50h] [rbp-108h]
  __int64 v139; // [rsp+58h] [rbp-100h]
  unsigned int v140; // [rsp+64h] [rbp-F4h] BYREF
  int v141; // [rsp+68h] [rbp-F0h] BYREF
  unsigned int v142; // [rsp+6Ch] [rbp-ECh] BYREF
  unsigned __int64 v143; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v144; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v145; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v146; // [rsp+88h] [rbp-D0h] BYREF
  _QWORD v147[25]; // [rsp+90h] [rbp-C8h] BYREF

  v12 = a5;
  v13 = a6;
  v104 = a4;
  if ( !(_BYTE)a5 )
  {
    v16 = sub_19179A0((__int64)a1, (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), 1u, a4, a5, a6, a7, a8);
    *a2 = v16;
    if ( v16 == 1 )
      return 0;
  }
  v17 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  v18 = sub_19179A0((__int64)a1, v17, 1u, a4, a5, a6, a7, a8);
  *a3 = v18;
  if ( v18 == 1 )
    return 0;
  v147[0] = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v20 = sub_6D5440(v147);
  v21 = *a3;
  v143 = v20;
  v147[0] = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v144 = sub_6D5440(v147);
  v25 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 57 > 1 )
    v25 = sub_18BBF30(*(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v17, v22, v23);
  v26 = *(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v26 + 16) - 57 > 1 )
  {
    v123 = v25;
    v27 = sub_18BBF30(*(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v17, v22, v23);
    v25 = v123;
    v26 = v27;
  }
  if ( (*(_BYTE *)(a1[29] + 89) & 1) != 0 )
    return sub_19FC940(a1[85], a2, a3, v143, v144, v12);
  if ( v25 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v28 + 16) == 13 && ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) == 0x68 )
      return sub_18F40B0((__int64)a1, v104, a2, a3, *(double *)a7.m128_u64);
  }
  if ( v26 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v29 + 16) == 13 && ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) == 0x68 )
      return sub_18F40B0((__int64)a1, v104, a2, a3, *(double *)a7.m128_u64);
    v124 = v25 != 0;
    v30 = (v25 != 0) & (v13 ^ 1);
    if ( v30 )
    {
      v124 = v30;
      if ( ((*(_BYTE *)(v25 + 18) >> 3) & 0xF) == 3 && ((*(_BYTE *)(v26 + 18) >> 3) & 0xF) == 3 )
        goto LABEL_20;
    }
  }
  else
  {
    v124 = v25 != 0;
  }
  v31 = (__int64 *)(v143 & 0xFFFFFFFFFFFFFFF0LL);
  if ( a10 )
  {
    v32 = v144;
    v33 = (__int64 *)(v144 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v134 = v26;
    v130 = v25;
    if ( sub_18BFE30(*v31) || (v32 = v144, sub_18BFE30(*(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL))) )
    {
LABEL_20:
      if ( a11 )
        return sub_18F40B0((__int64)a1, v104, a2, a3, *(double *)a7.m128_u64);
      return 0;
    }
    v33 = (__int64 *)(v144 & 0xFFFFFFFFFFFFFFF0LL);
    v31 = (__int64 *)(v143 & 0xFFFFFFFFFFFFFFF0LL);
    v25 = v130;
    v26 = v134;
  }
  v34 = v31[1];
  v35 = (_QWORD *)a1[31];
  v36 = v34 | v143;
  v37 = v34 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v37 | v36 & 7) == (v33[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v33[1] | v32) & 7) )
    return sub_ABBE20(v35, v143, v144, 0);
  if ( v124 && v26 )
  {
    v37 = v143;
    v125 = v26;
    v105 = v25;
    v38 = sub_A63DE0((__int64)v35, v143, v144, (__int64)v33, v24);
    v25 = v105;
    v26 = v125;
    if ( v38 )
    {
      if ( *(_BYTE *)(v105 + 16) != 58 )
      {
        if ( !v12 )
          *a2 = sub_160A600(
                  (__int64)a1,
                  *a2 & 0xFFFFFFFFFFFFFFFELL,
                  v144,
                  1u,
                  0,
                  0,
                  *(double *)a7.m128_u64,
                  *(double *)a8.m128_u64,
                  0);
        return v144;
      }
      goto LABEL_79;
    }
    if ( !a9 )
      goto LABEL_62;
    if ( *(_DWORD *)(v105 + 20) != *(_DWORD *)(v125 + 20) )
      goto LABEL_62;
    v39 = sub_A97D20(a1[31], *(_QWORD *)(*(_QWORD *)(v105 + 32) & 0xFFFFFFFFFFFFFFF0LL));
    v37 = *(_QWORD *)(*(_QWORD *)(v125 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v40 = sub_A97D20(a1[31], v37);
    v26 = v125;
    v25 = v105;
    if ( v39 != v40 )
      goto LABEL_62;
    if ( ((*(_BYTE *)(v105 + 18) >> 3) & 0xF) == 1 )
    {
      v81 = sub_9EC890(*(_QWORD *)(*(_QWORD *)(v105 + 32) & 0xFFFFFFFFFFFFFFF0LL), v37, v41, v42, v43);
      v25 = v105;
      v26 = v125;
      if ( v81 )
      {
        if ( ((*(_BYTE *)(v125 + 18) >> 3) & 0xF) == 3 )
        {
LABEL_79:
          *a3 = sub_160A600(
                  (__int64)a1,
                  *a3 & 0xFFFFFFFFFFFFFFFELL,
                  v143,
                  1u,
                  0,
                  0,
                  *(double *)a7.m128_u64,
                  *(double *)a8.m128_u64,
                  0);
          return v143;
        }
      }
    }
    if ( !v12 && ((*(_BYTE *)(v25 + 18) >> 3) & 0xF) == 3 && ((*(_BYTE *)(v26 + 18) >> 3) & 0xF) == 1 )
    {
      v114 = v25;
      v106 = v26;
      if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFFFF0LL), v37, v41, v42, v43) )
      {
        *a2 = sub_160A600(
                (__int64)a1,
                *a2 & 0xFFFFFFFFFFFFFFFELL,
                v144,
                1u,
                0,
                0,
                *(double *)a7.m128_u64,
                *(double *)a8.m128_u64,
                0);
        return v144;
      }
      v26 = v106;
      v25 = v114;
      v33 = (__int64 *)(v144 & 0xFFFFFFFFFFFFFFF0LL);
      v31 = (__int64 *)(v143 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
LABEL_62:
      v33 = (__int64 *)(v144 & 0xFFFFFFFFFFFFFFF0LL);
      v31 = (__int64 *)(v143 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  v44 = *v33;
  if ( (unsigned int)*(unsigned __int8 *)(*v33 + 16) - 57 > 1 )
  {
    v116 = v26;
    v108 = v25;
    v126 = v31;
    v54 = sub_18BBF30(*v33, v37, (__int64)v31, (__int64)v33);
    v140 = 0;
    v44 = v54;
    v55 = sub_F58260(*v126);
    v48 = v108;
    v49 = v116;
    if ( !v55 || !v44 )
      goto LABEL_54;
  }
  else
  {
    v140 = 0;
    v115 = v26;
    v107 = v25;
    v45 = sub_F58260(*v31);
    v48 = v107;
    v49 = v115;
    if ( !v45 )
      goto LABEL_54;
  }
  v50 = (*(_BYTE *)(v44 + 18) >> 3) & 0xF;
  v46 = (v50 + 10) & 0xF;
  if ( (unsigned __int8)v46 <= 1u )
  {
LABEL_49:
    sub_168B9F0((__int64)v147, a1 + 1, v104, 0x14C3u, 0);
LABEL_50:
    v51 = sub_1588370((__int64)v147, &v140);
    v52 = sub_1605D30(v51, (__int64 *)&v143);
    v53 = (__int64 *)&v144;
LABEL_51:
    sub_1605D30(v52, v53);
    sub_15F7200(v147);
    return 0;
  }
  if ( ((v50 + 8) & 0xFu) <= 4 )
  {
LABEL_48:
    v140 = 1;
    goto LABEL_49;
  }
LABEL_54:
  v56 = (__int64 *)(v144 & 0xFFFFFFFFFFFFFFF0LL);
  v57 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v57 + 16) - 57 > 1 )
  {
    v119 = v49;
    v111 = v48;
    v64 = sub_18BBF30(*(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFF0LL), v37, v46, v47);
    v140 = 0;
    v57 = v64;
    v65 = sub_F58260(*v56);
    v60 = v111;
    v61 = v119;
    if ( !v65 || !v57 )
      goto LABEL_58;
  }
  else
  {
    v140 = 0;
    v117 = v49;
    v109 = v48;
    v58 = sub_F58260(*v56);
    v60 = v109;
    v61 = v117;
    if ( !v58 )
      goto LABEL_58;
  }
  v62 = (*(_BYTE *)(v57 + 18) >> 3) & 0xF;
  if ( ((v62 + 10) & 0xFu) <= 1 )
    goto LABEL_49;
  if ( ((v62 + 8) & 0xFu) <= 4 )
    goto LABEL_48;
LABEL_58:
  v118 = v61;
  v110 = v60;
  if ( (unsigned __int8)sub_18BE7A0(v143, v144, &v140, v59) || (unsigned __int8)sub_18BE7A0(v144, v143, &v140, v63) )
  {
    sub_168B9F0((__int64)v147, a1 + 1, v104, 0x14C4u, 0);
    goto LABEL_50;
  }
  v69 = v118;
  v141 = 5320;
  v70 = v110;
  if ( !v118 )
  {
    if ( *(_BYTE *)(v110 + 16) == 58 )
    {
      v99 = sub_18BFF30(
              (__int64)a1,
              a3,
              v144,
              *(_QWORD *)(v110 + 32),
              v143,
              &v141,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64);
      v70 = v110;
      v69 = 0;
      if ( v99 )
        goto LABEL_70;
    }
    else
    {
      v85 = sub_18BEC80((__int64)a1, a3, a2, *(double *)a7.m128_u64, *(double *)a8.m128_u64, v66, v67, v68);
      v70 = v110;
      v69 = 0;
      if ( v85 )
        goto LABEL_70;
    }
    return v143;
  }
  if ( v110 )
  {
LABEL_70:
    v120 = v69;
    v112 = v70;
    v71 = (__int64 *)v144;
    v127 = v143;
    v131 = v144;
    v72 = sub_18C27C0((__int64)a1, v144, v143, v66, v67, v68);
    v77 = v112;
    v78 = v120;
    if ( !v72 )
    {
      v121 = (__int64 *)&v144;
      v113 = (__int64 *)&v143;
      goto LABEL_81;
    }
    v135 = v112;
    v136 = a3;
    v121 = (__int64 *)&v144;
    v113 = (__int64 *)&v143;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v118 + 16) == 58 )
  {
    v97 = nullptr;
    if ( !v12 )
      v97 = a2;
    v98 = sub_18BFF30(
            (__int64)a1,
            v97,
            v143,
            *(_QWORD *)(v118 + 32),
            v144,
            &v141,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64);
    v90 = v118;
    if ( !v98 )
      return v144;
  }
  else
  {
    if ( ((*(_BYTE *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3) == 1 )
      return v144;
    v86 = sub_18BEC80((__int64)a1, a2, a3, *(double *)a7.m128_u64, *(double *)a8.m128_u64, v66, v67, v68);
    v90 = v118;
    if ( !v86 )
      return v144;
  }
  v122 = v90;
  v71 = (__int64 *)v143;
  v127 = v144;
  v131 = v143;
  v91 = sub_18C27C0((__int64)a1, v143, v144, v87, v88, v89);
  v77 = 0;
  v78 = v122;
  if ( !v91 )
  {
    v121 = (__int64 *)&v143;
    v113 = (__int64 *)&v144;
    goto LABEL_98;
  }
  v135 = v122;
  v136 = a2;
  v121 = (__int64 *)&v143;
  v113 = (__int64 *)&v144;
LABEL_72:
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1[31] + 17448) + 248LL) - 21) <= 3 )
  {
    v71 = (__int64 *)v143;
    v139 = v78;
    v138 = v77;
    v79 = sub_18BC000(v144, v143, v73, v74);
    v77 = v138;
    v78 = v139;
    if ( v79 )
    {
      v71 = (__int64 *)v144;
      v100 = sub_A63DE0(a1[31], v144, v143, v74, v75);
      v77 = v138;
      v78 = v139;
      if ( !v100 )
      {
        sub_168B9F0((__int64)v147, a1 + 1, v104, 0x1AB2u, 0);
        v101 = sub_1605D30((__int64)v147, (__int64 *)&v144);
        v71 = (__int64 *)&v143;
        sub_1605D30(v101, (__int64 *)&v143);
        sub_15F7200(v147);
        v78 = v139;
        v77 = v138;
      }
    }
  }
  if ( v12 )
  {
    v80 = *(_QWORD *)(v131 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v80 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57) <= 1u
      || (v137 = v78, v133 = v77, v103 = sub_F61140(v80, (__int64)v71, v73, v74, v75, v76), v77 = v133, v78 = v137, v103)
      && *(_DWORD *)(v135 + 20) == 1 )
    {
      *a3 = sub_160A600(
              (__int64)a1,
              *a3 & 0xFFFFFFFFFFFFFFFELL,
              v143,
              1u,
              0,
              0,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64,
              0);
      return v127;
    }
LABEL_81:
    if ( !v78 )
    {
      v129 = v77;
      v102 = sub_F61040(*(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v71, v73, v74, v75, v76);
      v77 = v129;
      v78 = 0;
      if ( !v102 )
        goto LABEL_99;
    }
    if ( v77 )
    {
LABEL_83:
      v82 = a1 + 1;
      if ( (*(_BYTE *)(a1[29] + 47) & 0x20) != 0 )
      {
        if ( v78 )
        {
          if ( *(_BYTE *)(v78 + 16) == 58 && v124 )
          {
            if ( *(_BYTE *)(v77 + 16) == 58 )
            {
              sub_168B9F0((__int64)v147, v82, v104, 0x1250u, 0);
              v52 = sub_1605D30((__int64)v147, (__int64 *)&v143);
              v53 = (__int64 *)&v144;
              goto LABEL_51;
            }
LABEL_104:
            v145 = *v121;
            v146 = *v113;
            v83 = v78 != 0;
            goto LABEL_89;
          }
          goto LABEL_87;
        }
      }
      else if ( v78 )
      {
LABEL_87:
        if ( *(_BYTE *)(v78 + 16) != 58 )
        {
          v145 = *v121;
          v146 = *v113;
          v83 = v124;
LABEL_89:
          v142 = v83;
          sub_168B9F0((__int64)v147, v82, v104, 0x14C9u, 0);
          v84 = sub_1588370((__int64)v147, &v142);
          v52 = sub_1605D30(v84, &v145);
          v53 = &v146;
          goto LABEL_51;
        }
      }
      if ( !v124 || *(_BYTE *)(v77 + 16) == 58 )
      {
        v93 = v141;
        goto LABEL_100;
      }
      goto LABEL_104;
    }
LABEL_98:
    v132 = v78;
    v128 = v77;
    v92 = sub_F61040(*(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v71, v73, v74, v75, v76);
    v77 = v128;
    v78 = v132;
    if ( !v92 )
    {
LABEL_99:
      v82 = a1 + 1;
      v93 = 5322;
LABEL_100:
      sub_168B9F0((__int64)v147, v82, v104, v93, 0);
      v94 = sub_1605D30((__int64)v147, (__int64 *)&v143);
      v95 = sub_1605D30(v94, (__int64 *)&v144);
      v145 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v144, *(double *)a7.m128_u64);
      v96 = sub_1587DB0(v95, &v145);
      v146 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v145, *(double *)a7.m128_u64);
      sub_1587DB0(v96, &v146);
      sub_15F7200(v147);
      return 0;
    }
    goto LABEL_83;
  }
  *v136 = sub_160A600(
            (__int64)a1,
            *v136 & 0xFFFFFFFFFFFFFFFELL,
            v127,
            1u,
            0,
            0,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            0);
  return v127;
}
