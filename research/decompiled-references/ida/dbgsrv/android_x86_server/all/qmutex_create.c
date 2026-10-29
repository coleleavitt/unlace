/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmutex_create
// Address: 0x000B3CD0

//----- (000B3CD0) --------------------------------------------------------
pthread_mutex_t *qmutex_create()
{
  pthread_mutex_t *v0; // eax
  pthread_mutex_t *v1; // edi
  int v2; // esi
  int v4; // [esp+10h] [ebp-1Ch]
  pthread_mutexattr_t attr; // [esp+14h] [ebp-18h] BYREF
  unsigned int v6; // [esp+18h] [ebp-14h]

  v6 = __readgsdword(0x14u);
  v0 = (pthread_mutex_t *)qalloc(4);
  if ( !v0 )
    return nullptr;
  v1 = v0;
  v2 = 0;
  if ( !pthread_mutexattr_init(&attr) && !pthread_mutexattr_settype(&attr, 1) )
  {
    v4 = pthread_mutex_init(v1, &attr);
    pthread_mutexattr_destroy(&attr);
    if ( v4 )
      qfree(v1);
    else
      return v1;
  }
  return (pthread_mutex_t *)v2;
}
// 182F0: using guessed type int __cdecl pthread_mutexattr_settype(_DWORD, _DWORD);
