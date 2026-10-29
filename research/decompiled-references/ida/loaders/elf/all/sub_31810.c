void __fastcall sub_31810(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = &off_87180;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 96 * i);
        v6 = v5[3];
        if ( v6 )
        {
          v5[4] = 0;
          qfree(v6);
        }
        v7 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v7);
        }
        v2 = a1[5];
      }
    }
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x50u);
}

