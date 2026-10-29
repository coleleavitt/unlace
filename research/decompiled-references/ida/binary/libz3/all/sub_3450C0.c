__int64 __fastcall sub_3450C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, int **a6)
{
  __int64 v9; // rsi
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rdx
  char *i; // r13
  void *v15; // r14
  void *v16; // r14
  int v17; // eax
  void *v18; // r13
  int v19; // edx
  char v20; // al
  int v21; // eax
  int *v22; // r13
  __int64 v23; // rax
  int *v24; // r13
  void *v25; // r14
  int v26; // eax
  __int64 *v27; // r9
  __int64 v28; // rax
  int v29; // edi
  unsigned int v30; // edx
  __int64 *v31; // rsi
  __int64 v32; // rdx
  __int64 *v33; // r8
  __int64 *k; // rax
  __int64 v35; // rdx
  void *v36; // r13
  __int64 v37; // rdx
  int v38; // edi
  __int64 *v39; // r9
  unsigned int v40; // r10d
  __int64 *v41; // rsi
  __int64 v42; // r10
  __int64 *v43; // r8
  __int64 *m; // rax
  __int64 v45; // rdx
  void *v46; // r13
  unsigned int v48; // r14d
  __int64 v49; // r15
  __int64 v50; // r9
  _QWORD *v51; // rdx
  int v52; // edi
  unsigned int v53; // r10d
  __int64 v54; // r9
  __int64 v55; // r10
  _QWORD *v56; // r8
  _QWORD *v57; // rax
  _QWORD *v58; // r13
  _QWORD *v59; // rdx
  unsigned int v60; // edi
  _QWORD *v61; // rsi
  __int64 v62; // rax
  char *v63; // rdx
  int v64; // edi
  unsigned int v65; // esi
  __int64 v66; // r9
  char *v67; // rsi
  __int64 v68; // r9
  char *v69; // r8
  __int64 v70; // rax
  void *v71; // rbx
  __int64 v72; // rax
  _QWORD *v73; // rax
  unsigned int v74; // r14d
  size_t v75; // rsi
  unsigned int *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rdx
  _QWORD *v80; // rax
  unsigned int v81; // r14d
  size_t v82; // rdi
  unsigned int *v83; // r9
  _DWORD *v84; // r10
  int *v85; // r14
  __int64 v86; // rax
  _DWORD *v87; // rdx
  int *v88; // rdi
  int *j; // rax
  int v90; // ecx
  char v91; // si
  __int64 v92; // rcx
  char v93; // si
  __int64 v94; // rcx
  __int64 v95; // rax
  int *v96; // r13
  int *v97; // rbx
  void *v98; // r14
  int *v99; // rsi
  __int64 *v100; // rdi
  unsigned int v101; // edx
  int v102; // eax
  unsigned int v103; // eax
  __int64 v104; // rax
  __int64 v105; // r13
  __int64 v106; // rdx
  __int64 v107; // rsi
  char *v108; // r14
  unsigned int v109; // eax
  __int64 v110; // rdx
  char *v111; // r8
  __int64 v112; // r9
  __int64 v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // rdi
  __int64 v116; // rdx
  int v117; // esi
  __int64 v118; // rdi
  __int64 v119; // rsi
  char v120; // r10
  char v121; // r10
  __int64 v122; // rdi
  __int64 v123; // rsi
  char v124; // r10
  char v125; // r10
  _QWORD *v126; // rdi
  unsigned int v127; // edx
  int v128; // eax
  unsigned int v129; // eax
  __m128i *v130; // rax
  __m128i *v131; // r14
  __m128i *v132; // rdx
  __int64 v133; // rax
  const __m128i *v134; // r8
  unsigned int v135; // ecx
  __m128i *v136; // r13
  __m128i *v137; // r10
  __int64 v138; // rax
  __m128i *v139; // rdx
  __m128i *v140; // rax
  char v141; // al
  unsigned int v142; // r12d
  void *v143; // rdi
  __int64 v144; // r13
  int v145; // eax
  void *v146; // rdi
  char v147; // al
  __int64 v148; // rax
  char *v149; // rbx
  __int64 v150; // r14
  void *v151; // r13
  char *v152; // rsi
  char **v153; // rbp
  char **exception; // rbp
  unsigned int v155; // [rsp+0h] [rbp-108h]
  unsigned int v161; // [rsp+38h] [rbp-D0h]
  __int64 v162; // [rsp+40h] [rbp-C8h]
  unsigned int v163; // [rsp+48h] [rbp-C0h]
  unsigned int v164; // [rsp+48h] [rbp-C0h]
  char *v165; // [rsp+48h] [rbp-C0h]
  unsigned int *v166; // [rsp+50h] [rbp-B8h]
  unsigned int *v167; // [rsp+50h] [rbp-B8h]
  __int64 v168; // [rsp+50h] [rbp-B8h]
  __int64 v169; // [rsp+50h] [rbp-B8h]
  _DWORD *v170; // [rsp+58h] [rbp-B0h]
  _DWORD *v171; // [rsp+58h] [rbp-B0h]
  char *v172; // [rsp+58h] [rbp-B0h]
  __int64 v173; // [rsp+60h] [rbp-A8h]
  __int64 v174; // [rsp+68h] [rbp-A0h]
  __int64 v175; // [rsp+80h] [rbp-88h] BYREF
  __int64 v176; // [rsp+88h] [rbp-80h]
  __int64 v177; // [rsp+90h] [rbp-78h] BYREF
  __int64 v178; // [rsp+98h] [rbp-70h]
  __int64 v179; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v180; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v181; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v182; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v183; // [rsp+C0h] [rbp-48h]

  v9 = a1 + 16;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  v10 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_DWORD *)a1 = -1;
  v174 = v9;
  sub_182CBA0(v10, v9);
  v11 = *(_QWORD *)(a4 + 8);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  v155 = 0;
  if ( !v11 )
    return a1;
  do
  {
    if ( v155 >= *(_DWORD *)(v11 - 4) )
    {
      v142 = 0;
      while ( 1 )
      {
        if ( v142 >= *(_DWORD *)(v11 - 4) )
          return a1;
        v179 = 0;
        v143 = qword_1C7F2C0;
        v180 = 0;
        v181 = 1;
        v144 = (__int64)&(*a6)[8 * v142];
        v182 = 0;
        if ( (*(_BYTE *)(v144 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v179, v144);
        else
          LODWORD(v179) = *(_DWORD *)v144;
        if ( (*(_BYTE *)(v144 + 20) & 1) != 0 )
        {
          sub_182C690(v143, &v181, v144 + 16);
        }
        else
        {
          v145 = *(_DWORD *)(v144 + 16);
          BYTE4(v181) &= ~1u;
          LODWORD(v181) = v145;
        }
        v146 = qword_1C7F2C0;
        v147 = *(_BYTE *)(a1 + 20);
        if ( (v147 & 1) == 0 && *(_DWORD *)(a1 + 16) == 1 && (v181 & 0x100000000LL) == 0 && (_DWORD)v181 == 1 )
          break;
        if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, a1, &v179) )
          goto LABEL_177;
LABEL_181:
        v146 = qword_1C7F2C0;
LABEL_182:
        ++v142;
        sub_182CBA0(v146, &v179);
        sub_182CBA0(v146, &v181);
        v11 = *(_QWORD *)(a4 + 8);
        if ( !v11 )
          return a1;
      }
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (v179 & 0x100000000LL) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, a1, &v179) >= 0 )
          goto LABEL_181;
