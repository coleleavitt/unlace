void *__fastcall sub_653F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  void *result; // rax

  *a1 = off_4E7B78;
  v2 = a1[19];
  if ( v2 )
  {
    a1[20] = 0;
    qfree(v2);
  }
  v3 = a1[15];
  if ( v3 )
  {
    a1[16] = 0;
    qfree(v3);
  }
  v4 = a1[12];
  if ( v4 )
  {
    a1[13] = 0;
    qfree(v4);
  }
  v5 = a1[9];
  if ( v5 )
  {
    v6 = a1[10];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9);
          v5 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v5);
  }
  v10 = a1[6];
  if ( v10 )
  {
    v11 = a1[7];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (__int64 *)(v10 + 24 * j);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14);
          v10 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v10);
  }
  v15 = a1[1];
  result = &unk_4E86E8;
  *a1 = &unk_4E86E8;
  if ( v15 )
  {
    a1[2] = 0;
    return (void *)qfree(v15);
  }
  return result;
}
