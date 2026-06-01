void __fastcall sub_BBD20(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  _QWORD *v6; // rax

  *a1 = &off_22EF28;
  if ( a1[22] )
  {
    a1[23] = 0;
    qfree();
  }
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  v2 = a1[13];
  *a1 = &off_22EE48;
  if ( v2 )
  {
    a1[14] = 0;
    qfree();
  }
  v3 = a1[10];
  *a1 = &off_22ED40;
  if ( v3 )
  {
    v4 = a1[11];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 24 * i);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  operator delete(a1, 0xC8u);
}

