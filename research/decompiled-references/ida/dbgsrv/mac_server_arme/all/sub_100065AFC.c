/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065AFC
// Address: 0x0000000100065AFC

//----- (0000000100065AFC) ----------------------------------------------------
__int64 sub_100065AFC()
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  xmmword_1000A58D0 = 0u;
  xmmword_1000A58E0 = 0u;
  xmmword_1000A58B0 = 0u;
  xmmword_1000A58C0 = 0u;
  xmmword_1000A5890 = 0u;
  xmmword_1000A58A0 = 0u;
  __cxa_atexit((void (__fastcall *)(void *))sub_10006562C, &xmmword_1000A5890, (void *)&_mh_execute_header);
  qword_1000A5AC8 = 0;
  qword_1000A5AD0 = 0;
  qword_1000A5AC0 = 0;
  qword_1000A5AB8 = (__int64)qmutex_create();
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return __cxa_atexit((void (__fastcall *)(void *))sub_100065630, &qword_1000A5AB8, (void *)&_mh_execute_header);
}
// 100065B84: variable '_18' is possibly undefined
// 1000A5890: using guessed type __int128 xmmword_1000A5890;
// 1000A58A0: using guessed type __int128;
// 1000A58B0: using guessed type __int128 xmmword_1000A58B0;
// 1000A58C0: using guessed type __int128 xmmword_1000A58C0;
// 1000A58D0: using guessed type __int128 xmmword_1000A58D0;
// 1000A58E0: using guessed type __int128 xmmword_1000A58E0;
// 1000A5AB8: using guessed type __int64 qword_1000A5AB8;
// 1000A5AC0: using guessed type __int64 qword_1000A5AC0;
// 1000A5AC8: using guessed type __int64 qword_1000A5AC8;
// 1000A5AD0: using guessed type __int64 qword_1000A5AD0;
