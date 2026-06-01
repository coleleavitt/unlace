__int64 __fastcall lex_get_file_line(__int64 a1, _DWORD *a2, const char **a3, int a4)
{
  const char *v5; // rsi
  int v6; // esi
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rcx

  v5 = haystack;
  if ( *(_QWORD *)(a1 + 320) )
    v5 = *(const char **)(a1 + 312);
  if ( a4 <= 0 )
  {
    v8 = *(_DWORD *)(a1 + 304);
    v9 = *(_QWORD *)(a1 + 296);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 272) - a4;
    if ( v6 < 0 )
      return 0;
    v7 = *(_QWORD *)(a1 + 264) + 40LL * (unsigned int)v6;
    v5 = "#include ...";
    v8 = *(_DWORD *)(v7 + 32);
    v9 = *(_QWORD *)v7;
  }
  if ( a2 )
    *a2 = v8;
  if ( a3 )
    *a3 = v5;
  return v9;
}

