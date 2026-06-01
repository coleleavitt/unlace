void __fastcall sub_BA76C0(__int64 *a1, __m128 a2, __m128 a3, __m128 a4)
{
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbp
  char **v8; // rbp
  char **v9; // rbp
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  unsigned int v15; // ebp
  __int64 v16; // r13
  _QWORD *v17; // rdi
  __int64 v18; // r13
  _QWORD *v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rbp
  unsigned __int64 *v22; // rbp
  unsigned __int64 *v23; // r14
  unsigned __int64 v24; // r13
  unsigned __int64 *v25; // rax
  char v26; // dl
  __int64 *v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 *v31; // r13
  __int64 v32; // r14
  _DWORD *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _DWORD *v43; // r12
  __int64 v44; // rbp
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // r8d
  __int64 v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 ***v55; // rax
  __int64 **v56; // rbx
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 **v59; // r14
  __int64 *v60; // rbp
  __int64 v61; // r12
  __int64 v62; // rax
  unsigned int v63; // r13d
  size_t v64; // rsi
  unsigned int *v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rax
  _QWORD *v68; // rdi
  _QWORD *v69; // rdx
  unsigned __int64 *v70; // r14
  unsigned __int64 v71; // r13
  unsigned int v72; // ecx
  size_t v73; // rsi
  unsigned int v74; // r14d
  unsigned int *v75; // rax
  unsigned int v76; // eax
  __int64 v77; // r13
  _QWORD *v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rdx
  _QWORD *v81; // rax
  unsigned int v82; // eax
  unsigned int v83; // edx
  size_t v84; // rsi
  unsigned int v85; // r14d
  unsigned int *v86; // rax
  __int64 v87; // r13
  __int64 v88; // rdx
  _QWORD *v89; // rdi
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 i; // rsi
  char v94; // dl
  unsigned int v95; // r8d
  size_t v96; // rsi
  unsigned int *v97; // rax
  unsigned int v98; // eax
  __int64 v99; // rsi
  unsigned int v100; // r14d
  unsigned int v101; // ebx
  size_t v102; // rsi
  unsigned int *v103; // rdx
  unsigned int v104; // edx
  __int64 v105; // rdx
  __int64 v106; // rsi
  void *v107; // rdi
  __int64 v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  unsigned int v111; // edx
  __int64 v112; // rcx
  int v113; // edx
  unsigned int v114; // ebp
  unsigned int v115; // ecx
  unsigned int *v116; // rdx
  __int64 v117; // rcx
  _QWORD *v118; // rax
  __int64 v119; // [rsp+0h] [rbp-88h]
  __int64 v120; // [rsp+0h] [rbp-88h]
  unsigned int v121; // [rsp+0h] [rbp-88h]
  _QWORD *v122; // [rsp+0h] [rbp-88h]
  unsigned int v123; // [rsp+0h] [rbp-88h]
  unsigned int v124; // [rsp+0h] [rbp-88h]
  __int64 *v125; // [rsp+8h] [rbp-80h]
  unsigned int v126; // [rsp+8h] [rbp-80h]
  unsigned int v127; // [rsp+10h] [rbp-78h]
  _DWORD **v128; // [rsp+10h] [rbp-78h]
  __int64 v129; // [rsp+18h] [rbp-70h]
  __int64 v130; // [rsp+18h] [rbp-70h]
  _DWORD **v131; // [rsp+20h] [rbp-68h]
  char *v132[11]; // [rsp+30h] [rbp-58h] BYREF

  v11 = (__int64 *)a1[65];
  if ( !v11 )
    goto LABEL_30;
  v12 = *((unsigned int *)v11 - 1);
  if ( &v11[v12] == v11 )
    goto LABEL_29;
  v125 = &v11[v12];
  v119 = (__int64)(a1 + 37);
  do
  {
    v13 = *v11;
    v14 = (_QWORD *)a1[41];
    v15 = *(_DWORD *)(*v11 + 24);
    if ( v14 )
    {
      v16 = *((unsigned int *)v14 - 1);
      if ( (unsigned int)v16 >= v15 )
        goto LABEL_6;
    }
    else
    {
      if ( !v15 )
        goto LABEL_8;
      v16 = 0;
      v91 = (_QWORD *)sub_186B270(0x18u);
      v14 = v91 + 1;
      *v91 = 2;
      a1[41] = (__int64)(v91 + 1);
    }
    while ( 1 )
    {
      v76 = *((_DWORD *)v14 - 2);
      if ( v76 >= v15 )
        break;
      v72 = (3 * v76 + 1) >> 1;
      v73 = 8 * v72 + 8;
      v74 = v72;
      if ( 8 * v76 + 8 >= (unsigned int)v73 || v76 >= v72 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v132);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v75 = (unsigned int *)sub_186B300(v14 - 1, v73);
      v14 = v75 + 2;
      *v75 = v74;
      a1[41] = (__int64)(v75 + 2);
    }
    v77 = 8 * v16;
    *((_DWORD *)v14 - 1) = v15;
    v78 = &v14[(unsigned __int64)v77 / 8];
    v79 = v15;
    v15 = *(_DWORD *)(v13 + 24);
    v80 = 8 * v79;
    if ( v77 == v80 )
    {
LABEL_6:
      v17 = (_QWORD *)a1[42];
      if ( v17 )
        goto LABEL_7;
      goto LABEL_96;
    }
    memset(v78, 0, v80 - v77);
    v17 = (_QWORD *)a1[42];
    if ( v17 )
    {
LABEL_7:
      v18 = *((unsigned int *)v17 - 1);
      if ( (unsigned int)v18 < v15 )
        goto LABEL_101;
LABEL_8:
      v19 = (_QWORD *)a1[44];
      v20 = *(_DWORD *)(v13 + 28);
      if ( !v19 )
        goto LABEL_104;
      goto LABEL_9;
    }
LABEL_96:
    if ( !v15 )
      goto LABEL_8;
    v18 = 0;
    v81 = (_QWORD *)sub_186B270(0x18u);
    v17 = v81 + 1;
    *v81 = 2;
    v82 = *(_DWORD *)v81;
    for ( a1[42] = (__int64)v17; v82 < v15; v82 = *((_DWORD *)v17 - 2) )
    {
      v83 = (3 * v82 + 1) >> 1;
      v84 = 8 * v83 + 8;
      v85 = v83;
      if ( 8 * v82 + 8 >= (unsigned int)v84 || v82 >= v83 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v132);
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v86 = (unsigned int *)sub_186B300(v17 - 1, v84);
      v17 = v86 + 2;
      *v86 = v85;
      a1[42] = (__int64)(v86 + 2);
LABEL_101:
      ;
    }
    v87 = 8 * v18;
    *((_DWORD *)v17 - 1) = v15;
    v88 = 8LL * v15;
    v89 = &v17[(unsigned __int64)v87 / 8];
    if ( v87 == v88 )
      goto LABEL_8;
    memset(v89, 0, v88 - v87);
    v19 = (_QWORD *)a1[44];
    v20 = *(_DWORD *)(v13 + 28);
    if ( !v19 )
    {
LABEL_104:
      if ( !v20 )
        goto LABEL_10;
      v21 = 0;
      v90 = (_QWORD *)sub_186B270(0x58u);
      v19 = v90 + 1;
      *v90 = 2;
      a1[44] = (__int64)(v90 + 1);
      goto LABEL_79;
    }
LABEL_9:
    v21 = *((unsigned int *)v19 - 1);
    if ( (unsigned int)v21 >= v20 )
      goto LABEL_10;
LABEL_79:
    while ( 1 )
    {
      v66 = *((_DWORD *)v19 - 2);
      if ( v66 >= v20 )
        break;
      v63 = (3 * v66 + 1) >> 1;
      v64 = 40 * v63 + 8;
      if ( 40 * v66 + 8 >= (unsigned int)v64 || v66 >= v63 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v132);
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (unsigned int *)sub_186B300(v19 - 1, v64);
      v19 = v65 + 2;
      *v65 = v63;
      a1[44] = (__int64)(v65 + 2);
    }
    *((_DWORD *)v19 - 1) = v20;
    v67 = 5LL * v20;
    v68 = &v19[5 * v21];
    v69 = &v19[v67];
    if ( 5 * v21 == v67 )
    {
LABEL_10:
      v22 = *(unsigned __int64 **)(v13 + 40);
      if ( !*(_BYTE *)(v13 + 20) )
        goto LABEL_82;
      goto LABEL_11;
    }
    memset(v68, 0, 8 * ((unsigned __int64)((char *)(v69 - 5) - (char *)v68) >> 3) + 40);
    v22 = *(unsigned __int64 **)(v13 + 40);
    if ( !*(_BYTE *)(v13 + 20) )
    {
LABEL_82:
      if ( !v22 )
        goto LABEL_27;
      v70 = &v22[*((unsigned int *)v22 - 1)];
      if ( v70 == v22 )
        goto LABEL_26;
      while ( 1 )
      {
        v71 = *v22;
        if ( v71 == *(_QWORD *)(v71 + 24)
          && ((unsigned __int8)sub_8EAFC0(a1[37]) || !(unsigned __int8)sub_BA46A0(v119, v13, v71)) )
        {
          return;
        }
        if ( v70 == ++v22 )
          goto LABEL_25;
      }
    }
LABEL_11:
    if ( !v22 )
      goto LABEL_27;
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v23 == v22 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( (*(_BYTE *)(*v22 + 44) & 1) == 0 && v24 == *(_QWORD *)(v24 + 24) )
          break;
        if ( v23 == ++v22 )
          goto LABEL_20;
      }
      if ( (unsigned __int8)sub_8EAFC0(a1[37]) || !(unsigned __int8)sub_BA46A0(v119, v13, v24) )
      {
        v92 = *(_QWORD *)(v13 + 40);
        if ( v92 )
        {
          for ( i = v92 + 8LL * *(unsigned int *)(v92 - 4); v92 != i; v92 += 8 )
          {
            v94 = *(_BYTE *)(*(_QWORD *)v92 + 44LL);
            if ( (v94 & 1) != 0 )
              *(_BYTE *)(*(_QWORD *)v92 + 44LL) = v94 & 0xFE;
          }
        }
        return;
      }
      ++v22;
      *(_BYTE *)(v24 + 44) |= 1u;
    }
    while ( v23 != v22 );
