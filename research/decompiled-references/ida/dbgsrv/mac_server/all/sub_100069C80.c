/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069C80
// Address: 0x0000000100069C80

//----- (0000000100069C80) ----------------------------------------------------
int __fastcall sub_100069C80(const char *a1, __int64 a2)
{
  int result; // eax

  result = atoi(a1);
  *(_WORD *)(a2 + 104) = result;
  return result;
}
