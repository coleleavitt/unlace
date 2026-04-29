void __fastcall sub_2AFE00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = &off_4B5388;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 192 * v4);
        *v5 = &off_4B3F68;
        cleanup_argloc(v5 + 18);
        v6 = v5[13];
        if ( v6 )
        {
          v5[14] = 0;
          qfree(v6);
        }
        clear_tinfo_t(v5 + 12);
        v7 = v5[9];
        if ( v7 )
        {
          v5[10] = 0;
          qfree(v7);
        }
        ++v4;
        cleanup_argloc(v5 + 6);
        cleanup_argloc(v5 + 1);
        v2 = a1[5];
      }
      while ( v3 != v4 );
    }
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
