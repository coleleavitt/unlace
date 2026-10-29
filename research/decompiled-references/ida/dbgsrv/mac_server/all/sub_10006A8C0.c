/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006A8C0
// Address: 0x000000010006A8C0

//----- (000000010006A8C0) ----------------------------------------------------
bool __fastcall sub_10006A8C0(__int64 a1)
{
  return qmutex_lock(*(pthread_mutex_t **)(a1 + 32));
}
