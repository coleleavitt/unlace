/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_free
// Address: 0x00081EC6

//----- (00081EC6) --------------------------------------------------------
int __fastcall qthread_free(pthread_t a1)
{
  return pthread_detach(a1);
}
