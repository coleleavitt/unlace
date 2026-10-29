char *__fastcall sub_6D8C00(char *dest)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // r8
  bool v3; // dl
  char *v4; // rcx
  char *v5; // rsi
  char *result; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbp

  v1 = *(_QWORD *)dest;
  v2 = *(__int64 *)dest >> 2;
  v3 = (v2 & 1) == 0;
  if ( (v2 & 1) != 0 )
  {
    v4 = *(char **)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    v5 = &v4[8 * *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8)];
  }
  else
  {
    v4 = dest;
    v5 = &dest[8 * (v1 > 7)];
  }
  result = (char *)((v5 - v4) >> 5);
  v7 = (v5 - v4) >> 3;
  if ( (__int64)result > 0 )
  {
    result = &v4[32 * (_QWORD)result];
    while ( *(_QWORD *)v4 )
    {
      if ( !*((_QWORD *)v4 + 1) )
      {
        v4 += 8;
        goto LABEL_10;
      }
      if ( !*((_QWORD *)v4 + 2) )
      {
        v4 += 16;
        goto LABEL_10;
      }
      if ( !*((_QWORD *)v4 + 3) )
      {
        v4 += 24;
        goto LABEL_10;
      }
      v4 += 32;
      if ( v4 == result )
      {
        v7 = (v5 - v4) >> 3;
        goto LABEL_21;
      }
    }
    goto LABEL_10;
  }
LABEL_21:
  if ( v7 == 2 )
    goto LABEL_36;
  if ( v7 == 3 )
  {
    if ( !*(_QWORD *)v4 )
      goto LABEL_10;
    v4 += 8;
LABEL_36:
    if ( !*(_QWORD *)v4 )
      goto LABEL_10;
    v4 += 8;
    goto LABEL_24;
  }
  if ( v7 != 1 )
    goto LABEL_25;
LABEL_24:
  if ( *(_QWORD *)v4 )
    goto LABEL_25;
LABEL_10:
  if ( v4 == v5 )
  {
LABEL_25:
    if ( ((*(__int64 *)dest >> 2) & 1) == 0 )
      return result;
    v4 = v5;
    goto LABEL_27;
  }
  result = v4 + 8;
  if ( v4 + 8 != v5 )
  {
    do
    {
      if ( *(_QWORD *)result )
      {
        *(_QWORD *)v4 = *(_QWORD *)result;
        v4 += 8;
      }
      result += 8;
    }
    while ( result != v5 );
    v1 = *(_QWORD *)dest;
    v2 = *(__int64 *)dest >> 2;
    result = (char *)~v2;
    v3 = (v2 & 1) == 0;
  }
  if ( v3 )
  {
    if ( dest == v4 && v4 != v5 )
      *(_QWORD *)dest = 0;
    return result;
  }
LABEL_27:
  if ( (v2 & 1) != 0 )
  {
    v8 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 )
    {
      result = *(char **)v8;
      v9 = *(unsigned int *)(v8 + 8);
      v10 = *(_QWORD *)v8 + 8 * v9 - (_QWORD)v5;
      if ( v10 <= 8 )
      {
        if ( v10 == 8 )
        {
          *(_QWORD *)v4 = *(_QWORD *)v5;
          result = *(char **)v8;
        }
      }
      else
      {
        v4 = (char *)memmove(v4, v5, *(_QWORD *)v8 + 8 * v9 - (_QWORD)v5);
        result = *(char **)v8;
      }
      *(_DWORD *)(v8 + 8) = (&v4[v10] - result) >> 3;
    }
  }
  return result;
}

