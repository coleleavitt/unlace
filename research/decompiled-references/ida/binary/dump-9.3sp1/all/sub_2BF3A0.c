__int64 (__fastcall **__fastcall sub_2BF3A0(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 i; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // rax

  *a1 = &off_4E18D0;
  a1[8] = 0;
  switch_dbctx();
  sub_140140(a1 + 9, a2);
  v3 = a1[5];
  result = &off_4E1818;
  *a1 = &off_4E1818;
  if ( v3 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (_QWORD *)(v6 + v3);
        v9 = v8[4];
        *v8 = off_4E12A8;
        if ( v9 )
        {
          v8[5] = 0;
          qfree(v9);
        }
        v3 = a1[5];
        v6 += 88;
      }
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
