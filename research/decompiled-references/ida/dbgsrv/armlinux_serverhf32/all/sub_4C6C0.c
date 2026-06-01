/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C6C0
// Address: 0x0004C6C0

//----- (0004C6C0) --------------------------------------------------------
int __fastcall sub_4C6C0(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 96) = a2;
  return result;
}
