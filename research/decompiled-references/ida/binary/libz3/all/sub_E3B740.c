int __fastcall sub_E3B740(pthread_mutex_t *mutex)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v3; // rbx
  __int64 i; // r12
  __int64 v5; // rax

  LODWORD(v1) = (unsigned __int8)mutex[2].__size[28];
  if ( !(_BYTE)v1 )
  {
    if ( &_pthread_key_create )
    {
      v2 = pthread_mutex_lock(mutex);
      if ( v2 )
        std::__throw_system_error(v2);
    }
    mutex[2].__size[28] = 1;
    LODWORD(v1) = std::condition_variable::notify_all((std::condition_variable *)&mutex[1]);
    v3 = *(&mutex[2].__align + 2);
    if ( v3 )
    {
      v1 = *(unsigned int *)(v3 - 4);
      for ( i = v3 + 8 * v1; i != v3; v3 += 8 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 56LL) + 72LL))(*(_QWORD *)(*(_QWORD *)v3 + 56LL));
        LODWORD(v1) = sub_18295D0(v5);
      }
    }
    if ( &_pthread_key_create )
      LODWORD(v1) = pthread_mutex_unlock(mutex);
  }
  return v1;
}

