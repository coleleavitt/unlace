/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_equal
// Address: 0x000B61A0

//----- (000B61A0) --------------------------------------------------------
bool __cdecl qthread_equal(pthread_t thread1, pthread_t thread2)
{
  return pthread_equal(thread1, thread2) != 0;
}
