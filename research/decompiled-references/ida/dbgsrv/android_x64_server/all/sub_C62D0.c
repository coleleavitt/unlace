/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C62D0
// Address: 0x00000000000C62D0

//----- (00000000000C62D0) ----------------------------------------------------
int __fastcall sub_C62D0(char *arg)
{
  pthread_mutex_t *v1; // r14
  int result; // eax
  pthread_t v3; // rax

  v1 = *((pthread_mutex_t **)arg + 7);
  if ( v1 )
    result = pthread_mutex_lock(*((pthread_mutex_t **)arg + 7));
  if ( !arg[80] )
  {
    v3 = qthread_create((void *(*)(void *))sub_C6790, arg);
    *((_QWORD *)arg + 8) = v3;
    if ( !v3 )
    {
      if ( !(_BYTE)under_debugger )
        interr(1258);
      BUG();
    }
    arg[80] = 1;
    result = pthread_sigmask(1, (const __sigset_t *)(arg + 72), nullptr);
  }
  if ( v1 )
    return pthread_mutex_unlock(v1);
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
