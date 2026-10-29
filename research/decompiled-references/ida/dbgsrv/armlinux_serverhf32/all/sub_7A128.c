/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A128
// Address: 0x0007A128

//----- (0007A128) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_7A128(pthread_mutex_t *result)
{
  if ( result )
    return (pthread_mutex_t *)(pthread_mutex_unlock(result) == 0);
  return result;
}
