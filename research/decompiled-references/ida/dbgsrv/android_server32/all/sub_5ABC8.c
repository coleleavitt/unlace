/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5ABC8
// Address: 0x0005ABC8

//----- (0005ABC8) --------------------------------------------------------
int __fastcall sub_5ABC8(int a1, int a2, int a3)
{
  int v4; // r0

  v4 = sub_6B604(a1, a2, 0);
  sub_67EDC(v4 + 100, 0, 1000);
  *(_DWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 156) = -1;
  *(_DWORD *)(a1 + 164) = -1;
  *(_DWORD *)(a1 + 100) = &off_D9F9C;
  *(_DWORD *)a1 = &off_D9F70;
  memset((void *)(a1 + 176), 0, 0x18u);
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_DWORD *)(a1 + 208) = -1;
  *(_BYTE *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  memset((void *)(a1 + 220), 0, 0x18u);
  *(_DWORD *)(a1 + 248) = a3;
  *(_DWORD *)(a1 + 244) = 0;
  sub_6B6C8(a1);
  *(_DWORD *)(a1 + 120) = sub_5ACD8;
  sub_6C744(*(_DWORD *)(a1 + 68));
  return a1;
}
// D9F70: using guessed type _UNKNOWN *off_D9F70;
// D9F9C: using guessed type _UNKNOWN *off_D9F9C;
