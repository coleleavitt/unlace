/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98B08
// Address: 0x00098B08

//----- (00098B08) --------------------------------------------------------
int __fastcall sub_98B08(int result, int a2, int a3, int a4)
{
  *(_BYTE *)(result + 20) = 0;
  *(_DWORD *)result = &off_DC7F8;
  *(_DWORD *)(result + 4) = 16843034;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a4;
  return result;
}
// DC7F8: using guessed type _UNKNOWN *off_DC7F8;
