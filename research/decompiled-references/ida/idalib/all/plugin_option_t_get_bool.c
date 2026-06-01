__int64 __fastcall plugin_option_t_get_bool(__int64 a1, bool *a2, const char *a3, bool a4)
{
  const char *v4; // r13
  const char *v6; // r12
  int v7; // ebx

  v4 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v4 = *(const char **)a1;
  if ( !strcmp(v4, a3) )
  {
    if ( *(_QWORD *)(a1 + 32) <= 1u )
    {
      if ( !a2 )
        return 1;
    }
    else
    {
      v6 = *(const char **)(a1 + 24);
      v7 = *(unsigned __int8 *)v6 - 111;
      if ( *v6 != 111
        || (v7 = *((unsigned __int8 *)v6 + 1) - 110, v6[1] != 110)
        || (v7 = *((unsigned __int8 *)v6 + 2), v6[2]) )
      {
        if ( strcmp(v6, "off") )
          sub_378C70((__int64)"Wrong %s value: %s, expected: on/off", v4, v6);
      }
      a4 = v7 == 0;
      if ( !a2 )
        return 1;
    }
    *a2 = a4;
    return 1;
  }
  return 0;
}
