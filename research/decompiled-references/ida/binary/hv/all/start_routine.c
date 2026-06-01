char *__fastcall start_routine(char *a1)
{
  pthread_mutex_t *v1; // rbp
  unsigned __int64 v2; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64); // r15
  __int64 v8; // r13
  unsigned __int64 v9; // rdx

  if ( a1 )
  {
    v1 = (pthread_mutex_t *)(a1 + 96);
LABEL_3:
    pthread_mutex_lock(v1);
    while ( 1 )
    {
      if ( !*((_DWORD *)a1 + 22) )
      {
        v2 = *((_QWORD *)a1 + 10);
        if ( v2 < *((_QWORD *)a1 + 5) )
        {
          v4 = *((_QWORD *)a1 + 7);
          v5 = v4 + 1;
          v6 = *((_QWORD *)a1 + 6) + 16 * v4;
          v7 = *(void (__fastcall **)(__int64))v6;
          v8 = *(_QWORD *)(v6 + 8);
          *((_QWORD *)a1 + 10) = v2 + 1;
          v9 = v5 % *((_QWORD *)a1 + 9);
          *((_DWORD *)a1 + 22) = *((_QWORD *)a1 + 8) == v9;
          *((_QWORD *)a1 + 7) = v9;
          pthread_cond_signal((pthread_cond_t *)(a1 + 136));
          pthread_mutex_unlock(v1);
          v7(v8);
          pthread_mutex_lock(v1);
          --*((_QWORD *)a1 + 10);
          pthread_cond_signal((pthread_cond_t *)(a1 + 136));
          pthread_mutex_unlock(v1);
          goto LABEL_3;
        }
      }
      if ( *((_DWORD *)a1 + 58) )
        break;
      pthread_cond_wait((pthread_cond_t *)(a1 + 184), v1);
    }
    pthread_mutex_unlock(v1);
  }
  return a1;
}

