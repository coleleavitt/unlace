/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A4D10
// Address: 0x080A4D10

//----- (080A4D10) --------------------------------------------------------
int __cdecl sub_80A4D10(int a1, char a2)
{
  sub_80BAD20((_DWORD *)a1, a2);
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)a1 = &off_811C11C;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_WORD *)(a1 + 56) = 23946;
  *(_BYTE *)(a1 + 58) = 0;
  return 23946;
}
// 811C11C: using guessed type int (__cdecl *off_811C11C)(int);
