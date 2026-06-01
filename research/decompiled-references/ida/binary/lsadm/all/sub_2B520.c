bool __fastcall sub_2B520(pthread_mutex_t *a1)
{
  return a1 && pthread_mutex_unlock(a1) == 0;
}

