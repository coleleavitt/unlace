/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95AB0
// Address: 0x00095AB0

//----- (00095AB0) --------------------------------------------------------
char __cdecl sub_95AB0(int a1, char a2, int a3, int a4, int a5)
{
  *(_DWORD *)a1 = &off_138B5C;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 32) = a3;
  *(_BYTE *)(a1 + 36) = a2;
  *(_BYTE *)(a1 + 37) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  return a2;
}
// 138B5C: using guessed type int (__cdecl *off_138B5C)(int);
