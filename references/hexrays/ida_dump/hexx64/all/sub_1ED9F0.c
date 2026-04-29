__int64 __fastcall sub_1ED9F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 j; // rbp
  _QWORD *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 k; // rbp
  _QWORD *v18; // r12
  __int64 v19; // rdi

  *a1 = &off_4DED20;
  v2 = a1[18];
  if ( v2 )
  {
    v3 = a1[19];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 40 * i);
        v6 = v5[2];
        if ( v6 )
        {
          v5[3] = 0;
          qfree(v6);
        }
        qfree(*v5);
        v2 = a1[18];
      }
    }
    a1[19] = 0;
    qfree(v2);
  }
  v7 = a1[15];
  if ( v7 )
  {
    v8 = a1[16];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (_QWORD *)(v7 + 40 * j);
        v11 = v10[2];
        if ( v11 )
        {
          v10[3] = 0;
          qfree(v11);
        }
        qfree(*v10);
        v7 = a1[15];
      }
    }
    a1[16] = 0;
    qfree(v7);
  }
  v12 = a1[11];
  *a1 = &unk_4EBF08;
  if ( v12 )
  {
    a1[12] = 0;
    qfree(v12);
  }
  qfree(a1[9]);
  v13 = a1[6];
  if ( v13 )
  {
    a1[7] = 0;
    qfree(v13);
  }
  result = qfree(a1[4]);
  v15 = a1[1];
  if ( v15 )
  {
    v16 = a1[2];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = (_QWORD *)(v15 + 40 * k);
        v19 = v18[2];
        if ( v19 )
        {
          v18[3] = 0;
          qfree(v19);
        }
        qfree(*v18);
        v15 = a1[1];
      }
    }
    a1[2] = 0;
    return qfree(v15);
  }
  return result;
}
