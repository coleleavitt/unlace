/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068A20
// Address: 0x0000000100068A20

//----- (0000000100068A20) ----------------------------------------------------
__int64 sub_100068A20()
{
  pthread_mutex_t *v0; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  v0 = qmutex_create();
  qword_1000A5AE0 = 0;
  qword_1000A5AE8 = (__int64)v0;
  qword_1000A5AD8 = 0;
  xmmword_1000A5AF0 = 0u;
  xmmword_1000A5B00 = 0u;
  byte_1000A5B10 = 0;
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return __cxa_atexit((void (__fastcall *)(void *))sub_100065BAC, &qword_1000A5AD8, (void *)&_mh_execute_header);
}
// 100068A70: variable '_8' is possibly undefined
// 100065BAC: using guessed type __int64 __fastcall sub_100065BAC();
// 1000A5AD8: using guessed type __int64 qword_1000A5AD8;
// 1000A5AE0: using guessed type __int64 qword_1000A5AE0;
// 1000A5AE8: using guessed type __int64 qword_1000A5AE8;
// 1000A5AF0: using guessed type __int128 xmmword_1000A5AF0;
// 1000A5B00: using guessed type __int128 xmmword_1000A5B00;
// 1000A5B10: using guessed type char byte_1000A5B10;
