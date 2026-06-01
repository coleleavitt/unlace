/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_join
// Address: 0x000000010007290C

//----- (000000010007290C) ----------------------------------------------------
bool __fastcall qthread_join(_opaque_pthread_t *a1)
{
  return pthread_join(a1, nullptr) == 0;
}