LABEL_177:
        v146 = qword_1C7F2C0;
        if ( (v181 & 0x100000000LL) != 0 || (_DWORD)v181 != 1 )
          goto LABEL_179;
        v147 = *(_BYTE *)(a1 + 20);
      }
      else if ( *(_DWORD *)a1 >= (int)v179 )
      {
        goto LABEL_182;
      }
      if ( (v147 & 1) == 0 && *(_DWORD *)(a1 + 16) == 1 )
      {
        sub_1832A70(v146, &v179, a1);
        sub_182CBA0(v146, &v181);
        BYTE4(v181) &= ~1u;
        LODWORD(v181) = 1;
        goto LABEL_180;
      }
LABEL_179:
      sub_1852000(v146, &v179, a1);
LABEL_180:
      sub_343E80(a2, a3, *(_QWORD *)(*a5 + 8LL * v142), (__int64)&v179);
      goto LABEL_181;
    }
    v12 = *(_QWORD *)(v11 + 8LL * v155);
    if ( *(_WORD *)(v12 + 4)
      || (v13 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) == nullptr
      || *v13
      || v13[1] != 8
      || (v48 = *(_DWORD *)(v12 + 24), v48 != 1) )
    {
      sub_1872CE0("");
      sub_1873130(114, 208);
    }
    v49 = *(_QWORD *)(v12 + 32);
    v50 = *(unsigned int *)(a2 + 192);
    v51 = *(_QWORD **)(a2 + 184);
    v52 = *(_DWORD *)(v49 + 12);
    v53 = v50 - 1;
    v54 = 16 * v50;
    v55 = 16LL * (v52 & v53);
    v56 = &v51[(unsigned __int64)v55 / 8];
    v57 = &v51[(unsigned __int64)v55 / 8];
    if ( v55 != v54 )
    {
      do
      {
        v58 = (_QWORD *)*v57;
        if ( *v57 > 1u )
        {
          if ( *((_DWORD *)v58 + 3) == v52 && (_QWORD *)v49 == v58 )
          {
            v58 = v57;
            goto LABEL_48;
          }
        }
        else if ( !v58 )
        {
          goto LABEL_48;
        }
        v57 += 2;
      }
      while ( &v51[(unsigned __int64)v54 / 8] != v57 );
    }
    if ( v51 == v56 )
    {
LABEL_75:
      v58 = nullptr;
      v59 = (_QWORD *)*a5;
      if ( *a5 )
        goto LABEL_49;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v58 = (_QWORD *)*v51;
          if ( *v51 > 1u )
            break;
          if ( !v58 )
            goto LABEL_48;
          v51 += 2;
          if ( v56 == v51 )
            goto LABEL_75;
        }
        if ( *((_DWORD *)v58 + 3) == v52 && (_QWORD *)v49 == v58 )
          break;
        v51 += 2;
        if ( v56 == v51 )
          goto LABEL_75;
      }
      v58 = v51;
