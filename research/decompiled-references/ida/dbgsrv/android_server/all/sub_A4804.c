/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4804
// Address: 0x00000000000A4804

//----- (00000000000A4804) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_A4804(__int64 a1)
{
  return qmutex_unlock(*(pthread_mutex_t **)(a1 + 32));
}
