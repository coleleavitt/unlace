/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_unlock
// Address: 0x0008201C

//----- (0008201C) --------------------------------------------------------
bool __fastcall qmutex_unlock(pthread_mutex_t *mutex)
{
  _BOOL4 result; // r0

  result = 0;
  if ( mutex )
    return pthread_mutex_unlock(mutex) == 0;
  return result;
}
