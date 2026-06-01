__int64 __fastcall set_idcv_slice(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5, char *a6)
{
  unsigned __int64 v6; // r15
  char v8; // r13
  char v9; // al
  __int64 v10; // rbx
  int v12; // r13d
  char v13; // al
  __int64 v14; // rax
  int v15; // eax
  __int64 i; // rbx
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // r12
  _QWORD *v20; // rax
  unsigned int v21; // ebp
  unsigned __int64 v22; // r12
  __int64 v23; // rbx
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  size_t v29; // rbp
  size_t v30; // r8
  __int64 v31; // rsi
  const void *v32; // r9
  size_t v33; // r12
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  size_t v37; // r8
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r15
  __int64 v45; // rax
  size_t v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdi
  unsigned __int64 v50; // rdx
  int *v51; // rax
  int *v52; // rbp
  __int64 v53; // r12
  _QWORD *v54; // r15
  char *v55; // rcx
  __int64 v56; // r12
  char *v57; // r14
  __int64 v58; // r13
  char *v59; // rbp
  _QWORD *v60; // rbx
  const char *v61; // rdi
  const char *v62; // rsi
  int v63; // eax
  _QWORD *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  size_t v67; // r15
  __int64 v68; // r12
  int *v69; // rax
  __int64 v70; // rdx
  _BOOL8 v71; // rdi
  _BYTE *v72; // r12
  _BYTE *v73; // rax
  int v74; // r8d
  int v75; // r9d
  __int64 v76; // r13
  __int64 v77; // rbx
  char *v78; // rsi
  _QWORD *v79; // r15
  char *v80; // r14
  char *v81; // r12
  const char *v82; // rdi
  _QWORD *v83; // rbp
  const char *v84; // rsi
  int v85; // eax
  _QWORD *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  char *v89; // rdi
  char v90; // al
  __int64 v91; // rdx
  int *v92; // rax
  int *v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r13
  char *v97; // r9
  int *v98; // rax
  __int64 v99; // rdx
  _BOOL8 v100; // rdi
  char *v101; // r12
  char *v102; // rcx
  char *v103; // rdi
  char v104; // al
  __int64 v105; // rdx
  const char *v106; // rsi
  __int64 v107; // rdx
  char v108; // r8
  int v109; // r9d
  size_t v110; // rbp
  _QWORD *v111; // rax
  __int64 v112; // rbp
  __int64 v113; // rbx
  void *v114; // rdi
  void *v115; // rdi
  _QWORD *v116; // r14
  _QWORD *v117; // r14
  unsigned __int64 v118; // [rsp+8h] [rbp-160h]
  const void *v119; // [rsp+8h] [rbp-160h]
  const void *v120; // [rsp+8h] [rbp-160h]
  unsigned __int64 v121; // [rsp+8h] [rbp-160h]
  size_t v122; // [rsp+8h] [rbp-160h]
  size_t v124; // [rsp+10h] [rbp-158h]
  size_t v125; // [rsp+10h] [rbp-158h]
  char *s1; // [rsp+18h] [rbp-150h]
  char *s1a; // [rsp+18h] [rbp-150h]
  __int64 v128; // [rsp+20h] [rbp-148h]
  int v129; // [rsp+28h] [rbp-140h]
  __int64 v130; // [rsp+28h] [rbp-140h]
  char *v132; // [rsp+30h] [rbp-138h]
  unsigned __int64 v133; // [rsp+48h] [rbp-120h]
  unsigned __int64 v134; // [rsp+58h] [rbp-110h] BYREF
  char *v135; // [rsp+60h] [rbp-108h] BYREF
  __int128 v136; // [rsp+68h] [rbp-100h]
  __int64 v137; // [rsp+80h] [rbp-E8h] BYREF
  int v138; // [rsp+88h] [rbp-E0h] BYREF
  int *v139; // [rsp+90h] [rbp-D8h]
  int *v140; // [rsp+98h] [rbp-D0h]
  int *v141; // [rsp+A0h] [rbp-C8h]
  __int64 v142; // [rsp+A8h] [rbp-C0h]
  char *s2; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v144; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 *v145; // [rsp+C8h] [rbp-A0h]
  __int128 *v146; // [rsp+D0h] [rbp-98h]
  __int64 v147; // [rsp+D8h] [rbp-90h]
  char v148[8]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v149; // [rsp+E8h] [rbp-80h]
  __int64 v150; // [rsp+F8h] [rbp-70h]
  char s[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v152; // [rsp+128h] [rbp-40h]

  v6 = a2;
  v152 = __readfsqword(0x28u);
  v8 = a5;
  while ( 1 )
  {
    v9 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 == 7 )
    {
      v22 = *(_QWORD *)(a1 + 16);
      v23 = a1;
      if ( !v22 )
      {
        v6 = 0;
        if ( (v8 & 1) == 0 )
          v6 = 0;
        goto LABEL_25;
      }
      v39 = v22 - 1;
      if ( a2 >= 0 || (v6 = v39 + a2, (__int64)(v39 + a2) >= 0) )
      {
        if ( v39 <= v6 )
          v6 = v22 - 1;
        if ( (v8 & 1) == 0 )
        {
LABEL_54:
          if ( a3 >= 0 )
          {
            v22 = v6;
            if ( v39 > a3 )
              v39 = a3;
            if ( v39 >= v6 )
              v6 = v39;
            goto LABEL_25;
          }
          goto LABEL_46;
        }
        if ( (__int64)(v6 + 1) < 0 )
        {
          v6 = 0x7FFFFFFFFFFFFFFFLL;
          a3 = 0x8000000000000000LL;
LABEL_46:
          v22 = v6;
          if ( (__int64)(v39 + a3) >= 0 )
          {
            if ( v39 > v39 + a3 )
              v39 += a3;
            if ( v39 >= v6 )
              v6 = v39;
          }
          goto LABEL_25;
        }
        v22 = v6++;
      }
      else
      {
        v6 = 0;
        if ( (v8 & 1) == 0 )
          goto LABEL_54;
        v22 = 0;
        v6 = 1;
      }
      if ( v39 < v6 )
      {
        if ( v39 < v22 )
          v39 = v22;
        v6 = v39;
      }
LABEL_25:
      v24 = *a4 == 7;
      v148[0] = 2;
      v150 = 0;
      v149 = 0;
      if ( !v24 )
      {
        v21 = copy_idcv(v148);
        if ( v21 || (v21 = idcv_string(v148, a4, v25, v26, v27, v28)) != 0 )
        {
          free_idcv(v148);
          return v21;
        }
        a4 = v148;
      }
      v29 = *((_QWORD *)a4 + 2);
      v30 = v6 - v22;
      if ( v29 )
      {
        --v29;
        v31 = *(_QWORD *)(a1 + 8);
        if ( v29 >= v30 )
        {
          v118 = v6 - v22;
          memcpy((void *)(v31 + v22), *((const void **)a4 + 1), v6 - v22);
          if ( v6 - v22 >= v29 )
          {
LABEL_39:
            free_idcv(v148);
            return 0;
          }
          v32 = &unk_23B9FF7;
          v33 = v29 + v22 - v6;
          if ( *((_QWORD *)a4 + 2) | v118 )
            v32 = (const void *)(v118 + *((_QWORD *)a4 + 1));
          v34 = *(_QWORD *)(a1 + 16);
          v35 = *(_QWORD *)(a1 + 24);
          v36 = *(_QWORD *)(a1 + 8);
          if ( v34 )
          {
            --v34;
            v37 = v33 + v34;
            v38 = v33 + v34 + 1;
            if ( v35 >= v38 )
              goto LABEL_36;
            v49 = a1 + 8;
          }
          else
          {
            v38 = v33 + 1;
            v49 = a1 + 8;
            v37 = v33;
            if ( v35 >= v33 + 1 )
            {
              *(_QWORD *)(v23 + 16) = v38;
              *(_BYTE *)(v36 + v33) = 0;
LABEL_38:
              memmove((void *)(v34 + *(_QWORD *)(v23 + 8)), v32, v33);
              goto LABEL_39;
            }
          }
          v124 = v37;
          v120 = v32;
          v66 = qvector_reserve(v49, v36, v38, 1);
          *(_QWORD *)(v23 + 8) = v66;
          v37 = v124;
          v36 = v66;
          v32 = v120;
LABEL_36:
          *(_QWORD *)(v23 + 16) = v38;
          *(_BYTE *)(v36 + v37) = 0;
          if ( v6 < v34 )
          {
            v50 = v34;
            v119 = v32;
            v34 = v6;
            memmove((void *)(v6 + *(_QWORD *)(v23 + 8) + v33), (const void *)(v6 + *(_QWORD *)(v23 + 8)), v50 - v6);
            v32 = v119;
          }
          goto LABEL_38;
        }
      }
      else
      {
        if ( v22 == v6 )
          goto LABEL_39;
        v31 = *(_QWORD *)(a1 + 8);
      }
      v40 = *(_QWORD *)(a1 + 16);
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v22 < v41 )
        {
          v42 = v22;
          v43 = v6 - v29;
          if ( v6 - v29 < v41 )
          {
            v122 = v6 - v22;
            v67 = v41 - v6 + v29;
            memmove((void *)(v31 + v22), (const void *)(v31 + v43), v67);
            v31 = *(_QWORD *)(a1 + 8);
            v30 = v122;
            v42 = v67 + v22;
          }
          v44 = v42 + 1;
          v45 = v31;
          if ( *(_QWORD *)(a1 + 24) < v42 + 1 )
          {
            v125 = v30;
            v121 = v42;
            v45 = qvector_reserve(a1 + 8, v31, v42 + 1, 1);
            v30 = v125;
            v42 = v121;
            *(_QWORD *)(a1 + 8) = v45;
          }
          *(_QWORD *)(a1 + 16) = v44;
          *(_BYTE *)(v45 + v42) = 0;
          v31 = *(_QWORD *)(a1 + 8);
        }
      }
      v46 = v29;
      if ( v30 <= v29 )
        v46 = v30;
      memcpy((void *)(v31 + v22), *((const void **)a4 + 1), v46);
      goto LABEL_39;
    }
    if ( v9 != 10 )
      break;
    a1 = deref_idcv(a1, 0);
    if ( !a1 )
      return get_qerrno(0);
  }
  v10 = a1;
  if ( v9 != 5 )
    return set_qerrno(1568);
  v12 = v8 & 1;
  if ( v12 )
  {
    qsnprintf((unsigned int)s, 32, (unsigned int)"%llu", a2, (_BYTE)a5, (_DWORD)a6);
    return (unsigned int)set_idcv_attr(a1, s, a4, 0, v47, v48);
  }
  v138 = 0;
  v140 = &v138;
  v141 = &v138;
  v13 = *a4;
  v139 = nullptr;
  v142 = 0;
  if ( v13 != 5 )
  {
    if ( v13 != 7 )
    {
      v21 = set_qerrno(1568);
      sub_7984A0(v139);
      return v21;
    }
    v14 = *((_QWORD *)a4 + 2);
    if ( v14 )
    {
      a5 = 0;
      do
      {
        if ( a5 >= v14 - 1 )
          break;
        v51 = v139;
        v52 = &v138;
        if ( !v139 )
          goto LABEL_109;
        do
        {
          if ( *((_QWORD *)v51 + 4) < a5 )
          {
            v51 = *((int **)v51 + 3);
          }
          else
          {
            v52 = v51;
            v51 = *((int **)v51 + 2);
          }
        }
        while ( v51 );
        if ( v52 == &v138 || a5 < *((_QWORD *)v52 + 4) )
        {
LABEL_109:
          s1a = (char *)a5;
          v68 = operator new(0x48u);
          *(_BYTE *)(v68 + 40) = 2;
          *(_QWORD *)(v68 + 32) = s1a;
          *(_QWORD *)(v68 + 64) = 0;
          *(_OWORD *)(v68 + 48) = 0;
          v69 = (int *)sub_790D40(&v137, v52, (unsigned __int64)s1a);
          a5 = (unsigned __int64)s1a;
          v52 = v69;
          if ( v70 )
          {
            v71 = v69 || &v138 == (int *)v70 || (unsigned __int64)s1a < *(_QWORD *)(v70 + 32);
            v52 = (int *)v68;
            std::_Rb_tree_insert_and_rebalance(v71, v68, v70, &v138);
            a5 = (unsigned __int64)s1a;
            ++v142;
          }
          else if ( v68 )
          {
            free_idcv(v68 + 40);
            operator delete((void *)v68, 0x48u);
            a5 = (unsigned __int64)s1a;
          }
        }
        v72 = &unk_23B9FF7;
        if ( *((_QWORD *)a4 + 2) | a5 )
          v72 = (_BYTE *)(*((_QWORD *)a4 + 1) + a5);
        free_idcv(v52 + 10);
        *((_BYTE *)v52 + 40) = 7;
        *(_OWORD *)(v52 + 14) = 0;
        *((_QWORD *)v52 + 6) = 0;
        v73 = (_BYTE *)qvector_reserve(v52 + 12, 0, 2, 1);
        *((_QWORD *)v52 + 6) = v73;
        ++v12;
        *((_QWORD *)v52 + 7) = 2;
        a5 = v12;
        *v73 = *v72;
        *(_BYTE *)(*((_QWORD *)v52 + 6) + 1LL) = 0;
        v14 = *((_QWORD *)a4 + 2);
      }
      while ( v14 );
      goto LABEL_117;
    }
    goto LABEL_10;
  }
  v53 = *((_QWORD *)a4 + 1);
  s2 = nullptr;
  v144 = 0;
  s2 = (char *)qvector_reserve(&s2, 0, 2, 1);
  *(_QWORD *)&v144 = 2;
  *s2 = 48;
  s2[1] = 0;
  v128 = v53 + 8;
  LODWORD(a6) = (_DWORD)s2;
  if ( !*(_QWORD *)(v53 + 16) )
  {
    if ( s2 )
    {
      *(_QWORD *)&v144 = 0;
      qfree(s2);
    }
    goto LABEL_117;
  }
  LODWORD(a5) = v144;
  v54 = *(_QWORD **)(v53 + 16);
  v55 = (char *)haystack;
  v56 = v53 + 8;
  v57 = s2;
  v58 = v144;
  if ( (_QWORD)v144 )
    v55 = s2;
  v130 = a1;
  v59 = v55;
  while ( 2 )
  {
    v65 = v54[5];
    if ( v58 )
    {
      v60 = v54;
      if ( !v65 )
      {
        v61 = haystack;
        v62 = v57;
        goto LABEL_91;
      }
LABEL_99:
      v61 = (const char *)v54[4];
      v62 = v59;
LABEL_91:
      v63 = strcmp(v61, v62);
      v64 = (_QWORD *)v54[2];
      v54 = (_QWORD *)v54[3];
      if ( v63 >= 0 )
      {
        v56 = (__int64)v60;
        v54 = v64;
      }
      if ( !v54 )
      {
        v10 = v130;
        v6 = a2;
        a6 = v57;
        goto LABEL_133;
      }
      continue;
    }
    break;
  }
  if ( v65 )
  {
LABEL_98:
    v60 = v54;
    goto LABEL_99;
  }
  while ( 1 )
  {
    v64 = (_QWORD *)v54[2];
    if ( !v64 )
      break;
    v56 = (__int64)v54;
    v54 = (_QWORD *)v54[2];
    if ( v64[5] )
      goto LABEL_98;
  }
  a6 = v57;
  v117 = v54;
  v10 = v130;
  v6 = a2;
  v56 = (__int64)v117;
