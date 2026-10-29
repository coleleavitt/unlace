/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qthread_free
// Address: 0x000000010007FF40

//----- (000000010007FF40) ----------------------------------------------------
int __fastcall qthread_free(pthread_t a1)
{
  return pthread_detach(a1);
}
