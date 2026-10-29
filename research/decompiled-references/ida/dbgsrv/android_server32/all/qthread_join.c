/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_join
// Address: 0x00081ED2

//----- (00081ED2) --------------------------------------------------------
bool __fastcall qthread_join(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}