LABEL_20:
    v25 = *(unsigned __int64 **)(v13 + 40);
    if ( v25 )
    {
      v22 = &v25[*((unsigned int *)v25 - 1)];
      if ( v25 == v22 )
        goto LABEL_26;
      do
      {
        v26 = *(_BYTE *)(*v25 + 44);
        if ( (v26 & 1) != 0 )
          *(_BYTE *)(*v25 + 44) = v26 & 0xFE;
        ++v25;
      }
      while ( v22 != v25 );
LABEL_25:
      v22 = *(unsigned __int64 **)(v13 + 40);
      if ( v22 )
LABEL_26:
        *((_DWORD *)v22 - 1) = 0;
    }
LABEL_27:
    ++v11;
  }
  while ( v125 != v11 );
  v11 = (__int64 *)a1[65];
  if ( v11 )
LABEL_29:
    *((_DWORD *)v11 - 1) = 0;
LABEL_30:
  v27 = (__int64 *)a1[66];
  if ( !v27 )
    return;
  v28 = *((_DWORD *)v27 - 1);
  if ( !v28 )
    return;
  v29 = a1[64];
  if ( !v29 )
  {
    v31 = &v27[2 * v28];
    while ( 1 )
    {
LABEL_45:
      if ( (unsigned __int8)sub_8E6FA0(a1[1]) )
      {
LABEL_46:
        v42 = a1[64];
        if ( !v42 || (v131 = (_DWORD **)(v42 + 8LL * *(unsigned int *)(v42 - 4)), (_DWORD **)v42 == v131) )
        {
LABEL_72:
          v27 = (__int64 *)a1[66];
          goto LABEL_73;
        }
        v128 = (_DWORD **)a1[64];
        while ( 2 )
        {
          v43 = *v128;
          v44 = **v128 + 0x80000000;
          v45 = *(_QWORD *)(a1[63] + 8 * v44);
          v46 = a1[41];
          v47 = *(unsigned int *)(v45 + 24);
          if ( v46 )
          {
            if ( *(_DWORD *)(v46 - 4) >= (unsigned int)v47 )
            {
              v48 = a1[42];
              if ( v48 )
                goto LABEL_52;
LABEL_123:
              v49 = 0;
              goto LABEL_53;
            }
LABEL_122:
            sub_BA8300(a1 + 41, v47, 0, v37, v40, v41);
            v48 = a1[42];
            v47 = *(unsigned int *)(v45 + 24);
            if ( !v48 )
              goto LABEL_123;
LABEL_52:
            v49 = *(_DWORD *)(v48 - 4);
LABEL_53:
            if ( v49 < (unsigned int)v47 )
              sub_BA8300(a1 + 42, v47, 0, v37, v40, v41);
          }
          else if ( (_DWORD)v47 )
          {
            goto LABEL_122;
          }
          v50 = a1[44];
          v51 = *(_DWORD *)(v45 + 28);
          if ( v50 )
          {
            if ( *(_DWORD *)(v50 - 4) >= v51 )
              goto LABEL_57;
            v123 = *(_DWORD *)(v50 - 4);
            v100 = *(_DWORD *)(v45 + 28);
          }
          else
          {
            if ( !v51 )
              goto LABEL_57;
            v100 = *(_DWORD *)(v45 + 28);
            v50 = sub_186B270(0x58u) + 8;
            *(_QWORD *)(v50 - 8) = 2;
            a1[44] = v50;
            v123 = 0;
          }
          while ( 1 )
          {
            v104 = *(_DWORD *)(v50 - 8);
            if ( v104 >= v100 )
              break;
            v101 = (3 * v104 + 1) >> 1;
            v102 = 40 * v101 + 8;
            if ( 40 * v104 + 8 >= (unsigned int)v102 || v104 >= v101 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_151CF2(v132);
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v132);
              sub_233E40((__int64)v132);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v103 = (unsigned int *)sub_186B300((void *)(v50 - 8), v102);
            v50 = (__int64)(v103 + 2);
            a1[44] = (__int64)(v103 + 2);
            *v103 = v101;
          }
          *(_DWORD *)(v50 - 4) = v100;
          v105 = 40LL * v100;
          v106 = 40LL * v123;
          v107 = (void *)(v50 + v106);
          v108 = v105 + v50;
          if ( v106 != v105 )
            memset(
              v107,
              0,
              8
            * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v108 - 40 - (_QWORD)v107) >> 3)) & 0x1FFFFFFFFFFFFFFFLL)
             + 5));
