/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__sp_mut::lock
// Address: 0x00000000000D5BB8

//----- (00000000000D5BB8) ----------------------------------------------------
__int64 __fastcall std::__sp_mut::lock(pthread_mutex_t **this)
{
  pthread_mutex_t *v1; // x19
  int v2; // w20
  __int64 result; // x0

  v1 = *this;
  v2 = -1;
  while ( 1 )
  {
    result = pthread_mutex_trylock(v1);
    if ( !(_DWORD)result )
      break;
    if ( (unsigned int)++v2 >= 0x10 )
      return pthread_mutex_lock(v1);
    sched_yield();
  }
  return result;
}
