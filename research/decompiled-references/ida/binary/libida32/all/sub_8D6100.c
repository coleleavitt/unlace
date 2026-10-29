bool __fastcall sub_8D6100(__int64 a1, __int64 *a2, const char *a3)
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
  const char *v30; // rsi
  size_t v31; // r15
  char *v32; // rax
  _QWORD *v33; // r13
  _QWORD *v34; // rbp
  char *v35; // r14
  char *v36; // r12
  _QWORD *v37; // rbx
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
  __int64 v48; // rax
  size_t v49; // r15
  _QWORD *v50; // r14
  _QWORD *v51; // rax
  __int64 v52; // rdx
  void *v53; // rdi
  __int64 v54; // rax
  void *v55; // rdi
  size_t v56; // r13
  __int64 v57; // r14
  size_t v58; // r8
  _BYTE *v59; // rsi
  void *v61; // rdi
  _QWORD *v62; // r14
  void *v63; // rax
  char *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rsi
  const char *v67; // rsi
  const char *v68; // rdi
  __int64 v69; // rax
  char *v70; // [rsp+0h] [rbp-F8h]
  _QWORD *v71; // [rsp+8h] [rbp-F0h]
  _QWORD *v72; // [rsp+10h] [rbp-E8h]
  __int64 v73; // [rsp+10h] [rbp-E8h]
  size_t v74; // [rsp+10h] [rbp-E8h]
  char *v75; // [rsp+18h] [rbp-E0h]
  _QWORD *v78; // [rsp+30h] [rbp-C8h]
  char *s2; // [rsp+40h] [rbp-B8h] BYREF
  size_t v81[3]; // [rsp+48h] [rbp-B0h]
  void *v82; // [rsp+60h] [rbp-98h] BYREF
  __int128 v83; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-70h]
  void *v86; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v87; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  v4 = strlen(a3);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 >= v4 )
    return 0;
  v6 = &a3[v5];
  v75 = strrchr(v6, 47);
  if ( !v75 )
    return 0;
  v7 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v65 = a2[1];
    v66 = *a2;
    if ( a2[2] < (unsigned __int64)(v65 + 1) )
    {
      v69 = qvector_reserve(a2, v66, v65 + 1, 8);
      *a2 = v69;
      v66 = v69;
      v65 = a2[1];
    }
    *(_QWORD *)(v66 + 8 * v65) = v7;
    ++a2[1];
  }
  while ( 2 )
  {
    v70 = strchr(v6, 47);
    if ( !v70 )
    {
      if ( !under_debugger )
        interr(2707);
      BUG();
    }
    s2 = nullptr;
    *(_OWORD *)v81 = 0;
    v8 = v70 - v6;
    if ( v70 != v6 )
    {
      v45 = nullptr;
      if ( v8 != -1 )
      {
        s2 = (char *)qvector_reserve(&s2, 0, v8 + 1, 1);
        v45 = s2;
      }
      v81[0] = v8 + 1;
      memmove(v45, v6, v8);
      s2[v8] = 0;
    }
    v71 = v7 + 4;
    if ( !v7[5] )
      goto LABEL_26;
    v9 = v81[0];
    v72 = v7;
    v10 = (char *)haystack;
    v11 = (_QWORD *)v7[5];
    v12 = v71;
    v13 = s2;
    if ( v81[0] )
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
        v7 = v72;
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
    v7 = v72;
    v12 = v46;
LABEL_21:
    if ( v71 == v12 )
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
    v24 = v70 - a3;
    *(_DWORD *)(v23 + 32) = 0;
    *(_QWORD *)(v23 + 40) = 0;
    *(_QWORD *)(v23 + 48) = v23 + 32;
    *(_QWORD *)(v23 + 56) = v23 + 32;
    *(_QWORD *)(v23 + 64) = 0;
    *(_QWORD *)(v23 + 72) = v70 - a3;
    *(_OWORD *)(v23 + 8) = 0;
    v86 = nullptr;
    v87 = 0;
    v25 = (void *)qvector_reserve(&v86, 0, 11, 1);
    *(_QWORD *)&v87 = 11;
    v86 = v25;
    qmemcpy(v25, "/.hvignore", 10);
    v26 = v86;
    ptr = nullptr;
    *((_BYTE *)v86 + 10) = 0;
    *(_OWORD *)n = 0;
    if ( v70 != a3 )
    {
      v55 = nullptr;
      if ( v24 != -1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, v24 + 1, 1);
        v55 = ptr;
      }
      n[0] = v24 + 1;
      memmove(v55, a3, v24);
      *((_BYTE *)ptr + v24) = 0;
      v56 = n[0];
      v82 = nullptr;
      v83 = 0;
      if ( n[0] )
      {
        v82 = (void *)qalloc_or_throw(n[0], a3);
        *((_QWORD *)&v83 + 1) = v56;
        memcpy(v82, ptr, v56);
        *(_QWORD *)&v83 = v56;
      }
      v27 = v87;
      if ( (_QWORD)v87 )
      {
        v28 = v87 - 1;
        if ( (_QWORD)v87 != 1 )
          goto LABEL_86;
      }
      goto LABEL_29;
    }
    v27 = v87;
    v83 = 0;
    v82 = nullptr;
    if ( (_QWORD)v87 )
    {
      v28 = v87 - 1;
      if ( (_QWORD)v87 == 1 )
        goto LABEL_29;
LABEL_86:
      v57 = v83;
      v58 = v28;
      if ( (_QWORD)v83 )
      {
        v57 = v83 - 1;
        v58 = v28 + v83 - 1;
        v27 = v28 + v83;
      }
      v59 = v82;
      if ( *((_QWORD *)&v83 + 1) < v27 )
      {
        v74 = v58;
        v82 = (void *)qvector_reserve(&v82, v82, v27, 1);
        v58 = v74;
        v59 = v82;
      }
      *(_QWORD *)&v83 = v27;
      v59[v58] = 0;
      memcpy((char *)v82 + v57, v86, v28);
LABEL_29:
      if ( ptr )
      {
        n[0] = 0;
        qfree(ptr);
      }
      v26 = v86;
    }
    if ( v26 )
    {
      *(_QWORD *)&v87 = 0;
      qfree(v26);
    }
    v29 = haystack;
    if ( (_QWORD)v83 )
      v29 = (const char *)v82;
    v30 = (const char *)v23;
    sub_8D05B0(a1, (__int64 *)v23, (__int64)v29);
    if ( !v7[5] )
    {
      v33 = v71;
      goto LABEL_69;
    }
    v31 = v81[0];
    v73 = v23;
    v32 = (char *)haystack;
    v78 = v7;
    v33 = v71;
    v34 = (_QWORD *)v7[5];
    v35 = s2;
    if ( v81[0] )
      v32 = s2;
    v36 = v32;
    while ( 2 )
    {
      v41 = v34[5];
      if ( v31 )
      {
        v37 = v34;
        v30 = v35;
        v38 = haystack;
        if ( !v41 )
          goto LABEL_42;
        goto LABEL_41;
      }
      if ( v41 )
      {
LABEL_49:
        v37 = v34;
LABEL_41:
        v38 = (const char *)v34[4];
        v30 = v36;
LABEL_42:
        v39 = strcmp(v38, v30);
        v40 = (_QWORD *)v34[2];
        v34 = (_QWORD *)v34[3];
        if ( v39 >= 0 )
        {
          v33 = v37;
          v34 = v40;
        }
        if ( !v34 )
        {
          v23 = v73;
          v7 = v78;
          v47 = v35;
          goto LABEL_64;
        }
        continue;
      }
      break;
    }
    while ( 1 )
    {
      v42 = v34[2];
      if ( !v42 )
        break;
      v33 = v34;
      v34 = (_QWORD *)v34[2];
      if ( *(_QWORD *)(v42 + 40) )
        goto LABEL_49;
    }
    v47 = v35;
    v62 = v34;
    v23 = v73;
    v7 = v78;
    v33 = v62;