LABEL_57:
          v52 = a1[1];
          v53 = *(_QWORD *)(v52 + 8696);
          v54 = *v43 + 0x80000000;
          if ( v53 && (unsigned int)v54 < *(_DWORD *)(v53 - 4) )
            v55 = (__int64 ***)(v53 + 8 * v54);
          else
            v55 = (__int64 ***)(v52 + 8704);
          v56 = *v55;
          if ( *v55 )
          {
            v57 = *((unsigned int *)v56 - 1);
            if ( v56 != &v56[v57] )
            {
              v120 = v45;
              v58 = a1[1];
              v59 = &v56[v57];
              v130 = v44;
              while ( 1 )
              {
                v60 = *v56;
                v61 = **v56;
                if ( !(unsigned int)sub_8E7030(v58)
                  || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v58 + 7488) + 56LL))(
                       *(_QWORD *)(v58 + 7488),
                       v61) )
                {
                  sub_BA46A0((__int64)(a1 + 37), v120, (unsigned __int64)v60);
                }
                if ( v59 == ++v56 )
                  break;
                v58 = a1[1];
              }
              v45 = v120;
              v44 = v130;
            }
          }
          *(_QWORD *)(a1[63] + 8 * v44) = 0;
          v62 = *(_QWORD *)(v45 + 40);
          if ( v62 )
            sub_186B220((void *)(v62 - 8));
          sub_186B220((void *)v45);
          if ( v131 == ++v128 )
            goto LABEL_72;
          continue;
        }
      }
      v32 = v27[1];
      v33 = *(_DWORD **)(*(_QWORD *)(v32 + 32) + 16LL);
      v34 = *(_QWORD *)(a1[1] + 8696);
      v35 = *v33 + 0x80000000;
      if ( v34 )
      {
        if ( (unsigned int)v35 < *(_DWORD *)(v34 - 4) )
        {
          v36 = *(_QWORD *)(v34 + 8 * v35);
          if ( v36 )
          {
            if ( *(_DWORD *)(v36 - 4) )
              break;
          }
        }
      }
