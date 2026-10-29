__int64 __fastcall sub_6D4FD0(__int64 a1, __int64 a2, __int64 a3)
{
  void *lexer; // rbx

  lexer = (void *)create_lexer(&unk_23B2500, 0, 0, 0);
  if ( !(unsigned int)lex_init_string(lexer, a3, 0) )
    lex_get_token((int)lexer);
  if ( lexer )
    destroy_lexer(lexer);
  return 0;
}