LABEL_64:
    if ( v71 == v33 )
      goto LABEL_69;
    if ( v33[5] )
    {
      v30 = (const char *)v33[4];
      if ( !v31 )
        v47 = haystack;
LABEL_68:
      if ( strcmp(v47, v30) < 0 )
      {
LABEL_69:
        v48 = operator new(0x40u);
        v49 = v81[0];
        *(_QWORD *)(v48 + 32) = 0;
        v50 = (_QWORD *)v48;
        *(_OWORD *)(v48 + 40) = 0;
        if ( v49 )
        {
          v63 = (void *)qalloc_or_throw(v49, v30);
          v50[4] = v63;
          v64 = s2;
          v50[6] = v49;
          memcpy(v63, v64, v49);
          v50[5] = v49;
        }
        v50[7] = 0;
        v51 = sub_8D5F40(v7 + 3, v33, (__int64)(v50 + 4));
        v33 = v51;
        if ( v52 )
        {
          if ( !v51 && v71 != (_QWORD *)v52 )
          {
            v67 = haystack;
            if ( *(_QWORD *)(v52 + 40) )
              v67 = *(const char **)(v52 + 32);
            v68 = haystack;
            if ( v50[5] )
              v68 = (const char *)v50[4];
            strcmp(v68, v67);
          }
          v33 = v50;
          std::_Rb_tree_insert_and_rebalance();
          ++v7[8];
        }
        else if ( v50 )
        {
          v61 = (void *)v50[4];
          if ( v61 )
          {
            v50[5] = 0;
            qfree(v61);
          }
          operator delete(v50, 0x40u);
        }
      }
    }
    else
    {
      v30 = haystack;
      if ( v31 )
        goto LABEL_68;
    }
    v53 = v82;
    v33[7] = v23;
    if ( v53 )
    {
      *(_QWORD *)&v83 = 0;
      qfree(v53);
    }
    v7 = (_QWORD *)v23;
LABEL_52:
    if ( v7[1] )
    {
      v43 = a2[1];
      v44 = *a2;
      if ( a2[2] < (unsigned __int64)(v43 + 1) )
      {
        v54 = qvector_reserve(a2, v44, v43 + 1, 8);
        *a2 = v54;
        v44 = v54;
        v43 = a2[1];
      }
      *(_QWORD *)(v44 + 8 * v43) = v7;
      ++a2[1];
    }
    if ( v70 != v75 )
    {
      v6 = v70 + 1;
      if ( s2 )
      {
        v81[0] = 0;
        qfree(s2);
      }
      continue;
    }
    break;
  }
  if ( s2 )
  {
    v81[0] = 0;
    qfree(s2);
  }
  return a2[1] != 0;
}

