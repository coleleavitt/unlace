/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FB34
// Address: 0x0005FB34

//----- (0005FB34) --------------------------------------------------------
int __fastcall sub_5FB34(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 244);
  *(_BYTE *)(result + 388) = 1;
  return result;
}
