/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_lexer
// Address: 0x0000000100040134

//----- (0000000100040134) ----------------------------------------------------
void *__fastcall create_lexer(char **a1, __int64 a2, __int64 a3, char a4)
{
  void *v8; // x19

  v8 = operator new(0x268u);
  sub_10003F46C((__int64)v8, a1, a2, a3, a4);
  return v8;
}
