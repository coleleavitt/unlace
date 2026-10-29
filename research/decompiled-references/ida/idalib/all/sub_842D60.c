__int64 __fastcall sub_842D60(char *arg)
{
  __int64 v1; // rbp
  __int64 v2; // rax

  v1 = *((_QWORD *)arg + 7);
  qmutex_lock(v1);
  if ( !arg[200] )
  {
    v2 = qthread_create(sub_842E60, arg);
    *((_QWORD *)arg + 8) = v2;
    if ( !v2 )
    {
      if ( !under_debugger )
        interr(1258);
      BUG();
    }
    arg[200] = 1;
    pthread_sigmask(1, (const __sigset_t *)(arg + 72), nullptr);
  }
  return qmutex_unlock(v1);
}
