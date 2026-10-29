/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B5A0
// Address: 0x000000000040B5A0

//----- (000000000040B5A0) ----------------------------------------------------
int sub_40B5A0()
{
  xmmword_4C82F8 = 0;
  qword_4C82F0 = 0;
  __cxa_atexit((void (*)(void *))sub_45A600, &qword_4C82F0, (void *)&lpdso_handle);
  sub_45A930((__int64)qword_4C8260, 0);
  return __cxa_atexit((void (*)(void *))sub_45A630, qword_4C8260, (void *)&lpdso_handle);
}
// 4C8260: using guessed type __int64 qword_4C8260[11];
// 4C82F0: using guessed type __int64 qword_4C82F0;
// 4C82F8: using guessed type __int128 xmmword_4C82F8;
