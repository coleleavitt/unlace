/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_create
// Address: 0x00000000000C5D60

//----- (00000000000C5D60) ----------------------------------------------------
pthread_mutex_t *qmutex_create()
{
  pthread_mutex_t *v0; // rax
  pthread_mutex_t *v1; // rbx
  int v2; // ebp
  pthread_mutexattr_t v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v0 = (pthread_mutex_t *)qalloc(40);
  if ( !v0 )
    return nullptr;
  v1 = v0;
  if ( pthread_mutexattr_init(&v4) || pthread_mutexattr_settype(&v4, 1) )
    return nullptr;
  v2 = pthread_mutex_init(v1, &v4);
  pthread_mutexattr_destroy(&v4);
  if ( v2 )
  {
    qfree(v1);
    return nullptr;
  }
  return v1;
}
