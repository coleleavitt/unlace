__int64 __fastcall find_extlang(char *s1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 *v5; // rbp
  __int64 *v6; // r14
  const char *v7; // rsi

  v2 = 0;
  if ( s1 )
  {
    v3 = qword_2CD4560;
    qmutex_lock(qword_2CD4560);
    if ( a2 == 2 )
    {
      if ( *(_QWORD *)s1 >= (unsigned __int64)xmmword_2CD4548 )
        goto LABEL_11;
      v2 = *(_QWORD *)(qword_2CD4540 + 8LL * *(_QWORD *)s1);
      if ( !v2 )
        goto LABEL_11;
    }
    else
    {
      v5 = (__int64 *)qword_2CD4540;
      v6 = (__int64 *)(qword_2CD4540 + 8 * xmmword_2CD4548);
      if ( !(8LL * (_QWORD)xmmword_2CD4548) )
      {
LABEL_11:
        qmutex_unlock(v3);
        return v2;
      }
      while ( 1 )
      {
        v2 = *v5;
        if ( *v5 )
        {
          v7 = *(const char **)(v2 + 24);
          if ( a2 )
            v7 = *(const char **)(v2 + 16);
          if ( v7 && !strcasecmp(s1, v7) )
            break;
        }
        if ( ++v5 == v6 )
        {
          v2 = 0;
          goto LABEL_11;
        }
      }
    }
    ++*(_DWORD *)(v2 + 12);
    goto LABEL_11;
  }
  return v2;
}
