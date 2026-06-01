void __fastcall sub_1979A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbx
  __int64 v5; // r12

  *a1 = &unk_4EBF08;
  if ( a1[11] )
  {
    a1[12] = 0;
    qfree();
  }
  qfree();
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  qfree();
  v2 = a1[1];
  if ( v2 )
  {
    v3 = a1[2];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 40 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
        }
        qfree();
        v2 = a1[1];
      }
    }
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x98u);
}
