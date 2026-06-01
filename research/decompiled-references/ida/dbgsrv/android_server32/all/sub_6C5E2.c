/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C5E2
// Address: 0x0006C5E2

//----- (0006C5E2) --------------------------------------------------------
bool __fastcall sub_6C5E2(int a1)
{
  return qmutex_unlock(*(pthread_mutex_t **)(a1 + 16));
}
