__int64 __fastcall sub_176F0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 j; // rbp
  __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 k; // rbp
  __int64 v20; // rdi

  result = sub_83090();
  v3 = a1[41];
  if ( v3 )
  {
    v4 = a1[42];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = a1[41];
        }
      }
    }
    a1[42] = 0;
    result = qfree(v3);
  }
  v8 = a1[38];
  if ( v8 )
  {
    v9 = a1[39];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = (__int64 *)(v8 + 72 * j);
        v12 = v11[3];
        if ( v12 )
        {
          v11[4] = 0;
          qfree(v12);
        }
        v13 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v13);
        }
        v8 = a1[38];
      }
    }
    a1[39] = 0;
    result = qfree(v8);
  }
  v14 = a1[24];
  if ( v14 )
  {
    a1[25] = 0;
    result = qfree(v14);
  }
  v15 = a1[16];
  if ( v15 )
  {
    a1[17] = 0;
    result = qfree(v15);
  }
  v16 = a1[13];
  if ( v16 )
  {
    v17 = a1[14];
    if ( v17 )
    {
      v18 = 0;
      for ( k = 0; k != v17; ++k )
      {
        v20 = *(_QWORD *)(v16 + v18 + 16);
        if ( v20 )
        {
          *(_QWORD *)(v16 + v18 + 24) = 0;
          qfree(v20);
          v16 = a1[13];
        }
        v18 += 120;
      }
    }
    a1[14] = 0;
    return qfree(v16);
  }
  return result;
}
