_UNKNOWN **__fastcall sub_39F470(__int64 a1)
{
  __int64 v1; // rdx
  _UNKNOWN **result; // rax
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

  v1 = *(_QWORD *)(a1 + 24);
  result = &off_4C7570;
  *(_QWORD *)a1 = &off_4C7570;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 104))-- == 1 )
    {
      v4 = *(_QWORD **)(a1 + 24);
      if ( v4 )
      {
        sub_2540F0(*(__int64 **)(a1 + 24));
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
        sub_2507D0((__int64)(v4 + 2));
        return (_UNKNOWN **)j__qfree(v4);
      }
    }
  }
  return result;
}
