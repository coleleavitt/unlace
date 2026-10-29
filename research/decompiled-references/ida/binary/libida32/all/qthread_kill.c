bool __fastcall qthread_kill(pthread_t a1)
{
  return pthread_cancel(a1) == 0;
}

