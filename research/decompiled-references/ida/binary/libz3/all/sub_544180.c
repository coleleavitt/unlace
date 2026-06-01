__int64 __fastcall sub_544180(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rbx
  void *v5; // rax
  int *v6; // r15
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // r12d
  size_t v10; // rdi
  unsigned int *v11; // rax
  int *v12; // r13
  unsigned int *v13; // r14
  __int64 v14; // rdi
  _DWORD *v15; // rdx
  int *v16; // rax
  int *v17; // rdi
  int v18; // ecx
  char v19; // si
  __int64 v20; // rcx
  char v21; // si
  __int64 v22; // rcx
  __int64 v23; // rax
  int *v24; // rbx
  void *v25; // r12
  _QWORD *v26; // rsi
  __int64 v27; // r14
  int *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  void *v31; // rbx
  _DWORD *v32; // rax
  int *v33; // r14
  __int64 v34; // rax
  __int64 v35; // r12
  void *v36; // r13
  _QWORD *v37; // rsi
  void *v38; // r12
  void *v39; // rbx
  void *v40; // rbx
  void *v41; // rbx
  void *v42; // rbx
  _QWORD *v44; // r12
  __int64 v45; // rsi
  _QWORD *v47; // rax
  __int64 v48; // rax
  _DWORD *v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r15
  _DWORD *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // r14
  char v55; // al
  unsigned int v56; // eax
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // rdx
  char v60; // cl
  char v61; // si
  __int64 v62; // rdx
  char v63; // cl
  char v64; // si
  void *v65; // rdi
  __int64 v66; // rax
  int v67; // edx
  __int64 v68; // rdx
  char v69; // cl
  char v70; // si
  __int64 v71; // rdx
  char v72; // cl
  char v73; // si
  __int64 v74; // r14
  __int64 v75; // r12
  __int64 v76; // rbx
  void *v77; // r13
  __int64 v78; // rsi
  __int64 v79; // r15
  int v80; // edx
  int v81; // eax
  __int64 v82; // r15
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // r15
  __int64 v86; // rdx
  _DWORD *v87; // rcx
  __int64 v88; // rdx
  _DWORD *v89; // rcx
  _BYTE *v90; // rax
  unsigned int v91; // edx
  __int64 v92; // rcx
  int v93; // edx
  _BYTE *v94; // rcx
  void *v95; // r15
  void *v96; // rdi
  void *v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rax
  void *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rcx
  void *v104; // r14
  int v105; // ecx
  __int64 v106; // rsi
  __int64 v107; // r15
  void *v108; // r15
  void *v109; // rdi
  void *v110; // rdi
  void *v111; // r14
  int v112; // ecx
  __int64 v113; // rsi
  __int64 v114; // r15
  unsigned int v115; // r15d
  unsigned int *v116; // rdx
  __int64 v117; // rcx
  _QWORD *v118; // rax
  int v119; // r10d
  __int64 v120; // r11
  char v121; // r8
  char v122; // r9
  char v123; // si
  int v124; // eax
  __int64 v125; // rax
  char v126; // dl
  char **v127; // rbp
  char **exception; // rbx
  unsigned int v129; // [rsp+0h] [rbp-1D8h]
  int v130[2]; // [rsp+0h] [rbp-1D8h]
  void *v131; // [rsp+8h] [rbp-1D0h]
  void *v132; // [rsp+8h] [rbp-1D0h]
  unsigned int v133; // [rsp+10h] [rbp-1C8h]
  unsigned int v134; // [rsp+14h] [rbp-1C4h]
  int **v136; // [rsp+20h] [rbp-1B8h]
  unsigned int v137; // [rsp+38h] [rbp-1A0h]
  __int64 v138; // [rsp+58h] [rbp-180h]
  void *v139; // [rsp+78h] [rbp-160h]
  void *v140; // [rsp+78h] [rbp-160h]
  int v141[2]; // [rsp+88h] [rbp-150h] BYREF
  __int64 v142; // [rsp+90h] [rbp-148h]
  _QWORD *v143; // [rsp+98h] [rbp-140h]
  _QWORD v144[2]; // [rsp+A0h] [rbp-138h] BYREF
  _QWORD v145[2]; // [rsp+B0h] [rbp-128h] BYREF
  _QWORD v146[2]; // [rsp+C0h] [rbp-118h] BYREF
  _QWORD v147[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v148; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v149; // [rsp+E8h] [rbp-F0h]
  __int64 v150; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v151; // [rsp+F8h] [rbp-E0h]
  __int64 v152; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v153; // [rsp+108h] [rbp-D0h]
  __int64 v154; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v155; // [rsp+118h] [rbp-C0h]
  int v156[2]; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v157; // [rsp+128h] [rbp-B0h]
  _QWORD v158[2]; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v159; // [rsp+140h] [rbp-98h] BYREF
  __int64 v160; // [rsp+148h] [rbp-90h]
  __int64 v161; // [rsp+150h] [rbp-88h] BYREF
  __int64 v162; // [rsp+158h] [rbp-80h]
  __int64 v163; // [rsp+160h] [rbp-78h] BYREF
  __int64 v164; // [rsp+168h] [rbp-70h]
  __int64 v165; // [rsp+170h] [rbp-68h] BYREF
  __int64 v166; // [rsp+178h] [rbp-60h]
  __int64 v167; // [rsp+180h] [rbp-58h] BYREF
  __int64 v168; // [rsp+188h] [rbp-50h]
  __int64 v169; // [rsp+190h] [rbp-48h] BYREF
  __int64 v170; // [rsp+198h] [rbp-40h]

  v144[0] = 1;
  v144[1] = 0;
  v145[0] = 1;
  v145[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v145);
  BYTE4(v145[0]) &= ~1u;
  v146[0] = 0xFFFFFFFFLL;
  LODWORD(v145[0]) = 1;
  v146[1] = 0;
  v147[0] = 1;
  v147[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v147);
  v2 = *(_QWORD *)(a1 + 40);
  BYTE4(v147[0]) &= ~1u;
  LODWORD(v147[0]) = 1;
  v142 = v2;
  v148 = 0;
  v149 = 0;
  v150 = 1;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 1;
  v155 = 0;
  v143 = nullptr;
  sub_15EEF60(a2);
  if ( *(_BYTE *)(a1 + 112) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      goto LABEL_3;
  }
  else
  {
    sub_538A20(*(_DWORD **)(a1 + 32), (unsigned __int64 *)(a1 + 88), (__int64 *)(a1 + 120));
    *(_BYTE *)(a1 + 112) = 1;
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
LABEL_3:
      v4 = v143;
      v133 = *(_DWORD *)(v3 - 4);
      if ( !v143 )
        goto LABEL_34;
      goto LABEL_4;
    }
  }
  v4 = v143;
  v133 = 0;
  if ( !v143 )
    goto LABEL_34;
LABEL_4:
  v134 = 0;
  v138 = 32LL * v133;
  while ( v134 < *((_DWORD *)v4 - 1) )
  {
    v5 = (void *)v4[v134];
    *(_QWORD *)v156 = 0;
    v157 = 0;
    v131 = v5;
    v158[0] = 1;
    v158[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v158);
    BYTE4(v158[0]) &= ~1u;
    LODWORD(v158[0]) = 1;
    *(_QWORD *)v141 = 0;
    v163 = 0;
    v164 = 0;
    v165 = 1;
    v166 = 0;
    sub_182CBA0(qword_1C7F2C0, &v165);
    v6 = *(int **)v141;
    BYTE4(v165) &= ~1u;
    LODWORD(v165) = 1;
    if ( *(_QWORD *)v141 )
    {
      v137 = *(_DWORD *)(*(_QWORD *)v141 - 4LL);
      if ( v137 >= v133 )
      {
        v74 = 32LL * v137;
        v75 = *(_QWORD *)v141 + v138;
        v76 = *(_QWORD *)v141 + v74;
        if ( v138 != v74 )
        {
          do
          {
            v77 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v75);
            v78 = v75 + 16;
            v75 += 32;
            sub_182CBA0(v77, v78);
          }
          while ( v76 != v75 );
          v6 = *(int **)v141;
        }
        *(v6 - 1) = v133;
        goto LABEL_21;
      }
    }
    else
    {
      v137 = 0;
      if ( !v133 )
        goto LABEL_21;
      v47 = (_QWORD *)sub_186B270(0x48u);
      v6 = (int *)(v47 + 1);
      *(_QWORD *)v141 = v47 + 1;
      *v47 = 2;
    }
    while ( 1 )
    {
      v7 = *(v6 - 2);
      v8 = v133;
      if ( v7 >= v133 )
        break;
      while ( 1 )
      {
        v9 = (3 * v7 + 1) >> 1;
        v10 = 32 * v9 + 8;
        if ( 32 * v7 + 8 >= (unsigned int)v10 || v7 >= v9 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v167, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v167);
          sub_233E40((__int64)&v167);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = (unsigned int *)sub_186B270(v10);
        v12 = *(int **)v141;
        v13 = v11;
        v6 = (int *)(v11 + 2);
        if ( !*(_QWORD *)v141 )
          break;
        v14 = *(unsigned int *)(*(_QWORD *)v141 - 4LL);
        v15 = v11 + 2;
        v11[1] = v14;
        v16 = v12;
        v17 = &v12[8 * v14];
        if ( v12 != v17 )
        {
          do
          {
            v18 = *v16;
            v19 = *((_BYTE *)v16 + 4);
            v16 += 8;
            v15 += 8;
            *(v15 - 8) = v18;
            *((_BYTE *)v15 - 28) = v19 & 3 | *(_BYTE *)(v15 - 7) & 0xFC;
            v20 = *((_QWORD *)v16 - 3);
            *((_QWORD *)v16 - 3) = 0;
            *((_QWORD *)v15 - 3) = v20;
            v21 = *((_BYTE *)v16 - 12);
            *(v15 - 4) = *(v16 - 4);
            *((_BYTE *)v15 - 12) = v21 & 3 | *(_BYTE *)(v15 - 3) & 0xFC;
            v22 = *((_QWORD *)v16 - 1);
            *((_QWORD *)v16 - 1) = 0;
            *((_QWORD *)v15 - 1) = v22;
          }
          while ( v17 != v16 );
        }
        v23 = (unsigned int)*(v12 - 1);
        v24 = &v12[8 * v23];
        if ( (_DWORD)v23 )
        {
          v129 = v9;
          do
          {
            v25 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v12);
            v26 = v12 + 4;
            v12 += 8;
            sub_182CBA0(v25, v26);
          }
          while ( v24 != v12 );
          v9 = v129;
          v12 = *(int **)v141;
        }
        sub_186B220(v12 - 2);
        *v13 = v9;
        v8 = v133;
        v7 = *(v6 - 2);
        *(_QWORD *)v141 = v6;
        if ( v7 >= v133 )
          goto LABEL_19;
      }
      v11[1] = 0;
      *(_QWORD *)v141 = v11 + 2;
      *v11 = v9;
    }
