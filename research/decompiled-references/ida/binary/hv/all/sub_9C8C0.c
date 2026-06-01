__int64 __fastcall sub_9C8C0(char *s2)
{
  unsigned int v1; // ebp
  pthread_mutex_t *v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r13
  char *v6; // r12

  if ( !s2 || !*s2 )
    return 0;
  v1 = 0;
  if ( !strchr(s2, 47) && !strchr(s2, 92) )
  {
    v3 = (pthread_mutex_t *)qword_167200;
    sub_98400((pthread_mutex_t *)qword_167200);
    v4 = qword_1671E0;
    v5 = qword_1671E0 + 8 * xmmword_1671E8;
    if ( v5 == qword_1671E0 )
    {
LABEL_12:
      v6 = (char *)operator new(0x1668u);
      sub_9C260(v6, s2, nullptr);
    }
    else
    {
      while ( 1 )
      {
        v6 = *(char **)v4;
        if ( !strcmp((const char *)(*(_QWORD *)v4 + 8LL), s2) )
          break;
        v4 += 8;
        if ( v5 == v4 )
          goto LABEL_12;
      }
    }
    qword_1671F8 = (__int64)v6;
    v1 = 1;
    sub_98450(v3);
  }
  return v1;
}

