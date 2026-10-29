int __fastcall sub_24E910(__int64 *a1)
{
  __int64 v1; // rax
  pthread_mutex_t *v2; // r12
  int v3; // eax
  __int64 v4; // rax

  v1 = *a1;
  v2 = (pthread_mutex_t *)(*a1 + 256);
  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock((pthread_mutex_t *)(*a1 + 256));
    if ( v3 )
      std::__throw_system_error(v3);
    v1 = *a1;
  }
  v4 = *(_QWORD *)(v1 + 1576);
  --*(_DWORD *)(v4 - 4);
  if ( &_pthread_key_create )
    LODWORD(v4) = pthread_mutex_unlock(v2);
  return v4;
}

