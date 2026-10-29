/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000621D4
// Address: 0x00000001000621D4

//----- (00000001000621D4) ----------------------------------------------------
void __fastcall sub_1000621D4(pthread_mutex_t **a1)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a1 = (pthread_mutex_t *)off_10009FB08;
  qmutex_free(a1[4]);
  *a1 = (pthread_mutex_t *)off_10009FB40;
  sub_100062328((__int64)(a1 + 1), a1[2]);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(a1);
}
// 100062244: variable '_18' is possibly undefined
// 10009FB08: using guessed type __int64 (__fastcall *off_10009FB08[5])();
// 10009FB40: using guessed type __int64 (__fastcall *off_10009FB40[5])();
