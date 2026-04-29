void __fastcall sub_2BD5E0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi

  *a1 = &off_4CFB20;
  a1[8] = 0;
  switch_dbctx(*((int *)a1 + 2));
  sub_13C700(a1 + 9, a2);
  v3 = a1[5];
  *a1 = &off_4CFA68;
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v3 + 192 * v5);
        *v6 = &off_4CE648;
        cleanup_argloc(v6 + 18);
        v7 = v6[13];
        if ( v7 )
        {
          v6[14] = 0;
          qfree(v7);
        }
        clear_tinfo_t(v6 + 12);
        v8 = v6[9];
        if ( v8 )
        {
          v6[10] = 0;
          qfree(v8);
        }
        ++v5;
        cleanup_argloc(v6 + 6);
        cleanup_argloc(v6 + 1);
        v3 = a1[5];
      }
      while ( v4 != v5 );
    }
    a1[6] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x58u);
}
