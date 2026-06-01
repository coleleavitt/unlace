/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806D700
// Address: 0x0806D700

//----- (0806D700) --------------------------------------------------------
int __cdecl sub_806D700(int a1, int *a2, __int64 a3)
{
  __int64 v3; // xmm0_8
  int result; // eax
  int v5; // edx

  v3 = a3;
  *(_WORD *)(a1 + 176) = 0;
  *(_WORD *)(a1 + 204) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = -1;
  *(_DWORD *)(a1 + 32) = a1;
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 172) = a1;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  memset((void *)((a1 + 72) & 0xFFFFFFFC), 0, 4 * ((a1 + 68 - ((a1 + 72) & 0xFFFFFFFC) + 104) >> 2));
  *(_DWORD *)(a1 + 360) = a2;
  *(_WORD *)(a1 + 252) = 0;
  *(_WORD *)(a1 + 284) = 0;
  *(_WORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 356) = 4;
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 468) = 0;
  *(_DWORD *)(a1 + 472) = 0;
  *(_BYTE *)(a1 + 478) = 0;
  *(_DWORD *)(a1 + 380) = sub_8069F00;
  *(_OWORD *)(a1 + 236) = 0;
  *(_OWORD *)(a1 + 268) = 0;
  *(_QWORD *)(a1 + 348) = -1;
  *(_QWORD *)(a1 + 364) = v3;
  result = sub_80CD6E0(a2);
  *(_DWORD *)(a1 + 372) = result;
  *(_DWORD *)(a1 + 376) = v5;
  return result;
}
// 806D8D5: variable 'v5' is possibly undefined
