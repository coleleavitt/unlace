/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100075720
// Address: 0x0000000100075720

//----- (0000000100075720) ----------------------------------------------------
__int64 __fastcall sub_100075720(__int64 a1)
{
  sigaction v3; // [xsp+8h] [xbp-38h] BYREF

  *(_QWORD *)a1 = a1;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = qmutex_create();
  *(_QWORD *)(a1 + 56) = qmutex_create();
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 72) = 0x40000000;
  v3.__sigaction_u.__sa_handler = (void (__cdecl *)(int))nullsub_30;
  *(_QWORD *)&v3.sa_mask = 0;
  sigaction(31, &v3, nullptr);
  return a1;
}
// 100075890: using guessed type __int64 __fastcall nullsub_30();
