/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80650
// Address: 0x00080650

//----- (00080650) --------------------------------------------------------
int __fastcall sub_80650(int a1)
{
  pthread_mutex_t *v2; // r0
  _DWORD _8[10]; // [sp+8h] [bp-14h] BYREF

  *(_DWORD *)a1 = a1;
  *(_DWORD *)(a1 + 4) = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a1 + 12;
  *(_DWORD *)(a1 + 16) = a1 + 12;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = qmutex_create();
  v2 = qmutex_create();
  *(_BYTE *)(a1 + 39) = 0;
  *(_BYTE *)(a1 + 38) = 0;
  *(_BYTE *)(a1 + 37) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 28) = v2;
  *(_DWORD *)(a1 + 36) |= 0x800u;
  memset(&_8[1], 0, 12);
  _8[0] = nullsub_7;
  sigaction(12, (const struct sigaction *)_8, nullptr);
  return a1;
}
// 807A0: using guessed type int nullsub_7();
