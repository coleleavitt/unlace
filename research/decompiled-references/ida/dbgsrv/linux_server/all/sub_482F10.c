/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482F10
// Address: 0x0000000000482F10

//----- (0000000000482F10) ----------------------------------------------------
bool __fastcall sub_482F10(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_unlock(a1) == 0;
}
