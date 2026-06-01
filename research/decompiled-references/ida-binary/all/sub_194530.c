__int64 __fastcall sub_194530(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 i; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (_QWORD *)(v6 + (i << 7));
        v10 = v9[12];
        if ( v10 )
        {
          v9[13] = 0;
          qfree(v10, a2, a3, a4, a5);
        }
        v11 = v9[5];
        if ( v11 )
        {
          qfree(v11, a2, a3, a4, a5);
          v9[5] = 0;
        }
        v12 = v9[6];
        if ( v12 )
        {
          v9[7] = 0;
          qfree(v12, a2, a3, a4, a5);
          v9[6] = 0;
          v9[8] = 0;
        }
        v13 = v9[9];
        if ( v13 )
        {
          v9[10] = 0;
          qfree(v13, a2, a3, a4, a5);
        }
        v14 = v9[6];
        if ( v14 )
        {
          v9[7] = 0;
          qfree(v14, a2, a3, a4, a5);
        }
        v15 = v9[5];
        if ( v15 )
          qfree(v15, a2, a3, a4, a5);
        v6 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v6, a2, a3, a4, a5);
  }
  return result;
}
