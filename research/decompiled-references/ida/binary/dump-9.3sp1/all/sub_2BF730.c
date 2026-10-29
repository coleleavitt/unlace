__int64 (__fastcall **__fastcall sub_2BF730(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi

  *a1 = &off_4E2350;
  a1[8] = 0;
  switch_dbctx();
  sub_140140(a1 + 9, a2);
  v3 = a1[5];
  result = &off_4E2298;
  *a1 = &off_4E2298;
  if ( v3 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v3 + (i << 6));
        *v7 = off_4E14B0;
        clear_tinfo_t();
        v8 = v7[2];
        if ( v8 )
        {
          v7[3] = 0;
          qfree(v8);
        }
        v3 = a1[5];
      }
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
