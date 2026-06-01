/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_lock
// Address: 0x00000001000802B0

//----- (00000001000802B0) ----------------------------------------------------
bool __fastcall qmutex_lock(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_lock(a1) == 0;
}