LABEL_133:
  if ( a6 )
  {
    *(_QWORD *)&v144 = 0;
    qfree(a6);
  }
  if ( v128 != v56 )
  {
    while ( 2 )
    {
      if ( !*(_QWORD *)(v56 + 40) )
        goto LABEL_117;
      v89 = *(char **)(v56 + 32);
      v90 = *v89;
      if ( !*v89 )
        goto LABEL_117;
      v91 = *(_QWORD *)(v56 + 32);
      if ( v90 != 48 )
      {
        while ( (unsigned __int8)(v90 - 48) <= 9u )
        {
          v90 = *(_BYTE *)++v91;
          if ( !v90 )
            goto LABEL_141;
        }
        goto LABEL_117;
      }
      if ( v89[1] )
        goto LABEL_117;
LABEL_141:
      qsscanf((_DWORD)v89, (unsigned int)"%llu", (unsigned int)&s2, (_DWORD)v64, a5, (_DWORD)a6);
      v92 = v139;
      if ( v139 )
      {
        v93 = &v138;
        do
        {
          while ( 1 )
          {
            v94 = *((_QWORD *)v92 + 2);
            v95 = *((_QWORD *)v92 + 3);
            if ( *((_QWORD *)v92 + 4) >= (unsigned __int64)s2 )
              break;
            v92 = *((int **)v92 + 3);
            if ( !v95 )
              goto LABEL_146;
          }
          v93 = v92;
          v92 = *((int **)v92 + 2);
        }
        while ( v94 );
LABEL_146:
        if ( v93 == &v138 || (unsigned __int64)s2 < *((_QWORD *)v93 + 4) )
        {
LABEL_148:
          v96 = operator new(0x48u);
          *(_BYTE *)(v96 + 40) = 2;
          v97 = s2;
          *(_QWORD *)(v96 + 32) = s2;
          *(_QWORD *)(v96 + 64) = 0;
          *(_OWORD *)(v96 + 48) = 0;
          v132 = v97;
          v98 = (int *)sub_790D40(&v137, v93, (unsigned __int64)v97);
          v93 = v98;
          if ( v99 )
          {
            v100 = v98 || &v138 == (int *)v99 || (unsigned __int64)v132 < *(_QWORD *)(v99 + 32);
            v93 = (int *)v96;
            std::_Rb_tree_insert_and_rebalance(v100, v96, v99, &v138);
            ++v142;
          }
          else if ( v96 )
          {
            free_idcv(v96 + 40);
            operator delete((void *)v96, 0x48u);
          }
        }
        copy_idcv(v93 + 10);
        v56 = std::_Rb_tree_increment(v56);
        if ( v56 == v128 )
          goto LABEL_117;
        continue;
      }
      break;
    }
    v93 = &v138;
    goto LABEL_148;
  }
