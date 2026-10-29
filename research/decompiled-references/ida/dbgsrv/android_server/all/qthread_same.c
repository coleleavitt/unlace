/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_same
// Address: 0x00000000000C0E88

//----- (00000000000C0E88) ----------------------------------------------------
bool __fastcall qthread_same(pthread_t a1)
{
  pthread_t v2; // x0

  v2 = pthread_self();
  return pthread_equal(v2, a1) != 0;
}
