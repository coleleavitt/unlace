/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062160
// Address: 0x0000000100062160

//----- (0000000100062160) ----------------------------------------------------
__int64 __fastcall sub_100062160(__int64 a1)
{
  *(_QWORD *)a1 = off_10009FB08;
  qmutex_free(*(pthread_mutex_t **)(a1 + 32));
  *(_QWORD *)a1 = off_10009FB40;
  sub_100062328(a1 + 8, *(_QWORD **)(a1 + 16));
  return a1;
}
// 10009FB08: using guessed type __int64 (__fastcall *off_10009FB08[5])();
// 10009FB40: using guessed type __int64 (__fastcall *off_10009FB40[5])();