LABEL_117:
  v12 = v142;
LABEL_10:
  s1 = *(char **)(v10 + 8);
  v15 = a3 - v6;
  if ( (__int64)(a3 - v6) < 0 )
    v15 = 0;
  v129 = v12 - v15;
  if ( v12 == v15 )
    goto LABEL_13;
  LODWORD(v144) = 0;
  v145 = &v144;
  v146 = &v144;
  *((_QWORD *)&v144 + 1) = 0;
  v147 = 0;
  v135 = nullptr;
  v136 = 0;
  v135 = (char *)qvector_reserve(&v135, 0, 2, 1);
  *(_QWORD *)&v136 = 2;
  *v135 = 48;
  v135[1] = 0;
  if ( !*((_QWORD *)s1 + 2) )
  {
    if ( v135 )
    {
      *(_QWORD *)&v136 = 0;
      qfree(v135);
    }
    goto LABEL_165;
  }
  v76 = v136;
  v77 = (__int64)(s1 + 8);
  v78 = (char *)haystack;
  v133 = v6;
  v79 = *((_QWORD **)s1 + 2);
  v80 = v135;
  if ( (_QWORD)v136 )
    v78 = v135;
  v81 = v78;
  while ( 2 )
  {
    v87 = v79[5];
    if ( v76 )
    {
      if ( !v87 )
      {
        v82 = haystack;
        v83 = v79;
        v84 = v80;
        goto LABEL_124;
      }
LABEL_131:
      v82 = (const char *)v79[4];
      v83 = v79;
      v84 = v81;
LABEL_124:
      v85 = strcmp(v82, v84);
      v86 = (_QWORD *)v79[2];
      v79 = (_QWORD *)v79[3];
      if ( v85 >= 0 )
      {
        v77 = (__int64)v83;
        v79 = v86;
      }
      if ( !v79 )
      {
        v101 = s1 + 8;
        v6 = v133;
        v102 = v80;
        goto LABEL_161;
      }
      continue;
    }
    break;
  }
  if ( v87 )
    goto LABEL_131;
  while ( 1 )
  {
    v88 = v79[2];
    if ( !v88 )
      break;
    v77 = (__int64)v79;
    v79 = (_QWORD *)v79[2];
    if ( *(_QWORD *)(v88 + 40) )
      goto LABEL_131;
  }
  v102 = v80;
  v116 = v79;
  v101 = s1 + 8;
  v6 = v133;
  v77 = (__int64)v116;
