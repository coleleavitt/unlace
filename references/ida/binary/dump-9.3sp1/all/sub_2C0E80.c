__int64 (__fastcall **__fastcall sub_2C0E80(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &off_4E2788;
  a1[8] = 0;
  switch_dbctx();
  sub_140140(a1 + 9, a2);
  v3 = a1[5];
  result = &off_4E26D0;
  *a1 = &off_4E26D0;
  if ( v3 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v3 + 192 * v6);
        *v7 = &off_4E1528;
        cleanup_argloc();
        v8 = v7[13];
        if ( v8 )
        {
          v7[14] = 0;
          qfree(v8);
        }
        clear_tinfo_t();
        v9 = v7[9];
        if ( v9 )
        {
          v7[10] = 0;
          qfree(v9);
        }
        ++v6;
        cleanup_argloc();
        cleanup_argloc();
        v3 = a1[5];
      }
      while ( v5 != v6 );
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
