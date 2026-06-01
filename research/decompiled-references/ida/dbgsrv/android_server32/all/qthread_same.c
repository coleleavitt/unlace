/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_same
// Address: 0x00080618

//----- (00080618) --------------------------------------------------------
bool __fastcall qthread_same(pthread_t a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  return pthread_equal(v2, a1) != 0;
}