LABEL_161:
  if ( v102 )
  {
    *(_QWORD *)&v136 = 0;
    qfree(v102);
  }
  while ( (char *)v77 != v101 )
  {
    if ( !*(_QWORD *)(v77 + 40) )
      break;
    v103 = *(char **)(v77 + 32);
    v104 = *v103;
    if ( !*v103 )
      break;
    v105 = *(_QWORD *)(v77 + 32);
    if ( v104 != 48 )
    {
      while ( (unsigned __int8)(v104 - 48) <= 9u )
      {
        v104 = *(_BYTE *)++v105;
        if ( !v104 )
          goto LABEL_170;
      }
      break;
    }
    if ( v103[1] )
      break;
LABEL_170:
    v106 = "%llu";
    qsscanf((_DWORD)v103, (unsigned int)"%llu", (unsigned int)&v134, (_DWORD)v102, v74, v75);
    if ( v134 < v6 )
    {
      v77 = std::_Rb_tree_increment(v77, "%llu", v107);
    }
    else
    {
      if ( v134 >= a3 )
      {
        qsnprintf((unsigned int)s, 32, (unsigned int)"%llu", v134 + v129, v108, v109);
        v135 = nullptr;
        v136 = 0;
        v110 = strlen(s);
        v135 = (char *)qvector_reserve(&v135, 0, v110 + 1, 1);
        *(_QWORD *)&v136 = v110 + 1;
        memmove(v135, s, v110);
        v135[v110] = 0;
        v111 = sub_792780(&s2, (__int64)&v135);
        v106 = (const char *)(v77 + 56);
        copy_idcv(v111);
        if ( v135 )
        {
          *(_QWORD *)&v136 = 0;
          qfree(v135);
        }
      }
      v112 = std::_Rb_tree_increment(v77, v106);
      v113 = std::_Rb_tree_rebalance_for_erase(v77, v101);
      free_idcv(v113 + 56);
      v114 = *(void **)(v113 + 32);
      if ( v114 )
      {
        *(_QWORD *)(v113 + 40) = 0;
        qfree(v114);
      }
      v115 = (void *)v113;
      v77 = v112;
      operator delete(v115, 0x58u);
      --*((_QWORD *)s1 + 5);
    }
  }
LABEL_165:
  sub_796960(s1, v145, &v144);
  sub_79B7C0(*((_QWORD *)&v144 + 1));
LABEL_13:
  for ( i = (__int64)v140; (int *)i != &v138; i = std::_Rb_tree_increment(i, (const char *)(i + 40)) )
  {
    qsnprintf((unsigned int)s, 32, (unsigned int)"%llu", v6, (_BYTE)a5, (_DWORD)a6);
    s2 = nullptr;
    v144 = 0;
    v17 = strlen(s);
    v18 = v17 + 1;
    v19 = v17;
    s2 = (char *)qvector_reserve(&s2, 0, v17 + 1, 1);
    *(_QWORD *)&v144 = v18;
    memmove(s2, s, v19);
    s2[v19] = 0;
    v20 = sub_792780(s1, (__int64)&s2);
    copy_idcv(v20);
    if ( s2 )
    {
      *(_QWORD *)&v144 = 0;
      qfree(s2);
    }
    LODWORD(v6) = v6 + 1;
  }
  sub_7984A0(v139);
  return 0;
}
