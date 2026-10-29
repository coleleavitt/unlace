__int64 __fastcall set_idcv_slice(__int64 a1, __int64 a2, int a3, char *a4, unsigned __int64 a5, char *a6)
{
  int v7; // r13d
  char v8; // r15
  char v9; // al
  unsigned int v11; // r15d
  char v12; // al
  __int64 v13; // rax
  int v14; // eax
  size_t v15; // rax
  size_t v16; // r14
  size_t v17; // r12
  _QWORD *v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rax
  int v21; // r8d
  unsigned int v22; // r15d
  unsigned __int64 v23; // r13
  bool v24; // zf
  size_t v25; // rbp
  size_t v26; // r8
  __int64 v27; // rsi
  size_t v28; // r8
  size_t v29; // rbp
  const void *v30; // r15
  unsigned __int64 v31; // r14
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  size_t v34; // r9
  unsigned __int64 v35; // rdx
  size_t v36; // r13
  unsigned int v37; // eax
  unsigned int v38; // edx
  __int64 v39; // rax
  size_t v40; // rax
  size_t v41; // r15
  size_t v42; // rdx
  size_t v43; // rdx
  __int64 v44; // rax
  size_t v45; // rdx
  __int64 v46; // rdi
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  int *v49; // rbp
  __int64 v50; // r12
  _QWORD *v51; // r14
  __int64 v52; // r15
  __int64 v53; // r12
  char *v54; // rbx
  _QWORD *v55; // r13
  char *v56; // r14
  char *v57; // rbp
  _QWORD *v58; // rbx
  const char *v59; // rdi
  const char *v60; // rsi
  int v61; // eax
  _QWORD *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  int *v65; // r12
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rdx
  _BYTE *v69; // r12
  _BYTE *v70; // rax
  char *v71; // rcx
  int v72; // r9d
  __int64 v73; // r15
  __int64 v74; // rbx
  char *v75; // r13
  char *v76; // r14
  char *v77; // r12
  const char *v78; // rdi
  char *v79; // rbp
  const char *v80; // rsi
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rdx
  char *v84; // rdi
  char v85; // al
  __int64 v86; // rdx
  __int64 v87; // rax
  int *v88; // r14
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  int *v92; // r15
  unsigned int v93; // r9d
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rdx
  char *v97; // r12
  char *v98; // r8
  char *v99; // rdi
  char v100; // al
  __int64 v101; // rdx
  char v102; // r8
  int v103; // r9d
  size_t v104; // rbp
  _QWORD *v105; // rax
  __int64 v106; // rbp
  __int64 v107; // rbx
  void *v108; // rdi
  void *v109; // rdi
  char *v110; // r14
  _QWORD *v111; // r14
  char v112; // [rsp+0h] [rbp-168h]
  size_t v113; // [rsp+8h] [rbp-160h]
  unsigned __int64 v114; // [rsp+8h] [rbp-160h]
  size_t v115; // [rsp+8h] [rbp-160h]
  __int64 v116; // [rsp+10h] [rbp-158h]
  __int64 v117; // [rsp+10h] [rbp-158h]
  int v119; // [rsp+18h] [rbp-150h]
  size_t v120; // [rsp+18h] [rbp-150h]
  size_t v121; // [rsp+18h] [rbp-150h]
  char *s1; // [rsp+20h] [rbp-148h]
  char *s1b; // [rsp+20h] [rbp-148h]
  char *s1a; // [rsp+20h] [rbp-148h]
  unsigned int v125; // [rsp+28h] [rbp-140h]
  __int64 v126; // [rsp+28h] [rbp-140h]
  int v127; // [rsp+30h] [rbp-138h]
  int v128; // [rsp+4Ch] [rbp-11Ch]
  unsigned int v129; // [rsp+5Ch] [rbp-10Ch] BYREF
  char *v130; // [rsp+60h] [rbp-108h] BYREF
  __int128 v131; // [rsp+68h] [rbp-100h]
  __int64 v132; // [rsp+80h] [rbp-E8h] BYREF
  int v133; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v134; // [rsp+90h] [rbp-D8h]
  int *v135; // [rsp+98h] [rbp-D0h]
  int *v136; // [rsp+A0h] [rbp-C8h]
  __int64 v137; // [rsp+A8h] [rbp-C0h]
  char *s2; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v139; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 *v140; // [rsp+C8h] [rbp-A0h]
  __int128 *v141; // [rsp+D0h] [rbp-98h]
  __int64 v142; // [rsp+D8h] [rbp-90h]
  char v143[8]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v144; // [rsp+E8h] [rbp-80h]
  __int64 v145; // [rsp+F8h] [rbp-70h]
  char s[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v147; // [rsp+128h] [rbp-40h]

  v7 = a2;
  v147 = __readfsqword(0x28u);
  v8 = a5;
  while ( 1 )
  {
    v9 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 == 7 )
    {
      v20 = *(_QWORD *)(a1 + 16);
      v117 = a1;
      v21 = v8 & 1;
      if ( !v20 )
      {
        v22 = 0;
        v23 = 0;
        goto LABEL_24;
      }
      v37 = v20 - 1;
      if ( v7 >= 0 || (v7 += v37, v7 >= 0) )
      {
        v22 = v37;
        if ( v7 <= v37 )
          v22 = v7;
        if ( !v21 )
        {
LABEL_54:
          if ( a3 >= 0 )
          {
            v23 = v22;
            if ( a3 <= v37 )
              v37 = a3;
            if ( v37 >= v22 )
              v22 = v37;
            goto LABEL_24;
          }
          goto LABEL_46;
        }
        if ( (int)(v22 + 1) < 0 )
        {
          a3 = 0x80000000;
          v22 = 0x7FFFFFFF;
LABEL_46:
          v23 = v22;
          v38 = v37 + a3;
          if ( (int)(v37 + a3) >= 0 )
          {
            if ( v38 > v37 )
              v38 = v37;
            if ( v38 >= v22 )
              v22 = v38;
          }
          goto LABEL_24;
        }
        v23 = v22++;
      }
      else
      {
        v22 = 0;
        if ( !v21 )
          goto LABEL_54;
        v23 = 0;
        v22 = 1;
      }
      if ( v37 < v22 )
      {
        if ( (unsigned int)v23 >= v37 )
          v37 = v23;
        v22 = v37;
      }
LABEL_24:
      v24 = *a4 == 7;
      v143[0] = 2;
      v145 = 0;
      v144 = 0;
      if ( !v24 )
      {
        v19 = copy_idcv(v143);
        if ( v19 || (v19 = idcv_string(v143)) != 0 )
        {
          free_idcv(v143);
          return v19;
        }
        a4 = v143;
      }
      v25 = *((_QWORD *)a4 + 2);
      v26 = v22 - (unsigned int)v23;
      if ( v25 )
      {
        --v25;
        v27 = *(_QWORD *)(a1 + 8);
        if ( v25 >= v26 )
        {
          v113 = v22 - (unsigned int)v23;
          v119 = v22 - v23;
          memcpy((void *)(v27 + v23), *((const void **)a4 + 1), v113);
          v28 = v113;
          if ( v113 >= v25 )
          {
LABEL_39:
            free_idcv(v143);
            return 0;
          }
          v29 = v25 - v113;
          if ( *((_QWORD *)a4 + 2) || (v30 = &unk_2395E97, v119) )
            v30 = (const void *)(v113 + *((_QWORD *)a4 + 1));
          v31 = *(_QWORD *)(a1 + 16);
          v32 = *(_QWORD *)(a1 + 8);
          v33 = *(_QWORD *)(a1 + 24);
          if ( v31 )
          {
            --v31;
            v34 = v29 + v31;
            v35 = v29 + v31 + 1;
            if ( v33 >= v35 )
              goto LABEL_36;
            v46 = a1 + 8;
          }
          else
          {
            v35 = v29 + 1;
            v34 = v29;
            v46 = a1 + 8;
            if ( v33 >= v29 + 1 )
            {
              *(_QWORD *)(v117 + 16) = v35;
              *(_BYTE *)(v32 + v29) = 0;
LABEL_38:
              memmove((void *)(v31 + *(_QWORD *)(v117 + 8)), v30, v29);
              goto LABEL_39;
            }
          }
          s1b = (char *)v113;
          v120 = v34;
          v114 = v35;
          v32 = qvector_reserve(v46, v32, v35, 1);
          v28 = (size_t)s1b;
          v34 = v120;
          v35 = v114;
          *(_QWORD *)(v117 + 8) = v32;
LABEL_36:
          v36 = v28 + v23;
          *(_QWORD *)(v117 + 16) = v35;
          *(_BYTE *)(v32 + v34) = 0;
          if ( v36 < v31 )
          {
            v47 = v31;
            v31 = v36;
            memmove((void *)(v36 + *(_QWORD *)(v117 + 8) + v29), (const void *)(v36 + *(_QWORD *)(v117 + 8)), v47 - v36);
          }
          goto LABEL_38;
        }
      }
      else
      {
        if ( (_DWORD)v23 == v22 )
          goto LABEL_39;
        v27 = *(_QWORD *)(a1 + 8);
      }
      v39 = *(_QWORD *)(a1 + 16);
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v23 < v40 )
        {
          v41 = v23;
          v42 = v23 + v26 - v25;
          if ( v42 < v40 )
          {
            v115 = v26;
            v41 = v40 - v26 + v25;
            memmove((void *)(v27 + v23), (const void *)(v27 + v42), v40 - (v23 + v26) + v25);
            v26 = v115;
            v27 = *(_QWORD *)(a1 + 8);
          }
          v43 = v41 + 1;
          v44 = v27;
          if ( *(_QWORD *)(a1 + 24) < v41 + 1 )
          {
            v121 = v26;
            v44 = qvector_reserve(a1 + 8, v27, v43, 1);
            v26 = v121;
            v43 = v41 + 1;
            *(_QWORD *)(a1 + 8) = v44;
          }
          *(_QWORD *)(a1 + 16) = v43;
          *(_BYTE *)(v44 + v41) = 0;
          v27 = *(_QWORD *)(a1 + 8);
        }
      }
      v45 = v25;
      if ( v26 <= v25 )
        v45 = v26;
      memcpy((void *)(v27 + v23), *((const void **)a4 + 1), v45);
      goto LABEL_39;
    }
    if ( v9 != 10 )
      break;
    a2 = 0;
    a1 = deref_idcv(a1, 0);
    if ( !a1 )
      return get_qerrno(0);
  }
  v116 = a1;
  if ( v9 != 5 )
    return set_qerrno(1568, a2);
  v11 = v8 & 1;
  if ( v11 )
  {
    qsnprintf((int)s, 32, (int)"%u", v7, (unsigned __int8)a5, (int)a6, v112);
    return (unsigned int)set_idcv_attr();
  }
  v133 = 0;
  v135 = &v133;
  v136 = &v133;
  v12 = *a4;
  v134 = 0;
  v137 = 0;
  if ( v12 != 5 )
  {
    if ( v12 != 7 )
    {
      v19 = set_qerrno(1568, a2);
      sub_778060(v134);
      return v19;
    }
    v13 = *((_QWORD *)a4 + 2);
    if ( v13 )
    {
      a5 = 0;
      do
      {
        if ( a5 >= v13 - 1 )
          break;
        v48 = v134;
        v49 = &v133;
        if ( !v134 )
          goto LABEL_109;
        do
        {
          if ( *(_DWORD *)(v48 + 32) < v11 )
          {
            v48 = *(_QWORD *)(v48 + 24);
          }
          else
          {
            v49 = (int *)v48;
            v48 = *(_QWORD *)(v48 + 16);
          }
        }
        while ( v48 );
        if ( v49 == &v133 || v11 < v49[8] )
        {
LABEL_109:
          s1a = (char *)a5;
          v64 = operator new(0x48u);
          *(_DWORD *)(v64 + 32) = v11;
          *(_BYTE *)(v64 + 40) = 2;
          v65 = (int *)v64;
          v66 = v64 + 40;
          *(_QWORD *)(v64 + 64) = 0;
          *(_OWORD *)(v64 + 48) = 0;
          v67 = sub_770900(&v132, (__int64)v49, v11);
          a5 = (unsigned __int64)s1a;
          v49 = (int *)v67;
          if ( v68 )
          {
            v49 = v65;
            std::_Rb_tree_insert_and_rebalance();
            a5 = (unsigned __int64)s1a;
            ++v137;
          }
          else if ( v65 )
          {
            free_idcv(v66);
            operator delete(v65, 0x48u);
            a5 = (unsigned __int64)s1a;
          }
        }
        v69 = &unk_2395E97;
        if ( *((_QWORD *)a4 + 2) | a5 )
          v69 = (_BYTE *)(*((_QWORD *)a4 + 1) + a5);
        free_idcv(v49 + 10);
        *((_BYTE *)v49 + 40) = 7;
        *(_OWORD *)(v49 + 14) = 0;
        *((_QWORD *)v49 + 6) = 0;
        v70 = (_BYTE *)qvector_reserve(v49 + 12, 0, 2, 1);
        *((_QWORD *)v49 + 6) = v70;
        ++v11;
        *((_QWORD *)v49 + 7) = 2;
        a5 = (int)v11;
        *v70 = *v69;
        *(_BYTE *)(*((_QWORD *)v49 + 6) + 1LL) = 0;
        v13 = *((_QWORD *)a4 + 2);
      }
      while ( v13 );
      goto LABEL_114;
    }
    goto LABEL_10;
  }
  v50 = *((_QWORD *)a4 + 1);
  s2 = nullptr;
  v139 = 0;
  s2 = (char *)qvector_reserve(&s2, 0, 2, 1);
  *(_QWORD *)&v139 = 2;
  *s2 = 48;
  s2[1] = 0;
  v51 = *(_QWORD **)(v50 + 16);
  v126 = v50 + 8;
  LODWORD(a6) = (_DWORD)s2;
  if ( !v51 )
  {
    if ( s2 )
    {
      *(_QWORD *)&v139 = 0;
      qfree(s2);
    }
    goto LABEL_114;
  }
  v52 = v139;
  v53 = v50 + 8;
  v127 = v7;
  v54 = (char *)haystack;
  v55 = v51;
  v56 = s2;
  if ( (_QWORD)v139 )
    v54 = s2;
  v57 = v54;
  while ( 2 )
  {
    v63 = v55[5];
    if ( v52 )
    {
      v58 = v55;
      if ( !v63 )
      {
        v59 = haystack;
        v60 = v56;
        goto LABEL_91;
      }
LABEL_99:
      v59 = (const char *)v55[4];
      v60 = v57;
LABEL_91:
      v61 = strcmp(v59, v60);
      v62 = (_QWORD *)v55[2];
      v55 = (_QWORD *)v55[3];
      if ( v61 >= 0 )
      {
        v53 = (__int64)v58;
        v55 = v62;
      }
      if ( !v55 )
      {
        v7 = v127;
        a6 = v56;
        goto LABEL_130;
      }
      continue;
    }
    break;
  }
  if ( v63 )
  {
LABEL_98:
    v58 = v55;
    goto LABEL_99;
  }
  while ( 1 )
  {
    v62 = (_QWORD *)v55[2];
    if ( !v62 )
      break;
    v53 = (__int64)v55;
    v55 = (_QWORD *)v55[2];
    if ( v62[5] )
      goto LABEL_98;
  }
  a6 = v56;
  v111 = v55;
  v7 = v127;
  v53 = (__int64)v111;
