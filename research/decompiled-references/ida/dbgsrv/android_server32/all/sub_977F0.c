/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_977F0
// Address: 0x000977F0

//----- (000977F0) --------------------------------------------------------
int __fastcall sub_977F0(int result, int a2, int a3, int a4, int a5)
{
  __int64 v5; // r4

  HIDWORD(v5) = 16843050;
  LODWORD(v5) = &off_DC110;
  *(_QWORD *)result = v5;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a4;
  *(_DWORD *)(result + 20) = a5;
  return result;
}
// DC110: using guessed type _UNKNOWN *off_DC110;
