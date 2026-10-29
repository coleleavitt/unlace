void __fastcall Z3_solver_interrupt(__int64 a1, pthread_mutex_t *a2)
{
  int v2; // eax
  __int64 align; // rbx
  char (__fastcall *v4)(__int64, int); // rax
  int v5; // eax

  if ( &_pthread_key_create )
  {
    v2 = pthread_mutex_lock(a2 + 2);
    if ( v2 )
      std::__throw_system_error(v2);
  }
  align = a2[3].__align;
  if ( align )
  {
    v4 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)align + 16LL);
    if ( v4 == sub_249550 )
    {
      if ( &_pthread_key_create )
      {
        v5 = pthread_mutex_lock((pthread_mutex_t *)(align + 16));
        if ( v5 )
          std::__throw_system_error(v5);
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
      v4(align, 4);
    }
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(a2 + 2);
}

