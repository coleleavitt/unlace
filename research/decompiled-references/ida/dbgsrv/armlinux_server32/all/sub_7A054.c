/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A054
// Address: 0x0007A054

//----- (0007A054) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_7A054(pthread_mutex_t *result)
{
  pthread_mutex_t *v1; // r4
  int v2; // r5

  v1 = result;
  if ( result )
  {
    v2 = pthread_mutex_destroy(result);
    sub_77F70(v1);
    return (pthread_mutex_t *)(v2 == 0);
  }
  return result;
}
