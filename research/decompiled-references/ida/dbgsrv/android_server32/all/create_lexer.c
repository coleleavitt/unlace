/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_lexer
// Address: 0x0004EE7E

//----- (0004EE7E) --------------------------------------------------------
void *__fastcall create_lexer(const char **a1, int a2, int a3, int a4)
{
  void *v7; // r4

  v7 = operator new(0x1F0u);
  sub_4E0D4((int)v7, a1, a2, a3, a4);
  return v7;
}