LABEL_48:
      v59 = (_QWORD *)*a5;
      if ( *a5 )
      {
LABEL_49:
        v60 = *((_DWORD *)v59 - 1);
        if ( v60 == *((_DWORD *)v59 - 2) )
        {
          v74 = (3 * v60 + 1) >> 1;
          v75 = 8 * v74 + 8;
          if ( 8 * v60 + 8 >= (unsigned int)v75 || v60 >= v74 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v179, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v179);
            sub_233E40((__int64)&v179);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v76 = (unsigned int *)sub_186B300(v59 - 1, v75);
          v59 = v76 + 2;
          *v76 = v74;
          v77 = v76[1];
          v61 = &v59[v77];
          *a5 = v59;
          v48 = v77 + 1;
        }
        else
        {
          v48 = v60 + 1;
          v61 = &v59[v60];
        }
        goto LABEL_51;
      }
    }
    v73 = (_QWORD *)sub_186B270(0x18u);
    v59 = v73 + 1;
    *v73 = 2;
    v61 = v73 + 1;
    *a5 = v73 + 1;
LABEL_51:
    *v61 = v58[1];
    *((_DWORD *)v59 - 1) = v48;
    v62 = *(unsigned int *)(a2 + 168);
    v180 = 0;
    v63 = *(char **)(a2 + 160);
    v182 = 1;
    v64 = *(_DWORD *)(v49 + 12);
    v65 = v62 - 1;
    v62 *= 40;
    v179 = v49;
    v181 = 0;
    v66 = 5LL * (v64 & v65);
    v183 = 0;
    v67 = &v63[v62];
    v68 = 8 * v66;
    v69 = &v63[v68];
    if ( v68 != v62 )
    {
      for ( i = &v63[v68]; v67 != i; i += 40 )
      {
        v70 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v70 + 12) == v64 && v49 == v70 )
            goto LABEL_8;
        }
        else if ( !v70 )
        {
          goto LABEL_58;
        }
      }
    }
    if ( v63 == v69 )
    {
LABEL_58:
      v71 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v180);
      sub_182CBA0(v71, &v182);
      v177 = 1;
      v175 = 0;
      v176 = 0;
      v178 = 0;
      BUG();
    }
    while ( 1 )
    {
      v72 = *(_QWORD *)v63;
      if ( *(_QWORD *)v63 > 1u )
        break;
      if ( !v72 )
        goto LABEL_58;
LABEL_63:
      v63 += 40;
      if ( v69 == v63 )
        goto LABEL_58;
    }
    if ( *(_DWORD *)(v72 + 12) != v64 || v49 != v72 )
      goto LABEL_63;
    i = v63;
