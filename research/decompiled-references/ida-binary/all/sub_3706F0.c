__int64 __fastcall sub_3706F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  const char *v5; // rsi
  const char *v7; // rbp
  __int64 v8; // rcx
  char *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 i; // rbp
  char *v14; // rdi
  char *v15; // rdx

  v3 = a1[1];
  result = *a1;
  v5 = (const char *)(*a1 + 40 * v3);
  if ( v5 != (const char *)*a1 )
  {
    v7 = (const char *)*a1;
    while ( 1 )
    {
      v8 = *(_QWORD *)v7;
      v9 = (char *)v7;
      v7 += 40;
      if ( v8 == a2 )
        break;
      if ( v5 == v7 )
        return result;
    }
    v10 = *((_QWORD *)v9 + 2);
    if ( v10 )
    {
      *((_QWORD *)v9 + 3) = 0;
      qfree(v10, v5);
      result = *a1;
      v3 = a1[1];
    }
    memmove(v9, v7, result + 40 * v3 - (_QWORD)v9 - 40);
    v11 = a1[1] - 1;
    a1[1] = v11;
    v12 = *a1;
    result = 5 * v11;
    for ( i = v12 + 8 * result; v12 != i; v12 += 40 )
    {
      v14 = *(char **)(v12 + 16);
      result = *(_QWORD *)(v12 + 24);
      v15 = &v14[8 * result];
      if ( v14 != v15 )
      {
        while ( a2 != *(_QWORD *)v14 )
        {
          v14 += 8;
          if ( v15 == v14 )
            goto LABEL_15;
        }
        if ( v15 != v14 )
        {
          result = (__int64)memmove(v14, v14 + 8, v15 - v14 - 8);
          --*(_QWORD *)(v12 + 24);
        }
      }
LABEL_15:
      ;
    }
  }
  return result;
}
