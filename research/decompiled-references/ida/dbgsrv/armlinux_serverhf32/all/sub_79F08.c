/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79F08
// Address: 0x00079F08

//----- (00079F08) --------------------------------------------------------
pthread_mutex_t *sub_79F08()
{
  pthread_mutex_t *v0; // r0
  pthread_mutex_t *v1; // r4
  int v2; // r8
  pthread_mutex_t *v4; // r0
  pthread_mutexattr_t v5; // [sp+0h] [bp-8h] BYREF

  v0 = (pthread_mutex_t *)sub_77D94(24);
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
    sub_77E08(v4);
  }
  return v1;
}
// 13DE8: using guessed type int __fastcall pthread_mutexattr_settype(_DWORD, _DWORD);
