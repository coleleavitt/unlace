char *__fastcall sub_6324A0(char *a1, char *a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rcx
  char *result; // rax
  __int64 v8; // rax
  bool v9; // zf

  v3 = (a2 - a1) >> 5;
  v4 = (a2 - a1) >> 3;
  if ( v3 > 0 )
  {
    v5 = *a3;
    v6 = &a1[32 * v3];
    while ( *(_QWORD *)a1 != v5 )
    {
      if ( v5 == *((_QWORD *)a1 + 1) )
        return a1 + 8;
      if ( v5 == *((_QWORD *)a1 + 2) )
        return a1 + 16;
      if ( v5 == *((_QWORD *)a1 + 3) )
        return a1 + 24;
      a1 += 32;
      if ( a1 == v6 )
      {
        v4 = (a2 - a1) >> 3;
        goto LABEL_10;
      }
    }
    return a1;
  }
LABEL_10:
  if ( v4 == 2 )
  {
    v8 = *a3;
    goto LABEL_15;
  }
  if ( v4 == 3 )
  {
    v8 = *a3;
    if ( *(_QWORD *)a1 == *a3 )
      return a1;
    a1 += 8;
LABEL_15:
    if ( *(_QWORD *)a1 != v8 )
    {
      a1 += 8;
      goto LABEL_17;
    }
    return a1;
  }
  if ( v4 != 1 )
    return a2;
  v8 = *a3;
LABEL_17:
  v9 = *(_QWORD *)a1 == v8;
  result = a2;
  if ( v9 )
    return a1;
  return result;
}

