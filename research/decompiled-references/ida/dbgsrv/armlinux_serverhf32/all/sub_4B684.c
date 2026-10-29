/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B684
// Address: 0x0004B684

//----- (0004B684) --------------------------------------------------------
int __fastcall sub_4B684(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 648);
  *(_DWORD *)(a1 + 648) = a2;
  return result;
}
