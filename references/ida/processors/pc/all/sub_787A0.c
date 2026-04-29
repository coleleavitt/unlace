void __fastcall sub_787A0(__int64 a1)
{
  _QWORD *v2; // r13
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 i; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  void *v9; // rdi

  v2 = *(_QWORD **)(a1 + 5304);
  if ( v2 )
  {
    v3 = v2[7];
    if ( v3 )
    {
      v4 = v2[8];
      if ( v4 )
      {
        v5 = 0;
        for ( i = 0; i != v4; ++i )
        {
          if ( *(_QWORD *)(v3 + v5) )
          {
            *(_QWORD *)(v3 + v5 + 8) = 0;
            qfree();
            v3 = v2[7];
          }
          v5 += 56;
        }
      }
      v2[8] = 0;
      qfree();
    }
    if ( v2[4] )
    {
      v2[5] = 0;
      qfree();
    }
    if ( v2[1] )
    {
      v2[2] = 0;
      qfree();
    }
    operator delete(v2, 0x50u);
  }
  v7 = *(_QWORD **)(a1 + 5312);
  *(_QWORD *)(a1 + 5304) = 0;
  if ( v7 )
  {
    v8 = v7[3];
    while ( v8 )
    {
      sub_69AA0(*(_QWORD **)(v8 + 24));
      v9 = (void *)v8;
      v8 = *(_QWORD *)(v8 + 16);
      operator delete(v9, 0x1E8u);
    }
    operator delete(v7, 0x40u);
  }
  *(_QWORD *)(a1 + 5312) = 0;
}
