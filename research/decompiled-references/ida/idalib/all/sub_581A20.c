__int64 __fastcall sub_581A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  const char *v6; // r12
  void *lexer; // r14
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  const char *v11; // rsi
  size_t v12; // rax
  const char *v13; // r15
  size_t v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  const char *v17; // rbx
  int v18; // edx
  char *v19; // rdi
  size_t v20; // r12
  char *v21; // rax
  unsigned __int64 v22; // r12
  char v23; // al
  char *v24; // rdi
  char *v25; // r14
  char *v26; // r13
  size_t v27; // r13
  size_t v28; // rbx
  size_t v29; // r15
  size_t v30; // r8
  void *v31; // rax
  char *v32; // r15
  char *v33; // rdi
  __int64 v34; // rax
  char *v35; // rdi
  char *v36; // rdi
  size_t v37; // rbx
  char *v38; // rsi
  char *accept; // [rsp+18h] [rbp-128h]
  __int64 v41; // [rsp+28h] [rbp-118h]
  char *n; // [rsp+38h] [rbp-108h]
  size_t na; // [rsp+38h] [rbp-108h]
  char *s; // [rsp+60h] [rbp-E0h] BYREF
  __int128 v46; // [rsp+68h] [rbp-D8h]
  char *nptr; // [rsp+80h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+88h] [rbp-B8h]
  void *ptr; // [rsp+A0h] [rbp-A0h] BYREF
  __int128 v50; // [rsp+A8h] [rbp-98h]
  void *src; // [rsp+C0h] [rbp-80h]
  __int128 v52; // [rsp+C8h] [rbp-78h]
  __int64 v53; // [rsp+D8h] [rbp-68h]
  __int64 v54; // [rsp+E0h] [rbp-60h]
  __int64 v55; // [rsp+E8h] [rbp-58h]
  __int128 v56; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v57; // [rsp+108h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  v41 = a4 & 0xF;
  v5 = *(_QWORD *)(a3 + 8);
  if ( ((0x900uLL >> (a4 & 0xF)) & 1) == 0 )
  {
    v6 = haystack;
    if ( v5 )
      v6 = *(const char **)a3;
    lexer = (void *)create_lexer(&unk_23AF608, 0, 0, 0);
    if ( !(unsigned int)lex_init_string(lexer, v6, 0) )
    {
      v52 = 0;
      src = nullptr;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      if ( !(unsigned int)lex_get_token((int)lexer) )
        lex_get_token((int)lexer);
    }
    if ( lexer )
      destroy_lexer(lexer);
    return 0;
  }
  v9 = a5 + 1;
  if ( v5 )
  {
    v10 = v5 - 1;
    v11 = *(const char **)a3;
    s = nullptr;
    v46 = 0;
    if ( v9 > v10 )
      v9 = v10;
    v12 = v10 - v9;
    v13 = &v11[v9];
    v14 = v12;
    if ( !v12 )
      goto LABEL_14;
    v19 = nullptr;
    v20 = v12 + 1;
    if ( v12 != -1 )
    {
      s = (char *)qvector_reserve(&s, 0, v12 + 1, 1);
      v19 = s;
    }
    *(_QWORD *)&v46 = v20;
    memmove(v19, v13, v14);
    s[v14] = 0;
    v15 = v46;
    v21 = s;
    v22 = v46 - 1;
    if ( (__int64)v46 - 1 > 1 )
    {
      if ( *((_QWORD *)&v46 + 1) < v22 )
      {
        v21 = (char *)qvector_reserve(&s, s, v46 - 1, 1);
        s = v21;
      }
      *(_QWORD *)&v46 = v22;
      v21[v15 - 2] = 0;
LABEL_14:
      v15 = v46;
      goto LABEL_15;
    }
    if ( s )
    {
      *(_QWORD *)&v46 = 0;
      qfree(s);
      s = nullptr;
      v15 = v46;
      *((_QWORD *)&v46 + 1) = 0;
    }
  }
  else
  {
    v15 = 0;
    s = nullptr;
    v46 = 0;
  }
