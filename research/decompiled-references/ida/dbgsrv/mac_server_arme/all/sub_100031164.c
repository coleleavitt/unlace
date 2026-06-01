/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100031164
// Address: 0x0000000100031164

//----- (0000000100031164) ----------------------------------------------------
__int64 sub_100031164()
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  xmmword_1000A5988 = 0u;
  xmmword_1000A5998 = 0u;
  xmmword_1000A5978 = 0u;
  __cxa_atexit((void (__fastcall *)(void *))sub_10002D1B4, &xmmword_1000A5978, (void *)&_mh_execute_header);
  sub_100030204((__int64)qword_1000A59B8);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return __cxa_atexit((void (__fastcall *)(void *))sub_10002DABC, qword_1000A59B8, (void *)&_mh_execute_header);
}
// 1000311DC: variable '_18' is possibly undefined
// 1000A5978: using guessed type __int128 xmmword_1000A5978;
// 1000A5988: using guessed type __int128 xmmword_1000A5988;
// 1000A5998: using guessed type __int128 xmmword_1000A5998;
// 1000A59B8: using guessed type __int64 qword_1000A59B8[24];
