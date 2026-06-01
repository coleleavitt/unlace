/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C5D8
// Address: 0x0006C5D8

//----- (0006C5D8) --------------------------------------------------------
bool __fastcall sub_6C5D8(int a1)
{
  return qmutex_lock(*(pthread_mutex_t **)(a1 + 16));
}
