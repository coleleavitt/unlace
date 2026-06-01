/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_free
// Address: 0x00000000000C3240

//----- (00000000000C3240) ----------------------------------------------------
pthread_mutex_t *__fastcall qmutex_free(pthread_mutex_t *result)
{
  pthread_mutex_t *v1; // x19
  int v2; // w20

  if ( result )
  {
    v1 = result;
    v2 = pthread_mutex_destroy(result);
    qfree(v1);
    return (pthread_mutex_t *)(v2 == 0);
  }
  return result;
}
