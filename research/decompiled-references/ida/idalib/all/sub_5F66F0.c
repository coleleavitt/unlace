unsigned __int64 __fastcall sub_5F66F0(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 file_line; // rax
  const char *v6; // rbp
  const char *v7; // rax
  const char *v8; // r13
  __int64 v9; // r15
  size_t v10; // rax
  size_t v11; // r8
  size_t v12; // r9
  _BYTE *v13; // rsi
  unsigned __int64 v14; // rdx
  const char *v15; // r13
  __int64 v16; // rdi
  const char *v17; // rdi
  unsigned int i; // ebp
  const char *v19; // r14
  __int64 v20; // rdi
  void *v21; // rdi
  const char *error_data; // rax
  const char *v24; // r14
  __int64 v25; // rdi
  unsigned __int64 v26; // [rsp+8h] [rbp-80h]
  size_t v27; // [rsp+10h] [rbp-78h]
  size_t v28; // [rsp+18h] [rbp-70h]
  int v29; // [rsp+2Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 240);
  v32 = __readfsqword(0x28u);
  file_line = lex_get_file_line(v3, &v29, 0, 0);
  ptr = nullptr;
  v6 = (const char *)file_line;
  v31 = 0;
  if ( file_line )
    sub_35A790((char **)&ptr);
  if ( a2 > 0 )
  {
    v7 = (const char *)qstrerror((unsigned int)a2);
    v8 = v7;
    if ( !v7 )
      goto LABEL_8;
    v9 = v31;
    v10 = strlen(v7);
    v11 = v10;
    v12 = v10;
    if ( v9 )
    {
      --v9;
      v13 = ptr;
      v12 = v10 + v9;
      v14 = v10 + v9 + 1;
      if ( *((_QWORD *)&v31 + 1) >= v14 )
        goto LABEL_7;
    }
    else
    {
      v13 = ptr;
      v14 = v10 + 1;
      if ( *((_QWORD *)&v31 + 1) >= v10 + 1 )
      {
LABEL_7:
        *(_QWORD *)&v31 = v14;
        v13[v12] = 0;
        memmove((char *)ptr + v9, v8, v11);
        goto LABEL_8;
      }
    }
    v28 = v10;
    v27 = v12;
    v26 = v14;
    ptr = (void *)qvector_reserve(&ptr, v13, v14, 1);
    v11 = v28;
    v13 = ptr;
    v12 = v27;
    v14 = v26;
    goto LABEL_7;
  }
  sub_35A910((__int64 *)&ptr);
LABEL_8:
  v15 = haystack;
  if ( (_QWORD)v31 )
    v15 = (const char *)ptr;
  v16 = *(_QWORD *)(a1 + 504);
  if ( v16 )
    sub_391AE0(v16, (__int64)"\n%s\n", v15);
  (*(void (**)(const char *, ...))(a1 + 272))("%s\n", v15);
  if ( ((a2 - 52) & 0xFFFFFFEF) == 0 )
  {
    error_data = (const char *)get_error_data(0);
    if ( sub_5E6BA0(a1, a2 == 68, error_data) )
    {
      sub_35A790((char **)&ptr);
      v24 = haystack;
      if ( (_QWORD)v31 )
        v24 = (const char *)ptr;
      v25 = *(_QWORD *)(a1 + 504);
      if ( v25 )
        sub_391AE0(v25, (__int64)"\n%s\n", v24);
      (*(void (**)(const char *, ...))(a1 + 272))("%s\n", v24);
    }
  }
  v17 = *(const char **)(a1 + 384);
  if ( v17 == v6 && v17 && !strcmp(v17, v6) )
  {
    v21 = ptr;
    if ( !ptr )
      return v32 - __readfsqword(0x28u);
    goto LABEL_23;
  }
  *(_QWORD *)(a1 + 384) = v6;
  for ( i = 1; lex_get_file_line(*(_QWORD *)(a1 + 240), &v29, 0, i); ++i )
  {
    sub_35A790((char **)&ptr);
    v19 = haystack;
    if ( (_QWORD)v31 )
      v19 = (const char *)ptr;
    v20 = *(_QWORD *)(a1 + 504);
    if ( v20 )
      sub_391AE0(v20, (__int64)"\n%s\n", v19);
    (*(void (**)(const char *, ...))(a1 + 272))("%s\n", v19);
  }
  v21 = ptr;
  if ( ptr )
  {
LABEL_23:
    *(_QWORD *)&v31 = 0;
    qfree(v21);
  }
  return v32 - __readfsqword(0x28u);
}
