unsigned int *__fastcall sub_8951C0(_QWORD *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int *result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  v5 = a1[2];
  v6 = a3;
  if ( a4 - a3 > 4 )
  {
    v9 = a4 - 1;
    while ( 1 )
    {
      v10 = (v6 + v9) >> 1;
      result = (unsigned int *)(v5 + 16 * v10);
      if ( a2 == *result )
        break;
      if ( a2 < *result )
      {
        if ( v6 + v9 <= 1 )
          return (unsigned int *)a1[2];
        v9 = v10 - 1;
        if ( v10 - 1 < v6 )
        {
LABEL_14:
          result = (unsigned int *)(16 * v10 + v5);
          if ( result && *(result - 4) >= a2 )
          {
            if ( !under_debugger )
              interr(799);
            BUG();
          }
          return result;
        }
      }
      else
      {
        if ( v10 == a1[3] - 1LL )
          return (unsigned int *)a1[10];
        v6 = v10 + 1;
        v10 = v6;
        if ( v9 < v6 )
          goto LABEL_14;
      }
    }
  }
  else
  {
    v7 = 16 * a4;
    result = (unsigned int *)(v5 + 16 * a3);
    if ( v7 == 16 * a3 )
    {
      return (unsigned int *)a1[10];
    }
    else
    {
      while ( *result < a2 )
      {
        result += 4;
        if ( (unsigned int *)(v5 + v7) == result )
          return (unsigned int *)a1[10];
      }
    }
  }
  return result;
}

