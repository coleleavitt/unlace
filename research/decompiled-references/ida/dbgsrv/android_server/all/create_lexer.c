/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_lexer
// Address: 0x000000000007D7C4

//----- (000000000007D7C4) ----------------------------------------------------
void *__fastcall create_lexer(char **a1, unsigned __int64 a2, __int64 a3, int a4)
{
  void *v8; // x19
  int v9; // w5
  int v10; // w6
  int v11; // w7

  v8 = operator new(0x2A8u);
  sub_7C780((__int64)v8, a1, a2, a3, a4, v9, v10, v11);
  return v8;
}
// 7D7FC: variable 'v9' is possibly undefined
// 7D7FC: variable 'v10' is possibly undefined
// 7D7FC: variable 'v11' is possibly undefined
