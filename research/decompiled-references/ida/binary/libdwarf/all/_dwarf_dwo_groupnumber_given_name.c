int __fastcall dwarf_dwo_groupnumber_given_name(char *s1, _DWORD *a2)
{
  const char *v3; // rsi
  char **i; // rbx
  int result; // eax

  v3 = off_B8A60[0];
  if ( !off_B8A60[0] )
    return -1;
  for ( i = off_B8A60; ; ++i )
  {
    result = strcmp(s1, v3);
    if ( !result )
      break;
    v3 = i[1];
    if ( !v3 )
      return -1;
  }
  *a2 = 2;
  return result;
}

