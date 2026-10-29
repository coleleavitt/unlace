/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_free
// Address: 0x00081FE2

//----- (00081FE2) --------------------------------------------------------
bool __fastcall qmutex_free(pthread_mutex_t *mutex)
{
  _BOOL4 result; // r0
  int v3; // r5

  result = 0;
  if ( mutex )
  {
    v3 = pthread_mutex_destroy(mutex);
    qfree(mutex);
    return v3 == 0;
  }
  return result;
}
