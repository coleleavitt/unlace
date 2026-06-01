__int64 __fastcall sub_834250(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 *v10; // rsi
  __int64 *v11; // r14
  __int64 *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rsi
  _QWORD *v15; // r13
  __int64 *v16; // r15
  __int64 *v17; // r12
  __int64 v18; // rsi
  _QWORD *v19; // [rsp+8h] [rbp-40h]

  v4 = *a1;
  result = sub_2575D20(a1, a2, a3);
  v8 = *a2;
  v9 = result;
  if ( v4 == result )
  {
    if ( result == v8 )
    {
      if ( a2 != a1 )
      {
        v7 = (_QWORD *)a1[1];
        v19 = v7;
        if ( v7 )
        {
          v15 = &v7[3 * *(v7 - 1)];
          if ( v7 == v15 )
          {
            v14 = 0;
          }
          else
          {
            do
            {
              v15 -= 3;
              if ( *v15 == v8 )
              {
                v16 = (__int64 *)v15[1];
                if ( v16 )
                {
                  v17 = &v16[3 * *(v16 - 1)];
                  if ( v16 == v17 )
                  {
                    v18 = 0;
                  }
                  else
                  {
                    do
                    {
                      v17 -= 3;
                      sub_5FF3B0(v17);
                    }
                    while ( v16 != v17 );
                    v18 = 24 * *(v16 - 1);
                  }
                  operator delete[](v16 - 1, v18 + 8);
                }
                v15[1] = 0;
              }
              else
              {
                sub_25769A0(v15);
              }
            }
            while ( v19 != v15 );
            v14 = 24LL * *(v19 - 1);
          }
          operator delete[](v19 - 1, v14 + 8);
        }
        a1[1] = 0;
        v10 = a2;
        return sub_257D000(a1, v10, v6, v7);
      }
    }
    else if ( a1 != a2 )
    {
      v11 = (__int64 *)a1[1];
      if ( v11 )
      {
        v12 = &v11[3 * *(v11 - 1)];
        if ( v11 == v12 )
        {
          v13 = 0;
        }
        else
        {
          do
          {
            v12 -= 3;
            sub_5FF3B0(v12);
          }
          while ( v11 != v12 );
          v13 = 24 * *(v11 - 1);
        }
        operator delete[](v11 - 1, v13 + 8);
      }
      a1[1] = 0;
LABEL_6:
      v10 = a2;
      if ( v9 != *a2 )
        return sub_2576960(a1, a2);
      return sub_257D000(a1, v10, v6, v7);
    }
  }
  else
  {
    if ( result != v8 )
      return sub_2576350(a1, a2, v6, v7);
    if ( a1 != a2 )
    {
      sub_25769A0(a1);
      goto LABEL_6;
    }
  }
  return result;
}

