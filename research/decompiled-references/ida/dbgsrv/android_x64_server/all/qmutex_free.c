/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_free
// Address: 0x00000000000C8150

//----- (00000000000C8150) ----------------------------------------------------
bool __fastcall qmutex_free(pthread_mutex_t *ptr)
{
  int v1; // ebp

  if ( !ptr )
    return 0;
  v1 = pthread_mutex_destroy(ptr);
  qfree(ptr);
  return v1 == 0;
}
