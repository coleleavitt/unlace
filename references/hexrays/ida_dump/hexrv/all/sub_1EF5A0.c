__int64 __fastcall sub_1EF5A0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 i; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 j; // rbx
  _QWORD *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v12 = a1[1];
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v4 = (_QWORD *)(v2 + 96 * i);
        v5 = v4[5];
        if ( v5 )
        {
          v6 = v4[6];
          if ( v6 )
          {
            for ( j = 0; j != v6; ++j )
            {
              v8 = (_QWORD *)(v5 + 40 * j);
              v9 = v8[2];
              if ( v9 )
              {
                v8[3] = 0;
                qfree(v9);
              }
              qfree(*v8);
              v5 = v4[5];
            }
          }
          v4[6] = 0;
          qfree(v5);
        }
        v10 = v4[2];
        if ( v10 )
        {
          v4[3] = 0;
          qfree(v10);
        }
        qfree(*v4);
        v2 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
