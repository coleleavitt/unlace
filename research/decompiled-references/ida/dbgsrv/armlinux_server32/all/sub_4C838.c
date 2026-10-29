/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C838
// Address: 0x0004C838

//----- (0004C838) --------------------------------------------------------
int __fastcall sub_4C838(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 92) = a2;
  return result;
}
