/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_lexer
// Address: 0x0000000100045AC0

//----- (0000000100045AC0) ----------------------------------------------------
void *__fastcall create_lexer(char **a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  void *v6; // rbx

  v6 = operator new(0x240u);
  sub_100044C50((__int64)v6, a1, a2, a3, a4);
  return v6;
}
