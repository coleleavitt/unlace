/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3B70
// Address: 0x000B3B70

//----- (000B3B70) --------------------------------------------------------
unsigned int __cdecl sub_B3B70(int a1)
{
  _DWORD v2[9]; // [esp+18h] [ebp-24h] BYREF

  v2[4] = __readgsdword(0x14u);
  *(_DWORD *)a1 = a1;
  *(_DWORD *)(a1 + 4) = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a1 + 12;
  *(_DWORD *)(a1 + 16) = a1 + 12;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = qmutex_create();
  *(_DWORD *)(a1 + 28) = qmutex_create();
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 37) |= 8u;
  memset(&v2[1], 0, 12);
  v2[0] = sub_B3D80;
  sigaction(12, (const struct sigaction *)v2, nullptr);
  return __readgsdword(0x14u);
}
