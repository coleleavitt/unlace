__int64 __fastcall sub_6B4A30(__int64 a1, __int64 a2, __int64 a3)
{
  void *lexer; // rbx

  lexer = (void *)create_lexer(&unk_238E3A0, 0, 0, 0);
  if ( !(unsigned int)lex_init_string(lexer, a3, 0) )
    lex_get_token((int)lexer);
  if ( lexer )
    destroy_lexer(lexer);
  return 0;
}

