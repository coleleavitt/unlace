__int64 __fastcall sub_BF800(char *s2, char a2)
{
  size_t v2; // rax
  size_t v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r13
  const char *v6; // rbx
  char v7; // al
  const char *v9; // rbx
  const char *v10; // rax
  __int64 debugger_plugins; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-48h]

  debugger_plugins = get_debugger_plugins();
  v2 = strlen(s2);
  if ( debugger_plugins )
  {
    v12 = 0;
    v3 = v2;
    v4 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = 16 * v4;
        v6 = (const char *)qbasename();
        if ( !strncasecmp(v6, s2, v3) )
        {
          v7 = v6[v3];
          if ( (v7 == 95 || !v7) && a2 == (*(_BYTE *)(*(_QWORD *)(v5 + v13 + 8) + 32LL) & 1) )
            break;
        }
        if ( debugger_plugins == ++v4 )
          return v12;
      }
      if ( v12 )
        break;
      v12 = v5 + v13;
      if ( debugger_plugins == ++v4 )
        return v12;
    }
    v9 = (const char *)qbasename();
    v10 = (const char *)qbasename();
    sub_92200((__int64)"Ambiguous debugger name '%s' (found %s and %s)", s2, v10, v9);
  }
  return 0;
}

