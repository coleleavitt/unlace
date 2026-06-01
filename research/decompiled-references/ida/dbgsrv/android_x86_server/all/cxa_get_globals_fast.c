/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_globals_fast
// Address: 0x000BD890

//----- (000BD890) --------------------------------------------------------
void *__cdecl _cxa_get_globals_fast(int *a1)
{
  if ( !pthread_once(&dword_13E3B0, (void (*)(void))sub_BD8F0) )
    return pthread_getspecific(dword_13E3AC);
  sub_C10D0("execute once failure in __cxa_get_globals_fast()");
  return (void *)sub_BD8F0(a1);
}
// 13E3AC: using guessed type int dword_13E3AC;
// 13E3B0: using guessed type int dword_13E3B0;
