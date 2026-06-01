/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_join
// Address: 0x00000000000C3094

//----- (00000000000C3094) ----------------------------------------------------
bool __fastcall qthread_join(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}
