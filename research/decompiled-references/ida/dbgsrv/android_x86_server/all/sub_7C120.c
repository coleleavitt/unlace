/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C120
// Address: 0x0007C120

//----- (0007C120) --------------------------------------------------------
int __cdecl sub_7C120(int a1, int a2, int a3)
{
  sub_92BE0(a1, a2, 0);
  sub_8F9E0(a1 + 100, 0, 1000);
  *(_DWORD *)a1 = &off_138314;
  *(_DWORD *)(a1 + 100) = off_138340;
  *(_DWORD *)(a1 + 156) = -1;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = -1;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_BYTE *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = a3;
  sub_92D90((_DWORD *)a1);
  *(_DWORD *)(a1 + 120) = sub_7C360;
  return sub_94D40(*(_DWORD *)(a1 + 68), 100, (int)sub_7C400, a1);
}
// 138314: using guessed type int (__cdecl *off_138314)(int);
// 138340: using guessed type int (__cdecl *off_138340[2])(int);
