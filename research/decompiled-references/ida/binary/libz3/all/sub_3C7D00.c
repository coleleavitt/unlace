__int64 *__fastcall sub_3C7D00(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r10
  __int64 v13; // r12
  __int64 *v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // esi
  unsigned int v19; // edx
  __int64 *v20; // r11
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  unsigned int v30; // r15d
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // r15
  unsigned int v39; // eax
  __int64 v40; // rsi
  int v41; // eax
  _QWORD *v42; // rsi
  unsigned int v43; // eax
  _QWORD *v44; // rdx
  unsigned int i; // r15d
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // r13
  unsigned int v49; // eax
  unsigned int v50; // r8d
  size_t v51; // rsi
  _DWORD *v52; // rax
  __int64 v53; // rsi
  unsigned int v54; // ecx
  size_t v55; // rsi
  unsigned int *v56; // rax
  _DWORD *v57; // rsi
  unsigned int v58; // edx
  size_t v59; // rsi
  __int64 v60; // rax
  __int64 *v61; // rdx
  __int64 *v62; // rcx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // r9d
  _QWORD *v66; // r8
  unsigned int v67; // eax
  unsigned int v68; // r9d
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // r15
  _QWORD *v73; // rax
  _QWORD *v74; // rbx
  int v75; // r9d
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 *v78; // r13
  __int64 *v79; // r14
  __int64 *v80; // rdi
  unsigned int v82; // r13d
  size_t v83; // rdi
  __int64 v84; // r9
  __int64 *v85; // rax
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rdx
  int v89; // edi
  __int64 v90; // r10
  __int64 *v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 *v94; // rbx
  __int64 v95; // r15
  __int64 *v96; // rdi
  __int64 v97; // rcx
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  int v103; // r8d
  int v104; // r9d
  char **v105; // r15
  char **exception; // r15
  char **v107; // r15
  char **v108; // r15
  __int64 v109; // [rsp+0h] [rbp-130h]
  int v110; // [rsp+4h] [rbp-12Ch]
  __int64 v111; // [rsp+8h] [rbp-128h]
  __int64 v112; // [rsp+8h] [rbp-128h]
  int v113; // [rsp+10h] [rbp-120h]
  __int64 *v114; // [rsp+10h] [rbp-120h]
  __int64 v115; // [rsp+18h] [rbp-118h]
  __int64 v116; // [rsp+20h] [rbp-110h]
  __int64 *v117; // [rsp+28h] [rbp-108h]
  __int64 *v118; // [rsp+30h] [rbp-100h]
  __int64 *v119; // [rsp+30h] [rbp-100h]
  __int64 *v120; // [rsp+38h] [rbp-F8h]
  unsigned int v121; // [rsp+38h] [rbp-F8h]
  __int64 v122; // [rsp+40h] [rbp-F0h]
  __int64 v123; // [rsp+40h] [rbp-F0h]
  __int64 *ptr; // [rsp+48h] [rbp-E8h]
  __int64 v125; // [rsp+50h] [rbp-E0h]
  __int64 *v126; // [rsp+50h] [rbp-E0h]
  __int64 *v127; // [rsp+58h] [rbp-D8h]
  __int64 v128; // [rsp+58h] [rbp-D8h]
  __int64 v129; // [rsp+58h] [rbp-D8h]
  __int64 v130; // [rsp+58h] [rbp-D8h]
  _DWORD *v131; // [rsp+58h] [rbp-D8h]
  int v132; // [rsp+60h] [rbp-D0h]
  __int64 *v133; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v134; // [rsp+70h] [rbp-C0h] BYREF
  _QWORD *v135; // [rsp+78h] [rbp-B8h]
  __int64 v136; // [rsp+80h] [rbp-B0h] BYREF
  __int64 v137; // [rsp+88h] [rbp-A8h]
  __int64 v138; // [rsp+90h] [rbp-A0h] BYREF
  _QWORD *v139; // [rsp+98h] [rbp-98h]
  __int64 v140[2]; // [rsp+A0h] [rbp-90h] BYREF
  int v141[2]; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v142; // [rsp+B8h] [rbp-78h]
  int v143[2]; // [rsp+D0h] [rbp-60h] BYREF
  int v144; // [rsp+D8h] [rbp-58h]
  __int64 v145; // [rsp+E0h] [rbp-50h]
  __int64 v146; // [rsp+E8h] [rbp-48h] BYREF
  _QWORD *v147; // [rsp+F0h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 3056);
  v113 = (int)a1;
  v6 = *(_DWORD *)(v4 + 712);
  v111 = v4;
  *(_DWORD *)(v4 + 712) = 1;
  a1[1] = v4;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = 0x7FFFFFFF8LL;
  HIDWORD(v109) = v6;
  *a1 = 0;
  v134 = v7;
  if ( v5 )
    v8 = 8LL * (unsigned int)(*(_DWORD *)(v5 - 4) - 1);
  v9 = *(_QWORD *)(v5 + v8);
  if ( v9 )
    ++*(_DWORD *)(v9 + 76);
  v10 = (__int64 *)v9;
  v145 = v7;
  v144 = 0;
  v146 = v7;
  *(_QWORD *)v143 = &off_1C60CA8;
  v147 = nullptr;
  sub_3C5860(&v136, (__int64 *)v9);
  v11 = *(unsigned int *)(v9 + 52);
  if ( !(_DWORD)v11 )
  {
    v125 = 0;
    v13 = v9;
    LODWORD(v118) = 0;
    goto LABEL_74;
  }
  v125 = 0;
  v118 = nullptr;
  while ( 2 )
  {
    v12 = *(unsigned int *)(v9 + 64);
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 3056) + 8LL * *(unsigned int *)(v9 + 68));
    if ( v13 )
      ++*(_DWORD *)(v13 + 76);
    v14 = *(__int64 **)(a2 + 3032);
    v15 = *(_DWORD *)(v13 + 60);
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 8LL * v15) + 16LL);
    v17 = *(unsigned int *)(a2 + 3040);
    v18 = *(_DWORD *)(v16 + 12);
    v19 = v17 - 1;
    v17 *= 16;
    v20 = (__int64 *)((char *)v14 + v17);
    v21 = 16LL * (v18 & v19);
    v22 = &v14[(unsigned __int64)v21 / 8];
    if ( v21 == v17 )
    {
LABEL_17:
      while ( v22 != v14 )
      {
        v25 = *v14;
        if ( (unsigned __int64)*v14 > 1 )
        {
          if ( *(_DWORD *)(v25 + 12) == v18 && v16 == v25 )
          {
            v23 = v14;
            goto LABEL_26;
          }
        }
        else if ( !v25 )
        {
          break;
        }
        v14 += 2;
      }
LABEL_16:
      BUG();
    }
    v23 = &v14[(unsigned __int64)v21 / 8];
    while ( 1 )
    {
      v24 = *v23;
      if ( (unsigned __int64)*v23 > 1 )
        break;
      if ( !v24 )
        goto LABEL_16;
LABEL_13:
      v23 += 2;
      if ( v20 == v23 )
        goto LABEL_17;
    }
    if ( *(_DWORD *)(v24 + 12) != v18 || v16 != v24 )
      goto LABEL_13;
