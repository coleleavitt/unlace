void *__fastcall sub_3C43F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  void *result; // rax

  *a1 = off_4CC798;
  v2 = a1[23];
  if ( v2 )
  {
    a1[24] = 0;
    qfree(v2);
  }
  v3 = a1[19];
  *a1 = off_4CBB18;
  if ( v3 )
  {
    a1[20] = 0;
    qfree(v3);
  }
  v4 = a1[15];
  if ( v4 )
  {
    a1[16] = 0;
    qfree(v4);
  }
  v5 = a1[12];
  if ( v5 )
  {
    a1[13] = 0;
    qfree(v5);
  }
  v6 = a1[9];
  if ( v6 )
  {
    v7 = a1[10];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10);
          v6 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v6);
  }
  v11 = a1[6];
  if ( v11 )
  {
    v12 = a1[7];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = (__int64 *)(v11 + 24 * j);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15);
          v11 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v11);
  }
  v16 = a1[1];
  result = &unk_4CC6E0;
  *a1 = &unk_4CC6E0;
  if ( v16 )
  {
    a1[2] = 0;
    return (void *)qfree(v16);
  }
  return result;
}
