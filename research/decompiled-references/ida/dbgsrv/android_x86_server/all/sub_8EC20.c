/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EC20
// Address: 0x0008EC20

//----- (0008EC20) --------------------------------------------------------
int (__cdecl **__cdecl sub_8EC20(int a1, char a2))(int)
{
  sub_934C0((_DWORD *)a1, a2);
  *(_DWORD *)a1 = &off_1386D4;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 69) = 0;
  *(_DWORD *)(a1 + 65) = 0;
  *(_WORD *)(a1 + 56) = 23946;
  *(_BYTE *)(a1 + 58) = 0;
  return &off_1386D4;
}
// 1386D4: using guessed type int (__cdecl *off_1386D4)(int);
