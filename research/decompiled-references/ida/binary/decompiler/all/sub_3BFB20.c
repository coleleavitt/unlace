__int64 __fastcall sub_3BFB20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbp
  _QWORD *v12; // rax

  v2 = sub_3BF5B0(a1);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 104))-- == 1;
    v4 = (_QWORD *)v2;
    if ( v3 )
    {
      sub_255EB0(v2, a2);
      v5 = v4[23];
      if ( v5 )
      {
        v6 = v4[24];
        if ( v6 )
        {
          for ( i = 0; i != v6; ++i )
          {
            v8 = (_QWORD *)(v5 + 24 * i);
            if ( *v8 )
            {
              v8[1] = 0;
              qfree();
              v5 = v4[23];
            }
          }
        }
        v4[24] = 0;
        qfree();
      }
      if ( v4[20] )
      {
        v4[21] = 0;
        qfree();
      }
      v9 = v4[16];
      if ( v9 )
      {
        v10 = v4[17];
        if ( v10 )
        {
          for ( j = 0; j != v10; ++j )
          {
            v12 = (_QWORD *)(v9 + 32 * j);
            if ( *v12 )
            {
              v12[1] = 0;
              qfree();
              v9 = v4[16];
            }
          }
        }
        v4[17] = 0;
        qfree();
      }
      sub_252570(v4 + 2);
      j__qfree();
    }
  }
  return 0;
}
