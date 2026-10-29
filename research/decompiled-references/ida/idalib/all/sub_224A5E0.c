char __fastcall sub_224A5E0(__int64 a1, __int64 a2)
{
  pthread_rwlock_t *v2; // r12
  int v3; // eax
  pthread_t v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  pthread_t v7; // r14
  char result; // al
  int v9; // eax
  pthread_mutex_t *mutex; // [rsp+0h] [rbp-48h] BYREF
  char v11; // [rsp+8h] [rbp-40h]

  v2 = (pthread_rwlock_t *)(a1 + 32);
  do
    v3 = pthread_rwlock_rdlock(v2);
  while ( v3 == 11 );
  if ( v3 == 35 )
    std::__throw_system_error(35);
  v4 = j__pthread_self();
  v5 = *(_QWORD **)(a1 + 8);
  v6 = *(_QWORD **)(a1 + 16);
  v7 = v4;
  if ( v5 == v6 )
  {
LABEL_10:
    pthread_rwlock_unlock(v2);
    v11 = 0;
    mutex = (pthread_mutex_t *)(a1 + 176);
    if ( &_pthread_key_create )
    {
      v9 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 176));
      if ( v9 )
        std::__throw_system_error(v9);
    }
    v11 = 1;
    while ( 1 )
    {
      result = sub_2249650((const __m128i *)a1, a2);
      if ( result )
        break;
      std::condition_variable::wait(a1 + 264, &mutex);
    }
    if ( v11 && mutex )
    {
      if ( &_pthread_key_create )
        return pthread_mutex_unlock(mutex);
    }
  }
  else
  {
    while ( v7 != sub_2297040(*v5) )
    {
      if ( v6 == ++v5 )
        goto LABEL_10;
    }
    pthread_rwlock_unlock(v2);
    return sub_2249A50(a1, a2);
  }
  return result;
}
