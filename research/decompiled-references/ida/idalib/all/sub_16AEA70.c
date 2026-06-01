unsigned __int64 __fastcall sub_16AEA70(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 v13; // rdi
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rsi
  __int64 v20; // r13
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  const char *v31; // r12
  __int64 v32; // rax
  __int64 v33; // r12
  unsigned __int64 v34; // rax
  __int64 v35; // r13
  __int64 *v36; // rcx
  __int64 v37; // r14
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // r14
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r8
  int v53; // edi
  unsigned int v54; // r14d
  unsigned int v55; // eax
  char v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  char v63; // dl
  char v64; // al
  __int64 *v65; // rdi
  __int64 v66; // rsi
  unsigned int v67; // eax
  int v68; // r9d
  __int64 v69; // rsi
  bool v70; // al
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  bool v79; // al
  __int64 v80; // rcx
  bool v81; // zf
  char v82; // bl
  char v83; // al
  unsigned int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  unsigned __int64 v89; // rbx
  __int64 v90; // rax
  bool v91; // al
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r13
  __int64 v100; // rax
  _QWORD *v101; // rax
  char v102; // al
  unsigned __int8 v103; // cl
  unsigned __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rbp
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // r8
  __int64 *v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 *v127; // r13
  __int64 v128; // rax
  __int64 v129; // rsi
  unsigned int v130; // eax
  unsigned int v131; // r9d
  __int64 v132; // rax
  __int64 v133; // r12
  char v134; // al
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // rdi
  unsigned __int64 v139; // rdx
  __int64 v140; // r13
  __int64 v141; // r14
  unsigned int v142; // r13d
  __int64 v143; // rax
  __int64 v144; // rax
  unsigned int v145; // esi
  int v146; // r13d
  char v147; // al
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  int v152; // eax
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // r13
  __int64 v159; // rax
  _QWORD *v160; // rax
  __int64 v161; // [rsp-10h] [rbp-108h]
  __int64 v162; // [rsp-10h] [rbp-108h]
  __int64 v163; // [rsp-10h] [rbp-108h]
  __int64 v164; // [rsp-8h] [rbp-100h]
  __int64 v165; // [rsp-8h] [rbp-100h]
  __int64 *v166; // [rsp-8h] [rbp-100h]
  char v167; // [rsp+0h] [rbp-F8h]
  int v168; // [rsp+0h] [rbp-F8h]
  int v169; // [rsp+0h] [rbp-F8h]
  int v170; // [rsp+0h] [rbp-F8h]
  unsigned int v171; // [rsp+0h] [rbp-F8h]
  unsigned int v172; // [rsp+0h] [rbp-F8h]
  unsigned int v173; // [rsp+0h] [rbp-F8h]
  int v174; // [rsp+4h] [rbp-F4h]
  char v175; // [rsp+4h] [rbp-F4h]
  __int64 v176; // [rsp+8h] [rbp-F0h] BYREF
  unsigned int v177; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v178; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v179; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v180; // [rsp+28h] [rbp-D0h] BYREF
  unsigned int v181[4]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v182; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v183[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v184; // [rsp+A8h] [rbp-50h]
  unsigned int v185; // [rsp+B0h] [rbp-48h]
  char v186; // [rsp+B4h] [rbp-44h]

  v13 = a1[31];
  v176 = a5;
  v14 = *a2;
  v177 = a6;
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v17 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
  v18 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v178 = v17;
  v179 = v18;
  v19 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v18 != *(_QWORD *)(v13 + 19080) )
    goto LABEL_2;
  *(_QWORD *)v181 = v14;
  v23 = *v19;
  v24 = *(unsigned __int8 *)(*v19 + 16);
  if ( (unsigned int)(v24 - 43) <= 1 )
    goto LABEL_14;
  v30 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v30 <= 1 )
  {
    v23 = sub_F63050(*v19, v19, v30, v24);
    if ( v23 )
    {
      v24 = *(unsigned __int8 *)(v23 + 16);
LABEL_14:
      if ( (_BYTE)v24 != 43 )
      {
        while ( (*(_BYTE *)(v23 + 18) & 0x10) != 0 )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(v23 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v29 = (unsigned int)*(unsigned __int8 *)(v23 + 16) - 43;
          if ( (unsigned int)v29 > 1 )
            v23 = sub_F63050(v23, v19, v29, v24);
        }
      }
      v25 = 0;
      goto LABEL_16;
    }
  }
  v25 = 1;
