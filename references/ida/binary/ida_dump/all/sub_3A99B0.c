void __fastcall sub_3A99B0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 i; // rbx

  *a1 = &off_4E7328;
  if ( a1[6] )
  {
    v1 = a1[7];
    if ( v1 )
    {
      for ( i = 0; i != v1; ++i )
        clear_tinfo_t();
    }
    a1[7] = 0;
    qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0x50u);
}
