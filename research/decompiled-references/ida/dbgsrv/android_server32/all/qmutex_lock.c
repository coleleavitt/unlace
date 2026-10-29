/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_lock
// Address: 0x00082002

//----- (00082002) --------------------------------------------------------
bool __fastcall qmutex_lock(pthread_mutex_t *mutex)
{
  _BOOL4 result; // r0

  result = 0;
  if ( mutex )
    return pthread_mutex_lock(mutex) == 0;
  return result;
}
