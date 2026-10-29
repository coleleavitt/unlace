/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6593C
// Address: 0x0006593C

//----- (0006593C) --------------------------------------------------------
int __fastcall sub_6593C(const char *a1, int a2)
{
  int result; // r0

  result = strtol(a1, nullptr, 10);
  *(_WORD *)(a2 + 56) = result;
  return result;
}
