__int64 (__fastcall **__fastcall sub_2BFAF0(__int64 a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi

  *(_QWORD *)a1 = &off_4DCA10;
  *(_QWORD *)(a1 + 64) = 0;
  switch_dbctx(*(int *)(a1 + 8));
  sub_13FB80((_QWORD *)(a1 + 72), a2);
  v3 = *(_QWORD *)(a1 + 40);
  result = &off_4DC958;
  *(_QWORD *)a1 = &off_4DC958;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v3 + (i << 6));
        *v7 = off_4DBB70;
        clear_tinfo_t(v7 + 5);
        v8 = v7[2];
        if ( v8 )
        {
          v7[3] = 0;
          qfree(v8);
        }
        v3 = *(_QWORD *)(a1 + 40);
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
