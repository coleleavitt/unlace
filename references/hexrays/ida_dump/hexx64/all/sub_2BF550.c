__int64 (__fastcall **__fastcall sub_2BF550(__int64 a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 i; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // rax

  *(_QWORD *)a1 = &off_4E1E10;
  *(_QWORD *)(a1 + 64) = 0;
  switch_dbctx(*(int *)(a1 + 8));
  sub_140140((_QWORD *)(a1 + 72), a2);
  v3 = *(_QWORD *)(a1 + 40);
  result = &off_4E1D58;
  *(_QWORD *)a1 = &off_4E1D58;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (_QWORD *)(v6 + v3);
        v9 = v8[2];
        *v8 = off_4E13C0;
        if ( v9 )
        {
          v8[3] = 0;
          qfree(v9);
        }
        v3 = *(_QWORD *)(a1 + 40);
        v6 += 56;
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
