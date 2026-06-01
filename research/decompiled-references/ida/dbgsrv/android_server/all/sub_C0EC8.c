/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0EC8
// Address: 0x00000000000C0EC8

//----- (00000000000C0EC8) ----------------------------------------------------
__int64 __fastcall sub_C0EC8(__int64 a1)
{
  _QWORD v3[11]; // [xsp+8h] [xbp-58h] BYREF

  v3[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)a1 = a1;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = qmutex_create();
  *(_QWORD *)(a1 + 56) = qmutex_create();
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  sigemptyset((sigset_t *)(a1 + 72));
  sigaddset((sigset_t *)(a1 + 72), 12);
  v3[2] = 0;
  v3[3] = 0;
  v3[0] = 0;
  v3[1] = nullsub_10;
  return sigaction(12, (const struct sigaction *)v3, nullptr);
}
// C10A0: using guessed type __int64 __fastcall nullsub_10();
