__int64 __fastcall sub_1332F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi

  sub_2540F0(a1, a2);
  v3 = a1[23];
  if ( v3 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree(v3);
  }
  v8 = a1[20];
  if ( v8 )
  {
    a1[21] = 0;
    qfree(v8);
  }
  v9 = a1[16];
  if ( v9 )
  {
    v10 = a1[17];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = (__int64 *)(v9 + 32 * j);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13);
          v9 = a1[16];
        }
      }
    }
    a1[17] = 0;
    qfree(v9);
  }
  return sub_2507D0(a1 + 2);
}
