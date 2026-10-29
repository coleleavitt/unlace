/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BB24
// Address: 0x0008BB24

//----- (0008BB24) --------------------------------------------------------
int __fastcall sub_8BB24(int result)
{
  *(_DWORD *)result = result + 8;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
