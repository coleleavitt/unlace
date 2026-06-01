/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494418
// Address: 0x0000000000494418

//----- (0000000000494418) ----------------------------------------------------
pthread_mutex_t *sub_494418()
{
  pthread_mutex_t *v0; // x0
  pthread_mutex_t *v1; // x20
  int v2; // w22
  pthread_mutex_t *v4; // x0
  pthread_mutexattr_t attr; // [xsp+30h] [xbp-10h] BYREF

  v0 = (pthread_mutex_t *)sub_491040(48);
  if ( !v0 )
    return nullptr;
  v1 = v0;
  if ( pthread_mutexattr_init(&attr) || pthread_mutexattr_settype(&attr, 1) )
    return nullptr;
  v2 = pthread_mutex_init(v1, &attr);
  pthread_mutexattr_destroy(&attr);
  if ( v2 )
  {
    v4 = v1;
    v1 = nullptr;
    j__free(v4);
  }
  return v1;
}
// 494418: could not find valid save-restore pair for x22
