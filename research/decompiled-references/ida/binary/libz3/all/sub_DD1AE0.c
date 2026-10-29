__int64 __fastcall sub_DD1AE0(_QWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int *v18; // rax
  int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int64 *v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rdx
  unsigned int v34; // r13d
  __int64 v35; // rax
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int *v38; // rax
  _QWORD *v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rbp
  void *v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rax
  void *v45; // r12
  __int64 v46; // rbp
  int v47; // eax
  _DWORD *v48; // rdx
  _QWORD *v49; // rbp
  void *v50; // r12
  __int64 *v51; // rax
  __int64 *v52; // r10
  __int64 v53; // rsi
  unsigned int v54; // edi
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r14
  __int64 v61; // r13
  _QWORD *v62; // rbp
  int v63; // r9d
  __int64 v64; // rax
  _DWORD *v65; // rdx
  int v66; // ecx
  void *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // r14
  _DWORD *v72; // rsi
  __int64 v73; // rdi
  int v74; // eax
  bool v75; // zf
  __int64 *v76; // r13
  unsigned __int64 v77; // r14
  __int64 v78; // rsi
  __int64 v79; // rax
  unsigned int v80; // edx
  int v82; // edx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // r13
  char *v86; // rcx
  __int64 v87; // r14
  char v88; // al
  int v89; // eax
  __int64 v90; // r12
  char *v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // r8
  __int64 i; // rcx
  char *v95; // rdi
  char *v96; // rcx
  char *v97; // rax
  __int64 v98; // rdx
  unsigned int *v99; // rax
  int v100; // r13d
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 *v104; // rax
  int v105; // edx
  int v106; // ecx
  int v107; // r8d
  int v108; // r9d
  __int64 v109; // rdx
  __int64 v110; // rax
  _DWORD *v111; // rax
  __int64 *v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rdx
  unsigned int v115; // r13d
  __int64 v116; // rax
  unsigned int v117; // ecx
  size_t v118; // rsi
  unsigned int *v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // r13
  void *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // r13
  void *v126; // rdi
  __int64 v127; // rsi
  __int64 v128; // r8
  char **exception; // rbp
  _QWORD *v130; // rbp
  char **v131; // rbp
  _QWORD *v132; // r12
  int v133; // [rsp+0h] [rbp-3C8h]
  int v134; // [rsp+0h] [rbp-3C8h]
  int v135; // [rsp+8h] [rbp-3C0h]
  __int64 v136; // [rsp+8h] [rbp-3C0h]
  int v137[2]; // [rsp+8h] [rbp-3C0h]
  int v138[2]; // [rsp+8h] [rbp-3C0h]
  int v139; // [rsp+10h] [rbp-3B8h]
  unsigned int v140; // [rsp+10h] [rbp-3B8h]
  __int64 v141; // [rsp+10h] [rbp-3B8h]
  int v142[2]; // [rsp+10h] [rbp-3B8h]
  int v143; // [rsp+18h] [rbp-3B0h]
  __int64 v144; // [rsp+18h] [rbp-3B0h]
  int v145[2]; // [rsp+18h] [rbp-3B0h]
  int v146; // [rsp+20h] [rbp-3A8h]
  __int64 v147; // [rsp+20h] [rbp-3A8h]
  int v148; // [rsp+28h] [rbp-3A0h]
  int v149; // [rsp+28h] [rbp-3A0h]
  int v150[2]; // [rsp+28h] [rbp-3A0h]
  int v151[2]; // [rsp+28h] [rbp-3A0h]
  int v152; // [rsp+30h] [rbp-398h]
  int v153; // [rsp+30h] [rbp-398h]
  void *v154; // [rsp+38h] [rbp-390h]
  void *v155; // [rsp+38h] [rbp-390h]
  void *v156; // [rsp+38h] [rbp-390h]
  int v157; // [rsp+40h] [rbp-388h]
  int v158; // [rsp+40h] [rbp-388h]
  __int64 v159; // [rsp+40h] [rbp-388h]
  char v160; // [rsp+48h] [rbp-380h]
  char v161; // [rsp+48h] [rbp-380h]
  __int64 *v162; // [rsp+50h] [rbp-378h]
  __int64 v163; // [rsp+58h] [rbp-370h]
  __int64 v164; // [rsp+68h] [rbp-360h] BYREF
  __int64 v165; // [rsp+70h] [rbp-358h] BYREF
  __int64 v166; // [rsp+78h] [rbp-350h] BYREF
  __int64 v167; // [rsp+80h] [rbp-348h] BYREF
  int v168[2]; // [rsp+88h] [rbp-340h] BYREF
  __int64 v169; // [rsp+90h] [rbp-338h] BYREF
  int v170[2]; // [rsp+98h] [rbp-330h]
  __m128i v171; // [rsp+A0h] [rbp-328h] BYREF
  void *v172; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v173; // [rsp+B8h] [rbp-310h]
  void *ptr; // [rsp+C0h] [rbp-308h] BYREF
  __int64 v175; // [rsp+C8h] [rbp-300h]
  _BYTE v176[128]; // [rsp+D0h] [rbp-2F8h] BYREF
  int v177; // [rsp+150h] [rbp-278h]
  __int64 v178[67]; // [rsp+160h] [rbp-268h] BYREF
  _BYTE v179[80]; // [rsp+378h] [rbp-50h] BYREF

  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  *(_DWORD *)sub_1875960(a1 + 180, 4, 0) = 3;
  sub_DD2CA0((int)a1, 4, v2, v3, v4, v5, v133, v135, v139, *((_DWORD *)a1 + 406), v146, v148, v152, v154, v157, v160);
  v6 = *a1;
  sub_DFBCB0(*a1);
  v163 = *(_QWORD *)(v6 + 296);
  v7 = sub_DC2710(a1)[1];
  v8 = 0x7FFFFFFF8LL;
  if ( v7 )
    v8 = 8LL * (unsigned int)(*(_DWORD *)(v7 - 4) - 1);
  v9 = *(_QWORD *)(v7 + v8);
  v147 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = sub_DC2710(a1);
  sub_39BF70(v10);
  v11 = *a1;
  sub_DFBCB0(*a1);
  v12 = *(_QWORD *)(v11 + 296);
  v13 = *a1;
  v165 = v12;
  sub_DFBCB0(v13);
  v167 = *(_QWORD *)(v13 + 296);
  v14 = sub_15D1F10(v147);
  sub_DBF660((__int64)a1, "pattern bindings should be enclosed in a parenthesis");
  v15 = a1[6];
  v16 = a1[253];
  v17 = 0;
  v136 = 0;
  if ( v15 == v16 )
  {
    while ( 1 )
    {
      if ( v15 != v16 )
        goto LABEL_29;
      if ( *((_DWORD *)a1 + 356) != 9 )
        sub_DC0980(a1);
      v113 = a1[187];
      if ( v113 )
      {
        v114 = (_QWORD *)a1[188];
        v115 = *(_DWORD *)(v113 - 4);
        if ( !v114 )
          goto LABEL_131;
      }
      else
      {
        v114 = (_QWORD *)a1[188];
        v115 = 0;
        if ( !v114 )
        {
LABEL_131:
          v120 = (_QWORD *)sub_186B270(0x10u);
          v114 = v120 + 1;
          a1[188] = v120 + 1;
          *v120 = 2;
          v99 = (unsigned int *)(v120 + 1);
          goto LABEL_110;
        }
      }
      v116 = *((unsigned int *)v114 - 1);
      if ( (_DWORD)v116 == *((_DWORD *)v114 - 2) )
      {
        v117 = (unsigned int)(3 * v116 + 1) >> 1;
        v118 = 4 * v117 + 8;
        if ( 4 * (int)v116 + 8 >= (unsigned int)v118 || (unsigned int)v116 >= v117 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_DBF430(v178, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v178);
          sub_233E40((__int64)v178);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v140 = (unsigned int)(3 * v116 + 1) >> 1;
        v119 = (unsigned int *)sub_186B300(v114 - 1, v118);
        v114 = v119 + 2;
        a1[188] = v119 + 2;
        *v119 = v140;
        v99 = &v119[v119[1] + 2];
      }
      else
      {
        v99 = (unsigned int *)v114 + v116;
      }
LABEL_110:
      *v99 = v115;
      ++*((_DWORD *)v114 - 1);
      v100 = *((_DWORD *)a1 + 378);
      sub_DCEEF0(a1, v14);
      v101 = sub_DC2710(a1)[1];
      v102 = 0x7FFFFFFF8LL;
      if ( v101 )
        v102 = 8LL * (unsigned int)(*(_DWORD *)(v101 - 4) - 1);
      v103 = *(_QWORD *)(v101 + v102);
      v164 = v103;
      if ( v103 )
        ++*(_DWORD *)(v103 + 8);
      v166 = v17;
      sub_DBF5A0(&v166, &v164);
      v17 = v166;
      v104 = sub_DC2710(a1);
      sub_39BF70(v104);
      sub_DD2CA0(
        (int)a1,
        (int)&v164,
        v105,
        v106,
        v107,
        v108,
        v134,
        v136,
        v140,
        v143,
        v147,
        v149,
        v153,
        v155,
        v158,
        v161);
      v109 = sub_DC2710(a1)[1];
      v110 = 0x7FFFFFFF8LL;
      if ( v109 )
        v110 = 8LL * (unsigned int)(*(_DWORD *)(v109 - 4) - 1);
      v111 = *(_DWORD **)(v109 + v110);
      v172 = v111;
      if ( v111 )
        ++v111[2];
      *(_QWORD *)v168 = *(_QWORD *)v138;
      sub_DBF5A0(v168, &v172);
      v136 = *(_QWORD *)v168;
      v112 = sub_DC2710(a1);
      sub_39BF70(v112);
      *((_DWORD *)a1 + 378) = v100;
      sub_DCF8B0((__int64)(a1 + 184));
      sub_DBF8C0((__int64)a1, "invalid pattern binding, ')' expected");
      if ( *((_DWORD *)a1 + 356) == 1 )
        sub_DC0980(a1);
      v15 = a1[6];
      v16 = a1[253];
    }
  }
  while ( *((_DWORD *)a1 + 356) != 2 )
  {
    v32 = a1[187];
    if ( v32 )
    {
      v33 = (_QWORD *)a1[188];
      v34 = *(_DWORD *)(v32 - 4);
      if ( !v33 )
        goto LABEL_27;
    }
    else
    {
      v33 = (_QWORD *)a1[188];
      v34 = 0;
      if ( !v33 )
      {
LABEL_27:
        v39 = (_QWORD *)sub_186B270(0x10u);
        v33 = v39 + 1;
        *v39 = 2;
        a1[188] = v39 + 1;
        v18 = (unsigned int *)(v39 + 1);
        goto LABEL_10;
      }
    }
    v35 = *((unsigned int *)v33 - 1);
    if ( (_DWORD)v35 == *((_DWORD *)v33 - 2) )
    {
      v36 = (unsigned int)(3 * v35 + 1) >> 1;
      v37 = 4 * v36 + 8;
      if ( 4 * (int)v35 + 8 >= (unsigned int)v37 || (unsigned int)v35 >= v36 )
      {
        v131 = (char **)__cxa_allocate_exception(0x28u);
        sub_DBF430(v178, "Overflow encountered when expanding vector");
        *v131 = (char *)off_1C63128;
        sub_2333C0(v131 + 1, v178);
        sub_233E40((__int64)v178);
        __cxa_throw(v131, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v140 = (unsigned int)(3 * v35 + 1) >> 1;
      v38 = (unsigned int *)sub_186B300(v33 - 1, v37);
      v33 = v38 + 2;
      a1[188] = v38 + 2;
      *v38 = v140;
      v18 = &v38[v38[1] + 2];
    }
    else
    {
      v18 = (unsigned int *)v33 + v35;
    }
LABEL_10:
    *v18 = v34;
    ++*((_DWORD *)v33 - 1);
    sub_DBF660((__int64)a1, "invalid pattern binding, '(' expected");
    v19 = *((_DWORD *)a1 + 378);
    sub_DCEEF0(a1, v14);
    v20 = sub_DC2710(a1)[1];
    v21 = 0x7FFFFFFF8LL;
    if ( v20 )
      v21 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
    v22 = *(_DWORD **)(v20 + v21);
    ptr = v22;
    if ( v22 )
      ++v22[2];
    v166 = v17;
    sub_DBF5A0(&v166, &ptr);
    v17 = v166;
    v23 = sub_DC2710(a1);
    sub_39BF70(v23);
    sub_DD2CA0((int)a1, (int)&ptr, v24, v25, v26, v27, v134, v136, v140, v143, v147, v149, v153, v155, v158, v161);
    v28 = sub_DC2710(a1)[1];
    v29 = 0x7FFFFFFF8LL;
    if ( v28 )
      v29 = 8LL * (unsigned int)(*(_DWORD *)(v28 - 4) - 1);
    v30 = *(_QWORD *)(v28 + v29);
    v178[0] = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    *(_QWORD *)v168 = *(_QWORD *)v137;
    sub_DBF5A0(v168, v178);
    v136 = *(_QWORD *)v168;
    v31 = sub_DC2710(a1);
    sub_39BF70(v31);
    *((_DWORD *)a1 + 378) = v19;
    sub_DCF8B0((__int64)(a1 + 184));
    sub_DBF8C0((__int64)a1, "invalid pattern binding, ')' expected");
  }
  sub_DC0980(a1);
LABEL_29:
  *((_DWORD *)a1 + 406) = v143 + 1;
  v40 = sub_DC2710(a1);
  v41 = *a1;
  v162 = v40;
  sub_DFBCB0(*a1);
  v42 = *(void **)(v41 + 296);
  v43 = *a1;
  v156 = v42;
  sub_DFBCB0(*a1);
  sub_633760((__int64)v178, *(_QWORD *)(v43 + 296), 0, (__int64)v179);
  v179[8] = 0;
  v178[0] = (__int64)&off_1C4CA80;
  v44 = sub_15D1F10(v147);
  v45 = (void *)a1[211];
  v46 = v44;
  if ( !v45 )
  {
    v124 = sub_186B270(0x18u);
    v125 = *a1;
    v45 = (void *)v124;
    sub_DFBCB0(*a1);
    sub_15F01E0(v45, *(_QWORD *)(v125 + 296));
    v126 = (void *)a1[211];
    if ( v45 != v126 )
    {
      if ( v126 )
        sub_186B220(v126);
      a1[211] = v45;
    }
  }
  v47 = sub_15F0200(v45);
  v48 = *(_DWORD **)(v46 + 24);
  if ( !v48 || v47 != *v48 || v48[1] )
  {
    v49 = __cxa_allocate_exception(0x30u);
    sub_305660(v49, "pattern matching is only supported for algebraic datatypes");
    __cxa_throw(v49, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v50 = (void *)a1[211];
  if ( !v50 )
  {
    v121 = sub_186B270(0x18u);
    v122 = *a1;
    v50 = (void *)v121;
    sub_DFBCB0(*a1);
    sub_15F01E0(v50, *(_QWORD *)(v122 + 296));
    v123 = (void *)a1[211];
    if ( v50 != v123 )
    {
      if ( v123 )
        sub_186B220(v123);
      a1[211] = v50;
    }
  }
  v51 = (__int64 *)sub_15F6BE0(v50, v46);
  v52 = v51;
  if ( !v17 )
  {
    v83 = *v51;
    if ( v83 )
    {
      if ( !*(_DWORD *)(v83 - 4) )
      {
        ptr = v176;
        v175 = 0x1000000000LL;
        goto LABEL_98;
      }
      goto LABEL_156;
    }
    ptr = v176;
    v175 = 0x1000000000LL;
LABEL_150:
    v95 = (char *)ptr;
    v96 = (char *)ptr + 8 * (unsigned int)v175;
    if ( ptr != v96 )
      goto LABEL_102;
    goto LABEL_107;
  }
  v53 = v17 + 8LL * *(unsigned int *)(v17 - 4);
  v54 = *(_DWORD *)(v17 - 4);
  if ( v53 == v17 )
  {
    v83 = *v51;
    if ( *v52 )
      goto LABEL_78;
    ptr = v176;
    v175 = 0x1000000000LL;
    v84 = v17 + 8LL * *(unsigned int *)(v17 - 4);
    if ( v84 != v17 )
    {
LABEL_80:
      v85 = v17;
      do
      {
        v87 = *(_QWORD *)(*(_QWORD *)v85 + 16LL);
        v88 = *(_BYTE *)(v87 + 6);
        if ( (v88 & 1) == 0 )
        {
          *(_BYTE *)(v87 + 6) = v88 | 1;
          v89 = v175;
          if ( (unsigned int)v175 < HIDWORD(v175) )
          {
            v86 = (char *)ptr;
          }
          else
          {
            *(_QWORD *)v145 = v52;
            v90 = (unsigned int)(2 * HIDWORD(v175));
            *(_QWORD *)v142 = v84;
            v86 = (char *)sub_186B270(8 * v90);
            v84 = *(_QWORD *)v142;
            v52 = *(__int64 **)v145;
            v89 = v175;
            v91 = (char *)ptr;
            if ( (_DWORD)v175 )
            {
              if ( (unsigned int)(v175 - 1) <= 2 || v86 == (char *)ptr + 8 )
              {
                v127 = 0;
                v128 = 8LL * (unsigned int)v175;
                do
                {
                  *(_QWORD *)&v86[v127] = *(_QWORD *)&v91[v127];
                  v127 += 8;
                }
                while ( v127 != v128 );
              }
              else
              {
                v92 = 0;
                v93 = 16LL * ((unsigned int)v175 >> 1);
                do
                {
                  *(__m128i *)&v86[v92] = _mm_loadu_si128((const __m128i *)&v91[v92]);
                  v92 += 16;
                }
                while ( v92 != v93 );
                if ( (v89 & 1) != 0 )
                  *(_QWORD *)&v86[8 * (v89 & 0xFFFFFFFE)] = *(_QWORD *)&v91[8 * (v89 & 0xFFFFFFFE)];
              }
            }
            if ( v91 && v91 != v176 )
            {
              *(_QWORD *)v151 = v86;
              sub_186B220(v91);
              v89 = v175;
              v86 = *(char **)v151;
              v52 = *(__int64 **)v145;
              v84 = *(_QWORD *)v142;
            }
            ptr = v86;
            HIDWORD(v175) = v90;
          }
          *(_QWORD *)&v86[8 * v89] = v87;
          LODWORD(v175) = v89 + 1;
        }
        v85 += 8;
      }
      while ( v84 != v85 );
      v83 = *v52;
      if ( *v52 )
        goto LABEL_98;
      goto LABEL_101;
    }
    goto LABEL_150;
  }
  v55 = v17;
  do
  {
    if ( *(_WORD *)(*(_QWORD *)v55 + 4LL) == 1 )
      goto LABEL_40;
    v55 += 8;
  }
  while ( v53 != v55 );
  v83 = *v52;
  if ( !*v52 )
  {
    ptr = v176;
    v175 = 0x1000000000LL;
    v84 = v17 + 8LL * *(unsigned int *)(v17 - 4);
    if ( v84 != v17 )
      goto LABEL_80;
    goto LABEL_101;
  }
LABEL_78:
  if ( v54 < *(_DWORD *)(v83 - 4) )
  {
LABEL_156:
    v130 = __cxa_allocate_exception(0x30u);
    sub_305660(v130, "non-exhaustive pattern match");
    __cxa_throw(v130, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  ptr = v176;
  v175 = 0x1000000000LL;
  v84 = v17 + 8LL * *(unsigned int *)(v17 - 4);
  if ( v84 != v17 )
    goto LABEL_80;
LABEL_98:
  for ( i = v83 + 8LL * *(unsigned int *)(v83 - 4); i != v83; v83 += 8 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)v83 + 6LL) & 1) == 0 )
    {
      v132 = __cxa_allocate_exception(0x30u);
      sub_305660(v132, "a constructor is missing from pattern match");
      __cxa_throw(v132, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
LABEL_101:
  v95 = (char *)ptr;
  v96 = (char *)ptr + 8 * (unsigned int)v175;
  if ( ptr != v96 )
  {
LABEL_102:
    v97 = v95;
    do
    {
      v98 = *(_QWORD *)v97;
      v97 += 8;
      *(_BYTE *)(v98 + 6) &= ~1u;
    }
    while ( v96 != v97 );
  }
  LODWORD(v175) = 0;
  if ( v95 != v176 && v95 )
    sub_186B220(v95);
LABEL_107:
  if ( v17 )
  {
    v54 = *(_DWORD *)(v17 - 4);
LABEL_40:
    if ( v54 )
    {
      v141 = 0;
      v56 = 8LL * (v54 - 1);
      while ( 1 )
      {
        v57 = *a1;
        sub_DFBCB0(*a1);
        v58 = *(_QWORD *)(v57 + 296);
        v59 = *(_QWORD *)(v17 + v56);
        *(_QWORD *)v170 = 0;
        v169 = v58;
        sub_DC86B0(&v171, a1, v147, v59, (__int64)&v169);
        v60 = *a1;
        v61 = v171.m128i_i64[0];
        v62 = *(_QWORD **)v170;
        v144 = v169;
        *(_QWORD *)v150 = v171.m128i_i64[1];
        sub_DFBCB0(*a1);
        v64 = *(_QWORD *)(v60 + 296);
        v172 = nullptr;
        v173 = v64;
        v65 = *(_DWORD **)(v136 + v56);
        if ( !v62 )
          break;
        v66 = *((_DWORD *)v62 - 1);
        if ( !v66 )
          break;
        sub_157BE40(
          (int)&ptr,
          (int)v178,
          (int)v65,
          v66,
          (int)v62,
          v63,
          v134,
          v136,
          v141,
          v144,
          v147,
          v150[0],
          (__int64)&v169,
          v156);
        v67 = v172;
        v172 = ptr;
        ptr = v67;
        sub_DBF390((__int64)v67, v175);
        v159 = *a1;
        sub_DFBCB0(*a1);
        sub_1584DD0(&ptr, *(_QWORD *)(v159 + 296), 0);
        v177 = 0;
        v68 = *((unsigned int *)v62 - 1);
        ptr = &off_1C61DE0;
        sub_1585DF0(&ptr, v172, v68, &v172);
        ptr = &qword_1C637E8;
        sub_15841B0(&ptr);
        if ( v141 )
          goto LABEL_45;
        if ( v172 )
          goto LABEL_69;
        if ( !v61 )
        {
LABEL_54:
          v76 = v62;
          v77 = (unsigned __int64)&v62[*((unsigned int *)v62 - 1)];
          if ( (unsigned __int64)v62 < v77 )
          {
            do
            {
              while ( 1 )
              {
                v78 = *v76;
                if ( *v76 )
                {
                  v75 = (*(_DWORD *)(v78 + 8))-- == 1;
                  if ( v75 )
                    break;
                }
                if ( (unsigned __int64)++v76 >= v77 )
                  goto LABEL_60;
              }
              ++v76;
              sub_15D7BC0(v144, v78);
            }
            while ( (unsigned __int64)v76 < v77 );
          }
LABEL_60:
          sub_186B220(v62 - 1);
          goto LABEL_61;
        }
LABEL_51:
        v75 = (*(_DWORD *)(v61 + 8))-- == 1;
        if ( v75 )
          sub_15D7BC0(*(_QWORD *)v150, v61);
LABEL_53:
        if ( v62 )
          goto LABEL_54;
LABEL_61:
        v56 -= 8;
        if ( v56 == -8 )
          goto LABEL_62;
      }
      if ( v65 )
        ++v65[2];
      v172 = v65;
      if ( !v141 )
      {
        if ( v172 )
        {
LABEL_69:
          sub_DBF390(0, (__int64)v156);
          v72 = v172;
          if ( v172 )
          {
            v82 = *((_DWORD *)v172 + 2);
            v73 = v173;
            v71 = (__int64)v172;
            *((_DWORD *)v172 + 2) = v82 + 1;
            v72[2] = v82;
            if ( v82 )
            {
LABEL_49:
              v141 = v71;
              goto LABEL_50;
            }
LABEL_71:
            sub_15D7BC0(v73, v72);
            goto LABEL_49;
          }
        }
        v141 = 0;
LABEL_50:
        if ( !v61 )
          goto LABEL_53;
        goto LABEL_51;
      }
LABEL_45:
      v69 = *a1;
      sub_DFBCB0(*a1);
      v70 = sub_15E1BF0(*(_QWORD *)(v69 + 296));
      v71 = v70;
      if ( v70 )
        ++*(_DWORD *)(v70 + 8);
      sub_DBF390(v141, (__int64)v156);
      v72 = v172;
      v73 = v173;
      if ( !v172 )
        goto LABEL_49;
      v74 = *((_DWORD *)v172 + 2);
      *((_DWORD *)v172 + 2) = v74 - 1;
      if ( v74 != 1 )
        goto LABEL_49;
      goto LABEL_71;
    }
  }
  v141 = 0;
LABEL_62:
  v178[0] = (__int64)&off_1C4CA80;
  sub_267D20(v178);
  v79 = v162[1];
  if ( !v79 || (v80 = *(_DWORD *)(v79 - 4), v80 == *(_DWORD *)(v79 - 8)) )
  {
    sub_23A6F0((unsigned int **)v162 + 1);
    v79 = v162[1];
    v80 = *(_DWORD *)(v79 - 4);
  }
  *(_QWORD *)(v79 + 8LL * v80) = v141;
  *(_DWORD *)(v79 - 4) = v80 + 1;
  *(_QWORD *)v168 = v136;
  sub_2334C0(&v167);
  v166 = v17;
  sub_2334C0(&v165);
  return sub_DBF390(v147, v163);
}

