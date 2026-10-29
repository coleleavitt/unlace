/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_same
// Address: 0x000B3AF0

//----- (000B3AF0) --------------------------------------------------------
bool __cdecl qthread_same(pthread_t thread2)
{
  pthread_t v1; // eax

  v1 = pthread_self();
  return pthread_equal(v1, thread2) != 0;
}
