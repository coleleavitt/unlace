void __fastcall sub_3A4730(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi

  *a1 = &off_4B9D48;
  v2 = a1[6];
  if ( v2 )
  {
    v3 = a1[7];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 8 * i;
        clear_tinfo_t(v5);
        v2 = a1[6];
      }
    }
    a1[7] = 0;
    qfree(v2);
  }
  v6 = a1[3];
  if ( v6 )
  {
    a1[4] = 0;
    qfree(v6);
  }
  operator delete(a1, 0x50u);
}
