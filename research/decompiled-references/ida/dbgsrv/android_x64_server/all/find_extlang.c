/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_extlang
// Address: 0x000000000006A530

//----- (000000000006A530) ----------------------------------------------------
__int64 __fastcall find_extlang(char *s1, int a2)
{
  pthread_mutex_t *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  const char *v8; // rsi
  pthread_mutex_t *v10; // [rsp+0h] [rbp-38h]

  if ( s1 )
  {
    v3 = (pthread_mutex_t *)qword_1557C0;
    qmutex_lock((pthread_mutex_t *)qword_1557C0);
    if ( a2 == 2 )
    {
      if ( *(_QWORD *)s1 < *((_QWORD *)&xmmword_1557C8 + 1) )
      {
        v4 = *(_QWORD *)(xmmword_1557C8 + 8LL * *(_QWORD *)s1);
        if ( v4 )
        {
          ++*(_DWORD *)(v4 + 12);
LABEL_17:
          qmutex_unlock(v3);
          return v4;
        }
      }
    }
    else
    {
      v5 = 8LL * *((_QWORD *)&xmmword_1557C8 + 1);
      if ( 8LL * *((_QWORD *)&xmmword_1557C8 + 1) )
      {
        v10 = v3;
        v6 = xmmword_1557C8;
        v7 = 0;
        while ( 1 )
        {
          v4 = *(_QWORD *)(v6 + v7);
          if ( v4 )
          {
            v8 = *(const char **)(v4 + 8LL * (a2 == 0) + 16);
            if ( v8 )
            {
              if ( !strcasecmp(s1, v8) )
                break;
            }
          }
          v7 += 8;
          if ( v5 == v7 )
          {
            v4 = 0;
            goto LABEL_16;
          }
        }
        ++*(_DWORD *)(v4 + 12);
LABEL_16:
        v3 = v10;
        goto LABEL_17;
      }
    }
    v4 = 0;
    goto LABEL_17;
  }
  return 0;
}
// 1557C0: using guessed type __int64 qword_1557C0;
// 1557C8: using guessed type __int128 xmmword_1557C8;
