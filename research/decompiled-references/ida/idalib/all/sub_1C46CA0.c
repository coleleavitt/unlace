unsigned __int64 __fastcall sub_1C46CA0(__int64 a1, unsigned __int32 a2, __int64 *a3, char a4, __m128 a5, __m128 a6)
{
  unsigned __int64 result; // rax
  _BYTE *v10; // rax
  unsigned int v11; // r13d
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  int v40; // esi
  int v41; // eax
  __int64 v42; // rax
  _QWORD *v43; // r12
  __int64 v44; // r12
  unsigned __int64 *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdi
  __int64 v54; // r10
  char v55; // al
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r9
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 *v66; // r10
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r12
  char v70; // al
  __int64 *v71; // r10
  __int64 v72; // r12
  __int64 v73; // rcx
  unsigned __int64 v74; // r11
  __int64 v75; // rax
  unsigned __int64 v76; // r11
  unsigned __int8 *v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // rcx
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r15
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned __int64 v93; // rax
  __int64 *v94; // rdx
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  unsigned int v100; // eax
  unsigned __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // r9
  unsigned __int64 v104; // r12
  _BYTE *v105; // rax
  __int64 *v106; // rsi
  unsigned int v107; // r13d
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned int v110; // r13d
  __int64 v111; // rax
  char v112; // al
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // r13
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 *v122; // r14
  int v123; // r13d
  int v124; // eax
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 *v129; // r10
  __int64 v130; // r13
  __int64 v131; // rax
  _QWORD *v132; // rax
  _BYTE *v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // r13
  __int64 v139; // rax
  _QWORD *v140; // rax
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // r13
  __int64 v146; // rax
  _QWORD *v147; // rax
  __int64 v148; // [rsp+0h] [rbp-138h]
  __int64 *v149; // [rsp+0h] [rbp-138h]
  __int64 *v150; // [rsp+0h] [rbp-138h]
  unsigned __int64 v151; // [rsp+0h] [rbp-138h]
  unsigned __int64 v152; // [rsp+8h] [rbp-130h]
  __int64 v153; // [rsp+8h] [rbp-130h]
  __int64 v154; // [rsp+8h] [rbp-130h]
  __int64 v155; // [rsp+8h] [rbp-130h]
  __int64 *v156; // [rsp+8h] [rbp-130h]
  _QWORD *v157; // [rsp+10h] [rbp-128h]
  unsigned int v158; // [rsp+1Ch] [rbp-11Ch]
  __int64 v159; // [rsp+20h] [rbp-118h]
  int v160; // [rsp+20h] [rbp-118h]
  __int64 v161; // [rsp+20h] [rbp-118h]
  __int64 v162; // [rsp+28h] [rbp-110h]
  __int64 *v163; // [rsp+28h] [rbp-110h]
  __int64 v164; // [rsp+30h] [rbp-108h]
  unsigned __int64 v165; // [rsp+30h] [rbp-108h]
  __int64 *v166[2]; // [rsp+38h] [rbp-100h] BYREF
  int v167; // [rsp+4Ch] [rbp-ECh] BYREF
  __int64 v168; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v169; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v170[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v171; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v172; // [rsp+78h] [rbp-C0h]
  __int64 v173; // [rsp+80h] [rbp-B8h]
  int v174; // [rsp+88h] [rbp-B0h]
  unsigned __int8 *v175[11]; // [rsp+90h] [rbp-A8h] BYREF
  char v176; // [rsp+E8h] [rbp-50h]
  unsigned int v177; // [rsp+F0h] [rbp-48h]
  char v178; // [rsp+F4h] [rbp-44h]

  v166[0] = a3;
  if ( !a3 )
    goto LABEL_8;
  if ( (unsigned __int8)sub_1E534E0(a1, a3, 0) )
    return 1;
  if ( !v166[0] )
    goto LABEL_8;
  v10 = *(_BYTE **)(a1 + 232);
  if ( (v10[2] & 1) == 0 )
    goto LABEL_8;
  if ( (*v10 & 0x20) == 0 )
    goto LABEL_8;
  v38 = sub_BFBC70((unsigned __int64)v166[0]);
  v39 = v38;
  if ( !v38 )
    goto LABEL_8;
  v40 = *(_DWORD *)(v38 + 24);
  if ( !v40 )
    goto LABEL_8;
  v41 = sub_1021680(*(_QWORD *)(a1 + 272), v40);
  if ( !v41 || v41 == 3 )
    goto LABEL_8;
  v42 = *(_QWORD *)(v39 + 16);
  v43 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v42 & 4) != 0 )
