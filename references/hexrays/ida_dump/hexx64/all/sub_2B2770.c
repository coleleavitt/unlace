void __fastcall sub_2B2770(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  *a1 = &off_4E2298;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + (i << 6));
        *v5 = off_4E14B0;
        clear_tinfo_t(v5 + 5);
        v6 = v5[2];
        if ( v6 )
        {
          v5[3] = 0;
          qfree(v6);
        }
        v2 = a1[5];
      }
    }
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
