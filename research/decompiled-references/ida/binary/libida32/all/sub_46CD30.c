_BOOL8 __fastcall sub_46CD30(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // rsi
  const char *v7; // rdi

  if ( a3 >= *(_QWORD *)(a1 + 48)
    || (v3 = 32 * a3, v4 = v3 + *(_QWORD *)(a1 + 40), !*(_BYTE *)(v4 + 24))
    || (v5 = *(_QWORD *)(a2 + 40) + v3, !*(_BYTE *)(v5 + 24)) )
  {
    if ( !under_debugger )
      interr(1936);
    BUG();
  }
  v6 = haystack;
  if ( *(_QWORD *)(v5 + 8) )
  {
    v6 = *(const char **)v5;
    v7 = haystack;
    if ( !*(_QWORD *)(v4 + 8) )
      return strcmp(v7, v6) != 0;
    goto LABEL_7;
  }
  v7 = haystack;
  if ( *(_QWORD *)(v4 + 8) )
LABEL_7:
    v7 = *(const char **)v4;
  return strcmp(v7, v6) != 0;
}

