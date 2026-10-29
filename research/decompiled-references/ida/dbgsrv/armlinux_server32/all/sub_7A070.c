/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A070
// Address: 0x0007A070

//----- (0007A070) --------------------------------------------------------
pthread_mutex_t *sub_7A070()
{
  pthread_mutex_t *v0; // r0
  pthread_mutex_t *v1; // r4
  int v2; // r8
  pthread_mutex_t *v4; // r0
  pthread_mutexattr_t v5; // [sp+0h] [bp-8h] BYREF

  v0 = (pthread_mutex_t *)sub_77EFC(24);
  if ( !v0 )
    return nullptr;
  v1 = v0;
  if ( pthread_mutexattr_init(&v5) || pthread_mutexattr_settype(&v5, 1) )
    return nullptr;
  v2 = pthread_mutex_init(v1, &v5);
  pthread_mutexattr_destroy(&v5);
  if ( v2 )
  {
    v4 = v1;
    v1 = nullptr;
    sub_77F70(v4);
  }
  return v1;
}
// 13F3C: using guessed type int __fastcall pthread_mutexattr_settype(_DWORD, _DWORD);
