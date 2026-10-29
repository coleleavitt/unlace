int __fastcall sub_72C9A0(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v2; // r13
  int v3; // eax
  int result; // eax

  if ( !*(_QWORD *)(a1 + 832) )
    return sub_1817FC0(a2, a1 + 816);
  v2 = (pthread_mutex_t *)(a1 + 864);
  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 864));
    if ( v3 )
      std::__throw_system_error(v3);
  }
  if ( !*(_QWORD *)(a1 + 832) )
  {
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v2);
    return sub_1817FC0(a2, a1 + 816);
  }
  result = sub_8E3A50(*(_QWORD *)(a1 + 832));
  if ( &_pthread_key_create )
    return pthread_mutex_unlock(v2);
  return result;
}

