void __fastcall sub_1174C0(char *ptr)
{
  pthread_mutex_t *v1; // r12
  unsigned __int64 v2; // rbp
  pthread_t v4; // rdi
  void (__fastcall *v5)(__int64); // rax
  __int64 v6; // rdi

  if ( ptr )
  {
    v1 = (pthread_mutex_t *)(ptr + 96);
    v2 = 0;
    pthread_mutex_lock((pthread_mutex_t *)(ptr + 96));
    *((_DWORD *)ptr + 58) = 1;
    pthread_mutex_unlock((pthread_mutex_t *)(ptr + 96));
    pthread_cond_broadcast((pthread_cond_t *)(ptr + 136));
    pthread_cond_broadcast((pthread_cond_t *)(ptr + 184));
    if ( *((_QWORD *)ptr + 4) )
    {
      do
      {
        v4 = *(_QWORD *)(*((_QWORD *)ptr + 3) + 8 * v2++);
        pthread_join(v4, nullptr);
      }
      while ( v2 < *((_QWORD *)ptr + 4) );
    }
    pthread_mutex_destroy(v1);
    pthread_cond_destroy((pthread_cond_t *)(ptr + 136));
    pthread_cond_destroy((pthread_cond_t *)(ptr + 184));
    v5 = *((void (__fastcall **)(__int64))ptr + 1);
    v6 = *((_QWORD *)ptr + 2);
    if ( *((_QWORD *)ptr + 6) )
    {
      if ( v5 )
        v5(v6);
      else
        free(*((void **)ptr + 6));
      v5 = *((void (__fastcall **)(__int64))ptr + 1);
      v6 = *((_QWORD *)ptr + 2);
    }
    if ( *((_QWORD *)ptr + 3) )
    {
      if ( v5 )
        v5(v6);
      else
        free(*((void **)ptr + 3));
      v5 = *((void (__fastcall **)(__int64))ptr + 1);
      v6 = *((_QWORD *)ptr + 2);
    }
    if ( v5 )
      ((void (__fastcall *)(__int64, char *))v5)(v6, ptr);
    else
      free(ptr);
  }
}