LABEL_8:
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v180);
    sub_182CBA0(v15, &v182);
    v16 = qword_1C7F2C0;
    v175 = 0;
    v176 = 0;
    v177 = 1;
    v178 = 0;
    if ( (i[12] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v175, i + 8);
    else
      LODWORD(v175) = *((_DWORD *)i + 2);
    if ( (i[28] & 1) != 0 )
    {
      sub_182C690(v16, &v177, i + 24);
    }
    else
    {
      v17 = *((_DWORD *)i + 6);
      BYTE4(v177) &= ~1u;
      LODWORD(v177) = v17;
    }
    if ( v155 )
    {
      if ( (v177 & 0x100000000LL) == 0
        && (_DWORD)v177 == 1
        && (*(_BYTE *)(a1 + 20) & 1) == 0
        && *(_DWORD *)(a1 + 16) == 1 )
      {
        if ( (v175 & 0x100000000LL) != 0 || (v141 = *(_BYTE *)(a1 + 4), (v141 & 1) != 0) )
        {
          if ( (int)sub_182C7B0(qword_1C7F2C0, &v175, a1) < 0 )
            goto LABEL_13;
        }
        else if ( (int)v175 < *(_DWORD *)a1 )
        {
          *(_DWORD *)a1 = v175;
          *(_BYTE *)(a1 + 4) = v141 & 0xFE;
          goto LABEL_15;
        }
        goto LABEL_16;
      }
      if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, &v175, a1) )
        goto LABEL_16;
      v18 = qword_1C7F2C0;
      if ( (v175 & 0x100000000LL) != 0 )
        goto LABEL_100;
LABEL_14:
      v19 = v175;
      v20 = ~BYTE4(v177);
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = v19;
      if ( (v20 & 1) != 0 )
        goto LABEL_15;
LABEL_101:
      sub_182C690(v18, v174, &v177);
      v22 = *a6;
      if ( !*a6 )
        goto LABEL_102;
