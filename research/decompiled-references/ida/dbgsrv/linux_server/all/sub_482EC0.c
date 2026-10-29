/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482EC0
// Address: 0x0000000000482EC0

//----- (0000000000482EC0) ----------------------------------------------------
bool __fastcall sub_482EC0(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_lock(a1) == 0;
}
