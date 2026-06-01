double __fastcall navigation_history_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  double result; // xmm0_8
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 j; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rbx
  _QWORD *v24; // rbp
  __int64 v25; // rdi

  *a1 = navigation_history_chooser_t___vtable;
  v3 = a1[29];
  if ( v3 )
  {
    v4 = a1[30];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 96 * i);
        v7 = v6[5];
        if ( v7 )
        {
          qfree(v7, a2);
          v6[5] = 0;
        }
        v8 = v6[6];
        if ( v8 )
        {
          v6[7] = 0;
          qfree(v8, a2);
          v6[6] = 0;
          v6[8] = 0;
        }
        v9 = v6[9];
        if ( v9 )
        {
          v6[10] = 0;
          qfree(v9, a2);
        }
        v10 = v6[6];
        if ( v10 )
        {
          v6[7] = 0;
          qfree(v10, a2);
        }
        v11 = v6[5];
        if ( v11 )
          qfree(v11, a2);
        v3 = a1[29];
      }
    }
    a1[30] = 0;
    result = qfree(v3, a2);
  }
  v13 = a1[25];
  if ( v13 )
  {
    v14 = a1[26];
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = (_QWORD *)(v13 + 96 * j);
        v17 = v16[5];
        if ( v17 )
        {
          qfree(v17, a2);
          v16[5] = 0;
        }
        v18 = v16[6];
        if ( v18 )
        {
          v16[7] = 0;
          qfree(v18, a2);
          v16[6] = 0;
          v16[8] = 0;
        }
        v19 = v16[9];
        if ( v19 )
        {
          v16[10] = 0;
          qfree(v19, a2);
        }
        v20 = v16[6];
        if ( v20 )
        {
          v16[7] = 0;
          qfree(v20, a2);
        }
        v21 = v16[5];
        if ( v21 )
          qfree(v21, a2);
        v13 = a1[25];
      }
    }
    a1[26] = 0;
    result = qfree(v13, a2);
  }
  v22 = a1 + 23;
  a1[23] = &off_86FB08;
  v23 = a1 + 22;
  v24 = a1 + 10;
  remove_event_listener(v22);
  *(v24 - 10) = &stru_86F6A0;
  do
  {
    v25 = *(v23 - 3);
    v23 -= 3;
    if ( v25 )
    {
      v23[1] = 0;
      result = qfree(v25, a2);
    }
  }
  while ( v24 != v23 );
  return result;
}