LABEL_17:
      v23 = (unsigned int)*(v22 - 1);
      if ( (_DWORD)v23 == *(v22 - 2) )
      {
        v81 = (unsigned int)(3 * v23 + 1) >> 1;
        v163 = v81;
        v82 = 32 * v81 + 8;
        if ( 32 * (int)v23 + 8 >= (unsigned int)v82 || (unsigned int)v23 >= v81 )
        {
          v153 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v179, "Overflow encountered when expanding vector");
          *v153 = (char *)off_1C63128;
          sub_2333C0(v153 + 1, &v179);
          sub_233E40((__int64)&v179);
          __cxa_throw(v153, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v83 = (unsigned int *)sub_186B270(v82);
        v84 = v83 + 2;
        v85 = *a6;
        if ( *a6 )
        {
          v86 = (unsigned int)*(v85 - 1);
          v87 = v83 + 2;
          v83[1] = v86;
          v88 = &v85[8 * v86];
          for ( j = v85; v88 != j; *((_QWORD *)v87 - 1) = v94 )
          {
            v90 = *j;
            v91 = *((_BYTE *)j + 4);
            j += 8;
            v87 += 8;
            *(v87 - 8) = v90;
            *((_BYTE *)v87 - 28) = v91 & 3 | *(_BYTE *)(v87 - 7) & 0xFC;
            v92 = *((_QWORD *)j - 3);
            *((_QWORD *)j - 3) = 0;
            *((_QWORD *)v87 - 3) = v92;
            v93 = *((_BYTE *)j - 12);
            *(v87 - 4) = *(j - 4);
            *((_BYTE *)v87 - 12) = v93 & 3 | *(_BYTE *)(v87 - 3) & 0xFC;
            v94 = *((_QWORD *)j - 1);
            *((_QWORD *)j - 1) = 0;
          }
          v95 = (unsigned int)*(v85 - 1);
          v96 = &v85[8 * v95];
          if ( (_DWORD)v95 )
          {
            v166 = v83;
            v170 = v83 + 2;
            v173 = a2;
            v97 = v85;
            do
            {
              v98 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v97);
              v99 = v97 + 4;
              v97 += 8;
              sub_182CBA0(v98, v99);
            }
            while ( v97 != v96 );
            v83 = v166;
            v84 = v170;
            a2 = v173;
            v85 = *a6;
          }
          v171 = v84;
          v167 = v83;
          sub_186B220(v85 - 2);
          v83 = v167;
          v84 = v171;
          v24 = &v171[8 * v167[1]];
        }
        else
        {
          v83[1] = 0;
          v24 = (int *)(v83 + 2);
        }
        *a6 = v84;
        *v83 = v163;
      }
      else
      {
        v24 = &v22[8 * v23];
      }
    }
    else
    {
LABEL_13:
      v18 = qword_1C7F2C0;
      if ( (v175 & 0x100000000LL) == 0 )
        goto LABEL_14;
LABEL_100:
      sub_182C690(v18, a1, &v175);
      if ( (v177 & 0x100000000LL) != 0 )
        goto LABEL_101;
LABEL_15:
      v21 = v177;
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v21;
LABEL_16:
      v22 = *a6;
      if ( *a6 )
        goto LABEL_17;
LABEL_102:
      v80 = (_QWORD *)sub_186B270(0x48u);
      *v80 = 2;
      v24 = (int *)(v80 + 1);
      *a6 = (int *)(v80 + 1);
    }
    *(_QWORD *)v24 = 0;
    v25 = qword_1C7F2C0;
    *((_QWORD *)v24 + 1) = 0;
    *((_QWORD *)v24 + 2) = 1;
    *((_QWORD *)v24 + 3) = 0;
    if ( (v175 & 0x100000000LL) != 0 )
      sub_182C690(v25, v24, &v175);
    else
      *v24 = v175;
    if ( (v177 & 0x100000000LL) != 0 )
    {
      sub_182C690(v25, v24 + 4, &v177);
    }
    else
    {
      v26 = v177;
      *((_BYTE *)v24 + 20) &= ~1u;
      v24[4] = v26;
    }
    v27 = *(__int64 **)(a2 + 160);
    ++*(*a6 - 1);
    v28 = *(unsigned int *)(a2 + 168);
    v180 = 0;
    v182 = 1;
    v29 = *(_DWORD *)(v49 + 12);
    v30 = v28 - 1;
    v28 *= 40;
    v179 = v49;
    v181 = 0;
    v31 = (__int64 *)((char *)v27 + v28);
    v183 = 0;
    v32 = 40LL * (v29 & v30);
    v33 = &v27[(unsigned __int64)v32 / 8];
    if ( v32 != v28 )
    {
      for ( k = &v27[(unsigned __int64)v32 / 8]; v31 != k; k += 5 )
      {
        v35 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *(_DWORD *)(v35 + 12) == v29 && v49 == v35 )
          {
LABEL_118:
            v100 = k + 5;
            if ( v31 == k + 5 )
              v100 = v27;
            v101 = *(_DWORD *)(a2 + 172) - 1;
            if ( *v100 )
            {
              *k = 1;
              v102 = *(_DWORD *)(a2 + 176);
              *(_DWORD *)(a2 + 172) = v101;
              v103 = v102 + 1;
              if ( v101 < 0x40 )
                v101 = 64;
              *(_DWORD *)(a2 + 176) = v103;
              if ( v101 < v103 && !(unsigned __int8)sub_186AF10(v100) )
              {
                v164 = *(_DWORD *)(a2 + 168);
                v104 = sub_186B270(40LL * v164);
                v105 = v104;
                if ( v164 )
                {
                  v106 = v104 + 40LL * v164;
                  do
                  {
                    *(_OWORD *)(v104 + 24) = 0;
                    v104 += 40;
                    *(_OWORD *)(v104 - 32) = 0;
                    *(_QWORD *)(v104 - 40) = 0;
                    *(_BYTE *)(v104 - 28) = 0;
                    *(_DWORD *)(v104 - 16) = 1;
                    *(_BYTE *)(v104 - 12) = 0;
                  }
                  while ( v106 != v104 );
                }
                v107 = *(unsigned int *)(a2 + 168);
                v108 = *(char **)(a2 + 160);
                v109 = v107 - 1;
                v110 = v107;
                v107 *= 5;
                v111 = &v108[8 * v107];
                v168 = 8 * v107;
                v112 = v105 + 8 * v107;
                if ( v108 != v111 )
                {
                  do
                  {
                    v113 = *(_QWORD *)v108;
                    if ( *(_QWORD *)v108 > 1u )
                    {
                      v114 = 40LL * (*(_DWORD *)(v113 + 12) & v109);
                      v115 = v105 + v114;
                      if ( v168 == v114 )
                      {
LABEL_203:
                        if ( v105 == v115 )
                        {
LABEL_222:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v116 = v105;
                        while ( *(_QWORD *)v116 )
                        {
                          v116 += 40;
                          if ( v115 == v116 )
                            goto LABEL_222;
                        }
                      }
                      else
                      {
                        v116 = v105 + v114;
                        while ( *(_QWORD *)v116 )
                        {
                          v116 += 40;
                          if ( v112 == v116 )
                            goto LABEL_203;
                        }
                      }
                      *(_QWORD *)v116 = v113;
                      v117 = *(_DWORD *)(v116 + 8);
                      *(_DWORD *)(v116 + 8) = *((_DWORD *)v108 + 2);
                      v118 = *((_QWORD *)v108 + 2);
                      *((_DWORD *)v108 + 2) = v117;
                      v119 = *(_QWORD *)(v116 + 16);
                      *(_QWORD *)(v116 + 16) = v118;
                      v120 = v108[12];
                      *((_QWORD *)v108 + 2) = v119;
                      LOBYTE(v119) = *(_BYTE *)(v116 + 12);
                      *(_BYTE *)(v116 + 12) = v120 & 2 | v119 & 0xFD;
                      LOBYTE(v119) = v119 & 2 | v108[12] & 0xFD;
                      v108[12] = v119;
                      v121 = *(_BYTE *)(v116 + 12);
                      *(_BYTE *)(v116 + 12) = v121 & 0xFE | v119 & 1;
                      LODWORD(v118) = *((_DWORD *)v108 + 6);
                      v108[12] = v121 & 1 | v108[12] & 0xFE;
                      LODWORD(v119) = *(_DWORD *)(v116 + 24);
                      *(_DWORD *)(v116 + 24) = v118;
                      v122 = *((_QWORD *)v108 + 4);
                      *((_DWORD *)v108 + 6) = v119;
                      v123 = *(_QWORD *)(v116 + 32);
                      *(_QWORD *)(v116 + 32) = v122;
                      v124 = v108[28];
                      *((_QWORD *)v108 + 4) = v123;
                      LOBYTE(v123) = *(_BYTE *)(v116 + 28);
                      *(_BYTE *)(v116 + 28) = v124 & 2 | v123 & 0xFD;
                      LOBYTE(v123) = v123 & 2 | v108[28] & 0xFD;
                      v108[28] = v123;
                      v125 = *(_BYTE *)(v116 + 28) & 1;
                      *(_BYTE *)(v116 + 28) = *(_BYTE *)(v116 + 28) & 0xFE | v123 & 1;
                      v108[28] = v125 | v108[28] & 0xFE;
                    }
                    v108 += 40;
                  }
                  while ( v111 != v108 );
                  v110 = *(unsigned int *)(a2 + 168);
                  v111 = *(char **)(a2 + 160);
                }
                if ( v111 )
                {
                  if ( (_DWORD)v110 )
                  {
                    v169 = v105;
                    v172 = v111;
                    v165 = &v111[40 * v110];
                    v148 = a2;
                    v149 = v111;
                    v150 = v148;
                    do
                    {
                      v151 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v149 + 8);
                      v152 = v149 + 24;
                      v149 += 40;
                      sub_182CBA0(v151, v152);
                    }
                    while ( v149 != v165 );
                    v105 = v169;
                    v111 = v172;
                    a2 = v150;
                  }
                  sub_186B220(v111);
                }
                *(_QWORD *)(a2 + 160) = v105;
                *(_DWORD *)(a2 + 176) = 0;
              }
            }
            else
            {
              *k = 0;
              *(_DWORD *)(a2 + 172) = v101;
            }
            goto LABEL_30;
          }
        }
        else if ( !v35 )
        {
          goto LABEL_30;
        }
      }
    }
    if ( v27 != v33 )
    {
      for ( k = v27; v33 != k; k += 5 )
      {
        v79 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *(_DWORD *)(v79 + 12) == v29 && v49 == v79 )
            goto LABEL_118;
        }
        else if ( !v79 )
        {
          break;
        }
      }
    }
