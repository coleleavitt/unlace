/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FB42
// Address: 0x0005FB42

//----- (0005FB42) --------------------------------------------------------
int __fastcall sub_5FB42(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 144);
  *(_BYTE *)(result + 388) = 1;
  return result;
}
