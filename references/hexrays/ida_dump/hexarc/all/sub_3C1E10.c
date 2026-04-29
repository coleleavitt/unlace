__int64 __fastcall sub_3C1E10(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbp
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 j; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi

  *a1 = off_4B87C0;
  v2 = a1[25];
  if ( v2 )
  {
    a1[26] = 0;
    qfree(v2);
  }
  v3 = a1[22];
  if ( v3 )
  {
    a1[23] = 0;
    qfree(v3);
  }
  v4 = a1[19];
  *a1 = off_4B7AD8;
  if ( v4 )
  {
    a1[20] = 0;
    qfree(v4);
  }
  v5 = a1[15];
  if ( v5 )
  {
    a1[16] = 0;
    qfree(v5);
  }
  v6 = a1[12];
  if ( v6 )
  {
    a1[13] = 0;
    qfree(v6);
  }
  v7 = a1[9];
  if ( v7 )
  {
    v8 = a1[10];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (__int64 *)(v7 + 24 * i);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11);
          v7 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v7);
  }
  v12 = a1[6];
  if ( v12 )
  {
    v13 = a1[7];
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = (__int64 *)(v12 + 24 * j);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v16);
          v12 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v12);
  }
  v17 = a1[1];
  *a1 = &unk_4B8648;
  if ( v17 )
  {
    a1[2] = 0;
    qfree(v17);
  }
  return j__qfree(a1);
}
