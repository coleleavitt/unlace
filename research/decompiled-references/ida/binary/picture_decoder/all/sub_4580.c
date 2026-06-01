bool __fastcall sub_4580(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_unlock(a1) == 0;
}