LABEL_16:
  v26 = sub_1BE7810((_DWORD)a1, (unsigned int)v181, v25, 0, 0, 0, 0);
  v14 = v161;
  a6 = v164;
  if ( !v26 || *(_QWORD *)v181 <= 1u )
  {
    *(_QWORD *)v181 = v15;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, unsigned int *, __int64, __int64, __int64))sub_1BE0460)(
                             a1,
                             v181,
                             1,
                             v27,
                             v161)
      || *(_QWORD *)v181 <= 1u )
    {
      goto LABEL_8;
    }
  }
  v28 = *(_QWORD *)v181;
  v17 = v178;
  *a2 = *(_QWORD *)v181;
  v16 = v28 & 0xFFFFFFFFFFFFFFFELL;
  v19 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  v179 = *(_QWORD *)(v16 + 8);
LABEL_2:
  v20 = *v19;
  if ( (unsigned int)*(unsigned __int8 *)(*v19 + 16) - 43 <= 1 )
  {
LABEL_3:
    if ( (*(_BYTE *)(v16 + 1) & 6) != 0 )
    {
      if ( !a4 )
      {
        v19 = (__int64 *)v179;
        sub_16AAAC0(a1, v179, v178, 0, (unsigned int)v176 | ((unsigned __int64)v177 << 32), a6);
        v16 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      }
      switch ( (*(_BYTE *)(v16 + 1) >> 3) & 7 )
      {
        case 1:
          LODWORD(v21) = 0;
          *a8 = 3282;
          return (unsigned int)v21;
        case 2:
          v31 = "vector element";
          break;
        case 3:
          v31 = "property expression";
          break;
        case 4:
          v31 = "container subscripting expression";
          break;
        case 5:
          v31 = "matrix element";
          break;
        default:
          v44 = a1[31];
          v45 = sub_9B4870(v20, (__int64)v19, (*(_BYTE *)(v16 + 1) >> 3) & 7, v16, v14);
          v46 = sub_A70010(v44, v45);
          v47 = a1[31];
          v178 = v46;
          v48 = sub_A70010(v47, v179);
          v17 = v178;
          v167 = 1;
          v179 = v48;
          v19 = (__int64 *)(v178 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_35;
      }
      sub_168B9F0((__int64)v181, a1 + 1, v176, 0xCEBu, 0);
      if ( v184 )
      {
        sub_AE9DF0(v183, (__int64)v31, 1u);
      }
      else if ( v186 )
      {
        v99 = sub_168B9E0(v181);
        v100 = (__int64)v182;
        if ( v182 )
          v100 = (*(__int64 (__fastcall **)(_QWORD *))(*v182 + 32LL))(v182);
        v180 = v100;
        v101 = sub_1587BC0(v99, &v180, v95, v96, v97, v98);
        sub_AE9DF0((unsigned __int8 **)(*v101 + 32LL * v185 + 8), (__int64)v31, 1u);
      }
      v32 = sub_1605D30((__int64)v181, (__int64 *)&v178);
      v33 = sub_16AAEC0(v32, (unsigned int *)&v176);
      v180 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v176, a7);
      sub_1587DB0(v33, &v180);
      sub_15F7200(v181);
      LODWORD(v21) = 0;
      *a8 = 0;
      *a2 = 1;
      return (unsigned int)v21;
    }
    *a8 = 3286;
    goto LABEL_8;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
  {
    v167 = 0;
  }
  else
  {
    v20 = sub_F63050(*v19, v19, v17, v16);
    if ( v20 )
    {
      v16 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_3;
    }
    v17 = v178;
    v167 = 0;
    v19 = (__int64 *)(v178 & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_35:
  v34 = *(_QWORD *)&byte_8[v179 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v179 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v179) & 7;
  v179 = v34;
  v35 = *v19;
  if ( *(_BYTE *)(*v19 + 16) == 33 )
  {
    v36 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
    v37 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v37 + 16) == 33 )
      goto LABEL_37;
  }
  else
  {
    v80 = *(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v80 + 16) == 33 )
    {
      v35 = sub_F63050(*v19, v19, v17, v80);
      v34 = v179;
      v36 = (__int64 *)(v179 & 0xFFFFFFFFFFFFFFF0LL);
      v37 = *(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v37 + 16) == 33 )
        goto LABEL_48;
    }
    else
    {
      v36 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
      v37 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v37 + 16) == 33 )
        goto LABEL_51;
      v35 = 0;
    }
  }
  v49 = *(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v49 + 16) != 33 )
  {
    v17 = v178;
    v35 = *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_51:
    v50 = *(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v51 = *(unsigned __int8 *)(v50 + 16);
    if ( (_BYTE)v51 == 13 )
    {
      if ( ((*(_WORD *)(v50 + 18) >> 3) & 0x1FF) != 0x1E8 )
      {
        v52 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        v53 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        v54 = v52 - 57;
LABEL_54:
        if ( v54 > 1 )
        {
          if ( v17 == v34 )
          {
            *a9 = 5;
            v102 = sub_C1C400(*v36, v51, v17, (__int64)v36, v52);
            LODWORD(v21) = 1;
            if ( !v102 )
            {
              LODWORD(v21) = 0;
              v103 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL);
              if ( v103 <= 0x2Au )
                return (0x40600000800uLL >> v103) & 1;
            }
            return (unsigned int)v21;
          }
          v55 = v53 & 0xFFFFFFF7;
          LOBYTE(v17) = (v53 & 0xF7) == 34;
          LOBYTE(v55) = (_BYTE)v53 == 11;
          v57 = v55 | (unsigned int)v17;
          v56 = v57;
          LOBYTE(v57) = (_BYTE)v51 == 11 || (v51 & 0xF7) == 34;
          if ( !(_BYTE)v57 )
          {
            if ( !v56 )
              goto LABEL_8;
            v56 = 0;
          }
          v58 = a1[31];
          if ( !sub_F60F80(v35, v58, v57, (__int64)v36, v52, a6) )
          {
            if ( sub_C1C400(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL), v58, v59, v60, v61) )
            {
              v105 = *a2;
              *(_QWORD *)v181 = __PAIR64__(v177, v176);
              sub_16AA970(a4, v181, v105 & 0xFFFFFFFFFFFFFFFELL, v178, (__int64)a1, v62);
              LODWORD(v21) = 1;
              *a9 = 21;
              return (unsigned int)v21;
            }
            if ( !v56 )
              goto LABEL_8;
            v63 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
            v64 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
            if ( v63 == 11 )
            {
              if ( v64 == 34 )
                goto LABEL_8;
            }
            else if ( v63 == 34 && v64 == 11 )
            {
              goto LABEL_8;
            }
            v65 = a1;
            v66 = v179;
            v67 = sub_16A7D70((__int64)a1, v179, v178, a4 ^ 1u, a4, nullptr, nullptr, nullptr);
            if ( v67 )
            {
              if ( v67 > 2 )
              {
                if ( v67 != 3 )
                  return sub_16AFCC0(v65, v66);
                v68 = 2;
                *a8 = 5502;
              }
              else
              {
                v68 = 3;
                *a8 = 3285;
              }
            }
            else
            {
              v68 = 1;
            }
            v69 = v178;
            v174 = v68;
            v70 = sub_16A8540(v179, v178, v162, v165);
            LODWORD(v21) = v174;
            if ( v70 )
            {
              *a9 = 63;
              if ( a4 )
              {
LABEL_68:
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL) == 34 )
                  return (unsigned int)v21;
                v168 = v21;
                sub_16AB4A0((__int64)a1, a2, v178, a7);
                LODWORD(v21) = v168;
                goto LABEL_70;
              }
              v135 = sub_F68450(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL), v69, v71, v72, v73);
              LODWORD(v138) = 0;
              v139 = v135 & 0xFFFFFFFFFFFFFFF0LL;
              v140 = *(_QWORD *)&byte_8[v135 & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v140 & 8) != 0 )
              {
                v139 = v140 & 0xFFFFFFFFFFFFFFF0LL;
                v138 = *(__int64 *)((char *)&qword_18 + (v140 & 0xFFFFFFFFFFFFFFF0LL));
              }
              v141 = a1[31];
              v142 = v138 | ((unsigned __int8)v135 | (unsigned __int8)v140) & 7;
              v143 = sub_F68450(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL), v69, v139, v136, v137);
              LODWORD(v69) = 0;
              LODWORD(v21) = v174;
              v144 = *(_QWORD *)&byte_8[v143 & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v144 & 8) != 0 )
                v69 = *(__int64 *)((char *)&qword_18 + (v144 & 0xFFFFFFFFFFFFFFF0LL));
              v145 = (unsigned int)v69 >> 9;
              v146 = v142 >> 9;
              if ( v145 != v146 )
              {
                v147 = sub_F56A30(v146, v145, v141);
                LODWORD(v21) = v174;
                if ( !v147 )
                {
                  LODWORD(v21) = 3;
                  goto LABEL_70;
                }
              }
            }
            else if ( v167 )
            {
              *a9 = 2;
            }
            else
            {
              v134 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL);
              if ( v134 == 34 )
              {
                v152 = sub_19D1830(a1[92], a2);
                LODWORD(v21) = v174;
                *a9 = v152;
              }
              else if ( v134 != 11
                     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                             & 0xFFFFFFFFFFFFFFF0LL)
                                 + 16LL) == 11 )
              {
                *a9 = 1;
              }
              else
              {
                *a9 = 42;
              }
            }
            if ( a4 )
              goto LABEL_68;
