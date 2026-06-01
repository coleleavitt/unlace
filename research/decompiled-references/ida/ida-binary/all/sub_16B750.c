void __fastcall sub_16B750(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 i; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi

  v6 = *a1;
  if ( v6 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v10 = (__int64 *)(v6 + v8);
        v11 = *(_QWORD *)(v6 + v8 + 144);
        if ( v11 )
        {
          v10[19] = 0;
          qfree(v11, a2, a3, a4, a5);
        }
        v12 = v10[15];
        if ( v12 )
        {
          v10[16] = 0;
          qfree(v12, a2, a3, a4, a5);
        }
        v13 = v10[12];
        if ( v13 )
        {
          v10[13] = 0;
          qfree(v13, a2, a3, a4, a5);
        }
        v14 = v10[9];
        if ( v14 )
        {
          v10[10] = 0;
          qfree(v14, a2, a3, a4, a5);
        }
        v15 = v10[6];
        if ( v15 )
        {
          v10[7] = 0;
          qfree(v15, a2, a3, a4, a5);
        }
        v16 = v10[3];
        if ( v16 )
        {
          v10[4] = 0;
          qfree(v16, a2, a3, a4, a5);
        }
        v17 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v17, a2, a3, a4, a5);
        }
        v6 = *a1;
        v8 += 168;
      }
    }
    a1[1] = 0;
    qfree(v6, a2, a3, a4, a5);
  }
}
