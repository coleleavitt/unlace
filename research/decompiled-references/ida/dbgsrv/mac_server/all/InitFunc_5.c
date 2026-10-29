/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: InitFunc_5
// Address: 0x0000000100065100

//----- (0000000100065100) ----------------------------------------------------
int InitFunc_5()
{
  sub_100069820((__int64)&qword_1000AD118, 1);
  qword_1000AD118 = (__int64)&off_1000A9D50;
  dword_1000AD1A4 = 0;
  *(_OWORD *)&_dst = 0;
  *(_OWORD *)((char *)&_dst + 9) = 0;
  word_1000AD180 = 23946;
  byte_1000AD182 = 0;
  return __cxa_atexit((void (__fastcall *)(void *))sub_100064AB0, &qword_1000AD118, (void *)&_mh_execute_header);
}
// 1000A9D50: using guessed type __int64 (__fastcall *off_1000A9D50)();
// 1000AD118: using guessed type __int64 qword_1000AD118;
// 1000AD180: using guessed type __int16 word_1000AD180;
// 1000AD182: using guessed type char byte_1000AD182;
// 1000AD1A4: using guessed type int dword_1000AD1A4;
