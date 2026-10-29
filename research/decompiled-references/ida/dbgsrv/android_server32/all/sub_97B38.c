/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97B38
// Address: 0x00097B38

//----- (00097B38) --------------------------------------------------------
int __fastcall sub_97B38(int result, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // r4

  HIDWORD(v5) = 16843050;
  LODWORD(v5) = &off_DC27C;
  *(_QWORD *)result = v5;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a4;
  *(_QWORD *)(result + 20) = a5;
  return result;
}
// DC27C: using guessed type _UNKNOWN *off_DC27C;
