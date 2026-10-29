char __fastcall sub_249550(__int64 a1, int a2)
{
  int v2; // eax
  char *v3; // r14
  char result; // al

  if ( &_pthread_key_create )
  {
    v2 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
    if ( v2 )
      std::__throw_system_error(v2);
  }
  v3 = (char *)(a1 + 56);
  result = *(_BYTE *)(a1 + 56);
  if ( result )
  {
    if ( &_pthread_key_create )
      return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a2;
    sub_1829650(*(_QWORD *)(a1 + 64));
    result = *v3;
    *v3 = 1;
    if ( &_pthread_key_create )
      return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
  }
  return result;
}

