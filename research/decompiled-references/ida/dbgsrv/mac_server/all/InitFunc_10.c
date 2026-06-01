/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: InitFunc_10
// Address: 0x0000000100079D80

//----- (0000000100079D80) ----------------------------------------------------
int InitFunc_10()
{
  *(_OWORD *)&obj = 0;
  qword_1000AE8A0 = 0;
  __cxa_atexit((void (__fastcall *)(void *))sub_100006E30, &obj, (void *)&_mh_execute_header);
  *(_OWORD *)&xmmword_1000AE8A8 = 0;
  qword_1000AE8B8 = 0;
  __cxa_atexit((void (__fastcall *)(void *))sub_100006E30, &xmmword_1000AE8A8, (void *)&_mh_execute_header);
  xmmword_1000AE8C0 = 0;
  qword_1000AE8D0 = 0;
  return __cxa_atexit((void (__fastcall *)(void *))sub_1000127D0, &xmmword_1000AE8C0, (void *)&_mh_execute_header);
}
// 1000AE8A0: using guessed type __int64 qword_1000AE8A0;
// 1000AE8B8: using guessed type __int64 qword_1000AE8B8;
// 1000AE8C0: using guessed type __int128 xmmword_1000AE8C0;
// 1000AE8D0: using guessed type __int64 qword_1000AE8D0;
