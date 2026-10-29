/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494760
// Address: 0x0000000000494760

//----- (0000000000494760) ----------------------------------------------------
bool __fastcall sub_494760(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_unlock(a1) == 0;
}
