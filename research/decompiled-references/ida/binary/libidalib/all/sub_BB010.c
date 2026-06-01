void __fastcall sub_BB010(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  *a1 = &off_22FEC8;
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  v1 = a1[10];
  *a1 = &off_22FDC0;
  if ( v1 )
  {
    v2 = a1[11];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[10];
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

