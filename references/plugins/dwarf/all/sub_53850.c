void __fastcall sub_53850(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi

  *a1 = &off_C8668;
  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  cleanup_argloc(a1 + 8);
  clear_tinfo_t(a1 + 7);
  v3 = a1[3];
  if ( v3 )
  {
    v4 = a1[4];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        clear_tinfo_t(v6 + 8);
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8);
        }
        cleanup_argloc(v6);
        v3 = a1[3];
      }
    }
    a1[4] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x80u);
}
