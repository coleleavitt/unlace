/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_create
// Address: 0x00000001000757EC

//----- (00000001000757EC) ----------------------------------------------------
pthread_mutex_t *qmutex_create()
{
  pthread_mutex_t *result; // x0
  pthread_mutex_t *v1; // x19
  int v2; // w20
  pthread_mutexattr_t v3; // [xsp+8h] [xbp-28h] BYREF

  result = (pthread_mutex_t *)qalloc((void *)0x40);
  if ( result )
  {
    v1 = result;
    if ( !pthread_mutexattr_init(&v3) && !pthread_mutexattr_settype(&v3, 2) )
    {
      v2 = pthread_mutex_init(v1, &v3);
      pthread_mutexattr_destroy(&v3);
      result = v1;
      if ( !v2 )
        return result;
      qfree(v1);
    }
    return nullptr;
  }
  return result;
}
