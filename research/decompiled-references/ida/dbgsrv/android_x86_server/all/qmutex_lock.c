/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_lock
// Address: 0x000B6490

//----- (000B6490) --------------------------------------------------------
bool __cdecl qmutex_lock(pthread_mutex_t *mutex)
{
  return mutex && pthread_mutex_lock(mutex) == 0;
}
