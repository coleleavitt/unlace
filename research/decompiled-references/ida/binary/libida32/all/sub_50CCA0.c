__int64 __fastcall sub_50CCA0(__int64 *a1)
{
  char *v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  __int64 v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  int v10; // eax
  const char *p_s2; // rsi
  int v12; // eax
  int v13; // ebx
  __int64 current_extlang; // rax
  __int64 v15; // rsi
  __int64 v16; // rbp
  char *v17; // r14
  char *v18; // r12
  __int64 v19; // rdx
  int v20; // eax
  char *v21; // r12
  __int64 v22; // rbp
  char *v23; // r13
  const char *v24; // rsi
  char *v25; // rbx
  const char *v26; // rdi
  int v27; // eax
  char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  const char *v31; // rsi
  const char *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  size_t v38; // rbp
  __int64 v39; // rcx
  char *v40; // rbp
  char *v41; // r12
  size_t v42; // rbx
  int *v43; // r14
  const char *v44; // r13
  int *v45; // r15
  int *v46; // rbp
  const char *v47; // rsi
  const char *v48; // rdi
  int v49; // eax
  int *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  const char *v54; // rdi
  __int64 v55; // r13
  __int64 *v56; // rbp
  size_t v57; // rax
  size_t v58; // rbx
  void *v59; // rdi
  size_t v60; // r8
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  const char *v65; // rbx
  char *v66; // r12
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  void *v70; // rdi
  size_t v71; // r12
  void *v72; // rdi
  __int64 v73; // [rsp+8h] [rbp-130h]
  __int64 v74; // [rsp+8h] [rbp-130h]
  size_t v76; // [rsp+18h] [rbp-120h]
  __int64 v77; // [rsp+20h] [rbp-118h]
  __int64 v78; // [rsp+28h] [rbp-110h]
  __int64 *v79; // [rsp+30h] [rbp-108h]
  __int64 v80; // [rsp+40h] [rbp-F8h] BYREF
  int v81; // [rsp+48h] [rbp-F0h] BYREF
  void *v82; // [rsp+50h] [rbp-E8h]
  int *v83; // [rsp+58h] [rbp-E0h]
  int *v84; // [rsp+60h] [rbp-D8h]
  __int64 v85; // [rsp+68h] [rbp-D0h]
  void *src; // [rsp+70h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+78h] [rbp-C0h]
  __int64 v88; // [rsp+88h] [rbp-B0h]
  __int64 v89; // [rsp+90h] [rbp-A8h]
  __int128 v90; // [rsp+98h] [rbp-A0h]
  int v91; // [rsp+A8h] [rbp-90h]
  char v92; // [rsp+ACh] [rbp-8Ch]
  char *s2; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v94; // [rsp+B8h] [rbp-80h]
  __int64 v95; // [rsp+C8h] [rbp-70h]
  __int64 v96; // [rsp+D0h] [rbp-68h]
  __int128 v97; // [rsp+D8h] [rbp-60h]
  int v98; // [rsp+E8h] [rbp-50h]
  char v99; // [rsp+ECh] [rbp-4Ch]
  unsigned __int64 v100; // [rsp+F8h] [rbp-40h]

  v2 = (char *)a1[2];
  v100 = __readfsqword(0x28u);
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[64 * i];
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
  if ( !(unsigned __int8)sub_78EE60(*a1) )
    goto LABEL_81;
  v79 = a1 + 1;
  if ( *((_DWORD *)a1 + 2) == -1 )
    sub_79BC40(v79, *a1, "$ scriptsnippets", 0);
  v10 = sub_79B3A0(v79, *a1, 0, 89);
  v81 = 0;
  v82 = nullptr;
  v85 = 0;
  if ( v10 <= 0 )
    v10 = 4;
  v73 = 0;
  *((_DWORD *)a1 + 20) = v10;
  v83 = &v81;
  v84 = &v81;
  while ( 1 )
  {
    p_s2 = (const char *)*a1;
    v12 = sub_79B3A0(v79, *a1, (unsigned int)v73, 65);
    v13 = v12 - 1;
    if ( !v12 )
      break;
    src = nullptr;
    *(_OWORD *)n = 0;
    current_extlang = get_current_extlang();
    v15 = a1[2];
    v16 = current_extlang;
    v88 = current_extlang;
    v89 = 0;
    v17 = (char *)(v15 + (v73 << 6));
    v91 = -1;
    v92 = 0;
    s2 = nullptr;
    v95 = current_extlang;
    v90 = 0;
    v94 = 0;
    if ( current_extlang )
    {
      ++*(_DWORD *)(current_extlang + 12);
      v15 = a1[2];
    }
    v96 = 0;
    v18 = &v17[-v15];
    v19 = a1[3];
    v98 = v91;
    v99 = 0;
    v97 = 0;
    if ( a1[4] < (unsigned __int64)(v19 + 1) )
    {
      v36 = qvector_reserve(a1 + 2, v15, v19 + 1, 64);
      v17 = &v18[v36];
      a1[2] = v36;
      v19 = a1[3];
    }
    memmove(v17 + 64, v17, (v19 << 6) - (_QWORD)v18);
    *(_QWORD *)v17 = 0;
    *((_QWORD *)v17 + 3) = v16;
    *(_OWORD *)(v17 + 8) = 0;
    if ( v16 )
    {
      ++*(_DWORD *)(v16 + 12);
      *((_QWORD *)v17 + 4) = 0;
      *(_OWORD *)(v17 + 40) = 0;
      v20 = v98;
      v17[60] = 0;
      *((_DWORD *)v17 + 14) = v20;
      ++a1[3];
      *(_DWORD *)(v16 + 12) -= 2;
    }
    else
    {
      *((_QWORD *)v17 + 4) = 0;
      *(_OWORD *)(v17 + 40) = 0;
      v37 = v98;
      v17[60] = 0;
      *((_DWORD *)v17 + 14) = v37;
      ++a1[3];
    }
    sub_50ABE0((__int64)v17, *a1, v13);
    v21 = (char *)v82;
    v94 = 0;
    if ( !v82 )
    {
      v23 = (char *)&v81;
      goto LABEL_45;
    }
    v22 = *((_QWORD *)v17 + 1);
    v23 = (char *)&v81;
    while ( 1 )
    {
      v29 = *((_QWORD *)v21 + 5);
      if ( !v22 )
        break;
      v24 = *(const char **)v17;
      v25 = v21;
      v26 = haystack;
      if ( v29 )
        goto LABEL_30;
LABEL_31:
      v27 = strcmp(v26, v24);
      v28 = *((char **)v21 + 2);
      v21 = *((char **)v21 + 3);
      if ( v27 >= 0 )
      {
        v23 = v25;
        v21 = v28;
      }
      if ( !v21 )
        goto LABEL_40;
    }
    if ( v29 )
    {
LABEL_38:
      v25 = v21;
      v24 = haystack;
LABEL_30:
      v26 = *((const char **)v21 + 4);
      goto LABEL_31;
    }
    while ( 1 )
    {
      v30 = *((_QWORD *)v21 + 2);
      if ( !v30 )
        break;
      v23 = v21;
      v21 = *((char **)v21 + 2);
      if ( *(_QWORD *)(v30 + 40) )
        goto LABEL_38;
    }
    v23 = v21;
LABEL_40:
    if ( v23 == (char *)&v81 )
      goto LABEL_45;
    if ( *((_QWORD *)v23 + 5) )
    {
      v31 = *((const char **)v23 + 4);
      v32 = haystack;
      if ( v22 )
        goto LABEL_43;
LABEL_44:
      if ( strcmp(v32, v31) < 0 )
      {
LABEL_45:
        s2 = nullptr;
        v23 = (char *)sub_50CB00(&v80, v23, (__int64)v17, (__int64)&s2);
        if ( s2 )
          qfree(s2);
      }
    }
    else
    {
      v31 = haystack;
      if ( v22 )
      {
LABEL_43:
        v32 = *(const char **)v17;
        goto LABEL_44;
      }
    }
    v33 = *((_QWORD *)v23 + 8);
    v34 = *((_QWORD *)v23 + 7);
    if ( *((_QWORD *)v23 + 9) < (unsigned __int64)(v33 + 1) )
    {
      v35 = qvector_reserve(v23 + 56, v34, v33 + 1, 8);
      *((_QWORD *)v23 + 7) = v35;
      v34 = v35;
      v33 = *((_QWORD *)v23 + 8);
    }
    *(_QWORD *)(v34 + 8 * v33) = v73;
    ++*((_QWORD *)v23 + 8);
    ++v73;
  }
  if ( !a1[3] )
  {
    sub_507AC0(v82);
LABEL_81:
    sub_5093E0(a1);
    a1[9] = 0;
    return (unsigned int)(unsigned __int8)sub_78EE60(*a1) + 2;
  }
  v77 = (__int64)v83;
  if ( v83 != &v81 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v77 + 64) <= 1u )
        goto LABEL_56;
      v38 = *(_QWORD *)(v77 + 40);
      if ( v38 )
        break;
      src = nullptr;
      *(_OWORD *)n = 0;
