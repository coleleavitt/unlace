void __fastcall sub_BB8C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  _QWORD *v6; // rax

  *a1 = &off_22EE00;
  v2 = a1[13];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[10];
  a1[13] = 0;
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
  operator delete(a1, 0x70u);
}