LABEL_70:
            v74 = (__int64)a2;
            v169 = v21;
            sub_16ADFE0(a1, a2, v178, v176, v177);
            if ( sub_C1BF80(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v75, v76) )
            {
              v79 = sub_C1BF80(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v77, v78);
              LODWORD(v21) = v169;
              if ( v79 )
                return (unsigned int)v21;
LABEL_72:
              sub_168B9F0((__int64)v181, a1 + 1, v176, (*(_BYTE *)(a1[29] + 1) & 0x10) == 0 ? 5515 : 6760, 0);
              sub_16AAEC0((__int64)v181, (unsigned int *)&v176);
              sub_15F7200(v181);
              LODWORD(v21) = v169;
              return (unsigned int)v21;
            }
            if ( sub_C1BF80(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v77, v78) )
              goto LABEL_72;
            if ( (sub_F68450(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v106, v107, v108)
                & 0xFFFFFFFFFFFFFFF0LL) != 0 )
              v112 = sub_F68450(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v109, v110, v111);
            else
              v112 = v178;
            v113 = sub_F68450(*(_QWORD *)(v112 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v109, v110, v111);
            if ( (sub_F68450(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v114, v115, v116)
                & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            {
              v148 = sub_F68450(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v117, v118, v119);
              v120 = sub_F68450(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v149, v150, v151);
            }
            else
            {
              v120 = sub_F68450(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v117, v118, v119);
            }
            LODWORD(v21) = v169;
            v122 = (__int64 *)(v113 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (v113 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
              return (unsigned int)v21;
            while ( 1 )
            {
              v127 = (__int64 *)(v120 & 0xFFFFFFFFFFFFFFF0LL);
              if ( (v120 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                return (unsigned int)v21;
              v128 = v122[1];
              if ( (v128 & 8) != 0 )
              {
                LODWORD(v129) = 0;
                v123 = v127[1];
                v130 = (*(_DWORD *)((char *)&qword_18 + (v128 & 0xFFFFFFFFFFFFFFF0LL))
                      | ((unsigned __int8)v113 | (unsigned __int8)v128) & 7u) >> 9;
                if ( (v123 & 8) == 0 )
                  goto LABEL_150;
              }
              else
              {
                v123 = v127[1];
                if ( (v123 & 8) == 0 )
                  goto LABEL_146;
                v130 = 0;
              }
              v123 &= 0xFFFFFFFFFFFFFFF0LL;
              v129 = *(_QWORD *)(v123 + 24);
LABEL_150:
              v74 = (unsigned int)v129 >> 9;
              if ( (_DWORD)v74 != v130 )
              {
                v171 = v21;
                sub_168B9F0((__int64)v181, a1 + 1, v176, 0x19D7u, 0);
                v131 = v171;
                if ( v184 )
                {
                  sub_AE9DF0(v183, a4, 2u);
                  v131 = v171;
                }
                else if ( v186 )
                {
                  v153 = sub_168B9E0(v181);
                  v157 = v171;
                  v158 = v153;
                  v159 = (__int64)v182;
                  if ( v182 )
                  {
                    v159 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _QWORD))(*v182 + 32LL))(
                             v182,
                             a1 + 1,
                             *v182,
                             v155,
                             v156,
                             v171);
                    v157 = v171;
                  }
                  v173 = v157;
                  v180 = v159;
                  v160 = sub_1587BC0(v158, &v180, v154, v155, v156, v157);
                  sub_AE9DF0((unsigned __int8 **)(*v160 + 32LL * v185 + 8), a4, 2u);
                  v131 = v173;
                }
                v172 = v131;
                v132 = sub_1605D30((__int64)v181, (__int64 *)&v179);
                v133 = sub_1605D30(v132, (__int64 *)&v178);
                v180 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v178, a7);
                sub_1587DB0(v133, &v180);
                sub_15F7200(v181);
                LODWORD(v21) = v172;
                return (unsigned int)v21;
              }
LABEL_146:
              v170 = v21;
              v113 = sub_F68450(*v122, v74, (__int64)v122, v123, v121);
              v120 = sub_F68450(*v127, v74, v124, v125, v126);
              LODWORD(v21) = v170;
              v122 = (__int64 *)(v113 & 0xFFFFFFFFFFFFFFF0LL);
              if ( (v113 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                return (unsigned int)v21;
            }
          }
          v89 = sub_A97D20(a1[31], *(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v89 <= sub_A97D20(a1[31], *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL)) )
          {
LABEL_112:
            LODWORD(v21) = 1;
            *a9 = 22;
            return (unsigned int)v21;
          }
          if ( *(char *)a1[29] < 0 )
          {
            v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v90 + 16) != 13 || ((*(_WORD *)(v90 + 18) >> 3) & 0x1FF) != 0x1B4 )
            {
              v91 = sub_F67340(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL));
              sub_168B9F0((__int64)v181, a1 + 1, v176, !v91 ? 7254 : 7563, 0);
              v92 = sub_1605D30((__int64)v181, (__int64 *)&v179);
              v93 = sub_1605D30(v92, (__int64 *)&v178);
              sub_16AAEC0(v93, (unsigned int *)&v176);
              sub_15F7200(v181);
              goto LABEL_112;
            }
          }
LABEL_128:
          LODWORD(v21) = 3;
          *a8 = 3308;
          return (unsigned int)v21;
        }
        v175 = 0;
