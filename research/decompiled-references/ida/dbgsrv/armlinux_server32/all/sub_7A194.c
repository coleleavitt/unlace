/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A194
// Address: 0x0007A194

//----- (0007A194) --------------------------------------------------------
int __fastcall sub_7A194(int a1)
{
  int v2; // r3
  struct sigaction v4; // [sp+0h] [bp-90h] BYREF
  int v5; // [sp+8Ch] [bp-4h]

  *(_DWORD *)(a1 + 4) = a1;
  *(_DWORD *)(a1 + 12) = a1 + 12;
  v2 = _stack_chk_guard;
  *(_DWORD *)(a1 + 16) = a1 + 12;
  *(_DWORD *)a1 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v5 = v2;
  *(_DWORD *)(a1 + 24) = sub_7A070();
  *(_DWORD *)(a1 + 28) = sub_7A070();
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 164) = 0;
  sigemptyset((sigset_t *)(a1 + 36));
  sigaddset((sigset_t *)(a1 + 36), 12);
  memset(&v4.sa_mask, 0, 0x88u);
  v4.sa_handler = (__sighandler_t)nullsub_5;
  sigaction(12, &v4, nullptr);
  return a1;
}
// 799E4: using guessed type int nullsub_5();
