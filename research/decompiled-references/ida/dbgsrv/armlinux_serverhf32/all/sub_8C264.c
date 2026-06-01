/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C264
// Address: 0x0008C264

//----- (0008C264) --------------------------------------------------------
int __fastcall sub_8C264(int result)
{
  _BYTE *v1; // r2

  v1 = *(_BYTE **)result;
  *(_DWORD *)(result + 4) = 0;
  *v1 = 0;
  return result;
}