LABEL_80:
        if ( !(unsigned __int8)sub_18C21E0(a1, v179, v178) && !(unsigned __int8)sub_1C252E0(a1[98], v179, v178) )
        {
          if ( v54 > 1 && !sub_F60F80(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL), a1[31], v85, v86, v87, v88)
            || !v175 && !sub_F60F80(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL), a1[31], v85, v86, v87, v88) )
          {
            goto LABEL_8;
          }
          if ( !(unsigned __int8)sub_18C25E0(a1, v179, v178)
            && ((*(_BYTE *)(a1[29] + 47) & 0x20) == 0
             || a4
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL) != 58
             && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL) != 58
             || !(unsigned __int8)sub_18C22D0(a1, v179, v178)) )
          {
            if ( v54 <= 1 )
            {
              if ( v175 )
                *a8 = 3290;
              else
                *a8 = 3287;
              LODWORD(v21) = 3;
            }
            else
            {
              *a8 = 3289;
              LODWORD(v21) = 3;
            }
            return (unsigned int)v21;
          }
        }
        LODWORD(v21) = 1;
        *a9 = 1;
        return (unsigned int)v21;
      }
      v81 = sub_F60F80(v35, a1[31], v17, (__int64)v36, v14, a6) == 0;
      v34 = v179;
      if ( !v81 )
      {
        v104 = sub_A97D20(a1[31], *(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v104 <= sub_A97D20(a1[31], *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL)) )
          goto LABEL_112;
        goto LABEL_128;
      }
      v17 = v178;
      v36 = (__int64 *)(v179 & 0xFFFFFFFFFFFFFFF0LL);
      v35 = *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL);
      v51 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
    }
    v175 = 1;
    v52 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v53 = v52;
    v54 = v52 - 57;
    if ( (unsigned int)(unsigned __int8)v51 - 57 <= 1 )
      goto LABEL_80;
    goto LABEL_54;
  }
  v37 = sub_F63050(v37, v19, v49, v36);
