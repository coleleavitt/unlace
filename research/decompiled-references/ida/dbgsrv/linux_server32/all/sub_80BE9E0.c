/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BE9E0
// Address: 0x080BE9E0

//----- (080BE9E0) --------------------------------------------------------
int sub_80BE9E0()
{
  int result; // eax

  result = operator new(0x38u);
  *(_DWORD *)result = &off_811C6CC;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = -1;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = -1;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = "";
  *(_DWORD *)(result + 48) = 0;
  *(_BYTE *)(result + 52) = 0;
  return result;
}
// 811C6CC: using guessed type int (__cdecl *off_811C6CC)(int);