LABEL_60:
      v78 = 1;
      v39 = 0;
      while ( 2 )
      {
        v40 = nullptr;
        v74 = v39 + 1;
        if ( v39 )
        {
LABEL_62:
          s2 = nullptr;
          v94 = 0;
          sub_3573A0(&s2);
          v41 = s2;
          v42 = v94;
        }
        else
        {
LABEL_100:
          v42 = n[0];
          v41 = nullptr;
          if ( n[0] )
          {
            v41 = (char *)qalloc_or_throw(n[0], p_s2);
            memcpy(v41, src, v42);
          }
        }
        if ( v40 )
          qfree(v40);
        v43 = (int *)v82;
        if ( !v82 )
          goto LABEL_88;
        v44 = haystack;
        v45 = &v81;
        if ( v42 )
          v44 = v41;
        while ( 1 )
        {
          v51 = *((_QWORD *)v43 + 5);
          if ( !v42 )
            break;
          if ( v51 )
            goto LABEL_78;
          v46 = v43;
          v47 = v41;
          v48 = haystack;
LABEL_71:
          v49 = strcmp(v48, v47);
          v50 = *((int **)v43 + 2);
          v43 = *((int **)v43 + 3);
          if ( v49 >= 0 )
          {
            v45 = v46;
            v43 = v50;
          }
          if ( !v43 )
            goto LABEL_83;
        }
        if ( v51 )
        {
LABEL_78:
          v48 = *((const char **)v43 + 4);
          v46 = v43;
          v47 = v44;
          goto LABEL_71;
        }
        while ( 1 )
        {
          v52 = *((_QWORD *)v43 + 2);
          if ( !v52 )
            break;
          v45 = v43;
          v43 = *((int **)v43 + 2);
          if ( *(_QWORD *)(v52 + 40) )
            goto LABEL_78;
        }
        v45 = v43;
LABEL_83:
        if ( v45 != &v81 )
        {
          if ( !*((_QWORD *)v45 + 5) )
          {
            p_s2 = haystack;
            if ( v42 )
            {
LABEL_86:
              v54 = v41;
              goto LABEL_87;
            }
LABEL_99:
            v63 = v74;
            v40 = v41;
            ++v74;
            if ( v63 )
              goto LABEL_62;
            goto LABEL_100;
          }
          p_s2 = *((const char **)v45 + 4);
          v54 = haystack;
          if ( v42 )
            goto LABEL_86;
LABEL_87:
          if ( strcmp(v54, p_s2) >= 0 )
            goto LABEL_99;
        }
LABEL_88:
        v55 = *(_QWORD *)(*(_QWORD *)(v77 + 56) + 8 * v78);
        v56 = (__int64 *)(a1[2] + (v55 << 6));
        if ( v42 && v41 && (v57 = strlen(v41), (v58 = v57) != 0) )
        {
          v59 = (void *)*v56;
          v60 = v57 + 1;
          if ( v56[2] < v57 + 1 )
          {
            v76 = v57 + 1;
            v67 = qvector_reserve(v56, *v56, v57 + 1, 1);
            *v56 = v67;
            v60 = v76;
            v59 = (void *)v67;
          }
          v56[1] = v60;
          memmove(v59, v41, v58);
          *(_BYTE *)(*v56 + v58) = 0;
          v61 = a1[6];
          p_s2 = (const char *)a1[5];
          v62 = v61 + 1;
          if ( a1[7] >= (unsigned __int64)(v61 + 1) )
          {
            *(_QWORD *)&p_s2[8 * v61] = v55;
            ++a1[6];
            goto LABEL_95;
          }
LABEL_105:
          p_s2 = (const char *)qvector_reserve(a1 + 5, p_s2, v62, 8);
          a1[5] = (__int64)p_s2;
          v64 = a1[6];
        }
        else
        {
          v56[1] = 0;
          v64 = a1[6];
          p_s2 = (const char *)a1[5];
          v62 = v64 + 1;
          if ( a1[7] < (unsigned __int64)(v64 + 1) )
            goto LABEL_105;
        }
        *(_QWORD *)&p_s2[8 * v64] = v55;
        ++a1[6];
        if ( v41 )
LABEL_95:
          qfree(v41);
        if ( (unsigned __int64)++v78 < *(_QWORD *)(v77 + 64) )
        {
          v39 = v74;
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
      v77 = std::_Rb_tree_increment();
      if ( (int *)v77 == &v81 )
        goto LABEL_113;
    }
    p_s2 = (const char *)&qword_28;
    v65 = *(const char **)(v77 + 32);
    v66 = strrchr(v65, 40);
    if ( v65 + 1 < v66 && *(v66 - 1) == 32 )
    {
      p_s2 = (const char *)&s2;
      if ( strtoul(v66 + 1, &s2, 10) && *s2 == 41 && !s2[1] )
      {
        src = nullptr;
        v71 = v66 - v65;
        *(_OWORD *)n = 0;
        if ( v71 != 1 )
        {
          v72 = nullptr;
          if ( v71 )
          {
            src = (void *)qvector_reserve(&src, 0, v71, 1);
            v72 = src;
          }
          p_s2 = v65;
          n[0] = v71;
          memmove(v72, v65, v71 - 1);
          *((char *)src + v71 - 1) = 0;
        }
LABEL_110:
        if ( *(_QWORD *)(v77 + 64) <= 1u )
          goto LABEL_111;
        goto LABEL_60;
      }
      v38 = *(_QWORD *)(v77 + 40);
      *(_OWORD *)n = 0;
      src = nullptr;
      if ( !v38 )
      {
        if ( *(_QWORD *)(v77 + 64) <= 1u )
          goto LABEL_56;
        goto LABEL_60;
      }
    }
    else
    {
      src = nullptr;
      *(_OWORD *)n = 0;
    }
    src = (void *)qalloc_or_throw(v38, p_s2);
    n[1] = v38;
    p_s2 = *(const char **)(v77 + 32);
    memcpy(src, p_s2, v38);
    n[0] = v38;
    goto LABEL_110;
  }
LABEL_113:
  LODWORD(v69) = sub_79B3A0(v79, *a1, 1, 89);
  v68 = a1[3];
  v69 = (unsigned int)v69;
  v70 = v82;
  if ( (unsigned int)v69 >= v68 )
    v69 = v68 - 1;
  a1[9] = v69;
  sub_507AC0(v70);
  return 1;
}

