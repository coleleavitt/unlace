/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B44
// Address: 0x00080B44

//----- (00080B44) --------------------------------------------------------
int __fastcall sub_80B44(int a1)
{
  pthread_mutex_t *v2; // r4
  int result; // r0
  int v4; // r0

  v2 = *(pthread_mutex_t **)(a1 + 28);
  if ( v2 )
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 28));
  result = *(unsigned __int8 *)(a1 + 40);
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v4 = qthread_create((void *(*)(void *))sub_80EB8, (void *)a1);
    *(_DWORD *)(a1 + 32) = v4;
    if ( !v4 )
    {
      if ( !under_debugger )
        interr(1258);
      __debugbreak();
    }
    *(_BYTE *)(a1 + 40) = 1;
    result = pthread_sigmask(1, (const __sigset_t *)(a1 + 36), nullptr);
  }
  if ( v2 )
    return pthread_mutex_unlock(v2);
  return result;
}
// E0550: using guessed type char under_debugger;
