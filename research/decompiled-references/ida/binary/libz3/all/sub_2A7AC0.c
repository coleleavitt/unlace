void __fastcall sub_2A7AC0(pthread_mutex_t *a1, __int64 a2)
{
  int v2; // eax

  if ( &_pthread_key_create )
  {
    v2 = pthread_mutex_lock(a1 + 2);
    if ( v2 )
      std::__throw_system_error(v2);
  }
  a1[3].__align = a2;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(a1 + 2);
}

