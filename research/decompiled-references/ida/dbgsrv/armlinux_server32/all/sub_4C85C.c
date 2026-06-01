/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C85C
// Address: 0x0004C85C

//----- (0004C85C) --------------------------------------------------------
int __fastcall sub_4C85C(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 108) = a2;
  return result;
}
