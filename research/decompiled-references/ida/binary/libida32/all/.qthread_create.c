// attributes: thunk
__int64 __fastcall qthread_create(void *(*start_routine)(void *), void *arg)
{
  return qthread_create(start_routine, arg);
}

