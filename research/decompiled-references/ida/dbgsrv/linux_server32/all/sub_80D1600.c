/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1600
// Address: 0x080D1600

//----- (080D1600) --------------------------------------------------------
bool __cdecl sub_80D1600(pthread_mutex_t *mutex)
{
  bool result; // al

  result = 0;
  if ( mutex )
    return pthread_mutex_unlock(mutex) == 0;
  return result;
}
