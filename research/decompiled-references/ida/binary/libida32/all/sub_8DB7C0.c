__int64 __fastcall sub_8DB7C0(__int64 a1, _QWORD *a2, const char *a3, char *a4)
{
  __int64 v4; // rbp
  size_t v5; // rbx
  char *v6; // rax
  char *v7; // rbp
  size_t v8; // rbx
  __int64 v9; // r14
  char *v10; // rcx
  _QWORD *v11; // r13
  char *v12; // r15
  _QWORD *v13; // rbx
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  const char *v21; // r12
  char *v22; // r8
  unsigned int v23; // ebx
  __int64 v24; // r15
  bool v25; // r15
  size_t v26; // rbx
  const char *v27; // rbp
  _QWORD *v28; // r12
  _QWORD *v29; // r13
  char v30; // bp
  const char *v31; // r14
  char v32; // al
  __int64 v33; // rbp
  char *v34; // rdi
  unsigned int v36; // ebp
  char v37; // dl
  char *j; // rdi
  __int64 v39; // rax
  char *v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  size_t v43; // r10
  unsigned __int64 v44; // rbp
  size_t v45; // r10
  char *v46; // rdi
  size_t v47; // rbx
  size_t v48; // r13
  char *v49; // r8
  const char *v50; // r12
  char v51; // al
  __int64 v52; // rax
  _QWORD *v53; // r14
  _QWORD *v54; // r13
  char *v55; // r9
  char *v56; // rbx
  const char *v57; // rcx
  _QWORD *v58; // r13
  char *v59; // r14
  const char *v60; // r15
  const char *v61; // rdi
  _QWORD *v62; // rbp
  const char *v63; // rsi
  int v64; // eax
  _QWORD *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  char *v68; // r8
  unsigned int i; // eax
  __int64 v70; // rdx
  _QWORD *v71; // r15
  unsigned __int64 v72; // rbp
  size_t v73; // rax
  size_t v74; // r13
  size_t v75; // rbp
  char *v76; // rax
  char *v77; // r9
  _QWORD *v78; // r15
  char *v79; // rdx
  char *v80; // r14
  __int64 v81; // rbp
  char *v82; // r13
  const char *v83; // rdi
  _QWORD *v84; // rbx
  const char *v85; // rsi
  int v86; // eax
  _QWORD *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // r14
  size_t v91; // rax
  char *v92; // r14
  __int64 v93; // rbp
  const char *v94; // rsi
  char v95; // dl
  _QWORD *v96; // r14
  char *src; // [rsp+10h] [rbp-10E8h]
  char *srca; // [rsp+10h] [rbp-10E8h]
  char *s1; // [rsp+18h] [rbp-10E0h]
  char *s1a; // [rsp+18h] [rbp-10E0h]
  char *s1b; // [rsp+18h] [rbp-10E0h]
  char *s1c; // [rsp+18h] [rbp-10E0h]
  int v105; // [rsp+20h] [rbp-10D8h]
  size_t v106; // [rsp+20h] [rbp-10D8h]
  size_t v107; // [rsp+20h] [rbp-10D8h]
  size_t n; // [rsp+30h] [rbp-10C8h]
  char *na; // [rsp+30h] [rbp-10C8h]
  size_t v111; // [rsp+38h] [rbp-10C0h]
  size_t v112; // [rsp+38h] [rbp-10C0h]
  size_t v113; // [rsp+38h] [rbp-10C0h]
  bool v114; // [rsp+38h] [rbp-10C0h]
  bool v115; // [rsp+38h] [rbp-10C0h]
  size_t v116; // [rsp+38h] [rbp-10C0h]
  char v117; // [rsp+40h] [rbp-10B8h]
  _QWORD *v118; // [rsp+40h] [rbp-10B8h]
  _QWORD *v119; // [rsp+40h] [rbp-10B8h]
  size_t v120; // [rsp+48h] [rbp-10B0h]
  char *s2; // [rsp+50h] [rbp-10A8h] BYREF
  __int128 v122; // [rsp+58h] [rbp-10A0h]
  _QWORD v123[2]; // [rsp+70h] [rbp-1088h] BYREF
  __int64 v124; // [rsp+80h] [rbp-1078h]
  char *v125; // [rsp+90h] [rbp-1068h] BYREF
  __int128 v126; // [rsp+98h] [rbp-1060h]
  char s[4104]; // [rsp+B0h] [rbp-1048h] BYREF
  unsigned __int64 v129; // [rsp+10B8h] [rbp-40h]

  src = (char *)a3;
  v129 = __readfsqword(0x28u);
  if ( a3 && *a3 )
  {
    s2 = nullptr;
    v122 = 0;
    v5 = strlen(a3);
    v4 = v5 + 1;
  }
  else
  {
    v4 = 2;
    s2 = nullptr;
    src = "/";
    v5 = 1;
    v122 = 0;
  }
  v6 = (char *)qvector_reserve(&s2, 0, v4, 1);
  *(_QWORD *)&v122 = v4;
  s2 = v6;
  memmove(v6, src, v5);
  s2[v5] = 0;
  v7 = s2;
  if ( (unsigned __int64)v122 > 1 )
  {
    v8 = v122 - 1;
    if ( s2[(_QWORD)v122 - 2] == 47 )
    {
      v20 = v122;
      v21 = "*";
      v22 = (char *)(v122 - 1);
      v23 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( !a2[2] )
    goto LABEL_26;
  v111 = (size_t)(a2 + 1);
  v9 = (__int64)(a2 + 1);
  v10 = (char *)haystack;
  v11 = (_QWORD *)a2[2];
  n = v8;
  if ( (_QWORD)v122 )
    v10 = s2;
  v12 = (char *)v122;
  s1 = v10;
  while ( 1 )
  {
    v18 = v11[5];
    if ( !v12 )
      break;
    v13 = v11;
    if ( v18 )
      goto LABEL_20;
    v14 = v7;
    v15 = haystack;
LABEL_12:
    v16 = strcmp(v15, v14);
    v17 = (_QWORD *)v11[2];
    v11 = (_QWORD *)v11[3];
    if ( v16 >= 0 )
    {
      v9 = (__int64)v13;
      v11 = v17;
    }
    if ( !v11 )
    {
      v47 = n;
      v48 = v111;
      v49 = v12;
      goto LABEL_71;
    }
  }
  if ( v18 )
  {
LABEL_19:
    v13 = v11;
LABEL_20:
    v15 = (const char *)v11[4];
    v14 = s1;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v19 = v11[2];
    if ( !v19 )
      break;
    v9 = (__int64)v11;
    v11 = (_QWORD *)v11[2];
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_19;
  }
  v49 = nullptr;
  v71 = v11;
  v47 = n;
  v48 = v111;
  v9 = (__int64)v71;
LABEL_71:
  if ( v9 == v48 )
    goto LABEL_26;
  s1b = v49;
  v25 = v47 == 0 || v7 == nullptr;
  while ( 1 )
  {
    v52 = *(_QWORD *)(v9 + 40);
    if ( v25 )
    {
      if ( !(v47 | v52) )
        goto LABEL_26;
      v50 = *(const char **)(v9 + 32);
    }
    else
    {
      if ( !v52 )
        goto LABEL_27;
      if ( v52 - 1 < v47 )
        goto LABEL_27;
      v50 = *(const char **)(v9 + 32);
      if ( strncmp(v50, v7, v47) )
        goto LABEL_27;
    }
    v51 = v50[v47];
    if ( !v51 )
      goto LABEL_26;
    if ( (unsigned __int8)v51 > 0x2Eu )
      break;
    v9 = std::_Rb_tree_increment();
    if ( v9 == v48 )
      goto LABEL_26;
  }
  v22 = s1b;
  if ( v51 != 47 )
  {
LABEL_26:
    v25 = 0;
    goto LABEL_27;
  }
  if ( s1b )
  {
    v20 = (__int64)(s1b + 1);
    v23 = 2;
    v22 = s1b - 1;
    v21 = "/*";
LABEL_23:
    v24 = v20 + 1;
    if ( *((_QWORD *)&v122 + 1) >= (unsigned __int64)(v20 + 1) )
      goto LABEL_112;
    goto LABEL_24;
  }
  v24 = 3;
  v20 = 2;
  v23 = 2;
  v21 = "/*";
  if ( *((_QWORD *)&v122 + 1) < 3u )
  {
LABEL_24:
    srca = v22;
    s2 = (char *)qvector_reserve(&s2, v7, v24, 1);
    v22 = srca;
    v7 = s2;
  }
LABEL_112:
  *(_QWORD *)&v122 = v24;
  v7[v20] = 0;
  v68 = &v22[(_QWORD)s2];
  for ( i = 0; i < v23; ++i )
  {
    v70 = i;
    v68[v70] = v21[v70];
  }
  src = s2;
  v25 = 1;
LABEL_27:
  if ( (unsigned __int8)qdirname(s) )
  {
    v26 = strlen(s);
    na = &src[v26 + (src[v26] == 47)];
    if ( v26 && s[v26 - 1] == 47 )
      s[--v26] = 0;
  }
  else
  {
    v26 = 0;
    na = src;
  }
  v27 = (const char *)qbasename(s2);
  if ( strchr(v27, 42) || strchr(v27, 63) )
  {
    if ( !v26 )
    {
      v28 = (_QWORD *)a2[3];
      v29 = a2 + 1;
      goto LABEL_32;
    }
    v125 = nullptr;
    v126 = 0;
    v73 = strlen(s);
    v74 = v73 + 1;
    v75 = v73;
    v76 = (char *)qvector_reserve(&v125, 0, v73 + 1, 1);
    *(_QWORD *)&v126 = v74;
    v125 = v76;
    memmove(v76, s, v75);
    v125[v75] = 0;
    v77 = v125;
    v29 = a2 + 1;
    v28 = a2 + 1;
    if ( !a2[2] )
      goto LABEL_136;
    v115 = v25;
    v78 = (_QWORD *)a2[2];
    v79 = (char *)haystack;
    v119 = a2 + 1;
    v80 = v125;
    v81 = v126;
    if ( (_QWORD)v126 )
      v79 = v125;
    v107 = v26;
    v82 = v79;
    while ( 1 )
    {
      v88 = v78[5];
      if ( !v81 )
        break;
      if ( v88 )
        goto LABEL_134;
      v83 = haystack;
      v84 = v78;
      v85 = v80;
LABEL_127:
      v86 = strcmp(v83, v85);
      v87 = (_QWORD *)v78[2];
      v78 = (_QWORD *)v78[3];
      if ( v86 >= 0 )
      {
        v28 = v84;
        v78 = v87;
      }
      if ( !v78 )
      {
        v26 = v107;
        v25 = v115;
        v77 = v80;
        v29 = v119;
        goto LABEL_136;
      }
    }
    if ( !v88 )
    {
      while ( 1 )
      {
        v89 = v78[2];
        if ( !v89 )
          break;
        v28 = v78;
        v78 = (_QWORD *)v78[2];
        if ( *(_QWORD *)(v89 + 40) )
          goto LABEL_134;
      }
      v77 = v80;
      v96 = v78;
      v26 = v107;
      v29 = v119;
      v25 = v115;
      v28 = v96;
LABEL_136:
      if ( v77 )
      {
        *(_QWORD *)&v126 = 0;
        qfree(v77);
      }
LABEL_32:
      v105 = 1;
      goto LABEL_33;
    }
LABEL_134:
    v83 = (const char *)v78[4];
    v84 = v78;
    v85 = v82;
    goto LABEL_127;
  }
  v34 = s2;
  if ( !v25 )
    goto LABEL_94;
  v55 = (char *)v122;
  v72 = v122 - 1;
  if ( (__int64)v122 - 1 > 1 )
  {
    if ( *((_QWORD *)&v122 + 1) < v72 )
    {
      s1c = (char *)v122;
      s2 = (char *)qvector_reserve(&s2, s2, v122 - 1, 1);
      v55 = s1c;
      v34 = s2;
    }
    *(_QWORD *)&v122 = v72;
    v55[(_QWORD)v34 - 2] = 0;
    v34 = s2;
LABEL_94:
    v53 = (_QWORD *)a2[2];
    v54 = a2 + 1;
    v28 = a2 + 1;
    if ( v53 )
    {
LABEL_95:
      v55 = (char *)v122;
      goto LABEL_96;
    }
LABEL_171:
    if ( a4 )
      *a4 = 0;
    v33 = 0;
    goto LABEL_47;
  }
  if ( s2 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(s2);
    s2 = nullptr;
    v34 = nullptr;
    *((_QWORD *)&v122 + 1) = 0;
    v53 = (_QWORD *)a2[2];
    v54 = a2 + 1;
    v28 = a2 + 1;
    if ( v53 )
      goto LABEL_95;
LABEL_163:
    if ( a4 )
      *a4 = 0;
    return 0;
  }
  v53 = (_QWORD *)a2[2];
  v54 = a2 + 1;
  v28 = a2 + 1;
  if ( !v53 )
    goto LABEL_163;
LABEL_96:
  v106 = v26;
  v56 = v34;
  v57 = haystack;
  v114 = v25;
  if ( v55 )
    v57 = v34;
  v118 = v54;
  v58 = v53;
  v59 = v55;
  v60 = v57;
  while ( 2 )
  {
    v66 = v58[5];
    if ( v59 )
    {
      if ( !v66 )
      {
        v61 = haystack;
        v62 = v58;
        v63 = v56;
        goto LABEL_101;
      }
LABEL_108:
      v61 = (const char *)v58[4];
      v62 = v58;
      v63 = v60;
LABEL_101:
      v64 = strcmp(v61, v63);
      v65 = (_QWORD *)v58[2];
      v58 = (_QWORD *)v58[3];
      if ( v64 >= 0 )
      {
        v28 = v62;
        v58 = v65;
      }
      if ( !v58 )
      {
        v26 = v106;
        v25 = v114;
        v105 = 0;
        v29 = v118;
        goto LABEL_33;
      }
      continue;
    }
    break;
  }
  if ( v66 )
    goto LABEL_108;
  while ( 1 )
  {
    v67 = v58[2];
    if ( !v67 )
      break;
    v28 = v58;
    v58 = (_QWORD *)v58[2];
    if ( *(_QWORD *)(v67 + 40) )
      goto LABEL_108;
  }
  v90 = v58;
  v26 = v106;
  v25 = v114;
  v105 = 0;
  v29 = v118;
  v28 = v90;
LABEL_33:
  v124 = 0;
  if ( v28 == v29 )
  {
    v34 = s2;
    goto LABEL_171;
  }
  v112 = 0;
  v30 = 0;
  s1a = nullptr;
  while ( 2 )
  {
    while ( 2 )
    {
      v31 = haystack;
      if ( v28[5] )
        v31 = (const char *)v28[4];
      if ( v26 )
      {
        if ( strncmp(src, v31, v26) )
          goto LABEL_41;
        v32 = v31[v26];
        if ( v32 != 47 )
        {
          if ( v32 > 46 )
            goto LABEL_41;
LABEL_54:
          v28 = (_QWORD *)std::_Rb_tree_increment();
          if ( v28 == v29 )
            goto LABEL_41;
          continue;
        }
        if ( !v25 )
        {
          j = (char *)&v31[v26];
          goto LABEL_60;
        }
LABEL_51:
        LODWORD(v125) = v28[7];
        v36 = (unsigned int)v125;
        if ( !*(_BYTE *)(a1 + 104) || (sub_8DB6A0((_QWORD *)(a1 + 8), (int *)&v125), v37) )
        {
          v33 = (**(__int64 (__fastcall ***)(__int64, const char *, _QWORD))a1)(a1, v31, v36);
          if ( v33 )
            goto LABEL_44;
        }
LABEL_53:
        v30 = 1;
        goto LABEL_54;
      }
      break;
    }
    if ( v25 )
      goto LABEL_51;
    j = (char *)v31;
    if ( *v31 == 47 )
    {
      for ( j = (char *)(v31 + 1); *j == 47; ++j )
LABEL_60:
        ;
    }
    v117 = sub_81B200(j, na);
    if ( v105 )
    {
      v39 = 1;
      if ( *v31 == 47 )
      {
        v39 = 2;
        if ( v31[1] != 47 )
          v39 = 1;
      }
      v40 = strchr(&v31[v26 + v39], 47);
      if ( v40 )
      {
        v41 = v40 - v31;
        v42 = v41;
        if ( !v31 )
          goto LABEL_54;
        if ( v41 == -1 )
        {
          v91 = strlen(v31);
          v42 = -1;
          v43 = v91;
          if ( !v91 )
            goto LABEL_54;
          if ( v112 && v112 - 1 >= v91 )
            goto LABEL_144;
          v125 = nullptr;
          v126 = 0;
LABEL_146:
          v46 = nullptr;
          v44 = 0;
          v45 = -1;
        }
        else
        {
          if ( !v41 )
            goto LABEL_54;
          v43 = v41;
          if ( !v112 || v112 - 1 < v41 )
          {
            v125 = nullptr;
            v44 = v41 + 1;
            v126 = 0;
            goto LABEL_69;
          }
LABEL_144:
          v120 = v42;
          if ( !strncmp(s1a, v31, v43) )
            goto LABEL_54;
          v43 = v120;
          v125 = nullptr;
          v126 = 0;
          v44 = v120 + 1;
          if ( v120 == -1 )
            goto LABEL_146;
LABEL_69:
          v113 = v43;
          v125 = (char *)qvector_reserve(&v125, 0, v44, 1);
          v45 = v113;
          v46 = v125;
        }
        v116 = v45;
        *(_QWORD *)&v126 = v44;
        memmove(v46, v31, v45);
        v125[v116] = 0;
        v92 = v125;
        v93 = *((_QWORD *)&v126 + 1);
        v125 = nullptr;
        v112 = v126;
        v126 = 0;
        if ( s1a )
        {
          qfree(s1a);
          v124 = v93;
          if ( v125 )
          {
            *(_QWORD *)&v126 = 0;
            qfree(v125);
          }
        }
        else
        {
          v124 = v93;
        }
        if ( v117 )
        {
          if ( !*(_BYTE *)(a1 + 104)
            || (v123[0] = v92, v123[1] = v112, sub_4BA290((_QWORD *)(a1 + 56), (const char *)v123), v95) )
          {
            v94 = haystack;
            if ( v112 )
              v94 = v92;
            v33 = (**(__int64 (__fastcall ***)(__int64, const char *, __int64))a1)(a1, v94, 0xFFFFFFFFLL);
            if ( v33 )
            {
              s1a = v92;
              goto LABEL_44;
            }
          }
        }
        s1a = v92;
        goto LABEL_53;
      }
    }
    if ( v117 )
      goto LABEL_51;
    v28 = (_QWORD *)std::_Rb_tree_increment();
    if ( v28 != v29 )
      continue;
    break;
  }
LABEL_41:
  if ( a4 )
    *a4 = v30;
  v33 = 0;
LABEL_44:
  if ( s1a )
    qfree(s1a);
  v34 = s2;
LABEL_47:
  if ( v34 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v34);
  }
  return v33;
}

