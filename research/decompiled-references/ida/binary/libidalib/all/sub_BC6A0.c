void __fastcall sub_BC6A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  _QWORD *v7; // rax

  *a1 = &off_22FFC8;
  if ( a1[18] )
  {
    a1[19] = 0;
    qfree();
  }
  v2 = a1[15];
  *a1 = &off_22FEA0;
  if ( v2 )
  {
    a1[16] = 0;
    qfree();
  }
  v3 = a1[13];
  *a1 = &off_22FE80;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[10];
  a1[13] = 0;
  *a1 = &off_22FDC0;
  if ( v4 )
  {
    v5 = a1[11];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 24 * i);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = a1[10];
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
  operator delete(a1, 0xB0u);
}

