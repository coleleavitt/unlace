pthread_mutex_t *qmutex_create()
{
  __int64 v0; // rax
  pthread_mutex_t *v1; // rbx
  int v2; // r12d
  pthread_mutexattr_t attr; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v0 = qalloc(40);
  if ( !v0 )
    return nullptr;
  v1 = (pthread_mutex_t *)v0;
  if ( pthread_mutexattr_init(&attr) || pthread_mutexattr_settype(&attr, 1) )
    return nullptr;
  v2 = pthread_mutex_init(v1, &attr);
  pthread_mutexattr_destroy(&attr);
  if ( v2 )
  {
    qfree(v1);
    return nullptr;
  }
  return v1;
}

