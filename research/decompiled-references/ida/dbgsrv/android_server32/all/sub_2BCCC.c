/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BCCC
// Address: 0x0002BCCC

//----- (0002BCCC) --------------------------------------------------------
int __fastcall sub_2BCCC(int a1, int *a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r1

  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = -1;
  *(_DWORD *)(a1 + 32) = a1;
  *(_WORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 172) = a1;
  memset((void *)(a1 + 68), 0, 0x68u);
  *(_DWORD *)(a1 + 292) = 0;
  memset((void *)(a1 + 216), 0, 0x2Au);
  *(_DWORD *)(a1 + 372) = a4;
  *(_DWORD *)(a1 + 368) = a3;
  *(_WORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 352) = -1;
  *(_DWORD *)(a1 + 356) = -1;
  *(_DWORD *)(a1 + 360) = 4;
  *(_DWORD *)(a1 + 364) = a2;
  *(_BYTE *)(a1 + 482) = 0;
  *(_WORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 468) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 384) = sub_2BE70;
  v6 = qlsize(a2);
  *(_DWORD *)(a1 + 380) = v7;
  *(_DWORD *)(a1 + 376) = v6;
  return a1;
}
// 2BDE6: variable 'v7' is possibly undefined
