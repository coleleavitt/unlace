/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98B38
// Address: 0x00098B38

//----- (00098B38) --------------------------------------------------------
int __fastcall sub_98B38(int result, int a2, int a3, int a4)
{
  __int64 v4; // r4

  HIDWORD(v4) = 16777231;
  LODWORD(v4) = &off_DC82C;
  *(_QWORD *)result = v4;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a4;
  return result;
}
// DC82C: using guessed type _UNKNOWN *off_DC82C;
