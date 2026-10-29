/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BDEC
// Address: 0x0006BDEC

//----- (0006BDEC) --------------------------------------------------------
int __fastcall sub_6BDEC(const char *a1, int a2)
{
  int result; // r0

  result = atoi(a1);
  *(_WORD *)(a2 + 56) = result;
  return result;
}
