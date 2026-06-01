/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34830
// Address: 0x0000000000034830

//----- (0000000000034830) ----------------------------------------------------
int sub_34830()
{
  *(_OWORD *)&dest = 0;
  qword_155958 = 0;
  __cxa_atexit((void (*)(void *))sub_36BF0, &dest, &qword_155700);
  sub_A82F0((__int64)&qword_155968, 0);
  qword_155968 = (__int64)&off_14ED58;
  dword_1559F4 = 0;
  *(_OWORD *)((char *)&xmmword_1559D8 + 9) = 0;
  *(_OWORD *)&xmmword_1559D8 = 0;
  word_1559D0 = 23946;
  byte_1559D2 = 0;
  return __cxa_atexit((void (*)(void *))sub_A4090, &qword_155968, &qword_155700);
}
// 14ED58: using guessed type __int64 (__fastcall *off_14ED58)();
// 155700: using guessed type __int64 qword_155700;
// 155958: using guessed type __int64 qword_155958;
// 155968: using guessed type __int64 qword_155968;
// 1559D0: using guessed type __int16 word_1559D0;
// 1559D2: using guessed type char byte_1559D2;
// 1559F4: using guessed type int dword_1559F4;
