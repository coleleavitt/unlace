__int64 *__fastcall sub_52D980(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v8; // rax
  _DWORD *v9; // r8
  unsigned int v10; // r9d
  int v11; // esi
  _DWORD *v12; // rdx
  _DWORD *v13; // rax
  bool v14; // cf
  _QWORD *v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // rcx
  unsigned int *v18; // rsi
  int v19; // eax
  __int64 v20; // r15
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int v25; // eax
  _DWORD *v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // r10d
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // r13
  int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rdx
  _DWORD *v37; // rdx
  _DWORD *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // r12
  unsigned int v44; // esi
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r10
  size_t v49; // rcx
  __int64 *v50; // r13
  __int64 v51; // rsi
  bool v52; // zf
  int v53; // r12d
  __int64 v54; // rax
  _QWORD *v55; // r8
  _QWORD *v56; // rbp
  __int64 v57; // r15
  __int64 v58; // r13
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 *v61; // r15
  __int64 v62; // rdi
  __int64 v63; // r13
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 *v67; // rcx
  __int64 *v68; // r15
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rax
  unsigned int v72; // edx
  size_t v73; // rsi
  unsigned int v74; // r15d
  unsigned int *v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rax
  unsigned int v78; // edx
  size_t v79; // rsi
  unsigned int v80; // r15d
  unsigned int *v81; // rax
  unsigned int v82; // eax
  __int64 v83; // r15
  __int64 v84; // rcx
  __int64 v85; // rax
  int v86; // edi
  unsigned int v87; // r15d
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rt0
  __int64 v92; // rax
  __int64 v93; // rax
  char **v94; // r12
  char **exception; // r12
  char **v96; // r12
  int sb; // [rsp+0h] [rbp-98h]
  void *sc; // [rsp+0h] [rbp-98h]
  unsigned int s; // [rsp+0h] [rbp-98h]
  void *sd; // [rsp+0h] [rbp-98h]
  _DWORD *sa; // [rsp+0h] [rbp-98h]
  __int64 *se; // [rsp+0h] [rbp-98h]
  unsigned int v103; // [rsp+8h] [rbp-90h]
  _QWORD *v104; // [rsp+8h] [rbp-90h]
  _DWORD *v105; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+10h] [rbp-88h]
  size_t na; // [rsp+10h] [rbp-88h]
  __int64 v108; // [rsp+18h] [rbp-80h]
  __int64 v109; // [rsp+20h] [rbp-78h]
  __int64 v110; // [rsp+28h] [rbp-70h]
  __int64 v111[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = *(_QWORD *)(a2 + 8);
  a1[1] = 0;
  *a1 = v8;
  if ( !*(_DWORD *)(a3 + 24) && !*(_DWORD *)(a4 + 24) )
    return a1;
  v9 = *(_DWORD **)sub_62B1C0(*(_QWORD *)(a2 + 16), a3, a4);
  if ( !v9 )
    goto LABEL_6;
  v10 = *(v9 - 1);
  v11 = 32 * v10;
  if ( !(32 * v10) || !v10 )
    goto LABEL_6;
  v25 = *v9 & 1;
  if ( v25 )
  {
    v28 = 0;
  }
  else
  {
    v26 = v9;
    while ( !*v26 )
    {
      v25 += 32;
      ++v26;
      if ( v25 == v11 )
        goto LABEL_6;
    }
    if ( v11 == v25 )
      goto LABEL_6;
    v27 = v25 >> 5;
    v28 = (unsigned int)v27 < v10 ? ((v9[v27] & 1) == 0) + v25 : v25 + 1;
    while ( 1 )
    {
      v29 = v28 >> 5;
      if ( (unsigned int)v29 < v10 && (v9[v29] & (1 << (v28 & 0x1F))) != 0 )
        break;
      if ( (v28 & 0x1F) == 0 )
        break;
      if ( ++v28 == v11 )
        goto LABEL_6;
    }
    if ( v28 == v11 )
    {
LABEL_6:
      v12 = *(_DWORD **)(v6 + 16);
      v13 = *(_DWORD **)(v5 + 16);
      if ( v12 == v13 )
      {
        v16 = 1;
        goto LABEL_108;
      }
      v14 = *v12 < *v13;
      v15 = (_QWORD *)a1[1];
      if ( !v14 )
      {
        v90 = v5;
        v5 = v6;
        v6 = v90;
      }
      v16 = 1;
      if ( v15 )
        goto LABEL_10;
      goto LABEL_62;
    }
  }
  v30 = 0;
  if ( v28 )
    v30 = v28;
  v31 = v28 + 1;
  if ( v31 != v11 )
    goto LABEL_33;
LABEL_52:
  v32 = v31 >> 5;
  if ( v31 >> 5 >= v10 )
    goto LABEL_57;
LABEL_53:
  v33 = v32;
  while ( 1 )
  {
    v34 = v9[v33];
    if ( (v34 & (1 << v31)) != 0 )
      goto LABEL_48;
    if ( v11 == v31 )
      goto LABEL_57;
    while ( !v34 )
    {
      ++v32;
      v31 += 32;
LABEL_39:
      if ( v11 == v31 )
        goto LABEL_57;
      v34 = v9[v32];
    }
    if ( v31 == v11 )
      goto LABEL_57;
    v35 = v31 >> 5;
    if ( (unsigned int)v35 >= v10 || (v9[v35] & (1 << v31)) == 0 )
      break;
LABEL_46:
    v36 = v31 >> 5;
    if ( ((unsigned int)v36 >= v10 || (v9[v36] & (1 << (v31 & 0x1F))) == 0) && (v31 & 0x1F) != 0 )
      break;
LABEL_48:
    if ( v11 == v31 )
      goto LABEL_57;
    if ( v30 < v31 )
      v30 = v31;
    if ( ++v31 == v11 )
      goto LABEL_52;
LABEL_33:
    while ( 1 )
    {
      v32 = v31 >> 5;
      if ( v31 >> 5 < v10 )
      {
        v33 = v32;
        if ( (v9[v32] & (1 << (v31 & 0x1F))) != 0 )
          break;
      }
      if ( (v31 & 0x1F) == 0 )
      {
        if ( v32 >= v10 )
          goto LABEL_39;
        goto LABEL_53;
      }
      if ( v11 == ++v31 )
      {
        v32 = *(v9 - 1) & 0x7FFFFFF;
        if ( v32 < v10 )
          goto LABEL_53;
        goto LABEL_57;
      }
    }
  }
  if ( v11 != ++v31 )
    goto LABEL_46;
LABEL_57:
  v37 = *(_DWORD **)(v6 + 16);
  v38 = *(_DWORD **)(v5 + 16);
  v16 = v30 + 1;
  if ( v37 != v38 )
  {
    if ( *v37 >= *v38 )
    {
      v39 = v5;
      v5 = v6;
      v6 = v39;
    }
    goto LABEL_60;
  }
  if ( v30 != -1 )
  {
LABEL_108:
    v71 = sub_186B270(0x10u) + 8;
    *(_QWORD *)(v71 - 8) = 2;
    sa = (_DWORD *)v71;
    while ( 1 )
    {
      v76 = *(_DWORD *)(v71 - 8);
      if ( v76 >= v16 )
        break;
      v72 = (3 * v76 + 1) >> 1;
      v73 = 4 * v72 + 8;
      v74 = v72;
      if ( 4 * v76 + 8 >= (unsigned int)v73 || v76 >= v72 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v111, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v111);
        sub_233E40((__int64)v111);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v75 = (unsigned int *)sub_186B300(sa - 2, v73);
      *v75 = v74;
      sa = v75 + 2;
      v71 = (__int64)(v75 + 2);
    }
    *(sa - 1) = v16;
    memset(sa, 255, 4LL * v16);
    v77 = sub_186B270(0x10u) + 8;
    *(_QWORD *)(v77 - 8) = 2;
    v105 = (_DWORD *)v77;
    while ( 1 )
    {
      v82 = *(_DWORD *)(v77 - 8);
      if ( v82 >= v16 )
        break;
      v78 = (3 * v82 + 1) >> 1;
      v79 = 4 * v78 + 8;
      v80 = v78;
      if ( 4 * v82 + 8 >= (unsigned int)v79 || v82 >= v78 )
      {
        v96 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v111, "Overflow encountered when expanding vector");
        *v96 = (char *)off_1C63128;
        sub_2333C0(v96 + 1, v111);
        sub_233E40((__int64)v111);
        __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v81 = (unsigned int *)sub_186B300(v105 - 2, v79);
      *v81 = v80;
      v105 = v81 + 2;
      v77 = (__int64)(v81 + 2);
    }
    *(v105 - 1) = v16;
    memset(v105, 255, 4LL * v16);
    v65 = *(unsigned int *)(v6 + 24);
    if ( (_DWORD)v65 )
      goto LABEL_119;
    sub_186B220(v105 - 2);
    v93 = v5;
    v5 = v6;
    v6 = v93;
LABEL_128:
    sub_186B220(sa - 2);
    goto LABEL_60;
  }
  v65 = *(unsigned int *)(v6 + 24);
  sa = nullptr;
  v16 = 0;
  v105 = nullptr;
  if ( (_DWORD)v65 )
  {
LABEL_119:
    v110 = v65;
    v83 = 0;
    while ( 1 )
    {
      v109 = *(_QWORD *)(v6 + 8 * v83 + 32);
      na = *(_QWORD *)(v5 + 8 * v83 + 32);
      v108 = sub_15D1F10(v109);
      if ( v108 != sub_15D1F10(na) )
      {
        v87 = *(_DWORD *)sub_15D1F10(v109);
        if ( v87 < *(_DWORD *)sub_15D1F10(na) )
          goto LABEL_125;
        goto LABEL_124;
      }
      v84 = *(unsigned int *)(v109 + 16);
      v85 = *(unsigned int *)(na + 16);
      v86 = sa[v85];
      if ( v105[v84] != v86 )
        break;
      sa[v84] = v83;
      v105[v85] = v83++;
      if ( v83 == v110 )
        goto LABEL_124;
    }
    if ( v105[v84] >= v86 )
    {
LABEL_124:
      v88 = v5;
      v5 = v6;
      v6 = v88;
    }
LABEL_125:
    if ( v105 )
      sub_186B220(v105 - 2);
    if ( sa )
      goto LABEL_128;
LABEL_60:
    v15 = (_QWORD *)a1[1];
    if ( v15 )
    {
LABEL_10:
      v17 = *((unsigned int *)v15 - 1);
      if ( v16 >= (unsigned int)v17 )
      {
        if ( (unsigned int)v17 >= v16 )
          goto LABEL_135;
        do
        {
          LODWORD(v20) = *((_DWORD *)v15 - 1);
          if ( (_DWORD)v20 == *((_DWORD *)v15 - 2) )
          {
            v21 = (unsigned int)(3 * v20 + 1) >> 1;
            v22 = 8 * v21 + 8;
            if ( 8 * (int)v20 + 8 >= (unsigned int)v22 || (unsigned int)v20 >= v21 )
            {
              v94 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v111, "Overflow encountered when expanding vector");
              *v94 = (char *)off_1C63128;
              sub_2333C0(v94 + 1, v111);
              sub_233E40((__int64)v111);
              __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            sb = v17;
            v23 = (unsigned int *)sub_186B300(v15 - 1, v22);
            v15 = v23 + 2;
            LODWORD(v17) = sb;
            a1[1] = (__int64)(v23 + 2);
            *v23 = (unsigned int)(3 * v20 + 1) >> 1;
            v20 = v23[1];
            v18 = &v23[2 * v20 + 2];
            v19 = v20 + 1;
          }
          else
          {
            v18 = (unsigned int *)&v15[(unsigned int)v20];
            v19 = v20 + 1;
          }
LABEL_14:
          LODWORD(v17) = v17 + 1;
          *(_QWORD *)v18 = 0;
          *((_DWORD *)v15 - 1) = v19;
        }
        while ( (unsigned int)v17 < v16 );
        goto LABEL_72;
      }
LABEL_100:
      v67 = &v15[v17];
      v68 = &v15[v16];
      if ( v68 >= v67 )
        goto LABEL_71;
      do
      {
        v69 = *v68;
        if ( *v68 )
        {
          v70 = *a1;
          v52 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v52 )
          {
            se = v67;
            sub_15D7BC0(v70, v69);
            v67 = se;
          }
        }
        ++v68;
      }
      while ( v68 < v67 );
      v15 = (_QWORD *)a1[1];
      if ( v15 )
      {
LABEL_71:
        *((_DWORD *)v15 - 1) = v16;
        LODWORD(v20) = v16 - 1;
        goto LABEL_72;
      }
      v41 = (_QWORD *)(v5 + 32);
      LODWORD(v20) = -1;
      v89 = 8LL * *(unsigned int *)(v5 + 24);
      v43 = (_QWORD *)(v5 + 32 + v89);
      if ( v89 )
      {
LABEL_73:
        v44 = 0;
        do
        {
          while ( 1 )
          {
            v45 = (unsigned int)(v20 - *(_DWORD *)(*v41 + 16LL));
            if ( !v15[v45] )
              break;
            if ( v43 == ++v41 )
              goto LABEL_82;
          }
          n = (size_t)v41;
          sc = *(void **)(a2 + 8);
          v46 = sub_15D1F10(*v41);
          v103 = v44 + 1;
          v47 = sub_15DB5C0(sc, v44, v46);
          v15 = (_QWORD *)a1[1];
          v48 = *a1;
          v49 = n;
          v50 = &v15[v45];
          if ( v47 )
            ++*(_DWORD *)(v47 + 8);
          v51 = *v50;
          if ( *v50 )
          {
            v52 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v52 )
            {
              sd = (void *)v47;
              sub_15D7BC0(v48, v51);
              v15 = (_QWORD *)a1[1];
              v49 = n;
              v47 = (__int64)sd;
            }
          }
          v41 = (_QWORD *)(v49 + 8);
          *v50 = v47;
          v44 = v103;
        }
        while ( v43 != v41 );
LABEL_82:
        if ( v15 )
          goto LABEL_85;
        v53 = -1;
        goto LABEL_86;
      }
LABEL_134:
      v44 = 0;
      v53 = -1;
      goto LABEL_86;
    }
    if ( v16 )
    {
LABEL_62:
      v40 = (_QWORD *)sub_186B270(0x18u);
      v15 = v40 + 1;
      *v40 = 2;
      LODWORD(v17) = 0;
      LODWORD(v20) = 0;
      a1[1] = (__int64)(v40 + 1);
      v18 = (unsigned int *)(v40 + 1);
      v19 = 1;
      goto LABEL_14;
    }
