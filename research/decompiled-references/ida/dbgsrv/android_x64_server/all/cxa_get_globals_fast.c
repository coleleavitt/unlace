/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_get_globals_fast
// Address: 0x00000000000CF950

//----- (00000000000CF950) ----------------------------------------------------
void *_cxa_get_globals_fast()
{
  if ( pthread_once(&once_control, init_routine) )
    sub_D27E0("execute once failure in __cxa_get_globals_fast()");
  return pthread_getspecific(key);
}
