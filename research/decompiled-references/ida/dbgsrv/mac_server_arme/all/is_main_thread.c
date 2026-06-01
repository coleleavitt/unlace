/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_main_thread
// Address: 0x000000010007568C

//----- (000000010007568C) ----------------------------------------------------
bool is_main_thread()
{
  _opaque_pthread_t *v0; // x19
  _opaque_pthread_t *v1; // x0

  v0 = (_opaque_pthread_t *)qword_1000A63B8;
  if ( !qword_1000A63B8 )
  {
    qword_1000A63B8 = (__int64)pthread_self();
    qword_1000A63C0 = (__int64)qmutex_create();
    v0 = (_opaque_pthread_t *)qword_1000A63B8;
  }
  v1 = pthread_self();
  return pthread_equal(v1, v0) != 0;
}
// 1000A5F98: using guessed type __int64 qword_1000A5F98[128];
// 1000A63B8: using guessed type __int64 qword_1000A63B8;
// 1000A63C0: using guessed type __int64 qword_1000A63C0;
