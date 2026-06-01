/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_guard_abort
// Address: 0x00000000000CFB10

//----- (00000000000CFB10) ----------------------------------------------------
void _cxa_guard_abort(__guard *a1)
{
  if ( pthread_mutex_lock(&stru_158E08) )
    sub_D27E0("__cxa_guard_abort failed to acquire mutex");
  *a1 = 0;
  if ( pthread_mutex_unlock(&stru_158E08) )
    sub_D27E0("__cxa_guard_abort failed to release mutex");
  if ( pthread_cond_broadcast(&cond) )
    sub_D27E0("__cxa_guard_abort failed to broadcast condition variable");
}
