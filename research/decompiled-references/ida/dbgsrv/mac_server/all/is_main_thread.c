/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_main_thread
// Address: 0x000000010007DD80

//----- (000000010007DD80) ----------------------------------------------------
bool is_main_thread()
{
  _opaque_pthread_t *v0; // rbx
  _opaque_pthread_t *v1; // rax

  v0 = qword_1000AED00;
  if ( !qword_1000AED00 )
  {
    qword_1000AED00 = pthread_self();
    qword_1000AED08 = qmutex_create();
    v0 = qword_1000AED00;
  }
  v1 = pthread_self();
  return pthread_equal(v1, v0) != 0;
}
