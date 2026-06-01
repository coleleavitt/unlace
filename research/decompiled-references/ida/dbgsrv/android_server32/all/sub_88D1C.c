/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88D1C
// Address: 0x00088D1C

//----- (00088D1C) --------------------------------------------------------
int __fastcall sub_88D1C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(result + 12) = 0;
  return result;
}
