/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_main_thread
// Address: 0x00000001000705E8

//----- (00000001000705E8) ----------------------------------------------------
bool is_main_thread()
{
  _opaque_pthread_t *v0; // x19
  _opaque_pthread_t *v1; // x0

  v0 = (_opaque_pthread_t *)qword_10009E3B8;
  if ( !qword_10009E3B8 )
  {
    qword_10009E3B8 = (__int64)pthread_self();
    qword_10009E3C0 = (__int64)qmutex_create();
    v0 = (_opaque_pthread_t *)qword_10009E3B8;
  }
  v1 = pthread_self();
  return pthread_equal(v1, v0) != 0;
}
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3B8: using guessed type __int64 qword_10009E3B8;
// 10009E3C0: using guessed type __int64 qword_10009E3C0;