LABEL_130:
  if ( a6 )
  {
    *(_QWORD *)&v139 = 0;
    qfree(a6);
  }
  if ( v126 != v53 )
  {
    while ( 2 )
    {
      if ( !*(_QWORD *)(v53 + 40) )
        goto LABEL_114;
      v84 = *(char **)(v53 + 32);
      v85 = *v84;
      if ( !*v84 )
        goto LABEL_114;
      v86 = *(_QWORD *)(v53 + 32);
      if ( v85 != 48 )
      {
        while ( (unsigned __int8)(v85 - 48) <= 9u )
        {
          v85 = *(_BYTE *)++v86;
          if ( !v85 )
            goto LABEL_138;
        }
        goto LABEL_114;
      }
      if ( v84[1] )
        goto LABEL_114;
LABEL_138:
      qsscanf((int)v84, (int)"%u", (int)&s2, (int)v62, a5, (int)a6, v112);
      v87 = v134;
      if ( v134 )
      {
        v88 = &v133;
        do
        {
          while ( 1 )
          {
            v89 = *(_QWORD *)(v87 + 16);
            v90 = *(_QWORD *)(v87 + 24);
            if ( *(_DWORD *)(v87 + 32) >= (unsigned int)s2 )
              break;
            v87 = *(_QWORD *)(v87 + 24);
            if ( !v90 )
              goto LABEL_143;
          }
          v88 = (int *)v87;
          v87 = *(_QWORD *)(v87 + 16);
        }
        while ( v89 );
LABEL_143:
        if ( v88 == &v133 || (unsigned int)s2 < v88[8] )
        {
LABEL_145:
          v91 = operator new(0x48u);
          *(_BYTE *)(v91 + 40) = 2;
          v92 = (int *)v91;
          v93 = (unsigned int)s2;
          *(_OWORD *)(v91 + 48) = 0;
          v94 = v91 + 40;
          *(_QWORD *)(v91 + 64) = 0;
          *(_DWORD *)(v91 + 32) = v93;
          v95 = sub_770900(&v132, (__int64)v88, v93);
          v88 = (int *)v95;
          if ( v96 )
          {
            v88 = v92;
            std::_Rb_tree_insert_and_rebalance();
            ++v137;
          }
          else if ( v92 )
          {
            free_idcv(v94);
            operator delete(v92, 0x48u);
          }
        }
        copy_idcv(v88 + 10);
        v53 = std::_Rb_tree_increment();
        if ( v53 == v126 )
          goto LABEL_114;
        continue;
      }
      break;
    }
    v88 = &v133;
    goto LABEL_145;
  }
