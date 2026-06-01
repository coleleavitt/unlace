__int64 __fastcall sub_980D40(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 result; // rax
  __int64 *v9; // rsi
  __int64 *v10; // r14
  __int64 *v11; // r13
  __int64 v12; // rsi
  __int64 *v13; // r13
  __int64 *v14; // r12
  __int64 v15; // rsi

  v4 = *a1;
  v7 = sub_2575D20(a1, a2, a3);
  result = *a2;
  if ( v4 == v7 )
  {
    if ( v7 == result )
    {
      if ( a2 != a1 )
      {
        v13 = (__int64 *)a1[1];
        if ( v13 )
        {
          v14 = &v13[3 * *(v13 - 1)];
          if ( v13 == v14 )
          {
            v15 = 0;
          }
          else
          {
            do
            {
              v14 -= 3;
              sub_5FF3B0(v14);
            }
            while ( v13 != v14 );
            v15 = 24 * *(v13 - 1);
          }
          operator delete[](v13 - 1, v15 + 8);
        }
        a1[1] = 0;
        v9 = a2;
        return sub_257D000(a1, v9, v5, v6);
      }
    }
    else if ( a1 != a2 )
    {
      v10 = (__int64 *)a1[1];
      if ( v10 )
      {
        v11 = &v10[3 * *(v10 - 1)];
        if ( v10 == v11 )
        {
          v12 = 0;
        }
        else
        {
          do
          {
            v11 -= 3;
            sub_5FF3B0(v11);
          }
          while ( v10 != v11 );
          v12 = 24 * *(v10 - 1);
        }
        operator delete[](v10 - 1, v12 + 8);
      }
      a1[1] = 0;
LABEL_6:
      v9 = a2;
      if ( v7 != *a2 )
        return sub_2576960(a1, a2);
      return sub_257D000(a1, v9, v5, v6);
    }
  }
  else
  {
    if ( v7 != result )
      return sub_2576350(a1, a2, v5, v6);
    if ( a1 != a2 )
    {
      sub_25769A0(a1);
      goto LABEL_6;
    }
  }
  return result;
}

