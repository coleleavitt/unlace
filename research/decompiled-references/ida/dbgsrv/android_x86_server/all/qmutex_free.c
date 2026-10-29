/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_free
// Address: 0x000B6440

//----- (000B6440) --------------------------------------------------------
bool __cdecl qmutex_free(pthread_mutex_t *mutex)
{
  int v1; // esi

  if ( !mutex )
    return 0;
  v1 = pthread_mutex_destroy(mutex);
  qfree(mutex);
  return v1 == 0;
}
