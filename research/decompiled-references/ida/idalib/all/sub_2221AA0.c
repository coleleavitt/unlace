void __fastcall sub_2221AA0(pthread_mutex_t *a1)
{
  int v1; // eax

  if ( &_pthread_key_create )
  {
    v1 = pthread_mutex_lock(a1);
    if ( v1 )
      std::__throw_system_error(v1);
  }
}
