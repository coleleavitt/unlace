double __fastcall liblicui::license_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 i; // r13
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 j; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // [rsp+8h] [rbp-40h]

  *a1 = liblicui::license_chooser_t___vtable;
  v3 = a1[27];
  if ( v3 )
  {
    a1[28] = 0;
    qfree(v3, a2);
  }
  v4 = a1[24];
  if ( v4 )
  {
    v19 = a1[25];
    if ( v19 )
    {
      v5 = 0;
      for ( i = 0; i != v19; ++i )
      {
        v7 = (_QWORD *)(v4 + v5);
        v8 = *(_QWORD *)(v4 + v5 + 128);
        if ( v8 )
        {
          v7[17] = 0;
          qfree(v8, a2);
        }
        v9 = v7[10];
        if ( v9 )
        {
          v10 = v7[11];
          if ( v10 )
          {
            for ( j = 0; j != v10; ++j )
            {
              v12 = (__int64 *)(v9 + 24 * j);
              v13 = *v12;
              if ( *v12 )
              {
                v12[1] = 0;
                qfree(v13, a2);
                v9 = v7[10];
              }
            }
          }
          v7[11] = 0;
          qfree(v9, a2);
        }
        v14 = v7[7];
        if ( v14 )
        {
          v7[8] = 0;
          qfree(v14, a2);
        }
        v15 = v7[4];
        if ( v15 )
        {
          v7[5] = 0;
          qfree(v15, a2);
        }
        v4 = a1[24];
        v5 += 152;
      }
    }
    a1[25] = 0;
    qfree(v4, a2);
  }
  v16 = a1 + 19;
  *a1 = &stru_86F6A0;
  do
  {
    v17 = *v16;
    if ( *v16 )
    {
      v16[1] = 0;
      qfree(v17, a2);
    }
    v16 -= 3;
  }
  while ( a1 + 7 != v16 );
  return qfree(a1, a2);
}
