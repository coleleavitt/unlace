double __fastcall navigation_history_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
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
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 j; // r12
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 *v21; // rbx
  __int64 v22; // rdi

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
    qfree(v3, a2);
  }
  v12 = a1[25];
  if ( v12 )
  {
    v13 = a1[26];
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = (_QWORD *)(v12 + 96 * j);
        v16 = v15[5];
        if ( v16 )
        {
          qfree(v16, a2);
          v15[5] = 0;
        }
        v17 = v15[6];
        if ( v17 )
        {
          v15[7] = 0;
          qfree(v17, a2);
          v15[6] = 0;
          v15[8] = 0;
        }
        v18 = v15[9];
        if ( v18 )
        {
          v15[10] = 0;
          qfree(v18, a2);
        }
        v19 = v15[6];
        if ( v19 )
        {
          v15[7] = 0;
          qfree(v19, a2);
        }
        v20 = v15[5];
        if ( v20 )
          qfree(v20, a2);
        v12 = a1[25];
      }
    }
    a1[26] = 0;
    qfree(v12, a2);
  }
  a1[23] = &off_86FB08;
  v21 = a1 + 19;
  remove_event_listener(a1 + 23);
  *a1 = &stru_86F6A0;
  do
  {
    v22 = *v21;
    if ( *v21 )
    {
      v21[1] = 0;
      qfree(v22, a2);
    }
    v21 -= 3;
  }
  while ( v21 != a1 + 7 );
  return qfree(a1, a2);
}
