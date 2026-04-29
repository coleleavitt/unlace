unsigned __int64 __fastcall sub_25DB40(
        void **a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char *a5,
        _QWORD *a6,
        unsigned int a7)
{
  char *v8; // rcx
  char v9; // al
  __int64 v10; // rdi
  void **v11; // r12
  __int64 v12; // rsi
  void *v13; // rdi
  char *v14; // rax
  char *v15; // rsi
  char v16; // dl
  char *v18; // rdi
  char *v19; // rax
  char *v20; // rsi
  char v21; // dl
  __int64 v22; // rdi
  char *v23; // r12
  int v24; // eax
  size_t v25; // rax
  char *v26; // rdx
  char *v27; // rcx
  char v28; // al
  size_t v29; // r14
  char *v34; // [rsp+28h] [rbp-488h]
  char *v35; // [rsp+30h] [rbp-480h] BYREF
  __int128 v36; // [rsp+38h] [rbp-478h]
  void *v37; // [rsp+50h] [rbp-460h] BYREF
  __int128 v38; // [rsp+58h] [rbp-458h]
  char s[1023]; // [rsp+70h] [rbp-440h] BYREF
  char v40; // [rsp+46Fh] [rbp-41h] BYREF
  char v41; // [rsp+470h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+478h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v34 = s;
  while ( 1 )
  {
    v8 = v34;
    v9 = *a5++;
    *v34 = v9;
    if ( !v9 )
      break;
    ++v34;
    if ( v8 + 1 == &v40 )
    {
      v40 = 0;
      break;
    }
  }
  if ( a7 <= 0x40 || (a7 & 0x40000000) != 0 )
  {
    v35 = nullptr;
    v36 = 0;
    tag_addr(&v35, a7 | 0x80000000, 0);
    if ( v34 >= &v41 )
    {
      if ( !under_debugger )
        sub_37DDE0(520);
LABEL_51:
      BUG();
    }
    v18 = v35;
    v19 = v35;
    if ( v34 == &v40 )
    {
LABEL_39:
      v40 = 0;
      v34 = &v40;
      if ( !v18 )
        goto LABEL_6;
    }
    else
    {
      while ( 1 )
      {
        v20 = v34;
        v21 = *v19++;
        *v34 = v21;
        if ( !v21 )
          break;
        ++v34;
        if ( v20 + 1 == &v40 )
          goto LABEL_39;
      }
      if ( !v18 )
        goto LABEL_6;
    }
    *(_QWORD *)&v36 = 0;
    qfree(v18);
  }
LABEL_6:
  v10 = a6[5];
  v11 = a1;
  if ( v10 )
    v11 = (void **)sub_2526F0(v10, a1);
  v12 = *((int *)v11 + 4);
  v37 = nullptr;
  v38 = 0;
  tag_addr(&v37, v12, 0);
  if ( v34 >= &v41 )
  {
    if ( !under_debugger )
      sub_37DDE0(520);
    goto LABEL_51;
  }
  v13 = v37;
  v14 = (char *)v37;
  if ( v34 == &v40 )
  {
LABEL_26:
    v40 = 0;
    v34 = &v40;
    if ( !v13 )
      goto LABEL_16;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v15 = v34;
    v16 = *v14++;
    *v34 = v16;
    if ( !v16 )
      break;
    ++v34;
    if ( v15 + 1 == &v40 )
      goto LABEL_26;
  }
  if ( v13 )
  {
LABEL_14:
    *(_QWORD *)&v38 = 0;
    qfree(v13);
  }
  if ( v34 >= &v41 )
  {
    if ( !under_debugger )
      sub_37DDE0(519);
    goto LABEL_51;
  }
LABEL_16:
  *v34 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a6 + 8LL))(a6)
    || (v22 = a6[5]) == 0
    || (v37 = *v11, LODWORD(v38) = a7, (v23 = (char *)sub_252EF0(v22, (unsigned __int64 *)&v37, 0)) == nullptr) )
  {
    (*(void (**)(_QWORD *, _QWORD, char *, ...))*a6)(a6, a4, "%s\n", s);
    return v42 - __readfsqword(0x28u);
  }
  v24 = *(_DWORD *)(a2 + 596) - a3 - a4;
  if ( v24 > 0 )
    add_spaces(s, 1024, v24);
  v25 = strlen(s);
  v26 = &s[v25];
  if ( &s[v25] >= &v41 )
  {
    if ( !under_debugger )
      sub_37DDE0(520);
    goto LABEL_51;
  }
  v27 = (char *)&unk_405ED6;
  if ( v25 == 1023 )
  {
LABEL_42:
    *v26 = 0;
  }
  else
  {
    while ( 1 )
    {
      v28 = *v27++;
      *v26 = v28;
      if ( !v28 )
        break;
      if ( ++v26 == &v40 )
        goto LABEL_42;
    }
  }
  v37 = nullptr;
  v38 = 0;
  v29 = strlen(s);
  v37 = (void *)qvector_reserve(&v37, 0, v29 + 1, 1);
  *(_QWORD *)&v38 = v29 + 1;
  memmove(v37, s, v29);
  *((_BYTE *)v37 + v29) = 0;
  sub_25ADE0(
    (__int64)a1,
    a7,
    a4,
    (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a6,
    (__int64 *)&v37,
    *(_DWORD *)(a2 + 596) - a4,
    *(_DWORD *)(a2 + 596) - a4 + 3,
    v23);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  return v42 - __readfsqword(0x28u);
}
