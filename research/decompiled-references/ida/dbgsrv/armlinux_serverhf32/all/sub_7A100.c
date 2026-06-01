/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A100
// Address: 0x0007A100

//----- (0007A100) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_7A100(pthread_mutex_t *result)
{
  if ( result )
    return (pthread_mutex_t *)(pthread_mutex_lock(result) == 0);
  return result;
}
