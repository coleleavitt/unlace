_BOOL8 __fastcall sub_4B5050(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  const char *v8; // rsi
  const char *v9; // rdi

  switch_dbctx(*(int *)(a1 + 8));
  v4 = 88 * a3;
  v5 = (_QWORD *)(88 * a3 + **(_QWORD **)(a2 + 40));
  v6 = (_QWORD *)(**(_QWORD **)(a1 + 40) + v4);
  if ( v6[9] != v5[9] )
    return 1;
  v8 = haystack;
  if ( v5[7] )
    v8 = (const char *)v5[6];
  v9 = haystack;
  if ( v6[7] )
    v9 = (const char *)v6[6];
  return strcmp(v9, v8) != 0;
}
