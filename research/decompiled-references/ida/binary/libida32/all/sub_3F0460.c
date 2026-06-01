_BOOL8 __fastcall sub_3F0460(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  const char *v6; // rsi
  const char *v7; // rdi

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = 80 * a3, v4 = 80 * a3 + *(_QWORD *)(a1 + 40), *(_DWORD *)v4 == -1)
    || (v5 = *(_QWORD *)(a2 + 40) + v3, *(_DWORD *)v5 == -1) )
  {
    if ( !under_debugger )
      interr(1936);
    BUG();
  }
  v6 = haystack;
  if ( *(_QWORD *)(v5 + 40) )
  {
    v6 = *(const char **)(v5 + 32);
    v7 = haystack;
    if ( !*(_QWORD *)(v4 + 40) )
      return strcmp(v7, v6) != 0;
    goto LABEL_7;
  }
  v7 = haystack;
  if ( *(_QWORD *)(v4 + 40) )
LABEL_7:
    v7 = *(const char **)(v4 + 32);
  return strcmp(v7, v6) != 0;
}

