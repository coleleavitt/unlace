__int64 __fastcall sub_19C2170(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9)
{
  char v12; // bp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *v16; // r14
  char v17; // al
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  _QWORD *v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  char v31; // r8
  unsigned __int64 v32; // rdx
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  bool v38; // si
  char v39; // al
  __int16 v40; // r15
  _WORD *v41; // rax
  unsigned __int64 v42; // rcx
  __int16 v43; // ax
  __int64 v44; // rax
  bool v45; // r8
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // rax
  char v52; // cl
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  int v56; // r10d
  unsigned int v57; // r15d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rsi
  __int64 v66; // r9
  char v67; // cl
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rsi
  unsigned __int64 v74; // r9
  __int64 *v75; // r8
  unsigned __int64 v76; // rdx
  void **v77; // rdi
  __int64 v78; // rbx
  unsigned __int64 v79; // rdi
  __int64 v80; // rax
  int v81; // edx
  __int64 *v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // r13
  __int64 v88; // r13
  __int64 v89; // rax
  char *v90; // r15
  char *v91; // r12
  __int64 v92; // rsi
  unsigned int v93; // ecx
  __int64 v94; // rdi
  _QWORD *v95; // rdi
  char *v96; // r13
  char *v97; // r12
  __int64 v98; // rsi
  __int64 v99; // rdi
  char *v100; // r15
  char *v101; // r13
  _QWORD *v102; // rdi
  _QWORD *v103; // r12
  _QWORD *v104; // r14
  char *v105; // rdi
  __int64 v106; // rsi
  __int64 v107; // rax
  __int64 v108; // r9
  char v109; // cl
  bool v110; // dl
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // r9
  unsigned __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // r13
  __int64 v118; // rbp
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  __int64 v126; // rbx
  unsigned __int64 v127; // rax
  __int64 v128; // rbp
  __int64 *v129; // rsi
  unsigned int v130; // ecx
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  unsigned int v134; // eax
  unsigned int v135; // eax
  __int64 *v136; // [rsp+10h] [rbp-2008h]
  char v137; // [rsp+10h] [rbp-2008h]
  __int64 v138; // [rsp+10h] [rbp-2008h]
  unsigned __int64 v139; // [rsp+10h] [rbp-2008h]
  char v140; // [rsp+10h] [rbp-2008h]
  bool v141; // [rsp+10h] [rbp-2008h]
  char v144; // [rsp+28h] [rbp-1FF0h]
  unsigned int v145; // [rsp+28h] [rbp-1FF0h]
  unsigned __int64 v146; // [rsp+38h] [rbp-1FE0h]
  __int64 v147; // [rsp+48h] [rbp-1FD0h] BYREF
  __int64 v148; // [rsp+50h] [rbp-1FC8h] BYREF
  __int64 *v149; // [rsp+58h] [rbp-1FC0h] BYREF
  __int64 v150; // [rsp+60h] [rbp-1FB8h] BYREF
  __int64 v151; // [rsp+68h] [rbp-1FB0h] BYREF
  __int64 v152; // [rsp+70h] [rbp-1FA8h] BYREF
  __int64 v153; // [rsp+78h] [rbp-1FA0h] BYREF
  __int64 v154[2]; // [rsp+80h] [rbp-1F98h] BYREF
  __int64 v155[18]; // [rsp+90h] [rbp-1F88h] BYREF
  void *v156; // [rsp+120h] [rbp-1EF8h] BYREF
  __int64 v157; // [rsp+128h] [rbp-1EF0h]
  __int64 v158; // [rsp+130h] [rbp-1EE8h] BYREF
  int v159; // [rsp+138h] [rbp-1EE0h]
  __int64 v160; // [rsp+140h] [rbp-1ED8h]
  void *v161; // [rsp+BB0h] [rbp-1468h]
  __int64 v162; // [rsp+BB8h] [rbp-1460h]
  int v163; // [rsp+BC0h] [rbp-1458h]
  char v164; // [rsp+BC4h] [rbp-1454h]
  _QWORD v165[17]; // [rsp+BC8h] [rbp-1450h] BYREF
  int v166; // [rsp+C50h] [rbp-13C8h]
  __int64 v167; // [rsp+C58h] [rbp-13C0h]
  __int64 v168; // [rsp+C60h] [rbp-13B8h]
  void *v169; // [rsp+C68h] [rbp-13B0h]
  __int64 v170; // [rsp+C70h] [rbp-13A8h]
  _BYTE v171[32]; // [rsp+C78h] [rbp-13A0h] BYREF
  void *ptr; // [rsp+C98h] [rbp-1380h]
  __int64 v173; // [rsp+CA0h] [rbp-1378h]
  _QWORD v174[2]; // [rsp+CA8h] [rbp-1370h] BYREF
  unsigned int v175; // [rsp+CB8h] [rbp-1360h]
  int v176; // [rsp+CBCh] [rbp-135Ch]
  __int64 v177; // [rsp+CC0h] [rbp-1358h]
  char v178; // [rsp+CC8h] [rbp-1350h]
  int v179; // [rsp+CCCh] [rbp-134Ch]
  int v180; // [rsp+1FD0h] [rbp-48h]

  v12 = 0;
  v14 = *a2;
  *a5 = 0;
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  *a6 = 0;
  v16 = (_QWORD *)a1[31];
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                          + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 57) <= 1u )
  {
    v17 = sub_F60F80(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL]
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 32LL)
                      & 0xFFFFFFFFFFFFFFF0LL),
            (__int64)v16,
            *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL,
            (__int64)a4,
            (__int64)a5,
            (__int64)a6);
    v16 = (_QWORD *)a1[31];
    v12 = v17;
    v15 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  }
  v136 = (__int64 *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v18) = sub_F58380(*v136);
  v21 = v18;
  if ( (_BYTE)v18 )
  {
    v22 = sub_F583D0(*(_QWORD *)(v136[1] & 0xFFFFFFFFFFFFFFF0LL), v16);
    LOBYTE(v27) = sub_F60F80(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v16, v23, v24, v25, v26);
    v21 = v27;
  }
  v28 = (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*(_DWORD *)v28 & 0x10000) != 0 )
    return *(_QWORD *)(a1[31] + 19072);
  v137 = v21;
  if ( (_BYTE)v21 || v12 )
  {
    v29 = sub_19179A0((__int64)a1, v28, 1u, v19, v21, v20, a7, a8);
    v31 = v137;
    if ( v29 == 1 )
      return 0;
  }
  else
  {
    v29 = sub_19B4CE0(a1, (__int64)v28, 0, a7, a8);
    v31 = 0;
    if ( v29 == 1 )
      return 0;
  }
  *a2 = v29;
  v32 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)v32 & 0x10000) != 0 )
    return *(_QWORD *)(a1[31] + 19072);
  v138 = *a4;
  if ( (*(_DWORD *)(*a4 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) != 0 )
    return *(_QWORD *)(a1[31] + 19072);
  v34 = *(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v147 = *(_QWORD *)(v32 + 8);
  v148 = v34;
  v35 = *(_QWORD *)(v147 & 0xFFFFFFFFFFFFFFF0LL);
  v36 = *(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v36 + 16) != 13 )
  {
    v30 = 0;
    v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v37 + 16) != 13 )
    {
LABEL_24:
      if ( v12 )
        return sub_19A9E70(a1, a2, a3, a4, a9, v30, a7, a8);
      if ( v31 )
        return sub_19A8170((__int64)a1, a2, a3, a4, a9, v30, a7, a8);
      if ( sub_F65F60(v35) || (v140 = sub_F65F60(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL))) != 0 )
      {
        sub_168B9F0((__int64)&v156, a1 + 1, a9, 0x1562u, 0);
        v77 = &v156;
        v154[0] = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), *(double *)a7.m128_u64);
