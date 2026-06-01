__int64 __fastcall sub_9807A0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 result; // rax
  __int64 *v7; // r14
  __int64 *v8; // r13
  __int64 v9; // rsi

  v4 = *a1;
  v5 = sub_2575D20(a1, a2, a3);
  result = *a2;
  if ( v4 == v5 )
  {
    if ( v5 == result )
      return sub_257D030(a1, a2);
    if ( a1 != a2 )
    {
      v7 = (__int64 *)a1[1];
      if ( v7 )
      {
        v8 = &v7[3 * *(v7 - 1)];
        if ( v7 == v8 )
        {
          v9 = 0;
        }
        else
        {
          do
          {
            v8 -= 3;
            sub_5FF3B0(v8);
          }
          while ( v7 != v8 );
          v9 = 24 * *(v7 - 1);
        }
        operator delete[](v7 - 1, v9 + 8);
      }
      a1[1] = 0;
      goto LABEL_6;
    }
  }
  else
  {
    if ( v5 != result )
      return sub_2576220(a1, a2);
    if ( a1 != a2 )
    {
      sub_25769A0(a1);
LABEL_6:
      if ( v5 == *a2 )
        return sub_257CF50(a1, a2);
      else
        return sub_25768A0(a1, a2);
    }
  }
  return result;
}

