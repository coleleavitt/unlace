void __fastcall sub_13C700(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdx
  _QWORD *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi

  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( (*((_DWORD *)v2 + 26))-- == 1 )
    {
      v4 = (_QWORD *)*a1;
      if ( *a1 )
      {
        sub_254CF0(*a1, a2);
        v5 = v4[23];
        if ( v5 )
        {
          v6 = v4[24];
          if ( v6 )
          {
            for ( i = 0; i != v6; ++i )
            {
              v8 = (__int64 *)(v5 + 24 * i);
              v9 = *v8;
              if ( *v8 )
              {
                v8[1] = 0;
                qfree(v9);
                v5 = v4[23];
              }
            }
          }
          v4[24] = 0;
          qfree(v5);
        }
        v10 = v4[20];
        if ( v10 )
        {
          v4[21] = 0;
          qfree(v10);
        }
        v11 = v4[16];
        if ( v11 )
        {
          v12 = v4[17];
          if ( v12 )
          {
            for ( j = 0; j != v12; ++j )
            {
              v14 = (__int64 *)(v11 + 32 * j);
              v15 = *v14;
              if ( *v14 )
              {
                v14[1] = 0;
                qfree(v15);
                v11 = v4[16];
              }
            }
          }
          v4[17] = 0;
          qfree(v11);
        }
        sub_2513D0(v4 + 2);
        j__qfree(v4);
      }
    }
  }
}
