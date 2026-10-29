/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C104
// Address: 0x0008C104

//----- (0008C104) --------------------------------------------------------
int __fastcall sub_8C104(int result)
{
  *(_DWORD *)result = result + 8;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
