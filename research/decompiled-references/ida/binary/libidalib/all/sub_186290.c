__int64 __fastcall sub_186290(char *s2, char a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  const char *v9; // rdi

  v2 = (__int64 *)qword_2566B0;
  v3 = (__int64 *)(qword_2566B0 + 8 * xmmword_2566B8);
  if ( v3 == (__int64 *)qword_2566B0 )
    return 0;
  v4 = *(_QWORD *)qword_2566B0;
  if ( a2 )
  {
    while ( s2 )
    {
      v6 = strlen(s2);
      if ( !v6 )
        break;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v4 + 392);
        if ( v7 )
          break;
        if ( v3 == ++v2 )
          return 0;
        v4 = *v2;
        v6 = strlen(s2);
        if ( !v6 )
          return v4;
      }
      if ( v7 - 1 >= v6 && !strncmp(*(const char **)(v4 + 384), s2, v6) )
        break;
      if ( v3 == ++v2 )
        return 0;
      v4 = *v2;
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v4 + 392) ? *(const char **)(v4 + 384) : s1;
      if ( !strcmp(v9, s2) )
        break;
      if ( v3 == ++v2 )
        return 0;
      v4 = *v2;
    }
  }
  return v4;
}

