/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93B30
// Address: 0x00093B30

//----- (00093B30) --------------------------------------------------------
int __fastcall sub_93B30(int result, int a2, int a3, int a4)
{
  __int64 v4; // r4

  HIDWORD(v4) = 16843029;
  LODWORD(v4) = &off_DBBE8;
  *(_QWORD *)result = v4;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a4;
  return result;
}
// DBBE8: using guessed type _UNKNOWN *off_DBBE8;
