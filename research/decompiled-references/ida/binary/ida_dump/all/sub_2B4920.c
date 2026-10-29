void __fastcall sub_2B4920(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rbx

  *a1 = &off_4E26D0;
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
        *v5 = &off_4E1528;
        cleanup_argloc();
        if ( v5[13] )
        {
          v5[14] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v5[9] )
        {
          v5[10] = 0;
          qfree();
        }
        ++v4;
        cleanup_argloc();
        cleanup_argloc();
        v2 = a1[5];
      }
      while ( v3 != v4 );
    }
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x40u);
}
