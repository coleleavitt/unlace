/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_guard_abort
// Address: 0x00000000000D6BE4

//----- (00000000000D6BE4) ----------------------------------------------------
void _cxa_guard_abort(__guard *a1)
{
  if ( pthread_mutex_lock((pthread_mutex_t *)qword_1690B0) )
    sub_D9A54("__cxa_guard_abort failed to acquire mutex");
  *a1 = 0;
  if ( pthread_mutex_unlock((pthread_mutex_t *)qword_1690B0) )
    sub_D9A54("__cxa_guard_abort failed to release mutex");
  if ( pthread_cond_broadcast((pthread_cond_t *)qword_1690D8) )
    sub_D9A54("__cxa_guard_abort failed to broadcast condition variable");
}
// 1690B0: using guessed type __int64 qword_1690B0[5];
// 1690D8: using guessed type __int64 qword_1690D8[6];
