unsigned __int64 __fastcall sub_5DA850(__int64 a1, int a2)
{
  __int64 v3; // rdi
  const char *v5; // rsi
  __int64 file_line; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const char *v9; // rbp
  const char *v10; // rax
  const char *v11; // r13
  __int64 v12; // r15
  size_t v13; // rax
  size_t v14; // r8
  size_t v15; // r9
  _BYTE *v16; // rsi
  unsigned __int64 v17; // rdx
  const char *v18; // r13
  const char *v19; // rdi
  unsigned int i; // ebp
  const char *v21; // r14
  void *v22; // rdi
  const char *error_data; // rax
  const char *v25; // r14
  unsigned __int64 v26; // [rsp+8h] [rbp-80h]
  size_t v27; // [rsp+10h] [rbp-78h]
  size_t v28; // [rsp+18h] [rbp-70h]
  int v29; // [rsp+2Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 232);
  v32 = __readfsqword(0x28u);
  v5 = (const char *)&v29;
  file_line = lex_get_file_line(v3, &v29, 0, 0);
  ptr = nullptr;
  v9 = (const char *)file_line;
  v31 = 0;
  if ( file_line )
  {
    v5 = "Error %s:%d: ";
    sub_3573A0((char **)&ptr);
  }
  if ( a2 > 0 )
  {
    v10 = (const char *)qstrerror((unsigned int)a2, v5, v7, v8);
    v11 = v10;
    if ( !v10 )
      goto LABEL_8;
    v12 = v31;
    v13 = strlen(v10);
    v14 = v13;
    v15 = v13;
    if ( v12 )
    {
      --v12;
      v16 = ptr;
      v15 = v13 + v12;
      v17 = v13 + v12 + 1;
      if ( *((_QWORD *)&v31 + 1) >= v17 )
        goto LABEL_7;
    }
    else
    {
      v16 = ptr;
      v17 = v13 + 1;
      if ( *((_QWORD *)&v31 + 1) >= v13 + 1 )
      {
LABEL_7:
        *(_QWORD *)&v31 = v17;
        v16[v15] = 0;
        memmove((char *)ptr + v12, v11, v14);
        goto LABEL_8;
      }
    }
    v28 = v13;
    v27 = v15;
    v26 = v17;
    ptr = (void *)qvector_reserve(&ptr, v16, v17, 1);
    v14 = v28;
    v16 = ptr;
    v15 = v27;
    v17 = v26;
    goto LABEL_7;
  }
  sub_357520((__int64 *)&ptr);
LABEL_8:
  v18 = haystack;
  if ( (_QWORD)v31 )
    v18 = (const char *)ptr;
  if ( *(_QWORD *)(a1 + 496) )
    sub_38CDA0();
  (*(void (**)(const char *, ...))(a1 + 264))("%s\n", v18);
  if ( ((a2 - 52) & 0xFFFFFFEF) == 0 )
  {
    error_data = (const char *)get_error_data(0);
    if ( sub_5CADC0(a1, a2 == 68, error_data) )
    {
      sub_3573A0((char **)&ptr);
      v25 = haystack;
      if ( (_QWORD)v31 )
        v25 = (const char *)ptr;
      if ( *(_QWORD *)(a1 + 496) )
        sub_38CDA0();
      (*(void (**)(const char *, ...))(a1 + 264))("%s\n", v25);
    }
  }
  v19 = *(const char **)(a1 + 376);
  if ( v19 == v9 && v19 && !strcmp(v19, v9) )
  {
    v22 = ptr;
    if ( !ptr )
      return v32 - __readfsqword(0x28u);
    goto LABEL_23;
  }
  *(_QWORD *)(a1 + 376) = v9;
  for ( i = 1; lex_get_file_line(*(_QWORD *)(a1 + 232), &v29, 0, i); ++i )
  {
    sub_3573A0((char **)&ptr);
    v21 = haystack;
    if ( (_QWORD)v31 )
      v21 = (const char *)ptr;
    if ( *(_QWORD *)(a1 + 496) )
      sub_38CDA0();
    (*(void (**)(const char *, ...))(a1 + 264))("%s\n", v21);
  }
  v22 = ptr;
  if ( ptr )
  {
LABEL_23:
    *(_QWORD *)&v31 = 0;
    qfree(v22);
  }
  return v32 - __readfsqword(0x28u);
}

