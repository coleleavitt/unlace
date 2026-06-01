__int64 __fastcall sub_8DF470(char *arg, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  char *v4; // r12
  void (__fastcall *v5)(_QWORD); // rax
  unsigned __int64 v6; // rbp
  pthread_t *v7; // r12

  v2 = 1;
  if ( arg )
  {
    pthread_mutex_lock((pthread_mutex_t *)(arg + 96));
    if ( a2 > *((_QWORD *)arg + 4) )
    {
      if ( *(_QWORD *)arg )
      {
        v4 = (char *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64))arg)(*((_QWORD *)arg + 2), 8 * a2);
        memset(v4, 0, 8 * a2);
      }
      else
      {
        v4 = (char *)calloc(1u, 8 * a2);
      }
      if ( v4 )
      {
        memcpy(v4, *((const void **)arg + 3), 8LL * *((_QWORD *)arg + 4));
        if ( *((_QWORD *)arg + 3) )
        {
          v5 = *((void (__fastcall **)(_QWORD))arg + 1);
          if ( v5 )
            v5(*((_QWORD *)arg + 2));
          else
            free(*((void **)arg + 3));
        }
        v6 = *((_QWORD *)arg + 4);
        *((_QWORD *)arg + 3) = v4;
        if ( a2 <= v6 )
        {
LABEL_20:
          *((_QWORD *)arg + 4) = a2;
          goto LABEL_4;
        }
        v7 = (pthread_t *)&v4[8 * v6];
        while ( !pthread_create(v7, nullptr, (void *(*)(void *))start_routine, arg) )
        {
          ++v6;
          ++v7;
          if ( a2 == v6 )
            goto LABEL_20;
        }
        *((_QWORD *)arg + 4) = v6;
      }
    }
    else if ( a2 )
    {
LABEL_4:
      *((_QWORD *)arg + 5) = a2;
      v2 = 0;
LABEL_5:
      pthread_cond_broadcast((pthread_cond_t *)(arg + 184));
      pthread_mutex_unlock((pthread_mutex_t *)(arg + 96));
      return v2;
    }
    v2 = 1;
    goto LABEL_5;
  }
  return v2;
}

