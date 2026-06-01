void __fastcall sub_DCCD40(_QWORD *a1)
{
  char v2; // al
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rbp
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r10
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r12
  int v28; // edx
  int v29; // edx
  _QWORD *v30; // r14
  _BYTE *v31; // rbp
  _BYTE *v32; // r15
  __int64 v33; // r12
  _QWORD *v34; // r14
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 *v43; // rbx
  __int64 *v44; // rbp
  __int64 v45; // rsi
  unsigned int v46; // ecx
  size_t v47; // rsi
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // r12
  char *v51; // rax
  int *v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 *v55; // r12
  __int64 v56; // rdx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // r12
  __int64 v61; // rdi
  __int64 v62; // rax
  int v63; // eax
  int i; // r12d
  __int64 v65; // rax
  _QWORD *v66; // r12
  __int64 v67; // rdx
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  _QWORD *v71; // rax
  __int64 v72; // r12
  __int64 v73; // rdi
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 v77; // rbp
  __int64 v78; // r12
  __int64 v79; // rdi
  __int64 *v80; // rbx
  __int64 *v81; // rbp
  __int64 v82; // rsi
  __int64 v83; // r15
  int v84; // edx
  int v85; // ecx
  int v86; // r8d
  int v87; // r9d
  unsigned __int64 *v88; // rax
  size_t v89; // r12
  unsigned __int64 v90; // rdx
  _BYTE *v91; // rdi
  char **v92; // rbp
  unsigned __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // r12
  int v97; // edx
  int v98; // ecx
  int v99; // r8d
  int v100; // r9d
  char **v101; // rbp
  __int64 v102; // r12
  int v103; // edx
  int v104; // ecx
  int v105; // r8d
  int v106; // r9d
  unsigned __int64 *v107; // rax
  size_t v108; // r14
  unsigned __int64 v109; // rdx
  _BYTE *v110; // rdi
  size_t v111; // rbp
  unsigned __int64 v112; // rdx
  char **v113; // rbp
  _QWORD *exception; // r12
  _QWORD *v115; // rbp
  char **v116; // rbp
  int v117; // [rsp+0h] [rbp-1E8h]
  void *v118; // [rsp+8h] [rbp-1E0h]
  _BYTE *v119; // [rsp+10h] [rbp-1D8h]
  __int64 v120; // [rsp+18h] [rbp-1D0h]
  __int64 v121; // [rsp+20h] [rbp-1C8h]
  __int64 v122; // [rsp+30h] [rbp-1B8h]
  __int64 v123; // [rsp+38h] [rbp-1B0h]
  char *v124; // [rsp+38h] [rbp-1B0h]
  char *v125; // [rsp+38h] [rbp-1B0h]
  char *v126; // [rsp+38h] [rbp-1B0h]
  int v127[2]; // [rsp+40h] [rbp-1A8h] BYREF
  int v128; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 *v129; // [rsp+50h] [rbp-198h] BYREF
  size_t v130; // [rsp+58h] [rbp-190h]
  unsigned __int64 v131; // [rsp+60h] [rbp-188h] BYREF
  int v132; // [rsp+68h] [rbp-180h]
  __int64 v133; // [rsp+70h] [rbp-178h]
  void *ptr; // [rsp+78h] [rbp-170h]
  __int64 v135; // [rsp+80h] [rbp-168h]
  int v136; // [rsp+88h] [rbp-160h] BYREF
  int v137; // [rsp+90h] [rbp-158h]
  int v138; // [rsp+98h] [rbp-150h]
  int v139; // [rsp+A0h] [rbp-148h]
  void *v140; // [rsp+A8h] [rbp-140h]
  int v141; // [rsp+B0h] [rbp-138h]
  __int64 v142; // [rsp+B8h] [rbp-130h]
  void *src; // [rsp+110h] [rbp-D8h] BYREF
  size_t n; // [rsp+118h] [rbp-D0h]
  __int64 v145; // [rsp+120h] [rbp-C8h]
  _BYTE v146[192]; // [rsp+128h] [rbp-C0h] BYREF

  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v123 = *(_QWORD *)((char *)a1 + 36);
  v122 = (__int64)(a1 + 193);
  sub_DCADA0((__int64)(a1 + 193));
  v2 = sub_DCBB00(a1);
  v3 = *a1;
  HIBYTE(v120) = v2;
  v4 = *(_QWORD *)(*a1 + 312LL);
  if ( !v4 )
  {
    sub_DFBCB0(v3);
    v4 = *(_QWORD *)(v3 + 312);
  }
  v133 = v4;
  ptr = &v136;
  v135 = 0x1000000000LL;
  sub_DBF660((__int64)a1, "invalid datatype declaration, '(' expected");
  v5 = *a1;
  v121 = *(_QWORD *)(*a1 + 312LL);
  if ( !v121 )
  {
    sub_DFBCB0(v5);
    v121 = *(_QWORD *)(v5 + 312);
  }
  v6 = 0;
  LODWORD(v118) = 0;
  while ( *((_DWORD *)a1 + 356) != 2 )
  {
    v7 = *a1;
    v8 = *(void **)(*a1 + 312LL);
    if ( !v8 )
      goto LABEL_68;
    while ( 1 )
    {
      src = v8;
      v119 = v146;
      n = (size_t)v146;
      v145 = 0x1000000000LL;
      if ( HIBYTE(v120) )
      {
        v9 = a1[199];
        if ( !v9 || (unsigned int)v118 >= *(_DWORD *)(v9 - 4) )
        {
          exception = __cxa_allocate_exception(0x30u);
          sub_305660(exception, "invalid datatype declaration, too many data-type bodies defined");
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        *(_QWORD *)v127 = *(_QWORD *)(v9 + 8LL * (unsigned int)v118);
        sub_DBF660((__int64)a1, "invalid datatype declaration, '(' expected");
        if ( a1[6] == a1[244] )
        {
          if ( *((_DWORD *)a1 + 356) != 9 )
            sub_DC0980(a1);
          sub_DCADA0((__int64)(a1 + 190));
          sub_DBF660((__int64)a1, "invalid sort declaration, parameters missing");
          v63 = *((_DWORD *)a1 + 356);
          for ( i = 0; v63 != 2; v63 = *((_DWORD *)a1 + 356) )
          {
            if ( v63 != 4
              || (v65 = a1[6], v65 == a1[254])
              || v65 == a1[220]
              || (v129 = (unsigned __int64 *)a1[6],
                  LODWORD(v130) = i,
                  sub_DCB4E0((__int64)(a1 + 190), (__int64)&v129),
                  ++i,
                  *((_DWORD *)a1 + 356) == 9) )
            {
              v66 = __cxa_allocate_exception(0x30u);
              sub_305660(v66, "invalid sort parameter, symbol or ')' expected");
              __cxa_throw(v66, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
            }
            sub_DC0980(a1);
          }
          sub_DC0980(a1);
          sub_DBF660((__int64)a1, "invalid constructor declaration after par, '(' expected");
          sub_DC8C80((__int64)a1, (__int64)&src, v67, v68, v69, v70);
          sub_DBF8C0((__int64)a1, "invalid datatype declaration, ')' expected");
        }
        else
        {
          sub_DC8C80((__int64)a1, (__int64)&src, v10, v11, v12, v13);
        }
        sub_DBF8C0((__int64)a1, "invalid datatype declaration, ')' expected");
        v14 = *a1;
        v15 = *(_QWORD *)(*a1 + 312LL);
        if ( !v15 )
        {
          sub_DFBCB0(*a1);
          v15 = *(_QWORD *)(v14 + 312);
        }
        v16 = a1[196];
        v17 = *((unsigned int *)a1 + 394);
        if ( *(_QWORD *)v127 )
        {
          if ( (v127[0] & 7) == 1 )
            v18 = *(_QWORD *)v127 >> 3;
          else
            LODWORD(v18) = *(_DWORD *)(*(_QWORD *)v127 - 8LL);
        }
        else
        {
          LODWORD(v18) = -1640531495;
        }
        v19 = v17 - 1;
        v20 = 24 * v17;
        v21 = v16 + v20;
        v22 = 24LL * ((unsigned int)v18 & v19);
        v23 = v16 + v22;
        if ( v22 == v20 )
        {
LABEL_69:
          while ( v23 != v16 )
          {
            v49 = *(_DWORD *)(v16 + 4);
            if ( v49 == 2 )
            {
              if ( (_DWORD)v18 == *(_DWORD *)v16 && *(_QWORD *)v127 == *(_QWORD *)(v16 + 8) )
              {
                v24 = v16;
                goto LABEL_26;
              }
            }
            else if ( !v49 )
            {
              break;
            }
            v16 += 24;
          }
LABEL_65:
          v24 = 0;
          goto LABEL_26;
        }
        v24 = v16 + v22;
        while ( 1 )
        {
          v25 = *(_DWORD *)(v24 + 4);
          if ( v25 == 2 )
          {
            if ( (_DWORD)v18 == *(_DWORD *)v24 && *(_QWORD *)v127 == *(_QWORD *)(v24 + 8) )
            {
LABEL_26:
              v26 = sub_DE4160(v15, *(unsigned int *)(v24 + 16), v127, (unsigned int)v145, n);
              v27 = v26;
              if ( v26 )
              {
                v28 = *(_DWORD *)(v26 + 16) + 1;
                *(_DWORD *)(v26 + 16) = v28;
                if ( v6 )
                {
                  sub_DC2790(v121, v6);
                  goto LABEL_29;
                }
                goto LABEL_30;
              }
              if ( v6 )
                sub_DC2790(v121, v6);
LABEL_99:
              v6 = 0;
              goto LABEL_31;
            }
          }
          else if ( !v25 )
          {
            goto LABEL_65;
          }
          v24 += 24;
          if ( v21 == v24 )
            goto LABEL_69;
        }
      }
      sub_DBF660((__int64)a1, "invalid datatype declaration, '(' or ')' expected");
      sub_DBF580(*((unsigned int *)a1 + 356), (__int64)"invalid datatype declaration, symbol (datatype name) expected");
      v55 = (unsigned __int64 *)a1[6];
      if ( *((_DWORD *)a1 + 356) != 9 )
        sub_DC0980(a1);
      v129 = v55;
      *(_QWORD *)v127 = v55;
      v128 = (int)v118;
      sub_DCB4E0(v122, (__int64)v127);
      sub_DC8C80((__int64)a1, (__int64)&src, v56, v57, v58, v59);
      v60 = *a1;
      v61 = *(_QWORD *)(*a1 + 312LL);
      if ( !v61 )
      {
        sub_DFBCB0(*a1);
        v61 = *(_QWORD *)(v60 + 312);
      }
      v62 = sub_DE4160(v61, *((unsigned int *)a1 + 383), &v129, (unsigned int)v145, n);
      v27 = v62;
      if ( !v62 )
      {
        if ( v6 )
          sub_DC2790(v121, v6);
        sub_DBF8C0((__int64)a1, "invalid datatype declaration, ')' expected");
        goto LABEL_99;
      }
      ++*(_DWORD *)(v62 + 16);
      if ( v6 )
        sub_DC2790(v121, v6);
      sub_DBF8C0((__int64)a1, "invalid datatype declaration, ')' expected");
LABEL_29:
      v28 = *(_DWORD *)(v27 + 16);
LABEL_30:
      v6 = v27;
      *(_DWORD *)(v27 + 16) = v28 + 1;
LABEL_31:
      v29 = v135;
      if ( (unsigned int)v135 >= HIDWORD(v135) )
      {
        v50 = (unsigned int)(2 * HIDWORD(v135));
        v51 = (char *)sub_186B270(8 * v50);
        v29 = v135;
        v52 = (int *)ptr;
        v30 = v51;
        if ( (_DWORD)v135 )
        {
          if ( (unsigned int)(v135 - 1) <= 2 || v51 == (char *)ptr + 8 )
          {
            v93 = 0;
            v94 = 8LL * (unsigned int)v135;
            do
            {
              v30[v93 / 8] = *(_QWORD *)&v52[v93 / 4];
              v93 += 8LL;
            }
            while ( v93 != v94 );
          }
          else
          {
            v53 = 0;
            v54 = 16LL * ((unsigned int)v135 >> 1);
            do
            {
              *(__m128i *)&v30[v53 / 8] = _mm_loadu_si128((const __m128i *)&v52[v53 / 4]);
              v53 += 16LL;
            }
            while ( v53 != v54 );
            if ( (v29 & 1) != 0 )
              v30[v29 & 0xFFFFFFFE] = *(_QWORD *)&v52[2 * (v29 & 0xFFFFFFFE)];
          }
        }
        if ( v52 != &v136 && v52 )
        {
          sub_186B220(v52);
          v29 = v135;
        }
        ptr = v30;
        HIDWORD(v135) = v50;
      }
      else
      {
        v30 = ptr;
      }
      v31 = (_BYTE *)n;
      LODWORD(v118) = (_DWORD)v118 + 1;
      v30[v29] = v6;
      LODWORD(v135) = v29 + 1;
      v32 = &v31[8 * (unsigned int)v145];
      if ( v31 < v32 )
      {
        do
        {
          v33 = *(_QWORD *)v31;
          if ( *(_QWORD *)v31 )
          {
            v34 = src;
            if ( (*(_DWORD *)(v33 + 16))-- == 1 )
            {
              v36 = (_QWORD *)v34[10];
              if ( v36 )
              {
                v37 = *((_DWORD *)v36 - 1);
                if ( v37 == *((_DWORD *)v36 - 2) )
                {
                  v46 = (3 * v37 + 1) >> 1;
                  v47 = 8 * v46 + 8;
                  if ( 8 * v37 + 8 >= (unsigned int)v47 || v37 >= v46 )
                  {
                    v116 = (char **)__cxa_allocate_exception(0x28u);
                    sub_DBF430((__int64 *)&v129, "Overflow encountered when expanding vector");
                    *v116 = (char *)off_1C63128;
                    sub_2333C0(v116 + 1, &v129);
                    sub_233E40((__int64)&v129);
                    __cxa_throw(
                      v116,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v120) = (3 * v37 + 1) >> 1;
                  v48 = sub_186B300(v36 - 1, v47);
                  v36 = (_QWORD *)(v48 + 8);
                  v34[10] = v48 + 8;
                  *(_DWORD *)v48 = v120;
                  LODWORD(v48) = *(_DWORD *)(v48 + 4);
                  v40 = &v36[(unsigned int)v48];
                  v39 = v48 + 1;
                }
                else
                {
                  v38 = v37;
                  v39 = v37 + 1;
                  v40 = &v36[v38];
                }
              }
              else
              {
                v71 = (_QWORD *)sub_186B270(0x18u);
                v36 = v71 + 1;
                *v71 = 2;
                v40 = v36;
                v39 = 1;
                v34[10] = v36;
              }
              *v40 = v33;
              *((_DWORD *)v36 - 1) = v39;
            }
            sub_DE3700(v34);
          }
          v31 += 8;
        }
        while ( v31 < v32 );
        v31 = (_BYTE *)n;
      }
      if ( v31 != v146 && v31 )
        break;
      if ( *((_DWORD *)a1 + 356) == 2 )
        goto LABEL_47;
      v7 = *a1;
      v8 = *(void **)(*a1 + 312LL);
      if ( !v8 )
      {
LABEL_68:
        sub_DFBCB0(v7);
        v8 = *(void **)(v7 + 312);
      }
    }
    sub_186B220(v31);
  }
LABEL_47:
  v41 = a1[199];
  if ( v41 && (unsigned int)v118 < *(_DWORD *)(v41 - 4) )
  {
    v115 = __cxa_allocate_exception(0x30u);
    sub_305660(v115, "invalid datatype declaration, too few datatype definitions compared to declared sorts");
    __cxa_throw(v115, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_DC0980(a1);
  sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid datatype declaration");
  v42 = (unsigned int)v135;
  if ( !(_DWORD)v135 )
  {
    if ( *(_BYTE *)(*a1 + 258LL) )
      sub_DBF4C0((_QWORD *)*a1);
    if ( *((_DWORD *)a1 + 356) == 9 )
    {
      if ( !v6 )
      {
LABEL_55:
        v43 = (__int64 *)ptr;
        v44 = (__int64 *)((char *)ptr + 8 * (unsigned int)v135);
        if ( ptr < v44 )
        {
          do
          {
            v45 = *v43++;
            sub_DC2790(v133, v45);
          }
          while ( v43 < v44 );
          v43 = (__int64 *)ptr;
        }
        if ( v43 )
        {
          if ( v43 != (__int64 *)&v136 )
            sub_186B220(v43);
        }
        return;
      }
    }
    else
    {
      sub_DC0980(a1);
      if ( !v6 )
        goto LABEL_55;
    }
    sub_DC2790(v121, v6);
    goto LABEL_55;
  }
  if ( (_DWORD)v135 == 1 )
  {
    v95 = *(_QWORD *)ptr;
    *(_QWORD *)v127 = 0;
    if ( (unsigned __int8)sub_DDFF60(v95, v127) )
    {
      sub_DBF430((__int64 *)&v129, "invalid datatype declaration, unknown sort '");
      sub_180CE20(
        (int)&src,
        (int)v127,
        v103,
        v104,
        v105,
        v106,
        v117,
        v118,
        (int)v119,
        v120,
        v121,
        (int)&v136,
        v122,
        v123,
        v127[0],
        v128,
        (int)v129,
        v130,
        v131,
        v132,
        v133,
        (int)ptr,
        v135,
        v136,
        v137,
        v138,
        v139,
        v140,
        v141,
        v142);
      if ( 0x7FFFFFFFFFFFFFFFLL - v130 >= n )
      {
        v107 = v129;
        v108 = n + v130;
        if ( v129 == &v131 )
          v109 = 15;
        else
          v109 = v131;
        if ( v109 < v108 )
        {
          sub_23A830(&v129, v130, 0, (char *)src, n);
          v107 = v129;
        }
        else if ( n )
        {
          v110 = (char *)v129 + v130;
          if ( n == 1 )
            *v110 = *(_BYTE *)src;
          else
            memcpy(v110, src, n);
          v107 = v129;
        }
        v130 = v108;
        *((_BYTE *)v107 + v108) = 0;
        sub_233E40((__int64)&src);
        v111 = v130;
        if ( v130 != 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v129 == &v131 )
            v112 = 15;
          else
            v112 = v131;
          if ( v112 >= v130 + 1 )
            *((_BYTE *)v129 + v130) = 39;
          else
            sub_23A830(&v129, v130, 0, "'", 1u);
          v130 = v111 + 1;
          *((_BYTE *)v129 + v111 + 1) = 0;
          v113 = (char **)__cxa_allocate_exception(0x30u);
          *v113 = (char *)off_1C63128;
          sub_2333C0(v113 + 1, &v129);
          *v113 = (char *)off_1C64218;
          v113[5] = v126;
          __cxa_throw(v113, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        std::__throw_length_error("basic_string::append");
      }
      std::__throw_length_error("basic_string::append");
    }
    v96 = *(_QWORD *)ptr;
    if ( !*(_QWORD *)(*a1 + 312LL) )
      sub_DFBCB0(*a1);
    sub_DE4A10(v96);
  }
  else
  {
    v72 = *a1;
    v73 = *(_QWORD *)(*a1 + 312LL);
    if ( v73 )
    {
      v74 = *(_QWORD *)(*a1 + 312LL);
    }
    else
    {
      sub_DFBCB0(*a1);
      v74 = *(_QWORD *)(v72 + 312);
      v102 = *a1;
      v73 = *(_QWORD *)(*a1 + 312LL);
      if ( !v73 )
      {
        sub_DFBCB0(*a1);
        v73 = *(_QWORD *)(v102 + 312);
      }
    }
    v75 = sub_DE2CB0(v73, *((unsigned int *)a1 + 383), (unsigned int)v42, ptr);
    v76 = v75;
    if ( v75 )
      ++*(_DWORD *)(v75 + 16);
    *(_QWORD *)v127 = 0;
    if ( !*(_QWORD *)(*a1 + 312LL) )
      sub_DFBCB0(*a1);
    if ( !(unsigned __int8)sub_DE05C0(v76, v127) )
    {
      sub_DBF430((__int64 *)&v129, "invalid datatype declaration, unknown sort '");
      sub_180CE20(
        (int)&src,
        (int)v127,
        v97,
        v98,
        v99,
        v100,
        v117,
        v118,
        (int)v119,
        v120,
        v121,
        (int)&v136,
        v122,
        v123,
        v127[0],
        v128,
        (int)v129,
        v130,
        v131,
        v132,
        v133,
        (int)ptr,
        v135,
        v136,
        v137,
        v138,
        v139,
        v140,
        v141,
        v142);
      sub_DBFB20(&v129, src, n);
      sub_233E40((__int64)&src);
      sub_2B3190((__int64)&v129, "'");
      v101 = (char **)__cxa_allocate_exception(0x30u);
      *v101 = (char *)off_1C63128;
      sub_2333C0(v101 + 1, &v129);
      *v101 = (char *)off_1C64218;
      v101[5] = v125;
      __cxa_throw(v101, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( !*(_QWORD *)(*a1 + 312LL) )
    {
      v118 = (void *)*a1;
      sub_DFBCB0(*a1);
    }
    sub_DE42B0(v76);
    sub_E00860(*a1, v76);
    sub_DC2790(v74, v76);
  }
  v77 = 8 * v42;
  v78 = 0;
  if ( HIBYTE(v120) )
  {
    while ( 1 )
    {
      v79 = *(_QWORD *)((char *)ptr + v78);
      *(_QWORD *)v127 = 0;
      if ( (unsigned __int8)sub_DDFFC0(v79, v127) )
        break;
      v78 += 8;
      if ( v77 == v78 )
        goto LABEL_130;
    }
LABEL_147:
    sub_DBF430((__int64 *)&v129, "invalid datatype declaration, repeated accessor identifier '");
    sub_180CE20(
      (int)&src,
      (int)v127,
      v84,
      v85,
      v86,
      v87,
      v117,
      v118,
      (int)v119,
      v120,
      v121,
      (int)&v136,
      v122,
      v123,
      v127[0],
      v128,
      (int)v129,
      v130,
      v131,
      v132,
      v133,
      (int)ptr,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
    if ( 0x7FFFFFFFFFFFFFFFLL - v130 >= n )
    {
      v88 = v129;
      v89 = n + v130;
      if ( v129 == &v131 )
        v90 = 15;
      else
        v90 = v131;
      if ( v90 < v89 )
      {
        sub_23A830(&v129, v130, 0, (char *)src, n);
        v88 = v129;
      }
      else if ( n )
      {
        v91 = (char *)v129 + v130;
        if ( n == 1 )
          *v91 = *(_BYTE *)src;
        else
          memcpy(v91, src, n);
        v88 = v129;
      }
      v130 = v89;
      *((_BYTE *)v88 + v89) = 0;
      sub_233E40((__int64)&src);
      sub_2B3190((__int64)&v129, "'");
      v92 = (char **)__cxa_allocate_exception(0x30u);
      *v92 = (char *)off_1C63128;
      sub_2333C0(v92 + 1, &v129);
      *v92 = (char *)off_1C64218;
      v92[5] = v124;
      __cxa_throw(v92, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    std::__throw_length_error("basic_string::append");
  }
  do
  {
    v83 = *(_QWORD *)((char *)ptr + v78);
    *(_QWORD *)v127 = 0;
    if ( (unsigned __int8)sub_DDFFC0(v83, v127) )
      goto LABEL_147;
    sub_DFAB80(*a1, v83 + 24, v83);
    v78 += 8;
  }
  while ( v78 != v77 );
LABEL_130:
  if ( *(_BYTE *)(*a1 + 258LL) )
    sub_DBF4C0((_QWORD *)*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  if ( v6 )
    sub_DC2790(v121, v6);
  v80 = (__int64 *)ptr;
  v81 = (__int64 *)((char *)ptr + 8 * (unsigned int)v135);
  if ( ptr < v81 )
  {
    do
    {
      v82 = *v80++;
      sub_DC2790(v133, v82);
    }
    while ( v80 < v81 );
    v80 = (__int64 *)ptr;
  }
  if ( v80 && v80 != (__int64 *)&v136 )
    sub_186B220(v80);
}

