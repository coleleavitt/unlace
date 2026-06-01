/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D15A0
// Address: 0x080D15A0

//----- (080D15A0) --------------------------------------------------------
bool __cdecl sub_80D15A0(pthread_mutex_t *mutex)
{
  bool result; // al

  result = 0;
  if ( mutex )
    return pthread_mutex_lock(mutex) == 0;
  return result;
}
