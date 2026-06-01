/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9460
// Address: 0x00000000000A9460

//----- (00000000000A9460) ----------------------------------------------------
bool __fastcall sub_A9460(__int64 a1)
{
  return qmutex_lock(*(pthread_mutex_t **)(a1 + 32));
}
