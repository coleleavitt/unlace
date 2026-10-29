/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_create
// Address: 0x000000010007DEC0

//----- (000000010007DEC0) ----------------------------------------------------
pthread_mutex_t *qmutex_create()
{
  pthread_mutex_t *v0; // rax
  pthread_mutex_t *v1; // rbx
  int v2; // r15d
  pthread_mutexattr_t v4; // [rsp+0h] [rbp-30h] BYREF

  v0 = (pthread_mutex_t *)qalloc(64);
  if ( v0 )
  {
    v1 = v0;
    if ( !pthread_mutexattr_init(&v4) && !pthread_mutexattr_settype(&v4, 2) )
    {
      v2 = pthread_mutex_init(v1, &v4);
      pthread_mutexattr_destroy(&v4);
      if ( !v2 )
        return v1;
      qfree(v1);
    }
  }
  return nullptr;
}