LABEL_55:
        v78 = sub_1587DB0((__int64)v77, v154);
        v155[0] = sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)v154, *(double *)a7.m128_u64);
LABEL_56:
        sub_1587DB0(v78, v155);
        sub_15F7200(&v156);
        return 0;
      }
      v47 = v147 & 0xFFFFFFFFFFFFFFF0LL;
      v48 = v148 & 0xFFFFFFFFFFFFFFF0LL;
      v49 = *(_QWORD *)&byte_8[v148 & 0xFFFFFFFFFFFFFFF0LL];
      v50 = *a3 & 0xFFFFFFFFFFFFFFFELL;
      v51 = *(_QWORD *)&byte_8[v147 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v147 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v147) & 7;
      v52 = v49 | v148;
      v53 = v49 & 0xFFFFFFFFFFFFFFF8LL;
      v54 = v53 | v52 & 7;
      v55 = *a4 & 0xFFFFFFFFFFFFFFFELL;
      if ( v51 == v54 )
      {
        v57 = (*(_BYTE *)(v50 + 1) >> 1) & 3;
        v110 = ((*(_BYTE *)(v55 + 1) >> 1) & 3) == v57;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
        {
          v53 = *(unsigned __int8 *)(v50 + 1);
          LOBYTE(v53) = (unsigned __int8)v53 >> 1;
          v56 = (*(_BYTE *)(v55 + 1) >> 1) & 3;
          v57 = v53 & 3;
LABEL_38:
          v145 = v56;
          if ( v57 && v57 == v56 )
          {
            if ( (unsigned int)sub_1BE5E80(a1, a9, v147, v148, &v156) != 2
              || ((unsigned __int8)v156 & 0x38) != 0
              || (v61 = *a4 & 0xFFFFFFFFFFFFFFFELL, ((*(_BYTE *)(v61 + 1) >> 3) & 7) == 1)
              || sub_BFF660((_WORD *)v61, a9, v58, v59, v60) )
            {
              if ( (unsigned int)sub_1BE5E80(a1, a9, v148, v147, &v156) != 2 || ((unsigned __int8)v156 & 0x38) != 0 )
              {
                v65 = *a3;
              }
              else
              {
                v65 = *a3;
                v115 = *a3 & 0xFFFFFFFFFFFFFFFELL;
                if ( ((*(_BYTE *)(v115 + 1) >> 3) & 7) != 1 )
                {
                  if ( sub_BFF660((_WORD *)v115, v65, v62, v63, v64) )
                  {
                    v65 = *a3;
                  }
                  else
                  {
                    v132 = sub_160A600(
                             (__int64)a1,
                             *a3 & 0xFFFFFFFFFFFFFFFELL,
                             v148,
                             5u,
                             v57,
                             0,
                             *(double *)a7.m128_u64,
                             *(double *)a8.m128_u64,
                             0);
                    *a3 = v132;
                    v65 = v132;
                    v147 = *(_QWORD *)((v132 & 0xFFFFFFFFFFFFFFFELL) + 8);
                  }
                }
              }
            }
            else
            {
              v133 = sub_160A600(
                       (__int64)a1,
                       *a4 & 0xFFFFFFFFFFFFFFFELL,
                       v147,
                       5u,
                       v145,
                       0,
                       *(double *)a7.m128_u64,
                       *(double *)a8.m128_u64,
                       0);
              *a4 = v133;
              v148 = *(_QWORD *)((v133 & 0xFFFFFFFFFFFFFFFELL) + 8);
              v65 = *a3;
            }
            v50 = v65 & 0xFFFFFFFFFFFFFFFELL;
            v47 = v147 & 0xFFFFFFFFFFFFFFF0LL;
            v48 = v148 & 0xFFFFFFFFFFFFFFF0LL;
            v66 = *(_QWORD *)&byte_8[v148 & 0xFFFFFFFFFFFFFFF0LL];
            v51 = *(_QWORD *)&byte_8[v147 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v147 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v147) & 7;
            v67 = v66 | v148;
            v53 = v66 & 0xFFFFFFFFFFFFFFF8LL;
            v54 = v53 | v67 & 7;
            if ( v51 == v54 )
            {
LABEL_47:
              if ( ((*(_BYTE *)(v50 + 1) >> 3) & 7u) <= 1 )
              {
                v54 = *a4 & 0xFFFFFFFFFFFFFFFELL;
                if ( ((*(_BYTE *)(v54 + 1) >> 3) & 7u) <= 1 )
                {
                  *a5 = (*(_BYTE *)(v50 + 1) >> 1) & 3;
                  if ( ((*(_BYTE *)(v50 + 1) >> 3) & 7) == 1 || ((*(_BYTE *)(v54 + 1) >> 3) & 7) == 1 )
                    *a6 = 1;
                  return sub_ABBE20((_QWORD *)a1[31], v147, v148, 0);
                }
              }
              goto LABEL_48;
            }
LABEL_65:
            if ( v54 != v51
              && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
               || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48) )
            {
              v154[0] = v50;
              v84 = *a4;
              v164 = 1;
              v162 = 16;
              v154[1] = v84 & 0xFFFFFFFFFFFFFFFELL;
              v156 = &v158;
              v163 = 0;
              v157 = 0x1000000000LL;
              v161 = v165;
              v169 = v171;
              v165[16] = 0;
              v170 = 0x400000000LL;
              ptr = v174;
              v166 = 0;
              v167 = 0;
              v168 = 0;
              v173 = 0;
              v174[0] = 0;
              v174[1] = 1;
              v175 = a9;
              v176 = 1;
              v177 = 0;
              v178 = 0;
              v179 = 0;
              v180 = 0;
              sub_1BFBE60(a1, 44, a9, v154, 2, &v156);
              v85 = sub_1BF27B0(&v156, a1, a9, &v149);
              if ( v85 == 1 )
              {
                v140 = sub_18F90D0(
                         (__int64)a1,
                         *a3 & 0xFFFFFFFFFFFFFFFELL,
                         *a4 & 0xFFFFFFFFFFFFFFFELL,
                         a9,
                         *(double *)a7.m128_u64,
                         *(double *)a8.m128_u64);
                if ( !v140 )
                {
                  sub_168B9F0((__int64)v155, a1 + 1, a9, 0x147Eu, 0);
                  v151 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
                  v116 = sub_162B6D0((__int64)v155, &v151);
                  v150 = *(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
                  v117 = sub_162B6D0(v116, &v150);
                  v153 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v150, *(double *)a7.m128_u64);
                  v88 = sub_1587DB0(v117, &v153);
                  v89 = *a4;
                  goto LABEL_72;
                }
              }
              else
              {
                if ( v85 )
                {
                  if ( v85 != 2 )
                  {
LABEL_73:
                    v140 = 1;
                    goto LABEL_74;
                  }
                  sub_168B9F0((__int64)v155, a1 + 1, a9, 0xD7Cu, 0);
                  v151 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
                  v86 = sub_162B6D0((__int64)v155, &v151);
                  v150 = *(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
                  v87 = sub_162B6D0(v86, &v150);
                  v153 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v150, *(double *)a7.m128_u64);
                  v88 = sub_1587DB0(v87, &v153);
                  v89 = *a4;
LABEL_72:
                  v152 = sub_EEC8C0(v89 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v153, *(double *)a7.m128_u64);
                  sub_1587DB0(v88, &v152);
                  sub_15F7200(v155);
                  goto LABEL_73;
                }
                v111 = sub_19AFC70((__int64)a1, (__int64 *)(*a3 & 0xFFFFFFFFFFFFFFFELL), v149[2], v149[6], 3, 0, a7, a8);
                if ( v111 == 1 )
                  goto LABEL_73;
                *a3 = v111;
                v112 = sub_19AFC70(
                         (__int64)a1,
                         (__int64 *)(*a4 & 0xFFFFFFFFFFFFFFFELL),
                         v149[3],
                         v149[6] + 152,
                         3,
                         0,
                         a7,
                         a8);
                if ( v112 == 1 )
                  goto LABEL_73;
                *a4 = v112;
                if ( *v149 )
                  sub_1910D40((__int64)a1, a9, *v149, 1, v113, v114, a7, a8);
              }
LABEL_74:
              sub_1BD27A0(&v156);
              v90 = (char *)v169;
              v91 = (char *)v169 + 8 * (unsigned int)v170;
              if ( v169 != v91 )
              {
                do
                {
                  v92 = 0x40000000000LL;
                  v93 = (unsigned int)((v90 - (_BYTE *)v169) >> 3) >> 7;
                  if ( v93 <= 0x1D )
                    v92 = 4096LL << v93;
                  v94 = *(_QWORD *)v90;
                  v90 += 8;
                  operator delete(v94, v92, 16);
                }
                while ( v91 != v90 );
              }
              v95 = ptr;
              v96 = (char *)ptr;
              v97 = (char *)ptr + 16 * (unsigned int)v173;
              if ( ptr != v97 )
              {
                do
                {
                  v98 = *((_QWORD *)v96 + 1);
                  v99 = *(_QWORD *)v96;
                  v96 += 16;
                  operator delete(v99, v98, 16);
                }
                while ( v97 != v96 );
                v95 = ptr;
              }
              if ( v95 != v174 )
                free(v95);
              if ( v169 != v171 )
                free(v169);
              if ( !v164 )
                free(v161);
              v100 = (char *)v156;
              v101 = (char *)v156 + 168 * (unsigned int)v157;
              while ( v100 != v101 )
              {
                while ( 1 )
                {
                  v101 -= 168;
                  v102 = *((_QWORD **)v101 + 8);
                  v103 = *((_QWORD **)v101 + 9);
                  v104 = v102;
                  if ( v103 != v102 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v105 = (char *)v104[3];
                        if ( v105 == (char *)(v104 + 5) )
                          break;
                        operator delete(v105);
                        v104 += 8;
                        if ( v103 == v104 )
                          goto LABEL_92;
                      }
                      v104 += 8;
                    }
                    while ( v103 != v104 );
LABEL_92:
                    v102 = *((_QWORD **)v101 + 8);
                  }
                  if ( !v102 )
                    break;
                  operator delete(v102);
                  if ( v100 == v101 )
                    goto LABEL_95;
                }
              }
LABEL_95:
              if ( v156 != &v158 )
                free(v156);
              if ( v140 )
                return 0;
              v50 = *a3 & 0xFFFFFFFFFFFFFFFELL;
            }
