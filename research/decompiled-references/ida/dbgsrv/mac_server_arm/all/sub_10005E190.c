/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E190
// Address: 0x000000010005E190

//----- (000000010005E190) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_10005E190(__int64 a1)
{
  return qmutex_unlock(*(pthread_mutex_t **)(a1 + 32));
}
