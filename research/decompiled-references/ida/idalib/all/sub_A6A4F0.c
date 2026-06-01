char *__fastcall sub_A6A4F0(char *src)
{
  __int64 v1; // r9
  unsigned __int64 v2; // rcx
  _QWORD *v3; // r8
  char *result; // rax
  char *v5; // rsi
  char *v6; // rcx
  char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rbp
  __int64 v13; // rbx

  v1 = *(_QWORD *)src;
  v2 = *(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL;
  v3 = (_QWORD *)((*(__int64 *)src >> 2) & 1);
  if ( ((*(__int64 *)src >> 2) & 1) != 0 )
  {
    v7 = *(char **)v2;
    v8 = 8LL * *(unsigned int *)(v2 + 8);
    v5 = (char *)(*(_QWORD *)v2 + v8);
    v9 = v8 >> 3;
    v10 = v8 >> 5;
    if ( v10 )
    {
      if ( *(_QWORD *)v7 )
      {
        v6 = v7 + 8;
        if ( *((_QWORD *)v7 + 1) )
        {
          v6 = v7 + 16;
          if ( *((_QWORD *)v7 + 2) )
          {
            v6 = v7 + 24;
            if ( *((_QWORD *)v7 + 3) )
            {
              while ( 1 )
              {
                v6 = v7 + 32;
                if ( !--v10 )
                {
                  v9 = (v5 - v6) >> 3;
                  goto LABEL_19;
                }
                if ( !*((_QWORD *)v7 + 4) )
                  goto LABEL_26;
                if ( !*((_QWORD *)v7 + 5) )
                {
                  v6 = v7 + 40;
                  goto LABEL_26;
                }
                if ( !*((_QWORD *)v7 + 6) )
                {
                  v6 = v7 + 48;
                  goto LABEL_26;
                }
                if ( !*((_QWORD *)v7 + 7) )
                  break;
                v7 += 32;
              }
              v6 = v7 + 56;
            }
          }
        }
      }
      else
      {
        v6 = *(char **)v2;
      }
      goto LABEL_26;
    }
    v6 = *(char **)v2;
LABEL_19:
    if ( v9 != 2 )
    {
      if ( v9 != 3 )
      {
        if ( v9 != 1 )
        {
          result = v5;
          goto LABEL_3;
        }
        result = v6;
        v6 = v5;
        goto LABEL_37;
      }
      if ( !*(_QWORD *)v6 )
        goto LABEL_26;
      v6 += 8;
    }
    if ( !*(_QWORD *)v6 )
      goto LABEL_26;
    result = v6 + 8;
    v6 = v5;
    goto LABEL_37;
  }
  result = src;
  if ( !v2 )
  {
LABEL_3:
    v5 = result;
    v6 = result;
    goto LABEL_4;
  }
  v6 = src + 8;
LABEL_37:
  v5 = v6;
  if ( *(_QWORD *)result )
  {
LABEL_4:
    if ( !v3 )
      return result;
    goto LABEL_39;
  }
  v6 = result;
LABEL_26:
  if ( v6 == v5 )
  {
    result = v6;
    goto LABEL_3;
  }
  result = v6 + 8;
  if ( v6 + 8 != v5 )
  {
    do
    {
      if ( *(_QWORD *)result )
      {
        *(_QWORD *)v6 = *(_QWORD *)result;
        v6 += 8;
      }
      result += 8;
    }
    while ( result != v5 );
    v1 = *(_QWORD *)src;
    result = (char *)((*(__int64 *)src >> 2) & 1);
    v3 = result;
  }
  if ( v3 )
  {
LABEL_39:
    v11 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    v12 = v11;
    result = *(char **)v11;
    v13 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8) - (_QWORD)v5;
    if ( v5 != (char *)(*(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8)) )
    {
      v6 = (char *)memmove(v6, v5, *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8) - (_QWORD)v5);
      result = *(char **)v12;
    }
    *(_DWORD *)(v12 + 8) = (&v6[v13] - result) >> 3;
    return result;
  }
  if ( v6 != v5 && src == v6 )
    *(_QWORD *)src = 0;
  return result;
}
