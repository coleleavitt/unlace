/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AFA8
// Address: 0x0008AFA8

//----- (0008AFA8) --------------------------------------------------------
int __fastcall sub_8AFA8(int a1)
{
  *(_DWORD *)(a1 + 2860) = &off_DB344;
  *(_DWORD *)(a1 + 2872) = &dword_DB358;
  *(_WORD *)(a1 + 5816) = 0;
  *(_DWORD *)(a1 + 5820) = 0;
  *(_DWORD *)(a1 + 2848) = &off_DB330;
  *(_DWORD *)(a1 + 2840) = a1 + 148;
  *(_DWORD *)(a1 + 2852) = a1 + 2440;
  *(_DWORD *)(a1 + 2864) = a1 + 2684;
  return sub_8B01C(a1);
}
// DB330: using guessed type _UNKNOWN *off_DB330;
// DB358: using guessed type int dword_DB358;
