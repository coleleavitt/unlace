double __fastcall file_assoc_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 *v18; // rbx
  __int64 v19; // rdi

  *a1 = file_assoc_chooser_t___vtable;
  v3 = a1[23];
  if ( v3 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (__int64 *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 216);
        if ( v8 )
        {
          v7[28] = 0;
          qfree(v8, a2);
        }
        v9 = v7[24];
        if ( v9 )
        {
          v7[25] = 0;
          qfree(v9, a2);
        }
        v10 = v7[21];
        if ( v10 )
        {
          v7[22] = 0;
          qfree(v10, a2);
        }
        v11 = v7[18];
        if ( v11 )
        {
          v7[19] = 0;
          qfree(v11, a2);
        }
        v12 = v7[15];
        if ( v12 )
        {
          v7[16] = 0;
          qfree(v12, a2);
        }
        v13 = v7[12];
        if ( v13 )
        {
          v7[13] = 0;
          qfree(v13, a2);
        }
        v14 = v7[9];
        if ( v14 )
        {
          v7[10] = 0;
          qfree(v14, a2);
        }
        v15 = v7[6];
        if ( v15 )
        {
          v7[7] = 0;
          qfree(v15, a2);
        }
        v16 = v7[3];
        if ( v16 )
        {
          v7[4] = 0;
          qfree(v16, a2);
        }
        v17 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v17, a2);
        }
        v3 = a1[23];
        v5 += 240;
      }
    }
    a1[24] = 0;
    qfree(v3, a2);
  }
  v18 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v19 = *v18;
    if ( *v18 )
    {
      v18[1] = 0;
      qfree(v19, a2);
    }
    v18 -= 3;
  }
  while ( v18 != a1 + 7 );
  return qfree(a1, a2);
}