LABEL_26:
    v26 = *(_QWORD *)(*(_QWORD *)(a2 + 3024) + 8LL * *(unsigned int *)(v23[1] + 4 * v12));
    ptr = (__int64 *)v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 76);
    v133 = v118;
    v27 = sub_3C69E0((_QWORD *)(a2 + 2224), (__int64 *)v13, v15, (__int64 *)v26, 1, &v133);
    v118 = v133;
    if ( !v27 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1588);
    }
    v28 = *(_QWORD *)(a2 + 3000);
    v29 = nullptr;
    v116 = *(_QWORD *)(a2 + 2992);
    v138 = v116;
    if ( v28 )
    {
      v30 = 0;
      do
      {
        if ( v30 >= *(_DWORD *)(v28 - 4) )
          break;
        v31 = *(_QWORD *)(v28 + 8LL * v30);
        v128 = v31;
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        if ( v29 )
        {
          v32 = *((_DWORD *)v29 - 1);
          if ( v32 == *((_DWORD *)v29 - 2) )
          {
            v58 = (3 * v32 + 1) >> 1;
            v59 = 8 * v58 + 8;
            if ( 8 * v32 + 8 >= (unsigned int)v59 || v32 >= v58 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_3BCB70((__int64 *)v141, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v141);
              sub_233E40((__int64)v141);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v122) = (3 * v32 + 1) >> 1;
            v60 = sub_186B300(v29 - 1, v59);
            v29 = (_QWORD *)(v60 + 8);
            *(_DWORD *)v60 = v122;
            LODWORD(v60) = *(_DWORD *)(v60 + 4);
            v35 = &v29[(unsigned int)v60];
            v28 = *(_QWORD *)(a2 + 3000);
            v34 = v60 + 1;
          }
          else
          {
            v33 = v32;
            v34 = v32 + 1;
            v35 = &v29[v33];
          }
        }
        else
        {
          v100 = (_QWORD *)sub_186B270(0x18u);
          v35 = v100 + 1;
          v28 = *(_QWORD *)(a2 + 3000);
          *v100 = 2;
          v29 = v100 + 1;
          v34 = 1;
        }
        ++v30;
        *v35 = v128;
        *((_DWORD *)v29 - 1) = v34;
      }
      while ( v28 );
    }
    v36 = *(_QWORD *)(a2 + 3016);
    v129 = 0;
    v140[0] = *(_QWORD *)(a2 + 3008);
    if ( v36 )
    {
      v37 = 0;
      do
      {
        if ( v37 >= *(_DWORD *)(v36 - 4) )
          break;
        v38 = *(_QWORD *)(v36 + 8LL * v37);
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        if ( v129 )
        {
          v39 = *(_DWORD *)(v129 - 4);
          if ( v39 == *(_DWORD *)(v129 - 8) )
          {
            v54 = (3 * v39 + 1) >> 1;
            v55 = 8 * v54 + 8;
            if ( 8 * v39 + 8 >= (unsigned int)v55 || v39 >= v54 )
            {
              v107 = (char **)__cxa_allocate_exception(0x28u);
              sub_3BCB70((__int64 *)v141, "Overflow encountered when expanding vector");
              *v107 = (char *)off_1C63128;
              sub_2333C0(v107 + 1, v141);
              sub_233E40((__int64)v141);
              __cxa_throw(v107, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v121 = (3 * v39 + 1) >> 1;
            LODWORD(v122) = v37;
            v56 = (unsigned int *)sub_186B300((void *)(v129 - 8), v55);
            v57 = v56 + 2;
            v37 = v122;
            v129 = (__int64)(v56 + 2);
            *v56 = v121;
            LODWORD(v56) = v56[1];
            v42 = &v57[2 * (unsigned int)v56];
            v36 = *(_QWORD *)(a2 + 3016);
            v41 = (_DWORD)v56 + 1;
          }
          else
          {
            v40 = v39;
            v41 = v39 + 1;
            v42 = (_QWORD *)(v129 + 8 * v40);
          }
        }
        else
        {
          LODWORD(v122) = v37;
          v99 = (_QWORD *)sub_186B270(0x18u);
          v36 = *(_QWORD *)(a2 + 3016);
          v37 = v122;
          *v99 = 2;
          v42 = v99 + 1;
          v41 = 1;
          v129 = (__int64)v42;
        }
        *v42 = v38;
        ++v37;
        *(_DWORD *)(v129 - 4) = v41;
      }
      while ( v36 );
    }
    v139 = v29;
    v120 = v140;
    v140[1] = v129;
    v117 = &v138;
    sub_3C5CC0(a2, (int)v143, v13, ptr, &v138, v140, (__int64 *)v9);
    ++*(_DWORD *)(v13 + 76);
    sub_3BE360((__int64 *)v9);
    if ( v125 )
    {
      v43 = *(_DWORD *)(v125 - 4);
      if ( v43 == *(_DWORD *)(v125 - 8) )
      {
        v82 = (3 * v43 + 1) >> 1;
        v83 = 16 * v82 + 8;
        if ( 16 * v43 + 8 >= (unsigned int)v83 || v43 >= v82 )
        {
          v105 = (char **)__cxa_allocate_exception(0x28u);
          sub_3BCB70((__int64 *)v141, "Overflow encountered when expanding vector");
          *v105 = (char *)off_1C63128;
          sub_2333C0(v105 + 1, v141);
          sub_233E40((__int64)v141);
          __cxa_throw(v105, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v84 = sub_186B270(v83);
        v85 = (__int64 *)v125;
        v86 = v84 + 8;
        v87 = *(unsigned int *)(v125 - 4);
        v88 = v84 + 8;
        *(_DWORD *)(v84 + 4) = v87;
        v89 = v87;
        v90 = v87;
        v91 = (__int64 *)(v125 + 16 * v87);
        if ( v91 != (__int64 *)v125 )
        {
          do
          {
            v92 = *v85;
            v85 += 2;
            v88 += 16;
            *(_QWORD *)(v88 - 16) = v92;
            v93 = *(v85 - 1);
            *(v85 - 1) = 0;
            *(_QWORD *)(v88 - 8) = v93;
          }
          while ( v85 != v91 );
        }
        if ( v89 )
        {
          v130 = v125 + 16 * v90;
          v123 = v84;
          v115 = (__int64)v29;
          v94 = (__int64 *)v125;
          v95 = v84 + 8;
          do
          {
            v96 = v94;
            v94 += 2;
            sub_2334C0(v96);
          }
          while ( (__int64 *)v130 != v94 );
          v84 = v123;
          v29 = (_QWORD *)v115;
          v86 = v95;
        }
        v122 = v86;
        v131 = (_DWORD *)v84;
        sub_186B220((void *)(v125 - 8));
        v97 = (unsigned int)v131[1];
        *v131 = v82;
        v125 = v122;
        v43 = v97;
        v10 = (__int64 *)(v122 + 16 * v97);
        v127 = v10;
      }
      else
      {
        v127 = (__int64 *)(16LL * v43 + v125);
        v10 = v127;
      }
    }
    else
    {
      v101 = (_QWORD *)sub_186B270(0x28u);
      *v101 = 2;
      v127 = v101 + 1;
      v10 = v101 + 1;
      v125 = (__int64)(v101 + 1);
      v43 = 0;
    }
    v10[1] = 0;
    *v10 = v116;
    if ( v29 )
    {
      v44 = nullptr;
      for ( i = 0; i < *((_DWORD *)v29 - 1); ++i )
      {
        v48 = v29[i];
        if ( v48 )
          ++*(_DWORD *)(v48 + 8);
        if ( v44 )
        {
          v49 = *((_DWORD *)v44 - 1);
          if ( v49 == *((_DWORD *)v44 - 2) )
          {
            v50 = (3 * v49 + 1) >> 1;
            v51 = 8 * v50 + 8;
            if ( 8 * v49 + 8 >= (unsigned int)v51 || v49 >= v50 )
            {
              v108 = (char **)__cxa_allocate_exception(0x28u);
              sub_3BCB70((__int64 *)v141, "Overflow encountered when expanding vector");
              *v108 = (char *)off_1C63128;
              sub_2333C0(v108 + 1, v141);
              sub_233E40((__int64)v141);
              __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v122) = (3 * v49 + 1) >> 1;
            v52 = (_DWORD *)sub_186B300(v44 - 1, v51);
            v53 = (unsigned int)v52[1];
            v44 = v52 + 2;
            *v52 = v122;
            LODWORD(v52) = v53;
            v10 = &v44[v53];
            v127[1] = (__int64)v44;
            v47 = (_DWORD)v52 + 1;
          }
          else
          {
            v46 = v49;
            v47 = v49 + 1;
            v10 = &v44[v46];
          }
        }
        else
        {
          v98 = (_QWORD *)sub_186B270(0x18u);
          v44 = v98 + 1;
          *v98 = 2;
          v10 = v98 + 1;
          v127[1] = (__int64)(v98 + 1);
          v47 = 1;
        }
        *v10 = v48;
        *((_DWORD *)v44 - 1) = v47;
      }
      v43 = *(_DWORD *)(v125 - 4);
    }
    *(_DWORD *)(v125 - 4) = v43 + 1;
    sub_2334C0(v140);
    sub_2334C0(&v138);
    if ( ptr )
    {
      sub_3BE360(ptr);
      v11 = v13;
      sub_3BE360((__int64 *)v13);
      if ( *(_DWORD *)(v13 + 52) )
        goto LABEL_72;
    }
    else
    {
      v11 = v13;
      sub_3BE360((__int64 *)v13);
      if ( *(_DWORD *)(v13 + 52) )
      {
LABEL_72:
        v9 = v13;
        continue;
      }
    }
    break;
  }
LABEL_74:
  if ( (unsigned int)sub_180B130(v11) )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v63 = sub_180B150(v11, v10);
      v140[0] = v125;
      v120 = v140;
      sub_3C56B0(a2, v140, v13, v63, v64, v65);
      sub_186A500(a2, v140);
    }
    else
    {
      v102 = sub_180B150(v11, v10);
      v140[0] = v125;
      v120 = v140;
      sub_3C56B0(a2, v140, v13, v102, v103, v104);
    }
  }
  v66 = v147;
  if ( v147 )
  {
    v62 = (__int64 *)(*((_DWORD *)v147 - 1) >> 1);
    if ( (_DWORD)v62 )
    {
      v67 = *((_DWORD *)v147 - 1) - 1;
      v61 = v147;
      v68 = v67 - (_DWORD)v62;
      do
      {
        v69 = v67;
        v70 = *v61;
        --v67;
        ++v61;
        v62 = &v66[v69];
        *(v61 - 1) = *v62;
        *v62 = v70;
      }
      while ( v67 != v68 );
    }
  }
  v71 = sub_15DE060(*(_QWORD *)(a2 + 8), v136, v61, v62, v66);
  v72 = v71;
  if ( v71 )
    ++*(_DWORD *)(v71 + 8);
  v73 = (_QWORD *)sub_186B270(0x18u);
  v73[1] = v72;
  v74 = v73 + 1;
  *v73 = 0x100000002LL;
  sub_13302B0(
    (int)v141,
    (int)v143,
    *(_QWORD *)(a2 + 8),
    1,
    (_DWORD)v73 + 8,
    v75,
    v109,
    v111,
    v113,
    v115,
    v116,
    (int)v117,
    (int)v118,
    (int)v120,
    v122,
    ptr,
    v125,
    (int)v127,
    v132,
    (int)v133,
    v134,
    (int)v135,
    v136,
    v137,
    v138,
    (int)v139,
    v140[0]);
  v76 = *v114;
  *v114 = *(_QWORD *)v141;
  *(_QWORD *)v141 = v76;
  sub_3BCB30(v76, v142);
  if ( v126 )
  {
    v77 = *((unsigned int *)v126 - 1);
    if ( (_DWORD)v77 )
    {
      v78 = v126;
      v79 = &v126[2 * v77];
      do
      {
        v80 = v78;
        v78 += 2;
        sub_2334C0(v80);
      }
      while ( v79 != v78 );
    }
    sub_186B220(v126 - 1);
  }
  sub_3BCB50(v136, v137);
  *(_QWORD *)v143 = &off_1C60CA8;
  sub_2B4F40(&v146);
  if ( v119 )
    sub_3BE360(v119);
  sub_3BE360((__int64 *)v13);
  v135 = v74;
  sub_2B4F40(&v134);
  *(_DWORD *)(v112 + 712) = v110;
  return v114;
}

