__int64 (__fastcall **__fastcall sub_2B9FE0(__int64 a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 i; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // rax

  *(_QWORD *)a1 = &off_4B5270;
  *(_QWORD *)(a1 + 64) = 0;
  switch_dbctx(*(int *)(a1 + 8));
  sub_13B580((_QWORD *)(a1 + 72), a2);
  v3 = *(_QWORD *)(a1 + 40);
  result = &off_4B51B8;
  *(_QWORD *)a1 = &off_4B51B8;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (_QWORD *)(v6 + v3);
        v9 = v8[4];
        *v8 = off_4B4C48;
        if ( v9 )
        {
          v8[5] = 0;
          qfree(v9);
        }
        v3 = *(_QWORD *)(a1 + 40);
        v6 += 88;
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
