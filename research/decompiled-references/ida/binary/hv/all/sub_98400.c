bool __fastcall sub_98400(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_lock(a1) == 0;
}

