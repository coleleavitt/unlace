/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B814
// Address: 0x0004B814

//----- (0004B814) --------------------------------------------------------
int __fastcall sub_4B814(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 648);
  *(_DWORD *)(a1 + 648) = a2;
  return result;
}
