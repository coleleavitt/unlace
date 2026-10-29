/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494720
// Address: 0x0000000000494720

//----- (0000000000494720) ----------------------------------------------------
bool __fastcall sub_494720(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_lock(a1) == 0;
}
