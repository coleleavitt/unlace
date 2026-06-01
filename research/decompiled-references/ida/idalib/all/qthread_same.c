bool __fastcall qthread_same(__int64 a1)
{
  return a1 == pthread_self();
}
