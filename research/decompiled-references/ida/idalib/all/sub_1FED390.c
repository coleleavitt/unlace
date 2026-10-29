int __fastcall sub_1FED390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // eax
  int result; // eax
  __int64 v9; // [rsp+8h] [rbp-40h]

  if ( &_pthread_key_create )
  {
    v9 = a4;
    v7 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 168));
    a4 = v9;
    if ( v7 )
      std::__throw_system_error(v7);
  }
  result = sub_1FF5560(a1 + 8, a2, a3, a4, a5);
  if ( &_pthread_key_create )
    return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 168));
  return result;
}
