bool __fastcall qthread_join(pthread_t a1)
{
  return pthread_join(a1, nullptr) == 0;
}