LABEL_114:
  v11 = v137;
LABEL_10:
  s1 = *(char **)(v116 + 8);
  v14 = a3 - v7;
  if ( a3 - v7 < 0 )
    v14 = 0;
  v125 = v11 - v14;
  if ( v11 == v14 )
    goto LABEL_13;
  LODWORD(v139) = 0;
  v140 = &v139;
  v141 = &v139;
  *((_QWORD *)&v139 + 1) = 0;
  v142 = 0;
  v130 = nullptr;
  v131 = 0;
  v130 = (char *)qvector_reserve(&v130, 0, 2, 1);
  *(_QWORD *)&v131 = 2;
  *v130 = 48;
  v130[1] = 0;
  if ( !*((_QWORD *)s1 + 2) )
  {
    if ( v130 )
    {
      *(_QWORD *)&v131 = 0;
      qfree(v130);
    }
    goto LABEL_159;
  }
  v73 = v131;
  v74 = (__int64)(s1 + 8);
  v71 = (char *)haystack;
  v128 = v7;
  v75 = *((char **)s1 + 2);
  v76 = v130;
  if ( (_QWORD)v131 )
    v71 = v130;
  v77 = v71;
  while ( 2 )
  {
    v82 = *((_QWORD *)v75 + 5);
    if ( v73 )
    {
      if ( !v82 )
      {
        v78 = haystack;
        v79 = v75;
        v80 = v76;
        goto LABEL_121;
      }
LABEL_128:
      v78 = *((const char **)v75 + 4);
      v79 = v75;
      v80 = v77;
LABEL_121:
      v81 = strcmp(v78, v80);
      v71 = *((char **)v75 + 2);
      v75 = *((char **)v75 + 3);
      if ( v81 >= 0 )
      {
        v74 = (__int64)v79;
        v75 = v71;
      }
      if ( !v75 )
      {
        v97 = s1 + 8;
        v7 = v128;
        v98 = v76;
        goto LABEL_155;
      }
      continue;
    }
    break;
  }
  if ( v82 )
    goto LABEL_128;
  while ( 1 )
  {
    v83 = *((_QWORD *)v75 + 2);
    if ( !v83 )
      break;
    v74 = (__int64)v75;
    v75 = *((char **)v75 + 2);
    if ( *(_QWORD *)(v83 + 40) )
      goto LABEL_128;
  }
  v98 = v76;
  v110 = v75;
  v97 = s1 + 8;
  v7 = v128;
  v74 = (__int64)v110;
