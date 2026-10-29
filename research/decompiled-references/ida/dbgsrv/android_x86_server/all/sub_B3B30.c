/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3B30
// Address: 0x000B3B30

//----- (000B3B30) --------------------------------------------------------
pthread_mutex_t *__cdecl sub_B3B30(_DWORD *a1)
{
  pthread_mutex_t *result; // eax

  result = (pthread_mutex_t *)dword_13E35C;
  *a1 = dword_13E35C;
  if ( result )
    return (pthread_mutex_t *)pthread_mutex_lock(result);
  return result;
}
// 13E35C: using guessed type int dword_13E35C;
