/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_join
// Address: 0x0000000100077A58

//----- (0000000100077A58) ----------------------------------------------------
bool __fastcall qthread_join(_opaque_pthread_t *a1)
{
  return pthread_join(a1, nullptr) == 0;
}
