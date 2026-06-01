/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9400
// Address: 0x00000000000A9400

//----- (00000000000A9400) ----------------------------------------------------
void __fastcall sub_A9400(pthread_mutex_t **ptr)
{
  *ptr = (pthread_mutex_t *)&off_14F5F8;
  qmutex_free(ptr[4]);
  *ptr = (pthread_mutex_t *)&off_14F630;
  sub_A9510((__int64)(ptr + 1), ptr[2]);
  operator delete(ptr);
}
// 14F5F8: using guessed type __int64 (__fastcall *off_14F5F8)();
// 14F630: using guessed type __int64 (__fastcall *off_14F630)();