LABEL_131:
    v43 = (_QWORD *)*v43;
  if ( v43 )
  {
    while ( !sub_B8EBA0((__int64)v43) )
    {
      v44 = *(_QWORD *)(sub_B8C1B0((__int64)v43) + 16);
      if ( (v44 & 4) != 0 )
      {
        v43 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_131;
      }
      v43 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v43 )
        goto LABEL_8;
    }
    v11 = 1;
    v12 = 0;
  }
  else
  {
LABEL_8:
    v11 = 0;
    v12 = 1;
  }
  v170[0] = sub_1C37020(a1, (__int64 *)v166, v12);
  v13 = *(unsigned int *)(a1 + 40);
  v170[1] = v14;
  if ( !(_DWORD)v13 )
    BUG();
  if ( (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v13 - 8) + 8LL) & 7) - 1) <= 2u )
    return sub_1C46290(a1, a2, v166[0], v170, v11, a5, a6);
  v15 = nullptr;
  v16 = sub_15F1640(a1, 0);
  v19 = v16;
  if ( !v16 )
  {
    v83 = sub_15F1670(a1);
    v88 = v83;
    if ( !v83 )
      return 1;
    v157 = nullptr;
    v148 = *(_QWORD *)(v83 + 80);
    if ( (*(_BYTE *)(v83 + 29) & 1) != 0 )
      v157 = sub_B8C3D0(v83, 0, v84, v85, v86, v87);
    v158 = 1;
    v152 = 0;
    if ( (*(_BYTE *)(v88 + 60) & 2) != 0 && sub_BA85D0(v88) )
    {
      v154 = *(_QWORD *)(a1 + 248);
      v89 = sub_BA85D0(v88);
      v93 = sub_A82070(v154, v89, 0, v90, v91, v92);
      v152 = sub_A74EC0(*(_QWORD *)(a1 + 248), v93);
    }
    goto LABEL_22;
  }
  v157 = nullptr;
  v148 = sub_C1D490(v16, 0, v17, v18);
  if ( (*(_BYTE *)(v19 + 29) & 1) != 0 )
    v157 = sub_B8C3D0(v19, 0, v20, v21, v22, v23);
  if ( (unsigned __int8)sub_B74ED0(v19, 0, v20, v21) )
  {
    v24 = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)v24 )
      BUG();
    if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v24 - 8) + 12LL) )
    {
      v15 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)&v171, (__int64 *)(a1 + 8), a2, 0x1BEBu, 0);
      if ( v176 )
      {
        v15 = (__int64 *)v19;
        sub_AE9DF0(v175, v19, 0xAu);
      }
      else if ( v178 )
      {
        v117 = sub_168B9E0(&v171);
        v120 = v173;
        if ( v173 )
        {
          v155 = v117;
          v120 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v173 + 32LL))(v173);
          v117 = v155;
        }
        v169 = v120;
        v121 = sub_1587BC0(v117, &v169, v117, (__int64)&v169, v118, v119);
        v15 = (__int64 *)v19;
        sub_AE9DF0((unsigned __int8 **)(*v121 + 32LL * v177 + 8), v19, 0xAu);
      }
      sub_15F7200(&v171);
    }
  }
  if ( (unsigned __int8)sub_B81C90(v19) && v166[0] && (*(_WORD *)v166[0] & 0x1FF) == 0x73 )
  {
    sub_168B9F0((__int64)&v171, (__int64 *)(a1 + 8), a2, 0x1BABu, 0);
    v15 = &v169;
    v169 = sub_EEC8C0((unsigned __int64)v166[0], a1 + 8, *(double *)a5.m128_u64);
    sub_1587DB0((__int64)&v171, &v169);
    sub_15F7200(&v171);
  }
  v158 = 0;
  v152 = 0;
  if ( (*(_BYTE *)(v19 + 29) & 1) == 0 )
    goto LABEL_22;
  v45 = sub_B8C3D0(v19, (__int64)v15, v25, v26, v27, v28);
  v48 = *v45;
  v49 = *v45 + 8LL * *((unsigned int *)v45 + 2);
  if ( *v45 >= v49 )
  {
    if ( v48 == v49 )
      goto LABEL_22;
    while ( *(_WORD *)(*(_QWORD *)v49 + 36LL) != 176 )
    {
      v49 += 8LL;
      if ( v48 == v49 )
        goto LABEL_51;
    }
  }
  else
  {
    v50 = *v45;
    while ( *(_WORD *)(*(_QWORD *)v50 + 36LL) != 176 )
    {
      v50 += 8LL;
      if ( v49 == v50 )
        goto LABEL_51;
    }
    if ( v49 == v50 )
    {
LABEL_51:
      v158 = 0;
      v152 = 0;
      goto LABEL_22;
    }
  }
  v29 = v166[0];
  v31 = (__int64 *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v166[0] )
  {
    v94 = (__int64 *)(*(_QWORD *)&byte_8[v148 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v94 + 16) != 48 )
    {
      v158 = 0;
      v152 = 0;
      goto LABEL_23;
    }
    v95 = sub_F60F10(*v94, (__int64)v15, (__int64)v94, v49, v46, v47);
    v158 = 0;
    v152 = 0;
    if ( (unsigned __int8)sub_B7EA10(v95, (__int64)v15, v96, v97, v98, v99) )
    {
      v100 = sub_EEB7E0((unsigned __int64)v166[0], (__int64)v15, *(double *)a5.m128_u64);
      sub_168B9F0((__int64)&v171, (__int64 *)(a1 + 8), v100, 0x1A0Fu, 0);
      LODWORD(v169) = 1;
      sub_1587D10((__int64)&v171, (int *)&v169);
      sub_15F7200(&v171);
    }
LABEL_22:
    v29 = v166[0];
    if ( !v166[0] )
    {
LABEL_27:
      v31 = (__int64 *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_28;
    }
LABEL_23:
    v30 = *(_QWORD *)(v29[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v30 + 16) - 2) <= 4u )
    {
      v171 = *(_QWORD *)(v30 + 32);
      if ( sub_F65EB0(&v171) )
      {
        sub_168B9F0((__int64)&v171, (__int64 *)(a1 + 8), a2, 0x1560u, 0);
        LODWORD(v169) = 1;
        sub_1587D10((__int64)&v171, (int *)&v169);
        sub_15F7200(&v171);
        return 1;
      }
    }
    goto LABEL_27;
  }
  v158 = 0;
  v152 = 0;
