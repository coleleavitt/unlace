/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B800
// Address: 0x000000000040B800

//----- (000000000040B800) ----------------------------------------------------
int sub_40B800()
{
  dword_4C8328 = 0;
  qword_4C8330 = 0;
  qword_4C8338 = (__int64)&dword_4C8328;
  qword_4C8340 = (__int64)&dword_4C8328;
  qword_4C8348 = 0;
  return __cxa_atexit((void (*)(void *))sub_45B850, &dword_4C8328 - 2, (void *)&lpdso_handle);
}
// 4C8328: using guessed type int dword_4C8328;
// 4C8330: using guessed type __int64 qword_4C8330;
// 4C8338: using guessed type __int64 qword_4C8338;
// 4C8340: using guessed type __int64 qword_4C8340;
// 4C8348: using guessed type __int64 qword_4C8348;
