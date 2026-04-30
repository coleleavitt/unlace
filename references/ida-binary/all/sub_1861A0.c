void __fastcall sub_1861A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 i; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi

  v6 = a1[21];
  if ( v6 )
  {
    a1[22] = 0;
    qfree(v6, a2, a3, a4, a5);
  }
  v7 = a1[18];
  if ( v7 )
  {
    a1[19] = 0;
    qfree(v7, a2, a3, a4, a5);
  }
  v8 = a1[15];
  if ( v8 )
  {
    v9 = a1[16];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (__int64 *)(v8 + 24 * i);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12, a2, v8, a4, a5);
          v8 = a1[15];
        }
      }
    }
    a1[16] = 0;
    qfree(v8, a2, v8, a4, a5);
  }
  v13 = a1[12];
  if ( v13 )
  {
    v14 = a1[13];
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = (__int64 *)(v13 + 24 * j);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, a2, v13, a4, a5);
          v13 = a1[12];
        }
      }
    }
    a1[13] = 0;
    qfree(v13, a2, v13, a4, a5);
  }
  v18 = a1[9];
  if ( v18 )
  {
    a1[10] = 0;
    qfree(v18, a2, v13, a4, a5);
  }
  v19 = a1[5];
  if ( v19 )
  {
    a1[6] = 0;
    qfree(v19, a2, v13, a4, a5);
  }
  v20 = a1[2];
  if ( v20 )
  {
    a1[3] = 0;
    qfree(v20, a2, v13, a4, a5);
  }
}
