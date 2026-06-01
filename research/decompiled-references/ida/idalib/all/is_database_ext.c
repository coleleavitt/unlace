bool __fastcall is_database_ext(char *s1)
{
  const char *v2; // rax
  const char *v3; // rax

  if ( !s1 )
    return 0;
  if ( !strcasecmp(s1, "ida") )
    return 1;
  if ( !strcasecmp(s1, "idb") )
    return 1;
  if ( !strcasecmp(s1, "i64") )
    return 1;
  v2 = (const char *)sub_72B5B0(0);
  if ( !strcasecmp(s1, v2) )
    return 1;
  v3 = (const char *)sub_72B5B0(1);
  return strcasecmp(s1, v3) == 0;
}
