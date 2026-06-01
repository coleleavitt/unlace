/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_guard_release
// Address: 0x00000000000CFAA0

//----- (00000000000CFAA0) ----------------------------------------------------
void _cxa_guard_release(__guard *a1)
{
  if ( pthread_mutex_lock(&stru_158E08) )
    sub_D27E0("__cxa_guard_release failed to acquire mutex");
  *a1 = 1;
  if ( pthread_mutex_unlock(&stru_158E08) )
    sub_D27E0("__cxa_guard_release failed to release mutex");
  if ( pthread_cond_broadcast(&cond) )
    sub_D27E0("__cxa_guard_release failed to broadcast condition variable");
}
