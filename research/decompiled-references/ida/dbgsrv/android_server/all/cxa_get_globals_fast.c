/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_globals_fast
// Address: 0x00000000000D6A0C

//----- (00000000000D6A0C) ----------------------------------------------------
void *_cxa_get_globals_fast()
{
  if ( pthread_once(&dword_1690AC, (void (*)(void))sub_D6A48) )
    sub_D9A54("execute once failure in __cxa_get_globals_fast()");
  return pthread_getspecific(dword_1690A8);
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 1690A8: using guessed type int dword_1690A8;
// 1690AC: using guessed type int dword_1690AC;