LABEL_155:
  if ( v98 )
  {
    *(_QWORD *)&v131 = 0;
    qfree(v98);
  }
  while ( (char *)v74 != v97 )
  {
    if ( !*(_QWORD *)(v74 + 40) )
      break;
    v99 = *(char **)(v74 + 32);
    v100 = *v99;
    if ( !*v99 )
      break;
    v101 = *(_QWORD *)(v74 + 32);
    if ( v100 != 48 )
    {
      while ( (unsigned __int8)(v100 - 48) <= 9u )
      {
        v100 = *(_BYTE *)++v101;
        if ( !v100 )
          goto LABEL_164;
      }
      break;
    }
    if ( v99[1] )
      break;
LABEL_164:
    qsscanf((int)v99, (int)"%u", (int)&v129, (int)v71, (int)v98, v72, v112);
    if ( v129 < v7 )
    {
      v74 = std::_Rb_tree_increment();
    }
    else
    {
      if ( v129 >= a3 )
      {
        qsnprintf((int)s, 32, (int)"%u", v125 + v129, v102, v103, v112);
        v130 = nullptr;
        v131 = 0;
        v104 = strlen(s);
        v130 = (char *)qvector_reserve(&v130, 0, v104 + 1, 1);
        *(_QWORD *)&v131 = v104 + 1;
        memmove(v130, s, v104);
        v130[v104] = 0;
        v105 = sub_772340(&s2, (__int64)&v130);
        copy_idcv(v105);
        if ( v130 )
        {
          *(_QWORD *)&v131 = 0;
          qfree(v130);
        }
      }
      v106 = std::_Rb_tree_increment();
      v107 = std::_Rb_tree_rebalance_for_erase();
      free_idcv(v107 + 56);
      v108 = *(void **)(v107 + 32);
      if ( v108 )
      {
        *(_QWORD *)(v107 + 40) = 0;
        qfree(v108);
      }
      v109 = (void *)v107;
      v74 = v106;
      operator delete(v109, 0x58u);
      --*((_QWORD *)s1 + 5);
    }
  }
LABEL_159:
  sub_776520(s1, v140, &v139, v71);
  sub_77B350(*((_QWORD *)&v139 + 1));
LABEL_13:
  if ( v135 != &v133 )
  {
    do
    {
      qsnprintf((int)s, 32, (int)"%u", v7, (unsigned __int8)a5, (int)a6, v112);
      s2 = nullptr;
      v139 = 0;
      v15 = strlen(s);
      v16 = v15 + 1;
      v17 = v15;
      s2 = (char *)qvector_reserve(&s2, 0, v15 + 1, 1);
      *(_QWORD *)&v139 = v16;
      memmove(s2, s, v17);
      s2[v17] = 0;
      v18 = sub_772340(s1, (__int64)&s2);
      copy_idcv(v18);
      if ( s2 )
      {
        *(_QWORD *)&v139 = 0;
        qfree(s2);
      }
      ++v7;
    }
    while ( (int *)std::_Rb_tree_increment() != &v133 );
  }
  sub_778060(v134);
  return 0;
}

