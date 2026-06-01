/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C6C8
// Address: 0x0004C6C8

//----- (0004C6C8) --------------------------------------------------------
int __fastcall sub_4C6C8(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(a1 + 100) = a2;
  return result;
}
