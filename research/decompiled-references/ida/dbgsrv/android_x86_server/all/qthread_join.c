/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_join
// Address: 0x000B6220

//----- (000B6220) --------------------------------------------------------
bool __cdecl qthread_join(pthread_t th)
{
  return pthread_join(th, nullptr) == 0;
}
