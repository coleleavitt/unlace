/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96D58
// Address: 0x00096D58

//----- (00096D58) --------------------------------------------------------
int __fastcall sub_96D58(int result, int a2, int a3, int a4)
{
  __int64 v4; // r4

  HIDWORD(v4) = 16843050;
  LODWORD(v4) = &off_DBFA4;
  *(_QWORD *)result = v4;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a4;
  return result;
}
// DBFA4: using guessed type _UNKNOWN *off_DBFA4;
