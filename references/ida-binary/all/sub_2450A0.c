double __fastcall sub_2450A0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 j; // r15
  __int64 *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  double result; // xmm0_8
  __int64 v17; // [rsp+8h] [rbp-40h]

  v3 = *a1;
  if ( v3 )
  {
    v17 = a1[1];
    if ( v17 )
    {
      v4 = 0;
      for ( i = 0; i != v17; ++i )
      {
        v6 = (_QWORD *)(v3 + v4);
        v7 = *(_QWORD *)(v3 + v4 + 56);
        if ( v7 )
        {
          v8 = v6[8];
          if ( v8 )
          {
            for ( j = 0; j != v8; ++j )
            {
              v10 = (__int64 *)(v7 + 48 * j);
              v11 = v10[3];
              if ( v11 )
              {
                v10[4] = 0;
                qfree(v11, a2);
              }
              v12 = *v10;
              if ( *v10 )
              {
                v10[1] = 0;
                qfree(v12, a2);
              }
              v7 = v6[7];
            }
          }
          v6[8] = 0;
          qfree(v7, a2);
        }
        v13 = v6[4];
        if ( v13 )
        {
          v6[5] = 0;
          qfree(v13, a2);
        }
        v14 = v6[1];
        if ( v14 )
        {
          v6[2] = 0;
          qfree(v14, a2);
        }
        v4 += 88;
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
