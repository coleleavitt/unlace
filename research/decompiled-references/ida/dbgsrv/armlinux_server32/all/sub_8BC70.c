/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BC70
// Address: 0x0008BC70

//----- (0008BC70) --------------------------------------------------------
int __fastcall sub_8BC70(int result)
{
  *(_DWORD *)result = result + 8;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
