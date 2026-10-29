bool __fastcall qmutex_free(pthread_mutex_t *ptr)
{
  int v1; // ebp

  if ( !ptr )
    return 0;
  v1 = pthread_mutex_destroy(ptr);
  qfree(ptr);
  return v1 == 0;
}
