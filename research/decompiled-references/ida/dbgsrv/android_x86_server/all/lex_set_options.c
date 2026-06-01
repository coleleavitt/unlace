/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_set_options
// Address: 0x0006A820

//----- (0006A820) --------------------------------------------------------
int __cdecl lex_set_options(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 184) = a2;
  return result;
}
