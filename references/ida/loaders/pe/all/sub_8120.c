void __fastcall sub_8120(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx

  *a1 = &off_325A8;
  v2 = a1[12];
  if ( v2 )
  {
    v3 = a1[13];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + (i << 6));
        if ( v5[3] )
        {
          v5[4] = 0;
          qfree();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        v2 = a1[12];
      }
    }
    a1[13] = 0;
    qfree();
  }
  operator delete(a1, 0xA8u);
}
