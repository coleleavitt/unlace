/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062258
// Address: 0x0000000100062258

//----- (0000000100062258) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_100062258(__int64 a1)
{
  return qmutex_lock(*(pthread_mutex_t **)(a1 + 32));
}
