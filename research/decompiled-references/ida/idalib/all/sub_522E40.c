__int64 __fastcall sub_522E40(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  const char **v5; // r12
  const char **v6; // rbx
  const char *v7; // rax
  const char *v8; // rsi
  const char *v9; // rdi
  __int64 *v10; // rbp

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * a3)
    || !*(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * a3) )
  {
    if ( !under_debugger )
      interr(1939);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v5 = *(const char ***)(*(_QWORD *)(a2 + 40) + 8 * a3);
  v6 = *(const char ***)(*(_QWORD *)(a1 + 40) + 8 * a3);
  v7 = v6[1];
  if ( v5[1] )
  {
    v8 = *v5;
    v9 = haystack;
    if ( !v7 )
      goto LABEL_8;
  }
  else
  {
    v8 = haystack;
    if ( !v7 )
      goto LABEL_9;
  }
  v9 = *v6;
LABEL_8:
  if ( strcmp(v9, v8) )
    sub_51F760();
LABEL_9:
  v10 = *(__int64 **)(qword_2CCB598 + 1784);
  sub_522D00((__int64)v6, (__int64)v5);
  return sub_5216C0((__int64)v6, *v10);
}
