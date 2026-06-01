__int64 __fastcall sub_19D30C0(__int64 *a1, unsigned __int64 a2, __int64 *a3, unsigned int a4, double a5, double a6)
{
  _QWORD *v7; // r13
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  char v27; // al
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rsi
  char v38; // al
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // r15
  unsigned __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // r15
  unsigned __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  char v64; // cl
  __int64 *v65; // rsi
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rsi
  char v73; // cl
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rsi
  char v84; // al
  char v85; // cl
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rsi
  __int64 v88; // rcx
  __int64 v89; // rcx
  unsigned __int64 v90; // r15
  char v91; // al
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rdx
  unsigned __int64 v108; // rsi
  unsigned __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // r14
  __int64 v127; // rax
  __int64 v128; // rdi
  __int64 v129; // rcx
  __int64 v130; // rax
  int v131; // edx
  unsigned __int64 v132; // rsi
  unsigned __int64 v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // r12
  __int64 v138; // r12
  __int64 v139; // rdx
  __int64 v140; // rsi
  char v141; // al
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r9
  __int64 v145; // r8
  __int64 v146; // rbx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rdx
  _QWORD *v151; // rsi
  __int64 v152; // rdx
  _QWORD *v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // r9
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // r14
  __int64 v170; // r14
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // [rsp+10h] [rbp-F8h]
  __int64 v176; // [rsp+10h] [rbp-F8h]
  __int64 v177; // [rsp+10h] [rbp-F8h]
  __int64 v178; // [rsp+10h] [rbp-F8h]
  __int64 v179; // [rsp+10h] [rbp-F8h]
  __int64 v180; // [rsp+18h] [rbp-F0h]
  __int64 v181; // [rsp+18h] [rbp-F0h]
  __int64 v182; // [rsp+18h] [rbp-F0h]
  __int64 v183; // [rsp+18h] [rbp-F0h]
  __int64 v184; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v185; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v186; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v187; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v188[200]; // [rsp+40h] [rbp-C8h] BYREF

  v7 = (_QWORD *)a2;
  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  v13 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v14 = *(_QWORD *)((*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v185 = v13;
  v184 = v14;
  v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 34 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) != 34 )
    {
      v18 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_5;
    }
    v15 = sub_F63050(v15, a2, v13, v10);
    if ( !v15 )
      goto LABEL_4;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = (unsigned int)*(unsigned __int8 *)(v16 + 16) - 35;
  if ( (unsigned int)v17 > 1 )
  {
    v16 = sub_F63050(v16, a2, v17, v10);
    if ( *(_BYTE *)(v16 + 19) >> 2 )
      goto LABEL_4;
  }
  else if ( *(_BYTE *)(v16 + 19) >> 2 )
  {
LABEL_4:
    v18 = v185 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v68 + 16) != 13 || ((*(_WORD *)(v68 + 18) >> 3) & 0x1FF) != 0x1EA )
    goto LABEL_4;
  v69 = v11[191];
  v70 = v69 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v69 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v110 = sub_A8A180(v11);
    v113 = *(_QWORD *)(v110 + 48);
    if ( v113 )
    {
      LOBYTE(v69) = v113 & 0xF0;
      v70 = v113 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v69 = sub_A7AA70((__int64)v11, v110, 0, v111, v12, v112);
      v70 = v69 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  v71 = *(_QWORD *)(v70 + 8);
  v18 = v185 & 0xFFFFFFFFFFFFFFF0LL;
  v72 = *(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL];
  v73 = v72 | v185;
  a2 = v72 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = a2 | v73 & 7;
  if ( (v71 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v71 | (unsigned __int8)v69) & 7) == v10 )
    goto LABEL_49;
