/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97A48
// Address: 0x00097A48

//----- (00097A48) --------------------------------------------------------
int __fastcall sub_97A48(int result, int a2, int a3, int a4, __int64 a5, char a6, char a7)
{
  __int64 v7; // r4

  HIDWORD(v7) = 16843050;
  LODWORD(v7) = &off_DC248;
  *(_BYTE *)(result + 28) = a6;
  *(_BYTE *)(result + 29) = a7;
  *(_QWORD *)result = v7;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a4;
  *(_QWORD *)(result + 20) = a5;
  return result;
}
// DC248: using guessed type _UNKNOWN *off_DC248;
