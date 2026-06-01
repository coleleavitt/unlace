/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_657BC
// Address: 0x000657BC

//----- (000657BC) --------------------------------------------------------
int __fastcall sub_657BC(const char *a1, int a2)
{
  int result; // r0

  result = strtol(a1, nullptr, 10);
  *(_WORD *)(a2 + 56) = result;
  return result;
}
