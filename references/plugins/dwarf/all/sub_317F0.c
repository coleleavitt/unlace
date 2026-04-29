char **__fastcall sub_317F0(char *s1)
{
  const char **v1; // rbp
  int i; // ebx

  v1 = (const char **)&off_C81A0;
  for ( i = 0; i != 34; ++i )
  {
    if ( !strcmp(s1, *v1) )
      return &(&off_C81A0)[2 * i];
    v1 += 2;
  }
  return nullptr;
}
