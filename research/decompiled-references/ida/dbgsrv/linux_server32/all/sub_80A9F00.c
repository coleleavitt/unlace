/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A9F00
// Address: 0x080A9F00

//----- (080A9F00) --------------------------------------------------------
int __cdecl sub_80A9F00(int a1, int a2, int a3)
{
  sub_80BA1E0(a1, a2, 0);
  sub_80B7990(a1 + 100, 0, 1000);
  *(_DWORD *)(a1 + 164) = -1;
  *(_DWORD *)a1 = &off_811CC00;
  *(_DWORD *)(a1 + 100) = off_811CC2C;
  *(_DWORD *)(a1 + 156) = -1;
  *(_DWORD *)(a1 + 200) = -1;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_BYTE *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = a3;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 228) = 0;
  sub_80BA350(a1);
  *(_DWORD *)(a1 + 120) = sub_80A5C70;
  return sub_80BC000(*(_DWORD *)(a1 + 68));
}
// 811CC00: using guessed type int (__cdecl *off_811CC00)(int);
// 811CC2C: using guessed type int (__cdecl *[2])(int);
