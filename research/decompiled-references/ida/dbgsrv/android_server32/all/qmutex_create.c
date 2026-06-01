/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_create
// Address: 0x00080734

//----- (00080734) --------------------------------------------------------
pthread_mutex_t *qmutex_create()
{
  pthread_mutex_t *v0; // r0
  int v1; // r5
  pthread_mutex_t *v2; // r4
  int v3; // r6
  pthread_mutexattr_t attr; // [sp+4h] [bp-8h] BYREF

  v0 = (pthread_mutex_t *)qalloc(4);
  v1 = 0;
  if ( v0 )
  {
    v2 = v0;
    v1 = 0;
    if ( !pthread_mutexattr_init(&attr) && !pthread_mutexattr_settype(&attr, 1) )
    {
      v3 = pthread_mutex_init(v2, &attr);
      pthread_mutexattr_destroy(&attr);
      if ( v3 )
      {
        qfree(v2);
        return nullptr;
      }
      else
      {
        return v2;
      }
    }
  }
  return (pthread_mutex_t *)v1;
}
// 19958: using guessed type int __fastcall pthread_mutexattr_settype(_DWORD, _DWORD);
