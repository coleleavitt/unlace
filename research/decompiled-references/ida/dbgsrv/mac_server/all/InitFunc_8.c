/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: InitFunc_8
// Address: 0x0000000100070A00

//----- (0000000100070A00) ----------------------------------------------------
int InitFunc_8()
{
  qword_1000AE420 = (__int64)qmutex_create();
  xmmword_1000AE410 = 0;
  xmmword_1000AE428 = 0;
  xmmword_1000AE438 = 0;
  byte_1000AE448 = 0;
  return __cxa_atexit((void (__fastcall *)(void *))sub_10006DEB0, &xmmword_1000AE410, (void *)&_mh_execute_header);
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
// 1000AE420: using guessed type __int64 qword_1000AE420;
// 1000AE428: using guessed type __int128 xmmword_1000AE428;
// 1000AE438: using guessed type __int128 xmmword_1000AE438;
// 1000AE448: using guessed type char byte_1000AE448;
