/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B7A8
// Address: 0x0004B7A8

//----- (0004B7A8) --------------------------------------------------------
int __fastcall sub_4B7A8(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 192) = a2;
  return result;
}
