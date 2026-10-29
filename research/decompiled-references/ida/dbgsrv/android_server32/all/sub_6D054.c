/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D054
// Address: 0x0006D054

//----- (0006D054) --------------------------------------------------------
int __fastcall sub_6D054(int result, char a2, int a3, int a4, int a5)
{
  *(_BYTE *)(result + 36) = a2;
  *(_BYTE *)(result + 37) = 0;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 24) = a4;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 32) = a3;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)result = &off_DA9A8;
  return result;
}
// DA9A8: using guessed type _UNKNOWN *off_DA9A8;