LABEL_28:
  v32 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
  if ( *(_DWORD *)v32 == 2 || (unsigned int)(*(_DWORD *)v32 - 4) <= 3 && *(_BYTE *)(v32 + 596) )
  {
    v33 = sub_F57E80(*v31);
    if ( v33 )
    {
      if ( *(_BYTE *)(v33 + 16) == 16 )
      {
        v36 = v166[0];
        if ( v166[0] )
        {
          v37 = sub_19B4A30(a1, (unsigned __int64)v166[0], a2, 0, 0, 0, a5, a6);
          if ( v37 == 1 )
            return 1;
          v166[0] = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFFELL);
          v36 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFFELL);
        }
        return sub_EEF0A0(*(_QWORD **)(a1 + 248), a2, (__int64)v36, 0, v34, v35);
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0 )
  {
    v51 = sub_F57E80(*v31);
    v52 = v51;
    if ( v51 )
    {
      if ( *(_BYTE *)(v51 + 16) == 16 )
      {
        v53 = *(_QWORD *)(a1 + 544);
        if ( !v53 )
          BUG();
        v54 = v53 - 72;
        if ( *(char *)(v53 - 44) >= 0 )
        {
          v162 = v51;
          v55 = sub_1C45430((__int64 *)a1, v53 - 72, a2, (__int64)v166[0], v51, v51, *(double *)a5.m128_u64);
          v54 = v53 - 72;
          v52 = v162;
          if ( !v55 )
          {
            v148 = sub_C1D490(v53 - 72, v53 - 72, v56, v57);
            v31 = (__int64 *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
            v61 = sub_1C33590(v170, v148);
            goto LABEL_66;
          }
        }
        v159 = v52;
        sub_B88650(v54, 1);
        if ( !a4 )
          return 1;
        if ( v166[0] )
        {
          if ( (*(_QWORD *)(v159 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v159 + 17) & 4) != 0 )
            v58 = v148;
          else
            v58 = 0;
          v164 = v58;
          v163 = v166[0];
          v160 = sub_EEC140((unsigned __int64)v166[0]);
          v59 = sub_EEB7E0((unsigned __int64)v163, 1, *(double *)a5.m128_u64);
          v60 = sub_18C4330(a1, v59, v160, v166, 1, v164);
          if ( v60 == 1 )
            return 1;
          v166[0] = (__int64 *)(v60 & 0xFFFFFFFFFFFFFFFELL);
        }
      }
    }
  }
  v61 = sub_1C33590(v170, v148);
LABEL_66:
  v65 = *v31;
  v66 = v166[0];
  v161 = v61;
  v67 = *(_QWORD *)(*(_QWORD *)(*v31 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v67 + 16) == 13 && ((*(_WORD *)(v67 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( !v166[0] )
    {
LABEL_78:
      result = sub_EEF0A0(*(_QWORD **)(a1 + 248), a2, (__int64)v66, 0, v63, v64);
      goto LABEL_94;
    }
    if ( (*(_WORD *)v166[0] & 0x1FF) == 0x35 )
    {
      v149 = v166[0];
      v68 = sub_15F16E0(a1);
      LODWORD(v168) = 0;
      v69 = v68;
      v70 = *(_BYTE *)(v68 + 28) & 0x7F;
      switch ( v70 )
      {
        case 18:
          LODWORD(v168) = 1;
          break;
        case 38:
          LODWORD(v168) = 2;
          break;
        case 36:
          LODWORD(v168) = 3;
          break;
      }
      sub_168B9F0((__int64)&v171, (__int64 *)(a1 + 8), a2, 0x1358u, 0);
      v71 = v149;
      if ( v176 )
      {
        sub_AE9DF0(v175, v69, 0xAu);
        v71 = v149;
      }
      else if ( v178 )
      {
        v125 = sub_168B9E0(&v171);
        v129 = v149;
        v130 = v125;
        v131 = v173;
        if ( v173 )
        {
          v131 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v173 + 32LL))(v173);
          v129 = v149;
        }
        v156 = v129;
        v169 = v131;
        v132 = sub_1587BC0(v130, &v169, v126, (__int64)&v169, v127, v128);
        sub_AE9DF0((unsigned __int8 **)(*v132 + 32LL * v177 + 8), v69, 0xAu);
        v71 = v156;
      }
      v150 = v71;
      v72 = sub_16CF4F0((__int64)&v171, (int *)&v168);
      v169 = sub_EEC8C0((unsigned __int64)v166[0], (__int64)&v168, *(double *)a5.m128_u64);
      sub_1587DB0(v72, &v169);
      sub_15F7200(&v171);
      if ( !a4 )
      {
        v166[0] = nullptr;
        v66 = nullptr;
        goto LABEL_78;
      }
      v66 = (__int64 *)(sub_18C4330(
                          a1,
                          *((_DWORD *)v150 + 10),
                          *((_DWORD *)v150 + 11),
                          (const void *)v150[2],
                          (unsigned int)((v150[3] - v150[2]) >> 3),
                          0)
                      & 0xFFFFFFFFFFFFFFFELL);
      v166[0] = v66;
      goto LABEL_147;
    }
    if ( (*(_DWORD *)v166[0] & 0x10000) != 0 )
      goto LABEL_148;
    v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v166[0][1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v108 + 16) == 13 && ((*(_WORD *)(v108 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      if ( (*(_BYTE *)(sub_15F16E0(a1) + 28) & 0x7D) == 0x24 )
      {
        v168 = sub_15F16E0(a1);
        sub_168B9F0((__int64)&v171, (__int64 *)(a1 + 8), a2, 0xDE6u, 0);
        v141 = sub_17BA610((__int64)&v171, &v168);
        LOBYTE(v167) = (*(_BYTE *)(v168 + 28) & 0x7F) == 36;
        v114 = sub_1588420(v141, (unsigned __int8 *)&v167);
LABEL_145:
        v115 = v114;
        v169 = sub_EEC8C0((unsigned __int64)v166[0], (__int64)&v167, *(double *)a5.m128_u64);
        sub_1587DB0(v115, &v169);
        sub_15F7200(&v171);
LABEL_146:
        v66 = v166[0];
LABEL_147:
        if ( !v66 )
          goto LABEL_78;
LABEL_148:
        v116 = sub_19B4A30(a1, (unsigned __int64)v66, a2, 0, 0, 0, a5, a6);
        if ( v116 == 1 )
          return 1;
        v66 = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFFELL);
        v166[0] = (__int64 *)(v116 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_78;
      }
      v133 = *(_BYTE **)(a1 + 232);
      if ( (v133[1] & 8) != 0 || (*v133 & 0x10) != 0 )
        goto LABEL_146;
      v110 = 5664;
    }
    else
    {
      v109 = sub_19A6720(a1, (unsigned __int64)v166[0] & 0xFFFFFFFFFFFFFFFELL, v65, v62, v63, v64, a5, a6);
      if ( v109 == 1 )
        return 1;
      v166[0] = (__int64 *)(v109 & 0xFFFFFFFFFFFFFFFELL);
      v110 = 5663;
      v166[0] = (__int64 *)(sub_160A600(
                              a1,
                              v109 & 0xFFFFFFFFFFFFFFFELL,
                              *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL),
                              0x18u,
                              0,
                              0,
                              *(double *)a5.m128_u64,
                              *(double *)a6.m128_u64,
                              0)
                          & 0xFFFFFFFFFFFFFFFELL);
    }
    v111 = sub_15F16E0(a1);
    v167 = 0;
    v168 = v111;
    v112 = *(_BYTE *)(v111 + 28) & 0x7F;
    switch ( v112 )
    {
      case 18:
        v167 = 1;
        break;
      case 38:
        v167 = 2;
        break;
      case 36:
        v167 = 3;
        break;
    }
    sub_168B9F0((__int64)&v171, (__int64 *)(a1 + 8), a2, v110, 0);
    v113 = sub_17BA610((__int64)&v171, &v168);
    v114 = sub_16CF4F0(v113, &v167);
    goto LABEL_145;
  }
  if ( (*(_BYTE *)(v65 + 17) & 4) != 0 || v166[0] )
  {
    v73 = v152;
    v74 = v152 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v152 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      v73 = v148;
    v153 = v73;
    if ( (*(_BYTE *)(v65 + 17) & 4) == 0 )
    {
      if ( (*(_DWORD *)v166[0] & 0x10000) != 0 )
        goto LABEL_91;
      v173 = v73;
      v165 = v74;
      LODWORD(v171) = 3;
      v172 = 0;
      v174 = 0;
      LODWORD(v175[0]) = a2;
      BYTE4(v175[0]) = 0;
      v75 = sub_1C37220(a1, (__int64)&v171, v64, (__int64)v166[0], v11, a5, a6);
      v76 = v165;
      if ( v75 == 1 )
      {
        if ( !a4 )
          return 1;
        v122 = v166[0];
        v123 = sub_EEC140((unsigned __int64)v166[0]);
        v124 = sub_EEB7E0((unsigned __int64)v122, (__int64)&v171, *(double *)a5.m128_u64);
        v75 = sub_18C4330(a1, v124, v123, v166, 1, v153);
        v76 = v165;
        if ( v75 == 1 )
          return 1;
      }
      v166[0] = (__int64 *)(v75 & 0xFFFFFFFFFFFFFFFELL);
      if ( v76 )
      {
        v77 = (unsigned __int8 *)sub_15F1670(a1);
        LODWORD(v171) = 18;
        v173 = v148;
        v172 = 0;
        v174 = 0;
        v175[0] = v77;
        v78 = sub_1A24E20(a1, (__int64)&v171, a2, (__int64)v166[0], 0, 0, a5, a6);
        if ( v78 == 1 )
          return 1;
        v166[0] = (__int64 *)(v78 & 0xFFFFFFFFFFFFFFFELL);
      }
      v79 = sub_15F1640(a1, 0);
      sub_16F9290((__int64 *)a1, v166[0], v148, a2, v158, (__int64)v157, *(double *)a5.m128_u64, v79);
      v66 = v166[0];
    }
    if ( !v66 )
    {
LABEL_93:
      result = sub_EEF0A0(*(_QWORD **)(a1 + 248), a2, (__int64)v66, v161, v63, v64);
      goto LABEL_94;
    }
LABEL_91:
    result = sub_19B4A30(a1, (unsigned __int64)v66, a2, 0, 0, 0, a5, a6);
    if ( result == 1 )
      return result;
    v166[0] = (__int64 *)(result & 0xFFFFFFFFFFFFFFFELL);
    v66 = (__int64 *)(result & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_93;
  }
  v101 = sub_15F1640(a1, 0);
  v104 = v101;
  if ( (!v101 || *(char *)(v101 + 28) >= 0) && (*(_BYTE *)(*v31 + 17) & 0x10) == 0 )
  {
    v105 = *(_BYTE **)(a1 + 232);
    v106 = (__int64 *)(a1 + 8);
    if ( (v105[1] & 0x10) != 0 )
    {
      if ( v104 )
      {
        if ( (*(_BYTE *)(v104 + 84) & 3) != 0 )
        {
          sub_168B9F0((__int64)&v171, v106, a2, 0xD9Du, 0);
          if ( v176 )
          {
            sub_AE9DF0(v175, v104, 0xAu);
          }
          else if ( v178 )
          {
            v145 = sub_168B9E0(&v171);
            v146 = v173;
            if ( v173 )
              v146 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v173 + 32LL))(v173);
            v169 = v146;
            v147 = sub_1587BC0(v145, &v169, v142, (__int64)&v169, v143, v144);
            sub_AE9DF0((unsigned __int8 **)(*v147 + 32LL * v177 + 8), v104, 0xAu);
          }
          LOBYTE(v169) = (*(_BYTE *)(v104 + 84) & 3) == 2;
          sub_1588420((__int64)&v171, (unsigned __int8 *)&v169);
          sub_15F7200(&v171);
          sub_B88650(v104, 1);
          goto LABEL_129;
        }
        if ( (*v105 & 1) != 0 )
        {
          LOBYTE(v168) = 0;
          v107 = 5665;
        }
        else
        {
          LOBYTE(v168) = 0;
          v107 = 7337;
        }
        goto LABEL_126;
      }
      if ( (*v105 & 1) != 0 )
      {
        LOBYTE(v168) = 1;
        v107 = 5665;
      }
      else
      {
        LOBYTE(v168) = 1;
        v107 = 7337;
      }
    }
    else
    {
      v107 = (*v105 & 1) == 0 ? 7337 : 5665;
      LOBYTE(v168) = v104 == 0;
      if ( v104 )
      {
LABEL_126:
        sub_168B9F0((__int64)&v171, v106, a2, v107, 0);
        if ( v176 )
        {
          sub_AE9DF0(v175, v104, 0xAu);
        }
        else if ( v178 )
        {
          v138 = sub_168B9E0(&v171);
          v139 = v173;
          if ( v173 )
            v139 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v173 + 32LL))(v173);
          v169 = v139;
          v140 = sub_1587BC0(v138, &v169, v134, v135, v136, v137);
          sub_AE9DF0((unsigned __int8 **)(*v140 + 32LL * v177 + 8), v104, 0xAu);
        }
        sub_15890D0((__int64)&v171, (unsigned __int8 *)&v168);
        sub_15F7200(&v171);
        goto LABEL_129;
      }
    }
    v106 = (__int64 *)(a1 + 8);
    v104 = sub_15F1670(a1);
    goto LABEL_126;
  }
LABEL_129:
  result = sub_EEF0A0(*(_QWORD **)(a1 + 248), a2, 0, 0, v102, v103);
LABEL_94:
  v80 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
  if ( (*(_WORD *)result & 0x200) != 0 && *(_QWORD *)(result + 16) )
  {
    v81 = *(unsigned int *)(v80 + 144);
    if ( v81 + 1 > (unsigned __int64)*(unsigned int *)(v80 + 148) )
    {
      v151 = result;
      sub_2237220(v80 + 136, v80 + 152, v81 + 1, 8);
      v81 = *(unsigned int *)(v80 + 144);
      result = v151;
    }
    *(_QWORD *)(*(_QWORD *)(v80 + 136) + 8 * v81) = result;
    v82 = *(_QWORD *)(a1 + 32);
    ++*(_DWORD *)(v80 + 144);
    v80 = *(_QWORD *)(v82 + 8LL * *(unsigned int *)(a1 + 40) - 8);
  }
  if ( !*(_DWORD *)(v80 + 16) )
    *(_DWORD *)(v80 + 16) = a2;
  return result;
}
