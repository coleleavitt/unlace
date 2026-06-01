/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19EC8
// Address: 0x00019EC8

//----- (00019EC8) --------------------------------------------------------
pthread_mutex_t *sub_19EC8()
{
  pthread_mutex_t *result; // r0

  result = (pthread_mutex_t *)dword_E055C;
  if ( !dword_E055C )
  {
    dword_E055C = pthread_self();
    result = qmutex_create();
    dword_E0560 = (int)result;
  }
  return result;
}
// E055C: using guessed type int dword_E055C;
// E0560: using guessed type int dword_E0560;
