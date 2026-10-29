/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_unlock
// Address: 0x0000000100077E20

//----- (0000000100077E20) ----------------------------------------------------
pthread_mutex_t *__fastcall qmutex_unlock(pthread_mutex_t *result)
{
  if ( result )
    return (pthread_mutex_t *)(pthread_mutex_unlock(result) == 0);
  return result;
}
