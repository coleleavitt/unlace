_BOOL8 __fastcall sub_4034F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  const char *v6; // rsi
  const char *v7; // rdi

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = 88 * a3, v4 = (_QWORD *)(88 * a3 + *(_QWORD *)(a1 + 40)), *v4 == -1)
    || (v5 = (_QWORD *)(*(_QWORD *)(a2 + 40) + v3), *v5 == -1) )
  {
    if ( !under_debugger )
      interr(1936);
    BUG();
  }
  v6 = haystack;
  if ( v5[6] )
  {
    v6 = (const char *)v5[5];
    v7 = haystack;
    if ( !v4[6] )
      return strcmp(v7, v6) != 0;
    goto LABEL_7;
  }
  v7 = haystack;
  if ( v4[6] )
LABEL_7:
    v7 = (const char *)v4[5];
  return strcmp(v7, v6) != 0;
}
