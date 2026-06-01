/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_globals
// Address: 0x00000000000D697C

//----- (00000000000D697C) ----------------------------------------------------
void *_cxa_get_globals()
{
  void *v0; // x19
  void *v1; // x0

  if ( pthread_once(&dword_1690AC, (void (*)(void))sub_D6A48) )
    sub_D9A54("execute once failure in __cxa_get_globals_fast()");
  v0 = pthread_getspecific(dword_1690A8);
  if ( !v0 )
  {
    v1 = sub_D7B98(1u, 0x10u);
    if ( !v1 )
      sub_D9A54("cannot allocate __cxa_eh_globals");
    v0 = v1;
    if ( pthread_setspecific(dword_1690A8, v1) )
      sub_D9A54("std::__libcpp_tls_set failure in __cxa_get_globals()");
  }
  return v0;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 1690A8: using guessed type int dword_1690A8;
// 1690AC: using guessed type int dword_1690AC;
