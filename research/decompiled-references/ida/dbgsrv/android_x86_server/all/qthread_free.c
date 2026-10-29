/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_free
// Address: 0x000B61E0

//----- (000B61E0) --------------------------------------------------------
int __cdecl qthread_free(pthread_t th)
{
  return pthread_detach(th);
}
