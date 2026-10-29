/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_join
// Address: 0x000000010007FF50

//----- (000000010007FF50) ----------------------------------------------------
bool __fastcall qthread_join(_opaque_pthread_t *a1)
{
  return pthread_join(a1, nullptr) == 0;
}
