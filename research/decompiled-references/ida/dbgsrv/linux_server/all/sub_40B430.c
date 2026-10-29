/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B430
// Address: 0x000000000040B430

//----- (000000000040B430) ----------------------------------------------------
int sub_40B430()
{
  dword_4C8048 = 0;
  qword_4C8050 = nullptr;
  qword_4C8058 = (__int64)&dword_4C8048;
  qword_4C8060 = (__int64)&dword_4C8048;
  qword_4C8068 = 0;
  return __cxa_atexit((void (*)(void *))func, &dword_4C8048 - 2, (void *)&lpdso_handle);
}
// 4C8048: using guessed type int dword_4C8048;
// 4C8058: using guessed type __int64 qword_4C8058;
// 4C8060: using guessed type __int64 qword_4C8060;
// 4C8068: using guessed type __int64 qword_4C8068;
