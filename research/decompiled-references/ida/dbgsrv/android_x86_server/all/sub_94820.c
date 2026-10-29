/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94820
// Address: 0x00094820

//----- (00094820) --------------------------------------------------------
bool __cdecl sub_94820(int a1)
{
  return qmutex_lock(*(pthread_mutex_t **)(a1 + 16));
}
