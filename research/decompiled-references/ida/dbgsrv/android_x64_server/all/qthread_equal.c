/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_equal
// Address: 0x00000000000C7F80

//----- (00000000000C7F80) ----------------------------------------------------
bool __fastcall qthread_equal(pthread_t a1, pthread_t a2)
{
  return pthread_equal(a1, a2) != 0;
}
