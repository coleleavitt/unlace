/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_unlock
// Address: 0x000B64D0

//----- (000B64D0) --------------------------------------------------------
bool __cdecl qmutex_unlock(pthread_mutex_t *mutex)
{
  return mutex && pthread_mutex_unlock(mutex) == 0;
}
