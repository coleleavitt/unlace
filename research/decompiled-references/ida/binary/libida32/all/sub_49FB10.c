_BOOL8 __fastcall sub_49FB10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  const char *v7; // rsi
  const char *v8; // rdi

  switch_dbctx(*(int *)(a1 + 8));
  v4 = 80 * a3 + **(_QWORD **)(a2 + 40);
  v5 = **(_QWORD **)(a1 + 40) + 80 * a3;
  if ( *(_DWORD *)(v5 + 72) != *(_DWORD *)(v4 + 72) )
    return 1;
  v7 = haystack;
  if ( *(_QWORD *)(v4 + 56) )
    v7 = *(const char **)(v4 + 48);
  v8 = haystack;
  if ( *(_QWORD *)(v5 + 56) )
    v8 = *(const char **)(v5 + 48);
  return strcmp(v8, v7) != 0;
}

