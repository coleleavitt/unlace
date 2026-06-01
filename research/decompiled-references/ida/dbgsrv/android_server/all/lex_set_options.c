/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_set_options
// Address: 0x000000000007D848

//----- (000000000007D848) ----------------------------------------------------
__int64 __fastcall lex_set_options(__int64 a1, int a2)
{
  unsigned int v2; // w8

  v2 = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(a1 + 340) = a2;
  return v2;
}