LABEL_15:
  *(_QWORD *)(a2 + 8) = 0;
  v16 = v15;
  if ( v41 != 11 )
    goto LABEL_16;
  if ( !v15 )
    goto LABEL_31;
  n = s;
  v25 = s;
  v26 = strrchr(s, 44);
  if ( !v26 )
    goto LABEL_18;
  v27 = v26 - n;
  if ( v27 == -1 )
    goto LABEL_18;
  v28 = v15 - 1;
  v29 = v27 + 1;
  nptr = nullptr;
  v48 = 0;
  if ( v27 + 1 > v28 )
    v29 = v28;
  v30 = v28 - v29;
  if ( v28 != v29 )
  {
    v36 = nullptr;
    v37 = v30 + 1;
    if ( v30 != -1 )
    {
      accept = (char *)v30;
      nptr = (char *)qvector_reserve(&nptr, 0, v30 + 1, 1);
      v30 = (size_t)accept;
      v36 = nptr;
    }
    v38 = n;
    *(_QWORD *)&v48 = v37;
    na = v30;
    memmove(v36, &v38[v29], v30);
    nptr[na] = 0;
    v28 = v46;
    if ( !(_QWORD)v46 )
    {
      v25 = s;
      if ( !v27 )
      {
LABEL_66:
        v32 = nullptr;
        goto LABEL_48;
      }
LABEL_65:
      v27 = 0;
      goto LABEL_66;
    }
    v25 = s;
    v28 = v46 - 1;
  }
  ptr = nullptr;
  if ( v28 > v27 )
    v28 = v27;
  v50 = 0;
  if ( !v28 )
    goto LABEL_65;
  v31 = (void *)qvector_reserve(&ptr, 0, v28 + 1, 1);
  *(_QWORD *)&v50 = v28 + 1;
  ptr = v31;
  memmove(v31, v25, v28);
  *((_BYTE *)ptr + v28) = 0;
  v32 = (char *)ptr;
  v27 = *((_QWORD *)&v50 + 1);
  v28 = v50;
  v25 = s;
LABEL_48:
  ptr = nullptr;
  v50 = 0;
  if ( v25 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v25);
    s = v32;
    *(_QWORD *)&v46 = v28;
    *((_QWORD *)&v46 + 1) = v27;
    if ( ptr )
    {
      *(_QWORD *)&v50 = 0;
      qfree(ptr);
    }
  }
  else
  {
    s = v32;
    *(_QWORD *)&v46 = v28;
    *((_QWORD *)&v46 + 1) = v27;
  }
  sub_580AB0((__int64 *)&s, 32);
  sub_580AB0((__int64 *)&nptr, 32);
  v33 = (char *)haystack;
  if ( (_QWORD)v48 )
    v33 = nptr;
  v34 = strtol(v33, nullptr, 0);
  v35 = nptr;
  *(_QWORD *)(a2 + 8) = v34;
  if ( v35 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v35);
  }
  v16 = v46;
LABEL_16:
  if ( v16 )
  {
    n = s;
LABEL_18:
    v17 = n;
    goto LABEL_19;
  }
LABEL_31:
  v17 = haystack;
LABEL_19:
  LODWORD(nptr) = 0;
  ptr = nullptr;
  get_named_type(0, (_DWORD)v17, 3, (unsigned int)&ptr, 0, 0, 0, 0, (__int64)&nptr);
  v18 = (int)nptr;
  if ( (_DWORD)nptr )
  {
    if ( !ptr )
    {
      if ( !under_debugger )
        interr(3442);
      BUG();
    }
    v23 = *(_BYTE *)ptr & 0x3F;
    if ( v41 == 8 )
    {
      if ( v23 != 45 )
        goto LABEL_22;
    }
    else if ( v23 != 13 )
    {
      goto LABEL_22;
    }
  }
  else
  {
    if ( *v17 != 34 || v17[1] != 35 )
    {
LABEL_22:
      if ( s )
      {
        *(_QWORD *)&v46 = 0;
        qfree(s);
      }
      return 0;
    }
    LODWORD(nptr) = strtol(v17 + 2, nullptr, 0);
    v18 = (int)nptr;
  }
  v24 = s;
  *(_DWORD *)(a2 + 16) = v18;
  if ( v24 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v24);
  }
  *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFBF0LL | v41 | a4 & 0xFFFFFFFFFFFFFFF0LL;
  return 1;
}
