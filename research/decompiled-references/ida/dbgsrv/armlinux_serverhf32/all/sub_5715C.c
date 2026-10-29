/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5715C
// Address: 0x0005715C

//----- (0005715C) --------------------------------------------------------
int __fastcall sub_5715C(int a1, int a2)
{
  sub_65BD0(a1, a2);
  *(_WORD *)(a1 + 56) = 23946;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)a1 = &off_CFE08;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_BYTE *)(a1 + 58) = 0;
  return a1;
}
// CFE08: using guessed type _UNKNOWN *off_CFE08;
