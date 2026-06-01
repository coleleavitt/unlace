bool __fastcall sub_11DA0(pthread_mutex_t *ptr)
{
  int v1; // ebp

  if ( !ptr )
    return 0;
  v1 = pthread_mutex_destroy(ptr);
  j__free(ptr);
  return v1 == 0;
}

