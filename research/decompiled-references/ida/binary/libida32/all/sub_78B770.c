__int64 __fastcall sub_78B770(__int64 a1, __int64 a2, char **a3, char a4)
{
  __int64 lexer; // rax
  void *v7; // rbp
  unsigned int inited; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  lexer = create_lexer(&off_2B10740, 3, 0, 0);
  v7 = (void *)lexer;
  if ( a4 )
  {
    inited = lex_init_file(lexer);
    if ( inited )
      goto LABEL_3;
  }
  else
  {
    inited = lex_init_string(lexer, a2, 0);
    if ( inited )
    {
LABEL_3:
      if ( !a3 )
        goto LABEL_4;
LABEL_8:
      lex_get_file_line(v7, &v12, v13, 0);
      qstrerror(inited, &v12, v10, v11);
      sub_3573A0(a3);
      goto LABEL_4;
    }
  }
  inited = parse_json(a1, v7, 0);
  if ( inited && a3 )
    goto LABEL_8;
LABEL_4:
  destroy_lexer(v7);
  return inited;
}

