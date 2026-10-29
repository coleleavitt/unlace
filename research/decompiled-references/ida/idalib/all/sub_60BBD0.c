__int64 __fastcall sub_60BBD0(char *s)
{
  char v1; // bl
  const char *v2; // rbp

  v1 = *s;
  if ( !*s )
    return 0;
  while ( 1 )
  {
    while ( v1 == 58 )
      v1 = *++s;
    v2 = s;
    s = strchr(s, 58);
    if ( !s )
      s = (char *)&v2[strlen(v2)];
    if ( v1 == 36 && s - v2 == 33 )
      break;
    v1 = *s;
    if ( !*s )
      return 0;
  }
  return 1;
}
