/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_globals
// Address: 0x000BD7E0

//----- (000BD7E0) --------------------------------------------------------
void *__cdecl _cxa_get_globals(int *a1)
{
  void *v1; // esi
  void *v2; // eax

  if ( pthread_once(&dword_13E3B0, (void (*)(void))sub_BD8F0) )
  {
    sub_C10D0("execute once failure in __cxa_get_globals_fast()");
  }
  else
  {
    v1 = pthread_getspecific(dword_13E3AC);
    if ( v1 )
      return v1;
    v2 = sub_BECE0(1u, 8u);
    if ( v2 )
    {
      v1 = v2;
      if ( !pthread_setspecific(dword_13E3AC, v2) )
        return v1;
      sub_C10D0("std::__libcpp_tls_set failure in __cxa_get_globals()");
    }
    else
    {
      sub_C10D0("cannot allocate __cxa_eh_globals");
    }
  }
  return _cxa_get_globals_fast(a1);
}
// 13E3AC: using guessed type int dword_13E3AC;
// 13E3B0: using guessed type int dword_13E3B0;
