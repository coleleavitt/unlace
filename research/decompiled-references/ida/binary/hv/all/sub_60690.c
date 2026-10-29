bool __fastcall sub_60690(__int64 a1, __int64 *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r13
  const char *v6; // r13
  _QWORD *v7; // rbp
  size_t v8; // r14
  size_t v9; // r14
  char *v10; // rbx
  _QWORD *v11; // rbp
  _QWORD *v12; // r12
  char *v13; // r15
  _QWORD *v14; // r13
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  const char *v21; // r8
  const char *v22; // rsi
  __int64 v23; // r12
  size_t v24; // r13
  void *v25; // rax
  void *v26; // rdi
  size_t v27; // r13
  size_t v28; // r15
  const char *v29; // rdx
  size_t v30; // r15
  char *v31; // rax
  _QWORD *v32; // r13
  _QWORD *v33; // rbp
  char *v34; // r14
  char *v35; // r12
  _QWORD *v36; // rbx
  const char *v37; // rsi
  const char *v38; // rdi
  int v39; // eax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rsi
  char *v45; // rdi
  _QWORD *v46; // r15
  const char *v47; // r8
  const char *v48; // rsi
  __int64 v49; // rax
  size_t v50; // r15
  _QWORD *v51; // r14
  _QWORD *v52; // rax
  __int64 v53; // rdx
  void *v54; // rdi
  __int64 v55; // rax
  void *v56; // rdi
  size_t v57; // r13
  __int64 v58; // r14
  size_t v59; // r8
  _BYTE *v60; // rsi
  void *v62; // rdi
  _QWORD *v63; // r14
  void *v64; // rax
  char *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rsi
  const char *v68; // rsi
  const char *v69; // rdi
  __int64 v70; // rax
  char *v71; // [rsp+0h] [rbp-F8h]
  _QWORD *v72; // [rsp+8h] [rbp-F0h]
  _QWORD *v73; // [rsp+10h] [rbp-E8h]
  __int64 v74; // [rsp+10h] [rbp-E8h]
  size_t v75; // [rsp+10h] [rbp-E8h]
  char *v76; // [rsp+18h] [rbp-E0h]
  _QWORD *v79; // [rsp+30h] [rbp-C8h]
  char *s2; // [rsp+40h] [rbp-B8h] BYREF
  size_t v82[3]; // [rsp+48h] [rbp-B0h]
  void *v83; // [rsp+60h] [rbp-98h] BYREF
  __int128 v84; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-70h]
  void *v87; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v88; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v89; // [rsp+B8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v4 = strlen(a3);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 >= v4 )
    return 0;
  v6 = &a3[v5];
  v76 = strrchr(v6, 47);
  if ( !v76 )
    return 0;
  v7 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v66 = a2[1];
    v67 = *a2;
    if ( a2[2] < (unsigned __int64)(v66 + 1) )
    {
      v70 = sub_96080(a2, v67, v66 + 1, 8);
      *a2 = v70;
      v67 = v70;
      v66 = a2[1];
    }
    *(_QWORD *)(v67 + 8 * v66) = v7;
    ++a2[1];
  }
  while ( 2 )
  {
    v71 = strchr(v6, 47);
    if ( !v71 )
    {
      if ( !byte_1671A1 )
        sub_96F80(2707);
      BUG();
    }
    s2 = nullptr;
    *(_OWORD *)v82 = 0;
    v8 = v71 - v6;
    if ( v71 != v6 )
    {
      v45 = nullptr;
      if ( v8 != -1 )
      {
        s2 = (char *)sub_96080(&s2, 0, v8 + 1, 1);
        v45 = s2;
      }
      v82[0] = v8 + 1;
      memmove(v45, v6, v8);
      s2[v8] = 0;
    }
    v72 = v7 + 4;
    if ( !v7[5] )
      goto LABEL_26;
    v9 = v82[0];
    v73 = v7;
    v10 = (char *)haystack;
    v11 = (_QWORD *)v7[5];
    v12 = v72;
    v13 = s2;
    if ( v82[0] )
      v10 = s2;
    while ( 1 )
    {
      v19 = v11[5];
      if ( !v9 )
        break;
      v14 = v11;
      v15 = v13;
      v16 = haystack;
      if ( v19 )
        goto LABEL_11;
LABEL_12:
      v17 = strcmp(v16, v15);
      v18 = (_QWORD *)v11[2];
      v11 = (_QWORD *)v11[3];
      if ( v17 >= 0 )
      {
        v12 = v14;
        v11 = v18;
      }
      if ( !v11 )
      {
        v7 = v73;
        v21 = v13;
        goto LABEL_21;
      }
    }
    if ( v19 )
    {
LABEL_19:
      v14 = v11;
LABEL_11:
      v16 = (const char *)v11[4];
      v15 = v10;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v20 = v11[2];
      if ( !v20 )
        break;
      v12 = v11;
      v11 = (_QWORD *)v11[2];
      if ( *(_QWORD *)(v20 + 40) )
        goto LABEL_19;
    }
    v21 = v13;
    v46 = v11;
    v7 = v73;
    v12 = v46;
LABEL_21:
    if ( v72 == v12 )
      goto LABEL_26;
    if ( !v12[5] )
    {
      v22 = haystack;
      if ( v9 )
        goto LABEL_25;
      goto LABEL_51;
    }
    v22 = (const char *)v12[4];
    if ( !v9 )
      v21 = haystack;
LABEL_25:
    if ( strcmp(v21, v22) >= 0 )
    {
LABEL_51:
      v7 = (_QWORD *)v12[7];
      goto LABEL_52;
    }
LABEL_26:
    v23 = operator new(0x50u);
    *(_QWORD *)v23 = 0;
    v24 = v71 - a3;
    *(_DWORD *)(v23 + 32) = 0;
    *(_QWORD *)(v23 + 40) = 0;
    *(_QWORD *)(v23 + 48) = v23 + 32;
    *(_QWORD *)(v23 + 56) = v23 + 32;
    *(_QWORD *)(v23 + 64) = 0;
    *(_QWORD *)(v23 + 72) = v71 - a3;
    *(_OWORD *)(v23 + 8) = 0;
    v87 = nullptr;
    v88 = 0;
    v25 = (void *)sub_96080(&v87, 0, 11, 1);
    *(_QWORD *)&v88 = 11;
    v87 = v25;
    qmemcpy(v25, "/.hvignore", 10);
    v26 = v87;
    ptr = nullptr;
    *((_BYTE *)v87 + 10) = 0;
    *(_OWORD *)n = 0;
    if ( v71 != a3 )
    {
      v56 = nullptr;
      if ( v24 != -1 )
      {
        ptr = (void *)sub_96080(&ptr, 0, v24 + 1, 1);
        v56 = ptr;
      }
      n[0] = v24 + 1;
      memmove(v56, a3, v24);
      *((_BYTE *)ptr + v24) = 0;
      v57 = n[0];
      v83 = nullptr;
      v84 = 0;
      if ( n[0] )
      {
        v83 = (void *)sub_96030(n[0]);
        *((_QWORD *)&v84 + 1) = v57;
        memcpy(v83, ptr, v57);
        *(_QWORD *)&v84 = v57;
      }
      v27 = v88;
      if ( (_QWORD)v88 )
      {
        v28 = v88 - 1;
        if ( (_QWORD)v88 != 1 )
          goto LABEL_86;
      }
      goto LABEL_29;
    }
    v27 = v88;
    v84 = 0;
    v83 = nullptr;
    if ( (_QWORD)v88 )
    {
      v28 = v88 - 1;
      if ( (_QWORD)v88 == 1 )
        goto LABEL_29;
LABEL_86:
      v58 = v84;
      v59 = v28;
      if ( (_QWORD)v84 )
      {
        v58 = v84 - 1;
        v59 = v28 + v84 - 1;
        v27 = v28 + v84;
      }
      v60 = v83;
      if ( *((_QWORD *)&v84 + 1) < v27 )
      {
        v75 = v59;
        v83 = (void *)sub_96080(&v83, v83, v27, 1);
        v59 = v75;
        v60 = v83;
      }
      *(_QWORD *)&v84 = v27;
      v60[v59] = 0;
      memcpy((char *)v83 + v58, v87, v28);
LABEL_29:
      if ( ptr )
      {
        n[0] = 0;
        j__free(ptr);
      }
      v26 = v87;
    }
    if ( v26 )
    {
      *(_QWORD *)&v88 = 0;
      j__free(v26);
    }
    v29 = haystack;
    if ( (_QWORD)v84 )
      v29 = (const char *)v83;
    sub_5A830(a1, (__int64 *)v23, (__int64)v29);
    if ( !v7[5] )
    {
      v32 = v72;
      goto LABEL_69;
    }
    v30 = v82[0];
    v74 = v23;
    v31 = (char *)haystack;
    v79 = v7;
    v32 = v72;
    v33 = (_QWORD *)v7[5];
    v34 = s2;
    if ( v82[0] )
      v31 = s2;
    v35 = v31;
    while ( 2 )
    {
      v41 = v33[5];
      if ( v30 )
      {
        v36 = v33;
        v37 = v34;
        v38 = haystack;
        if ( !v41 )
          goto LABEL_42;
        goto LABEL_41;
      }
      if ( v41 )
      {
LABEL_49:
        v36 = v33;
LABEL_41:
        v38 = (const char *)v33[4];
        v37 = v35;
LABEL_42:
        v39 = strcmp(v38, v37);
        v40 = (_QWORD *)v33[2];
        v33 = (_QWORD *)v33[3];
        if ( v39 >= 0 )
        {
          v32 = v36;
          v33 = v40;
        }
        if ( !v33 )
        {
          v23 = v74;
          v7 = v79;
          v47 = v34;
          goto LABEL_64;
        }
        continue;
      }
      break;
    }
    while ( 1 )
    {
      v42 = v33[2];
      if ( !v42 )
        break;
      v32 = v33;
      v33 = (_QWORD *)v33[2];
      if ( *(_QWORD *)(v42 + 40) )
        goto LABEL_49;
    }
    v47 = v34;
    v63 = v33;
    v23 = v74;
    v7 = v79;
    v32 = v63;
LABEL_64:
    if ( v72 == v32 )
      goto LABEL_69;
    if ( v32[5] )
    {
      v48 = (const char *)v32[4];
      if ( !v30 )
        v47 = haystack;
LABEL_68:
      if ( strcmp(v47, v48) < 0 )
      {
LABEL_69:
        v49 = operator new(0x40u);
        v50 = v82[0];
        *(_QWORD *)(v49 + 32) = 0;
        v51 = (_QWORD *)v49;
        *(_OWORD *)(v49 + 40) = 0;
        if ( v50 )
        {
          v64 = (void *)sub_96030(v50);
          v51[4] = v64;
          v65 = s2;
          v51[6] = v50;
          memcpy(v64, v65, v50);
          v51[5] = v50;
        }
        v51[7] = 0;
        v52 = sub_604D0(v7 + 3, v32, (__int64)(v51 + 4));
        v32 = v52;
        if ( v53 )
        {
          if ( !v52 && v72 != (_QWORD *)v53 )
          {
            v68 = haystack;
            if ( *(_QWORD *)(v53 + 40) )
              v68 = *(const char **)(v53 + 32);
            v69 = haystack;
            if ( v51[5] )
              v69 = (const char *)v51[4];
            strcmp(v69, v68);
          }
          v32 = v51;
          std::_Rb_tree_insert_and_rebalance();
          ++v7[8];
        }
        else if ( v51 )
        {
          v62 = (void *)v51[4];
          if ( v62 )
          {
            v51[5] = 0;
            j__free(v62);
          }
          operator delete(v51, 0x40u);
        }
      }
    }
    else
    {
      v48 = haystack;
      if ( v30 )
        goto LABEL_68;
    }
    v54 = v83;
    v32[7] = v23;
    if ( v54 )
    {
      *(_QWORD *)&v84 = 0;
      j__free(v54);
    }
    v7 = (_QWORD *)v23;
LABEL_52:
    if ( v7[1] )
    {
      v43 = a2[1];
      v44 = *a2;
      if ( a2[2] < (unsigned __int64)(v43 + 1) )
      {
        v55 = sub_96080(a2, v44, v43 + 1, 8);
        *a2 = v55;
        v44 = v55;
        v43 = a2[1];
      }
      *(_QWORD *)(v44 + 8 * v43) = v7;
      ++a2[1];
    }
    if ( v71 != v76 )
    {
      v6 = v71 + 1;
      if ( s2 )
      {
        v82[0] = 0;
        j__free(s2);
      }
      continue;
    }
    break;
  }
  if ( s2 )
  {
    v82[0] = 0;
    j__free(s2);
  }
  return a2[1] != 0;
}

