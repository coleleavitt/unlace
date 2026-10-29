/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__sp_mut::lock
// Address: 0x0008FAA0

//----- (0008FAA0) --------------------------------------------------------
int __fastcall std::__sp_mut::lock(pthread_mutex_t **this)
{
  pthread_mutex_t *v1; // r4
  int v2; // r5
  int result; // r0

  v1 = *this;
  v2 = -1;
  while ( 1 )
  {
    result = pthread_mutex_trylock(v1);
    if ( !result )
      break;
    if ( (unsigned int)++v2 >= 0x10 )
      return pthread_mutex_lock(v1);
    sched_yield();
  }
  return result;
}
