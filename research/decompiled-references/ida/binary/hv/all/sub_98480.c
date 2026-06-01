bool __fastcall sub_98480(char *arg)
{
  pthread_mutex_t *v1; // rbp
  pthread_t v2; // rax

  v1 = *((pthread_mutex_t **)arg + 7);
  sub_98400(v1);
  if ( !arg[200] )
  {
    v2 = sub_98360(sub_98580, arg);
    *((_QWORD *)arg + 8) = v2;
    if ( !v2 )
    {
      if ( !byte_1671A1 )
        sub_96F80(1258);
      BUG();
    }
    arg[200] = 1;
    pthread_sigmask(1, (const __sigset_t *)(arg + 72), nullptr);
  }
  return sub_98450(v1);
}

