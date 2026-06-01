/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_guard_acquire
// Address: 0x00000000000D6AB0

//----- (00000000000D6AB0) ----------------------------------------------------
int _cxa_guard_acquire(__guard *a1)
{
  int v2; // w19

  if ( pthread_mutex_lock((pthread_mutex_t *)qword_1690B0) )
    sub_D9A54("__cxa_guard_acquire failed to acquire mutex");
  if ( *(_BYTE *)a1 )
    goto LABEL_7;
  while ( (*a1 & 0xFF00) != 0 )
  {
    if ( pthread_cond_wait((pthread_cond_t *)qword_1690D8, (pthread_mutex_t *)qword_1690B0) )
      sub_D9A54("__cxa_guard_acquire condition variable wait failed");
  }
  if ( (unsigned __int8)*a1 )
  {
LABEL_7:
    v2 = 0;
  }
  else
  {
    *a1 = 256;
    v2 = 1;
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)qword_1690B0) )
    sub_D9A54("__cxa_guard_acquire failed to release mutex");
  return v2;
}
// 1690B0: using guessed type __int64 qword_1690B0[5];
// 1690D8: using guessed type __int64 qword_1690D8[6];
