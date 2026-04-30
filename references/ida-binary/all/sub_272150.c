double __fastcall diff_source_generic_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 *v3; // r13
  __int64 v4; // rdi
  double result; // xmm0_8
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 j; // r12
  __int64 *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 k; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  _QWORD *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-40h]

  v3 = (__int64 *)a1[24];
  *a1 = diff_source_generic_chooser_t___vtable;
  if ( v3 )
  {
    v4 = v3[9];
    if ( v4 )
    {
      v3[10] = 0;
      result = qfree(v4, a2);
    }
    v6 = v3[6];
    if ( v6 )
    {
      v7 = v3[7];
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = (__int64 *)(v6 + 24 * i);
          v10 = *v9;
          if ( *v9 )
          {
            v9[1] = 0;
            qfree(v10, a2);
            v6 = v3[6];
          }
        }
      }
      v3[7] = 0;
      result = qfree(v6, a2);
    }
    v11 = v3[3];
    if ( v11 )
    {
      v3[4] = 0;
      result = qfree(v11, a2);
    }
    v12 = *v3;
    if ( *v3 )
    {
      v23 = v3[1];
      if ( v23 )
      {
        for ( j = 0; j != v23; ++j )
        {
          v14 = (__int64 *)(v12 + 32 * j);
          v15 = *v14;
          if ( *v14 )
          {
            v16 = v14[1];
            if ( v16 )
            {
              for ( k = 0; k != v16; ++k )
              {
                v18 = (__int64 *)(v15 + 24 * k);
                v19 = *v18;
                if ( *v18 )
                {
                  v18[1] = 0;
                  qfree(v19, a2);
                  v15 = *v14;
                }
              }
            }
            v14[1] = 0;
            qfree(v15, a2);
            v12 = *v3;
          }
        }
      }
      v3[1] = 0;
      result = qfree(v12, a2);
    }
    a2 = (const char *)&qword_60;
    operator delete(v3, 0x60u);
  }
  v20 = a1 + 22;
  v21 = a1 + 10;
  *(v21 - 10) = &stru_86F6A0;
  do
  {
    v22 = *(v20 - 3);
    v20 -= 3;
    if ( v22 )
    {
      v20[1] = 0;
      result = qfree(v22, a2);
    }
  }
  while ( v21 != v20 );
  return result;
}
