/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063E38
// Address: 0x0000000100063E38

//----- (0000000100063E38) ----------------------------------------------------
__int64 sub_100063E38()
{
  pthread_mutex_t *v0; // x0

  v0 = qmutex_create();
  qword_10009DAE0 = 0;
  qword_10009DAE8 = (__int64)v0;
  qword_10009DAD8 = 0;
  xmmword_10009DAF0 = 0u;
  xmmword_10009DB00 = 0u;
  byte_10009DB10 = 0;
  return __cxa_atexit((void (__fastcall *)(void *))sub_10006149C, &qword_10009DAD8, (void *)&_mh_execute_header);
}
// 10006149C: using guessed type __int64 __fastcall sub_10006149C();
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
// 10009DAE0: using guessed type __int64 qword_10009DAE0;
// 10009DAE8: using guessed type __int64 qword_10009DAE8;
// 10009DAF0: using guessed type __int128 xmmword_10009DAF0;
// 10009DB00: using guessed type __int128 xmmword_10009DB00;
// 10009DB10: using guessed type char byte_10009DB10;
