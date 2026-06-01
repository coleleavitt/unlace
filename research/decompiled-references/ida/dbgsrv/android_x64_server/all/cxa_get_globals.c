/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_globals
// Address: 0x00000000000CF8C0

//----- (00000000000CF8C0) ----------------------------------------------------
void *_cxa_get_globals()
{
  void *v0; // rbx
  void *v1; // rax

  if ( pthread_once(&once_control, init_routine) )
    sub_D27E0("execute once failure in __cxa_get_globals_fast()");
  v0 = pthread_getspecific(key);
  if ( !v0 )
  {
    v1 = sub_D0BB0(1u, 0x10u);
    if ( !v1 )
      sub_D27E0("cannot allocate __cxa_eh_globals");
    v0 = v1;
    if ( pthread_setspecific(key, v1) )
      sub_D27E0("std::__libcpp_tls_set failure in __cxa_get_globals()");
  }
  return v0;
}
