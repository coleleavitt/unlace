/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C830
// Address: 0x0004C830

//----- (0004C830) --------------------------------------------------------
int __fastcall sub_4C830(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = a2;
  return result;
}
