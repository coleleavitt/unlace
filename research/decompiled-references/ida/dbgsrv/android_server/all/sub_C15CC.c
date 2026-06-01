/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C15CC
// Address: 0x00000000000C15CC

//----- (00000000000C15CC) ----------------------------------------------------
__int64 __fastcall sub_C15CC(__int64 result)
{
  pthread_mutex_t *v1; // x19
  __int64 v2; // x20
  void *v3; // x0

  v1 = *(pthread_mutex_t **)(result + 56);
  v2 = result;
  if ( v1 )
    result = pthread_mutex_lock(*(pthread_mutex_t **)(result + 56));
  if ( !*(_BYTE *)(v2 + 80) )
  {
    v3 = (void *)qthread_create((void *(*)(void *))sub_C1AA8, (void *)v2);
    *(_QWORD *)(v2 + 64) = v3;
    if ( !v3 )
    {
      if ( !under_debugger )
        v3 = interr(1258);
      __break(1u);
      sub_39134(v3);
    }
    *(_BYTE *)(v2 + 80) = 1;
    result = pthread_sigmask(1, (const __sigset_t *)(v2 + 72), nullptr);
  }
  if ( v1 )
    return pthread_mutex_unlock(v1);
  return result;
}
// 168DF0: using guessed type char under_debugger;
