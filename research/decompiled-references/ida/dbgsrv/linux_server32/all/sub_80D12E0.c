/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D12E0
// Address: 0x080D12E0

//----- (080D12E0) --------------------------------------------------------
bool __cdecl sub_80D12E0(pthread_mutex_t *mutex)
{
  bool result; // al
  int v2; // edi

  result = 0;
  if ( mutex )
  {
    v2 = pthread_mutex_destroy(mutex);
    sub_80CF780(mutex);
    return v2 == 0;
  }
  return result;
}
