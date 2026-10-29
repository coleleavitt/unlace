__int64 __fastcall sub_7ABAE0(__int64 a1, __int64 a2, char **a3, char a4)
{
  __int64 lexer; // rax
  void *v7; // rbp
  unsigned int inited; // ebx
  int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  lexer = create_lexer(&off_2B3A6E0, 3, 0, 0);
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
      lex_get_file_line(v7, &v10, v11, 0);
      qstrerror(inited);
      sub_35A790(a3);
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