LABEL_48:
  if ( !v35 || !v37 )
  {
    v34 = v179;
    v17 = v178;
    v36 = (__int64 *)(v179 & 0xFFFFFFFFFFFFFFF0LL);
    v37 = *(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFF0LL);
    v35 = *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_51;
  }
LABEL_37:
  v38 = *(_QWORD *)(v35 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v39 = *(_QWORD *)v38;
  if ( *(_BYTE *)(*(_QWORD *)v38 + 16LL) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
    {
      v82 = sub_F63050(v39, v19, v17, v36) != 0;
      v41 = *(_QWORD *)(*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v83 = 1;
      if ( *(_BYTE *)(v41 + 16) == 26
        || (v17 = *(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL), v83 = 0, *(_BYTE *)(v17 + 16) != 26) )
      {
LABEL_84:
        if ( v82 == v83 )
          goto LABEL_39;
LABEL_8:
        LODWORD(v21) = 0;
        return (unsigned int)v21;
      }
    }
    else
    {
      v94 = *(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v41 = *(_QWORD *)v94;
      if ( *(_BYTE *)(*(_QWORD *)v94 + 16LL) == 26 )
        goto LABEL_8;
      v82 = 0;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
        goto LABEL_39;
    }
LABEL_91:
    v83 = sub_F63050(v41, v19, v17, v36) != 0;
    goto LABEL_84;
  }
  v40 = *(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v41 = *(_QWORD *)v40;
  if ( *(_BYTE *)(*(_QWORD *)v40 + 16LL) != 26 )
  {
    v82 = 1;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_8;
    goto LABEL_91;
  }
LABEL_39:
  v42 = a1[31];
  if ( *(_DWORD *)(*(_QWORD *)(v42 + 17448) + 340LL) == 10 )
  {
    sub_1E63330(a1, (unsigned int)v176, v179, 1, 0);
    sub_1E63330(a1, (unsigned int)v176, v178, 1, 0);
    v42 = a1[31];
  }
  v43 = sub_A97D20(v42, v35);
  if ( v43 != sub_A97D20(a1[31], v37) )
  {
    LODWORD(v21) = 3;
    *a8 = 3284;
    return (unsigned int)v21;
  }
  v84 = sub_16A7D70((__int64)a1, v179, v178, a4 ^ 1u, a4, nullptr, nullptr, nullptr);
  v66 = v163;
  v65 = v166;
  if ( !v84 )
  {
    LODWORD(v21) = 1;
    *a9 = 18;
    return (unsigned int)v21;
  }
  if ( v84 <= 2 )
  {
    LODWORD(v21) = 3;
    *a8 = 3285;
    return (unsigned int)v21;
  }
  if ( v84 == 3 )
  {
    LODWORD(v21) = 2;
    *a8 = 5502;
    return (unsigned int)v21;
  }
  return sub_16AFCC0(v65, v66);
}
