/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A93B0
// Address: 0x00000000000A93B0

//----- (00000000000A93B0) ----------------------------------------------------
void __fastcall sub_A93B0(__int64 a1)
{
  *(_QWORD *)a1 = &off_14F5F8;
  qmutex_free(*(pthread_mutex_t **)(a1 + 32));
  *(_QWORD *)a1 = &off_14F630;
  sub_A9510(a1 + 8, *(_QWORD **)(a1 + 16));
}
// 14F5F8: using guessed type __int64 (__fastcall *off_14F5F8)();
// 14F630: using guessed type __int64 (__fastcall *off_14F630)();
