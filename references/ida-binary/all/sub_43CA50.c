double __fastcall file_history_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 i; // r12
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  _QWORD *v20; // rbp
  __int64 v21; // rdi

  *a1 = file_history_chooser_t___vtable;
  v3 = a1[36];
  if ( v3 )
  {
    a1[37] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[32];
  if ( v5 )
  {
    a1[33] = 0;
    result = qfree(v5, a2);
  }
  v6 = a1[29];
  if ( v6 )
  {
    v7 = a1[30];
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v10 = (__int64 *)(v6 + v8);
        v11 = *(_QWORD *)(v6 + v8 + 120);
        if ( v11 )
        {
          v10[16] = 0;
          qfree(v11, a2);
        }
        v12 = v10[12];
        if ( v12 )
        {
          v10[13] = 0;
          qfree(v12, a2);
        }
        v13 = v10[9];
        if ( v13 )
        {
          v10[10] = 0;
          qfree(v13, a2);
        }
        v14 = v10[6];
        if ( v14 )
        {
          v10[7] = 0;
          qfree(v14, a2);
        }
        v15 = v10[3];
        if ( v15 )
        {
          v10[4] = 0;
          qfree(v15, a2);
        }
        v16 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v16, a2);
        }
        v6 = a1[29];
        v8 += 152;
      }
    }
    a1[30] = 0;
    result = qfree(v6, a2);
  }
  v17 = a1[26];
  if ( v17 )
  {
    a1[27] = 0;
    result = qfree(v17, a2);
  }
  v18 = a1[23];
  if ( v18 )
  {
    a1[24] = 0;
    result = qfree(v18, a2);
  }
  v19 = a1 + 22;
  v20 = a1 + 10;
  *(v20 - 10) = &stru_86F6A0;
  do
  {
    v21 = *(v19 - 3);
    v19 -= 3;
    if ( v21 )
    {
      v19[1] = 0;
      result = qfree(v21, a2);
    }
  }
  while ( v20 != v19 );
  return result;
}
