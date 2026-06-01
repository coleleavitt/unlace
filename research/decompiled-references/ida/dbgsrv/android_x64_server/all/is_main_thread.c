/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_main_thread
// Address: 0x00000000000C5B60

//----- (00000000000C5B60) ----------------------------------------------------
bool is_main_thread()
{
  pthread_t v0; // rbx
  pthread_t v1; // r14

  v0 = thread2;
  if ( thread2 )
  {
    v1 = pthread_self();
  }
  else
  {
    v1 = pthread_self();
    thread2 = v1;
    mutex = qmutex_create();
    v0 = thread2;
  }
  return pthread_equal(v1, v0) != 0;
}
