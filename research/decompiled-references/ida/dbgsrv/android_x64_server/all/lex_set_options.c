/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_set_options
// Address: 0x0000000000082450

//----- (0000000000082450) ----------------------------------------------------
__int64 __fastcall lex_set_options(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 340);
  *(_DWORD *)(a1 + 340) = a2;
  return result;
}
