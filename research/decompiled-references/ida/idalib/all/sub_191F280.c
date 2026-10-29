unsigned __int64 __fastcall sub_191F280(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // r14
  __int64 *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 *v41; // r11
  __int64 v42; // r10
  unsigned __int64 v43; // rax
  bool v44; // al
  __int64 v45; // r10
  bool v46; // al
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  bool v52; // al
  __int64 v53; // r10
  bool v54; // al
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // eax
  bool v60; // al
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // r11
  __int64 v66; // r10
  bool v67; // al
  __int64 v68; // rsi
  char v69; // di
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  char v72; // cl
  unsigned __int16 v73; // ax
  __int64 v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rdx
  _QWORD *v83; // rdi
  int v84; // r14d
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  char v89; // r15
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  char v94; // al
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // rsi
  _QWORD *v99; // rdi
  __int64 v100; // rsi
  int v101; // r14d
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  char v106; // r15
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  char v111; // al
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rsi
  unsigned __int64 v116; // rbp
  unsigned __int64 v117; // rax
  unsigned __int16 v118; // dx
  unsigned int v119; // esi
  __int16 v120; // dx
  __int64 v121; // rax
  unsigned int v122; // edi
  __int16 v123; // ax
  __int64 v124; // rbx
  unsigned __int16 v125; // ax
  __int16 v126; // dx
  unsigned __int16 v127; // dx
  unsigned __int16 v128; // ax
  unsigned __int16 v129; // ax
  int v130; // r14d
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  int v137; // r14d
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 *v144; // rax
  unsigned __int64 v145; // r14
  int v146; // r14d
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  char v151; // r15
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  char v156; // al
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // rdx
  __int64 v160; // rsi
  unsigned __int64 v161; // rax
  unsigned __int64 v162; // rbx
  __int64 *v163; // rax
  unsigned __int64 v164; // r14
  int v165; // r14d
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 *v172; // rax
  unsigned __int64 v173; // r14
  __int64 *v174; // [rsp+0h] [rbp-88h]
  __int64 v175; // [rsp+0h] [rbp-88h]
  unsigned __int64 v176; // [rsp+0h] [rbp-88h]
  unsigned __int64 v177; // [rsp+8h] [rbp-80h]
  __int64 v178; // [rsp+8h] [rbp-80h]
  __int64 v179; // [rsp+8h] [rbp-80h]
  __int64 *v180; // [rsp+8h] [rbp-80h]
  __int64 *v181; // [rsp+8h] [rbp-80h]
  unsigned __int8 v182; // [rsp+10h] [rbp-78h]
  __int64 *v183; // [rsp+10h] [rbp-78h]
  __int64 v184; // [rsp+10h] [rbp-78h]
  unsigned __int64 v185; // [rsp+18h] [rbp-70h]
  __int64 v186; // [rsp+20h] [rbp-68h]
  __int64 v187; // [rsp+38h] [rbp-50h]
  __int64 v188; // [rsp+40h] [rbp-48h] BYREF
  __int64 v189[8]; // [rsp+48h] [rbp-40h] BYREF

  sub_18D06E0((__int64 *)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, a4, a5, *(double *)a6.m128_u64);
  sub_18D4A10(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, a4, a5, *(double *)a6.m128_u64);
  if ( a5 != 4 )
  {
    v16 = sub_191BD20(a1, (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), a6, a7, v12, v13, v14, v15);
    *a2 = v16;
    if ( v16 == 1 )
      return 0;
  }
  v17 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  v18 = sub_191BD20(a1, v17, a6, a7, v12, v13, v14, v15);
  *a3 = v18;
  if ( v18 == 1 )
    return 0;
  v189[0] = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v20 = sub_6D5440(v189);
  v21 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  v189[0] = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v25 = sub_6D5440(v189);
  v186 = v25;
  v26 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v26 + 16) == 7
    || (v47 = *(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v47 + 16) == 7)
    && (v176 = v25, v26 = sub_F63050(*v21, v17, v47, v22), v25 = v176, v26) )
  {
    v20 = *(_QWORD *)(v26 + 32);
    v21 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v182 = v20 & 7;
  v27 = v21[1] & 7;
  v185 = v25 & 7;
  v28 = *(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
  v29 = v28 | v185 | *(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
  if ( (v21[1] & 0xFFFFFFFFFFFFFFF8LL | v27 | v20 & 7) == v29 )
    return sub_ABBE20(*(_QWORD **)(a1 + 248), v20, v25, 0);
  v174 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
  v177 = v25;
  if ( !sub_F610C0(*v21, v27, v29, v28, v23, v24) || !sub_F610C0(*v174, v27, v30, v31, v32, v33) )
    return 0;
  if ( sub_A62E10(*(_QWORD *)(a1 + 248), v20, v34, v35, v36) )
  {
    v48 = sub_AAF890(*(__int64 **)(a1 + 248), v20, v37, v38, v39);
    v49 = sub_AA7480(*(_QWORD **)(a1 + 248), *a2 & 0xFFFFFFFFFFFFFFFELL);
    v41 = v174;
    v42 = v177;
    v175 = v49;
    v43 = v49 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v43 )
    {
      v175 = v48;
      v43 = v48 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  else
  {
    v40 = sub_AA7480(*(_QWORD **)(a1 + 248), *a2 & 0xFFFFFFFFFFFFFFFELL);
    v41 = v174;
    v42 = v177;
    v175 = v40;
    v43 = v40 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v43 )
    {
      v175 = v20;
      goto LABEL_13;
    }
  }
  v21 = (__int64 *)v43;
  v182 = v175 & 7;
  if ( v175 != v20 && a5 != 4 )
  {
    v187 = v42;
    v180 = v41;
    *a2 = sub_160A600(
            a1,
            *a2 & 0xFFFFFFFFFFFFFFFELL,
            v175,
            0x1Bu,
            0,
            0,
            *(double *)a6.m128_u64,
            *(double *)a7.m128_u64,
            0);
    v42 = v187;
    v41 = v180;
  }
LABEL_13:
  if ( (v21[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v21[1] | v182) & 7) == (v41[1] & 0xFFFFFFFFFFFFFFF8LL
                                                                                | v185
                                                                                | v41[1] & 7) )
    return sub_ABBE20(*(_QWORD **)(a1 + 248), v175, v42, 0);
  v183 = v41;
  v178 = v42;
  if ( (unsigned __int8)sub_18BD220((_QWORD **)(a1 + 248), v175, v42) )
    return 0;
  v44 = sub_F57BD0(*v21);
  v45 = v178;
  if ( v44 || (v46 = sub_F57BD0(*v183), v45 = v178, v46) )
  {
    v179 = v45;
    if ( (unsigned __int8)sub_18C0160(a1, a3, v45, v175, 0, *(double *)a6.m128_u64, *(double *)a7.m128_u64) )
    {
      if ( (unsigned __int8)sub_18C0160(a1, a2, v175, v179, a5 == 4, *(double *)a6.m128_u64, *(double *)a7.m128_u64) )
      {
        v59 = sub_A637F0(*(_QWORD *)(a1 + 248), v175, v179, v50, v51);
        if ( v59 < 0 )
          return sub_18BAD00(a1, a2, v175, v179, a5 != 4, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
        else
          return sub_18BAD00(a1, a3, v179, v175, v59 > 0, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
      }
      else
      {
        return v179;
      }
    }
    return v175;
  }
  v52 = sub_F58100(*v21);
  v53 = v178;
  if ( v52 )
    return sub_18BE010(a1, a2, a3, v175, v53, a5 == 4, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
  v54 = sub_F58100(*v183);
  v53 = v178;
  if ( v54 )
    return sub_18BE010(a1, a2, a3, v175, v53, a5 == 4, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
  v60 = sub_F65CC0(*v21, v175, v55, v56, v57, v58);
  v65 = v183;
  v66 = v178;
  if ( !v60 )
  {
    v67 = sub_F65CC0(*v183, v175, v61, v62, v63, v64);
    v65 = v183;
    v66 = v178;
    if ( !v67 )
    {
      v68 = *(_QWORD *)(*(_QWORD *)(*v21 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v69 = *(_BYTE *)(v68 + 16);
      v70 = *(_QWORD *)(*v183 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v71 = *(_QWORD *)v70;
      v72 = *(_BYTE *)(*(_QWORD *)v70 + 16LL);
      if ( v69 == 13 && (((*(_WORD *)(v68 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
      {
        if ( v72 != 13 )
          goto LABEL_62;
        v73 = *(_WORD *)(v71 + 18);
      }
      else
      {
        if ( v72 != 13 )
          return sub_18BAEC0(a1, a2, a3, v175, v178, a5 == 4, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
        v73 = *(_WORD *)(v71 + 18);
        if ( (((v73 >> 3) + 56) & 0x1FFu) > 0x17 )
          return sub_18BAEC0(a1, a2, a3, v175, v178, a5 == 4, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
      }
      v125 = (v73 >> 3) & 0x1FF;
      if ( v125 > 0x1C7u )
      {
        if ( v125 <= 0x1CAu )
        {
          if ( v69 != 13 )
            goto LABEL_62;
          v126 = (*(_WORD *)(v68 + 18) >> 3) & 0x1FF;
          if ( ((v126 + 53) & 0x1FFu) > 0x14 )
            goto LABEL_62;
          goto LABEL_78;
        }
        if ( v125 > 0x1CDu
          && (v125 <= 0x1D0u || v125 > 0x1D3u && (v125 <= 0x1D6u || ((v125 + 38) & 0x1FFu) <= 2))
          && v69 == 13 )
        {
          v126 = (*(_WORD *)(v68 + 18) >> 3) & 0x1FF;
          if ( ((v126 + 53) & 0x1FFu) <= 0x14 )
          {
LABEL_78:
            v127 = (v126 + 50) & 0x1FF;
            if ( v127 > 0xEu || ((0x71C7uLL >> v127) & 1) == 0 )
            {
              v175 = sub_A68640(*(_QWORD **)(a1 + 248), v175);
              goto LABEL_62;
            }
          }
        }
      }
      if ( ((v125 + 53) & 0x1FFu) <= 0x14 )
      {
        v128 = (v125 + 50) & 0x1FF;
        if ( v128 > 0xEu || ((0x71C7uLL >> v128) & 1) == 0 )
        {
          if ( v69 != 13 )
            goto LABEL_141;
          v129 = (*(_WORD *)(v68 + 18) >> 3) & 0x1FF;
          if ( v129 <= 0x1C7u
            || v129 > 0x1CAu
            && (v129 <= 0x1CDu || v129 > 0x1D0u && (v129 <= 0x1D3u || v129 > 0x1D6u && ((v129 + 38) & 0x1FFu) > 2)) )
          {
            goto LABEL_63;
          }
          v186 = sub_A68640(*(_QWORD **)(a1 + 248), v178);
        }
      }
LABEL_62:
      v117 = *(_QWORD *)(*(_QWORD *)(v175 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v68 = *(_QWORD *)v117;
      if ( *(_BYTE *)(*(_QWORD *)v117 + 16LL) == 13 )
      {
LABEL_63:
        v118 = *(_WORD *)(v68 + 18);
        v119 = 0;
        v120 = (v118 >> 3) & 0x1FF;
        if ( (unsigned __int16)(v120 - 456) <= 0x17u )
          v119 = dword_26465E0[(unsigned __int16)(v120 - 456)];
        v121 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v186 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v121 + 16) != 13 )
          BUG();
        v122 = 0;
        v123 = (*(_WORD *)(v121 + 18) >> 3) & 0x1FF;
        if ( (unsigned __int16)(v123 - 456) <= 0x17u )
          v122 = dword_26465E0[(unsigned __int16)(v123 - 456)];
        v124 = v186;
        if ( v122 < v119 )
          v124 = v175;
        v175 = v124;
        if ( ((v120 + 44) & 0x1FFu) <= 0xB || ((v123 + 44) & 0x1FFu) <= 0xB )
          return sub_A683F0(*(_QWORD **)(a1 + 248), v124);
        return v175;
      }
LABEL_141:
      BUG();
    }
  }
  v184 = v66;
  v181 = v65;
  v74 = sub_F648C0(*v21, v175, v61, v62, v63, v64);
  v79 = sub_F648C0(*v181, v175, v75, v76, v77, v78);
  if ( v74 && v79 )
  {
    v82 = *(_QWORD *)(v79 + 32);
    v83 = *(_QWORD **)(a1 + 248);
    v188 = *(_QWORD *)(v74 + 32);
    v189[0] = v82;
    v84 = sub_AADE70(v83, v188, v82, v80, v81);
    v89 = sub_F65320(*(_QWORD *)(v188 & 0xFFFFFFFFFFFFFFF0LL), v188, v85, v86, v87, v88);
    v94 = sub_F65320(*(_QWORD *)(v189[0] & 0xFFFFFFFFFFFFFFF0LL), v188, v90, v91, v92, v93);
    if ( v89 == v94 )
    {
      if ( v84 < 0 )
        goto LABEL_49;
    }
    else
    {
      v97 = v89 == 0 ? -1 : 1;
      if ( v84 == (_DWORD)v97 )
      {
        v137 = sub_AAC1F0(*(_QWORD *)(a1 + 248), v188, v97, v95, v96);
        if ( v137 == (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), v189[0], v138, v139, v140) )
        {
          v144 = &v188;
          if ( !v89 )
            v144 = v189;
          v145 = sub_A70710(*(_QWORD **)(a1 + 248), *v144, v141, v142, v143);
          *a3 = sub_18BACB0(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v145, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
          if ( a5 != 4 )
            *a2 = sub_18BACB0(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v145, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
          v98 = v145;
          return sub_A74CE0(*(_QWORD *)(a1 + 248), v98);
        }
        if ( !v89 )
          goto LABEL_49;
      }
      else if ( !v94 )
      {
LABEL_49:
        if ( a5 != 4 )
          *a2 = sub_18BACB0(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v189[0], *(double *)a6.m128_u64, *(double *)a7.m128_u64);
        v98 = v189[0];
        return sub_A74CE0(*(_QWORD *)(a1 + 248), v98);
      }
    }
    v98 = v188;
    *a3 = sub_18BACB0(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v188, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
    return sub_A74CE0(*(_QWORD *)(a1 + 248), v98);
  }
  v99 = *(_QWORD **)(a1 + 248);
  if ( v74 )
  {
    v100 = *(_QWORD *)(v74 + 32);
    v189[0] = v184;
    v188 = v100;
    v101 = sub_AADE70(v99, v100, v184, v80, v81);
    v106 = sub_F65320(*(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFF0LL), v100, v102, v103, v104, v105);
    v111 = sub_F65320(*v181, v100, v107, v108, v109, v110);
    if ( v106 == v111 )
    {
      if ( v101 < 0 )
        goto LABEL_57;
    }
    else
    {
      v114 = v106 == 0 ? -1 : 1;
      if ( v101 == (_DWORD)v114 )
      {
        v130 = sub_AAC1F0(*(_QWORD *)(a1 + 248), v188, v114, v112, v113);
        if ( v130 == (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), v189[0], v131, v132, v133) )
        {
          v163 = &v188;
          if ( !v106 )
            v163 = v189;
          v164 = sub_A70710(*(_QWORD **)(a1 + 248), *v163, v134, v135, v136);
          *a3 = sub_160A600(
                  a1,
                  *a3 & 0xFFFFFFFFFFFFFFFELL,
                  v164,
                  0x1Bu,
                  0,
                  0,
                  *(double *)a6.m128_u64,
                  *(double *)a7.m128_u64,
                  0);
          if ( a5 != 4 )
            *a2 = sub_18BACB0(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v164, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
          v115 = v164;
          goto LABEL_60;
        }
        if ( !v106 )
          goto LABEL_57;
      }
      else if ( !v111 )
      {
LABEL_57:
        if ( a5 != 4 )
          *a2 = sub_18BACB0(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v189[0], *(double *)a6.m128_u64, *(double *)a7.m128_u64);
        v115 = v189[0];
        goto LABEL_60;
      }
    }
    v115 = v188;
    *a3 = sub_160A600(
            a1,
            *a3 & 0xFFFFFFFFFFFFFFFELL,
            v188,
            0x1Bu,
            0,
            0,
            *(double *)a6.m128_u64,
            *(double *)a7.m128_u64,
            0);
LABEL_60:
    v116 = sub_A74CE0(*(_QWORD *)(a1 + 248), v115);
    *a3 = sub_160A600(
            a1,
            *a3 & 0xFFFFFFFFFFFFFFFELL,
            v116,
            0x31u,
            0,
            0,
            *(double *)a6.m128_u64,
            *(double *)a7.m128_u64,
            0);
    return v116;
  }
  v189[0] = *(_QWORD *)(v79 + 32);
  v188 = v175;
  v146 = sub_AADE70(v99, v175, v189[0], v80, v81);
  v151 = sub_F65320(*v21, v175, v147, v148, v149, v150);
  v156 = sub_F65320(*(_QWORD *)(v189[0] & 0xFFFFFFFFFFFFFFF0LL), v175, v152, v153, v154, v155);
  if ( v151 == v156 )
  {
    if ( v146 < 0 )
      goto LABEL_119;
  }
  else
  {
    v159 = v151 == 0 ? -1 : 1;
    if ( v146 == (_DWORD)v159 )
    {
      v165 = sub_AAC1F0(*(_QWORD *)(a1 + 248), v188, v159, v157, v158);
      if ( v165 == (unsigned int)sub_AAC1F0(*(_QWORD *)(a1 + 248), v189[0], v166, v167, v168) )
      {
        v172 = &v188;
        if ( !v151 )
          v172 = v189;
        v173 = sub_A70710(*(_QWORD **)(a1 + 248), *v172, v169, v170, v171);
        *a3 = sub_18BACB0(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v173, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
        if ( a5 != 4 )
          *a2 = sub_160A600(
                  a1,
                  *a2 & 0xFFFFFFFFFFFFFFFELL,
                  v173,
                  0x1Bu,
                  0,
                  0,
                  *(double *)a6.m128_u64,
                  *(double *)a7.m128_u64,
                  0);
        v160 = v173;
        goto LABEL_122;
      }
      if ( !v151 )
        goto LABEL_119;
    }
    else if ( !v156 )
    {
LABEL_119:
      if ( a5 != 4 )
        *a2 = sub_160A600(
                a1,
                *a2 & 0xFFFFFFFFFFFFFFFELL,
                v189[0],
                0x1Bu,
                0,
                0,
                *(double *)a6.m128_u64,
                *(double *)a7.m128_u64,
                0);
      v160 = v189[0];
      goto LABEL_122;
    }
  }
  v160 = v188;
  *a3 = sub_18BACB0(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v188, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
LABEL_122:
  v161 = sub_A74CE0(*(_QWORD *)(a1 + 248), v160);
  v162 = v161;
  if ( a5 != 4 )
    *a2 = sub_160A600(
            a1,
            *a2 & 0xFFFFFFFFFFFFFFFELL,
            v161,
            0x31u,
            0,
            0,
            *(double *)a6.m128_u64,
            *(double *)a7.m128_u64,
            0);
  return v162;
}
