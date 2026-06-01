double __fastcall sub_20DA00(__int64 *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 j; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi

  v3 = a1[9];
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 32 * i;
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree(v7, a2);
          v3 = a1[9];
        }
      }
    }
    a1[10] = 0;
    result = qfree(v3, a2);
  }
  v9 = a1[6];
  if ( v9 )
  {
    a1[7] = 0;
    result = qfree(v9, a2);
  }
  v10 = a1[3];
  if ( v10 )
  {
    v11 = a1[4];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = v10 + 32 * j;
        if ( *(int *)v13 >= -1 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( v14 )
          {
            *(_QWORD *)(v13 + 16) = 0;
            qfree(v14, a2);
            v10 = a1[3];
          }
        }
      }
    }
    a1[4] = 0;
    result = qfree(v10, a2);
  }
  v15 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v15, a2);
  }
  return result;
}