LABEL_19:
    *(v6 - 1) = v8;
    v27 = 32LL * v137;
    v28 = &v6[(unsigned __int64)v27 / 4];
    if ( v27 != v138 )
    {
      do
      {
        v28 += 8;
        *(v28 - 8) = v163;
        *((_BYTE *)v28 - 28) = BYTE4(v163) & 3 | *(_BYTE *)(v28 - 7) & 0xFC;
        v29 = v164;
        v164 = 0;
        *((_QWORD *)v28 - 3) = v29;
        *(v28 - 4) = v165;
        *((_BYTE *)v28 - 12) = BYTE4(v165) & 3 | *(_BYTE *)(v28 - 3) & 0xFC;
        v30 = v166;
        v166 = 0;
        *((_QWORD *)v28 - 1) = v30;
      }
      while ( &v6[(unsigned __int64)v138 / 4] != v28 );
    }
LABEL_21:
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v163);
    sub_182CBA0(v31, &v165);
    if ( *((_WORD *)v131 + 2) )
      goto LABEL_27;
    v32 = *(_DWORD **)(*((_QWORD *)v131 + 2) + 24LL);
    if ( !v32 )
      goto LABEL_27;
    if ( *v32 )
    {
      if ( *v32 != 5 )
        goto LABEL_25;
    }
    else
    {
      if ( v32[1] != 2 || *((_DWORD *)v131 + 6) != 2 )
        goto LABEL_25;
      v79 = *((_QWORD *)v131 + 5);
      if ( (unsigned __int8)sub_53A1A0(a1, *((_QWORD *)v131 + 4), v141, (__int64)v156, (__int64)v144)
        && (unsigned __int8)sub_53A1A0(a1, v79, v141, (__int64)v156, (__int64)v146) )
      {
        sub_536E30((unsigned __int64 *)(a1 + 88), (__int64 *)v141);
        sub_537BC0((__int64 *)(a1 + 96), (__int64)v156);
        LOBYTE(v167) = 1;
        sub_53AC90((_QWORD *)(a1 + 104), &v167);
        goto LABEL_27;
      }
      if ( *((_WORD *)v131 + 2) )
        goto LABEL_27;
      v32 = *(_DWORD **)(*((_QWORD *)v131 + 2) + 24LL);
      if ( !v32 )
        goto LABEL_27;
      if ( *v32 != 5 )
        goto LABEL_25;
    }
    v80 = v32[1];
    if ( v80 == 2 )
    {
      if ( *((_DWORD *)v131 + 6) == 2 )
      {
        v84 = *((_QWORD *)v131 + 4);
        v85 = *((_QWORD *)v131 + 5);
LABEL_108:
        if ( (unsigned __int8)sub_53A1A0(a1, v84, v141, (__int64)v156, (__int64)v146)
          && (unsigned __int8)sub_53A1A0(a1, v85, v141, (__int64)v156, (__int64)v144) )
        {
          sub_536E30((unsigned __int64 *)(a1 + 88), (__int64 *)v141);
          sub_537BC0((__int64 *)(a1 + 96), (__int64)v156);
          v90 = *(_BYTE **)(a1 + 104);
          if ( v90 )
          {
            v91 = *((_DWORD *)v90 - 1);
            if ( v91 == *((_DWORD *)v90 - 2) )
            {
              v115 = (3 * v91 + 1) >> 1;
              if ( v91 + 8 >= v115 + 8 || v91 >= v115 )
              {
                v127 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v167, "Overflow encountered when expanding vector");
                *v127 = (char *)off_1C63128;
                sub_2333C0(v127 + 1, &v167);
                sub_233E40((__int64)&v167);
                __cxa_throw(v127, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v116 = (unsigned int *)sub_186B300(v90 - 8, v115 + 8);
              v90 = v116 + 2;
              v117 = v116[1];
              *v116 = v115;
              *(_QWORD *)(a1 + 104) = v116 + 2;
              LODWORD(v116) = v117;
              v94 = &v90[v117];
              v93 = (_DWORD)v116 + 1;
            }
            else
            {
              v92 = v91;
              v93 = v91 + 1;
              v94 = &v90[v92];
            }
          }
          else
          {
            v118 = (_QWORD *)sub_186B270(0xAu);
            *v118 = 2;
            v90 = v118 + 1;
            v93 = 1;
            v94 = v90;
            *(_QWORD *)(a1 + 104) = v90;
          }
          *v94 = 0;
          *((_DWORD *)v90 - 1) = v93;
          goto LABEL_27;
        }
        if ( *((_WORD *)v131 + 2) )
          goto LABEL_27;
        v32 = *(_DWORD **)(*((_QWORD *)v131 + 2) + 24LL);
        if ( !v32 )
          goto LABEL_27;
LABEL_25:
        if ( *v32 != 5 )
          goto LABEL_26;
      }
    }
    else if ( v80 == 3 && *((_DWORD *)v131 + 6) == 2 )
    {
      v85 = *((_QWORD *)v131 + 4);
      v84 = *((_QWORD *)v131 + 5);
      goto LABEL_108;
    }
    v81 = v32[1];
    if ( v81 == 4 )
    {
      if ( *((_DWORD *)v131 + 6) != 2 )
        goto LABEL_27;
      v83 = *((_QWORD *)v131 + 4);
      v82 = *((_QWORD *)v131 + 5);
    }
    else
    {
      if ( v81 != 5 || *((_DWORD *)v131 + 6) != 2 )
        goto LABEL_27;
      v82 = *((_QWORD *)v131 + 4);
      v83 = *((_QWORD *)v131 + 5);
    }
    if ( (unsigned __int8)sub_53A1A0(a1, v83, v141, (__int64)v156, (__int64)v146)
      && (unsigned __int8)sub_53A1A0(a1, v82, v141, (__int64)v156, (__int64)v144) )
    {
      sub_536E30((unsigned __int64 *)(a1 + 88), (__int64 *)v141);
      v159 = 1;
      v160 = 0;
      v161 = 1;
      v162 = 0;
      sub_182CBA0(qword_1C7F2C0, &v161);
      BYTE4(v161) &= ~1u;
      v95 = qword_1C7F2C0;
      LODWORD(v161) = 1;
      v167 = 0;
      v168 = 0;
      v169 = 1;
      v170 = 0;
      if ( (v156[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v167, v156);
      else
        LODWORD(v167) = v156[0];
      if ( (v158[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v95, &v169, v158);
      }
      else
      {
        BYTE4(v169) &= ~1u;
        LODWORD(v169) = v158[0];
      }
      v96 = qword_1C7F2C0;
      if ( (v169 & 0x100000000LL) != 0 || (_DWORD)v169 != 1 || (v161 & 0x100000000LL) != 0 || (_DWORD)v161 != 1 )
      {
        sub_1852000(qword_1C7F2C0, &v167, &v159);
      }
      else
      {
        sub_1832A70(qword_1C7F2C0, &v167, &v159);
        sub_182CBA0(v96, &v169);
        BYTE4(v169) &= ~1u;
        LODWORD(v169) = 1;
      }
      BYTE4(v163) &= 0xFCu;
      v97 = qword_1C7F2C0;
      BYTE4(v165) &= 0xFCu;
      LODWORD(v163) = 0;
      v164 = 0;
      LODWORD(v165) = 1;
      v166 = 0;
      if ( (v167 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v163, &v167);
      else
        LODWORD(v163) = v167;
      if ( (v169 & 0x100000000LL) != 0 )
      {
        sub_182C690(v97, &v165, &v169);
      }
      else
      {
        BYTE4(v165) &= ~1u;
        LODWORD(v165) = v169;
      }
      v139 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v167);
      sub_182CBA0(v139, &v169);
      v98 = *(_QWORD *)(a1 + 96);
      if ( !v98 || (v99 = *(unsigned int *)(v98 - 4), (_DWORD)v99 == *(_DWORD *)(v98 - 8)) )
      {
        sub_53D790((__int64 *)(a1 + 96));
        v98 = *(_QWORD *)(a1 + 96);
        v99 = *(unsigned int *)(v98 - 4);
      }
      v100 = qword_1C7F2C0;
      v101 = v98 + 32 * v99;
      *(_DWORD *)v101 = v163;
      *(_BYTE *)(v101 + 4) = BYTE4(v163) & 3 | *(_BYTE *)(v101 + 4) & 0xFC;
      v102 = v164;
      v164 = 0;
      *(_QWORD *)(v101 + 8) = v102;
      *(_DWORD *)(v101 + 16) = v165;
      *(_BYTE *)(v101 + 20) = BYTE4(v165) & 3 | *(_BYTE *)(v101 + 20) & 0xFC;
      v103 = v166;
      v166 = 0;
      *(_QWORD *)(v101 + 24) = v103;
      ++*(_DWORD *)(v98 - 4);
      sub_182CBA0(v100, &v163);
      sub_182CBA0(v100, &v165);
      v104 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v159);
      sub_182CBA0(v104, &v161);
      goto LABEL_145;
    }
    if ( *((_WORD *)v131 + 2) )
      goto LABEL_27;
    v32 = *(_DWORD **)(*((_QWORD *)v131 + 2) + 24LL);
    if ( !v32 )
      goto LABEL_27;
LABEL_26:
    if ( *v32 )
      goto LABEL_27;
    if ( v32[1] == 8 && *((_DWORD *)v131 + 6) == 1 )
    {
      v88 = *((_QWORD *)v131 + 4);
      if ( !*(_WORD *)(v88 + 4) )
      {
        v89 = *(_DWORD **)(*(_QWORD *)(v88 + 16) + 24LL);
        if ( !v89 || *v89 != 5 )
        {
LABEL_122:
          if ( *v32 )
            goto LABEL_27;
          goto LABEL_47;
        }
        v112 = v89[1];
        if ( v112 == 4 )
        {
          if ( *(_DWORD *)(v88 + 24) != 2 )
            goto LABEL_122;
          v114 = *(_QWORD *)(v88 + 32);
          v113 = *(_QWORD *)(v88 + 40);
        }
        else
        {
          if ( v112 != 5 || *(_DWORD *)(v88 + 24) != 2 )
            goto LABEL_122;
          v113 = *(_QWORD *)(v88 + 32);
          v114 = *(_QWORD *)(v88 + 40);
        }
        if ( (unsigned __int8)sub_53A1A0(a1, v113, v141, (__int64)v156, (__int64)v146)
          && (unsigned __int8)sub_53A1A0(a1, v114, v141, (__int64)v156, (__int64)v144) )
        {
          sub_536E30((unsigned __int64 *)(a1 + 88), (__int64 *)v141);
          sub_537BC0((__int64 *)(a1 + 96), (__int64)v156);
          LOBYTE(v167) = 0;
          sub_53AC90((_QWORD *)(a1 + 104), &v167);
          goto LABEL_27;
        }
        if ( *((_WORD *)v131 + 2) )
          goto LABEL_27;
        v32 = *(_DWORD **)(*((_QWORD *)v131 + 2) + 24LL);
        if ( !v32 )
          goto LABEL_27;
        goto LABEL_122;
      }
    }
LABEL_47:
    if ( v32[1] == 8 && *((_DWORD *)v131 + 6) == 1 )
    {
      v86 = *((_QWORD *)v131 + 4);
      if ( !*(_WORD *)(v86 + 4) )
      {
        v87 = *(_DWORD **)(*(_QWORD *)(v86 + 16) + 24LL);
        if ( !v87 || *v87 != 5 )
        {
LABEL_116:
          if ( *v32 )
            goto LABEL_27;
          goto LABEL_48;
        }
        v105 = v87[1];
        if ( v105 == 2 )
        {
          if ( *(_DWORD *)(v86 + 24) != 2 )
            goto LABEL_116;
          v107 = *(_QWORD *)(v86 + 32);
          v106 = *(_QWORD *)(v86 + 40);
        }
        else
        {
          if ( v105 != 3 || *(_DWORD *)(v86 + 24) != 2 )
            goto LABEL_116;
          v106 = *(_QWORD *)(v86 + 32);
          v107 = *(_QWORD *)(v86 + 40);
        }
        if ( (unsigned __int8)sub_53A1A0(a1, v106, v141, (__int64)v156, (__int64)v146)
          && (unsigned __int8)sub_53A1A0(a1, v107, v141, (__int64)v156, (__int64)v144) )
        {
          sub_536E30((unsigned __int64 *)(a1 + 88), (__int64 *)v141);
          v159 = 1;
          v160 = 0;
          v161 = 1;
          v162 = 0;
          sub_182CBA0(qword_1C7F2C0, &v161);
          BYTE4(v161) &= ~1u;
          v108 = qword_1C7F2C0;
          LODWORD(v161) = 1;
          v167 = 0;
          v168 = 0;
          v169 = 1;
          v170 = 0;
          if ( (v156[1] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v167, v156);
          else
            LODWORD(v167) = v156[0];
          if ( (v158[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v108, &v169, v158);
          }
          else
          {
            BYTE4(v169) &= ~1u;
            LODWORD(v169) = v158[0];
          }
          v109 = qword_1C7F2C0;
          if ( (v169 & 0x100000000LL) != 0 || (_DWORD)v169 != 1 || (v161 & 0x100000000LL) != 0 || (_DWORD)v161 != 1 )
          {
            sub_1852000(qword_1C7F2C0, &v167, &v159);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, &v167, &v159);
            sub_182CBA0(v109, &v169);
            BYTE4(v169) &= ~1u;
            LODWORD(v169) = 1;
          }
          BYTE4(v163) &= 0xFCu;
          v110 = qword_1C7F2C0;
          BYTE4(v165) &= 0xFCu;
          LODWORD(v163) = 0;
          v164 = 0;
          LODWORD(v165) = 1;
          v166 = 0;
          if ( (v167 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v163, &v167);
          else
            LODWORD(v163) = v167;
          if ( (v169 & 0x100000000LL) != 0 )
          {
            sub_182C690(v110, &v165, &v169);
          }
          else
          {
            BYTE4(v165) &= ~1u;
            LODWORD(v165) = v169;
          }
          v140 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v167);
          sub_182CBA0(v140, &v169);
          sub_53B760((int **)(a1 + 96), (__int64)&v163);
          v132 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v163);
          sub_182CBA0(v132, &v165);
          v111 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v159);
          sub_182CBA0(v111, &v161);
LABEL_145:
          LOBYTE(v167) = 0;
          sub_53AC90((_QWORD *)(a1 + 104), &v167);
          goto LABEL_27;
        }
        if ( *((_WORD *)v131 + 2) )
          goto LABEL_27;
        v32 = *(_DWORD **)(*((_QWORD *)v131 + 2) + 24LL);
        if ( !v32 )
          goto LABEL_27;
        goto LABEL_116;
      }
    }
LABEL_48:
    if ( v32[1] != 6 )
      goto LABEL_27;
    if ( *((_DWORD *)v131 + 6) != 2 )
      goto LABEL_27;
    v48 = *((_QWORD *)v131 + 4);
    if ( *(_WORD *)(v48 + 4) )
      goto LABEL_27;
    v49 = *(_DWORD **)(*(_QWORD *)(v48 + 16) + 24LL);
    if ( !v49 || *v49 || v49[1] != 2 || *(_DWORD *)(v48 + 24) != 2 )
      goto LABEL_27;
    v50 = *(_QWORD *)(v48 + 40);
    *(_QWORD *)v130 = *(_QWORD *)(v48 + 32);
    if ( *(_WORD *)(*(_QWORD *)v130 + 4LL) != 1 )
    {
      if ( *(_WORD *)(v50 + 4) != 1 )
        goto LABEL_27;
      *(_QWORD *)v130 = *(_QWORD *)(v48 + 40);
      v50 = *(_QWORD *)(v48 + 32);
    }
    v51 = *((_QWORD *)v131 + 5);
    if ( (unsigned __int8)sub_1666AE0(a1 + 48, v50, &v148, &v163) )
    {
      if ( !*(_WORD *)(v51 + 4) )
      {
        v52 = *(_DWORD **)(*(_QWORD *)(v51 + 16) + 24LL);
        if ( v52 )
        {
          if ( !*v52 && v52[1] == 2 && *(_DWORD *)(v51 + 24) == 2 )
          {
            v53 = *(_QWORD *)(v51 + 32);
            v54 = *(_QWORD *)(v51 + 40);
            if ( *(_WORD *)(v53 + 4) == 1 )
            {
              v54 = *(_QWORD *)(v51 + 32);
              v53 = *(_QWORD *)(v51 + 40);
LABEL_66:
              v55 = sub_1666AE0(a1 + 48, v53, &v152, &v167);
              if ( v54 == *(_QWORD *)v130 && v55 )
              {
                if ( (v154 & 0x100000000LL) != 0
                  || (_DWORD)v154 != 1
                  || (v150 & 0x100000000LL) != 0
                  || (_DWORD)v150 != 1 )
                {
                  LOBYTE(v56) = sub_1848D40(qword_1C7F2C0, &v152, &v148);
                }
                else if ( (v152 & 0x100000000LL) != 0 || (v148 & 0x100000000LL) != 0 )
                {
                  v56 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v152, &v148) >> 31;
                }
                else
                {
                  LOBYTE(v56) = (int)v152 < (int)v148;
                }
                if ( (_BYTE)v56 )
                {
                  v168 = 0;
                  v119 = v148;
                  v120 = v149;
                  v170 = 0;
                  LODWORD(v148) = v152;
                  v121 = BYTE4(v148) & 1;
                  LODWORD(v152) = v119;
                  v149 = v153;
                  v122 = BYTE4(v148) & 2;
                  v123 = BYTE4(v150) & 1;
                  LODWORD(v169) = v150;
                  LODWORD(v167) = v119;
                  v153 = v120;
                  BYTE4(v148) = BYTE4(v152) & 1 | BYTE4(v152) & 2 | BYTE4(v148) & 0xFC;
                  BYTE4(v152) = v121 | v122 & 0xFE | BYTE4(v152) & 0xFC;
                  v124 = v154;
                  LODWORD(v154) = v150;
                  LODWORD(v150) = v124;
                  v125 = v155;
                  v155 = v151;
                  v151 = v125;
                  v126 = BYTE4(v150) & 2;
                  BYTE4(v150) = BYTE4(v154) & 3 | BYTE4(v150) & 0xFC;
                  BYTE4(v167) = v121 | v122 | BYTE4(v167) & 0xFC;
                  BYTE4(v154) = v123 | v126 | BYTE4(v154) & 0xFC;
                  BYTE4(v169) = v123 | v126 | BYTE4(v169) & 0xFC;
                  sub_25A130((char *)&v167);
                }
                v167 = 1;
                v168 = 0;
                v169 = 1;
                v170 = 0;
                sub_182CBA0(qword_1C7F2C0, &v169);
                BYTE4(v169) &= ~1u;
                LODWORD(v169) = 1;
                v57 = *(_QWORD *)v141 + 32LL * *(unsigned int *)(*(_QWORD *)v130 + 16LL);
                v58 = *(_DWORD *)v57;
                *(_DWORD *)v57 = v167;
                LODWORD(v167) = v58;
                v59 = *(_QWORD *)(v57 + 8);
                *(_QWORD *)(v57 + 8) = v168;
                v168 = v59;
                v60 = *(_BYTE *)(v57 + 4);
                *(_BYTE *)(v57 + 4) = BYTE4(v167) & 2 | v60 & 0xFD;
                BYTE4(v167) = v60 & 2 | BYTE4(v167) & 0xFD;
                v61 = *(_BYTE *)(v57 + 4);
                *(_BYTE *)(v57 + 4) = v61 & 0xFE | BYTE4(v167) & 1;
                BYTE4(v167) = v61 & 1 | BYTE4(v167) & 0xFE;
                LODWORD(v59) = *(_DWORD *)(v57 + 16);
                *(_DWORD *)(v57 + 16) = v169;
                LODWORD(v169) = v59;
                v62 = *(_QWORD *)(v57 + 24);
                *(_QWORD *)(v57 + 24) = v170;
                v170 = v62;
                v63 = *(_BYTE *)(v57 + 20);
                *(_BYTE *)(v57 + 20) = BYTE4(v169) & 2 | v63 & 0xFD;
                BYTE4(v169) = v63 & 2 | BYTE4(v169) & 0xFD;
                v64 = *(_BYTE *)(v57 + 20) & 1;
                *(_BYTE *)(v57 + 20) = *(_BYTE *)(v57 + 20) & 0xFE | BYTE4(v169) & 1;
                BYTE4(v169) = v64 | BYTE4(v169) & 0xFE;
                sub_25A130((char *)&v167);
                sub_536E30((unsigned __int64 *)(a1 + 88), (__int64 *)v141);
                v65 = qword_1C7F2C0;
                BYTE4(v167) &= 0xFCu;
                BYTE4(v169) &= 0xFCu;
                v136 = (int **)(a1 + 96);
                LODWORD(v167) = 0;
                v168 = 0;
                LODWORD(v169) = 1;
                v170 = 0;
                if ( (v148 & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, &v167, &v148);
                else
                  LODWORD(v167) = v148;
                if ( (v150 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v65, &v169, &v150);
                }
                else
                {
                  BYTE4(v169) &= ~1u;
                  LODWORD(v169) = v150;
                }
                sub_1831620(qword_1C7F2C0, &v167);
                sub_53B760(v136, (__int64)&v167);
                sub_25A130((char *)&v167);
                LOBYTE(v167) = 0;
                sub_53AC90((_QWORD *)(a1 + 104), &v167);
                v168 = 0;
                v167 = 0xFFFFFFFFLL;
                v169 = 1;
                v170 = 0;
                sub_182CBA0(qword_1C7F2C0, &v169);
                BYTE4(v169) &= ~1u;
                LODWORD(v169) = 1;
                v66 = *(_QWORD *)v141 + 32LL * *(unsigned int *)(*(_QWORD *)v130 + 16LL);
                v67 = *(_DWORD *)v66;
                *(_DWORD *)v66 = v167;
                LODWORD(v167) = v67;
                v68 = *(_QWORD *)(v66 + 8);
                *(_QWORD *)(v66 + 8) = v168;
                v168 = v68;
                v69 = *(_BYTE *)(v66 + 4);
                *(_BYTE *)(v66 + 4) = BYTE4(v167) & 2 | v69 & 0xFD;
                BYTE4(v167) = v69 & 2 | BYTE4(v167) & 0xFD;
                v70 = *(_BYTE *)(v66 + 4);
                *(_BYTE *)(v66 + 4) = v70 & 0xFE | BYTE4(v167) & 1;
                BYTE4(v167) = v70 & 1 | BYTE4(v167) & 0xFE;
                LODWORD(v68) = *(_DWORD *)(v66 + 16);
                *(_DWORD *)(v66 + 16) = v169;
                LODWORD(v169) = v68;
                v71 = *(_QWORD *)(v66 + 24);
                *(_QWORD *)(v66 + 24) = v170;
                v170 = v71;
                v72 = *(_BYTE *)(v66 + 20);
                *(_BYTE *)(v66 + 20) = BYTE4(v169) & 2 | v72 & 0xFD;
                BYTE4(v169) = v72 & 2 | BYTE4(v169) & 0xFD;
                v73 = *(_BYTE *)(v66 + 20) & 1;
                *(_BYTE *)(v66 + 20) = *(_BYTE *)(v66 + 20) & 0xFE | BYTE4(v169) & 1;
                BYTE4(v169) = v73 | BYTE4(v169) & 0xFE;
                sub_25A130((char *)&v167);
                sub_536E30((unsigned __int64 *)(a1 + 88), (__int64 *)v141);
                sub_537BC0((__int64 *)v136, (__int64)&v152);
                LOBYTE(v167) = 0;
                sub_53AC90((_QWORD *)(a1 + 104), &v167);
              }
              goto LABEL_27;
            }
            if ( *(_WORD *)(v54 + 4) == 1 )
              goto LABEL_66;
          }
        }
      }
    }
LABEL_27:
    v33 = *(int **)v141;
    if ( *(_QWORD *)v141 )
    {
      v34 = *(unsigned int *)(*(_QWORD *)v141 - 4LL);
      if ( (_DWORD)v34 )
      {
        v35 = *(_QWORD *)v141 + 32 * v34;
        do
        {
          v36 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v33);
          v37 = v33 + 4;
          v33 += 8;
          sub_182CBA0(v36, v37);
        }
        while ( v33 != (int *)v35 );
        v33 = *(int **)v141;
      }
      sub_186B220(v33 - 2);
    }
    v38 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v156);
    sub_182CBA0(v38, v158);
    v4 = v143;
    ++v134;
    if ( !v143 )
      goto LABEL_34;
  }
  v44 = &v4[*((unsigned int *)v4 - 1)];
  if ( v4 >= v44 )
    goto LABEL_43;
  do
  {
    while ( 1 )
    {
      v45 = *v4;
      if ( *v4 )
      {
        if ( (*(_DWORD *)(v45 + 8))-- == 1 )
          break;
      }
      if ( ++v4 >= v44 )
        goto LABEL_42;
    }
    sub_15D7BC0(v142, v45);
    ++v4;
  }
  while ( v4 < v44 );
LABEL_42:
  v4 = v143;
  if ( v143 )
LABEL_43:
    sub_186B220(v4 - 1);
LABEL_34:
  v39 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v152);
  sub_182CBA0(v39, &v154);
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v148);
  sub_182CBA0(v40, &v150);
  v41 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v146);
  sub_182CBA0(v41, v147);
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v144);
  return sub_182CBA0(v42, v145);
}

