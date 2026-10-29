void __fastcall sub_2A7B20(pthread_mutex_t *a1)
{
  int v1; // eax
  __int64 align; // rbx
  char (__fastcall *v3)(__int64, int); // rax
  int v4; // eax

  if ( &_pthread_key_create )
  {
    v1 = pthread_mutex_lock(a1 + 2);
    if ( v1 )
      std::__throw_system_error(v1);
  }
  align = a1[3].__align;
  if ( align )
  {
    v3 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)align + 16LL);
    if ( v3 == sub_249550 )
    {
      if ( &_pthread_key_create )
      {
        v4 = pthread_mutex_lock((pthread_mutex_t *)(align + 16));
        if ( v4 )
          std::__throw_system_error(v4);
      }
      if ( *(_BYTE *)(align + 56) )
      {
        if ( !&_pthread_key_create )
          return;
      }
      else
      {
        *(_DWORD *)(align + 8) = 4;
        sub_1829650(*(_QWORD *)(align + 64));
        *(_BYTE *)(align + 56) = 1;
        if ( !&_pthread_key_create )
          return;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(align + 16));
    }
    else
    {
      v3(align, 4);
    }
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(a1 + 2);
}

