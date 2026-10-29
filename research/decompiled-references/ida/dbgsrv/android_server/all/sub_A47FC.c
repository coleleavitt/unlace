/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A47FC
// Address: 0x00000000000A47FC

//----- (00000000000A47FC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A47FC(__int64 a1)
{
  return qmutex_lock(*(pthread_mutex_t **)(a1 + 32));
}
