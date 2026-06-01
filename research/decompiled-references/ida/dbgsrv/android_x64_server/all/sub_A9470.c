/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9470
// Address: 0x00000000000A9470

//----- (00000000000A9470) ----------------------------------------------------
bool __fastcall sub_A9470(__int64 a1)
{
  return qmutex_unlock(*(pthread_mutex_t **)(a1 + 32));
}
