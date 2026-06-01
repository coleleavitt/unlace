/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_free
// Address: 0x0000000100080280

//----- (0000000100080280) ----------------------------------------------------
bool __fastcall qmutex_free(pthread_mutex_t *a1)
{
  int v1; // r14d

  if ( !a1 )
    return 0;
  v1 = pthread_mutex_destroy(a1);
  qfree(a1);
  return v1 == 0;
}
