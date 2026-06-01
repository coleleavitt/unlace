/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: InitFunc_4
// Address: 0x0000000100060230

//----- (0000000100060230) ----------------------------------------------------
int InitFunc_4()
{
  xmmword_1000AD100 = 0;
  qword_1000AD0F8 = (__int64)&xmmword_1000AD100;
  return __cxa_atexit((void (__fastcall *)(void *))sub_100054090, &qword_1000AD0F8, (void *)&_mh_execute_header);
}
// 1000AD0F8: using guessed type __int64 qword_1000AD0F8;
// 1000AD100: using guessed type __int128 xmmword_1000AD100;
