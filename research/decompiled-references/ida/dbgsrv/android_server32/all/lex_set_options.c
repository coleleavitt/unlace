/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_set_options
// Address: 0x0004EEC8

//----- (0004EEC8) --------------------------------------------------------
int __fastcall lex_set_options(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 184) = a2;
  return v2;
}
