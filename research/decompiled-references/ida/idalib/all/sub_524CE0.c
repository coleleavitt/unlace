__int64 __fastcall sub_524CE0(__int64 *a1)
{
  char *v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rbp
  void *v6; // rdi
  __int64 v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rax
  char **p_s2; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 current_extlang; // rax
  __int64 v16; // rsi
  __int64 v17; // rbp
  char *v18; // r14
  char *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  int *v22; // r12
  __int64 v23; // rbp
  int *v24; // r13
  const char *v25; // rsi
  int *v26; // rbx
  const char *v27; // rdi
  int v28; // eax
  int *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  const char *v32; // rsi
  const char *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int *v39; // rcx
  int *v40; // rax
  size_t v41; // rbp
  __int64 v42; // rcx
  char *v43; // rbp
  char *v44; // r12
  size_t v45; // rbx
  int *v46; // r14
  const char *v47; // r13
  int *v48; // r15
  int *v49; // rbp
  const char *v50; // rsi
  const char *v51; // rdi
  int v52; // eax
  int *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  const char *v57; // rsi
  const char *v58; // rdi
  char *v59; // rbp
  __int64 *v60; // r13
  size_t v61; // rax
  size_t v62; // rbx
  void *v63; // rdi
  size_t v64; // r8
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  const char *v68; // rbx
  char *v69; // r12
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  void *v73; // rdi
  size_t v74; // r12
  void *v75; // rdi
  __int64 v76; // [rsp+8h] [rbp-140h]
  __int64 v77; // [rsp+8h] [rbp-140h]
  size_t v79; // [rsp+18h] [rbp-130h]
  int *v80; // [rsp+20h] [rbp-128h]
  __int64 v81; // [rsp+28h] [rbp-120h]
  __int64 *v82; // [rsp+30h] [rbp-118h]
  __int64 v83; // [rsp+40h] [rbp-108h] BYREF
  int v84; // [rsp+48h] [rbp-100h] BYREF
  void *v85; // [rsp+50h] [rbp-F8h]
  int *v86; // [rsp+58h] [rbp-F0h]
  int *v87; // [rsp+60h] [rbp-E8h]
  __int64 v88; // [rsp+68h] [rbp-E0h]
  void *src; // [rsp+70h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+78h] [rbp-D0h]
  __int64 v91; // [rsp+88h] [rbp-C0h]
  __int64 v92; // [rsp+90h] [rbp-B8h]
  __int128 v93; // [rsp+98h] [rbp-B0h]
  __int64 v94; // [rsp+A8h] [rbp-A0h]
  char v95; // [rsp+B0h] [rbp-98h]
  char *s2; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v97; // [rsp+C8h] [rbp-80h]
  __int64 v98; // [rsp+D8h] [rbp-70h]
  __int64 v99; // [rsp+E0h] [rbp-68h]
  __int128 v100; // [rsp+E8h] [rbp-60h]
  __int64 v101; // [rsp+F8h] [rbp-50h]
  char v102; // [rsp+100h] [rbp-48h]
  unsigned __int64 v103; // [rsp+108h] [rbp-40h]

  v2 = (char *)a1[2];
  v103 = __readfsqword(0x28u);
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[72 * i];
        v6 = *((void **)v5 + 4);
        if ( v6 )
        {
          *((_QWORD *)v5 + 5) = 0;
          qfree(v6);
        }
        v7 = *((_QWORD *)v5 + 3);
        if ( v7 )
          --*(_DWORD *)(v7 + 12);
        v8 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v8);
        }
        v2 = (char *)a1[2];
      }
    }
    a1[3] = 0;
    qfree(v2);
    a1[2] = 0;
    a1[4] = 0;
  }
  v9 = (void *)a1[5];
  if ( v9 )
  {
    a1[6] = 0;
    qfree(v9);
    a1[5] = 0;
    a1[7] = 0;
  }
  if ( !(unsigned __int8)sub_7AF760(*a1) )
    goto LABEL_81;
  v82 = a1 + 1;
  if ( a1[1] == -1 )
    sub_7BF040(v82, *a1, "$ scriptsnippets", 0);
  v10 = sub_7BE710(v82, *a1, 0, 89);
  v84 = 0;
  v85 = nullptr;
  v88 = 0;
  if ( v10 <= 0 )
    v10 = 4;
  v76 = 0;
  a1[10] = v10;
  v86 = &v84;
  v87 = &v84;
  while ( 1 )
  {
    p_s2 = (char **)*a1;
    v12 = sub_7BE710(v82, *a1, v76, 65);
    v14 = v12 - 1;
    if ( !v12 )
      break;
    src = nullptr;
    *(_OWORD *)n = 0;
    current_extlang = get_current_extlang(v82);
    v16 = a1[2];
    v17 = current_extlang;
    v91 = current_extlang;
    v92 = 0;
    v18 = (char *)(v16 + 72 * v76);
    v94 = -1;
    v95 = 0;
    s2 = nullptr;
    v98 = current_extlang;
    v93 = 0;
    v97 = 0;
    if ( current_extlang )
    {
      ++*(_DWORD *)(current_extlang + 12);
      v16 = a1[2];
    }
    v99 = 0;
    v19 = &v18[-v16];
    v101 = v94;
    v20 = a1[3];
    v102 = 0;
    v100 = 0;
    if ( a1[4] < (unsigned __int64)(v20 + 1) )
    {
      v37 = qvector_reserve(a1 + 2, v16, v20 + 1, 72);
      v18 = &v19[v37];
      a1[2] = v37;
      v20 = a1[3];
    }
    memmove(v18 + 72, v18, 72 * v20 - (_QWORD)v19);
    *(_QWORD *)v18 = 0;
    *((_QWORD *)v18 + 3) = v17;
    *(_OWORD *)(v18 + 8) = 0;
    if ( v17 )
    {
      ++*(_DWORD *)(v17 + 12);
      *((_QWORD *)v18 + 4) = 0;
      *(_OWORD *)(v18 + 40) = 0;
      v21 = v101;
      v18[64] = 0;
      *((_QWORD *)v18 + 7) = v21;
      ++a1[3];
      *(_DWORD *)(v17 + 12) -= 2;
    }
    else
    {
      *((_QWORD *)v18 + 4) = 0;
      *(_OWORD *)(v18 + 40) = 0;
      v38 = v101;
      v18[64] = 0;
      *((_QWORD *)v18 + 7) = v38;
      ++a1[3];
    }
    sub_522BF0((__int64)v18, *a1, v14);
    v22 = (int *)v85;
    v97 = 0;
    if ( !v85 )
    {
      v24 = &v84;
      goto LABEL_45;
    }
    v23 = *((_QWORD *)v18 + 1);
    v24 = &v84;
    while ( 1 )
    {
      v30 = *((_QWORD *)v22 + 5);
      if ( !v23 )
        break;
      v25 = *(const char **)v18;
      v26 = v22;
      v27 = haystack;
      if ( v30 )
        goto LABEL_30;
LABEL_31:
      v28 = strcmp(v27, v25);
      v29 = *((int **)v22 + 2);
      v22 = *((int **)v22 + 3);
      if ( v28 >= 0 )
      {
        v24 = v26;
        v22 = v29;
      }
      if ( !v22 )
        goto LABEL_40;
    }
    if ( v30 )
    {
LABEL_38:
      v26 = v22;
      v25 = haystack;
LABEL_30:
      v27 = *((const char **)v22 + 4);
      goto LABEL_31;
    }
    while ( 1 )
    {
      v31 = *((_QWORD *)v22 + 2);
      if ( !v31 )
        break;
      v24 = v22;
      v22 = *((int **)v22 + 2);
      if ( *(_QWORD *)(v31 + 40) )
        goto LABEL_38;
    }
    v24 = v22;
LABEL_40:
    if ( v24 == &v84 )
      goto LABEL_45;
    if ( *((_QWORD *)v24 + 5) )
    {
      v32 = *((const char **)v24 + 4);
      v33 = haystack;
      if ( v23 )
        goto LABEL_43;
LABEL_44:
      if ( strcmp(v33, v32) < 0 )
      {
LABEL_45:
        s2 = nullptr;
        v24 = (int *)sub_524B40(&v83, v24, (__int64)v18, (__int64)&s2);
        if ( s2 )
          qfree(s2);
      }
    }
    else
    {
      v32 = haystack;
      if ( v23 )
      {
LABEL_43:
        v33 = *(const char **)v18;
        goto LABEL_44;
      }
    }
    v34 = *((_QWORD *)v24 + 8);
    v35 = *((_QWORD *)v24 + 7);
    if ( *((_QWORD *)v24 + 9) < (unsigned __int64)(v34 + 1) )
    {
      v36 = qvector_reserve(v24 + 14, v35, v34 + 1, 8);
      *((_QWORD *)v24 + 7) = v36;
      v35 = v36;
      v34 = *((_QWORD *)v24 + 8);
    }
    *(_QWORD *)(v35 + 8 * v34) = v76;
    ++*((_QWORD *)v24 + 8);
    ++v76;
  }
  if ( !a1[3] )
  {
    sub_51FA80(v85);
LABEL_81:
    sub_5213B0(a1);
    a1[9] = 0;
    return (unsigned int)(unsigned __int8)sub_7AF760(*a1) + 2;
  }
  v39 = v86;
  v80 = v86;
  if ( v86 != &v84 )
  {
    while ( 1 )
    {
      if ( *((_QWORD *)v80 + 8) <= 1u )
        goto LABEL_56;
      v41 = *((_QWORD *)v80 + 5);
      if ( v41 )
        break;
      src = nullptr;
      *(_OWORD *)n = 0;
LABEL_60:
      v81 = 1;
      v42 = 0;
      while ( 2 )
      {
        v43 = nullptr;
        v77 = v42 + 1;
        if ( v42 )
        {
LABEL_62:
          s2 = nullptr;
          v97 = 0;
          sub_35A790(&s2);
          v44 = s2;
          v45 = v97;
        }
        else
        {
LABEL_100:
          v45 = n[0];
          v44 = nullptr;
          if ( n[0] )
          {
            v44 = (char *)qalloc_or_throw(n[0]);
            memcpy(v44, src, v45);
          }
        }
        if ( v43 )
          qfree(v43);
        v46 = (int *)v85;
        if ( !v85 )
          goto LABEL_88;
        v47 = haystack;
        v48 = &v84;
        if ( v45 )
          v47 = v44;
        while ( 1 )
        {
          v54 = *((_QWORD *)v46 + 5);
          if ( !v45 )
            break;
          if ( v54 )
            goto LABEL_78;
          v49 = v46;
          v50 = v44;
          v51 = haystack;
LABEL_71:
          v52 = strcmp(v51, v50);
          v53 = *((int **)v46 + 2);
          v46 = *((int **)v46 + 3);
          if ( v52 >= 0 )
          {
            v48 = v49;
            v46 = v53;
          }
          if ( !v46 )
            goto LABEL_83;
        }
        if ( v54 )
        {
LABEL_78:
          v51 = *((const char **)v46 + 4);
          v49 = v46;
          v50 = v47;
          goto LABEL_71;
        }
        while ( 1 )
        {
          v55 = *((_QWORD *)v46 + 2);
          if ( !v55 )
            break;
          v48 = v46;
          v46 = *((int **)v46 + 2);
          if ( *(_QWORD *)(v55 + 40) )
            goto LABEL_78;
        }
        v48 = v46;
LABEL_83:
        if ( v48 != &v84 )
        {
          if ( !*((_QWORD *)v48 + 5) )
          {
            v57 = haystack;
            if ( v45 )
            {
LABEL_86:
              v58 = v44;
              goto LABEL_87;
            }
LABEL_99:
            v66 = v77;
            v43 = v44;
            ++v77;
            if ( v66 )
              goto LABEL_62;
            goto LABEL_100;
          }
          v57 = *((const char **)v48 + 4);
          v58 = haystack;
          if ( v45 )
            goto LABEL_86;
LABEL_87:
          if ( strcmp(v58, v57) >= 0 )
            goto LABEL_99;
        }
LABEL_88:
        v59 = *(char **)(*((_QWORD *)v80 + 7) + 8 * v81);
        v60 = (__int64 *)(a1[2] + 72LL * (_QWORD)v59);
        if ( v45 && v44 && (v61 = strlen(v44), (v62 = v61) != 0) )
        {
          v63 = (void *)*v60;
          v64 = v61 + 1;
          if ( v60[2] < v61 + 1 )
          {
            v79 = v61 + 1;
            v70 = qvector_reserve(v60, *v60, v61 + 1, 1);
            *v60 = v70;
            v64 = v79;
            v63 = (void *)v70;
          }
          v60[1] = v64;
          memmove(v63, v44, v62);
          *(_BYTE *)(*v60 + v62) = 0;
          v65 = a1[6];
          p_s2 = (char **)a1[5];
          v13 = v65 + 1;
          if ( a1[7] >= (unsigned __int64)(v65 + 1) )
          {
            p_s2[v65] = v59;
            ++a1[6];
            goto LABEL_95;
          }
LABEL_105:
          p_s2 = (char **)qvector_reserve(a1 + 5, p_s2, v13, 8);
          a1[5] = (__int64)p_s2;
          v67 = a1[6];
        }
        else
        {
          v60[1] = 0;
          v67 = a1[6];
          p_s2 = (char **)a1[5];
          v13 = v67 + 1;
          if ( a1[7] < (unsigned __int64)(v67 + 1) )
            goto LABEL_105;
        }
        p_s2[v67] = v59;
        ++a1[6];
        if ( v44 )
LABEL_95:
          qfree(v44);
        v39 = v80;
        if ( (unsigned __int64)++v81 < *((_QWORD *)v80 + 8) )
        {
          v42 = v77;
          continue;
        }
        break;
      }
LABEL_111:
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
LABEL_56:
      v40 = (int *)std::_Rb_tree_increment(v80, p_s2, v13, v39);
      v39 = &v84;
      v80 = v40;
      if ( v40 == &v84 )
        goto LABEL_113;
    }
    v68 = *((const char **)v80 + 4);
    v69 = strrchr(v68, 40);
    if ( v68 + 1 < v69 && *(v69 - 1) == 32 )
    {
      p_s2 = &s2;
      if ( strtoul(v69 + 1, &s2, 10) && *s2 == 41 && !s2[1] )
      {
        src = nullptr;
        v74 = v69 - v68;
        *(_OWORD *)n = 0;
        if ( v74 != 1 )
        {
          v75 = nullptr;
          if ( v74 )
          {
            src = (void *)qvector_reserve(&src, 0, v74, 1);
            v75 = src;
          }
          p_s2 = (char **)v68;
          n[0] = v74;
          memmove(v75, v68, v74 - 1);
          *((char *)src + v74 - 1) = 0;
        }
LABEL_110:
        v39 = v80;
        if ( *((_QWORD *)v80 + 8) <= 1u )
          goto LABEL_111;
        goto LABEL_60;
      }
      v41 = *((_QWORD *)v80 + 5);
      *(_OWORD *)n = 0;
      src = nullptr;
      if ( !v41 )
      {
        if ( *((_QWORD *)v80 + 8) <= 1u )
          goto LABEL_56;
        goto LABEL_60;
      }
    }
    else
    {
      src = nullptr;
      *(_OWORD *)n = 0;
    }
    src = (void *)qalloc_or_throw(v41);
    n[1] = v41;
    p_s2 = *((char ***)v80 + 4);
    memcpy(src, p_s2, v41);
    n[0] = v41;
    goto LABEL_110;
  }
LABEL_113:
  v71 = sub_7BE710(v82, *a1, 1, 89);
  v72 = a1[3];
  v73 = v85;
  if ( v71 >= v72 )
    v71 = v72 - 1;
  a1[9] = v71;
  sub_51FA80(v73);
  return 1;
}
