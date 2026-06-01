/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A87D0
// Address: 0x00000000000A87D0

//----- (00000000000A87D0) ----------------------------------------------------
int __fastcall sub_A87D0(const char *a1, __int64 a2)
{
  int result; // eax

  result = atoi(a1);
  *(_WORD *)(a2 + 104) = result;
  return result;
}
