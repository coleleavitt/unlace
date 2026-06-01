__int64 __fastcall sub_8FF500(__int64 a1, _QWORD *a2, const char *a3, char *a4)
{
  __int64 v4; // rbp
  size_t v5; // rbx
  char *v6; // rax
  const char *v7; // rsi
  char *v8; // rbp
  size_t v9; // rbx
  __int64 v10; // r14
  char *v11; // rcx
  _QWORD *v12; // r13
  char *v13; // r15
  _QWORD *v14; // rbx
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
  const char *v32; // rsi
  char v33; // al
  __int64 v34; // rbp
  char *v35; // rdi
  unsigned int v37; // ebp
  char v38; // dl
  char *j; // rdi
  __int64 v40; // rax
  char *v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  size_t v44; // r10
  unsigned __int64 v45; // rbp
  size_t v46; // r10
  char *v47; // rdi
  size_t v48; // rbx
  _QWORD *v49; // r13
  char *v50; // r8
  const char *v51; // r12
  char v52; // al
  __int64 v53; // rax
  _QWORD *v54; // r14
  _QWORD *v55; // r13
  char *v56; // r9
  char *v57; // rbx
  const char *v58; // rcx
  _QWORD *v59; // r13
  char *v60; // r14
  const char *v61; // r15
  const char *v62; // rdi
  _QWORD *v63; // rbp
  const char *v64; // rsi
  int v65; // eax
  _QWORD *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  char *v69; // r8
  unsigned int i; // eax
  __int64 v71; // rdx
  _QWORD *v72; // r15
  unsigned __int64 v73; // rbp
  size_t v74; // rax
  size_t v75; // r13
  size_t v76; // rbp
  char *v77; // rax
  char *v78; // r9
  _QWORD *v79; // r15
  char *v80; // rdx
  char *v81; // r14
  __int64 v82; // rbp
  char *v83; // r13
  const char *v84; // rdi
  _QWORD *v85; // rbx
  const char *v86; // rsi
  int v87; // eax
  _QWORD *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  _QWORD *v91; // r14
  size_t v92; // rax
  char *v93; // r14
  __int64 v94; // rbp
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
  bool v113; // [rsp+38h] [rbp-10C0h]
  bool v114; // [rsp+38h] [rbp-10C0h]
  size_t v115; // [rsp+38h] [rbp-10C0h]
  char v116; // [rsp+40h] [rbp-10B8h]
  _QWORD *v117; // [rsp+40h] [rbp-10B8h]
  _QWORD *v118; // [rsp+40h] [rbp-10B8h]
  size_t v119; // [rsp+48h] [rbp-10B0h]
  char *s2; // [rsp+50h] [rbp-10A8h] BYREF
  __int128 v121; // [rsp+58h] [rbp-10A0h]
  _QWORD v122[2]; // [rsp+70h] [rbp-1088h] BYREF
  __int64 v123; // [rsp+80h] [rbp-1078h]
  char *v124; // [rsp+90h] [rbp-1068h] BYREF
  __int128 v125; // [rsp+98h] [rbp-1060h]
  char s[4104]; // [rsp+B0h] [rbp-1048h] BYREF
  unsigned __int64 v128; // [rsp+10B8h] [rbp-40h]

  src = (char *)a3;
  v128 = __readfsqword(0x28u);
  if ( a3 && *a3 )
  {
    s2 = nullptr;
    v121 = 0;
    v5 = strlen(a3);
    v4 = v5 + 1;
  }
  else
  {
    v4 = 2;
    s2 = nullptr;
    src = "/";
    v5 = 1;
    v121 = 0;
  }
  v6 = (char *)qvector_reserve(&s2, 0, v4, 1);
  v7 = src;
  *(_QWORD *)&v121 = v4;
  s2 = v6;
  memmove(v6, src, v5);
  s2[v5] = 0;
  v8 = s2;
  if ( (unsigned __int64)v121 > 1 )
  {
    v9 = v121 - 1;
    if ( s2[(_QWORD)v121 - 2] == 47 )
    {
      v20 = v121;
      v21 = "*";
      v22 = (char *)(v121 - 1);
      v23 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    v9 = 0;
  }
  if ( !a2[2] )
    goto LABEL_26;
  v10 = (__int64)(a2 + 1);
  v11 = (char *)haystack;
  v12 = (_QWORD *)a2[2];
  n = v9;
  if ( (_QWORD)v121 )
    v11 = s2;
  v13 = (char *)v121;
  s1 = v11;
  while ( 1 )
  {
    v18 = v12[5];
    if ( !v13 )
      break;
    v14 = v12;
    if ( v18 )
      goto LABEL_20;
    v7 = v8;
    v15 = haystack;
LABEL_12:
    v16 = strcmp(v15, v7);
    v17 = (_QWORD *)v12[2];
    v12 = (_QWORD *)v12[3];
    if ( v16 >= 0 )
    {
      v10 = (__int64)v14;
      v12 = v17;
    }
    if ( !v12 )
    {
      v48 = n;
      v49 = a2 + 1;
      v50 = v13;
      goto LABEL_71;
    }
  }
  if ( v18 )
  {
LABEL_19:
    v14 = v12;
LABEL_20:
    v15 = (const char *)v12[4];
    v7 = s1;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v19 = v12[2];
    if ( !v19 )
      break;
    v10 = (__int64)v12;
    v12 = (_QWORD *)v12[2];
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_19;
  }
  v50 = nullptr;
  v72 = v12;
  v48 = n;
  v49 = a2 + 1;
  v10 = (__int64)v72;
LABEL_71:
  if ( (_QWORD *)v10 == v49 )
    goto LABEL_26;
  s1b = v50;
  v25 = v48 == 0 || v8 == nullptr;
  while ( 1 )
  {
    v53 = *(_QWORD *)(v10 + 40);
    if ( v25 )
    {
      if ( !(v48 | v53) )
        goto LABEL_26;
      v51 = *(const char **)(v10 + 32);
    }
    else
    {
      if ( !v53 )
        goto LABEL_27;
      if ( v53 - 1 < v48 )
        goto LABEL_27;
      v51 = *(const char **)(v10 + 32);
      v7 = v8;
      if ( strncmp(v51, v8, v48) )
        goto LABEL_27;
    }
    v52 = v51[v48];
    if ( !v52 )
      goto LABEL_26;
    if ( (unsigned __int8)v52 > 0x2Eu )
      break;
    v10 = std::_Rb_tree_increment(v10, v7);
    if ( (_QWORD *)v10 == v49 )
      goto LABEL_26;
  }
  v22 = s1b;
  if ( v52 != 47 )
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
    if ( *((_QWORD *)&v121 + 1) >= (unsigned __int64)(v20 + 1) )
      goto LABEL_112;
    goto LABEL_24;
  }
  v24 = 3;
  v20 = 2;
  v23 = 2;
  v21 = "/*";
  if ( *((_QWORD *)&v121 + 1) < 3u )
  {
LABEL_24:
    srca = v22;
    s2 = (char *)qvector_reserve(&s2, v8, v24, 1);
    v22 = srca;
    v8 = s2;
  }
LABEL_112:
  *(_QWORD *)&v121 = v24;
  v8[v20] = 0;
  v69 = &v22[(_QWORD)s2];
  for ( i = 0; i < v23; ++i )
  {
    v71 = i;
    v69[v71] = v21[v71];
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
    v124 = nullptr;
    v125 = 0;
    v74 = strlen(s);
    v75 = v74 + 1;
    v76 = v74;
    v77 = (char *)qvector_reserve(&v124, 0, v74 + 1, 1);
    *(_QWORD *)&v125 = v75;
    v124 = v77;
    memmove(v77, s, v76);
    v124[v76] = 0;
    v78 = v124;
    v29 = a2 + 1;
    v28 = a2 + 1;
    if ( !a2[2] )
      goto LABEL_136;
    v114 = v25;
    v79 = (_QWORD *)a2[2];
    v80 = (char *)haystack;
    v118 = a2 + 1;
    v81 = v124;
    v82 = v125;
    if ( (_QWORD)v125 )
      v80 = v124;
    v107 = v26;
    v83 = v80;
    while ( 1 )
    {
      v89 = v79[5];
      if ( !v82 )
        break;
      if ( v89 )
        goto LABEL_134;
      v84 = haystack;
      v85 = v79;
      v86 = v81;
LABEL_127:
      v87 = strcmp(v84, v86);
      v88 = (_QWORD *)v79[2];
      v79 = (_QWORD *)v79[3];
      if ( v87 >= 0 )
      {
        v28 = v85;
        v79 = v88;
      }
      if ( !v79 )
      {
        v26 = v107;
        v25 = v114;
        v78 = v81;
        v29 = v118;
        goto LABEL_136;
      }
    }
    if ( !v89 )
    {
      while ( 1 )
      {
        v90 = v79[2];
        if ( !v90 )
          break;
        v28 = v79;
        v79 = (_QWORD *)v79[2];
        if ( *(_QWORD *)(v90 + 40) )
          goto LABEL_134;
      }
      v78 = v81;
      v96 = v79;
      v26 = v107;
      v29 = v118;
      v25 = v114;
      v28 = v96;
LABEL_136:
      if ( v78 )
      {
        *(_QWORD *)&v125 = 0;
        qfree(v78);
      }
LABEL_32:
      v105 = 1;
      goto LABEL_33;
    }
LABEL_134:
    v84 = (const char *)v79[4];
    v85 = v79;
    v86 = v83;
    goto LABEL_127;
  }
  v35 = s2;
  if ( !v25 )
    goto LABEL_94;
  v56 = (char *)v121;
  v73 = v121 - 1;
  if ( (__int64)v121 - 1 > 1 )
  {
    if ( *((_QWORD *)&v121 + 1) < v73 )
    {
      s1c = (char *)v121;
      s2 = (char *)qvector_reserve(&s2, s2, v121 - 1, 1);
      v56 = s1c;
      v35 = s2;
    }
    *(_QWORD *)&v121 = v73;
    v56[(_QWORD)v35 - 2] = 0;
    v35 = s2;
LABEL_94:
    v54 = (_QWORD *)a2[2];
    v55 = a2 + 1;
    v28 = a2 + 1;
    if ( v54 )
    {
LABEL_95:
      v56 = (char *)v121;
      goto LABEL_96;
    }
LABEL_171:
    if ( a4 )
      *a4 = 0;
    v34 = 0;
    goto LABEL_47;
  }
  if ( s2 )
  {
    *(_QWORD *)&v121 = 0;
    qfree(s2);
    s2 = nullptr;
    v35 = nullptr;
    *((_QWORD *)&v121 + 1) = 0;
    v54 = (_QWORD *)a2[2];
    v55 = a2 + 1;
    v28 = a2 + 1;
    if ( v54 )
      goto LABEL_95;
LABEL_163:
    if ( a4 )
      *a4 = 0;
    return 0;
  }
  v54 = (_QWORD *)a2[2];
  v55 = a2 + 1;
  v28 = a2 + 1;
  if ( !v54 )
    goto LABEL_163;
LABEL_96:
  v106 = v26;
  v57 = v35;
  v58 = haystack;
  v113 = v25;
  if ( v56 )
    v58 = v35;
  v117 = v55;
  v59 = v54;
  v60 = v56;
  v61 = v58;
  while ( 2 )
  {
    v67 = v59[5];
    if ( v60 )
    {
      if ( !v67 )
      {
        v62 = haystack;
        v63 = v59;
        v64 = v57;
        goto LABEL_101;
      }
LABEL_108:
      v62 = (const char *)v59[4];
      v63 = v59;
      v64 = v61;
LABEL_101:
      v65 = strcmp(v62, v64);
      v66 = (_QWORD *)v59[2];
      v59 = (_QWORD *)v59[3];
      if ( v65 >= 0 )
      {
        v28 = v63;
        v59 = v66;
      }
      if ( !v59 )
      {
        v26 = v106;
        v25 = v113;
        v105 = 0;
        v29 = v117;
        goto LABEL_33;
      }
      continue;
    }
    break;
  }
  if ( v67 )
    goto LABEL_108;
  while ( 1 )
  {
    v68 = v59[2];
    if ( !v68 )
      break;
    v28 = v59;
    v59 = (_QWORD *)v59[2];
    if ( *(_QWORD *)(v68 + 40) )
      goto LABEL_108;
  }
  v91 = v59;
  v26 = v106;
  v25 = v113;
  v105 = 0;
  v29 = v117;
  v28 = v91;
LABEL_33:
  v123 = 0;
  if ( v28 == v29 )
  {
    v35 = s2;
    goto LABEL_171;
  }
  v111 = 0;
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
        v32 = v31;
        if ( strncmp(src, v31, v26) )
          goto LABEL_41;
        v33 = v31[v26];
        if ( v33 != 47 )
        {
          if ( v33 > 46 )
            goto LABEL_41;
LABEL_54:
          v28 = (_QWORD *)std::_Rb_tree_increment(v28, v32);
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
        LODWORD(v124) = v28[7];
        v37 = (unsigned int)v124;
        if ( !*(_BYTE *)(a1 + 104) || (v32 = (const char *)&v124, sub_8FF3E0((_QWORD *)(a1 + 8), (int *)&v124), v38) )
        {
          v32 = v31;
          v34 = (**(__int64 (__fastcall ***)(__int64, const char *, _QWORD))a1)(a1, v31, v37);
          if ( v34 )
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
    v32 = na;
    v116 = sub_83E5C0(j, na);
    if ( v105 )
    {
      v40 = 1;
      if ( *v31 == 47 )
      {
        v40 = 2;
        if ( v31[1] != 47 )
          v40 = 1;
      }
      v32 = (_BYTE *)(&qword_28 + 7);
      v41 = strchr(&v31[v26 + v40], 47);
      if ( v41 )
      {
        v42 = v41 - v31;
        v43 = v42;
        if ( !v31 )
          goto LABEL_54;
        if ( v42 == -1 )
        {
          v92 = strlen(v31);
          v43 = -1;
          v44 = v92;
          if ( !v92 )
            goto LABEL_54;
          if ( v111 && v111 - 1 >= v92 )
            goto LABEL_144;
          v124 = nullptr;
          v125 = 0;
LABEL_146:
          v47 = nullptr;
          v45 = 0;
          v46 = -1;
        }
        else
        {
          if ( !v42 )
            goto LABEL_54;
          v44 = v42;
          if ( !v111 || v111 - 1 < v42 )
          {
            v124 = nullptr;
            v45 = v42 + 1;
            v125 = 0;
            goto LABEL_69;
          }
LABEL_144:
          v32 = v31;
          v119 = v43;
          if ( !strncmp(s1a, v31, v44) )
            goto LABEL_54;
          v44 = v119;
          v124 = nullptr;
          v125 = 0;
          v45 = v119 + 1;
          if ( v119 == -1 )
            goto LABEL_146;
LABEL_69:
          v112 = v44;
          v124 = (char *)qvector_reserve(&v124, 0, v45, 1);
          v46 = v112;
          v47 = v124;
        }
        v32 = v31;
        v115 = v46;
        *(_QWORD *)&v125 = v45;
        memmove(v47, v31, v46);
        v124[v115] = 0;
        v93 = v124;
        v94 = *((_QWORD *)&v125 + 1);
        v124 = nullptr;
        v111 = v125;
        v125 = 0;
        if ( s1a )
        {
          qfree(s1a);
          v123 = v94;
          if ( v124 )
          {
            *(_QWORD *)&v125 = 0;
            qfree(v124);
          }
        }
        else
        {
          v123 = v94;
        }
        if ( v116 )
        {
          if ( !*(_BYTE *)(a1 + 104)
            || (v32 = (const char *)v122,
                v122[0] = v93,
                v122[1] = v111,
                sub_4D10C0((_QWORD *)(a1 + 56), (__int64)v122),
                v95) )
          {
            v32 = haystack;
            if ( v111 )
              v32 = v93;
            v34 = (**(__int64 (__fastcall ***)(__int64, const char *, __int64))a1)(a1, v32, 0xFFFFFFFFLL);
            if ( v34 )
            {
              s1a = v93;
              goto LABEL_44;
            }
          }
        }
        s1a = v93;
        goto LABEL_53;
      }
    }
    if ( v116 )
      goto LABEL_51;
    v28 = (_QWORD *)std::_Rb_tree_increment(v28, v32);
    if ( v28 != v29 )
      continue;
    break;
  }
LABEL_41:
  if ( a4 )
    *a4 = v30;
  v34 = 0;
LABEL_44:
  if ( s1a )
    qfree(s1a);
  v35 = s2;
LABEL_47:
  if ( v35 )
  {
    *(_QWORD *)&v121 = 0;
    qfree(v35);
  }
  return v34;
}
