/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BFD8
// Address: 0x0008BFD8

//----- (0008BFD8) --------------------------------------------------------
int __fastcall sub_8BFD8(int result)
{
  *(_DWORD *)result = result + 8;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
