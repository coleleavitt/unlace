/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_lock
// Address: 0x0000000100077DF8

//----- (0000000100077DF8) ----------------------------------------------------
pthread_mutex_t *__fastcall qmutex_lock(pthread_mutex_t *result)
{
  if ( result )
    return (pthread_mutex_t *)(pthread_mutex_lock(result) == 0);
  return result;
}
