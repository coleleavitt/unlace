/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: init_routine
// Address: 0x00000000000CF990

//----- (00000000000CF990) ----------------------------------------------------
void init_routine(void)
{
  if ( pthread_key_create(&key, (void (*)(void *))destr_function) )
    sub_D27E0("cannot create thread specific key for __cxa_get_globals()");
}
