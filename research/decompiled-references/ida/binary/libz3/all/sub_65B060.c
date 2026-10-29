__int64 __fastcall sub_65B060(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  _QWORD *v13; // rcx
  _QWORD *v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // r8
  __int64 v33; // r15
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // r14
  unsigned int v40; // r15d
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 *v43; // r15
  __int64 v44; // rdx
  unsigned __int64 v45; // rdi
  __int64 v46; // r8
  char *v47; // r14
  int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // r15
  int v51; // eax
  int v52; // esi
  __int64 v53; // rcx
  char *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 result; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  _QWORD *v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  _QWORD *v66; // rcx
  _DWORD *v67; // rax
  __int64 *v68; // rax
  __int64 *k; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // r14
  int v74; // edx
  __int64 v75; // rax
  char *v76; // r14
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rsi
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rdx
  _DWORD *v84; // rcx
  __int64 *v85; // rax
  __int64 *i; // rcx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 v90; // r14
  __int64 v91; // rax
  __int64 v92; // r15
  __int64 v93; // rsi
  _DWORD *v94; // rdx
  __int64 v95; // rax
  unsigned int v96; // r15d
  size_t v97; // rsi
  unsigned int *v98; // rax
  __int64 v99; // rcx
  _QWORD *v100; // rax
  __int64 v101; // rax
  char **exception; // r14
  int v103; // [rsp+40h] [rbp-C0h]
  __int64 v104; // [rsp+48h] [rbp-B8h]
  __int64 v105; // [rsp+50h] [rbp-B0h]
  __int64 v107; // [rsp+60h] [rbp-A0h]
  int v109; // [rsp+70h] [rbp-90h]
  int v110[2]; // [rsp+70h] [rbp-90h]
  int v111; // [rsp+70h] [rbp-90h]
  __int64 v112; // [rsp+78h] [rbp-88h]
  unsigned int j; // [rsp+78h] [rbp-88h]
  int v114[2]; // [rsp+78h] [rbp-88h]
  int v115[2]; // [rsp+78h] [rbp-88h]
  int v116; // [rsp+78h] [rbp-88h]
  int v117; // [rsp+78h] [rbp-88h]
  int v118[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v119; // [rsp+98h] [rbp-68h]
  __m128 v120[5]; // [rsp+B0h] [rbp-50h] BYREF

  v104 = *a1;
  v119 = *a1;
  v4 = *a2;
  *(_QWORD *)v118 = 0;
  if ( v4 )
  {
    ++*(_DWORD *)(v4 + 8);
    *(_QWORD *)v118 = v4;
  }
  v5 = a1[9];
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = a1[10];
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = (_QWORD *)a1[21];
  v8 = v7;
  if ( v7 )
  {
    v9 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
    if ( (unsigned __int64)v7 >= v9 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[20];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( (unsigned __int64)++v8 >= v9 )
          goto LABEL_14;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( (unsigned __int64)v8 < v9 );
LABEL_14:
    v8 = (_QWORD *)a1[21];
    if ( v8 )
LABEL_15:
      *((_DWORD *)v8 - 1) = 0;
  }
  v13 = (_QWORD *)a1[23];
  v14 = v13;
  if ( v13 )
  {
    v15 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
    if ( (unsigned __int64)v13 >= v15 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[22];
          v12 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( (unsigned __int64)++v14 >= v15 )
          goto LABEL_23;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v15 );
LABEL_23:
    v14 = (_QWORD *)a1[23];
    if ( v14 )
LABEL_24:
      *((_DWORD *)v14 - 1) = 0;
  }
  sub_1580F60((_DWORD)a1 + 88, 1, (unsigned int)v118, (_DWORD)a1 + 80, (_DWORD)a1 + 72, 1, 1);
  v18 = *a3;
  if ( !*a3 )
    goto LABEL_44;
  v19 = a1[10];
  v18 = *(_QWORD *)v118;
  if ( !v19 )
  {
    if ( *(_QWORD *)v118 )
      ++*(_DWORD *)(*(_QWORD *)v118 + 8LL);
    goto LABEL_156;
  }
  v20 = *(unsigned int *)(v19 - 4);
  if ( (_DWORD)v20 )
  {
    v21 = sub_15DB6A0(*a1, 0, v20, v19, a1[9], *(_QWORD *)v118, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
    v18 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v19 = a1[10];
    v22 = *a2;
    if ( !v19 )
      goto LABEL_157;
    goto LABEL_31;
  }
  if ( !*(_QWORD *)v118 )
  {
LABEL_156:
    v22 = *a2;
    goto LABEL_157;
  }
  ++*(_DWORD *)(*(_QWORD *)v118 + 8LL);
  v22 = *a2;
LABEL_31:
  if ( *(_DWORD *)(v19 - 4) )
  {
    v23 = sub_15DEBE0(*a1);
    v24 = *a1;
    v25 = *a3;
    v26 = sub_15DE0E0(*a1, *a3, v23);
    v27 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    if ( *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)(v25 + 24) - 1) + 32) == *(_QWORD *)(v26
                                                                                              + 8LL
                                                                                              * (unsigned int)(*(_DWORD *)(v26 + 24) - 1)
                                                                                              + 32) )
    {
      ++*(_DWORD *)(v25 + 8);
      v117 = *(_DWORD *)(v26 + 8);
      *(_DWORD *)(v26 + 8) = v117 - 1;
      if ( v117 == 1 )
        sub_15D7BC0(v24, v26);
      v27 = v25;
    }
    v28 = *a3;
    *a3 = v27;
    if ( v28 )
    {
      v12 = (*(_DWORD *)(v28 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v24, v28);
    }
    v29 = *a2;
    if ( *a2 != v18 )
    {
      if ( v29 )
      {
        v30 = a2[1];
        v12 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v12 )
LABEL_41:
          sub_15D7BC0(v30, v29);
      }
LABEL_42:
      *a2 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      goto LABEL_44;
    }
    goto LABEL_44;
  }
LABEL_157:
  if ( v18 != v22 )
  {
    v88 = sub_15DE370(*a1);
    v89 = *a1;
    v90 = *a3;
    v91 = sub_15DE0E0(*a1, *a3, v88);
    v92 = v91;
    if ( v91 )
      ++*(_DWORD *)(v91 + 8);
    if ( *(_QWORD *)(v90 + 8LL * (unsigned int)(*(_DWORD *)(v90 + 24) - 1) + 32) == *(_QWORD *)(v91
                                                                                              + 8LL
                                                                                              * (unsigned int)(*(_DWORD *)(v91 + 24) - 1)
                                                                                              + 32) )
    {
      ++*(_DWORD *)(v90 + 8);
      v116 = *(_DWORD *)(v91 + 8);
      *(_DWORD *)(v91 + 8) = v116 - 1;
      if ( v116 == 1 )
        sub_15D7BC0(v89, v91);
      v92 = v90;
    }
    v93 = *a3;
    *a3 = v92;
    if ( v93 )
    {
      v12 = (*(_DWORD *)(v93 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v89, v93);
    }
    v29 = *a2;
    if ( *a2 != v18 )
    {
      if ( v29 )
      {
        v30 = a2[1];
        v12 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v12 )
          goto LABEL_41;
      }
      goto LABEL_42;
    }
  }
LABEL_44:
  v31 = *(_QWORD *)v118;
  if ( !*(_QWORD *)v118 )
    BUG();
  ++*(_DWORD *)(*(_QWORD *)v118 + 8LL);
  if ( !*(_WORD *)(v31 + 4) )
  {
    do
    {
      v67 = *(_DWORD **)(*(_QWORD *)(v31 + 16) + 24LL);
      if ( !v67 || *v67 || v67[1] != 9 || *(_DWORD *)(v31 + 24) != 2 )
        break;
      v61 = *(_QWORD *)(v31 + 32);
      *(_QWORD *)v115 = *(_QWORD *)(v31 + 40);
      if ( v61 )
        ++*(_DWORD *)(v61 + 8);
      v62 = (_QWORD *)a1[21];
      if ( v62 )
      {
        v63 = *((_DWORD *)v62 - 1);
        if ( v63 == *((_DWORD *)v62 - 2) )
        {
          v96 = (3 * v63 + 1) >> 1;
          v97 = 8 * v96 + 8;
          if ( 8 * v63 + 8 >= (unsigned int)v97 || v63 >= v96 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v120, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v120);
            sub_233E40((__int64)v120);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v98 = (unsigned int *)sub_186B300(v62 - 1, v97);
          v99 = v98[1];
          v62 = v98 + 2;
          *v98 = v96;
          a1[21] = v98 + 2;
          LODWORD(v98) = v99;
          v66 = &v62[v99];
          v65 = (_DWORD)v98 + 1;
        }
        else
        {
          v64 = v63;
          v65 = v63 + 1;
          v66 = &v62[v64];
        }
      }
      else
      {
        v100 = (_QWORD *)sub_186B270(0x18u);
        v62 = v100 + 1;
        *v100 = 2;
        v65 = 1;
        a1[21] = v62;
        v66 = v62;
      }
      *v66 = v61;
      *((_DWORD *)v62 - 1) = v65;
      if ( *(_QWORD *)v115 )
        ++*(_DWORD *)(*(_QWORD *)v115 + 8LL);
      v12 = (*(_DWORD *)(v31 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v104, v31);
      v31 = *(_QWORD *)v115;
    }
    while ( !*(_WORD *)(*(_QWORD *)v115 + 4LL) );
  }
  v105 = (__int64)(a1 + 20);
  sub_15EE300(a1 + 20);
  v112 = *a3;
  if ( *a3 )
  {
    v32 = a1[21];
    v33 = *a1;
    if ( v32 && (v34 = *(_DWORD *)(v32 - 4)) != 0 )
    {
      if ( v34 == 1 )
      {
        v35 = sub_15E1B70(*a1);
      }
      else
      {
        sub_15E1AF0(*a1);
        v35 = sub_15E1B70(v33);
      }
      v36 = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
    }
    else
    {
      ++*(_DWORD *)(v31 + 8);
      v36 = v31;
    }
    v37 = sub_15DE370(v33);
    v112 = v37;
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    if ( v36 )
    {
      v12 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v33, v36);
    }
  }
  v38 = (__int64 *)a1[21];
  if ( v38 )
  {
    v39 = a1 + 22;
    if ( *((_DWORD *)v38 - 1) != 1 )
      goto LABEL_60;
    v83 = *v38;
    if ( *(_WORD *)(*v38 + 4) )
      goto LABEL_60;
    v84 = *(_DWORD **)(*(_QWORD *)(v83 + 16) + 24LL);
    if ( !v84 || *v84 || v84[1] != 6 )
      goto LABEL_60;
    sub_658D20((__int64)(a1 + 24), (char **)a1 + 30, v83);
    v85 = (__int64 *)a1[30];
    for ( i = &v85[*((unsigned int *)a1 + 62)]; i != v85; *(_BYTE *)(v87 + 6) &= ~1u )
      v87 = *v85++;
    v38 = (__int64 *)a1[21];
    v39 = a1 + 22;
    *((_DWORD *)a1 + 62) = 0;
    if ( v38 )
    {
LABEL_60:
      v40 = 0;
      do
      {
        if ( v40 >= *((_DWORD *)v38 - 1) )
          break;
        v120[0] = _mm_loadh_ps((const double *)a1 + 20);
        sub_659560((__int64)a1, (__int64 **)v120);
        v38 = (__int64 *)a1[21];
        ++v40;
      }
      while ( v38 );
    }
    sub_6581A0(v120, a1, v112, v105, v31, v39);
  }
  else
  {
    v39 = a1 + 22;
    sub_6581A0(v120, a1, v112, v105, v31, a1 + 22);
  }
  v107 = v120[0].m128_u64[0];
  if ( v112 )
  {
    v41 = v120[0].m128_u64[1];
    v103 = *(_DWORD *)(v112 + 8);
    *(_DWORD *)(v112 + 8) = v103 - 1;
    if ( v103 == 1 )
      sub_15D7BC0(v41, v112);
  }
  v42 = a1[21];
  for ( j = 0; v42; ++j )
  {
    if ( j >= *(_DWORD *)(v42 - 4) )
      break;
    v43 = (__int64 *)(v42 + 8LL * j);
    v44 = *v43;
    if ( *(_WORD *)(*v43 + 4) == 2 && !*(_DWORD *)(v44 + 16) )
    {
      sub_658D20((__int64)(a1 + 24), (char **)a1 + 30, v44);
      v68 = (__int64 *)a1[30];
      for ( k = &v68[*((unsigned int *)a1 + 62)]; k != v68; *(_BYTE *)(v70 + 6) &= ~1u )
        v70 = *v68++;
      *((_DWORD *)a1 + 62) = 0;
      v42 = a1[21];
    }
  }
  sub_6581A0(v120, a1, v107, v105, v31, v39);
  *(_QWORD *)v114 = v120[0].m128_u64[0];
  if ( v107 && (v45 = v120[0].m128_u64[1], v109 = *(_DWORD *)(v107 + 8), *(_DWORD *)(v107 + 8) = v109 - 1, v109 == 1) )
  {
    sub_15D7BC0(v45, v107);
    v46 = a1[21];
    v47 = (char *)*a1;
    if ( !v46 )
    {
LABEL_114:
      v50 = v31;
      v72 = *(_DWORD *)(v31 + 8) + 1;
      *(_DWORD *)(v31 + 8) = v72;
      v52 = v72 + 1;
      *(_DWORD *)(v31 + 8) = v72;
      if ( v72 )
        goto LABEL_78;
      goto LABEL_115;
    }
  }
  else
  {
    v46 = a1[21];
    v47 = (char *)*a1;
    if ( !v46 )
      goto LABEL_114;
  }
  v48 = *(_DWORD *)(v46 - 4);
  if ( !v48 )
    goto LABEL_114;
  if ( v48 == 1 )
  {
    v49 = sub_15E1B70((int)v47);
    v50 = v49;
    if ( v49 )
      goto LABEL_77;
LABEL_109:
    v53 = a1[10];
    v54 = (char *)*a1;
    if ( !v53 )
    {
      v50 = 0;
      goto LABEL_81;
    }
    v55 = *(unsigned int *)(v53 - 4);
    v50 = 0;
    if ( !(_DWORD)v55 )
    {
      v53 = 0;
      v50 = 0;
      goto LABEL_81;
    }
    goto LABEL_111;
  }
  sub_15E1AF0((int)v47);
  v49 = sub_15E1B70((int)v47);
  v50 = v49;
  if ( !v49 )
    goto LABEL_109;
LABEL_77:
  v51 = *(_DWORD *)(v49 + 8) + 1;
  *(_DWORD *)(v50 + 8) = v51;
  v52 = v51 + 1;
  *(_DWORD *)(v50 + 8) = v51;
  if ( v51 )
  {
LABEL_78:
    v53 = a1[10];
    v54 = (char *)*a1;
    if ( !v53 )
      goto LABEL_80;
    v55 = *(unsigned int *)(v53 - 4);
    if ( !(_DWORD)v55 )
      goto LABEL_80;
    goto LABEL_111;
  }
LABEL_115:
  sub_15D7BC0(v47, v50);
  v53 = a1[10];
  v54 = (char *)*a1;
  if ( !v53 || (v55 = *(unsigned int *)(v53 - 4), !(_DWORD)v55) )
  {
    v52 = *(_DWORD *)(v50 + 8) + 1;
LABEL_80:
    *(_DWORD *)(v50 + 8) = v52;
    v53 = v50;
    goto LABEL_81;
  }
LABEL_111:
  v71 = sub_15DB6A0(v54, 0, v55, v53, a1[9], v50, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
  v53 = v71;
  if ( v71 )
    ++*(_DWORD *)(v71 + 8);
LABEL_81:
  v56 = *a2;
  *a2 = v53;
  if ( v56 )
  {
    v12 = (*(_DWORD *)(v56 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v54, v56);
  }
  result = (__int64)a3;
  v58 = *a3;
  if ( *a3 )
  {
    v59 = a1[10];
    if ( !v59 || !*(_DWORD *)(v59 - 4) )
    {
      v73 = *(_QWORD *)v114;
      if ( !*(_QWORD *)v114 )
      {
LABEL_123:
        v76 = (char *)*a1;
        *(_QWORD *)v110 = v58;
        v77 = sub_15DE0E0(*a1, v58, *(_QWORD *)v114);
        v78 = *(_QWORD *)v110;
        v79 = v77;
        if ( v77 )
          ++*(_DWORD *)(v77 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v110 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v110 + 24LL) - 1) + 32) == *(_QWORD *)(v77 + 8LL * (unsigned int)(*(_DWORD *)(v77 + 24) - 1) + 32) )
        {
          ++*(_DWORD *)(*(_QWORD *)v110 + 8LL);
          v12 = (*(_DWORD *)(v77 + 8))-- == 1;
          if ( v12 )
          {
            sub_15D7BC0(v76, v77);
            v78 = *(_QWORD *)v110;
          }
          v79 = v78;
        }
        result = (__int64)a3;
        v80 = *a3;
        *a3 = v79;
        if ( v80 )
        {
          v12 = (*(_DWORD *)(v80 + 8))-- == 1;
          if ( v12 )
            result = sub_15D7BC0(v76, v80);
        }
        goto LABEL_129;
      }
      v74 = *(_DWORD *)(*(_QWORD *)v114 + 8LL);
      v75 = *(_QWORD *)v114;
LABEL_120:
      *(_DWORD *)(v75 + 8) = v74;
      if ( !v74 )
        sub_15D7BC0(v104, v75);
      *(_QWORD *)v114 = v73;
      v58 = *a3;
      goto LABEL_123;
    }
    v60 = *(_QWORD *)(*(_QWORD *)v114 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v114 + 24LL) - 1) + 32);
    if ( !*(_WORD *)(v60 + 4) )
    {
      v94 = *(_DWORD **)(*(_QWORD *)(v60 + 16) + 24LL);
      if ( v94 )
      {
        if ( !*v94 )
        {
          if ( v94[1] != 2 )
            goto LABEL_172;
          if ( (unsigned __int8)sub_15D2CB0(*a1, *(_QWORD *)(v60 + 32)) )
          {
            v95 = sub_15DE750(*a1);
            goto LABEL_174;
          }
          v101 = *(_QWORD *)(*(_QWORD *)v114 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v114 + 24LL) - 1) + 32);
          if ( !*(_WORD *)(v101 + 4) )
          {
            v94 = *(_DWORD **)(*(_QWORD *)(v101 + 16) + 24LL);
            if ( v94 )
            {
              if ( !*v94 )
              {
LABEL_172:
                if ( v94[1] == 10 )
                {
                  v95 = sub_15DE7C0(*a1);
LABEL_174:
                  v73 = v95;
                  if ( v95 )
                    ++*(_DWORD *)(v95 + 8);
                  v74 = *(_DWORD *)(*(_QWORD *)v114 + 8LL) - 1;
                  v75 = *(_QWORD *)v114;
                  goto LABEL_120;
                }
              }
            }
          }
        }
      }
    }
    sub_1872CE0("");
    sub_1873130(114, 321);
  }
LABEL_129:
  if ( *(_QWORD *)v114 )
  {
    v111 = *(_DWORD *)(*(_QWORD *)v114 + 8LL);
    result = (unsigned int)(v111 - 1);
    *(_DWORD *)(*(_QWORD *)v114 + 8LL) = result;
    if ( v111 == 1 )
    {
      result = sub_15D7BC0(v104, *(_QWORD *)v114);
      v12 = (*(_DWORD *)(v31 + 8))-- == 1;
      if ( !v12 )
        goto LABEL_132;
LABEL_150:
      result = sub_15D7BC0(v104, v31);
      goto LABEL_132;
    }
  }
  v12 = (*(_DWORD *)(v31 + 8))-- == 1;
  if ( v12 )
    goto LABEL_150;
LABEL_132:
  if ( v50 )
  {
    v12 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v104, v50);
  }
  if ( v18 )
  {
    v12 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v104, v18);
  }
  v81 = *(_QWORD *)v118;
  if ( *(_QWORD *)v118 )
  {
    v82 = v119;
    v12 = (*(_DWORD *)(*(_QWORD *)v118 + 8LL))-- == 1;
    if ( v12 )
      return sub_15D7BC0(v82, v81);
  }
  return result;
}

