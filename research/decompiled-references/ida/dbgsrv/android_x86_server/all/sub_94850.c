/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94850
// Address: 0x00094850

//----- (00094850) --------------------------------------------------------
bool __cdecl sub_94850(int a1)
{
  return qmutex_unlock(*(pthread_mutex_t **)(a1 + 16));
}
