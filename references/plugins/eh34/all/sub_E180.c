__int64 __fastcall sub_E180(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 j; // rbp
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 k; // rbp
  __int64 v15; // rax

  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    result = qfree(v2);
  }
  v4 = a1[6];
  if ( v4 )
  {
    v5 = a1[7];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = i;
        qfree(*(_QWORD *)(v4 + 16 * v7));
        v4 = a1[6];
      }
    }
    a1[7] = 0;
    result = qfree(v4);
  }
  v8 = a1[3];
  if ( v8 )
  {
    v9 = a1[4];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = j;
        qfree(*(_QWORD *)(v8 + 16 * v11));
        v8 = a1[3];
      }
    }
    a1[4] = 0;
    result = qfree(v8);
  }
  v12 = *a1;
  if ( *a1 )
  {
    v13 = a1[1];
    if ( v13 )
    {
      for ( k = 0; k != v13; ++k )
      {
        v15 = k;
        qfree(*(_QWORD *)(v12 + 16 * v15));
        v12 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v12);
  }
  return result;
}
