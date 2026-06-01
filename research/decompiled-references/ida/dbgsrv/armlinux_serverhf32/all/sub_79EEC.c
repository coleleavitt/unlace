/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79EEC
// Address: 0x00079EEC

//----- (00079EEC) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_79EEC(pthread_mutex_t *result)
{
  pthread_mutex_t *v1; // r4
  int v2; // r5

  v1 = result;
  if ( result )
  {
    v2 = pthread_mutex_destroy(result);
    sub_77E08(v1);
    return (pthread_mutex_t *)(v2 == 0);
  }
  return result;
}
