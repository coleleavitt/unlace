void __fastcall sub_231840(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 j; // r12
  _QWORD *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 k; // r12
  _QWORD *v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdi

  if ( a1 )
  {
    v3 = a1[11];
    if ( v3 )
    {
      v4 = a1[12];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = (_QWORD *)(v3 + 80 * i);
          v7 = v6[5];
          if ( v7 )
          {
            v6[6] = 0;
            qfree(v7, a2);
          }
          v8 = v6[2];
          if ( v8 )
          {
            v6[3] = 0;
            qfree(v8, a2);
          }
          v3 = a1[11];
        }
      }
      a1[12] = 0;
      qfree(v3, a2);
    }
    v9 = a1[8];
    if ( v9 )
    {
      v10 = a1[9];
      if ( v10 )
      {
        for ( j = 0; j != v10; ++j )
        {
          v12 = (_QWORD *)(v9 + 80 * j);
          v13 = v12[5];
          if ( v13 )
          {
            v12[6] = 0;
            qfree(v13, a2);
          }
          v14 = v12[2];
          if ( v14 )
          {
            v12[3] = 0;
            qfree(v14, a2);
          }
          v9 = a1[8];
        }
      }
      a1[9] = 0;
      qfree(v9, a2);
    }
    v15 = a1[4];
    if ( v15 )
    {
      a1[5] = 0;
      qfree(v15, a2);
    }
    v16 = a1[1];
    if ( v16 )
    {
      v17 = a1[2];
      if ( v17 )
      {
        for ( k = 0; k != v17; ++k )
        {
          v19 = (_QWORD *)(v16 + 80 * k);
          v20 = v19[5];
          if ( v20 )
          {
            v19[6] = 0;
            qfree(v20, a2);
          }
          v21 = v19[2];
          if ( v21 )
          {
            v19[3] = 0;
            qfree(v21, a2);
          }
          v16 = a1[1];
        }
      }
      a1[2] = 0;
      qfree(v16, a2);
    }
    operator delete(a1, 0xD0u);
  }
}