LABEL_5:
  v19 = *(_QWORD *)v18;
  if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) != 34 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v22 + 16) != 34 )
      goto LABEL_17;
    v19 = sub_F63050(v19, a2, v22, v10);
    if ( !v19 )
      goto LABEL_17;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = (unsigned int)*(unsigned __int8 *)(v20 + 16) - 35;
  if ( (unsigned int)v21 > 1 )
    v20 = sub_F63050(v20, a2, v21, v10);
  v22 = *(unsigned __int8 *)(v20 + 19);
  LOBYTE(v22) = (unsigned __int8)v22 >> 2;
  if ( !(_BYTE)v22
    && (v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v23 + 16) == 13)
    && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1EA )
  {
    v24 = v11[191];
    v25 = v24 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v114 = sub_A8A180(v11);
      v117 = *(_QWORD *)(v114 + 48);
      if ( v117 )
      {
        LOBYTE(v24) = v117 & 0xF0;
        v25 = v117 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v24 = sub_A7AA70((__int64)v11, v114, 0, v115, v12, v116);
        v25 = v24 & 0xFFFFFFFFFFFFFFF0LL;
      }
    }
    v26 = *(_QWORD *)(v25 + 8);
    v27 = v26 | v24;
    a2 = v26 & 0xFFFFFFFFFFFFFFF8LL;
    v28 = (__int64 *)(v184 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *(_QWORD *)&byte_8[v184 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v184 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v184) & 7;
    if ( v22 == (a2 | v27 & 7) )
      goto LABEL_13;
  }
  else
  {
LABEL_17:
    v28 = (__int64 *)(v184 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( sub_9C7DB0(*v28, a2, v22, (__int64)v28, v12) )
  {
    v35 = v11[190];
    if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      v35 = sub_A8A430(v11, a2, v31, v32, v33, v34);
    v36 = *(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL];
    v37 = (__int64 *)(v185 & 0xFFFFFFFFFFFFFFF0LL);
    v38 = v36 | v35;
    v39 = v36 & 0xFFFFFFFFFFFFFFF8LL;
    v40 = *(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v185) & 7;
    if ( v40 != (v39 | v38 & 7) )
    {
      if ( sub_9C7DB0(*v37, (__int64)v37, v40, v39, v33) )
        goto LABEL_23;
LABEL_60:
      v46 = v184;
      v47 = v184 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_26;
    }
LABEL_49:
    v74 = sub_160A600(*a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v184, 0x28u, 0, 0, a5, a6, 0);
LABEL_50:
    *a3 = v74;
    return v184;
  }
  v37 = (__int64 *)(v185 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !sub_9C7DB0(*(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL), v185 & 0xFFFFFFFFFFFFFFF0LL, v31, v32, v33) )
    goto LABEL_60;
LABEL_23:
  v45 = v11[190];
  if ( (v45 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    v45 = sub_A8A430(v11, (__int64)v37, v41, v42, v43, v44);
  v46 = v184;
  v47 = v184 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)&byte_8[v184 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v184 | (unsigned __int8)*(_QWORD *)&byte_8[v184 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v45) & 7) )
  {
LABEL_13:
    v29 = sub_160A600(*a1, *v7 & 0xFFFFFFFFFFFFFFFELL, v185, 0x28u, 0, 0, a5, a6, 0);
LABEL_14:
    *v7 = v29;
    return v185;
  }
LABEL_26:
  if ( *(_BYTE *)(*(_QWORD *)v47 + 16LL) == 24 )
    v46 = *(_QWORD *)(*(_QWORD *)v47 + 40LL);
  v48 = sub_A8A1F0(v11);
  v52 = *(_QWORD *)(v48 + 48);
  if ( v52 )
    v53 = v52 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v53 = sub_A7AA70((__int64)v11, v48, 0, v49, v50, v51);
  if ( v46 != v53 )
  {
    v56 = v185;
    v57 = v185 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_33;
  }
  v54 = v11[192];
  v55 = v54 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v54 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v118 = sub_A8A1F0(v11);
    v122 = *(_QWORD *)(v118 + 48);
    if ( v122 )
    {
      LOBYTE(v54) = v122 & 0xF0;
      v55 = v122 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v54 = sub_A7AA70((__int64)v11, v118, 0, v119, v120, v121);
      v55 = v54 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  v56 = v185;
  v57 = v185 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v185 | (unsigned __int8)*(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v55 + 8) | (unsigned __int8)v54) & 7) )
  {
    v74 = sub_160A600(*a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v184, 1u, 0, 0, a5, a6, 0);
    goto LABEL_50;
  }
