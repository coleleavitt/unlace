__int64 __fastcall sub_9BD190(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 result; // rax
  __int64 *v9; // r13
  __int64 *v10; // r12
  __int64 v11; // rsi

  v3 = a2;
  v4 = *a1;
  v7 = sub_2575D20(a1, a2, a3);
  result = *a2;
  if ( v4 != v7 )
  {
    if ( v7 != result )
      return sub_2576350(a1, a2, v5, v6);
LABEL_5:
    if ( a1 != a2 )
    {
      sub_5FF3B0(a1);
      if ( v7 != *a2 )
        return sub_2576960(a1, a2);
      return sub_257D000(a1, a2, v5, v6);
    }
    return result;
  }
  if ( v4 != result )
    goto LABEL_5;
  if ( a2 != a1 )
  {
    v9 = (__int64 *)a1[1];
    if ( v9 )
    {
      v10 = &v9[3 * *(v9 - 1)];
      if ( v9 == v10 )
      {
        v11 = 0;
      }
      else
      {
        do
        {
          v10 -= 3;
          sub_5FF3B0(v10);
        }
        while ( v9 != v10 );
        v11 = 24 * *(v9 - 1);
      }
      operator delete[](v9 - 1, v11 + 8);
    }
    a1[1] = 0;
    a2 = v3;
    return sub_257D000(a1, a2, v5, v6);
  }
  return result;
}

