/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C114
// Address: 0x0008C114

//----- (0008C114) --------------------------------------------------------
int __fastcall sub_8C114(int result)
{
  *(_DWORD *)result = result + 8;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