LABEL_33:
  if ( *(_BYTE *)(*(_QWORD *)v57 + 16LL) == 24 )
    v56 = *(_QWORD *)(*(_QWORD *)v57 + 40LL);
  v58 = sub_A8A1F0(v11);
  v62 = *(_QWORD *)(v58 + 48);
  if ( v62 )
    v63 = v62 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v63 = sub_A7AA70((__int64)v11, v58, 0, v59, v60, v61);
  if ( v56 == v63 )
  {
    v75 = v11[192];
    v76 = v75 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v75 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v77 = sub_A8A1F0(v11);
      v81 = *(_QWORD *)(v77 + 48);
      if ( v81 )
      {
        LOBYTE(v75) = v81 & 0xF0;
        v76 = v81 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v75 = sub_A7AA70((__int64)v11, v77, 0, v78, v79, v80);
        v76 = v75 & 0xFFFFFFFFFFFFFFF0LL;
      }
    }
    v64 = v184;
    v65 = (__int64 *)(v184 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_QWORD *)&byte_8[v184 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)v184 | (unsigned __int8)*(_QWORD *)&byte_8[v184 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v76 + 8) | (unsigned __int8)v75) & 7) )
    {
      v29 = sub_160A600(*a1, *v7 & 0xFFFFFFFFFFFFFFFELL, v185, 1u, 0, 0, a5, a6, 0);
      goto LABEL_14;
    }
  }
  else
  {
    v64 = v184;
    v65 = (__int64 *)(v184 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v66 = *v65;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v67 = *(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
    {
      v82 = *(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL];
      v83 = v65[1];
      v84 = v82 | v185;
      v85 = v83 | v64;
      v86 = v82 & 0xFFFFFFFFFFFFFFF8LL;
      v87 = v83 & 0xFFFFFFFFFFFFFFF8LL;
      v88 = v87 | v85 & 7;
      if ( v88 == (v86 | v84 & 7) )
        return v184;
      if ( *(_BYTE *)(v66 + 16) != 34 )
      {
        v66 = sub_F63050(v66, v87, v86, v88);
        v67 = *(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL);
      }
      if ( *(_BYTE *)(v67 + 16) != 34 )
      {
        v176 = v66;
        v135 = sub_F63050(v67, v87, v86, v88);
        v66 = v176;
        v67 = v135;
      }
      v180 = v67;
      v175 = v66;
      v90 = sub_AB25E0((__int64)v11, v66, v67, v88, v66);
      if ( (v90 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v91 = sub_AABC90((__int64)v11, v175, v180, v89, v175);
        v94 = v175;
        v95 = v180;
        if ( v91 )
        {
          v96 = v180;
          if ( !sub_9C7DB0(v180, v175, v92, v93, v175) && !sub_A5EA70(v180, v175, v97, v98, v99) )
          {
            if ( *(_BYTE *)(v180 + 16) != 42 )
              v96 = sub_19CD660(v180, v175, v162, v163);
            if ( !v96
              || (v164 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v96 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                   & 0xFFFFFFFFFFFFFFF0LL),
                  *(_BYTE *)(v164 + 16) != 13)
              || ((*(_WORD *)(v164 + 18) >> 3) & 0x1FF) != 0x1EB )
            {
LABEL_110:
              v90 = v184;
              goto LABEL_74;
            }
          }
          goto LABEL_73;
        }
        v139 = v175;
        v140 = v180;
        v181 = v175;
        v177 = v95;
        v141 = sub_AABC90((__int64)v11, v140, v139, v93, v94);
        v144 = v177;
        v145 = v181;
        if ( v141 )
        {
          v146 = v181;
          if ( sub_9C7DB0(v181, v140, v142, v143, v181) || sub_A5EA70(v181, v140, v147, v148, v149) )
            goto LABEL_110;
          if ( *(_BYTE *)(v181 + 16) != 42 )
            v146 = sub_19CD660(v181, v140, v165, v166);
          if ( v146 )
          {
            v167 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v146 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v167 + 16) == 13 && ((*(_WORD *)(v167 + 18) >> 3) & 0x1FF) == 0x1EB )
              goto LABEL_110;
          }
LABEL_73:
          v90 = v185;
          goto LABEL_74;
        }
        v154 = *(_QWORD *)(*(_QWORD *)(v181 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v155 = (unsigned int)*(unsigned __int8 *)(v154 + 16) - 35;
        if ( (unsigned int)v155 > 1 )
        {
          v182 = v177;
          v178 = v145;
          v154 = sub_F63050(v154, v140, v155, v143);
          v144 = v182;
          v145 = v178;
        }
        if ( !(*(_BYTE *)(v154 + 19) >> 2)
          || (v156 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL),
              *(_BYTE *)(v156 + 16) != 13)
          || ((*(_WORD *)(v156 + 18) >> 3) & 0x1FF) != 0x1E9 )
        {
          v159 = *(_QWORD *)(*(_QWORD *)(v144 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v160 = (unsigned int)*(unsigned __int8 *)(v159 + 16) - 35;
          if ( (unsigned int)v160 > 1 )
          {
            v183 = v144;
            v179 = v145;
            v159 = sub_F63050(v159, v140, v160, v143);
            v144 = v183;
            v145 = v179;
          }
          v157 = *(unsigned __int8 *)(v159 + 19);
          LOBYTE(v157) = (unsigned __int8)v157 >> 2;
          if ( !(_BYTE)v157 )
            goto LABEL_126;
          v161 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v159 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v161 + 16) != 13 || ((*(_WORD *)(v161 + 18) >> 3) & 0x1FF) != 0x1E9 )
            goto LABEL_126;
        }
        v140 = v145;
        if ( !(unsigned __int8)sub_A7F400((__int64)v11, v145, v144, 1, v145) )
        {
LABEL_126:
          if ( !sub_9C7DB0(*(_QWORD *)(v184 & 0xFFFFFFFFFFFFFFF0LL), v140, v157, v143, v145)
            && !sub_9C7DB0(*(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL), v140, v157, v143, v145) )
          {
            sub_168B9F0((__int64)v188, a1, a4, 0x163Fu, 0);
            v168 = sub_1605D30((__int64)v188, &v184);
            v169 = sub_1605D30(v168, &v185);
            v186 = sub_EEC8C0(*v7 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v185, a5);
            v170 = sub_1587DB0(v169, &v186);
            v187 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v186, a5);
            sub_1587DB0(v170, &v187);
            sub_15F7200(v188);
            v133 = sub_A8A430(v11, (__int64)&v187, v171, v172, v173, v174);
            v134 = sub_160A600(*a1, *v7 & 0xFFFFFFFFFFFFFFFELL, v133, 1u, 0, 0, a5, a6, 0);
            goto LABEL_103;
          }
        }
        v90 = sub_A8A430(v11, v140, v157, v143, v145, v158);
      }
LABEL_74:
      *v7 = sub_160A600(*a1, *v7 & 0xFFFFFFFFFFFFFFFELL, v90, 1u, 0, 0, a5, a6, 0);
      *a3 = sub_160A600(*a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v90, 1u, 0, 0, a5, a6, 0);
      return v90;
    }
  }
  if ( sub_F67340(*v65)
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
      goto LABEL_107;
    v125 = *(_QWORD *)(v184 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v125 + 16) != 42 )
      v125 = sub_F63050(*(_QWORD *)(v184 & 0xFFFFFFFFFFFFFFF0LL), v65, v123, v124);
    v126 = *(_QWORD *)(v125 + 32);
    v127 = *(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v127 + 16) != 34 )
      v127 = sub_F63050(*(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL), v65, v123, v124);
    v128 = *(_QWORD *)(v127 + 32);
    v129 = *(_QWORD *)&byte_8[v128 & 0xFFFFFFFFFFFFFFF0LL];
    v130 = v126 & 7;
    v131 = ((unsigned __int8)v128 | (unsigned __int8)v129) & 7;
    if ( (v129 & 8) != 0
      && (v131 = v128 & 7
               | *(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v128 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
               | *(_DWORD *)&byte_8[v128 & 0xFFFFFFFFFFFFFFF0LL] & 7,
          (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v128 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
         & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v150 = v130
           | v128 & 7
           | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v128 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
           | *(_QWORD *)&byte_8[v128 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
      v151 = (_QWORD *)(v126 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v126 & 8) != 0 )
      {
        v150 |= *(__int64 *)((char *)&qword_18 + (v126 & 0xFFFFFFFFFFFFFFF0LL));
        v151 = (_QWORD *)*v151;
      }
      v132 = sub_A70C40((__int64)v11, (__int64)v151, v150);
    }
    else
    {
      v132 = (unsigned int)v130 | v131 | v126 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v133 = sub_A70010((__int64)v11, v132);
    v134 = sub_160A600(*a1, *v7 & 0xFFFFFFFFFFFFFFFELL, v133, 5u, 0, 0, a5, a6, 0);
LABEL_103:
    *v7 = v134;
    *a3 = sub_160A600(*a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v133, 1u, 0, 0, a5, a6, 0);
    return v133;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v184 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
    || !sub_F67340(*(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    return 0;
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
  {
LABEL_107:
    sub_168B9F0((__int64)v188, a1, a4, 0xD7Au, 0);
    v136 = sub_1605D30((__int64)v188, &v184);
    v137 = sub_1605D30(v136, &v185);
    v186 = sub_EEC8C0(*v7 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v185, a5);
    v138 = sub_1587DB0(v137, &v186);
    v187 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v186, a5);
    sub_1587DB0(v138, &v187);
    sub_15F7200(v188);
    *a3 = 1;
    *v7 = 1;
    return 0;
  }
  v102 = *(_QWORD *)(v184 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v102 + 16) != 34 )
    v102 = sub_F63050(*(_QWORD *)(v184 & 0xFFFFFFFFFFFFFFF0LL), v65, v100, v101);
  v103 = *(_QWORD *)(v102 + 32);
  v104 = *(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v104 + 16) != 42 )
    v104 = sub_F63050(*(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL), v65, v100, v101);
  v105 = *(_QWORD *)(v104 + 32);
  v106 = *(_QWORD *)&byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v107) = ((unsigned __int8)v106 | (unsigned __int8)v103) & 7;
  if ( (v106 & 8) != 0
    && (v107 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
             | *(_QWORD *)&byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
             | v103 & 7,
        (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
       & 0xFFFFFFFFFFFFFFF8LL) != 0) )
  {
    v152 = v105 & 7 | v107;
    v153 = (_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v105 & 8) != 0 )
    {
      v152 |= *(__int64 *)((char *)&qword_18 + (v105 & 0xFFFFFFFFFFFFFFF0LL));
      v153 = (_QWORD *)*v153;
    }
    v108 = sub_A70C40((__int64)v11, (__int64)v153, v152);
  }
  else
  {
    v108 = v105 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v107 | v105 & 7;
  }
  v109 = sub_A70010((__int64)v11, v108);
  *a3 = sub_160A600(*a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v109, 5u, 0, 0, a5, a6, 0);
  *v7 = sub_160A600(*a1, *v7 & 0xFFFFFFFFFFFFFFFELL, v109, 1u, 0, 0, a5, a6, 0);
  return v109;
}