LABEL_44:
      v27 += 2;
      if ( v31 == v27 )
        goto LABEL_46;
    }
    v37 = (_QWORD *)a1[63];
    v38 = (unsigned int)(*v33 - 0x7FFFFFFF);
    v129 = *v27;
    if ( v37 )
    {
      v127 = *((_DWORD *)v37 - 1);
      if ( v127 >= (unsigned int)v38 )
      {
LABEL_41:
        v39 = v37[v35];
        if ( v39 )
        {
          if ( *(_DWORD *)(v39 + 16) == *(_DWORD *)(*(_QWORD *)(v32 + 32) + 24LL) )
            sub_BA1130((__int64)(a1 + 15), v39, v129, v32, 0, 1, a2, a3, a4);
        }
        else
        {
          *(_QWORD *)(a1[63] + 8 * v35) = sub_B9F800(
                                            (__int64)(a1 + 15),
                                            v129,
                                            v32,
                                            0,
                                            0,
                                            *(double *)a2.m128_u64,
                                            *(double *)a3.m128_u64,
                                            a4);
          v110 = (_QWORD *)a1[64];
          if ( v110 )
          {
            v111 = *((_DWORD *)v110 - 1);
            if ( v111 == *((_DWORD *)v110 - 2) )
            {
              v114 = (3 * v111 + 1) >> 1;
              v115 = 8 * v114 + 8;
              if ( 8 * v111 + 8 >= v115 || v111 >= v114 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_151CF2(v132);
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v132);
                sub_233E40((__int64)v132);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v116 = (unsigned int *)sub_186B300(v110 - 1, v115);
              v110 = v116 + 2;
              v117 = v116[1];
              *v116 = v114;
              a1[64] = (__int64)(v116 + 2);
              LODWORD(v116) = v117;
              v37 = &v110[v117];
              v113 = (_DWORD)v116 + 1;
            }
            else
            {
              v112 = v111;
              v113 = v111 + 1;
              v37 = &v110[v112];
            }
          }
          else
          {
            v118 = (_QWORD *)sub_186B270(0x18u);
            v113 = 1;
            *v118 = 2;
            v110 = v118 + 1;
            a1[64] = (__int64)v110;
            v37 = v110;
          }
          *v37 = v33;
          *((_DWORD *)v110 - 1) = v113;
        }
        goto LABEL_44;
      }
    }
    else
    {
      v124 = *v33 - 0x7FFFFFFF;
      v109 = (_QWORD *)sub_186B270(0x18u);
      v127 = 0;
      v38 = v124;
      *v109 = 2;
      v37 = v109 + 1;
      a1[63] = (__int64)(v109 + 1);
    }
    while ( 1 )
    {
      v98 = *((_DWORD *)v37 - 2);
      if ( v98 >= (unsigned int)v38 )
        break;
      v95 = (3 * v98 + 1) >> 1;
      v96 = 8 * v95 + 8;
      if ( 8 * v98 + 8 >= (unsigned int)v96 || v98 >= v95 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v132);
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v126 = (3 * v98 + 1) >> 1;
      v121 = v38;
      v97 = (unsigned int *)sub_186B300(v37 - 1, v96);
      v40 = v126;
      v38 = v121;
      v37 = v97 + 2;
      a1[63] = (__int64)(v97 + 2);
      *v97 = v126;
    }
    *((_DWORD *)v37 - 1) = v38;
    v99 = v127;
    if ( v99 != v38 )
    {
      v122 = v37;
      memset(&v37[v99], 0, 8 * v38 - v99 * 8);
      v37 = v122;
    }
    goto LABEL_41;
  }
  *(_DWORD *)(v29 - 4) = 0;
  v30 = 2LL * *((unsigned int *)v27 - 1);
  v31 = &v27[v30];
  if ( v27 != &v27[v30] )
    goto LABEL_45;
LABEL_73:
  if ( v27 )
    *((_DWORD *)v27 - 1) = 0;
}

