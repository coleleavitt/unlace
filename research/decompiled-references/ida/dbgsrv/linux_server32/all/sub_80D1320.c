/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1320
// Address: 0x080D1320

//----- (080D1320) --------------------------------------------------------
pthread_mutex_t *sub_80D1320()
{
  pthread_mutex_t *v0; // eax
  pthread_mutex_t *v1; // esi
  int v2; // ebp
  pthread_mutexattr_t attr; // [esp+18h] [ebp-24h] BYREF
  unsigned int v5; // [esp+1Ch] [ebp-20h]

  v5 = __readgsdword(0x14u);
  v0 = (pthread_mutex_t *)sub_80CF710(24);
  if ( v0 )
  {
    v1 = v0;
    if ( !pthread_mutexattr_init(&attr) && !pthread_mutexattr_settype(&attr, 1) )
    {
      v2 = pthread_mutex_init(v1, &attr);
      pthread_mutexattr_destroy(&attr);
      if ( !v2 )
        goto LABEL_7;
      sub_80CF780(v1);
    }
  }
  v1 = nullptr;
LABEL_7:
  if ( v5 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v1;
}
// 804B340: using guessed type int __cdecl pthread_mutexattr_settype(_DWORD, _DWORD);
