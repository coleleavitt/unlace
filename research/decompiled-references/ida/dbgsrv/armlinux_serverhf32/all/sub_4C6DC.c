/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C6DC
// Address: 0x0004C6DC

//----- (0004C6DC) --------------------------------------------------------
int __fastcall sub_4C6DC(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 108) = a2;
  return result;
}
