int __fastcall sub_2248C30(__int64 a1)
{
  pthread_mutex_t *v2; // rdi
  int v3; // eax
  __int64 v4; // rax
  pthread_mutex_t *mutex; // [rsp+0h] [rbp-38h] BYREF
  char v7; // [rsp+8h] [rbp-30h]

  v2 = (pthread_mutex_t *)(a1 + 176);
  mutex = v2;
  v7 = 0;
  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock(v2);
    if ( v3 )
      std::__throw_system_error(v3);
  }
  v7 = 1;
  while ( 1 )
  {
    if ( !*(_DWORD *)(a1 + 312) )
    {
      v4 = *(_QWORD *)(a1 + 112);
      if ( *(_QWORD *)(a1 + 144) == v4 )
        break;
    }
    std::condition_variable::wait(a1 + 264, &mutex);
  }
  if ( v7 && mutex && &_pthread_key_create )
    LODWORD(v4) = pthread_mutex_unlock(mutex);
  return v4;
}