LABEL_133:
    v41 = (_QWORD *)(v5 + 32);
    v15 = nullptr;
    LODWORD(v20) = -1;
    v92 = 8LL * *(unsigned int *)(v5 + 24);
    v43 = (_QWORD *)(v5 + 32 + v92);
    if ( v92 )
      goto LABEL_73;
    goto LABEL_134;
  }
  v15 = (_QWORD *)a1[1];
  if ( !v15 )
  {
    v91 = v6;
    v6 = v5;
    v5 = v91;
    goto LABEL_133;
  }
  v17 = *((unsigned int *)v15 - 1);
  v66 = v6;
  v6 = v5;
  v5 = v66;
  if ( (_DWORD)v17 )
    goto LABEL_100;
LABEL_135:
  LODWORD(v20) = v17 - 1;
LABEL_72:
  v41 = (_QWORD *)(v5 + 32);
  v42 = 8LL * *(unsigned int *)(v5 + 24);
  v43 = (_QWORD *)(v5 + 32 + v42);
  if ( v42 )
    goto LABEL_73;
  v44 = 0;
LABEL_85:
  v53 = *((_DWORD *)v15 - 1) - 1;
LABEL_86:
  v54 = 8LL * *(unsigned int *)(v6 + 24);
  v55 = (_QWORD *)(v6 + 32 + v54);
  if ( v54 )
  {
    v56 = (_QWORD *)(v6 + 32);
    while ( 1 )
    {
      v57 = (unsigned int)(v53 - *(_DWORD *)(*v56 + 16LL));
      if ( !v15[v57] )
      {
        v104 = v55;
        v58 = *(_QWORD *)(a2 + 8);
        v59 = sub_15D1F10(*v56);
        s = v44 + 1;
        v60 = sub_15DB5C0(v58, v44, v59);
        v61 = (__int64 *)(a1[1] + v57 * 8);
        v62 = *a1;
        v63 = v60;
        v55 = v104;
        if ( v60 )
          ++*(_DWORD *)(v60 + 8);
        v64 = *v61;
        if ( *v61 )
        {
          v52 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v52 )
          {
            sub_15D7BC0(v62, v64);
            v55 = v104;
          }
        }
        *v61 = v63;
        v44 = s;
      }
      if ( v55 == ++v56 )
        break;
      v15 = (_QWORD *)a1[1];
    }
  }
  return a1;
}

