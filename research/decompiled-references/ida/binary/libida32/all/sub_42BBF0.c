int __fastcall sub_42BBF0(__int64 a1)
{
  pthread_rwlock_t *v2; // rdi
  int result; // eax

  if ( !*(_BYTE *)(a1 + 8) )
    std::__throw_system_error(1);
  v2 = *(pthread_rwlock_t **)a1;
  if ( v2 )
  {
    if ( &_pthread_key_create )
      result = pthread_rwlock_unlock(v2);
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}