LABEL_48:
            *a3 = sub_19179A0((__int64)a1, (_QWORD *)v50, 1u, v54, v48, v53, a7, a8);
            v71 = sub_19179A0((__int64)a1, (_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFFELL), 1u, v68, v69, v70, a7, a8);
            *a4 = v71;
            v72 = *a3;
            if ( *a3 == 1 || v71 == 1 )
              return 0;
            v73 = *(_QWORD *)((v72 & 0xFFFFFFFFFFFFFFFELL) + 8);
            v148 = *(_QWORD *)((v71 & 0xFFFFFFFFFFFFFFFELL) + 8);
            v74 = v148 & 0xFFFFFFFFFFFFFFF0LL;
            v147 = v73;
            v75 = (__int64 *)(v73 & 0xFFFFFFFFFFFFFFF0LL);
            v76 = *(_QWORD *)&byte_8[v73 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)v73 | (unsigned __int8)*(_QWORD *)&byte_8[v73 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
            if ( v76 == (*(_QWORD *)&byte_8[v148 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[v148 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v148) & 7) )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v75 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
              {
                v158 = v73;
                LODWORD(v156) = 9;
                v157 = 0;
                v159 = 0;
                v160 = 0;
                v118 = sub_1A24E20(a1, &v156, 0, v72, 0, 0);
                if ( v118 == 1 )
                  return 0;
                LODWORD(v156) = 9;
                v119 = *a4;
                v157 = 0;
                v158 = v148;
                v159 = 0;
                v160 = 0;
                v120 = sub_1A24E20(a1, &v156, 0, v119, 0, 0);
                if ( v120 == 1 )
                  return 0;
                *a3 = v118;
                *a4 = v120;
              }
              return sub_ABBE20((_QWORD *)a1[31], v147, v148, 0);
            }
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v75 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 57 <= 1
              || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v74 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1 )
            {
              return sub_1918B10(a1, a3, a4, a9, 0, 1, a7, a8, 0, 0, 1);
            }
            if ( !sub_F610C0(*v75, v73, v76, v72, (__int64)v75, v74)
              || !sub_F610C0(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL), v73, v121, v122, v123, v124) )
            {
              v155[0] = *a3 & 0xFFFFFFFFFFFFFFFELL;
              v156 = (void *)(*a4 & 0xFFFFFFFFFFFFFFFELL);
              result = sub_19C0CE0(
                         (__int64)a1,
                         a9,
                         v155,
                         (unsigned __int64 *)&v156,
                         1,
                         *(double *)a7.m128_u64,
                         *(double *)a8.m128_u64);
              *a3 = v155[0];
              *a4 = (__int64)v156;
              if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                return result;
              result = sub_19D30C0(a1[92], a3, a4, a9);
              if ( *a3 != 1 && *a4 != 1 )
              {
                if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                  return result;
                if ( !(unsigned __int8)sub_18F90D0(
                                         (__int64)a1,
                                         *a3 & 0xFFFFFFFFFFFFFFFELL,
                                         *a4 & 0xFFFFFFFFFFFFFFFELL,
                                         a9,
                                         *(double *)a7.m128_u64,
                                         *(double *)a8.m128_u64) )
                {
                  sub_168B9F0((__int64)&v156, a1 + 1, a9, 0x147Eu, 0);
                  v152 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
                  v125 = sub_162B6D0((__int64)&v156, &v152);
                  v153 = *(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
                  v126 = sub_162B6D0(v125, &v153);
                  v154[0] = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v153, *(double *)a7.m128_u64);
                  v78 = sub_1587DB0(v126, v154);
                  v155[0] = sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)v154, *(double *)a7.m128_u64);
                  goto LABEL_56;
                }
              }
              return 0;
            }
            v127 = sub_191F280((__int64)a1, a3, a4, a9, 3u, a7, a8);
            v128 = v127;
            if ( *a3 == 1 || *a4 == 1 )
              return 0;
            if ( (v127 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            {
              v134 = sub_18D1110(a1, (unsigned __int64 *)a3, v127, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
              *a3 = sub_160A600(
                      (__int64)a1,
                      *a3 & 0xFFFFFFFFFFFFFFFELL,
                      v128,
                      v134,
                      0,
                      0,
                      *(double *)a7.m128_u64,
                      *(double *)a8.m128_u64,
                      0);
              v135 = sub_18D1110(a1, (unsigned __int64 *)a4, v128, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
              *a4 = sub_160A600(
                      (__int64)a1,
                      *a4 & 0xFFFFFFFFFFFFFFFELL,
                      v128,
                      v135,
                      0,
                      0,
                      *(double *)a7.m128_u64,
                      *(double *)a8.m128_u64,
                      0);
              return v128;
            }
            v129 = a1 + 1;
            v130 = 5246;
LABEL_152:
            sub_168B9F0((__int64)&v156, v129, a9, v130, 0);
            v131 = sub_1605D30((__int64)&v156, &v147);
            v82 = &v148;
            v83 = sub_1605D30(v131, &v148);
LABEL_64:
            v77 = (void **)v83;
            v154[0] = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v82, *(double *)a7.m128_u64);
            goto LABEL_55;
          }
          if ( v51 != v54 || v57 != v56 )
            goto LABEL_65;
LABEL_104:
          if ( v57 )
            goto LABEL_47;
          goto LABEL_48;
        }
        v152 = 0;
        v153 = 0;
        if ( (unsigned __int8)sub_19A1E80(
                                (__int64)a1,
                                v50,
                                v55,
                                a9,
                                (bool *)&v150,
                                (unsigned __int64 *)&v152,
                                *(double *)a7.m128_u64)
          || (unsigned __int8)sub_19A1E80(
                                (__int64)a1,
                                *a4 & 0xFFFFFFFFFFFFFFFELL,
                                *a3 & 0xFFFFFFFFFFFFFFFELL,
                                a9,
                                (bool *)&v151,
                                (unsigned __int64 *)&v153,
                                *(double *)a7.m128_u64) )
        {
          return 0;
        }
        if ( (_BYTE)v150 )
        {
          if ( (_BYTE)v151 )
          {
            v129 = a1 + 1;
            v130 = 3451;
            goto LABEL_152;
          }
          if ( (unsigned __int8)sub_199F750((int)a1, (unsigned __int64 *)a3, v152, *(double *)a7.m128_u64) )
            return 0;
          v106 = *a3;
          if ( *a3 == 1 )
            return 0;
          v147 = *(_QWORD *)((v106 & 0xFFFFFFFFFFFFFFFELL) + 8);
          v107 = *a4;
        }
        else if ( (_BYTE)v151 )
        {
          if ( (unsigned __int8)sub_199F750((int)a1, (unsigned __int64 *)a4, v153, *(double *)a7.m128_u64) )
            return 0;
          v107 = *a4;
          if ( *a4 == 1 )
            return 0;
          v106 = *a3;
          v148 = *(_QWORD *)((v107 & 0xFFFFFFFFFFFFFFFELL) + 8);
        }
        else
        {
          v106 = *a3;
          v107 = *a4;
        }
        v50 = v106 & 0xFFFFFFFFFFFFFFFELL;
        v56 = (*(_BYTE *)((v107 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3;
        v47 = v147 & 0xFFFFFFFFFFFFFFF0LL;
        v57 = (*(_BYTE *)(v50 + 1) >> 1) & 3;
        v48 = v148 & 0xFFFFFFFFFFFFFFF0LL;
        v108 = *(_QWORD *)&byte_8[v148 & 0xFFFFFFFFFFFFFFF0LL];
        v51 = *(_QWORD *)&byte_8[v147 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v147 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v147) & 7;
        v109 = v108 | v148;
        v53 = v108 & 0xFFFFFFFFFFFFFFF8LL;
        v54 = v53 | v109 & 7;
        if ( v51 != v54 )
          goto LABEL_38;
        v110 = v56 == v57;
      }
      if ( v54 != v51 || !v110 )
        goto LABEL_48;
      goto LABEL_104;
    }
    goto LABEL_17;
  }
  LOBYTE(v30) = ((*(_WORD *)(v36 + 18) >> 3) & 0x1FF) == 435;
  v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v37 + 16) == 13 )
  {
LABEL_17:
    v38 = ((*(_WORD *)(v37 + 18) >> 3) & 0x1FF) == 435;
    v39 = v30 | v38;
    goto LABEL_18;
  }
  v39 = ((*(_WORD *)(v36 + 18) >> 3) & 0x1FF) == 435;
  v38 = 0;
