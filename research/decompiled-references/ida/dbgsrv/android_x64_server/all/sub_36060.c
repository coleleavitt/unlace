/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36060
// Address: 0x0000000000036060

//----- (0000000000036060) ----------------------------------------------------
int sub_36060()
{
  xmmword_156A68 = 0;
  xmmword_156A58 = 0;
  *(_OWORD *)&xmmword_156A48 = 0;
  xmmword_156A38 = 0;
  xmmword_156A28 = 0;
  *(_OWORD *)&xmmword_156A18 = 0;
  __cxa_atexit((void (*)(void *))sub_AE2E0, &xmmword_156A18, &qword_155700);
  *(_OWORD *)&ptr = 0;
  qword_156A90 = 0;
  qword_156A78 = (__int64)qmutex_create();
  return __cxa_atexit((void (*)(void *))sub_AE3A0, &qword_156A78, &qword_155700);
}
// 155700: using guessed type __int64 qword_155700;
// 156A28: using guessed type __int128 xmmword_156A28;
// 156A38: using guessed type __int128 xmmword_156A38;
// 156A58: using guessed type __int128 xmmword_156A58;
// 156A68: using guessed type __int128 xmmword_156A68;
// 156A78: using guessed type __int64 qword_156A78;
// 156A90: using guessed type __int64 qword_156A90;
