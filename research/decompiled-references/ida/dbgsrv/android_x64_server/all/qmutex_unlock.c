/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_unlock
// Address: 0x00000000000C81A0

//----- (00000000000C81A0) ----------------------------------------------------
bool __fastcall qmutex_unlock(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_unlock(a1) == 0;
}
