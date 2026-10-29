/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E138
// Address: 0x000000010005E138

//----- (000000010005E138) ----------------------------------------------------
void __fastcall sub_10005E138(pthread_mutex_t **a1)
{
  *a1 = (pthread_mutex_t *)off_10009BAC8;
  qmutex_free(a1[4]);
  *a1 = (pthread_mutex_t *)off_10009BB00;
  sub_10005E220((__int64)(a1 + 1), a1[2]);
  operator delete(a1);
}
// 10009BAC8: using guessed type __int64 (__fastcall *off_10009BAC8[5])();
// 10009BB00: using guessed type __int64 (__fastcall *off_10009BB00[5])();
