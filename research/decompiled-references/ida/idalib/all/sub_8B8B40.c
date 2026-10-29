unsigned __int64 *__fastcall sub_8B8B40(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rsi
  unsigned __int64 *result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  v5 = a1[2];
  v6 = a3;
  if ( a4 - a3 > 4 )
  {
    v8 = a4 - 1;
    while ( 1 )
    {
      v9 = (v6 + v8) >> 1;
      result = (unsigned __int64 *)(v5 + 8 * (v9 + ((v6 + v8) & 0xFFFFFFFFFFFFFFFELL)));
      if ( a2 == *result )
        break;
      if ( a2 < *result )
      {
        if ( v6 + v8 <= 1 )
          return (unsigned __int64 *)a1[2];
        v8 = v9 - 1;
        if ( v9 - 1 < v6 )
        {
LABEL_14:
          result = (unsigned __int64 *)(v5 + 24 * v9);
          if ( result && *(result - 3) >= a2 )
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
        if ( v9 == a1[3] - 1LL )
          return (unsigned __int64 *)a1[11];
        v6 = v9 + 1;
        v9 = v6;
        if ( v8 < v6 )
          goto LABEL_14;
      }
    }
  }
  else
  {
    result = (unsigned __int64 *)(v5 + 24 * a3);
    if ( 24 * a4 == 24 * a3 )
    {
      return (unsigned __int64 *)a1[11];
    }
    else
    {
      while ( *result < a2 )
      {
        result += 3;
        if ( (unsigned __int64 *)(v5 + 24 * a4) == result )
          return (unsigned __int64 *)a1[11];
      }
    }
  }
  return result;
}
