/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_main_thread
// Address: 0x00000000000C0E2C

//----- (00000000000C0E2C) ----------------------------------------------------
bool is_main_thread()
{
  pthread_t v0; // x19
  __int64 v1; // x20
  pthread_mutex_t *v2; // x0

  v0 = qword_168E08;
  if ( qword_168E08 )
  {
    v1 = pthread_self();
  }
  else
  {
    v1 = pthread_self();
    qword_168E08 = v1;
    v2 = qmutex_create();
    v0 = qword_168E08;
    qword_168E10 = (__int64)v2;
  }
  return pthread_equal(v1, v0) != 0;
}
// 167DD0: using guessed type __int64[512];
// 168E08: using guessed type __int64 qword_168E08;
// 168E10: using guessed type __int64 qword_168E10;
