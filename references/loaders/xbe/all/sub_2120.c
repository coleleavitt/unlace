__int64 __fastcall sub_2120(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 j; // r15
  _QWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v13; // [rsp+8h] [rbp-40h]

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    v13 = *(_QWORD *)(result + 8);
    if ( v13 )
    {
      v3 = 0;
      for ( i = 0; i != v13; ++i )
      {
        v5 = (_QWORD *)(v2 + v3);
        v6 = *(_QWORD *)(v2 + v3 + 56);
        if ( v6 )
        {
          v7 = v5[8];
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = (_QWORD *)(v6 + 48 * j);
              if ( v9[3] )
              {
                v9[4] = 0;
                ((void (*)(void))qfree)();
              }
              if ( *v9 )
              {
                v9[1] = 0;
                ((void (*)(void))qfree)();
              }
              v6 = v5[7];
            }
          }
          v5[8] = 0;
          qfree(v6);
        }
        v10 = v5[4];
        if ( v10 )
        {
          v5[5] = 0;
          qfree(v10);
        }
        v11 = v5[1];
        if ( v11 )
        {
          v5[2] = 0;
          qfree(v11);
        }
        v3 += 88;
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
