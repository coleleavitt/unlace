/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100075E28
// Address: 0x0000000100075E28

//----- (0000000100075E28) ----------------------------------------------------
pthread_mutex_t **__fastcall sub_100075E28(pthread_mutex_t **a1)
{
  pthread_mutex_t *v2; // x0

  v2 = *a1;
  if ( v2 )
    pthread_mutex_unlock(v2);
  return a1;
}
