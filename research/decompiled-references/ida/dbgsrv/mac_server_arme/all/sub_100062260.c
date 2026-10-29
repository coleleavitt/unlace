/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062260
// Address: 0x0000000100062260

//----- (0000000100062260) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_100062260(__int64 a1)
{
  return qmutex_unlock(*(pthread_mutex_t **)(a1 + 32));
}
