/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E0E8
// Address: 0x000000010005E0E8

//----- (000000010005E0E8) ----------------------------------------------------
__int64 __fastcall sub_10005E0E8(__int64 a1)
{
  *(_QWORD *)a1 = off_10009BAC8;
  qmutex_free(*(pthread_mutex_t **)(a1 + 32));
  *(_QWORD *)a1 = off_10009BB00;
  sub_10005E220(a1 + 8, *(_QWORD **)(a1 + 16));
  return a1;
}
// 10009BAC8: using guessed type __int64 (__fastcall *off_10009BAC8[5])();
// 10009BB00: using guessed type __int64 (__fastcall *off_10009BB00[5])();
