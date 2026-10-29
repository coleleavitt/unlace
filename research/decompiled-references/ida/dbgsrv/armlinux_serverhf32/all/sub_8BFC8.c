/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BFC8
// Address: 0x0008BFC8

//----- (0008BFC8) --------------------------------------------------------
int __fastcall sub_8BFC8(int result)
{
  *(_DWORD *)result = result + 8;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
