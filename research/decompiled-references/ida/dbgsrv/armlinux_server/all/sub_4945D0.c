/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4945D0
// Address: 0x00000000004945D0

//----- (00000000004945D0) ----------------------------------------------------
__int64 __fastcall sub_4945D0(_QWORD *a1)
{
  _QWORD *v1; // x19
  struct sigaction act; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v4; // [xsp+C8h] [xbp-8h]

  v1 = a1;
  a1[2] = 0;
  a1[3] = a1 + 3;
  *a1 = a1;
  a1[1] = a1;
  a1[4] = a1 + 3;
  a1[5] = 0;
  a1[6] = sub_494418();
  v1[7] = sub_494418();
  v1[8] = 0;
  v1 += 9;
  *((_BYTE *)v1 + 128) = 0;
  sigemptyset((sigset_t *)v1);
  sigaddset((sigset_t *)v1, 12);
  memset(&act.sa_mask, 0, 144);
  act.sa_handler = (__sighandler_t)nullsub_3;
  sigaction(12, &act, nullptr);
  return v4 ^ _stack_chk_guard;
}
// 4938F8: using guessed type __int64 __fastcall nullsub_3();
