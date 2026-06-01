/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070C64
// Address: 0x0000000100070C64

//----- (0000000100070C64) ----------------------------------------------------
__int64 __fastcall sub_100070C64(__int64 result)
{
  __int64 v1; // x20
  pthread_mutex_t *v2; // x19
  pthread_t v3; // x0

  v1 = result;
  v2 = *(pthread_mutex_t **)(result + 56);
  if ( v2 )
    result = pthread_mutex_lock(v2);
  if ( (*(_BYTE *)(v1 + 76) & 1) == 0 )
  {
    v3 = qthread_create((void *(__cdecl *)(void *))sub_10007113C, (void *)v1);
    *(_QWORD *)(v1 + 64) = v3;
    if ( !v3 )
    {
      if ( under_debugger != 1 )
        goto LABEL_11;
      while ( 1 )
      {
        __break(1u);
LABEL_11:
        interr(1258);
      }
    }
    *(_BYTE *)(v1 + 76) = 1;
    result = pthread_sigmask(2, (const sigset_t *)(v1 + 72), nullptr);
  }
  if ( v2 )
    return pthread_mutex_unlock(v2);
  return result;
}
// 10009D90D: using guessed type char under_debugger;
