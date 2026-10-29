/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_lexer
// Address: 0x0006A770

//----- (0006A770) --------------------------------------------------------
void *__cdecl create_lexer(char **a1, int a2, int a3, char a4)
{
  void *v4; // esi

  v4 = operator new(0x118u);
  sub_69260((int)v4, a1, a2, a3, a4);
  return v4;
}
