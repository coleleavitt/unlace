/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC4C0
// Address: 0x080BC4C0

//----- (080BC4C0) --------------------------------------------------------
int __cdecl sub_80BC4C0(int a1, unsigned __int8 a2, int a3, int a4, int a5)
{
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)a1 = dword_811CDF8;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 32) = a3;
  *(_WORD *)(a1 + 36) = a2;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}
// 811CDF8: using guessed type int dword_811CDF8[2];