LABEL_18:
  v144 = v30;
  v139 = v138 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v39 )
    goto LABEL_24;
  v146 = v32;
  v40 = *(_WORD *)sub_BFBAE0(v32) & 0x1FF;
  v41 = (_WORD *)sub_BFBAE0(v139);
  v42 = v139;
  v43 = *v41 & 0x1FF;
  if ( v12 )
  {
    if ( v144 )
    {
      v44 = sub_EEC8C0(v146, v38, *(double *)a7.m128_u64);
      v45 = v40 == 97;
    }
    else
    {
      v79 = v139;
      v141 = v43 == 97;
      v44 = sub_EEC8C0(v79, v38, *(double *)a7.m128_u64);
      v45 = v141;
    }
    v155[0] = v44;
    LOBYTE(v154[0]) = v45;
    sub_168B9F0((__int64)&v156, a1 + 1, v44, 0xD7Fu, 0);
    v46 = sub_15884C0((__int64)&v156, v155);
    sub_15890D0(v46, (unsigned __int8 *)v154);
    sub_15F7200(&v156);
    return 0;
  }
  if ( (v40 == 97) == (v43 == 97) )
  {
    if ( v38 && v144 )
      return sub_ABBE20((_QWORD *)a1[31], v147, v148, 0);
    sub_168B9F0((__int64)&v156, a1 + 1, a9, 0xD83u, 0);
    if ( v144 )
    {
      v80 = sub_1605D30((__int64)&v156, &v148);
      v81 = 0;
    }
    else
    {
      v80 = sub_1605D30((__int64)&v156, &v147);
      v81 = 1;
    }
    v82 = &v153;
    LODWORD(v153) = v81;
    v83 = sub_1587D10(v80, (int *)&v153);
    goto LABEL_64;
  }
  if ( v40 != 97 )
    v42 = v146;
  *a5 = (*(_BYTE *)(v42 + 1) >> 1) & 3;
  *a6 = (*(_BYTE *)(v42 + 1) >> 3) & 7;
  return *(_QWORD *)(v42 + 8);
}
