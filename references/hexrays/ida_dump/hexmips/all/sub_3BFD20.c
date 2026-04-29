__int64 __fastcall sub_3BFD20(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdi

  v1 = sub_3BF7B0(a1);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 104))-- == 1;
    v3 = (_QWORD *)v1;
    if ( v2 )
    {
      sub_2540F0((__int64 *)v1);
      v4 = v3[23];
      if ( v4 )
      {
        v5 = v3[24];
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = (__int64 *)(v4 + 24 * i);
            v8 = *v7;
            if ( *v7 )
            {
              v7[1] = 0;
              qfree(v8);
              v4 = v3[23];
            }
          }
        }
        v3[24] = 0;
        qfree(v4);
      }
      v9 = v3[20];
      if ( v9 )
      {
        v3[21] = 0;
        qfree(v9);
      }
      v10 = v3[16];
      if ( v10 )
      {
        v11 = v3[17];
        if ( v11 )
        {
          for ( j = 0; j != v11; ++j )
          {
            v13 = (__int64 *)(v10 + 32 * j);
            v14 = *v13;
            if ( *v13 )
            {
              v13[1] = 0;
              qfree(v14);
              v10 = v3[16];
            }
          }
        }
        v3[17] = 0;
        qfree(v10);
      }
      sub_2507D0((__int64)(v3 + 2));
      j__qfree(v3);
    }
  }
  return 0;
}
