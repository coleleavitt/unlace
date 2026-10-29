/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_create
// Address: 0x00000000000C100C

//----- (00000000000C100C) ----------------------------------------------------
pthread_mutex_t *qmutex_create()
{
  pthread_mutex_t *v0; // x19
  int v1; // w20
  pthread_mutexattr_t v3; // [xsp+0h] [xbp-30h] BYREF
  __int64 v4; // [xsp+8h] [xbp-28h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v0 = (pthread_mutex_t *)qalloc(&qword_28);
  if ( v0 )
  {
    if ( pthread_mutexattr_init(&v3) || pthread_mutexattr_settype(&v3, 1) )
      return nullptr;
    v1 = pthread_mutex_init(v0, &v3);
    pthread_mutexattr_destroy(&v3);
    if ( v1 )
    {
      qfree(v0);
      return nullptr;
    }
  }
  return v0;
}
// 28: using guessed type __int64;
