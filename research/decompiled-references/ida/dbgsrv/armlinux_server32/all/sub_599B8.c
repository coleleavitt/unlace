/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_599B8
// Address: 0x000599B8

//----- (000599B8) --------------------------------------------------------
int __fastcall sub_599B8(int a1, int a2, int a3)
{
  int v5; // r0

  sub_6572C(a1, a2, 0);
  sub_60C58(a1 + 100, 0, 1000);
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 156) = -1;
  *(_DWORD *)(a1 + 164) = -1;
  *(_DWORD *)(a1 + 100) = &off_D2978;
  *(_DWORD *)a1 = &off_D294C;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_BYTE *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = a3;
  sub_65834(a1);
  v5 = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a1 + 120) = sub_57CC4;
  sub_666F8(v5);
  return a1;
}
// D294C: using guessed type _UNKNOWN *off_D294C;
// D2978: using guessed type _UNKNOWN *off_D2978;
