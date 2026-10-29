unsigned __int64 sub_3D5A10()
{
  __int64 user_idadir; // rax
  __int64 lexer; // rbp
  __int64 v3; // rsi
  _BYTE v4[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v5; // [rsp+1008h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  user_idadir = get_user_idadir();
  qmakepath(v4, 4096, user_idadir, "shortcuts.cfg", 0);
  if ( (unsigned __int8)qfileexist(v4) )
  {
    lexer = create_lexer(0, 0, 0, 1);
    if ( (unsigned int)lex_init_file(lexer, v4) )
    {
      v3 = qstrerror(0xFFFFFFFFLL);
      sub_4B0C20(lexer, v3, 1);
    }
    sub_4B40E0(lexer);
    destroy_lexer(lexer);
  }
  return v5 - __readfsqword(0x28u);
}
