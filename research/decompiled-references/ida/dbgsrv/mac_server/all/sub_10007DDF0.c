/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007DDF0
// Address: 0x000000010007DDF0

//----- (000000010007DDF0) ----------------------------------------------------
__int64 __fastcall sub_10007DDF0(__int64 a1)
{
  sigaction v2; // [rsp+0h] [rbp-30h] BYREF

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
  *(_QWORD *)&v2.sa_mask = 0;
  v2.__sigaction_u.__sa_handler = (void (__cdecl *)(int))sub_10007DF60;
  sigaction(31, &v2, nullptr);
  return __stack_chk_guard;
}
