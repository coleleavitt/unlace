__int64 (__fastcall **__fastcall sub_2BB150(__int64 a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi

  *(_QWORD *)a1 = &off_4C3140;
  *(_QWORD *)(a1 + 64) = 0;
  switch_dbctx(*(int *)(a1 + 8));
  sub_13BF40((_QWORD *)(a1 + 72), a2);
  v3 = *(_QWORD *)(a1 + 40);
  result = &off_4C3088;
  *(_QWORD *)a1 = &off_4C3088;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v3 + 192 * v6);
        *v7 = &off_4C1C68;
        cleanup_argloc(v7 + 18);
        v8 = v7[13];
        if ( v8 )
        {
          v7[14] = 0;
          qfree(v8);
        }
        clear_tinfo_t(v7 + 12);
        v9 = v7[9];
        if ( v9 )
        {
          v7[10] = 0;
          qfree(v9);
        }
        ++v6;
        cleanup_argloc(v7 + 6);
        cleanup_argloc(v7 + 1);
        v3 = *(_QWORD *)(a1 + 40);
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)(a1 + 48) = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
