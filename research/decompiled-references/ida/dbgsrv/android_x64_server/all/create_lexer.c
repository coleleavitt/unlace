/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_lexer
// Address: 0x00000000000823D0

//----- (00000000000823D0) ----------------------------------------------------
void *__fastcall create_lexer(char **a1, __int64 a2, __int64 a3, char a4)
{
  void *v6; // rbx

  v6 = operator new(0x200u);
  sub_81030((__int64)v6, a1, a2, a3, a4);
  return v6;
}
