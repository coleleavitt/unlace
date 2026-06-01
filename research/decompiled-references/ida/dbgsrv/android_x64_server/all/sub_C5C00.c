/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5C00
// Address: 0x00000000000C5C00

//----- (00000000000C5C00) ----------------------------------------------------
unsigned __int64 __fastcall sub_C5C00(__int64 a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v3; // [rsp+10h] [rbp-48h]
  unsigned __int64 v4; // [rsp+28h] [rbp-30h]

  v4 = __readfsqword(0x28u);
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
  v2[0] = 0;
  v3 = 0;
  v2[1] = nullsub_27;
  sigaction(12, (const struct sigaction *)v2, nullptr);
  return __readfsqword(0x28u);
}
// C5DF0: using guessed type __int64 __fastcall nullsub_27();
