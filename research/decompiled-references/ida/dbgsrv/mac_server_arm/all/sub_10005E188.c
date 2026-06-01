/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E188
// Address: 0x000000010005E188

//----- (000000010005E188) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_10005E188(__int64 a1)
{
  return qmutex_lock(*(pthread_mutex_t **)(a1 + 32));
}
