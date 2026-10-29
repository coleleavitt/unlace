/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_guard_abort
// Address: 0x000BDAE0

//----- (000BDAE0) --------------------------------------------------------
void _cxa_guard_abort(__guard *a1)
{
  if ( pthread_mutex_lock((pthread_mutex_t *)&dword_13E3B4) )
  {
    sub_C10D0("__cxa_guard_abort failed to acquire mutex");
LABEL_8:
    std::get_unexpected();
    return;
  }
  a1[1] = 0;
  *a1 = 0;
  if ( pthread_mutex_unlock((pthread_mutex_t *)&dword_13E3B4) )
  {
    sub_C10D0("__cxa_guard_abort failed to release mutex");
    goto LABEL_8;
  }
  if ( pthread_cond_broadcast((pthread_cond_t *)&dword_13E3B8) )
  {
    sub_C10D0("__cxa_guard_abort failed to broadcast condition variable");
    goto LABEL_8;
  }
}
// 13E3B4: using guessed type int dword_13E3B4;
// 13E3B8: using guessed type int dword_13E3B8;
