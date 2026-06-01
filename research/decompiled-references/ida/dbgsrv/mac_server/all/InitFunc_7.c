/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: InitFunc_7
// Address: 0x000000010006DE00

//----- (000000010006DE00) ----------------------------------------------------
int InitFunc_7()
{
  xmmword_1000AE210 = 0;
  xmmword_1000AE200 = 0;
  xmmword_1000AE1F0 = 0;
  xmmword_1000AE1E0 = 0;
  xmmword_1000AE1D0 = 0;
  xmmword_1000AE1C0 = 0;
  __cxa_atexit((void (__fastcall *)(void *))sub_10006D960, &xmmword_1000AE1C0, (void *)&_mh_execute_header);
  *(_OWORD *)&xmmword_1000AE3F8 = 0;
  qword_1000AE408 = 0;
  qword_1000AE3F0 = (__int64)qmutex_create();
  return __cxa_atexit((void (__fastcall *)(void *))sub_10006D970, &qword_1000AE3F0, (void *)&_mh_execute_header);
}
// 1000AE1C0: using guessed type __int128 xmmword_1000AE1C0;
// 1000AE1D0: using guessed type __int128 xmmword_1000AE1D0;
// 1000AE1E0: using guessed type __int128 xmmword_1000AE1E0;
// 1000AE1F0: using guessed type __int128 xmmword_1000AE1F0;
// 1000AE200: using guessed type __int128 xmmword_1000AE200;
// 1000AE210: using guessed type __int128 xmmword_1000AE210;
// 1000AE3F0: using guessed type __int64 qword_1000AE3F0;
// 1000AE408: using guessed type __int64 qword_1000AE408;