LABEL_30:
    v36 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v180);
    sub_182CBA0(v36, &v182);
    v37 = *(unsigned int *)(a2 + 192);
    v38 = *(_DWORD *)(v49 + 12);
    v39 = *(__int64 **)(a2 + 184);
    v40 = v37 - 1;
    v37 *= 16;
    v41 = (__int64 *)((char *)v39 + v37);
    v42 = 16LL * (v38 & v40);
    v43 = &v39[(unsigned __int64)v42 / 8];
    m = &v39[(unsigned __int64)v42 / 8];
    if ( v42 != v37 )
    {
      do
      {
        v45 = *m;
        if ( (unsigned __int64)*m > 1 )
        {
          if ( *(_DWORD *)(v45 + 12) == v38 && v49 == v45 )
          {
LABEL_137:
            v126 = m + 2;
            if ( v41 == m + 2 )
              v126 = *(_QWORD **)(a2 + 184);
            v127 = *(_DWORD *)(a2 + 196) - 1;
            if ( *v126 )
            {
              *m = 1;
              v128 = *(_DWORD *)(a2 + 200);
              *(_DWORD *)(a2 + 196) = v127;
              v129 = v128 + 1;
              if ( v127 < 0x40 )
                v127 = 64;
              *(_DWORD *)(a2 + 200) = v129;
              if ( v127 < v129 && !(unsigned __int8)sub_186AF10(v126) )
              {
                v161 = *(_DWORD *)(a2 + 192);
                v130 = (__m128i *)sub_186B270(16LL * v161);
                v131 = v130;
                v132 = &v130[v161];
                if ( v161 )
                {
                  if ( ((16 * (_BYTE)v161) & 0x10) == 0 || (*v130 = 0, ++v130, v130 != v132) )
                  {
                    do
                    {
                      *v130 = 0;
                      v130 += 2;
                      v130[-1] = 0;
                    }
                    while ( v130 != v132 );
                  }
                }
                v133 = *(unsigned int *)(a2 + 192);
                v134 = *(const __m128i **)(a2 + 184);
                v135 = v133 - 1;
                v133 *= 16;
                v136 = (__m128i *)((char *)v134 + v133);
                v137 = (__m128i *)((char *)v131 + v133);
                v162 = v133;
                if ( v134 != (const __m128i *)&v134->m128i_i8[v133] )
                {
                  do
                  {
                    if ( v134->m128i_i64[0] > 1uLL )
                    {
                      v138 = 16LL * (*(_DWORD *)(v134->m128i_i64[0] + 12) & v135);
                      v139 = &v131[(unsigned __int64)v138 / 0x10];
                      if ( v162 == v138 )
                      {
LABEL_198:
                        if ( v131 == v139 )
                        {
LABEL_223:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v140 = v131;
                        while ( v140->m128i_i64[0] )
                        {
                          if ( v139 == ++v140 )
                            goto LABEL_223;
                        }
                      }
                      else
                      {
                        v140 = &v131[(unsigned __int64)v138 / 0x10];
                        while ( v140->m128i_i64[0] )
                        {
                          if ( v137 == ++v140 )
                            goto LABEL_198;
                        }
                      }
                      *v140 = _mm_loadu_si128(v134);
                    }
                    ++v134;
                  }
                  while ( v136 != v134 );
                  v136 = *(__m128i **)(a2 + 184);
                }
                if ( v136 )
                  sub_186B220(v136);
                *(_QWORD *)(a2 + 184) = v131;
                *(_DWORD *)(a2 + 200) = 0;
              }
            }
            else
            {
              *m = 0;
              *(_DWORD *)(a2 + 196) = v127;
            }
            goto LABEL_37;
          }
        }
        else if ( !v45 )
        {
          goto LABEL_37;
        }
        m += 2;
      }
      while ( v41 != m );
    }
    if ( v39 != v43 )
    {
      for ( m = *(__int64 **)(a2 + 184); v43 != m; m += 2 )
      {
        v78 = *m;
        if ( (unsigned __int64)*m > 1 )
        {
          if ( *(_DWORD *)(v78 + 12) == v38 && v49 == v78 )
            goto LABEL_137;
        }
        else if ( !v78 )
        {
          break;
        }
      }
    }
LABEL_37:
    sub_97C040(a3, v49);
    v46 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v175);
    sub_182CBA0(v46, &v177);
    ++v155;
    v11 = *(_QWORD *)(a4 + 8);
  }
  while ( v11 );
  return a1;
}

