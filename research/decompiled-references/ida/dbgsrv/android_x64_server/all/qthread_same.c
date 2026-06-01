/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_same
// Address: 0x00000000000C5BC0

//----- (00000000000C5BC0) ----------------------------------------------------
bool __fastcall qthread_same(pthread_t thread2)
{
  pthread_t v1; // rax

  v1 = pthread_self();
  return pthread_equal(v1, thread2) != 0;
}
