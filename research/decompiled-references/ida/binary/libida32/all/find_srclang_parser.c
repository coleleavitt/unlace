__int64 __fastcall find_srclang_parser(char *s2, int a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-40h]

  v2 = 0;
  if ( s2 )
  {
    v3 = *(_QWORD **)(qword_2CA1698 + 1696);
    v8 = v3[1];
    qmutex_lock(v8);
    v4 = v3[4];
    if ( a2 )
    {
      if ( v4 )
      {
        v5 = v3[3];
        v6 = 0;
LABEL_5:
        while ( 1 )
        {
          v2 = *(_QWORD *)(v5 + 8 * v6);
          if ( v2 )
            break;
LABEL_10:
          if ( ++v6 == v4 )
          {
LABEL_11:
            v2 = 0;
            goto LABEL_12;
          }
        }
        if ( a2 == 1 )
        {
          while ( strcmp(*(const char **)(v2 + 16), s2) )
          {
            if ( ++v6 == v4 )
              goto LABEL_11;
            v2 = *(_QWORD *)(v5 + 8 * v6);
            if ( !v2 )
            {
              if ( ++v6 != v4 )
                goto LABEL_5;
              goto LABEL_11;
            }
          }
        }
        else
        {
          while ( a2 != 2 )
          {
            if ( ++v6 == v4 )
              goto LABEL_11;
            v2 = *(_QWORD *)(v5 + 8 * v6);
            if ( !v2 )
              goto LABEL_10;
          }
          while ( (*(_DWORD *)s2 & *(_DWORD *)(v2 + 24)) != *(_DWORD *)s2 )
          {
            if ( v4 == ++v6 )
              goto LABEL_11;
            v2 = *(_QWORD *)(v5 + 8 * v6);
            if ( !v2 )
            {
              if ( ++v6 != v4 )
                goto LABEL_5;
              goto LABEL_11;
            }
          }
        }
        goto LABEL_26;
      }
    }
    else if ( *(_QWORD *)s2 < v4 )
    {
      v2 = *(_QWORD *)(v3[3] + 8LL * *(_QWORD *)s2);
      if ( v2 )
      {
LABEL_26:
        ++*(_DWORD *)(v2 + 12);
        qmutex_unlock(v8);
        return v2;
      }
    }
LABEL_12:
    qmutex_unlock(v8);
  }
  return v2;
}

