/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_guard_acquire
// Address: 0x00000000000CF9F0

//----- (00000000000CF9F0) ----------------------------------------------------
int _cxa_guard_acquire(__guard *a1)
{
  int v1; // r14d

  if ( pthread_mutex_lock(&stru_158E08) )
    sub_D27E0("__cxa_guard_acquire failed to acquire mutex");
  v1 = 0;
  if ( !*(_BYTE *)a1 )
  {
    while ( (*a1 & 0xFF00) != 0 )
    {
      if ( pthread_cond_wait(&cond, &stru_158E08) )
        sub_D27E0("__cxa_guard_acquire condition variable wait failed");
    }
    if ( !(unsigned __int8)*a1 )
    {
      *a1 = 256;
      v1 = 1;
    }
  }
  if ( pthread_mutex_unlock(&stru_158E08) )
    sub_D27E0("__cxa_guard_acquire failed to release mutex");
  return v1;
}
